#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"

vtypedef foo = @{ x= int, p= ptr }
vtypedef bar = @{ x= int, p= ptr }

fun init_foobar {l1,l2:agz} (pffoo: !foo? @ l1 >> foo @ l1,
                             pfbar: !bar? @ l2 >> bar @ l2 |
                             pfoo: ptr l1, pbar: ptr l2): void = {
  val () = pfoo->x := 10
  val () = pfoo->p := pbar // danger!
  val () = pbar->x := 20
  val () = pbar->p := pfoo // danger!
}

fun print_foobar {l:addr} (pf: !foo@l | p: ptr(l)): void = {
  val () = println! ("foo.x = ", p->x)
}

implement main0 () = {
  // Init
  var vfoo : foo
  var vbar : bar
  val () = init_foobar (view@vfoo, view@vbar | addr@vfoo, addr@vbar)
  val () = print_foobar (view@vfoo | addr@vfoo)
}
