SUBDIRS := FILEref_streamize_char/

setup:
	dd if=/dev/urandom of=random.img bs=1M count=1024

all run clean:
	$(foreach i,$(SUBDIRS),$(MAKE) -C $i $@ &&) true

distclean: clean
	rm -rf random.img

.PHONY: setup all run clean distclean
