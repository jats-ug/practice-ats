# Rock-paper-scissors library

## Purpose

To learn statics and proofs on ATS language.

## How to use

```ats
implement main0 () = {
  val paper = p_rps_t()
  val (pf_win | win) = rps_win (paper)
  val () = println! (win, " win ", paper, ".") // => Scissors win Paper.
  val (_, _ | even) = rps_even (pf_win | win, paper)
  val () = println! (even, " even between ", win, " and ", paper, ".") // => Rock even between Scissors and Paper.
}
```

The `rps_win` function returns a value that wins the argument.
The `rps_even` function returns a value that evens between the arguments.
ATS language prove these functions.

## Question

* Can't use static function instead of proofs?

## Discussion

* How to identify dynamic value such like bool? https://groups.google.com/forum/#!topic/ats-lang-users/iM6S1KBlQF0
