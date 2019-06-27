# Performance Implications of FP in ATS with large number

Copry from http://blog.vmchale.com/article/ats-performance .

## Conclusion

Tail recursion in ATS is faster than for loop in C.

## Result

* 1-recursion: 0.63 sec
* 2-recursion-call-by-reference: 0.63 sec
* 3-c-ffi: 1.20 sec
* 4-for-loop: 0.64 sec
* 5-recursion-stack-allocated-variable: 0.63 sec
* 6-linear-streams: 65.13 sec
* 7-hylomorphism: SEGV

## Log

```
$ pwd
/home/kiwamu/src/practice-ats/performance_implications_of_fp
$ grep "model name" /proc/cpuinfo | head -1
model name      : Intel(R) Core(TM) i5-2520M CPU @ 2.50GHz
$ gcc --version | head -1
gcc (Debian 8.3.0-7) 8.3.0
$ patsopt --version
ATS/Postiats version 0.4.0 with Copyright (c) 2011-2018 Hongwei Xi
$ make run
make -C 1-recursion/ run && make -C 2-recursion-call-by-reference/ run && make -C 3-c-ffi/ run && make -C 4-for-loop/ run && make -C 5-recursion-stack-allocated-variable/ run && make -C 6-linear-streams/ run && true
make[1]: Entering directory '/home/kiwamu/src/practice-ats/performance_implications_of_fp/1-recursion'
=== /home/kiwamu/src/practice-ats/performance_implications_of_fp/1-recursion
time ./a.out
-1973237248
0.63user 0.00system 0:00.64elapsed 100%CPU (0avgtext+0avgdata 1288maxresident)k
0inputs+0outputs (0major+71minor)pagefaults 0swaps
make[1]: Leaving directory '/home/kiwamu/src/practice-ats/performance_implications_of_fp/1-recursion'
make[1]: Entering directory '/home/kiwamu/src/practice-ats/performance_implications_of_fp/2-recursion-call-by-reference'
=== /home/kiwamu/src/practice-ats/performance_implications_of_fp/2-recursion-call-by-reference
time ./a.out
-1973237248
0.63user 0.00system 0:00.64elapsed 99%CPU (0avgtext+0avgdata 1392maxresident)k
0inputs+0outputs (0major+73minor)pagefaults 0swaps
make[1]: Leaving directory '/home/kiwamu/src/practice-ats/performance_implications_of_fp/2-recursion-call-by-reference'
make[1]: Entering directory '/home/kiwamu/src/practice-ats/performance_implications_of_fp/3-c-ffi'
=== /home/kiwamu/src/practice-ats/performance_implications_of_fp/3-c-ffi
time ./a.out
-1973237248
1.20user 0.00system 0:01.20elapsed 100%CPU (0avgtext+0avgdata 1312maxresident)k
0inputs+0outputs (0major+76minor)pagefaults 0swaps
make[1]: Leaving directory '/home/kiwamu/src/practice-ats/performance_implications_of_fp/3-c-ffi'
make[1]: Entering directory '/home/kiwamu/src/practice-ats/performance_implications_of_fp/4-for-loop'
=== /home/kiwamu/src/practice-ats/performance_implications_of_fp/4-for-loop
time ./a.out
-1973237248
0.64user 0.00system 0:00.64elapsed 100%CPU (0avgtext+0avgdata 1392maxresident)k
0inputs+0outputs (0major+74minor)pagefaults 0swaps
make[1]: Leaving directory '/home/kiwamu/src/practice-ats/performance_implications_of_fp/4-for-loop'
make[1]: Entering directory '/home/kiwamu/src/practice-ats/performance_implications_of_fp/5-recursion-stack-allocated-variable'
=== /home/kiwamu/src/practice-ats/performance_implications_of_fp/5-recursion-stack-allocated-variable
time ./a.out
-1973237248
0.63user 0.00system 0:00.63elapsed 99%CPU (0avgtext+0avgdata 1392maxresident)k
0inputs+0outputs (0major+72minor)pagefaults 0swaps
make[1]: Leaving directory '/home/kiwamu/src/practice-ats/performance_implications_of_fp/5-recursion-stack-allocated-variable'
make[1]: Entering directory '/home/kiwamu/src/practice-ats/performance_implications_of_fp/6-linear-streams'
=== /home/kiwamu/src/practice-ats/performance_implications_of_fp/6-linear-streams
time ./a.out
-1973237248
65.13user 0.01system 1:05.22elapsed 99%CPU (0avgtext+0avgdata 1324maxresident)k
0inputs+8outputs (0major+71minor)pagefaults 0swaps
make[1]: Leaving directory '/home/kiwamu/src/practice-ats/performance_implications_of_fp/6-linear-streams'
```
