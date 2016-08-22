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
  p = [l:addr] ptr(l)
}
typedef struct_bar_impl = $extype_struct"struct bar" of {
  a = int,
  p = [l:addr] ptr(l)
}
assume struct_foo = struct_foo_impl
assume struct_bar = struct_bar_impl
extern castfn takeout_struct_foo_ptr {l:agz} (p: ptr(l)): struct_foo_ptr(l)
extern castfn addback_struct_foo_ptr {l:agz} (x: struct_foo_ptr(l)): void
extern castfn takeout_struct_foo {l:agz} (p: !struct_foo_ptr(l)): (struct_foo_impl@l | ptr(l))
extern castfn addback_struct_foo {l:agz} (pf: struct_foo_impl@l | addr: ptr(l)): void
extern castfn takeout_struct_bar_ptr {l:agz} (p: ptr(l)): struct_bar_ptr(l)
extern castfn addback_struct_bar_ptr {l:agz} (x: struct_bar_ptr(l)): void
extern castfn takeout_struct_bar {l:agz} (p: !struct_bar_ptr(l)): (struct_bar_impl@l | ptr(l))
extern castfn addback_struct_bar {l:agz} (pf: struct_bar_impl@l | addr: ptr(l)): void

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
overload .b with struct_foo_get_b
overload .b with struct_foo_set_b

// struct foo#p
fun{} struct_foo_get_p {l1:agz} (x: !struct_foo_ptr(l1)): [l2:addr] ptr(l2) = ret where {
  val (pf | p) = takeout_struct_foo (x)
  val ret = p->p
  val () = addback_struct_foo (pf | p)
}
fun{} struct_foo_set_p {l1,l2:agz} (x: !struct_foo_ptr(l1), v: ptr(l2)): void = {
  val (pf | p) = takeout_struct_foo (x)
  val () = p->p := v
  val () = addback_struct_foo (pf | p)
}
overload .p with struct_foo_get_p
overload .p with struct_foo_set_p

// struct bar#a
fun{} struct_bar_get_a {l:agz} (x: !struct_bar_ptr(l)): int = ret where {
  val (pf | p) = takeout_struct_bar (x)
  val ret = p->a
  val () = addback_struct_bar (pf | p)
}
fun{} struct_bar_set_a {l:agz} (x: !struct_bar_ptr(l), v: int): void = {
  val (pf | p) = takeout_struct_bar (x)
  val () = p->a := v
  val () = addback_struct_bar (pf | p)
}
overload .a with struct_bar_get_a
overload .a with struct_bar_set_a

// struct bar#p
fun{} struct_bar_get_p {l1:agz} (x: !struct_bar_ptr(l1)): [l2:addr] ptr(l2) = ret where {
  val (pf | p) = takeout_struct_bar (x)
  val ret = p->p
  val () = addback_struct_bar (pf | p)
}
fun{} struct_bar_set_p {l1,l2:agz} (x: !struct_bar_ptr(l1), v: ptr(l2)): void = {
  val (pf | p) = takeout_struct_bar (x)
  val () = p->p := v
  val () = addback_struct_bar (pf | p)
}
overload .p with struct_bar_get_p
overload .p with struct_bar_set_p

// Should be user code
fun print_foobar {l:agz} (foo: !struct_foo_ptr(l)): void = {
  val b = foo.b()
  val p = foo.p()
  val () = println! ("foo: b=", b, " p=", p)
  val () = if (p > the_null_ptr) then {
    val bar_ptr = takeout_struct_bar_ptr p
    val () = print_bar bar_ptr
    val () = addback_struct_bar_ptr bar_ptr
  }
}
and print_bar {l:agz} (bar: !struct_bar_ptr(l)): void = {
  val a = bar.a()
  val p = bar.p()
  val () = println! ("bar: a=", a, " p=", p)
  val () = if (p > the_null_ptr) then {
    val foo_ptr = takeout_struct_foo_ptr p
    val () = print_foo foo_ptr
    val () = addback_struct_foo_ptr foo_ptr
  }
}
and print_foo {l:agz} (foo: !struct_foo_ptr(l)): void = {
  val b = foo.b()
  val p = foo.p()
  val () = println! ("foo: b=", b, " p=", p)
}

implement main0 () = {
  var foo: struct_foo
  var bar: struct_bar
  val () = println! ("foo addr = ", addr@foo)
  val () = println! ("bar addr = ", addr@bar)

  // Setup
  val foo_ptr = takeout_struct_foo_ptr (addr@foo)
  val bar_ptr = takeout_struct_bar_ptr (addr@bar)
//  val () = foo_ptr.b := 9 // error(3): the type [S2Eapp(S2Ecst(struct_foo_ptr); S2Evar(foo(8452)))] is expected to be a tyrec(record).
  val () = struct_foo_set_b (foo_ptr, 10)
  val () = struct_foo_set_p (foo_ptr, addr@bar)
  val () = struct_bar_set_a (bar_ptr, 20)
  val () = struct_bar_set_p (bar_ptr, addr@foo)
  val () = addback_struct_foo_ptr foo_ptr
  val () = addback_struct_bar_ptr bar_ptr

  // Show
  val foo_ptr = takeout_struct_foo_ptr (addr@foo)
  val () = print_foobar foo_ptr
  val () = addback_struct_foo_ptr foo_ptr
}
