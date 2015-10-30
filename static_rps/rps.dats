staload "rps.sats"

implement{}
print_rps (x) = let val s = case+ x of
  | r_rps_t() => "Rock"
  | p_rps_t() => "Paper"
  | s_rps_t() => "Scissors"
in
  print_string s
end

(* Statics *)
implement{}
rps_win_s (x) = let
  prval () = rps_win_r_s_pf()
  prval () = rps_win_p_r_pf()
  prval () = rps_win_s_p_pf()
in
  case+ x of
  | r_rps_t() => p_rps_t()
  | p_rps_t() => s_rps_t()
  | s_rps_t() => r_rps_t()
end

implement{}
rps_even_s (x, y) = rps_win_s (x)

(* Proofs *)
implement{}
rps_win_p (x) = case+ x of
  | r_rps_t() => (RPS_P_WIN_R() | p_rps_t())
  | p_rps_t() => (RPS_S_WIN_P() | s_rps_t())
  | s_rps_t() => (RPS_R_WIN_S() | r_rps_t())

implement{}
rps_even_p (pf_xy | x, y) = let
  val (pf_zx | z) = rps_win_p x
  prval pf_yz = rps_even_pf (pf_zx, pf_xy)
in
  (pf_yz, pf_zx | z)
end
