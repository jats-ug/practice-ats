##
##
## A simple Makefile for compiling ATS programs
##
##

######

PATSCC=$(PATSHOME)/bin/patscc
PATSOPT=$(PATSHOME)/bin/patsopt

######

CFLAGS=-O2

######

PROGNAME=globalstate-simple

all::

all:: $(PROGNAME)
$(PROGNAME): $(PROGNAME).dats; \
  $(PATSCC) -D_GNU_SOURCE $(CFLAGS) -o $@ $<
regress:: $(PROGNAME) ; ./$(PROGNAME)

######

RMF=rm -f

######

clean:: ; $(RMF) *~
clean:: ; $(RMF) *_?ats.o
clean:: ; $(RMF) *_?ats.c
clean:: ; $(RMF) $(PROGNAME)

###### end of [Makefile] ######
