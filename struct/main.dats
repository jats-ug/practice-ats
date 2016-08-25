#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

typedef union_c2ats_anon_4147 = $extype_struct"union { char __size[4]; int __mul[2][3]; int __align; int __zero[0]; }" of {
  __size = @[char][4],
  __mul = @[@[int][3]][2],
  __align = int,
  __zero = @[int][0]
}

%{^
struct foo;
struct bar {
  int a;
  struct foo *p;
};
struct foo {
  int b;
  struct bar *p;
};
%}

absvt@ype struct_foo
vtypedef struct_bar = $extype_struct"struct bar" of {
  a = int,
  p = [l:addr] (struct_foo@l | ptr l)
}
vtypedef struct_foo_impl = $extype_struct"struct foo" of {
  a = int,
  p = [l:addr] (struct_bar@l | ptr l)
}
assume struct_foo = struct_foo_impl

implement main0 () = {
  var foo: struct_foo
  var bar: struct_bar
//  val () = foo.p := (view@bar | addr@bar)
//  val () = bar.p := (view@foo | addr@foo)
  val () = println! (foo.p)
  val () = println! (bar.p)
//  val () = println! (foo.a)
//  val () = println! (bar.a)
  var buz: @{ a = int, b = ptr }
  val () = buz.a := 1
}
