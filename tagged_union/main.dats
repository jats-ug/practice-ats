#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

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

datatype sockaddr =
| Af_inet of sockaddr_in
| Af_inet6 of sockaddr_in6

vtypedef wg_endpoint = @{
  e_remote = sockaddr
}

extern praxi uninitize {a:t0ype} (x: &INV(a) >> a?): void

fun wg_input
{l1,l2:addr}
(pfe: !wg_endpoint? @ l1 >> wg_endpoint @ l1, pfso: !sockaddr@l2 | e: ptr l1, so: ptr l2):
void = let
    val () = !e.e_remote := !so
  in
    ()
  end

implement main0 () = {
  var e: wg_endpoint
  var so: sockaddr = Af_inet @{
    sin_port = 1,
    sin_addr = 2,
    sin_zero = 3
  }
  var so6: sockaddr = Af_inet6 @{
    sin6_port = 1,
    sin6_flowinfo = 2,
    sin6_addr = 3,
    sin6_scope_id = 4
  }

  prval pre = view@e
  prval prso = view@so
  val () = wg_input(pre, prso | addr@e, addr@so)
  prval () = view@e := pre
  prval () = view@so := prso

  prval () = uninitize(e)

  prval pre = view@e
  prval prso6 = view@so6
  val () = wg_input(pre, prso6 | addr@e, addr@so6)
  prval () = view@e := pre
  prval () = view@so6 := prso6
}
