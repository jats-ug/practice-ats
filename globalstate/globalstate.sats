absvtype
macaddr = ptr

typedef
macaddr_struct = @[int][6]

absvtype
macaddr_minus_struct (l:addr)

castfn
macaddr_takeout_struct
(
  dat: !macaddr >> macaddr_minus_struct (l)
) : #[l:addr] (macaddr_struct @ l | ptr l)

praxi
macaddr_addback_struct {l:addr}
(
  pf:  macaddr_struct @ l
| dat: !macaddr_minus_struct (l) >> macaddr
) : void
