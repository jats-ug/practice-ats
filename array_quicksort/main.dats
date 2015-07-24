#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"
staload _ = "prelude/DATS/array.dats"

#define N 16

implement main0 () = {
  var arr = @[int][N]()
  val () = array_quicksort (arr, i2sz N)
}
