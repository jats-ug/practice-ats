staload "rps.sats"

implement{}
rps_win (x) = case+ x of
  | r_rps_t() => (RPS_P_WIN_R() | p_rps_t())
  | p_rps_t() => (RPS_S_WIN_P() | s_rps_t())
  | s_rps_t() => (RPS_R_WIN_S() | r_rps_t())

implement{}
rps_even (pf_xy | x, y) = let
  val (pf_zx | z) = rps_win x
  prval pf_yz = rps_even_pf (pf_zx, pf_xy)
in
  (pf_yz, pf_zx | z)
end

implement{}
print_rps (x) = let val s = case+ x of
  | r_rps_t() => "Rock"
  | p_rps_t() => "Paper"
  | s_rps_t() => "Scissors"
in
  print_string s
end
