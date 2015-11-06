datasort rps_s =
  | r_rps_s // Rock
  | p_rps_s // Paper
  | s_rps_s // Scissors

datatype rps_t (rps_s) =
  | r_rps_t (r_rps_s) // Rock
  | p_rps_t (p_rps_s) // Paper
  | s_rps_t (s_rps_s) // Scissors
typedef rps_t_any = [x:rps_s] rps_t (x)

fun{} print_rps (x: rps_t_any): void
overload print with print_rps

(* Dynamics *)
fun{} rps_win_d (x: rps_t_any): rps_t_any
fun{} rps_even_d (x: rps_t_any, y: rps_t_any): rps_t_any // The x should win the y.

(* Statics *)
stacst rps_win_sta: (rps_s, rps_s) -> bool

fun{} rps_win_s
  {r1:rps_s} (x: rps_t (r1)):
  [r2:rps_s | rps_win_sta (r2, r1)] (rps_t (r2))

fun{} rps_even_s
  {r1,r2:rps_s | rps_win_sta (r1, r2)} (x: rps_t (r1), y: rps_t (r2)):
  [r3:rps_s | rps_win_sta (r3, r1)] (rps_t (r3))

(* Proofs *)
dataprop RPS_WIN (rps_s, rps_s) =
  | RPS_P_WIN_R (p_rps_s, r_rps_s) // Spec: Paper wins Rock
  | RPS_S_WIN_P (s_rps_s, p_rps_s) // Spec: Scissors win Paper
  | RPS_R_WIN_S (r_rps_s, s_rps_s) // Spec: Rock wins Scissors

praxi rps_even_pf
  {r1,r2,r3:rps_s} (pf1: RPS_WIN (r1,r2), pf2: RPS_WIN (r2,r3)):
  (RPS_WIN (r3,r1))

fun{} rps_win_p
  {r1:rps_s} (x: rps_t (r1)):
  [r2:rps_s] (RPS_WIN (r2, r1) | rps_t (r2))

fun{} rps_even_p
  {r1,r2:rps_s} (pf_xy: RPS_WIN (r1, r2) | x: rps_t (r1), y: rps_t (r2)):
  [r3:rps_s] (RPS_WIN (r2, r3), RPS_WIN (r3, r1) | rps_t (r3))
