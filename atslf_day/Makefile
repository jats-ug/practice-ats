PATSCC=$(PATSHOME)/bin/patscc
PATSOPT=$(PATSHOME)/bin/patsopt

all: main.dats
	$(PATSOPT) -tc -d $<

clean:
	rm -f *~ *_?ats.o *_?ats.c
