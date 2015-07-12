#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "libats/SATS/ilist_prf.sats"
staload "libats/SATS/gfarray.sats"
staload _ = "libats/DATS/gfarray.dats"
staload UN = "prelude/SATS/unsafe.sats"

local
  #define N 16
  var _global_arr: @[int][N]?
in
  fun arr_takeout (): [l:addr][xs:ilist] (LENGTH (xs, N), gfarray_v (int, l, xs) | ptr l) = let
    extern castfn cast_takeout {l:addr} (ptr l):
      [xs:ilist] (LENGTH (xs, N), gfarray_v (int, l, xs) | ptr l)
  in
    cast_takeout addr@_global_arr
  end
  fun arr_addback {l:addr}{xs:ilist} (pfarr: gfarray_v (int, l, xs) | addr: ptr l): void = let
    extern castfn cast_addback {l:addr}{xs:ilist} (pfarr: gfarray_v (int, l, xs) | addr: ptr l): void
  in
    cast_addback (pfarr | addr)
  end
end

implement main0 () = {
  val (pflen, pfarr | arr) = arr_takeout ()
  prval nth0 = NTHbas ()
  val v = gfarray_get_at (nth0, pfarr | arr, i2sz 0)
//  val () = arr_addback (pfarr | arr)
}
