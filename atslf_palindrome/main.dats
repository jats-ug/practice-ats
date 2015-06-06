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
  | {x:int}{l,ll:ilist} PALcons (ilist_cons (x, ll)) of (PAL (l), SNOC (l, x, ll))

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
prfn pal_rev {l:ilist} (pf: PAL (l)): REVERSE (l, l) = let
  prfun lemma {l,lr:ilist} .<l>. (pf: PAL (l)): REVERSE (l, l) =
    case+ pf of
    | PALnil () => REVAPPnil ()
    | PALone () => REVAPPcons (REVAPPnil ())
    | PALcons (pf, pfsnoc) => lemma (pf)
in
  lemma (pf)
end
