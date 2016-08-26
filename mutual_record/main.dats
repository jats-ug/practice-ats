#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"

(* Error: the static identifier [bar] is unrecognized.
vtypedef foo = @{ x= int, p= [l:addr] (bar@l | ptr(l)) }
and      bar = @{ x= int, p= [l:addr] (foo@l | ptr(l)) }
*)
vtypedef foo = @{ x= int, p= [l:addr] ptr(l) }
vtypedef bar = @{ x= int, p= [l:addr] (foo@l | ptr(l)) }

implement main0 () = {
  var vfoo : foo
  var vbar : bar
  val () = vfoo.x := 0
  val () = vfoo.p := addr@vbar
  val () = vbar.x := 1
  val () = vbar.p := addr@vfoo
//  val () = println! vfoo.p->x // I would like to write like this!
  val () = println! vfoo.p
  val () = println! vbar.p->x
}
