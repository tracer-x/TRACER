// This version is compiled by gcc with option -lm

typedef int TOTAL_TYPE;
typedef unsigned int size_t;
typedef int wchar_t;

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


extern size_t __ctype_get_mb_cur_max (void); 
extern double atof ( char *__nptr);
extern int atoi ( char *__nptr);      
extern long int atol ( char *__nptr);      
extern long long int atoll ( char *__nptr); 
extern double strtod ( char * __nptr,char ** __endptr);
extern long int strtol ( char * __nptr,char ** __endptr, int __base);
extern unsigned long int strtoul ( char * __nptr,char ** __endptr, int __base);     
extern long long int strtoq ( char * __nptr,char ** __endptr, int __base);
extern unsigned long long int strtouq ( char * __nptr,char ** __endptr, int __base);     
extern long long int strtoll ( char * __nptr,char ** __endptr, int __base);      
extern unsigned long long int strtoull ( char * __nptr,char ** __endptr, int __base);      
extern char *l64a (long int __n)  ;
extern long int a64l ( char *__s);
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
 typedef signed long long int __int64_t;
 typedef unsigned long long int __uint64_t;
 typedef long long int __quad_t;
 typedef unsigned long long int __u_quad_t;
 typedef __u_quad_t __dev_t;
 typedef unsigned int __uid_t;
 typedef unsigned int __gid_t;
 typedef unsigned long int __ino_t;
 typedef __u_quad_t __ino64_t;
 typedef unsigned int __mode_t;
 typedef unsigned int __nlink_t;
 typedef long int __off_t;
 typedef __quad_t __off64_t;
 typedef int __pid_t;
 typedef struct { int __val[2]; } __fsid_t;
 typedef long int __clock_t;
 typedef unsigned long int __rlim_t;
 typedef __u_quad_t __rlim64_t;
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
 typedef __quad_t __blkcnt64_t;
 typedef unsigned long int __fsblkcnt_t;
 typedef __u_quad_t __fsblkcnt64_t;
 typedef unsigned long int __fsfilcnt_t;
 typedef __u_quad_t __fsfilcnt64_t;
 typedef int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
 typedef int __intptr_t;
 typedef unsigned int __socklen_t;
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int int8_t ;
typedef int int16_t ;
typedef int int32_t ;
typedef int int64_t ;
typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t ;
typedef unsigned int u_int32_t ;
typedef unsigned int u_int64_t ;
typedef int register_t ;
typedef int __sig_atomic_t;
typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
typedef __sigset_t sigset_t;
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
typedef __suseconds_t suseconds_t;
typedef long int __fd_mask;
typedef struct
  {
    __fd_mask __fds_bits[1024 / (8 * sizeof (__fd_mask))];
  } fd_set;
typedef __fd_mask fd_mask;
extern int select (int __nfds, fd_set * __readfds,
     fd_set * __writefds,
     fd_set * __exceptfds,
     struct timeval * __timeout);
extern int pselect (int __nfds, fd_set * __readfds,
      fd_set * __writefds,
      fd_set * __exceptfds,
      const struct timespec * __timeout,
      const __sigset_t * __sigmask);

extern unsigned int gnu_dev_major (unsigned long long int __dev)
     ;

extern unsigned int gnu_dev_minor (unsigned long long int __dev)
;

extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;
typedef union
{
  char __size[36];
  long int __align;
} pthread_attr_t;
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;
    int __kind;
    unsigned int __nusers;
     union
    {
      int __spins;
      __pthread_slist_t __list;
    };

  } __data;
  char __size[24];
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
     unsigned long long int __total_seq;
     unsigned long long int __wakeup_seq;
     unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
   long long int __align;
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


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;

  char __size[32];
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
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
extern long int random (void) ;
extern void srandom (unsigned int __seed) ;
extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) ;
extern char *setstate (char *__statebuf) ;
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

extern int random_r (struct random_data * __buf,
       int32_t * __result) ;
extern int srandom_r (unsigned int __seed, struct random_data *__buf);
extern int initstate_r (unsigned int __seed, char * __statebuf,
   size_t __statelen,
   struct random_data * __buf);
extern int setstate_r (char * __statebuf,
         struct random_data * __buf);
extern int rand (void) ;
extern void srand (unsigned int __seed) ;
extern int rand_r (unsigned int *__seed);
extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3]) ;
extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3]);
extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3]);
extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3]);
extern void lcong48 (unsigned short int __param[7]) ;
struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };
extern int drand48_r (struct drand48_data * __buffer,
        double * __result) ;
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data * __buffer,
        double * __result) ;
extern int lrand48_r (struct drand48_data * __buffer,
        long int * __result)
     ;
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data * __buffer,
        long int * __result)
     ;
extern int mrand48_r (struct drand48_data * __buffer,
        long int * __result)
     ;
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data * __buffer,
        long int * __result)
     ;
extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     ;
extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) ;
extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     ;
extern void *malloc (size_t __size)  ;
extern void *calloc (size_t __nmemb, size_t __size)
      ;
extern void *realloc (void *__ptr, size_t __size)
     ;
extern void free (void *__ptr) ;
extern void cfree (void *__ptr) ;
extern void *alloca (size_t __size) ;
extern void *valloc (size_t __size)  ;
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     ;
extern void abort (void) ;
extern int atexit (void (*__func) (void)) ;
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     ;
extern void exit (int __status) ;
extern char *getenv ( char *__name)  ;
extern char *__secure_getenv ( char *__name)
      ;
extern int putenv (char *__string) ;
extern int setenv ( char *__name,  char *__value, int __replace)
     ;
extern int unsetenv ( char *__name) ;
extern int clearenv (void) ;
extern char *mktemp (char *__template) ;
extern int mkstemp (char *__template)  ;
extern char *mkdtemp (char *__template)  ;
extern int system ( char *__command) ;
extern char *realpath ( char * __name,
         char * __resolved) ;
typedef int (*__compar_fn_t) ( void *,  void *);
extern void *bsearch ( void *__key,  void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
      ;
extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;
extern int abs (int __x)  ;
extern long int labs (long int __x)  ;
extern div_t div (int __numer, int __denom)
     ;
extern ldiv_t ldiv (long int __numer, long int __denom)
      ;
extern char *ecvt (double __value, int __ndigit, int * __decpt,
     int * __sign)  ;
extern char *fcvt (double __value, int __ndigit, int * __decpt,
     int * __sign)  ;
extern char *gcvt (double __value, int __ndigit, char *__buf)
      ;
extern char *qecvt (long double __value, int __ndigit,
      int * __decpt, int * __sign)
      ;
extern char *qfcvt (long double __value, int __ndigit,
      int * __decpt, int * __sign)
      ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
      ;
extern int ecvt_r (double __value, int __ndigit, int * __decpt,
     int * __sign, char * __buf,
     size_t __len) ;
extern int fcvt_r (double __value, int __ndigit, int * __decpt,
     int * __sign, char * __buf,
     size_t __len) ;
extern int qecvt_r (long double __value, int __ndigit,
      int * __decpt, int * __sign,
      char * __buf, size_t __len)
     ;
extern int qfcvt_r (long double __value, int __ndigit,
      int * __decpt, int * __sign,
      char * __buf, size_t __len)
     ;
extern int mblen ( char *__s, size_t __n)  ;
extern int mbtowc (wchar_t * __pwc,
      char * __s, size_t __n)  ;
extern int wctomb (char *__s, wchar_t __wchar)  ;
extern size_t mbstowcs (wchar_t * __pwcs,
    char * __s, size_t __n) ;
extern size_t wcstombs (char * __s,
    wchar_t * __pwcs, size_t __n)
     ;
extern int rpmatch ( char *__response)  ;
extern int posix_openpt (int __oflag) ;
extern int getloadavg (double __loadavg[], int __nelem)
     ;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
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
typedef int _G_int16_t ;
typedef int _G_int32_t ;
typedef unsigned int _G_uint16_t ;
typedef unsigned int _G_uint32_t ;
typedef int __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
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
  __off64_t _offset;
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
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);
typedef __ssize_t __io_write_fn (void *__cookie,  char *__buf,
     size_t __n);
typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);
typedef int __io_close_fn (void *__cookie);
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) ;
extern int _IO_ferror (_IO_FILE *__fp) ;
extern int _IO_peekc_locked (_IO_FILE *__fp);
extern void _IO_flockfile (_IO_FILE *) ;
extern void _IO_funlockfile (_IO_FILE *) ;
extern int _IO_ftrylockfile (_IO_FILE *) ;
extern int _IO_vfscanf (_IO_FILE * , const char * ,
   __gnuc_va_list, int *);
extern int _IO_vfprintf (_IO_FILE *, const char *,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);
extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);
extern void _IO_free_backup_area (_IO_FILE *) ;
typedef _G_fpos_t fpos_t;
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern int remove ( char *__filename) ;
extern int rename ( char *__old,  char *__new) ;
extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s)  ;
extern char *tmpnam_r (char *__s)  ;
extern char *tempnam ( char *__dir,  char *__pfx)
 ;
extern int fclose (FILE *__stream);
extern int fflush (FILE *__stream);
extern int fflush_unlocked (FILE *__stream);
extern FILE *fopen ( char * __filename,
       char * __modes) ;
extern FILE *freopen ( char * __filename,
         char * __modes,
        FILE * __stream) ;
extern FILE *fdopen (int __fd,  char *__modes)  ;
extern void setbuf (FILE * __stream, char * __buf) ;
extern int setvbuf (FILE * __stream, char * __buf,
      int __modes, size_t __n);
extern void setbuffer (FILE * __stream, char * __buf,
         size_t __size) ;
extern void setlinebuf (FILE *__stream) ;
extern int fprintf (FILE * __stream,
       char * __format, ...);
extern int printf ( char * __format, ...);
extern int sprintf (char * __s,
       char * __format, ...) ;
extern int vfprintf (FILE * __s,  char * __format,
       __gnuc_va_list __arg);
extern int vprintf ( char * __format, __gnuc_va_list __arg);
extern int vsprintf (char * __s,  char * __format,
       __gnuc_va_list __arg) ;
extern int snprintf (char * __s, size_t __maxlen,
        char * __format, ...)
     ;

extern int vsnprintf (char * __s, size_t __maxlen,
         char * __format, __gnuc_va_list __arg)
     ;
extern int fscanf (FILE * __stream,
      char * __format, ...) ;
extern int scanf ( char * __format, ...) ;
extern int sscanf ( char * __s,
      char * __format, ...) ;
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);
extern int fputc_unlocked (int __c, FILE *__stream);
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
extern int getw (FILE *__stream);
extern int putw (int __w, FILE *__stream);
extern char *fgets (char * __s, int __n, FILE * __stream);
extern char *gets (char *__s) ;
extern int fputs ( char * __s, FILE * __stream);
extern int puts ( char *__s);
extern int ungetc (int __c, FILE *__stream);
extern size_t fread (void * __ptr, size_t __size,
		     size_t __n, FILE * __stream) ;
extern size_t fwrite ( void * __ptr, size_t __size,
		      size_t __n, FILE * __s);
extern size_t fread_unlocked (void * __ptr, size_t __size,
			      size_t __n, FILE * __stream) ;
extern size_t fwrite_unlocked ( void * __ptr, size_t __size,
			       size_t __n, FILE * __stream);
extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) ;
extern void rewind (FILE *__stream);
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
extern __off_t ftello (FILE *__stream) ;
extern int fgetpos (FILE * __stream, fpos_t * __pos);
extern int fsetpos (FILE *__stream,  fpos_t *__pos);
extern void clearerr (FILE *__stream) ;
extern int feof (FILE *__stream)  ;
extern int ferror (FILE *__stream)  ;
extern void clearerr_unlocked (FILE *__stream) ;
extern int feof_unlocked (FILE *__stream)  ;
extern int ferror_unlocked (FILE *__stream)  ;
extern void perror ( char *__s);
extern int sys_nerr;
extern  char * sys_errlist[];
extern int fileno (FILE *__stream)  ;
extern int fileno_unlocked (FILE *__stream)  ;
extern FILE *popen ( char *__command,  char *__modes) ;
extern int pclose (FILE *__stream);
extern char *ctermid (char *__s) ;
extern void flockfile (FILE *__stream) ;
extern int ftrylockfile (FILE *__stream)  ;
extern void funlockfile (FILE *__stream) ;
extern void *memcpy (void * __dest,
        void * __src, size_t __n)
     ;
extern void *memmove (void *__dest,  void *__src, size_t __n)
     ;
extern void *memccpy (void * __dest,  void * __src,
        int __c, size_t __n)
     ;
extern void *memset (void *__s, int __c, size_t __n) ;
extern int memcmp ( void *__s1,  void *__s2, size_t __n)
     ;
extern void *memchr ( void *__s, int __c, size_t __n)
      ;
extern char *strcpy (char * __dest,  char * __src)
     ;
extern char *strncpy (char * __dest,
         char * __src, size_t __n)
     ;
extern char *strcat (char * __dest,  char * __src)
     ;
extern char *strncat (char * __dest,  char * __src,
        size_t __n) ;
extern int strcmp ( char *__s1,  char *__s2)
     ;
extern int strncmp ( char *__s1,  char *__s2, size_t __n)
     ;
extern int strcoll ( char *__s1,  char *__s2)
     ;
extern size_t strxfrm (char * __dest,
          char * __src, size_t __n)
     ;
extern char *strdup ( char *__s)
     ;
extern char *strchr ( char *__s, int __c)
     ;
extern char *strrchr ( char *__s, int __c)
     ;
extern size_t strcspn ( char *__s,  char *__reject)
     ;
extern size_t strspn ( char *__s,  char *__accept)
     ;
extern char *strpbrk ( char *__s,  char *__accept)
     ;
extern char *strstr ( char *__haystack,  char *__needle)
     ;
extern char *strtok (char * __s,  char * __delim)
     ;
extern char *__strtok_r (char * __s,
     char * __delim,
    char ** __save_ptr)
     ;
extern char *strtok_r (char * __s,  char * __delim,
         char ** __save_ptr)
     ;
extern size_t strlen ( char *__s)
     ;
extern char *strerror (int __errnum) ;
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) ;
extern void __bzero (void *__s, size_t __n) ;
extern void bcopy ( void *__src, void *__dest, size_t __n)
     ;
extern void bzero (void *__s, size_t __n) ;
extern int bcmp ( void *__s1,  void *__s2, size_t __n)
     ;
extern char *index ( char *__s, int __c)
     ;
extern char *rindex ( char *__s, int __c)
     ;
extern int ffs (int __i) ;
extern int strcasecmp ( char *__s1,  char *__s2)
     ;
extern int strncasecmp ( char *__s1,  char *__s2, size_t __n)
     ;
extern char *strsep (char ** __stringp,
        char * __delim)
     ;
extern double acos (double __x) ; 
extern double __acos (double __x) ;
extern double asin (double __x); 
extern double __asin (double __x) ;
extern double atan (double __x); 
extern double __atan (double __x) ;
extern double atan2 (double __y, double __x) ; 
extern double __atan2 (double __y, double __x) ;
extern double cos (double __x) ; 
extern double __cos (double __x) ;
extern double sin (double __x) ; 
extern double __sin (double __x) ;
extern double tan (double __x) ; 
extern double __tan (double __x) ;
extern double cosh (double __x) ; 
extern double __cosh (double __x) ;
extern double sinh (double __x) ; 
extern double __sinh (double __x) ;
extern double tanh (double __x) ; 
extern double __tanh (double __x) ;
extern double acosh (double __x) ; 
extern double __acosh (double __x) ;
extern double asinh (double __x) ; 
extern double __asinh (double __x) ;
extern double atanh (double __x) ; 
extern double __atanh (double __x) ;
extern double exp (double __x) ; 
extern double __exp (double __x) ;
extern double frexp (double __x, int *__exponent) ; 
extern double __frexp (double __x, int *__exponent) ;
extern double ldexp (double __x, int __exponent) ; 
extern double __ldexp (double __x, int __exponent) ;
extern double log (double __x) ; 
extern double __log (double __x) ;
extern double log10 (double __x) ; 
extern double __log10 (double __x) ;
extern double modf (double __x, double *__iptr) ; 
extern double __modf (double __x, double *__iptr) ;
extern double expm1 (double __x) ; 
extern double __expm1 (double __x) ;
extern double log1p (double __x) ; 
extern double __log1p (double __x) ;
extern double logb (double __x) ; 
extern double __logb (double __x) ;
extern double pow (double __x, double __y) ; 
extern double __pow (double __x, double __y) ;
extern double sqrt (double __x) ; 
extern double __sqrt (double __x) ;
extern double hypot (double __x, double __y) ;
extern double __hypot (double __x, double __y) ;
extern double cbrt (double __x) ; 
extern double __cbrt (double __x) ;
extern double ceil (double __x) ; 
extern double __ceil (double __x) ;
extern double fabs (double __x) ; 
extern double __fabs (double __x) ;
extern double floor (double __x) ; 
extern double __floor (double __x) ;
extern double fmod (double __x, double __y) ; 
extern double __fmod (double __x, double __y) ;
extern int __isinf (double __value) ;
extern int __finite (double __value) ;
extern int isinf (double __value) ;
extern int finite (double __value) ;
extern double drem (double __x, double __y) ; 
extern double __drem (double __x, double __y) ;
extern double significand (double __x) ; 
extern double __significand (double __x) ;
extern double copysign (double __x, double __y) ; 
extern double __copysign (double __x, double __y) ;
extern int __isnan (double __value) ;
extern int isnan (double __value) ;


extern double j0 (double) ; 
extern double __j0 (double) ;
extern double j1 (double); 
extern double __j1 (double);
extern double jn (int, double) ; 
extern double __jn (int, double) ;
extern double y0 (double) ; 
extern double __y0 (double) ;
extern double y1 (double) ; 
extern double __y1 (double) ;
extern double yn (int, double) ; 
extern double __yn (int, double) ;
extern double erf (double) ; 
extern double __erf (double) ;
extern double erfc (double) ; 
extern double __erfc (double) ;
extern double lgamma (double) ; 
extern double __lgamma (double) ;
extern double gamma (double) ; 
extern double __gamma (double) ;
extern double lgamma_r (double, int *__signgamp) ; 
extern double __lgamma_r (double, int *__signgamp) ;
extern double rint (double __x) ; 
extern double __rint (double __x) ;
extern double nextafter (double __x, double __y) ; 
extern double __nextafter (double __x, double __y) ;
extern double remainder (double __x, double __y) ; 
extern double __remainder (double __x, double __y) ;
extern double scalbn (double __x, int __n) ; 
extern double __scalbn (double __x, int __n) ;
extern int ilogb (double __x) ; 
extern int __ilogb (double __x) ;
extern double scalb (double __x, double __n) ; 
extern double __scalb (double __x, double __n) ;
extern float acosf (float __x) ; 
extern float __acosf (float __x) ;
extern float asinf (float __x) ; 
extern float __asinf (float __x) ;
extern float atanf (float __x) ; 
extern float __atanf (float __x) ;
extern float atan2f (float __y, float __x) ; 
extern float __atan2f (float __y, float __x) ;
extern float cosf (float __x) ;
extern float __cosf (float __x) ;
extern float sinf (float __x); 
extern float __sinf (float __x) ;
extern float tanf (float __x) ; 
extern float __tanf (float __x) ;
extern float coshf (float __x) ; 
extern float __coshf (float __x) ;
extern float sinhf (float __x) ; 
extern float __sinhf (float __x) ;
extern float tanhf (float __x) ; 
extern float __tanhf (float __x) ;
extern float acoshf (float __x) ; 
extern float __acoshf (float __x) ;
extern float asinhf (float __x) ; 
extern float __asinhf (float __x) ;
extern float atanhf (float __x)  ; 
extern float __atanhf (float __x) ;
extern float expf (float __x) ; 
extern float __expf (float __x) ;
extern float frexpf (float __x, int *__exponent) ; 
extern float __frexpf (float __x, int *__exponent) ;
extern float ldexpf (float __x, int __exponent) ; 
extern float __ldexpf (float __x, int __exponent) ;
extern float logf (float __x) ; 
extern float __logf (float __x) ;
extern float log10f (float __x) ; 
extern float __log10f (float __x) ;
extern float modff (float __x, float *__iptr) ; 
extern float __modff (float __x, float *__iptr) ;
extern float expm1f (float __x) ; 
extern float __expm1f (float __x) ;
extern float log1pf (float __x) ; 
extern float __log1pf (float __x) ;
extern float logbf (float __x) ; 
extern float __logbf (float __x) ;
extern float powf (float __x, float __y) ; 
extern float __powf (float __x, float __y) ;
extern float sqrtf (float __x) ; 
extern float __sqrtf (float __x) ;
extern float hypotf (float __x, float __y); 
extern float __hypotf (float __x, float __y) ;
extern float cbrtf (float __x) ;
extern float __cbrtf (float __x) ;
extern float ceilf (float __x) ; 
extern float __ceilf (float __x) ;
extern float fabsf (float __x) ; 
extern float __fabsf (float __x) ;
extern float floorf (float __x) ; 
extern float __floorf (float __x) ;
extern float fmodf (float __x, float __y) ; 
extern float __fmodf (float __x, float __y) ;
extern int __isinff (float __value) ;
extern int __finitef (float __value) ;
extern int isinff (float __value) ;
extern int finitef (float __value) ;
extern float dremf (float __x, float __y) ; 
extern float __dremf (float __x, float __y) ;
extern float significandf (float __x) ; 
extern float __significandf (float __x) ;
extern float copysignf (float __x, float __y) ; 
extern float __copysignf (float __x, float __y) ;
extern int __isnanf (float __value) ;
extern int isnanf (float __value) ;
extern float j0f (float) ; 
extern float __j0f (float) ;
extern float j1f (float) ; 
extern float __j1f (float) ;
extern float jnf (int, float) ; 
extern float __jnf (int, float) ;
extern float y0f (float) ; 
extern float __y0f (float) ;
extern float y1f (float)  ; 
extern float __y1f (float) ;
extern float ynf (int, float) ; 
extern float __ynf (int, float) ;
extern float erff (float) ; 
extern float __erff (float) ;
extern float erfcf (float) ; 
extern float __erfcf (float) ;
extern float lgammaf (float); 
extern float __lgammaf (float) ;
extern float gammaf (float) ; 
extern float __gammaf (float) ;
extern float lgammaf_r (float, int *__signgamp) ; 
extern float __lgammaf_r (float, int *__signgamp) ;
extern float rintf (float __x) ; 
extern float __rintf (float __x) ;
extern float nextafterf (float __x, float __y) ; 
extern float __nextafterf (float __x, float __y) ;
extern float remainderf (float __x, float __y) ; 
extern float __remainderf (float __x, float __y) ;
extern float scalbnf (float __x, int __n) ; 
extern float __scalbnf (float __x, int __n) ;
extern int ilogbf (float __x) ; 
extern int __ilogbf (float __x) ;
extern float scalbf (float __x, float __n) ; 
extern float __scalbf (float __x, float __n) ;
extern long double acosl (long double __x) ; 
extern long double __acosl (long double __x) ;
extern long double asinl (long double __x) ; 
extern long double __asinl (long double __x) ;
extern long double atanl (long double __x) ; 
extern long double __atanl (long double __x) ;

extern long double atan2l (long double __y, long double __x) ; 
extern long double __atan2l (long double __y, long double __x) ;
extern long double cosl (long double __x) ; 
extern long double __cosl (long double __x) ;
extern long double sinl (long double __x) ; 
extern long double __sinl (long double __x) ;
extern long double tanl (long double __x) ; 
extern long double __tanl (long double __x) ;
extern long double coshl (long double __x) ; 
extern long double __coshl (long double __x) ;
extern long double sinhl (long double __x) ;
extern long double __sinhl (long double __x) ;
extern long double tanhl (long double __x) ; 
extern long double __tanhl (long double __x) ;
extern long double acoshl (long double __x) ; 
extern long double __acoshl (long double __x) ;
extern long double asinhl (long double __x) ; 
extern long double __asinhl (long double __x) ;
extern long double atanhl (long double __x) ; 
extern long double __atanhl (long double __x) ;
extern long double expl (long double __x) ; 
extern long double __expl (long double __x) ;
extern long double frexpl (long double __x, int *__exponent) ; 
extern long double __frexpl (long double __x, int *__exponent) ;
extern long double ldexpl (long double __x, int __exponent) ; 
extern long double __ldexpl (long double __x, int __exponent) ;
extern long double logl (long double __x) ; 
extern long double __logl (long double __x) ;
extern long double log10l (long double __x) ; 
extern long double __log10l (long double __x) ;
extern long double modfl (long double __x, long double *__iptr) ; 
extern long double __modfl (long double __x, long double *__iptr) ;
extern long double expm1l (long double __x) ; 
extern long double __expm1l (long double __x) ;
extern long double log1pl (long double __x) ; 
extern long double __log1pl (long double __x) ;
extern long double logbl (long double __x) ; 
extern long double __logbl (long double __x) ;
extern long double powl (long double __x, long double __y) ; 
extern long double __powl (long double __x, long double __y) ;
extern long double sqrtl (long double __x) ; 
extern long double __sqrtl (long double __x) ;
extern long double hypotl (long double __x, long double __y) ; 
extern long double __hypotl (long double __x, long double __y) ;
extern long double cbrtl (long double __x) ; 
extern long double __cbrtl (long double __x) ;
extern long double ceill (long double __x) ; 
extern long double __ceill (long double __x)  ;
extern long double fabsl (long double __x) ;
extern long double __fabsl (long double __x) ;
extern long double floorl (long double __x) ; 
extern long double __floorl (long double __x) ;
extern long double fmodl (long double __x, long double __y) ; 
extern long double __fmodl (long double __x, long double __y) ;
extern int __isinfl (long double __value) ;
extern int __finitel (long double __value) ;
extern int isinfl (long double __value) ;
extern int finitel (long double __value) ;
extern long double dreml (long double __x, long double __y) ; 
extern long double __dreml (long double __x, long double __y) ;
extern long double significandl (long double __x) ; 
extern long double __significandl (long double __x) ;
extern long double copysignl (long double __x, long double __y) ; 
extern long double __copysignl (long double __x, long double __y) ;
extern int __isnanl (long double __value) ;
extern int isnanl (long double __value) ;
extern long double j0l (long double) ; 
extern long double __j0l (long double) ;
extern long double j1l (long double) ; 
extern long double __j1l (long double) ;
extern long double jnl (int, long double) ; 
extern long double __jnl (int, long double) ;
extern long double y0l (long double) ; 
extern long double __y0l (long double) ;
extern long double y1l (long double) ; 
extern long double __y1l (long double) ;
extern long double ynl (int, long double) ; 
extern long double __ynl (int, long double) ;
extern long double erfl (long double) ;
extern long double __erfl (long double) ;
extern long double erfcl (long double) ; 
extern long double __erfcl (long double) ;
extern long double lgammal (long double) ; 
extern long double __lgammal (long double) ;
extern long double gammal (long double) ; 
extern long double __gammal (long double) ;
extern long double lgammal_r (long double, int *__signgamp) ; 
extern long double __lgammal_r (long double, int *__signgamp) ;
extern long double rintl (long double __x) ; 
extern long double __rintl (long double __x) ;
extern long double nextafterl (long double __x, long double __y)  ; 
extern long double __nextafterl (long double __x, long double __y) ;
extern long double remainderl (long double __x, long double __y) ; 
extern long double __remainderl (long double __x, long double __y) ;
extern long double scalbnl (long double __x, int __n) ; 
extern long double __scalbnl (long double __x, int __n) ;
extern int ilogbl (long double __x) ; 
extern int __ilogbl (long double __x) ;
extern long double scalbl (long double __x, long double __n) ; 
extern long double __scalbl (long double __x, long double __n) ;
extern int signgam;
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;
extern _LIB_VERSION_TYPE _LIB_VERSION;
struct exception
  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };
extern int matherr (struct exception *__exc);
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;
    __pid_t l_pid;
  };
extern int fcntl (int __fd, int __cmd, ...);
extern int open ( char *__file, int __oflag, ...) ;
extern int creat ( char *__file, __mode_t __mode) ;
extern int lockf (int __fd, int __cmd, __off_t __len);
extern int posix_fadvise (int __fd, __off_t __offset, __off_t __len,
     int __advise) ;
extern int posix_fallocate (int __fd, __off_t __offset, __off_t __len);
extern int flock (int __fd, int __operation) ;
typedef int ptrdiff_t;
extern void *malloc (size_t __size) ;
extern void *calloc (size_t __nmemb, size_t __size) 
 ;
extern void *realloc (void *__ptr, size_t __size) 
;
extern void free (void *__ptr) ;
extern void cfree (void *__ptr) ;
extern void *memalign (size_t __alignment, size_t __size) 
;
extern void *valloc (size_t __size) 
;
extern void * pvalloc (size_t __size) 
 ;
extern void *(*__morecore) (ptrdiff_t __size);
extern void *__default_morecore (ptrdiff_t __size) 
;
struct mallinfo {
  int arena;
  int ordblks;
  int smblks;
  int hblks;
  int hblkhd;
  int usmblks;
  int fsmblks;
  int uordblks;
  int fordblks;
  int keepcost;
};

extern struct mallinfo mallinfo (void) ;
extern int mallopt (int __param, int __val) ;
extern int malloc_trim (size_t __pad) ;
extern size_t malloc_usable_size (void *__ptr) ;
extern void malloc_stats (void) ;
extern void *malloc_get_state (void) ;
extern int malloc_set_state (void *__ptr) ;
extern void (*__malloc_initialize_hook) (void);
extern void (*__free_hook) (void *__ptr,  void *);
extern void *(*__malloc_hook) (size_t __size,  void *);
extern void *(*__realloc_hook) (void *__ptr, size_t __size,  void *);
extern void *(*__memalign_hook) (size_t __alignment, size_t __size,  void *);
extern void (*__after_morecore_hook) (void);
extern void __malloc_check_init (void) ;
typedef unsigned char uchar;
typedef struct {int x,y,info, dx, dy, I;} CORNER_LIST[15000];

// BEGIN simulation call by ref
int x_size_global;
int y_size_global;
// END  simulation call by ref

usage()
{
  printf("Usage: susan <in.pgm> <out.pgm> [options]\n\n");

  printf("-s : Smoothing mode (default)\n");
  printf("-e : Edges mode\n");
  printf("-c : Corners mode\n\n");

  printf("See source code for more information about setting the thresholds\n");
  printf("-t <thresh> : Brightness threshold, all modes (default=20)\n");
  printf("-d <thresh> : Distance threshold, smoothing mode, (default=4) (use next option instead for flat 3x3 mask)\n");
  printf("-3 : Use flat 3x3 mask, edges or smoothing mode\n");
  printf("-n : No post-processing on the binary edge map (runs much faster); edges mode\n");
  printf("-q : Use faster (and usually stabler) corner mode; edge-like corner suppression not carried out; corners mode\n");
  printf("-b : Mark corners/edges with single black points instead of black with white border; corners or edges mode\n");
  printf("-p : Output initial enhancement image only; corners or edges mode (default is edges mode)\n");

  printf("\nSUSAN Version 2l (C) 1995-1997 Stephen Smith, DRA UK. steve@fmrib.ox.ac.uk\n");

  exit(0);
}

int getint(fd)
  FILE *fd;
{
  int c, i, k;
  char dummy[10000];

  c = _IO_getc (fd);
  for(k=0;k<255;k++) //while (1)  /* commented while(1) by Jorge */
    {
      if (c=='#')
	fgets(dummy,9000,fd);
      if (c==(-1))
	{ fprintf(stderr,"Image %s not binary PGM.\n","is"); exit(0); };
      if (c>='0' && c<='9')
	break;
      c = _IO_getc (fd);
    }


  i = 0;
  for(k=0;k<255;k++) //while (1)  /* commented while(1) by Jorge */
    {
      i = (i*10) + (c - '0');
      c = _IO_getc (fd);
      if (c==(-1)) return (i);
      if (c<'0' || c>'9') break;
    }

  return (i);
}
/**************** Simulation of call by ref ********************/
/* void get_image(filename,in,x_size,y_size) */
/*   char filename[200]; */
/*   unsigned char **in; */
/*   int *x_size, *y_size; */
/* { */
/* FILE *fd; */
/* char header [100]; */
/* int tmp; */

/*  fd=fopen(filename,"r"); */
 
/*  if ( fd == ((void *)0)) */
/*     { fprintf(stderr,"Can't input image %s.\n",filename); exit(0); }; */

/*   header[0]=fgetc(fd); */
/*   header[1]=fgetc(fd); */
/*   if(!(header[0]=='P' && header[1]=='5')) */
/*     { fprintf(stderr,"Image %s does not have binary PGM header.\n",filename); exit(0); }; */

/*   *x_size = getint(fd); */
/*   *y_size = getint(fd); */
/*   tmp = getint(fd); */

/*   *in = (uchar *) malloc(*x_size * *y_size); */

/*   if (fread(*in,1,*x_size * *y_size,fd) == 0) */
/*     { fprintf(stderr,"Image %s is wrong size.\n",filename); exit(0); }; */

/*   fclose(fd); */
/* } */

void get_image(filename,in,x_size,y_size)
  char filename[200];
  unsigned char **in;
  int x_size, y_size;
{
FILE *fd;
char header [100];
int tmp;

 fd=fopen(filename,"r");
 
 if ( fd == ((void *)0))
    { fprintf(stderr,"Can't input image %s.\n",filename); exit(0); };

  header[0]=fgetc(fd);
  header[1]=fgetc(fd);
  if(!(header[0]=='P' && header[1]=='5'))
    { fprintf(stderr,"Image %s does not have binary PGM header.\n",filename); exit(0); };

  x_size = getint(fd);
  y_size = getint(fd);
  tmp = getint(fd);

  *in = (uchar *) malloc(x_size * y_size);

  if (fread(*in,1,x_size * y_size,fd) == 0)
    { fprintf(stderr,"Image %s is wrong size.\n",filename); exit(0); };

  fclose(fd);

  /* Simulation of call by ref */
  x_size_global=x_size;
  y_size_global=y_size;
}


put_image(filename,in,x_size,y_size)
  char filename [100],
       *in;
  int x_size,
       y_size;
{
  FILE *fd;
  fd=fopen(filename,"w");

  if (fd == ((void *)0))
    
    { fprintf(stderr,"Can't output image%s.\n",filename); exit(0); };
  
  fprintf(fd,"P5\n");
  fprintf(fd,"%d %d\n",x_size,y_size);
  fprintf(fd,"255\n");

  if (fwrite(in,x_size*y_size,1,fd) != 1)
    { fprintf(stderr,"Can't write image %s.\n",filename); exit(0); };
  
  fclose(fd);
}

int_to_uchar(r,in,size)
  uchar *in;
  int *r, size;
{
  int i,
    max_r=r[0],
    min_r=r[0];
  
  for (i=0; i<size; i++)
    {
      if ( r[i] > max_r )
        max_r=r[i];
      if ( r[i] < min_r )
        min_r=r[i];
    }

  max_r=max_r-min_r;

  for (i=0; i<size; i++)
    in[i] = (uchar)((int)((int)(r[i]-min_r)*255)/max_r);
}

void setup_brightness_lut(bp,thresh,form)
     uchar **bp;
     int thresh, form;
{
  int k;
  float temp;
  
  *bp=(unsigned char *)malloc(516);
  *bp=*bp+258;
  
  for(k=-256;k<257;k++)
    {
      temp=((float)k)/((float)thresh);
      temp=temp*temp;
      if (form==6)
	temp=temp*temp*temp;
      temp=100.0*exp(-temp);
      *(*bp+k)= (uchar)temp;
    }
}

susan_principle(in,r,bp,max_no,x_size,y_size)
  uchar *in, *bp;
  int *r, max_no, x_size, y_size;
{
  int i, j, n;
  uchar *p,*cp;
  
  memset (r,0,x_size * y_size * sizeof(int));
  
  for (i=3;i<y_size-3;i++)
    for (j=3;j<x_size-3;j++)
      {
	n=100;
	p=in + (i-3)*x_size + j - 1;
	cp=bp + in[i*x_size+j];
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+x_size-3;
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+x_size-5;
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+x_size-6;
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+2;
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+x_size-6;
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+x_size-5;

	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+x_size-3;
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	
	if (n<=max_no)
	  r[i*x_size+j] = max_no - n;
      }
}

susan_principle_small(in,r,bp,max_no,x_size,y_size)
uchar *in, *bp;
int *r, max_no, x_size, y_size;
{
  int i, j, n;
  uchar *p,*cp;
  
  memset (r,0,x_size * y_size * sizeof(int));
  
  max_no = 730;
  
  for (i=1;i<y_size-1;i++)
    for (j=1;j<x_size-1;j++)
      {
	n=100;
	p=in + (i-1)*x_size + j - 1;
	cp=bp + in[i*x_size+j];
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+x_size-2;
	
	n=n+*(cp-*p);
	p=p+2;
	n=n+*(cp-*p);
	p=p+x_size-2;
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	
	if (n<=max_no)
        r[i*x_size+j] = max_no - n;
      }
}

uchar median(in,i,j,x_size)
     uchar *in;
     int i, j, x_size;
{
  int p[8],k,l,tmp;
  
  p[0]=in[(i-1)*x_size+j-1];
  p[1]=in[(i-1)*x_size+j ];
  p[2]=in[(i-1)*x_size+j+1];
  p[3]=in[(i )*x_size+j-1];
  p[4]=in[(i )*x_size+j+1];
  p[5]=in[(i+1)*x_size+j-1];
  p[6]=in[(i+1)*x_size+j ];
  p[7]=in[(i+1)*x_size+j+1];
  
  for(k=0; k<7; k++)
    for(l=0; l<(7-k); l++)
      if (p[l]>p[l+1])
	{
	  tmp=p[l]; p[l]=p[l+1]; p[l+1]=tmp;
	}

  return( (p[3]+p[4]) / 2 );
}

/****** BEGIN simulation call by ref *****/
/* enlarge(in,tmp_image,x_size,y_size,border) */
/* uchar **in; */
/* uchar *tmp_image; */
/* int *x_size, *y_size, border; */
/* { */
/*   int i, j; */
  
/*   for(i=0; i<*y_size; i++) */
/*     memcpy(tmp_image+(i+border)*(*x_size+2*border)+border, *in+i* *x_size, *x_size); */
  
/*   for(i=0; i<border; i++) */
/*     { */
/*       memcpy(tmp_image+(border-1-i)*(*x_size+2*border)+border,*in+i* *x_size,*x_size); */
/*       memcpy(tmp_image+(*y_size+border+i)*(*x_size+2*border)+border,*in+(*y_size-i-1)* *x_size,*x_size); */
/*     } */
  
/*   for(i=0; i<border; i++) */
/*     for(j=0; j<*y_size+2*border; j++) */
/*       { */
/* 	tmp_image[j*(*x_size+2*border)+border-1-i]=tmp_image[j*(*x_size+2*border)+border+i]; */
/* 	tmp_image[j*(*x_size+2*border)+ *x_size+border+i]=tmp_image[j*(*x_size+2*border)+ *x_size+border-1-i]; */
/*       } */
  
/*   *x_size=*x_size+2*border; */
/*   *y_size=*y_size+2*border; */
/*   *in=tmp_image; */
/* } */
/****** END simulation call by ref *****/

enlarge(in,tmp_image,x_size,y_size,border)
uchar **in;
uchar *tmp_image;
int x_size, y_size, border;
{
  int i, j;
  
  for(i=0; i<y_size; i++)
    memcpy(tmp_image+(i+border)*(x_size+2*border)+border, *in+i* x_size, x_size);
  
  for(i=0; i<border; i++)
    {
      memcpy(tmp_image+(border-1-i)*(x_size+2*border)+border,*in+i* x_size,x_size);
      memcpy(tmp_image+(y_size+border+i)*(x_size+2*border)+border,*in+(y_size-i-1)* x_size,x_size);
    }
  
  for(i=0; i<border; i++)
    for(j=0; j<y_size+2*border; j++)
      {
	tmp_image[j*(x_size+2*border)+border-1-i]=tmp_image[j*(x_size+2*border)+border+i];
	tmp_image[j*(x_size+2*border)+ x_size+border+i]=tmp_image[j*(x_size+2*border)+ x_size+border-1-i];
      }
  
  x_size=x_size+2*border;
  y_size=y_size+2*border;
  *in=tmp_image;

  /* Simulation of call by ref */
  x_size_global=x_size;
  y_size_global=y_size;
}

void susan_smoothing(three_by_three,in,dt,x_size,y_size,bp)
     int three_by_three, x_size, y_size;
     uchar *in, *bp;
     float dt;
{

  
  float temp;
  int n_max, increment, mask_size,
    i,j,x,y,area,brightness,tmp,centre;
  uchar *ip, *dp, *dpt, *cp, *out=in,
    *tmp_image;
  TOTAL_TYPE total;
  
  if (three_by_three==0)
    mask_size = ((int)(1.5 * dt)) + 1;
  else
    mask_size = 1;

  total=0.1;
  if ( (dt>15) && (total==0) )
    {
      printf("Distance_thresh (%f) too big for integer arithmetic.\n",dt);
      printf("Either reduce it to <=15 or recompile with variable \"total\"\n");
      printf("as a float: see top \"defines\" section.\n");
      exit(0);
    }
  
  if ( (2*mask_size+1>x_size) || (2*mask_size+1>y_size) )
    {
      printf("Mask size (1.5*distance_thresh+1=%d) too big for image (%dx%d).\n",mask_size,x_size,y_size);
      exit(0);
    }
  
  tmp_image = (uchar *) malloc( (x_size+mask_size*2) * (y_size+mask_size*2) );
  //enlarge(&in,tmp_image,&x_size,&y_size,mask_size);
   enlarge(&in,tmp_image,x_size,y_size,mask_size);
  // BEGIN simulation call by ref
   x_size = x_size_global;
   y_size = y_size_global;
   // END  simulation call by ref

  if (three_by_three==0)
    {           
      n_max = (mask_size*2) + 1;
      
      increment = x_size - n_max;
      
      dp = (unsigned char *)malloc(n_max*n_max);
      dpt = dp;
      temp = -(dt*dt);
      
      for(i=-mask_size; i<=mask_size; i++)
	for(j=-mask_size; j<=mask_size; j++)
	  {
	    x = (int) (100.0 * exp( ((float)((i*i)+(j*j))) / temp ));
	    *dpt++ = (unsigned char)x;
	  }
          
      for (i=mask_size;i<y_size-mask_size;i++)
	{
	  for (j=mask_size;j<x_size-mask_size;j++)
	    {
	      area = 0;
	      total = 0;
	      dpt = dp;
	      ip = in + ((i-mask_size)*x_size) + j - mask_size;
	      centre = in[i*x_size+j];
	      cp = bp + centre;
	      for(y=-mask_size; y<=mask_size; y++)
		{
		  for(x=-mask_size; x<=mask_size; x++)
		    {
		      brightness = *ip++;
		      tmp = *dpt++ * *(cp-brightness);
		      area = area + tmp;
		      total = total + tmp * brightness;
		    }
		  ip = ip + increment;
		}
	      tmp = area-10000;
	      if (tmp==0)
		*out++=median(in,i,j,x_size);
	      else
		*out++=((total-(centre*10000))/tmp);
	    }
	}            
    }
  else
    {
      for (i=1;i<y_size-1;i++)
	{
	  for (j=1;j<x_size-1;j++)
	    {
	      area = 0;
	      total = 0;
	      ip = in + ((i-1)*x_size) + j - 1;
	      centre = in[i*x_size+j];
	      cp = bp + centre;
	      
	      brightness=*ip++; tmp=*(cp-brightness); area = area + tmp; total = total + tmp * brightness;
	      brightness=*ip++; tmp=*(cp-brightness); area = area + tmp; total = total + tmp * brightness;
	      brightness=*ip; tmp=*(cp-brightness); area = area + tmp; total = total + tmp * brightness;
	      ip = ip + x_size-2;
	      brightness=*ip++; tmp=*(cp-brightness); area = area + tmp; total = total + tmp * brightness;
	      brightness=*ip++; tmp=*(cp-brightness); area = area + tmp; total = total + tmp * brightness;
	      brightness=*ip; tmp=*(cp-brightness); area = area + tmp; total = total + tmp * brightness;
	      ip = ip + x_size-2;
	      brightness=*ip++; tmp=*(cp-brightness); area = area + tmp; total = total + tmp * brightness;
	      brightness=*ip++; tmp=*(cp-brightness); area = area + tmp; total = total + tmp * brightness;
	      brightness=*ip; tmp=*(cp-brightness); area = area + tmp; total = total + tmp * brightness;
	      
	      tmp = area-100;
	      if (tmp==0)
		*out++=median(in,i,j,x_size);
	      else
		*out++=(total-(centre*100))/tmp;
	    }
	}            
    }
}
edge_draw(in,mid,x_size,y_size,drawing_mode)
uchar *in, *mid;
int x_size, y_size, drawing_mode;
{
  int i;
  uchar *inp, *midp;
  
  if (drawing_mode==0)
    {      
      midp=mid;
      for (i=0; i<x_size*y_size; i++)
	{
	  if (*midp<8)
	    {
	      inp = in + (midp - mid) - x_size - 1;
	      *inp++=255; *inp++=255; *inp=255; inp= inp+x_size-2;
	      *inp++=255; *inp++; *inp=255; inp= inp+x_size-2;
	      *inp++=255; *inp++=255; *inp=255;
	    }
	  midp++;
	}
    }
  
  
  midp=mid;
  for (i=0; i<x_size*y_size; i++)
    {
      if (*midp<8)
	*(in + (midp - mid)) = 0;
      midp++;
    }
}

susan_thin(r,mid,x_size,y_size)
uchar *mid;
int *r, x_size, y_size;
{
  int l[9], centre, nlinks, npieces,
    b01, b12, b21, b10,
    p1, p2, p3, p4,
    b00, b02, b20, b22,
    m, n, a, b, x, y, i, j;
  uchar *mp;
  
  for (i=4;i<y_size-4;i++)
    for (j=4;j<x_size-4;j++)
      if (mid[i*x_size+j]<8)
	{
	  centre = r[i*x_size+j];	  	  
	  mp=mid + (i-1)*x_size + j-1;
	  
	  /* Transformed by hand - Vijay */
	  /*
	  n = (*mp<8) +
            (*(mp+1)<8) +
            (*(mp+2)<8) +
            (*(mp+x_size)<8) +
            (*(mp+x_size+2)<8) +
            (*(mp+x_size+x_size)<8) +
            (*(mp+x_size+x_size+1)<8) +
            (*(mp+x_size+x_size+2)<8);
	  */
	n=0;
	if(*mp < 8) n++;
	if(*(mp+1)<8) n++;
        if(*(mp+2)<8) n++;
        if(*(mp+x_size)<8) n++;
        if(*(mp+x_size+2)<8) n++;
        if(*(mp+x_size+x_size)<8) n++;
        if(*(mp+x_size+x_size+1)<8) n++;
        if(*(mp+x_size+x_size+2)<8) n++;

        if (n==0)
          mid[i*x_size+j]=100;
        if ( (n==1) && (mid[i*x_size+j]<6) )
	  {
	    l[0]=r[(i-1)*x_size+j-1]; l[1]=r[(i-1)*x_size+j]; l[2]=r[(i-1)*x_size+j+1];
	    l[3]=r[(i )*x_size+j-1]; l[4]=0; l[5]=r[(i )*x_size+j+1];
	    l[6]=r[(i+1)*x_size+j-1]; l[7]=r[(i+1)*x_size+j]; l[8]=r[(i+1)*x_size+j+1];	    
	    if (mid[(i-1)*x_size+j-1]<8) { l[0]=0; l[1]=0; l[3]=0; l[2]=l[2]*2;
	      l[6]=l[6]*2; l[5]=l[5]*3; l[7]=l[7]*3; l[8]=l[8]*4; }
	    else { if (mid[(i-1)*x_size+j]<8) { l[1]=0; l[0]=0; l[2]=0; l[3]=l[3]*2;
		l[5]=l[5]*2; l[6]=l[6]*3; l[8]=l[8]*3; l[7]=l[7]*4; }
	      else { if (mid[(i-1)*x_size+j+1]<8) { l[2]=0; l[1]=0; l[5]=0; l[0]=l[0]*2;
		  l[8]=l[8]*2; l[3]=l[3]*3; l[7]=l[7]*3; l[6]=l[6]*4; }
		else { if (mid[(i)*x_size+j-1]<8) { l[3]=0; l[0]=0; l[6]=0; l[1]=l[1]*2;
		    l[7]=l[7]*2; l[2]=l[2]*3; l[8]=l[8]*3; l[5]=l[5]*4; }
		  else { if (mid[(i)*x_size+j+1]<8) { l[5]=0; l[2]=0; l[8]=0; l[1]=l[1]*2;
		      l[7]=l[7]*2; l[0]=l[0]*3; l[6]=l[6]*3; l[3]=l[3]*4; }
		    else { if (mid[(i+1)*x_size+j-1]<8) { l[6]=0; l[3]=0; l[7]=0; l[0]=l[0]*2;
			l[8]=l[8]*2; l[1]=l[1]*3; l[5]=l[5]*3; l[2]=l[2]*4; }
		      else { if (mid[(i+1)*x_size+j]<8) { l[7]=0; l[6]=0; l[8]=0; l[3]=l[3]*2;
			  l[5]=l[5]*2; l[0]=l[0]*3; l[2]=l[2]*3; l[1]=l[1]*4; }
			else { if (mid[(i+1)*x_size+j+1]<8) { l[8]=0; l[5]=0; l[7]=0; l[6]=l[6]*2;
			    l[2]=l[2]*2; l[1]=l[1]*3; l[3]=l[3]*3; l[0]=l[0]*4; } }}}}}}}
	    
	    m=0;
	    for(y=0; y<3; y++)
	      for(x=0; x<3; x++)
		if (l[y+y+y+x]>m) { m=l[y+y+y+x]; a=y; b=x; }
	    
	    if (m>0)
	      {
		if (mid[i*x_size+j]<4)
		  mid[(i+a-1)*x_size+j+b-1] = 4;
		else
		  mid[(i+a-1)*x_size+j+b-1] = mid[i*x_size+j]+1;
		if ( (a+a+b) < 3 )
		  {
		    i=i+a-1;
		    j=j+b-2;
		    if (i<4) i=4;
		    if (j<4) j=4;
		  }
	      }
	  }
        if (n==2)
	  {	    

            /* Transformed by hand - Jorge */
/* 	    b00 = mid[(i-1)*x_size+j-1]<8; */
/* 	    b02 = mid[(i-1)*x_size+j+1]<8; */
/* 	    b20 = mid[(i+1)*x_size+j-1]<8; */
/* 	    b22 = mid[(i+1)*x_size+j+1]<8; */

/* 	    if (mid[(i-1)*x_size+j-1]<8) b00=1; else b00=0; */
/* 	    if (mid[(i-1)*x_size+j+1]<8) b02=1; else b02=0; */
/*          if (mid[(i+1)*x_size+j-1]<8) b20=1; else b20=0; */
/* 	    if (mid[(i+1)*x_size+j+1]<8) b22=1; else b22=0; */

	    if ( ((b00+b02+b20+b22)==2) && ((b00|b22)&(b02|b20)))
	      {			       		
		if (b00)
		  {
		    if (b02) { x=0; y=-1; }
		    else { x=-1; y=0; }
		  }
		else
		  {
		    if (b02) { x=1; y=0; }
		    else { x=0; y=1; }
		  }
		if (((float)r[(i+y)*x_size+j+x]/(float)centre) > 0.7)
		  {
		    if ( ( (x==0) && (mid[(i+(2*y))*x_size+j]>7) && (mid[(i+(2*y))*x_size+j-1]>7) && (mid[(i+(2*y))*x_size+j+1]>7) ) ||
			 ( (y==0) && (mid[(i)*x_size+j+(2*x)]>7) && (mid[(i+1)*x_size+j+(2*x)]>7) && (mid[(i-1)*x_size+j+(2*x)]>7) ) )
		      {
			mid[(i)*x_size+j]=100;
			mid[(i+y)*x_size+j+x]=3;
		      }
		  }
	      }
	    else
	      {
            /* Transformed by hand - Jorge */
/* 		b01 = mid[(i-1)*x_size+j ]<8; */
/* 		b12 = mid[(i )*x_size+j+1]<8; */
/* 		b21 = mid[(i+1)*x_size+j ]<8; */
/* 		b10 = mid[(i )*x_size+j-1]<8; */

/*                 if (mid[(i-1)*x_size+j ]<8) b01=1; else b01=0; */
/*                 if (mid[(i )*x_size+j+1]<8) b12=1; else b12=0; */
/*                 if (mid[(i+1)*x_size+j ]<8) b21=1; else b21=0; */
/*                 if (mid[(i )*x_size+j-1]<8) b10=1; else b10=0; */
				
		if ( ((b01+b12+b21+b10)==2) && ((b10|b12)&(b01|b21)) &&
		     ((b01&((mid[(i-2)*x_size+j-1]<8)|(mid[(i-2)*x_size+j+1]<8)))|(b10&((mid[(i-1)*x_size+j-2]<8)|(mid[(i+1)*x_size+j-2]<8)))|
		      (b12&((mid[(i-1)*x_size+j+2]<8)|(mid[(i+1)*x_size+j+2]<8)))|(b21&((mid[(i+2)*x_size+j-1]<8)|(mid[(i+2)*x_size+j+1]<8)))) )
		  {		    		  
		    mid[(i)*x_size+j]=100;
		    i--;
		    j=j-2;
		    if (i<4) i=4;
		    if (j<4) j=4;
		  }
	      }
	  }
	
        if (n>2)
	  {
            /* Transformed by hand - Jorge */
/* 	    b01 = mid[(i-1)*x_size+j ]<8; */
/* 	    b12 = mid[(i )*x_size+j+1]<8; */
/* 	    b21 = mid[(i+1)*x_size+j ]<8; */
/* 	    b10 = mid[(i )*x_size+j-1]<8; */

/*             if (mid[(i-1)*x_size+j ]<8)  b01=1; else b01=0; */
/*             if (mid[(i )*x_size+j+1]<8)  b12=1; else b12=0;	    */
/*             if (mid[(i+1)*x_size+j ]<8)  b21=1; else b21=0; */
/*             if (mid[(i )*x_size+j-1]<8)  b10=1; else b10=0; */

	    if((b01+b12+b21+b10)>1)
	      {
            /* Transformed by hand - Jorge */
/* 		b00 = mid[(i-1)*x_size+j-1]<8; */
/* 		b02 = mid[(i-1)*x_size+j+1]<8; */
/* 		b20 = mid[(i+1)*x_size+j-1]<8; */
/* 		b22 = mid[(i+1)*x_size+j+1]<8; */

                if (mid[(i-1)*x_size+j-1]<8) b00=1; else b00=0;
                if (mid[(i-1)*x_size+j+1]<8) b02=1; else b02=0;
		if (mid[(i+1)*x_size+j-1]<8) b20=1; else b20=0;
		if (mid[(i+1)*x_size+j+1]<8) b22=1; else b22=0;

		p1 = b00 | b01;
		p2 = b02 | b12;
		p3 = b22 | b21;
		p4 = b20 | b10;
		
		if( ((p1 + p2 + p3 + p4) - ((b01 & p2)+(b12 & p3)+(b21 & p4)+(b10 & p1))) < 2)
		  {
		    mid[(i)*x_size+j]=100;
		    i--;
		    j=j-2;
		    if (i<4) i=4;
		    if (j<4) j=4;
		  }
	      }
	  }	
	}
}

susan_edges(in,r,mid,bp,max_no,x_size,y_size)
uchar *in, *bp, *mid;
int *r, max_no, x_size, y_size;
{
  float z;
  int do_symmetry, i, j, m, n, a, b, x, y, w;
  uchar c,*p,*cp;
  
  memset (r,0,x_size * y_size * sizeof(int));
  
  for (i=3;i<y_size-3;i++)
    for (j=3;j<x_size-3;j++)
      {
	n=100;
	p=in + (i-3)*x_size + j - 1;
	cp=bp + in[i*x_size+j];
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+x_size-3;
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+x_size-5;
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+x_size-6;
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+2;
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+x_size-6;
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+x_size-5;

	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+x_size-3;
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	
	if (n<=max_no)
	  r[i*x_size+j] = max_no - n;
      }
  
  for (i=4;i<y_size-4;i++)
    for (j=4;j<x_size-4;j++)
      {
	if (r[i*x_size+j]>0)
	  {
	    m=r[i*x_size+j];
	    n=max_no - m;
	    cp=bp + in[i*x_size+j];
	    
	    if (n>600)
	      {
		p=in + (i-3)*x_size + j - 1;
		x=0;y=0;
		
		c=*(cp-*p++);x=x-c;y=y-3*c;
		c=*(cp-*p++);y=y-3*c;
		c=*(cp-*p);x=x+c;y=y-3*c;
		p=p+x_size-3;
		
		c=*(cp-*p++);x=x-2*c;y=y-2*c;
		c=*(cp-*p++);x=x-c;y=y-2*c;
		c=*(cp-*p++);y=y-2*c;
		c=*(cp-*p++);x=x+c;y=y-2*c;
		c=*(cp-*p);x=x+2*c;y=y-2*c;
		p=p+x_size-5;
		
		c=*(cp-*p++);x=x-3*c;y=y-c;
		c=*(cp-*p++);x=x-2*c;y=y-c;
		c=*(cp-*p++);x=x-c;y=y-c;
		c=*(cp-*p++);y=y-c;
		c=*(cp-*p++);x=x+c;y=y-c;
		c=*(cp-*p++);x=x+2*c;y=y-c;
		c=*(cp-*p);x=x+3*c;y=y-c;
		p=p+x_size-6;
		
		c=*(cp-*p++);x=x-3*c;
		c=*(cp-*p++);x=x-2*c;
		c=*(cp-*p);x=x-c;
		p=p+2;
		c=*(cp-*p++);x=x+c;
		c=*(cp-*p++);x=x+2*c;
		c=*(cp-*p);x=x+3*c;
		p=p+x_size-6;
		
		c=*(cp-*p++);x=x-3*c;y=y+c;
		c=*(cp-*p++);x=x-2*c;y=y+c;
		c=*(cp-*p++);x=x-c;y=y+c;
		c=*(cp-*p++);y=y+c;
		c=*(cp-*p++);x=x+c;y=y+c;
		c=*(cp-*p++);x=x+2*c;y=y+c;
		c=*(cp-*p);x=x+3*c;y=y+c;
		p=p+x_size-5;
		
		c=*(cp-*p++);x=x-2*c;y=y+2*c;
		c=*(cp-*p++);x=x-c;y=y+2*c;
		c=*(cp-*p++);y=y+2*c;
		c=*(cp-*p++);x=x+c;y=y+2*c;
		c=*(cp-*p);x=x+2*c;y=y+2*c;
		p=p+x_size-3;
		
		c=*(cp-*p++);x=x-c;y=y+3*c;
		c=*(cp-*p++);y=y+3*c;
		c=*(cp-*p);x=x+c;y=y+3*c;
		
		z = sqrt((float)((x*x) + (y*y)));
		if (z > (0.9*(float)n))
		  {
		    do_symmetry=0;
		    if (x==0)
		      z=1000000.0;
		    else
		      z=((float)y) / ((float)x);
		    if (z < 0) { z=-z; w=-1; }
		    else w=1;
		    if (z < 0.5) { a=0; b=1; }
		    else { if (z > 2.0) { a=1; b=0; }
		      else { if (w>0) { a=1; b=1; }
			else { a=-1; b=1; }}}
		    if ( (m > r[(i+a)*x_size+j+b]) && (m >= r[(i-a)*x_size+j-b]) &&
			 (m > r[(i+(2*a))*x_size+j+(2*b)]) && (m >= r[(i-(2*a))*x_size+j-(2*b)]) )
		      mid[i*x_size+j] = 1;
		  }
		else
		  do_symmetry=1;
	      }
	    else
	      do_symmetry=1;
	    
	    if (do_symmetry==1)
	      {
		p=in + (i-3)*x_size + j - 1;
		x=0; y=0; w=0;			      
		c=*(cp-*p++);x=x+c;y=y+9*c;w=w+3*c;
		c=*(cp-*p++);y=y+9*c;
		c=*(cp-*p);x=x+c;y=y+9*c;w=w-3*c;
		p=p+x_size-3;
		
		c=*(cp-*p++);x=x+4*c;y=y+4*c;w=w+4*c;
		c=*(cp-*p++);x=x+c;y=y+4*c;w=w+2*c;
		c=*(cp-*p++);y=y+4*c;
		c=*(cp-*p++);x=x+c;y=y+4*c;w=w-2*c;
		c=*(cp-*p);x=x+4*c;y=y+4*c;w=w-4*c;
		p=p+x_size-5;
		
		c=*(cp-*p++);x=x+9*c;y=y+c;w=w+3*c;
		c=*(cp-*p++);x=x+4*c;y=y+c;w=w+2*c;
		c=*(cp-*p++);x=x+c;y=y+c;w=w+c;
		c=*(cp-*p++);y=y+c;
		c=*(cp-*p++);x=x+c;y=y+c;w=w-c;
		c=*(cp-*p++);x=x+4*c;y=y+c;w=w-2*c;
		c=*(cp-*p);x=x+9*c;y=y+c;w=w-3*c;
		p=p+x_size-6;
		
		c=*(cp-*p++);x=x+9*c;
		c=*(cp-*p++);x=x+4*c;
		c=*(cp-*p);x=x+c;
		p=p+2;
		c=*(cp-*p++);x=x+c;
		c=*(cp-*p++);x=x+4*c;
		c=*(cp-*p);x=x+9*c;
		p=p+x_size-6;
		
		c=*(cp-*p++);x=x+9*c;y=y+c;w=w-3*c;
		c=*(cp-*p++);x=x+4*c;y=y+c;w=w-2*c;
		c=*(cp-*p++);x=x+c;y=y+c;w=w-c;
		c=*(cp-*p++);y=y+c;
		c=*(cp-*p++);x=x+c;y=y+c;w=w+c;
		c=*(cp-*p++);x=x+4*c;y=y+c;w=w+2*c;
		c=*(cp-*p);x=x+9*c;y=y+c;w=w+3*c;
		p=p+x_size-5;
		
		c=*(cp-*p++);x=x+4*c;y=y+4*c;w=w-4*c;
		c=*(cp-*p++);x=x+c;y=y+4*c;w=w-2*c;
		c=*(cp-*p++);y=y+4*c;
		c=*(cp-*p++);x=x+c;y=y+4*c;w=w+2*c;
		c=*(cp-*p);x=x+4*c;y=y+4*c;w=w+4*c;
		p=p+x_size-3;
		
		c=*(cp-*p++);x=x+c;y=y+9*c;w=w-3*c;
		c=*(cp-*p++);y=y+9*c;
		c=*(cp-*p);x=x+c;y=y+9*c;w=w+3*c;
		
		if (y==0)
		  z = 1000000.0;
		else
		  z = ((float)x) / ((float)y);
		if (z < 0.5) { a=0; b=1; }
		else { if (z > 2.0) { a=1; b=0; }
		  else { if (w>0) { a=-1; b=1; }
		    else { a=1; b=1; }}}
		if ( (m > r[(i+a)*x_size+j+b]) && (m >= r[(i-a)*x_size+j-b]) &&
		     (m > r[(i+(2*a))*x_size+j+(2*b)]) && (m >= r[(i-(2*a))*x_size+j-(2*b)]) )
		  mid[i*x_size+j] = 2;
	      }
	  }
      }
}

susan_edges_small(in,r,mid,bp,max_no,x_size,y_size)
uchar *in, *bp, *mid;
int *r, max_no, x_size, y_size;
{
  float z;
  int do_symmetry, i, j, m, n, a, b, x, y, w;
  uchar c,*p,*cp;
  
  memset (r,0,x_size * y_size * sizeof(int));
  
  max_no = 730;
  
  for (i=1;i<y_size-1;i++)
    for (j=1;j<x_size-1;j++)
      {
	n=100;
	p=in + (i-1)*x_size + j - 1;
	cp=bp + in[i*x_size+j];
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	p=p+x_size-2;
	
	n=n+*(cp-*p);
	p=p+2;
	n=n+*(cp-*p);
	p=p+x_size-2;
	
	n=n+*(cp-*p++);
	n=n+*(cp-*p++);
	n=n+*(cp-*p);
	
	if (n<=max_no)
	  r[i*x_size+j] = max_no - n;
      }
  
  for (i=2;i<y_size-2;i++)
    for (j=2;j<x_size-2;j++)
      {
	if (r[i*x_size+j]>0)
	  {
	    m=r[i*x_size+j];
	    n=max_no - m;
	    cp=bp + in[i*x_size+j];
	    
        if (n>250)
	  {
          p=in + (i-1)*x_size + j - 1;
          x=0;y=0;
	  
          c=*(cp-*p++);x=x-c;y=y-c;
          c=*(cp-*p++);y=y-c;
          c=*(cp-*p);x=x+c;y=y-c;
          p=p+x_size-2;

          c=*(cp-*p);x=x-c;
          p=p+2;
          c=*(cp-*p);x=x+c;
          p=p+x_size-2;

          c=*(cp-*p++);x=x-c;y=y+c;
          c=*(cp-*p++);y=y+c;
          c=*(cp-*p);x=x+c;y=y+c;
	  
          z = sqrt((float)((x*x) + (y*y)));
          if (z > (0.4*(float)n))
	    {
	      do_symmetry=0;
	      if (x==0)
		z=1000000.0;
	      else
		z=((float)y) / ((float)x);
	      if (z < 0) { z=-z; w=-1; }
	      else w=1;
	      if (z < 0.5) { a=0; b=1; }
	      else { if (z > 2.0) { a=1; b=0; }
		else { if (w>0) { a=1; b=1; }
		  else { a=-1; b=1; }}}
	      if ( (m > r[(i+a)*x_size+j+b]) && (m >= r[(i-a)*x_size+j-b]) )
		mid[i*x_size+j] = 1;
	    }
          else
            do_symmetry=1;
	  }
        else
          do_symmetry=1;
	
        if (do_symmetry==1)
 {
   p=in + (i-1)*x_size + j - 1;
   x=0; y=0; w=0;
   c=*(cp-*p++);x=x+c;y=y+c;w=w+c;
   c=*(cp-*p++);y=y+c;
   c=*(cp-*p);x=x+c;y=y+c;w=w-c;
   p=p+x_size-2;
   
   c=*(cp-*p);x=x+c;
   p=p+2;
   c=*(cp-*p);x=x+c;
   p=p+x_size-2;
   
   c=*(cp-*p++);x=x+c;y=y+c;w=w-c;
   c=*(cp-*p++);y=y+c;
   c=*(cp-*p);x=x+c;y=y+c;w=w+c;
   
   if (y==0)
     z = 1000000.0;
   else
     z = ((float)x) / ((float)y);
   if (z < 0.5) { a=0; b=1; }
   else { if (z > 2.0) { a=1; b=0; }
     else { if (w>0) { a=-1; b=1; }
       else { a=1; b=1; }}}
   if ( (m > r[(i+a)*x_size+j+b]) && (m >= r[(i-a)*x_size+j-b]) )
     mid[i*x_size+j] = 2;
 }
	  }
      }
}

corner_draw(in,corner_list,x_size,drawing_mode)
uchar *in;
CORNER_LIST corner_list;
int x_size, drawing_mode;
{
  uchar *p;
  int n=0;
  
  while(corner_list[n].info != 7)
    {
      if (drawing_mode==0)
	{
	  p = in + (corner_list[n].y-1)*x_size + corner_list[n].x - 1;
	  *p++=255; *p++=255; *p=255; p=p+x_size-2;
	  *p++=255; *p++=0; *p=255; p=p+x_size-2;
	  *p++=255; *p++=255; *p=255;
	  n++;
	}
      else
	{
	  p = in + corner_list[n].y*x_size + corner_list[n].x;
	  *p=0;
	  n++;
	}
    }
}

susan_corners(in,r,bp,max_no,corner_list,x_size,y_size)
uchar *in, *bp;
int *r, max_no, x_size, y_size;
CORNER_LIST corner_list;
{
  int n,x,y,sq,xx,yy,
    i,j,*cgx,*cgy;
  float divide;
  uchar c,*p,*cp;
  
  memset (r,0,x_size * y_size * sizeof(int));
  
  cgx=(int *)malloc(x_size*y_size*sizeof(int));
  cgy=(int *)malloc(x_size*y_size*sizeof(int));

  for (i=5;i<y_size-5;i++)
    for (j=5;j<x_size-5;j++) {
      n=100;
      p=in + (i-3)*x_size + j - 1;
      cp=bp + in[i*x_size+j];
      
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p);
      p=p+x_size-3;
      
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p);
      p=p+x_size-5;
      
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p);
      p=p+x_size-6;
      
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p);
      if (n<max_no){
        p=p+2;
        n=n+*(cp-*p++);
	if (n<max_no){
	  n=n+*(cp-*p++);
	  if (n<max_no){
	    n=n+*(cp-*p);
	    if (n<max_no){
	      p=p+x_size-6;
	      
	      n=n+*(cp-*p++);
	      if (n<max_no){
		n=n+*(cp-*p++);
		if (n<max_no){
		  n=n+*(cp-*p++);
		  if (n<max_no){
		    n=n+*(cp-*p++);
		    if (n<max_no){
		      n=n+*(cp-*p++);
		      if (n<max_no){
			n=n+*(cp-*p++);
			if (n<max_no){
			  n=n+*(cp-*p);
			  if (n<max_no){
			    p=p+x_size-5;
			    
			    n=n+*(cp-*p++);
			    if (n<max_no){
			      n=n+*(cp-*p++);
			      if (n<max_no){
				n=n+*(cp-*p++);
				if (n<max_no){
				  n=n+*(cp-*p++);
				  if (n<max_no){
				    n=n+*(cp-*p);
				    if (n<max_no){
				      p=p+x_size-3;
				      
				      n=n+*(cp-*p++);
				      if (n<max_no){
					n=n+*(cp-*p++);
					if (n<max_no){
					  n=n+*(cp-*p);
					  
					  if (n<max_no)
					    {
					      x=0;y=0;
					      p=in + (i-3)*x_size + j - 1;
					      
					      c=*(cp-*p++);x=x-c;y=y-3*c;
					      c=*(cp-*p++);y=y-3*c;
					      c=*(cp-*p);x=x+c;y=y-3*c;
					      p=p+x_size-3;
					      
					      c=*(cp-*p++);x=x-2*c;y=y-2*c;
					      c=*(cp-*p++);x=x-c;y=y-2*c;
					      c=*(cp-*p++);y=y-2*c;
					      c=*(cp-*p++);x=x+c;y=y-2*c;
					      c=*(cp-*p);x=x+2*c;y=y-2*c;
					      p=p+x_size-5;
					      
					      c=*(cp-*p++);x=x-3*c;y=y-c;
					      c=*(cp-*p++);x=x-2*c;y=y-c;
					      c=*(cp-*p++);x=x-c;y=y-c;
					      c=*(cp-*p++);y=y-c;
					      c=*(cp-*p++);x=x+c;y=y-c;
					      c=*(cp-*p++);x=x+2*c;y=y-c;
					      c=*(cp-*p);x=x+3*c;y=y-c;
					      p=p+x_size-6;
					      
					      c=*(cp-*p++);x=x-3*c;
					      c=*(cp-*p++);x=x-2*c;
					      c=*(cp-*p);x=x-c;
					      p=p+2;
					      c=*(cp-*p++);x=x+c;
					      c=*(cp-*p++);x=x+2*c;
					      c=*(cp-*p);x=x+3*c;
					      p=p+x_size-6;
					      
					      c=*(cp-*p++);x=x-3*c;y=y+c;
					      c=*(cp-*p++);x=x-2*c;y=y+c;
					      c=*(cp-*p++);x=x-c;y=y+c;
					      c=*(cp-*p++);y=y+c;
					      c=*(cp-*p++);x=x+c;y=y+c;
					      c=*(cp-*p++);x=x+2*c;y=y+c;
					      c=*(cp-*p);x=x+3*c;y=y+c;
					      p=p+x_size-5;

					      c=*(cp-*p++);x=x-2*c;y=y+2*c;
					      c=*(cp-*p++);x=x-c;y=y+2*c;
					      c=*(cp-*p++);y=y+2*c;
					      c=*(cp-*p++);x=x+c;y=y+2*c;
					      c=*(cp-*p);x=x+2*c;y=y+2*c;
					      p=p+x_size-3;
					      
					      c=*(cp-*p++);x=x-c;y=y+3*c;
					      c=*(cp-*p++);y=y+3*c;
					      c=*(cp-*p);x=x+c;y=y+3*c;
					      
					      xx=x*x;
					      yy=y*y;
					      sq=xx+yy;
					      if ( sq > ((n*n)/2) )
						{
						  if(yy<xx) {
						    divide=(float)y/(float)abs(x);
						    sq=abs(x)/x;
						    /*sq=*(cp-in[(i+( (divide) < 0 ? ((int)(divide-0.5)) : ((int)(divide+0.5)) ))*x_size+j+sq]) +
						      *(cp-in[(i+( (2*divide) < 0 ? ((int)(2*divide-0.5)) : ((int)(2*divide+0.5)) ))*x_size+j+2*sq]) +
						      *(cp-in[(i+( (3*divide) < 0 ? ((int)(3*divide-0.5)) : ((int)(3*divide+0.5)) ))*x_size+j+3*sq]);*/
						    sq=*(cp-in[(int) (i+divide)*x_size+j+sq]) +
						      *(cp-in[(int) (i+2*divide)*x_size+j+2*sq]) +
						      *(cp-in[(int) (i+3*divide)*x_size+j+3*sq]);}
						  else {
						    divide=(float)x/(float)abs(y);
						    sq=abs(y)/y;
						    /*sq=*(cp-in[(i+sq)*x_size+j+( (divide) < 0 ? ((int)(divide-0.5)) : ((int)(divide+0.5)) )]) +
						      *(cp-in[(i+2*sq)*x_size+j+( (2*divide) < 0 ? ((int)(2*divide-0.5)) : ((int)(2*divide+0.5)) )]) +
						      *(cp-in[(i+3*sq)*x_size+j+( (3*divide) < 0 ? ((int)(3*divide-0.5)) : ((int)(3*divide+0.5)) )]);*/
						    sq=*(cp-in[(i+sq)*x_size+j+(int)divide]) +
						      *(cp-in[(i+2*sq)*x_size+j+2*(int)divide]) +
						      *(cp-in[(i+3*sq)*x_size+j+3*(int)divide]);}
						  
						  if(sq>290){
						    r[i*x_size+j] = max_no-n;
						    cgx[i*x_size+j] = (51*x)/n;
						    cgy[i*x_size+j] = (51*y)/n;}
						}
					    }
					}}}}}}}}}}}}}}}}}}}
  
  
  n=0;
  for (i=5;i<y_size-5;i++)
    for (j=5;j<x_size-5;j++) {
      x = r[i*x_size+j];
      if (x>0) {
	if (
	    (x>r[(i-1)*x_size+j-3]) &&
	    (x>r[(i-1)*x_size+j-2]) &&
	    (x>r[(i-1)*x_size+j-1]) &&
	    (x>r[(i-1)*x_size+j ]) &&
	    (x>r[(i-1)*x_size+j+1]) &&
	    (x>r[(i-1)*x_size+j+2]) &&
	    (x>r[(i-1)*x_size+j+3]) &&
	    
	    (x>r[(i)*x_size+j-3]) &&
	    (x>r[(i)*x_size+j-2]) &&
	    (x>r[(i)*x_size+j-1]) &&
	    (x>=r[(i)*x_size+j+1]) &&
	    (x>=r[(i)*x_size+j+2]) &&
	    (x>=r[(i)*x_size+j+3]) &&
	    
	    (x>=r[(i+1)*x_size+j-3]) &&
	    (x>=r[(i+1)*x_size+j-2]) &&
	    (x>=r[(i+1)*x_size+j-1]) &&
	    (x>=r[(i+1)*x_size+j ]) &&
	    (x>=r[(i+1)*x_size+j+1]) &&
	    (x>=r[(i+1)*x_size+j+2]) &&
	    (x>=r[(i+1)*x_size+j+3]) )
	  
	  {
	    corner_list[n].info=0;
	    corner_list[n].x=j;
	    corner_list[n].y=i;
	    corner_list[n].dx=cgx[i*x_size+j];
	    corner_list[n].dy=cgy[i*x_size+j];
	    corner_list[n].I=in[i*x_size+j];
	    n++;
	    if(n==15000){
	      fprintf(stderr,"Too many corners.\n");
	      exit(1);
	    }}}}
  corner_list[n].info=7;
  
  free(cgx);
  free(cgy);
  
}

susan_corners_quick(in,r,bp,max_no,corner_list,x_size,y_size)
uchar *in, *bp;
int *r, max_no, x_size, y_size;
CORNER_LIST corner_list;
{
  int n,x,y,i,j;
  uchar *p,*cp;
  
  memset (r,0,x_size * y_size * sizeof(int));
  
  for (i=7;i<y_size-7;i++)
    for (j=7;j<x_size-7;j++) {
      n=100;
      p=in + (i-3)*x_size + j - 1;
      cp=bp + in[i*x_size+j];
      
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p);
      p=p+x_size-3;
      
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p);
      p=p+x_size-5;

      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p);
      p=p+x_size-6;

      n=n+*(cp-*p++);
      n=n+*(cp-*p++);
      n=n+*(cp-*p);
      if (n<max_no){
        p=p+2;
        n=n+*(cp-*p++);
	if (n<max_no){
	  n=n+*(cp-*p++);
	  if (n<max_no){
	    n=n+*(cp-*p);
	    if (n<max_no){
	      p=p+x_size-6;

	      n=n+*(cp-*p++);
	      if (n<max_no){
		n=n+*(cp-*p++);
		if (n<max_no){
		  n=n+*(cp-*p++);
		  if (n<max_no){
		    n=n+*(cp-*p++);
		    if (n<max_no){
		      n=n+*(cp-*p++);
		      if (n<max_no){
			n=n+*(cp-*p++);
			if (n<max_no){
			  n=n+*(cp-*p);
			  if (n<max_no){
			    p=p+x_size-5;

			    n=n+*(cp-*p++);
			    if (n<max_no){
			      n=n+*(cp-*p++);
			      if (n<max_no){
				n=n+*(cp-*p++);
				if (n<max_no){
				  n=n+*(cp-*p++);
				  if (n<max_no){
				    n=n+*(cp-*p);
				    if (n<max_no){
				      p=p+x_size-3;

				      n=n+*(cp-*p++);
				      if (n<max_no){
					n=n+*(cp-*p++);
					if (n<max_no){
					  n=n+*(cp-*p);

					  if (n<max_no)
					    r[i*x_size+j] = max_no-n;
					}}}}}}}}}}}}}}}}}}}


  n=0;
  for (i=7;i<y_size-7;i++)
    for (j=7;j<x_size-7;j++) {
      x = r[i*x_size+j];
      if (x>0) {
# 1874 "susan_thin.c"
	if (
	    (x>r[(i-1)*x_size+j-3]) &&
	    (x>r[(i-1)*x_size+j-2]) &&
	    (x>r[(i-1)*x_size+j-1]) &&
	    (x>r[(i-1)*x_size+j ]) &&
	    (x>r[(i-1)*x_size+j+1]) &&
	    (x>r[(i-1)*x_size+j+2]) &&
	    (x>r[(i-1)*x_size+j+3]) &&

	    (x>r[(i)*x_size+j-3]) &&
	    (x>r[(i)*x_size+j-2]) &&
	    (x>r[(i)*x_size+j-1]) &&
	    (x>=r[(i)*x_size+j+1]) &&
	    (x>=r[(i)*x_size+j+2]) &&
	    (x>=r[(i)*x_size+j+3]) &&

	    (x>=r[(i+1)*x_size+j-3]) &&
	    (x>=r[(i+1)*x_size+j-2]) &&
	    (x>=r[(i+1)*x_size+j-1]) &&
	    (x>=r[(i+1)*x_size+j ]) &&
	    (x>=r[(i+1)*x_size+j+1]) &&
	    (x>=r[(i+1)*x_size+j+2]) &&
	    (x>=r[(i+1)*x_size+j+3]))

	  {
	    corner_list[n].info=0;
	    corner_list[n].x=j;
	    corner_list[n].y=i;
	    x = in[(i-2)*x_size+j-2] + in[(i-2)*x_size+j-1] + in[(i-2)*x_size+j] + in[(i-2)*x_size+j+1] + in[(i-2)*x_size+j+2] +
	      in[(i-1)*x_size+j-2] + in[(i-1)*x_size+j-1] + in[(i-1)*x_size+j] + in[(i-1)*x_size+j+1] + in[(i-1)*x_size+j+2] +
	      in[(i )*x_size+j-2] + in[(i )*x_size+j-1] + in[(i )*x_size+j] + in[(i )*x_size+j+1] + in[(i )*x_size+j+2] +
	      in[(i+1)*x_size+j-2] + in[(i+1)*x_size+j-1] + in[(i+1)*x_size+j] + in[(i+1)*x_size+j+1] + in[(i+1)*x_size+j+2] +
	      in[(i+2)*x_size+j-2] + in[(i+2)*x_size+j-1] + in[(i+2)*x_size+j] + in[(i+2)*x_size+j+1] + in[(i+2)*x_size+j+2];

	    corner_list[n].I=x/25;

	    x = in[(i-2)*x_size+j+2] + in[(i-1)*x_size+j+2] + in[(i)*x_size+j+2] + in[(i+1)*x_size+j+2] + in[(i+2)*x_size+j+2] -
	      (in[(i-2)*x_size+j-2] + in[(i-1)*x_size+j-2] + in[(i)*x_size+j-2] + in[(i+1)*x_size+j-2] + in[(i+2)*x_size+j-2]);
	    x = x + x + in[(i-2)*x_size+j+1] + in[(i-1)*x_size+j+1] + in[(i)*x_size+j+1] + in[(i+1)*x_size+j+1] + in[(i+2)*x_size+j+1] -
	      (in[(i-2)*x_size+j-1] + in[(i-1)*x_size+j-1] + in[(i)*x_size+j-1] + in[(i+1)*x_size+j-1] + in[(i+2)*x_size+j-1]);

	    y = in[(i+2)*x_size+j-2] + in[(i+2)*x_size+j-1] + in[(i+2)*x_size+j] + in[(i+2)*x_size+j+1] + in[(i+2)*x_size+j+2] -
	      (in[(i-2)*x_size+j-2] + in[(i-2)*x_size+j-1] + in[(i-2)*x_size+j] + in[(i-2)*x_size+j+1] + in[(i-2)*x_size+j+2]);
	    y = y + y + in[(i+1)*x_size+j-2] + in[(i+1)*x_size+j-1] + in[(i+1)*x_size+j] + in[(i+1)*x_size+j+1] + in[(i+1)*x_size+j+2] -
	      (in[(i-1)*x_size+j-2] + in[(i-1)*x_size+j-1] + in[(i-1)*x_size+j] + in[(i-1)*x_size+j+1] + in[(i-1)*x_size+j+2]);
	    corner_list[n].dx=x/15;
	    corner_list[n].dy=y/15;
	    n++;
	    if(n==15000){
	      fprintf(stderr,"Too many corners.\n");
	      exit(1);
	    }}}}
  corner_list[n].info=7;
}






main(argc, argv)
int argc;
char *argv [];
{


  FILE *ofp;
  char filename [80],
    *tcp;
  uchar *in, *bp, *mid;
  float dt=4.0;
  int *r,
    argindex=3,
    bt=20,
    principle=0,
    thin_post_proc=1,
    three_by_three=0,
    drawing_mode=0,
    susan_quick=0,
    max_no_corners=1850,
    max_no_edges=2650,
    mode = 0, i,
    x_size, y_size;
  CORNER_LIST corner_list;



  if (argc<3)
    usage();

  /* get_image(argv[1],&in,&x_size,&y_size); */
  get_image(argv[1],&in,x_size,y_size);
  // BEGIN simulation call by ref
   x_size = x_size_global;
   y_size = y_size_global;
   // END  simulation call by ref



  while (argindex < argc)
    {
      tcp = argv[argindex];
      if (*tcp == '-')
	switch (*++tcp)
	  {
	  case 's':
	    mode=0;
	    break;
	  case 'e':
	    mode=1;
	    break;
	  case 'c':
	    mode=2;
	    break;
	  case 'p':
	    principle=1;
	    break;
	  case 'n':
	    thin_post_proc=0;
	    break;
	  case 'b':
	    drawing_mode=1;
	    break;
	  case '3':
	    three_by_three=1;
	    break;
	  case 'q':
	    susan_quick=1;
	    break;
	  case 'd':
	    if (++argindex >= argc){
	      printf ("No argument following -d\n");
	      exit(0);}
	    dt=atof(argv[argindex]);
	    if (dt<0) three_by_three=1;
	    break;
	  case 't':
	    if (++argindex >= argc){
	      printf ("No argument following -t\n");
	      exit(0);}
	    bt=atoi(argv[argindex]);
	    break;
	  }
      else
        usage();
      argindex++;
    }

  if ( (principle==1) && (mode==0) )
    mode=1;




  switch (mode)
    {
    case 0:


      setup_brightness_lut(&bp,bt,2);
      susan_smoothing(three_by_three,in,dt,x_size,y_size,bp);
      break;


    case 1:


      r = (int *) malloc(x_size * y_size * sizeof(int));
      setup_brightness_lut(&bp,bt,6);

      if (principle)
	{
	  if (three_by_three)
	    susan_principle_small(in,r,bp,max_no_edges,x_size,y_size);
	  else
	    susan_principle(in,r,bp,max_no_edges,x_size,y_size);
	  int_to_uchar(r,in,x_size*y_size);
	}
      else
	{
	  mid = (uchar *)malloc(x_size*y_size);
	  memset (mid,100,x_size * y_size);

	  if (three_by_three)
	    susan_edges_small(in,r,mid,bp,max_no_edges,x_size,y_size);
	  else
	    susan_edges(in,r,mid,bp,max_no_edges,x_size,y_size);
	  if(thin_post_proc)
	    susan_thin(r,mid,x_size,y_size);
	  edge_draw(in,mid,x_size,y_size,drawing_mode);
	}

      break;


    case 2:


      r = (int *) malloc(x_size * y_size * sizeof(int));
      setup_brightness_lut(&bp,bt,6);

      if (principle)
	{
	  susan_principle(in,r,bp,max_no_corners,x_size,y_size);
	  int_to_uchar(r,in,x_size*y_size);
	}
      else
	{
	  if(susan_quick)
	    susan_corners_quick(in,r,bp,max_no_corners,corner_list,x_size,y_size);
	  else
	    susan_corners(in,r,bp,max_no_corners,corner_list,x_size,y_size);
	  corner_draw(in,corner_list,x_size,drawing_mode);
	}

      break;


    }



  put_image(argv[2],in,x_size,y_size);
  return 0;
}
