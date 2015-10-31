PATSCC=$(PATSHOME)/bin/patscc
PATSOPT=$(PATSHOME)/bin/patsopt

all: ats.out c.out

c.out: main.c
	gcc -o $@ $<

ats.out: main.dats
	$(PATSCC) -o $@ $< -DATS_MEMALLOC_LIBC

clean:
	rm -f *~ *_?ats.o *_?ats.c *.out
