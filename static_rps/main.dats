#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "rps.sats"
staload _ = "rps.dats"

fun win (x: rps_t): rps_t = p_rps_t() // xxx

implement main0 () = {
  val w = win (r_rps_t())
  val () = println! w
}
