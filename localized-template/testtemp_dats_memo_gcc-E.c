# 1 "testtemp_dats_memo.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "testtemp_dats_memo.c"
# 12 "testtemp_dats_memo.c"
# 1 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_config.h" 1
# 13 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_basics.h" 1
# 127 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_basics.h"
extern
void atsruntime_raise (void *exn) ;
extern
void atsruntime_handle_uncaughtexn (void *exn0) ;
extern
void atsruntime_handle_unmatchedval (char *msg0) ;
extern
void atsruntime_handle_unmatchedarg (char *msg0) ;
# 14 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_typedefs.h" 1
# 43 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_typedefs.h"
struct atstype_struct ;



typedef void atstype_void ;
typedef void atsvoid_t0ype ;



typedef int atstype_int ;
typedef unsigned int atstype_uint ;

typedef long int atstype_lint ;
typedef unsigned long int atstype_ulint ;

typedef long long int atstype_llint ;
typedef unsigned long long int atstype_ullint ;

typedef short int atstype_sint ;
typedef unsigned short int atstype_usint ;



typedef atstype_lint atstype_ssize ;
typedef atstype_ulint atstype_size ;





typedef int atstype_bool ;



typedef unsigned char atstype_byte ;



typedef char atstype_char ;
typedef signed char atstype_schar ;
typedef unsigned char atstype_uchar ;



typedef char *atstype_string ;
typedef char *atstype_stropt ;
typedef char *atstype_strptr ;



typedef float atstype_float ;
typedef double atstype_double ;
typedef long double atstype_ldouble ;





typedef void *atstype_ptr ;
typedef void *atstype_ptrk ;



typedef void *atstype_ref ;



typedef void* atstype_boxed ;



typedef void* atstype_datconptr ;



typedef void* atstype_datcontyp ;





typedef
struct
{
  int exntag ; char *exnmsg ;
} atstype_exncon ;

typedef
atstype_exncon *atstype_exnconptr ;







typedef void* atstype_arrptr ;



typedef
struct {
  atstype_arrptr ptr ; atstype_size size ;
} atstype_arrpsz ;



typedef void* atstype_funptr ;
typedef void* atstype_cloptr ;
# 171 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_typedefs.h"
typedef
struct{char _[0X10000];} atstype_var[0] ;
# 15 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_instrset.h" 1
# 16 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_memalloc.h" 1
# 45 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_memalloc.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 324 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 3 4
typedef int wchar_t;
# 46 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_memalloc.h" 2



extern void atsruntime_mfree_undef (void *ptr) ;
extern void *atsruntime_malloc_undef (size_t bsz) ;
extern void *atsruntime_calloc_undef (size_t asz, size_t tsz) ;
extern void *atsruntime_realloc_undef (void *ptr, size_t bsz) ;
# 17 "testtemp_dats_memo.c" 2

# 1 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_memalloca.h" 1
# 45 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_memalloca.h"
extern void *alloca (size_t bsz) ;





static inline
atsvoid_t0ype
atsruntime_afree_libc
  (atstype_ptr ptr) { return ; }


static inline
atstype_ptr
atsruntime_alloca_libc
  (atstype_size bsz) { return alloca(bsz) ; }
# 19 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_exception.h" 1
# 46 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_exception.h"
# 1 "/usr/include/setjmp.h" 1 3 4
# 25 "/usr/include/setjmp.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 374 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 385 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 386 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 375 "/usr/include/features.h" 2 3 4
# 398 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 399 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/setjmp.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 30 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 31 "/usr/include/setjmp.h" 2 3 4



struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };




typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));






extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));



extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));










extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 102 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 112 "/usr/include/setjmp.h" 3 4

# 47 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_exception.h" 2
# 59 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_exception.h"
extern void *alloca (size_t bsz) ;
# 95 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_exception.h"
typedef
struct atsexnframe
{
  jmp_buf env ;
  atstype_exnconptr exn ;
  struct atsexnframe *prev ;
} atsexnframe_t ;

typedef
atsexnframe_t *atsexnframe_ptr ;
# 115 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_exception.h"
extern
atsexnframe_ptr *my_atsexnframe_getref () ;



static
inline
void my_atsexnframe_enter
(
  atsexnframe_ptr frame
, atsexnframe_ptr *framep
) {
  frame->prev = *framep ; *framep = frame ; return ;
}

static
inline
void my_atsexnframe_leave
(
  atsexnframe_ptr *framep
) {
  ; *framep = (*framep)->prev ; return ;
}
# 20 "testtemp_dats_memo.c" 2
# 29 "testtemp_dats_memo.c"
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/basics.cats" 1
# 51 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/basics.cats"
# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 302 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 338 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 390 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 434 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 464 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4

# 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));


# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4

# 824 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 913 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 943 "/usr/include/stdio.h" 3 4

# 52 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/basics.cats" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 124 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 211 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 513 "/usr/include/stdlib.h" 3 4


extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 530 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));













extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 712 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 752 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 775 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 812 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 899 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 951 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 956 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4

# 53 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/basics.cats" 2



static inline
atstype_int
atspre_lor_int_int
(
  atstype_int x1
, atstype_int x2
) {
  return ((x1)|(x2)) ;
}

static inline
atstype_int
atspre_land_int_int
(
  atstype_int x1
, atstype_int x2
) {
  return ((x1)&(x2)) ;
}

static inline
atstype_int
atspre_lxor_int_int
(
  atstype_int x1
, atstype_int x2
) {
  return ((x1)^(x2)) ;
}



static inline
atsvoid_t0ype
atspre_cloptr_free
(
  atstype_cloptr pclo
) {
  atsruntime_mfree_undef (pclo) ; return ;
}



static inline
atstype_string
atspre_argv_get_at
(
  atstype_arrptr argv, atstype_int i
)
{
  return (((atstype_string*)argv)[i]) ;
}

static inline
atsvoid_t0ype
atspre_argv_set_at
(
  atstype_arrptr argv
, atstype_int i, atstype_string x
)
{
  ((atstype_string*)argv)[i] = x ; return ;
}



static inline
atsvoid_t0ype
atspre_exit
 (atstype_int ecode) { exit(ecode) ; return ; }


static inline
atsvoid_t0ype
atspre_exit_errmsg
(
  atstype_int ecode, atstype_string msg
)
{
  fprintf(stderr, "exit(ATS): %s", (char*)msg); exit(ecode); return;
}
# 145 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/basics.cats"
static inline
atsvoid_t0ype
atspre_assert_bool
  (atstype_bool b)
{
  if (!b) exit(1) ; return ;
}





static inline
atsvoid_t0ype
atspre_assert_errmsg_bool
(
  atstype_bool b, atstype_string msg
)
{
  if (!b) {
    fprintf(stderr, "%s", (char*)msg) ; exit(1) ;
  }
  return ;
}





static inline
atsvoid_t0ype
atspre_assert_errmsg2_bool
(
  atstype_bool b
, atstype_string msg1, atstype_string msg2
)
{
  if (!b) {
    fprintf(stderr, "%s%s", (char*)msg1, (char*)msg2) ; exit(1) ;
  }
  return ;
}





static inline
atsvoid_t0ype
atspre_fprint_newline
  (atstype_ref out)
{
  int n ;
  int err = -1 ;
  n = fprintf((FILE*)out, "\n") ;
  if (n > 0) err = fflush((FILE*)out) ;
  if (err < 0) {
    fprintf(stderr, "exit(ATS): [fprint_newline] failed.") ; exit(1) ;
  }
  return ;
}
# 30 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/integer.cats" 1
# 54 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/integer.cats"
extern
int fprintf (FILE *stream, const char *format, ...) ;


extern
int snprintf (char *str, size_t size, const char *format, ...) ;
# 180 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/integer.cats"
static inline
atstype_string
atspre_g0int2string_int
  (atstype_int x)
{
  size_t n0 ;
  char *res ;
  size_t ntot ;
  n0 = 4 ;
  res = atsruntime_malloc_undef(n0) ;
  ntot = snprintf(res, n0, "%i", x) ;
  if (ntot >= n0)
  {
    atsruntime_mfree_undef(res) ;
    res = (char*)atsruntime_malloc_undef(ntot+1) ;
    ntot = snprintf(res, ntot+1, "%i", x) ;
  }
  return res ;
}

static inline
atstype_string
atspre_g0int2string_lint
  (atstype_lint x)
{
  size_t n0 ;
  char *res ;
  size_t ntot ;
  n0 = 4 ;
  res = atsruntime_malloc_undef(n0) ;
  ntot = snprintf(res, n0, "%li", x) ;
  if (ntot >= n0)
  {
    atsruntime_mfree_undef(res) ;
    res = (char*)atsruntime_malloc_undef(ntot+1) ;
    ntot = snprintf(res, ntot+1, "%li", x) ;
  }
  return res ;
}

static inline
atstype_string
atspre_g0int2string_llint
  (atstype_llint x)
{
  size_t n0 ;
  char *res ;
  size_t ntot ;
  n0 = 8 ;
  res = atsruntime_malloc_undef(n0) ;
  ntot = snprintf(res, n0, "%lli", x) ;
  if (ntot >= n0)
  {
    atsruntime_mfree_undef(res) ;
    res = (char*)atsruntime_malloc_undef(ntot+1) ;
    ntot = snprintf(res, ntot+1, "%lli", x) ;
  }
  return res ;
}



extern int atoi (const char *inp) ;
extern long int atol (const char *inp) ;
extern long long int atoll (const char *inp) ;

static inline
atstype_int
atspre_g0string2int_int
  (atstype_string inp) { return atoi((char*)inp) ; }
static inline
atstype_lint
atspre_g0string2int_lint
  (atstype_string inp) { return atol((char*)inp) ; }
static inline
atstype_llint
atspre_g0string2int_llint
  (atstype_string inp) { return atoll((char*)inp) ; }
static inline
atstype_ssize
atspre_g0string2int_ssize
  (atstype_string inp) { return atol((char*)inp) ; }



extern
unsigned long int
strtoul(const char *nptr, char **endptr, int base);
extern
unsigned long long int
strtoull(const char *nptr, char **endptr, int base);

static inline
atstype_uint
atspre_g0string2uint_uint
  (atstype_string inp) { return strtoul((char*)inp, ((void *)0), 10) ; }
static inline
atstype_ulint
atspre_g0string2uint_ulint
  (atstype_string inp) { return strtoul((char*)inp, ((void *)0), 10) ; }
static inline
atstype_ullint
atspre_g0string2uint_ullint
  (atstype_string inp) { return strtoull((char*)inp, ((void *)0), 10) ; }
static inline
atstype_size
atspre_g0string2uint_size
  (atstype_string inp) { return strtoul((char*)inp, ((void *)0), 10) ; }



static inline
atstype_int
atspre_g0int_neg_int
  (atstype_int x) { return (-x) ; }

static inline
atstype_int
atspre_g0int_abs_int
  (atstype_int x) { return (x >= 0 ? x : -x) ; }

static inline
atstype_int
atspre_g0int_succ_int
  (atstype_int x) { return (x + 1) ; }

static inline
atstype_int
atspre_g0int_pred_int
  (atstype_int x) { return (x - 1) ; }

static inline
atstype_int
atspre_g0int_half_int
  (atstype_int x) { return (x / 2) ; }

static inline
atstype_int
atspre_g0int_add_int
  (atstype_int x1, atstype_int x2) { return (x1 + x2) ; }

static inline
atstype_int
atspre_g0int_sub_int
  (atstype_int x1, atstype_int x2) { return (x1 - x2) ; }

static inline
atstype_int
atspre_g0int_mul_int
  (atstype_int x1, atstype_int x2) { return (x1 * x2) ; }

static inline
atstype_int
atspre_g0int_div_int
  (atstype_int x1, atstype_int x2) { return (x1 / x2) ; }

static inline
atstype_int
atspre_g0int_mod_int
  (atstype_int x1, atstype_int x2) { return (x1 % x2) ; }

static inline
atstype_int
atspre_g0int_nmod_int
  (atstype_int x1, atstype_int x2) { return (x1 % x2) ; }

static inline
atstype_int
atspre_g0int_asl_int
  (atstype_int x, atstype_int n) { return (x << n) ; }

static inline
atstype_int
atspre_g0int_asr_int
  (atstype_int x, atstype_int n) { return (x >> n) ; }

static inline
atstype_bool
atspre_g0int_isltz_int (atstype_int x)
{
  return (x < 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isltez_int (atstype_int x)
{
  return (x <= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtz_int (atstype_int x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtez_int (atstype_int x)
{
  return (x >= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_iseqz_int (atstype_int x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isneqz_int (atstype_int x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lt_int
(
  atstype_int x1, atstype_int x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lte_int
(
  atstype_int x1, atstype_int x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gt_int
(
  atstype_int x1, atstype_int x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gte_int
(
  atstype_int x1, atstype_int x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_eq_int
(
  atstype_int x1, atstype_int x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_neq_int
(
  atstype_int x1, atstype_int x2
) {
  return (x1 != x2 ? 1 : 0) ;
}
static inline
atstype_int
atspre_g0int_compare_int
(
  atstype_int x1, atstype_int x2
) {
  if (x1 < x2) return -1 ; else if (x1 > x2) return 1 ; else return 0 ;
}
static inline
atstype_int
atspre_g0int_max_int
  (atstype_int x1, atstype_int x2) { return (x1 >= x2 ? x1 : x2) ; }

static inline
atstype_int
atspre_g0int_min_int
  (atstype_int x1, atstype_int x2) { return (x1 <= x2 ? x1 : x2) ; }


static inline
atstype_lint
atspre_g0int_neg_lint
  (atstype_lint x) { return (-x) ; }

static inline
atstype_lint
atspre_g0int_abs_lint
  (atstype_lint x) { return (x >= 0 ? x : -x) ; }

static inline
atstype_lint
atspre_g0int_succ_lint
  (atstype_lint x) { return (x + 1) ; }

static inline
atstype_lint
atspre_g0int_pred_lint
  (atstype_lint x) { return (x - 1) ; }

static inline
atstype_lint
atspre_g0int_half_lint
  (atstype_lint x) { return (x / 2) ; }

static inline
atstype_lint
atspre_g0int_add_lint
  (atstype_lint x1, atstype_lint x2) { return (x1 + x2) ; }

static inline
atstype_lint
atspre_g0int_sub_lint
  (atstype_lint x1, atstype_lint x2) { return (x1 - x2) ; }

static inline
atstype_lint
atspre_g0int_mul_lint
  (atstype_lint x1, atstype_lint x2) { return (x1 * x2) ; }

static inline
atstype_lint
atspre_g0int_div_lint
  (atstype_lint x1, atstype_lint x2) { return (x1 / x2) ; }

static inline
atstype_lint
atspre_g0int_mod_lint
  (atstype_lint x1, atstype_lint x2) { return (x1 % x2) ; }

static inline
atstype_lint
atspre_g0int_nmod_lint
  (atstype_lint x1, atstype_lint x2) { return (x1 % x2) ; }

static inline
atstype_lint
atspre_g0int_asl_lint
  (atstype_lint x, atstype_int n) { return (x << n) ; }

static inline
atstype_lint
atspre_g0int_asr_lint
  (atstype_lint x, atstype_int n) { return (x >> n) ; }

static inline
atstype_bool
atspre_g0int_isltz_lint (atstype_lint x)
{
  return (x < 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isltez_lint (atstype_lint x)
{
  return (x <= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtz_lint (atstype_lint x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtez_lint (atstype_lint x)
{
  return (x >= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_iseqz_lint (atstype_lint x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isneqz_lint (atstype_lint x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lt_lint
(
  atstype_lint x1, atstype_lint x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lte_lint
(
  atstype_lint x1, atstype_lint x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gt_lint
(
  atstype_lint x1, atstype_lint x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gte_lint
(
  atstype_lint x1, atstype_lint x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_eq_lint
(
  atstype_lint x1, atstype_lint x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_neq_lint
(
  atstype_lint x1, atstype_lint x2
) {
  return (x1 != x2 ? 1 : 0) ;
}
static inline
atstype_int
atspre_g0int_compare_lint
(
  atstype_lint x1, atstype_lint x2
) {
  if (x1 < x2) return -1 ; else if (x1 > x2) return 1 ; else return 0 ;
}
static inline
atstype_lint
atspre_g0int_max_lint
  (atstype_lint x1, atstype_lint x2) { return (x1 >= x2 ? x1 : x2) ; }

static inline
atstype_lint
atspre_g0int_min_lint
  (atstype_lint x1, atstype_lint x2) { return (x1 <= x2 ? x1 : x2) ; }


static inline
atstype_llint
atspre_g0int_neg_llint
  (atstype_llint x) { return (-x) ; }

static inline
atstype_llint
atspre_g0int_abs_llint
  (atstype_llint x) { return (x >= 0 ? x : -x) ; }

static inline
atstype_llint
atspre_g0int_succ_llint
  (atstype_llint x) { return (x + 1) ; }

static inline
atstype_llint
atspre_g0int_pred_llint
  (atstype_llint x) { return (x - 1) ; }

static inline
atstype_llint
atspre_g0int_half_llint
  (atstype_llint x) { return (x / 2) ; }

static inline
atstype_llint
atspre_g0int_add_llint
  (atstype_llint x1, atstype_llint x2) { return (x1 + x2) ; }

static inline
atstype_llint
atspre_g0int_sub_llint
  (atstype_llint x1, atstype_llint x2) { return (x1 - x2) ; }

static inline
atstype_llint
atspre_g0int_mul_llint
  (atstype_llint x1, atstype_llint x2) { return (x1 * x2) ; }

static inline
atstype_llint
atspre_g0int_div_llint
  (atstype_llint x1, atstype_llint x2) { return (x1 / x2) ; }

static inline
atstype_llint
atspre_g0int_mod_llint
  (atstype_llint x1, atstype_llint x2) { return (x1 % x2) ; }

static inline
atstype_llint
atspre_g0int_nmod_llint
  (atstype_llint x1, atstype_llint x2) { return (x1 % x2) ; }

static inline
atstype_llint
atspre_g0int_asl_llint
  (atstype_llint x, atstype_int n) { return (x << n) ; }

static inline
atstype_llint
atspre_g0int_asr_llint
  (atstype_llint x, atstype_int n) { return (x >> n) ; }

static inline
atstype_bool
atspre_g0int_isltz_llint (atstype_llint x)
{
  return (x < 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isltez_llint (atstype_llint x)
{
  return (x <= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtz_llint (atstype_llint x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtez_llint (atstype_llint x)
{
  return (x >= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_iseqz_llint (atstype_llint x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isneqz_llint (atstype_llint x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lt_llint
(
  atstype_llint x1, atstype_llint x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lte_llint
(
  atstype_llint x1, atstype_llint x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gt_llint
(
  atstype_llint x1, atstype_llint x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gte_llint
(
  atstype_llint x1, atstype_llint x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_eq_llint
(
  atstype_llint x1, atstype_llint x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_neq_llint
(
  atstype_llint x1, atstype_llint x2
) {
  return (x1 != x2 ? 1 : 0) ;
}
static inline
atstype_int
atspre_g0int_compare_llint
(
  atstype_llint x1, atstype_llint x2
) {
  if (x1 < x2) return -1 ; else if (x1 > x2) return 1 ; else return 0 ;
}
static inline
atstype_llint
atspre_g0int_max_llint
  (atstype_llint x1, atstype_llint x2) { return (x1 >= x2 ? x1 : x2) ; }

static inline
atstype_llint
atspre_g0int_min_llint
  (atstype_llint x1, atstype_llint x2) { return (x1 <= x2 ? x1 : x2) ; }


static inline
atstype_ssize
atspre_g0int_neg_ssize
  (atstype_ssize x) { return (-x) ; }

static inline
atstype_ssize
atspre_g0int_abs_ssize
  (atstype_ssize x) { return (x >= 0 ? x : -x) ; }

static inline
atstype_ssize
atspre_g0int_succ_ssize
  (atstype_ssize x) { return (x + 1) ; }

static inline
atstype_ssize
atspre_g0int_pred_ssize
  (atstype_ssize x) { return (x - 1) ; }

static inline
atstype_ssize
atspre_g0int_half_ssize
  (atstype_ssize x) { return (x / 2) ; }

static inline
atstype_ssize
atspre_g0int_add_ssize
  (atstype_ssize x1, atstype_ssize x2) { return (x1 + x2) ; }

static inline
atstype_ssize
atspre_g0int_sub_ssize
  (atstype_ssize x1, atstype_ssize x2) { return (x1 - x2) ; }

static inline
atstype_ssize
atspre_g0int_mul_ssize
  (atstype_ssize x1, atstype_ssize x2) { return (x1 * x2) ; }

static inline
atstype_ssize
atspre_g0int_div_ssize
  (atstype_ssize x1, atstype_ssize x2) { return (x1 / x2) ; }

static inline
atstype_ssize
atspre_g0int_mod_ssize
  (atstype_ssize x1, atstype_ssize x2) { return (x1 % x2) ; }

static inline
atstype_ssize
atspre_g0int_nmod_ssize
  (atstype_ssize x1, atstype_ssize x2) { return (x1 % x2) ; }

static inline
atstype_ssize
atspre_g0int_asl_ssize
  (atstype_ssize x, atstype_int n) { return (x << n) ; }

static inline
atstype_ssize
atspre_g0int_asr_ssize
  (atstype_ssize x, atstype_int n) { return (x >> n) ; }

static inline
atstype_bool
atspre_g0int_isltz_ssize (atstype_ssize x)
{
  return (x < 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isltez_ssize (atstype_ssize x)
{
  return (x <= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtz_ssize (atstype_ssize x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtez_ssize (atstype_ssize x)
{
  return (x >= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_iseqz_ssize (atstype_ssize x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isneqz_ssize (atstype_ssize x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lt_ssize
(
  atstype_ssize x1, atstype_ssize x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lte_ssize
(
  atstype_ssize x1, atstype_ssize x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gt_ssize
(
  atstype_ssize x1, atstype_ssize x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gte_ssize
(
  atstype_ssize x1, atstype_ssize x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_eq_ssize
(
  atstype_ssize x1, atstype_ssize x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_neq_ssize
(
  atstype_ssize x1, atstype_ssize x2
) {
  return (x1 != x2 ? 1 : 0) ;
}
static inline
atstype_int
atspre_g0int_compare_ssize
(
  atstype_ssize x1, atstype_ssize x2
) {
  if (x1 < x2) return -1 ; else if (x1 > x2) return 1 ; else return 0 ;
}
static inline
atstype_ssize
atspre_g0int_max_ssize
  (atstype_ssize x1, atstype_ssize x2) { return (x1 >= x2 ? x1 : x2) ; }

static inline
atstype_ssize
atspre_g0int_min_ssize
  (atstype_ssize x1, atstype_ssize x2) { return (x1 <= x2 ? x1 : x2) ; }




static inline
atsvoid_t0ype
atspre_fprint_int
(
  atstype_ref out, atstype_int x
) {
  int err = 0 ;
  err += fprintf((FILE*)out, "%i", x) ;





  return ;
}



static inline
atsvoid_t0ype
atspre_fprint_lint
(
  atstype_ref out, atstype_lint x
) {
  int err = 0 ;
  err += fprintf((FILE*)out, "%li", x) ;





  return ;
}



static inline
atsvoid_t0ype
atspre_fprint_llint
(
  atstype_ref out, atstype_llint x
) {
  int err = 0 ;
  err += fprintf((FILE*)out, "%lli", x) ;





  return ;
}



static inline
atsvoid_t0ype
atspre_fprint_ssize
(
  atstype_ref out, atstype_ssize x
) {
  int err = 0 ;
  err += fprintf((FILE*)out, "%li", x) ;





  return ;
}
# 1148 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/integer.cats"
static inline
atstype_uint
atspre_g0uint_succ_uint
  (atstype_uint x) { return (x + 1) ; }

static inline
atstype_uint
atspre_g0uint_pred_uint
  (atstype_uint x) { return (x - 1) ; }

static inline
atstype_uint
atspre_g0uint_half_uint
  (atstype_uint x) { return (x >> 1) ; }

static inline
atstype_uint
atspre_g0uint_add_uint
  (atstype_uint x1, atstype_uint x2) { return (x1 + x2) ; }

static inline
atstype_uint
atspre_g0uint_sub_uint
  (atstype_uint x1, atstype_uint x2) { return (x1 - x2) ; }

static inline
atstype_uint
atspre_g0uint_mul_uint
  (atstype_uint x1, atstype_uint x2) { return (x1 * x2) ; }

static inline
atstype_uint
atspre_g0uint_div_uint
  (atstype_uint x1, atstype_uint x2) { return (x1 / x2) ; }

static inline
atstype_uint
atspre_g0uint_mod_uint
  (atstype_uint x1, atstype_uint x2) { return (x1 % x2) ; }

static inline
atstype_uint
atspre_g0uint_lsl_uint
  (atstype_uint x, atstype_int n) { return (x << n) ; }

static inline
atstype_uint
atspre_g0uint_lsr_uint
  (atstype_uint x, atstype_int n) { return (x >> n) ; }

static inline
atstype_uint
atspre_g0uint_lnot_uint
  (atstype_uint x) { return ~(x) ; }

static inline
atstype_uint
atspre_g0uint_lor_uint
  (atstype_uint x, atstype_uint y) { return (x | y) ; }

static inline
atstype_uint
atspre_g0uint_land_uint
  (atstype_uint x, atstype_uint y) { return (x & y) ; }

static inline
atstype_uint
atspre_g0uint_lxor_uint
  (atstype_uint x, atstype_uint y) { return (x ^ y) ; }

static inline
atstype_bool
atspre_g0uint_isgtz_uint (atstype_uint x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_iseqz_uint (atstype_uint x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_isneqz_uint (atstype_uint x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lt_uint
(
  atstype_uint x1, atstype_uint x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lte_uint
(
  atstype_uint x1, atstype_uint x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gt_uint
(
  atstype_uint x1, atstype_uint x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gte_uint
(
  atstype_uint x1, atstype_uint x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_eq_uint
(
  atstype_uint x1, atstype_uint x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_neq_uint
(
  atstype_uint x1, atstype_uint x2
) {
  return (x1 != x2 ? 1 : 0) ;
}
static inline
atstype_int
atspre_g0uint_compare_uint
(
  atstype_uint x1, atstype_uint x2
) {
  if (x1 < x2) return -1 ; else if (x1 > x2) return 1 ; else return 0 ;
}
static inline
atstype_uint
atspre_g0uint_max_uint
  (atstype_uint x1, atstype_uint x2) { return (x1 >= x2 ? x1 : x2) ; }

static inline
atstype_uint
atspre_g0uint_min_uint
  (atstype_uint x1, atstype_uint x2) { return (x1 <= x2 ? x1 : x2) ; }


static inline
atstype_ulint
atspre_g0uint_succ_ulint
  (atstype_ulint x) { return (x + 1) ; }

static inline
atstype_ulint
atspre_g0uint_pred_ulint
  (atstype_ulint x) { return (x - 1) ; }

static inline
atstype_ulint
atspre_g0uint_half_ulint
  (atstype_ulint x) { return (x >> 1) ; }

static inline
atstype_ulint
atspre_g0uint_add_ulint
  (atstype_ulint x1, atstype_ulint x2) { return (x1 + x2) ; }

static inline
atstype_ulint
atspre_g0uint_sub_ulint
  (atstype_ulint x1, atstype_ulint x2) { return (x1 - x2) ; }

static inline
atstype_ulint
atspre_g0uint_mul_ulint
  (atstype_ulint x1, atstype_ulint x2) { return (x1 * x2) ; }

static inline
atstype_ulint
atspre_g0uint_div_ulint
  (atstype_ulint x1, atstype_ulint x2) { return (x1 / x2) ; }

static inline
atstype_ulint
atspre_g0uint_mod_ulint
  (atstype_ulint x1, atstype_ulint x2) { return (x1 % x2) ; }

static inline
atstype_ulint
atspre_g0uint_lsl_ulint
  (atstype_ulint x, atstype_int n) { return (x << n) ; }

static inline
atstype_ulint
atspre_g0uint_lsr_ulint
  (atstype_ulint x, atstype_int n) { return (x >> n) ; }

static inline
atstype_ulint
atspre_g0uint_lnot_ulint
  (atstype_ulint x) { return ~(x) ; }

static inline
atstype_ulint
atspre_g0uint_lor_ulint
  (atstype_ulint x, atstype_ulint y) { return (x | y) ; }

static inline
atstype_ulint
atspre_g0uint_land_ulint
  (atstype_ulint x, atstype_ulint y) { return (x & y) ; }

static inline
atstype_ulint
atspre_g0uint_lxor_ulint
  (atstype_ulint x, atstype_ulint y) { return (x ^ y) ; }

static inline
atstype_bool
atspre_g0uint_isgtz_ulint (atstype_ulint x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_iseqz_ulint (atstype_ulint x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_isneqz_ulint (atstype_ulint x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lt_ulint
(
  atstype_ulint x1, atstype_ulint x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lte_ulint
(
  atstype_ulint x1, atstype_ulint x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gt_ulint
(
  atstype_ulint x1, atstype_ulint x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gte_ulint
(
  atstype_ulint x1, atstype_ulint x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_eq_ulint
(
  atstype_ulint x1, atstype_ulint x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_neq_ulint
(
  atstype_ulint x1, atstype_ulint x2
) {
  return (x1 != x2 ? 1 : 0) ;
}
static inline
atstype_int
atspre_g0uint_compare_ulint
(
  atstype_ulint x1, atstype_ulint x2
) {
  if (x1 < x2) return -1 ; else if (x1 > x2) return 1 ; else return 0 ;
}
static inline
atstype_ulint
atspre_g0uint_max_ulint
  (atstype_ulint x1, atstype_ulint x2) { return (x1 >= x2 ? x1 : x2) ; }

static inline
atstype_ulint
atspre_g0uint_min_ulint
  (atstype_ulint x1, atstype_ulint x2) { return (x1 <= x2 ? x1 : x2) ; }


static inline
atstype_ullint
atspre_g0uint_succ_ullint
  (atstype_ullint x) { return (x + 1) ; }

static inline
atstype_ullint
atspre_g0uint_pred_ullint
  (atstype_ullint x) { return (x - 1) ; }

static inline
atstype_ullint
atspre_g0uint_half_ullint
  (atstype_ullint x) { return (x >> 1) ; }

static inline
atstype_ullint
atspre_g0uint_add_ullint
  (atstype_ullint x1, atstype_ullint x2) { return (x1 + x2) ; }

static inline
atstype_ullint
atspre_g0uint_sub_ullint
  (atstype_ullint x1, atstype_ullint x2) { return (x1 - x2) ; }

static inline
atstype_ullint
atspre_g0uint_mul_ullint
  (atstype_ullint x1, atstype_ullint x2) { return (x1 * x2) ; }

static inline
atstype_ullint
atspre_g0uint_div_ullint
  (atstype_ullint x1, atstype_ullint x2) { return (x1 / x2) ; }

static inline
atstype_ullint
atspre_g0uint_mod_ullint
  (atstype_ullint x1, atstype_ullint x2) { return (x1 % x2) ; }

static inline
atstype_ullint
atspre_g0uint_lsl_ullint
  (atstype_ullint x, atstype_int n) { return (x << n) ; }

static inline
atstype_ullint
atspre_g0uint_lsr_ullint
  (atstype_ullint x, atstype_int n) { return (x >> n) ; }

static inline
atstype_ullint
atspre_g0uint_lnot_ullint
  (atstype_ullint x) { return ~(x) ; }

static inline
atstype_ullint
atspre_g0uint_lor_ullint
  (atstype_ullint x, atstype_ullint y) { return (x | y) ; }

static inline
atstype_ullint
atspre_g0uint_land_ullint
  (atstype_ullint x, atstype_ullint y) { return (x & y) ; }

static inline
atstype_ullint
atspre_g0uint_lxor_ullint
  (atstype_ullint x, atstype_ullint y) { return (x ^ y) ; }

static inline
atstype_bool
atspre_g0uint_isgtz_ullint (atstype_ullint x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_iseqz_ullint (atstype_ullint x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_isneqz_ullint (atstype_ullint x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lt_ullint
(
  atstype_ullint x1, atstype_ullint x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lte_ullint
(
  atstype_ullint x1, atstype_ullint x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gt_ullint
(
  atstype_ullint x1, atstype_ullint x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gte_ullint
(
  atstype_ullint x1, atstype_ullint x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_eq_ullint
(
  atstype_ullint x1, atstype_ullint x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_neq_ullint
(
  atstype_ullint x1, atstype_ullint x2
) {
  return (x1 != x2 ? 1 : 0) ;
}
static inline
atstype_int
atspre_g0uint_compare_ullint
(
  atstype_ullint x1, atstype_ullint x2
) {
  if (x1 < x2) return -1 ; else if (x1 > x2) return 1 ; else return 0 ;
}
static inline
atstype_ullint
atspre_g0uint_max_ullint
  (atstype_ullint x1, atstype_ullint x2) { return (x1 >= x2 ? x1 : x2) ; }

static inline
atstype_ullint
atspre_g0uint_min_ullint
  (atstype_ullint x1, atstype_ullint x2) { return (x1 <= x2 ? x1 : x2) ; }


static inline
atstype_size
atspre_g0uint_succ_size
  (atstype_size x) { return (x + 1) ; }

static inline
atstype_size
atspre_g0uint_pred_size
  (atstype_size x) { return (x - 1) ; }

static inline
atstype_size
atspre_g0uint_half_size
  (atstype_size x) { return (x >> 1) ; }

static inline
atstype_size
atspre_g0uint_add_size
  (atstype_size x1, atstype_size x2) { return (x1 + x2) ; }

static inline
atstype_size
atspre_g0uint_sub_size
  (atstype_size x1, atstype_size x2) { return (x1 - x2) ; }

static inline
atstype_size
atspre_g0uint_mul_size
  (atstype_size x1, atstype_size x2) { return (x1 * x2) ; }

static inline
atstype_size
atspre_g0uint_div_size
  (atstype_size x1, atstype_size x2) { return (x1 / x2) ; }

static inline
atstype_size
atspre_g0uint_mod_size
  (atstype_size x1, atstype_size x2) { return (x1 % x2) ; }

static inline
atstype_size
atspre_g0uint_lsl_size
  (atstype_size x, atstype_int n) { return (x << n) ; }

static inline
atstype_size
atspre_g0uint_lsr_size
  (atstype_size x, atstype_int n) { return (x >> n) ; }

static inline
atstype_size
atspre_g0uint_lnot_size
  (atstype_size x) { return ~(x) ; }

static inline
atstype_size
atspre_g0uint_lor_size
  (atstype_size x, atstype_size y) { return (x | y) ; }

static inline
atstype_size
atspre_g0uint_land_size
  (atstype_size x, atstype_size y) { return (x & y) ; }

static inline
atstype_size
atspre_g0uint_lxor_size
  (atstype_size x, atstype_size y) { return (x ^ y) ; }

static inline
atstype_bool
atspre_g0uint_isgtz_size (atstype_size x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_iseqz_size (atstype_size x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_isneqz_size (atstype_size x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lt_size
(
  atstype_size x1, atstype_size x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lte_size
(
  atstype_size x1, atstype_size x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gt_size
(
  atstype_size x1, atstype_size x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gte_size
(
  atstype_size x1, atstype_size x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_eq_size
(
  atstype_size x1, atstype_size x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_neq_size
(
  atstype_size x1, atstype_size x2
) {
  return (x1 != x2 ? 1 : 0) ;
}
static inline
atstype_int
atspre_g0uint_compare_size
(
  atstype_size x1, atstype_size x2
) {
  if (x1 < x2) return -1 ; else if (x1 > x2) return 1 ; else return 0 ;
}
static inline
atstype_size
atspre_g0uint_max_size
  (atstype_size x1, atstype_size x2) { return (x1 >= x2 ? x1 : x2) ; }

static inline
atstype_size
atspre_g0uint_min_size
  (atstype_size x1, atstype_size x2) { return (x1 <= x2 ? x1 : x2) ; }




static inline
atsvoid_t0ype
atspre_fprint_uint
(
  atstype_ref out, atstype_uint x
) {
  int err = 0 ;
  err += fprintf((FILE*)out, "%u", x) ;





  return ;
}




static inline
atsvoid_t0ype
atspre_fprint_ulint
(
  atstype_ref out, atstype_ulint x
) {
  int err = 0 ;
  err += fprintf((FILE*)out, "%lu", x) ;





  return ;
}




static inline
atsvoid_t0ype
atspre_fprint_ullint
(
  atstype_ref out, atstype_ullint x
) {
  int err = 0 ;
  err += fprintf((FILE*)out, "%llu", x) ;





  return ;
}






static inline
atsvoid_t0ype
atspre_fprint_size
(
  atstype_ref out, atstype_size x
) {
  int err = 0 ;
  atstype_ulint x2 = x ;
  err += fprintf((FILE*)out, "%lu", x2) ;





  return ;
}
# 31 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/pointer.cats" 1
# 52 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/pointer.cats"
extern
void *memset(void *bufp, int c, size_t n) ;





extern
int fprintf (FILE *stream, const char *format, ...) ;




static inline
atstype_ptr
atspre_ptr_null () { return (void*)0 ; }



static inline
atstype_bool
atspre_ptr_is_null
  (atstype_ptr p) {
  return (p == (void*)0) ? 1 : 0 ;
}



static inline
atstype_bool
atspre_ptr_isnot_null
  (atstype_ptr p) {
  return (p != (void*)0) ? 1 : 0 ;
}





static inline
atstype_ptr
atspre_add_ptr_bsz
  (atstype_ptr p, atstype_size ofs) { return ((char*)p + ofs) ; }




static inline
atstype_ptr
atspre_sub_ptr_bsz
  (atstype_ptr p, atstype_size ofs) { return ((char*)p - ofs) ; }






static inline
atstype_ssize
atspre_sub_ptr_ptr
  (atstype_ptr p1, atstype_ptr p2) { return (p1 - p2) ; }






static inline
atstype_bool
atspre_lt_ptr_ptr
  (atstype_ptr p1, atstype_ptr p2) {
  return (p1 < p2 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_lte_ptr_ptr
  (atstype_ptr p1, atstype_ptr p2) {
  return (p1 <= p2 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_gt_ptr_ptr
  (atstype_ptr p1, atstype_ptr p2) {
  return (p1 > p2 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_gte_ptr_ptr
  (atstype_ptr p1, atstype_ptr p2) {
  return (p1 >= p2 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_eq_ptr_ptr
  (atstype_ptr p1, atstype_ptr p2) {
  return (p1 == p2 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_neq_ptr_ptr
  (atstype_ptr p1, atstype_ptr p2) {
  return (p1 != p2 ? 1 : 0) ;
}




static inline
atstype_int
atspre_compare_ptr_ptr
(
  atstype_ptr p1, atstype_ptr p2
) {
  if (p1 >= p2) {
    if (p1 > p2) return 1 ; else return 0 ;
  } else return (-1) ;
}





static inline
atstype_bool
atspre_gt_ptr_intz
  (atstype_ptr p, atstype_int _)
{
  return (p > 0 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_eq_ptr_intz
  (atstype_ptr p, atstype_int _)
{
  return (p == 0 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_neq_ptr_intz
  (atstype_ptr p, atstype_int _)
{
  return (p != 0 ? 1 : 0) ;
}
# 230 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/pointer.cats"
static inline
atsvoid_t0ype
atspre_ptr_nullize_tsz
(
  atstype_ptr p, atstype_size tsz
) {
  memset (p, 0, tsz) ; return ;
}
# 249 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/pointer.cats"
static inline
atsvoid_t0ype
atspre_fprint_ptr (
  atstype_ref out, atstype_ptr x
) {
  int err ;
  err = fprintf((FILE*)out, "%p", x) ;
  return ;
}
# 32 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/bool.cats" 1
# 52 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/bool.cats"
extern
int fprintf (FILE *stream, const char *format, ...) ;




static inline
atstype_bool
atspre_int2bool (atstype_int x)
{
  return (x != 0 ? 1 : 0) ;
}
# 74 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/bool.cats"
static inline
atstype_bool
atspre_neg_bool
  (atstype_bool b) {
  return (b) ? 0 : 1 ;
}



static inline
atstype_bool
atspre_add_bool_bool (
  atstype_bool b1, atstype_bool b2
) {
  return (b1) ? 1 : (b2) ;
}



static inline
atstype_bool
atspre_mul_bool_bool (
  atstype_bool b1, atstype_bool b2
) {
  return (b1) ? (b2) : 0 ;
}





static inline
atstype_bool
atspre_xor_bool_bool (
  atstype_bool b1, atstype_bool b2
) {
  return (b1) ? (!b2) : (b2) ;
}





static inline
atstype_bool
atspre_lt_bool_bool (
  atstype_bool b1, atstype_bool b2
) {
  return (b1) ? 0 : (b2) ;
}


static inline
atstype_bool
atspre_lte_bool_bool (
  atstype_bool b1, atstype_bool b2
) {
  return (b1) ? (b2) : 1 ;
}



static inline
atstype_bool
atspre_gt_bool_bool (
  atstype_bool b1, atstype_bool b2
) {
  return (b2) ? 0 : (b1) ;
}


static inline
atstype_bool
atspre_gte_bool_bool (
  atstype_bool b1, atstype_bool b2
) {
  return (b2) ? (b1) : 1 ;
}



static inline
atstype_bool
atspre_eq_bool_bool (
  atstype_bool b1, atstype_bool b2
) {
  return (b1 == b2) ;
}


static inline
atstype_bool
atspre_neq_bool_bool (
  atstype_bool b1, atstype_bool b2
) {
  return (b1 != b2) ;
}





static inline
atstype_int
atspre_compare_bool_bool (
  atstype_bool b1, atstype_bool b2
) {
  return (b1 - b2) ;
}





static inline
atstype_string
atspre_tostring_bool (
  atstype_bool x
) {
  return (x) ? "true" : "false" ;
}



static inline
atsvoid_t0ype
atspre_fprint_bool (
  atstype_ref out, atstype_bool x
) {
  int err = 0 ;
  err += fprintf((FILE*)out, "%s", atspre_tostring_bool(x)) ;





  return ;
}
# 33 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/char.cats" 1
# 51 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/char.cats"
# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 104 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));








extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));


# 150 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 257 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 258 "/usr/include/ctype.h" 2 3 4
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 347 "/usr/include/ctype.h" 3 4

# 52 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/char.cats" 2
# 72 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/char.cats"
extern
int fprintf (FILE *stream, const char *format, ...) ;




static inline
atstype_char
atspre_int2char (atstype_int i) { return ((atstype_char)i) ; }


static inline
atstype_schar
atspre_int2schar (atstype_int i) { return ((atstype_schar)i) ; }


static inline
atstype_uchar
atspre_int2uchar (atstype_int i) { return ((atstype_uchar)i) ; }




static inline
atstype_int
atspre_char2int (atstype_char c) { return ((atstype_int)c) ; }


static inline
atstype_int
atspre_schar2int (atstype_schar c) { return ((atstype_int)c) ; }


static inline
atstype_int
atspre_uchar2int (atstype_uchar c) { return ((atstype_int)c) ; }




static inline
atstype_uint
atspre_char2uint (atstype_char c) { return ((atstype_uint)c) ; }


static inline
atstype_uint
atspre_schar2uint (atstype_schar c) { return ((atstype_uint)c) ; }


static inline
atstype_uint
atspre_uchar2uint (atstype_uchar c) { return ((atstype_uint)c) ; }




static inline
atstype_int
atspre_char2u2int
  (atstype_char c) { return ((atstype_int)((atstype_uchar)c)) ; }

static inline
atstype_uint
atspre_char2u2uint
  (atstype_char c) { return ((atstype_uint)((atstype_uchar)c)) ; }




static inline
atstype_bool
atspre_char_iseqz
  (atstype_char c)
{
  return ((c == 0) ? 1 : 0) ;
}



static inline
atstype_bool
atspre_char_isneqz
  (atstype_char c)
{
  return ((c != 0) ? 1 : 0) ;
}





static inline
atstype_char
atspre_add_char_int
  (atstype_char c1, atstype_int i2) { return (c1 + i2) ; }





static inline
atstype_char
atspre_sub_char_int
  (atstype_char c1, atstype_int i2) { return (c1 - i2) ; }





static inline
atstype_int
atspre_sub_char_char
  (atstype_char c1, atstype_char c2) { return (c1 - c2) ; }





static inline
atstype_bool
atspre_lt_int_int
  (atstype_int i1, atstype_int i2) {
  return (i1 < i2 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_lte_int_int
  (atstype_int i1, atstype_int i2) {
  return (i1 <= i2 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_gt_int_int
  (atstype_int i1, atstype_int i2) {
  return (i1 > i2 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_gte_int_int
  (atstype_int i1, atstype_int i2) {
  return (i1 >= i2 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_eq_int_int
  (atstype_int i1, atstype_int i2) {
  return (i1 == i2 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_neq_int_int
  (atstype_int i1, atstype_int i2) {
  return (i1 != i2 ? 1 : 0) ;
}






static inline
atstype_int
atspre_compare_int_int
  (atstype_int i1, atstype_int i2)
{
  return (i1 - i2) ;
}
# 272 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/char.cats"
static inline
atsvoid_t0ype
atspre_fprint_char
(
  atstype_ref out, atstype_char c
) {
  int err = 0 ;
  err += fprintf ((FILE*)out, "%c", c) ;





  return ;
}



static inline
atsvoid_t0ype
atspre_fprint_uchar
(
  atstype_ref out, atstype_uchar c
) {
  atspre_fprint_char (out, (atstype_char)c) ; return ;
}



static inline
atsvoid_t0ype
atspre_fprint_schar
(
  atstype_ref out, atstype_schar c
) {
  atspre_fprint_char (out, (atstype_char)c) ; return ;
}
# 318 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/char.cats"
static inline
atstype_bool
atspre_lt_uchar_uchar
  (atstype_uchar c1, atstype_uchar c2) {
  return (c1 < c2 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_lte_uchar_uchar
  (atstype_uchar c1, atstype_uchar c2) {
  return (c1 <= c2 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_gt_uchar_uchar
  (atstype_uchar c1, atstype_uchar c2) {
  return (c1 > c2 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_gte_uchar_uchar
  (atstype_uchar c1, atstype_uchar c2) {
  return (c1 >= c2 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_eq_uchar_uchar
  (atstype_uchar c1, atstype_uchar c2) {
  return (c1 == c2 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_neq_uchar_uchar
  (atstype_uchar c1, atstype_uchar c2) {
  return (c1 != c2 ? 1 : 0) ;
}






static inline
atstype_int
atspre_compare_uchar_uchar
  (atstype_uchar c1, atstype_uchar c2) {
  return ((atstype_int)c1 - (atstype_int)c2) ;
}





static inline
atstype_bool
atspre_isalpha_int
  (atstype_int c) {
  return (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISalpha) ? 1 : 0) ;
}

static inline
atstype_bool
atspre_isalnum_int
  (atstype_int c) {
  return (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISalnum) ? 1 : 0) ;
}


static inline
atstype_bool
atspre_isascii_int
  (atstype_int c) {
  return ((((c) & ~0x7f) == 0) ? 1 : 0) ;
}


static inline
atstype_bool
atspre_isblank_int
  (atstype_int c) {
  return (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISblank) ? 1 : 0) ;
}

static inline
atstype_bool
atspre_isspace_int
  (atstype_int c) {
  return (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISspace) ? 1 : 0) ;
}


static inline
atstype_bool
atspre_iscntrl_int
  (atstype_int c) {
  return (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _IScntrl) ? 1 : 0) ;
}


static inline
atstype_bool
atspre_isdigit_int
  (atstype_int c) {
  return (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISdigit) ? 1 : 0) ;
}

static inline
atstype_bool
atspre_isxdigit_int
  (atstype_int c) {
  return (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISxdigit) ? 1 : 0) ;
}


static inline
atstype_bool
atspre_isgraph_int
  (atstype_int c) {
  return (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISgraph) ? 1 : 0) ;
}

static inline
atstype_bool
atspre_isprint_int
  (atstype_int c) {
  return (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISprint) ? 1 : 0) ;
}

static inline
atstype_bool
atspre_ispunct_int
  (atstype_int c) {
  return (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISpunct) ? 1 : 0) ;
}


static inline
atstype_bool
atspre_islower_int
  (atstype_int c) {
  return (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISlower) ? 1 : 0) ;
}

static inline
atstype_bool
atspre_isupper_int
  (atstype_int c) {
  return (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISupper) ? 1 : 0) ;
}
# 490 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/char.cats"
static inline
atstype_int
atspre_tolower_int
  (atstype_int c) { return tolower(c) ; }
static inline
atstype_char
atspre_tolower_char
  (atstype_char c) { return tolower(c) ; }

static inline
atstype_int
atspre_toupper_int
  (atstype_int c) { return toupper(c) ; }
static inline
atstype_char
atspre_toupper_char
  (atstype_char c) { return toupper(c) ; }



static inline
atstype_char
atspre_int2digit
  (atstype_int i) { return ('0' + i) ; }

static inline
atstype_char
atspre_int2xdigit
  (atstype_int i) {
  return (i < 10) ? ('0' + i) : ('a' + (i - 10)) ;
}
static inline
atstype_char
atspre_int2xxdigit
  (atstype_int i) {
  return (i < 10) ? ('0' + i) : ('A' + (i - 10)) ;
}
# 34 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/integer_ptr.cats" 1
# 51 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/integer_ptr.cats"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 48 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdint.h" 2 3 4
# 52 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/integer_ptr.cats" 2



typedef intptr_t atstype_intptr ;
typedef uintptr_t atstype_uintptr ;




extern
int fprintf (FILE *stream, const char *format, ...) ;
# 78 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/integer_ptr.cats"
static inline
atstype_intptr
atspre_g0int_neg_intptr
  (atstype_intptr x) { return (-x) ; }

static inline
atstype_intptr
atspre_g0int_succ_intptr
  (atstype_intptr x) { return (x + 1) ; }

static inline
atstype_intptr
atspre_g0int_pred_intptr
  (atstype_intptr x) { return (x - 1) ; }

static inline
atstype_intptr
atspre_g0int_half_intptr
  (atstype_intptr x) { return (x / 2) ; }

static inline
atstype_intptr
atspre_g0int_add_intptr
  (atstype_intptr x1, atstype_intptr x2) { return (x1 + x2) ; }

static inline
atstype_intptr
atspre_g0int_sub_intptr
  (atstype_intptr x1, atstype_intptr x2) { return (x1 - x2) ; }

static inline
atstype_intptr
atspre_g0int_mul_intptr
  (atstype_intptr x1, atstype_intptr x2) { return (x1 * x2) ; }

static inline
atstype_intptr
atspre_g0int_div_intptr
  (atstype_intptr x1, atstype_intptr x2) { return (x1 / x2) ; }

static inline
atstype_bool
atspre_g0int_isltz_intptr (atstype_intptr x)
{
  return (x < 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isltez_intptr (atstype_intptr x)
{
  return (x <= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtz_intptr (atstype_intptr x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtez_intptr (atstype_intptr x)
{
  return (x >= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_iseqz_intptr (atstype_intptr x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isneqz_intptr (atstype_intptr x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lt_intptr
(
  atstype_intptr x1, atstype_intptr x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lte_intptr
(
  atstype_intptr x1, atstype_intptr x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gt_intptr
(
  atstype_intptr x1, atstype_intptr x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gte_intptr
(
  atstype_intptr x1, atstype_intptr x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_eq_intptr
(
  atstype_intptr x1, atstype_intptr x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_neq_intptr
(
  atstype_intptr x1, atstype_intptr x2
) {
  return (x1 != x2 ? 1 : 0) ;
}



static inline
atsvoid_t0ype
atspre_fprint_intptr
(
  atstype_ref r, atstype_intptr x
) {
  int err ;
  err = fprintf((FILE*)r, "%lli", (atstype_llint)x) ;
  return ;
}






static inline
atstype_uintptr
atspre_g0uint_succ_uintptr
  (atstype_uintptr x) { return (x + 1) ; }

static inline
atstype_uintptr
atspre_g0uint_pred_uintptr
  (atstype_uintptr x) { return (x - 1) ; }

static inline
atstype_uintptr
atspre_g0uint_half_uintptr
  (atstype_uintptr x) { return (x >> 1) ; }

static inline
atstype_uintptr
atspre_g0uint_add_uintptr
  (atstype_uintptr x1, atstype_uintptr x2) { return (x1 + x2) ; }

static inline
atstype_uintptr
atspre_g0uint_sub_uintptr
  (atstype_uintptr x1, atstype_uintptr x2) { return (x1 - x2) ; }

static inline
atstype_uintptr
atspre_g0uint_mul_uintptr
  (atstype_uintptr x1, atstype_uintptr x2) { return (x1 * x2) ; }

static inline
atstype_uintptr
atspre_g0uint_div_uintptr
  (atstype_uintptr x1, atstype_uintptr x2) { return (x1 / x2) ; }

static inline
atstype_bool
atspre_g0uint_isgtz_uintptr (atstype_uintptr x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_iseqz_uintptr (atstype_uintptr x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_isneqz_uintptr (atstype_uintptr x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lt_uintptr
(
  atstype_uintptr x1, atstype_uintptr x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lte_uintptr
(
  atstype_uintptr x1, atstype_uintptr x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gt_uintptr
(
  atstype_uintptr x1, atstype_uintptr x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gte_uintptr
(
  atstype_uintptr x1, atstype_uintptr x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_eq_uintptr
(
  atstype_uintptr x1, atstype_uintptr x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_neq_uintptr
(
  atstype_uintptr x1, atstype_uintptr x2
) {
  return (x1 != x2 ? 1 : 0) ;
}



static inline
atsvoid_t0ype
atspre_fprint_uintptr
(
  atstype_ref r, atstype_uintptr x
) {
  int err ;
  err = fprintf((FILE*)r, "%llu", (atstype_ullint)x) ;
  return ;
}
# 35 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/integer_fixed.cats" 1
# 55 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/integer_fixed.cats"
typedef int8_t atstype_int8 ;
typedef int16_t atstype_int16 ;
typedef int32_t atstype_int32 ;
typedef int64_t atstype_int64 ;

typedef uint8_t atstype_uint8 ;
typedef uint16_t atstype_uint16 ;
typedef uint32_t atstype_uint32 ;
typedef uint64_t atstype_uint64 ;




extern
int fprintf (FILE *stream, const char *format, ...) ;




static inline
atstype_int8
atspre_g0int_neg_int8
  (atstype_int8 x) { return (-x) ; }

static inline
atstype_int8
atspre_g0int_succ_int8
  (atstype_int8 x) { return (x + 1) ; }

static inline
atstype_int8
atspre_g0int_pred_int8
  (atstype_int8 x) { return (x - 1) ; }

static inline
atstype_int8
atspre_g0int_half_int8
  (atstype_int8 x) { return (x / 2) ; }

static inline
atstype_int8
atspre_g0int_add_int8
  (atstype_int8 x1, atstype_int8 x2) { return (x1 + x2) ; }

static inline
atstype_int8
atspre_g0int_sub_int8
  (atstype_int8 x1, atstype_int8 x2) { return (x1 - x2) ; }

static inline
atstype_int8
atspre_g0int_mul_int8
  (atstype_int8 x1, atstype_int8 x2) { return (x1 * x2) ; }

static inline
atstype_int8
atspre_g0int_div_int8
  (atstype_int8 x1, atstype_int8 x2) { return (x1 / x2) ; }

static inline
atstype_int8
atspre_g0int_mod_int8
  (atstype_int8 x1, atstype_int8 x2) { return (x1 % x2) ; }

static inline
atstype_bool
atspre_g0int_isltz_int8 (atstype_int8 x)
{
  return (x < 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isltez_int8 (atstype_int8 x)
{
  return (x <= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtz_int8 (atstype_int8 x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtez_int8 (atstype_int8 x)
{
  return (x >= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_iseqz_int8 (atstype_int8 x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isneqz_int8 (atstype_int8 x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lt_int8
(
  atstype_int8 x1, atstype_int8 x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lte_int8
(
  atstype_int8 x1, atstype_int8 x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gt_int8
(
  atstype_int8 x1, atstype_int8 x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gte_int8
(
  atstype_int8 x1, atstype_int8 x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_eq_int8
(
  atstype_int8 x1, atstype_int8 x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_neq_int8
(
  atstype_int8 x1, atstype_int8 x2
) {
  return (x1 != x2 ? 1 : 0) ;
}
static inline
atstype_int16
atspre_g0int_neg_int16
  (atstype_int16 x) { return (-x) ; }

static inline
atstype_int16
atspre_g0int_succ_int16
  (atstype_int16 x) { return (x + 1) ; }

static inline
atstype_int16
atspre_g0int_pred_int16
  (atstype_int16 x) { return (x - 1) ; }

static inline
atstype_int16
atspre_g0int_half_int16
  (atstype_int16 x) { return (x / 2) ; }

static inline
atstype_int16
atspre_g0int_add_int16
  (atstype_int16 x1, atstype_int16 x2) { return (x1 + x2) ; }

static inline
atstype_int16
atspre_g0int_sub_int16
  (atstype_int16 x1, atstype_int16 x2) { return (x1 - x2) ; }

static inline
atstype_int16
atspre_g0int_mul_int16
  (atstype_int16 x1, atstype_int16 x2) { return (x1 * x2) ; }

static inline
atstype_int16
atspre_g0int_div_int16
  (atstype_int16 x1, atstype_int16 x2) { return (x1 / x2) ; }

static inline
atstype_int16
atspre_g0int_mod_int16
  (atstype_int16 x1, atstype_int16 x2) { return (x1 % x2) ; }

static inline
atstype_bool
atspre_g0int_isltz_int16 (atstype_int16 x)
{
  return (x < 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isltez_int16 (atstype_int16 x)
{
  return (x <= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtz_int16 (atstype_int16 x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtez_int16 (atstype_int16 x)
{
  return (x >= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_iseqz_int16 (atstype_int16 x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isneqz_int16 (atstype_int16 x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lt_int16
(
  atstype_int16 x1, atstype_int16 x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lte_int16
(
  atstype_int16 x1, atstype_int16 x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gt_int16
(
  atstype_int16 x1, atstype_int16 x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gte_int16
(
  atstype_int16 x1, atstype_int16 x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_eq_int16
(
  atstype_int16 x1, atstype_int16 x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_neq_int16
(
  atstype_int16 x1, atstype_int16 x2
) {
  return (x1 != x2 ? 1 : 0) ;
}
static inline
atstype_int32
atspre_g0int_neg_int32
  (atstype_int32 x) { return (-x) ; }

static inline
atstype_int32
atspre_g0int_succ_int32
  (atstype_int32 x) { return (x + 1) ; }

static inline
atstype_int32
atspre_g0int_pred_int32
  (atstype_int32 x) { return (x - 1) ; }

static inline
atstype_int32
atspre_g0int_half_int32
  (atstype_int32 x) { return (x / 2) ; }

static inline
atstype_int32
atspre_g0int_add_int32
  (atstype_int32 x1, atstype_int32 x2) { return (x1 + x2) ; }

static inline
atstype_int32
atspre_g0int_sub_int32
  (atstype_int32 x1, atstype_int32 x2) { return (x1 - x2) ; }

static inline
atstype_int32
atspre_g0int_mul_int32
  (atstype_int32 x1, atstype_int32 x2) { return (x1 * x2) ; }

static inline
atstype_int32
atspre_g0int_div_int32
  (atstype_int32 x1, atstype_int32 x2) { return (x1 / x2) ; }

static inline
atstype_int32
atspre_g0int_mod_int32
  (atstype_int32 x1, atstype_int32 x2) { return (x1 % x2) ; }

static inline
atstype_bool
atspre_g0int_isltz_int32 (atstype_int32 x)
{
  return (x < 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isltez_int32 (atstype_int32 x)
{
  return (x <= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtz_int32 (atstype_int32 x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtez_int32 (atstype_int32 x)
{
  return (x >= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_iseqz_int32 (atstype_int32 x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isneqz_int32 (atstype_int32 x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lt_int32
(
  atstype_int32 x1, atstype_int32 x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lte_int32
(
  atstype_int32 x1, atstype_int32 x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gt_int32
(
  atstype_int32 x1, atstype_int32 x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gte_int32
(
  atstype_int32 x1, atstype_int32 x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_eq_int32
(
  atstype_int32 x1, atstype_int32 x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_neq_int32
(
  atstype_int32 x1, atstype_int32 x2
) {
  return (x1 != x2 ? 1 : 0) ;
}
static inline
atstype_int64
atspre_g0int_neg_int64
  (atstype_int64 x) { return (-x) ; }

static inline
atstype_int64
atspre_g0int_succ_int64
  (atstype_int64 x) { return (x + 1) ; }

static inline
atstype_int64
atspre_g0int_pred_int64
  (atstype_int64 x) { return (x - 1) ; }

static inline
atstype_int64
atspre_g0int_half_int64
  (atstype_int64 x) { return (x / 2) ; }

static inline
atstype_int64
atspre_g0int_add_int64
  (atstype_int64 x1, atstype_int64 x2) { return (x1 + x2) ; }

static inline
atstype_int64
atspre_g0int_sub_int64
  (atstype_int64 x1, atstype_int64 x2) { return (x1 - x2) ; }

static inline
atstype_int64
atspre_g0int_mul_int64
  (atstype_int64 x1, atstype_int64 x2) { return (x1 * x2) ; }

static inline
atstype_int64
atspre_g0int_div_int64
  (atstype_int64 x1, atstype_int64 x2) { return (x1 / x2) ; }

static inline
atstype_int64
atspre_g0int_mod_int64
  (atstype_int64 x1, atstype_int64 x2) { return (x1 % x2) ; }

static inline
atstype_bool
atspre_g0int_isltz_int64 (atstype_int64 x)
{
  return (x < 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isltez_int64 (atstype_int64 x)
{
  return (x <= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtz_int64 (atstype_int64 x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isgtez_int64 (atstype_int64 x)
{
  return (x >= 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_iseqz_int64 (atstype_int64 x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_isneqz_int64 (atstype_int64 x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lt_int64
(
  atstype_int64 x1, atstype_int64 x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_lte_int64
(
  atstype_int64 x1, atstype_int64 x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gt_int64
(
  atstype_int64 x1, atstype_int64 x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_gte_int64
(
  atstype_int64 x1, atstype_int64 x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_eq_int64
(
  atstype_int64 x1, atstype_int64 x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0int_neq_int64
(
  atstype_int64 x1, atstype_int64 x2
) {
  return (x1 != x2 ? 1 : 0) ;
}



static inline
atsvoid_t0ype
atspre_fprint_int8
(
  atstype_ref r, atstype_int8 x
) {
  int err ;
  err = fprintf((FILE*)r, "%i", (atstype_int)x) ;
  return ;
}




static inline
atsvoid_t0ype
atspre_fprint_int16
(
  atstype_ref r, atstype_int16 x
) {
  int err ;
  err = fprintf((FILE*)r, "%i", (atstype_int)x) ;
  return ;
}




static inline
atsvoid_t0ype
atspre_fprint_int32
(
  atstype_ref r, atstype_int32 x
) {
  int err ;
  err = fprintf((FILE*)r, "%li", (atstype_lint)x) ;
  return ;
}




static inline
atsvoid_t0ype
atspre_fprint_int64
(
  atstype_ref r, atstype_int64 x
) {
  int err ;
  err = fprintf((FILE*)r, "%lli", (atstype_llint)x) ;
  return ;
}






static inline
atstype_uint8
atspre_g0uint_succ_uint8
  (atstype_uint8 x) { return (x + 1) ; }

static inline
atstype_uint8
atspre_g0uint_pred_uint8
  (atstype_uint8 x) { return (x - 1) ; }

static inline
atstype_uint8
atspre_g0uint_half_uint8
  (atstype_uint8 x) { return (x >> 1) ; }

static inline
atstype_uint8
atspre_g0uint_add_uint8
  (atstype_uint8 x1, atstype_uint8 x2) { return (x1 + x2) ; }

static inline
atstype_uint8
atspre_g0uint_sub_uint8
  (atstype_uint8 x1, atstype_uint8 x2) { return (x1 - x2) ; }

static inline
atstype_uint8
atspre_g0uint_mul_uint8
  (atstype_uint8 x1, atstype_uint8 x2) { return (x1 * x2) ; }

static inline
atstype_uint8
atspre_g0uint_div_uint8
  (atstype_uint8 x1, atstype_uint8 x2) { return (x1 / x2) ; }

static inline
atstype_uint8
atspre_g0uint_mod_uint8
  (atstype_uint8 x1, atstype_uint8 x2) { return (x1 % x2) ; }

static inline
atstype_uint8
atspre_g0uint_lsl_uint8
  (atstype_uint8 x, atstype_int n) { return (x << n) ; }

static inline
atstype_uint8
atspre_g0uint_lsr_uint8
  (atstype_uint8 x, atstype_int n) { return (x >> n) ; }

static inline
atstype_uint8
atspre_g0uint_lnot_uint8
  (atstype_uint8 x) { return ~(x) ; }

static inline
atstype_uint8
atspre_g0uint_lor_uint8
  (atstype_uint8 x, atstype_uint8 y) { return (x | y) ; }

static inline
atstype_uint8
atspre_g0uint_land_uint8
  (atstype_uint8 x, atstype_uint8 y) { return (x & y) ; }

static inline
atstype_uint8
atspre_g0uint_lxor_uint8
  (atstype_uint8 x, atstype_uint8 y) { return (x ^ y) ; }

static inline
atstype_bool
atspre_g0uint_isgtz_uint8 (atstype_uint8 x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_iseqz_uint8 (atstype_uint8 x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_isneqz_uint8 (atstype_uint8 x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lt_uint8
(
  atstype_uint8 x1, atstype_uint8 x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lte_uint8
(
  atstype_uint8 x1, atstype_uint8 x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gt_uint8
(
  atstype_uint8 x1, atstype_uint8 x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gte_uint8
(
  atstype_uint8 x1, atstype_uint8 x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_eq_uint8
(
  atstype_uint8 x1, atstype_uint8 x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_neq_uint8
(
  atstype_uint8 x1, atstype_uint8 x2
) {
  return (x1 != x2 ? 1 : 0) ;
}
static inline
atstype_uint16
atspre_g0uint_succ_uint16
  (atstype_uint16 x) { return (x + 1) ; }

static inline
atstype_uint16
atspre_g0uint_pred_uint16
  (atstype_uint16 x) { return (x - 1) ; }

static inline
atstype_uint16
atspre_g0uint_half_uint16
  (atstype_uint16 x) { return (x >> 1) ; }

static inline
atstype_uint16
atspre_g0uint_add_uint16
  (atstype_uint16 x1, atstype_uint16 x2) { return (x1 + x2) ; }

static inline
atstype_uint16
atspre_g0uint_sub_uint16
  (atstype_uint16 x1, atstype_uint16 x2) { return (x1 - x2) ; }

static inline
atstype_uint16
atspre_g0uint_mul_uint16
  (atstype_uint16 x1, atstype_uint16 x2) { return (x1 * x2) ; }

static inline
atstype_uint16
atspre_g0uint_div_uint16
  (atstype_uint16 x1, atstype_uint16 x2) { return (x1 / x2) ; }

static inline
atstype_uint16
atspre_g0uint_mod_uint16
  (atstype_uint16 x1, atstype_uint16 x2) { return (x1 % x2) ; }

static inline
atstype_uint16
atspre_g0uint_lsl_uint16
  (atstype_uint16 x, atstype_int n) { return (x << n) ; }

static inline
atstype_uint16
atspre_g0uint_lsr_uint16
  (atstype_uint16 x, atstype_int n) { return (x >> n) ; }

static inline
atstype_uint16
atspre_g0uint_lnot_uint16
  (atstype_uint16 x) { return ~(x) ; }

static inline
atstype_uint16
atspre_g0uint_lor_uint16
  (atstype_uint16 x, atstype_uint16 y) { return (x | y) ; }

static inline
atstype_uint16
atspre_g0uint_land_uint16
  (atstype_uint16 x, atstype_uint16 y) { return (x & y) ; }

static inline
atstype_uint16
atspre_g0uint_lxor_uint16
  (atstype_uint16 x, atstype_uint16 y) { return (x ^ y) ; }

static inline
atstype_bool
atspre_g0uint_isgtz_uint16 (atstype_uint16 x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_iseqz_uint16 (atstype_uint16 x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_isneqz_uint16 (atstype_uint16 x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lt_uint16
(
  atstype_uint16 x1, atstype_uint16 x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lte_uint16
(
  atstype_uint16 x1, atstype_uint16 x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gt_uint16
(
  atstype_uint16 x1, atstype_uint16 x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gte_uint16
(
  atstype_uint16 x1, atstype_uint16 x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_eq_uint16
(
  atstype_uint16 x1, atstype_uint16 x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_neq_uint16
(
  atstype_uint16 x1, atstype_uint16 x2
) {
  return (x1 != x2 ? 1 : 0) ;
}
static inline
atstype_uint32
atspre_g0uint_succ_uint32
  (atstype_uint32 x) { return (x + 1) ; }

static inline
atstype_uint32
atspre_g0uint_pred_uint32
  (atstype_uint32 x) { return (x - 1) ; }

static inline
atstype_uint32
atspre_g0uint_half_uint32
  (atstype_uint32 x) { return (x >> 1) ; }

static inline
atstype_uint32
atspre_g0uint_add_uint32
  (atstype_uint32 x1, atstype_uint32 x2) { return (x1 + x2) ; }

static inline
atstype_uint32
atspre_g0uint_sub_uint32
  (atstype_uint32 x1, atstype_uint32 x2) { return (x1 - x2) ; }

static inline
atstype_uint32
atspre_g0uint_mul_uint32
  (atstype_uint32 x1, atstype_uint32 x2) { return (x1 * x2) ; }

static inline
atstype_uint32
atspre_g0uint_div_uint32
  (atstype_uint32 x1, atstype_uint32 x2) { return (x1 / x2) ; }

static inline
atstype_uint32
atspre_g0uint_mod_uint32
  (atstype_uint32 x1, atstype_uint32 x2) { return (x1 % x2) ; }

static inline
atstype_uint32
atspre_g0uint_lsl_uint32
  (atstype_uint32 x, atstype_int n) { return (x << n) ; }

static inline
atstype_uint32
atspre_g0uint_lsr_uint32
  (atstype_uint32 x, atstype_int n) { return (x >> n) ; }

static inline
atstype_uint32
atspre_g0uint_lnot_uint32
  (atstype_uint32 x) { return ~(x) ; }

static inline
atstype_uint32
atspre_g0uint_lor_uint32
  (atstype_uint32 x, atstype_uint32 y) { return (x | y) ; }

static inline
atstype_uint32
atspre_g0uint_land_uint32
  (atstype_uint32 x, atstype_uint32 y) { return (x & y) ; }

static inline
atstype_uint32
atspre_g0uint_lxor_uint32
  (atstype_uint32 x, atstype_uint32 y) { return (x ^ y) ; }

static inline
atstype_bool
atspre_g0uint_isgtz_uint32 (atstype_uint32 x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_iseqz_uint32 (atstype_uint32 x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_isneqz_uint32 (atstype_uint32 x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lt_uint32
(
  atstype_uint32 x1, atstype_uint32 x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lte_uint32
(
  atstype_uint32 x1, atstype_uint32 x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gt_uint32
(
  atstype_uint32 x1, atstype_uint32 x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gte_uint32
(
  atstype_uint32 x1, atstype_uint32 x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_eq_uint32
(
  atstype_uint32 x1, atstype_uint32 x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_neq_uint32
(
  atstype_uint32 x1, atstype_uint32 x2
) {
  return (x1 != x2 ? 1 : 0) ;
}
static inline
atstype_uint64
atspre_g0uint_succ_uint64
  (atstype_uint64 x) { return (x + 1) ; }

static inline
atstype_uint64
atspre_g0uint_pred_uint64
  (atstype_uint64 x) { return (x - 1) ; }

static inline
atstype_uint64
atspre_g0uint_half_uint64
  (atstype_uint64 x) { return (x >> 1) ; }

static inline
atstype_uint64
atspre_g0uint_add_uint64
  (atstype_uint64 x1, atstype_uint64 x2) { return (x1 + x2) ; }

static inline
atstype_uint64
atspre_g0uint_sub_uint64
  (atstype_uint64 x1, atstype_uint64 x2) { return (x1 - x2) ; }

static inline
atstype_uint64
atspre_g0uint_mul_uint64
  (atstype_uint64 x1, atstype_uint64 x2) { return (x1 * x2) ; }

static inline
atstype_uint64
atspre_g0uint_div_uint64
  (atstype_uint64 x1, atstype_uint64 x2) { return (x1 / x2) ; }

static inline
atstype_uint64
atspre_g0uint_mod_uint64
  (atstype_uint64 x1, atstype_uint64 x2) { return (x1 % x2) ; }

static inline
atstype_uint64
atspre_g0uint_lsl_uint64
  (atstype_uint64 x, atstype_int n) { return (x << n) ; }

static inline
atstype_uint64
atspre_g0uint_lsr_uint64
  (atstype_uint64 x, atstype_int n) { return (x >> n) ; }

static inline
atstype_uint64
atspre_g0uint_lnot_uint64
  (atstype_uint64 x) { return ~(x) ; }

static inline
atstype_uint64
atspre_g0uint_lor_uint64
  (atstype_uint64 x, atstype_uint64 y) { return (x | y) ; }

static inline
atstype_uint64
atspre_g0uint_land_uint64
  (atstype_uint64 x, atstype_uint64 y) { return (x & y) ; }

static inline
atstype_uint64
atspre_g0uint_lxor_uint64
  (atstype_uint64 x, atstype_uint64 y) { return (x ^ y) ; }

static inline
atstype_bool
atspre_g0uint_isgtz_uint64 (atstype_uint64 x)
{
  return (x > 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_iseqz_uint64 (atstype_uint64 x)
{
  return (x == 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_isneqz_uint64 (atstype_uint64 x)
{
  return (x != 0 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lt_uint64
(
  atstype_uint64 x1, atstype_uint64 x2
) {
  return (x1 < x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_lte_uint64
(
  atstype_uint64 x1, atstype_uint64 x2
) {
  return (x1 <= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gt_uint64
(
  atstype_uint64 x1, atstype_uint64 x2
) {
  return (x1 > x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_gte_uint64
(
  atstype_uint64 x1, atstype_uint64 x2
) {
  return (x1 >= x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_eq_uint64
(
  atstype_uint64 x1, atstype_uint64 x2
) {
  return (x1 == x2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0uint_neq_uint64
(
  atstype_uint64 x1, atstype_uint64 x2
) {
  return (x1 != x2 ? 1 : 0) ;
}



static inline
atsvoid_t0ype
atspre_fprint_uint8
(
  atstype_ref r, atstype_uint8 x
) {
  int err ;
  err = fprintf((FILE*)r, "%u", (atstype_uint)x) ;
  return ;
}




static inline
atsvoid_t0ype
atspre_fprint_uint16
(
  atstype_ref r, atstype_uint16 x
) {
  int err ;
  err = fprintf((FILE*)r, "%u", (atstype_uint)x) ;
  return ;
}




static inline
atsvoid_t0ype
atspre_fprint_uint32
(
  atstype_ref r, atstype_uint32 x
) {
  int err ;
  err = fprintf((FILE*)r, "%lu", (atstype_ulint)x) ;
  return ;
}




static inline
atsvoid_t0ype
atspre_fprint_uint64
(
  atstype_ref r, atstype_uint64 x
) {
  int err ;
  err = fprintf((FILE*)r, "%llu", (atstype_ullint)x) ;
  return ;
}
# 36 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/float.cats" 1
# 52 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/float.cats"
extern
int fprintf (FILE *stream, const char *format, ...) ;




static inline
atstype_float
atspre_g0int2float_int_float
  (atstype_int x) { return ((atstype_float)x) ; }


static inline
atstype_double
atspre_g0int2float_int_double
  (atstype_int x) { return ((atstype_double)x) ; }


static inline
atstype_double
atspre_g0int2float_lint_double
  (atstype_lint x) { return ((atstype_double)x) ; }




static inline
atstype_int
atspre_g0float2int_float_int
  (atstype_float x) { return ((atstype_int)x) ; }
static inline
atstype_lint
atspre_g0float2int_float_lint
  (atstype_float x) { return ((atstype_lint)x) ; }
static inline
atstype_llint
atspre_g0float2int_float_llint
  (atstype_float x) { return ((atstype_llint)x) ; }

static inline
atstype_int
atspre_g0float2int_double_int
  (atstype_double x) { return ((atstype_int)x) ; }
static inline
atstype_lint
atspre_g0float2int_double_lint
  (atstype_double x) { return ((atstype_lint)x) ; }
static inline
atstype_llint
atspre_g0float2int_double_llint
  (atstype_double x) { return ((atstype_llint)x) ; }



static inline
atstype_float
atspre_g0float2float_float_float (atstype_float x) { return (x) ; }

static inline
atstype_double
atspre_g0float2float_double_double (atstype_double x) { return (x) ; }

static inline
atstype_double
atspre_g0float2float_float_double
(
atstype_float x
)
{
 return ((atstype_double)x) ;
}

static inline
atstype_float
atspre_g0float2float_double_float
(
atstype_double x
)
{
 return ((atstype_float)x) ;
}



extern double atof (const char *inp) ;

static inline
atstype_int
atspre_g0string2float_double
  (atstype_string inp) { return atof((char*)inp) ; }



static inline
atstype_float
atspre_g0float_neg_float (atstype_float f) { return (-f) ; }
static inline
atstype_double
atspre_g0float_neg_double (atstype_double f) { return (-f) ; }
static inline
atstype_ldouble
atspre_g0float_neg_ldouble (atstype_ldouble f) { return (-f) ; }

static inline
atstype_float
atspre_g0float_abs_float (atstype_float f) { return (f >= 0 ? f : -f) ; }
static inline
atstype_double
atspre_g0float_abs_double (atstype_double f) { return (f >= 0 ? f : -f) ; }
static inline
atstype_ldouble
atspre_g0float_abs_ldouble (atstype_ldouble f) { return (f >= 0 ? f : -f) ; }

static inline
atstype_float
atspre_g0float_succ_float (atstype_float f) { return (f+1) ; }
static inline
atstype_double
atspre_g0float_succ_double (atstype_double f) { return (f+1) ; }
static inline
atstype_ldouble
atspre_g0float_succ_ldouble (atstype_ldouble f) { return (f+1) ; }

static inline
atstype_float
atspre_g0float_pred_float (atstype_float f) { return (f-1) ; }
static inline
atstype_double
atspre_g0float_pred_double (atstype_double f) { return (f-1) ; }
static inline
atstype_ldouble
atspre_g0float_pred_ldouble (atstype_ldouble f) { return (f-1) ; }




static inline
atstype_float
atspre_g0float_add_float
  (atstype_float f1, atstype_float f2) { return (f1 + f2) ; }

static inline
atstype_float
atspre_g0float_sub_float
  (atstype_float f1, atstype_float f2) { return (f1 - f2) ; }

static inline
atstype_float
atspre_g0float_mul_float
  (atstype_float f1, atstype_float f2) { return (f1 * f2) ; }

static inline
atstype_float
atspre_g0float_div_float
  (atstype_float f1, atstype_float f2) { return (f1 / f2) ; }


static inline
atstype_double
atspre_g0float_add_double
  (atstype_double f1, atstype_double f2) { return (f1 + f2) ; }

static inline
atstype_double
atspre_g0float_sub_double
  (atstype_double f1, atstype_double f2) { return (f1 - f2) ; }

static inline
atstype_double
atspre_g0float_mul_double
  (atstype_double f1, atstype_double f2) { return (f1 * f2) ; }

static inline
atstype_double
atspre_g0float_div_double
  (atstype_double f1, atstype_double f2) { return (f1 / f2) ; }


static inline
atstype_ldouble
atspre_g0float_add_ldouble
  (atstype_ldouble f1, atstype_ldouble f2) { return (f1 + f2) ; }

static inline
atstype_ldouble
atspre_g0float_sub_ldouble
  (atstype_ldouble f1, atstype_ldouble f2) { return (f1 - f2) ; }

static inline
atstype_ldouble
atspre_g0float_mul_ldouble
  (atstype_ldouble f1, atstype_ldouble f2) { return (f1 * f2) ; }

static inline
atstype_ldouble
atspre_g0float_div_ldouble
  (atstype_ldouble f1, atstype_ldouble f2) { return (f1 / f2) ; }


extern atstype_float fmodf (atstype_float, atstype_float) ;
extern atstype_double fmod (atstype_double, atstype_double) ;
extern atstype_ldouble fmodl (atstype_ldouble, atstype_ldouble) ;

static inline
atstype_float
atspre_g0float_mod_float
  (atstype_float f1, atstype_float f2) { return fmodf(f1, f2) ; }
static inline
atstype_double
atspre_g0float_mod_double
  (atstype_double f1, atstype_double f2) { return fmod(f1, f2) ; }
static inline
atstype_ldouble
atspre_g0float_mod_ldouble
  (atstype_ldouble f1, atstype_ldouble f2) { return fmodl(f1, f2) ; }




static inline
atstype_bool
atspre_g0float_lt_float
  (atstype_float f1, atstype_float f2) {
  return (f1 < f2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0float_lte_float
  (atstype_float f1, atstype_float f2) {
  return (f1 <= f2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0float_gt_float
  (atstype_float f1, atstype_float f2) {
  return (f1 > f2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0float_gte_float
  (atstype_float f1, atstype_float f2) {
  return (f1 >= f2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0float_eq_float
  (atstype_float f1, atstype_float f2) {
  return (f1 == f2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0float_neq_float
  (atstype_float f1, atstype_float f2) {
  return (f1 != f2 ? 1 : 0) ;
}

static inline
atstype_bool
atspre_g0float_lt_double
  (atstype_double f1, atstype_double f2) {
  return (f1 < f2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0float_lte_double
  (atstype_double f1, atstype_double f2) {
  return (f1 <= f2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0float_gt_double
  (atstype_double f1, atstype_double f2) {
  return (f1 > f2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0float_gte_double
  (atstype_double f1, atstype_double f2) {
  return (f1 >= f2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0float_eq_double
  (atstype_double f1, atstype_double f2) {
  return (f1 == f2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0float_neq_double
  (atstype_double f1, atstype_double f2) {
  return (f1 != f2 ? 1 : 0) ;
}

static inline
atstype_bool
atspre_g0float_lt_ldouble
  (atstype_ldouble f1, atstype_ldouble f2) {
  return (f1 < f2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0float_lte_ldouble
  (atstype_ldouble f1, atstype_ldouble f2) {
  return (f1 <= f2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0float_gt_ldouble
  (atstype_ldouble f1, atstype_ldouble f2) {
  return (f1 > f2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0float_gte_ldouble
  (atstype_ldouble f1, atstype_ldouble f2) {
  return (f1 >= f2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0float_eq_ldouble
  (atstype_ldouble f1, atstype_ldouble f2) {
  return (f1 == f2 ? 1 : 0) ;
}
static inline
atstype_bool
atspre_g0float_neq_ldouble
  (atstype_ldouble f1, atstype_ldouble f2) {
  return (f1 != f2 ? 1 : 0) ;
}



static inline
atstype_int
atspre_g0float_compare_float
(
  atstype_float f1, atstype_float f2
)
{
  if (f1 > f2) return 1 ; else if (f1 < f2) return -1 ; else return 0 ;
}

static inline
atstype_int
atspre_g0float_compare_double
(
  atstype_double f1, atstype_double f2
)
{
  if (f1 > f2) return 1 ; else if (f1 < f2) return -1 ; else return 0 ;
}

static inline
atstype_int
atspre_g0float_compare_ldouble
(
  atstype_ldouble f1, atstype_ldouble f2
)
{
  if (f1 > f2) return 1 ; else if (f1 < f2) return -1 ; else return 0 ;
}



static inline
atstype_float
atspre_g0float_min_float
  (atstype_float f1, atstype_float f2) { return (f1 <= f2 ? f1 : f2) ; }

static inline
atstype_double
atspre_g0float_min_double
  (atstype_double f1, atstype_double f2) { return (f1 <= f2 ? f1 : f2) ; }

static inline
atstype_ldouble
atspre_g0float_min_ldouble
  (atstype_ldouble f1, atstype_ldouble f2) { return (f1 <= f2 ? f1 : f2) ; }


static inline
atstype_float
atspre_g0float_max_float
  (atstype_float f1, atstype_float f2) { return (f1 >= f2 ? f1 : f2) ; }

static inline
atstype_double
atspre_g0float_max_double
  (atstype_double f1, atstype_double f2) { return (f1 >= f2 ? f1 : f2) ; }

static inline
atstype_ldouble
atspre_g0float_max_ldouble
  (atstype_ldouble f1, atstype_ldouble f2) { return (f1 >= f2 ? f1 : f2) ; }




static inline
atsvoid_t0ype
atspre_fprint_float (
  atstype_ref r, atstype_float x
) {
  int err = 0 ;
  err += fprintf((FILE*)r, "%f", x) ;





  return ;
}




static inline
atsvoid_t0ype
atspre_fprint_double (
  atstype_ref r, atstype_double x
) {
  int err = 0 ;
  err += fprintf((FILE*)r, "%f", x) ;





  return ;
}




static inline
atsvoid_t0ype
atspre_fprint_ldouble (
  atstype_ref r, atstype_ldouble x
) {
  int err = 0 ;
  err += fprintf((FILE*)r, "%Lf", x) ;





  return ;
}







static inline
atstype_float
atspre_add_int_float
  (atstype_int i1, atstype_float f2) { return (((atstype_float)i1) + f2) ; }

static inline
atstype_float
atspre_sub_int_float
  (atstype_int i1, atstype_float f2) { return (((atstype_float)i1) - f2) ; }

static inline
atstype_float
atspre_mul_int_float
  (atstype_int i1, atstype_float f2) { return (((atstype_float)i1) * f2) ; }

static inline
atstype_float
atspre_div_int_float
  (atstype_int i1, atstype_float f2) { return (((atstype_float)i1) / f2) ; }


static inline
atstype_double
atspre_add_int_double
  (atstype_int i1, atstype_double f2) { return (((atstype_double)i1) + f2) ; }

static inline
atstype_double
atspre_sub_int_double
  (atstype_int i1, atstype_double f2) { return (((atstype_double)i1) - f2) ; }

static inline
atstype_double
atspre_mul_int_double
  (atstype_int i1, atstype_double f2) { return (((atstype_double)i1) * f2) ; }

static inline
atstype_double
atspre_div_int_double
  (atstype_int i1, atstype_double f2) { return (((atstype_double)i1) / f2) ; }


static inline
atstype_ldouble
atspre_add_int_ldouble
  (atstype_int i1, atstype_ldouble f2) { return (((atstype_ldouble)i1) + f2) ; }

static inline
atstype_ldouble
atspre_sub_int_ldouble
  (atstype_int i1, atstype_ldouble f2) { return (((atstype_ldouble)i1) - f2) ; }

static inline
atstype_ldouble
atspre_mul_int_ldouble
  (atstype_int i1, atstype_ldouble f2) { return (((atstype_ldouble)i1) * f2) ; }

static inline
atstype_ldouble
atspre_div_int_ldouble
  (atstype_int i1, atstype_ldouble f2) { return (((atstype_ldouble)i1) / f2) ; }





static inline
atstype_float
atspre_add_float_int
  (atstype_float f1, atstype_int i2) { return (f1 + ((atstype_float)i2)) ; }

static inline
atstype_float
atspre_sub_float_int
  (atstype_float f1, atstype_int i2) { return (f1 - ((atstype_float)i2)) ; }

static inline
atstype_float
atspre_mul_float_int
  (atstype_float f1, atstype_int i2) { return (f1 * ((atstype_float)i2)) ; }

static inline
atstype_float
atspre_div_float_int
  (atstype_float f1, atstype_int i2) { return (f1 / ((atstype_float)i2)) ; }


static inline
atstype_double
atspre_add_double_int
  (atstype_double f1, atstype_int i2) { return (f1 + ((atstype_double)i2)) ; }

static inline
atstype_double
atspre_sub_double_int
  (atstype_double f1, atstype_int i2) { return (f1 - ((atstype_double)i2)) ; }

static inline
atstype_double
atspre_mul_double_int
  (atstype_double f1, atstype_int i2) { return (f1 * ((atstype_double)i2)) ; }

static inline
atstype_double
atspre_div_double_int
  (atstype_double f1, atstype_int i2) { return (f1 / ((atstype_double)i2)) ; }


static inline
atstype_ldouble
atspre_add_ldouble_int
  (atstype_ldouble f1, atstype_int i2) { return (f1 + ((atstype_ldouble)i2)) ; }

static inline
atstype_ldouble
atspre_sub_ldouble_int
  (atstype_ldouble f1, atstype_int i2) { return (f1 - ((atstype_ldouble)i2)) ; }

static inline
atstype_ldouble
atspre_mul_ldouble_int
  (atstype_ldouble f1, atstype_int i2) { return (f1 * ((atstype_ldouble)i2)) ; }

static inline
atstype_ldouble
atspre_div_ldouble_int
  (atstype_ldouble f1, atstype_int i2) { return (f1 / ((atstype_ldouble)i2)) ; }
# 37 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/memory.cats" 1
# 38 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/string.cats" 1
# 53 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/string.cats"
extern
size_t strlen (const char *str) ;
extern
int
strcmp (const char *x1, const char *x2) ;

extern
char *strchr(const char *str1, int c2) ;
extern
char *strrchr(const char *str1, int c2) ;
extern
char *strstr(const char *str1, const char *str2) ;

extern
size_t strspn(const char *str1, const char *acc2) ;
extern
size_t strcspn(const char *str1, const char *rej2) ;


extern
void *memcpy(void *dest, const void *src, size_t n) ;






extern
int
fprintf (FILE *stream, const char *format, ...) ;







static inline
atstype_bool
atspre_lt_string_string (
  atstype_string x1, atstype_string x2
) {
  return (strcmp((char*)x1, (char*)x2) < 0 ? 1 : 0) ;
}

static inline
atstype_bool
atspre_lte_string_string (
  atstype_string x1, atstype_string x2
) {
  return (strcmp((char*)x1, (char*)x2) <= 0 ? 1 : 0) ;
}

static inline
atstype_bool
atspre_gt_string_string(
  atstype_string x1, atstype_string x2
) {
  return (strcmp((char*)x1, (char*)x2) > 0 ? 1 : 0) ;
}

static inline
atstype_bool
atspre_gte_string_string (
  atstype_string x1, atstype_string x2
) {
  return (strcmp((char*)x1, (char*)x2) >= 0 ? 1 : 0) ;
}

static inline
atstype_bool
atspre_eq_string_string (
  atstype_string x1, atstype_string x2
) {
  return (strcmp((char*)x1, (char*)x2)==0 ? 1 : 0) ;
}

static inline
atstype_bool
atspre_neq_string_string (
  atstype_string x1, atstype_string x2
) {
  return (strcmp((char*)x1, (char*)x2)!=0 ? 1 : 0) ;
}
# 145 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/string.cats"
static inline
atstype_int
atspre_compare_string_string
  (atstype_string x1, atstype_string x2) { return strcmp((char*)x1, (char*)x2) ; }




static inline
atsvoid_t0ype
atspre_fprint_string
(
  atstype_ref out, atstype_string x
) {
  int err = 0 ;
  err += fprintf((FILE*)out, "%s", (char*)x) ;





  return ;
}





static inline
atsvoid_t0ype
atspre_fprint_substring
(
  atstype_ref out
, atstype_string x
, atstype_size st, atstype_size ln
) {
  int err = 0 ;
  err += fwrite(((char*)x)+st, 1, ln, out) ;





  return ;
}
# 204 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/string.cats"
static inline
atsvoid_t0ype
atspre_fprint_stropt
(
  atstype_ref out, atstype_stropt x
) {
  int err = 0 ;
  if (!x)
  {
    err += fprintf((FILE*)out, "strnone()") ;
  } else {
    err += fprintf((FILE*)out, "strsome(%s)", (char*)x) ;
  }





  return ;
}





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stdarg.h" 1 3 4
# 230 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/string.cats" 2




extern
atstype_string
atspre_string_make_snprintf(atstype_string fmt, ...) ;
extern
atstype_string
atspre_string_make_vsnprintf
  (atstype_size bsz0, atstype_string fmt, va_list ap0) ;
# 39 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/strptr.cats" 1
# 53 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/strptr.cats"
extern
int
strcmp (const char *x1, const char *x2) ;
# 68 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/strptr.cats"
static inline
atstype_int
atspre_compare_strptr_strptr
(
  atstype_strptr x1, atstype_strptr x2
) {
  if (x1==0) {
    return (x2==0 ? 0 : -1) ;
  } else {
    return (x2==0 ? 1 : strcmp((char*)x1, (char*)x2)) ;
  }
}
# 89 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/strptr.cats"
static inline
atsvoid_t0ype
atspre_fprint_strptr
(
  atstype_ref out, atstype_strptr x
) {
  int err = 0 ;
  if (x != 0) {
    err += fprintf((FILE*)out, "%s", (char*)x) ;
  } else {
    err += fprintf((FILE*)out, "%s", "(strnull)") ;
  }





  return ;
}
# 40 "testtemp_dats_memo.c" 2

# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/filebas.cats" 1
# 52 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/filebas.cats"
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4


extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 96 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 127 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 166 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 211 "/usr/include/string.h" 3 4

# 236 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 263 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 282 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 315 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 342 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 397 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 427 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 445 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 489 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 517 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 534 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 557 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 644 "/usr/include/string.h" 3 4

# 53 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/filebas.cats" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 103 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  };
# 106 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 209 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 238 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 263 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 284 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
# 321 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 399 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
# 442 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));
# 534 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4

# 54 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/filebas.cats" 2
# 72 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/filebas.cats"
static inline
atstype_bool
atspre_test_file_exists
  (atstype_string path)
{
  int err;
  struct stat st ;
  err = stat ((const char*)path, &st) ;
  return (err==0) ? 1 : 0 ;
}



static inline
atstype_int
atspre_test_file_mode_fun
(
  atstype_string path, atstype_funptr pred
)
{
  int err;
  struct stat st ;
  err = stat ((const char*)path, &st) ;
  if (err < 0) return -1 ;
  return ((atstype_bool(*)(atstype_uint))(pred))(st.st_mode) ? 1 : 0 ;
}



static inline
atstype_bool
atspre_test_file_isreg
  (atstype_string path)
{
  int err;
  struct stat st ;
  err = stat ((const char*)path, &st) ;
  if (err < 0) return -1 ;
  return (((((st.st_mode)) & 0170000) == (0100000))) ? 1 : 0 ;
}



static inline
atstype_int
atspre_test_file_isdir
  (atstype_string path)
{
  int err;
  struct stat st ;
  err = stat ((const char*)path, &st) ;
  if (err < 0) return -1 ;
  return (((((st.st_mode)) & 0170000) == (0040000))) ? 1 : 0 ;
}



static inline
atstype_int
atspre_test_file_isblk
  (atstype_string path)
{
  int err;
  struct stat st ;
  err = stat ((const char*)path, &st) ;
  if (err < 0) return -1 ;
  return (((((st.st_mode)) & 0170000) == (0060000))) ? 1 : 0 ;
}



static inline
atstype_int
atspre_test_file_ischr
  (atstype_string path)
{
  int err;
  struct stat st ;
  err = stat ((const char*)path, &st) ;
  if (err < 0) return -1 ;
  return (((((st.st_mode)) & 0170000) == (0020000))) ? 1 : 0 ;
}



static inline
atstype_int
atspre_test_file_isfifo
  (atstype_string path)
{
  int err;
  struct stat st ;
  err = stat ((const char*)path, &st) ;
  if (err < 0) return -1 ;
  return (((((st.st_mode)) & 0170000) == (0010000))) ? 1 : 0 ;
}



static inline
atstype_ref
atspre_fileref_open_exn
  (atstype_string path, atstype_string fm)
{
  FILE* filr ;
  filr = fopen((char*)path, (char*)fm) ;
  if (!filr) {
    fprintf(
      stderr
    , "exit(ATS): [atspre_fileref_open_exn(%s, %s)] failed.\n"
    , (char*)path, (char*)fm
    ) ;
    exit(1) ;
  }
  return filr ;
}



static inline
atsvoid_t0ype
atspre_fileref_close
  (atstype_ref filr)
{
  int err ;
  err = fclose((FILE*)filr) ;
  if (err < 0) {
    fprintf(
      stderr
    , "exit(ATS): [atspre_fileref_close] failed.\n"
    ) ;
    exit(1) ;
  }
  return ;
}



static inline
atsvoid_t0ype
atspre_fileref_flush
  (atstype_ref filr)
{
  int err ;
  err = fflush((FILE*)filr) ;
  if (err < 0) {
    fprintf(
      stderr
    , "exit(ATS): [atspre_fileref_fflush] failed.\n"
    ) ;
    exit(1) ;
  }
  return ;
}



static inline
atstype_int
atspre_fileref_getc
  (atstype_ref filr) { return fgetc((FILE*)filr) ; }




static inline
atsvoid_t0ype
atspre_fileref_putc
(
  atstype_ref filr, atstype_int c
) {
  fputc (c, (FILE*)filr) ; return ;
}





static inline
atstype_bool
atspre_fileref_is_eof (atstype_ref filr)
{
  int eof ;
  eof = feof ((FILE*)filr) ;
  return (eof != 0 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_fileref_load_int
  (atstype_ref inp, atstype_ref x)
{
  int n ;
  n = fscanf((FILE*)inp, "%i", (atstype_int*)x) ;
  return (n == 1 ? 1 : 0) ;
}

static inline
atstype_bool
atspre_fileref_load_lint
  (atstype_ref inp, atstype_ref x)
{
  int n ;
  n = fscanf((FILE*)inp, "%li", (atstype_lint*)x) ;
  return (n == 1 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_fileref_load_uint
  (atstype_ref inp, atstype_ref x)
{
  int n ;
  n = fscanf((FILE*)inp, "%u", (atstype_uint*)x) ;
  return (n == 1 ? 1 : 0) ;
}

static inline
atstype_bool
atspre_fileref_load_ulint
  (atstype_ref inp, atstype_ref x)
{
  int n ;
  n = fscanf((FILE*)inp, "%lu", (atstype_ulint*)x) ;
  return (n == 1 ? 1 : 0) ;
}



static inline
atstype_bool
atspre_fileref_load_float
  (atstype_ref inp, atstype_ref x)
{
  int n ;
  n = fscanf((FILE*)inp, "%f", (atstype_float*)x) ;
  return (n == 1 ? 1 : 0) ;
}

static inline
atstype_bool
atspre_fileref_load_double
  (atstype_ref inp, atstype_ref x)
{
  int n ;
  n = fscanf((FILE*)inp, "%lf", (atstype_double*)x) ;
  return (n == 1 ? 1 : 0) ;
}



extern
atstype_ptr
atspre_fileref_get_line_string_main2
(
  atstype_int bsz
, atstype_ptr filp
, atstype_ref nlen
) ;
# 42 "testtemp_dats_memo.c" 2

# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/list.cats" 1
# 44 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/option.cats" 1
# 45 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/array.cats" 1
# 53 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/array.cats"
extern
void qsort
(
  void *base, size_t nmemb, size_t size
, int(*compar)(const void *, const void *)
) ;
extern
void *bsearch
(
  const void *key
, const void *base
, size_t nmemb, size_t size
, int (*compar)(const void *, const void *)
) ;
# 76 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/array.cats"
extern
void *memcpy(void *dst, const void *src, size_t n) ;


extern
void *memmove(void *dst, const void *src, size_t n) ;







static inline
atsvoid_t0ype
atspre_array_foreach_funenv_tsz
(
  atstype_ptr A
, atstype_size n
, atstype_size tsz
, atstype_funptr f
, atstype_boxed env
) {
  char *p ;
  size_t i ;
  p = (char*)A ;
  for (i = 0 ; i < n ; i += 1)
  {
    ((void(*)(void*, void*))(f))(p, env) ; p += tsz ;
  }
  return ;
}
# 46 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/arrayptr.cats" 1
# 51 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/arrayptr.cats"
static inline
atstype_arrptr
atspre_arrpsz_get_ptrsize
(
  atstype_arrpsz psz, atstype_ref asz
) {
  *(size_t*)asz = psz.size ; return (psz.ptr) ;
}



static inline
atsvoid_t0ype
atspre_arrayptr_free
  (atstype_arrptr p0) { atsruntime_mfree_undef (p0) ; return ; }




static inline
atstype_arrptr
atspre_arrayptr_make_arrpsz
  (atstype_arrpsz psz) { return (psz).ptr ; }
# 47 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/arrayref.cats" 1
# 51 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/arrayref.cats"
static inline
atstype_arrptr
atspre_arrayref_make_arrpsz
  (atstype_arrpsz psz) { return (psz).ptr ; }
# 48 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/matrix.cats" 1
# 49 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/matrixptr.cats" 1
# 51 "/home/kiwamu/src/ATS-Postiats/prelude/CATS/matrixptr.cats"
static inline
atsvoid_t0ype
atspre_matrixptr_free
  (atstype_arrptr ptr) { atsruntime_mfree_undef (ptr) ; return ; }
# 50 "testtemp_dats_memo.c" 2
# 104 "testtemp_dats_memo.c"
# 1 "/home/kiwamu/src/ATS-Postiats/libc/CATS/stdio.cats" 1
# 56 "/home/kiwamu/src/ATS-Postiats/libc/CATS/stdio.cats"
extern void exit (int status) ;
# 105 "testtemp_dats_memo.c" 2







# 1 "/home/kiwamu/src/ATS-Postiats/libc/sys/CATS/types.cats" 1
# 55 "/home/kiwamu/src/ATS-Postiats/libc/sys/CATS/types.cats"
typedef mode_t atslib_mode_type ;







typedef time_t atslib_types_time_type ;
# 78 "/home/kiwamu/src/ATS-Postiats/libc/sys/CATS/types.cats"
typedef ino_t atslib_ino_type ;
typedef off_t atslib_off_type ;



typedef pid_t atslib_pid_type ;
typedef uid_t atslib_uid_type ;
typedef gid_t atslib_gid_type ;



static inline
atslib_mode_type
atslib_lor_mode_mode
(
  atslib_mode_type m1
, atslib_mode_type m2
) {
  return (m1 | m2) ;
}

static inline
atslib_mode_type
atslib_land_mode_mode
(
  atslib_mode_type m1
, atslib_mode_type m2
) {
  return (m1 & m2) ;
}



static inline
atstype_bool
atslib_lt_time_time
(
  atslib_types_time_type t1
, atslib_types_time_type t2
)
{
  return (t1 < t2 ? 1 : 0) ;
}
static inline
atstype_bool
atslib_lte_time_time
(
  atslib_types_time_type t1
, atslib_types_time_type t2
)
{
  return (t1 <= t2 ? 1 : 0) ;
}




static inline
atstype_bool
atslib_eq_time_time
(
  atslib_types_time_type t1
, atslib_types_time_type t2
)
{
  return (t1 == t2 ? 1 : 0) ;
}
static inline
atstype_bool
atslib_neq_time_time
(
  atslib_types_time_type t1
, atslib_types_time_type t2
)
{
  return (t1 != t2 ? 1 : 0) ;
}
# 113 "testtemp_dats_memo.c" 2







# 1 "/home/kiwamu/src/ATS-Postiats/libc/sys/CATS/stat.cats" 1
# 55 "/home/kiwamu/src/ATS-Postiats/libc/sys/CATS/stat.cats"
typedef
struct stat
atslib_stat_struct ;
# 121 "testtemp_dats_memo.c" 2
# 220 "testtemp_dats_memo.c"



# 236 "testtemp_dats_memo.c"
extern
atsvoid_t0ype
the_atsexncon_initize
(
  atstype_exnconptr d2c, atstype_string exnmsg
) ;
# 280 "testtemp_dats_memo.c"
static
atstype_int
_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__call_plus1__1__1() ;

static
atstype_int
_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__plus1__0__1() ;
# 296 "testtemp_dats_memo.c"
static
atstype_int
_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__call_plus1__1__2(atstype_int) ;

static
atstype_int
_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__plus1__6__1(atstype_int) ;
# 387 "testtemp_dats_memo.c"
extern
atsvoid_t0ype
mainats_void_0()
{

 ;
 ;
atstype_int tmp4 ;
 ;
 ;
atstype_int tmp10 ;





__patsflab_main_void_0:
# 413 "testtemp_dats_memo.c"
(tmp4 = _057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__call_plus1__1__1()) ;




atspre_fprint_int(stdout, (tmp4)) ;




atspre_fprint_newline(stdout) ;
# 443 "testtemp_dats_memo.c"
(tmp10 = _057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__call_plus1__1__2((10))) ;




atspre_fprint_int(stdout, (tmp10)) ;




atspre_fprint_newline(stdout) ;
# 467 "testtemp_dats_memo.c"

return ;
}
# 480 "testtemp_dats_memo.c"
static





atstype_int
_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__call_plus1__1__1()
{

atstype_int tmpret1__1 ;





__patsflab_call_plus1:



(tmpret1__1 = _057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__plus1__0__1()) ;


return(tmpret1__1) ;
}
# 515 "testtemp_dats_memo.c"
static





atstype_int
_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__plus1__0__1()
{

atstype_int tmpret0__1 ;





__patsflab_plus1:



(tmpret0__1 = atspre_g0int_add_int((0), (1))) ;


return(tmpret0__1) ;
}
# 587 "testtemp_dats_memo.c"
static





atstype_int
_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__call_plus1__1__2(atstype_int env0)
{

atstype_int tmpret1__2 ;





__patsflab_call_plus1:



(tmpret1__2 = _057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__plus1__6__1(env0)) ;


return(tmpret1__2) ;
}
# 622 "testtemp_dats_memo.c"
static





atstype_int
_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__plus1__6__1(atstype_int env0)
{

atstype_int tmpret8__1 ;





__patsflab_plus1:



(tmpret8__1 = atspre_g0int_add_int(env0, (1))) ;


return(tmpret8__1) ;
}




extern
atsvoid_t0ype
_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__dynload()
{

int _057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__dynloadflag = 0

  ;
if(((_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__dynloadflag)==0))



            {
_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__dynloadflag = 1 ;






}

return ;
}





# 1 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime.c" 1
# 40 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime.c"
extern void exit (int) ;



# 1 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_basics.h" 1
# 45 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_typedefs.h" 1
# 46 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime.c" 2
# 55 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime.c"
atstype_exncon
ATSLIB_056_prelude__AssertExn = { 10, "AssertException" } ;
atstype_exncon
ATSLIB_056_prelude__GenerallyExn = { 20, "GenerallyException" } ;
atstype_exncon
ATSLIB_056_prelude__IllegalArgExn = { 30, "IllegalArgException" } ;







atstype_exncon
ATSLIB_056_prelude__NotFoundExn = { 40, "NotFoundException" } ;

atstype_exncon
ATSLIB_056_prelude__ListSubscriptExn = { 50, "ListSubscriptException" } ;
atstype_exncon
ATSLIB_056_prelude__StreamSubscriptExn = { 51, "StreamSubscriptException" } ;

atstype_exncon
ATSLIB_056_prelude__ArraySubscriptExn = { 60, "ArraySubscriptException" } ;
atstype_exncon
ATSLIB_056_prelude__MatrixSubscriptExn = { 61, "MatrixSubscriptException" } ;

atstype_exncon ATSLIB_056_prelude__NotSomeExn = { 70, "NotSomeException" } ;







extern
void
the_atsexncon_initize
(
  atstype_exncon *d2c, char* exnmsg
)
{

  static int the_atsexntag = 1024 ;

  if (!d2c->exntag)
  {
    d2c->exntag = the_atsexntag ;
    the_atsexntag = the_atsexntag + 1 ;
  }
  d2c->exnmsg = exnmsg ;
  return ;
}
# 115 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime.c"
extern
void
atsruntime_handle_unmatchedval
  (char *msg0)
{
  fprintf(
    stderr
  , "exit(ATS): unmatched value at run-time:\n%s\n", msg0
  ) ; exit(1) ;
  return ;
}




extern
void
atsruntime_handle_unmatchedarg
  (char *msg0)
{
  fprintf(
    stderr
  , "exit(ATS): unmatched funarg at run-time:\n%s\n", msg0
  ) ; exit(1) ;
  return ;
}





extern
void
atsruntime_handle_uncaughtexn_rest
  (atstype_exncon *exn0)
{
  fprintf(
    stderr
  , "exit(ATS): uncaught exception at run-time: %s(%d)\n", exn0->exnmsg, exn0->exntag
  ) ; exit(1) ;
  return ;
}
# 681 "testtemp_dats_memo.c" 2
# 1 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime_memalloc.c" 1
# 682 "testtemp_dats_memo.c" 2

# 1 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime2_dats.c" 1
# 10 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime2_dats.c"
typedef
struct {
int exntag ;
char *exnmsg ;
atstype_ptrk atslab__0;
} pats_ccomp_runtime2_tyexn ;
# 28 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime2_dats.c"



extern atsvoid_t0ype atsruntime_handle_uncaughtexn_rest (atstype_exnconptr) ;
# 45 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime2_dats.c"
extern
atsvoid_t0ype
the_atsexncon_initize
(
  atstype_exnconptr d2c, atstype_string exnmsg
) ;
# 82 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime2_dats.c"
extern
atsvoid_t0ype
atsruntime_handle_uncaughtexn(void *arg0)
{

 ;
atstype_ptrk tmp1 ;
atstype_ptrk tmp2 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;
 ;





__patsflab_atsruntime_handle_uncaughtexn:



do {







__atstmplab0:



if(!(((arg0)==(void*)(&(ATSLIB_056_prelude__AssertExn))))) { goto __atstmplab2 ; } ;



__atstmplab1:
# 145 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime2_dats.c"
atspre_fprint_string(stderr, (("exit(ATS): uncaught exception at run-time"))) ;




atspre_fprint_string(stderr, ((": AssertExn"))) ;




atspre_fprint_newline(stderr) ;
# 164 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime2_dats.c"
atspre_exit((1)) ;







break ;





__atstmplab2:



if(!(((arg0)==(void*)(&(ATSLIB_056_prelude__NotFoundExn))))) { goto __atstmplab4 ; } ;



__atstmplab3:
# 202 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime2_dats.c"
atspre_fprint_string(stderr, (("exit(ATS): uncaught exception at run-time"))) ;




atspre_fprint_string(stderr, ((": NotFoundExn"))) ;




atspre_fprint_newline(stderr) ;
# 221 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime2_dats.c"
atspre_exit((1)) ;







break ;





__atstmplab4:



if(!((((struct{ int exntag; char *exnmsg; }*)(arg0))->exntag==(&(ATSLIB_056_prelude__GenerallyExn))->exntag))) { goto __atstmplab6 ; } ;



__atstmplab5:



(tmp1 = (((pats_ccomp_runtime2_tyexn*)arg0)->atslab__0)) ;
# 269 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime2_dats.c"
atspre_fprint_string(stderr, (("exit(ATS): uncaught exception at run-time"))) ;




atspre_fprint_string(stderr, ((": GenerallyExn: "))) ;




atspre_fprint_string(stderr, (tmp1)) ;




atspre_fprint_newline(stderr) ;
# 293 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime2_dats.c"
atspre_exit((1)) ;







break ;





__atstmplab6:



if(!((((struct{ int exntag; char *exnmsg; }*)(arg0))->exntag==(&(ATSLIB_056_prelude__IllegalArgExn))->exntag))) { goto __atstmplab8 ; } ;



__atstmplab7:



(tmp2 = (((pats_ccomp_runtime2_tyexn*)arg0)->atslab__0)) ;
# 341 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime2_dats.c"
atspre_fprint_string(stderr, (("exit(ATS): uncaught exception at run-time"))) ;




atspre_fprint_string(stderr, ((": IllegalArgExn: "))) ;




atspre_fprint_string(stderr, (tmp2)) ;




atspre_fprint_newline(stderr) ;
# 365 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime2_dats.c"
atspre_exit((1)) ;







break ;





__atstmplab8:
# 389 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime2_dats.c"
atsruntime_handle_uncaughtexn_rest(arg0) ;

break ;




} while(0) ;


return ;
}
# 684 "testtemp_dats_memo.c" 2

# 1 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime_trywith.c" 1
# 40 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime_trywith.c"
# 1 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_exception.h" 1
# 41 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime_trywith.c" 2
# 49 "/home/kiwamu/src/ATS-Postiats/ccomp/runtime/pats_ccomp_runtime_trywith.c"
extern
atsexnframe_ptr
*my_atsexnframe_getref ()
{

static
atsexnframe_t *my_atsexnframe = (void*)0 ;

return &(my_atsexnframe) ;

}



extern
void
atsruntime_raise
  (void *exn0)
{

  atsexnframe_t *frame ;
  frame = *(my_atsexnframe_getref()) ;

  do {
    if (!frame) break ;
    (frame)->exn = (atstype_exnconptr)exn0 ;
    longjmp((frame)->env, 1) ;
  } while (0) ;

  atsruntime_handle_uncaughtexn(exn0) ;

  return ;

}
# 686 "testtemp_dats_memo.c" 2







int
main
(
int argc, char **argv, char **envp
) {
int err = 0 ;
_057_home_057_kiwamu_057_src_057_practice_055_ats_057_localized_055_template_057_testtemp_056_dats__dynload() ;
mainats_void_0() ;
return (err) ;
}
