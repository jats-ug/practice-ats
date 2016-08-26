#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"

(* Error: the static identifier [bar] is unrecognized.
vtypedef foo = @{ x= int, p= [l:addr] (bar@l | ptr(l)) }
and      bar = @{ x= int, p= [l:addr] (foo@l | ptr(l)) }
*)
vtypedef foo = @{ x= int, p= [l:addr] ptr(l) }
vtypedef bar = @{ x= int, p= [l:addr] (foo@l | ptr(l)) }

fun print_foo {l:addr} (pf: !foo@l | p: ptr(l)): void = {
  val () = println! ("foo.x = ", p->x)
//  val () = println! ("bar.x = ", p->p->x)
}

fun print_foo' {l1,l2:addr} (pffoo: !(@{ x= int, p= ptr(l2) })@l1, pfbar: !bar@l2 | p: ptr(l1)): void = {
  val () = println! ("foo.x = ", p->x)
  val () = println! ("bar.x = ", p->p->x)
}

fun print_bar {l:addr} (pf: !bar@l | p: ptr(l)): void = {
  val () = println! ("bar.x = ", p->x)
//  val () = print_int (p->p->x) // Error: the dynamic expression cannot be assigned the type [S2Eapp(S2Ecst(g0int_t0ype); S2Eextkind(atstype_int))].
}

implement main0 () = {
  // Init
  var vfoo : foo
  var vbar : bar
  val () = vfoo.x := 0
  val () = vfoo.p := addr@vbar
  val () = vbar.x := 1
  val () = vbar.p := addr@vfoo

  // Access
  val () = println! vfoo.p->x // Why I can do that?
  val () = println! vbar.p->x

  // Print
  val () = print_foo (view@vfoo | addr@vfoo)
}
