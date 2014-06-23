#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"
staload "globalstate.sats"

var macaddr_dat: macaddr_struct

implement
main0 () = {
  val pdat = $UN.castvwtp0{macaddr}(addr@macaddr_dat)
  val (pf | p) = macaddr_takeout_struct (pdat)
  val () = p->[0] := 1
  val () = p->[1] := 2
  val () = p->[2] := 3
  val () = p->[3] := 4
  val () = p->[4] := 5
  val () = p->[5] := 6
  prval () = macaddr_addback_struct (pf | pdat)
  prval () = $UN.castvwtp0 (pdat)

  val pdat = $UN.castvwtp0{macaddr}(addr@macaddr_dat)
  val (pf | p) = macaddr_takeout_struct (pdat)
  val () = println! ("macaddr = ", p->[0], p->[1], p->[2], p->[3], p->[4], p->[5])
  prval () = macaddr_addback_struct (pf | pdat)
  prval () = $UN.castvwtp0 (pdat)
}
