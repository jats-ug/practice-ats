staload "libats/SATS/ilist_prf.sats"
staload "libats/SATS/gflist.sats"
staload "libats/SATS/gflist_vt.sats"

(*
Inductive pal {X : Type} : list X -> Prop :=
  | pal_nil : pal []
  | pal_one : forall x, pal [x]
  | pal_cons : forall x l, pal l -> pal (cons x (snoc l x)).
*)
dataprop PAL (ilist) =
  | PALnil (ilist_nil)
  | {x:int} PALone (ilist_sing (x))
  | {x:int}{l,ll:ilist} PALcons (ilist_cons (x, ll)) of (PAL (l), SNOC (l, x, ll))

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

fun{a:t@ype} pal_sing
  {x:int} (x: stamped_vt (a, x)): (PAL (ilist_sing(x)) | gflist_vt (a, ilist_sing(x)))
