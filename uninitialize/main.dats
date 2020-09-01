#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

fun void_fun (i: int): void = {
}

implement main0 () = {
  var x: int
  val () = void_fun(x)
}
