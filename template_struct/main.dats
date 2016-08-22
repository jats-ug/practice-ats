#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"

%{^
struct bar;
struct foo {
  int b;
  struct bar *p;
};
struct bar {
  int a;
  struct foo *p;
};
%}

// Should be semi-automatically generated code
absvtype struct_foo_ptr(l:addr) = ptr(l)
absvtype struct_bar_ptr(l:addr) = ptr(l)
abst@ype struct_foo
abst@ype struct_bar
typedef struct_foo_impl = $extype_struct"struct foo" of {
  b = int,
  p = ptr
}
typedef struct_bar_impl = $extype_struct"struct bar" of {
  a = int,
  p = ptr
}
assume struct_foo = struct_foo_impl
assume struct_bar = struct_bar_impl
extern castfn takeout_struct_foo_ptr {l:agz} (p: ptr(l)): struct_foo_ptr(l)
extern castfn addback_struct_foo_ptr {l:agz} (x: struct_foo_ptr(l)): void
extern castfn takeout_struct_foo {l:agz} (p: !struct_foo_ptr(l)): (struct_foo_impl@l | ptr(l))
extern castfn addback_struct_foo {l:agz} (pf: struct_foo_impl@l | addr: ptr(l)): void

// struct foo#b
fun{} struct_foo_get_b {l:agz} (x: !struct_foo_ptr(l)): int = ret where {
  val (pf | p) = takeout_struct_foo (x)
  val ret = p->b
  val () = addback_struct_foo (pf | p)
}
fun{} struct_foo_set_b {l:agz} (x: !struct_foo_ptr(l), v: int): void = {
  val (pf | p) = takeout_struct_foo (x)
  val () = p->b := v
  val () = addback_struct_foo (pf | p)
}
overload .a with struct_foo_get_b
overload .a with struct_foo_set_b

// struct foo#p
fun{} struct_foo_get_p {l:agz} (x: !struct_foo_ptr(l)): ptr = ret where {
  val (pf | p) = takeout_struct_foo (x)
  val ret = p->p
  val () = addback_struct_foo (pf | p)
}
fun{} struct_foo_set_p {l:agz} (x: !struct_foo_ptr(l), v: ptr): void = {
  val (pf | p) = takeout_struct_foo (x)
  val () = p->p := v
  val () = addback_struct_foo (pf | p)
}
overload .struct_foo_p with struct_foo_get_p
overload .struct_foo_p with struct_foo_set_p

// Should be user code
fun print_foo {l:agz} (x: !struct_foo_ptr(l)): void = {
  val a = x.a()
  val () = println! ("foo: a=", a, " p=xxx")
}

implement main0 () = {
  var foo: struct_foo
  var bar: struct_bar
  val () = println! ("foo addr = ", addr@foo)
  val () = println! ("bar addr = ", addr@bar)
  // Setup
  val foo_ptr = takeout_struct_foo_ptr (addr@foo)
//  val () = foo_ptr.a := 9 // error(3): the type [S2Eapp(S2Ecst(struct_foo_ptr); S2Evar(foo(8436)))] is expected to be a tyrec(record).
  val () = struct_foo_set_b (foo_ptr, 9)
  val () = struct_foo_set_p (foo_ptr, addr@bar)
  val () = addback_struct_foo_ptr foo_ptr
  // Show
  val foo_ptr = takeout_struct_foo_ptr (addr@foo)
  val () = print_foo foo_ptr
  val () = addback_struct_foo_ptr foo_ptr
}
