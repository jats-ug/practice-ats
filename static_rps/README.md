# Rock-paper-scissors library

## Purpose

To learn statics and proofs on ATS language.

## How to use

```ats
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
```

The `rps_win_p` and `rps_win_s` function returns a value that wins the argument.
The `rps_even_p` and `rps_even_s` function returns a value that is even between the arguments.
ATS language prove these functions, with proof function and static function.

## Question

* Can't use static function instead of proofs? => Yes, can use it as statics function.

## Discussions

* How to identify dynamic value such like bool? https://groups.google.com/forum/#!topic/ats-lang-users/iM6S1KBlQF0
* Rock-paper-scissors library to learn statics and proofs on ATS language https://groups.google.com/forum/#!topic/ats-lang-users/YcdEzhJdJzs
