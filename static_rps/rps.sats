datasort rps = (* abstract *)

stacst r_rps : rps (* rock *)
and    p_rps : rps (* paper *)
and    s_rps : rps (* scissors *)

abst@ype rps (rps) = int
typedef rps = [a:rps] rps (a)

val r_rps : rps (r_rps) = "mac#"
val p_rps : rps (p_rps) = "mac#"
val s_rps : rps (s_rps) = "mac#"

%{
#define r_rps 0
#define p_rps 1
#define s_rps 2
%}
