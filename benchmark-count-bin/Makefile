SUBDIRS := C/ ATS2-recursion/ FILEref_streamize_char/
OPT ?= -O2

all run clean: random.img
	$(foreach i,$(SUBDIRS),$(MAKE) -C $i $@ OPT=$(OPT) &&) true

setup:
	dd if=/dev/urandom of=random.img bs=1M count=1024

distclean: clean
	rm -rf random.img

.PHONY: setup all run clean distclean
