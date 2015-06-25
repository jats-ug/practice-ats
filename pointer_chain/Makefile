PATSCC=$(PATSHOME)/bin/patscc
PATSOPT=$(PATSHOME)/bin/patsopt

all: main.dats dentry.c dentry.h
	$(PATSCC) main.dats dentry.c

clean:
	rm -f *~ *_?ats.o *_?ats.c a.out
