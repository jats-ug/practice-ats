#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "rps.sats"
staload _ = "rps.dats"

fun win (x: rps): rps = r_rps // xxx

implement main0 () = {
  val w = win r_rps
  val () = println! w
}
