all: a.out

a.out: main.dats
	patscc -o $@ $< -DATS_MEMALLOC_LIBC

run: all
	@echo "===" `pwd`
	time ./a.out

clean:
	rm -f a.out *_dats.c

.PHONY: all run clean