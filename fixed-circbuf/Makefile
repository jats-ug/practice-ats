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

all::

all:: circbuf
circbuf: circbuf.dats circbuf.sats; \
  $(PATSCC) -D_GNU_SOURCE $(CFLAGS) -o $@ $<
regress:: circbuf ; ./circbuf

######

RMF=rm -f

######

clean:: ; $(RMF) *~
clean:: ; $(RMF) *_?ats.o
clean:: ; $(RMF) *_?ats.c
clean:: ; $(RMF) circbuf

###### end of [Makefile] ######
