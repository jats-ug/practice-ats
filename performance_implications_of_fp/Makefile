SUBDIRS := 1-recursion/ 2-recursion-call-by-reference/ 3-c-ffi/ 4-for-loop/ 5-recursion-stack-allocated-variable/ 6-linear-streams/ 7-hylomorphism/

all run clean:
	$(foreach i,$(SUBDIRS),$(MAKE) -C $i $@ &&) true

.PHONY: all run clean
