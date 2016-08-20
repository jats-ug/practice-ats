#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

exception UndefindExn of ()
macdef undefind() = $raise UndefindExn()

fun unimpl_fun {i:int} (i: int(i)): int(i+1) =
  undefind()

implement main0 () = {
  val r = unimpl_fun 9
  val () = println! r
}
