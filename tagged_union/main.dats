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

vtypedef wg_endpoint = [i:int] @{
  e_remote = sockaddr(i)
}

fun wg_input {l1,l2:addr}{i:int} (pfe: !wg_endpoint@l1, pfso: !sockaddr(i)@l2 | e: ptr l1, so: ptr l2): void = let
    val so = scase i of
      | AF_INET => so
      | AF_INET6 => so
      | _ => null
    val () = !e.e_remote := so
  in
    ()
  end

implement main0 () = {
  var e: wg_endpoint
}
