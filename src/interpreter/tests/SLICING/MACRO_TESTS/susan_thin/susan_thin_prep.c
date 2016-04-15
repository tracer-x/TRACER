// This version is compiled by gcc with option -lm

// Our compiler compiles these lines INCORRECTLY !!!!!
//typedef int TOTAL_TYPE;
//typedef unsigned int size_t;
//typedef int wchar_t;

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


extern unsigned int ctype_get_mb_cur_max (void); 
extern double atof ( char *nptr);
extern int atoi ( char *nptr);      
extern long int atol ( char *nptr);      
extern long long int atoll ( char *nptr); 
extern double strtod ( char * nptr,char ** endptr);
extern long int strtol ( char * nptr,char ** endptr, int base);
extern unsigned long int strtoul ( char * nptr,char ** endptr, int base);     
extern long long int strtoq ( char * nptr,char ** endptr, int base);
extern unsigned long long int strtouq ( char * nptr,char ** endptr, int base);     
extern long long int strtoll ( char * nptr,char ** endptr, int base);      
extern unsigned long long int strtoull ( char * nptr,char ** endptr, int base);      
extern char *l64a (long int n)  ;
extern long int a64l ( char *s);

typedef unsigned long int u_long;
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int int16_t;
typedef unsigned short int uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
 typedef signed long long int int64_t;
 typedef unsigned long long int uint64_t;
 typedef long long int quad_t;
 typedef unsigned long long int u_quad_t;
 typedef u_quad_t dev_t;
 typedef unsigned int uid_t;
 typedef unsigned int gid_t;
 typedef unsigned long int ino_t;
 typedef u_quad_t ino64_t;
 typedef unsigned int mode_t;
 typedef unsigned int nlink_t;
 typedef long int off_t;
 typedef quad_t off64_t;
 typedef int pid_t;
 typedef struct { int val[2]; } fsid_t;
 typedef long int clock_t;
 typedef unsigned long int rlim_t;
 typedef u_quad_t rlim64_t;
 typedef unsigned int id_t;
 typedef long int time_t;
 typedef unsigned int useconds_t;
 typedef long int suseconds_t;
 typedef int daddr_t;
 typedef long int swblk_t;
 typedef int key_t;
 typedef int clockid_t;
 typedef void * timer_t;
 typedef long int blksize_t;
 typedef long int blkcnt_t;
 typedef quad_t blkcnt64_t;
 typedef unsigned long int fsblkcnt_t;
 typedef u_quad_t fsblkcnt64_t;
 typedef unsigned long int fsfilcnt_t;
 typedef u_quad_t fsfilcnt64_t;
 typedef int ssize_t;
typedef off64_t loff_t;
typedef quad_t *qaddr_t;
typedef char *caddr_t;
 typedef int intptr_t;
 typedef unsigned int socklen_t;
typedef unsigned char u_char;
typedef unsigned short int u_short;
typedef unsigned int u_int;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t ;
typedef unsigned int u_int32_t ;
typedef unsigned int u_int64_t ;
typedef int register_t ;
typedef int sig_atomic_t;
typedef long int fd_mask;
typedef unsigned long int pthread_t;


typedef struct
  {
    unsigned long int val[(1024 / (8 * sizeof (unsigned long int)))];
  } sigset_t;
//typedef sigset_t sigset_t;

struct timespec
  {
    time_t tv_sec;
    long int tv_nsec;
  };
struct timeval
  {
    time_t tv_sec;
    suseconds_t tv_usec;
  };
typedef struct
  {
    fd_mask fds_bits[1024 / (8 * sizeof (fd_mask))];
  } fd_set;

extern int select (int nfds, fd_set * readfds,
     fd_set * writefds,
     fd_set * exceptfds,
     struct timeval * timeout);
extern int pselect (int nfds, fd_set * readfds,
      fd_set * writefds,
      fd_set * exceptfds,
      const struct timespec * timeout,
      const sigset_t * sigmask);

extern unsigned int gnu_dev_major (unsigned long long int dev);     
extern unsigned int gnu_dev_minor (unsigned long long int dev);
extern unsigned long long int gnu_dev_makedev (unsigned int major,
					       unsigned int minor);
typedef union
{
  char size[36];
  long int align;
} pthread_attr_t;

typedef struct pthread_internal_slist
{
  struct pthread_internal_slist *next;
} pthread_slist_t;

typedef union
{
  struct pthread_mutex_s
  {
    int lock;
    unsigned int count;
    int owner;
    int kind;
    unsigned int nusers;
     union
    {
      int spins;
      pthread_slist_t list;
    };

  } data;
  char size[24];
  long int align;
} pthread_mutex_t;

typedef union
{
  char size[4];
  int align;
} pthread_mutexattr_t;
typedef union
{
  struct
  {
    int lock;
    unsigned int futex;
     unsigned long long int total_seq;
     unsigned long long int wakeup_seq;
     unsigned long long int woken_seq;
    void *mutex;
    unsigned int nwaiters;
    unsigned int broadcast_seq;
  } data;
  char size[48];
   long long int align;
} pthread_cond_t;

typedef union
{
  char size[4];
  int align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
typedef union
{
  struct
  {
    int lock;
    unsigned int nr_readers;
    unsigned int readers_wakeup;
    unsigned int writer_wakeup;
    unsigned int nr_readers_queued;
    unsigned int nr_writers_queued;


    unsigned char flags;
    unsigned char shared;
    unsigned char pad1;
    unsigned char pad2;
    int writer;
  } data;

  char size[32];
  long int align;
} pthread_rwlock_t;

typedef union
{
  char size[8];
  long int align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union
{
  char size[20];
  long int align;
} pthread_barrier_t;

typedef union
{
  char size[4];
  int align;
} pthread_barrierattr_t;
extern long int random (void) ;
extern void srandom (unsigned int seed) ;
extern char *initstate (unsigned int seed, char *statebuf,
   unsigned int statelen) ;
extern char *setstate (char *statebuf) ;
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

extern int random_r (struct random_data * buf,
       int32_t * result) ;
extern int srandom_r (unsigned int seed, struct random_data *buf);
extern int initstate_r (unsigned int seed, char * statebuf,
   unsigned int statelen,
   struct random_data * buf);
extern int setstate_r (char * statebuf,
         struct random_data * buf);
extern int rand (void) ;
extern void srand (unsigned int seed) ;
extern int rand_r (unsigned int *seed);
extern double drand48 (void) ;
extern double erand48 (unsigned short int xsubi[3]) ;
extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int xsubi[3]);
extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int xsubi[3]);
extern void srand48 (long int seedval) ;
extern unsigned short int *seed48 (unsigned short int seed16v[3]);
extern void lcong48 (unsigned short int param[7]) ;
struct drand48_data
  {
    unsigned short int x[3];
    unsigned short int old_x[3];
    unsigned short int c;
    unsigned short int init;
    unsigned long long int a;
  };
extern int drand48_r (struct drand48_data * buffer,
        double * result) ;
extern int erand48_r (unsigned short int xsubi[3],
        struct drand48_data * buffer,
        double * result) ;
extern int lrand48_r (struct drand48_data * buffer,
        long int * result)
     ;
extern int nrand48_r (unsigned short int xsubi[3],
        struct drand48_data * buffer,
        long int * result)
     ;
extern int mrand48_r (struct drand48_data * buffer,
        long int * result)
     ;
extern int jrand48_r (unsigned short int xsubi[3],
        struct drand48_data * buffer,
        long int * result)
     ;
extern int srand48_r (long int seedval, struct drand48_data *buffer)
     ;
extern int seed48_r (unsigned short int seed16v[3],
       struct drand48_data *buffer) ;
extern int lcong48_r (unsigned short int param[7],
        struct drand48_data *buffer)
     ;
extern void *malloc (unsigned int size)  ;
extern void *calloc (unsigned int nmemb, unsigned int size)
      ;
extern void *realloc (void *ptr, unsigned int size)
     ;
extern void free (void *ptr) ;
extern void cfree (void *ptr) ;
extern void *alloca (unsigned int size) ;
extern void *valloc (unsigned int size)  ;
extern int posix_memalign (void **memptr, unsigned int alignment, unsigned int size)
     ;
extern void abort (void) ;
extern int atexit (void (*func) (void)) ;
extern int on_exit (void (*func) (int status, void *arg), void *arg)
     ;
extern void exit (int status) ;
extern char *getenv ( char *name)  ;
extern char *secure_getenv ( char *name)
      ;
extern int putenv (char *string) ;
extern int setenv ( char *name,  char *value, int replace)
     ;
extern int unsetenv ( char *name) ;
extern int clearenv (void) ;
extern char *mktemp (char *template) ;
extern int mkstemp (char *template)  ;
extern char *mkdtemp (char *template)  ;
extern int system ( char *command) ;
extern char *realpath ( char * name,
         char * resolved) ;
typedef int (*compar_fn_t) ( void *,  void *);
extern void *bsearch ( void *key,  void *base,
        unsigned int nmemb, unsigned int size, compar_fn_t compar)
      ;
extern void qsort (void *base, unsigned int nmemb, unsigned int size,
     compar_fn_t compar) ;
extern int abs (int x)  ;
extern long int labs (long int x)  ;
extern div_t div (int numer, int denom)
     ;
extern ldiv_t ldiv (long int numer, long int denom)
      ;
extern char *ecvt (double value, int ndigit, int * decpt,
     int * sign)  ;
extern char *fcvt (double value, int ndigit, int * decpt,
     int * sign)  ;
extern char *gcvt (double value, int ndigit, char *buf);      
extern char *qecvt (long double value, int ndigit,
      int * decpt, int * sign);      
extern char *qfcvt (long double value, int ndigit,
		    int * decpt, int * sign);
extern char *qgcvt (long double value, int ndigit, char *buf);
extern int ecvt_r (double value, int ndigit, int * decpt,
     int * sign, char * buf,
     unsigned int len) ;
extern int fcvt_r (double value, int ndigit, int * decpt,
     int * sign, char * buf,
     unsigned int len) ;
extern int qecvt_r (long double value, int ndigit,
      int * decpt, int * sign,
      char * buf, unsigned int len);     
extern int qfcvt_r (long double value, int ndigit,
      int * decpt, int * sign,
      char * buf, unsigned int len) ;
extern int mblen ( char *s, unsigned int n)  ;
extern int mbtowc (int * pwc, char * s, unsigned int n)  ;
extern int wctomb (char *s, int wchar)  ;
extern unsigned int mbstowcs (int * pwcs, char * s, unsigned int n) ;
extern unsigned int wcstombs (char * s, int * pwcs, unsigned int n);
extern int rpmatch ( char *response)  ;
extern int posix_openpt (int oflag) ;
extern int getloadavg (double loadavg[], int nelem);
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct
{
  int count;
  union
  {
    unsigned int wch;
    char wchb[4];
  } value;
} mbstate_t;
typedef struct
{
  off_t pos;
  mbstate_t state;
} _G_fpos_t;
typedef struct
{
  off64_t pos;
  mbstate_t state;
} _G_fpos64_t;
typedef int _G_int16_t ;
typedef int _G_int32_t ;
typedef unsigned int _G_uint16_t ;
typedef unsigned int _G_uint32_t ;
typedef int gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
enum codecvt_result
{
  codecvt_ok,
  codecvt_partial,
  codecvt_error,
  codecvt_noconv
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
  off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  off64_t _offset;
  void *pad1;
  void *pad2;
  void *pad3;
  void *pad4;
  unsigned int pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (unsigned int)];
};

typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
//extern struct _IO_FILE_plus _IO_2_1_stdin_;
//extern struct _IO_FILE_plus _IO_2_1_stdout_;
//extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef ssize_t io_read_fn (void *cookie, char *buf, unsigned int nbytes);
typedef ssize_t io_write_fn (void *cookie,  char *buf,
     unsigned int n);
typedef int io_seek_fn (void *cookie, off64_t *pos, int w);
typedef int io_close_fn (void *cookie);
extern int underflow (_IO_FILE *);
extern int uflow (_IO_FILE *);
extern int overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *fp);
extern int _IO_putc (int c, _IO_FILE *fp);
extern int _IO_feof (_IO_FILE *fp) ;
extern int _IO_ferror (_IO_FILE *fp) ;
extern int _IO_peekc_locked (_IO_FILE *fp);
extern void _IO_flockfile (_IO_FILE *) ;
extern void _IO_funlockfile (_IO_FILE *) ;
extern int _IO_ftrylockfile (_IO_FILE *) ;
extern int _IO_vfscanf (_IO_FILE * , const char * ,
   gnuc_va_list, int *);
extern int _IO_vfprintf (_IO_FILE *, const char *,
    gnuc_va_list);
extern ssize_t _IO_padn (_IO_FILE *, int, ssize_t);
extern unsigned int _IO_sgetn (_IO_FILE *, void *, unsigned int);
extern off64_t _IO_seekoff (_IO_FILE *, off64_t, int, int);
extern off64_t _IO_seekpos (_IO_FILE *, off64_t, int);
extern void _IO_free_backup_area (_IO_FILE *) ;
typedef _G_fpos_t fpos_t;
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern int remove ( char *filename) ;
extern int rename ( char *old,  char *new) ;
extern FILE *tmpfile (void) ;
extern char *tmpnam (char *s)  ;
extern char *tmpnam_r (char *s)  ;
extern char *tempnam ( char *dir,  char *pfx)
 ;
extern int fclose (FILE *stream);
extern int fflush (FILE *stream);
extern int fflush_unlocked (FILE *stream);
extern FILE *fopen ( char * filename,
       char * modes) ;
extern FILE *freopen ( char * filename,
         char * modes,
        FILE * stream) ;
extern FILE *fdopen (int fd,  char *modes)  ;
extern void setbuf (FILE * stream, char * buf) ;
extern int setvbuf (FILE * stream, char * buf,
      int modes, unsigned int n);
extern void setbuffer (FILE * stream, char * buf,
         unsigned int size) ;
extern void setlinebuf (FILE *stream) ;
extern int fprintf (FILE * stream,
       char * format, ...);
extern int printf ( char * format, ...);
extern int sprintf (char * s,
       char * format, ...) ;
extern int vfprintf (FILE * s,  char * format,
       gnuc_va_list arg);
extern int vprintf ( char * format, gnuc_va_list arg);
extern int vsprintf (char * s,  char * format,
       gnuc_va_list arg) ;
extern int snprintf (char * s, unsigned int maxlen,
        char * format, ...)
     ;

extern int vsnprintf (char * s, unsigned int maxlen,
         char * format, gnuc_va_list arg)
     ;
extern int fscanf (FILE * stream,
      char * format, ...) ;
extern int scanf ( char * format, ...) ;
extern int sscanf ( char * s,
      char * format, ...) ;
extern int fgetc (FILE *stream);
extern int getc (FILE *stream);
extern int getchar (void);
extern int getc_unlocked (FILE *stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *stream);
extern int fputc (int c, FILE *stream);
extern int putc (int c, FILE *stream);
extern int putchar (int c);
extern int fputc_unlocked (int c, FILE *stream);
extern int putc_unlocked (int c, FILE *stream);
extern int putchar_unlocked (int c);
extern int getw (FILE *stream);
extern int putw (int w, FILE *stream);
extern char *fgets (char * s, int n, FILE * stream);
extern char *gets (char *s) ;
extern int fputs ( char * s, FILE * stream);
extern int puts ( char *s);
extern int ungetc (int c, FILE *stream);
extern unsigned int fread (void * ptr, unsigned int size,
		     unsigned int n, FILE * stream) ;
extern unsigned int fwrite ( void * ptr, unsigned int size,
		      unsigned int n, FILE * s);
extern unsigned int fread_unlocked (void * ptr, unsigned int size,
			      unsigned int n, FILE * stream) ;
extern unsigned int fwrite_unlocked ( void * ptr, unsigned int size,
			       unsigned int n, FILE * stream);
extern int fseek (FILE *stream, long int off, int whence);
extern long int ftell (FILE *stream) ;
extern void rewind (FILE *stream);
extern int fseeko (FILE *stream, off_t off, int whence);
extern off_t ftello (FILE *stream) ;
extern int fgetpos (FILE * stream, fpos_t * pos);
extern int fsetpos (FILE *stream,  fpos_t *pos);
extern void clearerr (FILE *stream) ;
extern int feof (FILE *stream)  ;
extern int ferror (FILE *stream)  ;
extern void clearerr_unlocked (FILE *stream) ;
extern int feof_unlocked (FILE *stream)  ;
extern int ferror_unlocked (FILE *stream)  ;
extern void perror ( char *s);
extern int sys_nerr;
extern  char * sys_errlist[];
extern int fileno (FILE *stream)  ;
extern int fileno_unlocked (FILE *stream)  ;
extern FILE *popen ( char *command,  char *modes) ;
extern int pclose (FILE *stream);
extern char *ctermid (char *s) ;
extern void flockfile (FILE *stream) ;
extern int ftrylockfile (FILE *stream)  ;
extern void funlockfile (FILE *stream) ;
extern void *memcpy (void * dest,
        void * src, unsigned int n)
     ;
extern void *memmove (void *dest,  void *src, unsigned int n)
     ;
extern void *memccpy (void * dest,  void * src,
        int c, unsigned int n)
     ;
extern void *memset (void *s, int c, unsigned int n) ;
extern int memcmp ( void *s1,  void *s2, unsigned int n)
     ;
extern void *memchr ( void *s, int c, unsigned int n)
      ;
extern char *strcpy (char * dest,  char * src)
     ;
extern char *strncpy (char * dest,
         char * src, unsigned int n)
     ;
extern char *strcat (char * dest,  char * src)
     ;
extern char *strncat (char * dest,  char * src,
        unsigned int n) ;
extern int strcmp ( char *s1,  char *s2)
     ;
extern int strncmp ( char *s1,  char *s2, unsigned int n)
     ;
extern int strcoll ( char *s1,  char *s2)
     ;
extern unsigned int strxfrm (char * dest,
          char * src, unsigned int n)
     ;
extern char *strdup ( char *s)
     ;
extern char *strchr ( char *s, int c)
     ;
extern char *strrchr ( char *s, int c)
     ;
extern unsigned int strcspn ( char *s,  char *reject)
     ;
extern unsigned int strspn ( char *s,  char *accept)
     ;
extern char *strpbrk ( char *s,  char *accept)
     ;
extern char *strstr ( char *haystack,  char *needle)
     ;
extern char *strtok (char * s,  char * delim)
     ;
extern char *strtok_r (char * s,
     char * delim,
    char ** save_ptr)
     ;
extern char *strtok_r (char * s,  char * delim,
         char ** save_ptr)
     ;
extern unsigned int strlen ( char *s)
     ;
extern char *strerror (int errnum) ;
extern int strerror_r (int errnum, char *buf, unsigned int buflen) ;
extern void bzero (void *s, unsigned int n) ;
extern void bcopy ( void *src, void *dest, unsigned int n)
     ;
extern void bzero (void *s, unsigned int n) ;
extern int bcmp ( void *s1,  void *s2, unsigned int n)
     ;
extern char *index ( char *s, int c)
     ;
extern char *rindex ( char *s, int c)
     ;
extern int ffs (int i) ;
extern int strcasecmp ( char *s1,  char *s2)
     ;
extern int strncasecmp ( char *s1,  char *s2, unsigned int n)
     ;
extern char *strsep (char ** stringp,
        char * delim)
     ;
extern double acos (double x) ; 
extern double acos (double x) ;
extern double asin (double x); 
extern double asin (double x) ;
extern double atan (double x); 
extern double atan (double x) ;
extern double atan2 (double y, double x) ; 
extern double atan2 (double y, double x) ;
extern double cos (double x) ; 
extern double cos (double x) ;
extern double sin (double x) ; 
extern double sin (double x) ;
extern double tan (double x) ; 
extern double tan (double x) ;
extern double cosh (double x) ; 
extern double cosh (double x) ;
extern double sinh (double x) ; 
extern double sinh (double x) ;
extern double tanh (double x) ; 
extern double tanh (double x) ;
extern double acosh (double x) ; 
extern double acosh (double x) ;
extern double asinh (double x) ; 
extern double asinh (double x) ;
extern double atanh (double x) ; 
extern double atanh (double x) ;

double exp (double x){  double y; return y;}

extern double frexp (double x, int *exponent) ; 
extern double frexp (double x, int *exponent) ;
extern double ldexp (double x, int exponent) ; 
extern double ldexp (double x, int exponent) ;
extern double log (double x) ; 
extern double log (double x) ;
extern double log10 (double x) ; 
extern double log10 (double x) ;
extern double modf (double x, double *iptr) ; 
extern double modf (double x, double *iptr) ;
extern double expm1 (double x) ; 
extern double expm1 (double x) ;
extern double log1p (double x) ; 
extern double log1p (double x) ;
extern double logb (double x) ; 
extern double logb (double x) ;
extern double pow (double x, double y) ; 
extern double pow (double x, double y) ;

double sqrt (double x){ double y; return y;}

extern double hypot (double x, double y) ;
extern double hypot (double x, double y) ;
extern double cbrt (double x) ; 
extern double cbrt (double x) ;
extern double ceil (double x) ; 
extern double ceil (double x) ;
extern double fabs (double x) ; 
extern double fabs (double x) ;
extern double floor (double x) ; 
extern double floor (double x) ;
extern double fmod (double x, double y) ; 
extern double fmod (double x, double y) ;
extern int isinf (double value) ;
extern int finite (double value) ;
extern int isinf (double value) ;
extern int finite (double value) ;
extern double drem (double x, double y) ; 
extern double drem (double x, double y) ;
extern double significand (double x) ; 
extern double significand (double x) ;
extern double copysign (double x, double y) ; 
extern double copysign (double x, double y) ;
extern int isnan (double value) ;
extern int isnan (double value) ;


extern double j0 (double) ; 
extern double j0 (double) ;
extern double j1 (double); 
extern double j1 (double);
extern double jn (int, double) ; 
extern double jn (int, double) ;
extern double y0 (double) ; 
extern double y0 (double) ;
extern double y1 (double) ; 
extern double y1 (double) ;
extern double yn (int, double) ; 
extern double yn (int, double) ;
extern double erf (double) ; 
extern double erf (double) ;
extern double erfc (double) ; 
extern double erfc (double) ;
extern double lgamma (double) ; 
extern double lgamma (double) ;
extern double gamma (double) ; 
extern double gamma (double) ;
extern double lgamma_r (double, int *signgamp) ; 
extern double lgamma_r (double, int *signgamp) ;
extern double rint (double x) ; 
extern double rint (double x) ;
extern double nextafter (double x, double y) ; 
extern double nextafter (double x, double y) ;
extern double remainder (double x, double y) ; 
extern double remainder (double x, double y) ;
extern double scalbn (double x, int n) ; 
extern double scalbn (double x, int n) ;
extern int ilogb (double x) ; 
extern int ilogb (double x) ;
extern double scalb (double x, double n) ; 
extern double scalb (double x, double n) ;
extern float acosf (float x) ; 
extern float acosf (float x) ;
extern float asinf (float x) ; 
extern float asinf (float x) ;
extern float atanf (float x) ; 
extern float atanf (float x) ;
extern float atan2f (float y, float x) ; 
extern float atan2f (float y, float x) ;
extern float cosf (float x) ;
extern float cosf (float x) ;
extern float sinf (float x); 
extern float sinf (float x) ;
extern float tanf (float x) ; 
extern float tanf (float x) ;
extern float coshf (float x) ; 
extern float coshf (float x) ;
extern float sinhf (float x) ; 
extern float sinhf (float x) ;
extern float tanhf (float x) ; 
extern float tanhf (float x) ;
extern float acoshf (float x) ; 
extern float acoshf (float x) ;
extern float asinhf (float x) ; 
extern float asinhf (float x) ;
extern float atanhf (float x)  ; 
extern float atanhf (float x) ;
extern float expf (float x) ; 
extern float expf (float x) ;
extern float frexpf (float x, int *exponent) ; 
extern float frexpf (float x, int *exponent) ;
extern float ldexpf (float x, int exponent) ; 
extern float ldexpf (float x, int exponent) ;
extern float logf (float x) ; 
extern float logf (float x) ;
extern float log10f (float x) ; 
extern float log10f (float x) ;
extern float modff (float x, float *iptr) ; 
extern float modff (float x, float *iptr) ;
extern float expm1f (float x) ; 
extern float expm1f (float x) ;
extern float log1pf (float x) ; 
extern float log1pf (float x) ;
extern float logbf (float x) ; 
extern float logbf (float x) ;
extern float powf (float x, float y) ; 
extern float powf (float x, float y) ;
extern float sqrtf (float x) ; 
extern float sqrtf (float x) ;
extern float hypotf (float x, float y); 
extern float hypotf (float x, float y) ;
extern float cbrtf (float x) ;
extern float cbrtf (float x) ;
extern float ceilf (float x) ; 
extern float ceilf (float x) ;
extern float fabsf (float x) ; 
extern float fabsf (float x) ;
extern float floorf (float x) ; 
extern float floorf (float x) ;
extern float fmodf (float x, float y) ; 
extern float fmodf (float x, float y) ;
extern int isinff (float value) ;
extern int finitef (float value) ;
extern int isinff (float value) ;
extern int finitef (float value) ;
extern float dremf (float x, float y) ; 
extern float dremf (float x, float y) ;
extern float significandf (float x) ; 
extern float significandf (float x) ;
extern float copysignf (float x, float y) ; 
extern float copysignf (float x, float y) ;
extern int isnanf (float value) ;
extern int isnanf (float value) ;
extern float j0f (float) ; 
extern float j0f (float) ;
extern float j1f (float) ; 
extern float j1f (float) ;
extern float jnf (int, float) ; 
extern float jnf (int, float) ;
extern float y0f (float) ; 
extern float y0f (float) ;
extern float y1f (float)  ; 
extern float y1f (float) ;
extern float ynf (int, float) ; 
extern float ynf (int, float) ;
extern float erff (float) ; 
extern float erff (float) ;
extern float erfcf (float) ; 
extern float erfcf (float) ;
extern float lgammaf (float); 
extern float lgammaf (float) ;
extern float gammaf (float) ; 
extern float gammaf (float) ;
extern float lgammaf_r (float, int *signgamp) ; 
extern float lgammaf_r (float, int *signgamp) ;
extern float rintf (float x) ; 
extern float rintf (float x) ;
extern float nextafterf (float x, float y) ; 
extern float nextafterf (float x, float y) ;
extern float remainderf (float x, float y) ; 
extern float remainderf (float x, float y) ;
extern float scalbnf (float x, int n) ; 
extern float scalbnf (float x, int n) ;
extern int ilogbf (float x) ; 
extern int ilogbf (float x) ;
extern float scalbf (float x, float n) ; 
extern float scalbf (float x, float n) ;
extern long double acosl (long double x) ; 
extern long double acosl (long double x) ;
extern long double asinl (long double x) ; 
extern long double asinl (long double x) ;
extern long double atanl (long double x) ; 
extern long double atanl (long double x) ;

extern long double atan2l (long double y, long double x) ; 
extern long double atan2l (long double y, long double x) ;
extern long double cosl (long double x) ; 
extern long double cosl (long double x) ;
extern long double sinl (long double x) ; 
extern long double sinl (long double x) ;
extern long double tanl (long double x) ; 
extern long double tanl (long double x) ;
extern long double coshl (long double x) ; 
extern long double coshl (long double x) ;
extern long double sinhl (long double x) ;
extern long double sinhl (long double x) ;
extern long double tanhl (long double x) ; 
extern long double tanhl (long double x) ;
extern long double acoshl (long double x) ; 
extern long double acoshl (long double x) ;
extern long double asinhl (long double x) ; 
extern long double asinhl (long double x) ;
extern long double atanhl (long double x) ; 
extern long double atanhl (long double x) ;
extern long double expl (long double x) ; 
extern long double expl (long double x) ;
extern long double frexpl (long double x, int *exponent) ; 
extern long double frexpl (long double x, int *exponent) ;
extern long double ldexpl (long double x, int exponent) ; 
extern long double ldexpl (long double x, int exponent) ;
extern long double logl (long double x) ; 
extern long double logl (long double x) ;
extern long double log10l (long double x) ; 
extern long double log10l (long double x) ;
extern long double modfl (long double x, long double *iptr) ; 
extern long double modfl (long double x, long double *iptr) ;
extern long double expm1l (long double x) ; 
extern long double expm1l (long double x) ;
extern long double log1pl (long double x) ; 
extern long double log1pl (long double x) ;
extern long double logbl (long double x) ; 
extern long double logbl (long double x) ;
extern long double powl (long double x, long double y) ; 
extern long double powl (long double x, long double y) ;
extern long double sqrtl (long double x) ; 
extern long double sqrtl (long double x) ;
extern long double hypotl (long double x, long double y) ; 
extern long double hypotl (long double x, long double y) ;
extern long double cbrtl (long double x) ; 
extern long double cbrtl (long double x) ;
extern long double ceill (long double x) ; 
extern long double ceill (long double x)  ;
extern long double fabsl (long double x) ;
extern long double fabsl (long double x) ;
extern long double floorl (long double x) ; 
extern long double floorl (long double x) ;
extern long double fmodl (long double x, long double y) ; 
extern long double fmodl (long double x, long double y) ;
extern int isinfl (long double value) ;
extern int finitel (long double value) ;
extern int isinfl (long double value) ;
extern int finitel (long double value) ;
extern long double dreml (long double x, long double y) ; 
extern long double dreml (long double x, long double y) ;
extern long double significandl (long double x) ; 
extern long double significandl (long double x) ;
extern long double copysignl (long double x, long double y) ; 
extern long double copysignl (long double x, long double y) ;
extern int isnanl (long double value) ;
extern int isnanl (long double value) ;
extern long double j0l (long double) ; 
extern long double j0l (long double) ;
extern long double j1l (long double) ; 
extern long double j1l (long double) ;
extern long double jnl (int, long double) ; 
extern long double jnl (int, long double) ;
extern long double y0l (long double) ; 
extern long double y0l (long double) ;
extern long double y1l (long double) ; 
extern long double y1l (long double) ;
extern long double ynl (int, long double) ; 
extern long double ynl (int, long double) ;
extern long double erfl (long double) ;
extern long double erfl (long double) ;
extern long double erfcl (long double) ; 
extern long double erfcl (long double) ;
extern long double lgammal (long double) ; 
extern long double lgammal (long double) ;
extern long double gammal (long double) ; 
extern long double gammal (long double) ;
extern long double lgammal_r (long double, int *signgamp) ; 
extern long double lgammal_r (long double, int *signgamp) ;
extern long double rintl (long double x) ; 
extern long double rintl (long double x) ;
extern long double nextafterl (long double x, long double y)  ; 
extern long double nextafterl (long double x, long double y) ;
extern long double remainderl (long double x, long double y) ; 
extern long double remainderl (long double x, long double y) ;
extern long double scalbnl (long double x, int n) ; 
extern long double scalbnl (long double x, int n) ;
extern int ilogbl (long double x) ; 
extern int ilogbl (long double x) ;
extern long double scalbl (long double x, long double n) ; 
extern long double scalbl (long double x, long double n) ;
extern int signgam;
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;
//extern _LIB_VERSION_TYPE _LIB_VERSION;
struct exception
  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };
extern int matherr (struct exception *exc);
struct flock
  {
    short int l_type;
    short int l_whence;

    off_t l_start;
    off_t l_len;
    pid_t l_pid;
  };
extern int fcntl (int fd, int cmd, ...);
extern int open ( char *file, int oflag, ...) ;
extern int creat ( char *file, mode_t mode) ;
extern int lockf (int fd, int cmd, off_t len);
extern int posix_fadvise (int fd, off_t offset, off_t len,
     int advise) ;
extern int posix_fallocate (int fd, off_t offset, off_t len);
extern int flock (int fd, int operation) ;
typedef int ptrdiff_t;
extern void *malloc (unsigned int size) ;
extern void *calloc (unsigned int nmemb, unsigned int size) 
 ;
extern void *realloc (void *ptr, unsigned int size) 
;
extern void free (void *ptr) ;
extern void cfree (void *ptr) ;
extern void *memalign (unsigned int alignment, unsigned int size) 
;
extern void *valloc (unsigned int size) 
;
extern void * pvalloc (unsigned int size) 
 ;
extern void *(*morecore) (ptrdiff_t size);
extern void *default_morecore (ptrdiff_t size) 
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
extern int mallopt (int param, int val) ;
extern int malloc_trim (unsigned int pad) ;
extern unsigned int malloc_usable_size (void *ptr) ;
extern void malloc_stats (void) ;
extern void *malloc_get_state (void) ;
extern int malloc_set_state (void *ptr) ;
extern void (*malloc_initialize_hook) (void);
extern void (*free_hook) (void *ptr,  void *);
extern void *(*malloc_hook) (unsigned int size,  void *);
extern void *(*realloc_hook) (void *ptr, unsigned int size,  void *);
extern void *(*memalign_hook) (unsigned int alignment, unsigned int size,  void *);
extern void (*after_morecore_hook) (void);
extern void malloc_check_init (void) ;
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

int getint(FILE *fd)
  /*FILE *fd;*/
{
  int c, i, k;
  char dummy[10000];

  c = _IO_getc (fd);
  for(k=0;k<5;k++) //ITER? 5 //while (1)  /* commented while(1) by Jorge */
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
  for(k=0;k<5;k++) //ITER? 5 //while (1)  /* commented while(1) by Jorge */
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

void get_image(char filename[200],unsigned char **in,int x_size,int y_size)
  /*char filename[200];
  unsigned char **in;
  int x_size, y_size;*/
{
  FILE *fd;
  char header [100];
  int tmp;
  unsigned int desc;

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

  desc = fread(*in,1,x_size * y_size,fd);
  /* Function calls not allowed inside condition */
  //  if (fread(*in,1,x_size * y_size,fd) == 0)
  if (desc == 0)  
    { fprintf(stderr,"Image %s is wrong size.\n",filename); exit(0); };

  fclose(fd);

  /* Simulation of call by ref */
  x_size_global=x_size;
  y_size_global=y_size;
}


put_image(char filename[100],char *in,int x_size,int y_size)
/*char filename [100],
  *in;
int x_size,
  y_size;*/
{
  FILE *fd;
  unsigned int desc;

  fd=fopen(filename,"w");

  if (fd == ((void *)0))
    
    { fprintf(stderr,"Can't output image%s.\n",filename); exit(0); };
  
  fprintf(fd,"P5\n");
  fprintf(fd,"%d %d\n",x_size,y_size);
  fprintf(fd,"255\n");

  /* Function calls not allowed inside condition */
  //if (fwrite(in,x_size*y_size,1,fd) != 1)
  desc = fwrite(in,x_size*y_size,1,fd);
  if (desc != 1)
    { fprintf(stderr,"Can't write image %s.\n",filename); exit(0); };
  
  fclose(fd);
}

int_to_uchar(int *r,uchar *in,int size)
  /*uchar *in;
  int *r, size;*/
{
  int i,
    max_r=r[0],
    min_r=r[0];
  
  for (i=0; i<size; i++) // ITER? 5
    {
      if ( r[i] > max_r )
        max_r=r[i];
      if ( r[i] < min_r )
        min_r=r[i];
    }

  max_r=max_r-min_r;
 
  for (i=0; i<size; i++) // ITER? 5
    in[i] = (uchar)((int)((int)(r[i]-min_r)*255)/max_r);
}

void setup_brightness_lut(uchar **bp,int thresh,int form)
     /*uchar **bp;
     int thresh, form;*/
{
  int k;
  float temp;
  
  *bp=(unsigned char *)malloc(516);
  *bp=*bp+258;
  
  for(k=-256;k<257;k++)  //ITER 512
    {
      temp=((float)k)/((float)thresh);
      temp=temp*temp;
      if (form==6)
	temp=temp*temp*temp;
      temp=100.0*exp(-temp);
      *(*bp+k)= (uchar)temp;
    }
}

susan_principle(uchar *in,int *r,uchar *bp,int max_no,int x_size,int y_size)
  /*uchar *in, *bp;
  int *r, max_no, x_size, y_size;*/
{
  int i, j, n;
  uchar *p,*cp;
  
  memset (r,0,x_size * y_size * sizeof(int));
  
  for (i=3;i<y_size-3;i++) // ITER? 5
    for (j=3;j<x_size-3;j++) // ITER? 5
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

susan_principle_small(uchar *in, int *r, int *bp, int max_no,int x_size, int y_size)
/*uchar *in, *bp;
int *r, max_no, x_size, y_size;*/
{
  int i, j, n;
  uchar *p,*cp;
  
  memset (r,0,x_size * y_size * sizeof(int));
  
  max_no = 730;
  
  for (i=1;i<y_size-1;i++) // ITER? 5
    for (j=1;j<x_size-1;j++) // ITER? 5
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

uchar median(uchar *in, int i, int j, int x_size)
     /*uchar *in;
     int i, j, x_size;*/
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
  
  for(k=0; k<7; k++)           // ITER 7
    for(l=0; l<(7-k); l++)  //ITER? 5
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

enlarge(uchar **in,uchar *tmp_image,int x_size,int y_size,int border)
/*uchar **in;
uchar *tmp_image;
int x_size, y_size, border;*/
{
  int i, j;
  
  for(i=0; i<y_size; i++)  //ITER? 5
    memcpy(tmp_image+(i+border)*(x_size+2*border)+border, *in+i* x_size, x_size);
  
  for(i=0; i<border; i++) //ITER? 5
    {
      memcpy(tmp_image+(border-1-i)*(x_size+2*border)+border,*in+i* x_size,x_size);
      memcpy(tmp_image+(y_size+border+i)*(x_size+2*border)+border,*in+(y_size-i-1)* x_size,x_size);
    }
  
  for(i=0; i<border; i++)            //ITER? 5
    for(j=0; j<y_size+2*border; j++) //ITER? 5
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

void susan_smoothing(int three_by_three,uchar *in,float dt,int x_size,int y_size,uchar *bp)
/*     int three_by_three, x_size, y_size;
     uchar *in, *bp;
     float dt;*/
{

  
  float temp;
  int n_max, increment, mask_size,
    i,j,x,y,area,brightness,tmp,centre;
  uchar *ip, *dp, *dpt, *cp, *out=in,
    *tmp_image;
  int total;
  
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
      
      for(i=-mask_size; i<=mask_size; i++)   //ITER? 5
	for(j=-mask_size; j<=mask_size; j++) //ITER? 5
	  {
	    x = (int) (100.0 * exp( ((float)((i*i)+(j*j))) / temp ));
	    *dpt++ = (unsigned char)x;
	  }
          
      for (i=mask_size;i<y_size-mask_size;i++)     //ITER? 5
	{
	  for (j=mask_size;j<x_size-mask_size;j++) //ITER? 5
	    {
	      area = 0;
	      total = 0;
	      dpt = dp;
	      ip = in + ((i-mask_size)*x_size) + j - mask_size;
	      centre = in[i*x_size+j];
	      cp = bp + centre;
	      for(y=-mask_size; y<=mask_size; y++)       //ITER? 5
		{
		  for(x=-mask_size; x<=mask_size; x++)   //ITER? 5
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
      for (i=1;i<y_size-1;i++)             //ITER? 5
	{ 
	  for (j=1;j<x_size-1;j++)         //ITER? 5
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
edge_draw(uchar *in,uchar *mid,int x_size,int  y_size,int drawing_mode)
/*uchar *in, *mid;
int x_size, y_size, drawing_mode;*/
{
  int i;
  uchar *inp, *midp;
  
  if (drawing_mode==0)
    {      
      midp=mid;
      for (i=0; i<x_size*y_size; i++)       //ITER? 5
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
  for (i=0; i<x_size*y_size; i++)        //ITER? 5
    {
      if (*midp<8)
	*(in + (midp - mid)) = 0;
      midp++;
    }
}

susan_thin(int *r,uchar *mid,int x_size,int y_size)
/*uchar *mid;
int *r, x_size, y_size;*/
{
  int l[9], centre, nlinks, npieces,
    b01, b12, b21, b10,
    p1, p2, p3, p4,
    b00, b02, b20, b22,
    m, n, a, b, x, y, i, j;
  uchar *mp;
  
  for (i=4;i<y_size-4;i++)               //ITER? 5
    for (j=4;j<x_size-4;j++)             //ITER? 5
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
	    for(y=0; y<3; y++)        //ITER 3 
	      for(x=0; x<3; x++)      //ITER 3
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

susan_edges(uchar *in,int *r,uchar *mid,uchar *bp,int max_no,int x_size,int y_size)
/*uchar *in, *bp, *mid;
int *r, max_no, x_size, y_size;*/
{
  float z;
  int do_symmetry, i, j, m, n, a, b, x, y, w;
  uchar c,*p,*cp;
  
  memset (r,0,x_size * y_size * sizeof(int));
  
  for (i=3;i<y_size-3;i++)     //ITER? 5
    for (j=3;j<x_size-3;j++)   //ITER? 5
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
  
  for (i=4;i<y_size-4;i++)       //ITER? 5
    for (j=4;j<x_size-4;j++)     //ITER? 5
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

susan_edges_small(uchar *in, int *r, uchar *mid, uchar *bp, int max_no,int x_size, int y_size)
/*uchar *in, *bp, *mid;
int *r, max_no, x_size, y_size;*/
{
  float z;
  int do_symmetry, i, j, m, n, a, b, x, y, w;
  uchar c,*p,*cp;
  
  memset (r,0,x_size * y_size * sizeof(int));
  
  max_no = 730;
  
  for (i=1;i<y_size-1;i++)       //ITER? 5
    for (j=1;j<x_size-1;j++)     //ITER? 5
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
  
  for (i=2;i<y_size-2;i++)      //ITER? 5
    for (j=2;j<x_size-2;j++)    //ITER? 5
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

corner_draw(uchar *in,CORNER_LIST corner_list,int x_size,int drawing_mode)
/*uchar *in;
CORNER_LIST corner_list;
int x_size, drawing_mode;*/
{
  uchar *p;
  int n=0;
  
  while(corner_list[n].info != 7)         //ITER? 5
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

susan_corners(uchar *in,int *r,uchar *bp,int max_no,CORNER_LIST corner_list,int x_size,int y_size)
/*uchar *in, *bp;
int *r, max_no, x_size, y_size;
CORNER_LIST corner_list;*/
{
  int n,x,y,sq,xx,yy,
    i,j,*cgx,*cgy;
  float divide;
  uchar c,*p,*cp;
  
  memset (r,0,x_size * y_size * sizeof(int));
  
  cgx=(int *)malloc(x_size*y_size*sizeof(int));
  cgy=(int *)malloc(x_size*y_size*sizeof(int));

  for (i=5;i<y_size-5;i++)            //ITER? 5
    for (j=5;j<x_size-5;j++) {        //ITER? 5
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
  for (i=5;i<y_size-5;i++)                //ITER? 5
    for (j=5;j<x_size-5;j++) {            //ITER? 5 
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

susan_corners_quick(uchar *in,int *r,uchar *bp,int max_no,CORNER_LIST corner_list,int x_size,int y_size)
/*uchar *in, *bp;
int *r, max_no, x_size, y_size;
CORNER_LIST corner_list;*/
{
  int n,x,y,i,j;
  uchar *p,*cp;
  
  memset (r,0,x_size * y_size * sizeof(int));
  
  for (i=7;i<y_size-7;i++)             //ITER? 5
    for (j=7;j<x_size-7;j++) {         //ITER? 5
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
  for (i=7;i<y_size-7;i++)                      //ITER? 5
    for (j=7;j<x_size-7;j++) {                  //ITER? 5
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






main(int argc, char *argv[])
/*int argc;
char *argv [];*/
{


  FILE *ofp;
  char filename [80],
    *tcp, *tcp_1;
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
  int slice_criteria;

  if (argc<3)
    usage();

  /* get_image(argv[1],&in,&x_size,&y_size); */
  get_image(argv[1],&in,x_size,y_size);
  // BEGIN simulation call by ref
   x_size = x_size_global;
   y_size = y_size_global;
   // END  simulation call by ref



  while (argindex < argc)         //ITER? 5
    {
      tcp = argv[argindex];
      if (*tcp == '-'){	
	tcp_1 = ++tcp;
	switch (*tcp_1 /*++tcp*/)
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
	    argindex=argindex+1;
	    if (/*++*/argindex >= argc){
	      printf ("No argument following -d\n");
	      exit(0);}
	    dt=atof(argv[argindex]);
	    if (dt<0) three_by_three=1;
	    break;
	  case 't':
	    argindex=argindex+1;
	    if (/*++*/argindex >= argc){
	      printf ("No argument following -t\n");
	      exit(0);}
	    bt=atoi(argv[argindex]);
	    break;
	  }
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
  slice_criteria = susan_quick + mode + x_size_global + y_size_global + thin_post_proc + drawing_mode + principle + bt;
  return 0;
  _SLICE(slice_criteria);
}
