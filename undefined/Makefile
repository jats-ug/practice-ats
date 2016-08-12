PATSCC=$(PATSHOME)/bin/patscc
PATSOPT=$(PATSHOME)/bin/patsopt

all: a.out

a.out: main.dats
	$(PATSCC) -Wno-int-conversion -Wno-return-local-addr -o $@ $< -DATS_MEMALLOC_LIBC

clean:
	rm -f *~ *_?ats.o *_?ats.c *.out
