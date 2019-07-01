all: a.out

a.out: main.c
	gcc $(OPT) -o $@ $<

run: all ../random.img
	@echo "===" `pwd`
	time ./a.out < ../random.img

clean:
	rm -f a.out

.PHONY: all run clean
