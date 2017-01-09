#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

%{^
void fun_c (void *p) {
  return;
}
%}

extern fun fun_c: {l:addr} (!int@l>>char@l | ptr l) -> void = "mac#fun_c"
extern fun fun_c2: {l:addr} (!char@l>>int@l | ptr l) -> void = "mac#fun_c"

implement main0 () = {
  var i = 0x12345678:int
  val p = addr@i
  prval vi = view@i
  val () = fun_c (vi | p)
  val c:char = !p
  val () = println! c
  val () = fun_c2 (vi | p)
  prval () = view@i := vi
}
