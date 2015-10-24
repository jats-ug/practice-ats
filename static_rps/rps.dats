staload "rps.sats"

implement{}
print_rps (x) = let val s = case x of
  | r_rps => "Rock"
//  | p_rps => "Paper"
//  | s_rps => "Scissors"
in
  print_string s
end
