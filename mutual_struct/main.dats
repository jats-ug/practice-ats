#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"

%{^
struct foo;
struct bar {
  int x;
  struct foo *p;
};
struct foo {
  int x;
  struct bar *p;
};
%}

(* Error: the static identifier [foo] is unrecognized.
vtypedef bar = $extype_struct"struct bar" of {
  x = int,
  p = [l:addr] (foo@l | ptr(l))
}
and foo = $extype_struct"struct foo" of {
  x = int,
  p = [l:addr] (bar@l | ptr(l))
}
*)
vtypedef bar = $extype_struct"struct bar" of {
  x = int,
  p = [l:addr] ptr(l)
}
vtypedef foo = $extype_struct"struct foo" of {
  x = int,
  p = [l:addr] (bar@l | ptr(l))
}

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
