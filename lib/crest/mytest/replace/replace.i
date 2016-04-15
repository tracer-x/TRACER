# 1 "replace.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "replace.c"


extern void exit();
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 313 "/usr/include/features.h" 3 4
# 1 "/usr/include/bits/predefs.h" 1 3 4
# 314 "/usr/include/features.h" 2 3 4
# 346 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 353 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 354 "/usr/include/sys/cdefs.h" 2 3 4
# 347 "/usr/include/features.h" 2 3 4
# 378 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4




# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 2 3 4
# 379 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.3/include/stddef.h" 1 3 4
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.3/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


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
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


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
typedef long int __swblk_t;
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

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.3/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
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
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.3/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.4.3/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 203 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
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
# 319 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
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
# 364 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 416 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
# 490 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));
# 76 "/usr/include/stdio.h" 2 3 4
# 89 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 141 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 142 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__));








extern FILE *tmpfile (void) ;
# 186 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 229 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 243 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 272 "/usr/include/stdio.h" 3 4

# 283 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;
# 296 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  __attribute__ ((__nothrow__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 394 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
# 425 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;


extern int scanf (__const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;

extern int sscanf (__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__));
# 445 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 476 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf")



     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 504 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 532 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 543 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 576 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 638 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 710 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 746 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 765 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 788 "/usr/include/stdio.h" 3 4

# 797 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 827 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 846 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 886 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
# 916 "/usr/include/stdio.h" 3 4

# 5 "replace.c" 2

void Caseerror();

typedef char bool;
# 35 "replace.c"
typedef char character;
typedef char string[100];

bool
getline(s, maxsize)
char *s;
int maxsize;
{
    char *result;
    result = fgets(s, maxsize, stdin);
    return (result != 0);
}
int
addstr(c, outset, j, maxset)
char c;
char *outset;
int *j;
int maxset;
{
    bool result;
    if (*j >= maxset)
 result = 0;
    else {
 outset[*j] = c;
 *j = *j + 1;
 result = 1;
    }
    return result;
}

char
esc(s, i)
char *s;
int *i;
{
    char result;
    if (s[*i] != '@')
 result = s[*i];
    else
 if (s[*i + 1] == '\0')
     result = '@';
 else
 {
     *i = *i + 1;
     if (s[*i] == 'n')
  result = 10;
     else
  if (s[*i] == 't')
      result = 9;
  else
      result = s[*i];
 }
    return result;
}

void change();

 void
dodash(delim, src, i, dest, j, maxset)
char delim;
char *src;
int *i;
char *dest;
int *j;
int maxset;
{
    int k;
    bool junk;
    char escjunk;

    while ((src[*i] != delim) && (src[*i] != '\0'))
    {
 if (src[*i] == '@') {
     escjunk = esc(src, i);
     junk = addstr(escjunk, dest, j, maxset);
 } else
     if (src[*i] != '-')
  junk = addstr(src[*i], dest, j, maxset);
     else if (*j <= 1 || src[*i + 1] == '\0')
  junk = addstr('-', dest, j, maxset);
     else if ((isalnum(src[*i - 1])) && (isalnum(src[*i + 1]))
  && (src[*i - 1] <= src[*i + 1]))
  {
      for (k = src[*i-1]+1; k<=src[*i+1]; k++)
      {
   junk = addstr(k, dest, j, maxset);
      }
      *i = *i + 1;
  }
     else
  junk = addstr('-', dest, j, maxset);
 (*i) = (*i) + 1;
    }
}

bool
getccl(arg, i, pat, j)
char *arg;
int *i;
char *pat;
int *j;
{
    int jstart;
    bool junk;

    *i = *i + 1;
    if (arg[*i] == '^') {
 junk = addstr('!', pat, j, 100);
 *i = *i + 1;
    } else
 junk = addstr('[', pat, j, 100);
    jstart = *j;
    junk = addstr(0, pat, j, 100);
    dodash(']', arg, i, pat, j, 100);
    pat[jstart] = *j - jstart - 1;
    return (arg[*i] == ']');
}

 void
stclose(pat, j, lastj)
char *pat;
int *j;
int lastj;
{
    int jt;
    int jp;
    bool junk;


    for (jp = *j - 1; jp >= lastj ; jp--)
    {
 jt = jp + 1;
 junk = addstr(pat[jp], pat, &jt, 100);
    }
    *j = *j + 1;
    pat[lastj] = '*';
}

bool in_set_2(c)
char c;
{
  return (c == '%' || c == '$' || c == '*');
}

bool in_pat_set(c)
char c;
{
  return ( c == 'c' || c == '%' || c == '$' || c == '?'
          || c == '[' || c == '!' || c == '*');
}

int
makepat(arg, start, delim, pat)
char *arg;
int start;
char delim;
char *pat;
{
    int result;
    int i, j, lastj, lj;
    bool done, junk;
    bool getres;
    char escjunk;

    j = 0;
    i = start;
    lastj = 0;
    done = 0;
    while ((!done) && (arg[i] != delim) && (arg[i] != '\0')) {
 lj = j;
 if ((arg[i] == '?'))
     junk = addstr('?', pat, &j, 100);
 else if ((arg[i] == '%') && (i == start))
     junk = addstr('%', pat, &j, 100);
 else if ((arg[i] == '$') && (arg[i+1] == delim))
     junk = addstr('$', pat, &j, 100);
 else if ((arg[i] == '['))
 {
     getres = getccl(arg, &i, pat, &j);
     done = (bool)(getres == 0);
 }
 else if ((arg[i] == '*') && (i > start))
 {
     lj = lastj;
     if (in_set_2(pat[lj]))
  done = 1;
     else
  stclose(pat, &j, lastj);
 }
 else
 {
     junk = addstr('c', pat, &j, 100);
     escjunk = esc(arg, &i);
     junk = addstr(escjunk, pat, &j, 100);
 }
 lastj = lj;
 if ((!done))
     i = i + 1;
    }
    junk = addstr('\0', pat, &j, 100);
    if ((done) || (arg[i] != delim))
 result = 0;
    else
 if ((!junk))
     result = 0;
 else
     result = i;
    return result;
}

int
getpat(arg, pat)
char* arg;
char* pat;
{
    int makeres;

    makeres = makepat(arg, 0, '\0', pat);
    return (makeres > 0);
}

int
makesub(arg, from, delim, sub)
 char* arg;
 int from;
 character delim;
 char* sub;
{
    int result;
    int i, j;
    bool junk;
    character escjunk;

    j = 0;
    i = from;
    while ((arg[i] != delim) && (arg[i] != '\0')) {
 if ((arg[i] == (unsigned)('&')))
     junk = addstr(-1, sub, &j, 100);
 else {
     escjunk = esc(arg, &i);
     junk = addstr(escjunk, sub, &j, 100);
 }
 i = i + 1;
    }
    if (arg[i] != delim)
 result = 0;
    else {
 junk = addstr('\0', &(*sub), &j, 100);
 if ((!junk))
     result = 0;
 else
     result = i;
    }
    return result;
}

bool
getsub(arg, sub)
 char* arg;
 char* sub;
{
    int makeres;

    makeres = makesub(arg, 0, '\0', sub);
    return (makeres > 0);
}

void subline();

 bool
locate(c, pat, offset)
 character c;
 char * pat;
 int offset;
{
    int i;
    bool flag;

    flag = 0;
    i = offset + pat[offset];
    while ((i > offset))
    {
 if (c == pat[i]) {
     flag = 1;
     i = offset;
 } else
     i = i - 1;
    }
    return flag;
}

bool
omatch(lin, i, pat, j)
 char* lin;
 int *i;
 char* pat;
 int j;
{
    char advance;
    bool result;

    advance = -1;
    if ((lin[*i] == '\0'))
 result = 0;
    else
    {
 if (!in_pat_set(pat[j]))
 {
     (void)fprintf(stdout, "in omatch: can't happen\n");
     abort();
 } else
 {
      switch (pat[j])
      {
      case 'c':
   if (lin[*i] == pat[j + 1])
       advance = 1;
   break ;
      case '%':
   if (*i == 0)
       advance = 0;
   break ;
      case '?':
   if (lin[*i] != 10)
       advance = 1;
   break ;
      case '$':
   if (lin[*i] == 10)
       advance = 0;
   break ;
      case '[':
   if (locate(lin[*i], pat, j + 1))
       advance = 1;
   break ;
      case '!':
   if ((lin[*i] != 10) && (!locate(lin[*i], pat, j+1)))
       advance = 1;
   break ;
      default:
   Caseerror(pat[j]);
      };
  }
    }
    if ((advance >= 0))
    {
 *i = *i + advance;
 result = 1;
    } else
 result = 0;
    return result;
}


patsize(pat, n)
 char* pat;
 int n;
{
    int size;
    if (!in_pat_set(pat[n])) {
 (void)fprintf(stdout, "in patsize: can't happen\n");
 abort();
    } else
 switch (pat[n])
 {
 case 'c': size = 2; break;

 case '%': case '$': case '?':
     size = 1;
     break;
 case '[': case '!':
     size = pat[n + 1] + 2;
     break ;
 case '*':
     size = 1;
     break ;
 default:
     Caseerror(pat[n]);
 }
    return size;
}

int
amatch(lin, offset, pat, j)
 char* lin;
 int offset;
 char* pat;
 int j;
{
    int i, k;
    bool result, done;

    done = 0;
    while ((!done) && (pat[j] != '\0'))
 if ((pat[j] == '*')) {
     j = j + patsize(pat, j);
     i = offset;
     while ((!done) && (lin[i] != '\0')) {
  result = omatch(lin, &i, pat, j);
  if (!result)
      done = 1;
     }
     done = 0;
     while ((!done) && (i >= offset)) {
  k = amatch(lin, i, pat, j + patsize(pat, j));
  if ((k >= 0))
      done = 1;
  else
      i = i - 1;
     }
     offset = k;
     done = 1;
 } else {
     result = omatch(lin, &offset, pat, j);
     if ((!result)) {
  offset = -1;
  done = 1;
     } else
  j = j + patsize(pat, j);
 }
     return offset;
}

void
putsub(lin, s1, s2, sub)
  char * lin;
  int s1, s2;
  char * sub;
{
    int i;
    int j;

    i = 0;
    while ((sub[i] != '\0')) {
 if ((sub[i] == -1))
     for (j = s1; j < s2; j++)
     {
  fputc(lin[j],stdout);
     }
 else
 {
     fputc(sub[i],stdout);
 }
 i = i + 1;
    }
}

void
subline(lin, pat, sub)
 char *lin;
 char *pat;
 char *sub;
{
 int i, lastm, m;

 lastm = -1;
 i = 0;
 while ((lin[i] != '\0'))
 {
     m = amatch(lin, i, pat, 0);
     if ((m >= 0) && (lastm != m)) {
  putsub(lin, i, m, sub);
  lastm = m;
     }
     if ((m == -1) || (m == i)) {
  fputc(lin[i],stdout);
  i = i + 1;
     } else
  i = m;
 }
}

 void
change(pat, sub)
char *pat, *sub;
{
    string line;
    bool result;

    result = getline(line, 100);
    while ((result)) {
 subline(line, pat, sub);
 result = getline(line, 100);
    }
}

main(argc, argv)
int argc;
char *argv[];
{
   string pat, sub;
   bool result;

   if (argc < 2)
   {
       (void)fprintf(stdout, "usage: change from [to]\n");
       exit(1);
   };

   result = getpat(argv[1], pat);
   if (!result)
   {
       (void)fprintf(stdout, "change: illegal \"from\" pattern\n");
       exit(2);
   }

   if (argc >= 3)
   {
       result = getsub(argv[2], sub);
       if (!result)
       {
    (void)fprintf(stdout, "change: illegal \"to\" string\n");
    exit(3);
       }
   } else
   {
       sub[0] = '\0';
   }

   change(pat, sub);
   return 0;
}

void
Caseerror(n)
 int n;
{
 (void)fprintf(stdout, "Missing case limb: line %d\n", n);
 exit(4);
}
