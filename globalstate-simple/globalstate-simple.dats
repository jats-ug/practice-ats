#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"
staload "globalstate-simple.sats"

var gstate_dat: gstate_struct

implement
main0 () = {
  val (pf | p) = gstate_takeout_struct (addr@gstate_dat)
  val () = p->[0] := 1
  val () = p->[1] := 2
  val () = p->[2] := 3
  val () = p->[3] := 4
  val () = p->[4] := 5
  val () = p->[5] := 6
  prval () = gstate_addback_struct (pf)
}
