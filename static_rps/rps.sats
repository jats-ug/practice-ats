datasort rps = (* abstract *)

stacst r_rps: rps (* Rock *)
and    p_rps: rps (* Paper *)
and    s_rps: rps (* Scissors *)

abst@ype rps (rps) = int
typedef rps = [x:rps] rps (x)

val r_rps: rps (r_rps) = "mac#"
val p_rps: rps (p_rps) = "mac#"
val s_rps: rps (s_rps) = "mac#"

%{
#define r_rps 0
#define p_rps 1
#define s_rps 2
%}

fun{} print_rps (x: rps): void
overload print with print_rps
