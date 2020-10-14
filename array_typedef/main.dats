(* See https://groups.google.com/g/ats-lang-users/c/xoIHAYGBzdQ *)
#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

#define FIELD0_SIZE 100
#define FIELD1_SIZE 200
%{^
#define FIELD0_SIZE 100
#define FIELD1_SIZE 200

struct kld_file_stat {
  int version;
  char name[FIELD0_SIZE];
  int refs;
  char test[FIELD1_SIZE];
};

%} // end of [%{]


typedef kld_file_stat = $extype_struct"struct kld_file_stat" of
{ version = int
, name = @[char][FIELD0_SIZE]
, refs = int
, test = @[char][FIELD1_SIZE]
}

fun kern_kldstat {l:addr} (pf: !kld_file_stat @ l | p: ptr l): int = 0 where {
  val () = !p.name.[0] := 'A'
  val () = !p.refs := 1
  val () = !p.test.[0] := 'B'
  // val () = !p.test.[FIELD0_SIZE] := 'B' // Causes compile error
  // val () = !p.test.[FIELD1_SIZE] := 'B' // Causes compile error
}

implement main0 () = {
}