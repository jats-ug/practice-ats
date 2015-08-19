#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "libats/SATS/ilist_prf.sats"
staload "libats/SATS/gfarray.sats"
staload _ = "libats/DATS/gfarray.dats"
staload UN = "prelude/SATS/unsafe.sats"

#define ARRAY_SIZE 16

implement main0 () = {
  // Init array
  var arr = @[int][ARRAY_SIZE](0)
  vtypedef VT = [xs:ilist](LENGTH(xs, ARRAY_SIZE), gfarray_v(int, arr, xs) | ptr(arr))
  val (pflen, pfarr | arr) = $UN.castvwtp0{VT}(addr@arr)
  // Access array
  prval nth0 = NTHbas ()
  prval LENGTHcons _ = pflen
  val v = gfarray_get_at (nth0, pfarr | arr, i2sz(0))
  val () = println! ("gfarray[0] = ", unstamp_t{int}(v))
  // Finish array
  prval () = $UN.castview0(pfarr)
}
