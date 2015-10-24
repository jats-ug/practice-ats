datasort rps_s =
  | r_rps_s // Rock
  | p_rps_s // Paper
  | s_rps_s // Scissors

dataprop RPS_WIN (rps_s, rps_s) =
  | RPS_P_WIN_R (p_rps_s, r_rps_s) // Paper win Rock
  | RPS_S_WIN_P (s_rps_s, p_rps_s) // Scissors win Paper
  | RPS_R_WIN_S (r_rps_s, s_rps_s) // Rock win Scissors

datatype rps_t (rps_s) =
  | r_rps_t (r_rps_s) // Rock
  | p_rps_t (p_rps_s) // Paper
  | s_rps_t (s_rps_s) // Scissors
typedef rps_t = [x:rps_s] rps_t (x)

fun{} rps_win
  {r1:rps_s} (x: rps_t (r1)):
  [r2:rps_s] (RPS_WIN (r2, r1) | rps_t (r2))

fun{} print_rps (x: rps_t): void
overload print with print_rps
