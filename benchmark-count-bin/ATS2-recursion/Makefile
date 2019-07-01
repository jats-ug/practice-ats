all: a.out

a.out: main.dats
	patscc -O2 -o $@ $< -DATS_MEMALLOC_LIBC

run: all ../random.img
	@echo "===" `pwd`
	time ./a.out < ../random.img

clean:
	rm -f a.out *_dats.c

.PHONY: all run clean
