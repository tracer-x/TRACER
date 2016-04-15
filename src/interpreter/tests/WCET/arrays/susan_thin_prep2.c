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


extern size_t xxctype_get_mb_cur_max (void); 
extern double atof ( char *xxnptr);
extern int atoi ( char *xxnptr);      
extern long int atol ( char *xxnptr);      
extern long long int atoll ( char *xxnptr); 
extern double strtod ( char * xxnptr,char ** xxendptr);
extern long int strtol ( char * xxnptr,char ** xxendptr, int xxbase);
extern unsigned long int strtoul ( char * xxnptr,char ** xxendptr, int xxbase);     
extern long long int strtoq ( char * xxnptr,char ** xxendptr, int xxbase);
extern unsigned long long int strtouq ( char * xxnptr,char ** xxendptr, int xxbase);     
extern long long int strtoll ( char * xxnptr,char ** xxendptr, int xxbase);      
extern unsigned long long int strtoull ( char * xxnptr,char ** xxendptr, int xxbase);      
extern char *l64a (long int xxn)  ;
extern long int a64l ( char *xxs);
typedef unsigned char xxu_char;
typedef unsigned short int xxu_short;
typedef unsigned int xxu_int;
typedef unsigned long int xxu_long;
typedef signed char xxint8_t;
typedef unsigned char xxuint8_t;
typedef signed short int xxint16_t;
typedef unsigned short int xxuint16_t;
typedef signed int xxint32_t;
typedef unsigned int xxuint32_t;
 typedef signed long long int xxint64_t;
 typedef unsigned long long int xxuint64_t;
 typedef long long int xxquad_t;
 typedef unsigned long long int xxu_quad_t;
 typedef xxu_quad_t xxdev_t;
 typedef unsigned int xxuid_t;
 typedef unsigned int xxgid_t;
 typedef unsigned long int xxino_t;
 typedef xxu_quad_t xxino64_t;
 typedef unsigned int xxmode_t;
 typedef unsigned int xxnlink_t;
 typedef long int xxoff_t;
 typedef xxquad_t xxoff64_t;
 typedef int xxpid_t;
 typedef struct { int xxval[2]; } xxfsid_t;
 typedef long int xxclock_t;
 typedef unsigned long int xxrlim_t;
 typedef xxu_quad_t xxrlim64_t;
 typedef unsigned int xxid_t;
 typedef long int xxtime_t;
 typedef unsigned int xxuseconds_t;
 typedef long int xxsuseconds_t;
 typedef int xxdaddr_t;
 typedef long int xxswblk_t;
 typedef int xxkey_t;
 typedef int xxclockid_t;
 typedef void * xxtimer_t;
 typedef long int xxblksize_t;
 typedef long int xxblkcnt_t;
 typedef xxquad_t xxblkcnt64_t;
 typedef unsigned long int xxfsblkcnt_t;
 typedef xxu_quad_t xxfsblkcnt64_t;
 typedef unsigned long int xxfsfilcnt_t;
 typedef xxu_quad_t xxfsfilcnt64_t;
 typedef int xxssize_t;
typedef xxoff64_t xxloff_t;
typedef xxquad_t *xxqaddr_t;
typedef char *xxcaddr_t;
 typedef int xxintptr_t;
 typedef unsigned int xxsocklen_t;
typedef xxu_char u_char;
typedef xxu_short u_short;
typedef xxu_int u_int;
typedef xxu_long u_long;
typedef xxquad_t quad_t;
typedef xxu_quad_t u_quad_t;
typedef xxfsid_t fsid_t;
typedef xxloff_t loff_t;
typedef xxino_t ino_t;
typedef xxdev_t dev_t;
typedef xxgid_t gid_t;
typedef xxmode_t mode_t;
typedef xxnlink_t nlink_t;
typedef xxuid_t uid_t;
typedef xxoff_t off_t;
typedef xxpid_t pid_t;
typedef xxid_t id_t;
typedef xxssize_t ssize_t;
typedef xxdaddr_t daddr_t;
typedef xxcaddr_t caddr_t;
typedef xxkey_t key_t;
typedef xxtime_t time_t;
typedef xxclockid_t clockid_t;
typedef xxtimer_t timer_t;
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
typedef int xxsig_atomic_t;
typedef struct
  {
    unsigned long int xxval[(1024 / (8 * sizeof (unsigned long int)))];
  } xxsigset_t;
typedef xxsigset_t sigset_t;
struct timespec
  {
    xxtime_t tv_sec;
    long int tv_nsec;
  };
struct timeval
  {
    xxtime_t tv_sec;
    xxsuseconds_t tv_usec;
  };
typedef xxsuseconds_t suseconds_t;
typedef long int xxfd_mask;
typedef struct
  {
    xxfd_mask xxfds_bits[1024 / (8 * sizeof (xxfd_mask))];
  } fd_set;
typedef xxfd_mask fd_mask;
extern int select (int xxnfds, fd_set * xxreadfds,
     fd_set * xxwritefds,
     fd_set * xxexceptfds,
     struct timeval * xxtimeout);
extern int pselect (int xxnfds, fd_set * xxreadfds,
      fd_set * xxwritefds,
      fd_set * xxexceptfds,
      const struct timespec * xxtimeout,
      const xxsigset_t * xxsigmask);

extern unsigned int gnu_dev_major (unsigned long long int xxdev)
     ;

extern unsigned int gnu_dev_minor (unsigned long long int xxdev)
;

extern unsigned long long int gnu_dev_makedev (unsigned int xxmajor,
            unsigned int xxminor)
;
typedef xxblkcnt_t blkcnt_t;
typedef xxfsblkcnt_t fsblkcnt_t;
typedef xxfsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;
typedef union
{
  char xxsize[36];
  long int xxalign;
} pthread_attr_t;
typedef struct xxpthread_internal_slist
{
  struct xxpthread_internal_slist *xxnext;
} xxpthread_slist_t;
typedef union
{
  struct xxpthread_mutex_s
  {
    int xxlock;
    unsigned int xxcount;
    int xxowner;
    int xxkind;
    unsigned int xxnusers;
     union
    {
      int xxspins;
      xxpthread_slist_t xxlist;
    };

  } xxdata;
  char xxsize[24];
  long int xxalign;
} pthread_mutex_t;

typedef union
{
  char xxsize[4];
  int xxalign;
} pthread_mutexattr_t;
typedef union
{
  struct
  {
    int xxlock;
    unsigned int xxfutex;
     unsigned long long int xxtotal_seq;
     unsigned long long int xxwakeup_seq;
     unsigned long long int xxwoken_seq;
    void *xxmutex;
    unsigned int xxnwaiters;
    unsigned int xxbroadcast_seq;
  } xxdata;
  char xxsize[48];
   long long int xxalign;
} pthread_cond_t;

typedef union
{
  char xxsize[4];
  int xxalign;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
typedef union
{
  struct
  {
    int xxlock;
    unsigned int xxnr_readers;
    unsigned int xxreaders_wakeup;
    unsigned int xxwriter_wakeup;
    unsigned int xxnr_readers_queued;
    unsigned int xxnr_writers_queued;


    unsigned char xxflags;
    unsigned char xxshared;
    unsigned char xxpad1;
    unsigned char xxpad2;
    int xxwriter;
  } xxdata;

  char xxsize[32];
  long int xxalign;
} pthread_rwlock_t;

typedef union
{
  char xxsize[8];
  long int xxalign;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union
{
  char xxsize[20];
  long int xxalign;
} pthread_barrier_t;

typedef union
{
  char xxsize[4];
  int xxalign;
} pthread_barrierattr_t;
extern long int random (void) ;
extern void srandom (unsigned int xxseed) ;
extern char *initstate (unsigned int xxseed, char *xxstatebuf,
   size_t xxstatelen) ;
extern char *setstate (char *xxstatebuf) ;
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

extern int random_r (struct random_data * xxbuf,
       int32_t * xxresult) ;
extern int srandom_r (unsigned int xxseed, struct random_data *xxbuf);
extern int initstate_r (unsigned int xxseed, char * xxstatebuf,
   size_t xxstatelen,
   struct random_data * xxbuf);
extern int setstate_r (char * xxstatebuf,
         struct random_data * xxbuf);
extern int rand (void) ;
extern void srand (unsigned int xxseed) ;
extern int rand_r (unsigned int *xxseed);
extern double drand48 (void) ;
extern double erand48 (unsigned short int xxxsubi[3]) ;
extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int xxxsubi[3]);
extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int xxxsubi[3]);
extern void srand48 (long int xxseedval) ;
extern unsigned short int *seed48 (unsigned short int xxseed16v[3]);
extern void lcong48 (unsigned short int xxparam[7]) ;
struct drand48_data
  {
    unsigned short int xxx[3];
    unsigned short int xxold_x[3];
    unsigned short int xxc;
    unsigned short int xxinit;
    unsigned long long int xxa;
  };
extern int drand48_r (struct drand48_data * xxbuffer,
        double * xxresult) ;
extern int erand48_r (unsigned short int xxxsubi[3],
        struct drand48_data * xxbuffer,
        double * xxresult) ;
extern int lrand48_r (struct drand48_data * xxbuffer,
        long int * xxresult)
     ;
extern int nrand48_r (unsigned short int xxxsubi[3],
        struct drand48_data * xxbuffer,
        long int * xxresult)
     ;
extern int mrand48_r (struct drand48_data * xxbuffer,
        long int * xxresult)
     ;
extern int jrand48_r (unsigned short int xxxsubi[3],
        struct drand48_data * xxbuffer,
        long int * xxresult)
     ;
extern int srand48_r (long int xxseedval, struct drand48_data *xxbuffer)
     ;
extern int seed48_r (unsigned short int xxseed16v[3],
       struct drand48_data *xxbuffer) ;
extern int lcong48_r (unsigned short int xxparam[7],
        struct drand48_data *xxbuffer)
     ;
extern void *malloc (size_t xxsize)  ;
extern void *calloc (size_t xxnmemb, size_t xxsize)
      ;
extern void *realloc (void *xxptr, size_t xxsize)
     ;
extern void free (void *xxptr) ;
extern void cfree (void *xxptr) ;
extern void *alloca (size_t xxsize) ;
extern void *valloc (size_t xxsize)  ;
extern int posix_memalign (void **xxmemptr, size_t xxalignment, size_t xxsize)
     ;
extern void abort (void) ;
extern int atexit (void (*xxfunc) (void)) ;
extern int on_exit (void (*xxfunc) (int xxstatus, void *xxarg), void *xxarg)
     ;
extern void exit (int xxstatus) ;
extern char *getenv ( char *xxname)  ;
extern char *xxsecure_getenv ( char *xxname)
      ;
extern int putenv (char *xxstring) ;
extern int setenv ( char *xxname,  char *xxvalue, int xxreplace)
     ;
extern int unsetenv ( char *xxname) ;
extern int clearenv (void) ;
extern char *mktemp (char *xxtemplate) ;
extern int mkstemp (char *xxtemplate)  ;
extern char *mkdtemp (char *xxtemplate)  ;
extern int system ( char *xxcommand) ;
extern char *realpath ( char * xxname,
         char * xxresolved) ;
typedef int (*xxcompar_fn_t) ( void *,  void *);
extern void *bsearch ( void *xxkey,  void *xxbase,
        size_t xxnmemb, size_t xxsize, xxcompar_fn_t xxcompar)
      ;
extern void qsort (void *xxbase, size_t xxnmemb, size_t xxsize,
     xxcompar_fn_t xxcompar) ;
extern int abs (int xxx)  ;
extern long int labs (long int xxx)  ;
extern div_t div (int xxnumer, int xxdenom)
     ;
extern ldiv_t ldiv (long int xxnumer, long int xxdenom)
      ;
extern char *ecvt (double xxvalue, int xxndigit, int * xxdecpt,
     int * xxsign)  ;
extern char *fcvt (double xxvalue, int xxndigit, int * xxdecpt,
     int * xxsign)  ;
extern char *gcvt (double xxvalue, int xxndigit, char *xxbuf)
      ;
extern char *qecvt (long double xxvalue, int xxndigit,
      int * xxdecpt, int * xxsign)
      ;
extern char *qfcvt (long double xxvalue, int xxndigit,
      int * xxdecpt, int * xxsign)
      ;
extern char *qgcvt (long double xxvalue, int xxndigit, char *xxbuf)
      ;
extern int ecvt_r (double xxvalue, int xxndigit, int * xxdecpt,
     int * xxsign, char * xxbuf,
     size_t xxlen) ;
extern int fcvt_r (double xxvalue, int xxndigit, int * xxdecpt,
     int * xxsign, char * xxbuf,
     size_t xxlen) ;
extern int qecvt_r (long double xxvalue, int xxndigit,
      int * xxdecpt, int * xxsign,
      char * xxbuf, size_t xxlen)
     ;
extern int qfcvt_r (long double xxvalue, int xxndigit,
      int * xxdecpt, int * xxsign,
      char * xxbuf, size_t xxlen)
     ;
extern int mblen ( char *xxs, size_t xxn)  ;
extern int mbtowc (wchar_t * xxpwc,
      char * xxs, size_t xxn)  ;
extern int wctomb (char *xxs, wchar_t xxwchar)  ;
extern size_t mbstowcs (wchar_t * xxpwcs,
    char * xxs, size_t xxn) ;
extern size_t wcstombs (char * xxs,
    wchar_t * xxpwcs, size_t xxn)
     ;
extern int rpmatch ( char *xxresponse)  ;
extern int posix_openpt (int xxoflag) ;
extern int getloadavg (double xxloadavg[], int xxnelem)
     ;
struct X_IO_FILE;
typedef struct X_IO_FILE FILE;
typedef struct X_IO_FILE xxFILE;
typedef struct
{
  int xxcount;
  union
  {
    unsigned int xxwch;
    char xxwchb[4];
  } xxvalue;
} xxmbstate_t;
typedef struct
{
  xxoff_t xxpos;
  xxmbstate_t xxstate;
} _G_fpos_t;
typedef struct
{
  xxoff64_t xxpos;
  xxmbstate_t xxstate;
} _G_fpos64_t;
typedef int _G_int16_t ;
typedef int _G_int32_t ;
typedef unsigned int _G_uint16_t ;
typedef unsigned int _G_uint32_t ;
typedef int xxgnuc_va_list;
struct X_IO_jump_t; struct X_IO_FILE;
typedef void X_IO_lock_t;
struct X_IO_marker {
  struct X_IO_marker *_next;
  struct X_IO_FILE *_sbuf;
  int _pos;
};
enum xxcodecvt_result
{
  xxcodecvt_ok,
  xxcodecvt_partial,
  xxcodecvt_error,
  xxcodecvt_noconv
};
struct X_IO_FILE {
  int _flags;
  char* X_IO_read_ptr;
  char* X_IO_read_end;
  char* X_IO_read_base;
  char* X_IO_write_base;
  char* X_IO_write_ptr;
  char* X_IO_write_end;
  char* X_IO_buf_base;
  char* X_IO_buf_end;

  char *X_IO_save_base;
  char *X_IO_backup_base;
  char *X_IO_save_end;

  struct X_IO_marker *_markers;

  struct X_IO_FILE *_chain;

  int _fileno;
  int _flags2;
  xxoff_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  X_IO_lock_t *_lock;
  xxoff64_t _offset;
  void *xxpad1;
  void *xxpad2;
  void *xxpad3;
  void *xxpad4;
  size_t xxpad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};

typedef struct X_IO_FILE X_IO_FILE;
struct X_IO_FILE_plus;
extern struct X_IO_FILE_plus X_IO_2_1_stdin_;
extern struct X_IO_FILE_plus X_IO_2_1_stdout_;
extern struct X_IO_FILE_plus X_IO_2_1_stderr_;
typedef xxssize_t xxio_read_fn (void *xxcookie, char *xxbuf, size_t xxnbytes);
typedef xxssize_t xxio_write_fn (void *xxcookie,  char *xxbuf,
     size_t xxn);
typedef int xxio_seek_fn (void *xxcookie, xxoff64_t *xxpos, int xxw);
typedef int xxio_close_fn (void *xxcookie);
extern int xxunderflow (X_IO_FILE *);
extern int xxuflow (X_IO_FILE *);
extern int xxoverflow (X_IO_FILE *, int);
extern int X_IO_getc (X_IO_FILE *xxfp);
extern int X_IO_putc (int xxc, X_IO_FILE *xxfp);
extern int X_IO_feof (X_IO_FILE *xxfp) ;
extern int X_IO_ferror (X_IO_FILE *xxfp) ;
extern int X_IO_peekc_locked (X_IO_FILE *xxfp);
extern void X_IO_flockfile (X_IO_FILE *) ;
extern void X_IO_funlockfile (X_IO_FILE *) ;
extern int X_IO_ftrylockfile (X_IO_FILE *) ;
extern int X_IO_vfscanf (X_IO_FILE * , const char * ,
   xxgnuc_va_list, int *);
extern int X_IO_vfprintf (X_IO_FILE *, const char *,
    xxgnuc_va_list);
extern xxssize_t X_IO_padn (X_IO_FILE *, int, xxssize_t);
extern size_t X_IO_sgetn (X_IO_FILE *, void *, size_t);
extern xxoff64_t X_IO_seekoff (X_IO_FILE *, xxoff64_t, int, int);
extern xxoff64_t X_IO_seekpos (X_IO_FILE *, xxoff64_t, int);
extern void X_IO_free_backup_area (X_IO_FILE *) ;
typedef _G_fpos_t fpos_t;
extern struct X_IO_FILE *stdin;
extern struct X_IO_FILE *stdout;
extern struct X_IO_FILE *stderr;
extern int remove ( char *xxfilename) ;
extern int rename ( char *xxold,  char *xxnew) ;
extern FILE *tmpfile (void) ;
extern char *tmpnam (char *xxs)  ;
extern char *tmpnam_r (char *xxs)  ;
extern char *tempnam ( char *xxdir,  char *xxpfx)
 ;
extern int fclose (FILE *xxstream);
extern int fflush (FILE *xxstream);
extern int fflush_unlocked (FILE *xxstream);
extern FILE *fopen ( char * xxfilename,
       char * xxmodes) ;
extern FILE *freopen ( char * xxfilename,
         char * xxmodes,
        FILE * xxstream) ;
extern FILE *fdopen (int xxfd,  char *xxmodes)  ;
extern void setbuf (FILE * xxstream, char * xxbuf) ;
extern int setvbuf (FILE * xxstream, char * xxbuf,
      int xxmodes, size_t xxn);
extern void setbuffer (FILE * xxstream, char * xxbuf,
         size_t xxsize) ;
extern void setlinebuf (FILE *xxstream) ;
extern int fprintf (FILE * xxstream,
       char * xxformat, ...);
extern int printf ( char * xxformat, ...);
extern int sprintf (char * xxs,
       char * xxformat, ...) ;
extern int vfprintf (FILE * xxs,  char * xxformat,
       xxgnuc_va_list xxarg);
extern int vprintf ( char * xxformat, xxgnuc_va_list xxarg);
extern int vsprintf (char * xxs,  char * xxformat,
       xxgnuc_va_list xxarg) ;
extern int snprintf (char * xxs, size_t xxmaxlen,
        char * xxformat, ...)
     ;

extern int vsnprintf (char * xxs, size_t xxmaxlen,
         char * xxformat, xxgnuc_va_list xxarg)
     ;
extern int fscanf (FILE * xxstream,
      char * xxformat, ...) ;
extern int scanf ( char * xxformat, ...) ;
extern int sscanf ( char * xxs,
      char * xxformat, ...) ;
extern int fgetc (FILE *xxstream);
extern int getc (FILE *xxstream);
extern int getchar (void);
extern int getc_unlocked (FILE *xxstream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *xxstream);
extern int fputc (int xxc, FILE *xxstream);
extern int putc (int xxc, FILE *xxstream);
extern int putchar (int xxc);
extern int fputc_unlocked (int xxc, FILE *xxstream);
extern int putc_unlocked (int xxc, FILE *xxstream);
extern int putchar_unlocked (int xxc);
extern int getw (FILE *xxstream);
extern int putw (int xxw, FILE *xxstream);
extern char *fgets (char * xxs, int xxn, FILE * xxstream);
extern char *gets (char *xxs) ;
extern int fputs ( char * xxs, FILE * xxstream);
extern int puts ( char *xxs);
extern int ungetc (int xxc, FILE *xxstream);
extern size_t fread (void * xxptr, size_t xxsize,
		     size_t xxn, FILE * xxstream) ;
extern size_t fwrite ( void * xxptr, size_t xxsize,
		      size_t xxn, FILE * xxs);
extern size_t fread_unlocked (void * xxptr, size_t xxsize,
			      size_t xxn, FILE * xxstream) ;
extern size_t fwrite_unlocked ( void * xxptr, size_t xxsize,
			       size_t xxn, FILE * xxstream);
extern int fseek (FILE *xxstream, long int xxoff, int xxwhence);
extern long int ftell (FILE *xxstream) ;
extern void rewind (FILE *xxstream);
extern int fseeko (FILE *xxstream, xxoff_t xxoff, int xxwhence);
extern xxoff_t ftello (FILE *xxstream) ;
extern int fgetpos (FILE * xxstream, fpos_t * xxpos);
extern int fsetpos (FILE *xxstream,  fpos_t *xxpos);
extern void clearerr (FILE *xxstream) ;
extern int feof (FILE *xxstream)  ;
extern int ferror (FILE *xxstream)  ;
extern void clearerr_unlocked (FILE *xxstream) ;
extern int feof_unlocked (FILE *xxstream)  ;
extern int ferror_unlocked (FILE *xxstream)  ;
extern void perror ( char *xxs);
extern int sys_nerr;
extern  char * sys_errlist[];
extern int fileno (FILE *xxstream)  ;
extern int fileno_unlocked (FILE *xxstream)  ;
extern FILE *popen ( char *xxcommand,  char *xxmodes) ;
extern int pclose (FILE *xxstream);
extern char *ctermid (char *xxs) ;
extern void flockfile (FILE *xxstream) ;
extern int ftrylockfile (FILE *xxstream)  ;
extern void funlockfile (FILE *xxstream) ;
extern void *memcpy (void * xxdest,
        void * xxsrc, size_t xxn)
     ;
extern void *memmove (void *xxdest,  void *xxsrc, size_t xxn)
     ;
extern void *memccpy (void * xxdest,  void * xxsrc,
        int xxc, size_t xxn)
     ;
extern void *memset (void *xxs, int xxc, size_t xxn) ;
extern int memcmp ( void *xxs1,  void *xxs2, size_t xxn)
     ;
extern void *memchr ( void *xxs, int xxc, size_t xxn)
      ;
extern char *strcpy (char * xxdest,  char * xxsrc)
     ;
extern char *strncpy (char * xxdest,
         char * xxsrc, size_t xxn)
     ;
extern char *strcat (char * xxdest,  char * xxsrc)
     ;
extern char *strncat (char * xxdest,  char * xxsrc,
        size_t xxn) ;
extern int strcmp ( char *xxs1,  char *xxs2)
     ;
extern int strncmp ( char *xxs1,  char *xxs2, size_t xxn)
     ;
extern int strcoll ( char *xxs1,  char *xxs2)
     ;
extern size_t strxfrm (char * xxdest,
          char * xxsrc, size_t xxn)
     ;
extern char *strdup ( char *xxs)
     ;
extern char *strchr ( char *xxs, int xxc)
     ;
extern char *strrchr ( char *xxs, int xxc)
     ;
extern size_t strcspn ( char *xxs,  char *xxreject)
     ;
extern size_t strspn ( char *xxs,  char *xxaccept)
     ;
extern char *strpbrk ( char *xxs,  char *xxaccept)
     ;
extern char *strstr ( char *xxhaystack,  char *xxneedle)
     ;
extern char *strtok (char * xxs,  char * xxdelim)
     ;
extern char *xxstrtok_r (char * xxs,
     char * xxdelim,
    char ** xxsave_ptr)
     ;
extern char *strtok_r (char * xxs,  char * xxdelim,
         char ** xxsave_ptr)
     ;
extern size_t strlen ( char *xxs)
     ;
extern char *strerror (int xxerrnum) ;
extern int strerror_r (int xxerrnum, char *xxbuf, size_t xxbuflen) ;
extern void xxbzero (void *xxs, size_t xxn) ;
extern void bcopy ( void *xxsrc, void *xxdest, size_t xxn)
     ;
extern void bzero (void *xxs, size_t xxn) ;
extern int bcmp ( void *xxs1,  void *xxs2, size_t xxn)
     ;
extern char *index ( char *xxs, int xxc)
     ;
extern char *rindex ( char *xxs, int xxc)
     ;
extern int ffs (int xxi) ;
extern int strcasecmp ( char *xxs1,  char *xxs2)
     ;
extern int strncasecmp ( char *xxs1,  char *xxs2, size_t xxn)
     ;
extern char *strsep (char ** xxstringp,
        char * xxdelim)
     ;
extern double acos (double xxx) ; 
extern double xxacos (double xxx) ;
extern double asin (double xxx); 
extern double xxasin (double xxx) ;
extern double atan (double xxx); 
extern double xxatan (double xxx) ;
extern double atan2 (double xxy, double xxx) ; 
extern double xxatan2 (double xxy, double xxx) ;
extern double cos (double xxx) ; 
extern double xxcos (double xxx) ;
extern double sin (double xxx) ; 
extern double xxsin (double xxx) ;
extern double tan (double xxx) ; 
extern double xxtan (double xxx) ;
extern double cosh (double xxx) ; 
extern double xxcosh (double xxx) ;
extern double sinh (double xxx) ; 
extern double xxsinh (double xxx) ;
extern double tanh (double xxx) ; 
extern double xxtanh (double xxx) ;
extern double acosh (double xxx) ; 
extern double xxacosh (double xxx) ;
extern double asinh (double xxx) ; 
extern double xxasinh (double xxx) ;
extern double atanh (double xxx) ; 
extern double xxatanh (double xxx) ;
extern double exp (double xxx) ; 
extern double xxexp (double xxx) ;
extern double frexp (double xxx, int *xxexponent) ; 
extern double xxfrexp (double xxx, int *xxexponent) ;
extern double ldexp (double xxx, int xxexponent) ; 
extern double xxldexp (double xxx, int xxexponent) ;
extern double log (double xxx) ; 
extern double xxlog (double xxx) ;
extern double log10 (double xxx) ; 
extern double xxlog10 (double xxx) ;
extern double modf (double xxx, double *xxiptr) ; 
extern double xxmodf (double xxx, double *xxiptr) ;
extern double expm1 (double xxx) ; 
extern double xxexpm1 (double xxx) ;
extern double log1p (double xxx) ; 
extern double xxlog1p (double xxx) ;
extern double logb (double xxx) ; 
extern double xxlogb (double xxx) ;
extern double pow (double xxx, double xxy) ; 
extern double xxpow (double xxx, double xxy) ;
extern double sqrt (double xxx) ; 
extern double xxsqrt (double xxx) ;
extern double hypot (double xxx, double xxy) ;
extern double xxhypot (double xxx, double xxy) ;
extern double cbrt (double xxx) ; 
extern double xxcbrt (double xxx) ;
extern double ceil (double xxx) ; 
extern double xxceil (double xxx) ;
extern double fabs (double xxx) ; 
extern double xxfabs (double xxx) ;
extern double floor (double xxx) ; 
extern double xxfloor (double xxx) ;
extern double fmod (double xxx, double xxy) ; 
extern double xxfmod (double xxx, double xxy) ;
extern int xxisinf (double xxvalue) ;
extern int xxfinite (double xxvalue) ;
extern int isinf (double xxvalue) ;
extern int finite (double xxvalue) ;
extern double drem (double xxx, double xxy) ; 
extern double xxdrem (double xxx, double xxy) ;
extern double significand (double xxx) ; 
extern double xxsignificand (double xxx) ;
extern double copysign (double xxx, double xxy) ; 
extern double xxcopysign (double xxx, double xxy) ;
extern int xxisnan (double xxvalue) ;
extern int isnan (double xxvalue) ;


extern double j0 (double) ; 
extern double xxj0 (double) ;
extern double j1 (double); 
extern double xxj1 (double);
extern double jn (int, double) ; 
extern double xxjn (int, double) ;
extern double y0 (double) ; 
extern double xxy0 (double) ;
extern double y1 (double) ; 
extern double xxy1 (double) ;
extern double yn (int, double) ; 
extern double xxyn (int, double) ;
extern double erf (double) ; 
extern double xxerf (double) ;
extern double erfc (double) ; 
extern double xxerfc (double) ;
extern double lgamma (double) ; 
extern double xxlgamma (double) ;
extern double gamma (double) ; 
extern double xxgamma (double) ;
extern double lgamma_r (double, int *xxsigngamp) ; 
extern double xxlgamma_r (double, int *xxsigngamp) ;
extern double rint (double xxx) ; 
extern double xxrint (double xxx) ;
extern double nextafter (double xxx, double xxy) ; 
extern double xxnextafter (double xxx, double xxy) ;
extern double remainder (double xxx, double xxy) ; 
extern double xxremainder (double xxx, double xxy) ;
extern double scalbn (double xxx, int xxn) ; 
extern double xxscalbn (double xxx, int xxn) ;
extern int ilogb (double xxx) ; 
extern int xxilogb (double xxx) ;
extern double scalb (double xxx, double xxn) ; 
extern double xxscalb (double xxx, double xxn) ;
extern float acosf (float xxx) ; 
extern float xxacosf (float xxx) ;
extern float asinf (float xxx) ; 
extern float xxasinf (float xxx) ;
extern float atanf (float xxx) ; 
extern float xxatanf (float xxx) ;
extern float atan2f (float xxy, float xxx) ; 
extern float xxatan2f (float xxy, float xxx) ;
extern float cosf (float xxx) ;
extern float xxcosf (float xxx) ;
extern float sinf (float xxx); 
extern float xxsinf (float xxx) ;
extern float tanf (float xxx) ; 
extern float xxtanf (float xxx) ;
extern float coshf (float xxx) ; 
extern float xxcoshf (float xxx) ;
extern float sinhf (float xxx) ; 
extern float xxsinhf (float xxx) ;
extern float tanhf (float xxx) ; 
extern float xxtanhf (float xxx) ;
extern float acoshf (float xxx) ; 
extern float xxacoshf (float xxx) ;
extern float asinhf (float xxx) ; 
extern float xxasinhf (float xxx) ;
extern float atanhf (float xxx)  ; 
extern float xxatanhf (float xxx) ;
extern float expf (float xxx) ; 
extern float xxexpf (float xxx) ;
extern float frexpf (float xxx, int *xxexponent) ; 
extern float xxfrexpf (float xxx, int *xxexponent) ;
extern float ldexpf (float xxx, int xxexponent) ; 
extern float xxldexpf (float xxx, int xxexponent) ;
extern float logf (float xxx) ; 
extern float xxlogf (float xxx) ;
extern float log10f (float xxx) ; 
extern float xxlog10f (float xxx) ;
extern float modff (float xxx, float *xxiptr) ; 
extern float xxmodff (float xxx, float *xxiptr) ;
extern float expm1f (float xxx) ; 
extern float xxexpm1f (float xxx) ;
extern float log1pf (float xxx) ; 
extern float xxlog1pf (float xxx) ;
extern float logbf (float xxx) ; 
extern float xxlogbf (float xxx) ;
extern float powf (float xxx, float xxy) ; 
extern float xxpowf (float xxx, float xxy) ;
extern float sqrtf (float xxx) ; 
extern float xxsqrtf (float xxx) ;
extern float hypotf (float xxx, float xxy); 
extern float xxhypotf (float xxx, float xxy) ;
extern float cbrtf (float xxx) ;
extern float xxcbrtf (float xxx) ;
extern float ceilf (float xxx) ; 
extern float xxceilf (float xxx) ;
extern float fabsf (float xxx) ; 
extern float xxfabsf (float xxx) ;
extern float floorf (float xxx) ; 
extern float xxfloorf (float xxx) ;
extern float fmodf (float xxx, float xxy) ; 
extern float xxfmodf (float xxx, float xxy) ;
extern int xxisinff (float xxvalue) ;
extern int xxfinitef (float xxvalue) ;
extern int isinff (float xxvalue) ;
extern int finitef (float xxvalue) ;
extern float dremf (float xxx, float xxy) ; 
extern float xxdremf (float xxx, float xxy) ;
extern float significandf (float xxx) ; 
extern float xxsignificandf (float xxx) ;
extern float copysignf (float xxx, float xxy) ; 
extern float xxcopysignf (float xxx, float xxy) ;
extern int xxisnanf (float xxvalue) ;
extern int isnanf (float xxvalue) ;
extern float j0f (float) ; 
extern float xxj0f (float) ;
extern float j1f (float) ; 
extern float xxj1f (float) ;
extern float jnf (int, float) ; 
extern float xxjnf (int, float) ;
extern float y0f (float) ; 
extern float xxy0f (float) ;
extern float y1f (float)  ; 
extern float xxy1f (float) ;
extern float ynf (int, float) ; 
extern float xxynf (int, float) ;
extern float erff (float) ; 
extern float xxerff (float) ;
extern float erfcf (float) ; 
extern float xxerfcf (float) ;
extern float lgammaf (float); 
extern float xxlgammaf (float) ;
extern float gammaf (float) ; 
extern float xxgammaf (float) ;
extern float lgammaf_r (float, int *xxsigngamp) ; 
extern float xxlgammaf_r (float, int *xxsigngamp) ;
extern float rintf (float xxx) ; 
extern float xxrintf (float xxx) ;
extern float nextafterf (float xxx, float xxy) ; 
extern float xxnextafterf (float xxx, float xxy) ;
extern float remainderf (float xxx, float xxy) ; 
extern float xxremainderf (float xxx, float xxy) ;
extern float scalbnf (float xxx, int xxn) ; 
extern float xxscalbnf (float xxx, int xxn) ;
extern int ilogbf (float xxx) ; 
extern int xxilogbf (float xxx) ;
extern float scalbf (float xxx, float xxn) ; 
extern float xxscalbf (float xxx, float xxn) ;
extern long double acosl (long double xxx) ; 
extern long double xxacosl (long double xxx) ;
extern long double asinl (long double xxx) ; 
extern long double xxasinl (long double xxx) ;
extern long double atanl (long double xxx) ; 
extern long double xxatanl (long double xxx) ;

extern long double atan2l (long double xxy, long double xxx) ; 
extern long double xxatan2l (long double xxy, long double xxx) ;
extern long double cosl (long double xxx) ; 
extern long double xxcosl (long double xxx) ;
extern long double sinl (long double xxx) ; 
extern long double xxsinl (long double xxx) ;
extern long double tanl (long double xxx) ; 
extern long double xxtanl (long double xxx) ;
extern long double coshl (long double xxx) ; 
extern long double xxcoshl (long double xxx) ;
extern long double sinhl (long double xxx) ;
extern long double xxsinhl (long double xxx) ;
extern long double tanhl (long double xxx) ; 
extern long double xxtanhl (long double xxx) ;
extern long double acoshl (long double xxx) ; 
extern long double xxacoshl (long double xxx) ;
extern long double asinhl (long double xxx) ; 
extern long double xxasinhl (long double xxx) ;
extern long double atanhl (long double xxx) ; 
extern long double xxatanhl (long double xxx) ;
extern long double expl (long double xxx) ; 
extern long double xxexpl (long double xxx) ;
extern long double frexpl (long double xxx, int *xxexponent) ; 
extern long double xxfrexpl (long double xxx, int *xxexponent) ;
extern long double ldexpl (long double xxx, int xxexponent) ; 
extern long double xxldexpl (long double xxx, int xxexponent) ;
extern long double logl (long double xxx) ; 
extern long double xxlogl (long double xxx) ;
extern long double log10l (long double xxx) ; 
extern long double xxlog10l (long double xxx) ;
extern long double modfl (long double xxx, long double *xxiptr) ; 
extern long double xxmodfl (long double xxx, long double *xxiptr) ;
extern long double expm1l (long double xxx) ; 
extern long double xxexpm1l (long double xxx) ;
extern long double log1pl (long double xxx) ; 
extern long double xxlog1pl (long double xxx) ;
extern long double logbl (long double xxx) ; 
extern long double xxlogbl (long double xxx) ;
extern long double powl (long double xxx, long double xxy) ; 
extern long double xxpowl (long double xxx, long double xxy) ;
extern long double sqrtl (long double xxx) ; 
extern long double xxsqrtl (long double xxx) ;
extern long double hypotl (long double xxx, long double xxy) ; 
extern long double xxhypotl (long double xxx, long double xxy) ;
extern long double cbrtl (long double xxx) ; 
extern long double xxcbrtl (long double xxx) ;
extern long double ceill (long double xxx) ; 
extern long double xxceill (long double xxx)  ;
extern long double fabsl (long double xxx) ;
extern long double xxfabsl (long double xxx) ;
extern long double floorl (long double xxx) ; 
extern long double xxfloorl (long double xxx) ;
extern long double fmodl (long double xxx, long double xxy) ; 
extern long double xxfmodl (long double xxx, long double xxy) ;
extern int xxisinfl (long double xxvalue) ;
extern int xxfinitel (long double xxvalue) ;
extern int isinfl (long double xxvalue) ;
extern int finitel (long double xxvalue) ;
extern long double dreml (long double xxx, long double xxy) ; 
extern long double xxdreml (long double xxx, long double xxy) ;
extern long double significandl (long double xxx) ; 
extern long double xxsignificandl (long double xxx) ;
extern long double copysignl (long double xxx, long double xxy) ; 
extern long double xxcopysignl (long double xxx, long double xxy) ;
extern int xxisnanl (long double xxvalue) ;
extern int isnanl (long double xxvalue) ;
extern long double j0l (long double) ; 
extern long double xxj0l (long double) ;
extern long double j1l (long double) ; 
extern long double xxj1l (long double) ;
extern long double jnl (int, long double) ; 
extern long double xxjnl (int, long double) ;
extern long double y0l (long double) ; 
extern long double xxy0l (long double) ;
extern long double y1l (long double) ; 
extern long double xxy1l (long double) ;
extern long double ynl (int, long double) ; 
extern long double xxynl (int, long double) ;
extern long double erfl (long double) ;
extern long double xxerfl (long double) ;
extern long double erfcl (long double) ; 
extern long double xxerfcl (long double) ;
extern long double lgammal (long double) ; 
extern long double xxlgammal (long double) ;
extern long double gammal (long double) ; 
extern long double xxgammal (long double) ;
extern long double lgammal_r (long double, int *xxsigngamp) ; 
extern long double xxlgammal_r (long double, int *xxsigngamp) ;
extern long double rintl (long double xxx) ; 
extern long double xxrintl (long double xxx) ;
extern long double nextafterl (long double xxx, long double xxy)  ; 
extern long double xxnextafterl (long double xxx, long double xxy) ;
extern long double remainderl (long double xxx, long double xxy) ; 
extern long double xxremainderl (long double xxx, long double xxy) ;
extern long double scalbnl (long double xxx, int xxn) ; 
extern long double xxscalbnl (long double xxx, int xxn) ;
extern int ilogbl (long double xxx) ; 
extern int xxilogbl (long double xxx) ;
extern long double scalbl (long double xxx, long double xxn) ; 
extern long double xxscalbl (long double xxx, long double xxn) ;
extern int signgam;
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} XLIB_VERSION_TYPE;
extern XLIB_VERSION_TYPE XLIB_VERSION;
struct exception
  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };
extern int matherr (struct exception *xxexc);
struct flock
  {
    short int l_type;
    short int l_whence;

    xxoff_t l_start;
    xxoff_t l_len;
    xxpid_t l_pid;
  };
extern int fcntl (int xxfd, int xxcmd, ...);
extern int open ( char *xxfile, int xxoflag, ...) ;
extern int creat ( char *xxfile, xxmode_t xxmode) ;
extern int lockf (int xxfd, int xxcmd, xxoff_t xxlen);
extern int posix_fadvise (int xxfd, xxoff_t xxoffset, xxoff_t xxlen,
     int xxadvise) ;
extern int posix_fallocate (int xxfd, xxoff_t xxoffset, xxoff_t xxlen);
extern int flock (int xxfd, int xxoperation) ;
typedef int ptrdiff_t;
extern void *malloc (size_t xxsize) ;
extern void *calloc (size_t xxnmemb, size_t xxsize) 
 ;
extern void *realloc (void *xxptr, size_t xxsize) 
;
extern void free (void *xxptr) ;
extern void cfree (void *xxptr) ;
extern void *memalign (size_t xxalignment, size_t xxsize) 
;
extern void *valloc (size_t xxsize) 
;
extern void * pvalloc (size_t xxsize) 
 ;
extern void *(*xxmorecore) (ptrdiff_t xxsize);
extern void *xxdefault_morecore (ptrdiff_t xxsize) 
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
extern int mallopt (int xxparam, int xxval) ;
extern int malloc_trim (size_t xxpad) ;
extern size_t malloc_usable_size (void *xxptr) ;
extern void malloc_stats (void) ;
extern void *malloc_get_state (void) ;
extern int malloc_set_state (void *xxptr) ;
extern void (*xxmalloc_initialize_hook) (void);
extern void (*xxfree_hook) (void *xxptr,  void *);
extern void *(*xxmalloc_hook) (size_t xxsize,  void *);
extern void *(*xxrealloc_hook) (void *xxptr, size_t xxsize,  void *);
extern void *(*xxmemalign_hook) (size_t xxalignment, size_t xxsize,  void *);
extern void (*xxafter_morecore_hook) (void);
extern void xxmalloc_check_init (void) ;
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

  c = X_IO_getc (fd);
  for(k=0;k<255;k++) //while (1)  /* commented while(1) by Jorge */
    {
      if (c=='#')
	fgets(dummy,9000,fd);
      if (c==(-1))
	{ fprintf(stderr,"Image %s not binary PGM.\n","is"); exit(0); };
      if (c>='0' && c<='9')
	break;
      c = X_IO_getc (fd);
    }


  i = 0;
  for(k=0;k<255;k++) //while (1)  /* commented while(1) by Jorge */
    {
      i = (i*10) + (c - '0');
      c = X_IO_getc (fd);
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
						    sq=*(cp-in[(i+divide)*x_size+j+sq]) +
						      *(cp-in[(i+2*divide)*x_size+j+2*sq]) +
						      *(cp-in[(i+3*divide)*x_size+j+3*sq]);}
						  else {
						    divide=(float)x/(float)abs(y);
						    sq=abs(y)/y;
						    /*sq=*(cp-in[(i+sq)*x_size+j+( (divide) < 0 ? ((int)(divide-0.5)) : ((int)(divide+0.5)) )]) +
						      *(cp-in[(i+2*sq)*x_size+j+( (2*divide) < 0 ? ((int)(2*divide-0.5)) : ((int)(2*divide+0.5)) )]) +
						      *(cp-in[(i+3*sq)*x_size+j+( (3*divide) < 0 ? ((int)(3*divide-0.5)) : ((int)(3*divide+0.5)) )]);*/
						    sq=*(cp-in[(i+sq)*x_size+j+divide]) +
						      *(cp-in[(i+2*sq)*x_size+j+2*divide]) +
						      *(cp-in[(i+3*sq)*x_size+j+3*divide]);}
						  
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
