typedef
gstate_struct = @[int][6]

castfn
gstate_takeout_struct {l: addr} (p: ptr l): (gstate_struct @ l | ptr l)

praxi
gstate_addback_struct {l:addr} (pf: gstate_struct @ l): void
