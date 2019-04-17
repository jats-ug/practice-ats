#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "libats/SATS/ilist_prf.sats"
staload "libats/SATS/gfarray.sats"
staload _ = "libats/DATS/gfarray.dats"
staload UN = "prelude/SATS/unsafe.sats"

extern fun{x:t0p}
print_gfarray {n:int}{xs:ilist}{l:addr} (LENGTH(xs, n), !gfarray_v(x, l, xs) | ptr(l)): void

implement{a}
print_gfarray (pflen, pfarr | parr) = println! "hoge" // xxx

overload print with print_gfarray

implement main0 () = {
  // Init array
  #define ARRAY_SIZE 10
  var arr = @[int][ARRAY_SIZE](3, 2, 5, 4, 8, 7, 6, 9, 1, 0)
  vtypedef VT = [xs:ilist][l:addr] (LENGTH(xs, ARRAY_SIZE), gfarray_v(int, l, xs) | ptr(l))
  val (pflen, pfarr | parr) = $UN.castvwtp0{VT}(addr@arr)

  // Access array
  val () = print_gfarray (pflen, pfarr | parr)

  // Finish array
  prval () = $UN.castview0(pfarr)
}
