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
prfn pal_app {l,lr,m:ilist} (pf1: REVERSE (l, lr), pf2: APPEND (l, lr, m)): PAL (m) = let
  prfun lemma  {l,lr,m:ilist} .<l>. (pf1: REVERSE (l, lr), pf2: APPEND (l, lr, m)): PAL (m) =
    case+ pf2 of
    | APPENDnil () => let
        prval REVAPPnil () = pf1
      in
        PALnil ()
      end
    | APPENDcons (pf2) => let
        prval REVAPPcons (pf1) = pf1
      in
        lemma (pf1, pf2)
      end
in
  lemma (pf1, pf2)
end

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
