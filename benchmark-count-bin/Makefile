SUBDIRS := C/ ATS2-recursion/ FILEref_streamize_char/

all run clean: random.img
	$(foreach i,$(SUBDIRS),$(MAKE) -C $i $@ &&) true

setup:
	dd if=/dev/urandom of=random.img bs=1M count=1024

distclean: clean
	rm -rf random.img

.PHONY: setup all run clean distclean
