PATSCC=$(PATSHOME)/bin/patscc
PATSOPT=$(PATSHOME)/bin/patsopt

all: a.out

a.out: main.dats gen.sats gen_tmpl.dats
	$(PATSCC) -o $@ $< -DATS_MEMALLOC_LIBC

clean:
	rm -f *~ *_?ats.o *_?ats.c *.out
