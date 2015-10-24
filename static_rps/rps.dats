staload "rps.sats"

implement{}
print_rps (x) = let val s = case+ x of
  | r_rps_t() => "Rock"
  | p_rps_t() => "Paper"
  | s_rps_t() => "Scissors"
in
  print_string s
end
