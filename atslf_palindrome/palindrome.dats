staload "libats/SATS/ilist_prf.sats"
staload "libats/SATS/gflist.sats"
staload "palindrome.sats"

extern prfun
lemma2_reverse_scons {x:int}{xs:ilist}{ys1:ilist}
  (REVERSE(ilist_cons(x,xs), ys1)): [ys:ilist] (REVERSE(xs, ys), SNOC(ys, x, ys1))

extern prfun
lemma2_append_scons {x:int}{xs,ys:ilist}{ys1,zs1:ilist}
  (APPEND(xs, ys1, zs1), SNOC(ys, x, ys1)): [zs:ilist] (APPEND(xs, ys, zs), SNOC(zs, x, zs1))

primplement
pal_app {l,lr,m} (pf1, pf2) = let
  prfun lemma  {l,lr,m:ilist} .<l>. (pf1: REVERSE (l, lr), pf2: APPEND (l, lr, m)): PAL (m) =
    case+ pf2 of
    | APPENDnil () => let prval REVAPPnil () = pf1 in PALnil () end
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
pal_empty () = (PALnil () | gflist_nil ())

implement{a}
pal_sing (x) = (PALone () | gflist_cons (x, gflist_nil))

extern fun{a:t@ype}
gflist_snoc {xs:ilist}{x:int}
  (xs: gflist (a, xs), x: stamped_t (a, x)): [xsx:ilist] (SNOC (xs, x, xsx) | gflist (a, xsx))

implement{a}
gflist_snoc {xs}{x} (xs, x) = let
  fun loop {xs:ilist}{x:int} .<xs>. (xs: gflist (a, xs), x: stamped_t (a, x)):
      [xsx:ilist] (SNOC (xs, x, xsx) | gflist (a, xsx)) =
    case+ xs of
    | gflist_nil () => (SNOCnil () | gflist_cons (x, gflist_nil))
    | gflist_cons (x1, xs1) => let
      val (pfsnoc | xs2) = loop (xs1, x)
    in
      (SNOCcons pfsnoc | gflist_cons (x1, xs2))
    end
in
  loop (xs, x)
end

implement{a}
pal_append (pf | pxs, xs) = let
  fun loop {pxs,xs:ilist} .<xs>. (pf: PAL (pxs) | pxs: gflist (a, pxs), xs: gflist (a, xs)):
      [pxsx:ilist] (PAL (pxsx) | gflist (a, pxsx)) =
    case+ xs of
    | gflist_nil () => (pf | pxs)
    | gflist_cons(x, xs1) => let
      val (pfsnoc | pxs) = gflist_snoc (pxs, x)
    in
      loop (PALcons (pf, pfsnoc) | gflist_cons (x, pxs), xs1)
    end
in
  loop (pf | pxs, xs)
end

implement{a}
print_pal (_ | xs) = let
  val (_ | xs) = gflist2list xs
in
  print_list<a> xs
end
