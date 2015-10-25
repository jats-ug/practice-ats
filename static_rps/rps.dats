staload "rps.sats"

implement{}
rps_win (x) = case+ x of
  | r_rps_t() => (RPS_P_WIN_R() | p_rps_t())
  | p_rps_t() => (RPS_S_WIN_P() | s_rps_t())
  | s_rps_t() => (RPS_R_WIN_S() | r_rps_t())

implement{}
rps_even (pf | x, y) = let
  val (pf_win_x | win_x) = rps_win x
in
  (pf_win_x | win_x)
end

implement{}
print_rps (x) = let val s = case+ x of
  | r_rps_t() => "Rock"
  | p_rps_t() => "Paper"
  | s_rps_t() => "Scissors"
in
  print_string s
end
