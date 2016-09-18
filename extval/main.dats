(*
The code is taken from:
https://groups.google.com/forum/#!topic/ats-lang-users/yCU3FHaEzm0
*)

#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"

%{^
struct foo {
  int a;
  int *p;
};
struct foo foo_var;
int int_var;
char *str_var = "Foo Bar";
%}

viewdef ptr_v_1 (a:t@ype, l:addr) = a @ l
dataview ptr_v_2 (a:t@ype+, l0: addr, l1: addr) =
  | ptr_v_2_cons(a, l0, l1) of (ptr l1 @ l0, ptr_v_1 (a, l1))
dataview ptr_v_3 (a:t@ype+, l0:addr, l1:addr, l2:addr) =
  | ptr_v_3_cons(a, l0, l1, l2) of (ptr l1 @ l0, ptr_v_2 (a, l1, l2))

typedef struct_foo = $extype_struct"struct foo" of {
  a = int,
  p = ptr
}
macdef takeout_pstruct_foo = $extval([l:addr] (struct_foo@l | ptr l), "&foo_var")
extern praxi addback_pstruct_foo {l:addr} (struct_foo@l | ptr l): void

macdef takeout_int_var = $extval([l:addr] (int@l | ptr l), "&int_var")
extern praxi addback_int_var {l:addr} (int@l | ptr l): void

macdef takeout_str_var = $extval([l1,l2:addr] (ptr_v_2(char, l1, l2) | ptr l1), "&str_var")
extern praxi addback_str_var {l1,l2:addr} (ptr_v_2(char, l1, l2) | ptr l1): void

implement main0 () = {
  // foo_var
  val (pf | pfoo) = takeout_pstruct_foo

  val () = println! pfoo->a
  val () = !pfoo.a := 1
  val () = println! pfoo->a

  var x0: int = 10

  val () = println! pfoo->p
  val () = !pfoo.p := addr@(x0)
  val () = println! pfoo->p // some addr
  val () = println! !(pfoo->p) // print 10

  prval () = addback_pstruct_foo (pf | pfoo)

  // int_var
  val (pfint | pint_var) = takeout_int_var
  val () = println! !pint_var
  val () = !pint_var := 9
  val () = println! !pint_var
  prval () = addback_int_var (pfint | pint_var)

  // str_var
  val (pfstr | pstr_var) = takeout_str_var
  val (pfat, fpfat | p) = $UN.ptr_vtake{string} pstr_var
  val () = println! !p
  prval () = fpfat pfat
  prval () = addback_str_var (pfstr | pstr_var)
}
