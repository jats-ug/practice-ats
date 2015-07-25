(* See https://github.com/githwxi/ATS-Postiats-test/blob/master/contrib/hwxi/TEST10/test14.dats *)
#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"
staload _ = "prelude/DATS/array.dats"

#define N 3

implement main0 () = {
  var arr = @[int][N](0)
  val () = arr[0] := 3
  val () = arr[1] := 2
  val () = arr[2] := 1
  implement array_quicksort$cmp<int> (x, y) = compare (x, y)
  val () = array_quicksort<int> (arr, i2sz N)
}
