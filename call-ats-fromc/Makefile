PROG       = call-ats-fromc
PATSCC     = $(PATSHOME)/bin/patscc
PATSOPT    = $(PATSHOME)/bin/patsopt
CFLAGS     = -O2 -I$(PATSHOME) -I$(PATSHOME)/ccomp/runtime
CLEANFILES = $(PROG) atsfunc_dats.c

all: $(PROG)

$(PROG): main.c atsfunc_dats.c
	gcc -D_GNU_SOURCE $(CFLAGS) -o $@ $^

atsfunc_dats.c: atsfunc.dats
	$(PATSOPT) -o $@ -d $<

clean:
	rm -f $(CLEANFILES)
