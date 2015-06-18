staload "libats/SATS/ilist_prf.sats"
staload "libats/SATS/gflist.sats"
staload "libats/SATS/gflist_vt.sats"
staload "palindrome.sats"

extern
prfun
lemma2_reverse_scons
  {x:int}{xs:ilist}{ys1:ilist}
  (REVERSE(ilist_cons(x,xs), ys1)): [ys:ilist] (REVERSE(xs, ys), SNOC(ys, x, ys1))

extern
prfun
lemma2_append_scons
  {x:int}{xs,ys:ilist}{ys1,zs1:ilist}
  (APPEND(xs, ys1, zs1), SNOC(ys, x, ys1)): [zs:ilist] (APPEND(xs, ys, zs), SNOC(zs, x, zs1))

primplement pal_app {l,lr,m} (pf1, pf2) = let
  prfun lemma  {l,lr,m:ilist} .<l>. (pf1: REVERSE (l, lr), pf2: APPEND (l, lr, m)): PAL (m) =
    case+ pf2 of
    | APPENDnil () => let
        prval REVAPPnil () = pf1 in PALnil ()
      end
    | APPENDcons(pf2) => let
        prval (pfrev, pfsnoc) = lemma2_reverse_scons (pf1)
        prval (pfapp, pfsnoc2) = lemma2_append_scons (pf2, pfsnoc)
        prval pfpal = lemma (pfrev, pfapp)
      in
        PALcons (pfpal, pfsnoc2)
      end
in
  lemma (pf1, pf2)
end

implement{a}
pal_sing (x) = let
  val gfl = gflist_vt_cons (x, gflist_vt_nil)
  prval pfpal = PALone ()
in
  (pfpal | gfl)
end
