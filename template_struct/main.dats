#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"

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

absvtype struct_foo_ptr(l:addr) = ptr(l)
absvtype struct_bar_ptr(l:addr) = ptr(l)
absvt@ype struct_foo
absvt@ype struct_bar
vtypedef struct_bar_impl = $extype_struct"struct bar" of {
  a = int,
  p = ptr
}
vtypedef struct_foo_impl = $extype_struct"struct foo" of {
  a = int,
  p = ptr
}
assume struct_foo = struct_foo_impl
assume struct_bar = struct_bar_impl

extern castfn takeout_struct_foo_ptr {l:agz} (p: ptr(l)): struct_foo_ptr(l)
extern castfn addback_struct_foo_ptr {l:agz} (x: struct_foo_ptr(l)): void
fun struct_foo_get_a{l:agz} (x: !struct_foo_ptr(l)): int = 0 // xxx
overload .struct_foo_a with struct_foo_get_a

fun print_foo {l:agz} (x: !struct_foo_ptr(l)): void = {
  val a = x.struct_foo_a()
  val () = println! ("foo: a=", a, " p=xxx")
}

implement main0 () = {
  var foo: struct_foo
  var bar: struct_bar
  val foo_ptr = takeout_struct_foo_ptr (addr@foo)
  val () = print_foo foo_ptr
  val () = addback_struct_foo_ptr foo_ptr
}
