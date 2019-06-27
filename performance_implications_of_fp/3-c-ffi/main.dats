#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

%{
int sum(int n) {
    int i, sum = 0;
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
%}

extern
fn sum(intGte(0)) :<> intGte(0) =
  "mac#"

implement main0 () =
  assertloc (sum(800000000) = 267879424)
