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

viewdef ptr_v_1 (a:t@ype, l:addr) = a @ l
dataview ptr_v_2 (a:t@ype+, l0: addr, l1: addr) =
  | ptr_v_2_cons(a, l0, l1) of (ptr l1 @ l0, ptr_v_1 (a, l1))
dataview ptr_v_3 (a:t@ype+, l0:addr, l1:addr, l2:addr) =
  | ptr_v_3_cons(a, l0, l1, l2) of (ptr l1 @ l0, ptr_v_2 (a, l1, l2))

(*
extern int scandir (const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (const struct dirent *),
      int (*__cmp) (const struct dirent **, const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
*)
extern fun fun_c2ats_scandir:
{l1,l2,l2_1,l2_2:addr} (ptr_v_1(char, l1), ptr_v_3(struct_c2ats_dirent, l2, l2_1, l2_2) |
ptr l1, ptr l2,
{l1:addr} (ptr_v_1(struct_c2ats_dirent, l1) | ptr l1) -> int,
{l1,l1_1,l2,l2_1:addr} (ptr_v_2(struct_c2ats_dirent, l1, l1_1), ptr_v_2(struct_c2ats_dirent, l2, l2_1) | ptr l1, ptr l2) -> int)
-> int = "mac#scandir"

implement main0 () = {
}
