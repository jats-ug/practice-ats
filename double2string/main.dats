#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

%{^
#include <assert.h>

char *double2string(double x) {
#define DECIMAL        8
#define DECIMAL_FORMAT "%.8e"
#define DECIMAL_LEN    DECIMAL+2+5
  char *s = malloc(DECIMAL_LEN+1);
  assert(NULL != s);
  memset(s, 0, DECIMAL_LEN+1);

  snprintf(s, DECIMAL_LEN, DECIMAL_FORMAT, x);
  return s;
}
%}

extern fun double2string (x: double): strptr = "mac#"

implement main0 () = {
  val s = double2string 1234567890.1234567890
  val () = println! s
  val () = free s
}
