(* See https://groups.google.com/g/ats-lang-users/c/xoIHAYGBzdQ *)
#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

%{^
#define atstyarr_field_undef(fname) fname[]
%} // end of [%{]

#define MAXPATHLEN 1024

typedef kld_file_stat = @{ version = int, name = @[char][MAXPATHLEN] }

fun kern_kldstat {l:addr} (pf: !kld_file_stat @ l | p: ptr l): int = 0 where {
  val () = !p.name.[0] := 'A'
}

implement main0 () = {
}
