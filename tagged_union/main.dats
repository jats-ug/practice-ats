#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

#define	AF_INET		2		/* internetwork: UDP, TCP, etc. */
#define	AF_INET6	28		/* IPv6 */

typedef sockaddr_in = @{
  sin_port = int,
  sin_addr = int,
  sin_zero = int
}

typedef sockaddr_in6 = @{
  sin6_port = int,
  sin6_flowinfo = int,
  sin6_addr = int,
  sin6_scope_id = int
}

datavtype sockaddr (sa_family: int) =
| Af_inet (AF_INET) of sockaddr_in
| Af_inet6 (AF_INET6) of sockaddr_in6

vtypedef wg_endpoint (sa_family: int) = @{
  e_remote = sockaddr sa_samily
}

fun wg_input {l:addr}{i:int} (pf: wg_endpoint(i)@l | e: ptr l): void = let
    var so: sockaddr(AF_INET6)
    val () = !e.e_remote := so
  in
    ()
  end

implement main0 () = {
  var e: wg_endpoint(AF_INET6)
}
