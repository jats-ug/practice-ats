#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

fun unimpl_fun {i:int} (i: int(i)): int(i+1) =
  undefined()

implement main0 () = {
  val r = unimpl_fun 9
  val () = println! r
}
