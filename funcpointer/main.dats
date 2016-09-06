#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

absvtype chss(s:int)

typedef vtfunc_t = (!chss(0) | ptr) -> void
typedef p0 = cPtr0(void)
typedef p1 = cPtr0(vtfunc_t)
typedef p2 = cPtr0((!chss(0) | ptr) -> void)
typedef _c2ats___compar_fn_t = cPtr0((cPtr0(void), cPtr0(void)) -> int)
typedef _c2ats___io_seek_fn = (ptr, cPtr0(int64), int) -> int

extern fun f0 ((!chss(0) | ptr) -> void): void = "mac#"

typedef struct_c2ats_dirent = $extype_struct"struct dirent" of {
  d_ino = int,
  d_off = int,
  d_reclen = int,
  d_type = uchar,
  d_name = @[char][256]
}

(*
extern int scandir (const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (const struct dirent *),
      int (*__cmp) (const struct dirent **, const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
*)
fun fun_c2ats_scandir: {l1,l2:addr} (char @ l1, cPtr0(cPtr0(struct_c2ats_dirent)) @ l2
 | ptr l1, ptr l2
, {l1:addr} (struct_c2ats_dirent @ l1 | ptr l1) -> int
, {l1,l2:addr} (cPtr0(struct_c2ats_dirent) @ l1, cPtr0(struct_c2ats_dirent) @ l2 | ptr l1, ptr l2) -> int
) -> int = "mac#scandir"

implement main0 () = {
}
