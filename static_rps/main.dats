#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "rps.sats"
staload _ = "rps.dats"

implement main0 () = {
  (* Proofs *)
  val paper_p = p_rps_t()
  val (pf_win | win_p) = rps_win_p (paper_p)
  val () = println! (win_p, " win ", paper_p, ".") // => Scissors win Paper.
  val (_, _ | even_p) = rps_even_p (pf_win | win_p, paper_p)
  val () = println! (even_p, " is even between ", win_p, " and ", paper_p, ".") // => Rock is even between Scissors and Paper.
  (* Statics *)
  val paper_s = p_rps_t()
  val win_s = rps_win_s (paper_s)
  val () = println! (win_s, " win ", paper_s, ".") // => Scissors win Paper.
  val even_s = rps_even_s (win_s, paper_s)
  val () = println! (even_s, " is even between ", win_s, " and ", paper_s, ".") // => Rock is even between Scissors and Paper.
}
