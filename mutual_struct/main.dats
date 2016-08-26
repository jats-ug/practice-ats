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

fun print_foo {l:addr} (pf: !foo@l | p: ptr(l)): void = {
  val () = println! ("foo.x = ", p->x)
//  val () = println! ("bar.x = ", p->p->x)
}

fun print_bar {l:addr} (pf: !bar@l | p: ptr(l)): void = {
  val () = println! ("bar.x = ", p->x)
//  val () = print_int (p->p->x) // Error: dereference cannot be performed: the proof search for view located at [S2Evar(l$7692(13508))] failed to turn up a result.
}

implement main0 () = {
  // Init
  var vfoo : foo
  var vbar : bar
  var pbar = addr@vbar
  val () = vfoo.x := 0
  val () = vfoo.p := addr@vbar
  val () = vbar.x := 1
  val () = vbar.p := addr@vfoo

  // Access
  val () = println! vfoo.p->x // Why I can do that?
  val () = println! vbar.p->x

  // Print
//  val () = print_foo (view@vfoo | addr@vfoo) // the dynamic expression cannot be assigned the type [S2Eat(S2Etyrec(fltext(struct foo); npf=-1; x=S2Ecst(int), p=S2Eexi(l$7699(13515); ; S2Etyrec(flt0; npf=1; 0=S2Eapp(S2Ecst(@); S2Ecst(bar), S2Evar(l$7699(13515))), 1=S2Eapp(S2Ecst(ptr); S2Evar(l$7699(13515)))))), S2EVar(4704))].
}
