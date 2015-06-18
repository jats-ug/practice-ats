PATSCC=$(PATSHOME)/bin/patscc
PATSOPT=$(PATSHOME)/bin/patsopt

all: main.dats
	$(PATSCC) $< -DATS_MEMALLOC_LIBC

clean:
	rm -f *~ *_?ats.o *_?ats.c a.out
