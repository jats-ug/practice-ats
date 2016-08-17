#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

absvtype chss(s:int)

typedef vtfunc_t = (!chss(0) | ptr) -> void
typedef p0 = cPtr0(void)
typedef p1 = cPtr0(vtfunc_t)
typedef p2 = cPtr0((!chss(0) | ptr) -> void)

extern fun f0 ((!chss(0) | ptr) -> void): void = "mac#"

implement main0 () = {
}
