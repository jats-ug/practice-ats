#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload UN = "prelude/SATS/unsafe.sats"

typedef f_statfs = ptr -> int

vtypedef super_operations_t = $extype_struct"struct super_operations" of {
  statfs= f_statfs
}
vtypedef super_block_t = $extype_struct"struct super_block" of {
  s_op= {l:addr}(super_operations_t@l | ptr(l))
}
vtypedef dentry_t = $extype_struct"struct dentry" of {
  d_sb= {l:addr}(super_block_t@l | ptr(l))
}

extern fun get_dentry_p (): [l:addr] (dentry_t@l | ptr(l)) = "mac#"
extern fun get_dentry_p_null (): [l:addr] (dentry_t@l | ptr(l)) = "mac#"

implement main0 () = {
  val (pfdentry | dentry) = get_dentry_p ()
  val (pfsb | sb) = dentry->d_sb
  val (pfsop | sop) = sb->s_op
  val _ = sop->statfs dentry
  val _ = $UN.castvwtp0{ptr}((pfsop | sop))
  val _ = $UN.castvwtp0{ptr}((pfsb | sb))
  val _ = $UN.castvwtp0{ptr}((pfdentry | dentry))
}
