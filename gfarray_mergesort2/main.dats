#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "libats/SATS/ilist_prf.sats"
staload "libats/SATS/gfarray.sats"
staload _ = "libats/DATS/gfarray.dats"
staload UN = "prelude/SATS/unsafe.sats"

fun{x:t0p}
print_gfarray(): void = ()

overload print with print_gfarray

#define ARRAY_SIZE 10

implement main0 () = {
  // Init array
  var arr = @[int][ARRAY_SIZE](3, 2, 5, 4, 8, 7, 6, 9, 1, 0)
  vtypedef VT = [xs:ilist] (LENGTH(xs, ARRAY_SIZE), gfarray_v(int, arr, xs) | ptr(arr))
  val [xs:ilist] (pflen, pfarr | parr) = $UN.castvwtp0{VT}(addr@arr)

  // Access array

  // Finish array
  prval () = $UN.castview0(pfarr)
}
