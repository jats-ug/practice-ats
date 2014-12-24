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

all:: testtemp
testtemp: testtemp.dats; \
  $(PATSCC) -D_GNU_SOURCE $(CFLAGS) -o $@ $<
regress:: testtemp ; ./testtemp

######

RMF=rm -f

######

clean:: ; $(RMF) *~
clean:: ; $(RMF) *_?ats.o
clean:: ; $(RMF) *_?ats.c
clean:: ; $(RMF) testtemp

###### end of [Makefile] ######
