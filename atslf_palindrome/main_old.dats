(*
Inductive list (X:Type) : Type :=
  | nil : list X
  | cons : X -> list X -> list X.
*)
datasort List =
  | Nil of ()
  | Cons of (int, List)

dataprop
List_Eq (List, List) =
  | List_Eq_nil (Nil, Nil)
  | {x:int} {xs1,xs2:List}
    List_Eq_cons (Cons (x, xs1), Cons (x, xs2)) of (List_Eq (xs1, xs2))

(*
Fixpoint app (X : Type) (l1 l2 : list X)
                : (list X) :=
  match l1 with
  | nil      => l2
  | cons h t => cons X h (app X t l2)
  end.
*)
dataprop
Append (List, List, List) =
  | {ys:List} Append_nil (Nil, ys, ys) of ()
  | {x:int} {xs:List} {ys:List} {zs:List}
    Append_cons (Cons (x, xs), ys, Cons (x, zs)) of Append (xs, ys, zs)

(*
Theorem nil_app : forall X:Type, forall l:list X,
  app [] l = l.
Proof.
  intros.
  reflexivity.
Qed.
*)
prfn nil_append {l:List} (): Append (Nil, l, l)
  = Append_nil ()

(*
Fixpoint snoc (X:Type) (l:list X) (v:X) : (list X) :=
  match l with
  | nil      => cons X v (nil X)
  | cons h t => cons X h (snoc X t v)
  end.
*)
dataprop Snoc (List, int, List) =
  | {x:int} Snoc_nil (Nil, x, Cons (x, Nil))
  | {x0:int}{xs1:List}{x:int}{xs2:List}
    Snoc_cons (Cons (x0, xs1), x, Cons (x0, xs2)) of Snoc (xs1, x, xs2)

(*
Fixpoint rev (X:Type) (l:list X) : list X :=
  match l with
  | nil      => nil X
  | cons h t => snoc X (rev X t) h
  end.
*)
dataprop Reverse_append (List, List, List) =
  | {ys:List} Reverse_append_nil (Nil, ys, ys) of ()
  | {x:int} {xs:List} {ys:List} {zs:List}
    Reverse_append_cons (Cons (x, xs), ys, zs) of Reverse_append (xs, Cons (x, ys), zs)

propdef Reverse (xs: List, ys: List) = Reverse_append (xs, Nil, ys)

(*
Theorem rev_snoc : forall X : Type,
                   forall v : X,
                   forall s : list X,
  rev (snoc s v) = v :: (rev s).
Proof.
  intros.
  induction s; try reflexivity.
    simpl.
    rewrite IHs.
    reflexivity.
Qed.
*)
extern prfn rev_snoc {v:int}{xs,xss,xsr,xssr,xsrc:List} (pf1: Snoc (xs, v, xss), pf2: Reverse (xs, xsr), pf3: Reverse (xss, xssr), pf4: Cons (xsr, xsrc)): List_Eq (xssr, xsrc)

////
Theorem rev_involutive : forall X : Type, forall l : list X,
  rev (rev l) = l.
Proof.
  intros.
  induction l; try reflexivity.
  simpl.
  rewrite rev_snoc.
  rewrite IHl.
  reflexivity.
Qed.

Theorem snoc_with_append : forall X : Type,
                           forall l1 l2 : list X,
                           forall v : X,
  snoc (l1 ++ l2) v = l1 ++ (snoc l2 v).
Proof.
  intros.
  induction l1; try reflexivity.
    simpl.
    rewrite IHl1.
    reflexivity.
Qed.
