#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

%{^
int c_plus(int a, int b) {
	return a + b;
}
%}

extern fun c_plus: (int, int) -> int = "mac#"

implement main0() = {
  val r = c_plus(1, 2)
  val () = println!(r)
}
