#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "gen.sats"
staload _ = "gen_tmpl.dats"

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
