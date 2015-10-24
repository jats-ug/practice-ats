datasort rps_s = r_rps_s | p_rps_s | s_rps_s
datatype rps_t(rps_s) = r_rps_t(r_rps_s) | p_rps_t(p_rps_s) | s_rps_t(s_rps_s)
typedef rps_t = [x: rps_s] rps_t (x)

fun{} print_rps (x: rps_t): void
overload print with print_rps
