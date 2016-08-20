#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

%{^
struct foo {
  int a;
  int *p;
};
struct foo foo_var;
%}

absvt@ype struct_foo
vtypedef struct_foo_impl = $extype_struct"struct foo" of {
  a = int,
  p = [l:addr] (int@l | ptr l)
}
assume struct_foo = struct_foo_impl
macdef takeout_struct_foo = $extval(struct_foo, "foo_var")
extern praxi addback_struct_foo (struct_foo): void

implement main0 () = {
  val foo = takeout_struct_foo
//  val () = foo.a := 1 // error(3): a non-proof component is replaced of the type[S2Ecst(int)].
  val () = println! foo.a
//  val () = println! foo.p // error(3): the symbol [print] cannot be resolved as no match is found.
  prval () = addback_struct_foo foo
}
