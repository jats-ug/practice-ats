#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "libats/SATS/ilist_prf.sats"
staload "libats/SATS/gfarray.sats"
staload _ = "libats/DATS/gfarray.dats"
staload UN = "prelude/SATS/unsafe.sats"

local
  #define N 16
  absvtype arr = ptr
  absvtype arr_minus (l:addr)
  var arr: @[int][N]?
in
  fun arr_takeout (): [l:addr] (@[int][N] @ l | ptr l) = let
    extern castfn cast_takeout {l:addr} (ptr l): (@[int][N] @ l | ptr l)
  in
    cast_takeout addr@arr
  end
  fun arr_addback {l:addr} (pfat: @[int][N] @ l | addr: ptr l): void = let
    extern castfn cast_addback {l:addr} (pfat: @[int][N] @ l | addr: ptr l): void
  in
    cast_addback (pfat | addr)
  end
end

extern prfun
array2gfarray_v
  {a:vt@ype}{l:addr}{n:nat}
  (pf: array_v (a, l, n)): [xs:ilist] gfarray_v (a, l, xs)

extern prfun
consume_gfarray_v
  {a:vt@ype}{l:addr}{xs:ilist}
  (pf: gfarray_v (a, l, xs)): void

implement main0 () = {
  val (pfat | arr) = arr_takeout ()
//  prval pfgfarr = array2gfarray_v pfat
//  prval () = consume_gfarray_v pfgfarr
  val () = arr_addback (pfat | arr)
}
