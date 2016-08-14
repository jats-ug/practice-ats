#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

fun double {l1,l2:addr} (pf1: !ptr(l1)@l2, pf2: !int@l1 | pp: ptr l2): void = {
  val () = println! (!(!pp))
}

implement main0 () = {
  var i: int = 9
  var p = addr@i
  var pp = addr@p
  prval pfat = view@i
  prval ppfat = view@p
  val () = double (ppfat, pfat | pp)
  prval () = view@p := ppfat
  prval () = view@i := pfat
}
