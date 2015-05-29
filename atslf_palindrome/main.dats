staload "libats/SATS/ilist_prf.sats"

(*
Inductive pal {X : Type} : list X -> Prop :=
  | pal_nil : pal []
  | pal_one : forall x, pal [x]
  | pal_cons : forall x l, pal l -> pal (cons x (snoc l x)).
*)
dataprop PAL (ilist) =
  | PALnil (ilist_nil)
  | {x:int} PALone (ilist_sing (x))
  | {x:int}{l,ll,lll:ilist} PALcons (ilist_cons (x, ll)) of (PAL (l), SNOC (l, x, ll))

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


(*
Theorem pal_rev : forall (X : Type) (l : list X),
  pal l -> l = rev l.
Proof.
  intros.
  induction H; simpl; try reflexivity.
    rewrite rev_snoc.
    rewrite <- IHpal.
    reflexivity.
Qed.
*)
