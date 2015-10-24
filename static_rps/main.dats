#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "rps.sats"
staload _ = "rps.dats"

implement main0 () = {
  val (_ | w) = rps_win (r_rps_t())
  val () = println! w
}
