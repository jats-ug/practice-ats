#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "gen.sats"

// Should be user code
fun init_foobar {l1,l2:agz} (pffoo: !struct_foo? @ l1 >> struct_foo @ l1,
                             pfbar: !struct_bar? @ l2 >> struct_bar @ l2 |
                             pfoo: ptr l1, pbar: ptr l2): void = {
  val () = pfoo->b := 10
  val () = pfoo->p := pbar // danger!
  val () = pbar->a := 20
  val () = pbar->p := pfoo // danger!
}

fun print_foobar {l:agz} (pffoo: !struct_foo @ l | pfoo: ptr l): void = {
  val (pfbar, fpfbar | pbar) = take_struct_foo_p (pffoo | pfoo)
  val () = if pbar > 0 then print_bar (pfbar | pbar)
  prval () = fpfbar pfbar
}
and print_bar {l:agz} (pfbar: !struct_bar @ l | pbar: ptr l): void = {
  val (pffoo, fpffoo | pfoo) = take_struct_bar_p (pfbar | pbar)
  val () = println! ("bar a=", pbar->a, " p=", pbar->p)
  val () = if pfoo > 0 then print_foo (pffoo | pfoo)
  prval () = fpffoo pffoo
}
and print_foo {l:agz} (pffoo: !struct_foo @ l | pfoo: ptr l): void = {
  val (pfbar, fpfbar | pbar) = take_struct_foo_p (pffoo | pfoo)
  val () = println! ("foo b=", pfoo->b, " p=", pfoo->p)
  prval () = fpfbar pfbar
}

implement main0 () = {
  var foo: struct_foo
  var bar: struct_bar
  val () = init_foobar (view@foo, view@bar | addr@foo, addr@bar)
  val () = print_foobar (view@foo | addr@foo)
}
