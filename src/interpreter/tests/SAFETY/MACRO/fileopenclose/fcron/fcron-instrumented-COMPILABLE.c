struct _IO_marker;
// # 2 "file_openclose.h"
typedef long __off_t;
// # 3
typedef long long __off64_t;
// # 5
typedef void _IO_lock_t;
// # 8
struct _IO_FILE {
   int BLAST_FLAG ;
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   int _mode ;
  char _unused2[(int )(15/*U*/ * sizeof(int ) - 2/*U*/ * sizeof(void *))] ;
};
// # 38
typedef struct _IO_FILE FILE;
// # 1
struct _IO_marker;
// # 39
extern FILE *stderr ;
// # 40
extern FILE *stdout ;
// # 55
int EXIT  ;
// # 57
void exit(int status ) 
{ 
  // # 58
  EXIT = 1;
  //  _L: goto _L;
  return;
}

// # 2 "spec.work"
int BLAST_error  ;
// # 3
void BLAST_ERROR(void) 
{ 
  //  BLAST_error = 0;
  // ERROR: goto ERROR;     
}

void __initialize__(void) ;
// # 201 "/usr/lib/gcc-lib/i386-redhat-linux/3.2/include/stddef.h"
typedef unsigned int size_t;
// # 131 "/usr/include/bits/types.h"
typedef unsigned long long __dev_t;
// # 132
typedef unsigned int __uid_t;
// # 133
typedef unsigned int __gid_t;
// # 134
typedef unsigned long __ino_t;
// # 136
typedef unsigned int __mode_t;
// # 137
typedef unsigned int __nlink_t;
// # 138
//typedef long __off_t;
// # 139
//typedef long long __off64_t;
// # 140
typedef int __pid_t;
// # 145
typedef unsigned int __id_t;
// # 146
typedef long __time_t;
// # 148
typedef long __suseconds_t;
// # 161
typedef long __blksize_t;
// # 166
typedef long __blkcnt_t;
// # 180
typedef int __ssize_t;
// # 189
typedef unsigned int __socklen_t;
// # 67 "/usr/include/sys/types.h"
typedef __gid_t gid_t;
// # 72
typedef __mode_t mode_t;
// # 82
typedef __uid_t uid_t;
// # 100
typedef __pid_t pid_t;
// # 105
typedef __id_t id_t;
// # 110
typedef __ssize_t ssize_t;
// # 76 "/users/rupak/ccured/include/gcc_3.2/time.h"
typedef __time_t time_t;
// # 28 "/usr/include/bits/sigset.h"
struct __anonstruct___sigset_t_2 {
  unsigned long __val[(int )(1024/*U*/ / (8/*U*/ * sizeof(unsigned long )))] ;
};
// # 28
typedef struct __anonstruct___sigset_t_2 __sigset_t;
// # 118 "/users/rupak/ccured/include/gcc_3.2/time.h"
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
// # 69 "/usr/include/bits/time.h"
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
// # 55 "/usr/include/sys/select.h"
typedef long __fd_mask;
// # 67
struct __anonstruct_fd_set_3 {
  __fd_mask __fds_bits[(int )(1024/*U*/ / (8/*U*/ * sizeof(__fd_mask )))] ;
};
// # 67
typedef struct __anonstruct_fd_set_3 fd_set;
// # 243 "/users/rupak/ccured/include/ccured_GNUCC.patch"
typedef struct __ccured_va_list *__gnuc_va_list;
// # 263
struct __ccured_va_list {
   int next ;
};
// # 263
typedef struct __ccured_va_list *__ccured_va_list;
// # 94 "/usr/include/getopt.h"
struct option {
   char /*const*/   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
// # 50 "/users/rupak/ccured/include/gcc_3.2/pwd.h"
struct passwd {
   char *pw_name ;
   char *pw_passwd ;
   __uid_t pw_uid ;
   __gid_t pw_gid ;
   char *pw_gecos ;
   char *pw_dir ;
   char *pw_shell ;
};
// # 46 "/users/rupak/ccured/include/gcc_3.2/stdio.h"
//typedef struct _IO_FILE FILE;
// # 73 "/users/rupak/ccured/include/gcc_3.2/signal.h"
typedef void (*__sighandler_t)(int  );
// # 25 "/users/rupak/ccured/include/gcc_3.2/bits/sigaction.h"
struct sigaction {
   void (*sa_handler)(int  ) ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
// # 172 "/usr/include/libio.h"
//typedef void _IO_lock_t;
// # 178
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
// # 263
/* struct _IO_FILE { */
/*    int _flags ; */
/*    char *_IO_read_ptr ; */
/*    char *_IO_read_end ; */
/*    char *_IO_read_base ; */
/*    char *_IO_write_base ; */
/*    char *_IO_write_ptr ; */
/*    char *_IO_write_end ; */
/*    char *_IO_buf_base ; */
/*    char *_IO_buf_end ; */
/*    char *_IO_save_base ; */
/*    char *_IO_backup_base ; */
/*    char *_IO_save_end ; */
/*    struct _IO_marker *_markers ; */
/*    struct _IO_FILE *_chain ; */
/*    int _fileno ; */
/*    int _flags2 ; */
/*    __off_t _old_offset ; */
/*    unsigned short _cur_column ; */
/*    signed char _vtable_offset ; */
/*    char _shortbuf[1] ; */
/*    _IO_lock_t *_lock ; */
/*    __off64_t _offset ; */
/*    void *__pad1 ; */
/*    void *__pad2 ; */
/*    int _mode ; */
/*   char _unused2[(int )(15/\*U*\/ * sizeof(int ) - 2/\*U*\/ * sizeof(void *))] ; */
/* }; */
// # 327
typedef struct _IO_FILE _IO_FILE;
// # 36 "/usr/include/bits/stat.h"
struct stat {
   __dev_t st_dev ;
   unsigned short __pad1 ;
   __ino_t st_ino ;
   __mode_t st_mode ;
   __nlink_t st_nlink ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   __dev_t st_rdev ;
   unsigned short __pad2 ;
   __off_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   unsigned long __unused4 ;
   unsigned long __unused5 ;
};
// # 153 "/usr/include/bits/resource.h"
struct rusage {
   struct timeval ru_utime ;
   struct timeval ru_stime ;
   long ru_maxrss ;
   long ru_ixrss ;
   long ru_idrss ;
   long ru_isrss ;
   long ru_minflt ;
   long ru_majflt ;
   long ru_nswap ;
   long ru_inblock ;
   long ru_oublock ;
   long ru_msgsnd ;
   long ru_msgrcv ;
   long ru_nsignals ;
   long ru_nvcsw ;
   long ru_nivcsw ;
};
// # 45 "/usr/include/sys/resource.h"
typedef int __priority_which_t;
// # 65 "/usr/include/bits/waitstatus.h"
struct __anonstruct___wait_terminated_39 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
// # 65
struct __anonstruct___wait_stopped_40 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
// # 65
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_39 __wait_terminated ;
   struct __anonstruct___wait_stopped_40 __wait_stopped ;
};
// # 131 "/users/rupak/ccured/include/gcc_3.2/time.h"
struct tm {
   int tm_sec ;
   int tm_min ;
   int tm_hour ;
   int tm_mday ;
   int tm_mon ;
   int tm_year ;
   int tm_wday ;
   int tm_yday ;
   int tm_isdst ;
   long tm_gmtoff ;
   char /*const*/   *tm_zone ;
};
// # 247 "/users/rupak/ccured/include/gcc_3.2/unistd.h"
typedef __socklen_t socklen_t;
// # 33 "/usr/include/security/_pam_types.h"
typedef struct pam_handle pam_handle_t;
// # 237
struct pam_message {
   int msg_style ;
   char /*const*/   *msg ;
};
// # 262
struct pam_response {
   char *resp ;
   int resp_retcode ;
};
// # 269
struct pam_conv {
   int (*conv)(int num_msg , struct pam_message  /*const*/  **msg ,
               struct pam_response **resp , void *appdata_ptr ) ;
   void *appdata_ptr ;
};
// # 23 "bitstring.h"
typedef unsigned char bitstr_t;
// # 157 "global.h"
struct env_t {
   char *e_val ;
   struct env_t *e_next ;
};
// # 157
typedef struct env_t env_t;
// # 162
struct cf_t {
   struct cf_t *cf_next ;
   struct cl_t *cf_line_base ;
   char *cf_user ;
   struct env_t *cf_env_base ;
   int cf_running ;
   signed char cf_tzdiff ;
};
// # 162
typedef struct cf_t cf_t;
// # 182
struct cl_t {
   struct cl_t *cl_next ;
   struct cf_t *cl_file ;
   char *cl_shell ;
   char *cl_runas ;
   char *cl_mailto ;
   long cl_id ;
   time_t cl_until ;
   time_t cl_first ;
   time_t cl_nextexe ;
   long cl_timefreq ;
   unsigned short cl_remain ;
   unsigned short cl_runfreq ;
   unsigned char cl_option[4] ;
   unsigned char cl_lavg[3] ;
   unsigned char cl_numexe ;
   char cl_nice ;
   bitstr_t cl_mins[8] ;
   bitstr_t cl_hrs[3] ;
   bitstr_t cl_days[4] ;
   bitstr_t cl_mons[2] ;
   bitstr_t cl_dow[1] ;
};
// # 182
typedef struct cl_t cl_t;
// # 207
struct job_t {
   struct cl_t *j_line ;
   struct job_t *j_next ;
};
// # 207
typedef struct job_t job_t;
// # 212
struct lavg_t {
   struct cl_t *l_line ;
   time_t l_until ;
};
// # 212
typedef struct lavg_t lavg_t;
// # 217
struct exe_t {
   struct cl_t *e_line ;
   pid_t e_ctrl_pid ;
   pid_t e_job_pid ;
};
// # 23 "/usr/include/bits/dirent.h"
struct dirent {
   __ino_t d_ino ;
   __off_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
// # 128 "/usr/include/dirent.h"
typedef struct __dirstream DIR;
// # 43 "/users/rupak/ccured/include/gcc_3.2/grp.h"
struct group {
   char *gr_name ;
   char *gr_passwd ;
   __gid_t gr_gid ;
   char **gr_mem ;
};
// # 40 "/users/rupak/ccured/include/gcc_3.2/shadow.h"
struct spwd {
   char * /* __attribute__((__mdsize__(nullterm))) */ sp_namp ;
   char * /* __attribute__((__mdsize__(nullterm))) */ sp_pwdp ;
   long sp_lstchg ;
   long sp_min ;
   long sp_max ;
   long sp_warn ;
   long sp_inact ;
   long sp_expire ;
   unsigned long sp_flag ;
};
// # 57 "/usr/include/sys/time.h"
struct timezone {
   int tz_minuteswest ;
   int tz_dsttime ;
};
// # 63
typedef struct timezone * /* __restrict */  __timezone_ptr_t;
// # 29 "/usr/include/bits/sockaddr.h"
typedef unsigned short sa_family_t;
// # 145 "/usr/include/bits/socket.h"
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
// # 30 "/usr/include/sys/un.h"
struct sockaddr_un {
   sa_family_t sun_family ;
   char sun_path[108] ;
};
// # 49 "socket.h"
struct fcrondyn_cl {
   struct fcrondyn_cl *fcl_next ;
   int fcl_sock_fd ;
   char *fcl_user ;
   time_t fcl_idle_since ;
   int fcl_cmd_len ;
   long *fcl_cmd ;
};
// # 49
typedef struct fcrondyn_cl fcrondyn_cl;
// # 467 "job.c"
union __anonunion___u_47 {
   int __in ;
   int __i ;
};
// # 467
union __anonunion___u_48 {
   int __in ;
   int __i ;
};
// # 481
union __anonunion___u_49 {
   int __in ;
   int __i ;
};
// # 486
union __anonunion___u_50 {
   int __in ;
   int __i ;
};
// # 490
union __anonunion___u_51 {
   int __in ;
   int __i ;
};
// # 493
union __anonunion___u_52 {
   int __in ;
   int __i ;
};
// # 488
union __anonunion___u_53 {
   int __in ;
   int __i ;
};
// # 479
union __anonunion___u_54 {
   int __in ;
   int __i ;
};
// # 475
union __anonunion___u_55 {
   int __in ;
   int __i ;
};
// # 475
union __anonunion___u_56 {
   int __in ;
   int __i ;
};
// # 41 "conf.c"
struct list_t {
   char *str ;
   struct list_t *next ;
};
// # 41
typedef struct list_t list_t;
struct pam_handle;
struct __dirstream;
// # 19 "/users/rupak/ccured/include/ccured.h"
//extern void *wrapperAlloc(unsigned int  ) ;
void *wrapperAlloc(unsigned int p){ void * x; return x;}
// # 52
//extern void */*  __attribute__((__safe__)) */ __ptrof_nocheck(void *ptr ) ;
void */*  __attribute__((__safe__)) */ __ptrof_nocheck(void *ptr ){
  void * x; return x;}
// # 64
//extern void * /*__attribute__((__safe__))*/  __endof(void *ptr ) ;
void * /*__attribute__((__safe__))*/  __endof(void *ptr ){
  void * x; return x;}
// # 79
//extern void * /*__attribute__((__safe__))*/  __ptrof(void *ptr ) ;
void * __ptrof(void *ptr ) {
  void * x;
  return x;
} 

// # 93
//extern void __verify_nul(char /*const*/   *ptr ) ;
void __verify_nul(char /*const*/   *ptr ){
  int x; return (void) x;}
// # 126
//extern char *__stringof(char /*const*/   *ptr ) ;
char *__stringof(char /*const*/   *ptr ){
  char * x; return x;}
// # 182
//extern void *__mkptr(void * /*__attribute__((__safe__))*/  p , void *phome ) ;
void *__mkptr(void * /*__attribute__((__safe__))*/  p , void *phome ){
  void * x; return x;}
// # 198
//extern void *__mkptr_size(void * /*__attribute__((__safe__))*/  p , unsigned int len ) ;
void *__mkptr_size(void * /*__attribute__((__safe__))*/  p , unsigned int len ){
  void * x;
  return x;
}
// # 208
//extern char *__mkptr_string(char * /*__attribute__((__safe__))*/  p ) ;
char *__mkptr_string(char * p ){char * x; return x;}
// # 229
//extern void *__trusted_cast(void *p ) ;
void *__trusted_cast(void *p ){ void *x; return x;}
// # 239
//extern void * /*__attribute__((__safe__))*/  __trusted_deepcast(void * /*__attribute__((__safe__))*/  p ) ;
void *  __trusted_deepcast(void * p ){ void * x; return x;}
// # 311
//extern int __ccured_has_empty_mangling(unsigned int  ) ;
int __ccured_has_empty_mangling(unsigned int  p){ int x; return x;}

// # 48 "/users/rupak/ccured/include/time_wrappers.h"
extern time_t time(time_t *__timer ) ;
// # 106 "/usr/include/sys/select.h"
extern int select(int __nfds , fd_set * /* __restrict */  __readfds ,
                  fd_set * /*__restrict*/  __writefds ,
                  fd_set * /*__restrict*/  __exceptfds ,
                  struct timeval * /*__restrict*/  __timeout ) ;
// # 60 "/users/rupak/ccured/include/gcc_3.2/fcntl.h"
extern int fcntl(int __fd , int __cmd  , ...) ;
// # 66
extern int open(char /*const*/   *file , int flag  , ...) ;
// # 264 "/users/rupak/ccured/include/ccured_GNUCC.patch"
extern void __ccured_va_start(__ccured_va_list  , unsigned long  ) ;
// # 267
extern void __ccured_va_end(__ccured_va_list  ) ;
// # 74 "/users/rupak/ccured/include/io_wrappers.h"
extern int unlink(char /*const*/   *__name ) ;
// # 91
extern int ( /* missing proto */  GCC_STDARG_START)() ;
// # 128
extern int rename(char /*const*/   *__old , char /*const*/   *__new ) ;
// # 72 "/users/rupak/ccured/include/ccured_GNUCC.patch"
//extern int _get__ctype_b(int  ) ;
int _get__ctype_b(int p){ int x; return x;}
// # 38 "/usr/include/bits/errno.h"
extern int *__errno_location(void)  /* __attribute__((__const__)) */ ;
// # 47 "/usr/include/getopt.h"
extern char *optarg ;
// # 61
extern int optind ;
// # 151
extern int getopt_long(int ___argc , char * /* const */  *___argv ,
                       char /* const */   *__shortopts ,
                       struct option  /* const */  *__longopts , int *__longind ) ;
// # 89 "/users/rupak/ccured/include/gcc_3.2/pwd.h"
extern struct passwd *getpwuid(__uid_t __uid ) ;
// # 92
extern struct passwd *getpwnam(char /* const */   *__name ) ;
// # 38 "/users/rupak/ccured/include/gcc_3.2/string.h"
extern void *memcpy(void * /*__restrict*/  __dest ,
                    void /* const */   * /*__restrict*/  __src , size_t __n ) ;
// # 61
extern int memcmp(void /* const */   *__s1 , void /* const */   *__s2 , size_t __n ) /*  __attribute__((__pure__)) */ ;
// # 82
extern char *strcpy(char * /*__restrict*/  __dest ,
                    char /* const */   * /*__restrict*/  __src ) ;
// # 85
extern char *strncpy(char * /*__restrict*/  __dest ,
                     char /* const */   * /*__restrict*/  __src , size_t __n ) ;
// # 89
extern char *strcat(char * /*__restrict*/  __dest ,
                    char /*const*/   * /*__restrict*/  __src ) ;
// # 92
extern char *strncat(char * /*__restrict*/  __dest ,
                     char /*const*/   * /*__restrict*/  __src , size_t __n ) ;
// # 96
extern int strcmp(char /*const*/   *__s1 , char /*const*/   *__s2 )  /*__attribute__((__pure__))*/ ;
// # 99
extern int strncmp(char /*const*/   *__s1 , char /*const*/   *__s2 , size_t __n )  /*__attribute__((__pure__))*/ ;
// # 162
extern char *strchr(char /*const*/   *__s , int __c )  /*__attribute__((__pure__))*/ ;
// # 164
extern char *strrchr(char /*const*/   *__s , int __c )  /*__attribute__((__pure__))*/ ;
// # 176
extern size_t strcspn(char /*const*/   *__s , char /*const*/   *__reject )  /*__attribute__((__pure__))*/ ;
// # 230 "/usr/include/string.h"
extern size_t strlen(char /*const*/   *__s )  /*__attribute__((__pure__))*/ ;
// # 243
extern char *strerror(int __errnum ) ;
// # 260
extern void bzero(void *__s , size_t __n ) ;
// # 287
extern int strcasecmp(char /*const*/   *__s1 , char /*const*/   *__s2 )  /*__attribute__((__pure__))*/ ;
// # 291
extern int strncasecmp(char /*const*/   *__s1 , char /*const*/   *__s2 , size_t __n )  /*__attribute__((__pure__))*/ ;
// # 110 "/users/rupak/ccured/include/gcc_3.2/malloc.h"
extern void *malloc(size_t __size )  /* __attribute__((__malloc__)) */ ;
// # 113
extern void *calloc(size_t __nmemb , size_t __size )  /* __attribute__((__malloc__)) */ ;
// # 539 "/users/rupak/ccured/include/ccured_GNUCC.patch"
extern void *realloc(void *__ptr , size_t __size ) ;
// # 123 "/usr/include/malloc.h"
extern void free(void *__ptr ) ;
// # 10 "/users/rupak/ccured/include/malloc_wrappers.h"
void *realloc_wrapper(void *b , int sz ) 
{ void *res ;
  void *tmp ;
  void *tmp___0 ;
  void *result ;

  {
  {
// # 12
  tmp = (void *)__ptrof(b);
// # 12
  tmp___0 = realloc(tmp, (unsigned int )sz);
// # 12
  res = tmp___0;
// # 15
  result = b;
// # 17
  result = __mkptr_size((void */*__attribute__((__safe__))*/)res,
                        (unsigned int )sz);
  }
// # 18
  return (result);
}
}
// # 23
void free_wrapper(void *x ) 
{ void *tmp ;

  {
  {
// # 24
  tmp = (void *)__ptrof(x);
// # 24
  free(tmp);
  }
// # 25
  return;
}
}
// # 138 "/users/rupak/ccured/include/string_wrappers.h"
char *strrchr_wrapper(char /*const*/   *s , int chr ) 
{ char *result ;
  char *tmp ;
  char *tmp___0 ;

  {
  {
// # 141
  tmp = __stringof(s);
// # 141
  result = strrchr((char /*const*/   *)tmp, chr);
// # 142
  tmp___0 = (char *)__mkptr((void */* __attribute__((__safe__)) */)((void *)result),
                            (void *)s);
  }
// # 142
  return (tmp___0);
}
}
// # 168
int strcasecmp_wrapper(char /*const*/   *s1 , char /*const*/   *s2 ) 
{ char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;

  {
  {
// # 170
  tmp = __stringof(s2);
// # 170
  tmp___0 = __stringof(s1);
// # 170
  tmp___1 = strcasecmp((char /*const*/   *)tmp___0, (char /*const*/   *)tmp);
  }
// # 170
  return (tmp___1);
}
}
// # 181
int strncasecmp_wrapper(char /*const*/   *s1 , char /*const*/   *s2 , unsigned int n ) 
{ void * /*__attribute__((__safe__))*/  tmp ;
  void * /*__attribute__((__safe__))*/  tmp___0 ;
  void * /*__attribute__((__safe__))*/  tmp___1 ;
  void * /*__attribute__((__safe__))*/  tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  int tmp___5 ;

  {
  {
// # 183
  tmp = __endof((void *)s1);
// # 183
  tmp___0 = __ptrof_nocheck((void *)s1);
  }
// # 183
  if ((unsigned int )tmp - (unsigned int )tmp___0 < n) {
    {
// # 185
    __verify_nul(s1);
    }
  }
  {
// # 187
  tmp___1 = __endof((void *)s2);
// # 187
  tmp___2 = __ptrof_nocheck((void *)s2);
  }
// # 187
  if ((unsigned int )tmp___1 - (unsigned int )tmp___2 < n) {
    {
// # 188
    __verify_nul(s2);
    }
  }
  {
// # 190
  tmp___3 = (char *)__ptrof((void *)s2);
// # 190
  tmp___4 = (char *)__ptrof((void *)s1);
// # 190
  tmp___5 = strncasecmp((char /*const*/   *)tmp___4, (char /*const*/   *)tmp___3, n);
  }
// # 190
  return (tmp___5);
}
}
// # 176 "/users/rupak/ccured/include/gcc_3.2/stdlib.h"
extern long strtol(char /*const*/   * /*__restrict*/  __nptr ,
                   char ** /*__restrict*/  __endptr , int __base ) ;
// # 473 "/usr/include/stdlib.h"
extern int rand(void) ;
// # 475
extern void srand(unsigned int __seed ) ;
// # 612
void exit(int x__status )  /* __attribute__((__noreturn__)) */ ;
// # 613
void exit(int x__status )  /* __attribute__((__noreturn__)) */ ;
// # 613
// # 626
extern char *getenv(char /*const*/   *__name ) ;
// # 637
extern int putenv(char *__string ) ;
// # 643
extern int setenv(char /*const*/   *__name , char /*const*/   *__value , int __replace ) ;
// # 671
extern int mkstemp(char *__template ) ;
// # 910
extern int getloadavg(double *result , int n ) ;
// # 152 "/users/rupak/ccured/include/stdlib_wrappers.h"
static void *q__qsort_base  ;
// # 156
static int (*__qsort_compare)(void * , void * )  ;
// # 195
static void *b__bsearch_base  ;
// # 196
static void *b__bsearch_key  ;
// # 200
static int (*__bsearch_compare)(void * , void * )  ;
// # 254 "/users/rupak/ccured/include/string_wrappers.h"
static char /*const*/   *saved_str;  /* = (char const   *)((void *)0);*/
// # 38 "/users/rupak/ccured/include/pwd_wrappers.h"
extern void __deepcopy_passwd_from_compat(struct passwd *fat ,
                                          struct passwd  /* __attribute__((__compat__)) */ *compat ) 
{ 

  {
  {
// # 40
  fat->pw_name = __mkptr_string((char */* __attribute__((__safe__)) */)compat->pw_name);
// # 41
  fat->pw_passwd = __mkptr_string((char */* __attribute__((__safe__)) */)compat->pw_passwd);
// # 42
  fat->pw_gecos = __mkptr_string((char */* __attribute__((__safe__)) */)compat->pw_gecos);
// # 43
  fat->pw_dir = __mkptr_string((char */* __attribute__((__safe__)) */)compat->pw_dir);
// # 44
  fat->pw_shell = __mkptr_string((char */* __attribute__((__safe__)) */)compat->pw_shell);
  }
// # 45
  return;
}
}
// # 48
static struct passwd my_passwd_result  ;
// # 90 "/users/rupak/ccured/include/gcc_3.2/signal.h"
extern __sighandler_t signal(int __sig , void (*__handler)(int  ) ) ;
// # 114
extern int kill(__pid_t __pid , int __sig ) ;
// # 326
extern int siginterrupt(int __sig , int __interrupt ) ;
// # 57 "/users/rupak/ccured/include/signal_wrappers.h"
/*__inline*/ static void *__mkfat_sighandler(void *in ) 
{ void *tmp ;
  void *tmp___0 ;

  {
// # 58
  if ((int )in == 1) {
    {
// # 59
    tmp = __mkptr((void */* __attribute__((__safe__)) */)in, (void *)0);
    }
// # 59
    return (tmp);
  } else {
    {
// # 61
      tmp___0 = __mkptr_size((void */* __attribute__((__safe__)) */)in, 1/*U*/);
    }
// # 61
    return (tmp___0);
  }
}
}
// # 80
extern void __deepcopy_sigaction_from_compat(struct sigaction *fat ,
                                             struct sigaction  /* __attribute__((__compat__)) */ *compat ) 
{ 

  {
  {
// # 81
  fat->sa_handler = (void (*)(int  ))__mkfat_sighandler((void *)compat->sa_handler);
// # 82
  fat->sa_restorer = (void (*)(void))__mkfat_sighandler((void *)compat->sa_restorer);
  }
// # 84
  return;
}
}
// # 432 "/usr/include/libio.h"
extern int _IO_getc(_IO_FILE *__fp ) ;
// # 167 "/users/rupak/ccured/include/ccured_GNUCC.patch"
//extern FILE *get_stdin(void) ;
FILE *get_stdin(){  FILE *f; return f;}
// # 169
//extern FILE *get_stdout(void) ;
FILE *get_stdout(){ FILE *f; return f;}
// # 171
//extern FILE *get_stderr(void) ;
FILE *get_stderr(){ FILE * f; return f;}
// # 154 "/usr/include/stdio.h"
extern int remove(char /*const*/   *__filename ) ;
// # 202
extern int fclose(FILE *__stream ) ;
// # 204
extern int fflush(FILE *__stream ) ;
// # 221
extern FILE *fopen(char /*const*/   * /*__restrict*/  __filename ,
                   char /*const*/   * /*__restrict*/  __modes ) ;
// # 224
extern FILE *freopen(char /*const*/   * /*__restrict*/  __filename ,
                     char /*const*/   * /*__restrict*/  __modes ,
                     FILE * /*__restrict*/  __stream ) ;
// # 252
extern FILE *fdopen(int __fd , char /*const*/   *__modes ) ;
// # 291
extern void setlinebuf(FILE *__stream ) ;
// # 297
extern int fprintf(FILE * /*__restrict*/  __stream ,
                   char /*const*/   * /*__restrict*/  __format  , ...) ;
// # 319
extern int snprintf(char * /*__restrict*/  __s , size_t __maxlen ,
                    char /*const*/   * /*__restrict*/  __format  , ...) ;
// # 323
extern int vsnprintf(char * /*__restrict*/  __s , size_t __maxlen ,
                     char /*const*/   * /*__restrict*/  __format , __gnuc_va_list __arg ) ;
// # 353
extern int fscanf(FILE * /*__restrict*/  __stream ,
                  char /*const*/   * /*__restrict*/  __format  , ...) ;
// # 442
extern char *fgets(char * /*__restrict*/  __s , int __n ,
                   FILE * /*__restrict*/  __stream ) ;
// # 479
extern int fputs(char /*const*/   * /*__restrict*/  __s , FILE * /*__restrict*/  __stream ) ;
// # 515
extern int fseek(FILE *__stream , long __off , int __whence ) ;
// # 517
extern long ftell(FILE *__stream ) ;
// # 519
extern void rewind(FILE *__stream ) ;
// # 581
extern int ferror(FILE *__stream ) ;
// # 594
extern void perror(char /*const*/   *__s ) ;
// # 606
extern int fileno(FILE *__stream ) ;
// # 468 "/users/rupak/ccured/include/stdio_wrappers.h"
void perror_wrapper(char /*const*/   *s ) 
{ char /*const*/   *tmp ;

  {
  {
// # 469
  tmp = (char /*const*/   *)__stringof(s);
// # 469
  perror(tmp);
  }
// # 470
  return;
}
}
// # 51 "/usr/include/sys/file.h"
extern int flock(int __fd , int __operation ) ;
// # 255 "/users/rupak/ccured/include/gcc_3.2/sys/stat.h"
extern int chmod(char /*const*/   *__file , __mode_t __mode ) ;
// # 266
extern int fchmod(int __fd , __mode_t __mode ) ;
// # 272
extern __mode_t umask(__mode_t __mask ) ;
// # 281
extern int mkdir(char /*const*/   *__path , __mode_t __mode ) ;
// # 319
extern int __fxstat(int __ver , int __fildes , struct stat *__stat_buf ) ;
// # 370
/* __inline */ static int fstat__extinline(int fd , struct stat *statbuf ) 
{ int tmp ;

  {
  {
// # 372
  tmp = __fxstat(3, fd, statbuf);
  }
// # 372
  return (tmp);
}
}
// # 99 "/usr/include/sys/resource.h"
extern int setpriority(__priority_which_t __which , id_t __who , int __prio ) ;
// # 156 "/usr/include/sys/wait.h"
extern __pid_t wait3(union wait *__stat_loc , int __options ,
                     struct rusage *__usage ) ;
// # 172 "/usr/include/sys/syslog.h"
extern void closelog(void) ;
// # 175
extern void openlog(char /*const*/   *__ident , int __option , int __facility ) ;
// # 182
extern void syslog(int __pri , char /*const*/   *__fmt  , ...) ;
// # 191 "/users/rupak/ccured/include/gcc_3.2/time.h"
extern time_t mktime(struct tm *__tp ) ;
// # 197
extern size_t strftime(char * /*__restrict*/  __s , size_t __maxsize ,
                       char /*const*/   * /*__restrict*/  __format ,
                       struct tm  /*const*/  * /*__restrict*/  __tp ) ;
// # 233
extern struct tm *localtime(time_t /*const*/   *__timer ) ;
// # 260 "/users/rupak/ccured/include/gcc_3.2/unistd.h"
extern int access(char /*const*/   *__name , int __type ) ;
// # 306
extern int close(int __fd ) ;
// # 310
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
// # 313
extern ssize_t write(int __fd , void /*const*/   *__buf , size_t __n ) ;
// # 353
extern int pipe(int *__pipedes ) ;
// # 398
extern int fchown(int __fd , __uid_t __owner , __gid_t __group ) ;
// # 409
extern int chdir(char /*const*/   *__path ) ;
// # 444
extern int dup2(int __fd , int __fd2 ) ;
// # 475
extern int execl(char /*const*/   *__path , char /*const*/   *__arg  , ...) ;
// # 484
extern int execlp(char /*const*/   *__file , char /*const*/   *__arg  , ...) ;
// # 489
extern int nice(int __inc ) ;
// # 518
extern __pid_t getpid(void) ;
// # 580
extern __pid_t setsid(void) ;
// # 588
extern __uid_t getuid(void) ;
// # 613
extern int setuid(__uid_t __uid ) ;
// # 630
extern int setgid(__gid_t __gid ) ;
// # 665
extern __pid_t fork(void) ;
// # 752
extern int gethostname(char *__name , size_t __len ) ;
// # 859
extern int ftruncate(int __fd , __off_t __length ) ;
// # 15 "/users/rupak/ccured/include/functions/deepcopy_stringarray.h"
/*__inline*/ static char **__deepcopy_stringarray_from_compat(char * /*__attribute__((__safe__))*/  * /*__attribute__((__safe__))*/  array_in ) 
{ int num_strings ;
  int i ;
  char **new_array ;
  char * /*__attribute__((__safe__))*/  * /*__attribute__((__safe__))*/  p ;
  void * /*__attribute__((__safe__))*/  tmp ;
  char **tmp___0 ;
  int tmp___2 ;
  void *tmp___3 ;
  void *tmp___5 ;

  {
  {
// # 17
  num_strings = 0;
  }
// # 24
  if ((unsigned int )array_in ==
      (unsigned int )((char * /*__attribute__((__safe__))*/  *)0)) {
// # 25
    return ((char **)0);
  }
  {
// # 28
  p = array_in;
  }
// # 29
  while ((unsigned int )(*p) != (unsigned int )((char *)0)) {
    {
// # 31
    tmp___3 = __trusted_cast((void *)((unsigned long )p +
                                      (unsigned long )(1/*U*/ * sizeof((*p)))));
// # 31
    p = (char * /*__attribute__((__safe__))*/  */* __attribute__((__safe__)) */)((char * /*__attribute__((__safe__))*/  *)tmp___3);
// # 32
    num_strings ++;
    }
  }
  {
// # 34
  num_strings ++;
// # 36
  tmp___2 = __ccured_has_empty_mangling(sizeof((*new_array)));
  }
// # 36
  if (tmp___2) {
    {
// # 38
    tmp = __trusted_deepcast((void */* __attribute__((__safe__)) */)((void *)array_in));
// # 38
    tmp___0 = (char **)__mkptr_size(tmp, (unsigned int )num_strings *
                                         sizeof((*(new_array + 0))));
    }
// # 38
    return (tmp___0);
  } else {
    {
// # 42
    new_array = (char **)wrapperAlloc((unsigned int )num_strings *
                                      sizeof((*(new_array + 0))));
// # 43
    i = 0;
    }
// # 43
    while (i < num_strings) {
      {
// # 46
      tmp___5 = __trusted_cast((void *)((unsigned long )array_in +
                                        (unsigned long )((unsigned int )i *
                                                         sizeof((*array_in)))));
// # 46
      p = (char * /*__attribute__((__safe__))*/  */* __attribute__((__safe__)) */)((char * /*__attribute__((__safe__))*/  *)tmp___5);
// # 47
      (*(new_array + i)) = __mkptr_string((*p));
// # 43
      i ++;
      }
    }
  }
// # 50
  return (new_array);
}
}
// # 156 "/usr/include/security/_pam_types.h"
//extern char /*const*/   *pam_strerror(pam_handle_t *pamh , int errnum ) ;
char *pam_strerror(pam_handle_t *pamh , int errnum ){ char * s; return s;}
// # 160
//extern char **pam_getenvlist(pam_handle_t *pamh ) ;
char **pam_getenvlist(pam_handle_t *pamh ){
  char **x; return x;
}
// # 27 "/usr/include/security/pam_appl.h"
/* extern int pam_start(char /\*const*\/   *service_name , char /\*const*\/   *user , */
/*                      struct pam_conv  /\*const*\/  *pam_conversation , */
/*                      pam_handle_t **pamh ) ; */
int pam_start(char *service_name , char *user ,
	      struct pam_conv    *pam_conversation ,pam_handle_t **pamh ){
  int x; return x;
}	     
// # 30
//extern int pam_end(pam_handle_t *pamh , int pam_status ) ;
int pam_end(pam_handle_t *pamh , int pam_status ){ int x; return x;}
// # 34
//extern int pam_authenticate(pam_handle_t *pamh , int flags ) ;
int pam_authenticate(pam_handle_t *pamh , int flags ){ int x; return x;}
// # 35
//extern int pam_setcred(pam_handle_t *pamh , int flags ) ;
int pam_setcred(pam_handle_t *pamh , int flags ){ int x; return x;}
// # 39
//extern int pam_acct_mgmt(pam_handle_t *pamh , int flags ) ;
int pam_acct_mgmt(pam_handle_t *pamh , int flags ){ int x; return x;}
// # 43
//extern int pam_open_session(pam_handle_t *pamh , int flags ) ;
int pam_open_session(pam_handle_t *pamh , int flags ){ int x; return x;}
// # 44
//extern int pam_close_session(pam_handle_t *pamh , int flags ) ;
int pam_close_session(pam_handle_t *pamh , int flags ){ int x; return x;}
// # 36 "pam.h"
pam_handle_t *pamh ;
// # 37
struct pam_conv  /*const*/  apamconv ;
// # 30 "save.h"
int write_file_to_disk(int fd , struct cf_t *file , time_t time_date ) ;
// # 31
int save_file_safe(cf_t *file , char *final_path , char *prog_name___0 ,
                   uid_t own_uid , gid_t own_gid , time_t save_date ) ;
// # 30 "log.h"
void xcloselog(void) ;
// # 31
void explain(char *fmt  , ...) ;
// # 34
void warn(char *fmt  , ...) ;
// # 35
void warn_fd(int fd , char *fmt  , ...) ;
// # 36
void warn_e(char *fmt  , ...) ;
// # 37
void error(char *fmt  , ...) ;
// # 38
void error_fd(int fd , char *fmt  , ...) ;
// # 39
void error_e(char *fmt  , ...) ;
// # 40
void die(char *fmt  , ...) ;
// # 41
void die_e(char *fmt  , ...) ;
// # 43
void error_pame(pam_handle_t *pamh___0 , int pamerrno , char *fmt  , ...) ;
// # 44
void die_pame(pam_handle_t *pamh___0 , int pamerrno , char *fmt  , ...) ;
// # 46
void Debug(char *fmt  , ...) ;
// # 47
void send_msg_fd_debug(int fd , char *fmt  , ...) ;
// # 48
void send_msg_fd(int fd , char *fmt  , ...) ;
// # 33 "subs.h"
char *fcronconf ;
// # 34
char *fcronallow ;
// # 35
char *fcrondeny ;
// # 36
char *fcrontabs ;
// # 37
char *pidfile ;
// # 38
char *fifofile ;
// # 39
char *editor ;
// # 40
char *shell ;
// # 41
char *sendmail ;
// # 45
int remove_blanks(char *str ) ;
// # 46
char *strdup2(char /*const*/   *str ) ;
// # 47
int get_word(char **str ) ;
// # 48
int temp_file(char **name ) ;
// # 49
void read_conf(void) ;
// # 50
void free_conf(void) ;
// # 33 "/users/rupak/ccured/include/gcc_3.2/crypt.h"
//extern char *crypt(char /*const*/   *__key , char /*const*/   *__salt ) ;
char *crypt(char * key , char * salt ){
  char * x; return x;
}
// # 132 "/usr/include/dirent.h"
extern DIR *opendir(char /*const*/   *__name ) ;
// # 136
extern int closedir(DIR *__dirp ) ;
// # 146
extern struct dirent *readdir(DIR *__dirp ) ;
// # 84 "/users/rupak/ccured/include/gcc_3.2/grp.h"
extern struct group *getgrnam(char /*const*/   *__name ) ;
// # 148
extern int initgroups(char /*const*/   *__user , __gid_t __group ) ;
// # 13 "/users/rupak/ccured/include/grp_wrappers.h"
extern void __deepcopy_group_from_compat(struct group *fat ,
                                         struct group  /* __attribute__((__compat__)) */ *compat ) 
{ 

  {
  {
// # 15
  fat->gr_name = __mkptr_string((char */* __attribute__((__safe__)) */)compat->gr_name);
// # 16
  fat->gr_passwd = __mkptr_string((char */* __attribute__((__safe__)) */)compat->gr_passwd);
// # 18
  fat->gr_mem = __deepcopy_stringarray_from_compat((char * /*__attribute__((__safe__))*/  */* __attribute__((__safe__)) */)((char * /*__attribute__((__safe__))*/  *)compat->gr_mem));
  }
// # 19
  return;
}
}
// # 21
static struct group my_group_result  ;
// # 67 "/usr/include/shadow.h"
extern struct spwd * /* __attribute__((__split__)) */ getspnam(char /*const*/   * /* __attribute__((__split__)) __name )  __attribute__((__compat__))  */);
// # 42 "/users/rupak/ccured/include/gcc_3.2/sys/ioctl.h"
extern int ioctl(int __fd , unsigned long __request  , ...) ;
// # 73 "/usr/include/sys/time.h"
extern int gettimeofday(struct timeval * /*__restrict*/  __tv ,
                        __timezone_ptr_t __tz ) ;
// # 62 "fcron.h"
time_t now  ;
// # 63
char debug_opt ;
// # 64
char foreground ;
// # 65
char dosyslog ;
// # 66
long first_sleep ;
// # 68
pid_t daemon_pid  ;
// # 69
mode_t saved_umask  ;
// # 70
char *prog_name ;
// # 72
struct cf_t *file_base  ;
// # 73
struct job_t *queue_base  ;
// # 74
unsigned long next_id  ;
// # 75
struct cl_t **serial_array  ;
// # 76
short serial_array_size  ;
// # 77
short serial_array_index  ;
// # 78
short serial_num  ;
// # 79
short serial_running  ;
// # 80
short serial_max_running ;
// # 81
short serial_queue_max ;
// # 82
short lavg_queue_max ;
// # 83
struct exe_t *exe_array  ;
// # 84
short exe_array_size  ;
// # 85
short exe_num  ;
// # 86
struct lavg_t *lavg_array  ;
// # 87
short lavg_array_size  ;
// # 88
short lavg_num  ;
// # 89
short lavg_serial_running  ;
// # 96
void xexit(int exit_value ) ;
// # 30 "database.h"
void test_jobs(void) ;
// # 31
void wait_chld(void) ;
// # 32
void wait_all(int *counter ) ;
// # 33
time_t time_to_sleep(time_t lim ) ;
// # 34
time_t check_lavg(time_t lim ) ;
// # 35
void set_next_exe(struct cl_t *line , char option , int info_fd ) ;
// # 39
void set_next_exe_notrun(struct cl_t *line , char context ) ;
// # 43
void mail_notrun(struct cl_t *line , char context , struct tm *since ) ;
// # 44
void insert_nextexe(struct cl_t *line ) ;
// # 45
void run_normal_job(cl_t *line , int info_fd ) ;
// # 46
void add_serial_job(struct cl_t *line , int info_fd ) ;
// # 47
void add_lavg_job(struct cl_t *line , int info_fd ) ;
// # 48
void run_serial_job(void) ;
// # 30 "conf.h"
void reload_all(char /*const*/   *dir_name ) ;
// # 31
void synchronize_dir(char /*const*/   *dir_name ) ;
// # 32
void delete_file(char /*const*/   *user_name ) ;
// # 33
void save_file(struct cf_t *arg_file ) ;
// # 30 "job.h"
int change_user(struct cl_t *cl ) ;
// # 31
void run_job(struct exe_t *exeent ) ;
// # 32
FILE *create_mail(struct cl_t *line , char *subject ) ;
// # 33
void launch_mailer(struct cl_t *line , FILE *mailf ) ;
// # 100 "/usr/include/sys/socket.h"
extern int socket(int __domain , int __type , int __protocol ) ;
// # 110
extern int bind(int __fd , void /*const*/   *__addr , socklen_t __len ) ;
// # 131
extern ssize_t send(int __fd , void /*const*/   *__buf , size_t __n , int __flags ) ;
// # 136
extern ssize_t recv(int __fd , void *__buf , size_t __n , int __flags ) ;
// # 182
extern int listen(int __fd , int __n ) ;
// # 189
extern int accept(int __fd , void * /*__restrict*/  __addr ,
                  socklen_t * /*__restrict*/  __addr_len ) ;
// # 199
extern int shutdown(int __fd , int __how ) ;
// # 38 "socket.h"
fd_set read_set  ;
// # 39
int set_max_fd ;
// # 42
void init_socket(void) ;
// # 43
void check_socket(int num ) ;
// # 44
void close_socket(void) ;
// # 36 "fcron.c"

//char rcs_info[56]   = 
// # 36
/*  {'$', 'I', 'd', ':', ' ', 'f', 'c', 'r', 'o', 'n', '.', 'c', ',', 'v', ' ',
   '1', '.', '7', '1', ' ', '2', '0', '0', '4', '/', '0', '4', '/', '2', '9',
   ' ', '2', '0', ':', '5', '0', ':', '4', '7', ' ', 't', 'h', 'i', 'b', ' ',
   'E', 'x', 'p', ' ', 't', 'h', 'i', 'b', ' ', '$', '\0'};*/
// # 38
void main_loop(void) ;
// # 39
void check_signal(void) ;
// # 40
void info(void) ;
// # 41
void usage(void) ;
// # 42
void print_schedule(void) ;
// # 43
void sighup_handler(int x ) ;
// # 44
void sigterm_handler(int x ) ;
// # 45
void sigchild_handler(int x ) ;
// # 46
void sigusr1_handler(int x ) ;
// # 47
void sigusr2_handler(int x ) ;
// # 48
int parseopt(int argc , char **argv ) ;
// # 49
void get_lock(void) ;
// # 50
void create_spooldir(char *dir ) ;
// # 58
/*char debug_opt    = (char )0 */;
// # 64
/*char foreground    = (char )0 */;
// # 67
/*long first_sleep    = (long )20 */;
// # 68
long save_time  /* = (long )1800 */;
// # 69
char once;    /* = (char )0 */
// # 71
/*char dosyslog    = (char )1 */;
// # 74
char *tmp_path  /* = "" */;
// # 79
/*char *prog_name    = (char *)((void *)0) */;
// # 82
char sig_conf   /*(char )0 */;
// # 83
char sig_chld /* = (char )0 */;
// # 84
char sig_debug  /*(char )0 */;
// # 98
/*short serial_max_running  = (short )1 */;
// # 99
/*short serial_queue_max = (short )30 */;
// # 100
/*short lavg_queue_max = (short )30 */;
// # 111
time_t begin_sleep  ;
// # 115
/*pam_handle_t *pamh    = (pam_handle_t *)((void *)0) */;
// # 116
/* struct pam_conv  const  apamconv    = {(int (*)(int num_msg , */
/*                                                struct pam_message  const*  **msg , */
/*                                                struct pam_response **resp , */
/*                                                void *appdata_ptr ))((void *)0), */
/*                                       (void *)0} */;
// # 119
void info(void) 
{ FILE * /*__restrict*/  tmp ;

// # 124
    tmp = (FILE */* __restrict  */)get_stderr();
    
    // # 105 "spec.work"
    tmp->BLAST_FLAG = 1;
    // # 56
    if (! (tmp->BLAST_FLAG == 1)) {
      // # 58
      BLAST_ERROR();
    }
    
// # 124 "fcron.c"
    fprintf(tmp,
	    (char /*const*/   */* __restrict  */)((char /*const*/   *)"fcron 2.9.5 - periodic command scheduler\nCopyright 2000-2004 Thibault Godouet <fcron@free.fr>\nThis program is free software distributed WITHOUT ANY WARRANTY.\nSee the GNU General Public License for more details.\n"));
    // # 131
    exit(0);
    {
      // # 129 "spec.work"
      while (1) {}
    }
// # 131 "fcron.c"
    return;
}

// # 136
void usage(void) 
{ FILE * /*__restrict*/  tmp ;

  {
  {
// # 140
  tmp = (FILE */* __restrict  */)get_stderr();
  {
// # 105 "spec.work"
  tmp->BLAST_FLAG = 1;
  {

  }
  }

  {
// # 64
  if (! (tmp->BLAST_FLAG == 1)) {
// # 66
    BLAST_ERROR();
  }
  {

  }
  }
// # 140 "fcron.c"
  fprintf(tmp,
          (char /*const*/   */* __restrict  */)((char /*const*/   *)"\nfcron 2.9.5\n\nfcron [-d] [-f] [-b]\nfcron -h\n  -s t   --savetime t     Save fcrontabs on disk every t sec.\n  -l t   --firstsleep t   Sets the initial delay before any job is executed,\n                          default to %d seconds.\n  -m n   --maxserial n    Set to n the max number of running serial jobs.\n  -c f   --configfile f   Make fcron use config file f.\n  -n d   --newspooldir d  Create d as a new spool directory.\n  -f     --foreground     Stay in foreground.\n  -b     --background     Go to background.\n  -y     --nosyslog       Don\'t log to syslog at all.\n  -o     --once           Execute all jobs that need to be run, wait for them,\n                          then return. Sets firstsleep to 0.\n                          Especially useful with -f and -y.\n  -d     --debug          Set Debug mode.\n  -h     --help           Show this help message.\n  -V     --version        Display version & infos about fcron.\n"),
          20);
// # 161
  exit(1);
  {
// # 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
// # 161 "fcron.c"
  return;
}
}
// # 165
void print_schedule(void) 
{ cf_t *cf ;
  cl_t *cl ;
  struct tm *ftime ;

  {
  {
// # 173
  explain("Printing schedule ...");
// # 174
  cf = file_base;
  }
// # 174
  while (cf) {
    {
// # 175
    explain(" File %s", cf->cf_user);
// # 176
    cl = cf->cf_line_base;
    }
// # 176
    while (cl) {
      {
// # 177
      ftime = localtime((time_t /*const*/   *)(& cl->cl_nextexe));
// # 178
      explain("  cmd %s next exec %d/%d/%d wday:%d %02d:%02d", cl->cl_shell,
              ftime->tm_mon + 1, ftime->tm_mday, ftime->tm_year + 1900,
              ftime->tm_wday, ftime->tm_hour, ftime->tm_min);
// # 176
      cl = cl->cl_next;
      }
    }
    {
// # 174
    cf = cf->cf_next;
    }
  }
  {
// # 185
  explain("... end of printing schedule.");
  }
// # 186
  return;
}
}
// # 189
void xexit(int exit_value ) 
{ cf_t *f ;

  {
  {
// # 193
  f = (cf_t *)((void *)0);
// # 195
  now = time((time_t *)((void *)0));
// # 200
  save_file((struct cf_t *)((void *)0));
// # 203
  close_socket();
// # 206
  f = file_base;
  }
// # 207
  while ((unsigned int )f != (unsigned int )((void *)0)) {
// # 208
    if (f->cf_running > 0) {
// # 210
      if (debug_opt) {
        {
// # 210
        Debug("waiting jobs for %s ...", f->cf_user);
        }
      }
      {
// # 212
      wait_all(& f->cf_running);
// # 213
      save_file(f);
      }
    }
    {
// # 215
    delete_file((char /*const*/   *)f->cf_user);
// # 219
    f = file_base;
    }
  }
  {
// # 222
  remove((char /*const*/   *)pidfile);
// # 224
  free_conf();
// # 226
  explain("Exiting with code %d", exit_value);
// # 227
  exit(exit_value);
  {
// # 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
// # 227 "fcron.c"
  return;
}
}
// # 231
void get_lock(void) 
{ int otherpid ;
  FILE *daemon_lockfp ;
  int fd ;
  int tmp ;
  __off_t tmp___0 ;
  int tmp___1 ;

  {
  {
// # 237
    otherpid = 0;
    // # 238
    daemon_lockfp = (FILE *)((void *)0);
    // # 241
    fd = open((char /*const*/   *)pidfile, 66, 420);
  }
// # 241
  if (fd == -1) {
    {
      // # 243
      die_e("can\'t open or create %s", pidfile);
    }
  } else {
    {
// # 241
      daemon_lockfp = fdopen(fd, (char /*const*/   *)"r+");
      {
	// # 25 "spec.work"
	daemon_lockfp->BLAST_FLAG = 1;
      }
      
    }
// # 241 "fcron.c"
    if ((unsigned int )daemon_lockfp == (unsigned int )((void *)0)) {
      {
// # 243
      die_e("can\'t open or create %s", pidfile);
      }
    }
  }
  {
// # 246
    tmp = flock(fd, 6);
  }
  // # 246
  if (tmp != 0) {
    {
// # 251
      fscanf((FILE */* __restrict  */)daemon_lockfp,
	     (char /*const*/   */* __restrict  */)((char /*const*/   *)"%d"), & otherpid);
// # 252
      die_e("can\'t lock %s, running daemon\'s pid may be %d", pidfile, otherpid);
    }
  }
  {
    // # 256
    fcntl(fd, 2, 1);
    // # 258
    rewind(daemon_lockfp);
    {
      // # 64 "spec.work"
      if (! (daemon_lockfp->BLAST_FLAG == 1)) {
	// # 66
	BLAST_ERROR();
      }
    }
    // # 259 "fcron.c"
    fprintf((FILE */* __restrict  */)daemon_lockfp,
	    (char /*const*/   */* __restrict  */)((char /*const*/   *)"%d\n"), daemon_pid);
    {
      // # 40 "spec.work"
      if (! (daemon_lockfp->BLAST_FLAG == 1)) {
	// # 42
	BLAST_ERROR();
      }
    }
    // # 260 "fcron.c"
    fflush(daemon_lockfp);
    // # 261
    tmp___0 = ftell(daemon_lockfp);
    // # 261
    tmp___1 = fileno(daemon_lockfp);
    // # 261
    ftruncate(tmp___1, tmp___0);
  }
  // # 267
  return;
  }
}

// # 279
static struct option opt[14]   /*  =  */
/*   {{(char /\*const*\/   *)"debug", 0, (int *)((void *)0), (int )'d'}, */
/*    {(char /\*const*\/   *)"foreground", 0, (int *)((void *)0), (int )'f'}, */
/*    {(char /\*const*\/   *)"background", 0, (int *)((void *)0), (int )'b'}, */
/*    {(char /\*const*\/   *)"nosyslog", 0, (int *)((void *)0), (int )'y'}, */
/*    {(char /\*const*\/   *)"help", 0, (int *)((void *)0), (int )'h'}, */
/*    {(char /\*const*\/   *)"version", 0, (int *)((void *)0), (int )'V'}, */
/*    {(char /\*const*\/   *)"once", 0, (int *)((void *)0), (int )'o'}, */
/*    {(char /\*const*\/   *)"savetime", 1, (int *)((void *)0), (int )'s'}, */
/*    {(char /\*const*\/   *)"firstsleep", 1, (int *)((void *)0), (int )'l'}, */
/*    {(char /\*const*\/   *)"maxserial", 1, (int *)((void *)0), (int )'m'}, */
/*    {(char /\*const*\/   *)"configfile", 1, (int *)((void *)0), (int )'c'}, */
/*    {(char /\*const*\/   *)"newspooldir", 1, (int *)((void *)0), (int )'n'}, */
/*    {(char /\*const*\/   *)"queuelen", 1, (int *)((void *)0), (int )'q'}, */
/*    {(char /\*const*\/   *)0, 0, (int *)0, 0}} */;


// # 270
int parseopt(int argc , char **argv ) { 

  int c ;
  int i ;  
  // # 303
  while (1) {
    // # 305
    c = getopt_long(argc, (char * /*const*/  *)argv,
		    (char /*const*/   *)"dfbyhVos:l:m:c:n:q:",
		    (struct option  /*const*/  *)(opt), (int *)((void *)0));
    // # 309
    if (c == -1) {
      // # 309
      break;
    }
    // # 310
    switch ((int )((char )c)) {
    case 86: 
      // # 313
      info();
      // # 313
      break;
    case 104: 
      // # 316
      usage();
      // # 316
      break;
    case 100: 
      // # 319
      debug_opt = (char )1;
      // # 319
      break;
    case 102: 
      // # 322
      foreground = (char )1;
      // # 322
      break;
    case 98: 
      // # 325
      foreground = (char )0;
      // # 325
      break;
    case 121: 
      // # 328
      dosyslog = (char )0;
      // # 328
      break;
    case 111: 
      // # 331
      once = (char )1;
      // # 331
      first_sleep = 0L;
      // # 331
      break;
    case 115: 
      // # 334
      save_time = strtol((char /*const*/   */* __restrict  */)((char /*const*/   *)optarg),
			 (char **/* __restrict  */)((char **)((void *)0)), 10);
      // # 334
      if (save_time < 60L) {
	// # 335
	die("Save time can only be set between 60 and %d.", 2147483647L);
      } else {
	// # 334
	if (save_time >= 2147483647L) {
	  // # 335
	  die("Save time can only be set between 60 and %d.", 2147483647L);
	}
      }
      // # 336
      break;
    case 108: 
      // # 339
      first_sleep = strtol((char /*const*/   */* __restrict  */)((char /*const*/   *)optarg),
			   (char **/* __restrict  */)((char **)((void *)0)), 10);
      // # 339
      if (first_sleep < 0L) {
	  // # 340
	die("First sleep can only be set between 0 and %d.", 2147483647L);
	} else {
	// # 339
	if (first_sleep >= 2147483647L) {
	  // # 340
	  die("First sleep can only be set between 0 and %d.", 2147483647L);
	}
	}
      // # 341
      break;
    case 109: 
      {
	// # 344
	serial_max_running = (short )strtol((char /*const*/   */* __restrict  */)((char /*const*/   *)optarg),
					    (char **/* __restrict  */)((char **)((void *)0)),
					    10);
      }
      // # 344
      if ((int )serial_max_running <= 0) {
	// # 346
	die("Max running can only be set between 1 and %d.", 32767);
      } else {
	// # 344
	if ((int )serial_max_running >= 32767) {
	  // # 346
	  die("Max running can only be set between 1 and %d.", 32767);
	}
      }
	// # 347
      break;
    case 99: 
      // # 350
      free((void *)fcronconf);
      // # 350
      fcronconf = strdup2((char /*const*/   *)optarg);
      // # 351
      break;
    case 110: 
      // # 354
      create_spooldir(optarg);
      // # 355
	break;
    case 113: 
      // # 358
      serial_queue_max = (short )strtol((char /*const*/   */* __restrict  */)((char /*const*/   *)optarg),
					(char **/* __restrict  */)((char **)((void *)0)),
					10);
      // # 358
      lavg_queue_max = serial_queue_max;
      // # 358
      if ((int )lavg_queue_max < 5) {
	// # 360
	die("Queue length can only be set between 5 and %d.", 32767);
      } else {
	// # 358
	if ((int )serial_queue_max >= 32767) {
	  // # 360
	  die("Queue length can only be set between 5 and %d.", 32767);
	}
      }
      // # 361
      break;
    case 58: 
	  // # 364
      error("(parseopt) Missing parameter");
      // # 365
      usage();
      case 63: 
	// # 368
	usage();
    default: 
      // # 371
      warn("(parseopt) Warning: getopt returned %c", c);
    }
  }
  
  // # 375
  if (optind < argc) {
    // # 376
    i = optind;
      // # 376
    while (i <= argc) {
      // # 377
      error("Unknown argument \"%s\"", (*(argv + i)));
      // # 376
      i ++;
    }
    // # 378
    usage();
    }
  // # 381
  return (0);
}


// # 385
void create_spooldir(char *dir ) 
{ int dir_fd ;
  struct passwd *pass ;
  struct group *grp ;
  struct stat st ;
  int tmp ;
  int *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  {
// # 389
  dir_fd = -1;
// # 390
  pass = (struct passwd *)((void *)0);
// # 391
  grp = (struct group *)((void *)0);
// # 394
  tmp = mkdir((char /*const*/   *)dir, 0/*U*/);
  }
// # 394
  if (tmp != 0) {
    {
// # 394
    tmp___0 = __errno_location();
    }
// # 394
    if ((*tmp___0) != 17) {
      {
// # 395
      die_e("Cannot create dir %s", dir);
      }
    }
  }
  {
// # 397
  dir_fd = open((char /*const*/   *)dir, 0);
  }
// # 397
  if (dir_fd < 0) {
    {
// # 398
    die_e("Cannot open dir %s", dir);
    }
  }
  {
// # 400
  tmp___1 = fstat__extinline(dir_fd, & st);
  }
// # 400
  if (tmp___1 != 0) {
    {
// # 401
    close(dir_fd);
// # 402
    die_e("Cannot fstat %s", dir);
    }
  }
// # 405
  if (! ((st.st_mode & 61440/*U*/) == 16384/*U*/)) {
    {
// # 406
    close(dir_fd);
// # 407
    die("%s exists and is not a directory", dir);
    }
  }
  {
// # 410
  pass = getpwnam((char /*const*/   *)"fcron");
  }
// # 410
  if ((unsigned int )pass == (unsigned int )((void *)0)) {
    {
// # 411
    die_e("Cannot getpwnam(%s)", "fcron");
    }
  }
  {
// # 413
  grp = getgrnam((char /*const*/   *)"fcron");
  }
// # 413
  if ((unsigned int )grp == (unsigned int )((void *)0)) {
    {
// # 414
    die_e("Cannot getgrnam(%s)", "fcron");
    }
  }
  {
// # 416
  tmp___2 = fchown(dir_fd, pass->pw_uid, grp->gr_gid);
  }
// # 416
  if (tmp___2 != 0) {
    {
// # 417
    close(dir_fd);
// # 418
    die_e("Cannot fchown dir %s to %s:%s", dir, "fcron", "fcron");
    }
  }
  {
// # 421
    tmp___3 = fchmod(dir_fd, 504/*U*/);
  }
// # 421
  if (tmp___3 != 0) {
    {
// # 422
    close(dir_fd);
// # 423
    die_e("Cannot change dir %s\'s mode to 770", dir);
    }
  }
  {
// # 426
  close(dir_fd);
// # 428
  exit(0);
  {
// # 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
// # 428 "fcron.c"
  return;
}
}
// # 433
void sigterm_handler(int x ) 
{ 

  {
// # 437
  if (debug_opt) {
    {
// # 437
    Debug("");
    }
  }
  {
// # 438
  explain("SIGTERM signal received");
// # 439
  xexit(0);
  }
// # 440
  return;
}
}
// # 442
void sighup_handler(int x ) 
{ 

  {
  {
// # 450
  sig_conf = (char )1;
  }
// # 451
  return;
}
}
// # 453
void sigchild_handler(int x ) 
{ 

  {
  {
// # 458
  sig_chld = (char )1;
  }
// # 460
  return;
}
}
// # 463
void sigusr1_handler(int x ) 
{ 

  {
  {
// # 471
  sig_conf = (char )2;
  }
// # 472
  return;
}
}
// # 475
void sigusr2_handler(int x ) 
{ 

  {
  {
// # 479
  sig_debug = (char )1;
  }
// # 480
  return;
}
}
// # 483
int main(int argc , char **argv ) 
{ char *tmp ;
  char *tmp___0 ;
  uid_t daemon_uid ;
  int tmp___1 ;
  FILE * /*__restrict*/  tmp___2 ;
  int fd ;
  pid_t pid ;
  FILE * /*__restrict*/  tmp___3 ;
  FILE * /*__restrict*/  tmp___4 ;
  __pid_t tmp___5 ;
  unsigned int tmp___6 ;


  __initialize__();
  // # 489
  saved_umask = umask(18/*U*/);
  // # 493
  tmp___0 = strrchr((char /*const*/   *)(*(argv + 0)), (int )'/');
  // # 493
  if ((unsigned int )tmp___0 == (unsigned int )((void *)0)) {
    // # 493
    prog_name = (*(argv + 0));
  } else {
    // # 494
    tmp = strrchr((char /*const*/   *)(*(argv + 0)), (int )'/');
    // # 494
    prog_name = tmp + 1;
  }
  // # 498
  daemon_uid = getuid();
  // # 498
  if (daemon_uid != 0/*U*/) {
    // # 499
    die("Fcron must be executed as root");
  }
  // # 504
  daemon_pid = getpid();
  // # 506
  parseopt(argc, argv);
  // # 509
  read_conf();
  // # 513
  tmp___1 = chdir((char /*const*/   *)fcrontabs);
  // # 513
  if (tmp___1 != 0) {
    // # 514
    die_e("Could not change dir to %s", fcrontabs);
  }
  // # 517
  tmp___2 = (FILE */* __restrict  */)get_stdin();
  // # 121 "spec.work"
  tmp___2->BLAST_FLAG = 1;
  // # 517 "fcron.c"
  freopen((char /*const*/   */* __restrict  */)((char /*const*/   *)"/dev/null"),
          (char /*const*/   */* __restrict  */)((char /*const*/   *)"r"), tmp___2);
  
  // # 519
  if ((int )foreground == 0) {
    // # 528
    pid = fork();
    // # 528
    switch (pid) {
    case -1:
      // # 530
      die_e("fork");
      // # 531
      break;
    case 0:
      // # 534
      break;
    default:
	// # 539
	exit(0);
	// # 129 "spec.work"
	//    while (1) {}		
    }
    // # 542 "fcron.c"
    daemon_pid = getpid();
    // # 544
    fd = open((char /*const*/   *)"/dev/tty", 2);
    // # 544
    if (fd >= 0) {
      // # 545
      ioctl(fd, 21538/*UL*/, 0);
      // # 546
      close(fd);
    }
    // # 549
    tmp___3 = (FILE */* __restrict  */)get_stdout();
    // # 113 "spec.work"
    tmp___3->BLAST_FLAG = 1;
    // # 549 "fcron.c"
    freopen((char /*const*/   */* __restrict  */)((char /*const*/   *)"/dev/null"),
            (char /*const*/   */* __restrict  */)((char /*const*/   *)"w"), tmp___3);
    // # 550
    tmp___4 = (FILE */* __restrict  */)get_stderr();
    // # 105 "spec.work"
    tmp___4->BLAST_FLAG = 1;
    // # 550 "fcron.c"
    freopen((char /*const*/   */* __restrict  */)((char /*const*/   *)"/dev/null"),
            (char /*const*/   */* __restrict  */)((char /*const*/   *)"w"), tmp___4);
    // # 553
    xcloselog();
    // # 554
    fd = 3;
    // # 554
    while (fd < 250) {
      // # 554
      close(fd);
      // # 554
      fd ++;
    }
    // # 557
    tmp___5 = setsid();
    // # 557
    if (tmp___5 == -1) {
      // # 558
      error("Could not setsid()");
    }
  }  
  // # 563
  get_lock();
  // # 568
  umask(54/*U*/);
  // # 570
  explain("%s[%d] 2.9.5 started", prog_name, daemon_pid);
  // # 572
  signal(15, & sigterm_handler);
  // # 573
  signal(1, & sighup_handler);
  // # 574
  siginterrupt(1, 0);
  // # 575
  signal(17, & sigchild_handler);
  // # 576
  siginterrupt(17, 0);
  // # 577
  signal(10, & sigusr1_handler);
  // # 578
  siginterrupt(10, 0);
  // # 579
  signal(12, & sigusr2_handler);
  // # 580
  siginterrupt(12, 0);
  // # 582
  signal(13, (void (*)(int  ))1);
  // # 585
  next_id = 0/*UL*/;
  // # 588
  exe_num = (short )0;
  // # 589
  exe_array_size = (short )6;
  // # 590
  exe_array = (struct exe_t *)calloc((unsigned int )exe_array_size,
                                     sizeof(struct exe_t ));
  
  // # 590
  if ((unsigned int )exe_array == (unsigned int )((void *)0)) {
    // # 591
    die_e("could not calloc exe_array");
  }
  // # 594
  serial_running = (short )0;
  // # 595
  serial_array_index = (short )0;
  // # 596
  serial_num = (short )0;
  // # 597
  serial_array_size = (short )10;
  // # 598
  serial_array = (struct cl_t **)calloc((unsigned int )serial_array_size,
                                        sizeof(cl_t *));
  // # 598
  if ((unsigned int )serial_array == (unsigned int )((void *)0)) {
    // # 599
    die_e("could not calloc serial_array");
  }
  // # 602
  lavg_num = (short )0;
  // # 603
  lavg_serial_running = (short )0;
  // # 604
  lavg_array_size = (short )10;
  // # 605
  lavg_array = (struct lavg_t *)calloc((unsigned int )lavg_array_size,
                                       sizeof(lavg_t )); 
  // # 605
  if ((unsigned int )lavg_array == (unsigned int )((void *)0)) {
    // # 606
    die_e("could not calloc lavg_array");
  }
  // # 610
  init_socket();
  // # 615
  tmp___6 = (unsigned int )time((time_t *)((void *)0));
  // # 615
  srand(tmp___6);
  // # 617
  main_loop();
  // # 620
  return (0); 
}

// # 624
void check_signal(void) 
{ 

  // # 632
  if ((int )sig_chld > 0) {
    // # 633
    wait_chld();
    // # 634
    sig_chld = (char )0;
    // # 635
    signal(17, & sigchild_handler);
    // # 636
    siginterrupt(17, 0);
  }
  // # 638
  if ((int )sig_conf > 0) {
    // # 640
    if ((int )sig_conf == 1) {
      // # 642
      synchronize_dir((char /*const*/   *)".");
      // # 643
      sig_conf = (char )0;
      // # 644
      signal(1, & sighup_handler);
      // # 645
      siginterrupt(1, 0);
    } else {
      // # 649
      reload_all((char /*const*/   *)".");
      // # 650
      sig_conf = (char )0;
      // # 651
      signal(10, & sigusr1_handler);
      // # 652
      siginterrupt(10, 0);
    }
  }
  // # 656
  if ((int )sig_debug > 0) {
    // # 657
    print_schedule();
    // # 658
    if ((int )debug_opt > 0) {
      // # 658
      debug_opt = (char )0;
    } else {
      // # 658
      debug_opt = (char )1;
    }
    // # 659
    explain("debug_opt = %d", debug_opt);
    // # 660
    sig_debug = (char )0;
    // # 661
    signal(12, & sigusr2_handler);
    // # 662
    siginterrupt(12, 0);
  }
  // # 665
  return;
}
// # 667
void main_loop(void) 
{ time_t save ;
  time_t stime___0 ;
  struct timeval tv ;
  int retcode ;
  int *tmp ;
  int *tmp___0 ;

  {
  {
// # 679
  retcode = 0;
  }
// # 682
  if (debug_opt) {
    {
// # 682
    Debug("Entering main loop");
    }
  }
  {
// # 684
  now = time((time_t *)((void *)0));
// # 686
  synchronize_dir((char /*const*/   *)".");
// # 689
  save = now + save_time;
  }
// # 691
  if ((int )serial_num > 0) {
    {
// # 692
    stime___0 = first_sleep;
    }
  } else {
// # 691
    if (once) {
      {
// # 692
      stime___0 = first_sleep;
      }
    } else {
      {
// # 693
      stime___0 = time_to_sleep(save);
      }
// # 693
      if (stime___0 < first_sleep) {
        {
// # 696
        stime___0 = first_sleep;
        }
      }
    }
  }
// # 698
  while (1) {
    {
// # 702
    gettimeofday((struct timeval */* __restrict  */)(& tv),
                 (struct timezone */* __restrict  */)((struct timezone *)((void *)0)));
    }
// # 703
    if (stime___0 > 1L) {
      {
// # 703
      tv.tv_sec = stime___0 - 1L;
      }
    } else {
      {
// # 703
      tv.tv_sec = 0L;
      }
    }
    {
// # 704
    tv.tv_usec = 1000000L - tv.tv_usec;
// # 705
    retcode = select(set_max_fd + 1, (fd_set */* __restrict  */)(& read_set),
                     (fd_set */* __restrict  */)((fd_set *)((void *)0)),
                     (fd_set */* __restrict  */)((fd_set *)((void *)0)),
                     (struct timeval */* __restrict  */)(& tv));
    }
// # 705
    if (retcode < 0) {
      {
// # 705
      tmp___0 = __errno_location();
      }
// # 705
      if ((*tmp___0) != 4) {
        {
// # 706
        tmp = __errno_location();
// # 706
        die_e("select return %d", (*tmp));
        }
      }
    }
    {
// # 717
    now = time((time_t *)((void *)0));
// # 719
    check_signal();
    }
// # 721
    if (debug_opt) {
      {
// # 721
      Debug("\n");
      }
    }
    {
// # 722
    test_jobs();
    }
// # 724
    while (1) {
// # 724
      if ((int )serial_num > 0) {
// # 724
        if (! ((int )serial_running < (int )serial_max_running)) {
// # 724
          break;
        }
      } else {
// # 724
        break;
      }
      {
// # 725
      run_serial_job();
      }
    }
// # 727
    if (once) {
      {
// # 728
      explain("Running with option once : exiting ... ");
// # 729
      xexit(0);
      }
    }
// # 732
    if (save <= now) {
      {
// # 733
      save = now + save_time;
// # 735
      save_file((struct cf_t *)((void *)0));
      }
    }
    {
// # 741
    check_socket(retcode);
// # 744
    stime___0 = check_lavg(save);
    }
// # 745
    if (debug_opt) {
      {
// # 745
      Debug("next sleep time : %ld", stime___0);
      }
    }
    {
// # 747
    check_signal();
    }
  }
// # 751
  return;
}
}
// # 30 "subs.c"
void init_conf(void) ;
// # 35
/*char *fcronconf   = (char *)((void *)0);*/
// # 36
/*char *fcrontabs   = (char *)((void *)0);*/
// # 37
/*char *pidfile   = (char *)((void *)0);*/
// # 38
/* char *fifofile   = (char *)((void *)0); */
// # 39
/* char *fcronallow   = (char *)((void *)0); */
// # 40
/* char *fcrondeny   = (char *)((void *)0); */
// # 41
/* char *shell   = (char *)((void *)0); */
// # 42
/* char *sendmail   = (char *)((void *)0); */
// # 43
/* char *editor   = (char *)((void *)0); */
// # 45
int remove_blanks(char *str ) 
{ char *c ;
  int tmp ;

  {
  {
// # 50
  c = str;
  }
// # 53
  while ((*c)) {
    {
// # 54
    c ++;
    }
  }
// # 57
  while (1) {
    {
// # 57
    c --;
    }
// # 57
    if ((unsigned int )c >= (unsigned int )str) {
      {
// # 57
      tmp = _get__ctype_b((int )(*c));
      }
// # 57
      if (! (tmp & 8192)) {
// # 57
        break;
      }
    } else {
// # 57
      break;
    }
  }
// # 61
  if ((int )(*c) == 10) {
    {
// # 62
    (*c) = '\0';
    }
  } else {
    {
// # 66
    c ++;
// # 66
    (*c) = '\0';
    }
  }
// # 69
  return (c - str);
}
}
// # 74
char *strdup2(char /*const*/   *str ) 
{ char *ptr ;
  size_t tmp ;
  char *tmp___0 ;

  {
  {
// # 77
  tmp = strlen(str);
// # 77
  tmp___0 = (char *)malloc(tmp + 1/*U*/);
// # 77
  ptr = tmp___0;
  }
// # 79
  if (! ptr) {
    {
// # 80
    die_e("Could not calloc");
    }
  }
  {
// # 82
  strcpy((char */* __restrict  */)ptr, (char /*const*/   */* __restrict  */)str);
  }
// # 83
  return (ptr);
}
}
// # 87
int get_word(char **str ) 
{ char *ptr ;
  int tmp ;
  int tmp___0 ;

  {
// # 93
  while (1) {
// # 93
    if (! ((int )(*((*str))) == 32)) {
// # 93
      if (! ((int )(*((*str))) == 9)) {
// # 93
        break;
      }
    }
    {
// # 93
    (*str) ++;
    }
  }
  {
// # 94
  ptr = (*str);
  }
// # 96
  while (1) {
    {
// # 96
    tmp = _get__ctype_b((int )(*ptr));
    }
// # 96
    if (tmp & 8) {
      goto _L;
    } else {
// # 96
      if ((int )(*ptr) == 95) {
        goto _L;
      } else {
// # 96
        if ((int )(*ptr) == 45) {
          _L: 
// # 96
          if ((int )(*ptr) != 61) {
            {
// # 96
            tmp___0 = _get__ctype_b((int )(*ptr));
            }
// # 96
            if (tmp___0 & 8192) {
// # 96
              break;
            }
          } else {
// # 96
            break;
          }
        } else {
// # 96
          break;
        }
      }
    }
    {
// # 98
    ptr ++;
    }
  }
// # 100
  return (ptr - (*str));
}
}
// # 103
void init_conf(void) 
{ 

  {
// # 108
  if ((unsigned int )fcronconf == (unsigned int )((void *)0)) {
    {
// # 109
    fcronconf = strdup2((char /*const*/   *)"/etc/fcron.conf");
    }
  }
  {
// # 110
  fcrontabs = strdup2((char /*const*/   *)"/var/spool/fcron");
// # 111
  pidfile = strdup2((char /*const*/   *)"/var/run/fcron.pid");
// # 112
  fifofile = strdup2((char /*const*/   *)"/var/run/fcron.fifo");
// # 113
  fcronallow = strdup2((char /*const*/   *)"/etc/fcron.allow");
// # 114
  fcrondeny = strdup2((char /*const*/   *)"/etc/fcron.deny");
// # 115
  shell = strdup2((char /*const*/   *)"/bin/sh");
// # 117
  sendmail = strdup2((char /*const*/   *)"/usr/lib/sendmail");
// # 119
  editor = strdup2((char /*const*/   *)"/bin/vi");
  }
// # 120
  return;
}
}
// # 122
void free_conf(void) 
{ 

  {
  {
// # 126
  free((void *)fcronconf);
// # 127
  free((void *)fcrontabs);
// # 128
  free((void *)pidfile);
// # 129
  free((void *)fifofile);
// # 130
  free((void *)fcronallow);
// # 131
  free((void *)fcrondeny);
// # 132
  free((void *)shell);
// # 133
  free((void *)sendmail);
// # 134
  free((void *)editor);
  }
// # 135
  return;
}
}
// # 139
void read_conf(void) 
{ FILE *f ;
  struct stat st ;
  char buf[1024] ;
  char *ptr1 ;
  char *ptr2 ;
  short namesize ;
  char err_on_enoent ;
  int *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;

  {
  {
// # 143
  f = (FILE *)((void *)0);
// # 146
  ptr1 = (char *)((void *)0);
// # 146
  ptr2 = (char *)((void *)0);
// # 147
  namesize = (short )0;
// # 148
  err_on_enoent = (char )0;
  }
// # 150
  if ((unsigned int )fcronconf != (unsigned int )((void *)0)) {
  // # 152
    err_on_enoent = (char )1;
  }
// # 154
  init_conf();
// # 156
  f = fopen((char /*const*/   */* __restrict  */)((char /*const*/   *)fcronconf),
            (char /*const*/   */* __restrict  */)((char /*const*/   *)"r"));
// # 17 "spec.work"
  if (f != (FILE *)0) {
// # 17
    f->BLAST_FLAG = 1;
  }
// # 156 "subs.c"
  if ((unsigned int )f == (unsigned int )((void *)0)) {
    {
// # 157
    tmp = __errno_location();
    }
// # 157
    if ((*tmp) == 2) {
// # 158
      if (err_on_enoent) {
        {
// # 159
        die_e("Could not read %s", fcronconf);
        }
      } else {
// # 162
        return;
      }
    } else {
      {
// # 165
      error_e("Could not read %s : config file ignored", fcronconf);
      }
// # 166
      return;
    }
  }
  {
// # 171
  tmp___0 = fileno(f);
// # 171
  tmp___1 = fstat__extinline(tmp___0, & st);
  }
// # 171
  if (tmp___1 != 0) {
// # 173
    //error("Conf file (%s) must be owned by root and (no more than) 644 : ignored",
    //      fcronconf);
// # 96 "spec.work"
    if (f->BLAST_FLAG == 1) {
// # 97
      f->BLAST_FLAG = 0;
    } else {
// # 98
      BLAST_ERROR();
    }
// # 175 "subs.c"
    fclose(f);
// # 176
    return;
  } else {
// # 171
    if (st.st_uid != 0/*U*/) {
// # 173
//      error("Conf file (%s) must be owned by root and (no more than) 644 : ignored",
            //fcronconf);
// # 96 "spec.work"
      if (f->BLAST_FLAG == 1) {
// # 97
        f->BLAST_FLAG = 0;
      } else {
// # 98
        BLAST_ERROR();
      }
// # 175 "subs.c"
      fclose(f);
// # 176
      return;
    } else {
// # 171
      if (st.st_mode & 16/*U*/) {
// # 173
//        error("Conf file (%s) must be owned by root and (no more than) 644 : ignored",
//              fcronconf);

// # 96 "spec.work"
        if (f->BLAST_FLAG == 1) {
// # 97
          f->BLAST_FLAG = 0;
        } else {
// # 98
          BLAST_ERROR();
        }
        
// # 175 "subs.c"
        fclose(f);       
// # 176
        return;
      } else {
// # 171
        if (st.st_mode & 2/*U*/) {
// # 173
          error("Conf file (%s) must be owned by root and (no more than) 644 : ignored",
                fcronconf);
// # 96 "spec.work"
          if (f->BLAST_FLAG == 1) {
// # 97
            f->BLAST_FLAG = 0;
          } else {
// # 98
            BLAST_ERROR();
          }
          
// # 175 "subs.c"
          fclose(f);
// # 176
          return;
        }
      }
    }
  }
// # 179
  while (1) {
// # 32 "spec.work"
    if (! (f->BLAST_FLAG == 1)) {
// # 34
      BLAST_ERROR();
    }
// # 179 "subs.c"
    ptr1 = fgets((char */* __restrict  */)(buf), (int )sizeof(buf),
                 (FILE */* __restrict  */)f);
    // # 179
    if (! ((unsigned int )ptr1 != (unsigned int )((void *)0))) {
      // # 179
      break;
    }
// # 181
    while (1) {
// # 181
      if (! ((int )(*ptr1) == 32)) {
// # 181
        if (! ((int )(*ptr1) == 9)) {
// # 181
          break;
        }
      }
      {
// # 181
      ptr1 ++;
      }
    }
// # 184
    if ((int )(*ptr1) == 35) {
// # 185
      continue;
    } else {
// # 184
      if ((int )(*ptr1) == 10) {
// # 185
        continue;
      } else {
// # 184
        if ((int )(*ptr1) == 0) {
// # 185
          continue;
        }
      }
    }
    {
// # 187
    remove_blanks(ptr1);
// # 190
    namesize = (short )get_word(& ptr1);
    }
// # 190
    if ((int )namesize == 0) {
      {
// # 192
      error("Zero-length var name at line %s : line ignored", buf);
      }
    }
    {
// # 194
    ptr2 = ptr1 + (int )namesize;
    }
// # 197
    while (1) {
      {
// # 197
      tmp___2 = _get__ctype_b((int )(*ptr2));
      }
// # 197
      if (! (tmp___2 & 8192)) {
// # 197
        break;
      }
      {
// # 197
      ptr2 ++;
      }
    }
// # 198
    if ((int )(*ptr2) == 61) {
      {
// # 198
      ptr2 ++;
      }
    }
// # 199
    while (1) {
      {
// # 199
      tmp___3 = _get__ctype_b((int )(*ptr2));
      }
// # 199
      if (! (tmp___3 & 8192)) {
// # 199
        break;
      }
      {
// # 199
      ptr2 ++;
      }
    }
    {
// # 202
    tmp___11 = strncmp((char /*const*/   *)ptr1, (char /*const*/   *)"fcrontabs",
                       (unsigned int )namesize);
    }
// # 202
    if (tmp___11 == 0) {
      {
// # 203
      fcrontabs = strdup2((char /*const*/   *)ptr2);
      }
    } else {
      {
// # 204
      tmp___10 = strncmp((char /*const*/   *)ptr1, (char /*const*/   *)"pidfile",
                         (unsigned int )namesize);
      }
// # 204
      if (tmp___10 == 0) {
        {
// # 205
        pidfile = strdup2((char /*const*/   *)ptr2);
        }
      } else {
        {
// # 206
        tmp___9 = strncmp((char /*const*/   *)ptr1, (char /*const*/   *)"fifofile",
                          (unsigned int )namesize);
        }
// # 206
        if (tmp___9 == 0) {
          {
// # 207
          fifofile = strdup2((char /*const*/   *)ptr2);
          }
        } else {
          {
// # 208
          tmp___8 = strncmp((char /*const*/   *)ptr1, (char /*const*/   *)"fcronallow",
                            (unsigned int )namesize);
          }
// # 208
          if (tmp___8 == 0) {
            {
// # 209
            fcronallow = strdup2((char /*const*/   *)ptr2);
            }
          } else {
            {
// # 210
            tmp___7 = strncmp((char /*const*/   *)ptr1, (char /*const*/   *)"fcrondeny",
                              (unsigned int )namesize);
            }
// # 210
            if (tmp___7 == 0) {
              {
// # 211
              fcrondeny = strdup2((char /*const*/   *)ptr2);
              }
            } else {
              {
// # 212
              tmp___6 = strncmp((char /*const*/   *)ptr1, (char /*const*/   *)"shell",
                                (unsigned int )namesize);
              }
// # 212
              if (tmp___6 == 0) {
                {
// # 213
                shell = strdup2((char /*const*/   *)ptr2);
                }
              } else {
                {
// # 214
                tmp___5 = strncmp((char /*const*/   *)ptr1,
                                  (char /*const*/   *)"sendmail",
                                  (unsigned int )namesize);
                }
// # 214
                if (tmp___5 == 0) {
                  {
// # 215
                  sendmail = strdup2((char /*const*/   *)ptr2);
                  }
                } else {
                  {
// # 216
                  tmp___4 = strncmp((char /*const*/   *)ptr1,
                                    (char /*const*/   *)"editor",
                                    (unsigned int )namesize);
                  }
// # 216
                  if (tmp___4 == 0) {
                    {
// # 217
                    editor = strdup2((char /*const*/   *)ptr2);
                    }
                  } else {
                    {
// # 219
                    error("Unknown var name at line %s : line ignored", buf);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
// # 223
  if (debug_opt) {
// # 224
    if (debug_opt) {
      {
// # 224
      Debug("  fcronconf=%s", fcronconf);
      }
    }
  }
  {

  {
// # 96 "spec.work"
  if (f->BLAST_FLAG == 1) {
// # 97
    f->BLAST_FLAG = 0;
  } else {
// # 98
    BLAST_ERROR();
  }
  {

  }
  }
// # 235 "subs.c"
  fclose(f);
  }
// # 237
  return;
}
}
// # 32 "save.c"
int write_buf_to_disk(int fd , char *write_buf , int *buf_used ) ;
// # 33
int save_type(int fd , short type , char *write_buf , int *buf_used ) ;
// # 34
int save_str(int fd , short type , char *str , char *write_buf , int *buf_used ) ;
// # 35
int save_strn(int fd , short type , char *str , short size , char *write_buf ,
              int *buf_used ) ;
// # 37
int save_lint(int fd , short type , long value , char *write_buf ,
              int *buf_used ) ;
// # 38
int save_one_file(cf_t *file , char *filename , uid_t own_uid , gid_t own_gid ,
                  time_t save_date ) ;
// # 42
int save_type(int fd , short type , char *write_buf , int *buf_used ) 
{ short size ;
  int write_len ;
  int tmp ;

  {
  {
// # 46
  size = (short )0;
// # 47
  write_len = (int )(sizeof(type) + sizeof(size));
  }
// # 49
  if (write_len > 1024 - (*buf_used)) {
    {
// # 50
    tmp = write_buf_to_disk(fd, write_buf, buf_used);
    }
// # 50
    if (tmp == -1) {
// # 51
      return (-1);
    }
  }
  {
// # 53
  memcpy((void */* __restrict  */)((void *)(write_buf + (*buf_used))),
         (void /*const*/   */* __restrict  */)((void /*const*/   *)(& type)),
         sizeof(type));
// # 54
  (*buf_used) = (int )((unsigned int )(*buf_used) + sizeof(type));
// # 55
  memcpy((void */* __restrict  */)((void *)(write_buf + (*buf_used))),
         (void /*const*/   */* __restrict  */)((void /*const*/   *)(& size)),
         sizeof(size));
// # 56
  (*buf_used) = (int )((unsigned int )(*buf_used) + sizeof(size));
  }
// # 58
  return (0);
}
}
// # 62
int save_str(int fd , short type , char *str , char *write_buf , int *buf_used ) 
{ short size ;
  short tmp ;
  int write_len ;
  int tmp___0 ;

  {
  {
// # 66
  tmp = (short )strlen((char /*const*/   *)str);
// # 66
  size = tmp;
// # 67
  write_len = (int )((sizeof(type) + sizeof(size)) + (unsigned int )size);
  }
// # 69
  if (write_len > 1024 - (*buf_used)) {
    {
// # 70
    tmp___0 = write_buf_to_disk(fd, write_buf, buf_used);
    }
// # 70
    if (tmp___0 == -1) {
// # 71
      return (-1);
    }
  }
  {
// # 73
  memcpy((void */* __restrict  */)((void *)(write_buf + (*buf_used))),
         (void /*const*/   */* __restrict  */)((void /*const*/   *)(& type)),
         sizeof(type));
// # 74
  (*buf_used) = (int )((unsigned int )(*buf_used) + sizeof(type));
// # 75
  memcpy((void */* __restrict  */)((void *)(write_buf + (*buf_used))),
         (void /*const*/   */* __restrict  */)((void /*const*/   *)(& size)),
         sizeof(size));
// # 76
  (*buf_used) = (int )((unsigned int )(*buf_used) + sizeof(size));
// # 77
  memcpy((void */* __restrict  */)((void *)(write_buf + (*buf_used))),
         (void /*const*/   */* __restrict  */)((void /*const*/   *)str),
         (unsigned int )size);
// # 78
  (*buf_used) += (int )size;
  }
// # 80
  return (0);
}
}
// # 83
int save_strn(int fd , short type , char *str , short size , char *write_buf ,
              int *buf_used ) 
{ int write_len ;
  int tmp ;

  {
  {
// # 88
  write_len = (int )((sizeof(type) + sizeof(size)) + (unsigned int )size);
  }
// # 90
  if (write_len > 1024 - (*buf_used)) {
    {
// # 91
    tmp = write_buf_to_disk(fd, write_buf, buf_used);
    }
// # 91
    if (tmp == -1) {
// # 92
      return (-1);
    }
  }
  {
// # 94
  memcpy((void */* __restrict  */)((void *)(write_buf + (*buf_used))),
         (void /*const*/   */* __restrict  */)((void /*const*/   *)(& type)),
         sizeof(type));
// # 95
  (*buf_used) = (int )((unsigned int )(*buf_used) + sizeof(type));
// # 96
  memcpy((void */* __restrict  */)((void *)(write_buf + (*buf_used))),
         (void /*const*/   */* __restrict  */)((void /*const*/   *)(& size)),
         sizeof(size));
// # 97
  (*buf_used) = (int )((unsigned int )(*buf_used) + sizeof(size));
// # 98
  memcpy((void */* __restrict  */)((void *)(write_buf + (*buf_used))),
         (void /*const*/   */* __restrict  */)((void /*const*/   *)str),
         (unsigned int )size);
// # 99
  (*buf_used) += (int )size;
  }
// # 101
  return (0);
}
}
// # 104
int save_lint(int fd , short type , long value , char *write_buf ,
              int *buf_used ) 
{ short size ;
  int write_len ;
  int tmp ;

  {
  {
// # 108
  size = (short )sizeof(value);
// # 109
  write_len = (int )((sizeof(type) + sizeof(size)) + (unsigned int )size);
  }
// # 111
  if (write_len > 1024 - (*buf_used)) {
    {
// # 112
    tmp = write_buf_to_disk(fd, write_buf, buf_used);
    }
// # 112
    if (tmp == -1) {
// # 113
      return (-1);
    }
  }
  {
// # 115
  memcpy((void */* __restrict  */)((void *)(write_buf + (*buf_used))),
         (void /*const*/   */* __restrict  */)((void /*const*/   *)(& type)),
         sizeof(type));
// # 116
  (*buf_used) = (int )((unsigned int )(*buf_used) + sizeof(type));
// # 117
  memcpy((void */* __restrict  */)((void *)(write_buf + (*buf_used))),
         (void /*const*/   */* __restrict  */)((void /*const*/   *)(& size)),
         sizeof(size));
// # 118
  (*buf_used) = (int )((unsigned int )(*buf_used) + sizeof(size));
// # 119
  memcpy((void */* __restrict  */)((void *)(write_buf + (*buf_used))),
         (void /*const*/   */* __restrict  */)((void /*const*/   *)(& value)),
         (unsigned int )size);
// # 120
  (*buf_used) += (int )size;
  }
// # 122
  return (0);
}
}
// # 126
int write_buf_to_disk(int fd , char *write_buf , int *buf_used ) 
{ ssize_t to_write ;
  ssize_t written ;
  ssize_t return_val ;
  int num_retries ;
  int tmp ;

  {
  {
// # 130
  to_write = (*buf_used);
// # 131
  written = 0;
// # 133
  num_retries = 0;
  }
// # 135
  while (written < to_write) {
    {
// # 136
    tmp = num_retries;
// # 136
    num_retries ++;
    }
// # 136
    if (tmp > to_write / 2) {
      {
// # 137
      error("too many retries (%d) to write buf to disk : giving up.",
            num_retries);
      }
// # 138
      return (-1);
    }
    {
// # 140
    return_val = write(fd, (void /*const*/   *)(write_buf + written),
                       (unsigned int )(to_write - written));
    }
// # 141
    if (return_val == -1) {
      {
// # 142
      error_e("could not write() buf to disk");
      }
// # 143
      return (-1);
    }
    {
// # 145
    written += return_val;
    }
  }
// # 149
  if (debug_opt) {
    {
// # 149
    Debug("write_buf_to_disk() : written %d/%d, %d (re)try(ies)", written,
          to_write, num_retries);
    }
  }
// # 153
  if (written == to_write) {
    {
// # 154
    (*buf_used) = 0;
    }
// # 155
    return (0);
  } else {
    {
// # 158
    error("write_buf_to_disk() : written %d bytes for %d requested.", written,
          to_write);
    }
// # 160
    return (-1);
  }
}
}
// # 202
int write_file_to_disk(int fd , struct cf_t *file , time_t time_date ) 
{ cl_t *line ;
  env_t *env ;
  char write_buf[1024] ;
  int write_buf_used ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;

  {
  {
// # 206
  line = (cl_t *)((void *)0);
// # 207
  env = (env_t *)((void *)0);
// # 209
  write_buf_used = 0;
// # 216
  tmp = save_lint(fd, (short )1, 100L, write_buf, & write_buf_used);
  }
// # 216
  if (tmp != 0) {
    {
// # 216
    error_e("Could not write lint : file %s has not been saved.", file->cf_user);
    }
// # 216
    return (-1);
  }
  {
// # 220
  tmp___0 = save_str(fd, (short )2, file->cf_user, write_buf, & write_buf_used);
  }
// # 220
  if (tmp___0 != 0) {
    {
// # 220
    error_e("Could not write str : file %s has not been saved.", file->cf_user);
    }
// # 220
    return (-1);
  }
  {
// # 225
  tmp___1 = save_lint(fd, (short )3, time_date, write_buf, & write_buf_used);
  }
// # 225
  if (tmp___1 != 0) {
    {
// # 225
    error_e("Could not write lint : file %s has not been saved.", file->cf_user);
    }
// # 225
    return (-1);
  }
// # 228
  if ((int )file->cf_tzdiff != 0) {
    {
// # 229
    tmp___2 = save_lint(fd, (short )4, (long )file->cf_tzdiff, write_buf,
                        & write_buf_used);
    }
// # 229
    if (tmp___2 != 0) {
      {
// # 229
      error_e("Could not write lint : file %s has not been saved.",
              file->cf_user);
      }
// # 229
      return (-1);
    }
  }
  {
// # 232
  env = file->cf_env_base;
  }
// # 232
  while (env) {
    {
// # 233
    tmp___3 = save_str(fd, (short )1000, env->e_val, write_buf, & write_buf_used);
    }
// # 233
    if (tmp___3 != 0) {
      {
// # 233
      error_e("Could not write str : file %s has not been saved.", file->cf_user);
      }
// # 233
      return (-1);
    }
    {
// # 232
    env = env->e_next;
    }
  }
  {
// # 236
  line = file->cf_line_base;
  }
// # 236
  while (line) {
    {
// # 239
    tmp___4 = save_str(fd, (short )2001, line->cl_shell, write_buf,
                       & write_buf_used);
    }
// # 239
    if (tmp___4 != 0) {
      {
// # 239
      error_e("Could not write str : file %s has not been saved.", file->cf_user);
      }
// # 239
      return (-1);
    }
    {
// # 240
    tmp___5 = save_str(fd, (short )2006, line->cl_runas, write_buf,
                       & write_buf_used);
    }
// # 240
    if (tmp___5 != 0) {
      {
// # 240
      error_e("Could not write str : file %s has not been saved.", file->cf_user);
      }
// # 240
      return (-1);
    }
    {
// # 241
    tmp___6 = save_str(fd, (short )2007, line->cl_mailto, write_buf,
                       & write_buf_used);
    }
// # 241
    if (tmp___6 != 0) {
      {
// # 241
      error_e("Could not write str : file %s has not been saved.", file->cf_user);
      }
// # 241
      return (-1);
    }
    {
// # 242
    tmp___7 = save_strn(fd, (short )2017, (char *)(line->cl_option), (short )4,
                        write_buf, & write_buf_used);
    }
// # 242
    if (tmp___7 != 0) {
      {
// # 242
      error_e("Could not write strn : file %s has not been saved.",
              file->cf_user);
      }
// # 242
      return (-1);
    }
// # 246
    if ((int )line->cl_option[3] & 1) {
// # 246
      if ((int )line->cl_option[0] & 1) {
        {
// # 247
        tmp___8 = save_lint(fd, (short )2018, line->cl_first, write_buf,
                            & write_buf_used);
        }
// # 247
        if (tmp___8 != 0) {
          {
// # 247
          error_e("Could not write lint : file %s has not been saved.",
                  file->cf_user);
          }
// # 247
          return (-1);
        }
      } else {
        goto _L;
      }
    } else {
      _L: 
      {
// # 250
      tmp___9 = save_lint(fd, (short )2008, line->cl_nextexe, write_buf,
                          & write_buf_used);
      }
// # 250
      if (tmp___9 != 0) {
        {
// # 250
        error_e("Could not write lint : file %s has not been saved.",
                file->cf_user);
        }
// # 250
        return (-1);
      }
    }
// # 251
    if (line->cl_numexe) {
      {
// # 252
      tmp___10 = save_strn(fd, (short )2002, (char *)(& line->cl_numexe),
                           (short )1, write_buf, & write_buf_used);
      }
// # 252
      if (tmp___10 != 0) {
        {
// # 252
        error_e("Could not write strn : file %s has not been saved.",
                file->cf_user);
        }
// # 252
        return (-1);
      }
    }
// # 253
    if ((int )line->cl_option[0] & 2) {
      {
// # 254
      tmp___11 = save_strn(fd, (short )2003, (char *)(line->cl_lavg), (short )3,
                           write_buf, & write_buf_used);
      }
// # 254
      if (tmp___11 != 0) {
        {
// # 254
        error_e("Could not write strn : file %s has not been saved.",
                file->cf_user);
        }
// # 254
        return (-1);
      }
    }
// # 256
    if (line->cl_until > 0L) {
      {
// # 257
      tmp___12 = save_lint(fd, (short )2004, line->cl_until, write_buf,
                           & write_buf_used);
      }
// # 257
      if (tmp___12 != 0) {
        {
// # 257
        error_e("Could not write lint : file %s has not been saved.",
                file->cf_user);
        }
// # 257
        return (-1);
      }
    }
// # 258
    if ((int )line->cl_nice != 0) {
      {
// # 259
      tmp___13 = save_strn(fd, (short )2005, & line->cl_nice, (short )1,
                           write_buf, & write_buf_used);
      }
// # 259
      if (tmp___13 != 0) {
        {
// # 259
        error_e("Could not write strn : file %s has not been saved.",
                file->cf_user);
        }
// # 259
        return (-1);
      }
    }
// # 260
    if ((int )line->cl_runfreq > 0) {
      {
// # 261
      tmp___14 = save_lint(fd, (short )2011, (long )line->cl_runfreq, write_buf,
                           & write_buf_used);
      }
// # 261
      if (tmp___14 != 0) {
        {
// # 261
        error_e("Could not write lint : file %s has not been saved.",
                file->cf_user);
        }
// # 261
        return (-1);
      }
      {
// # 262
      tmp___15 = save_lint(fd, (short )2009, (long )line->cl_remain, write_buf,
                           & write_buf_used);
      }
// # 262
      if (tmp___15 != 0) {
        {
// # 262
        error_e("Could not write lint : file %s has not been saved.",
                file->cf_user);
        }
// # 262
        return (-1);
      }
    }
// # 265
    if ((int )line->cl_option[0] & 1) {
      {
// # 267
      tmp___16 = save_lint(fd, (short )2010, line->cl_timefreq, write_buf,
                           & write_buf_used);
      }
// # 267
      if (tmp___16 != 0) {
        {
// # 267
        error_e("Could not write lint : file %s has not been saved.",
                file->cf_user);
        }
// # 267
        return (-1);
      }
    } else {
      {
// # 271
      tmp___17 = save_strn(fd, (short )2012, (char *)(line->cl_mins), (short )8,
                           write_buf, & write_buf_used);
      }
// # 271
      if (tmp___17 != 0) {
        {
// # 271
        error_e("Could not write strn : file %s has not been saved.",
                file->cf_user);
        }
// # 271
        return (-1);
      }
      {
// # 273
      tmp___18 = save_strn(fd, (short )2013, (char *)(line->cl_hrs), (short )3,
                           write_buf, & write_buf_used);
      }
// # 273
      if (tmp___18 != 0) {
        {
// # 273
        error_e("Could not write strn : file %s has not been saved.",
                file->cf_user);
        }
// # 273
        return (-1);
      }
      {
// # 275
      tmp___19 = save_strn(fd, (short )2014, (char *)(line->cl_days), (short )4,
                           write_buf, & write_buf_used);
      }
// # 275
      if (tmp___19 != 0) {
        {
// # 275
        error_e("Could not write strn : file %s has not been saved.",
                file->cf_user);
        }
// # 275
        return (-1);
      }
      {
// # 277
      tmp___20 = save_strn(fd, (short )2015, (char *)(line->cl_mons), (short )2,
                           write_buf, & write_buf_used);
      }
// # 277
      if (tmp___20 != 0) {
        {
// # 277
        error_e("Could not write strn : file %s has not been saved.",
                file->cf_user);
        }
// # 277
        return (-1);
      }
      {
// # 279
      tmp___21 = save_strn(fd, (short )2016, (char *)(line->cl_dow), (short )1,
                           write_buf, & write_buf_used);
      }
// # 279
      if (tmp___21 != 0) {
        {
// # 279
        error_e("Could not write strn : file %s has not been saved.",
                file->cf_user);
        }
// # 279
        return (-1);
      }
    }
    {
// # 284
    tmp___22 = save_type(fd, (short )2000, write_buf, & write_buf_used);
    }
// # 284
    if (tmp___22 != 0) {
      {
// # 284
      error_e("Could not write type : file %s has not been saved.",
              file->cf_user);
      }
// # 284
      return (-1);
    }
    {
// # 236
    line = line->cl_next;
    }
  }
  {
// # 287
  tmp___23 = write_buf_to_disk(fd, write_buf, & write_buf_used);
  }
// # 287
  if (tmp___23 == -1) {
// # 288
    return (-1);
  }
// # 290
  return (0);
}
}
// # 294
int save_one_file(cf_t *file , char *filename , uid_t own_uid , gid_t own_gid ,
                  time_t save_date ) 
{ int fd ;
  int tmp ;
  int tmp___0 ;

  {
  {
// # 308
  fd = open((char /*const*/   *)filename, 4673, 384);
  }
// # 313
  if (fd == -1) {
    {
// # 314
    error_e("Could not open %s", filename);
    }
// # 315
    return (-1);
  }
  {
// # 318
  tmp = fchown(fd, own_uid, own_gid);
  }
// # 318
  if (tmp != 0) {
    {
// # 319
    error_e("Could not fchown %s to uid:%d gid:%d", filename, own_uid, own_gid);
// # 320
    close(fd);
// # 321
    remove((char /*const*/   *)filename);
    }
// # 322
    return (-1);
  }
  {
// # 326
  tmp___0 = write_file_to_disk(fd, file, save_date);
  }
// # 326
  if (tmp___0 == -1) {
    {
// # 327
    close(fd);
// # 328
    remove((char /*const*/   *)filename);
    }
// # 329
    return (-1);
  }
  {
// # 332
  close(fd);
  }
// # 334
  return (0);
}
}
// # 338
int save_file_safe(cf_t *file , char *final_path , char *prog_name___0 ,
                   uid_t own_uid , gid_t own_gid , time_t save_date ) 
{ char temp_path[516] ;
  int final_path_len ;
  int temp_path_index ;
  char *tmp_str ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
// # 346
  tmp_str = ".tmp";
// # 348
  final_path_len = (int )strlen((char /*const*/   *)final_path);
// # 349
  strncpy((char */* __restrict  */)(temp_path),
          (char /*const*/   */* __restrict  */)((char /*const*/   *)final_path),
          sizeof(temp_path) - sizeof(tmp_str));
  }
// # 350
  if ((unsigned int )final_path_len > sizeof(temp_path) - sizeof(tmp_str)) {
    {
// # 350
    temp_path_index = (int )(sizeof(temp_path) - sizeof(tmp_str));
    }
  } else {
    {
// # 350
    temp_path_index = final_path_len;
    }
  }
  {
// # 352
  strcpy((char */* __restrict  */)(& temp_path[temp_path_index]),
         (char /*const*/   */* __restrict  */)((char /*const*/   *)".tmp"));
// # 354
  tmp___1 = save_one_file(file, temp_path, own_uid, own_gid, save_date);
  }
// # 354
  if (tmp___1 == 0) {
    {
// # 355
    tmp___0 = rename((char /*const*/   *)(temp_path), (char /*const*/   *)final_path);
    }
// # 355
    if (tmp___0 != 0) {
      {
// # 356
      error_e("Cannot rename %s to %s", temp_path, final_path);
// # 357
      error("%s will try to save the name to its definitive filename directly.",
            prog_name___0);
// # 359
      error("If there is an error, root may consider to replace %s (which is a valid copy) by %s manually.",
            final_path, temp_path);
// # 361
      tmp = save_one_file(file, final_path, own_uid, own_gid, save_date);
      }
// # 361
      if (tmp == -1) {
// # 362
        return (-1);
      }
    }
  } else {
    {
// # 366
    error("Since %s has not been able to save %s\'s file, it will keep the previous version (if any) of %s.",
          prog_name___0, final_path, final_path);
    }
// # 368
    return (-1);
  }
// # 371
  return (0);
}
}
// # 34 "temp_file.c"
int temp_file(char **name ) 
{ int fd ;
  char name_local[512] ;
  int tmp ;
  int tmp___0 ;
  // # 40
  name_local[0] = '\0';
  // # 41
  strncpy((char */* __restrict  */)(name_local),
          (char /*const*/   */* __restrict  */)((char /*const*/   *)tmp_path),
          sizeof(name_local) - 1/*U*/);
// # 42
  name_local[sizeof(name_local) - 1/*U*/] = '\0';
  // # 43
  strcat((char */* __restrict  */)(name_local),
         (char /*const*/   */* __restrict  */)((char /*const*/   *)"fcr-XXXXXX"));
  // # 44
  fd = mkstemp(name_local);
  // # 44
  if (fd == -1) {
    // # 45
    die_e("Can\'t find a unique temporary filename");
  }
  // # 48
  tmp = fchmod(fd, 384/*U*/);
  // # 48
  if (tmp != 0) {
    // # 49
    die_e("Can\'t fchmod temp file");
  }
  // # 67
  if ((unsigned int )name == (unsigned int )((void *)0)) {
    // # 67
    tmp___0 = unlink((char /*const*/   *)(name_local));
    // # 67
    if (tmp___0 != 0) {
      // # 68
      die_e("Can\'t unlink temporary file %s", name_local);
    }
  }  
  // # 70
  fcntl(fd, 2, 1);  
  // # 73
  if ((unsigned int )name != (unsigned int )((void *)0)) {
    // # 74
    (*name) = strdup2((char /*const*/   *)(name_local));
  }
// # 79
  return (fd);
}


// # 38 "log.c"
static void xopenlog(void) ;
// # 39
char *make_msg(char /*const*/   *append , char *fmt , __ccured_va_list args ) ;
// # 40
void log_syslog_str(int priority , char *msg ) ;
// # 41
void log_console_str(char *msg ) ;
// # 42
void log_fd_str(int fd , char *msg ) ;
// # 43
static void log_syslog(int priority , int fd , char *fmt ,
                       __ccured_va_list args ) ;
// # 44
static void log_e(int priority , char *fmt , __ccured_va_list args ) ;
// # 46
static void log_pame(int priority , pam_handle_t *pamh___0 , int pamerrno ,
                     char *fmt , __ccured_va_list args ) ;
// # 50
static char truncated[13] ;/*  = 
{' ', '(', 't', 'r', 'u', 'n', 'c', 'a', 't', 'e', 'd', ')', '\0'};*/

// # 51
static int log_open /*   = 0 */;
// # 54
static void xopenlog(void) 
{ 
// # 57
  if (! log_open) {
    // # 58
    openlog((char /*const*/   *)prog_name, 1, 72);
    // # 59
    log_open = 1;
  }
  // # 61
  return;
}

// # 64
void xcloselog(void) 
{ 
  // # 67
  if (log_open) {
    // # 67
    closelog();
  }
  // # 68
  log_open = 0;
  // # 69
  return;
}

// # 73
char *make_msg(char /*const*/   *append , char *fmt , __ccured_va_list args ) 
{ int len ;
  char *msg ;
  size_t tmp ;

  {
  {
// # 77
  msg = (char *)((void *)0);
// # 79
  msg = (char *)calloc(1/*U*/, 176/*U*/);
  }
// # 79
  if ((unsigned int )msg == (unsigned int )((void *)0)) {
// # 80
    return ((char *)((void *)0));
  }
  {
// # 83
  len = vsnprintf((char */* __restrict  */)msg, 176/*U*/,
                  (char /*const*/   */* __restrict  */)((char /*const*/   *)fmt), args);
  }
// # 84
  if ((unsigned int )append != (unsigned int )((void *)0)) {
    {
// # 85
    strncat((char */* __restrict  */)msg,
            (char /*const*/   */* __restrict  */)((char /*const*/   *)": "),
            (unsigned int )(175 - len));
// # 86
    strncat((char */* __restrict  */)msg,
            (char /*const*/   */* __restrict  */)append, (unsigned int )(175 - len));
// # 87
    tmp = strlen(append);
// # 87
    len = (int )((unsigned int )len + (2/*U*/ + tmp));
    }
  }
// # 89
  if (len >= 175) {
    {
// # 90
    strcpy((char */* __restrict  */)((msg + 174) - sizeof(truncated)),
           (char /*const*/   */* __restrict  */)((char /*const*/   *)(truncated)));
    }
  }
// # 92
  return (msg);
}
}
// # 97
void log_syslog_str(int priority , char *msg ) 
{ 

  {
// # 100
  if (dosyslog) {
    {
// # 101
    xopenlog();
// # 102
    syslog(priority, (char /*const*/   *)"%s", msg);
    }
  }
// # 105
  return;
}
}
// # 108
void log_console_str(char *msg ) 
{ time_t t ;
  time_t tmp ;
  struct tm *ft ;
  char date[30] ;
  FILE * /*__restrict*/  tmp___0 ;
  // # 111
  if ((int )foreground == 1) {
    // # 112
    tmp = time((time_t *)((void *)0));
    // # 112
    t = tmp;
    // # 116
    ft = localtime((time_t /*const*/   *)(& t));
    // # 117
    date[0] = '\0';
    // # 118
    strftime((char */* __restrict  */)(date), sizeof(date),
	     (char /*const*/   */* __restrict  */)((char /*const*/   *)"%H:%M:%S"),
	     (struct tm  /*const*/  */* __restrict  */)((struct tm  /*const*/  *)ft));
    // # 119
    tmp___0 = (FILE */* __restrict  */)get_stderr();
    // # 105 "spec.work"
    tmp___0->BLAST_FLAG = 1;
    // # 72
    if (! (tmp___0->BLAST_FLAG == 1)) {
      // # 74
      BLAST_ERROR();
    }
    
    // # 119 "log.c"
    fprintf(tmp___0,
	    (char /*const*/   */* __restrict  */)((char /*const*/   *)"%s %s\n"), date,
	    msg);
    
  }
// # 122
  return;
}


// # 125
void log_fd_str(int fd , char *msg ) 
{ size_t tmp ;
  size_t tmp___0 ;

  {
// # 128
  if (fd >= 0) {
    {
// # 129
    tmp = strlen((char /*const*/   *)msg);
// # 129
    send(fd, (void /*const*/   *)msg, tmp, 0);
// # 130
    tmp___0 = strlen((char /*const*/   *)"\n");
// # 130
    send(fd, (void /*const*/   *)"\n", tmp___0, 0);
    }
  }
// # 132
  return;
}
}
// # 137
static void log_syslog(int priority , int fd , char *fmt ,
                       __ccured_va_list args ) 
{ char *msg ;
// # 142
  msg = make_msg((char /*const*/   *)((void *)0), fmt, args);  
  // # 142
  if ((unsigned int )msg == (unsigned int )((void *)0)) {
    // # 143
    return;
  }
  // # 145
  log_syslog_str(priority, msg);
  // # 146
  log_console_str(msg);
  // # 147
  log_fd_str(fd, msg);
  // # 149
  free((void *)msg);
  // # 150
  return;
}

// # 154
static void log_e(int priority , char *fmt , __ccured_va_list args ) 
{ int saved_errno ;
  char *msg ;
  int *tmp ;
  char /*const*/   *tmp___0 ;

  // # 160
  tmp = __errno_location();
  // # 160
  saved_errno = (*tmp);
  // # 162
  tmp___0 = (char /*const*/   *)strerror(saved_errno);
  // # 162
  msg = make_msg(tmp___0, fmt, args);

  // # 162
  if ((unsigned int )msg == (unsigned int )((void *)0)) {
    // # 163
    return;
  }
  
  // # 165
  log_syslog_str(priority, msg);
  // # 166
  log_console_str(msg);
  // # 168
  free((void *)msg);
  
  // # 169
  return;
}


// # 175
static void log_pame(int priority , pam_handle_t *pamh___0 , int pamerrno ,
                     char *fmt , __ccured_va_list args ) 
{ char *msg ;
  char /*const*/   *tmp ;
   
  // # 180
  tmp = pam_strerror(pamh___0, pamerrno);
  // # 180
  msg = make_msg(tmp, fmt, args);
  
  // # 180
  if ((unsigned int )msg == (unsigned int )((void *)0)) {
    // # 181
    return;
  }
  
  // # 183
  log_syslog_str(priority, msg);
  // # 184
  log_console_str(msg);
  // # 186
  xcloselog();
  // # 188
  free((void *)msg);
  
  // # 189
  return; 
}

// # 194
void explain(char *fmt  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;
  // # 199
  //tmp = (unsigned long )GCC_STDARG_START();
  // # 199
  //__ccured_va_start(args, tmp);
  // # 200
  log_syslog(5, -1, fmt, args);
  // # 201
  //__ccured_va_end(args);
  
  // # 202
  return;
}


// # 205
void explain_fd(int fd , char *fmt  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;
  // # 210
  //tmp = (unsigned long )GCC_STDARG_START();
  // # 210
  //__ccured_va_start(args, tmp);
  // # 211
  log_syslog(5, fd, fmt, args);
  // # 212
  //__ccured_va_end(args);
  // # 213
  return;
}

// # 217
void explain_e(char *fmt  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;

  {
  {
// # 222
//  tmp = (unsigned long )GCC_STDARG_START();
// # 222
  //__ccured_va_start(args, tmp);
// # 223
  log_e(5, fmt, args);
// # 224
  //__ccured_va_end(args);
  }
// # 225
  return;
}
}
// # 229
void warn(char *fmt  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;

  {
  {
// # 234
//  tmp = (unsigned long )GCC_STDARG_START();
// # 234
  //__ccured_va_start(args, tmp);
// # 235
  log_syslog(4, -1, fmt, args);
// # 236
  //__ccured_va_end(args);
  }
// # 237
  return;
}
}
// # 240
void warn_fd(int fd , char *fmt  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;

  {
  {
// # 245
//  tmp = (unsigned long )GCC_STDARG_START();
// # 245
  //__ccured_va_start(args, tmp);
// # 246
  log_syslog(4, fd, fmt, args);
// # 247
  //__ccured_va_end(args);
  }
// # 248
  return;
}
}
// # 252
void warn_e(char *fmt  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;

  {
  {
// # 257
//  tmp = (unsigned long )GCC_STDARG_START();
// # 257
  //__ccured_va_start(args, tmp);
// # 258
  log_e(4, fmt, args);
// # 259
  //__ccured_va_end(args);
  }
// # 260
  return;
}
}
// # 264
void error(char *fmt  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;

  {
  {
// # 269
// tmp = (unsigned long )GCC_STDARG_START();
// # 269
  //__ccured_va_start(args, tmp);
// # 270
  log_syslog(3, -1, fmt, args);
// # 271
  //__ccured_va_end(args);
  }
// # 272
  return;
}
}
// # 275
void error_fd(int fd , char *fmt  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;

  {
  {
// # 280
//  tmp = (unsigned long )GCC_STDARG_START();
// # 280
  //__ccured_va_start(args, tmp);
// # 281
  log_syslog(3, fd, fmt, args);
// # 282
  //__ccured_va_end(args);
  }
// # 283
  return;
}
}
// # 287
void error_e(char *fmt  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;

  {
  {
// # 292
// tmp = (unsigned long )GCC_STDARG_START();
// # 292
  //__ccured_va_start(args, tmp);
// # 293
  log_e(3, fmt, args);
// # 294
  //__ccured_va_end(args);
  }
// # 295
  return;
}
}
// # 300
void error_pame(pam_handle_t *pamh___0 , int pamerrno , char *fmt  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;

  {
  {
// # 305
  xcloselog();
// # 307
// tmp = (unsigned long )GCC_STDARG_START();
// # 307
  //__ccured_va_start(args, tmp);
// # 308
  log_pame(3, pamh___0, pamerrno, fmt, args);
// # 309
  //__ccured_va_end(args);
  }
// # 310
  return;
}
}
// # 314
void die(char *fmt  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;
  __pid_t tmp___0 ;

  {
  {
// # 319
//  tmp = (unsigned long )GCC_STDARG_START();
// # 319
  //__ccured_va_start(args, tmp);
// # 320
  log_syslog(3, -1, fmt, args);
// # 321
  //__ccured_va_end(args);
// # 322
  tmp___0 = getpid();
  }
// # 322
  if (tmp___0 == daemon_pid) {
    {
// # 322
    error("Aborted");
    }
  }
  {
// # 324
  exit(1);
  {
// # 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
// # 324 "log.c"
  return;
}
}
// # 330
void die_e(char *fmt  , ...) 
{ __ccured_va_list args ;
  int err_no ;
  int *tmp ;
  unsigned long tmp___0 ;
  __pid_t tmp___1 ;

  {
  {
// # 334
  err_no = 0;
// # 336
  tmp = __errno_location();
// # 336
  err_no = (*tmp);
// # 338
// tmp___0 = (unsigned long )GCC_STDARG_START();
// # 338
  //__ccured_va_start(args, tmp___0);
// # 339
  log_e(3, fmt, args);
// # 340
  //__ccured_va_end(args);
// # 341
  tmp___1 = getpid();
  }
// # 341
  if (tmp___1 == daemon_pid) {
    {
// # 341
    error("Aborted");
    }
  }
  {
// # 343
  exit(err_no);
  {
// # 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
// # 343 "log.c"
  return;
}
}
// # 349
void die_pame(pam_handle_t *pamh___0 , int pamerrno , char *fmt  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;
  __pid_t tmp___0 ;

  {
  {
// # 354
  xcloselog();
// # 356
//  tmp = (unsigned long )GCC_STDARG_START();
// # 356
  //__ccured_va_start(args, tmp);
// # 357
  log_pame(3, pamh___0, pamerrno, fmt, args);
// # 358
  //__ccured_va_end(args);
// # 359
  pam_end(pamh___0, pamerrno);
// # 360
  tmp___0 = getpid();
  }
// # 360
  if (tmp___0 == daemon_pid) {
    {
// # 360
    error("Aborted");
    }
  }
  {
// # 362
  exit(1);
  {
// # 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
// # 362 "log.c"
  return;
}
}
// # 368
void Debug(char *fmt  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;

  {
  {
// # 373
//  tmp = (unsigned long )GCC_STDARG_START();
// # 373
  //__ccured_va_start(args, tmp);
// # 374
  log_syslog(7, -1, fmt, args);
// # 375
  //__ccured_va_end(args);
  }
// # 376
  return;
}
}
// # 379
void send_msg_fd_debug(int fd , char *fmt  , ...) 
{ char *msg ;
  __ccured_va_list args ;
  unsigned long tmp ;

  {
  {
// # 386
//  tmp = (unsigned long )GCC_STDARG_START();
// # 386
  //__ccured_va_start(args, tmp);
// # 388
  msg = make_msg((char /*const*/   *)((void *)0), fmt, args);
  }
// # 388
  if ((unsigned int )msg == (unsigned int )((void *)0)) {
// # 389
    return;
  }
// # 391
  if (debug_opt) {
    {
// # 392
    log_syslog_str(7, msg);
    }
  }
  {
// # 394
  log_fd_str(fd, msg);
// # 396
  free((void *)msg);
// # 398
  //__ccured_va_end(args);
  }
// # 399
  return;
}
}
// # 402
void send_msg_fd(int fd , char *fmt  , ...) 
{ char *msg ;
  __ccured_va_list args ;
  unsigned long tmp ;

  {
  {
// # 409
//  tmp = (unsigned long )GCC_STDARG_START();
// # 409
  //__ccured_va_start(args, tmp);
// # 411
  msg = make_msg((char /*const*/   *)((void *)0), fmt, args);
  }
// # 411
  if ((unsigned int )msg == (unsigned int )((void *)0)) {
// # 412
    return;
  }
  {
// # 414
  log_fd_str(fd, msg);
// # 416
  free((void *)msg);
// # 418
  //__ccured_va_end(args);
  }
// # 419
  return;
}
}
// # 32 "database.c"
int is_leap_year(int year ) ;
// # 33
int get_nb_mdays(int year , int mon ) ;
// # 34
void set_wday(struct tm *date ) ;
// # 35
//void goto_non_matching(cl_t *line , struct tm *ftime , char option ) ;
// # 38
void run_lavg_job(int i ) ;
// # 39
void run_queue_job(cl_t *line ) ;
// # 40
void resize_exe_array(void) ;
// # 42
void test_jobs(void) 
{ struct job_t *j ;

  {
// # 49
  if (debug_opt) {
    {
// # 49
    Debug("Looking for jobs to execute ...");
    }
  }
// # 52
  while (1) {
    {
// # 52
    j = queue_base;
    }
// # 52
    if (j) {
// # 52
      if (! ((j->j_line)->cl_nextexe <= now)) {
// # 52
        break;
      }
    } else {
// # 52
      break;
    }
// # 53
    if ((int )(j->j_line)->cl_remain > 0) {
      {
// # 53
      (j->j_line)->cl_remain = (unsigned short )((int )(j->j_line)->cl_remain -
                                                 1);
      }
// # 53
      if ((int )(j->j_line)->cl_remain > 0) {
        {
// # 54
        set_next_exe(j->j_line, (char )0, -1);
        }
// # 55
        if (debug_opt) {
          {
// # 55
          Debug("    cl_remain: %d", (j->j_line)->cl_remain);
          }
        }
// # 56
        continue;
      }
    }
    {
// # 59
    (j->j_line)->cl_remain = (j->j_line)->cl_runfreq;
    }
// # 61
    if ((int )(j->j_line)->cl_option[0] & 2) {
      {
// # 62
      add_lavg_job(j->j_line, -1);
      }
    } else {
// # 63
      if ((int )(j->j_line)->cl_option[0] & 32) {
        {
// # 64
        add_serial_job(j->j_line, -1);
        }
      } else {
        {
// # 66
        run_normal_job(j->j_line, -1);
        }
      }
    }
    {
// # 68
    set_next_exe(j->j_line, (char )0, -1);
    }
  }
// # 71
  return;
}
}
// # 74
void run_normal_job(cl_t *line , int info_fd ) 
{ 

  {
// # 79
  if ((int )line->cl_numexe <= 0) {
    {
// # 81
    line->cl_numexe = (unsigned char )((int )line->cl_numexe + 1);
// # 82
    run_queue_job(line);
// # 83
    send_msg_fd(info_fd, "Job %s started.", line->cl_shell);
    }
  } else {
// # 79
    if ((int )line->cl_option[1] & 4) {
// # 79
      if ((int )line->cl_numexe < 255) {
        {
// # 81
        line->cl_numexe = (unsigned char )((int )line->cl_numexe + 1);
// # 82
        run_queue_job(line);
// # 83
        send_msg_fd(info_fd, "Job %s started.", line->cl_shell);
        }
      } else {
        {
// # 86
        warn_fd(info_fd, "    process already running: %s\'s %s",
                (line->cl_file)->cf_user, line->cl_shell);
        }
      }
    } else {
      {
// # 86
      warn_fd(info_fd, "    process already running: %s\'s %s",
              (line->cl_file)->cf_user, line->cl_shell);
      }
    }
  }
// # 90
  return;
}
}
// # 92
void run_lavg_job(int i ) 
{ 

  {
  {
// # 96
  run_queue_job((lavg_array + i)->l_line);
  }
// # 98
  if ((int )((lavg_array + i)->l_line)->cl_option[0] & 32) {
    {
// # 99
    lavg_serial_running = (short )((int )lavg_serial_running + 1);
    }
  }
  {
// # 101
  lavg_num = (short )((int )lavg_num - 1);
  }
// # 101
  if (i < (int )lavg_num) {
    {
// # 102
    (*(lavg_array + i)) = (*(lavg_array + (int )lavg_num));
// # 103
    (lavg_array + (int )lavg_num)->l_line = (struct cl_t *)((void *)0);
    }
  } else {
    {
// # 106
    (lavg_array + i)->l_line = (struct cl_t *)((void *)0);
    }
  }
// # 108
  return;
}
}
// # 111
void run_serial_job(void) 
{ 

  {
// # 119
  if (debug_opt) {
    {
// # 119
    Debug("num: %d running:%d  index:%d", serial_num, serial_running,
          serial_array_index);
    }
  }
// # 121
  if ((int )serial_num != 0) {
    {
// # 122
    run_queue_job((*(serial_array + (int )serial_array_index)));
// # 123
    (*(serial_array + (int )serial_array_index)) = (struct cl_t *)((void *)0);
// # 125
    serial_running = (short )((int )serial_running + 1);
// # 126
    serial_array_index = (short )((int )serial_array_index + 1);
    }
// # 126
    if ((int )serial_array_index >= (int )serial_array_size) {
      {
// # 127
      serial_array_index = (short )((int )serial_array_index -
                                    (int )serial_array_size);
      }
    }
    {
// # 128
    serial_num = (short )((int )serial_num - 1);
    }
  }
// # 131
  return;
}
}
// # 134
void resize_exe_array(void) 
{ struct exe_t *ptr ;
  short old_size ;

  {
  {
// # 138
  ptr = (struct exe_t *)((void *)0);
// # 139
  old_size = exe_array_size;
  }
// # 141
  if (debug_opt) {
    {
// # 141
    Debug("Resizing exe_array");
    }
  }
  {
// # 142
  exe_array_size = (short )((int )exe_array_size + 5);
// # 144
  ptr = (struct exe_t *)calloc((unsigned int )exe_array_size,
                               sizeof(struct exe_t ));
  }
// # 144
  if ((unsigned int )ptr == (unsigned int )((void *)0)) {
    {
// # 145
    die_e("could not calloc exe_array");
    }
  }
  {
// # 147
  memcpy((void */* __restrict  */)((void *)ptr),
         (void /*const*/   */* __restrict  */)((void /*const*/   *)exe_array),
         sizeof(struct exe_t ) * (unsigned int )old_size);
// # 148
  free((void *)exe_array);
// # 149
  exe_array = ptr;
  }
// # 150
  return;
}
}
// # 153
void run_queue_job(cl_t *line ) 
{ short tmp ;

  {
// # 163
  if ((int )exe_num >= (int )exe_array_size) {
    {
// # 164
    resize_exe_array();
    }
  }
  {
// # 166
  (exe_array + (int )exe_num)->e_line = line;
// # 168
  tmp = exe_num;
// # 168
  exe_num = (short )((int )exe_num + 1);
// # 168
  run_job(exe_array + (int )tmp);
  }
// # 170
  return;
}
}
// # 174
void insert_nextexe(struct cl_t *line ) 
{ struct job_t *newjob ;
  struct job_t *j ;
  struct job_t *jprev ;
  struct job_t *old_entry ;

  {
// # 180
  if ((unsigned int )queue_base != (unsigned int )((void *)0)) {
    {
// # 182
    jprev = (struct job_t *)((void *)0);
// # 183
    old_entry = (struct job_t *)((void *)0);
// # 186
    j = queue_base;
    }
// # 186
    while ((unsigned int )j != (unsigned int )((void *)0)) {
// # 187
      if ((unsigned int )j->j_line == (unsigned int )line) {
        {
// # 188
        old_entry = j;
        }
// # 190
        if ((unsigned int )jprev != (unsigned int )((void *)0)) {
          {
// # 191
          jprev->j_next = j->j_next;
// # 192
          j = jprev;
          }
        } else {
          {
// # 196
          queue_base = j->j_next;
// # 196
          j = queue_base;
          }
        }
// # 198
        break;
      } else {
        {
// # 201
        jprev = j;
        }
      }
      {
// # 186
      j = j->j_next;
      }
    }
    {
// # 203
    jprev = (struct job_t *)((void *)0);
    }
// # 204
    if ((unsigned int )j == (unsigned int )((void *)0)) {
      {
// # 205
      j = queue_base;
      }
    } else {
// # 204
      if (line->cl_nextexe < (j->j_line)->cl_nextexe) {
        {
// # 205
        j = queue_base;
        }
      }
    }
// # 206
    while (1) {
// # 206
      if ((unsigned int )j != (unsigned int )((void *)0)) {
// # 206
        if (! (line->cl_nextexe >= (j->j_line)->cl_nextexe)) {
// # 206
          break;
        }
      } else {
// # 206
        break;
      }
      {
// # 207
      jprev = j;
// # 208
      j = j->j_next;
      }
    }
// # 211
    if ((unsigned int )old_entry == (unsigned int )((void *)0)) {
      {
// # 213
      newjob = (struct job_t *)calloc(1/*U*/, sizeof(job_t ));
      }
// # 213
      if ((unsigned int )newjob == (unsigned int )((void *)0)) {
        {
// # 213
        die_e("Could not calloc.");
        }
      }
      {
// # 214
      newjob->j_line = line;
      }
    } else {
      {
// # 218
      newjob = old_entry;
      }
    }
    {
// # 220
    newjob->j_next = j;
    }
// # 222
    if ((unsigned int )jprev == (unsigned int )((void *)0)) {
      {
// # 223
      queue_base = newjob;
      }
    } else {
      {
// # 225
      jprev->j_next = newjob;
      }
    }
  } else {
    {
// # 230
    newjob = (struct job_t *)calloc(1/*U*/, sizeof(job_t ));
    }
// # 230
    if ((unsigned int )newjob == (unsigned int )((void *)0)) {
      {
// # 230
      die_e("Could not calloc.");
      }
    }
    {
// # 231
    newjob->j_line = line;
// # 232
    queue_base = newjob;
    }
  }
// # 235
  return;
}
}
// # 237
void add_serial_job(struct cl_t *line , int info_fd ) 
{ short i ;
  cl_t **ptr ;
  short old_size ;

  {
// # 245
  if ((int )line->cl_option[1] & 8) {
    _L: 
// # 245
    if ((int )line->cl_option[1] & 8) {
// # 245
      if ((int )line->cl_numexe > 0) {
        {
// # 247
        send_msg_fd_debug(info_fd, "already in serial queue %s", line->cl_shell);
        }
// # 248
        return;
      }
    }
  } else {
// # 245
    if ((int )line->cl_numexe >= 255) {
      {
// # 247
      send_msg_fd_debug(info_fd, "already in serial queue %s", line->cl_shell);
      }
// # 248
      return;
    } else {
      goto _L;
    }
  }
  {
// # 251
  send_msg_fd_debug(info_fd, "inserting in serial queue %s", line->cl_shell);
  }
// # 253
  if ((int )serial_num >= (int )serial_array_size) {
// # 254
    if ((int )serial_num >= (int )serial_queue_max) {
      {
// # 255
      error_fd(info_fd,
               "Could not add job : serial queue is full (%d jobs). Consider using option serialonce, fcron\'s option -m and/or -q : %s",
               serial_queue_max, line->cl_shell);
      }
// # 258
      if ((int )line->cl_option[2] & 32) {
        {
// # 259
        mail_notrun(line, (char )3, (struct tm *)((void *)0));
        }
      }
// # 260
      return;
    } else {
      {
// # 263
      ptr = (cl_t **)((void *)0);
// # 264
      old_size = serial_array_size;
      }
// # 266
      if (debug_opt) {
        {
// # 266
        Debug("Resizing serial_array");
        }
      }
      {
// # 267
      serial_array_size = (short )((int )serial_array_size + 10);
// # 269
      ptr = (cl_t **)calloc((unsigned int )serial_array_size, sizeof(cl_t *));
      }
// # 269
      if ((unsigned int )ptr == (unsigned int )((void *)0)) {
        {
// # 270
        die_e("could not calloc serial_array");
        }
      }
      {
// # 273
      memcpy((void */* __restrict  */)((void *)(ptr + (int )serial_array_index)),
             (void /*const*/   */* __restrict  */)((void /*const*/   *)serial_array),
             sizeof(cl_t *) * (unsigned int )((int )old_size -
                                              (int )serial_array_index));
// # 275
      memcpy((void */* __restrict  */)((void *)ptr),
             (void /*const*/   */* __restrict  */)((void /*const*/   *)(serial_array +
                                                                ((int )old_size -
                                                                 (int )serial_array_index))),
             sizeof(cl_t *) * (unsigned int )serial_array_index);
// # 277
      serial_array_index = (short )0;
// # 278
      free((void *)serial_array);
// # 279
      serial_array = ptr;
      }
    }
  }
  {
// # 283
  i = (short )((int )serial_array_index + (int )serial_num);
  }
// # 283
  if ((int )i >= (int )serial_array_size) {
    {
// # 284
    i = (short )((int )i - (int )serial_array_size);
    }
  }
  {
// # 286
  (*(serial_array + (int )i)) = line;
// # 288
  serial_num = (short )((int )serial_num + 1);
// # 289
  line->cl_numexe = (unsigned char )((int )line->cl_numexe + 1);
// # 291
  send_msg_fd_debug(info_fd,
                    "serial num: %d size:%d index:%d curline:%d running:%d (%s)",
                    serial_num, serial_array_size, serial_array_index, i,
                    serial_running, line->cl_shell);
  }
// # 296
  return;
}
}
// # 299
void add_lavg_job(struct cl_t *line , int info_fd ) 
{ struct lavg_t *ptr ;
  short old_size ;
  struct tm *ft ;
  struct tm ftime ;
  time_t begin_of_cur_int ;
  time_t end_of_cur_int ;
  time_t tmp ;

  {
// # 308
  if ((int )line->cl_option[1] & 16) {
// # 308
    if ((int )line->cl_numexe >= 255) {
      {
// # 310
      send_msg_fd_debug(info_fd, "already in lavg queue %s", line->cl_shell);
      }
// # 311
      return;
    } else {
      goto _L;
    }
  } else {
    _L: 
// # 308
    if (! ((int )line->cl_option[1] & 16)) {
// # 308
      if ((int )line->cl_numexe > 0) {
        {
// # 310
        send_msg_fd_debug(info_fd, "already in lavg queue %s", line->cl_shell);
        }
// # 311
        return;
      }
    }
  }
  {
// # 314
  send_msg_fd_debug(info_fd, "inserting in lavg queue %s", line->cl_shell);
  }
// # 318
  if ((int )lavg_num >= (int )lavg_array_size) {
// # 319
    if ((int )lavg_num >= (int )lavg_queue_max) {
      {
// # 320
      error_fd(info_fd,
               "Could not add job : lavg queue is full (%d jobs). Consider using options lavgonce, until, strict and/or fcron\'s option -q.",
               lavg_queue_max, line->cl_shell);
      }
// # 323
      if ((int )line->cl_option[2] & 32) {
        {
// # 324
        mail_notrun(line, (char )3, (struct tm *)((void *)0));
        }
      }
// # 325
      return;
    } else {
      {
// # 328
      ptr = (struct lavg_t *)((void *)0);
// # 329
      old_size = lavg_array_size;
      }
// # 331
      if (debug_opt) {
        {
// # 331
        Debug("Resizing lavg_array");
        }
      }
      {
// # 332
      lavg_array_size = (short )((int )lavg_array_size + 10);
// # 334
      ptr = (struct lavg_t *)calloc((unsigned int )lavg_array_size,
                                    sizeof(lavg_t ));
      }
// # 334
      if ((unsigned int )ptr == (unsigned int )((void *)0)) {
        {
// # 335
        die_e("could not calloc lavg_array");
        }
      }
      {
// # 337
      memcpy((void */* __restrict  */)((void *)ptr),
             (void /*const*/   */* __restrict  */)((void /*const*/   *)lavg_array),
             sizeof(lavg_t ) * (unsigned int )old_size);
// # 338
      free((void *)lavg_array);
// # 339
      lavg_array = ptr;
      }
    }
  }
  {
// # 343
  (lavg_array + (int )lavg_num)->l_line = line;
// # 344
  line->cl_numexe = (unsigned char )((int )line->cl_numexe + 1);
// # 345
  line->cl_option[1] = (unsigned char )((int )line->cl_option[1] | 2);
  }
// # 346
  if ((int )line->cl_option[2] & 16) {
    _L___0: 
// # 373
    if (line->cl_until > 0L) {
      {
// # 373
      (lavg_array + (int )lavg_num)->l_until = now + line->cl_until;
      }
    } else {
      {
// # 373
      (lavg_array + (int )lavg_num)->l_until = 0L;
      }
    }
  } else {
// # 346
    if ((int )line->cl_runfreq == 1) {
      {
// # 349
      end_of_cur_int = (long )0;
// # 352
      begin_of_cur_int = line->cl_nextexe -
                         (long )((int )(line->cl_file)->cf_tzdiff * 3600);
// # 354
      ft = localtime((time_t /*const*/   *)(& begin_of_cur_int));
// # 359
      memcpy((void */* __restrict  */)((void *)(& ftime)),
             (void /*const*/   */* __restrict  */)((void /*const*/   *)ft),
             sizeof(struct tm ));
// # 361
/* Need to check it's irrelevant to safety */
/*       goto_non_matching(line, & ftime, (char )1); */
// # 363
      tmp = mktime(& ftime);
// # 363
      end_of_cur_int = tmp + (long )((int )(line->cl_file)->cf_tzdiff * 3600);
      }
// # 365
      if (line->cl_until > 0L) {
// # 365
        if (line->cl_until + now < end_of_cur_int) {
          {
// # 366
          (lavg_array + (int )lavg_num)->l_until = line->cl_until + now;
          }
        } else {
          {
// # 368
          (lavg_array + (int )lavg_num)->l_until = end_of_cur_int;
// # 369
          line->cl_option[1] = (unsigned char )((int )line->cl_option[1] & -3);
          }
        }
      } else {
        {
// # 368
        (lavg_array + (int )lavg_num)->l_until = end_of_cur_int;
// # 369
        line->cl_option[1] = (unsigned char )((int )line->cl_option[1] & -3);
        }
      }
    } else {
      goto _L___0;
    }
  }
  {
// # 376
  lavg_num = (short )((int )lavg_num + 1);
  }
// # 377
  return;
}
}
// # 380
void wait_chld(void) 
{ short i ;
  int pid ;
  cl_t *line ;

  {
  {
// # 384
  i = (short )0;
// # 386
  line = (cl_t *)((void *)0);
  }
// # 393
  while (1) {
    {
// # 393
    pid = wait3((union wait *)((void *)0), 1, (struct rusage *)((void *)0));
    }
// # 393
    if (! (pid > 0)) {
// # 393
      break;
    }
    {
// # 394
    i = (short )0;
    }
// # 395
    while ((int )i < (int )exe_num) {
// # 396
      if (pid == (exe_array + (int )i)->e_ctrl_pid) {
// # 397
        if ((unsigned int )(exe_array + (int )i)->e_line ==
            (unsigned int )((void *)0)) {
// # 399
          if (debug_opt) {
            {
// # 399
            Debug("job finished: pid %d", pid);
            }
          }
        } else {
          {
// # 403
          line = (exe_array + (int )i)->e_line;
// # 405
          line->cl_numexe = (unsigned char )((int )line->cl_numexe - 1);
// # 406
          (line->cl_file)->cf_running = (line->cl_file)->cf_running - 1;
          }
// # 408
          if ((int )line->cl_option[0] & 64) {
            {
// # 409
            line->cl_option[0] = (unsigned char )((int )line->cl_option[0] & -65);
// # 410
            serial_running = (short )((int )serial_running - 1);
            }
// # 410
            if ((int )serial_running < (int )serial_max_running) {
              {
// # 411
              run_serial_job();
              }
            }
          } else {
// # 413
            if ((int )line->cl_option[0] & 32) {
// # 413
              if ((int )line->cl_option[0] & 2) {
                goto _L;
              } else {
                {
// # 415
                serial_running = (short )((int )serial_running - 1);
                }
// # 415
                if ((int )serial_running < (int )serial_max_running) {
                  {
// # 416
                  run_serial_job();
                  }
                }
              }
            } else {
              _L: 
// # 418
              if ((int )line->cl_option[0] & 2) {
// # 418
                if ((int )line->cl_option[0] & 32) {
                  {
// # 420
                  lavg_serial_running = (short )((int )lavg_serial_running - 1);
                  }
                }
              }
            }
          }
        }
        {
// # 422
        exe_num = (short )((int )exe_num - 1);
        }
// # 422
        if ((int )i < (int )exe_num) {
          {
// # 423
          (*(exe_array + (int )i)) = (*(exe_array + (int )exe_num));
// # 424
          (exe_array + (int )exe_num)->e_line = (struct cl_t *)((void *)0);
          }
        } else {
          {
// # 427
          (exe_array + (int )i)->e_line = (struct cl_t *)((void *)0);
          }
        }
// # 429
        break;
      }
      {
// # 431
      i = (short )((int )i + 1);
      }
    }
  }
// # 435
  return;
}
}
// # 438
void wait_all(int *counter ) 
{ short i ;
  int pid ;

  {
  {
// # 442
  i = (short )0;
  }
// # 445
  if (debug_opt) {
    {
// # 445
    Debug("Waiting for all jobs");
    }
  }
// # 447
  while (1) {
// # 447
    if ((*counter) > 0) {
      {
// # 447
      pid = wait3((union wait *)((void *)0), 0, (struct rusage *)((void *)0));
      }
// # 447
      if (! (pid > 0)) {
// # 447
        break;
      }
    } else {
// # 447
      break;
    }
    {
// # 448
    i = (short )0;
    }
// # 449
    while ((int )i < (int )exe_num) {
// # 450
      if (pid == (exe_array + (int )i)->e_ctrl_pid) {
// # 451
        if ((unsigned int )(exe_array + (int )i)->e_line ==
            (unsigned int )((void *)0)) {
// # 453
          if (debug_opt) {
            {
// # 453
            Debug("job finished: pid %d", pid);
            }
          }
        } else {
// # 457
          if (debug_opt) {
            {
// # 457
            Debug("job finished: %s", ((exe_array + (int )i)->e_line)->cl_shell);
            }
          }
          {
// # 458
          ((exe_array + (int )i)->e_line)->cl_numexe = (unsigned char )((int )((exe_array +
                                                                                (int )i)->e_line)->cl_numexe -
                                                                        1);
// # 459
          (((exe_array + (int )i)->e_line)->cl_file)->cf_running = (((exe_array +
                                                                      (int )i)->e_line)->cl_file)->cf_running -
                                                                   1;
          }
// # 461
          if ((int )((exe_array + (int )i)->e_line)->cl_option[0] & 64) {
            {
// # 462
            ((exe_array + (int )i)->e_line)->cl_option[0] = (unsigned char )((int )((exe_array +
                                                                                     (int )i)->e_line)->cl_option[0] &
                                                                             -65);
            }
          }
        }
        {
// # 465
        exe_num = (short )((int )exe_num - 1);
        }
// # 465
        if ((int )i < (int )exe_num) {
          {
// # 466
          (*(exe_array + (int )i)) = (*(exe_array + (int )exe_num));
// # 467
          (exe_array + (int )exe_num)->e_line = (struct cl_t *)((void *)0);
          }
        } else {
          {
// # 470
          (exe_array + (int )i)->e_line = (struct cl_t *)((void *)0);
          }
        }
// # 472
        break;
      }
      {
// # 474
      i = (short )((int )i + 1);
      }
    }
  }
// # 478
  return;
}
}
// # 481
int is_leap_year(int year ) 
{ int tmp ;

  {
// # 485
  if (year % 4 == 0) {
// # 485
    if (year % 100 != 0) {
      {
// # 485
      tmp = 1;
      }
    } else {
// # 485
      if (year % 400 == 0) {
        {
// # 485
        tmp = 1;
        }
      } else {
        {
// # 485
        tmp = 0;
        }
      }
    }
  } else {
    {
// # 485
    tmp = 0;
    }
  }
// # 485
  return (tmp);
}
}
// # 491
int get_nb_mdays(int year , int mon ) 
{ int tmp ;
  // # 495
  if (mon == 1) {
    // # 496
    tmp = is_leap_year(year);
    // # 496
    if (tmp) {
      // # 497
      return (29);
    } else {
      // # 499
      return (28);
    }
  } else {
    // # 501
    if (mon <= 6) {
      // # 502
      if (mon % 2 == 0) {
	// # 503
	return (31);
      } else {
	// # 505
	return (30);
      }
    } else {
      // # 506
      if (mon % 2 == 0) {
	// # 507
	return (30);
      } else {
	// # 509
	return (31);
      }
    }
  }  
}

// # 514
void set_wday(struct tm *date ) { 
  long nod ;
  int i ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int UNK;

  // # 520
  nod = 0/*L*/;
  // # 524
  i = date->tm_year - 1;
  // # 524
  while (i >= 100) {
    // # 525
    tmp___1 = is_leap_year(i + 1900);
    // # 525
    if (tmp___1) {
      // # 525
      tmp___0 = 366;
    } else {
      // # 525
      tmp___0 = 365;
    }
    // # 525
    nod = nod + (long )tmp___0;
    // # 524
    i = i-1;
  }
  // # 528
  i = date->tm_mon - 1;
  
  // # 528
  while (i >= 0) {
    // # 529
    tmp___2 = get_nb_mdays(date->tm_year + 1900, i);
    // # 529
    nod = nod + (long )tmp___2;
    // # 528
    i = i-1;
  }
  // # 532
  nod = nod + (long )(date->tm_mday - 1);
  // # 534
  date->tm_wday = UNK ; /* (int )(nod % 7/\*L*\/ + 6/\*L*\/); */
  // # 536
  if (date->tm_wday >= 7) {
    // # 537
    date->tm_wday = date->tm_wday - 7;
  }
  // # 539
  //  if (debug_opt) {
    // # 539
    /* 	Debug("   dow of %d-%d-%d : %d", date->tm_mon + 1, date->tm_mday, */
    /* 	      date->tm_year + 1900, date->tm_wday); */
  //  }
  // # 542
  return;
}


// # 547
/* void goto_non_matching(cl_t *line , struct tm *ftime , char option )  */
/* { struct tm next_period ; */
/*   int max ; */
/*   int tmp ; */
/*   struct tm ftime_initial ; */
/*   int to_add ; */
/*   int tmp___0 ; */
/*   int to_add___0 ; */
/*   int tmp___1 ; */
/*   short year_limit ; */
/*   char ignore_mins ; */
/*   int tmp___2 ; */
/*   char ignore_hrs ; */
/*   int tmp___3 ; */
/*   char ignore_days ; */
/*   int tmp___4 ; */
/*   char ignore_mons ; */
/*   int tmp___5 ; */
/*   char ignore_dow ; */
/*   int tmp___6 ; */
/*   int tmp___7 ; */
/*   char /\*const*\/   *tmp___8 ; */

/*   { */
/* // # 554 */
/*   if ((int )line->cl_option[2] & 4) { */
/*     { */
/* // # 555 */
/*     tmp = get_nb_mdays(ftime->tm_year, ftime->tm_mon); */
/* // # 555 */
/*     max = tmp; */
/*     } */
/* // # 558 */
/*     if ((int )option == 1) { */
/*       { */
/* // # 559 */
/*       memcpy((void *\/\* __restrict  *\/)((void *)(& ftime_initial)), */
/*              (void /\*const*\/   *\/\* __restrict  *\/)((void /\*const*\/   *)ftime), */
/*              sizeof(ftime_initial)); */
/*       } */
/*     } */
/* // # 561 */
/*     if ((int )line->cl_option[2] & 8) { */
/* // # 562 */
/*       if ((int )line->cl_option[1] & 32) { */
/* // # 564 */
/*         return; */
/*       } else { */
/* // # 565 */
/*         if ((int )line->cl_option[1] & 64) { */
/* // # 566 */
/*           if (ftime->tm_min >= 30) { */
/*             { */
/* // # 567 */
/*             ftime->tm_hour = ftime->tm_hour + 1; */
/*             } */
/*           } */
/*           { */
/* // # 568 */
/*           ftime->tm_min = 30; */
/*           } */
/*         } else { */
/*           { */
/* // # 570 */
/*           ftime->tm_min = 0; */
/*           } */
/* // # 571 */
/*           if ((int )line->cl_option[1] & 128) { */
/* // # 572 */
/*             if (ftime->tm_hour >= 12) { */
/*               { */
/* // # 573 */
/*               ftime->tm_mday = ftime->tm_mday + 1; */
/*               } */
/*             } */
/*             { */
/* // # 574 */
/*             ftime->tm_hour = 12; */
/*             } */
/*           } else { */
/*             { */
/* // # 576 */
/*             ftime->tm_hour = 0; */
/*             } */
/* // # 577 */
/*             if ((int )line->cl_option[2] & 2) { */
/* // # 578 */
/*               if (ftime->tm_wday >= 4) { */
/*                 { */
/* // # 578 */
/*                 tmp___0 = 11 - ftime->tm_wday; */
/*                 } */
/*               } else { */
/*                 { */
/* // # 578 */
/*                 tmp___0 = 4 - ftime->tm_wday; */
/*                 } */
/*               } */
/*               { */
/* // # 578 */
/*               to_add = tmp___0; */
/*               } */
/* // # 580 */
/*               if (ftime->tm_mday + to_add > max) { */
/*                 { */
/* // # 581 */
/*                 ftime->tm_mon = ftime->tm_mon + 1; */
/* // # 582 */
/*                 ftime->tm_mday = (ftime->tm_mday + to_add) - max; */
/*                 } */
/*               } else { */
/*                 { */
/* // # 584 */
/*                 ftime->tm_mday = ftime->tm_mday + to_add; */
/*                 } */
/*               } */
/*             } else { */
/* // # 586 */
/*               if ((int )line->cl_option[2] & 1) { */
/* // # 587 */
/*                 if (ftime->tm_mday >= 15) { */
/*                   { */
/* // # 588 */
/*                   ftime->tm_mon = ftime->tm_mon + 1; */
/*                   } */
/*                 } */
/*                 { */
/* // # 589 */
/*                 ftime->tm_mday = 15; */
/*                 } */
/*               } */
/*             } */
/*           } */
/*         } */
/*       } */
/*     } else { */
/* // # 601 */
/*       if ((int )line->cl_option[1] & 32) { */
/* // # 603 */
/*         return; */
/*       } else { */
/*         { */
/* // # 605 */
/*         ftime->tm_min = 0; */
/*         } */
/* // # 606 */
/*         if ((int )line->cl_option[1] & 64) { */
/*           { */
/* // # 607 */
/*           ftime->tm_hour = ftime->tm_hour + 1; */
/*           } */
/*         } else { */
/*           { */
/* // # 609 */
/*           ftime->tm_hour = 0; */
/*           } */
/* // # 610 */
/*           if ((int )line->cl_option[1] & 128) { */
/*             { */
/* // # 611 */
/*             ftime->tm_mday = ftime->tm_mday + 1; */
/*             } */
/*           } else { */
/* // # 613 */
/*             if ((int )line->cl_option[2] & 2) { */
/* // # 614 */
/*               if (ftime->tm_wday == 0) { */
/*                 { */
/* // # 614 */
/*                 tmp___1 = 1; */
/*                 } */
/*               } else { */
/*                 { */
/* // # 614 */
/*                 tmp___1 = 8 - ftime->tm_wday; */
/*                 } */
/*               } */
/*               { */
/* // # 614 */
/*               to_add___0 = tmp___1; */
/*               } */
/* // # 615 */
/*               if (ftime->tm_mday + to_add___0 > max) { */
/*                 { */
/* // # 616 */
/*                 ftime->tm_mday = (ftime->tm_mday + to_add___0) - max; */
/* // # 617 */
/*                 ftime->tm_mon = ftime->tm_mon + 1; */
/*                 } */
/*               } else { */
/*                 { */
/* // # 619 */
/*                 ftime->tm_mday = ftime->tm_mday + to_add___0; */
/*                 } */
/*               } */
/*             } else { */
/*               { */
/* // # 621 */
/*               ftime->tm_mday = 1; */
/*               } */
/* // # 622 */
/*               if ((int )line->cl_option[2] & 1) { */
/*                 { */
/* // # 623 */
/*                 ftime->tm_mon = ftime->tm_mon + 1; */
/*                 } */
/*               } */
/*             } */
/*           } */
/*         } */
/*       } */
/*     } */
/* // # 630 */
/*     if (ftime->tm_min >= 60) { */
/*       { */
/* // # 631 */
/*       ftime->tm_min = 0; */
/* // # 632 */
/*       ftime->tm_hour = ftime->tm_hour + 1; */
/*       } */
/*     } */
/* // # 634 */
/*     if (ftime->tm_hour >= 24) { */
/*       { */
/* // # 635 */
/*       ftime->tm_hour = 0; */
/* // # 636 */
/*       ftime->tm_mday = ftime->tm_mday + 1; */
/*       } */
/*     } */
/*     { */
/* // # 639 */
/*     max = get_nb_mdays(ftime->tm_year + 1900, ftime->tm_mon); */
/*     } */
/* // # 640 */
/*     if (ftime->tm_mday > max) { */
/*       { */
/* // # 641 */
/*       ftime->tm_mday = 1; */
/* // # 642 */
/*       ftime->tm_mon = ftime->tm_mon + 1; */
/*       } */
/*     } */
/* // # 644 */
/*     if (ftime->tm_mon >= 12) { */
/*       { */
/* // # 645 */
/*       ftime->tm_mon = 0; */
/* // # 646 */
/*       ftime->tm_year = ftime->tm_year + 1; */
/*       } */
/*     } */
/* // # 649 */
/*     if ((int )option != 1) { */
/* // # 650 */
/*       if (debug_opt) { */
/*         { */
/* // # 651 */
/*         set_wday(ftime); */
/*         } */
/*       } */
/* // # 652 */
/*       if (debug_opt) { */
/*         { */
/* // # 652 */
/*         Debug("   %s beginning of next period %d/%d/%d wday:%d %02d:%02d (tzdiff=%d)", */
/*               line->cl_shell, ftime->tm_mon + 1, ftime->tm_mday, */
/*               ftime->tm_year + 1900, ftime->tm_wday, ftime->tm_hour, */
/*               ftime->tm_min, (line->cl_file)->cf_tzdiff); */
/*         } */
/*       } */
/* // # 657 */
/*       return; */
/*     } else { */
/*       { */
/* // # 660 */
/*       memcpy((void *\/\* __restrict  *\/)((void *)(& next_period)), */
/*              (void /\*const*\/   *\/\* __restrict  *\/)((void /\*const*\/   *)ftime), */
/*              sizeof(next_period)); */
/* // # 662 */
/*       memcpy((void *\/\* __restrict  *\/)((void *)ftime), */
/*              (void /\*const*\/   *\/\* __restrict  *\/)((void /\*const*\/   *)(& ftime_initial)), */
/*              sizeof(ftime_initial)); */
/*       } */
/*     } */
/*   } */
/*   { */
/* // # 673 */
/*   year_limit = (short )10; */
/*   } */
/* // # 675 */
/*   if ((int )line->cl_option[1] & 32) { */
/*     { */
/* // # 675 */
/*     tmp___2 = 1; */
/*     } */
/*   } else { */
/*     { */
/* // # 675 */
/*     tmp___2 = 0; */
/*     } */
/*   } */
/*   { */
/* // # 675 */
/*   ignore_mins = (char )tmp___2; */
/*   } */
/* // # 676 */
/*   if ((int )line->cl_option[1] & 64) { */
/*     { */
/* // # 676 */
/*     tmp___3 = 1; */
/*     } */
/*   } else { */
/*     { */
/* // # 676 */
/*     tmp___3 = 0; */
/*     } */
/*   } */
/*   { */
/* // # 676 */
/*   ignore_hrs = (char )tmp___3; */
/*   } */
/* // # 677 */
/*   if ((int )line->cl_option[1] & 128) { */
/*     { */
/* // # 677 */
/*     tmp___4 = 1; */
/*     } */
/*   } else { */
/*     { */
/* // # 677 */
/*     tmp___4 = 0; */
/*     } */
/*   } */
/*   { */
/* // # 677 */
/*   ignore_days = (char )tmp___4; */
/*   } */
/* // # 678 */
/*   if ((int )line->cl_option[2] & 1) { */
/*     { */
/* // # 678 */
/*     tmp___5 = 1; */
/*     } */
/*   } else { */
/*     { */
/* // # 678 */
/*     tmp___5 = 0; */
/*     } */
/*   } */
/*   { */
/* // # 678 */
/*   ignore_mons = (char )tmp___5; */
/*   } */
/* // # 679 */
/*   if ((int )line->cl_option[2] & 2) { */
/*     { */
/* // # 679 */
/*     tmp___6 = 1; */
/*     } */
/*   } else { */
/*     { */
/* // # 679 */
/*     tmp___6 = 0; */
/*     } */
/*   } */
/*   { */
/* // # 679 */
/*   ignore_dow = (char )tmp___6; */
/*   } */
/* // # 681 */
/*   if ((int )option == 1) { */
/*     { */
/* // # 683 */
/*     ignore_dow = (char )0; */
/* // # 683 */
/*     ignore_mons = ignore_dow; */
/* // # 683 */
/*     ignore_days = ignore_mons; */
/* // # 683 */
/*     ignore_hrs = ignore_days; */
/* // # 683 */
/*     ignore_mins = ignore_hrs; */
/*     } */
/*   } */
/* // # 686 */
/*   if (debug_opt) { */
/*     { */
/* // # 686 */
/*     Debug("   ignore: %d %d %d %d %d", ignore_mins, ignore_hrs, ignore_days, */
/*           ignore_mons, ignore_dow); */
/*     } */
/*   } */
/* // # 691 */
/*   while (1) { */
/* // # 691 */
/*     if ((int )ignore_mins == 1) { */
/*       goto _L___5; */
/*     } else { */
/* // # 691 */
/*       if ((int )line->cl_mins[ftime->tm_min >> 3] & (1 << (ftime->tm_min & 7))) { */
/*         _L___5:  */
/* // # 691 */
/*         if ((int )ignore_hrs == 1) { */
/*           goto _L___4; */
/*         } else { */
/* // # 691 */
/*           if ((int )line->cl_hrs[ftime->tm_hour >> 3] & */
/*               (1 << (ftime->tm_hour & 7))) { */
/*             _L___4:  */
/* // # 691 */
/*             if ((int )line->cl_option[0] & 8) { */
/*               _L___2:  */
/* // # 691 */
/*               if ((int )line->cl_option[0] & 8) { */
/* // # 691 */
/*                 if ((int )ignore_days == 1) { */
/*                   goto _L___0; */
/*                 } else { */
/* // # 691 */
/*                   if ((int )line->cl_days[ftime->tm_mday >> 3] & */
/*                       (1 << (ftime->tm_mday & 7))) { */
/*                     goto _L___0; */
/*                   } else { */
/* // # 691 */
/*                     if ((int )ignore_dow == 1) { */
/*                       goto _L___0; */
/*                     } else { */
/* // # 691 */
/*                       if ((int )line->cl_dow[ftime->tm_wday >> 3] & */
/*                           (1 << (ftime->tm_wday & 7))) { */
/*                         _L___0:  */
/* // # 691 */
/*                         if (! ((int )ignore_mons == 1)) { */
/* // # 691 */
/*                           if (! ((int )line->cl_mons[ftime->tm_mon >> 3] & */
/*                                  (1 << (ftime->tm_mon & 7)))) { */
/* // # 691 */
/*                             break; */
/*                           } */
/*                         } */
/*                       } else { */
/* // # 691 */
/*                         break; */
/*                       } */
/*                     } */
/*                   } */
/*                 } */
/*               } else { */
/* // # 691 */
/*                 break; */
/*               } */
/*             } else { */
/* // # 691 */
/*               if ((int )ignore_days == 1) { */
/*                 goto _L___3; */
/*               } else { */
/* // # 691 */
/*                 if ((int )line->cl_days[ftime->tm_mday >> 3] & */
/*                     (1 << (ftime->tm_mday & 7))) { */
/*                   _L___3:  */
/* // # 691 */
/*                   if ((int )ignore_dow == 1) { */
/*                     goto _L___0; */
/*                   } else { */
/* // # 691 */
/*                     if ((int )line->cl_dow[ftime->tm_wday >> 3] & */
/*                         (1 << (ftime->tm_wday & 7))) { */
/*                       goto _L___0; */
/*                     } else { */
/*                       goto _L___2; */
/*                     } */
/*                   } */
/*                 } else { */
/*                   goto _L___2; */
/*                 } */
/*               } */
/*             } */
/*           } else { */
/* // # 691 */
/*             break; */
/*           } */
/*         } */
/*       } else { */
/* // # 691 */
/*         break; */
/*       } */
/*     } */
/* // # 705 */
/*     if (ignore_mins) { */
/*       { */
/* // # 705 */
/*       ftime->tm_min = 60; */
/*       } */
/*     } else { */
/* // # 707 */
/*       while (1) { */
/*         { */
/* // # 707 */
/*         ftime->tm_min = ftime->tm_min + 1; */
/*         } */
/* // # 707 */
/*         if ((int )line->cl_mins[ftime->tm_min >> 3] & (1 << (ftime->tm_min & 7))) { */
/* // # 707 */
/*           if (! (ftime->tm_min < 60)) { */
/* // # 707 */
/*             break; */
/*           } */
/*         } else { */
/* // # 707 */
/*           break; */
/*         } */
/*       } */
/*     } */
/* // # 711 */
/*     if (ftime->tm_min >= 60) { */
/*       { */
/* // # 712 */
/*       ftime->tm_min = 0; */
/*       } */
/* // # 713 */
/*       if (ignore_hrs) { */
/* // # 713 */
/*         if (ignore_mins) { */
/*           { */
/* // # 713 */
/*           ftime->tm_hour = 24; */
/*           } */
/*         } else { */
/*           { */
/* // # 714 */
/*           ftime->tm_hour = ftime->tm_hour + 1; */
/*           } */
/*         } */
/*       } else { */
/*         { */
/* // # 714 */
/*         ftime->tm_hour = ftime->tm_hour + 1; */
/*         } */
/*       } */
/* // # 715 */
/*       if (ftime->tm_hour >= 24) { */
/*         { */
/* // # 716 */
/*         ftime->tm_hour = 0; */
/*         } */
/* // # 717 */
/*         if (ignore_days) { */
/* // # 717 */
/*           if (ignore_hrs) { */
/* // # 717 */
/*             if (ignore_mins) { */
/* // # 717 */
/*               if (ignore_dow) { */
/*                 { */
/* // # 718 */
/*                 ftime->tm_mday = 32; */
/*                 } */
/*               } else { */
/*                 { */
/* // # 719 */
/*                 ftime->tm_mday = ftime->tm_mday + 1; */
/*                 } */
/*               } */
/*             } else { */
/*               { */
/* // # 719 */
/*               ftime->tm_mday = ftime->tm_mday + 1; */
/*               } */
/*             } */
/*           } else { */
/*             { */
/* // # 719 */
/*             ftime->tm_mday = ftime->tm_mday + 1; */
/*             } */
/*           } */
/*         } else { */
/*           { */
/* // # 719 */
/*           ftime->tm_mday = ftime->tm_mday + 1; */
/*           } */
/*         } */
/*         { */
/* // # 720 */
/*         tmp___7 = get_nb_mdays(ftime->tm_year + 1900, ftime->tm_mon); */
/*         } */
/* // # 720 */
/*         if (ftime->tm_mday > tmp___7) { */
/*           { */
/* // # 722 */
/*           ftime->tm_mday = 1; */
/*           } */
/* // # 723 */
/*           if (ignore_mons) { */
/* // # 723 */
/*             if (ignore_days) { */
/* // # 723 */
/*               if (ignore_dow) { */
/* // # 723 */
/*                 if (ignore_hrs) { */
/* // # 723 */
/*                   if (ignore_mins) { */
/*                     { */
/* // # 725 */
/*                     ftime->tm_mon = 12; */
/*                     } */
/*                   } else { */
/*                     { */
/* // # 726 */
/*                     ftime->tm_mon = ftime->tm_mon + 1; */
/*                     } */
/*                   } */
/*                 } else { */
/*                   { */
/* // # 726 */
/*                   ftime->tm_mon = ftime->tm_mon + 1; */
/*                   } */
/*                 } */
/*               } else { */
/*                 { */
/* // # 726 */
/*                 ftime->tm_mon = ftime->tm_mon + 1; */
/*                 } */
/*               } */
/*             } else { */
/*               { */
/* // # 726 */
/*               ftime->tm_mon = ftime->tm_mon + 1; */
/*               } */
/*             } */
/*           } else { */
/*             { */
/* // # 726 */
/*             ftime->tm_mon = ftime->tm_mon + 1; */
/*             } */
/*           } */
/* // # 727 */
/*           if (ftime->tm_mon >= 12) { */
/*             { */
/* // # 728 */
/*             ftime->tm_mon = 0; */
/* // # 729 */
/*             ftime->tm_year = ftime->tm_year + 1; */
/* // # 730 */
/*             year_limit = (short )((int )year_limit - 1); */
/*             } */
/* // # 730 */
/*             if ((int )year_limit <= 0) { */
/*               { */
/* // # 731 */
/*               error("Can\'t found a non matching date for %s in the next %d years. Maybe this line is corrupted : consider reinstalling the fcrontab", */
/*                     line->cl_shell, 10); */
/*               } */
/* // # 736 */
/*               return; */
/*             } */
/*           } */
/*         } */
/*         { */
/* // # 740 */
/*         set_wday(ftime); */
/*         } */
/*       } */
/*     } */
/* // # 744 */
/*     if ((int )option == 1) { */
/* // # 744 */
/*       if ((int )line->cl_option[2] & 4) { */
/* // # 744 */
/*         if (ftime->tm_year <= next_period.tm_year) { */
/* // # 744 */
/*           if (ftime->tm_mon <= next_period.tm_mon) { */
/* // # 744 */
/*             if (ftime->tm_mday <= next_period.tm_mday) { */
/* // # 744 */
/*               if (ftime->tm_hour <= next_period.tm_hour) { */
/* // # 744 */
/*                 if (ftime->tm_min <= next_period.tm_min) { */
/*                   { */
/* // # 752 */
/*                   memcpy((void *\/\* __restrict  *\/)((void *)ftime), */
/*                          (void /\*const*\/   *\/\* __restrict  *\/)((void /\*const*\/   *)(& next_period)), */
/*                          sizeof(next_period)); */
/*                   } */
/* // # 753 */
/*                   break; */
/*                 } */
/*               } */
/*             } */
/*           } */
/*         } */
/*       } */
/*     } */
/*   } */
/* // # 757 */
/*   if ((int )option == 1) { */
/*     { */
/* // # 760 */
/*     ftime->tm_min = ftime->tm_min - 1; */
/*     } */
/* // # 760 */
/*     if (ftime->tm_min < 0) { */
/*       { */
/* // # 761 */
/*       ftime->tm_min = 59; */
/* // # 762 */
/*       ftime->tm_hour = ftime->tm_hour - 1; */
/*       } */
/* // # 762 */
/*       if (ftime->tm_hour < 0) { */
/*         { */
/* // # 763 */
/*         ftime->tm_hour = 23; */
/* // # 764 */
/*         ftime->tm_mday = ftime->tm_mday - 1; */
/*         } */
/* // # 764 */
/*         if (ftime->tm_mday < 1) { */
/*           { */
/* // # 765 */
/*           ftime->tm_mon = ftime->tm_mon - 1; */
/*           } */
/* // # 765 */
/*           if (ftime->tm_mon < 0) { */
/*             { */
/* // # 766 */
/*             ftime->tm_mon = 11; */
/* // # 767 */
/*             ftime->tm_year = ftime->tm_year - 1; */
/*             } */
/*           } */
/*           { */
/* // # 769 */
/*           ftime->tm_mday = get_nb_mdays(ftime->tm_year + 1900, ftime->tm_mon); */
/*           } */
/*         } */
/*       } */
/*     } */
/*   } */
/* // # 776 */
/*   if (debug_opt) { */
/* // # 776 */
/*     if ((int )option == 0) { */
/*       { */
/* // # 776 */
/*       tmp___8 = (char /\*const*\/   *)"first non matching"; */
/*       } */
/*     } else { */
/*       { */
/* // # 776 */
/*       tmp___8 = (char /\*const*\/   *)"end of interval"; */
/*       } */
/*     } */
/*     { */
/* // # 776 */
/*     Debug("   %s %s %d/%d/%d wday:%d %02d:%02d (tzdiff=%d)", line->cl_shell, */
/*           tmp___8, ftime->tm_mon + 1, ftime->tm_mday, ftime->tm_year + 1900, */
/*           ftime->tm_wday, ftime->tm_hour, ftime->tm_min, */
/*           (line->cl_file)->cf_tzdiff); */
/*     } */
/*   } */
/* // # 781 */
/*   return; */
/* } */
/* } */


// # 786
void set_next_exe(struct cl_t *line , char option , int info_fd ) 
{ time_t basetime ;
  struct tm *ft ;
  struct tm ftime ;
  time_t nextexe ;
  int i ;
  int max ;
  char has_changed ;
  short year_limit ;
  time_t basetime_tz ;
  int j ;
  struct tm intend ;
  time_t intend_int ;
  long tmp___0 ;
  int tmp___1 ;

  {
// # 795
  if ((int )option & 4) {
    {
// # 795
    basetime = line->cl_nextexe;
    }
  } else {
    {
// # 795
    basetime = now;
    }
  }
// # 797
  if ((int )line->cl_option[0] & 1) {
    {
// # 1015
    line->cl_nextexe = basetime + line->cl_timefreq;
// # 1017
    ft = localtime((time_t /*const*/   *)(& line->cl_nextexe));
// # 1022
    memcpy((void */* __restrict  */)((void *)(& ftime)),
           (void /*const*/   */* __restrict  */)((void /*const*/   *)ft),
           sizeof(struct tm ));
// # 1024
    send_msg_fd_debug(info_fd,
                      "   cmd: %s next exec %d/%d/%d wday:%d %02d:%02d (system time)",
                      line->cl_shell, ftime.tm_mon + 1, ftime.tm_mday,
                      ftime.tm_year + 1900, ftime.tm_wday, ftime.tm_hour,
                      ftime.tm_min);
    }
  } else {
    {
// # 799
    nextexe = (long )0;
// # 802
    has_changed = (char )0;
// # 804
    year_limit = (short )10;
// # 806
    basetime_tz = basetime - (long )((int )(line->cl_file)->cf_tzdiff * 3600);
// # 808
    ft = localtime((time_t /*const*/   *)(& basetime_tz));
// # 813
    memcpy((void */* __restrict  */)((void *)(& ftime)),
           (void /*const*/   */* __restrict  */)((void /*const*/   *)ft),
           sizeof(struct tm ));
    }
// # 820
    if (first_sleep > 0L) {
      {
// # 821
      ftime.tm_min = ftime.tm_min + 1;
// # 822
      ftime.tm_sec = 0;
      }
    } else {
// # 820
      if ((int )option == 0) {
        {
// # 821
        ftime.tm_min = ftime.tm_min + 1;
// # 822
        ftime.tm_sec = 0;
        }
      } else {
// # 820
        if ((int )line->cl_runfreq != 1) {
          {
// # 821
          ftime.tm_min = ftime.tm_min + 1;
// # 822
          ftime.tm_sec = 0;
          }
        }
      }
    }
// # 825
    if ((int )line->cl_runfreq == 1) {
// # 825
      if ((int )option != 1) {
// # 825
        if ((int )option != 2) {
          {
// # 826
/* Need to check it's irrelevant to safety */
//          goto_non_matching(line, & ftime, (char )0);
          }
        }
      }
    }
    setMonth: 
    {
// # 829
    i = ftime.tm_mon;
    }
// # 829
    while (1) {
// # 829
      if (((int )line->cl_mons[i >> 3] & (1 << (i & 7))) == 0) {
// # 829
        if (! (i < 12)) {
// # 829
          break;
        }
      } else {
// # 829
        break;
      }
      {
// # 829
      i ++;
      }
    }
// # 830
    if (i >= 12) {
      {
// # 831
      ftime.tm_year = ftime.tm_year + 1;
// # 832
      year_limit = (short )((int )year_limit - 1);
      }
// # 832
      if ((int )year_limit <= 0) {
        {
// # 833
        error("Can\'t found a matching date for %s in the next %d years. Maybe this line is corrupted : consider reinstalling the fcrontab.",
              line->cl_shell, 10);
        }
        goto set_cl_nextexe;
      }
// # 839
      if ((int )has_changed < 3) {
        {
// # 840
        has_changed = (char )3;
// # 841
        ftime.tm_mon = 0;
// # 842
        ftime.tm_mday = 1;
// # 843
        ftime.tm_hour = 0;
// # 844
        ftime.tm_min = 0;
        }
      } else {
        {
// # 846
        ftime.tm_mon = 0;
        }
      }
      goto setMonth;
    }
// # 849
    if (ftime.tm_mon != i) {
      {
// # 850
      ftime.tm_mon = i;
      }
// # 851
      if ((int )has_changed < 2) {
        {
// # 852
        has_changed = (char )2;
// # 853
        ftime.tm_mday = 1;
// # 854
        ftime.tm_hour = 0;
// # 855
        ftime.tm_min = 0;
        }
      }
    }
    {
// # 860
    max = get_nb_mdays(ftime.tm_year + 1900, ftime.tm_mon);
    }
    setDay: 
// # 863
    if ((int )line->cl_option[0] & 8) {
      {
// # 898
      set_wday(& ftime);
// # 900
      j = ftime.tm_wday;
// # 901
      i = ftime.tm_mday;
      }
// # 902
      while (1) {
// # 902
        if (((int )line->cl_days[i >> 3] & (1 << (i & 7))) == 0) {
// # 902
          if (! (((int )line->cl_dow[j >> 3] & (1 << (j & 7))) == 0)) {
// # 902
            break;
          }
        } else {
// # 902
          break;
        }
// # 904
        if (i > max) {
          {
// # 905
          ftime.tm_mon = ftime.tm_mon + 1;
          }
// # 906
          if ((int )has_changed < 2) {
            {
// # 907
            has_changed = (char )2;
// # 908
            ftime.tm_mday = 1;
// # 909
            ftime.tm_hour = 0;
// # 910
            ftime.tm_min = 0;
            }
          } else {
            {
// # 912
            ftime.tm_mday = 1;
            }
          }
          goto setMonth;
        }
// # 915
        if (j >= 7) {
          {
// # 916
          j -= 7;
          }
        }
        {
// # 917
        i ++;
// # 918
        j ++;
        }
      }
// # 920
      if (ftime.tm_mday != i) {
        {
// # 921
        ftime.tm_mday = i;
        }
// # 922
        if ((int )has_changed < 1) {
          {
// # 923
          has_changed = (char )1;
// # 924
          ftime.tm_hour = 0;
// # 925
          ftime.tm_min = 0;
          }
        }
      }
    } else {
      {
// # 864
      i = ftime.tm_mday;
      }
// # 864
      while (1) {
// # 864
        if (((int )line->cl_days[i >> 3] & (1 << (i & 7))) == 0) {
// # 864
          if (! (i <= max)) {
// # 864
            break;
          }
        } else {
// # 864
          break;
        }
        {
// # 864
        i ++;
        }
      }
// # 866
      if (i > max) {
        {
// # 867
        ftime.tm_mon = ftime.tm_mon + 1;
        }
// # 868
        if ((int )has_changed < 2) {
          {
// # 869
          has_changed = (char )2;
// # 870
          ftime.tm_mday = 1;
// # 871
          ftime.tm_hour = 0;
// # 872
          ftime.tm_min = 0;
          }
        } else {
          {
// # 874
          ftime.tm_mday = 1;
          }
        }
        goto setMonth;
      }
// # 877
      if (ftime.tm_mday != i) {
        {
// # 878
        ftime.tm_mday = i;
        }
// # 879
        if ((int )has_changed < 1) {
          {
// # 880
          has_changed = (char )1;
// # 881
          ftime.tm_hour = 0;
// # 882
          ftime.tm_min = 0;
          }
        }
      }
      {
// # 886
      set_wday(& ftime);
      }
// # 889
      if (((int )line->cl_dow[ftime.tm_wday >> 3] & (1 << (ftime.tm_wday & 7))) ==
          0) {
        {
// # 890
        ftime.tm_mday = ftime.tm_mday + 1;
// # 891
        ftime.tm_hour = 0;
// # 892
        ftime.tm_min = 0;
        }
        goto setDay;
      }
    }
    setHour: 
    {
// # 931
    i = ftime.tm_hour;
    }
// # 931
    while (1) {
// # 931
      if (((int )line->cl_hrs[i >> 3] & (1 << (i & 7))) == 0) {
// # 931
        if (! (i < 24)) {
// # 931
          break;
        }
      } else {
// # 931
        break;
      }
      {
// # 931
      i ++;
      }
    }
// # 932
    if (i >= 24) {
      {
// # 933
      ftime.tm_mday = ftime.tm_mday + 1;
      }
// # 934
      if ((int )has_changed < 1) {
        {
// # 935
        has_changed = (char )1;
// # 936
        ftime.tm_hour = 0;
// # 937
        ftime.tm_min = 0;
        }
      } else {
        {
// # 939
        ftime.tm_hour = 0;
        }
      }
      goto setDay;
    }
// # 942
    if (ftime.tm_hour != i) {
      {
// # 943
      ftime.tm_hour = i;
// # 944
      ftime.tm_min = 0;
      }
    }
    {
// # 948
    i = ftime.tm_min;
    }
// # 948
    while (1) {
// # 948
      if (((int )line->cl_mins[i >> 3] & (1 << (i & 7))) == 0) {
// # 948
        if (! (i < 60)) {
// # 948
          break;
        }
      } else {
// # 948
        break;
      }
      {
// # 948
      i ++;
      }
    }
// # 949
    if (i >= 60) {
      {
// # 950
      ftime.tm_hour = ftime.tm_hour + 1;
// # 951
      ftime.tm_min = 0;
      }
      goto setHour;
    }
    {
// # 954
    ftime.tm_min = i;
    }
    set_cl_nextexe: 
    {
// # 958
    nextexe = mktime(& ftime);
    }
// # 960
    if ((int )line->cl_option[2] & 128) {
// # 965
      if (debug_opt) {
        {
// # 965
        Debug("   cmd: %s begin int exec %d/%d/%d wday:%d %02d:%02d (tzdiff=%d)",
              line->cl_shell, ftime.tm_mon + 1, ftime.tm_mday,
              ftime.tm_year + 1900, ftime.tm_wday, ftime.tm_hour, ftime.tm_min,
              (line->cl_file)->cf_tzdiff);
        }
      }
      {
// # 970
      memcpy((void */* __restrict  */)((void *)(& intend)),
             (void /*const*/   */* __restrict  */)((void /*const*/   *)(& ftime)),
             sizeof(intend));
// # 971
/* Need to check it's irrelevant to safety */
//      goto_non_matching(line, & intend, (char )1);
// # 972
      intend_int = mktime(& intend);
// # 975
      i = (int )(intend_int - nextexe);
      }
// # 975
      if (i > 0) {
        {
// # 975
        tmp___1 = rand();
// # 975
        tmp___0 = (long )(((float )i * (float )tmp___1) / (float )2147483647);
        }
      } else {
        {
// # 975
        tmp___0 = 0L;
        }
      }
      {
// # 975
      nextexe += tmp___0;
      }
    }
    {
// # 979
    line->cl_nextexe = nextexe +
                       (long )((int )(line->cl_file)->cf_tzdiff * 3600);
    }
// # 981
    if ((int )option != 1) {
// # 982
      if ((int )line->cl_option[2] & 128) {
        {
// # 983
        ft = localtime((time_t /*const*/   *)(& nextexe));
// # 984
        memcpy((void */* __restrict  */)((void *)(& ftime)),
               (void /*const*/   */* __restrict  */)((void /*const*/   *)ft),
               sizeof(ftime));
        }
      }
      {
// # 986
      send_msg_fd_debug(info_fd,
                        "   cmd: %s next exec %d/%d/%d wday:%d %02d:%02d (tzdiff=%d w/ sys time)",
                        line->cl_shell, ftime.tm_mon + 1, ftime.tm_mday,
                        ftime.tm_year + 1900, ftime.tm_wday, ftime.tm_hour,
                        ftime.tm_min, (line->cl_file)->cf_tzdiff);
      }
    }
// # 1004
    if (line->cl_nextexe <= now) {
      {
// # 1005
      error("BUG ??? Fcron thinks the next exe time of %s is %ld, hence before now (%ld). To avoid infinite loop, nextexe will be set at now+5s.");
// # 1008
      line->cl_nextexe = now + 5L;
      }
    }
  }
  {
// # 1030
  insert_nextexe(line);
  }
// # 1032
  return;
}
}
// # 1035
void set_next_exe_notrun(struct cl_t *line , char context ) { 

  time_t previous_period ;
  time_t next_period ;
  struct tm *ft ;
  struct tm ftime ;
  struct tm last_nextexe ;
  char set_next_exe_opt ;
  time_t tmp ;
  
  // # 1040
  previous_period = (long )0;
  // # 1040
  next_period = (long )0;
  // # 1041
  ft = (struct tm *)((void *)0);
  // # 1043
  set_next_exe_opt = (char )0;

  // # 1046
/*   if (debug_opt) { */
/*     { */
/*       // # 1046 */
/*       Debug("  set_next_exe_notrun : %s %d", line->cl_shell, context); */
/*     } */
/*   } */
// # 1049
  if ((int )context == 2) {
    // # 1051
    previous_period = line->cl_nextexe - (long )((int )(line->cl_file)->cf_tzdiff * 3600);
      
    // # 1052
    set_next_exe_opt = (char )1;
  } else {    
    // # 1055
    previous_period = now - (long )((int )(line->cl_file)->cf_tzdiff * 3600);
    // # 1056
    set_next_exe_opt = (char ) 2;    
  }

  // # 1058
  ft = localtime((time_t /*const*/   *)(& previous_period));
  // # 1063
  memcpy((void */* __restrict  */)((void *)(& ftime)),
         (void /*const*/   */* __restrict  */)((void /*const*/   *)ft), sizeof(ftime));
  // # 1065
  memcpy((void */* __restrict  */)((void *)(& last_nextexe)),
         (void /*const*/   */* __restrict  */)((void /*const*/   *)ft),
         sizeof(last_nextexe));
  // # 1067
  ftime.tm_sec = 0;
  // # 1068
  /* Need to check it's irrelevant to safety */
  //  goto_non_matching(line, & ftime, (char )0);
  // # 1069
  tmp = mktime(& ftime);
  // # 1069
  next_period = tmp + (long )((int )(line->cl_file)->cf_tzdiff * 3600);
  // # 1071
  set_next_exe(line, set_next_exe_opt, -1);

  // # 1072
  if (line->cl_nextexe >= next_period) {
    // # 1074
    mail_notrun(line, context, & last_nextexe);
  }
  // # 1077
  return;
}

// # 1079
void mail_notrun(struct cl_t *line , char context , struct tm *since ) { 

  int pid ;
  FILE *mailf ;
  struct tm *time2 ;
  struct tm time___0 ;
  int tmp ;

  // # 1083
  pid = 0;
  // # 1084
  mailf = (FILE *)0;
  // # 1085
  time2 = (struct tm *)((void *)0);
  // # 1087
  pid = fork();
 
  // # 1087
  switch (pid) {
  case -1 :
    {
      // # 1089
      error_e("Fork error : could not mail for not run %s", line->cl_shell);
      // # 1090
      return;
    }
  case 0: 
    {
      // # 1093
      break;
    }
  default: 
    {
      // # 1098
      /*     if (debug_opt) { */
      /*       { */
      /* 	// # 1098 */
      /* 	Debug("Reporting by mail non execution of %s (pid %d)", line->cl_shell, pid); */
      /*       } */
      /*     } */
      // # 1103
      if ((int )exe_num >= (int )exe_array_size) {
	// # 1104
	resize_exe_array();
      }
      // # 1106
      (exe_array + (int )exe_num)->e_line = (struct cl_t *)((void *)0);
      // # 1107
      (exe_array + (int )exe_num)->e_ctrl_pid = pid;
      // # 1108
      exe_num = (short )((int )exe_num + 1);
      // # 1109
      return;
    }
  }
  // # 1112
  if ((int )context == 3) {
    // # 1113
    time2 = localtime((time_t /*const*/   *)(& now));
  } else {
    // # 1115
    time2 = localtime((time_t /*const*/   *)(& line->cl_nextexe));
  }
  // # 1116
  memcpy((void */* __restrict  */)((void *)(& time___0)),
         (void /*const*/   */* __restrict  */)((void /*const*/   *)time2),
         sizeof(time___0));
  // # 1119
  mailf = create_mail(line, "Non-execution of fcron job");
  
  // # 1121
  switch ((int )context) {
  case 2: 
    {
      // # 1123
      fprintf((FILE */* __restrict  */)mailf,
	      (char /*const*/   */* __restrict  */)((char /*const*/   *)"Line %s has not run since and including %d/%d/%d wday:%d %02d:%02d\ndue to system\'s down state.\n"),
	      line->cl_shell, since->tm_mon + 1, since->tm_mday,
	      since->tm_year + 1900, since->tm_wday, since->tm_hour, since->tm_min);
      // # 1128
      fprintf((FILE */* __restrict  */)mailf,
	      (char /*const*/   */* __restrict  */)((char /*const*/   *)"It will be next executed at %d/%d/%d wday:%d %02d:%02d\n"),
	      time___0.tm_mon + 1, time___0.tm_mday, time___0.tm_year + 1900,
	      time___0.tm_wday, time___0.tm_hour, time___0.tm_min);
    }
    // # 1131
    break;
  case 1: 
    {
      // # 1133
      fprintf((FILE */* __restrict  */)mailf,
	      (char /*const*/   */* __restrict  */)((char /*const*/   *)"Line %s has not run since and including %d/%d/%d wday:%d %02d:%02d\n"),
	      line->cl_shell, since->tm_mon + 1, since->tm_mday,
	      since->tm_year + 1900, since->tm_wday, since->tm_hour, since->tm_min);
      // # 56 "spec.work"
      if (! (mailf->BLAST_FLAG == 1)) {
	// # 58
	BLAST_ERROR();
      }      
      // # 1137 "database.c"
      fprintf((FILE */* __restrict  */)mailf,
	      (char /*const*/   */* __restrict  */)((char /*const*/   *)"due to a too high system load average or too many lavg-serial jobs.\n"));
      // # 1139
      fprintf((FILE */* __restrict  */)mailf,
	      (char /*const*/   */* __restrict  */)((char /*const*/   *)"It will be next executed at %d/%d/%d wday:%d %02d:%02d\n"),
	      time___0.tm_mon + 1, time___0.tm_mday, time___0.tm_year + 1900,
	      time___0.tm_wday, time___0.tm_hour, time___0.tm_min);
    }
    // # 1142
    break;
  case 3: 
    {
      // # 1144
      fprintf((FILE */* __restrict  */)mailf,
	      (char /*const*/   */* __restrict  */)((char /*const*/   *)"Line %s couldn\'t be added to lavg or serial queue which is full ( %d/%d/%d wday:%d %02d:%02d ).\n"),
	      line->cl_shell, time___0.tm_mon + 1, time___0.tm_mday,
	      time___0.tm_year + 1900, time___0.tm_wday, time___0.tm_hour,
	      time___0.tm_min);
      // # 56 "spec.work"
      if (! (mailf->BLAST_FLAG == 1)) {
	// # 58
	BLAST_ERROR();
      }
      // # 1148 "database.c"
      fprintf((FILE */* __restrict  */)mailf,
	      (char /*const*/   */* __restrict  */)((char /*const*/   *)"Consider using options lavgonce, until, strict, serialonce and/or fcron\'s option -m.\n"));
	// # 64 "spec.work"
	if (! (mailf->BLAST_FLAG == 1)) {
	  // # 66
	  BLAST_ERROR();
	}
      // # 1150 "database.c"
	fprintf((FILE */* __restrict  */)mailf,
		(char /*const*/   */* __restrict  */)((char /*const*/   *)"Note that job %s has not run.\n"),
		line->cl_shell);
    }
    // # 1151
    break;
  }

  // # 1155
  tmp = change_user(line);
  // # 1155
  if (tmp < 0) {
    // # 1156
    return;
  }
  // # 1159
  launch_mailer(line, mailf);
  // # 1162
  error("mail_notrun : launch_mailer failed");
  // # 1162
  return;
}


// # 1166
time_t check_lavg(time_t lim ) 
{ time_t tts ;
  int i ;
  double l_avg[3] ;
  char /*const*/   *tmp ;
  time_t tmp___0 ;

  {
  {
// # 1171
  tts = (long )0;
// # 1181
  i = 0;
// # 1182
  l_avg[0] = (double )0;
// # 1182
  l_avg[1] = (double )0;
// # 1182
  l_avg[2] = (double )0;
  }
// # 1185
  while (i < (int )lavg_num) {
// # 1186
    if (((lavg_array + i)->l_line)->cl_until > 0L) {
      goto _L;
    } else {
// # 1186
      if ((int )((lavg_array + i)->l_line)->cl_runfreq == 1) {
        _L: 
// # 1186
        if ((lavg_array + i)->l_until < now) {
// # 1189
          if ((int )((lavg_array + i)->l_line)->cl_option[1] & 2) {
// # 1212
            if (debug_opt) {
              {
// # 1212
              Debug("until %s %d", ((lavg_array + i)->l_line)->cl_shell,
                    (lavg_array + i)->l_until);
              }
            }
            {
// # 1214
            run_lavg_job(i);
            }
          } else {
// # 1190
            if (! ((int )((lavg_array + i)->l_line)->cl_option[2] & 64)) {
              {
// # 1191
              explain("Interval of execution exceeded : %s (not run)",
                      ((lavg_array + i)->l_line)->cl_shell);
              }
            }
// # 1195
            if ((int )((lavg_array + i)->l_line)->cl_option[0] & 1) {
              {
// # 1199
              set_next_exe((lavg_array + i)->l_line, (char )2, -1);
              }
            } else {
// # 1195
              if ((int )((lavg_array + i)->l_line)->cl_option[2] & 32) {
                {
// # 1197
                set_next_exe_notrun((lavg_array + i)->l_line, (char )1);
                }
              } else {
                {
// # 1199
                set_next_exe((lavg_array + i)->l_line, (char )2, -1);
                }
              }
            }
            {
// # 1202
            ((lavg_array + i)->l_line)->cl_numexe = (unsigned char )((int )((lavg_array +
                                                                             i)->l_line)->cl_numexe -
                                                                     1);
// # 1203
            lavg_num = (short )((int )lavg_num - 1);
            }
// # 1203
            if (i < (int )lavg_num) {
              {
// # 1204
              (*(lavg_array + i)) = (*(lavg_array + (int )lavg_num));
// # 1205
              (lavg_array + (int )lavg_num)->l_line = (struct cl_t *)((void *)0);
              }
            } else {
              {
// # 1208
              (lavg_array + i)->l_line = (struct cl_t *)((void *)0);
              }
            }
          }
        } else {
          {
// # 1217
          i ++;
          }
        }
      } else {
        {
// # 1217
        i ++;
        }
      }
    }
  }
  {
// # 1220
  tts = time_to_sleep(lim);
  }
// # 1222
  if ((int )lavg_num == 0) {
// # 1223
    return (tts);
  }
  {
// # 1225
  i = getloadavg(l_avg, 3);
  }
// # 1225
  if (i != 3) {
// # 1226
    if (debug_opt) {
      {
// # 1226
      Debug("got only %d lavg values", i);
      }
    }
  }
// # 1227
  if (debug_opt) {
    {
// # 1227
    Debug("get_lavg: %lf, %lf, %lf", l_avg[0], l_avg[1], l_avg[2]);
    }
  }
  {
// # 1229
  l_avg[0] *= (double )10;
// # 1230
  l_avg[1] *= (double )10;
// # 1231
  l_avg[2] *= (double )10;
// # 1232
  i = 0;
  }
// # 1233
  while (i < (int )lavg_num) {
// # 1235
    if ((int )lavg_serial_running >= (int )serial_max_running) {
// # 1235
      if ((int )((lavg_array + i)->l_line)->cl_option[0] & 32) {
        {
// # 1237
        i ++;
        }
// # 1238
        continue;
      }
    }
// # 1240
    if ((int )((lavg_array + i)->l_line)->cl_option[0] & 4) {
      _L___5: 
// # 1240
      if ((int )((lavg_array + i)->l_line)->cl_option[0] & 4) {
// # 1240
        if (l_avg[0] < (double )((lavg_array + i)->l_line)->cl_lavg[0]) {
          goto _L___1;
        } else {
// # 1240
          if (l_avg[1] < (double )((lavg_array + i)->l_line)->cl_lavg[1]) {
            goto _L___1;
          } else {
// # 1240
            if (l_avg[2] < (double )((lavg_array + i)->l_line)->cl_lavg[2]) {
              _L___1: 
// # 1255
              if (debug_opt) {
// # 1255
                if ((int )((lavg_array + i)->l_line)->cl_option[0] & 4) {
                  {
// # 1255
                  tmp = (char /*const*/   *)"or";
                  }
                } else {
                  {
// # 1255
                  tmp = (char /*const*/   *)"and";
                  }
                }
                {
// # 1255
                Debug("lavg %s %s %.0f:%d %.0f:%d %.0f:%d",
                      ((lavg_array + i)->l_line)->cl_shell, tmp, l_avg[0],
                      ((lavg_array + i)->l_line)->cl_lavg[0], l_avg[1],
                      ((lavg_array + i)->l_line)->cl_lavg[1], l_avg[2],
                      ((lavg_array + i)->l_line)->cl_lavg[2]);
                }
              }
              {
// # 1261
              run_lavg_job(i);
              }
            } else {
              {
// # 1264
              i ++;
              }
            }
          }
        }
      } else {
        {
// # 1264
        i ++;
        }
      }
    } else {
// # 1240
      if (l_avg[0] < (double )((lavg_array + i)->l_line)->cl_lavg[0]) {
        goto _L___6;
      } else {
// # 1240
        if ((int )((lavg_array + i)->l_line)->cl_lavg[0] == 0) {
          _L___6: 
// # 1240
          if (l_avg[1] < (double )((lavg_array + i)->l_line)->cl_lavg[1]) {
            goto _L___4;
          } else {
// # 1240
            if ((int )((lavg_array + i)->l_line)->cl_lavg[1] == 0) {
              _L___4: 
// # 1240
              if (l_avg[2] < (double )((lavg_array + i)->l_line)->cl_lavg[2]) {
                goto _L___1;
              } else {
// # 1240
                if ((int )((lavg_array + i)->l_line)->cl_lavg[2] == 0) {
                  goto _L___1;
                } else {
                  goto _L___5;
                }
              }
            } else {
              goto _L___5;
            }
          }
        } else {
          goto _L___5;
        }
      }
    }
  }
// # 1268
  if ((int )lavg_num == 0) {
// # 1269
    return (tts);
  } else {
// # 1271
    if (30L < tts) {
      {
// # 1271
      tmp___0 = 30L;
      }
    } else {
      {
// # 1271
      tmp___0 = tts;
      }
    }
// # 1271
    return (tmp___0);
  }
}
}
// # 1277
time_t time_to_sleep(time_t lim ) 
{ time_t tts ;
  time_t ti ;
  time_t tmp ;

  {
  {
// # 1283
  tts = lim;
// # 1284
  tmp = time((time_t *)((void *)0));
// # 1284
  ti = tmp;
  }
// # 1287
  if ((unsigned int )queue_base != (unsigned int )((void *)0)) {
// # 1288
    if ((queue_base->j_line)->cl_nextexe < lim) {
      {
// # 1289
      tts = (queue_base->j_line)->cl_nextexe;
      }
    }
  }
  {
// # 1292
  tts = tts - ti;
  }
// # 1293
  if (tts < 0L) {
    {
// # 1294
    tts = 0L;
    }
  }
// # 1298
  return (tts);
}
}
// # 31 "job.c"
void sig_dfl(void) ;
// # 32
void end_job(cl_t *line , int status , FILE *mailf , short mailpos ) ;
// # 35
void die_mail_pame(cl_t *cl , int pamerrno , struct passwd *pas , char *str ) ;
// # 49
void die_mail_pame(cl_t *cl , int pamerrno , struct passwd *pas , char *str ) 
{ char buf[175] ;
  size_t tmp ;
  FILE *mailf ;
  FILE *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;

  {
  {
// # 55
  strncpy((char */* __restrict  */)(buf),
          (char /*const*/   */* __restrict  */)((char /*const*/   *)str),
          sizeof(buf) - 1/*U*/);
// # 56
  tmp = strlen((char /*const*/   *)(buf));
// # 56
  strncat((char */* __restrict  */)(buf),
          (char /*const*/   */* __restrict  */)((char /*const*/   *)" for \'%s\'"),
          (sizeof(buf) - tmp) - 1/*U*/);
// # 57
  buf[sizeof(buf) - 1/*U*/] = '\0';
  }
// # 59
  if ((int )cl->cl_option[0] & 128) {
    {
// # 86
    die_pame(pamh, pamerrno, buf, cl->cl_shell);
    }
  } else {
    {
// # 60
    tmp___0 = create_mail(cl, "Could not run fcron job");
// # 60
    mailf = tmp___0;
// # 63
    tmp___1 = fileno(mailf);
// # 63
    tmp___2 = dup2(tmp___1, 1);
    }
// # 63
    if (tmp___2 != 1) {
      {
// # 64
      die_e("dup2() error");
      }
    } else {
      {
// # 63
      tmp___3 = dup2(1, 2);
      }
// # 63
      if (tmp___3 != 2) {
        {
// # 64
        die_e("dup2() error");
        }
      }
    }
    {
// # 66
    foreground = (char )1;
// # 67
    error_pame(pamh, pamerrno, buf, cl->cl_shell);
// # 68
    error("Job \'%s\' has *not* run.", cl->cl_shell);
// # 69
    foreground = (char )0;
// # 71
    pam_end(pamh, pamerrno);
// # 75
    tmp___4 = initgroups((char /*const*/   *)pas->pw_name, pas->pw_gid);
    }
// # 75
    if (tmp___4 < 0) {
      {
// # 76
      die_e("initgroups failed: %s", pas->pw_name);
      }
    }
    {
// # 77
    tmp___5 = setgid(pas->pw_gid);
    }
// # 77
    if (tmp___5 < 0) {
      {
// # 78
      die("setgid failed: %s %d", pas->pw_name, pas->pw_gid);
      }
    }
    {
// # 79
    tmp___6 = setuid(pas->pw_uid);
    }
// # 79
    if (tmp___6 < 0) {
      {
// # 80
      die("setuid failed: %s %d", pas->pw_name, pas->pw_uid);
      }
    }
    {
// # 82
    launch_mailer(cl, mailf);
    }
  }
// # 87
  return;
}
}
// # 90
int change_user(struct cl_t *cl ) 
{ struct passwd *pas ;
  int retcode ;
  char /*const*/   * /*const*/  *env ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  {
// # 95
  retcode = 0;
// # 100
  umask(saved_umask);
// # 104
  pas = getpwnam((char /*const*/   *)cl->cl_runas);
  }
// # 104
  if ((unsigned int )pas == (unsigned int )((void *)0)) {
    {
// # 105
    die("failed to get passwd fields for user \"%s\"", cl->cl_runas);
    }
  }
  {
// # 108
  setenv((char /*const*/   *)"USER", (char /*const*/   *)pas->pw_name, 1);
// # 109
  setenv((char /*const*/   *)"HOME", (char /*const*/   *)pas->pw_dir, 1);
// # 110
  setenv((char /*const*/   *)"SHELL", (char /*const*/   *)pas->pw_shell, 1);
// # 134
  retcode = pam_start((char /*const*/   *)"fcron", (char /*const*/   *)pas->pw_name,
                      & apamconv, & pamh);
  }
// # 135
  if (retcode != 0) {
    {
// # 135
    die_pame(pamh, retcode, "Could not start PAM for %s", cl->cl_shell);
    }
  }
  {
// # 140
  retcode = pam_authenticate(pamh, 32768);
  }
// # 141
  if (retcode != 0) {
    {
// # 141
    die_mail_pame(cl, retcode, pas, "Could not authenticate PAM user");
    }
  }
  {
// # 143
  retcode = pam_acct_mgmt(pamh, 32768);
  }
// # 144
  if (retcode != 0) {
    {
// # 144
    die_mail_pame(cl, retcode, pas, "Could not init PAM account management");
    }
  }
  {
// # 146
  retcode = pam_setcred(pamh, 32770);
  }
// # 147
  if (retcode != 0) {
    {
// # 147
    die_mail_pame(cl, retcode, pas, "Could not set PAM credentials");
    }
  }
  {
// # 149
  retcode = pam_open_session(pamh, 32768);
  }
// # 150
  if (retcode != 0) {
    {
// # 150
    die_mail_pame(cl, retcode, pas, "Could not open PAM session");
    }
  }
  {
// # 153
  env = (char /*const*/   * /*const*/  *)pam_getenvlist(pamh);
  }
// # 154
  while (1) {
// # 154
    if (env) {
// # 154
      if (! (*env)) {
// # 154
        break;
      }
    } else {
// # 154
      break;
    }
    {
// # 155
    tmp___0 = putenv((char *)(*env));
    }
// # 155
    if (tmp___0) {
      {
// # 155
      die_e("Could not copy PAM environment");
      }
    }
    {
// # 156
    env ++;
    }
  }
  {
// # 161
  xcloselog();
// # 165
  tmp___1 = initgroups((char /*const*/   *)pas->pw_name, pas->pw_gid);
  }
// # 165
  if (tmp___1 < 0) {
    {
// # 166
    die_e("initgroups failed: %s", pas->pw_name);
    }
  }
  {
// # 168
  tmp___2 = setgid(pas->pw_gid);
  }
// # 168
  if (tmp___2 < 0) {
    {
// # 169
    die("setgid failed: %s %d", pas->pw_name, pas->pw_gid);
    }
  }
  {
// # 171
  tmp___3 = setuid(pas->pw_uid);
  }
// # 171
  if (tmp___3 < 0) {
    {
// # 172
    die("setuid failed: %s %d", pas->pw_name, pas->pw_uid);
    }
  }
// # 174
  return ((int )pas->pw_uid);
}
}
// # 178
void sig_dfl(void) 
{ 

  {
  {
// # 182
  signal(15, (void (*)(int  ))0);
// # 183
  signal(17, (void (*)(int  ))0);
// # 184
  signal(1, (void (*)(int  ))0);
// # 185
  signal(10, (void (*)(int  ))0);
// # 186
  signal(12, (void (*)(int  ))0);
// # 187
  signal(13, (void (*)(int  ))0);
  }
// # 188
  return;
}
}
// # 191
FILE *create_mail(struct cl_t *line , char *subject ) 
{ int mailfd ;
  int tmp ;
  FILE *mailf ;
  FILE *tmp___0 ;
  char hostname[128] ;
  char complete_adr ;
  int i ;
  int tmp___1 ;
  char /*const*/   *tmp___2 ;
  char /*const*/   *tmp___3 ;

  {
// # 196
  tmp = temp_file((char **)((void *)0));
// # 196
  mailfd = tmp;
// # 197
  tmp___0 = fdopen(mailfd, (char /*const*/   *)"r+");
// # 25 "spec.work"
  tmp___0->BLAST_FLAG = 1;
// # 197 "job.c"
  mailf = tmp___0;
// # 200
  complete_adr = (char )0;
  
// # 203
  if ((unsigned int )mailf == (unsigned int )((void *)0)) {
    {
// # 204
    die_e("Could not fdopen() mailfd");
    }
  }
  {
// # 64 "spec.work"
  if (! (mailf->BLAST_FLAG == 1)) {
// # 66
    BLAST_ERROR();
  }
// # 207 "job.c"
  fprintf((FILE */* __restrict  */)mailf,
          (char /*const*/   */* __restrict  */)((char /*const*/   *)"To: %s"),
          line->cl_mailto);
// # 210
  tmp___1 = gethostname(hostname, sizeof(hostname));
  }
// # 210
  if (tmp___1 != 0) {
    {
// # 211
    error_e("Could not get hostname");
// # 212
    hostname[0] = '\0';
    }
  } else {
// # 216
    hostname[127] = '\0';
// # 219
    i = 0;

// # 219
    while ((int )(*(line->cl_mailto + i)) != 0) {
// # 220
      if ((int )(*(line->cl_mailto + i)) == 64) {
        {
// # 221
        complete_adr = (char )1;
        }
// # 222
        break;
      }
      {
// # 219
      i ++;
      }
    }
// # 225
    if (! complete_adr) {
      {

      {
// # 64 "spec.work"
      if (! (mailf->BLAST_FLAG == 1)) {
// # 66
        BLAST_ERROR();
      }
      {

      }
      }
// # 226 "job.c"
      fprintf((FILE */* __restrict  */)mailf,
              (char /*const*/   */* __restrict  */)((char /*const*/   *)"@%s"), hostname);
      }
    }
  }
// # 232
  if (subject) {
// # 233
    if ((int )hostname[0] != 0) {
      {
// # 233
      tmp___2 = (char /*const*/   *)(hostname);
      }
    } else {
      {
// # 233
      tmp___2 = (char /*const*/   *)"?";
      }
    }
    {

    {
// # 88 "spec.work"
    if (! (mailf->BLAST_FLAG == 1)) {
// # 90
      BLAST_ERROR();
    }
    {

    }
    }
// # 233 "job.c"
    fprintf((FILE */* __restrict  */)mailf,
            (char /*const*/   */* __restrict  */)((char /*const*/   *)"\nSubject: fcron <%s@%s> %s: %s\n\n"),
            (line->cl_file)->cf_user, tmp___2, subject, line->cl_shell);
    }
  } else {
// # 236
    if ((int )hostname[0] != 0) {
      {
// # 236
      tmp___3 = (char /*const*/   *)(hostname);
      }
    } else {
      {
// # 236
      tmp___3 = (char /*const*/   *)"?";
      }
    }
    {

    {
// # 80 "spec.work"
    if (! (mailf->BLAST_FLAG == 1)) {
// # 82
      BLAST_ERROR();
    }
    {

    }
    }
// # 236 "job.c"
    fprintf((FILE */* __restrict  */)mailf,
            (char /*const*/   */* __restrict  */)((char /*const*/   *)"\nSubject: fcron <%s@%s> %s\n\n"),
            (line->cl_file)->cf_user, tmp___3, line->cl_shell);
    }
  }
// # 240
  return (mailf);
}
}
// # 243
void run_job(struct exe_t *exeent ){ 

  pid_t pid ;
  cl_t *line ;
  int pipe_pid_fd[2] ;
  int i ;
  int j ;
  int tmp ;
  char *curshell ;
  char *home ;
  env_t *env ;
  FILE *mailf ;
  int status ;
  int to_stdout ;
  int tmp___0 ;
  int pipe_fd[2] ;
  short mailpos ;
  char /*const*/   *tmp___1 ;
  char /*const*/   *tmp___2 ;
  char /*const*/   *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  FILE *tmp___8 ;
  FILE *tmp___9 ;
  FILE * /*__restrict*/  tmp___10 ;
  FILE * /*__restrict*/  tmp___11 ;
  int *tmp___12 ;
  int tmp___13 ;
  int *tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int *tmp___18 ;
  int tmp___19 ;
  ssize_t tmp___20 ;
  char mailbuf[196] ;
  FILE *pipef ;
  FILE *tmp___21 ;
  int tmp___22 ;
  char *tmp___23 ;
  int *tmp___24 ;
  
  // # 249
  line = exeent->e_line;
  // # 251
  i = 0;
  // # 254
  tmp = pipe(pipe_pid_fd);
  
  // # 254
  if (tmp != 0) {
    // # 255
    error_e("pipe(pipe_pid_fd) : setting job_pid to -1");
    // # 256
    exeent->e_job_pid = -1;
  }
  
  // # 259
  pid = fork();

  // # 259
  switch (pid) {
  case -1:
      // # 261
      // error_e("Fork error : could not exec \"%s\"", line->cl_shell);
    //# 262
      break;
  case 0: 
    // # 270
    mailf = (FILE *)((void *)0);
    // # 271
    status = 0;
    // # 272
    if (foreground) {
      // # 272
      if ((int )line->cl_option[3] & 2) {
	// # 272
	tmp___0 = 1;
      }
    } 
    else 
      tmp___0 = 0;
    
    // # 272
    to_stdout = tmp___0;
    // # 274
    mailpos = (short )0;
    
    // # 280
    if (debug_opt) {
      // # 280
      if ((int )line->cl_option[3] & 2) {
	// # 280
	tmp___1 = (char /*const*/   *)"stdout";
      } 
      else {
	// # 280
	tmp___1 = (char /*const*/   *)"normal";
      }
      // # 280
      if (foreground) {
	// # 280
	tmp___2 = (char /*const*/   *)"running in foreground";
      } 
      else {
	// # 280
	tmp___2 = (char /*const*/   *)"running in background";
      }
      // # 280
      if (to_stdout) {
	// # 280
	tmp___3 = (char /*const*/   *)"stdout";
      } 
      else {
	// # 280
	tmp___3 = (char /*const*/   *)"file";
      }
      // # 280
      //   Debug("sent output to %s, %s, %s\n", tmp___3, tmp___2, tmp___1);
    }

    // # 285
    if (! to_stdout) {
      // # 285
      if (! ((int )line->cl_option[0] & 128)) {
	  // # 290
	  mailf = create_mail(line, (char *)((void *)0));
	  // # 291
	  mailpos = (short )ftell(mailf);
	  // # 292
	  tmp___4 = pipe(pipe_fd);
	// # 292
	if (tmp___4 != 0) 
	    die_e("could not pipe()");      
      }
    }        
    // # 297
    tmp___5 = change_user(line);
    // # 297
    if (tmp___5 < 0) {
      // # 298
      return;
    }
    // # 301
    sig_dfl();
    // # 304
    pid = fork();
    // # 304
    switch (pid) {
    case -1:
      // # 306
      //error_e("Fork error : could not exec \"%s\"", line->cl_shell);  
      // # 307
      break;
    case 0: 
      // # 311
      if (! to_stdout) {
	// # 312
	if ((int )line->cl_option[0] & 128) {
	  // # 331
	  if (foreground) {
	      // # 332
	      tmp___10 = (FILE */* __restrict  */)get_stdout();
	      // # 113 "spec.work"
	      tmp___10->BLAST_FLAG = 1;
	      // # 332 "job.c"
	      freopen((char /*const*/   */* __restrict  */)((char /*const*/   *)"/dev/null"),
		      (char /*const*/   */* __restrict  */)((char /*const*/   *)"w"), tmp___10);
	      // # 333
	      tmp___11 = (FILE */* __restrict  */)get_stderr();
	      // # 105 "spec.work"
	      tmp___11->BLAST_FLAG = 1;
	      // # 333 "job.c"
	      freopen((char /*const*/   */* __restrict  */)((char /*const*/   *)"/dev/null"),
		      (char /*const*/   */* __restrict  */)((char /*const*/   *)"w"), tmp___11);
	  }
	} 
	else {
	  // # 315
	  tmp___6 = dup2(pipe_fd[1], 1);
	  // # 315
	  if (tmp___6 != 1) {
	    // # 316
	    die_e("dup2() error");
	  } 
	  else {
	    // # 315
	    tmp___7 = dup2(1, 2);
	    // # 315
	    if (tmp___7 != 2) {
		// # 316
	      die_e("dup2() error");
	    }
	  }
	  // # 319
	  close(pipe_fd[0]);
	  // # 320
	  close(pipe_fd[1]);
	  // # 324
	  tmp___8 = get_stdout();	  
	  // # 113 "spec.work"
	  tmp___8->BLAST_FLAG = 1;
	  // # 324 "job.c"
	  setlinebuf(tmp___8);
	  // # 325
	  tmp___9 = get_stderr();
	    // # 105 "spec.work"
	  tmp___9->BLAST_FLAG = 1;
	  // # 325 "job.c"
	  setlinebuf(tmp___9);
	}
      }

      // # 337
      foreground = (char )1;
      // # 340
      if ((int )line->cl_nice != 0) {
	// # 341
	tmp___12 = __errno_location();
	// # 341
	(*tmp___12) = 0;
	// # 342
	tmp___13 = nice((int )line->cl_nice);
	// # 342
	if (tmp___13 == -1) {
	    // # 342
	    tmp___14 = __errno_location();
	  // # 342
	    if ((*tmp___14) != 0) {
	      // # 343
	      error_e("could not set nice value");	      
	    }
	}
      }
      // # 346
      xcloselog();
      // # 349
      env = (line->cl_file)->cf_env_base;    
      // # 349

      while (env) {
	// # 350
	tmp___15 = putenv(env->e_val);
	// # 350
	if (tmp___15 != 0) {
	  // # 351
	  error("could not putenv()");
	}
	// # 349
	env = env->e_next;
      }
      // # 353
      home = getenv((char /*const*/   *)"HOME");
      // # 353
      if ((unsigned int )home != (unsigned int )((void *)0)) {
	// # 354
	tmp___17 = chdir((char /*const*/   *)home);
	// # 354
	if (tmp___17 != 0) {
	  // # 355
	  error_e("Could not chdir to HOME dir \"%s\"", home);
	  // # 356
	  tmp___16 = chdir((char /*const*/   *)"/");
	  // # 356
	  if (tmp___16 < 0) {
	    // # 357
	    die_e("Could not chdir to HOME dir /");
	  }
	}
      }
      // # 360
      curshell = getenv((char /*const*/   *)"SHELL");
      // # 360
      if ((unsigned int )curshell == (unsigned int )((void *)0)) {
	// # 361
	curshell = shell;
      } 
      else {
	// # 362
	tmp___19 = access((char /*const*/   *)curshell, 1);	
	// # 362
	if (tmp___19 != 0) {
	  // # 363
	  tmp___18 = __errno_location();
	  // # 363
	  if ((*tmp___18) == 2) {
	      // # 364
	      error("shell \"%s\" : no file or directory. SHELL set to %s", curshell,
		    shell);
	  } 
	  else {
	    // # 367
	    error_e("shell \"%s\" not valid : SHELL set to %s", curshell, shell);
	  }
	    // # 369
	    curshell = shell;
	}
      }
      // # 383
      execl((char /*const*/   *)curshell, (char /*const*/   *)curshell, "-c",
	    line->cl_shell, (void *)0);
      // # 385
      error_e("Can\'t find \"%s\". Trying a execlp(\"sh\",...)", curshell);
      // # 386
      execlp((char /*const*/   *)"sh", (char /*const*/   *)"sh", "-c", line->cl_shell,
	     (void *)0);
      // # 387
      die_e("execl() \"%s -c %s\" error", curshell, line->cl_shell);
    default: 
      // # 395
      close(pipe_fd[1]);
      // # 396
      close(pipe_pid_fd[0]);
      // # 399
      tmp___20 = write(pipe_pid_fd[1], (void /*const*/   *)(& pid), sizeof(pid));
      // # 399
      if (tmp___20 < 0) {
	  // # 400
	  error_e("could not write child pid to pipe_pid_fd[1]");
      }
      // # 401
      close(pipe_pid_fd[1]);      
      // # 403
      if (! ((int )line->cl_option[2] & 64)) {
	  // # 404
	  explain("Job %s started for user %s (pid %d)", line->cl_shell,
		  (line->cl_file)->cf_user, pid);
      }
      // # 407
      if (! to_stdout) {
	// # 407
	if (! ((int )line->cl_option[0] & 128)) {
	  {
	    // # 410
	    tmp___21 = fdopen(pipe_fd[0], (char /*const*/   *)"r");
	    // # 25 "spec.work"
	    tmp___21->BLAST_FLAG = 1;	    
	    // # 410 "job.c"
	    pipef = tmp___21;
	  }
	  // # 412
	  if ((unsigned int )pipef == (unsigned int )((void *)0)) {
	    // # 413
	    die_e("Could not fdopen() pipe_fd[0]");	    
	  }
	  // # 415
	  mailbuf[sizeof(mailbuf) - 1/*U*/] = '\0';	  
	  // # 416
	  while (1) {
	    // # 32 "spec.work"
	    if (! (pipef->BLAST_FLAG == 1)) {
	      // # 34
	      BLAST_ERROR();
	    }	    
	    // # 416 "job.c"
	    tmp___23 = fgets((char */* __restrict  */)(mailbuf),
			     (int )sizeof(mailbuf), (FILE */* __restrict  */)pipef);
	  }
	  // # 416
	  if (! ((unsigned int )tmp___23 != (unsigned int )((void *)0))) {
	    // # 416
	    break;
	  }
	  // # 417
	  tmp___22 = fputs((char /*const*/   */* __restrict  */)((char /*const*/   *)(mailbuf)),
			   (FILE */* __restrict  */)mailf);
	  // # 417
	  if (tmp___22 < 0) {
	      // # 418
	      warn("fputs() failed to write to mail file for job %s (pid %d)",
		   line->cl_shell, pid);
	  }
	}
	// # 96 "spec.work"
	if (pipef->BLAST_FLAG == 1) {
	  // # 97
	  pipef->BLAST_FLAG = 0;
	} 
	else {
	  // # 98
	  BLAST_ERROR();
	}
      }
      
      // # 420 "job.c"
      fclose(pipef);
    } 
  // # 424
  while (1) {
    // # 424
    pid = wait3((union wait *)(& status), 0, (struct rusage *)((void *)0));
    // # 424
    if (! (pid > 0)) {
      // # 424
      break;
    }
    // # 425
    end_job(line, status, mailf, mailpos); 
  }  
  default: 
    // # 435
    close(pipe_pid_fd[1]);
    // # 437
    exeent->e_ctrl_pid = pid;
    // # 438
    (line->cl_file)->cf_running = (line->cl_file)->cf_running + 1;
    // # 441
    while ((unsigned int )i < sizeof(pid_t )) {
      // # 442
      j = read(pipe_pid_fd[0], (void *)((char *)(& exeent->e_job_pid) + i),
	       sizeof(pid_t ));
      // # 443
      if (j <= 0) {
	// # 443
	tmp___24 = __errno_location();
	// # 443
	if ((*tmp___24) != 4) {
	    // # 444
	    error_e("Could not read job pid : setting it to -1");
	    // # 445
	    exeent->e_job_pid = -1;
	    // # 446
	    break;
	}
      }
      // # 448
      i += j;
    }
    // # 450
    close(pipe_pid_fd[0]);
 }
// # 453
  return;
}

// # 455
void end_job(cl_t *line , int status , FILE *mailf , short mailpos ) 
{ char mail_output ;
  char *m ;
  int tmp ;
  long tmp___0 ;
  union __anonunion___u_47 u__u ;
  union __anonunion___u_48 u__u___0 ;
  union __anonunion___u_49 u__u___1 ;
  union __anonunion___u_50 u__u___2 ;
  union __anonunion___u_51 u__u___3 ;
  union __anonunion___u_52 u__u___4 ;
  int x__status ;
  union __anonunion___u_53 u__u___5 ;
  int tmp___1 ;
  union __anonunion___u_54 u__u___6 ;
  union __anonunion___u_55 u__u___7 ;
  union __anonunion___u_56 u__u___8 ;
  int tmp___2 ;
  int tmp___3 ;

  {
// # 467
  if ((unsigned int )mailf != (unsigned int )((void *)0)) {
// # 467
    if ((int )line->cl_option[1] & 1) {
      {
// # 469
      mail_output = (char )1;
      }
    } else {
// # 467
      if ((int )line->cl_option[0] & 128) {
        {
// # 472
        mail_output = (char )0;
        }
      } else {
        {
// # 463
        tmp = fseek(mailf, 0L, 2);
        }
// # 467
        if (tmp == 0) {
          {
// # 463
          tmp___0 = ftell(mailf);
          }
// # 467
          if (tmp___0 > (long )mailpos) {
            {
// # 469
            mail_output = (char )1;
            }
          } else {
            goto _L;
          }
        } else {
          _L: 
          {
// # 467
          u__u.__in = status;
          }
// # 467
          if ((u__u.__i & 127) == 0) {
            {
// # 467
            u__u___0.__in = status;
            }
// # 467
            if ((u__u___0.__i & 65280) >> 8 == 0) {
              {
// # 472
              mail_output = (char )0;
              }
            } else {
              {
// # 469
              mail_output = (char )1;
              }
            }
          } else {
            {
// # 469
            mail_output = (char )1;
            }
          }
        }
      }
    }
  } else {
    {
// # 472
    mail_output = (char )0;
    }
  }
// # 474
  if ((int )mail_output == 1) {
    {
// # 474
    m = " (mailing output)";
    }
  } else {
    {
// # 474
    m = "";
    }
  }
  {
// # 475
  u__u___7.__in = status;
  }
// # 475
  if ((u__u___7.__i & 127) == 0) {
    {
// # 475
    u__u___8.__in = status;
    }
// # 475
    if ((u__u___8.__i & 65280) >> 8 == 0) {
// # 476
      if (! ((int )line->cl_option[2] & 64)) {
        {
// # 477
        explain("Job %s completed%s", line->cl_shell, m);
        }
      }
    } else {
      goto _L___0;
    }
  } else {
    _L___0: 
    {
// # 479
    u__u___6.__in = status;
    }
// # 479
    if ((u__u___6.__i & 127) == 0) {
      {
// # 481
      u__u___1.__in = status;
// # 481
      warn("Job %s terminated (exit status: %d)%s", line->cl_shell,
           (u__u___1.__i & 65280) >> 8, m);
      }
// # 484
      if ((unsigned int )mailf != (unsigned int )((void *)0)) {
        {
// # 486
        u__u___2.__in = status;
        {
// # 80 "spec.work"
        if (! (mailf->BLAST_FLAG == 1)) {
// # 82
          BLAST_ERROR();
        }
        {

        }
        }
// # 486 "job.c"
        fprintf((FILE */* __restrict  */)mailf,
                (char /*const*/   */* __restrict  */)((char /*const*/   *)"Job %s terminated (exit status: %d)%s"),
                line->cl_shell, (u__u___2.__i & 65280) >> 8, m);
        }
      }
    } else {
      {
// # 488
      u__u___5.__in = status;
// # 488
      x__status = u__u___5.__i;
      }
// # 488
      if ((x__status & 255) == 127) {
        {
// # 488
        tmp___1 = 0;
        }
      } else {
// # 488
        if ((x__status & 127) == 0) {
          {
// # 488
          tmp___1 = 0;
          }
        } else {
          {
// # 488
          tmp___1 = 1;
          }
        }
      }
// # 488
      if (tmp___1) {
        {
// # 490
        u__u___3.__in = status;
// # 490
        error("Job %s terminated due to signal %d%s", line->cl_shell,
              u__u___3.__i & 127, m);
        }
// # 491
        if ((unsigned int )mailf != (unsigned int )((void *)0)) {
          {
// # 493
          u__u___4.__in = status;
// # 80 "spec.work"
          if (! (mailf->BLAST_FLAG == 1)) {
// # 82
            BLAST_ERROR();
          }
// # 493 "job.c"
          fprintf((FILE */* __restrict  */)mailf,
                  (char /*const*/   */* __restrict  */)((char /*const*/   *)"Job %s terminated due to signal %d%s"),
                  line->cl_shell, u__u___4.__i & 127, m);
          }
        }
      } else {
        {
// # 496
        error("Job %s terminated abnormally %s", line->cl_shell, m);
        }
// # 497
        if ((unsigned int )mailf != (unsigned int )((void *)0)) {
          {

          {
// # 72 "spec.work"
          if (! (mailf->BLAST_FLAG == 1)) {
// # 74
            BLAST_ERROR();
          }
          {

          }
          }
// # 498 "job.c"
          fprintf((FILE */* __restrict  */)mailf,
                  (char /*const*/   */* __restrict  */)((char /*const*/   *)"Job %s terminated abnormally %s"),
                  line->cl_shell, m);
          }
        }
      }
    }
  }
  {
// # 512
  pam_setcred(pamh, 32772);
// # 513
  tmp___2 = pam_close_session(pamh, 32768);
// # 513
  pam_end(pamh, tmp___2);
  }
// # 516
  if ((int )mail_output == 1) {
    {
// # 517
    launch_mailer(line, mailf);
// # 519
    die_e("Internal error: launch_mailer returned");
    }
  }
// # 523
  if ((unsigned int )mailf != (unsigned int )((void *)0)) {
    {
// # 523
    tmp___3 = fclose(mailf);
    }
// # 523
    if (tmp___3 != 0) {
      {
// # 524
      die_e("Can\'t close file mailf");
      }
    }
  }
  {
// # 526
  exit(0);
  {
// # 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
// # 526 "job.c"
  return;
}
}
// # 530
void launch_mailer(struct cl_t *line , FILE *mailf ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  {
// # 535
  foreground = (char )0;
// # 538
  tmp = fseek(mailf, 0L, 0);
  }
// # 538
  if (tmp != 0) {
    {
// # 538
    die_e("Can\'t fseek()");
    }
  }
  {
// # 539
  tmp___0 = fileno(mailf);
// # 539
  tmp___1 = dup2(tmp___0, 0);
  }
// # 539
  if (tmp___1 != 0) {
    {
// # 539
    die_e("Can\'t dup2(fileno(mailf))");
    }
  }
  {
// # 541
  xcloselog();
// # 543
  tmp___2 = chdir((char /*const*/   *)"/");
  }
// # 543
  if (tmp___2 < 0) {
    {
// # 544
    die_e("Could not chdir to /");
    }
  }
  {
// # 547
  execl((char /*const*/   *)sendmail, (char /*const*/   *)sendmail, "-Ffcron", "-odi",
        line->cl_mailto, (void *)0);
// # 548
  error_e("Can\'t find \"%s\". Trying a execlp(\"sendmail\")", sendmail);
// # 549
  execlp((char /*const*/   *)"sendmail", (char /*const*/   *)"sendmail", "-Ffcron",
         "-odi", line->cl_mailto, (void *)0);
// # 550
  die_e("Can\'t exec /usr/lib/sendmail");
  }
// # 554
  return;
}
}
// # 32 "conf.c"
int read_file(char /*const*/   *file_name , cf_t *cf ) ;
// # 33
int add_line_to_file(cl_t *cl , cf_t *cf , uid_t runas , char *runas_str ,
                     time_t t_save ) ;
// # 35
int read_strn(int fd , char **str , short size ) ;
// # 36
int read_type(int fd , short *type , short *size ) ;
// # 37
void synchronize_file(char *file_name ) ;
// # 47
void reload_all(char /*const*/   *dir_name ) 
{ cf_t *f ;

  {
  {
// # 52
  f = (cf_t *)((void *)0);
// # 54
  explain("Removing current configuration from memory");
// # 56
  f = file_base;
  }
// # 57
  while ((unsigned int )f != (unsigned int )((void *)0)) {
// # 58
    if (f->cf_running > 0) {
      {
// # 59
      wait_all(& f->cf_running);
      }
    }
    {
// # 60
    save_file(f);
// # 61
    delete_file((char /*const*/   *)f->cf_user);
// # 65
    f = file_base;
    }
  }
  {
// # 68
  synchronize_dir(dir_name);
  }
// # 70
  return;
}
}
// # 73
void synchronize_dir(char /*const*/   *dir_name ) 
{ list_t *rm_list ;
  list_t *new_list ;
  list_t *file_list ;
  list_t *list_cur ;
  DIR *dir ;
  struct dirent *den ;
  int tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int *tmp___4 ;
  int tmp___5 ;
  int *tmp___6 ;
  struct passwd *tmp___7 ;
  int tmp___8 ;
  struct passwd *tmp___9 ;
  int tmp___10 ;
  list_t *l ;
  list_t *next ;

  {
  {
// # 81
  rm_list = (list_t *)((void *)0);
// # 82
  new_list = (list_t *)((void *)0);
// # 83
  file_list = (list_t *)((void *)0);
// # 84
  list_cur = (list_t *)((void *)0);
// # 88
  tmp = strcmp(dir_name, (char /*const*/   *)".");
  }
// # 88
  if (tmp == 0) {
    {
// # 89
    explain("updating configuration from %s", fcrontabs);
    }
  } else {
    {
// # 91
    explain("updating configuration from %s", dir_name);
    }
  }
  {
// # 93
  dir = opendir((char /*const*/   *)".");
  }
// # 93
  if (dir) {
// # 94
    while (1) {
      {
// # 94
      den = readdir(dir);
      }
// # 94
      if (! den) {
// # 94
        break;
      }
      {
// # 96
      tmp___2 = strncmp((char /*const*/   *)(den->d_name), (char /*const*/   *)"rm.", 3/*U*/);
      }
// # 96
      if (tmp___2 == 0) {
        {
// # 98
        list_cur = (list_t *)calloc(1/*U*/, sizeof(list_t ));
        }
// # 98
        if ((unsigned int )list_cur == (unsigned int )((void *)0)) {
          {
// # 98
          die_e("Could not calloc.");
          }
        }
        {
// # 99
        list_cur->str = strdup2((char /*const*/   *)(den->d_name));
// # 100
        list_cur->next = rm_list;
// # 101
        rm_list = list_cur;
        }
      } else {
        {
// # 104
        tmp___1 = strncmp((char /*const*/   *)(den->d_name), (char /*const*/   *)"new.",
                          4/*U*/);
        }
// # 104
        if (tmp___1 == 0) {
          {
// # 106
          list_cur = (list_t *)calloc(1/*U*/, sizeof(list_t ));
          }
// # 106
          if ((unsigned int )list_cur == (unsigned int )((void *)0)) {
            {
// # 106
            die_e("Could not calloc.");
            }
          }
          {
// # 107
          list_cur->str = strdup2((char /*const*/   *)(den->d_name));
// # 108
          list_cur->next = new_list;
// # 109
          new_list = list_cur;
          }
        } else {
          {
// # 112
          tmp___0 = strchr((char /*const*/   *)(den->d_name), (int )'.');
          }
// # 112
          if ((unsigned int )tmp___0 != (unsigned int )((void *)0)) {
// # 113
            continue;
          } else {
// # 118
            if ((unsigned int )file_base == (unsigned int )((void *)0)) {
              {
// # 119
              list_cur = (list_t *)calloc(1/*U*/, sizeof(list_t ));
              }
// # 119
              if ((unsigned int )list_cur == (unsigned int )((void *)0)) {
                {
// # 119
                die_e("Could not calloc.");
                }
              }
              {
// # 120
              list_cur->str = strdup2((char /*const*/   *)(den->d_name));
// # 121
              list_cur->next = file_list;
// # 122
              file_list = list_cur;
              }
            }
          }
        }
      }
    }
    {
// # 126
    closedir(dir);
    }
  } else {
    {
// # 128
    die("Unable to open current dir!");
    }
  }
  {
// # 134
  list_cur = rm_list;
  }
// # 134
  while (list_cur) {
    {
// # 135
    explain("removing file %s", list_cur->str + 3);
// # 136
    delete_file((char /*const*/   *)(list_cur->str + 3));
// # 137
    tmp___3 = remove((char /*const*/   *)(list_cur->str + 3));
    }
// # 137
    if (tmp___3 != 0) {
      {
// # 137
      tmp___4 = __errno_location();
      }
// # 137
      if ((*tmp___4) != 2) {
        {
// # 138
        error_e("Could not remove %s", list_cur->str + 3);
        }
      }
    }
    {
// # 139
    tmp___5 = remove((char /*const*/   *)list_cur->str);
    }
// # 139
    if (tmp___5 != 0) {
      {
// # 139
      tmp___6 = __errno_location();
      }
// # 139
      if ((*tmp___6) != 2) {
        {
// # 140
        error_e("Could not remove %s", list_cur->str);
        }
      }
    }
    {
// # 134
    list_cur = list_cur->next;
    }
  }
  {
// # 144
  list_cur = file_list;
  }
// # 144
  while (list_cur) {
    {
// # 145
    tmp___7 = getpwnam((char /*const*/   *)list_cur->str);
    }
// # 145
    if (tmp___7) {
      {
// # 150
      explain("adding file %s", list_cur->str);
// # 151
      synchronize_file(list_cur->str);
      }
    } else {
      {
// # 145
      tmp___8 = strcmp((char /*const*/   *)list_cur->str, (char /*const*/   *)"systab");
      }
// # 145
      if (tmp___8 == 0) {
        {
// # 150
        explain("adding file %s", list_cur->str);
// # 151
        synchronize_file(list_cur->str);
        }
      } else {
        {
// # 154
        error("ignoring file \"%s\" : not in passwd file.", list_cur->str);
        }
      }
    }
    {
// # 144
    list_cur = list_cur->next;
    }
  }
  {
// # 158
  list_cur = new_list;
  }
// # 158
  while (list_cur) {
    {
// # 160
    tmp___9 = getpwnam((char /*const*/   *)(list_cur->str + 4));
    }
// # 160
    if (tmp___9) {
      {
// # 165
      explain("adding new file %s", list_cur->str + 4);
// # 166
      synchronize_file(list_cur->str);
      }
    } else {
      {
// # 160
      tmp___10 = strcmp((char /*const*/   *)(list_cur->str + 4),
                        (char /*const*/   *)"systab");
      }
// # 160
      if (tmp___10 == 0) {
        {
// # 165
        explain("adding new file %s", list_cur->str + 4);
// # 166
        synchronize_file(list_cur->str);
        }
      } else {
        {
// # 169
        error("ignoring file %s : not in passwd file.", list_cur->str + 4);
        }
      }
    }
    {
// # 158
    list_cur = list_cur->next;
    }
  }
  {
// # 175
  l = (list_t *)((void *)0);
// # 176
  next = (list_t *)((void *)0);
// # 178
  next = rm_list;
  }
// # 179
  while (1) {
    {
// # 179
    l = next;
    }
// # 179
    if (! ((unsigned int )l != (unsigned int )((void *)0))) {
// # 179
      break;
    }
    {
// # 180
    next = l->next;
// # 181
    free((void *)l->str);
// # 182
    free((void *)l);
    }
  }
  {
// # 185
  next = new_list;
  }
// # 186
  while (1) {
    {
// # 186
    l = next;
    }
// # 186
    if (! ((unsigned int )l != (unsigned int )((void *)0))) {
// # 186
      break;
    }
    {
// # 187
    next = l->next;
// # 188
    free((void *)l->str);
// # 189
    free((void *)l);
    }
  }
  {
// # 192
  next = file_list;
  }
// # 193
  while (1) {
    {
// # 193
    l = next;
    }
// # 193
    if (! ((unsigned int )l != (unsigned int )((void *)0))) {
// # 193
      break;
    }
    {
// # 194
    next = l->next;
// # 195
    free((void *)l->str);
// # 196
    free((void *)l);
    }
  }
// # 201
  return;
}
}
// # 204
void synchronize_file(char *file_name ) 
{ cf_t *cur_f ;
  char *user ;
  cf_t *prev ;
  int tmp ;
  cf_t *old ;
  cl_t *old_l ;
  cl_t *new_l ;
  size_t size ;
  int tmp___0 ;
  struct tm *ftime ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  char *tmp___7 ;

  {
  {
// # 208
  cur_f = (cf_t *)((void *)0);
// # 209
  user = (char *)((void *)0);
// # 211
  tmp___7 = strchr((char /*const*/   *)file_name, (int )'.');
  }
// # 211
  if ((unsigned int )tmp___7 != (unsigned int )((void *)0)) {
    {
// # 216
    prev = (cf_t *)((void *)0);
// # 221
    user = file_name + 4;
// # 223
    cur_f = file_base;
    }
// # 223
    while (cur_f) {
      {
// # 224
      tmp = strcmp((char /*const*/   *)user, (char /*const*/   *)cur_f->cf_user);
      }
// # 224
      if (tmp == 0) {
// # 225
        break;
      }
      {
// # 226
      prev = cur_f;
// # 223
      cur_f = cur_f->cf_next;
      }
    }
// # 229
    if ((unsigned int )cur_f != (unsigned int )((void *)0)) {
      {
// # 232
      old = (cf_t *)((void *)0);
// # 233
      old_l = (cl_t *)((void *)0);
// # 234
      new_l = (cl_t *)((void *)0);
// # 237
      size = (unsigned int )18;
// # 241
      old = cur_f;
// # 244
      cur_f = (cf_t *)calloc(1/*U*/, sizeof(cf_t ));
      }
// # 244
      if ((unsigned int )cur_f == (unsigned int )((void *)0)) {
        {
// # 244
        die_e("Could not calloc.");
        }
      }
      {
// # 245
      tmp___0 = read_file((char /*const*/   *)file_name, cur_f);
      }
// # 245
      if (tmp___0 != 0) {
// # 247
        return;
      }
// # 253
      if ((unsigned int )prev != (unsigned int )((void *)0)) {
        {
// # 254
        prev->cf_next = old->cf_next;
// # 255
        old->cf_next = file_base;
// # 256
        file_base = old;
        }
      }
      {
// # 264
      new_l = cur_f->cf_line_base;
      }
// # 264
      while (new_l) {
        {
// # 265
        old_l = old->cf_line_base;
        }
// # 265
        while (old_l) {
          {
// # 269
          tmp___1 = strcmp((char /*const*/   *)new_l->cl_shell,
                           (char /*const*/   *)old_l->cl_shell);
          }
// # 269
          if (tmp___1 == 0) {
// # 269
            if ((int )new_l->cl_option[0] & 1) {
// # 269
              if (new_l->cl_timefreq == old_l->cl_timefreq) {
                goto _L;
              } else {
                goto _L___0;
              }
            } else {
              _L___0: 
// # 269
              if (! ((int )new_l->cl_option[0] & 1)) {
                {
// # 269
                tmp___2 = memcmp((void /*const*/   *)(& new_l->cl_mins),
                                 (void /*const*/   *)(& old_l->cl_mins), size);
                }
// # 269
                if (tmp___2 == 0) {
// # 269
                  if (((int )new_l->cl_option[0] & 8) ==
                      ((int )old_l->cl_option[0] & 8)) {
                    _L: 
// # 279
                    if ((int )new_l->cl_runfreq == (int )old_l->cl_runfreq) {
                      {
// # 280
                      new_l->cl_remain = old_l->cl_remain;
                      }
                    }
// # 282
                    if ((int )(new_l->cl_file)->cf_tzdiff !=
                        (int )(old_l->cl_file)->cf_tzdiff) {
// # 282
                      if ((old_l->cl_nextexe -
                           (long )(old_l->cl_file)->cf_tzdiff) +
                          (long )(new_l->cl_file)->cf_tzdiff > now) {
                        {
// # 286
                        new_l->cl_nextexe = (old_l->cl_nextexe -
                                             (long )(old_l->cl_file)->cf_tzdiff) +
                                            (long )(new_l->cl_file)->cf_tzdiff;
                        }
                      } else {
                        {
// # 290
                        new_l->cl_nextexe = old_l->cl_nextexe;
                        }
                      }
                    } else {
                      {
// # 290
                      new_l->cl_nextexe = old_l->cl_nextexe;
                      }
                    }
                    {
// # 291
                    insert_nextexe(new_l);
                    }
// # 293
                    if (debug_opt) {
                      {
// # 295
                      ftime = localtime((time_t /*const*/   *)(& new_l->cl_nextexe));
                      }
// # 296
                      if (debug_opt) {
                        {
// # 296
                        Debug("  from last conf: %s next exec %d/%d/%d wday:%d %02d:%02d",
                              new_l->cl_shell, ftime->tm_mon + 1,
                              ftime->tm_mday, ftime->tm_year + 1900,
                              ftime->tm_wday, ftime->tm_hour, ftime->tm_min);
                        }
                      }
                    }
// # 303
                    break;
                  }
                }
              }
            }
          }
          {
// # 265
          old_l = old_l->cl_next;
          }
        }
        {
// # 264
        new_l = new_l->cl_next;
        }
      }
      {
// # 309
      delete_file((char /*const*/   *)user);
// # 312
      cur_f->cf_next = file_base;
// # 313
      file_base = cur_f;
// # 316
      save_file(cur_f);
// # 319
      tmp___3 = remove((char /*const*/   *)file_name);
      }
// # 319
      if (tmp___3 != 0) {
        {
// # 320
        error_e("could not remove %s", file_name);
        }
      }
    } else {
      {
// # 328
      cur_f = (cf_t *)calloc(1/*U*/, sizeof(cf_t ));
      }
// # 328
      if ((unsigned int )cur_f == (unsigned int )((void *)0)) {
        {
// # 328
        die_e("Could not calloc.");
        }
      }
      {
// # 330
      tmp___4 = read_file((char /*const*/   *)file_name, cur_f);
      }
// # 330
      if (tmp___4 != 0) {
// # 332
        return;
      }
      {
// # 336
      cur_f->cf_next = file_base;
// # 337
      file_base = cur_f;
// # 340
      save_file(cur_f);
// # 343
      tmp___5 = remove((char /*const*/   *)file_name);
      }
// # 343
      if (tmp___5 != 0) {
        {
// # 344
        error_e("could not remove %s", file_name);
        }
      }
    }
  } else {
    {
// # 352
    cur_f = (cf_t *)calloc(1/*U*/, sizeof(cf_t ));
    }
// # 352
    if ((unsigned int )cur_f == (unsigned int )((void *)0)) {
      {
// # 352
      die_e("Could not calloc.");
      }
    }
    {
// # 354
    tmp___6 = read_file((char /*const*/   *)file_name, cur_f);
    }
// # 354
    if (tmp___6 != 0) {
// # 356
      return;
    }
    {
// # 360
    cur_f->cf_next = file_base;
// # 361
    file_base = cur_f;
    }
  }
// # 365
  return;
}
}
// # 368
int read_strn(int fd , char **str , short size ) 
{ ssize_t tmp ;

  {
  {
// # 372
  (*str) = (char *)calloc((unsigned int )((int )size + 1), sizeof(char ));
  }
// # 372
  if ((unsigned int )(*str) == (unsigned int )((void *)0)) {
    goto err;
  }
  {
// # 375
  tmp = read(fd, (void *)(*str), (unsigned int )size);
  }
// # 375
  if (tmp < (int )size) {
    goto err;
  }
  {
// # 377
  (*((*str) + (int )size)) = '\0';
  }
// # 378
  return (0);
  err: 
// # 381
  if ((*str)) {
    {
// # 382
    free((void *)(*str));
    }
  }
  {
// # 383
  (*str) = (char *)((void *)0);
  }
// # 384
  return (-1);
}
}
// # 388
int read_type(int fd , short *type , short *size ) 
{ ssize_t tmp ;
  ssize_t tmp___0 ;

  {
  {
// # 392
  tmp = read(fd, (void *)type, sizeof(short ));
  }
// # 392
  if ((unsigned int )tmp < sizeof(short )) {
    goto err;
  }
  {
// # 394
  tmp___0 = read(fd, (void *)size, sizeof(short ));
  }
// # 394
  if ((unsigned int )tmp___0 < sizeof(short )) {
    goto err;
  }
// # 397
  return (0);
  err: 
// # 400
  return (-1);
}
}
// # 423
int read_file(char /*const*/   *file_name , cf_t *cf ) 
{ FILE *ff ;
  cl_t *cl ;
  env_t *env ;
  char buf[1024] ;
  long bufi ;
  time_t t_save ;
  uid_t runas ;
  char *runas_str ;
  struct stat file_stat ;
  struct passwd *pass ;
  short type ;
  short size ;
  int rc ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  ssize_t tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  ssize_t tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  ssize_t tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  ssize_t tmp___24 ;
  int tmp___25 ;
  ssize_t tmp___26 ;
  int tmp___27 ;
  ssize_t tmp___28 ;
  int tmp___29 ;
  ssize_t tmp___30 ;
  int tmp___31 ;
  ssize_t tmp___32 ;
  int tmp___33 ;
  ssize_t tmp___34 ;
  int tmp___35 ;
  ssize_t tmp___36 ;
  int tmp___37 ;
  ssize_t tmp___38 ;
  int tmp___39 ;
  ssize_t tmp___40 ;
  int tmp___41 ;
  ssize_t tmp___42 ;
  int tmp___43 ;
  ssize_t tmp___44 ;
  int tmp___45 ;
  ssize_t tmp___46 ;
  int tmp___47 ;
  ssize_t tmp___48 ;
  int tmp___49 ;
  ssize_t tmp___50 ;
  int tmp___51 ;
  ssize_t tmp___52 ;
  int tmp___53 ;
  int i ;
  int tmp___54 ;
  int tmp___55 ;
  int tmp___56 ;
  int tmp___57 ;

  {
  {
// # 428
  ff = (FILE *)((void *)0);
// # 429
  cl = (cl_t *)((void *)0);
// # 430
  env = (env_t *)((void *)0);
// # 432
  bufi = 0L;
// # 433
  t_save = (long )0;
// # 434
  runas = (unsigned int )0;
// # 435
  runas_str = (char *)((void *)0);
// # 437
  pass = (struct passwd *)((void *)0);
// # 438
  type = (short )0;
// # 438
  size = (short )0;
// # 448
  ff = fopen((char /*const*/   */* __restrict  */)file_name,
             (char /*const*/   */* __restrict  */)((char /*const*/   *)"r"));
  {
// # 17 "spec.work"
  if (ff != (FILE *)0) {
// # 17
    ff->BLAST_FLAG = 1;
  }
  {

  }
  }

  }
// # 448 "conf.c"
  if ((unsigned int )ff == (unsigned int )((void *)0)) {
    {
// # 449
    warn_e("Could not read %s (may have just been removed)", file_name);
    }
    goto err;
  }
  {
// # 455
  tmp = fileno(ff);
// # 455
  rc = fstat__extinline(tmp, & file_stat);
  }
// # 456
  if (rc != 0) {
    {
// # 457
    error_e("Could not stat %s", file_name);
    }
    goto err;
  }
  {
// # 468
  tmp___0 = strncmp(file_name, (char /*const*/   *)"new.", 4/*U*/);
  }
// # 468
  if (tmp___0 == 0) {
// # 469
    if (file_stat.st_uid == 0/*U*/) {
      {
// # 471
      runas = 0/*U*/;
      }
    } else {
      {
// # 476
      runas = file_stat.st_uid;
// # 477
      pass = getpwuid(file_stat.st_uid);
      }
// # 477
      if ((unsigned int )pass == (unsigned int )((void *)0)) {
        {
// # 478
        error_e("Could not getpwuid(%d)", file_stat.st_uid);
        }
        goto err;
      }
      {
// # 481
      runas_str = strdup2((char /*const*/   *)pass->pw_name);
      }
    }
    {
// # 483
    cf->cf_user = strdup2(file_name + 4);
    }
  } else {
// # 486
    if (! cf->cf_user) {
      {
// # 487
      cf->cf_user = strdup2(file_name);
      }
    }
// # 488
    if (file_stat.st_uid == 0/*U*/) {
      {
// # 491
      runas = 0/*U*/;
      }
    } else {
      {
// # 494
      error("Non-new file %s owned by someone else than root", file_name);
      }
      goto err;
    }
  }
// # 528
  if (debug_opt) {
    {
// # 528
    Debug("User %s Entry", file_name);
    }
  }
  {
// # 529
  bzero((void *)(buf), sizeof(buf));
// # 535
  tmp___1 = fileno(ff);
// # 535
  tmp___2 = read_type(tmp___1, & type, & size);
  }
// # 535
  if (tmp___2 != 0) {
    {
// # 537
    error("File %s is not valid: ignored.", file_name);
// # 538
    error("This file may have been generated by an old version of fcron.");
// # 539
    error("In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
    }
    goto err;
  } else {
// # 535
    if ((int )type != 1) {
      {
// # 537
      error("File %s is not valid: ignored.", file_name);
// # 538
      error("This file may have been generated by an old version of fcron.");
// # 539
      error("In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
      }
      goto err;
    } else {
      {
// # 535
      tmp___3 = fileno(ff);
// # 535
      tmp___4 = read(tmp___3, (void *)(& bufi), (unsigned int )size);
      }
// # 535
      if (tmp___4 < (int )size) {
        {
// # 537
        error("File %s is not valid: ignored.", file_name);
// # 538
        error("This file may have been generated by an old version of fcron.");
// # 539
        error("In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
        }
        goto err;
      } else {
// # 535
        if (bufi != 100L) {
          {
// # 537
          error("File %s is not valid: ignored.", file_name);
// # 538
          error("This file may have been generated by an old version of fcron.");
// # 539
          error("In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
          }
          goto err;
        }
      }
    }
  }
  {
// # 544
  tmp___5 = fileno(ff);
// # 544
  tmp___6 = read_type(tmp___5, & type, & size);
  }
// # 544
  if (tmp___6 != 0) {
    {
// # 545
    error("Invalid binary fcrontab (no USER field)");
    }
    goto err;
  } else {
// # 544
    if ((int )type != 2) {
      {
// # 545
      error("Invalid binary fcrontab (no USER field)");
      }
      goto err;
    }
  }
  {
// # 550
  free((void *)cf->cf_user);
// # 551
  tmp___7 = fileno(ff);
// # 551
  tmp___8 = read_strn(tmp___7, & cf->cf_user, size);
  }
// # 551
  if (tmp___8 != 0) {
    {
// # 552
    error("Cannot read user\'s name : file ignored");
    }
    goto err;
  }
// # 555
  if (runas != 0/*U*/) {
    {
// # 559
    free((void *)cf->cf_user);
// # 560
    cf->cf_user = runas_str;
    }
  }
  {
// # 565
  tmp___9 = fileno(ff);
// # 565
  tmp___10 = read_type(tmp___9, & type, & size);
  }
// # 565
  if (tmp___10 != 0) {
    {
// # 567
    error("could not get time and date of saving");
    }
    goto err;
  } else {
// # 565
    if ((int )type != 3) {
      {
// # 567
      error("could not get time and date of saving");
      }
      goto err;
    } else {
      {
// # 565
      tmp___11 = fileno(ff);
// # 565
      tmp___12 = read(tmp___11, (void *)(& t_save), (unsigned int )size);
      }
// # 565
      if (tmp___12 < (int )size) {
        {
// # 567
        error("could not get time and date of saving");
        }
        goto err;
      }
    }
  }
  {
// # 571
  cl = (cl_t *)calloc(1/*U*/, sizeof(cl_t ));
  }
// # 571
  if ((unsigned int )cl == (unsigned int )((void *)0)) {
    {
// # 571
    die_e("Could not calloc.");
    }
  }
// # 573
  while (1) {
    {
// # 573
    tmp___55 = fileno(ff);
// # 573
    tmp___56 = read_type(tmp___55, & type, & size);
    }
// # 573
    if (! (tmp___56 == 0)) {
// # 573
      break;
    }
// # 575
    switch ((int )type) {
    case 1000: 
    {
// # 579
    env = (env_t *)calloc(1/*U*/, sizeof(env_t ));
    }
// # 579
    if ((unsigned int )env == (unsigned int )((void *)0)) {
      {
// # 579
      die_e("Could not calloc.");
      }
    }
    {
// # 580
    tmp___13 = fileno(ff);
// # 580
    tmp___14 = read_strn(tmp___13, & env->e_val, size);
    }
// # 580
    if (tmp___14 != 0) {
      {
// # 580
      error_e("Error while reading env var");
      }
      goto err;
    }
// # 582
    if (debug_opt) {
      {
// # 582
      Debug("  Env: \"%s\"", env->e_val);
      }
    }
    {
// # 583
    env->e_next = cf->cf_env_base;
// # 584
    cf->cf_env_base = env;
    }
// # 585
    break;
    case 4: 
    {
// # 589
    tmp___15 = fileno(ff);
// # 589
    tmp___16 = read(tmp___15, (void *)(& bufi), (unsigned int )size);
    }
// # 589
    if (tmp___16 < (int )size) {
      {
// # 589
      error_e("Error while reading tzdiff field");
      }
      goto err;
    }
    {
// # 590
    cf->cf_tzdiff = (signed char )bufi;
    }
// # 591
    break;
    case 2001: 
    {
// # 594
    tmp___17 = fileno(ff);
// # 594
    tmp___18 = read_strn(tmp___17, & cl->cl_shell, size);
    }
// # 594
    if (tmp___18 != 0) {
      {
// # 594
      error_e("Error while reading shell field");
      }
      goto err;
    }
// # 595
    break;
    case 2006: 
    {
// # 598
    tmp___19 = fileno(ff);
// # 598
    tmp___20 = read_strn(tmp___19, & cl->cl_runas, size);
    }
// # 598
    if (tmp___20 != 0) {
      {
// # 598
      error_e("Error while reading runas field");
      }
      goto err;
    }
// # 599
    break;
    case 2007: 
    {
// # 602
    tmp___21 = fileno(ff);
// # 602
    tmp___22 = read_strn(tmp___21, & cl->cl_mailto, size);
    }
// # 602
    if (tmp___22 != 0) {
      {
// # 602
      error_e("Error while reading mailto field");
      }
      goto err;
    }
// # 603
    break;
    case 2008: 
    {
// # 606
    tmp___23 = fileno(ff);
// # 606
    tmp___24 = read(tmp___23, (void *)(& bufi), (unsigned int )size);
    }
// # 606
    if (tmp___24 < (int )size) {
      {
// # 606
      error_e("Error while reading nextexe field");
      }
      goto err;
    }
    {
// # 607
    cl->cl_nextexe = bufi;
    }
// # 608
    break;
    case 2018: 
    {
// # 611
    tmp___25 = fileno(ff);
// # 611
    tmp___26 = read(tmp___25, (void *)(& bufi), (unsigned int )size);
    }
// # 611
    if (tmp___26 < (int )size) {
      {
// # 611
      error_e("Error while reading first field");
      }
      goto err;
    }
    {
// # 612
    cl->cl_first = bufi;
    }
// # 613
    break;
    case 2017: 
    {

    }
// # 616
    if ((int )size < 4) {

    }
    {
// # 619
    tmp___27 = fileno(ff);
// # 619
    tmp___28 = read(tmp___27, (void *)(& cl->cl_option), (unsigned int )size);
    }
// # 619
    if (tmp___28 < (int )size) {
      {
// # 619
      error_e("Error while reading option field");
      }
      goto err;
    }
// # 620
    break;
    case 2002: 
    {
// # 623
    tmp___29 = fileno(ff);
// # 623
    tmp___30 = read(tmp___29, (void *)(& cl->cl_numexe), (unsigned int )size);
    }
// # 623
    if (tmp___30 < (int )size) {
      {
// # 623
      error_e("Error while reading numexe field");
      }
      goto err;
    }
// # 624
    break;
    case 2003: 
    {
// # 627
    tmp___31 = fileno(ff);
// # 627
    tmp___32 = read(tmp___31, (void *)(& cl->cl_lavg), (unsigned int )size);
    }
// # 627
    if (tmp___32 < (int )size) {
      {
// # 627
      error_e("Error while reading lavg field");
      }
      goto err;
    }
// # 628
    break;
    case 2004: 
    {
// # 631
    tmp___33 = fileno(ff);
// # 631
    tmp___34 = read(tmp___33, (void *)(& bufi), (unsigned int )size);
    }
// # 631
    if (tmp___34 < (int )size) {
      {
// # 631
      error_e("Error while reading until field");
      }
      goto err;
    }
    {
// # 632
    cl->cl_until = bufi;
    }
// # 633
    break;
    case 2005: 
    {
// # 636
    tmp___35 = fileno(ff);
// # 636
    tmp___36 = read(tmp___35, (void *)(& cl->cl_nice), (unsigned int )size);
    }
// # 636
    if (tmp___36 < (int )size) {
      {
// # 636
      error_e("Error while reading nice field");
      }
      goto err;
    }
// # 637
    break;
    case 2011: 
    {
// # 640
    tmp___37 = fileno(ff);
// # 640
    tmp___38 = read(tmp___37, (void *)(& bufi), (unsigned int )size);
    }
// # 640
    if (tmp___38 < (int )size) {
      {
// # 640
      error_e("Error while reading runfreq field");
      }
      goto err;
    }
    {
// # 641
    cl->cl_runfreq = (unsigned short )bufi;
    }
// # 642
    break;
    case 2009: 
    {
// # 645
    tmp___39 = fileno(ff);
// # 645
    tmp___40 = read(tmp___39, (void *)(& bufi), (unsigned int )size);
    }
// # 645
    if (tmp___40 < (int )size) {
      {
// # 645
      error_e("Error while reading remain field");
      }
      goto err;
    }
    {
// # 646
    cl->cl_remain = (unsigned short )bufi;
    }
// # 647
    break;
    case 2010: 
    {
// # 650
    tmp___41 = fileno(ff);
// # 650
    tmp___42 = read(tmp___41, (void *)(& bufi), (unsigned int )size);
    }
// # 650
    if (tmp___42 < (int )size) {
      {
// # 650
      error_e("Error while reading timefreq field");
      }
      goto err;
    }
    {
// # 651
    cl->cl_timefreq = bufi;
    }
// # 652
    break;
    case 2012: 
    {
// # 655
    tmp___43 = fileno(ff);
// # 655
    tmp___44 = read(tmp___43, (void *)(& cl->cl_mins), (unsigned int )size);
    }
// # 655
    if (tmp___44 < (int )size) {
      {
// # 655
      error_e("Error while reading mins field");
      }
      goto err;
    }
// # 656
    break;
    case 2013: 
    {
// # 659
    tmp___45 = fileno(ff);
// # 659
    tmp___46 = read(tmp___45, (void *)(& cl->cl_hrs), (unsigned int )size);
    }
// # 659
    if (tmp___46 < (int )size) {
      {
// # 659
      error_e("Error while reading hrs field");
      }
      goto err;
    }
// # 660
    break;
    case 2014: 
    {
// # 663
    tmp___47 = fileno(ff);
// # 663
    tmp___48 = read(tmp___47, (void *)(& cl->cl_days), (unsigned int )size);
    }
// # 663
    if (tmp___48 < (int )size) {
      {
// # 663
      error_e("Error while reading days field");
      }
      goto err;
    }
// # 664
    break;
    case 2015: 
    {
// # 667
    tmp___49 = fileno(ff);
// # 667
    tmp___50 = read(tmp___49, (void *)(& cl->cl_mons), (unsigned int )size);
    }
// # 667
    if (tmp___50 < (int )size) {
      {
// # 667
      error_e("Error while reading mons field");
      }
      goto err;
    }
// # 668
    break;
    case 2016: 
    {
// # 671
    tmp___51 = fileno(ff);
// # 671
    tmp___52 = read(tmp___51, (void *)(& cl->cl_dow), (unsigned int )size);
    }
// # 671
    if (tmp___52 < (int )size) {
      {
// # 671
      error_e("Error while reading dow field");
      }
      goto err;
    }
// # 672
    break;
    case 2000: 
    {
// # 675
    tmp___53 = add_line_to_file(cl, cf, runas, runas_str, t_save);
    }
// # 675
    if (tmp___53 == 0) {
      {
// # 676
      cl = (cl_t *)calloc(1/*U*/, sizeof(cl_t ));
      }
// # 676
      if ((unsigned int )cl == (unsigned int )((void *)0)) {
        {
// # 676
        die_e("Could not calloc.");
        }
      }
    }
// # 677
    break;
    default: 
    {
// # 681
    error("Error while loading %s : unknown field type %d (ignored)", file_name,
          type);
// # 688
    i = 0;
    }
// # 688
    while (i < (int )size) {
      {
// # 689
      tmp___54 = _IO_getc(ff);
      }
// # 689
      if (tmp___54 == -1) {
        goto err;
      }
      {
// # 688
      i ++;
      }
    }
    }
  }
  {
// # 696
  free((void *)cl);
// # 699
  tmp___57 = ferror(ff);
  }
// # 699
  if (tmp___57 != 0) {
    {
// # 700
    error("file %s is truncated : you should reinstall it with fcrontab",
          file_name);
    }
  }
  {

  {
// # 96 "spec.work"
  if (ff->BLAST_FLAG == 1) {
// # 97
    ff->BLAST_FLAG = 0;
  } else {
// # 98
    BLAST_ERROR();
  }
  {

  }
  }
// # 703 "conf.c"
  fclose(ff);
  }
// # 705
  return (0);
  err: 
// # 708
  if ((unsigned int )ff != (unsigned int )((void *)0)) {
    // # 96 "spec.work"
    if (ff->BLAST_FLAG == 1) {
      // # 97
      ff->BLAST_FLAG = 0;
    } else {
      // # 98
      BLAST_ERROR();
    }
    // # 709 "conf.c"
    fclose(ff);
  }
// # 711
  if ((unsigned int )cl != (unsigned int )((void *)0)) {
    // # 711
    if ((unsigned int )cl->cl_next == (unsigned int )((void *)0)) {
      // # 713
      if (cl->cl_shell) {
	// # 713
	free((void *)cl->cl_shell);
      }
// # 714
      if (cl->cl_runas) {
	// # 714
        free((void *)cl->cl_runas);
      }
// # 715
      if (cl->cl_mailto) {
	// # 715
        free((void *)cl->cl_mailto);
      }
// # 716
      free((void *)cl);
    }
  }
// # 720
  if ((unsigned int )cl != (unsigned int )((void *)0)) {
    {
// # 724
    cf->cf_next = file_base;
// # 725
    file_base = cf;
// # 727
    delete_file((char /*const*/   *)cf->cf_user);
    }
  } else {
// # 730
    if ((unsigned int )cf->cf_user != (unsigned int )((void *)0)) {
      {
// # 731
      free((void *)cf->cf_user);
      }
    }
  }
// # 733
  return (-1);
}
}
// # 738
int add_line_to_file(cl_t *cl , cf_t *cf , uid_t runas , char *runas_str ,
                     time_t t_save ) 
{ time_t slept ;
  int tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  struct tm *since2 ;
  struct tm *tmp___2 ;
  struct tm since ;
  struct tm *ftime ;
  unsigned long tmp___3 ;

  {
  {
// # 742
  slept = now - t_save;
  }
// # 744
  if ((unsigned int )cl->cl_shell == (unsigned int )((void *)0)) {
    goto _L;
  } else {
// # 744
    if ((unsigned int )cl->cl_runas == (unsigned int )((void *)0)) {
      goto _L;
    } else {
// # 744
      if ((unsigned int )cl->cl_mailto == (unsigned int )((void *)0)) {
        _L: 
        {
// # 746
        error("Line is not valid (empty shell, runas or mailto field) : ignored");
// # 748
        bzero((void *)cl, sizeof(cl));
        }
// # 749
        if (cl->cl_shell) {
          {
// # 749
          free((void *)cl->cl_shell);
          }
        }
// # 750
        if (cl->cl_runas) {
          {
// # 750
          free((void *)cl->cl_runas);
          }
        }
// # 751
        if (cl->cl_mailto) {
          {
// # 751
          free((void *)cl->cl_mailto);
          }
        }
// # 752
        return (1);
      }
    }
  }
// # 756
  if (runas != 0/*U*/) {
    {
// # 757
    tmp = strcmp((char /*const*/   *)cl->cl_runas, (char /*const*/   *)runas_str);
    }
// # 757
    if (tmp != 0) {
      {
// # 758
      warn("warning: runas(%s) is not owner (%s): overridden.", cl->cl_runas,
           runas_str);
      }
    }
    {
// # 760
    free((void *)cl->cl_runas);
// # 760
    cl->cl_runas = strdup2((char /*const*/   *)runas_str);
    }
  }
  {
// # 765
  cl->cl_file = cf;
  }
// # 768
  if (cl->cl_mailto) {
// # 768
    if ((int )(*(cl->cl_mailto)) == 45) {
      {
// # 770
      error("mailto field \'%s\' is not valid : set to owner %s.",
            cl->cl_mailto, (cl->cl_file)->cf_user);
// # 772
      free((void *)cl->cl_mailto);
// # 773
      cl->cl_mailto = strdup2((char /*const*/   *)(cl->cl_file)->cf_user);
      }
    } else {
      {
// # 768
      tmp___0 = strcspn((char /*const*/   *)cl->cl_mailto, (char /*const*/   *)" \t\n");
// # 768
      tmp___1 = strlen((char /*const*/   *)cl->cl_mailto);
      }
// # 768
      if (tmp___0 != tmp___1) {
        {
// # 770
        error("mailto field \'%s\' is not valid : set to owner %s.",
              cl->cl_mailto, (cl->cl_file)->cf_user);
// # 772
        free((void *)cl->cl_mailto);
// # 773
        cl->cl_mailto = strdup2((char /*const*/   *)(cl->cl_file)->cf_user);
        }
      }
    }
  }
// # 778
  if ((int )cl->cl_numexe > 0) {
    {
// # 779
    cl->cl_numexe = (unsigned char )0;
    }
// # 780
    if ((int )cl->cl_option[0] & 2) {
// # 781
      if ((int )cl->cl_option[2] & 16) {
        {
// # 782
        add_lavg_job(cl, -1);
        }
      }
    } else {
// # 784
      if ((int )cl->cl_option[0] & 32) {
        {
// # 786
        add_serial_job(cl, -1);
        }
      } else {
// # 784
        if ((int )cl->cl_option[0] & 64) {
          {
// # 786
          add_serial_job(cl, -1);
          }
        } else {
          {
// # 790
          warn("job %s did not finish : running it again.", cl->cl_shell);
// # 792
          cl->cl_option[0] = (unsigned char )((int )cl->cl_option[0] | 64);
// # 793
          add_serial_job(cl, -1);
          }
        }
      }
    }
  }
// # 797
  if ((int )cl->cl_option[0] & 1) {
// # 843
    if ((int )cl->cl_option[3] & 1) {
      {
// # 845
      cl->cl_nextexe = now + cl->cl_first;
      }
    } else {
      {
// # 847
      cl->cl_nextexe = cl->cl_nextexe + slept;
      }
    }
// # 849
    if (cl->cl_timefreq < 10L) {
      {
// # 850
      error("Invalid timefreq for %s: set to 1 day", cl->cl_shell);
// # 852
      cl->cl_timefreq = 86400L;
      }
    }
    {
// # 854
    insert_nextexe(cl);
    }
  } else {
// # 800
    if (cl->cl_nextexe <= now) {
// # 801
      if (cl->cl_nextexe == 0L) {
        {
// # 803
        set_next_exe(cl, (char )1, -1);
        }
      } else {
// # 804
        if ((int )cl->cl_runfreq == 1) {
// # 804
          if ((int )cl->cl_option[2] & 32) {
            {
// # 806
            set_next_exe_notrun(cl, (char )2);
            }
          } else {
            goto _L___3;
          }
        } else {
          _L___3: 
// # 807
          if ((int )cl->cl_option[0] & 16) {
// # 807
            if (t_save != 0L) {
// # 807
              if ((int )cl->cl_runfreq != 1) {
// # 809
                if ((int )cl->cl_remain > 0) {
                  {
// # 809
                  cl->cl_remain = (unsigned short )((int )cl->cl_remain - 1);
                  }
// # 809
                  if ((int )cl->cl_remain > 0) {
// # 810
                    if (debug_opt) {
                      {
// # 810
                      Debug("    cl_remain: %d", cl->cl_remain);
                      }
                    }
                  } else {
                    goto _L___0;
                  }
                } else {
                  _L___0: 
                  {
// # 814
                  cl->cl_remain = cl->cl_runfreq;
                  }
// # 815
                  if (debug_opt) {
                    {
// # 815
                    Debug("   boot-run %s", cl->cl_shell);
                    }
                  }
// # 816
                  if ((int )cl->cl_option[0] & 2) {
                    {
// # 821
                    add_lavg_job(cl, -1);
                    }
                  } else {
                    {
// # 817
                    cl->cl_option[0] = (unsigned char )((int )cl->cl_option[0] |
                                                        64);
// # 818
                    add_serial_job(cl, -1);
                    }
                  }
                }
                {
// # 823
                set_next_exe(cl, (char )0, -1);
                }
              } else {
                goto _L___2;
              }
            } else {
              goto _L___2;
            }
          } else {
            _L___2: 
// # 826
            if ((int )cl->cl_option[2] & 32) {
              {
// # 828
              tmp___2 = localtime((time_t /*const*/   *)(& cl->cl_nextexe));
// # 828
              since2 = tmp___2;
// # 830
              memcpy((void */* __restrict  */)((void *)(& since)),
                     (void /*const*/   */* __restrict  */)((void /*const*/   *)since2),
                     sizeof(since));
// # 831
              set_next_exe(cl, (char )1, -1);
// # 832
              mail_notrun(cl, (char )2, & since);
              }
            } else {
              {
// # 835
              set_next_exe(cl, (char )1, -1);
              }
            }
          }
        }
      }
    } else {
      {
// # 840
      insert_nextexe(cl);
      }
    }
  }
// # 857
  if (debug_opt) {
    {
// # 859
    ftime = localtime((time_t /*const*/   *)(& cl->cl_nextexe));
    }
// # 860
    if (debug_opt) {
      {
// # 860
      Debug("  cmd %s next exec %d/%d/%d wday:%d %02d:%02d:%02d", cl->cl_shell,
            ftime->tm_mon + 1, ftime->tm_mday, ftime->tm_year + 1900,
            ftime->tm_wday, ftime->tm_hour, ftime->tm_min, ftime->tm_sec);
      }
    }
  }
  {
// # 867
  tmp___3 = next_id;
// # 867
  next_id = next_id + 1/*UL*/;
// # 867
  cl->cl_id = (long )tmp___3;
  }
// # 867
  if ((unsigned long )cl->cl_id >= 4294967294/*UL*/) {
    {
// # 868
    next_id = 0/*UL*/;
    }
  }
  {
// # 869
  cl->cl_next = cf->cf_line_base;
// # 870
  cf->cf_line_base = cl;
  }
// # 871
  return (0);
}
}
// # 874
void delete_file(char /*const*/   *user_name ) 
{ cf_t *file ;
  cf_t *prev_file ;
  cl_t *line ;
  cl_t *cur_line ;
  env_t *env ;
  env_t *cur_env ;
  struct job_t *j ;
  struct job_t *prev_j ;
  int i ;
  int k ;
  struct cl_t **s_a ;
  int tmp ;

  {
  {
// # 880
  prev_file = (cf_t *)((void *)0);
// # 883
  env = (env_t *)((void *)0);
// # 884
  cur_env = (env_t *)((void *)0);
// # 885
  j = (struct job_t *)((void *)0);
// # 888
  s_a = (struct cl_t **)((void *)0);
// # 890
  file = file_base;
  }
// # 891
  while ((unsigned int )file != (unsigned int )((void *)0)) {
    {
// # 892
    tmp = strcmp(user_name, (char /*const*/   *)file->cf_user);
    }
// # 892
    if (tmp != 0) {
      {
// # 893
      prev_file = file;
// # 894
      file = file->cf_next;
      }
// # 895
      continue;
    }
    {
// # 898
    i = 0;
    }
// # 898
    while (i < (int )exe_num) {
// # 899
      if ((unsigned int )(exe_array + i)->e_line != (unsigned int )((void *)0)) {
// # 899
        if ((unsigned int )((exe_array + i)->e_line)->cl_file ==
            (unsigned int )file) {
// # 905
          if ((int )((exe_array + i)->e_line)->cl_option[0] & 32) {
            goto _L___0;
          } else {
// # 905
            if ((int )((exe_array + i)->e_line)->cl_option[0] & 64) {
              _L___0: 
// # 905
              if ((int )((exe_array + i)->e_line)->cl_option[0] & 2) {
                goto _L;
              } else {
                {
// # 908
                serial_running = (short )((int )serial_running - 1);
                }
              }
            } else {
              _L: 
// # 909
              if ((int )((exe_array + i)->e_line)->cl_option[0] & 32) {
// # 909
                if ((int )((exe_array + i)->e_line)->cl_option[0] & 2) {
                  {
// # 911
                  lavg_serial_running = (short )((int )lavg_serial_running - 1);
                  }
                }
              }
            }
          }
          {
// # 912
          (exe_array + i)->e_line = (struct cl_t *)((void *)0);
          }
        }
      }
      {
// # 898
      i ++;
      }
    }
    {
// # 916
    i = 0;
    }
// # 917
    while (i < (int )lavg_num) {
// # 918
      if ((unsigned int )((lavg_array + i)->l_line)->cl_file ==
          (unsigned int )file) {
// # 919
        if (debug_opt) {
          {
// # 919
          Debug("removing %s from lavg queue",
                ((lavg_array + i)->l_line)->cl_shell);
          }
        }
        {
// # 921
        ((lavg_array + i)->l_line)->cl_numexe = (unsigned char )((int )((lavg_array +
                                                                         i)->l_line)->cl_numexe -
                                                                 1);
// # 922
        lavg_num = (short )((int )lavg_num - 1);
        }
// # 922
        if (i < (int )lavg_num) {
          {
// # 923
          (*(lavg_array + i)) = (*(lavg_array + (int )lavg_num));
// # 924
          (lavg_array + (int )lavg_num)->l_line = (struct cl_t *)((void *)0);
          }
        } else {
          {
// # 927
          (lavg_array + i)->l_line = (struct cl_t *)((void *)0);
          }
        }
      } else {
        {
// # 930
        i ++;
        }
      }
    }
    {
// # 933
    i = 0;
    }
// # 933
    while (i < (int )serial_array_size) {
// # 934
      if ((unsigned int )(*(serial_array + i)) != (unsigned int )((void *)0)) {
// # 934
        if ((unsigned int )((*(serial_array + i)))->cl_file ==
            (unsigned int )file) {
// # 935
          if (! s_a) {
            {
// # 936
            s_a = (struct cl_t **)calloc((unsigned int )serial_array_size,
                                         sizeof(cl_t *));
            }
          }
// # 937
          if (debug_opt) {
            {
// # 937
            Debug("removing %s from serial queue",
                  ((*(serial_array + i)))->cl_shell);
            }
          }
          {
// # 939
          serial_num = (short )((int )serial_num - 1);
// # 940
          ((*(serial_array + i)))->cl_numexe = (unsigned char )((int )((*(serial_array +
                                                                          i)))->cl_numexe -
                                                                1);
// # 941
          (*(serial_array + i)) = (struct cl_t *)((void *)0);
          }
        }
      }
      {
// # 933
      i ++;
      }
    }
// # 945
    if (! s_a) {
      goto end_of_serial_recomputing;
    }
    {
// # 948
    k = (int )serial_array_index + (int )serial_num;
    }
// # 948
    if (k >= (int )serial_array_size) {
      {
// # 949
      k -= (int )serial_array_size;
      }
    }
    {
// # 950
    k = 0;
// # 950
    i = k;
    }
// # 950
    while (i < (int )serial_array_size) {
// # 951
      if ((int )serial_array_index + i < (int )serial_array_size) {
        {
// # 952
        (*(s_a + k)) = (*(serial_array + ((int )serial_array_index + i)));
        }
// # 952
        if ((unsigned int )(*(s_a + k)) != (unsigned int )((void *)0)) {
          {
// # 953
          k ++;
          }
        }
      } else {
        {
// # 956
        (*(s_a + k)) = (*(serial_array + (((int )serial_array_index + i) -
                                          (int )serial_array_size)));
        }
// # 956
        if ((unsigned int )(*(s_a + k)) != (unsigned int )((void *)0)) {
          {
// # 959
          k ++;
          }
        }
      }
      {
// # 950
      i ++;
      }
    }
    {
// # 961
    free((void *)serial_array);
// # 962
    serial_array = s_a;
// # 963
    serial_array_index = (short )0;
    }
    end_of_serial_recomputing: 
    {
// # 968
    cur_line = file->cf_line_base;
    }
// # 969
    while (1) {
      {
// # 969
      line = cur_line;
      }
// # 969
      if (! ((unsigned int )line != (unsigned int )((void *)0))) {
// # 969
        break;
      }
      {
// # 970
      cur_line = line->cl_next;
// # 973
      prev_j = (struct job_t *)((void *)0);
// # 974
      j = queue_base;
      }
// # 974
      while ((unsigned int )j != (unsigned int )((void *)0)) {
// # 975
        if ((unsigned int )j->j_line == (unsigned int )line) {
// # 976
          if ((unsigned int )prev_j != (unsigned int )((void *)0)) {
            {
// # 977
            prev_j->j_next = j->j_next;
            }
          } else {
            {
// # 979
            queue_base = j->j_next;
            }
          }
          {
// # 980
          free((void *)j);
          }
// # 981
          break;
        } else {
          {
// # 984
          prev_j = j;
          }
        }
        {
// # 974
        j = j->j_next;
        }
      }
      {
// # 987
      free((void *)line->cl_shell);
// # 988
      free((void *)line->cl_runas);
// # 989
      free((void *)line->cl_mailto);
// # 990
      free((void *)line);
      }
    }
// # 994
    break;
  }
// # 997
  if ((unsigned int )file == (unsigned int )((void *)0)) {
// # 999
    return;
  }
// # 1002
  if ((unsigned int )prev_file == (unsigned int )((void *)0)) {
    {
// # 1003
    file_base = file->cf_next;
    }
  } else {
    {
// # 1005
    prev_file->cf_next = file->cf_next;
    }
  }
  {
// # 1008
  cur_env = file->cf_env_base;
  }
// # 1009
  while (1) {
    {
// # 1009
    env = cur_env;
    }
// # 1009
    if (! ((unsigned int )env != (unsigned int )((void *)0))) {
// # 1009
      break;
    }
    {
// # 1010
    cur_env = env->e_next;
// # 1011
    free((void *)env->e_val);
// # 1012
    free((void *)env);
    }
  }
  {
// # 1016
  free((void *)file->cf_user);
// # 1017
  free((void *)file);
  }
// # 1019
  return;
}
}
// # 1022
void save_file(struct cf_t *arg_file ) 
{ cf_t *file ;
  cf_t *start_file ;

  {
  {
// # 1027
  file = (cf_t *)((void *)0);
// # 1028
  start_file = (cf_t *)((void *)0);
  }
// # 1030
  if ((unsigned int )arg_file != (unsigned int )((void *)0)) {
    {
// # 1031
    start_file = arg_file;
    }
  } else {
    {
// # 1033
    start_file = file_base;
    }
  }
  {
// # 1036
  file = start_file;
  }
// # 1036
  while (file) {
// # 1038
    if (debug_opt) {
      {
// # 1038
      Debug("Saving %s...", file->cf_user);
      }
    }
    {
// # 1043
    save_file_safe(file, file->cf_user, "fcron", 0/*U*/, 0/*U*/, now);
    }
// # 1045
    if ((unsigned int )arg_file != (unsigned int )((void *)0)) {
// # 1047
      break;
    }
    {
// # 1036
    file = file->cf_next;
    }
  }
// # 1049
  return;
}
}
// # 35 "socket.c"
void remove_connection(struct fcrondyn_cl **client ,
                       struct fcrondyn_cl *prev_client ) ;
// # 36
void exe_cmd(struct fcrondyn_cl *client ) ;
// # 37
void auth_client(struct fcrondyn_cl *client ) ;
// # 38
void cmd_ls(struct fcrondyn_cl *client , long *cmd , int fd , int is_root ) ;
// # 39
void print_fields(int fd , unsigned char *details ) ;
// # 40
void print_line(int fd , struct cl_t *line , unsigned char *details ,
                pid_t pid , int index___0 , time_t until ) ;
// # 42
void cmd_on_exeq(struct fcrondyn_cl *client , long *cmd , int fd , int is_root ) ;
// # 43
void cmd_renice(struct fcrondyn_cl *client , long *cmd , int fd ,
                int exe_index , int is_root ) ;
// # 45
void cmd_send_signal(struct fcrondyn_cl *client , long *cmd , int fd ,
                     int exe_index ) ;
// # 46
void cmd_run(struct fcrondyn_cl *client , long *cmd , int fd , int is_root ) ;
// # 48
fcrondyn_cl *fcrondyn_cl_base  ;
// # 49
int fcrondyn_cl_num /*   = 0 */;
// # 51
fd_set master_set  ;
// # 52
/*int set_max_fd    = 0; */
// # 53
int listen_fd /*   = -1 */;
// # 54
int auth_fail /*   = 0 */;
// # 55
long auth_nofail_since /*   = (long )0 */;
// # 58
char err_no_err_str[33] /*   =  */
/* // # 58 */
/*   {'C', 'o', 'm', 'm', 'a', 'n', 'd', ' ', 's', 'u', 'c', 'c', 'e', 's', 's', */
/*    'f', 'u', 'l', 'l', 'y', ' ', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'e', 'd', */
/*    '.', '\n', '\0'} */;
// # 59
char err_unknown_str[57]/*    =  */
/* // # 59 */
/*   {'F', 'c', 'r', 'o', 'n', ' ', 'h', 'a', 's', ' ', 'e', 'n', 'c', 'o', 'u', */
/*    'n', 't', 'e', 'r', 'e', 'd', ' ', 'a', 'n', ' ', 'e', 'r', 'r', 'o', 'r', */
/*    ' ', ':', ' ', 'c', 'o', 'm', 'm', 'a', 'n', 'd', ' ', 'n', 'o', 't', ' ', */
/*    'c', 'o', 'm', 'p', 'l', 'e', 't', 'e', 'd', '.', '\n', '\0'} */;
// # 60
char err_cmd_unknown_str[18] /*   =  */
/* // # 60 */
/*   {'U', 'n', 'k', 'n', 'o', 'w', 'n', ' ', 'c', 'o', 'm', 'm', 'a', 'n', 'd', */
/*    '.', '\n', '\0'} */;
// # 61
char err_job_nfound_str[29]/*    =  */
/* // # 61 */
/*   {'N', 'o', ' ', 'c', 'o', 'r', 'r', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', */
/*    'g', ' ', 'j', 'o', 'b', ' ', 'f', 'o', 'u', 'n', 'd', '.', '\n', '\0'} */;
// # 62
char err_rjob_nfound_str[86]/*    =  */
/* // # 62 */
/*   {'N', 'o', ' ', 'c', 'o', 'r', 'r', 'e', 's', 'p', 'o', 'n', 'd', 'i', 'n', */
/*    'g', ' ', 'r', 'u', 'n', 'n', 'i', 'n', 'g', ' ', 'j', 'o', 'b', ' ', 'f', */
/*    'o', 'u', 'n', 'd', '.', '\n', ' ', '(', 'T', 'h', 'e', ' ', 'j', 'o', 'b', */
/*    ' ', 'm', 'a', 'y', ' ', 'h', 'a', 'v', 'e', ' ', 'j', 'u', 's', 't', ' ', */
/*    'f', 'i', 'n', 'i', 's', 'h', 'e', 'd', ' ', 'i', 't', 's', ' ', 'e', 'x', */
/*    'e', 'c', 'u', 't', 'i', 'o', 'n', '.', ')', '\n', '\0'} */;
// # 64
char err_invalid_user_str[47]/*    =  */
/* // # 64 */
/*   {'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'u', 's', 'e', 'r', ' ', ':', ' ', */
/*    'u', 'n', 'a', 'b', 'l', 'e', ' ', 't', 'o', ' ', 'f', 'i', 'n', 'd', ' ', */
/*    'a', ' ', 'p', 'a', 's', 's', 'w', 'd', ' ', 'e', 'n', 't', 'r', 'y', '.', */
/*    '\n', '\0'} */;
// # 65
char err_invalid_args_str[20]/*    =  */
/* // # 65 */
/*   {'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'a', 'r', 'g', 'u', 'm', 'e', 'n', */
/*    't', 's', '.', '\n', '\0'} */;
// # 66
char err_job_nallowed_str[46]/*    =  */
/* // # 66 */
/*   {'Y', 'o', 'u', ' ', 'a', 'r', 'e', ' ', 'n', 'o', 't', ' ', 'a', 'l', 'l', */
/*    'o', 'w', 'e', 'd', ' ', 't', 'o', ' ', 's', 'e', 'e', '/', 'c', 'h', 'a', */
/*    'n', 'g', 'e', ' ', 't', 'h', 'i', 's', ' ', 'l', 'i', 'n', 'e', '.', '\n', */
/*    '\0'} */;
// # 67
char err_all_nallowed_str[39]/*    =  */
/* // # 67 */
/*   {'Y', 'o', 'u', ' ', 'a', 'r', 'e', ' ', 'n', 'o', 't', ' ', 'a', 'l', 'l', */
/*    'o', 'w', 'e', 'd', ' ', 't', 'o', ' ', 'l', 'i', 's', 't', ' ', 'a', 'l', */
/*    'l', ' ', 'j', 'o', 'b', 's', '.', '\n', '\0'} */;
// # 68
char err_others_nallowed_str[48]/*    =  */
/* // # 68 */
/*   {'Y', 'o', 'u', ' ', 'a', 'r', 'e', ' ', 'n', 'o', 't', ' ', 'a', 'l', 'l', */
/*    'o', 'w', 'e', 'd', ' ', 't', 'o', ' ', 'l', 'i', 's', 't', ' ', 'o', 't', */
/*    'h', 'e', 'r', ' ', 'u', 's', 'e', 'r', 's', '\'', ' ', 'j', 'o', 'b', 's', */
/*    '.', '\n', '\0'} */;
// # 97
void init_socket(void) 
{ struct sockaddr_un addr ;
  int len ;
  unsigned int i__i ;
  fd_set *a__arr ;
  unsigned int i__i___0 ;
  fd_set *a__arr___0 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  {
    // # 102
    len = 0;
    // # 105
    while (1) {
      // # 105
      a__arr = & read_set;
      // # 105
      i__i = 0/*U*/;
      // # 105
      while (i__i < sizeof(fd_set ) / sizeof(__fd_mask )) {
	// # 105
	a__arr->__fds_bits[i__i] = 0L;
	// # 105
	i__i ++;
      }
      // # 105
      break;
    }
    // # 106
    while (1) {
      {
	// # 106
	a__arr___0 = & master_set;
	// # 106
	i__i___0 = 0/*U*/;
      }
      // # 106
      while (i__i___0 < sizeof(fd_set ) / sizeof(__fd_mask )) {
	{
	  // # 106
	  a__arr___0->__fds_bits[i__i___0] = 0L;
	  // # 106
	  i__i___0 ++;
	}
      }
      // # 106
      break;
    }
    {
      // # 108
      listen_fd = socket(1, 1, 0);
    }
    // # 108
    if (listen_fd == -1) {
      {
	// # 109
	error_e("Could not create socket : fcrondyn won\'t work");
      }
// # 110
      return;
    }
    {
      // # 113
      addr.sun_family = (unsigned short )1;
// # 114
      len = (int )strlen((char /*const*/   *)fifofile);
    }
    // # 114
    if ((unsigned int )len > sizeof(addr.sun_path)) {
      {
	// # 115
	error("Error : fifo file path too long (max is %d)", sizeof(addr.sun_path));
    }
      goto err;
    }
    {
      // # 118
      strncpy((char */* __restrict  */)(addr.sun_path),
	      (char /*const*/   */* __restrict  */)((char /*const*/   *)fifofile),
	      sizeof(addr.sun_path) - 1/*U*/);
      // # 119
  addr.sun_path[sizeof(addr.sun_path) - 1/*U*/] = '\0';
// # 121
  unlink((char /*const*/   *)fifofile);
// # 122
  tmp = bind(listen_fd, (void /*const*/   *)((struct sockaddr *)(& addr)),
             sizeof(addr.sun_family) + (unsigned int )len);
  }
// # 122
  if (tmp != 0) {
    {
// # 123
    error_e("Cannot bind socket to \'%s\'", fifofile);
    }
    goto err;
  }
  {
// # 127
  tmp___0 = listen(listen_fd, 25);
  }
// # 127
  if (tmp___0 != 0) {
    {
// # 128
    error_e("Cannot set socket in listen mode");
    }
    goto err;
  }
  {
// # 133
  tmp___1 = chmod((char /*const*/   *)fifofile, 438/*U*/);
  }
// # 133
  if (tmp___1 != 0) {
    {
// # 134
    error_e("Cannot chmod() socket file");
    }
  }
  {
// # 137
  fcntl(listen_fd, 2, 1);
// # 139
  tmp___2 = fcntl(listen_fd, 3);
// # 139
  tmp___3 = fcntl(listen_fd, 4, tmp___2 | 2048);
  }
// # 139
  if (tmp___3 == -1) {
    {
// # 140
    error_e("Could not set listen_fd attribute O_NONBLOCK : no fcrondyn support");
    }
    goto err;
  }
  {
// # 145
  master_set.__fds_bits[(unsigned int )listen_fd / (8/*U*/ * sizeof(__fd_mask ))] = master_set.__fds_bits[(unsigned int )listen_fd /
                                                                                                      (8/*U*/ *
                                                                                                       sizeof(__fd_mask ))] |
                                                                                (1L <<
                                                                                 (unsigned int )listen_fd %
                                                                                 (8/*U*/ *
                                                                                  sizeof(__fd_mask )));
  }
// # 146
  if (listen_fd > set_max_fd) {
    {
// # 147
    set_max_fd = listen_fd;
    }
  }
  {
// # 150
  read_set = master_set;
  }
// # 151
  if (debug_opt) {
    {
// # 151
    Debug("Socket initialized : listen_fd : %d set_max_fd : %d ", listen_fd,
          set_max_fd);
    }
  }
// # 152
  return;
  err: 
  {
// # 155
  close_socket();
  }
// # 157
  return;
}
}
// # 159
void auth_client(struct fcrondyn_cl *client ) 
{ char *pass_cry ;
  char *pass_sys ;
  char *pass_str ;
  struct spwd *pass_sp ;
  size_t tmp ;
  register char *x__xx__ ;
  char *tmp___0 ;
  int tmp___1 ;
  register char *x__xx_____0 ;
  char *tmp___2 ;

  {
  {
// # 163
  pass_cry = (char *)((void *)0);
// # 164
  pass_sys = (char *)((void *)0);
// # 165
  pass_str = (char *)((void *)0);
// # 168
  pass_sp = (struct spwd *)((void *)0);
// # 169
  pass_sp = (struct spwd *)getspnam((char /*const*/   */* __attribute__((__split__)) */)((char /*const*/   *)((char *)client->fcl_cmd)));
  }
// # 169
  if ((unsigned int )pass_sp == (unsigned int )((void *)0)) {
    {
// # 170
    error_e("could not getspnam %s", (char *)client->fcl_cmd);
// # 171
    send(client->fcl_sock_fd, (void /*const*/   *)"0", sizeof("0"), 0);
    }
// # 172
    return;
  }
  {
// # 174
  pass_sys = (char *)pass_sp->sp_pwdp;
  }
// # 186
  if (debug_opt) {
    {
// # 186
    Debug("auth_client() : socket : %d", client->fcl_sock_fd);
    }
  }
// # 191
  if (auth_fail > 0) {
// # 191
    if (auth_nofail_since + 60L <= now) {
      {
// # 193
      auth_fail = 0;
      }
    }
  }
// # 194
  if (auth_fail >= 10) {
    {
// # 195
    error("Too many authentication failures : try to connect later.");
// # 196
    send(client->fcl_sock_fd, (void /*const*/   *)"0", sizeof("0"), 0);
// # 197
    auth_nofail_since = 0L;
// # 197
    auth_fail = (int )auth_nofail_since;
    }
// # 198
    return;
  }
  {
// # 202
  tmp = strlen((char /*const*/   *)((char *)client->fcl_cmd));
// # 202
  pass_str = (char *)client->fcl_cmd + (tmp + 1/*U*/);
// # 203
  pass_cry = crypt((char /*const*/   *)pass_str, (char /*const*/   *)pass_sys);
  }
// # 203
  if ((unsigned int )pass_cry == (unsigned int )((void *)0)) {
    {
// # 204
    error_e("could not crypt()");
// # 205
    send(client->fcl_sock_fd, (void /*const*/   *)"0", sizeof("0"), 0);
    }
// # 206
    while (1) {
      {
// # 206
      x__xx__ = pass_str;
      }
// # 206
      if (x__xx__) {
// # 206
        while ((*x__xx__)) {
          {
// # 206
          tmp___0 = x__xx__;
// # 206
          x__xx__ ++;
// # 206
          (*tmp___0) = '\0';
          }
        }
      }
// # 206
      break;
    }
// # 207
    return;
  }
  {
// # 212
  tmp___1 = strcmp((char /*const*/   *)pass_cry, (char /*const*/   *)pass_sys);
  }
// # 212
  if (tmp___1 == 0) {
    {
// # 213
    client->fcl_user = strdup2((char /*const*/   *)((char *)client->fcl_cmd));
// # 214
    send(client->fcl_sock_fd, (void /*const*/   *)"1", sizeof("1"), 0);
    }
  } else {
    {
// # 217
    auth_fail ++;
// # 218
    auth_nofail_since = now;
// # 219
    error("Invalid passwd for %s from socket %d", (char *)client->fcl_cmd,
          client->fcl_sock_fd);
// # 221
    send(client->fcl_sock_fd, (void /*const*/   *)"0", sizeof("0"), 0);
    }
  }
// # 224
  while (1) {
    {
// # 224
    x__xx_____0 = pass_str;
    }
// # 224
    if (x__xx_____0) {
// # 224
      while ((*x__xx_____0)) {
        {
// # 224
        tmp___2 = x__xx_____0;
// # 224
        x__xx_____0 ++;
// # 224
        (*tmp___2) = '\0';
        }
      }
    }
// # 224
    break;
  }
// # 225
  return;
}
}
// # 237
void print_fields(int fd , unsigned char *details ) 
{ char fields[196] ;
  char field_user[8] ;
  char field_id[6] ;
  char field_rq[6] ;
  char field_options[11] ;
  char field_schedule[18] ;
  char field_until[32] ;
  char field_pid[9] ;
  char field_index[7] ;
  char field_cmd[5] ;
  char field_endline[2] ;
  int len ;
  unsigned int tmp ;
  ssize_t tmp___0 ;

  {
  {
// # 242
  field_user[0] = ' ';
// # 242
  field_user[1] = 'U';
// # 242
  field_user[2] = 'S';
// # 242
  field_user[3] = 'E';
// # 242
  field_user[4] = 'R';
// # 242
  field_user[5] = ' ';
// # 242
  field_user[6] = ' ';
// # 242
  field_user[7] = '\0';
// # 243
  field_id[0] = 'I';
// # 243
  field_id[1] = 'D';
// # 243
  field_id[2] = ' ';
// # 243
  field_id[3] = ' ';
// # 243
  field_id[4] = ' ';
// # 243
  field_id[5] = '\0';
// # 244
  field_rq[0] = ' ';
// # 244
  field_rq[1] = 'R';
// # 244
  field_rq[2] = '&';
// # 244
  field_rq[3] = 'Q';
// # 244
  field_rq[4] = ' ';
// # 244
  field_rq[5] = '\0';
// # 245
  field_options[0] = ' ';
// # 245
  field_options[1] = 'O';
// # 245
  field_options[2] = 'P';
// # 245
  field_options[3] = 'T';
// # 245
  field_options[4] = 'I';
// # 245
  field_options[5] = 'O';
// # 245
  field_options[6] = 'N';
// # 245
  field_options[7] = 'S';
// # 245
  field_options[8] = ' ';
// # 245
  field_options[9] = ' ';
// # 245
  field_options[10] = '\0';
// # 246
  field_schedule[0] = ' ';
// # 246
  field_schedule[1] = 'S';
// # 246
  field_schedule[2] = 'C';
// # 246
  field_schedule[3] = 'H';
// # 246
  field_schedule[4] = 'E';
// # 246
  field_schedule[5] = 'D';
// # 246
  field_schedule[6] = 'U';
// # 246
  field_schedule[7] = 'L';
// # 246
  field_schedule[8] = 'E';
// # 246
  field_schedule[9] = ' ';
// # 246
  field_schedule[10] = ' ';
// # 246
  field_schedule[11] = ' ';
// # 246
  field_schedule[12] = ' ';
// # 246
  field_schedule[13] = ' ';
// # 246
  field_schedule[14] = ' ';
// # 246
  field_schedule[15] = ' ';
// # 246
  field_schedule[16] = ' ';
// # 246
  field_schedule[17] = '\0';
// # 247
  field_until[0] = ' ';
// # 247
  field_until[1] = 'L';
// # 247
  field_until[2] = 'A';
// # 247
  field_until[3] = 'V';
// # 247
  field_until[4] = 'G';
// # 247
  field_until[5] = ' ';
// # 247
  field_until[6] = '1';
// # 247
  field_until[7] = ',';
// # 247
  field_until[8] = '5';
// # 247
  field_until[9] = ',';
// # 247
  field_until[10] = '1';
// # 247
  field_until[11] = '5';
// # 247
  field_until[12] = ' ';
// # 247
  field_until[13] = 'U';
// # 247
  field_until[14] = 'N';
// # 247
  field_until[15] = 'T';
// # 247
  field_until[16] = 'I';
// # 247
  field_until[17] = 'L';
// # 247
  field_until[18] = ' ';
// # 247
  field_until[19] = ' ';
// # 247
  field_until[20] = ' ';
// # 247
  field_until[21] = ' ';
// # 247
  field_until[22] = ' ';
// # 247
  field_until[23] = ' ';
// # 247
  field_until[24] = ' ';
// # 247
  field_until[25] = 'S';
// # 247
  field_until[26] = 'T';
// # 247
  field_until[27] = 'R';
// # 247
  field_until[28] = 'I';
// # 247
  field_until[29] = 'C';
// # 247
  field_until[30] = 'T';
// # 247
  field_until[31] = '\0';
// # 248
  field_pid[0] = ' ';
// # 248
  field_pid[1] = 'P';
// # 248
  field_pid[2] = 'I';
// # 248
  field_pid[3] = 'D';
// # 248
  field_pid[4] = ' ';
// # 248
  field_pid[5] = ' ';
// # 248
  field_pid[6] = ' ';
// # 248
  field_pid[7] = ' ';
// # 248
  field_pid[8] = '\0';
// # 249
  field_index[0] = ' ';
// # 249
  field_index[1] = 'I';
// # 249
  field_index[2] = 'N';
// # 249
  field_index[3] = 'D';
// # 249
  field_index[4] = 'E';
// # 249
  field_index[5] = 'X';
// # 249
  field_index[6] = '\0';
// # 250
  field_cmd[0] = ' ';
// # 250
  field_cmd[1] = 'C';
// # 250
  field_cmd[2] = 'M';
// # 250
  field_cmd[3] = 'D';
// # 250
  field_cmd[4] = '\0';
// # 251
  field_endline[0] = '\n';
// # 251
  field_endline[1] = '\0';
// # 252
  len = 0;
// # 254
  fields[0] = '\0';
// # 256
  strncat((char */* __restrict  */)(fields),
          (char /*const*/   */* __restrict  */)((char /*const*/   *)(field_id)),
          sizeof(fields) - (unsigned int )len);
// # 256
  len = (int )((unsigned int )len + (sizeof(field_id) - 1/*U*/));
  }
// # 257
  if ((int )(*(details + 0)) & 1) {
    {
// # 257
    strncat((char */* __restrict  */)(fields),
            (char /*const*/   */* __restrict  */)((char /*const*/   *)(field_user)),
            (sizeof(fields) - 1/*U*/) - (unsigned int )len);
// # 257
    len = (int )((unsigned int )len + (sizeof(field_user) - 1/*U*/));
    }
  }
// # 258
  if ((int )(*(details + 0)) & 4) {
    {
// # 258
    strncat((char */* __restrict  */)(fields),
            (char /*const*/   */* __restrict  */)((char /*const*/   *)(field_pid)),
            (sizeof(fields) - 1/*U*/) - (unsigned int )len);
// # 258
    len = (int )((unsigned int )len + (sizeof(field_pid) - 1/*U*/));
    }
  }
// # 259
  if ((int )(*(details + 0)) & 32) {
    {
// # 259
    strncat((char */* __restrict  */)(fields),
            (char /*const*/   */* __restrict  */)((char /*const*/   *)(field_index)),
            (sizeof(fields) - 1/*U*/) - (unsigned int )len);
// # 259
    len = (int )((unsigned int )len + (sizeof(field_index) - 1/*U*/));
    }
  }
// # 260
  if ((int )(*(details + 0)) & 2) {
    {
// # 260
    strncat((char */* __restrict  */)(fields),
            (char /*const*/   */* __restrict  */)((char /*const*/   *)(field_rq)),
            (sizeof(fields) - 1/*U*/) - (unsigned int )len);
// # 260
    len = (int )((unsigned int )len + (sizeof(field_rq) - 1/*U*/));
    }
  }
// # 261
  if ((int )(*(details + 0)) & 64) {
    {
// # 261
    strncat((char */* __restrict  */)(fields),
            (char /*const*/   */* __restrict  */)((char /*const*/   *)(field_options)),
            (sizeof(fields) - 1/*U*/) - (unsigned int )len);
// # 261
    len = (int )((unsigned int )len + (sizeof(field_options) - 1/*U*/));
    }
  }
// # 262
  if ((int )(*(details + 0)) & 16) {
    {
// # 262
    strncat((char */* __restrict  */)(fields),
            (char /*const*/   */* __restrict  */)((char /*const*/   *)(field_until)),
            (sizeof(fields) - 1/*U*/) - (unsigned int )len);
// # 262
    len = (int )((unsigned int )len + (sizeof(field_until) - 1/*U*/));
    }
  }
// # 263
  if ((int )(*(details + 0)) & 8) {
    {
// # 263
    strncat((char */* __restrict  */)(fields),
            (char /*const*/   */* __restrict  */)((char /*const*/   *)(field_schedule)),
            (sizeof(fields) - 1/*U*/) - (unsigned int )len);
// # 263
    len = (int )((unsigned int )len + (sizeof(field_schedule) - 1/*U*/));
    }
  }
  {
// # 264
  strncat((char */* __restrict  */)(fields),
          (char /*const*/   */* __restrict  */)((char /*const*/   *)(field_cmd)),
          sizeof(fields) - (unsigned int )len);
// # 264
  len = (int )((unsigned int )len + (sizeof(field_cmd) - 1/*U*/));
// # 265
  strncat((char */* __restrict  */)(fields),
          (char /*const*/   */* __restrict  */)((char /*const*/   *)(field_endline)),
          sizeof(fields) - (unsigned int )len);
// # 265
  len = (int )((unsigned int )len + (sizeof(field_endline) - 1/*U*/));
// # 267
  fields[195] = '\0';
  }
// # 269
  if ((unsigned int )len < sizeof(fields)) {
    {
// # 269
    tmp = (unsigned int )len;
    }
  } else {
    {
// # 269
    tmp = sizeof(fields);
    }
  }
  {
// # 269
  tmp___0 = send(fd, (void /*const*/   *)(fields), tmp, 0);
  }
// # 269
  if (tmp___0 < 0) {
    {
// # 270
    error_e("error in send()");
    }
  }
// # 272
  return;
}
}
// # 275
void print_line(int fd , struct cl_t *line , unsigned char *details ,
                pid_t pid , int index___0 , time_t until ) 
{ char buf[196] ;
  int len ;
  struct tm *ftime ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  char opt___0[9] ;
  int i ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  char /*const*/   *tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  unsigned int tmp___15 ;
  ssize_t tmp___16 ;

  {
  {
// # 281
  len = 0;
// # 285
  len = snprintf((char */* __restrict  */)(buf), sizeof(buf),
                 (char /*const*/   */* __restrict  */)((char /*const*/   *)"%-5ld"),
                 line->cl_id);
  }
// # 286
  if ((int )(*(details + 0)) & 1) {
    {
// # 287
    tmp = snprintf((char */* __restrict  */)(buf + len),
                   sizeof(buf) - (unsigned int )len,
                   (char /*const*/   */* __restrict  */)((char /*const*/   *)" %-6s"),
                   (line->cl_file)->cf_user);
// # 287
    len += tmp;
    }
  }
// # 288
  if ((int )(*(details + 0)) & 4) {
    {
// # 289
    tmp___0 = snprintf((char */* __restrict  */)(buf + len),
                       sizeof(buf) - (unsigned int )len,
                       (char /*const*/   */* __restrict  */)((char /*const*/   *)" %-7d"),
                       pid);
// # 289
    len += tmp___0;
    }
  }
// # 290
  if ((int )(*(details + 0)) & 32) {
    {
// # 291
    tmp___1 = snprintf((char */* __restrict  */)(buf + len),
                       sizeof(buf) - (unsigned int )len,
                       (char /*const*/   */* __restrict  */)((char /*const*/   *)" %-5d"),
                       index___0);
// # 291
    len += tmp___1;
    }
  }
// # 292
  if ((int )(*(details + 0)) & 2) {
    {
// # 293
    tmp___2 = snprintf((char */* __restrict  */)(buf + len),
                       sizeof(buf) - (unsigned int )len,
                       (char /*const*/   */* __restrict  */)((char /*const*/   *)" %-4d"),
                       line->cl_numexe);
// # 293
    len += tmp___2;
    }
  }
// # 294
  if ((int )(*(details + 0)) & 64) {
    {
// # 296
    i = 0;
// # 297
    opt___0[0] = '\0';
    }
// # 298
    if ((int )line->cl_option[0] & 2) {
// # 299
      if ((int )line->cl_option[1] & 16) {
        {
// # 299
        tmp___3 = 0;
        }
      } else {
        {
// # 299
        tmp___3 = 1;
        }
      }
      {
// # 299
      tmp___4 = snprintf((char */* __restrict  */)(opt___0 + i),
                         sizeof(opt___0) - (unsigned int )i,
                         (char /*const*/   */* __restrict  */)((char /*const*/   *)"L%.*s"),
                         tmp___3, "O");
// # 299
      i += tmp___4;
      }
    }
// # 301
    if ((int )line->cl_option[0] & 32) {
// # 302
      if ((int )line->cl_option[1] & 8) {
        {
// # 302
        tmp___5 = 1;
        }
      } else {
        {
// # 302
        tmp___5 = 0;
        }
      }
      {
// # 302
      tmp___6 = snprintf((char */* __restrict  */)(opt___0 + i),
                         sizeof(opt___0) - (unsigned int )i,
                         (char /*const*/   */* __restrict  */)((char /*const*/   *)"%.*sS%.*s"),
                         i, ",", tmp___5, "O");
// # 302
      i += tmp___6;
      }
    }
// # 304
    if ((int )line->cl_option[1] & 4) {
      {
// # 305
      tmp___7 = snprintf((char */* __restrict  */)(opt___0 + i),
                         sizeof(opt___0) - (unsigned int )i,
                         (char /*const*/   */* __restrict  */)((char /*const*/   *)"%.*sES"),
                         i, ",");
// # 305
      i += tmp___7;
      }
    }
    {
// # 307
    tmp___8 = snprintf((char */* __restrict  */)(buf + len),
                       sizeof(buf) - (unsigned int )len,
                       (char /*const*/   */* __restrict  */)((char /*const*/   *)" %-9s"),
                       opt___0);
// # 307
    len += tmp___8;
    }
  }
// # 309
  if ((int )(*(details + 0)) & 16) {
    {
// # 310
    tmp___9 = snprintf((char */* __restrict  */)(buf + len),
                       sizeof(buf) - (unsigned int )len,
                       (char /*const*/   */* __restrict  */)((char /*const*/   *)" %.1f,%.1f,%.1f"),
                       (double )line->cl_lavg[0] / (double )10,
                       (double )line->cl_lavg[1] / (double )10,
                       (double )line->cl_lavg[2] / (double )10);
// # 310
    len += tmp___9;
    }
// # 314
    if (until > 0L) {
      {
// # 315
      ftime = localtime((time_t /*const*/   *)(& until));
      }
// # 316
      if ((int )line->cl_option[2] & 16) {
        {
// # 316
        tmp___10 = (char /*const*/   *)"N";
        }
      } else {
        {
// # 316
        tmp___10 = (char /*const*/   *)"Y";
        }
      }
      {
// # 316
      tmp___11 = snprintf((char */* __restrict  */)(buf + len),
                          sizeof(buf) - (unsigned int )len,
                          (char /*const*/   */* __restrict  */)((char /*const*/   *)" %02d/%02d/%d %02d:%02d %s"),
                          ftime->tm_mon + 1, ftime->tm_mday,
                          ftime->tm_year + 1900, ftime->tm_hour, ftime->tm_min,
                          tmp___10);
// # 316
      len += tmp___11;
      }
    } else {
      {
// # 322
      tmp___12 = snprintf((char */* __restrict  */)(buf + len),
                          sizeof(buf) - (unsigned int )len,
                          (char /*const*/   */* __restrict  */)((char /*const*/   *)" %18s"),
                          " (no until set) ");
// # 322
      len += tmp___12;
      }
    }
  }
// # 324
  if ((int )(*(details + 0)) & 8) {
    {
// # 325
    ftime = localtime((time_t /*const*/   *)(& line->cl_nextexe));
// # 326
    tmp___13 = snprintf((char */* __restrict  */)(buf + len),
                        sizeof(buf) - (unsigned int )len,
                        (char /*const*/   */* __restrict  */)((char /*const*/   *)" %02d/%02d/%d %02d:%02d"),
                        ftime->tm_mon + 1, ftime->tm_mday,
                        ftime->tm_year + 1900, ftime->tm_hour, ftime->tm_min);
// # 326
    len += tmp___13;
    }
  }
  {
// # 330
  tmp___14 = snprintf((char */* __restrict  */)(buf + len),
                      sizeof(buf) - (unsigned int )len,
                      (char /*const*/   */* __restrict  */)((char /*const*/   *)" %s\n"),
                      line->cl_shell);
// # 330
  len += tmp___14;
  }
// # 332
  if ((unsigned int )len < sizeof(buf)) {
    {
// # 332
    tmp___15 = (unsigned int )len;
    }
  } else {
    {
// # 332
    tmp___15 = sizeof(buf);
    }
  }
  {
// # 332
  tmp___16 = send(fd, (void /*const*/   *)(buf), tmp___15, 0);
  }
// # 332
  if (tmp___16 < 0) {
    {
// # 333
    error_e("error in send()");
    }
  }
// # 335
  return;
}
}
// # 345
void cmd_ls(struct fcrondyn_cl *client , long *cmd , int fd , int is_root ) 
{ int found ;
  int all ;
  int tmp ;
  char *user ;
  struct job_t *j ;
  int i ;
  unsigned char fields[1] ;
  int tmp___0 ;
  double lavg[3] ;
  char lavg_str[196] ;
  struct passwd *pass ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int j___0 ;
  int tmp___5 ;

  {
  {
// # 349
  found = 0;
  }
// # 350
  if ((*(cmd + 1)) == -1L) {
    {
// # 350
    tmp = 1;
    }
  } else {
    {
// # 350
    tmp = 0;
    }
  }
  {
// # 350
  all = tmp;
// # 351
  user = (char *)((void *)0);
// # 356
  i = 0;
  }
// # 356
  while (i < 1) {
    {
// # 357
    fields[i] = (unsigned char )0;
// # 356
    i ++;
    }
  }
// # 359
  switch ((int )(*(cmd + 0))) {
  case 105: 
  {
// # 361
  fields[0] = (unsigned char )((int )fields[0] | 8);
// # 362
  fields[0] = (unsigned char )((int )fields[0] | 2);
// # 363
  fields[0] = (unsigned char )((int )fields[0] | 1);
// # 364
  fields[0] = (unsigned char )((int )fields[0] | 64);
// # 365
  print_fields(fd, fields);
// # 366
  j = queue_base;
  }
// # 366
  while ((unsigned int )j != (unsigned int )((void *)0)) {
// # 367
    if ((*(cmd + 1)) == (j->j_line)->cl_id) {
      {
// # 368
      tmp___0 = strcmp((char /*const*/   *)client->fcl_user,
                       (char /*const*/   *)((j->j_line)->cl_file)->cf_user);
      }
// # 368
      if (tmp___0 == 0) {
        {
// # 370
        print_line(fd, j->j_line, fields, 0, 0, 0L);
        }
      } else {
// # 368
        if (is_root) {
          {
// # 370
          print_line(fd, j->j_line, fields, 0, 0, 0L);
          }
        } else {
          {
// # 372
          send(fd, (void /*const*/   *)(err_job_nfound_str),
               sizeof(err_job_nfound_str), 0);
          }
        }
      }
      {
// # 373
      found = 1;
      }
// # 374
      break;
    }
    {
// # 366
    j = j->j_next;
    }
  }
// # 377
  break;
  case 101: 
  {

  }
  case 102: 
  {

  }
  case 103: 
  {

  }
  case 104: 
  {

  }
// # 383
  if ((*(cmd + 0)) == 102L) {
    {
// # 384
    lavg[0] = (double )0;
// # 384
    lavg[1] = (double )0;
// # 384
    lavg[2] = (double )0;
// # 386
    getloadavg(lavg, 3);
// # 387
    i = snprintf((char */* __restrict  */)(lavg_str), sizeof(lavg_str),
                 (char /*const*/   */* __restrict  */)((char /*const*/   *)"Current load average : %.1f, %.1f, %.1f\n"),
                 lavg[0], lavg[1], lavg[2]);
// # 389
    send(fd, (void /*const*/   *)(lavg_str), (unsigned int )i, 0);
// # 391
    fields[0] = (unsigned char )((int )fields[0] | 16);
    }
  } else {
    {
// # 394
    fields[0] = (unsigned char )((int )fields[0] | 8);
    }
  }
// # 396
  if ((*(cmd + 0)) == 103L) {
    {
// # 397
    fields[0] = (unsigned char )((int )fields[0] | 32);
    }
  }
// # 399
  if ((*(cmd + 0)) == 104L) {
    {
// # 400
    fields[0] = (unsigned char )((int )fields[0] | 4);
    }
  }
// # 402
  if (all) {
// # 402
    if (! is_root) {
      {
// # 403
      warn("User %s tried to list *all* jobs.", client->fcl_user);
// # 404
      send(fd, (void /*const*/   *)(err_all_nallowed_str),
           sizeof(err_all_nallowed_str), 0);
// # 404
      send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
      }
// # 405
      return;
    }
  }
// # 407
  if (all) {
    {
// # 408
    fields[0] = (unsigned char )((int )fields[0] | 1);
    }
  }
  {
// # 409
  print_fields(fd, fields);
  }
// # 411
  if (! all) {
// # 415
    if ((*(cmd + 1)) == -100L) {
      {
// # 416
      user = "systab";
      }
    } else {
      {
// # 419
      pass = getpwuid((unsigned int )(*(cmd + 1)));
      }
// # 419
      if ((unsigned int )pass == (unsigned int )((void *)0)) {
        {
// # 420
        warn_e("Unable to find passwd entry for %ld", (*(cmd + 1)));
// # 421
        send(fd, (void /*const*/   *)(err_invalid_user_str),
             sizeof(err_invalid_user_str), 0);
// # 421
        send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
        }
// # 422
        return;
      }
// # 424
      if (! is_root) {
        {
// # 424
        tmp___1 = strcmp((char /*const*/   *)pass->pw_name,
                         (char /*const*/   *)client->fcl_user);
        }
// # 424
        if (tmp___1 != 0) {
          {
// # 425
          warn_e("%s is not allowed to see %s\'s jobs. %ld", client->fcl_user,
                 pass->pw_name);
// # 427
          send(fd, (void /*const*/   *)(err_others_nallowed_str),
               sizeof(err_others_nallowed_str), 0);
// # 427
          send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
          }
// # 428
          return;
        }
      }
      {
// # 430
      user = pass->pw_name;
      }
    }
  }
// # 437
  switch ((int )(*(cmd + 0))) {
  case 101: 
  {
// # 439
  j = queue_base;
  }
// # 439
  while ((unsigned int )j != (unsigned int )((void *)0)) {
// # 440
    if (all) {
      {
// # 440
      print_line(fd, j->j_line, fields, 0, 0, 0L);
// # 440
      found = 1;
      }
    } else {
      {
// # 440
      tmp___2 = strcmp((char /*const*/   *)user,
                       (char /*const*/   *)((j->j_line)->cl_file)->cf_user);
      }
// # 440
      if (tmp___2 == 0) {
        {
// # 440
        print_line(fd, j->j_line, fields, 0, 0, 0L);
// # 440
        found = 1;
        }
      }
    }
    {
// # 439
    j = j->j_next;
    }
  }
// # 441
  break;
  case 104: 
  {
// # 444
  i = 0;
  }
// # 444
  while (i < (int )exe_num) {
// # 445
    if ((unsigned int )(exe_array + i)->e_line == (unsigned int )((void *)0)) {
// # 446
      if (is_root) {
        {
// # 447
        send_msg_fd(fd, "job no more in an fcrontab: pid %d",
                    (exe_array + i)->e_job_pid);
// # 449
        found = 1;
        }
      }
    } else {
// # 453
      if (all) {
        {
// # 453
        print_line(fd, (exe_array + i)->e_line, fields,
                   (exe_array + i)->e_job_pid, 0, 0L);
// # 453
        found = 1;
        }
      } else {
        {
// # 453
        tmp___3 = strcmp((char /*const*/   *)user,
                         (char /*const*/   *)(((exe_array + i)->e_line)->cl_file)->cf_user);
        }
// # 453
        if (tmp___3 == 0) {
          {
// # 453
          print_line(fd, (exe_array + i)->e_line, fields,
                     (exe_array + i)->e_job_pid, 0, 0L);
// # 453
          found = 1;
          }
        }
      }
    }
    {
// # 444
    i ++;
    }
  }
// # 456
  break;
  case 102: 
  {
// # 459
  i = 0;
  }
// # 459
  while (i < (int )lavg_num) {
// # 460
    if (all) {
      {
// # 460
      print_line(fd, (lavg_array + i)->l_line, fields, 0, 0,
                 (lavg_array + i)->l_until);
// # 460
      found = 1;
      }
    } else {
      {
// # 460
      tmp___4 = strcmp((char /*const*/   *)user,
                       (char /*const*/   *)(((lavg_array + i)->l_line)->cl_file)->cf_user);
      }
// # 460
      if (tmp___4 == 0) {
        {
// # 460
        print_line(fd, (lavg_array + i)->l_line, fields, 0, 0,
                   (lavg_array + i)->l_until);
// # 460
        found = 1;
        }
      }
    }
    {
// # 459
    i ++;
    }
  }
// # 461
  break;
  case 103: 
  {
// # 466
  i = (int )serial_array_index;
// # 467
  j___0 = 0;
  }
// # 467
  while (j___0 < (int )serial_num) {
// # 468
    if (all) {
      {
// # 468
      print_line(fd, (*(serial_array + i)), fields, 0, j___0, 0L);
// # 468
      found = 1;
      }
    } else {
      {
// # 468
      tmp___5 = strcmp((char /*const*/   *)user,
                       (char /*const*/   *)(((*(serial_array + i)))->cl_file)->cf_user);
      }
// # 468
      if (tmp___5 == 0) {
        {
// # 468
        print_line(fd, (*(serial_array + i)), fields, 0, j___0, 0L);
// # 468
        found = 1;
        }
      }
    }
    {
// # 469
    i ++;
    }
// # 469
    if (i >= (int )serial_array_size) {
      {
// # 470
      i -= (int )serial_array_size;
      }
    }
    {
// # 467
    j___0 ++;
    }
  }
// # 472
  break;
  }
// # 477
  break;
  }
// # 480
  if (! found) {
    {
// # 481
    send(fd, (void /*const*/   *)(err_job_nfound_str), sizeof(err_job_nfound_str), 0);
    }
  }
  {
// # 483
  send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
  }
// # 485
  return;
}
}
// # 488
void cmd_on_exeq(struct fcrondyn_cl *client , long *cmd , int fd , int is_root ) 
{ int exe_index ;
  int found ;
  char *err_str ;
  int tmp ;

  {
  {
// # 493
  found = 0;
// # 494
  err_str = (char *)((void *)0);
// # 497
  exe_index = 0;
  }
// # 497
  while (exe_index < (int )exe_num) {
// # 498
    if ((unsigned int )(exe_array + exe_index)->e_line !=
        (unsigned int )((void *)0)) {
// # 498
      if ((*(cmd + 2)) == ((exe_array + exe_index)->e_line)->cl_id) {
        {
// # 501
        found = 1;
        }
// # 504
        if (is_root) {
          _L: 
// # 525
          if ((*(cmd + 0)) == 401L) {
            {
// # 526
            cmd_send_signal(client, cmd, fd, exe_index);
            }
          } else {
// # 527
            if ((*(cmd + 0)) == 402L) {
              {
// # 528
              cmd_renice(client, cmd, fd, exe_index, is_root);
              }
            } else {
              {
// # 530
              send(fd, (void /*const*/   *)(err_cmd_unknown_str),
                   sizeof(err_cmd_unknown_str), 0);
// # 530
              send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
              }
// # 531
              return;
            }
          }
        } else {
          {
// # 504
          tmp = strcmp((char /*const*/   *)client->fcl_user,
                       (char /*const*/   *)(((exe_array + exe_index)->e_line)->cl_file)->cf_user);
          }
// # 504
          if (tmp != 0) {
// # 508
            if ((*(cmd + 0)) == 402L) {
              {
// # 509
              err_str = "%s tried to renice to %ld job id %ld for %s : not allowed.";
              }
            } else {
// # 511
              if ((*(cmd + 0)) == 401L) {
                {
// # 512
                err_str = "%s tried to send signal %ld to id %ld for %s : not allowed.";
                }
              } else {
                {
// # 515
                err_str = "cannot run unknown cmd with arg %ld on job id %ld for %s : not allowed.";
                }
              }
            }
            {
// # 518
            warn(err_str, client->fcl_user, (*(cmd + 1)), (*(cmd + 2)),
                 client->fcl_user);
// # 520
            send(fd, (void /*const*/   *)(err_job_nfound_str),
                 sizeof(err_job_nfound_str), 0);
// # 520
            send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
            }
          } else {
            goto _L;
          }
        }
      }
    }
    {
// # 497
    exe_index ++;
    }
  }
// # 537
  if (found) {
    {
// # 553
    send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
    }
  } else {
// # 539
    if ((*(cmd + 0)) == 402L) {
      {
// # 540
      err_str = "cannot renice job id %ld for %s : no corresponding running job.";
      }
    } else {
// # 542
      if ((*(cmd + 0)) == 401L) {
        {
// # 543
        err_str = "cannot send signal to job id %ld for %s : no corresponding running job.";
        }
      } else {
        {
// # 546
        err_str = "cannot run unknown cmd on job id %ld for %s : no corresponding running job.";
        }
      }
    }
    {
// # 549
    warn(err_str, (*(cmd + 2)), client->fcl_user);
// # 550
    send(fd, (void /*const*/   *)(err_rjob_nfound_str), sizeof(err_rjob_nfound_str),
         0);
// # 550
    send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
    }
  }
// # 556
  return;
}
}
// # 559
void cmd_renice(struct fcrondyn_cl *client , long *cmd , int fd ,
                int exe_index , int is_root ) 
{ int tmp ;

  {
// # 566
  if ((exe_array + exe_index)->e_job_pid <= 0) {
    {
// # 568
    warn("renice: invalid args : pid: %d nice_value: %d user: %s.",
         (exe_array + exe_index)->e_job_pid, (int )(*(cmd + 1)),
         client->fcl_user);
// # 570
    send(fd, (void /*const*/   *)(err_invalid_args_str),
         sizeof(err_invalid_args_str), 0);
// # 570
    send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
    }
// # 571
    return;
  } else {
// # 566
    if ((int )(*(cmd + 1)) < 0) {
// # 566
      if (is_root) {
        goto _L;
      } else {
        {
// # 568
        warn("renice: invalid args : pid: %d nice_value: %d user: %s.",
             (exe_array + exe_index)->e_job_pid, (int )(*(cmd + 1)),
             client->fcl_user);
// # 570
        send(fd, (void /*const*/   *)(err_invalid_args_str),
             sizeof(err_invalid_args_str), 0);
// # 570
        send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
        }
// # 571
        return;
      }
    } else {
      _L: 
// # 566
      if ((int )(*(cmd + 1)) > 20) {
        {
// # 568
        warn("renice: invalid args : pid: %d nice_value: %d user: %s.",
             (exe_array + exe_index)->e_job_pid, (int )(*(cmd + 1)),
             client->fcl_user);
// # 570
        send(fd, (void /*const*/   *)(err_invalid_args_str),
             sizeof(err_invalid_args_str), 0);
// # 570
        send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
        }
// # 571
        return;
      } else {
// # 566
        if ((int )(*(cmd + 1)) < -20) {
          {
// # 568
          warn("renice: invalid args : pid: %d nice_value: %d user: %s.",
               (exe_array + exe_index)->e_job_pid, (int )(*(cmd + 1)),
               client->fcl_user);
// # 570
          send(fd, (void /*const*/   *)(err_invalid_args_str),
               sizeof(err_invalid_args_str), 0);
// # 570
          send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
          }
// # 571
          return;
        }
      }
    }
  }
  {
// # 575
  tmp = setpriority(0, (unsigned int )(exe_array + exe_index)->e_job_pid,
                    (int )(*(cmd + 1)));
  }
// # 575
  if (tmp != 0) {
    {
// # 576
    error_e("could not setpriority(PRIO_PROCESS, %d, %d)",
            (exe_array + exe_index)->e_job_pid, (int )(*(cmd + 1)));
// # 578
    send(fd, (void /*const*/   *)(err_unknown_str), sizeof(err_unknown_str), 0);
// # 578
    send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
    }
// # 579
    return;
  } else {
    {
// # 582
    send_msg_fd(fd, "Command successfully completed on process %d.",
                (exe_array + exe_index)->e_job_pid);
    }
// # 584
    return;
  }
}
}
// # 596
void cmd_send_signal(struct fcrondyn_cl *client , long *cmd , int fd ,
                     int exe_index ) 
{ int tmp ;

  {
// # 600
  if ((exe_array + exe_index)->e_job_pid <= 0) {
    {
// # 601
    warn("send_signal: invalid args : pid: %d signal: %d user: %s",
         (exe_array + exe_index)->e_job_pid, (int )(*(cmd + 1)),
         client->fcl_user);
// # 603
    send(fd, (void /*const*/   *)(err_invalid_args_str),
         sizeof(err_invalid_args_str), 0);
// # 603
    send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
    }
// # 604
    return;
  } else {
// # 600
    if ((int )(*(cmd + 1)) <= 0) {
      {
// # 601
      warn("send_signal: invalid args : pid: %d signal: %d user: %s",
           (exe_array + exe_index)->e_job_pid, (int )(*(cmd + 1)),
           client->fcl_user);
// # 603
      send(fd, (void /*const*/   *)(err_invalid_args_str),
           sizeof(err_invalid_args_str), 0);
// # 603
      send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
      }
// # 604
      return;
    }
  }
  {
// # 608
  tmp = kill((exe_array + exe_index)->e_job_pid, (int )(*(cmd + 1)));
  }
// # 608
  if (tmp != 0) {
    {
// # 609
    error_e("could not kill(%d, %d)", (exe_array + exe_index)->e_job_pid,
            (int )(*(cmd + 1)));
// # 610
    send(fd, (void /*const*/   *)(err_unknown_str), sizeof(err_unknown_str), 0);
// # 610
    send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
    }
// # 611
    return;
  } else {
    {
// # 614
    send_msg_fd(fd, "Command successfully completed on process %d.",
                (exe_array + exe_index)->e_job_pid);
    }
// # 616
    return;
  }
}
}
// # 621
void cmd_run(struct fcrondyn_cl *client , long *cmd , int fd , int is_root ) 
{ struct job_t *j ;
  int tmp ;

  {
  {
// # 626
  j = (struct job_t *)((void *)0);
// # 628
  j = queue_base;
  }
// # 628
  while ((unsigned int )j != (unsigned int )((void *)0)) {
// # 629
    if ((*(cmd + 1)) == (j->j_line)->cl_id) {
      {
// # 630
      tmp = strcmp((char /*const*/   *)client->fcl_user,
                   (char /*const*/   *)((j->j_line)->cl_file)->cf_user);
      }
// # 630
      if (tmp == 0) {
        goto _L;
      } else {
// # 630
        if (is_root) {
          _L: 
// # 633
          if ((int )(j->j_line)->cl_option[0] & 2) {
            {
// # 634
            add_lavg_job(j->j_line, fd);
            }
          } else {
// # 635
            if ((int )(j->j_line)->cl_option[0] & 32) {
              {
// # 636
              add_serial_job(j->j_line, fd);
              }
            } else {
              {
// # 638
              run_normal_job(j->j_line, fd);
              }
            }
          }
// # 640
          if ((*(cmd + 0)) == 301L) {
            {
// # 641
            set_next_exe(j->j_line, (char )4, fd);
            }
          }
          {
// # 643
          send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
          }
// # 645
          return;
        }
      }
    }
    {
// # 628
    j = j->j_next;
    }
  }
  {
// # 652
  send(fd, (void /*const*/   *)(err_job_nfound_str), sizeof(err_job_nfound_str), 0);
// # 652
  send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
  }
// # 654
  return;
}
}
// # 656
void exe_cmd(struct fcrondyn_cl *client ) 
{ long *cmd ;
  int fd ;
  int is_root ;
  int tmp___0 ;

  {
  {
// # 662
  is_root = 0;
// # 664
  tmp___0 = strcmp((char /*const*/   *)client->fcl_user, (char /*const*/   *)"root");
  }
// # 664
  if (tmp___0 == 0) {
    {
// # 664
    is_root = 1;
    }
  } else {
    {
// # 664
    is_root = 0;
    }
  }
  {
// # 667
  cmd = client->fcl_cmd;
// # 668
  fd = client->fcl_sock_fd;
  }
// # 671
  if (debug_opt) {
    {
// # 671
    Debug("exe_cmd [0,1,2] : %d %d %d", (*(cmd + 0)), (*(cmd + 1)), (*(cmd + 2)));
    }
  }
// # 674
  switch ((int )(*(cmd + 0))) {
  case 401: 
  {

  }
  case 402: 
  {
// # 678
  cmd_on_exeq(client, cmd, fd, is_root);
  }
// # 679
  break;
  case 105: 
  {

  }
  case 101: 
  {

  }
  case 102: 
  {

  }
  case 103: 
  {

  }
  case 104: 
  {
// # 686
  cmd_ls(client, cmd, fd, is_root);
  }
// # 687
  break;
  case 302: 
  {

  }
  case 301: 
  {
// # 691
  cmd_run(client, cmd, fd, is_root);
  }
// # 692
  break;
  default: 
  {
// # 695
  send(fd, (void /*const*/   *)(err_cmd_unknown_str), sizeof(err_cmd_unknown_str), 0);
// # 695
  send(fd, (void /*const*/   *)"\0\0", sizeof("\0\0"), 0);
  }
  }
// # 697
  return;
}
}
// # 699
void remove_connection(struct fcrondyn_cl **client ,
                       struct fcrondyn_cl *prev_client ){ 

  // # 704
  shutdown(((*client))->fcl_sock_fd, 2);
  // # 705
  close(((*client))->fcl_sock_fd);
  // # 706
/*   master_set.__fds_bits[(unsigned int )((*client))->fcl_sock_fd / */
/*                         (8/\*U*\/ * sizeof(__fd_mask ))] = master_set.__fds_bits[(unsigned int )((*client))->fcl_sock_fd / */
/*                                                                            (8/\*U*\/ * */
/*                                                                             sizeof(__fd_mask ))] & */
/*                                                      ~ (1L << */
/*                                                         (unsigned int )((*client))->fcl_sock_fd % */
/*                                                         (8/\*U*\/ * sizeof(__fd_mask ))); */
  
// # 707
/*   if (debug_opt) { */
/*       // # 707 */
/*       Debug("connection closed : fd : %d", ((*client))->fcl_sock_fd); */
/*   } */
// # 708
  if ((unsigned int )prev_client == (unsigned int )((void *)0)) {
    // # 709
    fcrondyn_cl_base = ((*client))->fcl_next;
    // # 710
    free((void *)((*client))->fcl_user);
    // # 710
    ((*client))->fcl_user = (char *)((void *)0);
    // # 711
    free((void *)(*client));
    // # 711
    (*client) = (struct fcrondyn_cl *)((void *)0);
    // # 712
    (*client) = fcrondyn_cl_base;
  } 
  else {
    // # 715
    prev_client->fcl_next = ((*client))->fcl_next;
    // # 716
    free((void *)((*client))->fcl_user);
    // # 716
    ((*client))->fcl_user = (char *)((void *)0);
    // # 717
    free((void *)(*client));
    // # 717
    (*client) = (struct fcrondyn_cl *)((void *)0);
    // # 718
    (*client) = prev_client->fcl_next;  
  }
  // # 720
  fcrondyn_cl_num --;
  // # 721
  return;  
}

// # 723
void check_socket(int num ){ 
  int fd ;
  int avoid_fd ;
  int addr_len ;
  struct sockaddr_un client_addr ;
  long buf_int[20] ;
  int read_len ;
  struct fcrondyn_cl *client ;
  struct fcrondyn_cl *prev_client ;
  int tmp ;
  int tmp___0 ;
  int UNK1; 
  int UNK2; 

  // # 727
  fd = -1;
  // # 727
  avoid_fd = -1;
  // # 727
  addr_len = (int )sizeof(struct sockaddr_un );
  // # 730
  read_len = 0;
  // # 731
  client = (struct fcrondyn_cl *)((void *)0);
  // # 731
  prev_client = (struct fcrondyn_cl *)((void *)0);
  
  // # 733
  if (num <= 0) {
    read_set = master_set;
    return;
    /*goto final_settings;*/
  }
  // # 737
  /*   if (debug_opt) { */
  /*     { */
  /*       // # 737 */
  /*       Debug("Checking socket ..."); */
  /*     } */
  /*   } */
  // # 739
  if (UNK1) /* read_set.__fds_bits[(unsigned int )listen_fd / (8/\*U*\/ * sizeof(__fd_mask ))] & */
/*       (1L << (unsigned int )listen_fd % (8/\*U*\/ * sizeof(__fd_mask )))) */ {
    // # 740
    /*     if (debug_opt) { */
    /*       { */
    /* // # 740 */
    /*       Debug("got new connection ..."); */
    /*       } */
    /*     } */
    // # 741
    fd = accept(listen_fd,
                (void */* __restrict  */)((void *)((struct sockaddr *)(& client_addr))),
                (socklen_t */* __restrict  */)((socklen_t *)(& addr_len)));
    // # 741
    if (fd == -1) {
      // # 742
      /*       error_e("could not accept new connection : isset(listen_fd = %d) = %d", */
      /*               listen_fd, read_set.__fds_bits[(unsigned int )listen_fd / */
      /*                                              (8/\*U*\/ * sizeof(__fd_mask ))] & */
      /*                          (1L << (unsigned int )listen_fd % */
      /*                                 (8/\*U*\/ * sizeof(__fd_mask )))); */
    } 
    else {
      // # 746
      fcntl(fd, 2, 1);
      // # 748
      tmp = fcntl(fd, 3);
      // # 748
      tmp___0 = fcntl(fd, 4, tmp | 2048);
      // # 748
      if (tmp___0 == -1) {
	// # 749
	error_e("Could not set fd attribute O_NONBLOCK : connection rejected.");
	// # 750
	shutdown(fd, 2);
	// # 751
	close(fd);
      } 
      else {
	// # 754
        client = (struct fcrondyn_cl *)calloc(1/*U*/, sizeof(fcrondyn_cl ));	
	// # 754
        if ((unsigned int )client == (unsigned int )((void *)0)) {
	  // # 754
          die_e("Could not calloc.");          
        }
	// # 755
        client->fcl_sock_fd = fd;
	// # 757
        client->fcl_user = (char *)((void *)0);
	// # 758
        client->fcl_cmd = (long *)((void *)0);
	// # 761
        client->fcl_next = fcrondyn_cl_base;
	// # 762
        fcrondyn_cl_base = client;
	// # 763
        client->fcl_idle_since = now;
	// # 765
        avoid_fd = fd;
	// # 767
	/*         master_set.__fds_bits[(unsigned int )fd / (8/\*U*\/ * sizeof(__fd_mask ))] = master_set.__fds_bits[(unsigned int )fd / */
	/*                                                                                                      (8/\*U*\/ * */
	/*                                                                                                       sizeof(__fd_mask ))] | */
	/*                                                                                (1L << */
	/*                                                                                 (unsigned int )fd % */
	/*                                                                                 (8/\*U*\/ * */
	/*                                                                                  sizeof(__fd_mask ))); */
        
// # 768
        if (fd > set_max_fd) {
	    // # 769
	    set_max_fd = fd;
        }
	// # 770
        fcrondyn_cl_num ++;
	// # 772
	/*         if (debug_opt) { */
	/* // # 772 */
	/*           Debug("Added connection fd : %d - %d connections", fd, fcrondyn_cl_num); */
	/*         } */
      }
    }
  }

  // # 777
  client = fcrondyn_cl_base;
  // # 778
  while ((unsigned int )client != (unsigned int )((void *)0)) {
    // # 779
    if (UNK2) /* (read_set.__fds_bits[(unsigned int )client->fcl_sock_fd / */
/*                             (8/\*U*\/ * sizeof(__fd_mask ))] & */
/*         (1L << (unsigned int )client->fcl_sock_fd % (8/\*U*\/ * sizeof(__fd_mask )))) */ {
      // # 779
      if (client->fcl_sock_fd == avoid_fd) {
      _L___0: 
	// # 781
        if ((unsigned int )client->fcl_user == (unsigned int )((void *)0)) {
	  // # 781
          if (now - client->fcl_idle_since > 60L) {
	    // # 782
	    warn("Connection with no auth for more than %ds : closing it.", 60);
	    // # 784
	    remove_connection(& client, prev_client);	    
          } 
	  else 
            goto _L;
        } 
	else {
	_L: 
	  // # 786
          if (now - client->fcl_idle_since > 600L) {
	      // # 787
	      warn("Connection of %s is idle for more than %ds : closing it.",
		   client->fcl_user, 600);
	      // # 789
	      remove_connection(& client, prev_client);
          } 
	  else {
	    // # 793
            prev_client = client;
	    // # 794
            client = client->fcl_next;
          }
        }
	// # 796
        continue;
      }
    } 
    else 
      goto _L___0;
    // # 799
    read_len = recv(client->fcl_sock_fd, (void *)(buf_int), sizeof(buf_int), 0);
    
    // # 799
    if (read_len <= 0) {
      // # 800
      if (read_len == 0) {
	// # 802
        remove_connection(& client, prev_client);
      } 
      else {
	// # 805
        error_e("error recv() from sock fd %d", client->fcl_sock_fd);
	// # 806
        prev_client = client;
	// # 807
        client = client->fcl_next;
      }
    } else {
      // # 811
      client->fcl_cmd_len = read_len;
      // # 812
      client->fcl_cmd = buf_int;
      // # 813
      if ((unsigned int )client->fcl_user == (unsigned int )((void *)0)) {
	// # 815
        auth_client(client);
      } 
      else {
	// # 818
        client->fcl_idle_since = now;
	// # 819
        exe_cmd(client);
      }
      // # 821
      prev_client = client;
      // # 822
      client = client->fcl_next;
    }
  }
  // final_settings: 
// # 828
  read_set = master_set;
// # 829
  return;
}


// # 832
void close_socket(void) 
{ struct fcrondyn_cl *client ;
  struct fcrondyn_cl *client_buf ;

  {
  {
// # 836
  client_buf = (struct fcrondyn_cl *)((void *)0);
  }
// # 838
  if (listen_fd) {
    {
// # 839
    shutdown(listen_fd, 2);
// # 840
    close(listen_fd);
// # 841
    unlink((char /*const*/   *)fifofile);
// # 843
    client = fcrondyn_cl_base;
    }
// # 844
    while ((unsigned int )client != (unsigned int )((void *)0)) {
      {
// # 845
      shutdown(client->fcl_sock_fd, 2);
// # 846
      close(client->fcl_sock_fd);
// # 848
      client_buf = client->fcl_next;
// # 849
      free((void *)client);
// # 849
      client = (struct fcrondyn_cl *)((void *)0);
// # 850
      fcrondyn_cl_num --;
// # 851
      client = client_buf;
      }
    }
  }
// # 854
  return;
}
}
void __initialize__(void) 
{ 
// # 254 "/users/rupak/ccured/include/string_wrappers.h"
  saved_str = (char /*const*/   *)((void *)0);
// # 58 "fcron.c"
  debug_opt = (char )0;
// # 64
  foreground = (char )0;
// # 67
  first_sleep = (long )20;
// # 68
  save_time = (long )1800;
// # 69
  once = (char )0;
// # 71
  dosyslog = (char )1;
// # 74
  tmp_path = "";
// # 79
  prog_name = (char *)((void *)0);
// # 82
  sig_conf = (char )0;
// # 83
  sig_chld = (char )0;
// # 84
  sig_debug = (char )0;
// # 98
  serial_max_running = (short )1;
// # 99
  serial_queue_max = (short )30;
// # 100
  lavg_queue_max = (short )30;
// # 115
  pamh = (pam_handle_t *)((void *)0);
// # 35 "subs.c"
  fcronconf = (char *)((void *)0);
// # 36
  fcrontabs = (char *)((void *)0);
// # 37
  pidfile = (char *)((void *)0);
// # 38
  fifofile = (char *)((void *)0);
// # 39
  fcronallow = (char *)((void *)0);
// # 40
  fcrondeny = (char *)((void *)0);
// # 41
  shell = (char *)((void *)0);
// # 42
  sendmail = (char *)((void *)0);
// # 43
  editor = (char *)((void *)0);
// # 51 "log.c"
  log_open = 0;
// # 49 "socket.c"
  fcrondyn_cl_num = 0;
// # 52
  set_max_fd = 0;
// # 53
  listen_fd = -1;
// # 54
  auth_fail = 0;
// # 55
  auth_nofail_since = (long )0;
/*   apamconv   = {(int (*)(int num_msg , */
/* 			 struct pam_message  /\*const*\/  **msg , */
/* 			 struct pam_response **resp , */
/* 			 void *appdata_ptr ))((void *)0), */
/* 		(void *)0}; */

/*   opt   = {{(char /\*const*\/   *)"debug", 0, (int *)((void *)0), (int )'d'}, */
/* 	   {(char /\*const*\/   *)"foreground", 0, (int *)((void *)0), (int )'f'}, */
/* 	   {(char /\*const*\/   *)"background", 0, (int *)((void *)0), (int )'b'}, */
/* 	   {(char /\*const*\/   *)"nosyslog", 0, (int *)((void *)0), (int )'y'}, */
/* 	   {(char /\*const*\/   *)"help", 0, (int *)((void *)0), (int )'h'}, */
/* 	   {(char /\*const*\/   *)"version", 0, (int *)((void *)0), (int )'V'}, */
/* 	   {(char /\*const*\/   *)"once", 0, (int *)((void *)0), (int )'o'}, */
/* 	   {(char /\*const*\/   *)"savetime", 1, (int *)((void *)0), (int )'s'}, */
/* 	   {(char /\*const*\/   *)"firstsleep", 1, (int *)((void *)0), (int )'l'}, */
/* 	   {(char /\*const*\/   *)"maxserial", 1, (int *)((void *)0), (int )'m'}, */
/* 	   {(char /\*const*\/   *)"configfile", 1, (int *)((void *)0), (int )'c'}, */
/* 	   {(char /\*const*\/   *)"newspooldir", 1, (int *)((void *)0), (int )'n'}, */
/* 	   {(char /\*const*\/   *)"queuelen", 1, (int *)((void *)0), (int )'q'}, */
/* 	   {(char /\*const*\/   *)0, 0, (int *)0, 0}}; */

/*   opt[0] = {(char /\*const*\/   *)"debug", 0, (int *)((void *)0), (int )'d'}; */
/*   opt[1] = {(char /\*const*\/   *)"foreground", 0, (int *)((void *)0), (int )'f'}; */
/*   opt[2] = {(char /\*const*\/   *)"background", 0, (int *)((void *)0), (int )'b'}; */
/*   opt[3] = {(char /\*const*\/   *)"nosyslog", 0, (int *)((void *)0), (int )'y'}; */
/*   opt[4] = {(char /\*const*\/   *)"help", 0, (int *)((void *)0), (int )'h'}; */
/*   opt[5] = {(char /\*const*\/   *)"version", 0, (int *)((void *)0), (int )'V'}; */
/*   opt[6] = {(char /\*const*\/   *)"once", 0, (int *)((void *)0), (int )'o'}; */
/*   opt[7] = {(char /\*const*\/   *)"savetime", 1, (int *)((void *)0), (int )'s'}; */
/*   opt[8] = {(char /\*const*\/   *)"firstsleep", 1, (int *)((void *)0), (int )'l'}; */
/*   opt[9] = {(char /\*const*\/   *)"maxserial", 1, (int *)((void *)0), (int )'m'}; */
/*   opt[10] = {(char /\*const*\/   *)"configfile", 1, (int *)((void *)0), (int )'c'}; */
/*   opt[11] = {(char /\*const*\/   *)"newspooldir", 1, (int *)((void *)0), (int )'n'}; */
/*   opt[12] = {(char /\*const*\/   *)"queuelen", 1, (int *)((void *)0), (int )'q'}; */
/*   opt[13] = {(char /\*const*\/   *)0, 0, (int *)0, 0};   */
}
