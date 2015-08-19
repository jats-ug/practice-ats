#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "libats/SATS/ilist_prf.sats"
staload "libats/SATS/gfarray.sats"
staload _ = "libats/DATS/gfarray.dats"
staload UN = "prelude/SATS/unsafe.sats"

#define ARRAY_SIZE 16

extern fun{a:vt0p}
gfarray_mergesort
  {xs1:ilist}{xs2:ilist}{n:int}{l:addr}
(
  LENGTH(xs1, n)
, !gfarray_v(a, l, xs1) >> gfarray_v(a, l, xs2)
| p: ptr(l), s: size_t n
) : #[xs2:ilist] (SORT(xs1, xs2) | (*void*))

extern fun{a:vt0p}
gfarray_mergesort$cmp
  {x1,x2:int}
  (x1: &stamped_vt (a, x1), x2: &stamped_vt (a, x2)): int(sgn(x1-x2))

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
