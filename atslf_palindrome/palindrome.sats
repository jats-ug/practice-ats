staload "libats/SATS/ilist_prf.sats"
staload "libats/SATS/gflist.sats"

(*
Inductive pal {X : Type} : list X -> Prop :=
  | pal_nil : pal []
  | pal_one : forall x, pal [x]
  | pal_cons : forall x l, pal l -> pal (cons x (snoc l x)).
*)
dataprop PAL (ilist) =
  | PALnil (ilist_nil) of ()
  | {x:int} PALone (ilist_sing (x)) of ()
  | {x:int}{l,ll:ilist} PALcons (ilist_cons (x, ll)) of (PAL (l), SNOC (l, x, ll))

dataprop PAPPEND (ilist, ilist, ilist) =
  | {pxs:ilist} PAPPENDnil (pxs, ilist_nil, pxs) of PAL (pxs)
  | {pxs,pxsx,ys,pzs:ilist}{x:int} PAPPENDcons (pxs, ilist_cons (x, ys), pzs) of
     (SNOC (pxs, x, pxsx), PAPPEND (ilist_cons (x, pxsx), ys, pzs))

(*
Theorem pal_app : forall (X : Type) (l : list X),
  pal (l ++ rev l).
Proof.
  intros.
  induction l; simpl.
    apply pal_nil.

    rewrite <- snoc_with_append.
    apply pal_cons.
    apply IHl.
Qed.
*)
prfun pal_app {l,lr,m:ilist} (pf1: REVERSE (l, lr), pf2: APPEND (l, lr, m)): PAL (m)

fun{a:t@ype} pal_empty
  (): (PAL (ilist_nil) | gflist (a, ilist_nil ()))
fun{a:t@ype} pal_sing
  {x:int} (x: stamped_t (a, x)): (PAL (ilist_sing(x)) | gflist (a, ilist_sing(x)))
fun{a:t@ype} pal_pappend
  {pxs,xs:ilist} (pf: PAL (pxs) | pxs: gflist (INV(a), pxs), xs: gflist (a, xs)):
  [pxsx:ilist] (PAL (pxsx), PAPPEND (pxs, xs, pxsx) | gflist (a, pxsx))
fun{a:t@ype} print_pal
  {xs:ilist} (pf: PAL (xs) | xs: gflist (INV(a), xs)): void
