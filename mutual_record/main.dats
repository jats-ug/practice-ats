#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

(* Error: the static identifier [bar] is unrecognized.
vtypedef foo = @{ x= int, p= [l:addr] (bar@l | ptr(l)) }
and      bar = @{ x= int, p= [l:addr] (foo@l | ptr(l)) }
*)
vtypedef foo = @{ x= int, p= [l:addr] ptr(l) }
vtypedef bar = @{ x= int, p= [l:addr] (foo@l | ptr(l)) }

implement main0 () = {
}
