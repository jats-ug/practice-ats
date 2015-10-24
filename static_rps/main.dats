#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "rps.sats"

fun win (a: rps): rps = r_rps

implement main0 () = {
  val _ = win r_rps
}
