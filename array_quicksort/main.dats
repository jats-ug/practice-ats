#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"
staload _ = "prelude/DATS/array.dats"

#define N 3

implement main0 () = {
  var arr: @[int][N]
  val () = arr[0] := 5
  val () = arr[1] := 4
  val () = arr[2] := 3
  implement array_quicksort$cmp<int> (x, y) = compare (x, y)
  val () = array_quicksort<int> (arr, i2sz N)
}
