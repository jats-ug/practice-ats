#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "libats/SATS/ilist_prf.sats"
staload "libats/SATS/gfarray.sats"
staload _ = "libats/DATS/gfarray.dats"
staload UN = "prelude/SATS/unsafe.sats"

#define ARRAY_SIZE 16

absprop
UNION (
  ys1: ilist, ys2: ilist, res: ilist
) (* end of [absprop] *)

extern
prfun
union_nil1 {ys:ilist} (): UNION (ilist_nil, ys, ys)
extern
prfun
union_nil2 {ys:ilist} (): UNION (ys, ilist_nil, ys)

extern prfun
lemma_perm
  {xs1,xs2:ilist}{xs:ilist}
  {ys1,ys2:ilist}{ys:ilist}
(
  APPEND (xs1, xs2, xs)
, PERMUTE (xs1, ys1), PERMUTE (xs2, ys2), UNION (ys1, ys2, ys)
) : PERMUTE (xs, ys)

extern fun{a:t0p}
gfarray_mergesort
  {l:addr}{xs1:ilist}{n:nat}
(
  pflen: LENGTH(xs1, n)
, pfarr: gfarray_v(a, l, xs1)
| p: ptr(l), n: size_t n
) : [xs2:ilist] (SORT(xs1, xs2), gfarray_v(a, l, xs2) | (*void*))

extern fun{a:t0p}
gfarray_mergesort$cmp
  {x1,x2:int}
  (x1: stamped_t (a, x1), x2: stamped_t (a, x2)): int(sgn(x1-x2))

// xxx Instead of "half"?
extern
fun halfsize{n:nat}
  (n: size_t n):<> [n2:nat | n2 < n; 2*n2 <= n] size_t (n2)

extern
prfun sort_nilsing
  {xs:ilist}{n:nat | n <= 1} (pf: LENGTH (xs, n)): SORT (xs, xs)

// xxx Not yet
extern prfun
gfarray_v_split_ord
  {a:vt0p}
  {l:addr}
  {xs:ilist}
  {n:int}
  {i:nat | i <= n}
(
  pflen: LENGTH (xs, n)
, pford: ISORD (xs)
, pfarr: gfarray_v (a, l, xs)
) : [xs1,xs2:ilist]
(
  LENGTH (xs1, i)
, LENGTH (xs2, n-i)
, ISORD (xs1)
, ISORD (xs2)
, APPEND (xs1, xs2, xs)
, gfarray_v (a, l, xs1)
, gfarray_v (a, l+i*sizeof(a), xs2)
)

// xxx Not yet
extern fun{a:t0p}
findindex
  {l:addr}{x:int}{xs:ilist}{n:nat}
(
  pflen: LENGTH (xs, n)
, pford: ISORD (xs)
, pfarr: !gfarray_v (a, l, xs)
| p: ptr(l), n: size_t n, v: stamped_t (a, x)
) : [n2:nat | n2 <= n] size_t (n2)

// xxx Not yet
extern fun{a:t0p}
swap
  {l:addr}{xs1,xs2:ilist}{n1,n2:nat}
(
  pflen_xs1: LENGTH (xs1, n1)
, pflen_xs2: LENGTH (xs2, n2)
, pfarr1: gfarray_v (a, l, xs1)
, pfarr2: gfarray_v (a, l+n1*sizeof(a), xs2)
| p1: ptr(l), p2: ptr(l+n1*sizeof(a)), n1: size_t n1, n2: size_t n2
) : (gfarray_v (a, l, xs2), gfarray_v (a, l+n2*sizeof(a), xs1) | ptr(l), ptr(l+n2*sizeof(a)))

extern fun{a:t0p}
merge
  {l:addr}{xs1,xs2:ilist}{n1,n2:nat}
(
  pflen_xs1: LENGTH (xs1, n1)
, pflen_xs2: LENGTH (xs2, n2)
, pford_xs1: ISORD (xs1)
, pford_xs2: ISORD (xs2)
, pfarr1: gfarray_v (a, l, xs1)
, pfarr2: gfarray_v (a, l+n1*sizeof(a), xs2)
| p1: ptr(l), p2: ptr(l+n1*sizeof(a)), n1: size_t n1, n2: size_t n2
) : [xs:ilist] (UNION (xs1, xs2, xs), ISORD (xs), LENGTH (xs, n1+n2), gfarray_v (a, l, xs) | (*void*))

implement{a}
findindex{l}{x}{xs}{n}
(pflen, pford, pfarr | p, n, v) = let
  fun loop
    {l:addr}{x:int}{xs:ilist}{n:nat}{i:nat | i <= n} .<n-i>. (
      pflen: LENGTH (xs, n)
    , pford: ISORD (xs)
    , pfarr: !gfarray_v (a, l, xs)
    | p: ptr(l), n: size_t n, v: stamped_t (a, x), i: size_t i
    ) : [n2:nat | n2 <= n] size_t (n2) =
    if i = n then i else let
      prval nth = lemma_length_nth {xs}{..}{i} (pflen)
      val v' = gfarray_get_at (nth, pfarr | p, i)
      val sgn = gfarray_mergesort$cmp (v, v') // xxx Why can't call with reference?
    in
      if sgn <= 0 then i else loop (pflen, pford, pfarr | p, n, v, i+1)
    end
in
  loop (pflen, pford, pfarr | p, n, v, i2sz(0))
end

implement{a}
merge{l}{xs1,xs2}{n1,n2}
(pflen_xs1, pflen_xs2, pford_xs1, pford_xs2, pfarr1, pfarr2 | p1, p2, n1, n2) =
  case+ 0 of
  | _ when n1 = 0 => let
      prval LENGTHnil () = pflen_xs1
      prval () = $UN.castview0(pfarr1)
    in
      (union_nil1 (), pford_xs2, pflen_xs2, pfarr2 | (*void*))
    end
  | _ when n2 = 0 => let
      prval LENGTHnil () = pflen_xs2
      prval () = $UN.castview0(pfarr2)
    in
      (union_nil2 (), pford_xs1, pflen_xs1, pfarr1 | (*void*))
    end
  | _ => let
      extern prfun lemma_append_isord {xs1,xs2,xs:ilist}
        (APPEND (xs1, xs2, xs), ISORD (xs1), ISORD (xs2)): ISORD (xs) // xxx Weak
      extern prfun lemma_append_union {xs,xs1,xs2:ilist}
        (APPEND (xs1, xs2, xs)): UNION (xs1, xs2, xs)
      extern prfun lemma_mix_union {xs1,xs2,xs11,xs12,xs21,xs22,xs1',xs2',xs':ilist}
        (UNION (xs11, xs12, xs1), UNION (xs21, xs22, xs2), UNION (xs11, xs21, xs1'),
         UNION (xs12, xs22, xs2'), UNION (xs1', xs2', xs')): UNION (xs1, xs2, xs')
      val [n11:int] n11 = halfsize (n1)
      prval nth12 = lemma_length_nth {xs1}{..}{n11} (pflen_xs1)
      val v12 = gfarray_get_at (nth12, pfarr1 | p1, n11)
      val [n21:int] n21 = findindex (pflen_xs2, pford_xs2, pfarr2 | p2, n2, v12)
      prval (pflen_xs11, pflen_xs12, pford_xs11, pford_xs12, pfapp_xs11_xs12, pfarr_xs11, pfarr_xs12) =
        gfarray_v_split_ord {a}{..}{..}{..}{n11} (pflen_xs1, pford_xs1, pfarr1)
      prval (pflen_xs21, pflen_xs22, pford_xs21, pford_xs22, pfapp_xs21_xs22, pfarr_xs21, pfarr_xs22) =
        gfarray_v_split_ord {a}{..}{..}{..}{n21} (pflen_xs2, pford_xs2, pfarr2)
      val p12 = ptr_add (p1, n11)
      val p22 = ptr_add (p2, n21)
      val (pfarr_xs21, pfarr_xs12 | p21, p12) =
        swap (pflen_xs12, pflen_xs21, pfarr_xs12, pfarr_xs21 | p12, p2, n1-n11, n21)
      val (pfuni1, pford1, pflen1, pfarr1 | (*void*)) =
        merge (pflen_xs11, pflen_xs21, pford_xs11, pford_xs21, pfarr_xs11, pfarr_xs21 |
               p1, p21, n11, n21)
      val (pfuni2, pford2, pflen2, pfarr2 | (*void*)) =
        merge (pflen_xs12, pflen_xs22, pford_xs12, pford_xs22, pfarr_xs12, pfarr_xs22 |
               p12, p22, n1-n11, n2-n21)
      prval (pfapp, pfarr) = gfarray_v_unsplit (pflen1, pfarr1, pfarr2)
      prval pfuni = lemma_append_union (pfapp)
      prval pfuni_xs11_xs12 = lemma_append_union (pfapp_xs11_xs12)
      prval pfuni_xs21_xs22 = lemma_append_union (pfapp_xs21_xs22)
      prval pfuni' = lemma_mix_union (pfuni_xs11_xs12, pfuni_xs21_xs22, pfuni1, pfuni2, pfuni)
      prval pford = lemma_append_isord (pfapp, pford1, pford2)
      prval pflen = lemma_append_length (pfapp, pflen1, pflen2)
    in
      (pfuni', pford, pflen, pfarr | (*void*))
    end

implement{a}
gfarray_mergesort{l}{xs}{n}
(pflen, pfarr | p, n) =
  if n >= 2 then let
    val [n2:int] n2 = halfsize (n)
    prval (pflen_xs1, pflen_xs2, pfapp_xs1_xs2, pfarr_xs1, pfarr_xs2) =
      gfarray_v_split {a}{..}{..}{..}{n2} (pflen, pfarr)
    val p2 = ptr_add (p, n2)
    val (pfsort_xs1, pfarr_xs1 | (*void*)) = gfarray_mergesort (pflen_xs1, pfarr_xs1 | p, n2)
    val (pfsort_xs2, pfarr_xs2 | (*void*)) = gfarray_mergesort (pflen_xs2, pfarr_xs2 | p2, n-n2)
    prval (pford_xs1, pfperm_xs1) = sort_elim (pfsort_xs1)
    prval (pford_xs2, pfperm_xs2) = sort_elim (pfsort_xs2)
    prval pflen_xs1 = lemma_permute_length(pfperm_xs1, pflen_xs1)
    prval pflen_xs2 = lemma_permute_length(pfperm_xs2, pflen_xs2)
    val (pfuni, pford, pflen, pfarr | (*void*)) =
      merge (pflen_xs1, pflen_xs2,pford_xs1, pford_xs2, pfarr_xs1, pfarr_xs2 | p, p2, n2, n-n2)
    prval pfperm = lemma_perm (pfapp_xs1_xs2, pfperm_xs1, pfperm_xs2, pfuni)
    prval pfsrt = sort_make (pford, pfperm)
  in
    (pfsrt, pfarr | (*void*))
  end else
    (sort_nilsing (pflen), pfarr | (*void*))

implement main0 () = {
  // Init array
  var arr = @[int][ARRAY_SIZE](0)
  vtypedef VT = [xs:ilist](LENGTH(xs, ARRAY_SIZE), gfarray_v(int, arr, xs) | ptr(arr))
  val [xs:ilist] (pflen, pfarr | arr) = $UN.castvwtp0{VT}(addr@arr)
  // Access array
  #define N 15
  prval nth = lemma_length_nth {xs}{..}{N} (pflen)
  val v = gfarray_get_at (nth, pfarr | arr, i2sz(N))
  val () = println! ("gfarray[15] = ", unstamp_t{int}(v))
  // Finish array
  prval () = $UN.castview0(pfarr)
}
