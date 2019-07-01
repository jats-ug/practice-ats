# Performance Implications of FP in ATS with large number

Copry from http://blog.vmchale.com/article/ats-performance .

## Conclusion

Simple tail recursion in ATS-Postiats is faster than stream in ATS-Temptory.
Because the stream uses `malloc`.

## Result

* C: 3.72 sec
* ATS2-recursion: 3.80 sec
* FILEref_streamize_char: 37.43 sec

## Log

```
$ pwd
/home/kiwamu/src/practice-ats/benchmark-count-bin
$ grep "model name" /proc/cpuinfo | head -1
model name      : Intel(R) Core(TM) i5-2520M CPU @ 2.50GHz
$ gcc --version | head -1
gcc (Debian 8.3.0-7) 8.3.0
$ patsopt --version
ATS/Postiats version 0.4.0 with Copyright (c) 2011-2018 Hongwei Xi
$ tempopt --version
ATS/Temptory version 0.0.0 with Copyright (c) 2011-2019 Hongwei Xi
$ make setup
$ make run
make -C C/ run OPT=-O2 && make -C ATS2-recursion/ run OPT=-O2 && make -C FILEref_streamize_char/ run OPT=-O2 && true
make[1]: Entering directory '/home/kiwamu/src/practice-ats/benchmark-count-bin/C'
gcc -g -O2 -o a.out main.c
=== /home/kiwamu/src/practice-ats/benchmark-count-bin/C
time ./a.out < ../random.img
count=1073741824
result=-536802041
3.50user 0.21system 0:03.72elapsed 99%CPU (0avgtext+0avgdata 1472maxresident)k
0inputs+0outputs (0major+76minor)pagefaults 0swaps
make[1]: Leaving directory '/home/kiwamu/src/practice-ats/benchmark-count-bin/C'
make[1]: Entering directory '/home/kiwamu/src/practice-ats/benchmark-count-bin/ATS2-recursion'
patscc -g -O2 -o a.out main.dats -DATS_MEMALLOC_LIBC
=== /home/kiwamu/src/practice-ats/benchmark-count-bin/ATS2-recursion
time ./a.out < ../random.img
count=1073741824
result=-536802041
3.53user 0.26system 0:03.80elapsed 99%CPU (0avgtext+0avgdata 1472maxresident)k
0inputs+0outputs (0major+74minor)pagefaults 0swaps
make[1]: Leaving directory '/home/kiwamu/src/practice-ats/benchmark-count-bin/ATS2-recursion'
make[1]: Entering directory '/home/kiwamu/src/practice-ats/benchmark-count-bin/FILEref_streamize_char'
tempacc -g -O2 -o a.out main.dats -DATS_MEMALLOC_LIBC
=== /home/kiwamu/src/practice-ats/benchmark-count-bin/FILEref_streamize_char
time ./a.out < ../random.img
count=1073741824
result=-534867961
37.23user 0.20system 0:37.43elapsed 99%CPU (0avgtext+0avgdata 1396maxresident)k
0inputs+0outputs (0major+74minor)pagefaults 0swaps
make[1]: Leaving directory '/home/kiwamu/src/practice-ats/benchmark-count-bin/FILEref_streamize_char'
```
