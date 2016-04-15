struct _IO_marker;
# 2 "file_openclose.h"
typedef long __off_t;
# 3
typedef long long __off64_t;
# 5
typedef void _IO_lock_t;
# 8
struct _IO_FILE {
   int __BLAST_FLAG ;
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
   char _unused2[(int )(15U * sizeof(int ) - 2U * sizeof(void *))] ;
};
# 38
typedef struct _IO_FILE FILE;
# 1
struct _IO_marker;
# 39
extern FILE *stderr ;
# 40
extern FILE *stdout ;
# 55
int _EXIT  ;
# 57
void exit(int status ) 
{ 

  {
# 58
  _EXIT = 1;
  _L: 
  goto _L;
}
}
# 2 "spec.work"
int __BLAST_error  ;
# 3
void __error__(void) 
{ 

  {
# 5
  __BLAST_error = 0;
  ERROR: 
  goto ERROR;
}
}
# 8
void __BLAST___error__(void) 
{ 

  {
# 10
  __BLAST_error = 0;
  BERROR: 
  goto BERROR;
}
}
void __initialize__(void) ;
# 201 "/usr/lib/gcc-lib/i386-redhat-linux/3.2/include/stddef.h"
typedef unsigned int size_t;
# 131 "/usr/include/bits/types.h"
typedef unsigned long long __dev_t;
# 132
typedef unsigned int __uid_t;
# 133
typedef unsigned int __gid_t;
# 134
typedef unsigned long __ino_t;
# 135
typedef unsigned long long __ino64_t;
# 136
typedef unsigned int __mode_t;
# 137
typedef unsigned int __nlink_t;
# 138
typedef long __off_t;
# 139
typedef long long __off64_t;
# 140
typedef int __pid_t;
# 146
typedef long __time_t;
# 148
typedef long __suseconds_t;
# 155
typedef int __clockid_t;
# 161
typedef long __blksize_t;
# 167
typedef long long __blkcnt64_t;
# 180
typedef int __ssize_t;
# 52 "/usr/include/sys/types.h"
typedef __ino64_t ino_t;
# 62
typedef __dev_t dev_t;
# 100
typedef __pid_t pid_t;
# 110
typedef __ssize_t ssize_t;
# 76 "/users/rupak/ccured/include/gcc_3.2/time.h"
typedef __time_t time_t;
# 92
typedef __clockid_t clockid_t;
# 28 "/usr/include/bits/sigset.h"
struct __anonstruct___sigset_t_2 {
   unsigned long __val[(int )(1024U / (8U * sizeof(unsigned long )))] ;
};
# 28
typedef struct __anonstruct___sigset_t_2 __sigset_t;
# 38 "/usr/include/sys/select.h"
typedef __sigset_t sigset_t;
# 118 "/users/rupak/ccured/include/gcc_3.2/time.h"
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
# 69 "/usr/include/bits/time.h"
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
# 36 "/usr/include/bits/stat.h"
struct stat {
   __dev_t st_dev ;
   unsigned short __pad1 ;
   __ino_t __st_ino ;
   __mode_t st_mode ;
   __nlink_t st_nlink ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   __dev_t st_rdev ;
   unsigned short __pad2 ;
   __off64_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt64_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   __ino64_t st_ino ;
};
# 73 "/users/rupak/ccured/include/gcc_3.2/signal.h"
typedef void (*__sighandler_t)(int  );
# 25 "/users/rupak/ccured/include/gcc_3.2/bits/sigaction.h"
struct sigaction {
   void (*sa_handler)(int  ) ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
# 46 "/users/rupak/ccured/include/gcc_3.2/stdio.h"
# 243 "/users/rupak/ccured/include/ccured_GNUCC.patch"
typedef struct __ccured_va_list *__gnuc_va_list;
# 172 "/usr/include/libio.h"
typedef void _IO_lock_t;
# 178
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
# 263
# 263 "/users/rupak/ccured/include/ccured_GNUCC.patch"
struct __ccured_va_list {
   int next ;
};
# 263
typedef struct __ccured_va_list *__ccured_va_list;
# 57 "/usr/include/sys/time.h"
struct timezone {
   int tz_minuteswest ;
   int tz_dsttime ;
};
# 63
typedef struct timezone * __restrict  __timezone_ptr_t;
# 131 "/users/rupak/ccured/include/gcc_3.2/time.h"
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
   char const   *tm_zone ;
};
# 81 "getopt.h"
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
# 65 "/usr/include/bits/waitstatus.h"
struct __anonstruct___wait_terminated_45 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
# 65
struct __anonstruct___wait_stopped_46 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
# 65
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_45 __wait_terminated ;
   struct __anonstruct___wait_stopped_46 __wait_stopped ;
};
# 141 "/usr/include/stdint.h"
typedef unsigned long long uintmax_t;
# 382 "make.h"
struct floc {
   char *filenm ;
   unsigned long lineno ;
};
# 43 "hash.h"
struct hash_table {
   void **ht_vec ;
   unsigned long ht_size ;
   unsigned long ht_capacity ;
   unsigned long ht_fill ;
   unsigned long ht_empty_slots ;
   unsigned long ht_collisions ;
   unsigned long ht_lookups ;
   unsigned int ht_rehashes ;
   unsigned long (*ht_hash_1)(void const   *key ) ;
   unsigned long (*ht_hash_2)(void const   *key ) ;
   int (*ht_compare)(void const   *x , void const   *y ) ;
};
# 28 "filedef.h"
enum __anonenum_command_state_53 {
    cs_not_started = 0, 
    cs_deps_running = 1, 
    cs_running = 2, 
    cs_finished = 3,  };
# 28
struct file {
   char *name ;
   char *hname ;
   char *vpath ;
   struct dep *deps ;
   struct commands *cmds ;
   int command_flags ;
   char *stem ;
   struct dep *also_make ;
   uintmax_t last_mtime ;
   uintmax_t mtime_before_update ;
   struct file *prev ;
   struct file *renamed ;
   struct variable_set_list *variables ;
   struct variable_set_list *pat_variables ;
   struct file *parent ;
   struct file *double_colon ;
   short update_status ;
   enum __anonenum_command_state_53 command_state : 2 ;
   unsigned int precious : 1 ;
   unsigned int low_resolution_time : 1 ;
   unsigned int tried_implicit : 1 ;
   unsigned int updating : 1 ;
   unsigned int updated : 1 ;
   unsigned int is_target : 1 ;
   unsigned int cmd_target : 1 ;
   unsigned int phony : 1 ;
   unsigned int intermediate : 1 ;
   unsigned int secondary : 1 ;
   unsigned int dontcare : 1 ;
   unsigned int ignore_vpath : 1 ;
   unsigned int pat_searched : 1 ;
   unsigned int considered : 1 ;
};
# 36 "dep.h"
struct dep {
   struct dep *next ;
   char *name ;
   struct file *file ;
   unsigned int changed : 8 ;
   unsigned int ignore_mtime : 1 ;
};
# 48
struct nameseq {
   struct nameseq *next ;
   char *name ;
};
# 209 "ar.c"
struct ar_glob_state {
   char *arname ;
   char *pattern ;
   unsigned int size ;
   struct nameseq *chain ;
   unsigned int n ;
};
# 36 "/usr/include/ar.h"
struct ar_hdr {
   char ar_name[16] ;
   char ar_date[12] ;
   char ar_uid[6] ;
   char ar_gid[6] ;
   char ar_mode[8] ;
   char ar_size[10] ;
   char ar_fmag[2] ;
};
# 24 "variable.h"
enum variable_origin {
    o_default = 0, 
    o_env = 1, 
    o_file = 2, 
    o_env_override = 3, 
    o_command = 4, 
    o_override = 5, 
    o_automatic = 6, 
    o_invalid = 7,  };
# 36
enum variable_flavor {
    f_bogus = 0, 
    f_simple = 1, 
    f_recursive = 2, 
    f_append = 3, 
    f_conditional = 4,  };
# 53
enum variable_export {
    v_export = 0, 
    v_noexport = 1, 
    v_ifset = 2, 
    v_default = 3,  };
# 53
struct variable {
   char *name ;
   int length ;
   char *value ;
   struct floc fileinfo ;
   unsigned int recursive : 1 ;
   unsigned int per_target : 1 ;
   unsigned int append : 1 ;
   unsigned int special : 1 ;
   unsigned int expanding : 1 ;
   unsigned int exp_count : 15 ;
   enum variable_origin origin : 3 ;
   unsigned int exportable : 1 ;
   enum variable_export export : 2 ;
};
# 85
struct variable_set {
   struct hash_table table ;
};
# 92
struct variable_set_list {
   struct variable_set_list *next ;
   struct variable_set *set ;
};
# 25 "job.h"
struct child {
   struct child *next ;
   struct file *file ;
   char **environment ;
   char **command_lines ;
   unsigned int command_line ;
   char *command_ptr ;
   pid_t pid ;
   char *sh_batch_file ;
   unsigned int remote : 1 ;
   unsigned int noerror : 1 ;
   unsigned int good_stdin : 1 ;
   unsigned int deleted : 1 ;
};
# 23 "commands.h"
struct commands {
   struct floc fileinfo ;
   char *commands ;
   unsigned int ncommand_lines ;
   char **command_lines ;
   char *lines_flags ;
   int any_recurse ;
};
# 22 "rule.h"
struct rule {
   struct rule *next ;
   char **targets ;
   unsigned int *lens ;
   char **suffixes ;
   struct dep *deps ;
   struct commands *cmds ;
   char terminal ;
   char in_use ;
};
# 34
struct pattern_var {
   struct pattern_var *next ;
   char *target ;
   unsigned int len ;
   char *suffix ;
   struct variable_set_list *vars ;
};
# 44
struct pspec {
   char *target ;
   char *dep ;
   char *commands ;
};
# 23 "/usr/include/bits/dirent.h"
struct dirent {
   __ino64_t d_ino ;
   __off64_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
# 128 "/usr/include/dirent.h"
typedef struct __dirstream DIR;
# 220 "dir.c"
struct directory_contents {
   dev_t dev ;
   ino_t ino ;
   struct hash_table dirfiles ;
   DIR *dirstream ;
};
# 337
struct directory {
   char *name ;
   struct directory_contents *contents ;
};
# 382
struct dirfile {
   char *name ;
   short length ;
   short impossible ;
};
# 481 "/users/rupak/ccured/include/ccured_GNUCC.patch"
struct glob_s {
   size_t gl_pathc ;
   char **gl_pathv ;
   size_t gl_offs ;
   int gl_flags ;
   void (*gl_closedir)(void * ) ;
   struct dirent *(*gl_readdir)(void * ) ;
   void *(*gl_opendir)(char const   * ) ;
   int (*gl_lstat)(char const   * __restrict   , struct stat * __restrict   ) ;
   int (*gl_stat)(char const   * __restrict   , struct stat * __restrict   ) ;
};
# 481
typedef struct glob_s glob_t;
# 1088 "dir.c"
struct dirstream {
   struct directory_contents *contents ;
   struct dirfile **dirfile_slot ;
};
# 33 "function.c"
struct function_table_entry {
   char const   *name ;
   unsigned char len ;
   unsigned char minimum_args ;
   unsigned char maximum_args ;
   char expand_args ;
   char *(*func_ptr)(char *output , char **argv , char const   *fname ) ;
};
# 893
struct a_word {
   struct a_word *next ;
   struct a_word *chain ;
   char *str ;
   int length ;
   int matched ;
};
# 928
struct a_pattern {
   struct a_pattern *next ;
   char *str ;
   char *percent ;
   int length ;
   int save_c ;
};
# 534 "job.c"
union __anonunion___u_55 {
   int __in ;
   int __i ;
};
# 535
union __anonunion___u_58 {
   int __in ;
   int __i ;
};
# 535
union __anonunion___u_59 {
   int __in ;
   int __i ;
};
# 536
union __anonunion___u_60 {
   int __in ;
   int __i ;
};
# 84 "main.c"
enum __anonenum_type_54 {
    flag = 0, 
    flag_off = 1, 
    string = 2, 
    positive_int = 3, 
    floating = 4, 
    ignore = 5,  };
# 84
struct command_switch {
   int c ;
   enum __anonenum_type_54 type ;
   char *value_ptr ;
   unsigned int env : 1 ;
   unsigned int toenv : 1 ;
   unsigned int no_makefile : 1 ;
   char *noarg_value ;
   char *default_value ;
   char *long_name ;
};
# 117
struct stringlist {
   char **list ;
   unsigned int idx ;
   unsigned int max ;
};
# 413
struct command_variable {
   struct command_variable *next ;
   struct variable *variable ;
};
# 2421
struct flag {
   struct flag *next ;
   struct command_switch  const  *cs ;
   char *arg ;
};
# 50 "/users/rupak/ccured/include/gcc_3.2/pwd.h"
struct passwd {
   char *pw_name ;
   char *pw_passwd ;
   __uid_t pw_uid ;
   __gid_t pw_gid ;
   char *pw_gecos ;
   char *pw_dir ;
   char *pw_shell ;
};
# 51 "read.c"
struct ebuffer {
   char *buffer ;
   char *bufnext ;
   char *bufstart ;
   unsigned int size ;
   FILE *fp ;
   struct floc floc ;
};
# 62
enum make_word_type {
    w_bogus = 0, 
    w_eol = 1, 
    w_static = 2, 
    w_variable = 3, 
    w_colon = 4, 
    w_dcolon = 5, 
    w_semicolon = 6, 
    w_varassign = 7,  };
# 77
struct conditionals {
   unsigned int if_cmds ;
   unsigned int allocated ;
   char *ignoring ;
   char *seen_else ;
};
# 30 "vpath.c"
struct vpath {
   struct vpath *next ;
   char *pattern ;
   char *percent ;
   unsigned int patlen ;
   char **searchpath ;
   unsigned int maxlen ;
};
struct token;
struct __dirstream;
# 19 "/users/rupak/ccured/include/ccured.h"
extern void *wrapperAlloc(unsigned int  ) ;
# 52
extern void * __attribute__((__safe__)) __ptrof_nocheck(void *ptr ) ;
# 64
extern void * __attribute__((__safe__)) __endof(void *ptr ) ;
# 79
extern void * __attribute__((__safe__)) __ptrof(void *ptr ) ;
# 93
extern void __verify_nul(char const   *ptr ) ;
# 126
extern char *__stringof(char const   *ptr ) ;
# 182
extern void *__mkptr(void * __attribute__((__safe__)) p , void *phome ) ;
# 198
extern void *__mkptr_size(void * __attribute__((__safe__)) p , unsigned int len ) ;
# 208
extern char *__mkptr_string(char * __attribute__((__safe__)) p ) ;
# 229
extern void *__trusted_cast(void *p ) ;
# 239
extern void * __attribute__((__safe__)) __trusted_deepcast(void * __attribute__((__safe__)) p ) ;
# 311
extern int __ccured_has_empty_mangling(unsigned int  ) ;
# 48 "/users/rupak/ccured/include/time_wrappers.h"
extern time_t time(time_t *__timer ) ;
# 63
extern char *ctime(time_t const   *__timer ) ;
# 326 "/users/rupak/ccured/include/gcc_3.2/sys/stat.h"
extern int __fxstat(int __ver , int __fildes , struct stat *__stat_buf )  __asm__("__fxstat64")  ;
# 329
extern int __xstat(int __ver , char const   *__filename ,
                   struct stat *__stat_buf )  __asm__("__xstat64")  ;
# 356
__inline static int stat__extinline(char const   *__path ,
                                    struct stat *__statbuf ) 
{ int tmp ;

  {
  {
# 359
  tmp = __xstat(3, __path, __statbuf);
  }
# 359
  return (tmp);
}
}
# 370
__inline static int fstat__extinline(int __fd , struct stat *__statbuf ) 
{ int tmp ;

  {
  {
# 372
  tmp = __fxstat(3, __fd, __statbuf);
  }
# 372
  return (tmp);
}
}
# 90 "/users/rupak/ccured/include/gcc_3.2/signal.h"
extern __sighandler_t signal(int __sig , void (*__handler)(int  ) ) ;
# 107
extern __sighandler_t bsd_signal(int __sig , void (*__handler)(int  ) ) ;
# 114
extern int kill(__pid_t __pid , int __sig ) ;
# 209
extern int sigemptyset(sigset_t *__set ) ;
# 215
extern int sigaddset(sigset_t *__set , int __signo ) ;
# 241
extern int sigprocmask(int __how , sigset_t const   * __restrict  __set ,
                       sigset_t * __restrict  __oset ) ;
# 249
extern int sigaction(int __sig , struct sigaction  const  * __restrict  __act ,
                     struct sigaction * __restrict  __oact ) ;
# 57 "/users/rupak/ccured/include/signal_wrappers.h"
__inline static void *__mkfat_sighandler(void *in ) 
{ void *tmp ;
  void *tmp___0 ;

  {
# 58
  if ((int )in == 1) {
    {
# 59
    tmp = __mkptr((void */* __attribute__((__safe__)) */)in, (void *)0);
    }
# 59
    return (tmp);
  } else {
    {
# 61
    tmp___0 = __mkptr_size((void */* __attribute__((__safe__)) */)in, 1U);
    }
# 61
    return (tmp___0);
  }
}
}
# 80
extern void __deepcopy_sigaction_from_compat(struct sigaction *fat ,
                                             struct sigaction  __attribute__((__compat__)) *compat ) 
{ 

  {
  {
# 81
  fat->sa_handler = (void (*)(int  ))__mkfat_sighandler((void *)compat->sa_handler);
# 82
  fat->sa_restorer = (void (*)(void))__mkfat_sighandler((void *)compat->sa_restorer);
  }
# 84
  return;
}
}
# 433 "/usr/include/libio.h"
extern int _IO_putc(int __c , FILE *__fp ) ;
# 167 "/users/rupak/ccured/include/ccured_GNUCC.patch"
extern FILE *get_stdin(void) ;
# 169
extern FILE *get_stdout(void) ;
# 171
extern FILE *get_stderr(void) ;
# 154 "/usr/include/stdio.h"
extern int remove(char const   *__filename ) ;
# 202
extern int fclose(FILE *__stream ) ;
# 204
extern int fflush(FILE *__stream ) ;
# 229
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes )  __asm__("fopen64")  ;
# 252
extern FILE *fdopen(int __fd , char const   *__modes ) ;
# 280
extern int setvbuf(FILE * __restrict  __stream , char * __restrict  __buf ,
                   int __modes , size_t __n ) ;
# 297
extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
# 300
extern int printf(char const   * __restrict  __format  , ...) ;
# 302
extern int sprintf(char * __restrict  __s , char const   * __restrict  __format 
                   , ...) ;
# 306
extern int vfprintf(FILE * __restrict  __s ,
                    char const   * __restrict  __format , __gnuc_va_list __arg ) ;
# 358
extern int sscanf(char const   * __restrict  __s ,
                  char const   * __restrict  __format  , ...) ;
# 442
extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;
# 479
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
# 483
extern int puts(char const   *__s ) ;
# 491
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n ,
                    FILE * __restrict  __stream ) ;
# 494
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size ,
                     size_t __n , FILE * __restrict  __s ) ;
# 579
extern int feof(FILE *__stream ) ;
# 581
extern int ferror(FILE *__stream ) ;
# 594
extern void perror(char const   *__s ) ;
# 65 "/usr/include/bits/stdio.h"
__inline static int putchar__extinline(int __c ) 
{ FILE *tmp ;
  int tmp___0 ;

  {
  {
# 68
  tmp = get_stdout();
  {
# 105 "spec.work"
  tmp->__BLAST_FLAG = 1;
  {

  }
  }
# 68 "/usr/include/bits/stdio.h"
  tmp___0 = _IO_putc(__c, tmp);
  }
# 68
  return (tmp___0);
}
}
# 65 "/users/rupak/ccured/include/stdio_wrappers.h"
FILE * __attribute__((__safe__)) __ptrof_file(FILE *f ) 
{ 

  {
# 66
  return ((FILE */* __attribute__((__safe__)) */)f);
}
}
# 264 "/users/rupak/ccured/include/ccured_GNUCC.patch"
extern void __ccured_va_start(__ccured_va_list  , unsigned long  ) ;
# 267
extern void __ccured_va_end(__ccured_va_list  ) ;
# 337 "/users/rupak/ccured/include/stdio_wrappers.h"
extern int ( /* missing proto */  GCC_STDARG_START)() ;
# 468
void perror_wrapper(char const   *s ) 
{ char const   *tmp ;

  {
  {
# 469
  tmp = (char const   *)__stringof(s);
# 469
  perror(tmp);
  }
# 470
  return;
}
}
# 72 "/users/rupak/ccured/include/ccured_GNUCC.patch"
extern int _get__ctype_b(int  ) ;
# 116 "/usr/include/ctype.h"
extern int tolower(int __c ) ;
# 73 "/usr/include/sys/time.h"
extern int gettimeofday(struct timeval * __restrict  __tv ,
                        __timezone_ptr_t __tz ) ;
# 233 "/users/rupak/ccured/include/gcc_3.2/time.h"
extern struct tm *localtime(time_t const   *__timer ) ;
# 329
extern int clock_gettime(clockid_t __clock_id , struct timespec *__tp ) ;
# 38 "/usr/include/bits/errno.h"
extern int *__errno_location(void)  __attribute__((__const__)) ;
# 293 "/users/rupak/ccured/include/gcc_3.2/unistd.h"
extern __off64_t lseek(int __fd , __off64_t __offset , int __whence )  __asm__("lseek64")  ;
# 306
extern int close(int __fd ) ;
# 310
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
# 313
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
# 353
extern int pipe(int *__pipedes ) ;
# 409
extern int chdir(char const   *__path ) ;
# 423
extern char *getcwd(char *__buf , size_t __size ) ;
# 441
extern int dup(int __fd ) ;
# 444
extern int dup2(int __fd , int __fd2 ) ;
# 449
extern char **environ ;
# 479
extern int execvp(char const   *__file , char * const  *__argv ) ;
# 494
extern void _exit(int __status )  __attribute__((__noreturn__)) ;
# 518
extern __pid_t getpid(void) ;
# 672
extern __pid_t vfork(void) ;
# 711
extern int unlink(char const   *__name ) ;
# 725
extern char *getlogin(void) ;
# 35 "getopt.h"
extern char *optarg ;
# 49
extern int optind ;
# 54
extern int opterr ;
# 110
extern int getopt_long(int argc , char * const  *argv ,
                       char const   *shortopts ,
                       struct option  const  *longopts , int *longind ) ;
# 15 "/users/rupak/ccured/include/functions/deepcopy_stringarray.h"
__inline static char **__deepcopy_stringarray_from_compat(char * __attribute__((__safe__)) * __attribute__((__safe__)) array_in ) 
{ int num_strings ;
  int i ;
  char **new_array ;
  char * __attribute__((__safe__)) * __attribute__((__safe__)) p ;
  void * __attribute__((__safe__)) tmp ;
  char **tmp___0 ;
  int tmp___2 ;
  void *tmp___3 ;
  void *tmp___5 ;

  {
  {
# 17
  num_strings = 0;
  }
# 24
  if ((unsigned int )array_in ==
      (unsigned int )((char * __attribute__((__safe__)) *)0)) {
# 25
    return ((char **)0);
  }
  {
# 28
  p = array_in;
  }
# 29
  while ((unsigned int )(*p) != (unsigned int )((char *)0)) {
    {
# 31
    tmp___3 = __trusted_cast((void *)((unsigned long )p +
                                      (unsigned long )(1U * sizeof((*p)))));
# 31
    p = (char * __attribute__((__safe__)) */* __attribute__((__safe__)) */)((char * __attribute__((__safe__)) *)tmp___3);
# 32
    num_strings ++;
    }
  }
  {
# 34
  num_strings ++;
# 36
  tmp___2 = __ccured_has_empty_mangling(sizeof((*new_array)));
  }
# 36
  if (tmp___2) {
    {
# 38
    tmp = __trusted_deepcast((void */* __attribute__((__safe__)) */)((void *)array_in));
# 38
    tmp___0 = (char **)__mkptr_size(tmp, (unsigned int )num_strings *
                                         sizeof((*(new_array + 0))));
    }
# 38
    return (tmp___0);
  } else {
    {
# 42
    new_array = (char **)wrapperAlloc((unsigned int )num_strings *
                                      sizeof((*(new_array + 0))));
# 43
    i = 0;
    }
# 43
    while (i < num_strings) {
      {
# 46
      tmp___5 = __trusted_cast((void *)((unsigned long )array_in +
                                        (unsigned long )((unsigned int )i *
                                                         sizeof((*array_in)))));
# 46
      p = (char * __attribute__((__safe__)) */* __attribute__((__safe__)) */)((char * __attribute__((__safe__)) *)tmp___5);
# 47
      (*(new_array + i)) = __mkptr_string((*p));
# 43
      i ++;
      }
    }
  }
# 50
  return (new_array);
}
}
# 110 "/users/rupak/ccured/include/gcc_3.2/malloc.h"
extern void *malloc(size_t __size )  __attribute__((__malloc__)) ;
# 113
extern void *calloc(size_t __nmemb , size_t __size )  __attribute__((__malloc__)) ;
# 539 "/users/rupak/ccured/include/ccured_GNUCC.patch"
extern void *realloc(void *__ptr , size_t __size ) ;
# 123 "/usr/include/malloc.h"
extern void free(void *__ptr ) ;
# 10 "/users/rupak/ccured/include/malloc_wrappers.h"
void *realloc_wrapper(void *b , int sz ) 
{ void *res ;
  void *tmp ;
  void *tmp___0 ;
  void *result___0 ;

  {
  {
# 12
  tmp = (void *)__ptrof(b);
# 12
  tmp___0 = realloc(tmp, (unsigned int )sz);
# 12
  res = tmp___0;
# 15
  result___0 = b;
# 17
  result___0 = __mkptr_size((void */* __attribute__((__safe__)) */)res,
                            (unsigned int )sz);
  }
# 18
  return (result___0);
}
}
# 23
void free_wrapper(void *x ) 
{ void *tmp ;

  {
  {
# 24
  tmp = (void *)__ptrof(x);
# 24
  free(tmp);
  }
# 25
  return;
}
}
# 142 "/users/rupak/ccured/include/gcc_3.2/stdlib.h"
extern double atof(char const   *__nptr )  __attribute__((__pure__)) ;
# 144
extern int atoi(char const   *__nptr )  __attribute__((__pure__)) ;
# 146
extern long atol(char const   *__nptr )  __attribute__((__pure__)) ;
# 594 "/usr/include/stdlib.h"
extern void abort(void)  __attribute__((__noreturn__)) ;
# 612
extern void exit(int __status )  __attribute__((__noreturn__)) ;
# 626
extern char *getenv(char const   *__name ) ;
# 674
extern int mkstemp(char *__template )  __asm__("mkstemp64")  ;
# 737
extern void qsort(void *__base , size_t __nmemb , size_t __size ,
                  int (*__compar)(void const   * __attribute__((__safe__)) left ,
                                  void const   * __attribute__((__safe__)) right ) ) ;
# 910
extern int getloadavg(double *__loadavg , int __nelem ) ;
# 152 "/users/rupak/ccured/include/stdlib_wrappers.h"
static void *__qsort_base  ;
# 156
static int (*__qsort_compare)(void * , void * )  ;
# 195
static void *__bsearch_base  ;
# 196
static void *__bsearch_key  ;
# 200
static int (*__bsearch_compare)(void * , void * )  ;
# 38 "/users/rupak/ccured/include/gcc_3.2/string.h"
extern void *memcpy(void * __restrict  __dest ,
                    void const   * __restrict  __src , size_t __n ) ;
# 42
extern void *memmove(void *__dest , void const   *__src , size_t __n ) ;
# 58
extern void *memset(void *__s , int __c , size_t __n ) ;
# 61
extern int memcmp(void const   *__s1 , void const   *__s2 , size_t __n )  __attribute__((__pure__)) ;
# 82
extern char *strcpy(char * __restrict  __dest ,
                    char const   * __restrict  __src ) ;
# 89
extern char *strcat(char * __restrict  __dest ,
                    char const   * __restrict  __src ) ;
# 96
extern int strcmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__)) ;
# 99
extern int strncmp(char const   *__s1 , char const   *__s2 , size_t __n )  __attribute__((__pure__)) ;
# 126
extern char *strdup(char const   *__s )  __attribute__((__malloc__)) ;
# 162
extern char *strchr(char const   *__s , int __c )  __attribute__((__pure__)) ;
# 164
extern char *strrchr(char const   *__s , int __c )  __attribute__((__pure__)) ;
# 230 "/usr/include/string.h"
extern size_t strlen(char const   *__s )  __attribute__((__pure__)) ;
# 243
extern char *strerror(int errnum ) ;
# 287
extern int strcasecmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__)) ;
# 291
extern int strncasecmp(char const   *__s1 , char const   *__s2 , size_t __n )  __attribute__((__pure__)) ;
# 319
extern char *strsignal(int __sig ) ;
# 138 "/users/rupak/ccured/include/string_wrappers.h"
char *strrchr_wrapper(char const   *s , int chr ) 
{ char *result___0 ;
  char *tmp ;
  char *tmp___0 ;

  {
  {
# 141
  tmp = __stringof(s);
# 141
  result___0 = strrchr((char const   *)tmp, chr);
# 142
  tmp___0 = (char *)__mkptr((void */* __attribute__((__safe__)) */)((void *)result___0),
                            (void *)s);
  }
# 142
  return (tmp___0);
}
}
# 168
int strcasecmp_wrapper(char const   *s1 , char const   *s2 ) 
{ char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;

  {
  {
# 170
  tmp = __stringof(s2);
# 170
  tmp___0 = __stringof(s1);
# 170
  tmp___1 = strcasecmp((char const   *)tmp___0, (char const   *)tmp);
  }
# 170
  return (tmp___1);
}
}
# 181
int strncasecmp_wrapper(char const   *s1 , char const   *s2 , unsigned int n ) 
{ void * __attribute__((__safe__)) tmp ;
  void * __attribute__((__safe__)) tmp___0 ;
  void * __attribute__((__safe__)) tmp___1 ;
  void * __attribute__((__safe__)) tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  int tmp___5 ;

  {
  {
# 183
  tmp = __endof((void *)s1);
# 183
  tmp___0 = __ptrof_nocheck((void *)s1);
  }
# 183
  if ((unsigned int )tmp - (unsigned int )tmp___0 < n) {
    {
# 185
    __verify_nul(s1);
    }
  }
  {
# 187
  tmp___1 = __endof((void *)s2);
# 187
  tmp___2 = __ptrof_nocheck((void *)s2);
  }
# 187
  if ((unsigned int )tmp___1 - (unsigned int )tmp___2 < n) {
    {
# 188
    __verify_nul(s2);
    }
  }
  {
# 190
  tmp___3 = (char *)__ptrof((void *)s2);
# 190
  tmp___4 = (char *)__ptrof((void *)s1);
# 190
  tmp___5 = strncasecmp((char const   *)tmp___4, (char const   *)tmp___3, n);
  }
# 190
  return (tmp___5);
}
}
# 254
static char const   *saved_str   = (char const   *)((void *)0);
# 125 "/usr/include/locale.h"
extern char *setlocale(int __category , char const   *__locale ) ;
# 51 "/usr/include/libintl.h"
extern char *dcgettext(char const   *__domainname , char const   *__msgid ,
                       int __category ) ;
# 81
extern char *textdomain(char const   *__domainname ) ;
# 85
extern char *bindtextdomain(char const   *__domainname ,
                            char const   *__dirname ) ;
# 395 "make.h"
void message(int prefix , char const   *fmt  , ...) ;
# 397
void error(struct floc  const  *flocp , char const   *fmt  , ...) ;
# 399
void fatal(struct floc  const  *flocp , char const   *fmt  , ...)  __attribute__((__noreturn__)) ;
# 407
void die(int status )  __attribute__((__noreturn__)) ;
# 408
void log_working_directory(int entering ) ;
# 409
void pfatal_with_name(char const   *name )  __attribute__((__noreturn__)) ;
# 410
void perror_with_name(char const   *str , char const   *name ) ;
# 411
char *savestring(char const   *str , unsigned int length___0 ) ;
# 412
char *concat(char const   *s1 , char const   *s2 , char const   *s3 ) ;
# 413
char *xmalloc(unsigned int size ) ;
# 414
char *xrealloc(char *ptr , unsigned int size ) ;
# 415
char *xstrdup(char const   *ptr ) ;
# 416
char *find_next_token(char **ptr , unsigned int *lengthptr ) ;
# 417
char *next_token(char const   *s ) ;
# 418
char *end_of_token(char *s ) ;
# 419
void collapse_continuations(char *line ) ;
# 420
void remove_comments(char *line ) ;
# 421
char *sindex(char const   *big , unsigned int blen , char const   *small ,
             unsigned int slen ) ;
# 423
char *lindex(char const   *s , char const   *limit , int c ) ;
# 424
int alpha_compare(void const   *v1 , void const   *v2 ) ;
# 425
void print_spaces(unsigned int n ) ;
# 426
char *find_char_unquote(char *string___0 , int stop1 , int stop2 , int blank ) ;
# 427
char *find_percent(char *pattern ) ;
# 428
FILE *open_tmpfile(char **name , char const   *template ) ;
# 431
int ar_name(char *name ) ;
# 432
void ar_parse_name(char *name , char **arname_p , char **memname_p ) ;
# 433
int ar_touch(char *name ) ;
# 434
time_t ar_member_date(char *name ) ;
# 437
int dir_file_exists_p(char *dirname , char *filename ) ;
# 438
int file_exists_p(char *name ) ;
# 439
int file_impossible_p(char *filename ) ;
# 440
void file_impossible(char *filename ) ;
# 441
char *dir_name(char *dir ) ;
# 442
void hash_init_directories(void) ;
# 444
void define_default_variables(void) ;
# 445
void set_default_suffixes(void) ;
# 446
void install_default_suffix_rules(void) ;
# 447
void install_default_implicit_rules(void) ;
# 449
void build_vpath_lists(void) ;
# 450
void construct_vpath_list(char *pattern , char *dirpath ) ;
# 451
int vpath_search(char **file , uintmax_t *mtime_ptr ) ;
# 452
int gpath_search(char *file , int len ) ;
# 454
void construct_include_path(char **arg_dirs ) ;
# 456
void user_access(void) ;
# 457
void make_access(void) ;
# 458
void child_access(void) ;
# 485
struct floc  const  *reading_file ;
# 489
int just_print_flag  ;
# 489
int silent_flag  ;
# 489
int ignore_errors_flag ;
# 489
int keep_going_flag  ;
# 490
int print_data_base_flag ;
# 490
int question_flag ;
# 490
int touch_flag  ;
# 490
int always_make_flag ;
# 491
int env_overrides ;
# 491
int no_builtin_rules_flag ;
# 491
int no_builtin_variables_flag ;
# 492
int print_version_flag ;
# 492
int print_directory_flag ;
# 493
int warn_undefined_variables_flag  ;
# 493
int posix_pedantic  ;
# 493
int not_parallel  ;
# 494
int clock_skew_detected  ;
# 497
int batch_mode_shell ;
# 499
unsigned int job_slots ;
# 500
int job_fds[2] ;
# 501
int job_rfd ;
# 503
double max_load_average ;
# 508
char *program  ;
# 509
char *starting_directory  ;
# 510
unsigned int makelevel  ;
# 511
char *version_string ;
# 511
char *remote_description ;
# 513
unsigned int commands_started ;
# 515
int handling_fatal_signal ;
# 60 "hash.h"
void hash_init(struct hash_table *ht , unsigned long size ,
               unsigned long (*hash_1)(void const   *key ) ,
               unsigned long (*hash_2)(void const   *key ) ,
               int (*hash_cmp)(void const   *x , void const   *y ) ) ;
# 62
void hash_load(struct hash_table *ht , void *item_table ,
               unsigned long cardinality , unsigned long size ) ;
# 64
void **hash_find_slot(struct hash_table *ht , void const   *key ) ;
# 65
void *hash_find_item(struct hash_table *ht , void const   *key ) ;
# 66
void *hash_insert(struct hash_table *ht , void *item ) ;
# 67
void *hash_insert_at(struct hash_table *ht , void *item , void const   *slot ) ;
# 68
void *hash_delete(struct hash_table *ht , void const   *item ) ;
# 69
void *hash_delete_at(struct hash_table *ht , void const   *slot ) ;
# 71
void hash_free_items(struct hash_table *ht ) ;
# 72
void hash_free(struct hash_table *ht , int free_items ) ;
# 73
void hash_map(struct hash_table *ht , void (*map)(void const   *item ) ) ;
# 74
void hash_map_arg(struct hash_table *ht ,
                  void (*map)(void const   *item , void *arg ) , void *arg ) ;
# 75
void hash_print_stats(struct hash_table *ht , FILE *out_FILE ) ;
# 76
void **hash_dump(struct hash_table *ht , void **vector_0 ,
                 int (*compare)(void const   * , void const   * ) ) ;
# 78
void *hash_deleted_item ;
# 102 "filedef.h"
struct file *default_goal_file  ;
# 102
struct file *suffix_file  ;
# 102
struct file *default_file  ;
# 105
struct file *lookup_file(char *name ) ;
# 106
struct file *enter_file(char *name ) ;
# 107
void remove_intermediates(int sig ) ;
# 108
void snap_deps(void) ;
# 109
void rename_file(struct file *from_file , char *to_hname ) ;
# 110
void rehash_file(struct file *from_file , char *to_hname ) ;
# 111
void set_command_state(struct file *file , int state ) ;
# 112
void notice_finished_file(struct file *file ) ;
# 113
void init_hash_files(void) ;
# 155
uintmax_t file_timestamp_cons(char const   *fname , time_t s , int ns ) ;
# 157
uintmax_t file_timestamp_now(int *resolution ) ;
# 158
void file_timestamp_sprintf(char *p , uintmax_t ts ) ;
# 168
uintmax_t f_mtime(struct file *file , int search ) ;
# 55 "dep.h"
struct nameseq *multi_glob(struct nameseq *chain , unsigned int size ) ;
# 59
struct nameseq *parse_file_seq(char **stringp , int stopchar ,
                               unsigned int size , int strip ) ;
# 61
char *tilde_expand(char *name ) ;
# 64
struct nameseq *ar_glob(char *arname , char *member_pattern , unsigned int size ) ;
# 74
struct dep *copy_dep_chain(struct dep *d ) ;
# 75
struct dep *read_all_makefiles(char **makefiles___0 ) ;
# 76
int eval_buffer(char *buffer ) ;
# 77
int update_goal_chain(struct dep *goals___0 , int makefiles___0 ) ;
# 78
void uniquize_deps(struct dep *chain ) ;
# 78 "/usr/include/fnmatch.h"
extern int fnmatch(char const   *__pattern , char const   *__name , int __flags ) ;
# 30 "ar.c"
long ar_scan(char *archive , long (*function)() , long arg ) ;
# 31
int ar_name_equal(char *name , char *mem , int truncated ) ;
# 33
int ar_member_touch(char *arname , char *memname ) ;
# 41
int ar_name(char *name ) 
{ char *p ;
  char *tmp ;
  char *end ;
  size_t tmp___0 ;
  char const   *tmp___1 ;

  {
  {
# 45
  tmp = strchr((char const   *)name, (int )'(');
# 45
  p = tmp;
  }
# 48
  if ((unsigned int )p == (unsigned int )((char *)0)) {
# 49
    return (0);
  } else {
# 48
    if ((unsigned int )p == (unsigned int )name) {
# 49
      return (0);
    }
  }
  {
# 51
  tmp___0 = strlen((char const   *)p);
# 51
  end = (p + tmp___0) - 1;
  }
# 52
  if ((int )(*end) != 41) {
# 53
    return (0);
  }
# 55
  if ((int )(*(p + 1)) == 40) {
# 55
    if ((int )(*(end + -1)) == 41) {
      {
# 56
      tmp___1 = (char const   *)dcgettext((char const   *)((void *)0),
                                          (char const   *)"attempt to use unsupported feature: `%s\'",
                                          5);
# 56
      fatal((struct floc  const  *)((struct floc *)0), tmp___1, name);
      }
    }
  }
# 58
  return (1);
}
}
# 66
void ar_parse_name(char *name , char **arname_p , char **memname_p ) 
{ char *p ;
  char *tmp ;
  char *end ;
  size_t tmp___0 ;

  {
  {
# 70
  tmp = strchr((char const   *)name, (int )'(');
# 70
  p = tmp;
# 70
  tmp___0 = strlen((char const   *)name);
# 70
  end = (name + tmp___0) - 1;
  }
# 72
  if ((unsigned int )arname_p != (unsigned int )((char **)0)) {
    {
# 73
    (*arname_p) = savestring((char const   *)name, (unsigned int )(p - name));
    }
  }
# 75
  if ((unsigned int )memname_p != (unsigned int )((char **)0)) {
    {
# 76
    (*memname_p) = savestring((char const   *)(p + 1),
                              (unsigned int )(end - (p + 1)));
    }
  }
# 77
  return;
}
}
# 79
static long ar_member_date_1(int desc , char *mem , int truncated ,
                             long hdrpos , long datapos , long size ,
                             long date , int uid , int gid , int mode ,
                             char *name ) ;
# 84
time_t ar_member_date(char *name ) 
{ char *arname ;
  int arname_used ;
  char *memname ;
  long val ;
  struct file *arfile ;
  int tmp ;
  long tmp___0 ;

  {
  {
# 89
  arname_used = 0;
# 93
  ar_parse_name(name, & arname, & memname);
# 104
  arfile = lookup_file(arname);
  }
# 105
  if ((unsigned int )arfile == (unsigned int )((struct file *)0)) {
    {
# 105
    tmp = file_exists_p(arname);
    }
# 105
    if (tmp) {
      {
# 107
      arfile = enter_file(arname);
# 108
      arname_used = 1;
      }
    }
  }
# 111
  if ((unsigned int )arfile != (unsigned int )((struct file *)0)) {
    {
# 112
    f_mtime(arfile, 0);
    }
  }
  {
# 115
  val = ar_scan(arname, (long (*)())(& ar_member_date_1), (long )memname);
  }
# 117
  if (! arname_used) {
    {
# 118
    free((void *)arname);
    }
  }
  {
# 119
  free((void *)memname);
  }
# 121
  if (val <= 0L) {
    {
# 121
    tmp___0 = -1L;
    }
  } else {
    {
# 121
    tmp___0 = val;
    }
  }
# 121
  return (tmp___0);
}
}
# 127
static long ar_member_date_1(int desc , char *mem , int truncated ,
                             long hdrpos , long datapos , long size ,
                             long date , int uid , int gid , int mode ,
                             char *name ) 
{ long tmp___0 ;
  int tmp___1 ;

  {
  {
# 137
  tmp___1 = ar_name_equal(name, mem, truncated);
  }
# 137
  if (tmp___1) {
    {
# 137
    tmp___0 = date;
    }
  } else {
    {
# 137
    tmp___0 = 0L;
    }
  }
# 137
  return (tmp___0);
}
}
# 151
int ar_touch(char *name ) 
{ char *arname ;
  char *memname ;
  int arname_used ;
  register int val ;
  struct file *arfile ;
  int tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;

  {
  {
# 156
  arname_used = 0;
# 159
  ar_parse_name(name, & arname, & memname);
# 165
  arfile = lookup_file(arname);
  }
# 166
  if ((unsigned int )arfile == (unsigned int )((struct file *)0)) {
    {
# 168
    arfile = enter_file(arname);
# 169
    arname_used = 1;
    }
  }
  {
# 172
  f_mtime(arfile, 0);
# 175
  val = 1;
# 176
  tmp = ar_member_touch(arname, memname);
  }
# 176
  switch (tmp) {
  case -1: 
  {
# 179
  tmp___0 = (char const   *)dcgettext((char const   *)((void *)0),
                                      (char const   *)"touch: Archive `%s\' does not exist",
                                      5);
# 179
  error((struct floc  const  *)((struct floc *)0), tmp___0, arname);
  }
# 180
  break;
  case -2: 
  {
# 182
  tmp___1 = (char const   *)dcgettext((char const   *)((void *)0),
                                      (char const   *)"touch: `%s\' is not a valid archive",
                                      5);
# 182
  error((struct floc  const  *)((struct floc *)0), tmp___1, arname);
  }
# 183
  break;
  case -3: 
  {
# 185
  perror_with_name((char const   *)"touch: ", (char const   *)arname);
  }
# 186
  break;
  case 1: 
  {
# 188
  tmp___2 = (char const   *)dcgettext((char const   *)((void *)0),
                                      (char const   *)"touch: Member `%s\' does not exist in `%s\'",
                                      5);
# 188
  error((struct floc  const  *)((struct floc *)0), tmp___2, memname, arname);
  }
# 190
  break;
  case 0: 
  {
# 192
  val = 0;
  }
# 193
  break;
  default: 
  {
# 195
  tmp___3 = (char const   *)dcgettext((char const   *)((void *)0),
                                      (char const   *)"touch: Bad return code from ar_member_touch on `%s\'",
                                      5);
# 195
  error((struct floc  const  *)((struct floc *)0), tmp___3, name);
  }
  }
# 199
  if (! arname_used) {
    {
# 200
    free((void *)arname);
    }
  }
  {
# 201
  free((void *)memname);
  }
# 203
  return (val);
}
}
# 221
static long ar_glob_match(int desc , char *mem , int truncated , long hdrpos ,
                          long datapos , long size , long date , int uid ,
                          int gid , int mode , struct ar_glob_state *state ) 
{ struct nameseq *new ;
  struct nameseq *tmp ;
  int tmp___0 ;

  {
  {
# 232
  tmp___0 = fnmatch((char const   *)state->pattern, (char const   *)mem, 5);
  }
# 232
  if (tmp___0 == 0) {
    {
# 235
    tmp = (struct nameseq *)xmalloc(state->size);
# 235
    new = tmp;
# 236
    new->name = concat((char const   *)state->arname, (char const   *)mem,
                       (char const   *)")");
# 237
    new->next = state->chain;
# 238
    state->chain = new;
# 239
    state->n ++;
    }
  }
# 242
  return (0L);
}
}
# 247
static int glob_pattern_p___0(char const   *pattern , int quote ) 
{ register char const   *p ;
  int open___0 ;

  {
  {
# 253
  open___0 = 0;
# 255
  p = pattern;
  }
# 255
  while ((int const   )(*p) != 0) {
# 256
    switch ((int )(*p)) {
    case 63: 
    {

    }
    case 42: 
    {

    }
# 260
    return (1);
    case 92: 
    {

    }
# 263
    if (quote) {
      {
# 264
      p ++;
      }
    }
# 265
    break;
    case 91: 
    {
# 268
    open___0 = 1;
    }
# 269
    break;
    case 93: 
    {

    }
# 272
    if (open___0) {
# 273
      return (1);
    }
# 274
    break;
    }
    {
# 255
    p ++;
    }
  }
# 277
  return (0);
}
}
// omitted gcc builtin __builtin_alloca

# 283
struct nameseq *ar_glob(char *arname , char *member_pattern , unsigned int size ) 
{ struct ar_glob_state state ;
  char **names ;
  struct nameseq *n ;
  unsigned int i ;
  int tmp ;
  unsigned int tmp___2 ;
  unsigned int tmp___3 ;

  {
  {
# 293
  tmp = glob_pattern_p___0((char const   *)member_pattern, 1);
  }
# 293
  if (! tmp) {
# 294
    return ((struct nameseq *)0);
  }
  {
# 298
  i = strlen((char const   *)arname);
# 299
  state.arname = (char *)__builtin_alloca(i + 2U);
# 300
  memmove((void *)state.arname, (void const   *)arname, i);
# 301
  (*(state.arname + i)) = '(';
# 302
  (*(state.arname + (i + 1U))) = '\0';
# 303
  state.pattern = member_pattern;
# 304
  state.size = size;
# 305
  state.chain = (struct nameseq *)0;
# 306
  state.n = 0U;
# 307
  ar_scan(arname, (long (*)())(& ar_glob_match), (long )(& state));
  }
# 309
  if ((unsigned int )state.chain == (unsigned int )((struct nameseq *)0)) {
# 310
    return ((struct nameseq *)0);
  }
  {
# 313
  names = (char **)__builtin_alloca(state.n * sizeof(char *));
# 314
  i = 0U;
# 315
  n = state.chain;
  }
# 315
  while ((unsigned int )n != (unsigned int )((struct nameseq *)0)) {
    {
# 316
    tmp___2 = i;
# 316
    i ++;
# 316
    (*(names + tmp___2)) = n->name;
# 315
    n = n->next;
    }
  }
  {
# 319
  qsort((void *)((char *)names), i, sizeof((*names)),
        (int (*)(void const   * __attribute__((__safe__)) left ,
                 void const   * __attribute__((__safe__)) right ))(& alpha_compare));
# 322
  i = 0U;
# 323
  n = state.chain;
  }
# 323
  while ((unsigned int )n != (unsigned int )((struct nameseq *)0)) {
    {
# 324
    tmp___3 = i;
# 324
    i ++;
# 324
    n->name = (*(names + tmp___3));
# 323
    n = n->next;
    }
  }
# 326
  return (state.chain);
}
}
# 60 "/users/rupak/ccured/include/gcc_3.2/fcntl.h"
extern int fcntl(int __fd , int __cmd  , ...) ;
# 69
extern int open(char const   *file , int flag  , ...)  __asm__("open64")  ;
# 308 "arscan.c"
long ar_scan(char *archive , long (*function)() , long arg ) 
{ int long_name ;
  char *namemap ;
  register int desc ;
  int tmp ;
  char buf___1[8] ;
  register int nread ;
  int tmp___0 ;
  int tmp___1 ;
  register long member_offset ;
  register int nread___0 ;
  struct ar_hdr member_header ;
  char namebuf[(int )(sizeof(member_header.ar_name) + 1U)] ;
  char *name ;
  int is_namemap ;
  long eltsize ;
  int eltmode ;
  long fnval ;
  __off64_t tmp___2 ;
  int tmp___3 ;
  register char *p ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int namesize ;
  int tmp___8 ;
  int tmp___10 ;
  int tmp___11 ;
  long tmp___12 ;
  char *clear ;
  char *limit ;

  {
  {
# 321
  long_name = 0;
# 323
  namemap = (char *)0;
# 324
  tmp = open((char const   *)archive, 0, 0);
# 324
  desc = tmp;
  }
# 325
  if (desc < 0) {
# 326
    return (-1L);
  }
  {
# 330
  tmp___0 = read(desc, (void *)(buf___1), 8U);
# 330
  nread = tmp___0;
  }
# 331
  if (nread != 8) {
    {
# 333
    close(desc);
    }
# 334
    return (-2L);
  } else {
    {
# 331
    tmp___1 = memcmp((void const   *)(buf___1), (void const   *)"!<arch>\n", 8U);
    }
# 331
    if (tmp___1) {
      {
# 333
      close(desc);
      }
# 334
      return (-2L);
    }
  }
  {
# 398
  member_offset = 8L;
  }
# 432
  while (1) {
    {
# 454
    tmp___2 = lseek(desc, (long long )member_offset, 0);
    }
# 454
    if (tmp___2 < 0LL) {
      {
# 456
      close(desc);
      }
# 457
      return (-2L);
    }
    {
# 536
    nread___0 = read(desc, (void *)((char *)(& member_header)),
                     sizeof(struct ar_hdr ));
    }
# 537
    if (nread___0 == 0) {
# 539
      break;
    }
# 541
    if ((unsigned int )nread___0 != sizeof(struct ar_hdr )) {
      {
# 559
      close(desc);
      }
# 560
      return (-2L);
    } else {
      {
# 541
      tmp___3 = memcmp((void const   *)(member_header.ar_fmag),
                       (void const   *)"`\n", 2U);
      }
# 541
      if (tmp___3) {
        {
# 559
        close(desc);
        }
# 560
        return (-2L);
      }
    }
    {
# 563
    name = namebuf;
# 564
    memmove((void *)name, (void const   *)(member_header.ar_name),
            sizeof(member_header.ar_name));
# 566
    p = name + sizeof(member_header.ar_name);
    }
# 567
    while (1) {
      {
# 568
      (*p) = '\0';
      }
# 567
      if ((unsigned int )p > (unsigned int )name) {
        {
# 567
        p --;
        }
# 567
        if (! ((int )(*p) == 32)) {
# 567
          break;
        }
      } else {
# 567
        break;
      }
    }
    {
# 578
    tmp___4 = strcmp((char const   *)name, (char const   *)"//");
    }
# 578
    if (tmp___4) {
      {
# 578
      tmp___5 = strcmp((char const   *)name, (char const   *)"ARFILENAMES/");
      }
# 578
      if (tmp___5) {
        {
# 578
        tmp___6 = 0;
        }
      } else {
        {
# 578
        tmp___6 = 1;
        }
      }
    } else {
      {
# 578
      tmp___6 = 1;
      }
    }
    {
# 578
    is_namemap = tmp___6;
    }
# 582
    if ((int )(*p) == 47) {
      {
# 583
      (*p) = '\0';
      }
    }
# 591
    if (is_namemap) {
      _L___0: 
# 598
      if ((int )(*(name + 0)) == 35) {
# 598
        if ((int )(*(name + 1)) == 49) {
# 598
          if ((int )(*(name + 2)) == 47) {
            {
# 602
            tmp___8 = atoi((char const   *)(name + 3));
# 602
            namesize = tmp___8;
# 604
            name = (char *)__builtin_alloca(namesize + 1);
# 605
            nread___0 = read(desc, (void *)name, (unsigned int )namesize);
            }
# 606
            if (nread___0 != namesize) {
              {
# 608
              close(desc);
              }
# 609
              return (-2L);
            }
            {
# 611
            (*(name + namesize)) = '\0';
# 613
            long_name = 1;
            }
          }
        }
      }
    } else {
# 591
      if ((int )(*(name + 0)) == 32) {
        goto _L___1;
      } else {
# 591
        if ((int )(*(name + 0)) == 47) {
          _L___1: 
# 591
          if ((unsigned int )namemap != (unsigned int )((char *)0)) {
            {
# 595
            tmp___7 = atoi((char const   *)(name + 1));
# 595
            name = namemap + tmp___7;
# 596
            long_name = 1;
            }
          } else {
            goto _L___0;
          }
        } else {
          goto _L___0;
        }
      }
    }
    {
# 619
    sscanf((char const   */* __restrict  */)((char const   *)(member_header.ar_mode)),
           (char const   */* __restrict  */)((char const   *)"%o"), & eltmode);
# 620
    eltsize = atol((char const   *)(member_header.ar_size));
# 626
    tmp___10 = atoi((char const   *)(member_header.ar_gid));
# 626
    tmp___11 = atoi((char const   *)(member_header.ar_uid));
# 626
    tmp___12 = atol((char const   *)(member_header.ar_date));
# 626
    fnval = ((*function))(desc, name, ! long_name != 0, member_offset,
                          (unsigned long )member_offset +
                          (unsigned long )sizeof(struct ar_hdr ), eltsize,
                          tmp___12, tmp___11, tmp___10, eltmode, arg);
    }
# 642
    if (fnval) {
      {
# 644
      close(desc);
      }
# 645
      return (fnval);
    }
# 670
    if (is_namemap) {
      {
# 675
      namemap = (char *)__builtin_alloca(eltsize);
# 676
      nread___0 = read(desc, (void *)namemap, (unsigned int )eltsize);
      }
# 677
      if ((long )nread___0 != eltsize) {
        {
# 679
        close(desc);
        }
# 680
        return (-2L);
      }
      {
# 686
      limit = namemap + eltsize;
# 687
      clear = namemap;
      }
# 687
      while ((unsigned int )clear < (unsigned int )limit) {
# 689
        if ((int )(*clear) == 10) {
          {
# 691
          (*clear) = '\0';
          }
# 692
          if ((int )(*(clear + -1)) == 47) {
            {
# 693
            (*(clear + -1)) = '\0';
            }
          }
        }
        {
# 687
        clear ++;
        }
      }
      {
# 697
      is_namemap = 0;
      }
    }
    {
# 700
    member_offset = (long )((unsigned long )member_offset +
                            ((unsigned long )sizeof(struct ar_hdr ) +
                             (unsigned long )eltsize));
    }
# 701
    if (member_offset % 2L != 0L) {
      {
# 702
      member_offset ++;
      }
    }
  }
  {
# 707
  close(desc);
  }
# 708
  return (0L);
}
}
# 716
int ar_name_equal(char *name , char *mem , int truncated ) 
{ char *p ;
  struct ar_hdr hdr ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
# 723
  p = strrchr((char const   *)name, (int )'/');
  }
# 724
  if ((unsigned int )p != (unsigned int )((char *)0)) {
    {
# 725
    name = p + 1;
    }
  }
# 728
  if (truncated) {
    {
# 736
    tmp = strncmp((char const   *)name, (char const   *)mem,
                  sizeof(hdr.ar_name) - 1U);
    }
# 736
    return (tmp == 0);
  }
  {
# 744
  tmp___0 = strcmp((char const   *)name, (char const   *)mem);
  }
# 744
  if (tmp___0) {
    {
# 744
    tmp___1 = 0;
    }
  } else {
    {
# 744
    tmp___1 = 1;
    }
  }
# 744
  return (tmp___1);
}
}
# 749
static long ar_member_pos(int desc , char *mem , int truncated , long hdrpos ,
                          long datapos , long size , long date , int uid ,
                          int gid , int mode , char *name ) 
{ int tmp ;

  {
  {
# 759
  tmp = ar_name_equal(name, mem, truncated);
  }
# 759
  if (! tmp) {
# 760
    return (0L);
  }
# 761
  return (hdrpos);
}
}
# 771
int ar_member_touch(char *arname , char *memname ) 
{ register long pos ;
  long tmp ;
  register int fd ;
  struct ar_hdr ar_hdr ;
  register int i ;
  struct stat statbuf ;
  __off64_t tmp___0 ;
  ssize_t tmp___1 ;
  __off64_t tmp___2 ;
  ssize_t tmp___3 ;
  int tmp___4 ;
  __off64_t tmp___5 ;
  ssize_t tmp___6 ;
  int *tmp___7 ;
  int *tmp___8 ;

  {
  {
# 775
  tmp = ar_scan(arname, (long (*)())(& ar_member_pos), (long )memname);
# 775
  pos = tmp;
  }
# 781
  if (pos < 0L) {
# 782
    return ((int )pos);
  }
# 783
  if (! pos) {
# 784
    return (1);
  }
  {
# 786
  fd = open((char const   *)arname, 2, 438);
  }
# 787
  if (fd < 0) {
# 788
    return (-3);
  }
  {
# 790
  tmp___0 = lseek(fd, (long long )pos, 0);
  }
# 790
  if (tmp___0 < 0LL) {
    goto lose;
  }
  {
# 792
  tmp___1 = read(fd, (void *)((char *)(& ar_hdr)), sizeof(struct ar_hdr ));
  }
# 792
  if (sizeof(struct ar_hdr ) != (unsigned int )tmp___1) {
    goto lose;
  }
  {
# 795
  tmp___2 = lseek(fd, (long long )pos, 0);
  }
# 795
  if (tmp___2 < 0LL) {
    goto lose;
  }
  {
# 797
  tmp___3 = write(fd, (void const   *)((char *)(& ar_hdr)),
                  sizeof(struct ar_hdr ));
  }
# 797
  if (sizeof(struct ar_hdr ) != (unsigned int )tmp___3) {
    goto lose;
  }
  {
# 800
  tmp___4 = fstat__extinline(fd, & statbuf);
  }
# 800
  if (tmp___4 < 0) {
    goto lose;
  }
  {
# 804
  i = 0;
  }
# 804
  while ((unsigned int )i < sizeof(ar_hdr.ar_date)) {
    {
# 805
    ar_hdr.ar_date[i] = ' ';
# 804
    i ++;
    }
  }
  {
# 806
  sprintf((char */* __restrict  */)(ar_hdr.ar_date),
          (char const   */* __restrict  */)((char const   *)"%ld"),
          statbuf.st_mtim.tv_sec);
# 814
  tmp___5 = lseek(fd, (long long )pos, 0);
  }
# 814
  if (tmp___5 < 0LL) {
    goto lose;
  }
  {
# 816
  tmp___6 = write(fd, (void const   *)((char *)(& ar_hdr)),
                  sizeof(struct ar_hdr ));
  }
# 816
  if (sizeof(struct ar_hdr ) != (unsigned int )tmp___6) {
    goto lose;
  }
  {
# 818
  close(fd);
  }
# 819
  return (0);
  lose: 
  {
# 822
  tmp___7 = __errno_location();
# 822
  i = (*tmp___7);
# 823
  close(fd);
# 824
  tmp___8 = __errno_location();
# 824
  (*tmp___8) = i;
  }
# 825
  return (-3);
}
}
# 98 "variable.h"
char *variable_buffer  ;
# 99
struct variable_set_list *current_variable_set_list ;
# 102
char *variable_buffer_output(char *ptr , char *string___0 ,
                             unsigned int length___0 ) ;
# 103
char *variable_expand(char *line ) ;
# 104
char *allocated_variable_expand_for_file(char *line , struct file *file ) ;
# 107
char *expand_argument(char *str , char *end ) ;
# 108
char *variable_expand_string(char *line , char *string___0 , long length___0 ) ;
# 112
int handle_function(char **op , char **stringp ) ;
# 113
int pattern_matches(char *pattern , char *percent , char *str ) ;
# 114
char *subst_expand(char *o , char *text , char *subst , char *replace ,
                   unsigned int slen , unsigned int rlen , int by_word ,
                   int suffix_only ) ;
# 116
char *patsubst_expand(char *o , char *text , char *pattern , char *replace ,
                      char *pattern_percent , char *replace_percent ) ;
# 120
char *recursively_expand_for_file(struct variable *v , struct file *file ) ;
# 125
struct variable_set_list *create_new_variable_set(void) ;
# 126
struct variable_set_list *push_new_variable_scope(void) ;
# 127
void pop_variable_scope(void) ;
# 128
void define_automatic_variables(void) ;
# 129
void initialize_file_variables(struct file *file , int reading ) ;
# 130
void print_file_variables(struct file *file ) ;
# 131
void print_variable_set(struct variable_set *set , char *prefix ) ;
# 132
void merge_variable_set_lists(struct variable_set_list **setlist0 ,
                              struct variable_set_list *setlist1 ) ;
# 133
struct variable *do_variable_definition(struct floc  const  *flocp ,
                                        char const   *varname , char *value ,
                                        enum variable_origin origin ,
                                        enum variable_flavor flavor ,
                                        int target_var ) ;
# 134
struct variable *try_variable_definition(struct floc  const  *flocp ,
                                         char *line ,
                                         enum variable_origin origin ,
                                         int target_var ) ;
# 135
void init_hash_global_variable_set(void) ;
# 136
void hash_init_function_table(void) ;
# 137
struct variable *lookup_variable(char const   *name , unsigned int length___0 ) ;
# 138
struct variable *lookup_variable_in_set(char const   *name ,
                                        unsigned int length___0 ,
                                        struct variable_set  const  *set ) ;
# 142
struct variable *define_variable_in_set(char const   *name ,
                                        unsigned int length___0 , char *value ,
                                        enum variable_origin origin ,
                                        int recursive ,
                                        struct variable_set *set ,
                                        struct floc  const  *flocp ) ;
# 178
char **target_environment(struct file *file ) ;
# 180
int export_all_variables  ;
# 51 "job.h"
struct child *children ;
# 53
void new_job(struct file *file ) ;
# 54
void reap_children(int block , int err ) ;
# 55
void start_waiting_jobs(void) ;
# 57
char **construct_command_argv(char *line , char **restp , struct file *file ,
                              char **batch_filename_ptr ) ;
# 61
void child_execute_job(int stdin_fd , int stdout_fd , char **argv , char **envp ) ;
# 66
void exec_command(char **argv , char **envp ) ;
# 69
unsigned int job_slots_used ;
# 71
void block_sigs(void) ;
# 73
void unblock_sigs(void) ;
# 39 "commands.h"
void execute_file_commands(struct file *file ) ;
# 40
void print_commands(struct commands *cmds ) ;
# 41
void delete_child_targets(struct child *child ) ;
# 42
void chop_commands(struct commands *cmds ) ;
# 33 "commands.c"
int remote_kill(int id , int sig ) ;
# 41
static void set_file_variables(struct file *file ) 
{ char *at ;
  char *percent ;
  char *star ;
  char *less ;
  unsigned int len ;
  char *p ;
  int tmp___1 ;
  register struct dep *d ;
  char *name ;
  unsigned int len___0 ;
  char *tmp___2 ;
  size_t tmp___3 ;
  int tmp___4 ;
  struct file *tmp___5 ;
  unsigned int slen ;
  char *tmp___6 ;
  unsigned int tmp___7 ;
  char *tmp___8 ;
  int tmp___9 ;
  unsigned int qmark_len ;
  unsigned int plus_len ;
  unsigned int bar_len ;
  char *caret_value ;
  char *plus_value ;
  char *cp ;
  char *qmark_value ;
  char *bar_value ;
  char *qp ;
  char *bp ;
  struct dep *d___0 ;
  unsigned int len___1 ;
  char *tmp___11 ;
  size_t tmp___12 ;
  char *c ;
  char *tmp___14 ;
  char *tmp___15 ;
  size_t tmp___16 ;
  int tmp___17 ;
  char *tmp___18 ;
  int tmp___19 ;
  char *tmp___20 ;
  size_t tmp___21 ;
  char *c___0 ;
  char *tmp___24 ;
  char *tmp___25 ;
  size_t tmp___26 ;
  int tmp___27 ;
  char *tmp___28 ;
  char *tmp___29 ;
  char *tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;

  {
  {
# 51
  tmp___1 = ar_name(file->name);
  }
# 51
  if (tmp___1) {
    {
# 56
    p = strchr((char const   *)file->name, (int )'(');
# 57
    at = (char *)__builtin_alloca((p - file->name) + 1);
# 58
    memmove((void *)at, (void const   *)file->name,
            (unsigned int )(p - file->name));
# 59
    (*(at + (p - file->name))) = '\0';
# 60
    len = strlen((char const   *)(p + 1));
# 61
    percent = (char *)__builtin_alloca(len);
# 62
    memmove((void *)percent, (void const   *)(p + 1), len - 1U);
# 63
    (*(percent + (len - 1U))) = '\0';
    }
  } else {
    {
# 68
    at = file->name;
# 69
    percent = "";
    }
  }
# 73
  if ((unsigned int )file->stem == (unsigned int )((char *)0)) {
    {
# 83
    tmp___4 = ar_name(file->name);
    }
# 83
    if (tmp___4) {
      {
# 85
      tmp___2 = strchr((char const   *)file->name, (int )'(');
# 85
      name = tmp___2 + 1;
# 86
      tmp___3 = strlen((char const   *)name);
# 86
      len___0 = tmp___3 - 1U;
      }
    } else {
      {
# 91
      name = file->name;
# 92
      len___0 = strlen((char const   *)name);
      }
    }
    {
# 95
    tmp___5 = enter_file(".SUFFIXES");
# 95
    d = tmp___5->deps;
    }
# 95
    while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
# 97
      if ((unsigned int )d->name == (unsigned int )((char *)0)) {
        {
# 97
        tmp___6 = (d->file)->name;
        }
      } else {
        {
# 97
        tmp___6 = d->name;
        }
      }
      {
# 97
      tmp___7 = strlen((char const   *)tmp___6);
# 97
      slen = tmp___7;
      }
# 98
      if (len___0 > slen) {
# 98
        if ((unsigned int )d->name == (unsigned int )((char *)0)) {
          {
# 98
          tmp___8 = (d->file)->name;
          }
        } else {
          {
# 98
          tmp___8 = d->name;
          }
        }
        {
# 98
        tmp___9 = strncmp((char const   *)tmp___8,
                          (char const   *)(name + (len___0 - slen)), slen);
        }
# 98
        if (tmp___9 == 0) {
          {
# 100
          file->stem = savestring((char const   *)name, len___0 - slen);
          }
# 101
          break;
        }
      }
      {
# 95
      d = d->next;
      }
    }
# 104
    if ((unsigned int )d == (unsigned int )((struct dep *)0)) {
      {
# 105
      file->stem = "";
      }
    }
  }
  {
# 107
  star = file->stem;
  }
# 110
  if ((unsigned int )file->deps != (unsigned int )((struct dep *)0)) {
# 110
    if ((unsigned int )(file->deps)->name == (unsigned int )((char *)0)) {
      {
# 110
      less = ((file->deps)->file)->name;
      }
    } else {
      {
# 110
      less = (file->deps)->name;
      }
    }
  } else {
    {
# 110
    less = "";
    }
  }
# 112
  if ((unsigned int )file->cmds == (unsigned int )default_file->cmds) {
    {
# 115
    less = at;
    }
  }
  {
# 122
  define_variable_in_set((char const   *)"<", 1U, less, 6, 0,
                         (file->variables)->set,
                         (struct floc  const  *)((struct floc *)0));
# 123
  define_variable_in_set((char const   *)"*", 1U, star, 6, 0,
                         (file->variables)->set,
                         (struct floc  const  *)((struct floc *)0));
# 124
  define_variable_in_set((char const   *)"@", 1U, at, 6, 0,
                         (file->variables)->set,
                         (struct floc  const  *)((struct floc *)0));
# 125
  define_variable_in_set((char const   *)"%", 1U, percent, 6, 0,
                         (file->variables)->set,
                         (struct floc  const  *)((struct floc *)0));
# 143
  plus_len = 0U;
# 144
  d___0 = file->deps;
  }
# 144
  while ((unsigned int )d___0 != (unsigned int )((struct dep *)0)) {
# 145
    if (! d___0->ignore_mtime) {
# 146
      if ((unsigned int )d___0->name == (unsigned int )((char *)0)) {
        {
# 146
        tmp___11 = (d___0->file)->name;
        }
      } else {
        {
# 146
        tmp___11 = d___0->name;
        }
      }
      {
# 146
      tmp___12 = strlen((char const   *)tmp___11);
# 146
      plus_len += tmp___12 + 1U;
      }
    }
    {
# 144
    d___0 = d___0->next;
    }
  }
# 147
  if (plus_len == 0U) {
    {
# 148
    plus_len ++;
    }
  }
  {
# 150
  plus_value = (char *)__builtin_alloca(plus_len);
# 150
  cp = plus_value;
# 152
  qmark_len = plus_len + 1U;
# 153
  d___0 = file->deps;
  }
# 153
  while ((unsigned int )d___0 != (unsigned int )((struct dep *)0)) {
# 154
    if (! d___0->ignore_mtime) {
# 156
      if ((unsigned int )d___0->name == (unsigned int )((char *)0)) {
        {
# 156
        tmp___14 = (d___0->file)->name;
        }
      } else {
        {
# 156
        tmp___14 = d___0->name;
        }
      }
      {
# 156
      c = tmp___14;
# 159
      tmp___17 = ar_name(c);
      }
# 159
      if (tmp___17) {
        {
# 161
        tmp___15 = strchr((char const   *)c, (int )'(');
# 161
        c = tmp___15 + 1;
# 162
        tmp___16 = strlen((char const   *)c);
# 162
        len___1 = tmp___16 - 1U;
        }
      } else {
        {
# 166
        len___1 = strlen((char const   *)c);
        }
      }
      {
# 168
      memmove((void *)cp, (void const   *)c, len___1);
# 169
      cp += len___1;
# 170
      tmp___18 = cp;
# 170
      cp ++;
# 170
      (*tmp___18) = ' ';
      }
# 171
      if (! d___0->changed) {
        {
# 172
        qmark_len -= len___1 + 1U;
        }
      }
    }
    {
# 153
    d___0 = d___0->next;
    }
  }
# 177
  if ((unsigned int )cp > (unsigned int )plus_value) {
    {
# 177
    tmp___19 = -1;
    }
  } else {
    {
# 177
    tmp___19 = 0;
    }
  }
  {
# 177
  (*(cp + tmp___19)) = '\0';
# 178
  define_variable_in_set((char const   *)"+", 1U, plus_value, 6, 0,
                         (file->variables)->set,
                         (struct floc  const  *)((struct floc *)0));
# 184
  uniquize_deps(file->deps);
# 186
  bar_len = 0U;
# 187
  d___0 = file->deps;
  }
# 187
  while ((unsigned int )d___0 != (unsigned int )((struct dep *)0)) {
# 188
    if (d___0->ignore_mtime) {
# 189
      if ((unsigned int )d___0->name == (unsigned int )((char *)0)) {
        {
# 189
        tmp___20 = (d___0->file)->name;
        }
      } else {
        {
# 189
        tmp___20 = d___0->name;
        }
      }
      {
# 189
      tmp___21 = strlen((char const   *)tmp___20);
# 189
      bar_len += tmp___21 + 1U;
      }
    }
    {
# 187
    d___0 = d___0->next;
    }
  }
# 190
  if (bar_len == 0U) {
    {
# 191
    bar_len ++;
    }
  }
  {
# 195
  caret_value = plus_value;
# 195
  cp = caret_value;
# 196
  qmark_value = (char *)__builtin_alloca(qmark_len);
# 196
  qp = qmark_value;
# 197
  bar_value = (char *)__builtin_alloca(bar_len);
# 197
  bp = bar_value;
# 199
  d___0 = file->deps;
  }
# 199
  while ((unsigned int )d___0 != (unsigned int )((struct dep *)0)) {
# 201
    if ((unsigned int )d___0->name == (unsigned int )((char *)0)) {
      {
# 201
      tmp___24 = (d___0->file)->name;
      }
    } else {
      {
# 201
      tmp___24 = d___0->name;
      }
    }
    {
# 201
    c___0 = tmp___24;
# 204
    tmp___27 = ar_name(c___0);
    }
# 204
    if (tmp___27) {
      {
# 206
      tmp___25 = strchr((char const   *)c___0, (int )'(');
# 206
      c___0 = tmp___25 + 1;
# 207
      tmp___26 = strlen((char const   *)c___0);
# 207
      len___1 = tmp___26 - 1U;
      }
    } else {
      {
# 211
      len___1 = strlen((char const   *)c___0);
      }
    }
# 213
    if (d___0->ignore_mtime) {
      {
# 215
      memmove((void *)bp, (void const   *)c___0, len___1);
# 216
      bp += len___1;
# 217
      tmp___28 = bp;
# 217
      bp ++;
# 217
      (*tmp___28) = ' ';
      }
    } else {
      {
# 221
      memmove((void *)cp, (void const   *)c___0, len___1);
# 222
      cp += len___1;
# 223
      tmp___29 = cp;
# 223
      cp ++;
# 223
      (*tmp___29) = ' ';
      }
# 224
      if (d___0->changed) {
        {
# 226
        memmove((void *)qp, (void const   *)c___0, len___1);
# 227
        qp += len___1;
# 228
        tmp___30 = qp;
# 228
        qp ++;
# 228
        (*tmp___30) = ' ';
        }
      }
    }
    {
# 199
    d___0 = d___0->next;
    }
  }
# 235
  if ((unsigned int )cp > (unsigned int )caret_value) {
    {
# 235
    tmp___31 = -1;
    }
  } else {
    {
# 235
    tmp___31 = 0;
    }
  }
  {
# 235
  (*(cp + tmp___31)) = '\0';
# 236
  define_variable_in_set((char const   *)"^", 1U, caret_value, 6, 0,
                         (file->variables)->set,
                         (struct floc  const  *)((struct floc *)0));
  }
# 238
  if ((unsigned int )qp > (unsigned int )qmark_value) {
    {
# 238
    tmp___32 = -1;
    }
  } else {
    {
# 238
    tmp___32 = 0;
    }
  }
  {
# 238
  (*(qp + tmp___32)) = '\0';
# 239
  define_variable_in_set((char const   *)"?", 1U, qmark_value, 6, 0,
                         (file->variables)->set,
                         (struct floc  const  *)((struct floc *)0));
  }
# 241
  if ((unsigned int )bp > (unsigned int )bar_value) {
    {
# 241
    tmp___33 = -1;
    }
  } else {
    {
# 241
    tmp___33 = 0;
    }
  }
  {
# 241
  (*(bp + tmp___33)) = '\0';
# 242
  define_variable_in_set((char const   *)"|", 1U, bar_value, 6, 0,
                         (file->variables)->set,
                         (struct floc  const  *)((struct floc *)0));
  }
# 246
  return;
}
}
# 251
void chop_commands(struct commands *cmds ) 
{ register char *p ;
  unsigned int nlines ;
  unsigned int idx ;
  char **lines ;
  char *end ;
  size_t tmp___0 ;
  int backslash ;
  register char *b ;
  unsigned int tmp___2 ;
  char *tmp___4 ;
  int flags ;
  int tmp___5 ;
  unsigned int len ;
  unsigned int tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;

  {
# 262
  if (cmds) {
# 262
    if ((unsigned int )cmds->command_lines != (unsigned int )((char **)0)) {
# 263
      return;
    }
  } else {
# 263
    return;
  }
  {
# 269
  nlines = 5U;
# 270
  lines = (char **)xmalloc(5U * sizeof(char *));
# 271
  idx = 0U;
# 272
  p = cmds->commands;
  }
# 273
  while ((int )(*p) != 0) {
    {
# 275
    end = p;
    }
    find_end: 
    {
# 277
    end = strchr((char const   *)end, (int )'\n');
    }
# 278
    if ((unsigned int )end == (unsigned int )((char *)0)) {
      {
# 279
      tmp___0 = strlen((char const   *)p);
# 279
      end = p + tmp___0;
      }
    } else {
# 280
      if ((unsigned int )end > (unsigned int )p) {
# 280
        if ((int )(*(end + -1)) == 92) {
          {
# 282
          backslash = 1;
# 284
          b = end - 2;
          }
# 284
          while (1) {
# 284
            if ((unsigned int )b >= (unsigned int )p) {
# 284
              if (! ((int )(*b) == 92)) {
# 284
                break;
              }
            } else {
# 284
              break;
            }
            {
# 285
            backslash = ! backslash != 0;
# 284
            b --;
            }
          }
# 286
          if (backslash) {
            {
# 288
            end ++;
            }
            goto find_end;
          }
        }
      }
    }
# 293
    if (idx == nlines) {
      {
# 295
      nlines += 2U;
# 296
      lines = (char **)xrealloc((char *)lines, nlines * sizeof(char *));
      }
    }
    {
# 299
    tmp___2 = idx;
# 299
    idx ++;
# 299
    (*(lines + tmp___2)) = savestring((char const   *)p,
                                      (unsigned int )(end - p));
# 300
    p = end;
    }
# 301
    if ((int )(*p) != 0) {
      {
# 302
      p ++;
      }
    }
  }
# 305
  if (idx != nlines) {
    {
# 307
    nlines = idx;
# 308
    lines = (char **)xrealloc((char *)lines, nlines * sizeof(char *));
    }
  }
  {
# 312
  cmds->ncommand_lines = nlines;
# 313
  cmds->command_lines = lines;
# 315
  cmds->any_recurse = 0;
# 316
  tmp___4 = xmalloc(nlines);
# 316
  cmds->lines_flags = tmp___4;
# 317
  idx = 0U;
  }
# 317
  while (idx < nlines) {
    {
# 319
    flags = 0;
# 321
    p = (*(lines + idx));
    }
# 321
    while (1) {
      {
# 321
      tmp___5 = _get__ctype_b((int )((unsigned char )(*p)));
      }
# 321
      if (! (tmp___5 & 1)) {
# 321
        if (! ((int )(*p) == 45)) {
# 321
          if (! ((int )(*p) == 64)) {
# 321
            if (! ((int )(*p) == 43)) {
# 321
              break;
            }
          }
        }
      }
# 324
      switch ((int )(*p)) {
      case 43: 
      {
# 327
      flags |= 1;
      }
# 328
      break;
      case 64: 
      {
# 330
      flags |= 2;
      }
# 331
      break;
      case 45: 
      {
# 333
      flags |= 4;
      }
# 334
      break;
      }
      {
# 321
      p ++;
      }
    }
# 336
    if (! (flags & 1)) {
      {
# 338
      tmp___6 = strlen((char const   *)p);
# 338
      len = tmp___6;
# 339
      tmp___7 = sindex((char const   *)p, len, (char const   *)"$(MAKE)", 7U);
      }
# 339
      if ((unsigned int )tmp___7 != (unsigned int )((char *)0)) {
        {
# 341
        flags |= 1;
        }
      } else {
        {
# 339
        tmp___8 = sindex((char const   *)p, len, (char const   *)"${MAKE}", 7U);
        }
# 339
        if ((unsigned int )tmp___8 != (unsigned int )((char *)0)) {
          {
# 341
          flags |= 1;
          }
        }
      }
    }
    {
# 344
    (*(cmds->lines_flags + idx)) = (char )flags;
# 345
    cmds->any_recurse |= flags & 1;
# 317
    idx ++;
    }
  }
# 347
  return;
}
}
# 353
void execute_file_commands(struct file *file ) 
{ register char *p ;
  int tmp ;

  {
  {
# 362
  p = (file->cmds)->commands;
  }
# 362
  while ((int )(*p) != 0) {
    {
# 363
    tmp = _get__ctype_b((int )((unsigned char )(*p)));
    }
# 363
    if (! (tmp & 8192)) {
# 363
      if ((int )(*p) != 45) {
# 363
        if ((int )(*p) != 64) {
# 364
          break;
        }
      }
    }
    {
# 362
    p ++;
    }
  }
# 365
  if ((int )(*p) == 0) {
    {
# 368
    set_command_state(file, 2);
# 369
    file->update_status = (short )0;
# 370
    notice_finished_file(file);
    }
# 371
    return;
  }
  {
# 376
  initialize_file_variables(file, 0);
# 378
  set_file_variables(file);
# 381
  new_job(file);
  }
# 382
  return;
}
}
# 387
int handling_fatal_signal   = 0;
# 391
void fatal_error_signal(int sig ) 
{ register struct child *c ;
  register struct child *c___0 ;
  __pid_t tmp ;
  int tmp___0 ;

  {
  {
# 414
  handling_fatal_signal = 1;
# 418
  signal(sig, (void (*)(int  ))0);
  }
# 423
  if (sig == 15) {
    {
# 426
    c = children;
    }
# 426
    while ((unsigned int )c != (unsigned int )((struct child *)0)) {
# 427
      if (! c->remote) {
        {
# 428
        kill(c->pid, 15);
        }
      }
      {
# 426
      c = c->next;
      }
    }
  }
# 434
  if (sig == 15) {
    goto _L;
  } else {
# 434
    if (sig == 2) {
      goto _L;
    } else {
# 434
      if (sig == 1) {
        goto _L;
      } else {
# 434
        if (sig == 3) {
          _L: 
          {
# 447
          c___0 = children;
          }
# 447
          while ((unsigned int )c___0 != (unsigned int )((struct child *)0)) {
# 448
            if (c___0->remote) {
              {
# 449
              remote_kill(c___0->pid, sig);
              }
            }
            {
# 447
            c___0 = c___0->next;
            }
          }
          {
# 451
          c___0 = children;
          }
# 451
          while ((unsigned int )c___0 != (unsigned int )((struct child *)0)) {
            {
# 452
            delete_child_targets(c___0);
# 451
            c___0 = c___0->next;
            }
          }
# 456
          while (job_slots_used > 0U) {
            {
# 457
            reap_children(1, 0);
            }
          }
        } else {
# 461
          while (job_slots_used > 0U) {
            {
# 462
            reap_children(1, 1);
            }
          }
        }
      }
    }
  }
  {
# 466
  remove_intermediates(1);
  }
# 469
  if (sig == 3) {
    {
# 472
    exit(1);
    {
# 121 "spec.work"
    while (1) {

    }
    {

    }
    }

    }
  }
  {
# 477 "commands.c"
  tmp = getpid();
# 477
  tmp___0 = kill(tmp, sig);
  }
# 477
  if (tmp___0 < 0) {
    {
# 478
    pfatal_with_name((char const   *)"kill");
    }
  }
# 481
  return;
}
}
# 486
static void delete_target(struct file *file , char *on_behalf_of ) 
{ struct stat st ;
  time_t file_date ;
  long tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  time_t tmp___2 ;
  int tmp___3 ;
  char const   *tmp___4 ;
  char const   *tmp___5 ;
  int tmp___6 ;
  int *tmp___7 ;
  int tmp___8 ;
  uintmax_t tmp___9 ;

  {
# 493
  if (file->precious) {
# 494
    return;
  } else {
# 493
    if (file->phony) {
# 494
      return;
    }
  }
  {
# 497
  tmp___3 = ar_name(file->name);
  }
# 497
  if (tmp___3) {
# 499
    if (file->last_mtime == 1ULL) {
      {
# 499
      tmp = -1L;
      }
    } else {
      {
# 499
      tmp = (long )((file->last_mtime - 3ULL) >> 30);
      }
    }
    {
# 499
    file_date = tmp;
# 502
    tmp___2 = ar_member_date(file->name);
    }
# 502
    if (tmp___2 != file_date) {
# 504
      if (on_behalf_of) {
        {
# 505
        tmp___0 = (char const   *)dcgettext((char const   *)((void *)0),
                                            (char const   *)"*** [%s] Archive member `%s\' may be bogus; not deleted",
                                            5);
# 505
        error((struct floc  const  *)((struct floc *)0), tmp___0, on_behalf_of,
              file->name);
        }
      } else {
        {
# 508
        tmp___1 = (char const   *)dcgettext((char const   *)((void *)0),
                                            (char const   *)"*** Archive member `%s\' may be bogus; not deleted",
                                            5);
# 508
        error((struct floc  const  *)((struct floc *)0), tmp___1, file->name);
        }
      }
    }
# 511
    return;
  }
  {
# 515
  tmp___8 = stat__extinline((char const   *)file->name, & st);
  }
# 515
  if (tmp___8 == 0) {
# 515
    if ((st.st_mode & 61440U) == 32768U) {
      {
# 515
      tmp___9 = file_timestamp_cons((char const   *)file->name,
                                    st.st_mtim.tv_sec, (int )st.st_mtim.tv_nsec);
      }
# 515
      if (tmp___9 != file->last_mtime) {
# 519
        if (on_behalf_of) {
          {
# 520
          tmp___4 = (char const   *)dcgettext((char const   *)((void *)0),
                                              (char const   *)"*** [%s] Deleting file `%s\'",
                                              5);
# 520
          error((struct floc  const  *)((struct floc *)0), tmp___4,
                on_behalf_of, file->name);
          }
        } else {
          {
# 522
          tmp___5 = (char const   *)dcgettext((char const   *)((void *)0),
                                              (char const   *)"*** Deleting file `%s\'",
                                              5);
# 522
          error((struct floc  const  *)((struct floc *)0), tmp___5, file->name);
          }
        }
        {
# 523
        tmp___6 = unlink((char const   *)file->name);
        }
# 523
        if (tmp___6 < 0) {
          {
# 523
          tmp___7 = __errno_location();
          }
# 523
          if ((*tmp___7) != 2) {
            {
# 525
            perror_with_name((char const   *)"unlink: ",
                             (char const   *)file->name);
            }
          }
        }
      }
    }
  }
# 527
  return;
}
}
# 533
void delete_child_targets(struct child *child ) 
{ struct dep *d ;

  {
# 539
  if (child->deleted) {
# 540
    return;
  }
  {
# 543
  delete_target(child->file, (char *)0);
# 546
  d = (child->file)->also_make;
  }
# 546
  while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
    {
# 547
    delete_target(d->file, (child->file)->name);
# 546
    d = d->next;
    }
  }
  {
# 549
  child->deleted = 1U;
  }
# 550
  return;
}
}
# 554
void print_commands(struct commands *cmds ) 
{ register char *s ;
  FILE * __restrict  tmp ;
  char const   * __restrict  tmp___0 ;
  char const   *tmp___1 ;
  char const   * __restrict  tmp___2 ;
  char *end ;
  int tmp___3 ;
  size_t tmp___4 ;

  {
  {
# 560
  tmp = (FILE */* __restrict  */)get_stdout();
  {
# 105 "spec.work"
  tmp->__BLAST_FLAG = 1;
  {

  }
  }
# 560 "commands.c"
  tmp___0 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                       (char const   *)"#  commands to execute",
                                                       5);
  {
# 40 "spec.work"
  if (! (tmp->__BLAST_FLAG == 1)) {
# 42
    __error__();
  }
  {

  }
  }
# 560 "commands.c"
  fputs(tmp___0, tmp);
  }
# 562
  if ((unsigned int )cmds->fileinfo.filenm == (unsigned int )((char *)0)) {
    {
# 563
    tmp___1 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)" (built-in):", 5);
# 563
    puts(tmp___1);
    }
  } else {
    {
# 565
    tmp___2 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                         (char const   *)" (from `%s\', line %lu):\n",
                                                         5);
# 565
    printf(tmp___2, cmds->fileinfo.filenm, cmds->fileinfo.lineno);
    }
  }
  {
# 568
  s = cmds->commands;
  }
# 569
  while ((int )(*s) != 0) {
# 573
    while (1) {
      {
# 573
      tmp___3 = _get__ctype_b((int )((unsigned char )(*s)));
      }
# 573
      if (! (tmp___3 & 8192)) {
# 573
        break;
      }
      {
# 574
      s ++;
      }
    }
    {
# 576
    end = strchr((char const   *)s, (int )'\n');
    }
# 577
    if ((unsigned int )end == (unsigned int )((char *)0)) {
      {
# 578
      tmp___4 = strlen((char const   *)s);
# 578
      end = s + tmp___4;
      }
    }
    {
# 580
    printf((char const   */* __restrict  */)((char const   *)"\t%.*s\n"),
           end - s, s);
# 582
    s = end;
    }
  }
# 584
  return;
}
}
# 50 "rule.h"
struct rule *pattern_rules  ;
# 51
struct rule *last_pattern_rule  ;
# 52
unsigned int num_pattern_rules  ;
# 54
unsigned int max_pattern_deps  ;
# 55
unsigned int max_pattern_targets  ;
# 56
unsigned int max_pattern_dep_length  ;
# 59
unsigned int maxsuffix  ;
# 62
void install_pattern_rule(struct pspec *p , int terminal ) ;
# 63
int new_pattern_rule(struct rule *rule , int override ) ;
# 64
struct pattern_var *create_pattern_var(char *target , char *suffix ) ;
# 65
struct pattern_var *lookup_pattern_var(char *target ) ;
# 66
void count_implicit_rule_limits(void) ;
# 67
void convert_to_pattern(void) ;
# 68
void create_pattern_rule(char **targets , char **target_percents ,
                         int terminal , struct dep *deps ,
                         struct commands *commands , int override ) ;
# 39 "default.c"
static char default_suffixes[136]   = 
# 39
  {'.', 'o', 'u', 't', ' ', '.', 'a', ' ', '.', 'l', 'n', ' ', '.', 'o', ' ',
   '.', 'c', ' ', '.', 'c', 'c', ' ', '.', 'C', ' ', '.', 'c', 'p', 'p', ' ',
   '.', 'p', ' ', '.', 'f', ' ', '.', 'F', ' ', '.', 'r', ' ', '.', 'y', ' ',
   '.', 'l', ' ', '.', 's', ' ', '.', 'S', ' ', '.', 'm', 'o', 'd', ' ', '.',
   's', 'y', 'm', ' ', '.', 'd', 'e', 'f', ' ', '.', 'h', ' ', '.', 'i', 'n',
   'f', 'o', ' ', '.', 'd', 'v', 'i', ' ', '.', 't', 'e', 'x', ' ', '.', 't',
   'e', 'x', 'i', 'n', 'f', 'o', ' ', '.', 't', 'e', 'x', 'i', ' ', '.', 't',
   'x', 'i', 'n', 'f', 'o', ' ', '.', 'w', ' ', '.', 'c', 'h', ' ', '.', 'w',
   'e', 'b', ' ', '.', 's', 'h', ' ', '.', 'e', 'l', 'c', ' ', '.', 'e', 'l',
   '\0'};
# 50
static struct pspec default_pattern_rules[5]   = {{"(%)", "%",
                                                   "$(AR) $(ARFLAGS) $@ $<"},
                                                  {"%.out", "%",
                                                   "@rm -f $@ \n cp $< $@"},
                                                  {"%.c", "%.w %.ch",
                                                   "$(CTANGLE) $^ $@"},
                                                  {"%.tex", "%.w %.ch",
                                                   "$(CWEAVE) $^ $@"},
                                                  {(char *)0, (char *)0,
                                                   (char *)0}};
# 74
static struct pspec default_terminal_rules[6]   = {{"%", "%,v", "$(CHECKOUT,v)"},
                                                   {"%", "RCS/%,v",
                                                    "$(CHECKOUT,v)"},
                                                   {"%", "RCS/%",
                                                    "$(CHECKOUT,v)"},
                                                   {"%", "s.%",
                                                    "$(GET) $(GFLAGS) $(SCCS_OUTPUT_OPTION) $<"},
                                                   {"%", "SCCS/s.%",
                                                    "$(GET) $(GFLAGS) $(SCCS_OUTPUT_OPTION) $<"},
                                                   {(char *)0, (char *)0,
                                                    (char *)0}};
# 107
static char *default_suffix_rules[92]   = 
# 107
  {".o", "$(LINK.o) $^ $(LOADLIBES) $(LDLIBS) -o $@", ".s",
   "$(LINK.s) $^ $(LOADLIBES) $(LDLIBS) -o $@", ".S",
   "$(LINK.S) $^ $(LOADLIBES) $(LDLIBS) -o $@", ".c",
   "$(LINK.c) $^ $(LOADLIBES) $(LDLIBS) -o $@", ".cc",
   "$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@", ".C",
   "$(LINK.C) $^ $(LOADLIBES) $(LDLIBS) -o $@", ".cpp",
   "$(LINK.cpp) $^ $(LOADLIBES) $(LDLIBS) -o $@", ".f",
   "$(LINK.f) $^ $(LOADLIBES) $(LDLIBS) -o $@", ".p",
   "$(LINK.p) $^ $(LOADLIBES) $(LDLIBS) -o $@", ".F",
   "$(LINK.F) $^ $(LOADLIBES) $(LDLIBS) -o $@", ".r",
   "$(LINK.r) $^ $(LOADLIBES) $(LDLIBS) -o $@", ".mod",
   "$(COMPILE.mod) -o $@ -e $@ $^", ".def.sym", "$(COMPILE.def) -o $@ $<",
   ".sh", "cat $< >$@ \n chmod a+x $@", ".s.o", "$(COMPILE.s) -o $@ $<", ".S.o",
   "$(COMPILE.S) -o $@ $<", ".c.o", "$(COMPILE.c) $(OUTPUT_OPTION) $<", ".cc.o",
   "$(COMPILE.cc) $(OUTPUT_OPTION) $<", ".C.o",
   "$(COMPILE.C) $(OUTPUT_OPTION) $<", ".cpp.o",
   "$(COMPILE.cpp) $(OUTPUT_OPTION) $<", ".f.o",
   "$(COMPILE.f) $(OUTPUT_OPTION) $<", ".p.o",
   "$(COMPILE.p) $(OUTPUT_OPTION) $<", ".F.o",
   "$(COMPILE.F) $(OUTPUT_OPTION) $<", ".r.o",
   "$(COMPILE.r) $(OUTPUT_OPTION) $<", ".mod.o", "$(COMPILE.mod) -o $@ $<",
   ".c.ln", "$(LINT.c) -C$* $<", ".y.ln",
   "$(YACC.y) $< \n $(LINT.c) -C$* y.tab.c \n $(RM) y.tab.c", ".l.ln",
   "@$(RM) $*.c\n $(LEX.l) $< > $*.c\n$(LINT.c) -i $*.c -o $@\n $(RM) $*.c",
   ".y.c", "$(YACC.y) $< \n mv -f y.tab.c $@", ".l.c",
   "@$(RM) $@ \n $(LEX.l) $< > $@", ".F.f",
   "$(PREPROCESS.F) $(OUTPUT_OPTION) $<", ".r.f",
   "$(PREPROCESS.r) $(OUTPUT_OPTION) $<", ".l.r",
   "$(LEX.l) $< > $@ \n mv -f lex.yy.r $@", ".S.s", "$(PREPROCESS.S) $< > $@",
   ".texinfo.info", "$(MAKEINFO) $(MAKEINFO_FLAGS) $< -o $@", ".texi.info",
   "$(MAKEINFO) $(MAKEINFO_FLAGS) $< -o $@", ".txinfo.info",
   "$(MAKEINFO) $(MAKEINFO_FLAGS) $< -o $@", ".tex.dvi", "$(TEX) $<",
   ".texinfo.dvi", "$(TEXI2DVI) $(TEXI2DVI_FLAGS) $<", ".texi.dvi",
   "$(TEXI2DVI) $(TEXI2DVI_FLAGS) $<", ".txinfo.dvi",
   "$(TEXI2DVI) $(TEXI2DVI_FLAGS) $<", ".w.c", "$(CTANGLE) $< - $@", ".web.p",
   "$(TANGLE) $<", ".w.tex", "$(CWEAVE) $< - $@", ".web.tex", "$(WEAVE) $<",
   (char *)0, (char *)0};
# 300
static char *default_variables[118]   = 
# 300
  {"AR", "ar", "ARFLAGS", "rv", "AS", "as", "CC", "cc", "CXX", "g++",
   "CHECKOUT,v", "+$(if $(wildcard $@),,$(CO) $(COFLAGS) $< $@)", "CO", "co",
   "COFLAGS", "", "CPP", "$(CC) -E", "FC", "f77", "F77", "$(FC)", "F77FLAGS",
   "$(FFLAGS)", "GET", "get", "LD", "ld", "LEX", "lex", "LINT", "lint", "M2C",
   "m2c", "PC", "pc", "YACC", "yacc", "MAKEINFO", "makeinfo", "TEX", "tex",
   "TEXI2DVI", "texi2dvi", "WEAVE", "weave", "CWEAVE", "cweave", "TANGLE",
   "tangle", "CTANGLE", "ctangle", "RM", "rm -f", "LINK.o",
   "$(CC) $(LDFLAGS) $(TARGET_ARCH)", "COMPILE.c",
   "$(CC) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c", "LINK.c",
   "$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_ARCH)", "COMPILE.cc",
   "$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c", "COMPILE.C",
   "$(COMPILE.cc)", "COMPILE.cpp", "$(COMPILE.cc)", "LINK.cc",
   "$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_ARCH)", "LINK.C",
   "$(LINK.cc)", "LINK.cpp", "$(LINK.cc)", "YACC.y", "$(YACC) $(YFLAGS)",
   "LEX.l", "$(LEX) $(LFLAGS) -t", "COMPILE.f",
   "$(FC) $(FFLAGS) $(TARGET_ARCH) -c", "LINK.f",
   "$(FC) $(FFLAGS) $(LDFLAGS) $(TARGET_ARCH)", "COMPILE.F",
   "$(FC) $(FFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c", "LINK.F",
   "$(FC) $(FFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_ARCH)", "COMPILE.r",
   "$(FC) $(FFLAGS) $(RFLAGS) $(TARGET_ARCH) -c", "LINK.r",
   "$(FC) $(FFLAGS) $(RFLAGS) $(LDFLAGS) $(TARGET_ARCH)", "COMPILE.def",
   "$(M2C) $(M2FLAGS) $(DEFFLAGS) $(TARGET_ARCH)", "COMPILE.mod",
   "$(M2C) $(M2FLAGS) $(MODFLAGS) $(TARGET_ARCH)", "COMPILE.p",
   "$(PC) $(PFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c", "LINK.p",
   "$(PC) $(PFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_ARCH)", "LINK.s",
   "$(CC) $(ASFLAGS) $(LDFLAGS) $(TARGET_MACH)", "COMPILE.s",
   "$(AS) $(ASFLAGS) $(TARGET_MACH)", "LINK.S",
   "$(CC) $(ASFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_MACH)", "COMPILE.S",
   "$(CC) $(ASFLAGS) $(CPPFLAGS) $(TARGET_MACH) -c", "PREPROCESS.S",
   "$(CC) -E $(CPPFLAGS)", "PREPROCESS.F",
   "$(FC) $(FFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -F", "PREPROCESS.r",
   "$(FC) $(FFLAGS) $(RFLAGS) $(TARGET_ARCH) -F", "LINT.c",
   "$(LINT) $(LINTFLAGS) $(CPPFLAGS) $(TARGET_ARCH)", "OUTPUT_OPTION", "-o $@",
   ".LIBPATTERNS", "lib%.so lib%.a", (char *)0, (char *)0};
# 513
void set_default_suffixes(void) 
{ char *p ;
  struct nameseq *tmp ;

  {
  {
# 516
  suffix_file = enter_file(".SUFFIXES");
  }
# 518
  if (no_builtin_rules_flag) {
    {
# 519
    define_variable_in_set((char const   *)"SUFFIXES", 8U, "", 0, 0,
                           current_variable_set_list->set,
                           (struct floc  const  *)((struct floc *)0));
    }
  } else {
    {
# 522
    p = default_suffixes;
# 523
    tmp = parse_file_seq(& p, (int )'\0', sizeof(struct dep ), 1);
# 523
    suffix_file->deps = (struct dep *)multi_glob(tmp, sizeof(struct dep ));
# 526
    define_variable_in_set((char const   *)"SUFFIXES", 8U, default_suffixes, 0,
                           0, current_variable_set_list->set,
                           (struct floc  const  *)((struct floc *)0));
    }
  }
# 528
  return;
}
}
# 535
void install_default_suffix_rules(void) 
{ register char **s ;
  register struct file *f ;
  struct file *tmp ;

  {
# 540
  if (no_builtin_rules_flag) {
# 541
    return;
  }
  {
# 543
  s = default_suffix_rules;
  }
# 543
  while ((unsigned int )(*s) != (unsigned int )((char *)0)) {
    {
# 545
    tmp = enter_file((*(s + 0)));
# 545
    f = tmp;
    }
# 547
    if ((unsigned int )f->cmds == (unsigned int )((struct commands *)0)) {
      {
# 549
      f->cmds = (struct commands *)xmalloc(sizeof(struct commands ));
# 550
      (f->cmds)->fileinfo.filenm = (char *)0;
# 551
      (f->cmds)->commands = (*(s + 1));
# 552
      (f->cmds)->command_lines = (char **)0;
      }
    }
    {
# 543
    s += 2;
    }
  }
# 555
  return;
}
}
# 560
void install_default_implicit_rules(void) 
{ register struct pspec *p ;

  {
# 565
  if (no_builtin_rules_flag) {
# 566
    return;
  }
  {
# 568
  p = default_pattern_rules;
  }
# 568
  while ((unsigned int )p->target != (unsigned int )((char *)0)) {
    {
# 569
    install_pattern_rule(p, 0);
# 568
    p ++;
    }
  }
  {
# 571
  p = default_terminal_rules;
  }
# 571
  while ((unsigned int )p->target != (unsigned int )((char *)0)) {
    {
# 572
    install_pattern_rule(p, 1);
# 571
    p ++;
    }
  }
# 573
  return;
}
}
# 575
void define_default_variables(void) 
{ register char **s ;
  unsigned int tmp ;

  {
# 580
  if (no_builtin_variables_flag) {
# 581
    return;
  }
  {
# 583
  s = default_variables;
  }
# 583
  while ((unsigned int )(*s) != (unsigned int )((char *)0)) {
    {
# 584
    tmp = strlen((char const   *)(*(s + 0)));
# 584
    define_variable_in_set((char const   *)(*(s + 0)), tmp, (*(s + 1)), 0, 1,
                           current_variable_set_list->set,
                           (struct floc  const  *)((struct floc *)0));
# 583
    s += 2;
    }
  }
# 585
  return;
}
}
# 132 "/usr/include/dirent.h"
extern DIR *opendir(char const   *__name ) ;
# 136
extern int closedir(DIR *__dirp ) ;
# 149
extern struct dirent *readdir(DIR *__dirp )  __asm__("readdir64")  ;
# 250 "dir.c"
static unsigned long directory_contents_hash_1(void const   *key_0 ) 
{ struct directory_contents  const  *key ;
  unsigned long hash ;

  {
  {
# 254
  key = (struct directory_contents  const  *)key_0;
# 267
  hash = (unsigned long )(((unsigned int )key->dev << 4) ^
                          (unsigned int )key->ino);
  }
# 270
  return (hash);
}
}
# 273
static unsigned long directory_contents_hash_2(void const   *key_0 ) 
{ struct directory_contents  const  *key ;
  unsigned long hash ;

  {
  {
# 277
  key = (struct directory_contents  const  *)key_0;
# 290
  hash = (unsigned long )(((unsigned int )key->dev << 4) ^
                          (unsigned int )(~ key->ino));
  }
# 294
  return (hash);
}
}
# 297
static int directory_contents_hash_cmp(void const   *xv , void const   *yv ) 
{ struct directory_contents  const  *x ;
  struct directory_contents  const  *y ;
  int result___0 ;

  {
  {
# 302
  x = (struct directory_contents  const  *)xv;
# 303
  y = (struct directory_contents  const  *)yv;
# 325
  result___0 = (int )(x->ino - y->ino);
  }
# 326
  if (result___0) {
# 327
    return (result___0);
  }
# 331
  return ((int )(x->dev - y->dev));
}
}
# 335
static struct hash_table directory_contents  ;
# 347
static unsigned long directory_hash_1(void const   *key ) 
{ unsigned long _result_ ;
  unsigned char const   *_key_ ;

  {
# 351
  while (1) {
    {
# 351
    _result_ = 0UL;
    }
# 351
    while (1) {
      {
# 351
      _key_ = (unsigned char const   *)((struct directory  const  *)key)->name -
              1;
      }
# 351
      while (1) {
        {
# 351
        _key_ ++;
        }
# 351
        if (! (*_key_)) {
# 351
          break;
        }
        {
# 351
        _result_ += (unsigned long )((int const   )(*_key_) <<
                                     ((int const   )(*(_key_ + 1)) & 15));
        }
      }
# 351
      break;
    }
# 351
    return (_result_);
# 351
    break;
  }
# 352
  return (0UL);
}
}
# 354
static unsigned long directory_hash_2(void const   *key ) 
{ unsigned long _result_ ;
  unsigned char const   *_key_ ;

  {
# 358
  while (1) {
    {
# 358
    _result_ = 0UL;
    }
# 358
    while (1) {
      {
# 358
      _key_ = (unsigned char const   *)((struct directory  const  *)key)->name -
              1;
      }
# 358
      while (1) {
        {
# 358
        _key_ ++;
        }
# 358
        if (! (*_key_)) {
# 358
          break;
        }
        {
# 358
        _result_ += (unsigned long )((int const   )(*_key_) <<
                                     ((int const   )(*(_key_ + 1)) & 7));
        }
      }
# 358
      break;
    }
# 358
    return (_result_);
# 358
    break;
  }
# 359
  return (0UL);
}
}
# 361
static int directory_hash_cmp(void const   *x , void const   *y ) 
{ int tmp ;

  {
# 366
  while (1) {
    {
# 366
    tmp = strcmp((char const   *)((struct directory  const  *)x)->name,
                 (char const   *)((struct directory  const  *)y)->name);
    }
# 366
    return (tmp);
# 366
    break;
  }
# 368
  return (0);
}
}
# 371
static struct hash_table directories  ;
# 377
static unsigned int open_directories   = 0U;
# 389
static unsigned long dirfile_hash_1(void const   *key ) 
{ unsigned long _result_ ;
  unsigned char const   *_key_ ;

  {
# 393
  while (1) {
    {
# 393
    _result_ = 0UL;
    }
# 393
    while (1) {
      {
# 393
      _key_ = (unsigned char const   *)((struct dirfile  const  *)key)->name - 1;
      }
# 393
      while (1) {
        {
# 393
        _key_ ++;
        }
# 393
        if (! (*_key_)) {
# 393
          break;
        }
        {
# 393
        _result_ += (unsigned long )((int const   )(*_key_) <<
                                     ((int const   )(*(_key_ + 1)) & 15));
        }
      }
# 393
      break;
    }
# 393
    return (_result_);
# 393
    break;
  }
# 394
  return (0UL);
}
}
# 396
static unsigned long dirfile_hash_2(void const   *key ) 
{ unsigned long _result_ ;
  unsigned char const   *_key_ ;

  {
# 400
  while (1) {
    {
# 400
    _result_ = 0UL;
    }
# 400
    while (1) {
      {
# 400
      _key_ = (unsigned char const   *)((struct dirfile  const  *)key)->name - 1;
      }
# 400
      while (1) {
        {
# 400
        _key_ ++;
        }
# 400
        if (! (*_key_)) {
# 400
          break;
        }
        {
# 400
        _result_ += (unsigned long )((int const   )(*_key_) <<
                                     ((int const   )(*(_key_ + 1)) & 7));
        }
      }
# 400
      break;
    }
# 400
    return (_result_);
# 400
    break;
  }
# 401
  return (0UL);
}
}
# 403
static int dirfile_hash_cmp(void const   *xv , void const   *yv ) 
{ struct dirfile  const  *x ;
  struct dirfile  const  *y ;
  int result___0 ;
  int tmp ;

  {
  {
# 408
  x = (struct dirfile  const  *)xv;
# 409
  y = (struct dirfile  const  *)yv;
# 410
  result___0 = (int )x->length - (int )y->length;
  }
# 411
  if (result___0) {
# 412
    return (result___0);
  }
# 413
  while (1) {
    {
# 413
    tmp = strcmp((char const   *)x->name, (char const   *)y->name);
    }
# 413
    return (tmp);
# 413
    break;
  }
# 414
  return (0);
}
}
# 420
static int dir_contents_file_exists_p(struct directory_contents *dir ,
                                      char *filename ) ;
# 421
static struct directory *find_directory(char *name ) ;
# 425
static struct directory *find_directory(char *name ) 
{ register char *p ;
  register struct directory *dir ;
  register struct directory **dir_slot ;
  struct directory dir_key ;
  int r ;
  struct stat st ;
  size_t tmp___0 ;
  struct directory_contents *dc ;
  struct directory_contents **dc_slot ;
  struct directory_contents dc_key ;

  {
  {
# 449
  dir_key.name = name;
# 450
  dir_slot = (struct directory **)hash_find_slot(& directories,
                                                 (void const   *)(& dir_key));
# 451
  dir = (*dir_slot);
  }
# 453
  if ((unsigned int )dir == (unsigned int )((struct directory *)0)) {
    goto _L___0;
  } else {
# 453
    if ((unsigned int )((void *)dir) == (unsigned int )hash_deleted_item) {
      _L___0: 
      {
# 459
      tmp___0 = strlen((char const   *)name);
# 459
      p = name + tmp___0;
# 460
      dir = (struct directory *)xmalloc(sizeof(struct directory ));
# 461
      dir->name = savestring((char const   *)name, (unsigned int )(p - name));
# 462
      hash_insert_at(& directories, (void *)dir, (void const   *)dir_slot);
# 476
      r = stat__extinline((char const   *)name, & st);
      }
# 486
      if (r < 0) {
        {
# 490
        dir->contents = (struct directory_contents *)0;
        }
      } else {
        {
# 500
        dc_key.dev = st.st_dev;
# 510
        dc_key.ino = st.st_ino;
# 513
        dc_slot = (struct directory_contents **)hash_find_slot(& directory_contents,
                                                               (void const   *)(& dc_key));
# 514
        dc = (*dc_slot);
        }
# 516
        if ((unsigned int )dc == (unsigned int )((struct directory_contents *)0)) {
          goto _L;
        } else {
# 516
          if ((unsigned int )((void *)dc) == (unsigned int )hash_deleted_item) {
            _L: 
            {
# 520
            dc = (struct directory_contents *)xmalloc(sizeof(struct directory_contents ));
# 524
            dc->dev = st.st_dev;
# 553
            dc->ino = st.st_ino;
# 556
            hash_insert_at(& directory_contents, (void *)dc,
                           (void const   *)dc_slot);
# 557
            dc->dirstream = opendir((char const   *)name);
            }
# 558
            if ((unsigned int )dc->dirstream == (unsigned int )((DIR *)0)) {
              {
# 561
              dc->dirfiles.ht_vec = (void **)0;
              }
            } else {
              {
# 564
              hash_init(& dc->dirfiles, 107UL, & dirfile_hash_1,
                        & dirfile_hash_2, & dirfile_hash_cmp);
# 567
              open_directories ++;
              }
# 568
              if (open_directories == 10U) {
                {
# 571
                dir_contents_file_exists_p(dc, (char *)0);
                }
              }
            }
          }
        }
        {
# 576
        dir->contents = dc;
        }
      }
    }
  }
# 580
  return (dir);
}
}
# 586
static int dir_contents_file_exists_p(struct directory_contents *dir ,
                                      char *filename ) 
{ unsigned int hash ;
  struct dirfile *df ;
  struct dirent *d ;
  struct dirfile dirfile_key ;
  unsigned int len ;
  struct dirfile dirfile_key___0 ;
  struct dirfile **dirfile_slot ;
  int tmp___2 ;

  {
# 599
  if ((unsigned int )dir == (unsigned int )((struct directory_contents *)0)) {
# 602
    return (0);
  } else {
# 599
    if ((unsigned int )dir->dirfiles.ht_vec == (unsigned int )((void **)0)) {
# 602
      return (0);
    }
  }
  {
# 616
  hash = 0U;
  }
# 617
  if ((unsigned int )filename != (unsigned int )((char *)0)) {
# 621
    if ((int )(*filename) == 0) {
# 624
      return (1);
    }
    {
# 626
    dirfile_key.name = filename;
# 627
    dirfile_key.length = (short )strlen((char const   *)filename);
# 628
    df = (struct dirfile *)hash_find_item(& dir->dirfiles,
                                          (void const   *)(& dirfile_key));
    }
# 629
    if (df) {
# 631
      return (! df->impossible != 0);
    }
  }
# 638
  if ((unsigned int )dir->dirstream == (unsigned int )((DIR *)0)) {
# 665
    return (0);
  }
# 668
  while (1) {
    {
# 668
    d = readdir(dir->dirstream);
    }
# 668
    if (! ((unsigned int )d != (unsigned int )((struct dirent *)0))) {
# 668
      break;
    }
# 683
    if (! (d->d_ino != 0ULL)) {
# 684
      continue;
    }
    {
# 686
    len = strlen((char const   *)(d->d_name));
# 687
    dirfile_key___0.name = d->d_name;
# 688
    dirfile_key___0.length = (short )len;
# 689
    dirfile_slot = (struct dirfile **)hash_find_slot(& dir->dirfiles,
                                                     (void const   *)(& dirfile_key___0));
# 698
    df = (struct dirfile *)xmalloc(sizeof(struct dirfile ));
# 699
    df->name = savestring((char const   *)(d->d_name), len);
# 700
    df->length = (short )len;
# 701
    df->impossible = (short )0;
# 702
    hash_insert_at(& dir->dirfiles, (void *)df, (void const   *)dirfile_slot);
    }
# 705
    if ((unsigned int )filename != (unsigned int )((char *)0)) {
# 705
      if ((unsigned int )(d->d_name) == (unsigned int )filename) {
# 707
        return (1);
      } else {
# 705
        if ((int )d->d_name[0] == (int )(*filename)) {
# 705
          if ((int )d->d_name[0] == 0) {
# 707
            return (1);
          } else {
            {
# 705
            tmp___2 = strcmp((char const   *)(d->d_name + 1),
                             (char const   *)(filename + 1));
            }
# 705
            if (! tmp___2) {
# 707
              return (1);
            }
          }
        }
      }
    }
  }
# 713
  if ((unsigned int )d == (unsigned int )((struct dirent *)0)) {
    {
# 715
    open_directories --;
# 716
    closedir(dir->dirstream);
# 717
    dir->dirstream = (DIR *)0;
    }
  }
# 719
  return (0);
}
}
# 726
int dir_file_exists_p(char *dirname , char *filename ) 
{ struct directory *tmp ;
  int tmp___0 ;

  {
  {
# 731
  tmp = find_directory(dirname);
# 731
  tmp___0 = dir_contents_file_exists_p(tmp->contents, filename);
  }
# 731
  return (tmp___0);
}
}
# 737
int file_exists_p(char *name ) 
{ char *dirend ;
  char *dirname ;
  char *slash ;
  time_t tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___3 ;

  {
  {
# 746
  tmp___0 = ar_name(name);
  }
# 746
  if (tmp___0) {
    {
# 747
    tmp = ar_member_date(name);
    }
# 747
    return (tmp != -1L);
  }
  {
# 758
  dirend = strrchr((char const   *)name, (int )'/');
  }
# 770
  if ((unsigned int )dirend == (unsigned int )((char *)0)) {
    {
# 772
    tmp___1 = dir_file_exists_p(".", name);
    }
# 772
    return (tmp___1);
  }
  {
# 778
  slash = dirend;
  }
# 779
  if ((unsigned int )dirend == (unsigned int )name) {
    {
# 780
    dirname = "/";
    }
  } else {
    {
# 789
    dirname = (char *)__builtin_alloca((dirend - name) + 1);
# 790
    memmove((void *)dirname, (void const   *)name,
            (unsigned int )(dirend - name));
# 791
    (*(dirname + (dirend - name))) = '\0';
    }
  }
  {
# 793
  tmp___3 = dir_file_exists_p(dirname, slash + 1);
  }
# 793
  return (tmp___3);
}
}
# 800
void file_impossible(char *filename ) 
{ char *dirend ;
  register char *p ;
  register struct directory *dir ;
  register struct dirfile *new ;
  char *dirname ;
  char *slash ;

  {
  {
# 805
  p = filename;
# 817
  dirend = strrchr((char const   *)p, (int )'/');
  }
# 829
  if ((unsigned int )dirend == (unsigned int )((char *)0)) {
    {
# 833
    dir = find_directory(".");
    }
  } else {
    {
# 839
    slash = dirend;
    }
# 840
    if ((unsigned int )dirend == (unsigned int )p) {
      {
# 841
      dirname = "/";
      }
    } else {
      {
# 850
      dirname = (char *)__builtin_alloca((dirend - p) + 1);
# 851
      memmove((void *)dirname, (void const   *)p, (unsigned int )(dirend - p));
# 852
      (*(dirname + (dirend - p))) = '\0';
      }
    }
    {
# 854
    dir = find_directory(dirname);
# 855
    p = slash + 1;
# 855
    filename = p;
    }
  }
# 858
  if ((unsigned int )dir->contents ==
      (unsigned int )((struct directory_contents *)0)) {
    {
# 862
    dir->contents = (struct directory_contents *)xmalloc(sizeof(struct directory_contents ));
# 864
    memset((void *)((char *)dir->contents), 0,
           sizeof(struct directory_contents ));
    }
  }
# 867
  if ((unsigned int )(dir->contents)->dirfiles.ht_vec ==
      (unsigned int )((void **)0)) {
    {
# 869
    hash_init(& (dir->contents)->dirfiles, 107UL, & dirfile_hash_1,
              & dirfile_hash_2, & dirfile_hash_cmp);
    }
  }
  {
# 875
  new = (struct dirfile *)xmalloc(sizeof(struct dirfile ));
# 876
  new->name = xstrdup((char const   *)filename);
# 877
  new->length = (short )strlen((char const   *)filename);
# 878
  new->impossible = (short )1;
# 879
  hash_insert(& (dir->contents)->dirfiles, (void *)new);
  }
# 880
  return;
}
}
# 884
int file_impossible_p(char *filename ) 
{ char *dirend ;
  register char *p ;
  register struct directory_contents *dir ;
  register struct dirfile *dirfile ;
  struct dirfile dirfile_key ;
  struct directory *tmp ;
  char *dirname ;
  char *slash ;
  struct directory *tmp___1 ;

  {
  {
# 889
  p = filename;
# 899
  dirend = strrchr((char const   *)filename, (int )'/');
  }
# 911
  if ((unsigned int )dirend == (unsigned int )((char *)0)) {
    {
# 915
    tmp = find_directory(".");
# 915
    dir = tmp->contents;
    }
  } else {
    {
# 921
    slash = dirend;
    }
# 922
    if ((unsigned int )dirend == (unsigned int )filename) {
      {
# 923
      dirname = "/";
      }
    } else {
      {
# 932
      dirname = (char *)__builtin_alloca((dirend - filename) + 1);
# 933
      memmove((void *)dirname, (void const   *)p, (unsigned int )(dirend - p));
# 934
      (*(dirname + (dirend - p))) = '\0';
      }
    }
    {
# 936
    tmp___1 = find_directory(dirname);
# 936
    dir = tmp___1->contents;
# 937
    filename = slash + 1;
# 937
    p = filename;
    }
  }
# 940
  if ((unsigned int )dir == (unsigned int )((struct directory_contents *)0)) {
# 942
    return (0);
  } else {
# 940
    if ((unsigned int )dir->dirfiles.ht_vec == (unsigned int )((void **)0)) {
# 942
      return (0);
    }
  }
  {
# 954
  dirfile_key.name = filename;
# 955
  dirfile_key.length = (short )strlen((char const   *)filename);
# 956
  dirfile = (struct dirfile *)hash_find_item(& dir->dirfiles,
                                             (void const   *)(& dirfile_key));
  }
# 957
  if (dirfile) {
# 958
    return ((int )dirfile->impossible);
  }
# 960
  return (0);
}
}
# 966
char *dir_name(char *dir ) 
{ struct directory *tmp ;

  {
  {
# 970
  tmp = find_directory(dir);
  }
# 970
  return (tmp->name);
}
}
# 975
void print_dir_data_base(void) 
{ register unsigned int files___0 ;
  register unsigned int impossible ;
  register struct directory **dir_slot ;
  register struct directory **dir_end ;
  char const   *tmp ;
  register struct directory *dir ;
  char const   * __restrict  tmp___0 ;
  char const   * __restrict  tmp___1 ;
  register unsigned int f ;
  register unsigned int im ;
  register struct dirfile **files_slot ;
  register struct dirfile **files_end ;
  register struct dirfile *df ;
  char const   * __restrict  tmp___2 ;
  FILE * __restrict  tmp___3 ;
  char const   * __restrict  tmp___4 ;
  FILE * __restrict  tmp___5 ;
  char const   * __restrict  tmp___6 ;
  FILE * __restrict  tmp___7 ;
  char const   * __restrict  tmp___8 ;
  FILE * __restrict  tmp___9 ;
  char const   * __restrict  tmp___10 ;
  char const   *tmp___11 ;
  FILE * __restrict  tmp___12 ;
  FILE * __restrict  tmp___13 ;
  char const   * __restrict  tmp___14 ;
  FILE * __restrict  tmp___15 ;
  char const   * __restrict  tmp___16 ;
  FILE * __restrict  tmp___17 ;
  char const   * __restrict  tmp___18 ;
  char const   * __restrict  tmp___19 ;

  {
  {
# 983
  tmp = (char const   *)dcgettext((char const   *)((void *)0),
                                  (char const   *)"\n# Directories\n", 5);
# 983
  puts(tmp);
# 985
  impossible = 0U;
# 985
  files___0 = impossible;
# 987
  dir_slot = (struct directory **)directories.ht_vec;
# 988
  dir_end = dir_slot + directories.ht_size;
  }
# 989
  while ((unsigned int )dir_slot < (unsigned int )dir_end) {
    {
# 991
    dir = (*dir_slot);
    }
# 992
    if (! ((unsigned int )dir == (unsigned int )((struct directory *)0))) {
# 992
      if (! ((unsigned int )((void *)dir) == (unsigned int )hash_deleted_item)) {
# 994
        if ((unsigned int )dir->contents ==
            (unsigned int )((struct directory_contents *)0)) {
          {
# 995
          tmp___0 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                               (char const   *)"# %s: could not be stat\'d.\n",
                                                               5);
# 995
          printf(tmp___0, dir->name);
          }
        } else {
# 996
          if ((unsigned int )(dir->contents)->dirfiles.ht_vec ==
              (unsigned int )((void **)0)) {
            {
# 1008
            tmp___1 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                 (char const   *)"# %s (device %ld, inode %ld): could not be opened.\n",
                                                                 5);
# 1008
            printf(tmp___1, dir->name, (long )(dir->contents)->dev,
                   (long )(dir->contents)->ino);
            }
          } else {
            {
# 1016
            f = 0U;
# 1017
            im = 0U;
# 1021
            files_slot = (struct dirfile **)(dir->contents)->dirfiles.ht_vec;
# 1022
            files_end = files_slot + (dir->contents)->dirfiles.ht_size;
            }
# 1023
            while ((unsigned int )files_slot < (unsigned int )files_end) {
              {
# 1025
              df = (*files_slot);
              }
# 1026
              if (! ((unsigned int )df == (unsigned int )((struct dirfile *)0))) {
# 1026
                if (! ((unsigned int )((void *)df) ==
                       (unsigned int )hash_deleted_item)) {
# 1028
                  if (df->impossible) {
                    {
# 1029
                    im ++;
                    }
                  } else {
                    {
# 1031
                    f ++;
                    }
                  }
                }
              }
              {
# 1023
              files_slot ++;
              }
            }
            {
# 1044
            tmp___2 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                 (char const   *)"# %s (device %ld, inode %ld): ",
                                                                 5);
# 1044
            printf(tmp___2, dir->name, (long )(dir->contents)->dev,
                   (long )(dir->contents)->ino);
            }
# 1049
            if (f == 0U) {
              {
# 1050
              tmp___3 = (FILE */* __restrict  */)get_stdout();
              {
# 105 "spec.work"
              tmp___3->__BLAST_FLAG = 1;
              {

              }
              }
# 1050 "dir.c"
              tmp___4 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                   (char const   *)"No",
                                                                   5);
              {
# 40 "spec.work"
              if (! (tmp___3->__BLAST_FLAG == 1)) {
# 42
                __error__();
              }
              {

              }
              }
# 1050 "dir.c"
              fputs(tmp___4, tmp___3);
              }
            } else {
              {
# 1052
              printf((char const   */* __restrict  */)((char const   *)"%u"), f);
              }
            }
            {
# 1053
            tmp___5 = (FILE */* __restrict  */)get_stdout();
            {
# 105 "spec.work"
            tmp___5->__BLAST_FLAG = 1;
            {

            }
            }
# 1053 "dir.c"
            tmp___6 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                 (char const   *)" files, ",
                                                                 5);
            {
# 40 "spec.work"
            if (! (tmp___5->__BLAST_FLAG == 1)) {
# 42
              __error__();
            }
            {

            }
            }
# 1053 "dir.c"
            fputs(tmp___6, tmp___5);
            }
# 1054
            if (im == 0U) {
              {
# 1055
              tmp___7 = (FILE */* __restrict  */)get_stdout();
              {
# 105 "spec.work"
              tmp___7->__BLAST_FLAG = 1;
              {

              }
              }
# 1055 "dir.c"
              tmp___8 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                   (char const   *)"no",
                                                                   5);
              {
# 40 "spec.work"
              if (! (tmp___7->__BLAST_FLAG == 1)) {
# 42
                __error__();
              }
              {

              }
              }
# 1055 "dir.c"
              fputs(tmp___8, tmp___7);
              }
            } else {
              {
# 1057
              printf((char const   */* __restrict  */)((char const   *)"%u"), im);
              }
            }
            {
# 1058
            tmp___9 = (FILE */* __restrict  */)get_stdout();
            {
# 105 "spec.work"
            tmp___9->__BLAST_FLAG = 1;
            {

            }
            }
# 1058 "dir.c"
            tmp___10 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                  (char const   *)" impossibilities",
                                                                  5);
            {
# 40 "spec.work"
            if (! (tmp___9->__BLAST_FLAG == 1)) {
# 42
              __error__();
            }
            {

            }
            }
# 1058 "dir.c"
            fputs(tmp___10, tmp___9);
            }
# 1059
            if ((unsigned int )(dir->contents)->dirstream ==
                (unsigned int )((DIR *)0)) {
              {
# 1060
              puts((char const   *)".");
              }
            } else {
              {
# 1062
              tmp___11 = (char const   *)dcgettext((char const   *)((void *)0),
                                                   (char const   *)" so far.", 5);
# 1062
              puts(tmp___11);
              }
            }
            {
# 1063
            files___0 += f;
# 1064
            impossible += im;
            }
          }
        }
      }
    }
    {
# 989
    dir_slot ++;
    }
  }
  {
# 1069
  tmp___12 = (FILE */* __restrict  */)get_stdout();
  {
# 105 "spec.work"
  tmp___12->__BLAST_FLAG = 1;
  {

  }
  }

  {
# 40
  if (! (tmp___12->__BLAST_FLAG == 1)) {
# 42
    __error__();
  }
  {

  }
  }
# 1069 "dir.c"
  fputs((char const   */* __restrict  */)((char const   *)"\n# "), tmp___12);
  }
# 1070
  if (files___0 == 0U) {
    {
# 1071
    tmp___13 = (FILE */* __restrict  */)get_stdout();
    {
# 105 "spec.work"
    tmp___13->__BLAST_FLAG = 1;
    {

    }
    }
# 1071 "dir.c"
    tmp___14 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                          (char const   *)"No",
                                                          5);
    {
# 40 "spec.work"
    if (! (tmp___13->__BLAST_FLAG == 1)) {
# 42
      __error__();
    }
    {

    }
    }
# 1071 "dir.c"
    fputs(tmp___14, tmp___13);
    }
  } else {
    {
# 1073
    printf((char const   */* __restrict  */)((char const   *)"%u"), files___0);
    }
  }
  {
# 1074
  tmp___15 = (FILE */* __restrict  */)get_stdout();
  {
# 105 "spec.work"
  tmp___15->__BLAST_FLAG = 1;
  {

  }
  }
# 1074 "dir.c"
  tmp___16 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                        (char const   *)" files, ",
                                                        5);
  {
# 40 "spec.work"
  if (! (tmp___15->__BLAST_FLAG == 1)) {
# 42
    __error__();
  }
  {

  }
  }
# 1074 "dir.c"
  fputs(tmp___16, tmp___15);
  }
# 1075
  if (impossible == 0U) {
    {
# 1076
    tmp___17 = (FILE */* __restrict  */)get_stdout();
    {
# 105 "spec.work"
    tmp___17->__BLAST_FLAG = 1;
    {

    }
    }
# 1076 "dir.c"
    tmp___18 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                          (char const   *)"no",
                                                          5);
    {
# 40 "spec.work"
    if (! (tmp___17->__BLAST_FLAG == 1)) {
# 42
      __error__();
    }
    {

    }
    }
# 1076 "dir.c"
    fputs(tmp___18, tmp___17);
    }
  } else {
    {
# 1078
    printf((char const   */* __restrict  */)((char const   *)"%u"), impossible);
    }
  }
  {
# 1079
  tmp___19 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                        (char const   *)" impossibilities in %lu directories.\n",
                                                        5);
# 1079
  printf(tmp___19, directories.ht_fill);
  }
# 1080
  return;
}
}
# 561 "/users/rupak/ccured/include/ccured_GNUCC.patch"
extern int glob(char const   * __restrict  __pattern , int __flags ,
                int (*__errfunc)(char const   * , int  ) ,
                glob_t * __restrict  __pglob )  __asm__("glob64")  ;
# 565
extern void globfree(glob_t *__pglob )  __asm__("globfree64")  ;
# 114 "/users/rupak/ccured/include/glob_wrappers.h"
void __deepcopy_glob_s_from_compat(struct glob_s *fat ,
                                   struct glob_s  __attribute__((__compat__)) *compat ) 
{ 

  {
  {
# 115
  fat->gl_pathv = __deepcopy_stringarray_from_compat((char * __attribute__((__safe__)) */* __attribute__((__safe__)) */)((char * __attribute__((__safe__)) *)compat->gl_pathv));
  }
# 116
  return;
}
}
# 1095 "dir.c"
static void *open_dirstream(char const   *directory ) ;
# 1096
static struct dirent *read_dirstream(void *stream ) ;
# 1098
static void *open_dirstream(char const   *directory ) 
{ struct dirstream *new ;
  struct directory *dir ;
  struct directory *tmp ;

  {
  {
# 1103
  tmp = find_directory((char *)directory);
# 1103
  dir = tmp;
  }
# 1105
  if ((unsigned int )dir->contents ==
      (unsigned int )((struct directory_contents *)0)) {
# 1108
    return ((void *)0);
  } else {
# 1105
    if ((unsigned int )(dir->contents)->dirfiles.ht_vec ==
        (unsigned int )((void **)0)) {
# 1108
      return ((void *)0);
    }
  }
  {
# 1113
  dir_contents_file_exists_p(dir->contents, (char *)0);
# 1115
  new = (struct dirstream *)xmalloc(sizeof(struct dirstream ));
# 1116
  new->contents = dir->contents;
# 1117
  new->dirfile_slot = (struct dirfile **)(new->contents)->dirfiles.ht_vec;
  }
# 1119
  return ((void *)new);
}
}
# 1129
static char *buf  ;
# 1130
static unsigned int bufsz  ;
# 1122
static struct dirent *read_dirstream(void *stream ) 
{ struct dirstream *ds ;
  struct directory_contents *dc ;
  struct dirfile **dirfile_end ;
  register struct dirfile *df ;
  struct dirfile **tmp ;
  struct dirent *d ;
  unsigned int len ;

  {
  {
# 1126
  ds = (struct dirstream *)stream;
# 1127
  dc = ds->contents;
# 1128
  dirfile_end = (struct dirfile **)dc->dirfiles.ht_vec + dc->dirfiles.ht_size;
  }
# 1132
  while ((unsigned int )ds->dirfile_slot < (unsigned int )dirfile_end) {
    {
# 1134
    tmp = ds->dirfile_slot;
# 1134
    ds->dirfile_slot ++;
# 1134
    df = (*tmp);
    }
# 1135
    if (! ((unsigned int )df == (unsigned int )((struct dirfile *)0))) {
# 1135
      if (! ((unsigned int )((void *)df) == (unsigned int )hash_deleted_item)) {
# 1135
        if (! df->impossible) {
          {
# 1140
          len = (unsigned int )((int )df->length + 1);
          }
# 1141
          if ((sizeof((*d)) - sizeof(d->d_name)) + len > bufsz) {
# 1143
            if ((unsigned int )buf != (unsigned int )((char *)0)) {
              {
# 1144
              free((void *)buf);
              }
            }
            {
# 1145
            bufsz *= 2U;
            }
# 1146
            if ((sizeof((*d)) - sizeof(d->d_name)) + len > bufsz) {
              {
# 1147
              bufsz = (sizeof((*d)) - sizeof(d->d_name)) + len;
              }
            }
            {
# 1148
            buf = xmalloc(bufsz);
            }
          }
          {
# 1150
          d = (struct dirent *)buf;
# 1151
          d->d_ino = 1ULL;
# 1156
          d->d_type = (unsigned char )0;
# 1158
          memcpy((void */* __restrict  */)((void *)(d->d_name)),
                 (void const   */* __restrict  */)((void const   *)df->name),
                 len);
          }
# 1159
          return (d);
        }
      }
    }
  }
# 1163
  return ((struct dirent *)0);
}
}
# 1166
static void ansi_free(void *p ) 
{ 

  {
# 1170
  if (p) {
    {
# 1171
    free(p);
    }
  }
# 1172
  return;
}
}
# 1192
void dir_setup_glob(glob_t *gl ) 
{ 

  {
  {
# 1197
  gl->gl_opendir = & open_dirstream;
# 1198
  gl->gl_readdir = & read_dirstream;
# 1199
  gl->gl_closedir = & ansi_free;
# 1200
  gl->gl_stat = (int (*)(char const   * __restrict   ,
                         struct stat * __restrict   ))(& stat__extinline);
  }
# 1203
  return;
}
}
# 1205
void hash_init_directories(void) 
{ 

  {
  {
# 1208
  hash_init(& directories, 199UL, & directory_hash_1, & directory_hash_2,
            & directory_hash_cmp);
# 1210
  hash_init(& directory_contents, 199UL, & directory_contents_hash_1,
            & directory_contents_hash_2, & directory_contents_hash_cmp);
  }
# 1212
  return;
}
}
# 68 "/usr/include/assert.h"
extern void __assert_fail(char const   *__assertion , char const   *__file ,
                          unsigned int __line , char const   *__function )  __attribute__((__noreturn__)) ;
# 44 "expand.c"
static unsigned int variable_buffer_length  ;
# 54
char *variable_buffer_output(char *ptr , char *string___0 ,
                             unsigned int length___0 ) 
{ register unsigned int newlen ;
  unsigned int offset ;
  char *tmp ;

  {
  {
# 59
  newlen = length___0 + (unsigned int )(ptr - variable_buffer);
  }
# 61
  if (newlen + 5U > variable_buffer_length) {
    {
# 63
    offset = (unsigned int )(ptr - variable_buffer);
    }
# 64
    if (newlen + 100U > 2U * variable_buffer_length) {
      {
# 64
      variable_buffer_length = newlen + 100U;
      }
    } else {
      {
# 64
      variable_buffer_length = 2U * variable_buffer_length;
      }
    }
    {
# 67
    tmp = xrealloc(variable_buffer, variable_buffer_length);
# 67
    variable_buffer = tmp;
# 69
    ptr = variable_buffer + offset;
    }
  }
  {
# 72
  memmove((void *)ptr, (void const   *)string___0, length___0);
  }
# 73
  return (ptr + length___0);
}
}
# 78
static char *initialize_variable_output(void) 
{ char *tmp ;

  {
# 83
  if ((unsigned int )variable_buffer == (unsigned int )((char *)0)) {
    {
# 85
    variable_buffer_length = 200U;
# 86
    tmp = xmalloc(variable_buffer_length);
# 86
    variable_buffer = tmp;
# 87
    (*(variable_buffer + 0)) = '\0';
    }
  }
# 90
  return (variable_buffer);
}
}
# 95
static char *allocated_variable_append(struct variable  const  *v ) ;
# 97
char *recursively_expand_for_file(struct variable *v , struct file *file ) 
{ char *value ;
  struct variable_set_list *save ;
  char const   *tmp ;

  {
  {
# 103
  save = (struct variable_set_list *)0;
  }
# 105
  if (v->expanding) {
# 107
    if (! v->exp_count) {
      {
# 109
      tmp = (char const   *)dcgettext((char const   *)((void *)0),
                                      (char const   *)"Recursive variable `%s\' references itself (eventually)",
                                      5);
# 109
      fatal(reading_file, tmp, v->name);
      }
    }
    {
# 112
    v->exp_count = v->exp_count - 1U;
    }
  }
# 115
  if (file) {
    {
# 117
    save = current_variable_set_list;
# 118
    current_variable_set_list = file->variables;
    }
  }
  {
# 121
  v->expanding = 1U;
  }
# 122
  if (v->append) {
    {
# 123
    value = allocated_variable_append((struct variable  const  *)v);
    }
  } else {
    {
# 125
    value = allocated_variable_expand_for_file(v->value, (struct file *)0);
    }
  }
  {
# 126
  v->expanding = 0U;
  }
# 128
  if (file) {
    {
# 129
    current_variable_set_list = save;
    }
  }
# 131
  return (value);
}
}
# 137
__inline static char *reference_variable(char *o , char *name ,
                                         unsigned int length___0 ) 
{ register struct variable *v ;
  char *value ;
  char const   *tmp ;
  unsigned int tmp___1 ;

  {
  {
# 148
  v = lookup_variable((char const   *)name, length___0);
  }
# 150
  if ((unsigned int )v == (unsigned int )((struct variable *)0)) {
# 151
    while (1) {
# 151
      if (warn_undefined_variables_flag) {
        {
# 151
        tmp = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"warning: undefined variable `%.*s\'",
                                        5);
# 151
        error(reading_file, tmp, (int )length___0, name);
        }
      }
# 151
      break;
    }
  }
# 153
  if ((unsigned int )v == (unsigned int )((struct variable *)0)) {
# 154
    return (o);
  } else {
# 153
    if ((int )(*(v->value)) == 0) {
# 154
      return (o);
    }
  }
# 156
  if (v->recursive) {
    {
# 156
    value = recursively_expand_for_file(v, (struct file *)((void *)0));
    }
  } else {
    {
# 156
    value = v->value;
    }
  }
  {
# 158
  tmp___1 = strlen((char const   *)value);
# 158
  o = variable_buffer_output(o, value, tmp___1);
  }
# 160
  if (v->recursive) {
    {
# 161
    free((void *)value);
    }
  }
# 163
  return (o);
}
}
# 175
char *variable_expand_string(char *line , char *string___0 , long length___0 ) 
{ register struct variable *v ;
  register char *p ;
  register char *o ;
  register char *p1 ;
  char save_char ;
  unsigned int line_offset ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  char openparen ;
  char closeparen ;
  int tmp___2 ;
  register char *beg ;
  int free_beg ;
  char *op ;
  char *begp ;
  char *end ;
  char *colon ;
  int tmp___3 ;
  char const   *tmp___4 ;
  int count ;
  char *subst_beg ;
  char *subst_end ;
  char *replace_beg ;
  char *replace_end ;
  char const   *tmp___5 ;
  char *value ;
  char *tmp___7 ;
  char *pattern ;
  char *percent ;
  char *replace ;
  unsigned int tmp___10 ;
  int tmp___11 ;
  char name[5] ;
  unsigned int tmp___12 ;

  {
  {
# 183
  save_char = '\0';
  }
# 186
  if (! line) {
    {
# 187
    line = initialize_variable_output();
    }
  }
  {
# 189
  p = string___0;
# 190
  o = line;
# 191
  line_offset = (unsigned int )(line - variable_buffer);
  }
# 193
  if (length___0 >= 0L) {
    {
# 195
    save_char = (*(string___0 + length___0));
# 196
    (*(string___0 + length___0)) = '\0';
    }
  }
# 199
  while (1) {
    {
# 205
    p1 = strchr((char const   *)p, (int )'$');
    }
# 207
    if ((unsigned int )p1 != (unsigned int )((char *)0)) {
      {
# 207
      tmp___0 = (unsigned int )(p1 - p);
      }
    } else {
      {
# 207
      tmp___1 = strlen((char const   *)p);
# 207
      tmp___0 = tmp___1 + 1U;
      }
    }
    {
# 207
    o = variable_buffer_output(o, p, tmp___0);
    }
# 209
    if ((unsigned int )p1 == (unsigned int )((char *)0)) {
# 210
      break;
    }
    {
# 211
    p = p1 + 1;
    }
# 215
    switch ((int )(*p)) {
    case 36: 
    {
# 219
    o = variable_buffer_output(o, p, 1U);
    }
# 220
    break;
    case 40: 
    {

    }
    case 123: 
    {
# 226
    openparen = (*p);
    }
# 227
    if ((int )openparen == 40) {
      {
# 227
      tmp___2 = (int )')';
      }
    } else {
      {
# 227
      tmp___2 = (int )'}';
      }
    }
    {
# 227
    closeparen = (char )tmp___2;
# 228
    beg = p + 1;
# 229
    free_beg = 0;
# 233
    op = o;
# 234
    begp = p;
# 235
    tmp___3 = handle_function(& op, & begp);
    }
# 235
    if (tmp___3) {
      {
# 237
      o = op;
# 238
      p = begp;
      }
# 239
      break;
    }
    {
# 245
    end = strchr((char const   *)beg, (int )closeparen);
    }
# 246
    if ((unsigned int )end == (unsigned int )((char *)0)) {
      {
# 248
      tmp___4 = (char const   *)dcgettext((char const   *)((void *)0),
                                          (char const   *)"unterminated variable reference",
                                          5);
# 248
      fatal(reading_file, tmp___4);
      }
    }
    {
# 249
    p1 = lindex((char const   *)beg, (char const   *)end, (int )'$');
    }
# 250
    if ((unsigned int )p1 != (unsigned int )((char *)0)) {
      {
# 254
      count = 0;
# 255
      p = beg;
      }
# 255
      while ((int )(*p) != 0) {
# 257
        if ((int )(*p) == (int )openparen) {
          {
# 258
          count ++;
          }
        } else {
# 259
          if ((int )(*p) == (int )closeparen) {
            {
# 259
            count --;
            }
# 259
            if (count < 0) {
# 260
              break;
            }
          }
        }
        {
# 255
        p ++;
        }
      }
# 265
      if (count < 0) {
        {
# 267
        beg = expand_argument(beg, p);
# 268
        free_beg = 1;
# 269
        end = strchr((char const   *)beg, (int )'\0');
        }
      }
    } else {
      {
# 276
      p = end;
      }
    }
    {
# 282
    colon = lindex((char const   *)beg, (char const   *)end, (int )':');
    }
# 283
    if (colon) {
      {
# 288
      subst_beg = colon + 1;
# 289
      subst_end = strchr((char const   *)subst_beg, (int )'=');
      }
# 290
      if ((unsigned int )subst_end == (unsigned int )((char *)0)) {
        {
# 294
        colon = (char *)0;
        }
      } else {
        {
# 297
        replace_beg = subst_end + 1;
# 298
        replace_end = end;
# 302
        v = lookup_variable((char const   *)beg, (unsigned int )(colon - beg));
        }
# 303
        if ((unsigned int )v == (unsigned int )((struct variable *)0)) {
# 304
          while (1) {
# 304
            if (warn_undefined_variables_flag) {
              {
# 304
              tmp___5 = (char const   *)dcgettext((char const   *)((void *)0),
                                                  (char const   *)"warning: undefined variable `%.*s\'",
                                                  5);
# 304
              error(reading_file, tmp___5, colon - beg, beg);
              }
            }
# 304
            break;
          }
        }
# 306
        if ((unsigned int )v != (unsigned int )((struct variable *)0)) {
# 306
          if ((int )(*(v->value)) != 0) {
# 308
            if (v->recursive) {
              {
# 308
              tmp___7 = recursively_expand_for_file(v,
                                                    (struct file *)((void *)0));
              }
            } else {
              {
# 308
              tmp___7 = v->value;
              }
            }
            {
# 308
            value = tmp___7;
            }
# 311
            if (free_beg) {
              {
# 313
              (*subst_end) = '\0';
# 314
              pattern = subst_beg;
              }
            } else {
              {
# 318
              pattern = (char *)__builtin_alloca((subst_end - subst_beg) + 1);
# 320
              memmove((void *)pattern, (void const   *)subst_beg,
                      (unsigned int )(subst_end - subst_beg));
# 321
              (*(pattern + (subst_end - subst_beg))) = '\0';
              }
            }
            {
# 323
            percent = find_percent(pattern);
            }
# 324
            if ((unsigned int )percent != (unsigned int )((char *)0)) {
# 327
              if (free_beg) {
                {
# 329
                (*replace_end) = '\0';
# 330
                replace = replace_beg;
                }
              } else {
                {
# 334
                replace = (char *)__builtin_alloca((replace_end - replace_beg) +
                                                   1);
# 337
                memmove((void *)replace, (void const   *)replace_beg,
                        (unsigned int )(replace_end - replace_beg));
# 339
                (*(replace + (replace_end - replace_beg))) = '\0';
                }
              }
              {
# 342
              o = patsubst_expand(o, value, pattern, replace, percent, (char *)0);
              }
            } else {
              {
# 346
              tmp___10 = strlen((char const   *)pattern);
# 346
              o = subst_expand(o, value, pattern, replace_beg, tmp___10,
                               (unsigned int )(end - replace_beg), 0, 1);
              }
            }
# 351
            if (v->recursive) {
              {
# 352
              free((void *)value);
              }
            }
          }
        }
      }
    }
# 357
    if ((unsigned int )colon == (unsigned int )((char *)0)) {
      {
# 360
      o = reference_variable(o, beg, (unsigned int )(end - beg));
      }
    }
# 362
    if (free_beg) {
      {
# 363
      free((void *)beg);
      }
    }
# 365
    break;
    case 0: 
    {

    }
# 368
    break;
    default: 
    {
# 371
    tmp___11 = _get__ctype_b((int )((unsigned char )(*(p + -1))));
    }
# 371
    if (tmp___11 & 1) {
# 372
      break;
    }
    {
# 380
    name[0] = '$';
# 381
    name[1] = '(';
# 382
    name[2] = (*p);
# 383
    name[3] = ')';
# 384
    name[4] = '\0';
# 385
    p1 = allocated_variable_expand_for_file(name, (struct file *)0);
# 386
    tmp___12 = strlen((char const   *)p1);
# 386
    o = variable_buffer_output(o, p1, tmp___12);
# 387
    free((void *)p1);
    }
# 390
    break;
    }
# 393
    if ((int )(*p) == 0) {
# 394
      break;
    } else {
      {
# 396
      p ++;
      }
    }
  }
# 399
  if (save_char) {
    {
# 400
    (*(string___0 + length___0)) = save_char;
    }
  }
  {
# 402
  variable_buffer_output(o, "", 1U);
  }
# 403
  return (variable_buffer + line_offset);
}
}
# 411
char *variable_expand(char *line ) 
{ char *tmp ;

  {
  {
# 415
  tmp = variable_expand_string((char *)((void *)0), line, -1L);
  }
# 415
  return (tmp);
}
}
# 424
char *expand_argument(char *str , char *end ) 
{ char *tmp ;
  char *tmp___0 ;
  char *tmp___2 ;

  {
# 430
  if ((unsigned int )str == (unsigned int )end) {
    {
# 431
    tmp___0 = xstrdup((char const   *)"");
    }
# 431
    return (tmp___0);
  }
# 433
  if (end) {
# 433
    if ((int )(*end) == 0) {
      {
# 434
      tmp = str;
      }
    } else {
      {
# 437
      tmp = (char *)__builtin_alloca((end - str) + 1);
# 438
      memmove((void *)tmp, (void const   *)str, (unsigned int )(end - str));
# 439
      (*(tmp + (end - str))) = '\0';
      }
    }
  } else {
    {
# 434
    tmp = str;
    }
  }
  {
# 442
  tmp___2 = allocated_variable_expand_for_file(tmp, (struct file *)0);
  }
# 442
  return (tmp___2);
}
}
# 448
static char *variable_expand_for_file(char *line , struct file *file ) 
{ char *result___0 ;
  struct variable_set_list *save ;
  char *tmp ;

  {
# 456
  if ((unsigned int )file == (unsigned int )((struct file *)0)) {
    {
# 457
    tmp = variable_expand(line);
    }
# 457
    return (tmp);
  }
  {
# 459
  save = current_variable_set_list;
# 460
  current_variable_set_list = file->variables;
  }
# 461
  if (file->cmds) {
# 461
    if ((file->cmds)->fileinfo.filenm) {
      {
# 462
      reading_file = (struct floc  const  *)(& (file->cmds)->fileinfo);
      }
    } else {
      {
# 464
      reading_file = (struct floc  const  *)0;
      }
    }
  } else {
    {
# 464
    reading_file = (struct floc  const  *)0;
    }
  }
  {
# 465
  result___0 = variable_expand(line);
# 466
  current_variable_set_list = save;
# 467
  reading_file = (struct floc  const  *)0;
  }
# 469
  return (result___0);
}
}
# 476
static char *variable_append(char const   *name , unsigned int length___0 ,
                             struct variable_set_list  const  *set ) 
{ struct variable  const  *v ;
  char *buf___1 ;
  char *tmp ;
  char *tmp___0 ;
  unsigned int tmp___1 ;
  char *tmp___2 ;

  {
  {
# 483
  buf___1 = (char *)0;
  }
# 486
  if (! set) {
    {
# 487
    tmp = initialize_variable_output();
    }
# 487
    return (tmp);
  }
  {
# 490
  v = (struct variable  const  *)lookup_variable_in_set(name, length___0,
                                                        (struct variable_set  const  *)set->set);
  }
# 493
  if (! v) {
    {
# 494
    tmp___0 = variable_append(name, length___0,
                              (struct variable_set_list  const  *)set->next);
    }
# 494
    return (tmp___0);
  }
# 498
  if (v->append) {
    {
# 499
    buf___1 = variable_append(name, length___0,
                              (struct variable_set_list  const  *)set->next);
    }
  } else {
    {
# 501
    buf___1 = initialize_variable_output();
    }
  }
# 505
  if ((unsigned int )buf___1 > (unsigned int )variable_buffer) {
    {
# 506
    buf___1 = variable_buffer_output(buf___1, " ", 1U);
    }
  }
  {
# 508
  tmp___1 = strlen((char const   *)v->value);
# 508
  tmp___2 = variable_buffer_output(buf___1, v->value, tmp___1);
  }
# 508
  return (tmp___2);
}
}
# 512
static char *allocated_variable_append(struct variable  const  *v ) 
{ char *val ;
  char *retval ;
  char *obuf ;
  unsigned int olen ;
  unsigned int tmp ;

  {
  {
# 520
  obuf = variable_buffer;
# 521
  olen = variable_buffer_length;
# 523
  variable_buffer = (char *)0;
# 525
  tmp = strlen((char const   *)v->name);
# 525
  val = variable_append((char const   *)v->name, tmp,
                        (struct variable_set_list  const  *)current_variable_set_list);
# 526
  variable_buffer_output(val, "", 1U);
# 527
  val = variable_buffer;
# 529
  variable_buffer = obuf;
# 530
  variable_buffer_length = olen;
# 534
  retval = allocated_variable_expand_for_file(val, (struct file *)0);
# 536
  free((void *)val);
  }
# 537
  return (retval);
}
}
# 543
char *allocated_variable_expand_for_file(char *line , struct file *file ) 
{ char *value ;
  char *obuf ;
  unsigned int olen ;

  {
  {
# 550
  obuf = variable_buffer;
# 551
  olen = variable_buffer_length;
# 553
  variable_buffer = (char *)0;
# 555
  value = variable_expand_for_file(line, file);
# 562
  variable_buffer = obuf;
# 563
  variable_buffer_length = olen;
  }
# 565
  return (value);
}
}
# 30 "debug.h"
int db_level ;
# 36 "file.c"
static unsigned long file_hash_1(void const   *key ) 
{ unsigned long _result_ ;
  unsigned char const   *_key_ ;

  {
# 40
  while (1) {
    {
# 40
    _result_ = 0UL;
    }
# 40
    while (1) {
      {
# 40
      _key_ = (unsigned char const   *)((struct file  const  *)key)->hname - 1;
      }
# 40
      while (1) {
        {
# 40
        _key_ ++;
        }
# 40
        if (! (*_key_)) {
# 40
          break;
        }
        {
# 40
        _result_ += (unsigned long )((int const   )(*_key_) <<
                                     ((int const   )(*(_key_ + 1)) & 15));
        }
      }
# 40
      break;
    }
# 40
    return (_result_);
# 40
    break;
  }
# 41
  return (0UL);
}
}
# 43
static unsigned long file_hash_2(void const   *key ) 
{ unsigned long _result_ ;
  unsigned char const   *_key_ ;

  {
# 47
  while (1) {
    {
# 47
    _result_ = 0UL;
    }
# 47
    while (1) {
      {
# 47
      _key_ = (unsigned char const   *)((struct file  const  *)key)->hname - 1;
      }
# 47
      while (1) {
        {
# 47
        _key_ ++;
        }
# 47
        if (! (*_key_)) {
# 47
          break;
        }
        {
# 47
        _result_ += (unsigned long )((int const   )(*_key_) <<
                                     ((int const   )(*(_key_ + 1)) & 7));
        }
      }
# 47
      break;
    }
# 47
    return (_result_);
# 47
    break;
  }
# 48
  return (0UL);
}
}
# 50
static int file_hash_cmp(void const   *x , void const   *y ) 
{ int tmp ;

  {
# 55
  while (1) {
    {
# 55
    tmp = strcmp((char const   *)((struct file  const  *)x)->hname,
                 (char const   *)((struct file  const  *)y)->hname);
    }
# 55
    return (tmp);
# 55
    break;
  }
# 57
  return (0);
}
}
# 62
static struct hash_table files  ;
# 65
static int all_secondary   = 0;
# 72
struct file *lookup_file(char *name ) 
{ register struct file *f ;
  struct file file_key ;

  {
# 82
  if (! ((int )(*name) != 0)) {
    {
# 82
    __assert_fail((char const   *)"*name != \'\\0\'", (char const   *)"file.c",
                  82U, (char const   *)"lookup_file");
    }
  }
# 102
  while (1) {
# 102
    if ((int )(*(name + 0)) == 46) {
# 102
      if ((int )(*(name + 1)) == 47) {
# 102
        if (! ((int )(*(name + 2)) != 0)) {
# 102
          break;
        }
      } else {
# 102
        break;
      }
    } else {
# 102
      break;
    }
    {
# 104
    name += 2;
    }
# 105
    while ((int )(*name) == 47) {
      {
# 107
      name ++;
      }
    }
  }
# 110
  if ((int )(*name) == 0) {
    {
# 118
    name = "./";
    }
  }
  {
# 122
  file_key.hname = name;
# 123
  f = (struct file *)hash_find_item(& files, (void const   *)(& file_key));
  }
# 127
  return (f);
}
}
# 130
struct file *enter_file(char *name ) 
{ register struct file *f ;
  register struct file *new ;
  register struct file **file_slot ;
  struct file file_key ;

  {
# 142
  if (! ((int )(*name) != 0)) {
    {
# 142
    __assert_fail((char const   *)"*name != \'\\0\'", (char const   *)"file.c",
                  142U, (char const   *)"enter_file");
    }
  }
  {
# 163
  file_key.hname = name;
# 164
  file_slot = (struct file **)hash_find_slot(& files,
                                             (void const   *)(& file_key));
# 165
  f = (*file_slot);
  }
# 166
  if (! ((unsigned int )f == (unsigned int )((struct file *)0))) {
# 166
    if (! ((unsigned int )((void *)f) == (unsigned int )hash_deleted_item)) {
# 166
      if (! f->double_colon) {
# 171
        return (f);
      }
    }
  }
  {
# 174
  new = (struct file *)xmalloc(sizeof(struct file ));
# 175
  memset((void *)((char *)new), 0, sizeof(struct file ));
# 176
  new->hname = name;
# 176
  new->name = new->hname;
# 177
  new->update_status = (short )-1;
  }
# 179
  if ((unsigned int )f == (unsigned int )((struct file *)0)) {
    {
# 180
    hash_insert_at(& files, (void *)new, (void const   *)file_slot);
    }
  } else {
# 179
    if ((unsigned int )((void *)f) == (unsigned int )hash_deleted_item) {
      {
# 180
      hash_insert_at(& files, (void *)new, (void const   *)file_slot);
      }
    } else {
      {
# 184
      new->double_colon = f;
      }
# 185
      while ((unsigned int )f->prev != (unsigned int )((struct file *)0)) {
        {
# 186
        f = f->prev;
        }
      }
      {
# 187
      f->prev = new;
      }
    }
  }
# 190
  return (new);
}
}
# 197
void rename_file(struct file *from_file , char *to_hname ) 
{ 

  {
  {
# 202
  rehash_file(from_file, to_hname);
  }
# 203
  while (from_file) {
    {
# 205
    from_file->name = from_file->hname;
# 206
    from_file = from_file->prev;
    }
  }
# 208
  return;
}
}
# 214
void rehash_file(struct file *from_file , char *to_hname ) 
{ struct file file_key ;
  struct file **file_slot ;
  struct file *to_file ;
  struct file *deleted_file ;
  struct file *f ;
  int tmp ;
  int tmp___0 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  char const   *tmp___5 ;
  register struct dep *deps ;
  char const   *tmp___6 ;
  char const   *tmp___7 ;

  {
  {
# 225
  file_key.hname = to_hname;
# 226
  tmp = file_hash_cmp((void const   *)from_file, (void const   *)(& file_key));
  }
# 226
  if (0 == tmp) {
# 227
    return;
  }
  {
# 229
  file_key.hname = from_file->hname;
  }
# 230
  while ((unsigned int )from_file->renamed != (unsigned int )((struct file *)0)) {
    {
# 231
    from_file = from_file->renamed;
    }
  }
  {
# 232
  tmp___0 = file_hash_cmp((void const   *)from_file,
                          (void const   *)(& file_key));
  }
# 232
  if (tmp___0) {
    {
# 234
    abort();
    }
  }
  {
# 236
  deleted_file = (struct file *)hash_delete(& files, (void const   *)from_file);
  }
# 237
  if ((unsigned int )deleted_file != (unsigned int )from_file) {
    {
# 239
    abort();
    }
  }
  {
# 241
  file_key.hname = to_hname;
# 242
  file_slot = (struct file **)hash_find_slot(& files,
                                             (void const   *)(& file_key));
# 243
  to_file = (*file_slot);
# 245
  from_file->hname = to_hname;
# 246
  f = from_file->double_colon;
  }
# 246
  while ((unsigned int )f != (unsigned int )((struct file *)0)) {
    {
# 247
    f->hname = to_hname;
# 246
    f = f->prev;
    }
  }
# 249
  if ((unsigned int )to_file == (unsigned int )((struct file *)0)) {
    {
# 250
    hash_insert_at(& files, (void *)from_file, (void const   *)file_slot);
    }
  } else {
# 249
    if ((unsigned int )((void *)to_file) == (unsigned int )hash_deleted_item) {
      {
# 250
      hash_insert_at(& files, (void *)from_file, (void const   *)file_slot);
      }
    } else {
# 256
      if ((unsigned int )from_file->cmds !=
          (unsigned int )((struct commands *)0)) {
# 258
        if ((unsigned int )to_file->cmds ==
            (unsigned int )((struct commands *)0)) {
          {
# 259
          to_file->cmds = from_file->cmds;
          }
        } else {
# 260
          if ((unsigned int )from_file->cmds != (unsigned int )to_file->cmds) {
# 265
            if ((unsigned int )(to_file->cmds)->fileinfo.filenm !=
                (unsigned int )((char *)0)) {
              {
# 266
              tmp___2 = (char const   *)dcgettext((char const   *)((void *)0),
                                                  (char const   *)"Commands were specified for file `%s\' at %s:%lu,",
                                                  5);
# 266
              error((struct floc  const  *)(& (from_file->cmds)->fileinfo),
                    tmp___2, from_file->name, (to_file->cmds)->fileinfo.filenm,
                    (to_file->cmds)->fileinfo.lineno);
              }
            } else {
              {
# 271
              tmp___3 = (char const   *)dcgettext((char const   *)((void *)0),
                                                  (char const   *)"Commands for file `%s\' were found by implicit rule search,",
                                                  5);
# 271
              error((struct floc  const  *)(& (from_file->cmds)->fileinfo),
                    tmp___3, from_file->name);
              }
            }
            {
# 274
            tmp___4 = (char const   *)dcgettext((char const   *)((void *)0),
                                                (char const   *)"but `%s\' is now considered the same file as `%s\'.",
                                                5);
# 274
            error((struct floc  const  *)(& (from_file->cmds)->fileinfo),
                  tmp___4, from_file->name, to_hname);
# 277
            tmp___5 = (char const   *)dcgettext((char const   *)((void *)0),
                                                (char const   *)"Commands for `%s\' will be ignored in favor of those for `%s\'.",
                                                5);
# 277
            error((struct floc  const  *)(& (from_file->cmds)->fileinfo),
                  tmp___5, to_hname, from_file->name);
            }
          }
        }
      }
# 285
      if ((unsigned int )to_file->deps == (unsigned int )((struct dep *)0)) {
        {
# 286
        to_file->deps = from_file->deps;
        }
      } else {
        {
# 289
        deps = to_file->deps;
        }
# 290
        while ((unsigned int )deps->next != (unsigned int )((struct dep *)0)) {
          {
# 291
          deps = deps->next;
          }
        }
        {
# 292
        deps->next = from_file->deps;
        }
      }
      {
# 295
      merge_variable_set_lists(& to_file->variables, from_file->variables);
      }
# 297
      if (to_file->double_colon) {
# 297
        if (from_file->is_target) {
# 297
          if (! from_file->double_colon) {
            {
# 298
            tmp___6 = (char const   *)dcgettext((char const   *)((void *)0),
                                                (char const   *)"can\'t rename single-colon `%s\' to double-colon `%s\'",
                                                5);
# 298
            fatal((struct floc  const  *)((struct floc *)0), tmp___6,
                  from_file->name, to_hname);
            }
          }
        }
      }
# 300
      if (! to_file->double_colon) {
# 300
        if (from_file->double_colon) {
# 302
          if (to_file->is_target) {
            {
# 303
            tmp___7 = (char const   *)dcgettext((char const   *)((void *)0),
                                                (char const   *)"can\'t rename double-colon `%s\' to single-colon `%s\'",
                                                5);
# 303
            fatal((struct floc  const  *)((struct floc *)0), tmp___7,
                  from_file->name, to_hname);
            }
          } else {
            {
# 306
            to_file->double_colon = from_file->double_colon;
            }
          }
        }
      }
# 309
      if (from_file->last_mtime > to_file->last_mtime) {
        {
# 311
        to_file->last_mtime = from_file->last_mtime;
        }
      }
      {
# 313
      to_file->mtime_before_update = from_file->mtime_before_update;
# 316
      to_file->precious = to_file->precious | from_file->precious;
# 317
      to_file->tried_implicit = to_file->tried_implicit |
                                from_file->tried_implicit;
# 318
      to_file->updating = to_file->updating | from_file->updating;
# 319
      to_file->updated = to_file->updated | from_file->updated;
# 320
      to_file->is_target = to_file->is_target | from_file->is_target;
# 321
      to_file->cmd_target = to_file->cmd_target | from_file->cmd_target;
# 322
      to_file->phony = to_file->phony | from_file->phony;
# 323
      to_file->ignore_vpath = to_file->ignore_vpath | from_file->ignore_vpath;
# 326
      from_file->renamed = to_file;
      }
    }
  }
# 328
  return;
}
}
# 335
void remove_intermediates(int sig ) 
{ register struct file **file_slot ;
  register struct file **file_end ;
  int doneany ;
  register struct file *f ;
  int status ;
  int *tmp ;
  char const   *tmp___0 ;
  char const   * __restrict  tmp___1 ;
  FILE *tmp___2 ;
  FILE * __restrict  tmp___3 ;
  FILE * __restrict  tmp___4 ;
  FILE *tmp___5 ;
  FILE *tmp___6 ;

  {
  {
# 341
  doneany = 0;
  }
# 344
  if (question_flag) {
# 345
    return;
  } else {
# 344
    if (touch_flag) {
# 345
      return;
    } else {
# 344
      if (all_secondary) {
# 345
        return;
      }
    }
  }
# 347
  if (sig) {
# 347
    if (just_print_flag) {
# 348
      return;
    }
  }
  {
# 350
  file_slot = (struct file **)files.ht_vec;
# 351
  file_end = file_slot + files.ht_size;
  }
# 352
  while ((unsigned int )file_slot < (unsigned int )file_end) {
# 353
    if (! ((unsigned int )(*file_slot) == (unsigned int )((struct file *)0))) {
# 353
      if (! ((unsigned int )((void *)(*file_slot)) ==
             (unsigned int )hash_deleted_item)) {
        {
# 355
        f = (*file_slot);
        }
# 356
        if (f->intermediate) {
# 356
          if (f->dontcare) {
            goto _L;
          } else {
# 356
            if (! f->precious) {
              _L: 
# 356
              if (! f->secondary) {
# 356
                if (! f->cmd_target) {
# 360
                  if ((int )f->update_status == -1) {
                    goto __Cont;
                  }
# 364
                  if (just_print_flag) {
                    {
# 365
                    status = 0;
                    }
                  } else {
                    {
# 368
                    status = unlink((char const   *)f->name);
                    }
# 369
                    if (status < 0) {
                      {
# 369
                      tmp = __errno_location();
                      }
# 369
                      if ((*tmp) == 2) {
                        goto __Cont;
                      }
                    }
                  }
# 372
                  if (! f->dontcare) {
# 374
                    if (sig) {
                      {
# 375
                      tmp___0 = (char const   *)dcgettext((char const   *)((void *)0),
                                                          (char const   *)"*** Deleting intermediate file `%s\'",
                                                          5);
# 375
                      error((struct floc  const  *)((struct floc *)0), tmp___0,
                            f->name);
                      }
                    } else {
# 378
                      if (! doneany) {
# 379
                        while (1) {
# 379
                          if (1 & db_level) {
                            {
# 379
                            tmp___1 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                                 (char const   *)"Removing intermediate files...\n",
                                                                                 5);
# 379
                            printf(tmp___1);
# 379
                            tmp___2 = get_stdout();
                            {
# 105 "spec.work"
                            tmp___2->__BLAST_FLAG = 1;
                            {

                            }
                            }
# 379 "file.c"
                            fflush(tmp___2);
                            }
                          }
# 379
                          break;
                        }
                      }
# 380
                      if (! silent_flag) {
# 382
                        if (doneany) {
                          {
# 388
                          putchar__extinline((int )' ');
                          }
                        } else {
                          {
# 384
                          tmp___3 = (FILE */* __restrict  */)get_stdout();
                          {
# 105 "spec.work"
                          tmp___3->__BLAST_FLAG = 1;
                          {

                          }
                          }

                          {
# 40
                          if (! (tmp___3->__BLAST_FLAG == 1)) {
# 42
                            __error__();
                          }
                          {

                          }
                          }
# 384 "file.c"
                          fputs((char const   */* __restrict  */)((char const   *)"rm "),
                                tmp___3);
# 385
                          doneany = 1;
                          }
                        }
                        {
# 389
                        tmp___4 = (FILE */* __restrict  */)get_stdout();
                        {
# 105 "spec.work"
                        tmp___4->__BLAST_FLAG = 1;
                        {

                        }
                        }

                        {
# 40
                        if (! (tmp___4->__BLAST_FLAG == 1)) {
# 42
                          __error__();
                        }
                        {

                        }
                        }
# 389 "file.c"
                        fputs((char const   */* __restrict  */)((char const   *)f->name),
                              tmp___4);
# 390
                        tmp___5 = get_stdout();
                        {
# 105 "spec.work"
                        tmp___5->__BLAST_FLAG = 1;
                        {

                        }
                        }
# 390 "file.c"
                        fflush(tmp___5);
                        }
                      }
                    }
# 393
                    if (status < 0) {
                      {
# 394
                      perror_with_name((char const   *)"unlink: ",
                                       (char const   *)f->name);
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
    __Cont: 
    {
# 352
    file_slot ++;
    }
  }
# 399
  if (doneany) {
# 399
    if (! sig) {
      {
# 401
      putchar__extinline((int )'\n');
# 402
      tmp___6 = get_stdout();
      {
# 105 "spec.work"
      tmp___6->__BLAST_FLAG = 1;
      {

      }
      }
# 402 "file.c"
      fflush(tmp___6);
      }
    }
  }
# 404
  return;
}
}
# 412
void snap_deps(void) 
{ register struct file *f ;
  register struct file *f2 ;
  register struct dep *d ;
  register struct file **file_slot_0 ;
  register struct file **file_slot ;
  register struct file **file_end ;

  {
  {
# 426
  file_slot_0 = (struct file **)hash_dump(& files, (void **)0,
                                          (int (*)(void const   * ,
                                                   void const   * ))0);
# 427
  file_end = file_slot_0 + files.ht_fill;
# 428
  file_slot = file_slot_0;
  }
# 428
  while ((unsigned int )file_slot < (unsigned int )file_end) {
    {
# 429
    f2 = (*file_slot);
    }
# 429
    while ((unsigned int )f2 != (unsigned int )((struct file *)0)) {
      {
# 430
      d = f2->deps;
      }
# 430
      while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
# 431
        if ((unsigned int )d->name != (unsigned int )((char *)0)) {
          {
# 433
          d->file = lookup_file(d->name);
          }
# 434
          if ((unsigned int )d->file == (unsigned int )((struct file *)0)) {
            {
# 435
            d->file = enter_file(d->name);
            }
          } else {
            {
# 437
            free((void *)d->name);
            }
          }
          {
# 438
          d->name = (char *)0;
          }
        }
        {
# 430
        d = d->next;
        }
      }
      {
# 429
      f2 = f2->prev;
      }
    }
    {
# 428
    file_slot ++;
    }
  }
  {
# 440
  free((void *)file_slot_0);
# 442
  f = lookup_file(".PRECIOUS");
  }
# 442
  while ((unsigned int )f != (unsigned int )((struct file *)0)) {
    {
# 443
    d = f->deps;
    }
# 443
    while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
      {
# 444
      f2 = d->file;
      }
# 444
      while ((unsigned int )f2 != (unsigned int )((struct file *)0)) {
        {
# 445
        f2->precious = 1U;
# 444
        f2 = f2->prev;
        }
      }
      {
# 443
      d = d->next;
      }
    }
    {
# 442
    f = f->prev;
    }
  }
  {
# 447
  f = lookup_file(".LOW_RESOLUTION_TIME");
  }
# 447
  while ((unsigned int )f != (unsigned int )((struct file *)0)) {
    {
# 448
    d = f->deps;
    }
# 448
    while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
      {
# 449
      f2 = d->file;
      }
# 449
      while ((unsigned int )f2 != (unsigned int )((struct file *)0)) {
        {
# 450
        f2->low_resolution_time = 1U;
# 449
        f2 = f2->prev;
        }
      }
      {
# 448
      d = d->next;
      }
    }
    {
# 447
    f = f->prev;
    }
  }
  {
# 452
  f = lookup_file(".PHONY");
  }
# 452
  while ((unsigned int )f != (unsigned int )((struct file *)0)) {
    {
# 453
    d = f->deps;
    }
# 453
    while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
      {
# 454
      f2 = d->file;
      }
# 454
      while ((unsigned int )f2 != (unsigned int )((struct file *)0)) {
        {
# 457
        f2->phony = 1U;
# 458
        f2->last_mtime = 1ULL;
# 459
        f2->mtime_before_update = 1ULL;
# 454
        f2 = f2->prev;
        }
      }
      {
# 453
      d = d->next;
      }
    }
    {
# 452
    f = f->prev;
    }
  }
  {
# 462
  f = lookup_file(".INTERMEDIATE");
  }
# 462
  while ((unsigned int )f != (unsigned int )((struct file *)0)) {
    {
# 466
    d = f->deps;
    }
# 466
    while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
      {
# 467
      f2 = d->file;
      }
# 467
      while ((unsigned int )f2 != (unsigned int )((struct file *)0)) {
        {
# 468
        f2->intermediate = 1U;
# 467
        f2 = f2->prev;
        }
      }
      {
# 466
      d = d->next;
      }
    }
    {
# 462
    f = f->prev;
    }
  }
  {
# 474
  f = lookup_file(".SECONDARY");
  }
# 474
  while ((unsigned int )f != (unsigned int )((struct file *)0)) {
# 481
    if (f->deps) {
      {
# 482
      d = f->deps;
      }
# 482
      while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
        {
# 483
        f2 = d->file;
        }
# 483
        while ((unsigned int )f2 != (unsigned int )((struct file *)0)) {
          {
# 484
          f2->secondary = 1U;
# 484
          f2->intermediate = f2->secondary;
# 483
          f2 = f2->prev;
          }
        }
        {
# 482
        d = d->next;
        }
      }
    } else {
      {
# 487
      all_secondary = 1;
      }
    }
    {
# 474
    f = f->prev;
    }
  }
  {
# 490
  f = lookup_file(".EXPORT_ALL_VARIABLES");
  }
# 491
  if ((unsigned int )f != (unsigned int )((struct file *)0)) {
# 491
    if (f->is_target) {
      {
# 492
      export_all_variables = 1;
      }
    }
  }
  {
# 494
  f = lookup_file(".IGNORE");
  }
# 495
  if ((unsigned int )f != (unsigned int )((struct file *)0)) {
# 495
    if (f->is_target) {
# 497
      if ((unsigned int )f->deps == (unsigned int )((struct dep *)0)) {
        {
# 498
        ignore_errors_flag = 1;
        }
      } else {
        {
# 500
        d = f->deps;
        }
# 500
        while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
          {
# 501
          f2 = d->file;
          }
# 501
          while ((unsigned int )f2 != (unsigned int )((struct file *)0)) {
            {
# 502
            f2->command_flags = f2->command_flags | 4;
# 501
            f2 = f2->prev;
            }
          }
          {
# 500
          d = d->next;
          }
        }
      }
    }
  }
  {
# 505
  f = lookup_file(".SILENT");
  }
# 506
  if ((unsigned int )f != (unsigned int )((struct file *)0)) {
# 506
    if (f->is_target) {
# 508
      if ((unsigned int )f->deps == (unsigned int )((struct dep *)0)) {
        {
# 509
        silent_flag = 1;
        }
      } else {
        {
# 511
        d = f->deps;
        }
# 511
        while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
          {
# 512
          f2 = d->file;
          }
# 512
          while ((unsigned int )f2 != (unsigned int )((struct file *)0)) {
            {
# 513
            f2->command_flags = f2->command_flags | 2;
# 512
            f2 = f2->prev;
            }
          }
          {
# 511
          d = d->next;
          }
        }
      }
    }
  }
  {
# 516
  f = lookup_file(".POSIX");
  }
# 517
  if ((unsigned int )f != (unsigned int )((struct file *)0)) {
# 517
    if (f->is_target) {
      {
# 518
      posix_pedantic = 1;
      }
    }
  }
  {
# 520
  f = lookup_file(".NOTPARALLEL");
  }
# 521
  if ((unsigned int )f != (unsigned int )((struct file *)0)) {
# 521
    if (f->is_target) {
      {
# 522
      not_parallel = 1;
      }
    }
  }
# 523
  return;
}
}
# 527
void set_command_state(struct file *file , int state ) 
{ struct dep *d ;

  {
  {
# 534
  file->command_state = state;
# 536
  d = file->also_make;
  }
# 536
  while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
    {
# 537
    (d->file)->command_state = state;
# 536
    d = d->next;
    }
  }
# 538
  return;
}
}
# 542
uintmax_t file_timestamp_cons(char const   *fname , time_t s , int ns ) 
{ int offset ;
  uintmax_t product ;
  uintmax_t ts ;
  char buf___1[(int )((((((((sizeof(uintmax_t ) * 8U - 1U) - 24U) * 302U) /
                          1000U + 1U) + 1U) + 4U) + 25U) + 1U)] ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;

  {
  {
# 548
  offset = 3 + ns;
# 549
  product = (unsigned long long )s << 30;
# 550
  ts = product + (unsigned long long )offset;
  }
# 552
  if ((unsigned long long )s <= 17179869183ULL) {
# 552
    if (product <= ts) {
# 552
      if (! (ts <= 0xfffffffffb9aca02ULL)) {
        goto _L___0;
      }
    } else {
      goto _L___0;
    }
  } else {
    _L___0: 
# 556
    if (s <= 2L) {
      {
# 556
      ts = 3ULL;
      }
    } else {
      {
# 556
      ts = 0xfffffffffb9aca02ULL;
      }
    }
    {
# 557
    file_timestamp_sprintf(buf___1, ts);
    }
# 558
    if (fname) {
      {
# 558
      tmp___0 = fname;
      }
    } else {
      {
# 558
      tmp___0 = (char const   *)dcgettext((char const   *)((void *)0),
                                          (char const   *)"Current time", 5);
      }
    }
    {
# 558
    tmp___1 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"%s: Timestamp out of range; substituting %s",
                                        5);
# 558
    error((struct floc  const  *)((struct floc *)0), tmp___1, tmp___0, buf___1);
    }
  }
# 562
  return (ts);
}
}
# 567
uintmax_t file_timestamp_now(int *resolution ) 
{ int r ;
  time_t s ;
  int ns ;
  struct timespec timespec ;
  int tmp ;
  struct timeval timeval ;
  int tmp___0 ;
  uintmax_t tmp___1 ;

  {
  {
# 582
  tmp = clock_gettime(0, & timespec);
  }
# 582
  if (tmp == 0) {
    {
# 584
    r = 1;
# 585
    s = timespec.tv_sec;
# 586
    ns = (int )timespec.tv_nsec;
    }
    goto got_time;
  }
  {
# 594
  tmp___0 = gettimeofday((struct timeval */* __restrict  */)(& timeval),
                         (struct timezone */* __restrict  */)((struct timezone *)0));
  }
# 594
  if (tmp___0 == 0) {
    {
# 596
    r = 1000;
# 597
    s = timeval.tv_sec;
# 598
    ns = (int )(timeval.tv_usec * 1000L);
    }
    goto got_time;
  }
  {
# 605
  r = 1000000000;
# 606
  s = time((time_t *)0);
# 607
  ns = 0;
  }
  got_time: 
  {
# 610
  (*resolution) = r;
# 611
  tmp___1 = file_timestamp_cons((char const   *)0, s, ns);
  }
# 611
  return (tmp___1);
}
}
# 616
void file_timestamp_sprintf(char *p , uintmax_t ts ) 
{ time_t t ;
  struct tm *tm ;
  struct tm *tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;

  {
  {
# 621
  t = (long )((ts - 3ULL) >> 30);
# 622
  tmp = localtime((time_t const   *)(& t));
# 622
  tm = tmp;
  }
# 624
  if (tm) {
    {
# 625
    sprintf((char */* __restrict  */)p,
            (char const   */* __restrict  */)((char const   *)"%04d-%02d-%02d %02d:%02d:%02d"),
            tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour,
            tm->tm_min, tm->tm_sec);
    }
  } else {
# 628
    if (t < 0L) {
      {
# 629
      sprintf((char */* __restrict  */)p,
              (char const   */* __restrict  */)((char const   *)"%ld"), t);
      }
    } else {
      {
# 631
      sprintf((char */* __restrict  */)p,
              (char const   */* __restrict  */)((char const   *)"%lu"),
              (unsigned long )t);
      }
    }
  }
  {
# 632
  tmp___0 = strlen((char const   *)p);
# 632
  p += tmp___0;
# 639
  sprintf((char */* __restrict  */)p,
          (char const   */* __restrict  */)((char const   *)".%09d"),
          (int )((ts - 3ULL) & 1073741823ULL));
# 640
  tmp___1 = strlen((char const   *)p);
# 640
  p += tmp___1 - 1U;
  }
# 641
  while ((int )(*p) == 48) {
    {
# 642
    p --;
    }
  }
  {
# 643
  p += (int )(*p) != 46;
# 645
  (*p) = '\0';
  }
# 646
  return;
}
}
# 650
static void print_file(struct file *f ) 
{ struct dep *d ;
  struct dep *ood ;
  char const   *tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char const   *tmp___4 ;
  char const   *tmp___5 ;
  char const   *tmp___6 ;
  char const   *tmp___7 ;
  char *tmp___10 ;
  char const   * __restrict  tmp___11 ;
  char const   *tmp___12 ;
  FILE * __restrict  tmp___13 ;
  char const   * __restrict  tmp___14 ;
  char *tmp___15 ;
  char const   *tmp___16 ;
  char const   *tmp___17 ;
  char const   *tmp___18 ;
  char buf___1[(int )((((((((sizeof(uintmax_t ) * 8U - 1U) - 24U) * 302U) /
                          1000U + 1U) + 1U) + 4U) + 25U) + 1U)] ;
  char const   * __restrict  tmp___19 ;
  char *tmp___22 ;
  char const   *tmp___23 ;
  char const   *tmp___24 ;
  char const   *tmp___25 ;
  char const   *tmp___26 ;
  char const   *tmp___27 ;
  char const   *tmp___28 ;
  FILE *tmp___29 ;
  FILE *tmp___30 ;
  char const   *tmp___31 ;
  FILE *tmp___32 ;
  FILE *tmp___33 ;

  {
  {
# 655
  ood = (struct dep *)0;
# 657
  putchar__extinline((int )'\n');
  }
# 658
  if (! f->is_target) {
    {
# 659
    tmp = (char const   *)dcgettext((char const   *)((void *)0),
                                    (char const   *)"# Not a target:", 5);
# 659
    puts(tmp);
    }
  }
# 660
  if (f->double_colon) {
    {
# 660
    tmp___0 = (char const   *)":";
    }
  } else {
    {
# 660
    tmp___0 = (char const   *)"";
    }
  }
  {
# 660
  printf((char const   */* __restrict  */)((char const   *)"%s:%s"), f->name,
         tmp___0);
# 663
  d = f->deps;
  }
# 663
  while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
# 664
    if (d->ignore_mtime) {
# 666
      if (! ood) {
        {
# 667
        ood = d;
        }
      }
    } else {
# 665
      if ((unsigned int )d->name == (unsigned int )((char *)0)) {
        {
# 665
        tmp___1 = (d->file)->name;
        }
      } else {
        {
# 665
        tmp___1 = d->name;
        }
      }
      {
# 665
      printf((char const   */* __restrict  */)((char const   *)" %s"), tmp___1);
      }
    }
    {
# 663
    d = d->next;
    }
  }
# 670
  if (ood) {
# 672
    if ((unsigned int )ood->name == (unsigned int )((char *)0)) {
      {
# 672
      tmp___2 = (ood->file)->name;
      }
    } else {
      {
# 672
      tmp___2 = ood->name;
      }
    }
    {
# 672
    printf((char const   */* __restrict  */)((char const   *)" | %s"), tmp___2);
# 673
    d = ood->next;
    }
# 673
    while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
# 674
      if (d->ignore_mtime) {
# 675
        if ((unsigned int )d->name == (unsigned int )((char *)0)) {
          {
# 675
          tmp___3 = (d->file)->name;
          }
        } else {
          {
# 675
          tmp___3 = d->name;
          }
        }
        {
# 675
        printf((char const   */* __restrict  */)((char const   *)" %s"), tmp___3);
        }
      }
      {
# 673
      d = d->next;
      }
    }
  }
  {
# 678
  putchar__extinline((int )'\n');
  }
# 680
  if (f->precious) {
    {
# 681
    tmp___4 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"#  Precious file (prerequisite of .PRECIOUS).",
                                        5);
# 681
    puts(tmp___4);
    }
  }
# 682
  if (f->phony) {
    {
# 683
    tmp___5 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"#  Phony target (prerequisite of .PHONY).",
                                        5);
# 683
    puts(tmp___5);
    }
  }
# 684
  if (f->cmd_target) {
    {
# 685
    tmp___6 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"#  Command-line target.",
                                        5);
# 685
    puts(tmp___6);
    }
  }
# 686
  if (f->dontcare) {
    {
# 687
    tmp___7 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"#  A default or MAKEFILES makefile.",
                                        5);
# 687
    puts(tmp___7);
    }
  }
# 688
  if (f->tried_implicit) {
    {
# 688
    tmp___10 = dcgettext((char const   *)((void *)0),
                         (char const   *)"#  Implicit rule search has been done.",
                         5);
    }
  } else {
    {
# 688
    tmp___10 = dcgettext((char const   *)((void *)0),
                         (char const   *)"#  Implicit rule search has not been done.",
                         5);
    }
  }
  {
# 688
  puts((char const   *)tmp___10);
  }
# 691
  if ((unsigned int )f->stem != (unsigned int )((char *)0)) {
    {
# 692
    tmp___11 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                          (char const   *)"#  Implicit/static pattern stem: `%s\'\n",
                                                          5);
# 692
    printf(tmp___11, f->stem);
    }
  }
# 693
  if (f->intermediate) {
    {
# 694
    tmp___12 = (char const   *)dcgettext((char const   *)((void *)0),
                                         (char const   *)"#  File is an intermediate prerequisite.",
                                         5);
# 694
    puts(tmp___12);
    }
  }
# 695
  if ((unsigned int )f->also_make != (unsigned int )((struct dep *)0)) {
    {
# 697
    tmp___13 = (FILE */* __restrict  */)get_stdout();
    {
# 105 "spec.work"
    tmp___13->__BLAST_FLAG = 1;
    {

    }
    }
# 697 "file.c"
    tmp___14 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                          (char const   *)"#  Also makes:",
                                                          5);
    {
# 40 "spec.work"
    if (! (tmp___13->__BLAST_FLAG == 1)) {
# 42
      __error__();
    }
    {

    }
    }
# 697 "file.c"
    fputs(tmp___14, tmp___13);
# 698
    d = f->also_make;
    }
# 698
    while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
# 699
      if ((unsigned int )d->name == (unsigned int )((char *)0)) {
        {
# 699
        tmp___15 = (d->file)->name;
        }
      } else {
        {
# 699
        tmp___15 = d->name;
        }
      }
      {
# 699
      printf((char const   */* __restrict  */)((char const   *)" %s"), tmp___15);
# 698
      d = d->next;
      }
    }
    {
# 700
    putchar__extinline((int )'\n');
    }
  }
# 702
  if (f->last_mtime == 0ULL) {
    {
# 703
    tmp___16 = (char const   *)dcgettext((char const   *)((void *)0),
                                         (char const   *)"#  Modification time never checked.",
                                         5);
# 703
    puts(tmp___16);
    }
  } else {
# 704
    if (f->last_mtime == 1ULL) {
      {
# 705
      tmp___17 = (char const   *)dcgettext((char const   *)((void *)0),
                                           (char const   *)"#  File does not exist.",
                                           5);
# 705
      puts(tmp___17);
      }
    } else {
# 706
      if (f->last_mtime == 2ULL) {
        {
# 707
        tmp___18 = (char const   *)dcgettext((char const   *)((void *)0),
                                             (char const   *)"#  File is very old.",
                                             5);
# 707
        puts(tmp___18);
        }
      } else {
        {
# 711
        file_timestamp_sprintf(buf___1, f->last_mtime);
# 712
        tmp___19 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                              (char const   *)"#  Last modified %s\n",
                                                              5);
# 712
        printf(tmp___19, buf___1);
        }
      }
    }
  }
# 714
  if (f->updated) {
    {
# 714
    tmp___22 = dcgettext((char const   *)((void *)0),
                         (char const   *)"#  File has been updated.", 5);
    }
  } else {
    {
# 714
    tmp___22 = dcgettext((char const   *)((void *)0),
                         (char const   *)"#  File has not been updated.", 5);
    }
  }
  {
# 714
  puts((char const   *)tmp___22);
  }
# 716
  switch (f->command_state) {
  case 2: 
  {
# 719
  tmp___23 = (char const   *)dcgettext((char const   *)((void *)0),
                                       (char const   *)"#  Commands currently running (THIS IS A BUG).",
                                       5);
# 719
  puts(tmp___23);
  }
# 720
  break;
  case 1: 
  {
# 722
  tmp___24 = (char const   *)dcgettext((char const   *)((void *)0),
                                       (char const   *)"#  Dependencies commands running (THIS IS A BUG).",
                                       5);
# 722
  puts(tmp___24);
  }
# 723
  break;
  case 0: 
  {

  }
  case 3: 
  {

  }
# 726
  switch ((int )f->update_status) {
  case -1: 
  {

  }
# 729
  break;
  case 0: 
  {
# 731
  tmp___25 = (char const   *)dcgettext((char const   *)((void *)0),
                                       (char const   *)"#  Successfully updated.",
                                       5);
# 731
  puts(tmp___25);
  }
# 732
  break;
  case 1: 
  {

  }
# 734
  if (! question_flag) {
    {
# 734
    __assert_fail((char const   *)"question_flag", (char const   *)"file.c",
                  734U, (char const   *)"print_file");
    }
  }
  {
# 735
  tmp___26 = (char const   *)dcgettext((char const   *)((void *)0),
                                       (char const   *)"#  Needs to be updated (-q is set).",
                                       5);
# 735
  puts(tmp___26);
  }
# 736
  break;
  case 2: 
  {
# 738
  tmp___27 = (char const   *)dcgettext((char const   *)((void *)0),
                                       (char const   *)"#  Failed to be updated.",
                                       5);
# 738
  puts(tmp___27);
  }
# 739
  break;
  default: 
  {
# 741
  tmp___28 = (char const   *)dcgettext((char const   *)((void *)0),
                                       (char const   *)"#  Invalid value in `update_status\' member!",
                                       5);
# 741
  puts(tmp___28);
# 742
  tmp___29 = get_stdout();
  {
# 105 "spec.work"
  tmp___29->__BLAST_FLAG = 1;
  {

  }
  }
# 742 "file.c"
  fflush(tmp___29);
# 743
  tmp___30 = get_stderr();
  {
# 97 "spec.work"
  tmp___30->__BLAST_FLAG = 1;
  {

  }
  }
# 743 "file.c"
  fflush(tmp___30);
# 744
  abort();
  }
  }
# 746
  break;
  default: 
  {
# 748
  tmp___31 = (char const   *)dcgettext((char const   *)((void *)0),
                                       (char const   *)"#  Invalid value in `command_state\' member!",
                                       5);
# 748
  puts(tmp___31);
# 749
  tmp___32 = get_stdout();
  {
# 105 "spec.work"
  tmp___32->__BLAST_FLAG = 1;
  {

  }
  }
# 749 "file.c"
  fflush(tmp___32);
# 750
  tmp___33 = get_stderr();
  {
# 97 "spec.work"
  tmp___33->__BLAST_FLAG = 1;
  {

  }
  }
# 750 "file.c"
  fflush(tmp___33);
# 751
  abort();
  }
  }
# 754
  if ((unsigned int )f->variables !=
      (unsigned int )((struct variable_set_list *)0)) {
    {
# 755
    print_file_variables(f);
    }
  }
# 757
  if ((unsigned int )f->cmds != (unsigned int )((struct commands *)0)) {
    {
# 758
    print_commands(f->cmds);
    }
  }
# 757
  return;
}
}
# 761
void print_file_data_base(void) 
{ char const   *tmp ;
  FILE * __restrict  tmp___0 ;
  char const   * __restrict  tmp___1 ;
  FILE *tmp___2 ;

  {
  {
# 764
  tmp = (char const   *)dcgettext((char const   *)((void *)0),
                                  (char const   *)"\n# Files", 5);
# 764
  puts(tmp);
# 766
  hash_map(& files, (void (*)(void const   *item ))(& print_file));
# 768
  tmp___0 = (FILE */* __restrict  */)get_stdout();
  {
# 105 "spec.work"
  tmp___0->__BLAST_FLAG = 1;
  {

  }
  }
# 768 "file.c"
  tmp___1 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                       (char const   *)"\n# files hash-table stats:\n# ",
                                                       5);
  {
# 40 "spec.work"
  if (! (tmp___0->__BLAST_FLAG == 1)) {
# 42
    __error__();
  }
  {

  }
  }
# 768 "file.c"
  fputs(tmp___1, tmp___0);
# 769
  tmp___2 = get_stdout();
  {
# 105 "spec.work"
  tmp___2->__BLAST_FLAG = 1;
  {

  }
  }
# 769 "file.c"
  hash_print_stats(& files, tmp___2);
  }
# 770
  return;
}
}
# 778
static unsigned long last_targ_count   = 0UL;
# 774
char *build_target_list(char *value ) 
{ unsigned long max ;
  size_t tmp ;
  unsigned long len ;
  char *p ;
  struct file **fp ;
  struct file **end ;
  struct file *f ;
  int l ;
  int tmp___0 ;
  unsigned long off ;
  char *tmp___1 ;

  {
# 780
  if (files.ht_fill != last_targ_count) {
    {
# 782
    tmp = strlen((char const   *)value);
# 782
    max = (unsigned long )((tmp / 500U + 1U) * 500U);
# 785
    fp = (struct file **)files.ht_vec;
# 786
    end = fp + files.ht_size;
# 789
    value = xrealloc(value, (unsigned int )max);
# 791
    p = value;
# 792
    len = 0UL;
    }
# 793
    while ((unsigned int )fp < (unsigned int )end) {
# 794
      if (! ((unsigned int )(*fp) == (unsigned int )((struct file *)0))) {
# 794
        if (! ((unsigned int )((void *)(*fp)) ==
               (unsigned int )hash_deleted_item)) {
# 794
          if (((*fp))->is_target) {
            {
# 796
            f = (*fp);
# 797
            tmp___0 = (int )strlen((char const   *)f->name);
# 797
            l = tmp___0;
# 799
            len += (unsigned long )(l + 1);
            }
# 800
            if (len > max) {
              {
# 802
              off = (unsigned long )(p - value);
# 804
              max += (unsigned long )(((l + 1) / 500 + 1) * 500);
# 805
              value = xrealloc(value, (unsigned int )max);
# 806
              p = value + off;
              }
            }
            {
# 809
            memmove((void *)p, (void const   *)f->name, (unsigned int )l);
# 810
            p += l;
# 811
            tmp___1 = p;
# 811
            p ++;
# 811
            (*tmp___1) = ' ';
            }
          }
        }
      }
      {
# 793
      fp ++;
      }
    }
    {
# 813
    (*(p - 1)) = '\0';
# 815
    last_targ_count = files.ht_fill;
    }
  }
# 818
  return (value);
}
}
# 821
void init_hash_files(void) 
{ 

  {
  {
# 824
  hash_init(& files, 1000UL, & file_hash_1, & file_hash_2, & file_hash_cmp);
  }
# 825
  return;
}
}
# 43 "function.c"
static unsigned long function_table_entry_hash_1(void const   *keyv ) 
{ struct function_table_entry  const  *key ;
  unsigned long _result_ ;
  unsigned char const   *_key_ ;
  int _n_ ;

  {
  {
# 47
  key = (struct function_table_entry  const  *)keyv;
  }
# 48
  while (1) {
    {
# 48
    _result_ = 0UL;
    }
# 48
    while (1) {
      {
# 48
      _key_ = (unsigned char const   *)key->name - 1;
# 48
      _n_ = (int )key->len;
      }
# 48
      if (_n_) {
# 48
        while (1) {
          {
# 48
          _n_ --;
          }
# 48
          if (_n_) {
            {
# 48
            _key_ ++;
            }
# 48
            if (! (*_key_)) {
# 48
              break;
            }
          } else {
# 48
            break;
          }
          {
# 48
          _result_ += (unsigned long )((int const   )(*_key_) <<
                                       ((int const   )(*(_key_ + 1)) & 15));
          }
        }
      }
      {
# 48
      _key_ ++;
# 48
      _result_ += (unsigned long )(*_key_);
      }
# 48
      break;
    }
# 48
    return (_result_);
# 48
    break;
  }
# 49
  return (0UL);
}
}
# 51
static unsigned long function_table_entry_hash_2(void const   *keyv ) 
{ struct function_table_entry  const  *key ;
  unsigned long _result_ ;
  unsigned char const   *_key_ ;
  int _n_ ;

  {
  {
# 55
  key = (struct function_table_entry  const  *)keyv;
  }
# 56
  while (1) {
    {
# 56
    _result_ = 0UL;
    }
# 56
    while (1) {
      {
# 56
      _key_ = (unsigned char const   *)key->name - 1;
# 56
      _n_ = (int )key->len;
      }
# 56
      if (_n_) {
# 56
        while (1) {
          {
# 56
          _n_ --;
          }
# 56
          if (_n_) {
            {
# 56
            _key_ ++;
            }
# 56
            if (! (*_key_)) {
# 56
              break;
            }
          } else {
# 56
            break;
          }
          {
# 56
          _result_ += (unsigned long )((int const   )(*_key_) <<
                                       ((int const   )(*(_key_ + 1)) & 7));
          }
        }
      }
      {
# 56
      _key_ ++;
# 56
      _result_ += (unsigned long )(*_key_);
      }
# 56
      break;
    }
# 56
    return (_result_);
# 56
    break;
  }
# 57
  return (0UL);
}
}
# 59
static int function_table_entry_hash_cmp(void const   *xv , void const   *yv ) 
{ struct function_table_entry  const  *x ;
  struct function_table_entry  const  *y ;
  int result___0 ;
  int tmp ;

  {
  {
# 64
  x = (struct function_table_entry  const  *)xv;
# 65
  y = (struct function_table_entry  const  *)yv;
# 66
  result___0 = (int )x->len - (int )y->len;
  }
# 67
  if (result___0) {
# 68
    return (result___0);
  }
# 69
  while (1) {
    {
# 69
    tmp = strncmp(x->name, y->name, (unsigned int )x->len);
    }
# 69
    return (tmp);
# 69
    break;
  }
# 70
  return (0);
}
}
# 72
static struct hash_table function_table  ;
# 82
char *subst_expand(char *o , char *text , char *subst , char *replace ,
                   unsigned int slen , unsigned int rlen , int by_word ,
                   int suffix_only ) 
{ register char *t ;
  register char *p ;
  unsigned int tmp ;
  char *tmp___0 ;
  unsigned int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;

  {
  {
# 90
  t = text;
  }
# 93
  if (slen == 0U) {
# 93
    if (! by_word) {
# 93
      if (! suffix_only) {
        {
# 96
        tmp = strlen((char const   *)t);
# 96
        o = variable_buffer_output(o, t, tmp);
        }
# 97
        if (rlen > 0U) {
          {
# 98
          o = variable_buffer_output(o, replace, rlen);
          }
        }
# 99
        return (o);
      }
    }
  }
# 102
  while (1) {
# 104
    if (by_word | suffix_only) {
# 104
      if (slen == 0U) {
        {
# 107
        tmp___0 = next_token((char const   *)t);
# 107
        p = end_of_token(tmp___0);
        }
      } else {
        goto _L;
      }
    } else {
      _L: 
      {
# 110
      p = sindex((char const   *)t, 0U, (char const   *)subst, slen);
      }
# 111
      if ((unsigned int )p == (unsigned int )((char *)0)) {
        {
# 114
        tmp___1 = strlen((char const   *)t);
# 114
        o = variable_buffer_output(o, t, tmp___1);
        }
# 115
        return (o);
      }
    }
# 120
    if ((unsigned int )p > (unsigned int )t) {
      {
# 121
      o = variable_buffer_output(o, t, (unsigned int )(p - t));
      }
    }
# 125
    if (by_word) {
# 125
      if ((unsigned int )p > (unsigned int )t) {
        {
# 125
        tmp___2 = _get__ctype_b((int )((unsigned char )(*(p + -1))));
        }
# 125
        if (tmp___2 & 1) {
          goto _L___2;
        } else {
          {
# 132
          o = variable_buffer_output(o, subst, slen);
          }
        }
      } else {
        _L___2: 
# 125
        if ((int )(*(p + slen)) != 0) {
          {
# 125
          tmp___3 = _get__ctype_b((int )((unsigned char )(*(p + slen))));
          }
# 125
          if (tmp___3 & 1) {
            goto _L___1;
          } else {
            {
# 132
            o = variable_buffer_output(o, subst, slen);
            }
          }
        } else {
          goto _L___1;
        }
      }
    } else {
      _L___1: 
# 125
      if (suffix_only) {
# 125
        if ((int )(*(p + slen)) != 0) {
          {
# 125
          tmp___4 = _get__ctype_b((int )((unsigned char )(*(p + slen))));
          }
# 125
          if (tmp___4 & 1) {
            goto _L___0;
          } else {
            {
# 132
            o = variable_buffer_output(o, subst, slen);
            }
          }
        } else {
          goto _L___0;
        }
      } else {
        _L___0: 
# 133
        if (rlen > 0U) {
          {
# 135
          o = variable_buffer_output(o, replace, rlen);
          }
        }
      }
    }
    {
# 138
    t = p + slen;
    }
# 102
    if (! ((int )(*t) != 0)) {
# 102
      break;
    }
  }
# 141
  return (o);
}
}
# 152
char *patsubst_expand(char *o , char *text , char *pattern , char *replace ,
                      char *pattern_percent , char *replace_percent ) 
{ unsigned int pattern_prepercent_len ;
  unsigned int pattern_postpercent_len ;
  unsigned int replace_prepercent_len ;
  unsigned int replace_postpercent_len ;
  char *t ;
  unsigned int len ;
  int doneany ;
  unsigned int tmp ;
  unsigned int tmp___0 ;
  char *tmp___1 ;
  int fail ;
  int tmp___2 ;
  int tmp___3 ;

  {
  {
# 160
  replace_postpercent_len = 0U;
# 163
  doneany = 0;
  }
# 167
  if ((unsigned int )replace_percent == (unsigned int )((char *)0)) {
    {
# 168
    replace_percent = find_percent(replace);
    }
  }
# 169
  if ((unsigned int )replace_percent != (unsigned int )((char *)0)) {
    {
# 173
    replace_prepercent_len = (unsigned int )(replace_percent - replace);
# 174
    replace_postpercent_len = strlen((char const   *)(replace_percent + 1));
    }
  } else {
    {
# 179
    replace_prepercent_len = strlen((char const   *)replace);
    }
  }
# 181
  if ((unsigned int )pattern_percent == (unsigned int )((char *)0)) {
    {
# 182
    pattern_percent = find_percent(pattern);
    }
  }
# 183
  if ((unsigned int )pattern_percent == (unsigned int )((char *)0)) {
    {
# 185
    tmp = strlen((char const   *)replace);
# 185
    tmp___0 = strlen((char const   *)pattern);
# 185
    tmp___1 = subst_expand(o, text, pattern, replace, tmp___0, tmp, 1, 0);
    }
# 185
    return (tmp___1);
  }
  {
# 190
  pattern_prepercent_len = (unsigned int )(pattern_percent - pattern);
# 191
  pattern_postpercent_len = strlen((char const   *)(pattern_percent + 1));
  }
# 193
  while (1) {
    {
# 193
    t = find_next_token(& text, & len);
    }
# 193
    if (! ((unsigned int )t != (unsigned int )((char *)0))) {
# 193
      break;
    }
    {
# 195
    fail = 0;
    }
# 198
    if (len < pattern_prepercent_len + pattern_postpercent_len) {
      {
# 199
      fail = 1;
      }
    }
# 202
    if (! fail) {
# 202
      if (pattern_prepercent_len > 0U) {
# 202
        if ((int )(*t) != (int )(*pattern)) {
          {
# 206
          fail = 1;
          }
        } else {
# 202
          if ((int )(*(t + (pattern_prepercent_len - 1U))) !=
              (int )(*(pattern_percent + -1))) {
            {
# 206
            fail = 1;
            }
          } else {
            {
# 202
            tmp___2 = strncmp((char const   *)(t + 1),
                              (char const   *)(pattern + 1),
                              pattern_prepercent_len - 1U);
            }
# 202
            if (! (tmp___2 == 0)) {
              {
# 206
              fail = 1;
              }
            }
          }
        }
      }
    }
# 209
    if (! fail) {
# 209
      if (pattern_postpercent_len > 0U) {
# 209
        if ((int )(*(t + (len - 1U))) !=
            (int )(*(pattern_percent + pattern_postpercent_len))) {
          {
# 214
          fail = 1;
          }
        } else {
# 209
          if ((int )(*(t + (len - pattern_postpercent_len))) !=
              (int )(*(pattern_percent + 1))) {
            {
# 214
            fail = 1;
            }
          } else {
            {
# 209
            tmp___3 = strncmp((char const   *)(t + (len -
                                                    pattern_postpercent_len)),
                              (char const   *)(pattern_percent + 1),
                              pattern_postpercent_len - 1U);
            }
# 209
            if (! (tmp___3 == 0)) {
              {
# 214
              fail = 1;
              }
            }
          }
        }
      }
    }
# 216
    if (fail) {
      {
# 218
      o = variable_buffer_output(o, t, len);
      }
    } else {
      {
# 224
      o = variable_buffer_output(o, replace, replace_prepercent_len);
      }
# 226
      if ((unsigned int )replace_percent != (unsigned int )((char *)0)) {
        {
# 230
        o = variable_buffer_output(o, t + pattern_prepercent_len,
                                   len - (pattern_prepercent_len +
                                          pattern_postpercent_len));
# 234
        o = variable_buffer_output(o, replace_percent + 1,
                                   replace_postpercent_len);
        }
      }
    }
# 240
    if (fail) {
      {
# 243
      o = variable_buffer_output(o, " ", 1U);
# 244
      doneany = 1;
      }
    } else {
# 240
      if (replace_prepercent_len > 0U) {
        {
# 243
        o = variable_buffer_output(o, " ", 1U);
# 244
        doneany = 1;
        }
      } else {
# 240
        if ((unsigned int )replace_percent != (unsigned int )((char *)0)) {
# 240
          if (len + replace_postpercent_len > 0U) {
            {
# 243
            o = variable_buffer_output(o, " ", 1U);
# 244
            doneany = 1;
            }
          }
        }
      }
    }
  }
# 247
  if (doneany) {
    {
# 249
    o --;
    }
  }
# 251
  return (o);
}
}
# 257
static struct function_table_entry  const  *lookup_function(char const   *s ) 
{ char const   *e ;
  struct function_table_entry function_table_entry_key ;
  struct function_table_entry  const  *tmp ;
  int tmp___0 ;

  {
  {
# 261
  e = s;
  }
# 263
  while (1) {
# 263
    if ((*e)) {
# 263
      if ((int const   )(*e) >= 97) {
# 263
        if (! ((int const   )(*e) <= 122)) {
          goto _L;
        }
      } else {
        _L: 
# 263
        if (! ((int const   )(*e) == 45)) {
# 263
          break;
        }
      }
    } else {
# 263
      break;
    }
    {
# 264
    e ++;
    }
  }
# 265
  if ((int const   )(*e) == 0) {
    {
# 268
    function_table_entry_key.name = s;
# 269
    function_table_entry_key.len = (unsigned char )(e - s);
# 271
    tmp = (struct function_table_entry  const  *)hash_find_item(& function_table,
                                                                (void const   *)(& function_table_entry_key));
    }
# 271
    return (tmp);
  } else {
    {
# 265
    tmp___0 = _get__ctype_b((int )((unsigned char )(*e)));
    }
# 265
    if (tmp___0 & 1) {
      {
# 268
      function_table_entry_key.name = s;
# 269
      function_table_entry_key.len = (unsigned char )(e - s);
# 271
      tmp = (struct function_table_entry  const  *)hash_find_item(& function_table,
                                                                  (void const   *)(& function_table_entry_key));
      }
# 271
      return (tmp);
    }
  }
# 273
  return ((struct function_table_entry  const  *)0);
}
}
# 279
int pattern_matches(char *pattern , char *percent , char *str ) 
{ unsigned int sfxlen ;
  unsigned int strlength ;
  unsigned int len ;
  size_t tmp ;
  char *new_chars ;
  char *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
# 285
  if ((unsigned int )percent == (unsigned int )((char *)0)) {
    {
# 287
    tmp = strlen((char const   *)pattern);
# 287
    len = tmp + 1U;
# 288
    tmp___0 = (char *)__builtin_alloca(len);
# 288
    new_chars = tmp___0;
# 289
    memmove((void *)new_chars, (void const   *)pattern, len);
# 290
    pattern = new_chars;
# 291
    percent = find_percent(pattern);
    }
# 292
    if ((unsigned int )percent == (unsigned int )((char *)0)) {
# 293
      if ((unsigned int )pattern == (unsigned int )str) {
        {
# 293
        tmp___2 = 1;
        }
      } else {
# 293
        if ((int )(*pattern) == (int )(*str)) {
# 293
          if ((int )(*pattern) == 0) {
            {
# 293
            tmp___2 = 1;
            }
          } else {
            {
# 293
            tmp___1 = strcmp((char const   *)(pattern + 1),
                             (char const   *)(str + 1));
            }
# 293
            if (tmp___1) {
              {
# 293
              tmp___2 = 0;
              }
            } else {
              {
# 293
              tmp___2 = 1;
              }
            }
          }
        } else {
          {
# 293
          tmp___2 = 0;
          }
        }
      }
# 293
      return (tmp___2);
    }
  }
  {
# 296
  sfxlen = strlen((char const   *)(percent + 1));
# 297
  strlength = strlen((char const   *)str);
  }
# 299
  if (strlength < (unsigned int )(percent - pattern) + sfxlen) {
# 301
    return (0);
  } else {
    {
# 299
    tmp___3 = strncmp((char const   *)pattern, (char const   *)str,
                      (unsigned int )(percent - pattern));
    }
# 299
    if (! (tmp___3 == 0)) {
# 301
      return (0);
    }
  }
  {
# 303
  tmp___4 = strcmp((char const   *)(percent + 1),
                   (char const   *)(str + (strlength - sfxlen)));
  }
# 303
  if (tmp___4) {
    {
# 303
    tmp___5 = 0;
    }
  } else {
    {
# 303
    tmp___5 = 1;
    }
  }
# 303
  return (tmp___5);
}
}
# 314
static char *find_next_argument(char startparen , char endparen ,
                                char const   *ptr , char const   *end ) 
{ int count ;

  {
  {
# 321
  count = 0;
  }
# 323
  while ((unsigned int )ptr < (unsigned int )end) {
# 324
    if ((int const   )(*ptr) == (int const   )startparen) {
      {
# 325
      count ++;
      }
    } else {
# 327
      if ((int const   )(*ptr) == (int const   )endparen) {
        {
# 329
        count --;
        }
# 330
        if (count < 0) {
# 331
          return ((char *)((void *)0));
        }
      } else {
# 334
        if ((int const   )(*ptr) == 44) {
# 334
          if (! count) {
# 335
            return ((char *)ptr);
          }
        }
      }
    }
    {
# 323
    ptr ++;
    }
  }
# 338
  return ((char *)((void *)0));
}
}
# 349
static char *string_glob(char *line ) ;
# 349
static char *result   = (char *)0;
# 350
static unsigned int length  ;
# 345
static char *string_glob(char *line ) 
{ register struct nameseq *chain ;
  register unsigned int idx ;
  struct nameseq *tmp ;
  char *tmp___0 ;
  register char *name ;
  unsigned int len ;
  unsigned int tmp___1 ;
  struct nameseq *next ;
  char *tmp___2 ;
  unsigned int tmp___3 ;
  int tmp___4 ;

  {
  {
# 354
  tmp = parse_file_seq(& line, (int )'\0', sizeof(struct nameseq ), 0);
# 354
  chain = multi_glob(tmp, sizeof(struct nameseq ));
  }
# 362
  if ((unsigned int )result == (unsigned int )((char *)0)) {
    {
# 364
    length = 100U;
# 365
    tmp___0 = xmalloc(100U);
# 365
    result = tmp___0;
    }
  }
  {
# 368
  idx = 0U;
  }
# 369
  while ((unsigned int )chain != (unsigned int )((struct nameseq *)0)) {
    {
# 371
    name = chain->name;
# 372
    tmp___1 = strlen((char const   *)name);
# 372
    len = tmp___1;
# 374
    next = chain->next;
# 375
    free((void *)((char *)chain));
# 376
    chain = next;
# 380
    tmp___4 = file_exists_p(name);
    }
# 380
    if (tmp___4) {
# 382
      if ((idx + len) + 1U > length) {
        {
# 384
        length += (len + 1U) * 2U;
# 385
        tmp___2 = xrealloc(result, length);
# 385
        result = tmp___2;
        }
      }
      {
# 387
      memmove((void *)(result + idx), (void const   *)name, len);
# 388
      idx += len;
# 389
      tmp___3 = idx;
# 389
      idx ++;
# 389
      (*(result + tmp___3)) = ' ';
      }
    }
    {
# 392
    free((void *)name);
    }
  }
# 396
  if (idx == 0U) {
    {
# 397
    (*(result + 0)) = '\0';
    }
  } else {
    {
# 399
    (*(result + (idx - 1U))) = '\0';
    }
  }
# 401
  return (result);
}
}
# 408
static char *func_patsubst(char *o , char **argv , char const   *funcname ) 
{ 

  {
  {
# 414
  o = patsubst_expand(o, (*(argv + 2)), (*(argv + 0)), (*(argv + 1)), (char *)0,
                      (char *)0);
  }
# 415
  return (o);
}
}
# 419
static char *func_join(char *o , char **argv , char const   *funcname ) 
{ int doneany ;
  register char *tp ;
  register char *pp ;
  char *list1_iterator ;
  char *list2_iterator ;
  unsigned int len1 ;
  unsigned int len2 ;

  {
  {
# 425
  doneany = 0;
# 433
  list1_iterator = (*(argv + 0));
# 434
  list2_iterator = (*(argv + 1));
  }
# 435
  while (1) {
    {
# 439
    tp = find_next_token(& list1_iterator, & len1);
    }
# 440
    if ((unsigned int )tp != (unsigned int )((char *)0)) {
      {
# 441
      o = variable_buffer_output(o, tp, len1);
      }
    }
    {
# 443
    pp = find_next_token(& list2_iterator, & len2);
    }
# 444
    if ((unsigned int )pp != (unsigned int )((char *)0)) {
      {
# 445
      o = variable_buffer_output(o, pp, len2);
      }
    }
# 447
    if ((unsigned int )tp != (unsigned int )((char *)0)) {
      {
# 449
      o = variable_buffer_output(o, " ", 1U);
# 450
      doneany = 1;
      }
    } else {
# 447
      if ((unsigned int )pp != (unsigned int )((char *)0)) {
        {
# 449
        o = variable_buffer_output(o, " ", 1U);
# 450
        doneany = 1;
        }
      }
    }
# 435
    if (! ((unsigned int )tp != (unsigned int )((char *)0))) {
# 435
      if (! ((unsigned int )pp != (unsigned int )((char *)0))) {
# 435
        break;
      }
    }
  }
# 454
  if (doneany) {
    {
# 456
    o --;
    }
  }
# 458
  return (o);
}
}
# 462
static char *func_origin(char *o , char **argv , char const   *funcname ) 
{ register struct variable *v ;
  unsigned int tmp ;
  struct variable *tmp___0 ;

  {
  {
# 469
  tmp = strlen((char const   *)(*(argv + 0)));
# 469
  tmp___0 = lookup_variable((char const   *)(*(argv + 0)), tmp);
# 469
  v = tmp___0;
  }
# 470
  if ((unsigned int )v == (unsigned int )((struct variable *)0)) {
    {
# 471
    o = variable_buffer_output(o, "undefined", 9U);
    }
  } else {
# 473
    switch (v->origin) {
    default: 
    {

    }
    case 7: 
    {
# 477
    abort();
    }
# 478
    break;
    case 0: 
    {
# 480
    o = variable_buffer_output(o, "default", 7U);
    }
# 481
    break;
    case 1: 
    {
# 483
    o = variable_buffer_output(o, "environment", 11U);
    }
# 484
    break;
    case 2: 
    {
# 486
    o = variable_buffer_output(o, "file", 4U);
    }
# 487
    break;
    case 3: 
    {
# 489
    o = variable_buffer_output(o, "environment override", 20U);
    }
# 490
    break;
    case 4: 
    {
# 492
    o = variable_buffer_output(o, "command line", 12U);
    }
# 493
    break;
    case 5: 
    {
# 495
    o = variable_buffer_output(o, "override", 8U);
    }
# 496
    break;
    case 6: 
    {
# 498
    o = variable_buffer_output(o, "automatic", 9U);
    }
# 499
    break;
    }
  }
# 502
  return (o);
}
}
# 516
static char *func_notdir_suffix(char *o , char **argv , char const   *funcname ) 
{ char *list_iterator ;
  char *p2 ;
  int doneany ;
  unsigned int len ;
  int is_suffix ;
  int tmp ;
  int tmp___0 ;
  int is_notdir ;
  char *p ;

  {
  {
# 523
  list_iterator = (*(argv + 0));
# 524
  p2 = (char *)0;
# 525
  doneany = 0;
# 526
  len = 0U;
  }
# 528
  if ((unsigned int )funcname == (unsigned int )"suffix") {
    {
# 528
    tmp___0 = 1;
    }
  } else {
# 528
    if ((int const   )(*funcname) == (int const   )(*"suffix")) {
# 528
      if ((int const   )(*funcname) == 0) {
        {
# 528
        tmp___0 = 1;
        }
      } else {
        {
# 528
        tmp = strcmp(funcname + 1, (char const   *)("suffix" + 1));
        }
# 528
        if (tmp) {
          {
# 528
          tmp___0 = 0;
          }
        } else {
          {
# 528
          tmp___0 = 1;
          }
        }
      }
    } else {
      {
# 528
      tmp___0 = 0;
      }
    }
  }
  {
# 528
  is_suffix = tmp___0;
# 529
  is_notdir = ! is_suffix != 0;
  }
# 530
  while (1) {
    {
# 530
    p2 = find_next_token(& list_iterator, & len);
    }
# 530
    if (! ((unsigned int )p2 != (unsigned int )((char *)0))) {
# 530
      break;
    }
    {
# 532
    p = p2 + len;
    }
# 535
    while (1) {
# 535
      if ((unsigned int )p >= (unsigned int )p2) {
# 535
        if (is_suffix) {
# 535
          if (! ((int )(*p) != 46)) {
# 535
            break;
          }
        }
      } else {
# 535
        break;
      }
# 537
      if ((int )(*p) == 47) {
# 538
        break;
      }
      {
# 539
      p --;
      }
    }
# 542
    if ((unsigned int )p >= (unsigned int )p2) {
# 544
      if (is_notdir) {
        {
# 545
        p ++;
        }
      } else {
# 546
        if ((int )(*p) != 46) {
# 547
          continue;
        }
      }
      {
# 548
      o = variable_buffer_output(o, p, len - (unsigned int )(p - p2));
      }
    } else {
# 558
      if (is_notdir) {
        {
# 559
        o = variable_buffer_output(o, p2, len);
        }
      }
    }
# 561
    if (is_notdir) {
      {
# 563
      o = variable_buffer_output(o, " ", 1U);
# 564
      doneany = 1;
      }
    } else {
# 561
      if ((unsigned int )p >= (unsigned int )p2) {
        {
# 563
        o = variable_buffer_output(o, " ", 1U);
# 564
        doneany = 1;
        }
      }
    }
  }
# 567
  if (doneany) {
    {
# 569
    o --;
    }
  }
# 572
  return (o);
}
}
# 577
static char *func_basename_dir(char *o , char **argv , char const   *funcname ) 
{ char *p3 ;
  char *p2 ;
  int doneany ;
  unsigned int len ;
  char *p ;
  int is_basename ;
  int tmp ;
  int tmp___0 ;
  int is_dir ;

  {
  {
# 584
  p3 = (*(argv + 0));
# 585
  p2 = (char *)0;
# 586
  doneany = 0;
# 587
  len = 0U;
# 588
  p = (char *)0;
  }
# 589
  if ((unsigned int )funcname == (unsigned int )"basename") {
    {
# 589
    tmp___0 = 1;
    }
  } else {
# 589
    if ((int const   )(*funcname) == (int const   )(*"basename")) {
# 589
      if ((int const   )(*funcname) == 0) {
        {
# 589
        tmp___0 = 1;
        }
      } else {
        {
# 589
        tmp = strcmp(funcname + 1, (char const   *)("basename" + 1));
        }
# 589
        if (tmp) {
          {
# 589
          tmp___0 = 0;
          }
        } else {
          {
# 589
          tmp___0 = 1;
          }
        }
      }
    } else {
      {
# 589
      tmp___0 = 0;
      }
    }
  }
  {
# 589
  is_basename = tmp___0;
# 590
  is_dir = ! is_basename != 0;
  }
# 592
  while (1) {
    {
# 592
    p2 = find_next_token(& p3, & len);
    }
# 592
    if (! ((unsigned int )p2 != (unsigned int )((char *)0))) {
# 592
      break;
    }
    {
# 594
    p = p2 + len;
    }
# 595
    while (1) {
# 595
      if ((unsigned int )p >= (unsigned int )p2) {
# 595
        if (is_basename) {
# 595
          if (! ((int )(*p) != 46)) {
# 595
            break;
          }
        }
      } else {
# 595
        break;
      }
# 597
      if ((int )(*p) == 47) {
# 598
        break;
      }
      {
# 599
      p --;
      }
    }
# 602
    if ((unsigned int )p >= (unsigned int )p2) {
# 602
      if (is_dir) {
        {
# 603
        p ++;
# 603
        o = variable_buffer_output(o, p2, (unsigned int )(p - p2));
        }
      } else {
        goto _L___0;
      }
    } else {
      _L___0: 
# 604
      if ((unsigned int )p >= (unsigned int )p2) {
# 604
        if ((int )(*p) == 46) {
          {
# 605
          o = variable_buffer_output(o, p2, (unsigned int )(p - p2));
          }
        } else {
          goto _L;
        }
      } else {
        _L: 
# 611
        if (is_dir) {
          {
# 616
          o = variable_buffer_output(o, "./", 2U);
          }
        } else {
          {
# 623
          o = variable_buffer_output(o, p2, len);
          }
        }
      }
    }
    {
# 625
    o = variable_buffer_output(o, " ", 1U);
# 626
    doneany = 1;
    }
  }
# 628
  if (doneany) {
    {
# 630
    o --;
    }
  }
# 633
  return (o);
}
}
# 636
static char *func_addsuffix_addprefix(char *o , char **argv ,
                                      char const   *funcname ) 
{ int fixlen ;
  int tmp ;
  char *list_iterator ;
  int is_addprefix ;
  int tmp___0 ;
  int tmp___1 ;
  int is_addsuffix ;
  int doneany ;
  char *p ;
  unsigned int len ;

  {
  {
# 642
  tmp = (int )strlen((char const   *)(*(argv + 0)));
# 642
  fixlen = tmp;
# 643
  list_iterator = (*(argv + 1));
  }
# 644
  if ((unsigned int )funcname == (unsigned int )"addprefix") {
    {
# 644
    tmp___1 = 1;
    }
  } else {
# 644
    if ((int const   )(*funcname) == (int const   )(*"addprefix")) {
# 644
      if ((int const   )(*funcname) == 0) {
        {
# 644
        tmp___1 = 1;
        }
      } else {
        {
# 644
        tmp___0 = strcmp(funcname + 1, (char const   *)("addprefix" + 1));
        }
# 644
        if (tmp___0) {
          {
# 644
          tmp___1 = 0;
          }
        } else {
          {
# 644
          tmp___1 = 1;
          }
        }
      }
    } else {
      {
# 644
      tmp___1 = 0;
      }
    }
  }
  {
# 644
  is_addprefix = tmp___1;
# 645
  is_addsuffix = ! is_addprefix != 0;
# 647
  doneany = 0;
  }
# 651
  while (1) {
    {
# 651
    p = find_next_token(& list_iterator, & len);
    }
# 651
    if (! ((unsigned int )p != (unsigned int )((char *)0))) {
# 651
      break;
    }
# 653
    if (is_addprefix) {
      {
# 654
      o = variable_buffer_output(o, (*(argv + 0)), (unsigned int )fixlen);
      }
    }
    {
# 655
    o = variable_buffer_output(o, p, len);
    }
# 656
    if (is_addsuffix) {
      {
# 657
      o = variable_buffer_output(o, (*(argv + 0)), (unsigned int )fixlen);
      }
    }
    {
# 658
    o = variable_buffer_output(o, " ", 1U);
# 659
    doneany = 1;
    }
  }
# 662
  if (doneany) {
    {
# 664
    o --;
    }
  }
# 666
  return (o);
}
}
# 669
static char *func_subst(char *o , char **argv , char const   *funcname ) 
{ unsigned int tmp ;
  unsigned int tmp___0 ;

  {
  {
# 675
  tmp = strlen((char const   *)(*(argv + 1)));
# 675
  tmp___0 = strlen((char const   *)(*(argv + 0)));
# 675
  o = subst_expand(o, (*(argv + 2)), (*(argv + 0)), (*(argv + 1)), tmp___0, tmp,
                   0, 0);
  }
# 678
  return (o);
}
}
# 682
static char *func_firstword(char *o , char **argv , char const   *funcname ) 
{ unsigned int i ;
  char *words ;
  char *p ;
  char *tmp ;

  {
  {
# 689
  words = (*(argv + 0));
# 690
  tmp = find_next_token(& words, & i);
# 690
  p = tmp;
  }
# 692
  if ((unsigned int )p != (unsigned int )((char *)0)) {
    {
# 693
    o = variable_buffer_output(o, p, i);
    }
  }
# 695
  return (o);
}
}
# 699
static char *func_words(char *o , char **argv , char const   *funcname ) 
{ int i ;
  char *word_iterator ;
  char buf___1[20] ;
  char *tmp ;
  unsigned int tmp___0 ;

  {
  {
# 705
  i = 0;
# 706
  word_iterator = (*(argv + 0));
  }
# 709
  while (1) {
    {
# 709
    tmp = find_next_token(& word_iterator, (unsigned int *)0);
    }
# 709
    if (! ((unsigned int )tmp != (unsigned int )((char *)0))) {
# 709
      break;
    }
    {
# 710
    i ++;
    }
  }
  {
# 712
  sprintf((char */* __restrict  */)(buf___1),
          (char const   */* __restrict  */)((char const   *)"%d"), i);
# 713
  tmp___0 = strlen((char const   *)(buf___1));
# 713
  o = variable_buffer_output(o, buf___1, tmp___0);
  }
# 716
  return (o);
}
}
# 719
char *strip_whitespace(char **begpp , char **endpp ) 
{ int tmp ;
  int tmp___0 ;

  {
# 724
  while (1) {
    {
# 724
    tmp = _get__ctype_b((int )((unsigned char )(*((*begpp)))));
    }
# 724
    if (tmp & 8192) {
# 724
      if (! ((unsigned int )(*begpp) <= (unsigned int )(*endpp))) {
# 724
        break;
      }
    } else {
# 724
      break;
    }
    {
# 725
    (*begpp) ++;
    }
  }
# 726
  while (1) {
    {
# 726
    tmp___0 = _get__ctype_b((int )((unsigned char )(*((*endpp)))));
    }
# 726
    if (tmp___0 & 8192) {
# 726
      if (! ((unsigned int )(*endpp) >= (unsigned int )(*begpp))) {
# 726
        break;
      }
    } else {
# 726
      break;
    }
    {
# 727
    (*endpp) --;
    }
  }
# 728
  return ((*begpp));
}
}
# 731
int is_numeric(char *p ) 
{ char *end ;
  size_t tmp ;
  char *beg ;
  char *tmp___0 ;

  {
  {
# 735
  tmp = strlen((char const   *)p);
# 735
  end = (p + tmp) - 1;
# 736
  beg = p;
# 737
  strip_whitespace(& p, & end);
  }
# 739
  while ((unsigned int )p <= (unsigned int )end) {
    {
# 740
    tmp___0 = p;
# 740
    p ++;
    }
# 740
    if (! ((unsigned int )(*tmp___0) - 48U <= 9U)) {
# 741
      return (0);
    }
  }
# 743
  return (end - beg >= 0);
}
}
# 746
void check_numeric(char *s , char *message___0 ) 
{ int tmp ;

  {
  {
# 751
  tmp = is_numeric(s);
  }
# 751
  if (! tmp) {
    {
# 752
    fatal(reading_file, (char const   *)message___0);
    }
  }
# 753
  return;
}
}
# 757
static char *func_word(char *o , char **argv , char const   *funcname ) 
{ char *end_p ;
  int i ;
  char *p ;
  char *tmp ;
  char const   *tmp___0 ;

  {
  {
# 763
  end_p = (char *)0;
# 764
  i = 0;
# 765
  p = (char *)0;
# 768
  tmp = dcgettext((char const   *)((void *)0),
                  (char const   *)"non-numeric first argument to `word\' function",
                  5);
# 768
  check_numeric((*(argv + 0)), tmp);
# 769
  i = atoi((char const   *)(*(argv + 0)));
  }
# 771
  if (i == 0) {
    {
# 772
    tmp___0 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"first argument to `word\' function must be greater than 0",
                                        5);
# 772
    fatal(reading_file, tmp___0);
    }
  }
  {
# 775
  end_p = (*(argv + 1));
  }
# 776
  while (1) {
    {
# 776
    p = find_next_token(& end_p, (unsigned int *)0);
    }
# 776
    if (! ((unsigned int )p != (unsigned int )((char *)0))) {
# 776
      break;
    }
    {
# 777
    i --;
    }
# 777
    if (i == 0) {
# 778
      break;
    }
  }
# 780
  if (i == 0) {
    {
# 781
    o = variable_buffer_output(o, p, (unsigned int )(end_p - p));
    }
  }
# 783
  return (o);
}
}
# 786
static char *func_wordlist(char *o , char **argv , char const   *funcname ) 
{ int start ;
  int count ;
  char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  char *p ;
  char *end_p ;
  char *tmp___2 ;

  {
  {
# 795
  tmp = dcgettext((char const   *)((void *)0),
                  (char const   *)"non-numeric first argument to `wordlist\' function",
                  5);
# 795
  check_numeric((*(argv + 0)), tmp);
# 797
  tmp___0 = dcgettext((char const   *)((void *)0),
                      (char const   *)"non-numeric second argument to `wordlist\' function",
                      5);
# 797
  check_numeric((*(argv + 1)), tmp___0);
# 800
  start = atoi((char const   *)(*(argv + 0)));
# 801
  tmp___1 = atoi((char const   *)(*(argv + 1)));
# 801
  count = (tmp___1 - start) + 1;
  }
# 803
  if (count > 0) {
    {
# 806
    end_p = (*(argv + 2));
    }
# 809
    while (1) {
      {
# 809
      p = find_next_token(& end_p, (unsigned int *)0);
      }
# 809
      if ((unsigned int )p != (unsigned int )((char *)0)) {
        {
# 809
        start --;
        }
# 809
        if (! start) {
# 809
          break;
        }
      } else {
# 809
        break;
      }
    }
# 812
    if (p) {
# 815
      while (1) {
        {
# 815
        count --;
        }
# 815
        if (count) {
          {
# 815
          tmp___2 = find_next_token(& end_p, (unsigned int *)0);
          }
# 815
          if (! ((unsigned int )tmp___2 != (unsigned int )((char *)0))) {
# 815
            break;
          }
        } else {
# 815
          break;
        }
      }
      {
# 819
      o = variable_buffer_output(o, p, (unsigned int )(end_p - p));
      }
    }
  }
# 823
  return (o);
}
}
# 826
static char *func_findstring(char *o , char **argv , char const   *funcname ) 
{ int i ;
  int tmp ;
  char *tmp___0 ;

  {
  {
# 833
  tmp = (int )strlen((char const   *)(*(argv + 0)));
# 833
  i = tmp;
# 834
  tmp___0 = sindex((char const   *)(*(argv + 1)), 0U,
                   (char const   *)(*(argv + 0)), (unsigned int )i);
  }
# 834
  if ((unsigned int )tmp___0 != (unsigned int )((char *)0)) {
    {
# 835
    o = variable_buffer_output(o, (*(argv + 0)), (unsigned int )i);
    }
  }
# 837
  return (o);
}
}
# 840
static char *func_foreach(char *o , char **argv , char const   *funcname ) 
{ char *varname ;
  char *tmp ;
  char *list ;
  char *tmp___0 ;
  char *body ;
  int doneany ;
  char *list_iterator ;
  char *p ;
  unsigned int len ;
  register struct variable *var ;
  unsigned int tmp___1 ;
  char *result___0 ;
  char save ;
  char *tmp___2 ;
  unsigned int tmp___3 ;

  {
  {
# 847
  tmp = expand_argument((*(argv + 0)), (char *)((void *)0));
# 847
  varname = tmp;
# 848
  tmp___0 = expand_argument((*(argv + 1)), (char *)((void *)0));
# 848
  list = tmp___0;
# 849
  body = (*(argv + 2));
# 851
  doneany = 0;
# 852
  list_iterator = list;
# 857
  push_new_variable_scope();
# 858
  tmp___1 = strlen((char const   *)varname);
# 858
  var = define_variable_in_set((char const   *)varname, tmp___1, "", 6, 0,
                               current_variable_set_list->set,
                               (struct floc  const  *)((struct floc *)0));
  }
# 861
  while (1) {
    {
# 861
    p = find_next_token(& list_iterator, & len);
    }
# 861
    if (! ((unsigned int )p != (unsigned int )((char *)0))) {
# 861
      break;
    }
    {
# 863
    result___0 = (char *)0;
# 866
    save = (*(p + len));
# 868
    (*(p + len)) = '\0';
# 869
    free((void *)var->value);
# 870
    tmp___2 = xstrdup((char const   *)p);
# 870
    var->value = tmp___2;
# 871
    (*(p + len)) = save;
# 874
    result___0 = allocated_variable_expand_for_file(body, (struct file *)0);
# 876
    tmp___3 = strlen((char const   *)result___0);
# 876
    o = variable_buffer_output(o, result___0, tmp___3);
# 877
    o = variable_buffer_output(o, " ", 1U);
# 878
    doneany = 1;
# 879
    free((void *)result___0);
    }
  }
# 882
  if (doneany) {
    {
# 884
    o --;
    }
  }
  {
# 886
  pop_variable_scope();
# 887
  free((void *)varname);
# 888
  free((void *)list);
  }
# 890
  return (o);
}
}
# 902
static unsigned long a_word_hash_1(void const   *key ) 
{ unsigned long _result_ ;
  unsigned char const   *_key_ ;

  {
# 906
  while (1) {
    {
# 906
    _result_ = 0UL;
    }
# 906
    while (1) {
      {
# 906
      _key_ = (unsigned char const   *)((struct a_word  const  *)key)->str - 1;
      }
# 906
      while (1) {
        {
# 906
        _key_ ++;
        }
# 906
        if (! (*_key_)) {
# 906
          break;
        }
        {
# 906
        _result_ += (unsigned long )((int const   )(*_key_) <<
                                     ((int const   )(*(_key_ + 1)) & 15));
        }
      }
# 906
      break;
    }
# 906
    return (_result_);
# 906
    break;
  }
# 907
  return (0UL);
}
}
# 909
static unsigned long a_word_hash_2(void const   *key ) 
{ unsigned long _result_ ;
  unsigned char const   *_key_ ;

  {
# 913
  while (1) {
    {
# 913
    _result_ = 0UL;
    }
# 913
    while (1) {
      {
# 913
      _key_ = (unsigned char const   *)((struct a_word  const  *)key)->str - 1;
      }
# 913
      while (1) {
        {
# 913
        _key_ ++;
        }
# 913
        if (! (*_key_)) {
# 913
          break;
        }
        {
# 913
        _result_ += (unsigned long )((int const   )(*_key_) <<
                                     ((int const   )(*(_key_ + 1)) & 7));
        }
      }
# 913
      break;
    }
# 913
    return (_result_);
# 913
    break;
  }
# 914
  return (0UL);
}
}
# 916
static int a_word_hash_cmp(void const   *x , void const   *y ) 
{ int result___0 ;
  int tmp ;

  {
  {
# 921
  result___0 = ((struct a_word  const  *)x)->length -
               ((struct a_word  const  *)y)->length;
  }
# 922
  if (result___0) {
# 923
    return (result___0);
  }
# 924
  while (1) {
    {
# 924
    tmp = strcmp((char const   *)((struct a_word  const  *)x)->str,
                 (char const   *)((struct a_word  const  *)y)->str);
    }
# 924
    return (tmp);
# 924
    break;
  }
# 926
  return (0);
}
}
# 937
static char *func_filter_filterout(char *o , char **argv ,
                                   char const   *funcname ) 
{ struct a_word *wordhead ;
  struct a_word **wordtail ;
  struct a_word *wp ;
  struct a_pattern *pathead ;
  struct a_pattern **pattail ;
  struct a_pattern *pp ;
  struct hash_table a_word_table ;
  int is_filter ;
  int tmp ;
  int tmp___0 ;
  char *pat_iterator ;
  char *word_iterator ;
  int literals ;
  int words ;
  int hashing ;
  char *p ;
  unsigned int len ;
  struct a_pattern *pat ;
  struct a_pattern *tmp___1 ;
  struct a_word *word ;
  struct a_word *tmp___2 ;
  int tmp___3 ;
  struct a_word *owp ;
  struct a_word *tmp___4 ;
  int doneany ;
  int tmp___5 ;
  struct a_word a_word_key ;
  int tmp___7 ;
  int tmp___8 ;
  unsigned int tmp___9 ;
  int tmp___10 ;

  {
# 951
  if ((unsigned int )funcname == (unsigned int )"filter") {
    {
# 951
    tmp___0 = 1;
    }
  } else {
# 951
    if ((int const   )(*funcname) == (int const   )(*"filter")) {
# 951
      if ((int const   )(*funcname) == 0) {
        {
# 951
        tmp___0 = 1;
        }
      } else {
        {
# 951
        tmp = strcmp(funcname + 1, (char const   *)("filter" + 1));
        }
# 951
        if (tmp) {
          {
# 951
          tmp___0 = 0;
          }
        } else {
          {
# 951
          tmp___0 = 1;
          }
        }
      }
    } else {
      {
# 951
      tmp___0 = 0;
      }
    }
  }
  {
# 951
  is_filter = tmp___0;
# 952
  pat_iterator = (*(argv + 0));
# 953
  word_iterator = (*(argv + 1));
# 954
  literals = 0;
# 955
  words = 0;
# 956
  hashing = 0;
# 962
  pattail = & pathead;
  }
# 963
  while (1) {
    {
# 963
    p = find_next_token(& pat_iterator, & len);
    }
# 963
    if (! ((unsigned int )p != (unsigned int )((char *)0))) {
# 963
      break;
    }
    {
# 965
    tmp___1 = (struct a_pattern *)__builtin_alloca(sizeof(struct a_pattern ));
# 965
    pat = tmp___1;
# 967
    (*pattail) = pat;
# 968
    pattail = & pat->next;
    }
# 970
    if ((int )(*pat_iterator) != 0) {
      {
# 971
      pat_iterator ++;
      }
    }
    {
# 973
    pat->str = p;
# 974
    pat->length = (int )len;
# 975
    pat->save_c = (int )(*(p + len));
# 976
    (*(p + len)) = '\0';
# 977
    pat->percent = find_percent(p);
    }
# 978
    if ((unsigned int )pat->percent == (unsigned int )((char *)0)) {
      {
# 979
      literals ++;
      }
    }
  }
  {
# 981
  (*pattail) = (struct a_pattern *)0;
# 985
  wordtail = & wordhead;
  }
# 986
  while (1) {
    {
# 986
    p = find_next_token(& word_iterator, & len);
    }
# 986
    if (! ((unsigned int )p != (unsigned int )((char *)0))) {
# 986
      break;
    }
    {
# 988
    tmp___2 = (struct a_word *)__builtin_alloca(sizeof(struct a_word ));
# 988
    word = tmp___2;
# 990
    (*wordtail) = word;
# 991
    wordtail = & word->next;
    }
# 993
    if ((int )(*word_iterator) != 0) {
      {
# 994
      word_iterator ++;
      }
    }
    {
# 996
    (*(p + len)) = '\0';
# 997
    word->str = p;
# 998
    word->length = (int )len;
# 999
    word->matched = 0;
# 1000
    word->chain = (struct a_word *)0;
# 1001
    words ++;
    }
  }
  {
# 1003
  (*wordtail) = (struct a_word *)0;
  }
# 1006
  if (literals >= 2) {
# 1006
    if (literals * words >= 10) {
      {
# 1006
      tmp___3 = 1;
      }
    } else {
      {
# 1006
      tmp___3 = 0;
      }
    }
  } else {
    {
# 1006
    tmp___3 = 0;
    }
  }
  {
# 1006
  hashing = tmp___3;
  }
# 1007
  if (hashing) {
    {
# 1009
    hash_init(& a_word_table, (unsigned long )words, & a_word_hash_1,
              & a_word_hash_2, & a_word_hash_cmp);
# 1010
    wp = wordhead;
    }
# 1010
    while ((unsigned int )wp != (unsigned int )((struct a_word *)0)) {
      {
# 1012
      tmp___4 = (struct a_word *)hash_insert(& a_word_table, (void *)wp);
# 1012
      owp = tmp___4;
      }
# 1013
      if (owp) {
        {
# 1014
        wp->chain = owp;
        }
      }
      {
# 1010
      wp = wp->next;
      }
    }
  }
# 1018
  if (words) {
    {
# 1020
    doneany = 0;
# 1023
    pp = pathead;
    }
# 1023
    while ((unsigned int )pp != (unsigned int )((struct a_pattern *)0)) {
# 1025
      if (pp->percent) {
        {
# 1026
        wp = wordhead;
        }
# 1026
        while ((unsigned int )wp != (unsigned int )((struct a_word *)0)) {
          {
# 1027
          tmp___5 = pattern_matches(pp->str, pp->percent, wp->str);
# 1027
          wp->matched |= tmp___5;
# 1026
          wp = wp->next;
          }
        }
      } else {
# 1028
        if (hashing) {
          {
# 1031
          a_word_key.str = pp->str;
# 1032
          a_word_key.length = pp->length;
# 1033
          wp = (struct a_word *)hash_find_item(& a_word_table,
                                               (void const   *)(& a_word_key));
          }
# 1034
          while (wp) {
            {
# 1036
            wp->matched |= 1;
# 1037
            wp = wp->chain;
            }
          }
        } else {
          {
# 1041
          wp = wordhead;
          }
# 1041
          while ((unsigned int )wp != (unsigned int )((struct a_word *)0)) {
# 1042
            if (wp->length == pp->length) {
              {
# 1042
              tmp___7 = strncmp((char const   *)pp->str,
                                (char const   *)wp->str,
                                (unsigned int )wp->length);
              }
# 1042
              if (tmp___7 == 0) {
                {
# 1042
                tmp___8 = 1;
                }
              } else {
                {
# 1042
                tmp___8 = 0;
                }
              }
            } else {
              {
# 1042
              tmp___8 = 0;
              }
            }
            {
# 1042
            wp->matched |= tmp___8;
# 1041
            wp = wp->next;
            }
          }
        }
      }
      {
# 1023
      pp = pp->next;
      }
    }
    {
# 1047
    wp = wordhead;
    }
# 1047
    while ((unsigned int )wp != (unsigned int )((struct a_word *)0)) {
# 1048
      if (is_filter) {
        {
# 1048
        tmp___10 = wp->matched;
        }
      } else {
        {
# 1048
        tmp___10 = ! wp->matched != 0;
        }
      }
# 1048
      if (tmp___10) {
        {
# 1050
        tmp___9 = strlen((char const   *)wp->str);
# 1050
        o = variable_buffer_output(o, wp->str, tmp___9);
# 1051
        o = variable_buffer_output(o, " ", 1U);
# 1052
        doneany = 1;
        }
      }
      {
# 1047
      wp = wp->next;
      }
    }
# 1055
    if (doneany) {
      {
# 1057
      o --;
      }
    }
  }
  {
# 1060
  pp = pathead;
  }
# 1060
  while ((unsigned int )pp != (unsigned int )((struct a_pattern *)0)) {
    {
# 1061
    (*(pp->str + pp->length)) = (char )pp->save_c;
# 1060
    pp = pp->next;
    }
  }
# 1063
  if (hashing) {
    {
# 1064
    hash_free(& a_word_table, 0);
    }
  }
# 1066
  return (o);
}
}
# 1070
static char *func_strip(char *o , char **argv , char const   *funcname ) 
{ char *p ;
  int doneany ;
  int i ;
  char *word_start ;
  int tmp ;
  int tmp___0 ;

  {
  {
# 1076
  p = (*(argv + 0));
# 1077
  doneany = 0;
  }
# 1079
  while ((int )(*p) != 0) {
    {
# 1081
    i = 0;
# 1082
    word_start = (char *)0;
    }
# 1084
    while (1) {
      {
# 1084
      tmp = _get__ctype_b((int )((unsigned char )(*p)));
      }
# 1084
      if (! (tmp & 8192)) {
# 1084
        break;
      }
      {
# 1085
      p ++;
      }
    }
    {
# 1086
    word_start = p;
# 1087
    i = 0;
    }
# 1087
    while (1) {
# 1087
      if ((int )(*p) != 0) {
        {
# 1087
        tmp___0 = _get__ctype_b((int )((unsigned char )(*p)));
        }
# 1087
        if (tmp___0 & 8192) {
# 1087
          break;
        }
      } else {
# 1087
        break;
      }
      {
# 1087
      p ++;
# 1087
      i ++;
      }
    }
# 1089
    if (! i) {
# 1090
      break;
    }
    {
# 1091
    o = variable_buffer_output(o, word_start, (unsigned int )i);
# 1092
    o = variable_buffer_output(o, " ", 1U);
# 1093
    doneany = 1;
    }
  }
# 1096
  if (doneany) {
    {
# 1098
    o --;
    }
  }
# 1099
  return (o);
}
}
# 1105
static char *func_error(char *o , char **argv , char const   *funcname ) 
{ char **argvp ;
  char *msg ;
  char *p ;
  int len ;
  size_t tmp ;
  size_t tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;

  {
  {
# 1118
  len = 0;
# 1118
  argvp = argv;
  }
# 1118
  while ((unsigned int )(*argvp) != (unsigned int )((char *)0)) {
    {
# 1119
    tmp = strlen((char const   *)(*argvp));
# 1119
    len = (int )((unsigned int )len + (tmp + 2U));
# 1118
    argvp ++;
    }
  }
  {
# 1121
  msg = (char *)__builtin_alloca(len + 1);
# 1121
  p = msg;
# 1123
  argvp = argv;
  }
# 1123
  while ((unsigned int )(*(argvp + 1)) != (unsigned int )((char *)0)) {
    {
# 1125
    strcpy((char */* __restrict  */)p,
           (char const   */* __restrict  */)((char const   *)(*argvp)));
# 1126
    tmp___1 = strlen((char const   *)(*argvp));
# 1126
    p += tmp___1;
# 1127
    tmp___2 = p;
# 1127
    p ++;
# 1127
    (*tmp___2) = ',';
# 1128
    tmp___3 = p;
# 1128
    p ++;
# 1128
    (*tmp___3) = ' ';
# 1123
    argvp ++;
    }
  }
  {
# 1130
  strcpy((char */* __restrict  */)p,
         (char const   */* __restrict  */)((char const   *)(*argvp)));
  }
# 1132
  if ((int const   )(*funcname) == 101) {
    {
# 1133
    fatal(reading_file, (char const   *)"%s", msg);
    }
  }
  {
# 1136
  error(reading_file, (char const   *)"%s", msg);
  }
# 1138
  return (o);
}
}
# 1145
static char *func_sort(char *o , char **argv , char const   *funcname ) 
{ char **words ;
  int nwords ;
  register int wordi ;
  char *t ;
  char *p ;
  unsigned int len ;
  int i ;
  int tmp___0 ;
  size_t tmp___1 ;
  int tmp___2 ;

  {
  {
# 1151
  words = (char **)0;
# 1152
  nwords = 0;
# 1153
  wordi = 0;
# 1156
  t = (*(argv + 0));
  }
# 1161
  while (1) {
    {
# 1161
    p = find_next_token(& t, & len);
    }
# 1161
    if (! ((unsigned int )p != (unsigned int )((char *)0))) {
# 1161
      break;
    }
# 1163
    if (wordi >= nwords - 1) {
      {
# 1165
      nwords = 2 * nwords + 5;
# 1166
      words = (char **)xrealloc((char *)words, (unsigned int )nwords *
                                               sizeof(char *));
      }
    }
    {
# 1169
    tmp___0 = wordi;
# 1169
    wordi ++;
# 1169
    (*(words + tmp___0)) = savestring((char const   *)p, len);
    }
  }
# 1172
  if (! wordi) {
# 1173
    return (o);
  }
  {
# 1176
  qsort((void *)((char *)words), (unsigned int )wordi, sizeof(char *),
        (int (*)(void const   * __attribute__((__safe__)) left ,
                 void const   * __attribute__((__safe__)) right ))(& alpha_compare));
# 1179
  i = 0;
  }
# 1179
  while (i < wordi) {
    {
# 1181
    len = strlen((char const   *)(*(words + i)));
    }
# 1182
    if (i == wordi - 1) {
      {
# 1185
      o = variable_buffer_output(o, (*(words + i)), len);
# 1186
      o = variable_buffer_output(o, " ", 1U);
      }
    } else {
      {
# 1182
      tmp___1 = strlen((char const   *)(*(words + (i + 1))));
      }
# 1182
      if (tmp___1 != len) {
        {
# 1185
        o = variable_buffer_output(o, (*(words + i)), len);
# 1186
        o = variable_buffer_output(o, " ", 1U);
        }
      } else {
        {
# 1182
        tmp___2 = strcmp((char const   *)(*(words + i)),
                         (char const   *)(*(words + (i + 1))));
        }
# 1182
        if (tmp___2) {
          {
# 1185
          o = variable_buffer_output(o, (*(words + i)), len);
# 1186
          o = variable_buffer_output(o, " ", 1U);
          }
        }
      }
    }
    {
# 1188
    free((void *)(*(words + i)));
# 1179
    i ++;
    }
  }
  {
# 1191
  o --;
# 1193
  free((void *)words);
  }
# 1195
  return (o);
}
}
# 1210
static char *func_if(char *o , char **argv , char const   *funcname ) 
{ char *begp ;
  char *endp ;
  size_t tmp ;
  int result___0 ;
  char *expansion ;
  char *tmp___0 ;
  char *expansion___0 ;
  unsigned int tmp___1 ;

  {
  {
# 1216
  begp = (*(argv + 0));
# 1217
  tmp = strlen((char const   *)(*(argv + 0)));
# 1217
  endp = begp + tmp;
# 1218
  result___0 = 0;
# 1224
  strip_whitespace(& begp, & endp);
  }
# 1226
  if ((unsigned int )begp < (unsigned int )endp) {
    {
# 1228
    tmp___0 = expand_argument(begp, (char *)((void *)0));
# 1228
    expansion = tmp___0;
# 1230
    result___0 = (int )strlen((char const   *)expansion);
# 1231
    free((void *)expansion);
    }
  }
  {
# 1238
  argv += 1 + (! result___0 != 0);
  }
# 1240
  if ((*(argv + 0))) {
    {
# 1244
    expansion___0 = expand_argument((*(argv + 0)), (char *)((void *)0));
# 1246
    tmp___1 = strlen((char const   *)expansion___0);
# 1246
    o = variable_buffer_output(o, expansion___0, tmp___1);
# 1248
    free((void *)expansion___0);
    }
  }
# 1251
  return (o);
}
}
# 1254
static char *func_wildcard(char *o , char **argv , char const   *funcname ) 
{ char *p ;
  char *tmp ;
  unsigned int tmp___0 ;

  {
  {
# 1264
  tmp = string_glob((*(argv + 0)));
# 1264
  p = tmp;
# 1265
  tmp___0 = strlen((char const   *)p);
# 1265
  o = variable_buffer_output(o, p, tmp___0);
  }
# 1267
  return (o);
}
}
# 1278
static char *func_eval(char *o , char **argv , char const   *funcname ) 
{ 

  {
  {
# 1284
  eval_buffer((*(argv + 0)));
  }
# 1286
  return (o);
}
}
# 1290
static char *func_value(char *o , char **argv , char const   *funcname ) 
{ struct variable *v ;
  unsigned int tmp ;
  struct variable *tmp___0 ;
  unsigned int tmp___1 ;

  {
  {
# 1297
  tmp = strlen((char const   *)(*(argv + 0)));
# 1297
  tmp___0 = lookup_variable((char const   *)(*(argv + 0)), tmp);
# 1297
  v = tmp___0;
  }
# 1300
  if (v) {
    {
# 1301
    tmp___1 = strlen((char const   *)v->value);
# 1301
    o = variable_buffer_output(o, v->value, tmp___1);
    }
  }
# 1303
  return (o);
}
}
# 1309
void fold_newlines(char *buffer , int *length___0 ) 
{ char *dst ;
  char *src ;
  char *last_nonnl ;
  char *tmp ;
  char *tmp___0 ;

  {
  {
# 1314
  dst = buffer;
# 1315
  src = buffer;
# 1316
  last_nonnl = buffer - 1;
# 1317
  (*(src + (*length___0))) = (char )0;
  }
# 1318
  while ((int )(*src) != 0) {
# 1320
    if ((int )(*(src + 0)) == 13) {
# 1320
      if ((int )(*(src + 1)) == 10) {
        goto __Cont;
      }
    }
# 1322
    if ((int )(*src) == 10) {
      {
# 1324
      tmp = dst;
# 1324
      dst ++;
# 1324
      (*tmp) = ' ';
      }
    } else {
      {
# 1328
      last_nonnl = dst;
# 1329
      tmp___0 = dst;
# 1329
      dst ++;
# 1329
      (*tmp___0) = (*src);
      }
    }
    __Cont: 
    {
# 1318
    src ++;
    }
  }
  {
# 1332
  last_nonnl ++;
# 1332
  (*last_nonnl) = '\0';
# 1333
  (*length___0) = last_nonnl - buffer;
  }
# 1334
  return;
}
}
# 1338
int shell_function_pid   = 0;
# 1338
int shell_function_completed  ;
# 1495
static char *func_shell(char *o , char **argv , char const   *funcname ) 
{ char *batch_filename ;
  int i ;
  char **command_argv ;
  char *error_prefix ;
  char **envp ;
  int pipedes[2] ;
  int pid ;
  size_t tmp ;
  int tmp___1 ;
  char *buffer ;
  unsigned int maxlen ;
  int cc ;
  char *tmp___2 ;
  char *tmp___3 ;
  char const   * __restrict  tmp___4 ;
  FILE *tmp___5 ;
  FILE * __restrict  tmp___6 ;
  FILE *tmp___7 ;

  {
  {
# 1501
  batch_filename = (char *)((void *)0);
# 1515
  command_argv = construct_command_argv((*(argv + 0)), (char **)((void *)0),
                                        (struct file *)0, & batch_filename);
  }
# 1518
  if ((unsigned int )command_argv == (unsigned int )((char **)0)) {
# 1519
    return (o);
  }
  {
# 1529
  envp = environ;
  }
# 1532
  if ((unsigned int )reading_file != (unsigned int )((struct floc  const  *)0)) {
    {
# 1534
    tmp = strlen((char const   *)reading_file->filenm);
# 1534
    error_prefix = (char *)__builtin_alloca((tmp + 11U) + 4U);
# 1535
    sprintf((char */* __restrict  */)error_prefix,
            (char const   */* __restrict  */)((char const   *)"%s:%lu: "),
            reading_file->filenm, reading_file->lineno);
    }
  } else {
    {
# 1539
    error_prefix = "";
    }
  }
  {
# 1560
  tmp___1 = pipe(pipedes);
  }
# 1560
  if (tmp___1 < 0) {
    {
# 1562
    perror_with_name((char const   *)error_prefix, (char const   *)"pipe");
    }
# 1563
    return (o);
  }
  {
# 1566
  pid = vfork();
  }
# 1567
  if (pid < 0) {
    {
# 1568
    perror_with_name((char const   *)error_prefix, (char const   *)"fork");
    }
  } else {
# 1569
    if (pid == 0) {
      {
# 1570
      child_execute_job(0, pipedes[1], command_argv, envp);
      }
    } else {
      {
# 1583
      shell_function_pid = pid;
# 1585
      shell_function_completed = 0;
# 1588
      free((void *)(*(command_argv + 0)));
# 1589
      free((void *)((char *)command_argv));
# 1592
      close(pipedes[1]);
# 1597
      maxlen = 200U;
# 1598
      tmp___2 = xmalloc(maxlen + 1U);
# 1598
      buffer = tmp___2;
# 1601
      i = 0;
      }
# 1601
      while (1) {
# 1603
        if ((unsigned int )i == maxlen) {
          {
# 1605
          maxlen += 512U;
# 1606
          tmp___3 = xrealloc(buffer, maxlen + 1U);
# 1606
          buffer = tmp___3;
          }
        }
        {
# 1609
        cc = read(pipedes[0], (void *)(buffer + i), maxlen - (unsigned int )i);
        }
# 1610
        if (cc <= 0) {
# 1611
          break;
        }
        {
# 1601
        i += cc;
        }
      }
      {
# 1613
      (*(buffer + i)) = '\0';
# 1620
      close(pipedes[0]);
      }
# 1625
      while (shell_function_completed == 0) {
        {
# 1626
        reap_children(1, 0);
        }
      }
# 1628
      if (batch_filename) {
# 1629
        while (1) {
# 1629
          if (2 & db_level) {
            {
# 1629
            tmp___4 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                 (char const   *)"Cleaning up temporary batch file %s\n",
                                                                 5);
# 1629
            printf(tmp___4, batch_filename);
# 1629
            tmp___5 = get_stdout();
            {
# 105 "spec.work"
            tmp___5->__BLAST_FLAG = 1;
            {

            }
            }
# 1629 "function.c"
            fflush(tmp___5);
            }
          }
# 1629
          break;
        }
        {
# 1631
        remove((char const   *)batch_filename);
# 1632
        free((void *)batch_filename);
        }
      }
      {
# 1634
      shell_function_pid = 0;
      }
# 1640
      if (shell_function_completed == -1) {
        {
# 1645
        tmp___6 = (FILE */* __restrict  */)get_stderr();
        {
# 97 "spec.work"
        tmp___6->__BLAST_FLAG = 1;
        {

        }
        }

        {
# 40
        if (! (tmp___6->__BLAST_FLAG == 1)) {
# 42
          __error__();
        }
        {

        }
        }
# 1645 "function.c"
        fputs((char const   */* __restrict  */)((char const   *)buffer), tmp___6);
# 1646
        tmp___7 = get_stderr();
        {
# 97 "spec.work"
        tmp___7->__BLAST_FLAG = 1;
        {

        }
        }
# 1646 "function.c"
        fflush(tmp___7);
        }
      } else {
        {
# 1653
        fold_newlines(buffer, & i);
# 1654
        o = variable_buffer_output(o, buffer, (unsigned int )i);
        }
      }
      {
# 1657
      free((void *)buffer);
      }
    }
  }
# 1660
  return (o);
}
}
# 1796
static char *func_call(char *o , char **argv , char const   *funcname ) ;
# 1799
static struct function_table_entry function_table_init[28]   = 
# 1799
  {{(char const   *)"addprefix", (unsigned char )(sizeof("addprefix") - 1U),
    (unsigned char )2, (unsigned char )2, (char )1, & func_addsuffix_addprefix},
   {(char const   *)"addsuffix", (unsigned char )(sizeof("addsuffix") - 1U),
    (unsigned char )2, (unsigned char )2, (char )1, & func_addsuffix_addprefix},
   {(char const   *)"basename", (unsigned char )(sizeof("basename") - 1U),
    (unsigned char )0, (unsigned char )1, (char )1, & func_basename_dir},
   {(char const   *)"dir", (unsigned char )(sizeof("dir") - 1U),
    (unsigned char )0, (unsigned char )1, (char )1, & func_basename_dir},
   {(char const   *)"notdir", (unsigned char )(sizeof("notdir") - 1U),
    (unsigned char )0, (unsigned char )1, (char )1, & func_notdir_suffix},
   {(char const   *)"subst", (unsigned char )(sizeof("subst") - 1U),
    (unsigned char )3, (unsigned char )3, (char )1, & func_subst},
   {(char const   *)"suffix", (unsigned char )(sizeof("suffix") - 1U),
    (unsigned char )0, (unsigned char )1, (char )1, & func_notdir_suffix},
   {(char const   *)"filter", (unsigned char )(sizeof("filter") - 1U),
    (unsigned char )2, (unsigned char )2, (char )1, & func_filter_filterout},
   {(char const   *)"filter-out", (unsigned char )(sizeof("filter-out") - 1U),
    (unsigned char )2, (unsigned char )2, (char )1, & func_filter_filterout},
   {(char const   *)"findstring", (unsigned char )(sizeof("findstring") - 1U),
    (unsigned char )2, (unsigned char )2, (char )1, & func_findstring},
   {(char const   *)"firstword", (unsigned char )(sizeof("firstword") - 1U),
    (unsigned char )0, (unsigned char )1, (char )1, & func_firstword},
   {(char const   *)"join", (unsigned char )(sizeof("join") - 1U),
    (unsigned char )2, (unsigned char )2, (char )1, & func_join},
   {(char const   *)"patsubst", (unsigned char )(sizeof("patsubst") - 1U),
    (unsigned char )3, (unsigned char )3, (char )1, & func_patsubst},
   {(char const   *)"shell", (unsigned char )(sizeof("shell") - 1U),
    (unsigned char )0, (unsigned char )1, (char )1, & func_shell},
   {(char const   *)"sort", (unsigned char )(sizeof("sort") - 1U),
    (unsigned char )0, (unsigned char )1, (char )1, & func_sort},
   {(char const   *)"strip", (unsigned char )(sizeof("strip") - 1U),
    (unsigned char )0, (unsigned char )1, (char )1, & func_strip},
   {(char const   *)"wildcard", (unsigned char )(sizeof("wildcard") - 1U),
    (unsigned char )0, (unsigned char )1, (char )1, & func_wildcard},
   {(char const   *)"word", (unsigned char )(sizeof("word") - 1U),
    (unsigned char )2, (unsigned char )2, (char )1, & func_word},
   {(char const   *)"wordlist", (unsigned char )(sizeof("wordlist") - 1U),
    (unsigned char )3, (unsigned char )3, (char )1, & func_wordlist},
   {(char const   *)"words", (unsigned char )(sizeof("words") - 1U),
    (unsigned char )0, (unsigned char )1, (char )1, & func_words},
   {(char const   *)"origin", (unsigned char )(sizeof("origin") - 1U),
    (unsigned char )0, (unsigned char )1, (char )1, & func_origin},
   {(char const   *)"foreach", (unsigned char )(sizeof("foreach") - 1U),
    (unsigned char )3, (unsigned char )3, (char )0, & func_foreach},
   {(char const   *)"call", (unsigned char )(sizeof("call") - 1U),
    (unsigned char )1, (unsigned char )0, (char )1, & func_call},
   {(char const   *)"error", (unsigned char )(sizeof("error") - 1U),
    (unsigned char )0, (unsigned char )1, (char )1, & func_error},
   {(char const   *)"warning", (unsigned char )(sizeof("warning") - 1U),
    (unsigned char )0, (unsigned char )1, (char )1, & func_error},
   {(char const   *)"if", (unsigned char )(sizeof("if") - 1U),
    (unsigned char )2, (unsigned char )3, (char )0, & func_if},
   {(char const   *)"value", (unsigned char )(sizeof("value") - 1U),
    (unsigned char )0, (unsigned char )1, (char )1, & func_value},
   {(char const   *)"eval", (unsigned char )(sizeof("eval") - 1U),
    (unsigned char )0, (unsigned char )1, (char )1, & func_eval}};
# 1841
static char *expand_builtin_function(char *o , int argc , char **argv ,
                                     struct function_table_entry *entry_p ) 
{ char const   *tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;

  {
# 1848
  if (argc < (int )entry_p->minimum_args) {
    {
# 1849
    tmp = (char const   *)dcgettext((char const   *)((void *)0),
                                    (char const   *)"Insufficient number of arguments (%d) to function `%s\'",
                                    5);
# 1849
    fatal(reading_file, tmp, argc, entry_p->name);
    }
  }
# 1857
  if (! argc) {
# 1858
    return (o);
  }
# 1860
  if (! entry_p->func_ptr) {
    {
# 1861
    tmp___0 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"Unimplemented on this platform: function `%s\'",
                                        5);
# 1861
    fatal(reading_file, tmp___0, entry_p->name);
    }
  }
  {
# 1864
  tmp___1 = ((*(entry_p->func_ptr)))(o, argv, entry_p->name);
  }
# 1864
  return (tmp___1);
}
}
# 1872
int handle_function(char **op , char **stringp ) 
{ struct function_table_entry  const  *entry_p ;
  char openparen ;
  char closeparen ;
  int tmp ;
  char *beg ;
  char *end ;
  int count ;
  register char *p ;
  char **argv ;
  char **argvp ;
  int nargs ;
  char const   *tmp___0 ;
  int len ;
  char *next ;

  {
  {
# 1878
  openparen = (*((*stringp) + 0));
  }
# 1879
  if ((int )openparen == 40) {
    {
# 1879
    tmp = (int )')';
    }
  } else {
    {
# 1879
    tmp = (int )'}';
    }
  }
  {
# 1879
  closeparen = (char )tmp;
# 1882
  count = 0;
# 1887
  beg = (*stringp) + 1;
# 1889
  entry_p = lookup_function((char const   *)beg);
  }
# 1891
  if (! entry_p) {
# 1892
    return (0);
  }
  {
# 1897
  beg = next_token((char const   *)(beg + (int )entry_p->len));
# 1904
  nargs = 1;
# 1904
  end = beg;
  }
# 1904
  while ((int )(*end) != 0) {
# 1905
    if ((int )(*end) == 44) {
      {
# 1906
      nargs ++;
      }
    } else {
# 1907
      if ((int )(*end) == (int )openparen) {
        {
# 1908
        count ++;
        }
      } else {
# 1909
        if ((int )(*end) == (int )closeparen) {
          {
# 1909
          count --;
          }
# 1909
          if (count < 0) {
# 1910
            break;
          }
        }
      }
    }
    {
# 1904
    end ++;
    }
  }
# 1912
  if (count >= 0) {
    {
# 1913
    tmp___0 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"unterminated call to function `%s\': missing `%c\'",
                                        5);
# 1913
    fatal(reading_file, tmp___0, entry_p->name, closeparen);
    }
  }
  {
# 1917
  (*stringp) = end;
# 1920
  argv = (char **)__builtin_alloca(sizeof(char *) * (unsigned int )(nargs + 2));
# 1920
  argvp = argv;
  }
# 1930
  if (! entry_p->expand_args) {
    {
# 1932
    len = end - beg;
# 1934
    p = xmalloc((unsigned int )(len + 1));
# 1935
    memcpy((void */* __restrict  */)((void *)p),
           (void const   */* __restrict  */)((void const   *)beg),
           (unsigned int )len);
# 1936
    (*(p + len)) = '\0';
# 1937
    beg = p;
# 1938
    end = beg + len;
    }
  }
  {
# 1941
  p = beg;
# 1941
  nargs = 0;
  }
# 1941
  while ((unsigned int )p <= (unsigned int )end) {
    {
# 1945
    nargs ++;
    }
# 1947
    if (nargs == (int )entry_p->maximum_args) {
      {
# 1949
      next = end;
      }
    } else {
      {
# 1947
      next = find_next_argument(openparen, closeparen, (char const   *)p,
                                (char const   *)end);
      }
# 1947
      if (! next) {
        {
# 1949
        next = end;
        }
      }
    }
# 1951
    if (entry_p->expand_args) {
      {
# 1952
      (*argvp) = expand_argument(p, next);
      }
    } else {
      {
# 1955
      (*argvp) = p;
# 1956
      (*next) = '\0';
      }
    }
    {
# 1959
    p = next + 1;
# 1941
    argvp ++;
    }
  }
  {
# 1961
  (*argvp) = (char *)((void *)0);
# 1964
  (*op) = expand_builtin_function((*op), nargs, argv,
                                  (struct function_table_entry *)entry_p);
  }
# 1967
  if (entry_p->expand_args) {
    {
# 1968
    argvp = argv;
    }
# 1968
    while ((unsigned int )(*argvp) != (unsigned int )((char *)0)) {
      {
# 1969
      free((void *)(*argvp));
# 1968
      argvp ++;
      }
    }
  } else {
    {
# 1971
    free((void *)beg);
    }
  }
# 1973
  return (1);
}
}
# 1981
static char *func_call(char *o , char **argv , char const   *funcname ) 
{ char *fname ;
  char *cp ;
  char *body ;
  int flen ;
  int i ;
  struct function_table_entry  const  *entry_p ;
  struct variable *v ;
  int tmp ;
  size_t tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;
  char const   *tmp___3 ;
  char num[11] ;
  unsigned int tmp___5 ;
  size_t tmp___6 ;

  {
  {
# 1997
  fname = (*(argv + 0));
  }
# 1998
  while (1) {
# 1998
    if ((int )(*fname) != 0) {
      {
# 1998
      tmp = _get__ctype_b((int )((unsigned char )(*fname)));
      }
# 1998
      if (! (tmp & 8192)) {
# 1998
        break;
      }
    } else {
# 1998
      break;
    }
    {
# 1999
    fname ++;
    }
  }
  {
# 2001
  tmp___0 = strlen((char const   *)fname);
# 2001
  cp = (fname + tmp___0) - 1;
  }
# 2002
  while (1) {
# 2002
    if ((unsigned int )cp > (unsigned int )fname) {
      {
# 2002
      tmp___1 = _get__ctype_b((int )((unsigned char )(*cp)));
      }
# 2002
      if (! (tmp___1 & 8192)) {
# 2002
        break;
      }
    } else {
# 2002
      break;
    }
    {
# 2003
    cp --;
    }
  }
  {
# 2004
  (*(cp + 1)) = '\0';
  }
# 2007
  if ((int )(*fname) == 0) {
# 2008
    return (o);
  }
  {
# 2012
  entry_p = lookup_function((char const   *)fname);
  }
# 2014
  if (entry_p) {
    {
# 2017
    i = 0;
    }
# 2017
    while ((*(argv + (i + 1)))) {
      {
# 2017
      i ++;
      }
    }
    {
# 2020
    tmp___2 = expand_builtin_function(o, i, argv + 1,
                                      (struct function_table_entry *)entry_p);
    }
# 2020
    return (tmp___2);
  }
  {
# 2025
  flen = (int )strlen((char const   *)fname);
# 2027
  v = lookup_variable((char const   *)fname, (unsigned int )flen);
  }
# 2029
  if ((unsigned int )v == (unsigned int )((struct variable *)0)) {
# 2030
    while (1) {
# 2030
      if (warn_undefined_variables_flag) {
        {
# 2030
        tmp___3 = (char const   *)dcgettext((char const   *)((void *)0),
                                            (char const   *)"warning: undefined variable `%.*s\'",
                                            5);
# 2030
        error(reading_file, tmp___3, flen, fname);
        }
      }
# 2030
      break;
    }
  }
# 2032
  if ((unsigned int )v == (unsigned int )((struct variable *)0)) {
# 2033
    return (o);
  } else {
# 2032
    if ((int )(*(v->value)) == 0) {
# 2033
      return (o);
    }
  }
  {
# 2035
  body = (char *)__builtin_alloca(flen + 4);
# 2036
  (*(body + 0)) = '$';
# 2037
  (*(body + 1)) = '(';
# 2038
  memcpy((void */* __restrict  */)((void *)(body + 2)),
         (void const   */* __restrict  */)((void const   *)fname),
         (unsigned int )flen);
# 2039
  (*(body + (flen + 2))) = ')';
# 2040
  (*(body + (flen + 3))) = '\0';
# 2044
  push_new_variable_scope();
# 2046
  i = 0;
  }
# 2046
  while ((*argv)) {
    {
# 2050
    sprintf((char */* __restrict  */)(num),
            (char const   */* __restrict  */)((char const   *)"%d"), i);
# 2051
    tmp___5 = strlen((char const   *)(num));
# 2051
    define_variable_in_set((char const   *)(num), tmp___5, (*argv), 6, 0,
                           current_variable_set_list->set,
                           (struct floc  const  *)((struct floc *)0));
# 2046
    i ++;
# 2046
    argv ++;
    }
  }
  {
# 2057
  v->exp_count = 32767U;
# 2059
  o = variable_expand_string(o, body, (long )(flen + 3));
# 2061
  v->exp_count = 0U;
# 2063
  pop_variable_scope();
# 2065
  tmp___6 = strlen((char const   *)o);
  }
# 2065
  return (o + tmp___6);
}
}
# 2068
void hash_init_function_table(void) 
{ 

  {
  {
# 2071
  hash_init(& function_table,
            (unsigned long )((sizeof(function_table_init) /
                              sizeof(struct function_table_entry )) * 2U),
            & function_table_entry_hash_1, & function_table_entry_hash_2,
            & function_table_entry_hash_cmp);
# 2074
  hash_load(& function_table, (void *)(function_table_init),
            (unsigned long )(sizeof(function_table_init) /
                             sizeof(struct function_table_entry )),
            (unsigned long )sizeof(struct function_table_entry ));
  }
# 2076
  return;
}
}
# 26 "implicit.c"
static int pattern_search(struct file *file , int archive , unsigned int depth ,
                          unsigned int recursions ) ;
# 35
int try_implicit_rule(struct file *file , unsigned int depth ) 
{ char const   * __restrict  tmp ;
  FILE *tmp___0 ;
  int tmp___1 ;
  char const   * __restrict  tmp___2 ;
  FILE *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
# 40
  while (1) {
# 40
    if (8 & db_level) {
      {
# 40
      print_spaces(depth);
# 40
      tmp = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                       (char const   *)"Looking for an implicit rule for `%s\'.\n",
                                                       5);
# 40
      printf(tmp, file->name);
# 40
      tmp___0 = get_stdout();
      {
# 105 "spec.work"
      tmp___0->__BLAST_FLAG = 1;
      {

      }
      }
# 40 "implicit.c"
      fflush(tmp___0);
      }
    }
# 40
    break;
  }
  {
# 47
  tmp___1 = pattern_search(file, 0, depth, 0U);
  }
# 47
  if (tmp___1) {
# 48
    return (1);
  }
  {
# 53
  tmp___5 = ar_name(file->name);
  }
# 53
  if (tmp___5) {
# 55
    while (1) {
# 55
      if (8 & db_level) {
        {
# 55
        print_spaces(depth);
# 55
        tmp___2 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                             (char const   *)"Looking for archive-member implicit rule for `%s\'.\n",
                                                             5);
# 55
        printf(tmp___2, file->name);
# 55
        tmp___3 = get_stdout();
        {
# 105 "spec.work"
        tmp___3->__BLAST_FLAG = 1;
        {

        }
        }
# 55 "implicit.c"
        fflush(tmp___3);
        }
      }
# 55
      break;
    }
    {
# 57
    tmp___4 = pattern_search(file, 1, depth, 0U);
    }
# 57
    if (tmp___4) {
# 58
      return (1);
    }
  }
# 62
  return (0);
}
}
# 80
static int pattern_search(struct file *file , int archive , unsigned int depth ,
                          unsigned int recursions ) 
{ char *filename ;
  char *tmp___0 ;
  unsigned int namelen ;
  unsigned int tmp___1 ;
  char *lastslash ;
  struct file *intermediate_file ;
  struct file **intermediate_files ;
  struct file **tmp___2 ;
  char **intermediate_patterns ;
  char **tmp___3 ;
  char **found_files ;
  char **tmp___4 ;
  unsigned int deps_found ;
  register char *depname ;
  char *tmp___5 ;
  register char *stem ;
  register unsigned int stemlen ;
  register unsigned int fullstemlen ;
  struct rule **tryrules ;
  struct rule **tmp___6 ;
  unsigned int nrules ;
  unsigned int *matches ;
  unsigned int *tmp___7 ;
  char *checked_lastslash ;
  char *tmp___8 ;
  unsigned int foundrule ;
  int intermed_ok ;
  int specific_rule_matched ;
  register unsigned int i ;
  register struct rule *rule ;
  register struct dep *dep ;
  char *p ;
  char *vp ;
  int tmp___9 ;
  char const   * __restrict  tmp___10 ;
  FILE *tmp___11 ;
  char *target ;
  char *suffix ;
  int check_lastslash ;
  char *tmp___12 ;
  int tmp___13 ;
  unsigned int difference ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  register unsigned int j ;
  int check_lastslash___0 ;
  char const   * __restrict  tmp___17 ;
  FILE *tmp___18 ;
  char *tmp___19 ;
  register unsigned int i___0 ;
  char *tmp___20 ;
  char *tmp___21 ;
  char *tmp___22 ;
  char *tmp___25 ;
  FILE *tmp___26 ;
  int tmp___27 ;
  char *tmp___30 ;
  FILE *tmp___31 ;
  unsigned int tmp___32 ;
  struct file *tmp___33 ;
  int tmp___34 ;
  char const   * __restrict  tmp___35 ;
  FILE *tmp___36 ;
  unsigned int tmp___37 ;
  int tmp___38 ;
  char const   * __restrict  tmp___40 ;
  FILE *tmp___41 ;
  int tmp___42 ;
  register struct file *f ;
  size_t tmp___43 ;
  unsigned int tmp___44 ;
  register char *s ;
  struct file *imf ;
  register struct file *f___0 ;
  struct file *tmp___45 ;
  unsigned int tmp___47 ;
  int dirlen ;
  char *tmp___48 ;
  struct dep *new ;
  struct dep *tmp___49 ;
  char *tmp___50 ;

  {
# 88
  if (archive) {
    {
# 88
    tmp___0 = strchr((char const   *)file->name, (int )'(');
    }
  } else {
    {
# 88
    tmp___0 = file->name;
    }
  }
  {
# 88
  filename = tmp___0;
# 91
  tmp___1 = strlen((char const   *)filename);
# 91
  namelen = tmp___1;
# 99
  intermediate_file = (struct file *)0;
# 102
  tmp___2 = (struct file **)xmalloc(max_pattern_deps * sizeof(struct file *));
# 102
  intermediate_files = tmp___2;
# 106
  tmp___3 = (char **)__builtin_alloca(max_pattern_deps * sizeof(char *));
# 106
  intermediate_patterns = tmp___3;
# 110
  tmp___4 = (char **)__builtin_alloca(max_pattern_deps * sizeof(char *));
# 110
  found_files = tmp___4;
# 112
  deps_found = 0U;
# 115
  tmp___5 = (char *)__builtin_alloca(namelen + max_pattern_dep_length);
# 115
  depname = tmp___5;
# 118
  stem = (char *)0;
# 119
  stemlen = 0U;
# 120
  fullstemlen = 0U;
# 123
  tmp___6 = (struct rule **)xmalloc((num_pattern_rules * max_pattern_targets) *
                                    sizeof(struct rule *));
# 123
  tryrules = tmp___6;
# 132
  tmp___7 = (unsigned int *)__builtin_alloca(num_pattern_rules *
                                             sizeof(unsigned int ));
# 132
  matches = tmp___7;
# 137
  tmp___8 = (char *)__builtin_alloca(num_pattern_rules * sizeof(char ));
# 137
  checked_lastslash = tmp___8;
# 148
  specific_rule_matched = 0;
# 150
  i = 0U;
  }
# 157
  if (archive) {
    {
# 158
    lastslash = (char *)0;
    }
  } else {
    {
# 157
    tmp___9 = ar_name(filename);
    }
# 157
    if (tmp___9) {
      {
# 158
      lastslash = (char *)0;
      }
    } else {
      {
# 170
      lastslash = strrchr((char const   *)filename, (int )'/');
      }
# 183
      if ((unsigned int )lastslash != (unsigned int )((char *)0)) {
# 183
        if ((int )(*(lastslash + 1)) == 0) {
          {
# 184
          lastslash = (char *)0;
          }
        }
      }
    }
  }
  {
# 190
  nrules = 0U;
# 191
  rule = pattern_rules;
  }
# 191
  while ((unsigned int )rule != (unsigned int )((struct rule *)0)) {
# 195
    if ((unsigned int )rule->deps != (unsigned int )((struct dep *)0)) {
# 195
      if ((unsigned int )rule->cmds == (unsigned int )((struct commands *)0)) {
        goto __Cont;
      }
    }
# 200
    if (rule->in_use) {
# 202
      while (1) {
# 202
        if (8 & db_level) {
          {
# 202
          print_spaces(depth);
# 202
          tmp___10 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                (char const   *)"Avoiding implicit rule recursion.\n",
                                                                5);
# 202
          printf(tmp___10);
# 202
          tmp___11 = get_stdout();
          {
# 105 "spec.work"
          tmp___11->__BLAST_FLAG = 1;
          {

          }
          }
# 202 "implicit.c"
          fflush(tmp___11);
          }
        }
# 202
        break;
      }
      goto __Cont;
    }
    {
# 206
    i = 0U;
    }
# 206
    while ((unsigned int )(*(rule->targets + i)) != (unsigned int )((char *)0)) {
      {
# 208
      target = (*(rule->targets + i));
# 209
      suffix = (*(rule->suffixes + i));
      }
# 215
      if (recursions > 0U) {
# 215
        if ((int )(*(target + 1)) == 0) {
# 215
          if (! rule->terminal) {
            goto __Cont___0;
          }
        }
      }
# 218
      if ((*(rule->lens + i)) > namelen) {
        goto __Cont___0;
      }
      {
# 224
      stem = filename + ((suffix - target) - 1);
# 225
      stemlen = (namelen - (*(rule->lens + i))) + 1U;
      }
# 235
      if ((unsigned int )lastslash != (unsigned int )((char *)0)) {
        {
# 235
        tmp___12 = strchr((char const   *)target, (int )'/');
        }
# 235
        if ((unsigned int )tmp___12 == (unsigned int )((char *)0)) {
          {
# 235
          tmp___13 = 1;
          }
        } else {
          {
# 235
          tmp___13 = 0;
          }
        }
      } else {
        {
# 235
        tmp___13 = 0;
        }
      }
      {
# 235
      check_lastslash = tmp___13;
      }
# 237
      if (check_lastslash) {
        {
# 241
        difference = (unsigned int )((lastslash - filename) + 1);
        }
# 242
        if (difference > stemlen) {
          goto __Cont___0;
        }
        {
# 244
        stemlen -= difference;
# 245
        stem += difference;
        }
      }
# 249
      if (check_lastslash) {
# 251
        if ((unsigned int )stem > (unsigned int )(lastslash + 1)) {
          {
# 251
          tmp___14 = strncmp((char const   *)target,
                             (char const   *)(lastslash + 1),
                             (unsigned int )((stem - lastslash) - 1));
          }
# 251
          if (! (tmp___14 == 0)) {
            goto __Cont___0;
          }
        }
      } else {
# 255
        if ((unsigned int )stem > (unsigned int )filename) {
          {
# 255
          tmp___15 = strncmp((char const   *)target, (char const   *)filename,
                             (unsigned int )(stem - filename));
          }
# 255
          if (! (tmp___15 == 0)) {
            goto __Cont___0;
          }
        }
      }
# 264
      if ((int )(*suffix) != (int )(*(stem + stemlen))) {
        goto __Cont___0;
      } else {
# 264
        if ((int )(*suffix) != 0) {
# 264
          if (! ((unsigned int )(suffix + 1) ==
                 (unsigned int )(stem + (stemlen + 1U)))) {
# 264
            if ((int )(*(suffix + 1)) == (int )(*(stem + (stemlen + 1U)))) {
# 264
              if (! ((int )(*(suffix + 1)) == 0)) {
                {
# 264
                tmp___16 = strcmp((char const   *)((suffix + 1) + 1),
                                  (char const   *)((stem + (stemlen + 1U)) + 1));
                }
# 264
                if (tmp___16) {
                  goto __Cont___0;
                }
              }
            } else {
              goto __Cont___0;
            }
          }
        }
      }
# 269
      if ((int )(*(target + 1)) != 0) {
        {
# 270
        specific_rule_matched = 1;
        }
      }
# 274
      if ((unsigned int )rule->deps == (unsigned int )((struct dep *)0)) {
# 274
        if ((unsigned int )rule->cmds == (unsigned int )((struct commands *)0)) {
          goto __Cont___0;
        }
      }
      {
# 280
      (*(tryrules + nrules)) = rule;
# 281
      (*(matches + nrules)) = i;
# 282
      (*(checked_lastslash + nrules)) = (char )check_lastslash;
# 283
      nrules ++;
      }
      __Cont___0: 
      {
# 206
      i ++;
      }
    }
    __Cont: 
    {
# 191
    rule = rule->next;
    }
  }
# 289
  if (specific_rule_matched) {
    {
# 290
    i = 0U;
    }
# 290
    while (i < nrules) {
# 291
      if (! ((*(tryrules + i)))->terminal) {
        {
# 294
        j = 0U;
        }
# 294
        while ((unsigned int )(*(((*(tryrules + i)))->targets + j)) !=
               (unsigned int )((char *)0)) {
# 295
          if ((int )(*((*(((*(tryrules + i)))->targets + j)) + 1)) == 0) {
# 296
            break;
          }
          {
# 294
          j ++;
          }
        }
# 297
        if ((unsigned int )(*(((*(tryrules + i)))->targets + j)) !=
            (unsigned int )((char *)0)) {
          {
# 298
          (*(tryrules + i)) = (struct rule *)0;
          }
        }
      }
      {
# 290
      i ++;
      }
    }
  }
  {
# 302
  intermed_ok = 0;
  }
# 302
  while (intermed_ok == (! (! intermed_ok) != 0)) {
    {
# 308
    i = 0U;
    }
# 308
    while (i < nrules) {
      {
# 312
      rule = (*(tryrules + i));
      }
# 316
      if ((unsigned int )rule == (unsigned int )((struct rule *)0)) {
        goto __Cont___1;
      }
# 321
      if (intermed_ok) {
# 321
        if (rule->terminal) {
          goto __Cont___1;
        }
      }
      {
# 326
      rule->in_use = (char )1;
# 330
      stem = (filename + ((*(rule->suffixes + (*(matches + i)))) -
                          (*(rule->targets + (*(matches + i)))))) - 1;
# 332
      stemlen = (namelen - (*(rule->lens + (*(matches + i))))) + 1U;
# 333
      check_lastslash___0 = (int )(*(checked_lastslash + i));
      }
# 334
      if (check_lastslash___0) {
        {
# 336
        stem += (lastslash - filename) + 1;
# 337
        stemlen -= (unsigned int )((lastslash - filename) + 1);
        }
      }
# 340
      while (1) {
# 340
        if (8 & db_level) {
          {
# 340
          print_spaces(depth);
# 340
          tmp___17 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                (char const   *)"Trying pattern rule with stem `%.*s\'.\n",
                                                                5);
# 340
          printf(tmp___17, (int )stemlen, stem);
# 340
          tmp___18 = get_stdout();
          {
# 105 "spec.work"
          tmp___18->__BLAST_FLAG = 1;
          {

          }
          }
# 340 "implicit.c"
          fflush(tmp___18);
          }
        }
# 340
        break;
      }
      {
# 345
      deps_found = 0U;
# 346
      dep = rule->deps;
      }
# 346
      while ((unsigned int )dep != (unsigned int )((struct dep *)0)) {
# 349
        if ((unsigned int )dep->name == (unsigned int )((char *)0)) {
          {
# 349
          tmp___19 = (dep->file)->name;
          }
        } else {
          {
# 349
          tmp___19 = dep->name;
          }
        }
        {
# 349
        p = strchr((char const   *)tmp___19, (int )'%');
        }
# 350
        if ((unsigned int )p != (unsigned int )((char *)0)) {
# 353
          if (check_lastslash___0) {
            {
# 356
            i___0 = (unsigned int )((lastslash - filename) + 1);
# 357
            memmove((void *)depname, (void const   *)filename, i___0);
            }
          } else {
            {
# 360
            i___0 = 0U;
            }
          }
# 361
          if ((unsigned int )dep->name == (unsigned int )((char *)0)) {
            {
# 361
            tmp___20 = (dep->file)->name;
            }
          } else {
            {
# 361
            tmp___20 = dep->name;
            }
          }
# 361
          if ((unsigned int )dep->name == (unsigned int )((char *)0)) {
            {
# 361
            tmp___21 = (dep->file)->name;
            }
          } else {
            {
# 361
            tmp___21 = dep->name;
            }
          }
          {
# 361
          memmove((void *)(depname + i___0), (void const   *)tmp___21,
                  (unsigned int )(p - tmp___20));
          }
# 362
          if ((unsigned int )dep->name == (unsigned int )((char *)0)) {
            {
# 362
            tmp___22 = (dep->file)->name;
            }
          } else {
            {
# 362
            tmp___22 = dep->name;
            }
          }
          {
# 362
          i___0 += (unsigned int )(p - tmp___22);
# 363
          memmove((void *)(depname + i___0), (void const   *)stem, stemlen);
# 364
          i___0 += stemlen;
# 365
          strcpy((char */* __restrict  */)(depname + i___0),
                 (char const   */* __restrict  */)((char const   *)(p + 1)));
# 366
          p = depname;
          }
        } else {
# 369
          if ((unsigned int )dep->name == (unsigned int )((char *)0)) {
            {
# 369
            p = (dep->file)->name;
            }
          } else {
            {
# 369
            p = dep->name;
            }
          }
        }
        {
# 373
        tmp___27 = file_impossible_p(p);
        }
# 373
        if (tmp___27) {
# 379
          while (1) {
# 379
            if (8 & db_level) {
              {
# 379
              print_spaces(depth);
              }
# 379
              if ((unsigned int )p == (unsigned int )depname) {
                {
# 379
                tmp___25 = dcgettext((char const   *)((void *)0),
                                     (char const   *)"Rejecting impossible implicit prerequisite `%s\'.\n",
                                     5);
                }
              } else {
                {
# 379
                tmp___25 = dcgettext((char const   *)((void *)0),
                                     (char const   *)"Rejecting impossible rule prerequisite `%s\'.\n",
                                     5);
                }
              }
              {
# 379
              printf((char const   */* __restrict  */)((char const   *)tmp___25),
                     p);
# 379
              tmp___26 = get_stdout();
              {
# 105 "spec.work"
              tmp___26->__BLAST_FLAG = 1;
              {

              }
              }
# 379 "implicit.c"
              fflush(tmp___26);
              }
            }
# 379
            break;
          }
          {
# 384
          (*(tryrules + i)) = (struct rule *)0;
          }
# 385
          break;
        }
        {
# 388
        (*(intermediate_files + deps_found)) = (struct file *)0;
        }
# 390
        while (1) {
# 390
          if (8 & db_level) {
            {
# 390
            print_spaces(depth);
            }
# 390
            if ((unsigned int )p == (unsigned int )depname) {
              {
# 390
              tmp___30 = dcgettext((char const   *)((void *)0),
                                   (char const   *)"Trying implicit prerequisite `%s\'.\n",
                                   5);
              }
            } else {
              {
# 390
              tmp___30 = dcgettext((char const   *)((void *)0),
                                   (char const   *)"Trying rule prerequisite `%s\'.\n",
                                   5);
              }
            }
            {
# 390
            printf((char const   */* __restrict  */)((char const   *)tmp___30),
                   p);
# 390
            tmp___31 = get_stdout();
            {
# 105 "spec.work"
            tmp___31->__BLAST_FLAG = 1;
            {

            }
            }
# 390 "implicit.c"
            fflush(tmp___31);
            }
          }
# 390
          break;
        }
        {
# 402
        tmp___33 = lookup_file(p);
        }
# 402
        if ((unsigned int )tmp___33 != (unsigned int )((struct file *)0)) {
          {
# 405
          tmp___32 = deps_found;
# 405
          deps_found ++;
# 405
          (*(found_files + tmp___32)) = xstrdup((char const   *)p);
          }
          goto __Cont___2;
        } else {
# 402
          if (dep->changed) {
# 402
            if (check_lastslash___0) {
              _L: 
              {
# 402
              tmp___34 = file_exists_p(p);
              }
# 402
              if (tmp___34) {
                {
# 405
                tmp___32 = deps_found;
# 405
                deps_found ++;
# 405
                (*(found_files + tmp___32)) = xstrdup((char const   *)p);
                }
                goto __Cont___2;
              }
            }
          } else {
            goto _L;
          }
        }
        {
# 410
        vp = p;
# 411
        tmp___38 = vpath_search(& vp, (uintmax_t *)0);
        }
# 411
        if (tmp___38) {
# 413
          while (1) {
# 413
            if (8 & db_level) {
              {
# 413
              print_spaces(depth);
# 413
              tmp___35 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                    (char const   *)"Found prerequisite `%s\' as VPATH `%s\'\n",
                                                                    5);
# 413
              printf(tmp___35, p, vp);
# 413
              tmp___36 = get_stdout();
              {
# 105 "spec.work"
              tmp___36->__BLAST_FLAG = 1;
              {

              }
              }
# 413 "implicit.c"
              fflush(tmp___36);
              }
            }
# 413
            break;
          }
          {
# 415
          strcpy((char */* __restrict  */)vp,
                 (char const   */* __restrict  */)((char const   *)p));
# 416
          tmp___37 = deps_found;
# 416
          deps_found ++;
# 416
          (*(found_files + tmp___37)) = vp;
          }
          goto __Cont___2;
        }
# 424
        if (intermed_ok) {
# 426
          if ((unsigned int )intermediate_file ==
              (unsigned int )((struct file *)0)) {
            {
# 427
            intermediate_file = (struct file *)__builtin_alloca(sizeof(struct file ));
            }
          }
# 430
          while (1) {
# 430
            if (8 & db_level) {
              {
# 430
              print_spaces(depth);
# 430
              tmp___40 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                    (char const   *)"Looking for a rule with intermediate file `%s\'.\n",
                                                                    5);
# 430
              printf(tmp___40, p);
# 430
              tmp___41 = get_stdout();
              {
# 105 "spec.work"
              tmp___41->__BLAST_FLAG = 1;
              {

              }
              }
# 430 "implicit.c"
              fflush(tmp___41);
              }
            }
# 430
            break;
          }
          {
# 434
          memset((void *)((char *)intermediate_file), 0, sizeof(struct file ));
# 435
          intermediate_file->name = p;
# 436
          tmp___42 = pattern_search(intermediate_file, 0, depth + 1U,
                                    recursions + 1U);
          }
# 436
          if (tmp___42) {
            {
# 439
            p = xstrdup((char const   *)p);
# 440
            (*(intermediate_patterns + deps_found)) = intermediate_file->name;
# 442
            intermediate_file->name = p;
# 443
            (*(intermediate_files + deps_found)) = intermediate_file;
# 444
            intermediate_file = (struct file *)0;
# 448
            (*(found_files + deps_found)) = xstrdup((char const   *)p);
# 449
            deps_found ++;
            }
            goto __Cont___2;
          }
          {
# 456
          file_impossible(p);
          }
        }
# 461
        break;
        __Cont___2: 
        {
# 346
        dep = dep->next;
        }
      }
      {
# 465
      rule->in_use = (char )0;
      }
# 467
      if ((unsigned int )dep != (unsigned int )((struct dep *)0)) {
# 472
        while (1) {
          {
# 472
          tmp___44 = deps_found;
# 472
          deps_found --;
          }
# 472
          if (! (tmp___44 > 0U)) {
# 472
            break;
          }
          {
# 474
          f = (*(intermediate_files + deps_found));
# 475
          free((void *)(*(found_files + deps_found)));
          }
# 476
          if ((unsigned int )f != (unsigned int )((struct file *)0)) {
# 476
            if ((unsigned int )f->stem < (unsigned int )f->name) {
              {
# 479
              free((void *)f->stem);
              }
            } else {
              {
# 476
              tmp___43 = strlen((char const   *)f->name);
              }
# 476
              if ((unsigned int )f->stem > (unsigned int )(f->name + tmp___43)) {
                {
# 479
                free((void *)f->stem);
                }
              }
            }
          }
        }
      } else {
# 484
        break;
      }
      __Cont___1: 
      {
# 308
      i ++;
      }
    }
# 489
    if (i < nrules) {
# 490
      break;
    }
    {
# 492
    rule = (struct rule *)0;
# 302
    intermed_ok ++;
    }
  }
# 497
  if ((unsigned int )rule == (unsigned int )((struct rule *)0)) {
    goto done;
  }
  {
# 500
  foundrule = i;
  }
# 505
  if (recursions > 0U) {
    {
# 507
    file->name = (*(rule->targets + (*(matches + foundrule))));
    }
  }
# 513
  while (1) {
    {
# 513
    tmp___47 = deps_found;
# 513
    deps_found --;
    }
# 513
    if (! (tmp___47 > 0U)) {
# 513
      break;
    }
# 517
    if ((unsigned int )(*(intermediate_files + deps_found)) !=
        (unsigned int )((struct file *)0)) {
      {
# 526
      imf = (*(intermediate_files + deps_found));
# 527
      tmp___45 = enter_file(imf->name);
# 527
      f___0 = tmp___45;
# 528
      f___0->deps = imf->deps;
# 529
      f___0->cmds = imf->cmds;
# 530
      f___0->stem = imf->stem;
# 531
      f___0->also_make = imf->also_make;
# 532
      imf = lookup_file((*(intermediate_patterns + deps_found)));
      }
# 533
      if ((unsigned int )imf != (unsigned int )((struct file *)0)) {
# 533
        if (imf->precious) {
          {
# 534
          f___0->precious = 1U;
          }
        }
      }
      {
# 535
      f___0->intermediate = 1U;
# 536
      f___0->tried_implicit = 1U;
# 537
      dep = f___0->deps;
      }
# 537
      while ((unsigned int )dep != (unsigned int )((struct dep *)0)) {
        {
# 539
        dep->file = enter_file(dep->name);
        }
# 541
        if ((unsigned int )dep->name != (unsigned int )(dep->file)->name) {
          {
# 542
          free((void *)dep->name);
          }
        }
        {
# 543
        dep->name = (char *)0;
# 544
        (dep->file)->tried_implicit = (dep->file)->tried_implicit | dep->changed;
# 537
        dep = dep->next;
        }
      }
    }
    {
# 548
    dep = (struct dep *)xmalloc(sizeof(struct dep ));
# 549
    dep->ignore_mtime = 0U;
# 550
    s = (*(found_files + deps_found));
    }
# 551
    if (recursions == 0U) {
      {
# 553
      dep->name = (char *)0;
# 554
      dep->file = lookup_file(s);
      }
# 555
      if ((unsigned int )dep->file == (unsigned int )((struct file *)0)) {
        {
# 557
        dep->file = enter_file(s);
        }
      } else {
        {
# 561
        free((void *)s);
        }
      }
    } else {
      {
# 565
      dep->name = s;
# 566
      dep->file = (struct file *)0;
# 567
      dep->changed = 0U;
      }
    }
# 569
    if ((unsigned int )(*(intermediate_files + deps_found)) ==
        (unsigned int )((struct file *)0)) {
# 569
      if (((*(tryrules + foundrule)))->terminal) {
# 576
        if ((unsigned int )dep->file == (unsigned int )((struct file *)0)) {
          {
# 577
          dep->changed = 1U;
          }
        } else {
          {
# 579
          (dep->file)->tried_implicit = 1U;
          }
        }
      }
    }
    {
# 581
    dep->next = file->deps;
# 582
    file->deps = dep;
    }
  }
# 585
  if ((*(checked_lastslash + foundrule))) {
    {
# 594
    dirlen = (lastslash + 1) - filename;
# 598
    fullstemlen = (unsigned int )dirlen + stemlen;
# 599
    tmp___48 = xmalloc(fullstemlen + 1U);
# 599
    file->stem = tmp___48;
# 600
    memmove((void *)file->stem, (void const   *)filename, (unsigned int )dirlen);
# 601
    memmove((void *)(file->stem + dirlen), (void const   *)stem, stemlen);
# 602
    (*(file->stem + fullstemlen)) = '\0';
    }
  } else {
    {
# 589
    file->stem = savestring((char const   *)stem, stemlen);
# 590
    fullstemlen = stemlen;
    }
  }
  {
# 605
  file->cmds = rule->cmds;
  }
# 610
  if ((unsigned int )(*(rule->targets + 1)) != (unsigned int )((char *)0)) {
    {
# 611
    i = 0U;
    }
# 611
    while ((unsigned int )(*(rule->targets + i)) != (unsigned int )((char *)0)) {
# 612
      if (i != (*(matches + foundrule))) {
        {
# 614
        tmp___49 = (struct dep *)xmalloc(sizeof(struct dep ));
# 614
        new = tmp___49;
# 616
        new->ignore_mtime = 0U;
# 617
        tmp___50 = xmalloc(((*(rule->lens + i)) + fullstemlen) + 1U);
# 617
        p = tmp___50;
# 617
        new->name = p;
# 618
        memmove((void *)p, (void const   *)(*(rule->targets + i)),
                (unsigned int )(((*(rule->suffixes + i)) -
                                 (*(rule->targets + i))) - 1));
# 620
        p += ((*(rule->suffixes + i)) - (*(rule->targets + i))) - 1;
# 621
        memmove((void *)p, (void const   *)file->stem, fullstemlen);
# 622
        p += fullstemlen;
# 623
        memmove((void *)p, (void const   *)(*(rule->suffixes + i)),
                ((*(rule->lens + i)) - (unsigned int )((*(rule->suffixes + i)) -
                                                       (*(rule->targets + i)))) +
                1U);
# 625
        new->file = enter_file(new->name);
# 626
        new->next = file->also_make;
# 627
        file->also_make = new;
        }
      }
      {
# 611
      i ++;
      }
    }
  }
  done: 
  {
# 631
  free((void *)intermediate_files);
# 632
  free((void *)tryrules);
  }
# 634
  return ((unsigned int )rule != (unsigned int )((struct rule *)0));
}
}
# 54 "job.c"
char default_shell[8]   = 
# 54
  {'/', 'b', 'i', 'n', '/', 's', 'h', '\0'};
# 57
int batch_mode_shell   = 0;
# 109 "/usr/include/sys/wait.h"
extern __pid_t wait(union wait *__stat_loc ) ;
# 129
extern __pid_t waitpid(__pid_t __pid , int *__stat_loc , int __options ) ;
# 190 "job.c"
int start_remote_job(char **argv , char **envp , int stdin_fd , int *is_remote ,
                     int *id_ptr , int *used_stdin ) ;
# 192
int start_remote_job_p(int first_p ) ;
# 193
int remote_status(int *exit_code_ptr , int *signal_ptr , int *coredump_ptr ,
                  int block ) ;
# 196
void child_handler(int sig ) ;
# 197
static void free_child(struct child *child ) ;
# 198
static void start_job_command(struct child *child ) ;
# 199
static int load_too_high(void) ;
# 200
static int job_next_command(struct child *child ) ;
# 201
static int start_waiting_job(struct child *c ) ;
# 208
struct child *children   = (struct child *)0;
# 212
unsigned int job_slots_used   = 0U;
# 216
static int good_stdin_used   = 0;
# 220
static struct child *waiting_jobs   = (struct child *)0;
# 224
int unixy_shell   = 1;
# 241
static void child_error(char *target_name , int exit_code , int exit_sig ,
                        int coredump , int ignored ) 
{ char *tmp___1 ;
  char const   *tmp___3 ;
  char *tmp___4 ;

  {
# 247
  if (ignored) {
# 247
    if (silent_flag) {
# 248
      return;
    }
  }
# 257
  if (exit_sig == 0) {
# 258
    if (ignored) {
      {
# 258
      tmp___1 = dcgettext((char const   *)((void *)0),
                          (char const   *)"[%s] Error %d (ignored)", 5);
      }
    } else {
      {
# 258
      tmp___1 = dcgettext((char const   *)((void *)0),
                          (char const   *)"*** [%s] Error %d", 5);
      }
    }
    {
# 258
    error((struct floc  const  *)((struct floc *)0), (char const   *)tmp___1,
          target_name, exit_code);
    }
  } else {
# 262
    if (coredump) {
      {
# 262
      tmp___3 = (char const   *)dcgettext((char const   *)((void *)0),
                                          (char const   *)" (core dumped)", 5);
      }
    } else {
      {
# 262
      tmp___3 = (char const   *)"";
      }
    }
    {
# 262
    tmp___4 = strsignal(exit_sig);
# 262
    error((struct floc  const  *)((struct floc *)0),
          (char const   *)"*** [%s] %s%s", target_name, tmp___4, tmp___3);
    }
  }
# 266
  return;
}
}
# 390
static unsigned int dead_children   = 0U;
# 392
void child_handler(int sig ) 
{ char const   * __restrict  tmp ;
  FILE *tmp___0 ;

  {
  {
# 396
  dead_children ++;
  }
# 398
  if (job_rfd >= 0) {
    {
# 400
    close(job_rfd);
# 401
    job_rfd = -1;
    }
  }
# 404
  while (1) {
# 404
    if (4 & db_level) {
      {
# 404
      tmp = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                       (char const   *)"Got a SIGCHLD; %u unreaped children.\n",
                                                       5);
# 404
      printf(tmp, dead_children);
# 404
      tmp___0 = get_stdout();
      {
# 105 "spec.work"
      tmp___0->__BLAST_FLAG = 1;
      {

      }
      }
# 404 "job.c"
      fflush(tmp___0);
      }
    }
# 404
    break;
  }
# 405
  return;
}
}
# 658
static int delete_on_error   = -1;
# 417
void reap_children(int block , int err ) 
{ int status ;
  int reap_more ;
  int remote ;
  register int pid ;
  int exit_code ;
  int exit_sig ;
  int coredump ;
  register struct child *lastc ;
  register struct child *c ;
  int child_failed ;
  int any_remote ;
  int any_local ;
  FILE *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___2 ;
  char const   * __restrict  tmp___3 ;
  FILE *tmp___4 ;
  union __anonunion___u_55 __u ;
  union __anonunion___u_58 __u___2 ;
  int __status___0 ;
  union __anonunion___u_59 __u___3 ;
  int tmp___6 ;
  union __anonunion___u_60 __u___4 ;
  int tmp___7 ;
  char const   *tmp___9 ;
  char *tmp___12 ;
  FILE *tmp___13 ;
  char const   * __restrict  tmp___14 ;
  FILE *tmp___15 ;
  struct file *f ;
  struct file *tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  char const   *tmp___20 ;
  char const   * __restrict  tmp___21 ;
  FILE *tmp___22 ;

  {
  {
# 423
  reap_more = 1;
  }
# 439
  while (1) {
# 439
    if ((unsigned int )children != (unsigned int )((struct child *)0)) {
      goto _L___1;
    } else {
# 439
      if (shell_function_pid != 0) {
        _L___1: 
# 439
        if (! block) {
# 439
          if (! reap_more) {
# 439
            break;
          }
        }
      } else {
# 439
        break;
      }
    }
    {
# 442
    remote = 0;
    }
# 449
    if (err) {
# 449
      if (block) {
        {
# 452
        tmp = get_stdout();
        {
# 105 "spec.work"
        tmp->__BLAST_FLAG = 1;
        {

        }
        }
# 452 "job.c"
        fflush(tmp);
# 453
        tmp___0 = (char const   *)dcgettext((char const   *)((void *)0),
                                            (char const   *)"*** Waiting for unfinished jobs....",
                                            5);
# 453
        error((struct floc  const  *)((struct floc *)0), tmp___0);
        }
      }
    }
# 473
    if (dead_children > 0U) {
      {
# 474
      dead_children --;
      }
    }
    {
# 476
    any_remote = 0;
# 477
    any_local = shell_function_pid != 0;
# 478
    c = children;
    }
# 478
    while ((unsigned int )c != (unsigned int )((struct child *)0)) {
      {
# 480
      any_remote = (int )((unsigned int )any_remote | c->remote);
# 481
      any_local |= ! c->remote != 0;
      }
# 482
      while (1) {
# 482
        if (4 & db_level) {
# 482
          if (c->remote) {
            {
# 482
            tmp___2 = (char const   *)dcgettext((char const   *)((void *)0),
                                                (char const   *)" (remote)", 5);
            }
          } else {
            {
# 482
            tmp___2 = (char const   *)"";
            }
          }
          {
# 482
          tmp___3 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                               (char const   *)"Live child 0x%08lx (%s) PID %ld %s\n",
                                                               5);
# 482
          printf(tmp___3, (unsigned long )c, (c->file)->name, (long )c->pid,
                 tmp___2);
# 482
          tmp___4 = get_stdout();
          {
# 105 "spec.work"
          tmp___4->__BLAST_FLAG = 1;
          {

          }
          }
# 482 "job.c"
          fflush(tmp___4);
          }
        }
# 482
        break;
      }
      {
# 478
      c = c->next;
      }
    }
# 491
    if (any_remote) {
      {
# 492
      pid = remote_status(& exit_code, & exit_sig, & coredump, 0);
      }
    } else {
      {
# 494
      pid = 0;
      }
    }
# 496
    if (pid > 0) {
      {
# 498
      remote = 1;
      }
    } else {
# 499
      if (pid < 0) {
        remote_status_lose: 
        {
# 503
        pfatal_with_name((char const   *)"remote_status");
        }
      } else {
# 509
        if (any_local) {
# 516
          if (block) {
            {
# 520
            pid = wait((union wait *)(& status));
            }
          } else {
            {
# 517
            pid = waitpid(-1, & status, 1);
            }
          }
        } else {
          {
# 524
          pid = 0;
          }
        }
# 526
        if (pid < 0) {
          {
# 529
          pfatal_with_name((char const   *)"wait");
          }
        } else {
# 531
          if (pid > 0) {
            {
# 534
            __u.__in = status;
# 534
            exit_code = (__u.__i & 65280) >> 8;
# 535
            __u___3.__in = status;
# 535
            __status___0 = __u___3.__i;
            }
# 535
            if ((__status___0 & 255) == 127) {
              {
# 535
              tmp___6 = 0;
              }
            } else {
# 535
              if ((__status___0 & 127) == 0) {
                {
# 535
                tmp___6 = 0;
                }
              } else {
                {
# 535
                tmp___6 = 1;
                }
              }
            }
# 535
            if (tmp___6) {
              {
# 535
              __u___2.__in = status;
# 535
              exit_sig = __u___2.__i & 127;
              }
            } else {
              {
# 535
              exit_sig = 0;
              }
            }
            {
# 536
            __u___4.__in = status;
# 536
            coredump = __u___4.__i & 128;
            }
          } else {
            {
# 541
            reap_more = 0;
            }
# 543
            if (block) {
# 543
              if (! any_remote) {
# 544
                break;
              }
            } else {
# 544
              break;
            }
            {
# 547
            pid = remote_status(& exit_code, & exit_sig, & coredump, 1);
            }
# 548
            if (pid < 0) {
              goto remote_status_lose;
            } else {
# 550
              if (pid == 0) {
# 552
                break;
              }
            }
            {
# 555
            remote = 1;
            }
          }
        }
      }
    }
# 609
    if (! remote) {
# 609
      if (pid == shell_function_pid) {
# 612
        if (exit_sig == 0) {
# 612
          if (exit_code == 127) {
            {
# 613
            shell_function_completed = -1;
            }
          } else {
            {
# 615
            shell_function_completed = 1;
            }
          }
        } else {
          {
# 615
          shell_function_completed = 1;
          }
        }
# 616
        break;
      }
    }
# 619
    if (exit_sig != 0) {
      {
# 619
      tmp___7 = 1;
      }
    } else {
# 619
      if (exit_code != 0) {
        {
# 619
        tmp___7 = 1;
        }
      } else {
        {
# 619
        tmp___7 = 0;
        }
      }
    }
    {
# 619
    child_failed = tmp___7;
# 622
    lastc = (struct child *)0;
# 623
    c = children;
    }
# 623
    while ((unsigned int )c != (unsigned int )((struct child *)0)) {
# 624
      if (c->remote == (unsigned int )remote) {
# 624
        if (c->pid == pid) {
# 625
          break;
        }
      }
      {
# 623
      lastc = c;
# 623
      c = c->next;
      }
    }
# 627
    if ((unsigned int )c == (unsigned int )((struct child *)0)) {
# 630
      continue;
    }
# 632
    while (1) {
# 632
      if (4 & db_level) {
# 632
        if (c->remote) {
          {
# 632
          tmp___9 = (char const   *)dcgettext((char const   *)((void *)0),
                                              (char const   *)" (remote)", 5);
          }
        } else {
          {
# 632
          tmp___9 = (char const   *)"";
          }
        }
# 632
        if (child_failed) {
          {
# 632
          tmp___12 = dcgettext((char const   *)((void *)0),
                               (char const   *)"Reaping losing child 0x%08lx PID %ld %s\n",
                               5);
          }
        } else {
          {
# 632
          tmp___12 = dcgettext((char const   *)((void *)0),
                               (char const   *)"Reaping winning child 0x%08lx PID %ld %s\n",
                               5);
          }
        }
        {
# 632
        printf((char const   */* __restrict  */)((char const   *)tmp___12),
               (unsigned long )c, (long )c->pid, tmp___9);
# 632
        tmp___13 = get_stdout();
        {
# 105 "spec.work"
        tmp___13->__BLAST_FLAG = 1;
        {

        }
        }
# 632 "job.c"
        fflush(tmp___13);
        }
      }
# 632
      break;
    }
# 638
    if (c->sh_batch_file) {
# 639
      while (1) {
# 639
        if (4 & db_level) {
          {
# 639
          tmp___14 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                (char const   *)"Cleaning up temp batch file %s\n",
                                                                5);
# 639
          printf(tmp___14, c->sh_batch_file);
# 639
          tmp___15 = get_stdout();
          {
# 105 "spec.work"
          tmp___15->__BLAST_FLAG = 1;
          {

          }
          }
# 639 "job.c"
          fflush(tmp___15);
          }
        }
# 639
        break;
      }
      {
# 643
      remove((char const   *)c->sh_batch_file);
# 646
      free((void *)c->sh_batch_file);
# 647
      c->sh_batch_file = (char *)((void *)0);
      }
    }
# 651
    if (c->good_stdin) {
      {
# 652
      good_stdin_used = 0;
      }
    }
# 654
    if (child_failed) {
# 654
      if (c->noerror) {
        goto _L___0;
      } else {
# 654
        if (ignore_errors_flag) {
          goto _L___0;
        } else {
          {
# 659
          child_error((c->file)->name, exit_code, exit_sig, coredump, 0);
# 660
          (c->file)->update_status = (short )2;
          }
# 661
          if (delete_on_error == -1) {
            {
# 663
            tmp___16 = lookup_file(".DELETE_ON_ERROR");
# 663
            f = tmp___16;
            }
# 664
            if ((unsigned int )f != (unsigned int )((struct file *)0)) {
# 664
              if (f->is_target) {
                {
# 664
                tmp___17 = 1;
                }
              } else {
                {
# 664
                tmp___17 = 0;
                }
              }
            } else {
              {
# 664
              tmp___17 = 0;
              }
            }
            {
# 664
            delete_on_error = tmp___17;
            }
          }
# 666
          if (exit_sig != 0) {
            {
# 667
            delete_child_targets(c);
            }
          } else {
# 666
            if (delete_on_error) {
              {
# 667
              delete_child_targets(c);
              }
            }
          }
        }
      }
    } else {
      _L___0: 
# 671
      if (child_failed) {
        {
# 674
        child_error((c->file)->name, exit_code, exit_sig, coredump, 1);
# 676
        child_failed = 0;
        }
      }
      {
# 680
      tmp___18 = job_next_command(c);
      }
# 680
      if (tmp___18) {
# 682
        if (handling_fatal_signal) {
          {
# 688
          (c->file)->update_status = (short )2;
          }
        } else {
          {
# 696
          c->remote = (unsigned int )start_remote_job_p(0);
# 697
          start_job_command(c);
# 702
          unblock_sigs();
          }
# 703
          if ((c->file)->command_state == 2) {
# 706
            continue;
          }
        }
# 709
        if ((int )(c->file)->update_status != 0) {
          {
# 711
          delete_child_targets(c);
          }
        }
      } else {
        {
# 717
        (c->file)->update_status = (short )0;
        }
      }
    }
# 726
    if (! handling_fatal_signal) {
      {
# 730
      notice_finished_file(c->file);
      }
    }
# 732
    while (1) {
# 732
      if (4 & db_level) {
# 732
        if (c->remote) {
          {
# 732
          tmp___20 = (char const   *)dcgettext((char const   *)((void *)0),
                                               (char const   *)" (remote)", 5);
          }
        } else {
          {
# 732
          tmp___20 = (char const   *)"";
          }
        }
        {
# 732
        tmp___21 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                              (char const   *)"Removing child 0x%08lx PID %ld%s from chain.\n",
                                                              5);
# 732
        printf(tmp___21, (unsigned long )c, (long )c->pid, tmp___20);
# 732
        tmp___22 = get_stdout();
        {
# 105 "spec.work"
        tmp___22->__BLAST_FLAG = 1;
        {

        }
        }
# 732 "job.c"
        fflush(tmp___22);
        }
      }
# 732
      break;
    }
    {
# 741
    block_sigs();
    }
# 744
    if (job_slots_used > 0U) {
      {
# 745
      job_slots_used = job_slots_used - 1U;
      }
    }
# 748
    if ((unsigned int )lastc == (unsigned int )((struct child *)0)) {
      {
# 749
      children = c->next;
      }
    } else {
      {
# 751
      lastc->next = c->next;
      }
    }
    {
# 753
    free_child(c);
# 755
    unblock_sigs();
    }
# 759
    if (! err) {
# 759
      if (child_failed) {
# 759
        if (! keep_going_flag) {
# 759
          if (! handling_fatal_signal) {
            {
# 762
            die(2);
            }
          }
        }
      }
    }
    {
# 765
    block = 0;
    }
  }
# 768
  return;
}
}
# 773
static void free_child(struct child *child ) 
{ char token ;
  char const   *tmp ;
  ssize_t tmp___0 ;
  char const   * __restrict  tmp___1 ;
  FILE *tmp___2 ;
  register unsigned int i ;
  register char **ep ;
  char **tmp___3 ;

  {
# 781
  if (job_fds[1] >= 0) {
# 781
    if (children) {
      {
# 783
      token = '+';
# 787
      tmp___0 = write(job_fds[1], (void const   *)(& token), 1U);
      }
# 787
      if (tmp___0 != 1) {
        {
# 788
        tmp = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"write jobserver", 5);
# 788
        pfatal_with_name(tmp);
        }
      }
# 790
      while (1) {
# 790
        if (4 & db_level) {
          {
# 790
          tmp___1 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                               (char const   *)"Released token for child 0x%08lx (%s).\n",
                                                               5);
# 790
          printf(tmp___1, (unsigned long )child, (child->file)->name);
# 790
          tmp___2 = get_stdout();
          {
# 105 "spec.work"
          tmp___2->__BLAST_FLAG = 1;
          {

          }
          }
# 790 "job.c"
          fflush(tmp___2);
          }
        }
# 790
        break;
      }
    }
  }
# 794
  if (handling_fatal_signal) {
# 795
    return;
  }
# 797
  if ((unsigned int )child->command_lines != (unsigned int )((char **)0)) {
    {
# 800
    i = 0U;
    }
# 800
    while (i < ((child->file)->cmds)->ncommand_lines) {
      {
# 801
      free((void *)(*(child->command_lines + i)));
# 800
      i ++;
      }
    }
    {
# 802
    free((void *)((char *)child->command_lines));
    }
  }
# 805
  if ((unsigned int )child->environment != (unsigned int )((char **)0)) {
    {
# 807
    ep = child->environment;
    }
# 808
    while ((unsigned int )(*ep) != (unsigned int )((char *)0)) {
      {
# 809
      tmp___3 = ep;
# 809
      ep ++;
# 809
      free((void *)(*tmp___3));
      }
    }
    {
# 810
    free((void *)((char *)child->environment));
    }
  }
  {
# 813
  free((void *)((char *)child));
  }
# 814
  return;
}
}
# 817
sigset_t fatal_signal_set  ;
# 820
void block_sigs(void) 
{ 

  {
  {
# 824
  sigprocmask(0,
              (sigset_t const   */* __restrict  */)((sigset_t const   *)(& fatal_signal_set)),
              (sigset_t */* __restrict  */)((sigset_t *)0));
  }
# 830
  return;
}
}
# 833
void unblock_sigs(void) 
{ sigset_t empty ;

  {
  {
# 837
  sigemptyset(& empty);
# 838
  sigprocmask(2,
              (sigset_t const   */* __restrict  */)((sigset_t const   *)(& empty)),
              (sigset_t */* __restrict  */)((sigset_t *)0));
  }
# 839
  return;
}
}
# 844
static void set_child_handler_action_flags(int flags ) 
{ struct sigaction sa ;

  {
  {
# 849
  memset((void *)((char *)(& sa)), 0, sizeof(sa));
# 850
  sa.sa_handler = & child_handler;
# 851
  sa.sa_flags = flags;
# 853
  sigaction(17,
            (struct sigaction  const  */* __restrict  */)((struct sigaction  const  *)(& sa)),
            (struct sigaction */* __restrict  */)((struct sigaction *)((void *)0)));
  }
# 858
  return;
}
}
# 874
static int bad_stdin   = -1;
# 869
static void start_job_command(struct child *child ) 
{ register char *p ;
  int flags ;
  char **argv ;
  int tmp ;
  char *end ;
  char *tmp___0 ;
  int tmp___1 ;
  char const   *tmp___2 ;
  int tmp___3 ;
  FILE *tmp___4 ;
  FILE *tmp___5 ;
  int pd[2] ;
  int tmp___6 ;
  int is_remote ;
  int id ;
  int used_stdin ;
  int tmp___7 ;
  int tmp___8 ;
  char **parent_environ ;
  int tmp___9 ;

  {
# 885
  if (! child->command_ptr) {
    goto next_command;
  }
  {
# 890
  flags = (child->file)->command_flags |
          (int )(*(((child->file)->cmds)->lines_flags +
                   (child->command_line - 1U)));
# 893
  p = child->command_ptr;
# 894
  child->noerror = (unsigned int )(flags & 4);
  }
# 896
  while ((int )(*p) != 0) {
# 898
    if ((int )(*p) == 64) {
      {
# 899
      flags |= 2;
      }
    } else {
# 900
      if ((int )(*p) == 43) {
        {
# 901
        flags |= 1;
        }
      } else {
# 902
        if ((int )(*p) == 45) {
          {
# 903
          child->noerror = 1U;
          }
        } else {
          {
# 904
          tmp = _get__ctype_b((int )((unsigned char )(*p)));
          }
# 904
          if (! (tmp & 1)) {
# 905
            break;
          }
        }
      }
    }
    {
# 906
    p ++;
    }
  }
  {
# 915
  (*(((child->file)->cmds)->lines_flags + (child->command_line - 1U))) = (char )((int )(*(((child->file)->cmds)->lines_flags +
                                                                                          (child->command_line -
                                                                                           1U))) |
                                                                                 (flags &
                                                                                  1));
# 921
  end = (char *)0;
# 925
  argv = construct_command_argv(p, & end, child->file, & child->sh_batch_file);
  }
# 927
  if ((unsigned int )end == (unsigned int )((void *)0)) {
    {
# 928
    child->command_ptr = (char *)((void *)0);
    }
  } else {
    {
# 931
    tmp___0 = end;
# 931
    end ++;
# 931
    (*tmp___0) = '\0';
# 932
    child->command_ptr = end;
    }
  }
# 940
  if ((unsigned int )argv != (unsigned int )((char **)0)) {
# 940
    if (question_flag) {
# 940
      if (! (flags & 1)) {
        {
# 943
        free((void *)(*(argv + 0)));
# 944
        free((void *)((char *)argv));
# 946
        (child->file)->update_status = (short )1;
# 947
        notice_finished_file(child->file);
        }
# 948
        return;
      }
    }
  }
# 951
  if (touch_flag) {
# 951
    if (! (flags & 1)) {
# 956
      if (argv) {
        {
# 958
        free((void *)(*(argv + 0)));
# 959
        free((void *)((char *)argv));
        }
      }
      {
# 962
      argv = (char **)0;
      }
    }
  }
# 965
  if ((unsigned int )argv == (unsigned int )((char **)0)) {
    next_command: 
    {
# 972
    tmp___1 = job_next_command(child);
    }
# 972
    if (tmp___1) {
      {
# 973
      start_job_command(child);
      }
    } else {
      {
# 978
      set_command_state(child->file, 2);
# 979
      (child->file)->update_status = (short )0;
# 980
      notice_finished_file(child->file);
      }
    }
# 982
    return;
  }
# 989
  if (just_print_flag) {
    {
# 989
    tmp___2 = (char const   *)"%s";
    }
  } else {
# 989
    if (flags & 2) {
      {
# 989
      tmp___2 = (char const   *)((char *)0);
      }
    } else {
# 989
      if (silent_flag) {
        {
# 989
        tmp___2 = (char const   *)((char *)0);
        }
      } else {
        {
# 989
        tmp___2 = (char const   *)"%s";
        }
      }
    }
  }
  {
# 989
  message(0, tmp___2, p);
# 999
  commands_started = commands_started + 1U;
  }
# 1008
  if ((*(argv + 0))) {
    {
# 1008
    tmp___3 = strcmp((char const   *)(*(argv + 0)), (char const   *)"/bin/sh");
    }
# 1008
    if (! tmp___3) {
# 1008
      if ((*(argv + 1))) {
# 1008
        if ((int )(*((*(argv + 1)) + 0)) == 45) {
# 1008
          if ((int )(*((*(argv + 1)) + 1)) == 99) {
# 1008
            if ((int )(*((*(argv + 1)) + 2)) == 0) {
# 1008
              if ((*(argv + 2))) {
# 1008
                if ((int )(*((*(argv + 2)) + 0)) == 58) {
# 1008
                  if ((int )(*((*(argv + 2)) + 1)) == 0) {
# 1008
                    if ((unsigned int )(*(argv + 3)) ==
                        (unsigned int )((void *)0)) {
                      {
# 1019
                      free((void *)(*(argv + 0)));
# 1020
                      free((void *)((char *)argv));
                      }
                      goto next_command;
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
# 1027
  if (just_print_flag) {
# 1027
    if (! (flags & 1)) {
      {
# 1030
      free((void *)(*(argv + 0)));
# 1031
      free((void *)((char *)argv));
      }
      goto next_command;
    }
  }
  {
# 1038
  tmp___4 = get_stdout();
  {
# 105 "spec.work"
  tmp___4->__BLAST_FLAG = 1;
  {

  }
  }
# 1038 "job.c"
  fflush(tmp___4);
# 1039
  tmp___5 = get_stderr();
  {
# 97 "spec.work"
  tmp___5->__BLAST_FLAG = 1;
  {

  }
  }
# 1039 "job.c"
  fflush(tmp___5);
  }
# 1046
  if (bad_stdin == -1) {
    {
# 1051
    tmp___6 = pipe(pd);
    }
# 1051
    if (tmp___6 == 0) {
      {
# 1054
      close(pd[1]);
# 1056
      bad_stdin = pd[0];
# 1061
      fcntl(bad_stdin, 2, 1);
      }
    }
  }
  {
# 1071
  child->good_stdin = (unsigned int )(! good_stdin_used != 0);
  }
# 1072
  if (child->good_stdin) {
    {
# 1073
    good_stdin_used = 1;
    }
  }
  {
# 1077
  child->deleted = 0U;
  }
# 1081
  if ((unsigned int )child->environment == (unsigned int )((char **)0)) {
    {
# 1082
    child->environment = target_environment(child->file);
    }
  }
# 1089
  if (child->remote) {
# 1092
    if (child->good_stdin) {
      {
# 1092
      tmp___7 = 0;
      }
    } else {
      {
# 1092
      tmp___7 = bad_stdin;
      }
    }
    {
# 1092
    tmp___8 = start_remote_job(argv, child->environment, tmp___7, & is_remote,
                               & id, & used_stdin);
    }
# 1092
    if (tmp___8) {
      goto run_local;
    } else {
# 1100
      if (child->good_stdin) {
# 1100
        if (! used_stdin) {
          {
# 1102
          child->good_stdin = 0U;
# 1103
          good_stdin_used = 0;
          }
        }
      }
      {
# 1105
      child->remote = (unsigned int )is_remote;
# 1106
      child->pid = id;
      }
    }
  } else {
    run_local: 
    {
# 1117
    block_sigs();
# 1119
    child->remote = 0U;
# 1131
    parent_environ = environ;
# 1132
    child->pid = vfork();
# 1133
    environ = parent_environ;
    }
# 1134
    if (child->pid == 0) {
      {
# 1137
      unblock_sigs();
      }
# 1141
      if (! (flags & 1)) {
# 1141
        if (job_fds[0] >= 0) {
          {
# 1143
          close(job_fds[0]);
# 1144
          close(job_fds[1]);
          }
        }
      }
# 1146
      if (job_rfd >= 0) {
        {
# 1147
        close(job_rfd);
        }
      }
# 1149
      if (child->good_stdin) {
        {
# 1149
        tmp___9 = 0;
        }
      } else {
        {
# 1149
        tmp___9 = bad_stdin;
        }
      }
      {
# 1149
      child_execute_job(tmp___9, 1, argv, child->environment);
      }
    } else {
# 1152
      if (child->pid < 0) {
        {
# 1155
        unblock_sigs();
# 1156
        perror_with_name((char const   *)"vfork", (char const   *)"");
        }
        goto error;
      }
    }
  }
  {
# 1266
  set_command_state(child->file, 2);
# 1270
  free((void *)(*(argv + 0)));
# 1271
  free((void *)((char *)argv));
  }
# 1274
  return;
  error: 
  {
# 1277
  (child->file)->update_status = (short )2;
# 1278
  notice_finished_file(child->file);
  }
# 1279
  return;
}
}
# 1286
static int start_waiting_job(struct child *c ) 
{ struct file *f ;
  int tmp ;
  char const   *tmp___1 ;
  char const   * __restrict  tmp___2 ;
  FILE *tmp___3 ;

  {
  {
# 1290
  f = c->file;
# 1296
  c->remote = (unsigned int )start_remote_job_p(1);
  }
# 1300
  if (! c->remote) {
# 1300
    if (job_slots_used > 0U) {
      {
# 1300
      tmp = load_too_high();
      }
# 1300
      if (tmp) {
        {
# 1304
        set_command_state(f, 2);
# 1305
        c->next = waiting_jobs;
# 1306
        waiting_jobs = c;
        }
# 1307
        return (0);
      }
    }
  }
  {
# 1311
  start_job_command(c);
  }
# 1313
  switch (f->command_state) {
  case 2: 
  {
# 1316
  c->next = children;
  }
# 1317
  while (1) {
# 1317
    if (4 & db_level) {
# 1317
      if (c->remote) {
        {
# 1317
        tmp___1 = (char const   *)dcgettext((char const   *)((void *)0),
                                            (char const   *)" (remote)", 5);
        }
      } else {
        {
# 1317
        tmp___1 = (char const   *)"";
        }
      }
      {
# 1317
      tmp___2 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                           (char const   *)"Putting child 0x%08lx (%s) PID %ld%s on the chain.\n",
                                                           5);
# 1317
      printf(tmp___2, (unsigned long )c, (c->file)->name, (long )c->pid, tmp___1);
# 1317
      tmp___3 = get_stdout();
      {
# 105 "spec.work"
      tmp___3->__BLAST_FLAG = 1;
      {

      }
      }
# 1317 "job.c"
      fflush(tmp___3);
      }
    }
# 1317
    break;
  }
  {
# 1320
  children = c;
# 1322
  job_slots_used = job_slots_used + 1U;
# 1323
  unblock_sigs();
  }
# 1324
  break;
  case 0: 
  {
# 1328
  f->update_status = (short )0;
  }
  case 3: 
  {
# 1332
  notice_finished_file(f);
# 1333
  free_child(c);
  }
# 1334
  break;
  default: 
  {

  }
# 1337
  if (! (f->command_state == 3)) {
    {
# 1337
    __assert_fail((char const   *)"f->command_state == cs_finished",
                  (char const   *)"job.c", 1337U,
                  (char const   *)"start_waiting_job");
    }
  }
# 1338
  break;
  }
# 1341
  return (1);
}
}
# 1346
void new_job(struct file *file ) 
{ register struct commands *cmds ;
  register struct child *c ;
  char **lines ;
  register unsigned int i ;
  char *in ;
  char *out ;
  char *ref___0 ;
  char openparen ;
  char closeparen ;
  int tmp___0 ;
  int count ;
  char *p ;
  char *tmp___1 ;
  char *tmp___2 ;
  int quoted ;
  char *tmp___3 ;
  char *tmp___4 ;
  int tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char token ;
  int got_token ;
  int saved_errno ;
  char const   *tmp___10 ;
  FILE *tmp___11 ;
  FILE *tmp___12 ;
  int *tmp___13 ;
  char const   * __restrict  tmp___14 ;
  FILE *tmp___15 ;
  int *tmp___16 ;
  char const   *tmp___17 ;
  int *tmp___18 ;
  int *tmp___19 ;
  FILE *tmp___20 ;
  int *tmp___21 ;

  {
  {
# 1350
  cmds = file->cmds;
# 1357
  start_waiting_jobs();
# 1360
  reap_children(0, 0);
# 1363
  chop_commands(cmds);
# 1366
  lines = (char **)xmalloc(cmds->ncommand_lines * sizeof(char *));
# 1367
  i = 0U;
  }
# 1367
  while (i < cmds->ncommand_lines) {
    {
# 1383
    out = (*(cmds->command_lines + i));
# 1383
    in = out;
    }
# 1384
    while (1) {
      {
# 1384
      ref___0 = strchr((char const   *)in, (int )'$');
      }
# 1384
      if (! ((unsigned int )ref___0 != (unsigned int )((char *)0))) {
# 1384
        break;
      }
      {
# 1386
      ref___0 ++;
      }
# 1388
      if ((unsigned int )out != (unsigned int )in) {
        {
# 1392
        memmove((void *)out, (void const   *)in, (unsigned int )(ref___0 - in));
        }
      }
      {
# 1395
      out += ref___0 - in;
# 1396
      in = ref___0;
      }
# 1398
      if ((int )(*ref___0) == 40) {
        goto _L___1;
      } else {
# 1398
        if ((int )(*ref___0) == 123) {
          _L___1: 
          {
# 1400
          openparen = (*ref___0);
          }
# 1401
          if ((int )openparen == 40) {
            {
# 1401
            tmp___0 = (int )')';
            }
          } else {
            {
# 1401
            tmp___0 = (int )'}';
            }
          }
          {
# 1401
          closeparen = (char )tmp___0;
# 1405
          tmp___1 = out;
# 1405
          out ++;
# 1405
          tmp___2 = in;
# 1405
          in ++;
# 1405
          (*tmp___1) = (*tmp___2);
# 1408
          count = 0;
          }
# 1409
          while ((int )(*in) != 0) {
# 1411
            if ((int )(*in) == (int )closeparen) {
              {
# 1411
              count --;
              }
# 1411
              if (count < 0) {
# 1412
                break;
              } else {
                goto _L___0;
              }
            } else {
              _L___0: 
# 1413
              if ((int )(*in) == 92) {
# 1413
                if ((int )(*(in + 1)) == 10) {
                  {
# 1419
                  quoted = 0;
# 1420
                  p = in - 1;
                  }
# 1420
                  while (1) {
# 1420
                    if ((unsigned int )p > (unsigned int )ref___0) {
# 1420
                      if (! ((int )(*p) == 92)) {
# 1420
                        break;
                      }
                    } else {
# 1420
                      break;
                    }
                    {
# 1421
                    quoted = ! quoted != 0;
# 1420
                    p --;
                    }
                  }
# 1423
                  if (quoted) {
                    {
# 1429
                    tmp___3 = out;
# 1429
                    out ++;
# 1429
                    tmp___4 = in;
# 1429
                    in ++;
# 1429
                    (*tmp___3) = (*tmp___4);
                    }
                  } else {
                    {
# 1434
                    in = next_token((char const   *)(in + 2));
                    }
# 1438
                    while (1) {
# 1438
                      if ((unsigned int )out > (unsigned int )ref___0) {
                        {
# 1438
                        tmp___5 = _get__ctype_b((int )((unsigned char )(*(out +
                                                                          -1))));
                        }
# 1438
                        if (! (tmp___5 & 1)) {
# 1438
                          break;
                        }
                      } else {
# 1438
                        break;
                      }
                      {
# 1440
                      out --;
                      }
                    }
                    {
# 1443
                    tmp___6 = out;
# 1443
                    out ++;
# 1443
                    (*tmp___6) = ' ';
                    }
                  }
                } else {
                  goto _L;
                }
              } else {
                _L: 
# 1448
                if ((int )(*in) == (int )openparen) {
                  {
# 1449
                  count ++;
                  }
                }
                {
# 1451
                tmp___7 = out;
# 1451
                out ++;
# 1451
                tmp___8 = in;
# 1451
                in ++;
# 1451
                (*tmp___7) = (*tmp___8);
                }
              }
            }
          }
        }
      }
    }
# 1459
    if ((unsigned int )out != (unsigned int )in) {
      {
# 1460
      strcpy((char */* __restrict  */)out,
             (char const   */* __restrict  */)((char const   *)in));
      }
    }
    {
# 1463
    (*(lines + i)) = allocated_variable_expand_for_file((*(cmds->command_lines +
                                                           i)), file);
# 1367
    i ++;
    }
  }
  {
# 1470
  c = (struct child *)xmalloc(sizeof(struct child ));
# 1471
  memset((void *)((char *)c), 0, sizeof(struct child ));
# 1472
  c->file = file;
# 1473
  c->command_lines = lines;
# 1474
  c->sh_batch_file = (char *)((void *)0);
# 1477
  job_next_command(c);
  }
# 1482
  if (job_slots != 0U) {
# 1483
    while (job_slots_used == job_slots) {
      {
# 1484
      reap_children(1, 0);
      }
    }
  } else {
# 1499
    if (job_fds[0] >= 0) {
# 1500
      while (1) {
# 1506
        while (1) {
# 1506
          if (4 & db_level) {
# 1506
            if (children) {
              {
# 1506
              tmp___10 = (char const   *)"";
              }
            } else {
              {
# 1506
              tmp___10 = (char const   *)"don\'t ";
              }
            }
            {
# 1506
            printf((char const   */* __restrict  */)((char const   *)"Need a job token; we %shave children\n"),
                   tmp___10);
# 1506
            tmp___11 = get_stdout();
            {
# 105 "spec.work"
            tmp___11->__BLAST_FLAG = 1;
            {

            }
            }
# 1506 "job.c"
            fflush(tmp___11);
            }
          }
# 1506
          break;
        }
# 1510
        if (! children) {
# 1511
          break;
        }
# 1536
        if (job_rfd < 0) {
# 1538
          while (1) {
# 1538
            if (4 & db_level) {
              {
# 1538
              printf((char const   */* __restrict  */)((char const   *)"Duplicate the job FD\n"));
# 1538
              tmp___12 = get_stdout();
              {
# 105 "spec.work"
              tmp___12->__BLAST_FLAG = 1;
              {

              }
              }
# 1538 "job.c"
              fflush(tmp___12);
              }
            }
# 1538
            break;
          }
          {
# 1539
          job_rfd = dup(job_fds[0]);
          }
        }
        {
# 1543
        reap_children(0, 0);
        }
# 1546
        if (! children) {
# 1547
          break;
        }
        {
# 1550
        set_child_handler_action_flags(0);
# 1551
        got_token = read(job_rfd, (void *)(& token), 1U);
# 1552
        tmp___13 = __errno_location();
# 1552
        saved_errno = (*tmp___13);
# 1553
        set_child_handler_action_flags(268435456);
        }
# 1556
        if (got_token == 1) {
# 1558
          while (1) {
# 1558
            if (4 & db_level) {
              {
# 1558
              tmp___14 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                    (char const   *)"Obtained token for child 0x%08lx (%s).\n",
                                                                    5);
# 1558
              printf(tmp___14, (unsigned long )c, (c->file)->name);
# 1558
              tmp___15 = get_stdout();
              {
# 105 "spec.work"
              tmp___15->__BLAST_FLAG = 1;
              {

              }
              }
# 1558 "job.c"
              fflush(tmp___15);
              }
            }
# 1558
            break;
          }
# 1560
          break;
        }
        {
# 1565
        tmp___16 = __errno_location();
# 1565
        (*tmp___16) = saved_errno;
# 1566
        tmp___18 = __errno_location();
        }
# 1566
        if ((*tmp___18) != 4) {
          {
# 1566
          tmp___19 = __errno_location();
          }
# 1566
          if ((*tmp___19) != 9) {
            {
# 1567
            tmp___17 = (char const   *)dcgettext((char const   *)((void *)0),
                                                 (char const   *)"read jobs pipe",
                                                 5);
# 1567
            pfatal_with_name(tmp___17);
            }
          }
        }
        {
# 1568
        tmp___21 = __errno_location();
        }
# 1568
        if ((*tmp___21) == 9) {
# 1569
          while (1) {
# 1569
            if (4 & db_level) {
              {
# 1569
              printf((char const   */* __restrict  */)((char const   *)"Read returned EBADF.\n"));
# 1569
              tmp___20 = get_stdout();
              {
# 105 "spec.work"
              tmp___20->__BLAST_FLAG = 1;
              {

              }
              }
# 1569 "job.c"
              fflush(tmp___20);
              }
            }
# 1569
            break;
          }
        }
      }
    }
  }
  {
# 1575
  start_waiting_job(c);
  }
# 1577
  if (job_slots == 1U) {
    goto _L___2;
  } else {
# 1577
    if (not_parallel) {
      _L___2: 
# 1580
      while (file->command_state == 2) {
        {
# 1581
        reap_children(1, 0);
        }
      }
    }
  }
# 1583
  return;
}
}
# 1589
static int job_next_command(struct child *child ) 
{ unsigned int tmp ;

  {
# 1593
  while (1) {
# 1593
    if (! ((unsigned int )child->command_ptr == (unsigned int )((char *)0))) {
# 1593
      if (! ((int )(*(child->command_ptr)) == 0)) {
# 1593
        break;
      }
    }
# 1596
    if (child->command_line == ((child->file)->cmds)->ncommand_lines) {
      {
# 1599
      child->command_ptr = (char *)0;
      }
# 1600
      return (0);
    } else {
      {
# 1604
      tmp = child->command_line;
# 1604
      child->command_line = child->command_line + 1U;
# 1604
      child->command_ptr = (*(child->command_lines + tmp));
      }
    }
  }
# 1606
  return (1);
}
}
# 1623
static int lossage   = -1;
# 1609
static int load_too_high(void) 
{ double load ;
  char const   *tmp ;
  char const   *tmp___0 ;
  int *tmp___1 ;
  int *tmp___2 ;
  int *tmp___3 ;
  int tmp___4 ;
  FILE *tmp___5 ;

  {
# 1617
  if (max_load_average < (double )0) {
# 1618
    return (0);
  }
  {
# 1620
  make_access();
# 1621
  tmp___4 = getloadavg(& load, 1);
  }
# 1621
  if (tmp___4 != 1) {
# 1625
    if (lossage == -1) {
      goto _L;
    } else {
      {
# 1625
      tmp___2 = __errno_location();
      }
# 1625
      if ((*tmp___2) != lossage) {
        _L: 
        {
# 1627
        tmp___1 = __errno_location();
        }
# 1627
        if ((*tmp___1) == 0) {
          {
# 1629
          tmp = (char const   *)dcgettext((char const   *)((void *)0),
                                          (char const   *)"cannot enforce load limits on this operating system",
                                          5);
# 1629
          error((struct floc  const  *)((struct floc *)0), tmp);
          }
        } else {
          {
# 1632
          tmp___0 = (char const   *)dcgettext((char const   *)((void *)0),
                                              (char const   *)"cannot enforce load limit: ",
                                              5);
# 1632
          perror_with_name(tmp___0, (char const   *)"getloadavg");
          }
        }
      }
    }
    {
# 1634
    tmp___3 = __errno_location();
# 1634
    lossage = (*tmp___3);
# 1635
    load = (double )0;
    }
  }
  {
# 1637
  user_access();
  }
# 1639
  while (1) {
# 1639
    if (4 & db_level) {
      {
# 1639
      printf((char const   */* __restrict  */)((char const   *)"Current system load = %f (max requested = %f)\n"),
             load, max_load_average);
# 1639
      tmp___5 = get_stdout();
      {
# 105 "spec.work"
      tmp___5->__BLAST_FLAG = 1;
      {

      }
      }
# 1639 "job.c"
      fflush(tmp___5);
      }
    }
# 1639
    break;
  }
# 1641
  return (load >= max_load_average);
}
}
# 1647
void start_waiting_jobs(void) 
{ struct child *job ;
  int tmp ;

  {
# 1652
  if ((unsigned int )waiting_jobs == (unsigned int )((struct child *)0)) {
# 1653
    return;
  }
# 1655
  while (1) {
    {
# 1658
    reap_children(0, 0);
# 1661
    job = waiting_jobs;
# 1662
    waiting_jobs = job->next;
# 1655
    tmp = start_waiting_job(job);
    }
# 1655
    if (tmp) {
# 1655
      if (! ((unsigned int )waiting_jobs != (unsigned int )((struct child *)0))) {
# 1655
        break;
      }
    } else {
# 1655
      break;
    }
  }
# 1669
  return;
}
}
# 2228
void child_execute_job(int stdin_fd , int stdout_fd , char **argv , char **envp ) 
{ 

  {
# 2233
  if (stdin_fd != 0) {
    {
# 2234
    dup2(stdin_fd, 0);
    }
  }
# 2235
  if (stdout_fd != 1) {
    {
# 2236
    dup2(stdout_fd, 1);
    }
  }
# 2237
  if (stdin_fd != 0) {
    {
# 2238
    close(stdin_fd);
    }
  }
# 2239
  if (stdout_fd != 1) {
    {
# 2240
    close(stdout_fd);
    }
  }
  {
# 2243
  exec_command(argv, envp);
  }
# 2244
  return;
}
}
# 2253
void exec_command(char **argv , char **envp ) 
{ int *tmp ;
  char const   *tmp___0 ;
  char *shell ;
  char **new_argv ;
  int argc ;
  char const   *tmp___2 ;
  int *tmp___3 ;

  {
  {
# 2323
  child_access();
# 2326
  environ = envp;
# 2327
  execvp((char const   *)(*(argv + 0)), (char * const  *)argv);
# 2329
  tmp = __errno_location();
  }
# 2329
  switch ((*tmp)) {
  case 2: 
  {
# 2332
  tmp___0 = (char const   *)dcgettext((char const   *)((void *)0),
                                      (char const   *)"%s: Command not found", 5);
# 2332
  error((struct floc  const  *)((struct floc *)0), tmp___0, (*(argv + 0)));
  }
# 2333
  break;
  case 8: 
  {
# 2342
  shell = getenv((char const   *)"SHELL");
  }
# 2343
  if ((unsigned int )shell == (unsigned int )((char *)0)) {
    {
# 2344
    shell = default_shell;
    }
  }
  {
# 2346
  argc = 1;
  }
# 2347
  while ((unsigned int )(*(argv + argc)) != (unsigned int )((char *)0)) {
    {
# 2348
    argc ++;
    }
  }
  {
# 2350
  new_argv = (char **)__builtin_alloca((unsigned int )((1 + argc) + 1) *
                                       sizeof(char *));
# 2351
  (*(new_argv + 0)) = shell;
# 2352
  (*(new_argv + 1)) = (*(argv + 0));
  }
# 2353
  while (argc > 0) {
    {
# 2355
    (*(new_argv + (1 + argc))) = (*(argv + argc));
# 2356
    argc --;
    }
  }
  {
# 2359
  execvp((char const   *)shell, (char * const  *)new_argv);
# 2360
  tmp___3 = __errno_location();
  }
# 2360
  if ((*tmp___3) == 2) {
    {
# 2361
    tmp___2 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"%s: Shell program not found",
                                        5);
# 2361
    error((struct floc  const  *)((struct floc *)0), tmp___2, shell);
    }
  } else {
    {
# 2363
    perror_with_name((char const   *)"execvp: ", (char const   *)shell);
    }
  }
# 2364
  break;
  default: 
  {
# 2368
  perror_with_name((char const   *)"execvp: ", (char const   *)(*(argv + 0)));
  }
# 2369
  break;
  }
  {
# 2372
  _exit(127);
  }
# 2372
  return;
}
}
# 2482
static char **construct_command_argv_internal(char *line , char **restp ,
                                              char *shell , char *ifs ,
                                              char **batch_filename_ptr ) ;
# 2482
static char sh_chars[20]   = 
# 2482
  {'#', ';', '\"', '*', '?', '[', ']', '&', '|', '<', '>', '(', ')', '{', '}',
   '$', '`', '^', '~', '\0'};
# 2483
static char *sh_cmds[25]   = 
# 2483
  {"cd", "eval", "exec", "exit", "login", "logout", "set", "umask", "wait",
   "while", "for", "case", "if", ":", ".", "break", "continue", "export",
   "read", "readonly", "shift", "times", "trap", "switch", (char *)0};
# 2852
static char minus_c[5]   = {' ', '-', 'c', ' ', '\0'};
# 2404
static char **construct_command_argv_internal(char *line , char **restp ,
                                              char *shell , char *ifs ,
                                              char **batch_filename_ptr ) 
{ register int i ;
  register char *p ;
  register char *ap ;
  char *end ;
  int instring ;
  int word_has_equals ;
  int seen_nonequals ;
  int last_argument_was_empty ;
  char **new_argv ;
  int tmp ;
  int tmp___0 ;
  size_t tmp___1 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  size_t tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  register int j ;
  int tmp___12 ;
  char *tmp___13 ;
  char *tmp___14 ;
  register int j___0 ;
  int tmp___15 ;
  unsigned int shell_len ;
  unsigned int tmp___16 ;
  unsigned int line_len ;
  unsigned int tmp___17 ;
  char *new_line ;
  char *tmp___18 ;
  char *command_ptr ;
  size_t tmp___19 ;
  char *tmp___20 ;
  char *tmp___21 ;
  char *tmp___22 ;
  int tmp___23 ;
  char *tmp___24 ;
  char *tmp___25 ;
  char const   *tmp___26 ;

  {
  {
# 2496
  new_argv = (char **)0;
  }
# 2509
  if ((unsigned int )restp != (unsigned int )((void *)0)) {
    {
# 2510
    (*restp) = (char *)((void *)0);
    }
  }
# 2513
  while (1) {
    {
# 2513
    tmp = _get__ctype_b((int )((unsigned char )(*line)));
    }
# 2513
    if (! (tmp & 1)) {
# 2513
      break;
    }
    {
# 2514
    line ++;
    }
  }
# 2515
  if ((int )(*line) == 0) {
# 2516
    return ((char **)0);
  }
# 2519
  if ((unsigned int )shell == (unsigned int )((char *)0)) {
    {
# 2520
    shell = default_shell;
    }
  } else {
    {
# 2557
    tmp___0 = strcmp((char const   *)shell, (char const   *)(default_shell));
    }
# 2557
    if (tmp___0) {
      goto slow;
    }
  }
# 2562
  if ((unsigned int )ifs != (unsigned int )((char *)0)) {
    {
# 2563
    ap = ifs;
    }
# 2563
    while ((int )(*ap) != 0) {
# 2564
      if ((int )(*ap) != 32) {
# 2564
        if ((int )(*ap) != 9) {
# 2564
          if ((int )(*ap) != 10) {
            goto slow;
          }
        }
      }
      {
# 2563
      ap ++;
      }
    }
  }
  {
# 2567
  tmp___1 = strlen((char const   *)line);
# 2567
  i = (int )(tmp___1 + 1U);
# 2570
  new_argv = (char **)xmalloc((unsigned int )i * sizeof(char *));
# 2573
  tmp___3 = xmalloc((unsigned int )i);
# 2573
  (*(new_argv + 0)) = tmp___3;
# 2573
  ap = (*(new_argv + 0));
# 2574
  end = ap + i;
# 2577
  i = 0;
# 2578
  last_argument_was_empty = 0;
# 2578
  seen_nonequals = last_argument_was_empty;
# 2578
  word_has_equals = seen_nonequals;
# 2578
  instring = word_has_equals;
# 2579
  p = line;
  }
# 2579
  while ((int )(*p) != 0) {
# 2581
    if ((unsigned int )ap > (unsigned int )end) {
      {
# 2582
      abort();
      }
    }
# 2584
    if (instring) {
      string_char: 
# 2589
      if ((int )(*p) == instring) {
        {
# 2591
        instring = 0;
        }
# 2592
        if ((unsigned int )ap == (unsigned int )(*(new_argv + 0))) {
          {
# 2593
          last_argument_was_empty = 1;
          }
        } else {
# 2592
          if ((int )(*(ap - 1)) == 0) {
            {
# 2593
            last_argument_was_empty = 1;
            }
          }
        }
      } else {
# 2595
        if ((int )(*p) == 92) {
# 2595
          if ((int )(*(p + 1)) == 10) {
            goto swallow_escaped_newline;
          } else {
            goto _L___0;
          }
        } else {
          _L___0: 
# 2597
          if ((int )(*p) == 10) {
# 2597
            if ((unsigned int )restp != (unsigned int )((void *)0)) {
              {
# 2600
              (*restp) = p;
              }
              goto end_of_line;
            } else {
              goto _L;
            }
          } else {
            _L: 
# 2607
            if (instring == 34) {
              {
# 2607
              tmp___5 = strchr((char const   *)"\\$`", (int )(*p));
              }
# 2607
              if ((unsigned int )tmp___5 != (unsigned int )((char *)0)) {
# 2607
                if (unixy_shell) {
                  goto slow;
                } else {
                  {
# 2610
                  tmp___4 = ap;
# 2610
                  ap ++;
# 2610
                  (*tmp___4) = (*p);
                  }
                }
              } else {
                {
# 2610
                tmp___4 = ap;
# 2610
                ap ++;
# 2610
                (*tmp___4) = (*p);
                }
              }
            } else {
              {
# 2610
              tmp___4 = ap;
# 2610
              ap ++;
# 2610
              (*tmp___4) = (*p);
              }
            }
          }
        }
      }
    } else {
      {
# 2612
      tmp___14 = strchr((char const   *)(sh_chars), (int )(*p));
      }
# 2612
      if ((unsigned int )tmp___14 != (unsigned int )((char *)0)) {
        goto slow;
      } else {
# 2622
        switch ((int )(*p)) {
        case 61: 
        {

        }
# 2629
        if (! seen_nonequals) {
# 2629
          if (unixy_shell) {
            goto slow;
          }
        }
        {
# 2631
        word_has_equals = 1;
# 2632
        tmp___6 = ap;
# 2632
        ap ++;
# 2632
        (*tmp___6) = '=';
        }
# 2633
        break;
        case 92: 
        {

        }
# 2637
        if ((int )(*(p + 1)) == 10) {
          swallow_escaped_newline: 
          {
# 2643
          p += 2;
          }
# 2649
          if ((int )(*p) == 9) {
            {
# 2653
            tmp___7 = strlen((char const   *)p);
# 2653
            memmove((void *)p, (void const   *)(p + 1), tmp___7);
            }
          }
# 2655
          if (instring) {
            goto string_char;
          } else {
# 2659
            if ((unsigned int )ap != (unsigned int )(*(new_argv + i))) {
              goto end_of_arg;
            } else {
              {
# 2665
              tmp___8 = next_token((char const   *)p);
# 2665
              p = tmp___8 - 1;
              }
            }
          }
        } else {
# 2668
          if ((int )(*(p + 1)) != 0) {
            {
# 2697
            tmp___9 = ap;
# 2697
            ap ++;
# 2697
            p ++;
# 2697
            (*tmp___9) = (*p);
            }
          }
        }
# 2699
        break;
        case 39: 
        {

        }
        case 34: 
        {
# 2703
        instring = (int )(*p);
        }
# 2704
        break;
        case 10: 
        {

        }
# 2707
        if ((unsigned int )restp != (unsigned int )((void *)0)) {
          {
# 2710
          (*restp) = p;
          }
          goto end_of_line;
        } else {
          {
# 2715
          tmp___10 = ap;
# 2715
          ap ++;
# 2715
          (*tmp___10) = '\n';
          }
        }
# 2716
        break;
        case 32: 
        {

        }
        case 9: 
        {

        }
        end_of_arg: 
        {
# 2723
        tmp___11 = ap;
# 2723
        ap ++;
# 2723
        (*tmp___11) = '\0';
# 2724
        i ++;
# 2724
        (*(new_argv + i)) = ap;
# 2725
        last_argument_was_empty = 0;
# 2729
        seen_nonequals |= ! word_has_equals != 0;
        }
# 2730
        if (word_has_equals) {
# 2730
          if (! seen_nonequals) {
            goto slow;
          }
        }
        {
# 2734
        word_has_equals = 0;
        }
# 2739
        if (i == 1) {
          {
# 2742
          j = 0;
          }
# 2742
          while ((unsigned int )sh_cmds[j] != (unsigned int )((char *)0)) {
# 2743
            if ((unsigned int )sh_cmds[j] == (unsigned int )(*(new_argv + 0))) {
              goto slow;
            } else {
# 2743
              if ((int )(*(sh_cmds[j])) == (int )(*((*(new_argv + 0))))) {
# 2743
                if ((int )(*(sh_cmds[j])) == 0) {
                  goto slow;
                } else {
                  {
# 2743
                  tmp___12 = strcmp((char const   *)(sh_cmds[j] + 1),
                                    (char const   *)((*(new_argv + 0)) + 1));
                  }
# 2743
                  if (! tmp___12) {
                    goto slow;
                  }
                }
              }
            }
            {
# 2742
            j ++;
            }
          }
        }
        {
# 2748
        p = next_token((char const   *)p);
# 2750
        p --;
        }
# 2751
        break;
        default: 
        {
# 2754
        tmp___13 = ap;
# 2754
        ap ++;
# 2754
        (*tmp___13) = (*p);
        }
# 2755
        break;
        }
      }
    }
    {
# 2579
    p ++;
    }
  }
  end_of_line: 
# 2760
  if (instring) {
    goto slow;
  }
  {
# 2766
  (*ap) = '\0';
  }
# 2767
  if ((int )(*((*(new_argv + i)) + 0)) != 0) {
    {
# 2768
    i ++;
    }
  } else {
# 2767
    if (last_argument_was_empty) {
      {
# 2768
      i ++;
      }
    }
  }
  {
# 2769
  (*(new_argv + i)) = (char *)0;
  }
# 2771
  if (i == 1) {
    {
# 2774
    j___0 = 0;
    }
# 2774
    while ((unsigned int )sh_cmds[j___0] != (unsigned int )((char *)0)) {
# 2775
      if ((unsigned int )sh_cmds[j___0] == (unsigned int )(*(new_argv + 0))) {
        goto slow;
      } else {
# 2775
        if ((int )(*(sh_cmds[j___0])) == (int )(*((*(new_argv + 0))))) {
# 2775
          if ((int )(*(sh_cmds[j___0])) == 0) {
            goto slow;
          } else {
            {
# 2775
            tmp___15 = strcmp((char const   *)(sh_cmds[j___0] + 1),
                              (char const   *)((*(new_argv + 0)) + 1));
            }
# 2775
            if (! tmp___15) {
              goto slow;
            }
          }
        }
      }
      {
# 2774
      j___0 ++;
      }
    }
  }
# 2779
  if ((unsigned int )(*(new_argv + 0)) == (unsigned int )((char *)0)) {
# 2781
    return ((char **)0);
  } else {
# 2783
    return (new_argv);
  }
  slow: 
  {

  }
# 2788
  if ((unsigned int )new_argv != (unsigned int )((char **)0)) {
    {
# 2791
    free((void *)(*(new_argv + 0)));
# 2792
    free((void *)new_argv);
    }
  }
  {
# 2850
  tmp___16 = strlen((char const   *)shell);
# 2850
  shell_len = tmp___16;
# 2856
  tmp___17 = strlen((char const   *)line);
# 2856
  line_len = tmp___17;
# 2858
  tmp___18 = (char *)__builtin_alloca(((shell_len + (sizeof(minus_c) - 1U)) +
                                       line_len * 2U) + 1U);
# 2858
  new_line = tmp___18;
# 2860
  command_ptr = (char *)((void *)0);
# 2862
  ap = new_line;
# 2863
  memmove((void *)ap, (void const   *)shell, shell_len);
# 2864
  ap += shell_len;
# 2865
  memmove((void *)ap, (void const   *)(minus_c), sizeof(minus_c) - 1U);
# 2866
  ap += sizeof(minus_c) - 1U;
# 2867
  command_ptr = ap;
# 2868
  p = line;
  }
# 2868
  while ((int )(*p) != 0) {
# 2870
    if ((unsigned int )restp != (unsigned int )((void *)0)) {
# 2870
      if ((int )(*p) == 10) {
        {
# 2872
        (*restp) = p;
        }
# 2873
        break;
      } else {
        goto _L___1;
      }
    } else {
      _L___1: 
# 2875
      if ((int )(*p) == 92) {
# 2875
        if ((int )(*(p + 1)) == 10) {
          {
# 2880
          p += 2;
          }
# 2886
          if ((int )(*p) == 9) {
            {
# 2887
            tmp___19 = strlen((char const   *)p);
# 2887
            memmove((void *)p, (void const   *)(p + 1), tmp___19);
            }
          }
          {
# 2889
          p = next_token((char const   *)p);
# 2890
          p --;
          }
# 2891
          if (unixy_shell) {
# 2891
            if (! batch_mode_shell) {
              {
# 2892
              tmp___20 = ap;
# 2892
              ap ++;
# 2892
              (*tmp___20) = '\\';
              }
            }
          }
          {
# 2893
          tmp___21 = ap;
# 2893
          ap ++;
# 2893
          (*tmp___21) = ' ';
          }
          goto __Cont;
        }
      }
    }
# 2898
    if (unixy_shell) {
# 2898
      if (! batch_mode_shell) {
# 2898
        if ((int )(*p) == 92) {
          {
# 2902
          tmp___22 = ap;
# 2902
          ap ++;
# 2902
          (*tmp___22) = '\\';
          }
        } else {
# 2898
          if ((int )(*p) == 39) {
            {
# 2902
            tmp___22 = ap;
# 2902
            ap ++;
# 2902
            (*tmp___22) = '\\';
            }
          } else {
# 2898
            if ((int )(*p) == 34) {
              {
# 2902
              tmp___22 = ap;
# 2902
              ap ++;
# 2902
              (*tmp___22) = '\\';
              }
            } else {
              {
# 2898
              tmp___23 = _get__ctype_b((int )((unsigned char )(*p)));
              }
# 2898
              if (tmp___23 & 8192) {
                {
# 2902
                tmp___22 = ap;
# 2902
                ap ++;
# 2902
                (*tmp___22) = '\\';
                }
              } else {
                {
# 2898
                tmp___24 = strchr((char const   *)(sh_chars), (int )(*p));
                }
# 2898
                if ((unsigned int )tmp___24 != (unsigned int )((char *)0)) {
                  {
# 2902
                  tmp___22 = ap;
# 2902
                  ap ++;
# 2902
                  (*tmp___22) = '\\';
                  }
                }
              }
            }
          }
        }
      }
    }
    {
# 2912
    tmp___25 = ap;
# 2912
    ap ++;
# 2912
    (*tmp___25) = (*p);
    }
    __Cont: 
    {
# 2868
    p ++;
    }
  }
# 2914
  if ((unsigned int )ap == (unsigned int )(((new_line + shell_len) +
                                            sizeof(minus_c)) - 1)) {
# 2916
    return ((char **)0);
  }
  {
# 2917
  (*ap) = '\0';
  }
# 2971
  if (unixy_shell) {
    {
# 2972
    new_argv = construct_command_argv_internal(new_line, (char **)((void *)0),
                                               (char *)0, (char *)0, (char **)0);
    }
  } else {
    {
# 2990
    tmp___26 = (char const   *)dcgettext((char const   *)((void *)0),
                                         (char const   *)"%s (line %d) Bad shell context (!unixy && !batch_mode_shell)\n",
                                         5);
# 2990
    fatal((struct floc  const  *)((struct floc *)0), tmp___26, "job.c", 2991);
    }
  }
# 2996
  return (new_argv);
}
}
# 3013
char **construct_command_argv(char *line , char **restp , struct file *file ,
                              char **batch_filename_ptr ) 
{ char *shell ;
  char *ifs ;
  char **argv ;
  int save ;

  {
  {
# 3065
  save = warn_undefined_variables_flag;
# 3066
  warn_undefined_variables_flag = 0;
# 3068
  shell = allocated_variable_expand_for_file("$(SHELL)", file);
# 3079
  ifs = allocated_variable_expand_for_file("$(IFS)", file);
# 3081
  warn_undefined_variables_flag = save;
# 3084
  argv = construct_command_argv_internal(line, restp, shell, ifs,
                                         batch_filename_ptr);
# 3086
  free((void *)shell);
# 3087
  free((void *)ifs);
  }
# 3089
  return (argv);
}
}
# 49 "main.c"
void remote_setup(void) ;
# 50
void remote_cleanup(void) ;
# 53
void print_variable_data_base(void) ;
# 55
void print_rule_data_base(void) ;
# 57
void print_vpath_data_base(void) ;
# 73
static void print_data_base(void) ;
# 74
static void print_version(void) ;
# 75
static void decode_switches(int argc , char **argv , int env ) ;
# 76
static void decode_env_switches(char *envar , unsigned int len ) ;
# 77
static void define_makeflags(int all , int makefile ) ;
# 78
static char *quote_for_env(char *out , char *in ) ;
# 79
static void initialize_global_hash_tables(void) ;
# 143
static struct stringlist *db_flags  ;
# 144
static int debug_flag   = 0;
# 146
int db_level   = 0;
# 156
int env_overrides   = 0;
# 161
int ignore_errors_flag   = 0;
# 166
int print_data_base_flag   = 0;
# 171
int question_flag   = 0;
# 175
int no_builtin_rules_flag   = 0;
# 176
int no_builtin_variables_flag   = 0;
# 181
int default_keep_going_flag   = 0;
# 185
int print_directory_flag   = 0;
# 190
int inhibit_print_directory_flag   = 0;
# 194
int print_version_flag   = 0;
# 198
static struct stringlist *makefiles   = (struct stringlist *)0;
# 202
unsigned int job_slots   = 1U;
# 203
unsigned int default_job_slots   = 1U;
# 207
static unsigned int inf_jobs   = 0U;
# 211
static struct stringlist *jobserver_fds   = (struct stringlist *)0;
# 213
int job_fds[2]   = {-1, -1};
# 214
int job_rfd   = -1;
# 221
double max_load_average   = - 1.0;
# 222
double default_load_average   = - 1.0;
# 230
static struct stringlist *directories___0   = (struct stringlist *)0;
# 234
static struct stringlist *include_directories   = (struct stringlist *)0;
# 238
static struct stringlist *old_files   = (struct stringlist *)0;
# 242
static struct stringlist *new_files   = (struct stringlist *)0;
# 246
static int print_usage_flag   = 0;
# 256
int always_make_flag   = 0;
# 262
static char const   * const  usage[29]   = 
# 262
  {(char const   */* const  */)((char const   *)"Options:\n"),
   (char const   */* const  */)((char const   *)"  -b, -m                      Ignored for compatibility.\n"),
   (char const   */* const  */)((char const   *)"  -B, --always-make           Unconditionally make all targets.\n"),
   (char const   */* const  */)((char const   *)"  -C DIRECTORY, --directory=DIRECTORY\n                              Change to DIRECTORY before doing anything.\n"),
   (char const   */* const  */)((char const   *)"  -d                          Print lots of debugging information.\n"),
   (char const   */* const  */)((char const   *)"  --debug[=FLAGS]             Print various types of debugging information.\n"),
   (char const   */* const  */)((char const   *)"  -e, --environment-overrides\n                              Environment variables override makefiles.\n"),
   (char const   */* const  */)((char const   *)"  -f FILE, --file=FILE, --makefile=FILE\n                              Read FILE as a makefile.\n"),
   (char const   */* const  */)((char const   *)"  -h, --help                  Print this message and exit.\n"),
   (char const   */* const  */)((char const   *)"  -i, --ignore-errors         Ignore errors from commands.\n"),
   (char const   */* const  */)((char const   *)"  -I DIRECTORY, --include-dir=DIRECTORY\n                              Search DIRECTORY for included makefiles.\n"),
   (char const   */* const  */)((char const   *)"  -j [N], --jobs[=N]          Allow N jobs at once; infinite jobs with no arg.\n"),
   (char const   */* const  */)((char const   *)"  -k, --keep-going            Keep going when some targets can\'t be made.\n"),
   (char const   */* const  */)((char const   *)"  -l [N], --load-average[=N], --max-load[=N]\n                              Don\'t start multiple jobs unless load is below N.\n"),
   (char const   */* const  */)((char const   *)"  -n, --just-print, --dry-run, --recon\n                              Don\'t actually run any commands; just print them.\n"),
   (char const   */* const  */)((char const   *)"  -o FILE, --old-file=FILE, --assume-old=FILE\n                              Consider FILE to be very old and don\'t remake it.\n"),
   (char const   */* const  */)((char const   *)"  -p, --print-data-base       Print make\'s internal database.\n"),
   (char const   */* const  */)((char const   *)"  -q, --question              Run no commands; exit status says if up to date.\n"),
   (char const   */* const  */)((char const   *)"  -r, --no-builtin-rules      Disable the built-in implicit rules.\n"),
   (char const   */* const  */)((char const   *)"  -R, --no-builtin-variables  Disable the built-in variable settings.\n"),
   (char const   */* const  */)((char const   *)"  -s, --silent, --quiet       Don\'t echo commands.\n"),
   (char const   */* const  */)((char const   *)"  -S, --no-keep-going, --stop\n                              Turns off -k.\n"),
   (char const   */* const  */)((char const   *)"  -t, --touch                 Touch targets instead of remaking them.\n"),
   (char const   */* const  */)((char const   *)"  -v, --version               Print the version number of make and exit.\n"),
   (char const   */* const  */)((char const   *)"  -w, --print-directory       Print the current directory.\n"),
   (char const   */* const  */)((char const   *)"  --no-print-directory        Turn off -w, even if it was turned on implicitly.\n"),
   (char const   */* const  */)((char const   *)"  -W FILE, --what-if=FILE, --new-file=FILE, --assume-new=FILE\n                              Consider FILE to be infinitely new.\n"),
   (char const   */* const  */)((char const   *)"  --warn-undefined-variables  Warn when an undefined variable is referenced.\n"),
   (char const   */* const  */)((char const   *)((void *)0))};
# 333
static struct command_switch  const  switches[30]   = 
# 333
  {{(int )'b', (enum __anonenum_type_54 )5, (char *)0, 0U, 0U, 0U, (char *)0,
    (char *)0, (char *)0}, {(int )'B', (enum __anonenum_type_54 )0,
                            (char *)(& always_make_flag), 1U, 1U, 0U, (char *)0,
                            (char *)0, "always-make"},
   {(int )'C', (enum __anonenum_type_54 )2, (char *)(& directories___0), 0U, 0U,
    0U, (char *)0, (char *)0, "directory"},
   {(int )'d', (enum __anonenum_type_54 )0, (char *)(& debug_flag), 1U, 1U, 0U,
    (char *)0, (char *)0, (char *)0},
   {128, (enum __anonenum_type_54 )2, (char *)(& db_flags), 1U, 1U, 0U, "basic",
    (char *)0, "debug"}, {(int )'e', (enum __anonenum_type_54 )0,
                          (char *)(& env_overrides), 1U, 1U, 0U, (char *)0,
                          (char *)0, "environment-overrides"},
   {(int )'f', (enum __anonenum_type_54 )2, (char *)(& makefiles), 0U, 0U, 0U,
    (char *)0, (char *)0, "file"}, {(int )'h', (enum __anonenum_type_54 )0,
                                    (char *)(& print_usage_flag), 0U, 0U, 0U,
                                    (char *)0, (char *)0, "help"},
   {(int )'i', (enum __anonenum_type_54 )0, (char *)(& ignore_errors_flag), 1U,
    1U, 0U, (char *)0, (char *)0, "ignore-errors"},
   {(int )'I', (enum __anonenum_type_54 )2, (char *)(& include_directories), 1U,
    1U, 0U, (char *)0, (char *)0, "include-dir"},
   {(int )'j', (enum __anonenum_type_54 )3, (char *)(& job_slots), 1U, 1U, 0U,
    (char *)(& inf_jobs), (char *)(& default_job_slots), "jobs"},
   {129, (enum __anonenum_type_54 )2, (char *)(& jobserver_fds), 1U, 1U, 0U,
    (char *)0, (char *)0, "jobserver-fds"},
   {(int )'k', (enum __anonenum_type_54 )0, (char *)(& keep_going_flag), 1U, 1U,
    0U, (char *)0, (char *)(& default_keep_going_flag), "keep-going"},
   {(int )'l', (enum __anonenum_type_54 )4, (char *)(& max_load_average), 1U,
    1U, 0U, (char *)(& default_load_average), (char *)(& default_load_average),
    "load-average"}, {(int )'m', (enum __anonenum_type_54 )5, (char *)0, 0U, 0U,
                      0U, (char *)0, (char *)0, (char *)0},
   {(int )'n', (enum __anonenum_type_54 )0, (char *)(& just_print_flag), 1U, 1U,
    1U, (char *)0, (char *)0, "just-print"},
   {(int )'o', (enum __anonenum_type_54 )2, (char *)(& old_files), 0U, 0U, 0U,
    (char *)0, (char *)0, "old-file"},
   {(int )'p', (enum __anonenum_type_54 )0,
    (char *)(& print_data_base_flag), 1U,
    1U, 0U, (char *)0, (char *)0, "print-data-base"},
   {(int )'q', (enum __anonenum_type_54 )0, (char *)(& question_flag), 1U, 1U,
    1U, (char *)0, (char *)0, "question"},
   {(int )'r', (enum __anonenum_type_54 )0, (char *)(& no_builtin_rules_flag),
    1U, 1U, 0U, (char *)0, (char *)0, "no-builtin-rules"},
   {(int )'R', (enum __anonenum_type_54 )0,
    (char *)(& no_builtin_variables_flag), 1U, 1U, 0U, (char *)0, (char *)0,
    "no-builtin-variables"}, {(int )'s', (enum __anonenum_type_54 )0,
                              (char *)(& silent_flag), 1U, 1U, 0U, (char *)0,
                              (char *)0, "silent"},
   {(int )'S', (enum __anonenum_type_54 )1, (char *)(& keep_going_flag), 1U, 1U,
    0U, (char *)0, (char *)(& default_keep_going_flag), "no-keep-going"},
   {(int )'t', (enum __anonenum_type_54 )0, (char *)(& touch_flag), 1U, 1U, 1U,
    (char *)0, (char *)0, "touch"}, {(int )'v', (enum __anonenum_type_54 )0,
                                     (char *)(& print_version_flag), 1U, 1U, 0U,
                                     (char *)0, (char *)0, "version"},
   {(int )'w', (enum __anonenum_type_54 )0, (char *)(& print_directory_flag),
    1U, 1U, 0U, (char *)0, (char *)0, "print-directory"},
   {130, (enum __anonenum_type_54 )0, (char *)(& inhibit_print_directory_flag),
    1U, 1U, 0U, (char *)0, (char *)0, "no-print-directory"},
   {(int )'W', (enum __anonenum_type_54 )2, (char *)(& new_files), 0U, 0U, 0U,
    (char *)0, (char *)0, "what-if"},
   {131, (enum __anonenum_type_54 )0, (char *)(& warn_undefined_variables_flag),
    1U, 1U, 0U, (char *)0, (char *)0, "warn-undefined-variables"},
   {(int )'\0', (enum __anonenum_type_54 )0, (char *)0, 0U, 0U, 0U, (char *)0,
    (char *)0, (char *)0}};
# 393
static struct option long_option_aliases[9]   = 
# 393
  {{(char const   *)"quiet", 0, (int *)0, (int )'s'},
   {(char const   *)"stop", 0, (int *)0, (int )'S'},
   {(char const   *)"new-file", 1, (int *)0, (int )'W'},
   {(char const   *)"assume-new", 1, (int *)0, (int )'W'},
   {(char const   *)"assume-old", 1, (int *)0, (int )'o'},
   {(char const   *)"max-load", 2, (int *)0, (int )'l'},
   {(char const   *)"dry-run", 0, (int *)0, (int )'n'},
   {(char const   *)"recon", 0, (int *)0, (int )'n'},
   {(char const   *)"makefile", 1, (int *)0, (int )'f'}};
# 408
static struct dep *goals  ;
# 408
static struct dep *lastgoal  ;
# 418
static struct command_variable *command_variables  ;
# 426
char *directory_before_chdir  ;
# 497
static void initialize_global_hash_tables(void) 
{ 

  {
  {
# 500
  init_hash_global_variable_set();
# 501
  init_hash_files();
# 502
  hash_init_directories();
# 503
  hash_init_function_table();
  }
# 504
  return;
}
}
# 506
static struct file *enter_command_line_file(char *name ) 
{ char const   *tmp ;
  char *expanded ;
  char *tmp___0 ;
  char *tmp___1 ;
  struct file *tmp___2 ;

  {
# 510
  if ((int )(*(name + 0)) == 0) {
    {
# 511
    tmp = (char const   *)dcgettext((char const   *)((void *)0),
                                    (char const   *)"empty string invalid as file name",
                                    5);
# 511
    fatal((struct floc  const  *)((struct floc *)0), tmp);
    }
  }
# 513
  if ((int )(*(name + 0)) == 126) {
    {
# 515
    tmp___0 = tilde_expand(name);
# 515
    expanded = tmp___0;
    }
# 516
    if ((unsigned int )expanded != (unsigned int )((char *)0)) {
      {
# 517
      name = expanded;
      }
    }
  }
# 523
  while (1) {
# 523
    if ((int )(*(name + 0)) == 46) {
# 523
      if ((int )(*(name + 1)) == 47) {
# 523
        if (! ((int )(*(name + 2)) != 0)) {
# 523
          break;
        }
      } else {
# 523
        break;
      }
    } else {
# 523
      break;
    }
    {
# 525
    name += 2;
    }
# 526
    while ((int )(*name) == 47) {
      {
# 528
      name ++;
      }
    }
  }
# 531
  if ((int )(*name) == 0) {
# 535
    while (1) {
      {
# 536
      name --;
      }
# 535
      if (! ((int )(*(name + 0)) != 46)) {
# 535
        break;
      }
    }
    {
# 538
    (*(name + 2)) = '\0';
    }
  }
  {
# 541
  tmp___1 = xstrdup((char const   *)name);
# 541
  tmp___2 = enter_file(tmp___1);
  }
# 541
  return (tmp___2);
}
}
# 546
static void debug_signal_handler(int sig ) 
{ 

  {
# 550
  if (db_level) {
    {
# 550
    db_level = 0;
    }
  } else {
    {
# 550
    db_level = 1;
    }
  }
# 551
  return;
}
}
# 553
static void decode_debug_flags(void) 
{ char **pp ;
  char const   *p ;
  int tmp ;
  char const   *tmp___0 ;

  {
# 558
  if (debug_flag) {
    {
# 559
    db_level = 4095;
    }
  }
# 561
  if (! db_flags) {
# 562
    return;
  }
  {
# 564
  pp = db_flags->list;
  }
# 564
  while ((*pp)) {
    {
# 566
    p = (char const   *)(*pp);
    }
# 568
    while (1) {
      {
# 570
      tmp = tolower((int )(*(p + 0)));
      }
# 570
      switch (tmp) {
      case 97: 
      {
# 573
      db_level = db_level | 4095;
      }
# 574
      break;
      case 98: 
      {
# 576
      db_level = db_level | 1;
      }
# 577
      break;
      case 105: 
      {
# 579
      db_level = db_level | 9;
      }
# 580
      break;
      case 106: 
      {
# 582
      db_level = db_level | 4;
      }
# 583
      break;
      case 109: 
      {
# 585
      db_level = db_level | 257;
      }
# 586
      break;
      case 118: 
      {
# 588
      db_level = db_level | 3;
      }
# 589
      break;
      default: 
      {
# 591
      tmp___0 = (char const   *)dcgettext((char const   *)((void *)0),
                                          (char const   *)"unknown debug level specification `%s\'",
                                          5);
# 591
      fatal((struct floc  const  *)((struct floc *)0), tmp___0, p);
      }
      }
# 594
      while (1) {
        {
# 594
        p ++;
        }
# 594
        if (! ((int const   )(*p) != 0)) {
# 594
          break;
        }
# 595
        if ((int const   )(*p) == 44) {
# 596
          break;
        } else {
# 595
          if ((int const   )(*p) == 32) {
# 596
            break;
          }
        }
      }
# 598
      if ((int const   )(*p) == 0) {
# 599
        break;
      }
      {
# 601
      p ++;
      }
    }
    {
# 564
    pp ++;
    }
  }
# 604
  return;
}
}
# 788
FILE *open_tmpfile(char **name , char const   *template ) 
{ int fd ;
  size_t tmp ;
  FILE *tmp___0 ;

  {
  {
# 800
  tmp = strlen(template);
# 800
  (*name) = xmalloc(tmp + 1U);
# 801
  strcpy((char */* __restrict  */)(*name),
         (char const   */* __restrict  */)template);
# 805
  fd = mkstemp((*name));
  }
# 806
  if (fd == -1) {
# 807
    return ((FILE *)0);
  }
  {
# 808
  tmp___0 = fdopen(fd, (char const   *)"w");
  {
# 25 "spec.work"
  tmp___0->__BLAST_FLAG = 1;
  {

  }
  }

  }
# 808 "main.c"
  return (tmp___0);
}
}
# 840
static char *stdin_nm   = (char *)0;
# 831
int main(int argc , char **argv , char **envp ) 
{ register struct file *f ;
  register unsigned int i ;
  char **p ;
  struct dep *read_makefiles___0 ;
  char current_directory[4096] ;
  void (*tmp)(int  ) ;
  void (*tmp___0)(int  ) ;
  void (*tmp___1)(int  ) ;
  void (*tmp___2)(int  ) ;
  void (*tmp___3)(int  ) ;
  void (*tmp___4)(int  ) ;
  FILE * __restrict  tmp___5 ;
  char *tmp___6 ;
  struct variable *tmp___7 ;
  int do_not_define ;
  register char *ep ;
  struct variable *tmp___8 ;
  char *tmp___9 ;
  struct command_variable *cv ;
  struct variable *v ;
  unsigned int len ;
  char *value ;
  char *p___0 ;
  size_t tmp___10 ;
  size_t tmp___11 ;
  char *tmp___13 ;
  char *tmp___14 ;
  char *tmp___15 ;
  char *dir ;
  char *expanded ;
  char *tmp___16 ;
  int tmp___17 ;
  struct variable *v___0 ;
  struct variable *tmp___18 ;
  char **tmp___20 ;
  char *tmp___21 ;
  register unsigned int i___0 ;
  FILE *outfile ;
  char *template ;
  char *tmpdir ;
  char const   *tmp___22 ;
  size_t tmp___23 ;
  size_t tmp___25 ;
  char const   *tmp___26 ;
  char buf___1[2048] ;
  unsigned int n ;
  FILE * __restrict  tmp___27 ;
  unsigned int tmp___28 ;
  char const   *tmp___29 ;
  size_t tmp___30 ;
  FILE *tmp___31 ;
  int tmp___32 ;
  char **tmp___33 ;
  char *cp ;
  char const   *tmp___34 ;
  int tmp___35 ;
  char const   *tmp___36 ;
  int tmp___37 ;
  char const   *tmp___38 ;
  char const   *tmp___39 ;
  int *tmp___40 ;
  char const   *tmp___41 ;
  char c ;
  char const   *tmp___42 ;
  int tmp___43 ;
  char const   *tmp___44 ;
  ssize_t tmp___45 ;
  uintmax_t *makefile_mtimes ;
  unsigned int mm_idx ;
  char **nargv ;
  int nargc ;
  int orig_db_level ;
  char const   * __restrict  tmp___48 ;
  FILE *tmp___49 ;
  register struct dep *d ;
  register struct dep *last ;
  register struct file *f___0 ;
  char const   * __restrict  tmp___50 ;
  FILE *tmp___51 ;
  unsigned int tmp___53 ;
  int tmp___55 ;
  int any_remade ;
  int any_failed ;
  register unsigned int i___1 ;
  struct dep *d___0 ;
  uintmax_t tmp___57 ;
  uintmax_t mtime ;
  char const   *tmp___58 ;
  int tmp___60 ;
  char *tmp___61 ;
  char const   *tmp___62 ;
  char *tmp___63 ;
  char const   *tmp___64 ;
  register unsigned int i___2 ;
  register unsigned int j ;
  char *p___1 ;
  int tmp___65 ;
  int tmp___67 ;
  char bad ;
  int tmp___68 ;
  char const   *tmp___69 ;
  char *sgi_loses ;
  int tmp___71 ;
  char **p___2 ;
  FILE * __restrict  tmp___72 ;
  char const   * __restrict  tmp___73 ;
  FILE *tmp___74 ;
  FILE *tmp___75 ;
  char const   *tmp___76 ;
  int tmp___77 ;
  int *tmp___78 ;
  int status ;
  char const   *tmp___80 ;
  char const   *tmp___81 ;
  char const   * __restrict  tmp___82 ;
  FILE *tmp___83 ;
  int tmp___84 ;
  char const   *tmp___85 ;

  {
  __initialize__();
  {
# 857
  default_goal_file = (struct file *)0;
# 858
  reading_file = (struct floc  const  *)0;
# 873
  setlocale(6, (char const   *)"");
# 874
  bindtextdomain((char const   *)"make",
                 (char const   *)"/usr/local/share/locale");
# 875
  textdomain((char const   *)"make");
# 878
  sigemptyset(& fatal_signal_set);
# 896
  tmp = bsd_signal(1, & fatal_error_signal);
  }
# 896
  if ((unsigned int )tmp == (unsigned int )((void (*)(int  ))1)) {
    {
# 896
    bsd_signal(1, (void (*)(int  ))1);
    }
  } else {
    {
# 896
    sigaddset(& fatal_signal_set, 1);
    }
  }
  {
# 899
  tmp___0 = bsd_signal(3, & fatal_error_signal);
  }
# 899
  if ((unsigned int )tmp___0 == (unsigned int )((void (*)(int  ))1)) {
    {
# 899
    bsd_signal(3, (void (*)(int  ))1);
    }
  } else {
    {
# 899
    sigaddset(& fatal_signal_set, 3);
    }
  }
  {
# 901
  tmp___1 = bsd_signal(2, & fatal_error_signal);
  }
# 901
  if ((unsigned int )tmp___1 == (unsigned int )((void (*)(int  ))1)) {
    {
# 901
    bsd_signal(2, (void (*)(int  ))1);
    }
  } else {
    {
# 901
    sigaddset(& fatal_signal_set, 2);
    }
  }
  {
# 902
  tmp___2 = bsd_signal(15, & fatal_error_signal);
  }
# 902
  if ((unsigned int )tmp___2 == (unsigned int )((void (*)(int  ))1)) {
    {
# 902
    bsd_signal(15, (void (*)(int  ))1);
    }
  } else {
    {
# 902
    sigaddset(& fatal_signal_set, 15);
    }
  }
  {
# 915
  tmp___3 = bsd_signal(24, & fatal_error_signal);
  }
# 915
  if ((unsigned int )tmp___3 == (unsigned int )((void (*)(int  ))1)) {
    {
# 915
    bsd_signal(24, (void (*)(int  ))1);
    }
  } else {
    {
# 915
    sigaddset(& fatal_signal_set, 24);
    }
  }
  {
# 918
  tmp___4 = bsd_signal(25, & fatal_error_signal);
  }
# 918
  if ((unsigned int )tmp___4 == (unsigned int )((void (*)(int  ))1)) {
    {
# 918
    bsd_signal(25, (void (*)(int  ))1);
    }
  } else {
    {
# 918
    sigaddset(& fatal_signal_set, 25);
    }
  }
  {
# 930
  bsd_signal(17, (void (*)(int  ))0);
# 944
  tmp___5 = (FILE */* __restrict  */)get_stdout();
  {
# 105 "spec.work"
  tmp___5->__BLAST_FLAG = 1;
  {

  }
  }
# 944 "main.c"
  setvbuf(tmp___5, (char */* __restrict  */)((char *)0), 1, 8192U);
  }
# 952
  if ((unsigned int )(*(argv + 0)) == (unsigned int )((char *)0)) {
    {
# 953
    (*(argv + 0)) = "";
    }
  }
# 954
  if ((int )(*((*(argv + 0)) + 0)) == 0) {
    {
# 955
    program = "make";
    }
  } else {
    {
# 961
    program = strrchr((char const   *)(*(argv + 0)), (int )'/');
    }
# 977
    if ((unsigned int )program == (unsigned int )((char *)0)) {
      {
# 978
      program = (*(argv + 0));
      }
    } else {
      {
# 980
      program = program + 1;
      }
    }
  }
  {
# 984
  user_access();
# 986
  initialize_global_hash_tables();
# 993
  tmp___6 = getcwd(current_directory, 4096U);
  }
# 993
  if ((unsigned int )tmp___6 == (unsigned int )((char *)0)) {
    {
# 997
    perror_with_name((char const   *)"getcwd: ", (char const   *)"");
# 1001
    current_directory[0] = '\0';
# 1002
    directory_before_chdir = (char *)0;
    }
  } else {
    {
# 1005
    directory_before_chdir = xstrdup((char const   *)(current_directory));
    }
  }
  {
# 1012
  tmp___7 = define_variable_in_set((char const   *)".VARIABLES", 10U, "", 0, 0,
                                   current_variable_set_list->set,
                                   (struct floc  const  *)((struct floc *)0));
# 1012
  tmp___7->special = 1U;
# 1020
  i = 0U;
  }
# 1020
  while ((unsigned int )(*(envp + i)) != (unsigned int )((char *)0)) {
    {
# 1023
    ep = (*(envp + i));
# 1026
    do_not_define = 0;
    }
# 1028
    while ((int )(*ep) != 61) {
      {
# 1029
      ep ++;
      }
    }
# 1041
    if (! do_not_define) {
      {
# 1042
      tmp___8 = define_variable_in_set((char const   *)(*(envp + i)),
                                       (unsigned int )(ep - (*(envp + i))),
                                       ep + 1, 1, 1,
                                       current_variable_set_list->set,
                                       (struct floc  const  *)((struct floc *)0));
# 1042
      tmp___8->export = 0;
      }
    }
    {
# 1020
    i ++;
    }
  }
  {
# 1101
  decode_env_switches("MAKEFLAGS", 9U);
# 1108
  decode_switches(argc, argv, 0);
# 1118
  decode_debug_flags();
  }
# 1122
  if (print_version_flag) {
    {
# 1123
    print_version();
    }
  } else {
# 1122
    if (print_data_base_flag) {
      {
# 1123
      print_version();
      }
    } else {
# 1122
      if (db_level) {
        {
# 1123
        print_version();
        }
      }
    }
  }
# 1126
  if (print_version_flag) {
    {
# 1127
    die(0);
    }
  }
# 1165
  if ((int )current_directory[0] != 0) {
# 1165
    if ((unsigned int )(*(argv + 0)) != (unsigned int )((char *)0)) {
# 1165
      if ((int )(*((*(argv + 0)) + 0)) != 47) {
        {
# 1165
        tmp___9 = strchr((char const   *)(*(argv + 0)), (int )'/');
        }
# 1165
        if ((unsigned int )tmp___9 != (unsigned int )((char *)0)) {
          {
# 1167
          (*(argv + 0)) = concat((char const   *)(current_directory),
                                 (char const   *)"/",
                                 (char const   *)(*(argv + 0)));
          }
        }
      }
    }
  }
  {
# 1174
  define_variable_in_set((char const   *)"MAKE_COMMAND", 12U, (*(argv + 0)), 0,
                         0, current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
# 1175
  define_variable_in_set((char const   *)"MAKE", 4U, "$(MAKE_COMMAND)", 0, 1,
                         current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
  }
# 1177
  if ((unsigned int )command_variables !=
      (unsigned int )((struct command_variable *)0)) {
    {
# 1181
    len = 0U;
# 1186
    cv = command_variables;
    }
# 1186
    while ((unsigned int )cv != (unsigned int )((struct command_variable *)0)) {
      {
# 1188
      v = cv->variable;
# 1189
      tmp___10 = strlen((char const   *)v->name);
# 1189
      len += 2U * tmp___10;
      }
# 1190
      if (! v->recursive) {
        {
# 1191
        len ++;
        }
      }
      {
# 1192
      len ++;
# 1193
      tmp___11 = strlen((char const   *)v->value);
# 1193
      len += 2U * tmp___11;
# 1194
      len ++;
# 1186
      cv = cv->next;
      }
    }
    {
# 1198
    value = (char *)__builtin_alloca(len);
# 1198
    p___0 = value;
# 1199
    cv = command_variables;
    }
# 1199
    while ((unsigned int )cv != (unsigned int )((struct command_variable *)0)) {
      {
# 1201
      v = cv->variable;
# 1202
      p___0 = quote_for_env(p___0, v->name);
      }
# 1203
      if (! v->recursive) {
        {
# 1204
        tmp___13 = p___0;
# 1204
        p___0 ++;
# 1204
        (*tmp___13) = ':';
        }
      }
      {
# 1205
      tmp___14 = p___0;
# 1205
      p___0 ++;
# 1205
      (*tmp___14) = '=';
# 1206
      p___0 = quote_for_env(p___0, v->value);
# 1207
      tmp___15 = p___0;
# 1207
      p___0 ++;
# 1207
      (*tmp___15) = ' ';
# 1199
      cv = cv->next;
      }
    }
    {
# 1209
    (*(p___0 + -1)) = '\0';
# 1213
    define_variable_in_set((char const   *)"-*-command-variables-*-", 23U,
                           value, 6, 0, current_variable_set_list->set,
                           (struct floc  const  *)((struct floc *)0));
# 1222
    define_variable_in_set((char const   *)"MAKEOVERRIDES", 13U,
                           "${-*-command-variables-*-}", 1, 1,
                           current_variable_set_list->set,
                           (struct floc  const  *)((struct floc *)0));
    }
  }
# 1227
  if ((unsigned int )directories___0 != (unsigned int )((struct stringlist *)0)) {
    {
# 1228
    i = 0U;
    }
# 1228
    while ((unsigned int )(*(directories___0->list + i)) !=
           (unsigned int )((char *)0)) {
      {
# 1230
      dir = (*(directories___0->list + i));
      }
# 1231
      if ((int )(*(dir + 0)) == 126) {
        {
# 1233
        tmp___16 = tilde_expand(dir);
# 1233
        expanded = tmp___16;
        }
# 1234
        if ((unsigned int )expanded != (unsigned int )((char *)0)) {
          {
# 1235
          dir = expanded;
          }
        }
      }
      {
# 1237
      tmp___17 = chdir((char const   *)dir);
      }
# 1237
      if (tmp___17 < 0) {
        {
# 1238
        pfatal_with_name((char const   *)dir);
        }
      }
# 1239
      if ((unsigned int )dir != (unsigned int )(*(directories___0->list + i))) {
        {
# 1240
        free((void *)dir);
        }
      }
      {
# 1228
      i ++;
      }
    }
  }
  {
# 1258
  tmp___18 = lookup_variable((char const   *)"MAKELEVEL",
                             sizeof("MAKELEVEL") - 1U);
# 1258
  v___0 = tmp___18;
  }
# 1259
  if ((unsigned int )v___0 != (unsigned int )((struct variable *)0)) {
# 1259
    if ((int )(*(v___0->value + 0)) != 0) {
# 1259
      if ((int )(*(v___0->value + 0)) != 45) {
        {
# 1260
        makelevel = (unsigned int )atoi((char const   *)v___0->value);
        }
      } else {
        {
# 1262
        makelevel = 0U;
        }
      }
    } else {
      {
# 1262
      makelevel = 0U;
      }
    }
  } else {
    {
# 1262
    makelevel = 0U;
    }
  }
# 1266
  if (! silent_flag) {
# 1266
    if ((unsigned int )directories___0 !=
        (unsigned int )((struct stringlist *)0)) {
      {
# 1267
      print_directory_flag = 1;
      }
    } else {
# 1266
      if (makelevel > 0U) {
        {
# 1267
        print_directory_flag = 1;
        }
      }
    }
  }
# 1270
  if (inhibit_print_directory_flag) {
    {
# 1271
    print_directory_flag = 0;
    }
  }
# 1274
  if (no_builtin_variables_flag) {
    {
# 1275
    no_builtin_rules_flag = 1;
    }
  }
# 1279
  if ((unsigned int )include_directories ==
      (unsigned int )((struct stringlist *)0)) {
    {
# 1279
    tmp___20 = (char **)0;
    }
  } else {
    {
# 1279
    tmp___20 = include_directories->list;
    }
  }
  {
# 1279
  construct_include_path(tmp___20);
  }
# 1283
  if ((unsigned int )directories___0 == (unsigned int )((struct stringlist *)0)) {
    {
# 1285
    starting_directory = current_directory;
    }
  } else {
    {
# 1291
    tmp___21 = getcwd(current_directory, 4096U);
    }
# 1291
    if ((unsigned int )tmp___21 == (unsigned int )((char *)0)) {
      {
# 1295
      perror_with_name((char const   *)"getcwd: ", (char const   *)"");
# 1299
      starting_directory = (char *)0;
      }
    } else {
      {
# 1302
      starting_directory = current_directory;
      }
    }
  }
  {
# 1305
  define_variable_in_set((char const   *)"CURDIR", 6U, current_directory, 0, 0,
                         current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
  }
# 1309
  if ((unsigned int )makefiles != (unsigned int )((struct stringlist *)0)) {
    {
# 1312
    i___0 = 0U;
    }
# 1312
    while (i___0 < makefiles->idx) {
# 1313
      if ((int )(*((*(makefiles->list + i___0)) + 0)) == 45) {
# 1313
        if ((int )(*((*(makefiles->list + i___0)) + 1)) == 0) {
# 1321
          if (stdin_nm) {
            {
# 1322
            tmp___22 = (char const   *)dcgettext((char const   *)((void *)0),
                                                 (char const   *)"Makefile from standard input specified twice.",
                                                 5);
# 1322
            fatal((struct floc  const  *)((struct floc *)0), tmp___22);
            }
          }
          {
# 1335
          tmpdir = getenv((char const   *)"TMPDIR");
          }
# 1335
          if ((unsigned int )tmpdir == (unsigned int )((void *)0)) {
            {
# 1342
            tmpdir = "/tmp";
            }
          } else {
# 1335
            if ((int )(*tmpdir) == 0) {
              {
# 1342
              tmpdir = "/tmp";
              }
            }
          }
          {
# 1344
          tmp___23 = strlen((char const   *)tmpdir);
# 1344
          template = (char *)__builtin_alloca((tmp___23 + sizeof("GmXXXXXX")) +
                                              1U);
# 1346
          strcpy((char */* __restrict  */)template,
                 (char const   */* __restrict  */)((char const   *)tmpdir));
# 1353
          tmp___25 = strlen((char const   *)template);
          }
# 1353
          if ((int )(*(template + (tmp___25 - 1U))) != 47) {
            {
# 1354
            strcat((char */* __restrict  */)template,
                   (char const   */* __restrict  */)((char const   *)"/"));
            }
          }
          {
# 1358
          strcat((char */* __restrict  */)template,
                 (char const   */* __restrict  */)((char const   *)"GmXXXXXX"));
# 1359
          outfile = open_tmpfile(& stdin_nm, (char const   *)template);
          }
# 1360
          if ((unsigned int )outfile == (unsigned int )((FILE *)0)) {
            {
# 1361
            tmp___26 = (char const   *)dcgettext((char const   *)((void *)0),
                                                 (char const   *)"fopen (temporary file)",
                                                 5);
# 1361
            pfatal_with_name(tmp___26);
            }
          }
# 1362
          while (1) {
            {
# 1362
            tmp___31 = get_stdin();
            {
# 113 "spec.work"
            tmp___31->__BLAST_FLAG = 1;
            {

            }
            }
# 1362 "main.c"
            tmp___32 = feof(tmp___31);
            }
# 1362
            if (tmp___32) {
# 1362
              break;
            }
            {
# 1365
            tmp___27 = (FILE */* __restrict  */)get_stdin();
            {
# 113 "spec.work"
            tmp___27->__BLAST_FLAG = 1;
            {

            }
            }
# 1365 "main.c"
            tmp___28 = fread((void */* __restrict  */)((void *)(buf___1)), 1U,
                             sizeof(buf___1), tmp___27);
# 1365
            n = tmp___28;
            }
# 1366
            if (n > 0U) {
              {
# 1366
              tmp___30 = fwrite((void const   */* __restrict  */)((void const   *)(buf___1)),
                                1U, n, (FILE */* __restrict  */)outfile);
              }
# 1366
              if (tmp___30 != n) {
                {
# 1367
                tmp___29 = (char const   *)dcgettext((char const   *)((void *)0),
                                                     (char const   *)"fwrite (temporary file)",
                                                     5);
# 1367
                pfatal_with_name(tmp___29);
                }
              }
            }
          }
          {

          {
# 88 "spec.work"
          if (outfile->__BLAST_FLAG == 1) {
# 89
            outfile->__BLAST_FLAG = 0;
          } else {
# 90
            __error__();
          }
          {

          }
          }
# 1369 "main.c"
          fclose(outfile);
# 1373
          (*(makefiles->list + i___0)) = xstrdup((char const   *)stdin_nm);
# 1376
          f = enter_file(stdin_nm);
# 1377
          f->updated = 1U;
# 1378
          f->update_status = (short )0;
# 1379
          f->command_state = 3;
# 1382
          f->intermediate = 0U;
# 1383
          f->dontcare = 0U;
          }
        }
      }
      {
# 1312
      i___0 ++;
      }
    }
  }
  {
# 1403
  bsd_signal(17, & child_handler);
# 1413
  bsd_signal(10, & debug_signal_handler);
# 1418
  set_default_suffixes();
# 1426
  install_default_suffix_rules();
# 1430
  define_automatic_variables();
# 1435
  define_makeflags(0, 0);
# 1438
  define_default_variables();
# 1442
  default_file = enter_file(".DEFAULT");
  }
# 1444
  if ((unsigned int )makefiles == (unsigned int )((struct stringlist *)0)) {
    {
# 1444
    tmp___33 = (char **)0;
    }
  } else {
    {
# 1444
    tmp___33 = makefiles->list;
    }
  }
  {
# 1444
  read_makefiles___0 = read_all_makefiles(tmp___33);
# 1482
  decode_env_switches("MAKEFLAGS", 9U);
  }
# 1500
  if (jobserver_fds) {
    {
# 1504
    i = 1U;
    }
# 1504
    while (i < jobserver_fds->idx) {
# 1505
      if (! ((unsigned int )(*(jobserver_fds->list + 0)) ==
             (unsigned int )(*(jobserver_fds->list + i)))) {
# 1505
        if ((int )(*((*(jobserver_fds->list + 0)))) ==
            (int )(*((*(jobserver_fds->list + i))))) {
# 1505
          if (! ((int )(*((*(jobserver_fds->list + 0)))) == 0)) {
            {
# 1505
            tmp___35 = strcmp((char const   *)((*(jobserver_fds->list + 0)) + 1),
                              (char const   *)((*(jobserver_fds->list + i)) + 1));
            }
# 1505
            if (tmp___35) {
              {
# 1506
              tmp___34 = (char const   *)dcgettext((char const   *)((void *)0),
                                                   (char const   *)"internal error: multiple --jobserver-fds options",
                                                   5);
# 1506
              fatal((struct floc  const  *)((struct floc *)0), tmp___34);
              }
            }
          }
        } else {
          {
# 1506
          tmp___34 = (char const   *)dcgettext((char const   *)((void *)0),
                                               (char const   *)"internal error: multiple --jobserver-fds options",
                                               5);
# 1506
          fatal((struct floc  const  *)((struct floc *)0), tmp___34);
          }
        }
      }
      {
# 1504
      i ++;
      }
    }
    {
# 1510
    cp = (*(jobserver_fds->list + 0));
# 1512
    tmp___37 = sscanf((char const   */* __restrict  */)((char const   *)cp),
                      (char const   */* __restrict  */)((char const   *)"%d,%d"),
                      job_fds, & job_fds[1]);
    }
# 1512
    if (tmp___37 != 2) {
      {
# 1513
      tmp___36 = (char const   *)dcgettext((char const   *)((void *)0),
                                           (char const   *)"internal error: invalid --jobserver-fds string `%s\'",
                                           5);
# 1513
      fatal((struct floc  const  *)((struct floc *)0), tmp___36, cp);
      }
    }
# 1522
    if (job_slots > 0U) {
      {
# 1523
      tmp___38 = (char const   *)dcgettext((char const   *)((void *)0),
                                           (char const   *)"warning: -jN forced in submake: disabling jobserver mode.",
                                           5);
# 1523
      error((struct floc  const  *)((struct floc *)0), tmp___38);
      }
    } else {
      {
# 1531
      job_rfd = dup(job_fds[0]);
      }
# 1531
      if (job_rfd < 0) {
        {
# 1533
        tmp___40 = __errno_location();
        }
# 1533
        if ((*tmp___40) != 9) {
          {
# 1534
          tmp___39 = (char const   *)dcgettext((char const   *)((void *)0),
                                               (char const   *)"dup jobserver",
                                               5);
# 1534
          pfatal_with_name(tmp___39);
          }
        }
        {
# 1536
        tmp___41 = (char const   *)dcgettext((char const   *)((void *)0),
                                             (char const   *)"warning: jobserver unavailable: using -j1.  Add `+\' to parent make rule.",
                                             5);
# 1536
        error((struct floc  const  *)((struct floc *)0), tmp___41);
# 1538
        job_slots = 1U;
        }
      }
    }
# 1541
    if (job_slots > 0U) {
      {
# 1543
      close(job_fds[0]);
# 1544
      close(job_fds[1]);
# 1545
      job_fds[1] = -1;
# 1545
      job_fds[0] = job_fds[1];
# 1546
      free((void *)jobserver_fds->list);
# 1547
      free((void *)jobserver_fds);
# 1548
      jobserver_fds = (struct stringlist *)0;
      }
    }
  }
# 1555
  if (job_slots > 1U) {
    {
# 1557
    c = '+';
# 1559
    tmp___43 = pipe(job_fds);
    }
# 1559
    if (tmp___43 < 0) {
      {
# 1560
      tmp___42 = (char const   *)dcgettext((char const   *)((void *)0),
                                           (char const   *)"creating jobs pipe",
                                           5);
# 1560
      pfatal_with_name(tmp___42);
      }
    } else {
      {
# 1559
      job_rfd = dup(job_fds[0]);
      }
# 1559
      if (job_rfd < 0) {
        {
# 1560
        tmp___42 = (char const   *)dcgettext((char const   *)((void *)0),
                                             (char const   *)"creating jobs pipe",
                                             5);
# 1560
        pfatal_with_name(tmp___42);
        }
      }
    }
# 1567
    while (1) {
      {
# 1567
      job_slots = job_slots - 1U;
      }
# 1567
      if (! job_slots) {
# 1567
        break;
      }
      {
# 1568
      tmp___45 = write(job_fds[1], (void const   *)(& c), 1U);
      }
# 1568
      if (tmp___45 != 1) {
        {
# 1569
        tmp___44 = (char const   *)dcgettext((char const   *)((void *)0),
                                             (char const   *)"init jobserver pipe",
                                             5);
# 1569
        pfatal_with_name(tmp___44);
        }
      }
    }
    {
# 1573
    jobserver_fds = (struct stringlist *)xmalloc(sizeof(struct stringlist ));
# 1575
    jobserver_fds->list = (char **)xmalloc(sizeof(char *));
# 1576
    (*(jobserver_fds->list + 0)) = xmalloc(sizeof("1024") * 2U + 1U);
# 1578
    sprintf((char */* __restrict  */)(*(jobserver_fds->list + 0)),
            (char const   */* __restrict  */)((char const   *)"%d,%d"),
            job_fds[0], job_fds[1]);
# 1579
    jobserver_fds->idx = 1U;
# 1580
    jobserver_fds->max = 1U;
    }
  }
  {
# 1586
  define_makeflags(1, 0);
# 1591
  snap_deps();
# 1598
  convert_to_pattern();
# 1605
  install_default_implicit_rules();
# 1609
  count_implicit_rule_limits();
# 1613
  build_vpath_lists();
  }
# 1619
  if ((unsigned int )old_files != (unsigned int )((struct stringlist *)0)) {
    {
# 1620
    p = old_files->list;
    }
# 1620
    while ((unsigned int )(*p) != (unsigned int )((char *)0)) {
      {
# 1622
      f = enter_command_line_file((*p));
# 1623
      f->mtime_before_update = 2ULL;
# 1623
      f->last_mtime = f->mtime_before_update;
# 1624
      f->updated = 1U;
# 1625
      f->update_status = (short )0;
# 1626
      f->command_state = 3;
# 1620
      p ++;
      }
    }
  }
# 1629
  if ((unsigned int )new_files != (unsigned int )((struct stringlist *)0)) {
    {
# 1631
    p = new_files->list;
    }
# 1631
    while ((unsigned int )(*p) != (unsigned int )((char *)0)) {
      {
# 1633
      f = enter_command_line_file((*p));
# 1634
      f->mtime_before_update = 0xffffffffffffffffULL;
# 1634
      f->last_mtime = f->mtime_before_update;
# 1631
      p ++;
      }
    }
  }
  {
# 1639
  remote_setup();
  }
# 1641
  if ((unsigned int )read_makefiles___0 != (unsigned int )((struct dep *)0)) {
    {
# 1645
    makefile_mtimes = (uintmax_t *)0;
# 1646
    mm_idx = 0U;
# 1647
    nargv = argv;
# 1648
    nargc = argc;
# 1649
    orig_db_level = db_level;
    }
# 1651
    if (! (256 & db_level)) {
      {
# 1652
      db_level = 0;
      }
    }
# 1654
    while (1) {
# 1654
      if (1 & db_level) {
        {
# 1654
        tmp___48 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                              (char const   *)"Updating makefiles....\n",
                                                              5);
# 1654
        printf(tmp___48);
# 1654
        tmp___49 = get_stdout();
        {
# 105 "spec.work"
        tmp___49->__BLAST_FLAG = 1;
        {

        }
        }
# 1654 "main.c"
        fflush(tmp___49);
        }
      }
# 1654
      break;
    }
    {
# 1660
    last = (struct dep *)0;
# 1661
    d = read_makefiles___0;
    }
# 1662
    while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
      {
# 1664
      f___0 = d->file;
      }
# 1665
      if (f___0->double_colon) {
        {
# 1666
        f___0 = f___0->double_colon;
        }
# 1666
        while ((unsigned int )f___0 != (unsigned int )((void *)0)) {
# 1668
          if ((unsigned int )f___0->deps == (unsigned int )((struct dep *)0)) {
# 1668
            if ((unsigned int )f___0->cmds !=
                (unsigned int )((struct commands *)0)) {
# 1678
              while (1) {
# 1678
                if (2 & db_level) {
                  {
# 1678
                  tmp___50 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                        (char const   *)"Makefile `%s\' might loop; not remaking it.\n",
                                                                        5);
# 1678
                  printf(tmp___50, f___0->name);
# 1678
                  tmp___51 = get_stdout();
                  {
# 105 "spec.work"
                  tmp___51->__BLAST_FLAG = 1;
                  {

                  }
                  }
# 1678 "main.c"
                  fflush(tmp___51);
                  }
                }
# 1678
                break;
              }
# 1682
              if ((unsigned int )last == (unsigned int )((struct dep *)0)) {
                {
# 1683
                read_makefiles___0 = d->next;
                }
              } else {
                {
# 1685
                last->next = d->next;
                }
              }
              {
# 1688
              free((void *)((char *)d));
              }
# 1690
              if ((unsigned int )last == (unsigned int )((struct dep *)0)) {
                {
# 1690
                d = read_makefiles___0;
                }
              } else {
                {
# 1690
                d = last->next;
                }
              }
# 1692
              break;
            }
          }
          {
# 1666
          f___0 = f___0->prev;
          }
        }
      }
# 1695
      if ((unsigned int )f___0 == (unsigned int )((void *)0)) {
        goto _L;
      } else {
# 1695
        if (! f___0->double_colon) {
          _L: 
          {
# 1697
          makefile_mtimes = (uintmax_t *)xrealloc((char *)makefile_mtimes,
                                                  (mm_idx + 1U) *
                                                  sizeof(uintmax_t ));
# 1700
          tmp___53 = mm_idx;
# 1700
          mm_idx ++;
          }
# 1700
          if ((d->file)->last_mtime == 0ULL) {
            {
# 1700
            (*(makefile_mtimes + tmp___53)) = f_mtime(d->file, 0);
            }
          } else {
            {
# 1700
            (*(makefile_mtimes + tmp___53)) = (d->file)->last_mtime;
            }
          }
          {
# 1701
          last = d;
# 1702
          d = d->next;
          }
        }
      }
    }
    {
# 1708
    define_makeflags(1, 1);
# 1710
    tmp___55 = update_goal_chain(read_makefiles___0, 1);
    }
# 1710
    switch (tmp___55) {
    case 1: 
    {

    }
    case -1: 
    {

    }
# 1721
    break;
    case 2: 
    {
# 1727
    any_remade = 0;
# 1730
    any_failed = 0;
# 1734
    i___1 = 0U;
# 1734
    d___0 = read_makefiles___0;
    }
# 1734
    while ((unsigned int )d___0 != (unsigned int )((struct dep *)0)) {
      {
# 1738
      (d___0->file)->considered = 0U;
      }
# 1740
      if ((d___0->file)->updated) {
# 1743
        if ((int )(d___0->file)->update_status == 0) {
# 1746
          if ((d___0->file)->last_mtime == 0ULL) {
            {
# 1746
            tmp___57 = f_mtime(d___0->file, 0);
            }
          } else {
            {
# 1746
            tmp___57 = (d___0->file)->last_mtime;
            }
          }
          {
# 1746
          any_remade |= tmp___57 != (*(makefile_mtimes + i___1));
          }
        } else {
# 1749
          if (! (d___0->changed & 4U)) {
            {
# 1754
            tmp___58 = (char const   *)dcgettext((char const   *)((void *)0),
                                                 (char const   *)"Failed to remake makefile `%s\'.",
                                                 5);
# 1754
            error((struct floc  const  *)((struct floc *)0), tmp___58,
                  (d___0->file)->name);
            }
# 1756
            if ((d___0->file)->last_mtime == 0ULL) {
              {
# 1756
              mtime = f_mtime(d___0->file, 0);
              }
            } else {
              {
# 1756
              mtime = (d___0->file)->last_mtime;
              }
            }
# 1757
            if (mtime != 1ULL) {
# 1757
              if (mtime != (*(makefile_mtimes + i___1))) {
                {
# 1757
                tmp___60 = 1;
                }
              } else {
                {
# 1757
                tmp___60 = 0;
                }
              }
            } else {
              {
# 1757
              tmp___60 = 0;
              }
            }
            {
# 1757
            any_remade |= tmp___60;
            }
          }
        }
      } else {
# 1763
        if (! (d___0->changed & 4U)) {
# 1766
          if (d___0->changed & 2U) {
# 1769
            if ((unsigned int )d___0->name == (unsigned int )((char *)0)) {
              {
# 1769
              tmp___61 = (d___0->file)->name;
              }
            } else {
              {
# 1769
              tmp___61 = d___0->name;
              }
            }
            {
# 1769
            tmp___62 = (char const   *)dcgettext((char const   *)((void *)0),
                                                 (char const   *)"Included makefile `%s\' was not found.",
                                                 5);
# 1769
            error((struct floc  const  *)((struct floc *)0), tmp___62, tmp___61);
            }
          } else {
# 1775
            if ((unsigned int )d___0->name == (unsigned int )((char *)0)) {
              {
# 1775
              tmp___63 = (d___0->file)->name;
              }
            } else {
              {
# 1775
              tmp___63 = d___0->name;
              }
            }
            {
# 1775
            tmp___64 = (char const   *)dcgettext((char const   *)((void *)0),
                                                 (char const   *)"Makefile `%s\' was not found",
                                                 5);
# 1775
            error((struct floc  const  *)((struct floc *)0), tmp___64, tmp___63);
# 1777
            any_failed = 1;
            }
          }
        }
      }
      {
# 1734
      i___1 ++;
# 1734
      d___0 = d___0->next;
      }
    }
    {
# 1782
    read_makefiles___0 = (struct dep *)0;
    }
# 1784
    if (any_remade) {
      goto re_exec;
    }
# 1786
    if (any_failed) {
      {
# 1787
      die(2);
      }
    }
# 1788
    break;
    case 0: 
    {

    }
    re_exec: 
    {
# 1795
    remove_intermediates(0);
    }
# 1797
    if (print_data_base_flag) {
      {
# 1798
      print_data_base();
      }
    }
    {
# 1800
    log_working_directory(0);
    }
# 1802
    if ((unsigned int )makefiles != (unsigned int )((struct stringlist *)0)) {
      {
# 1805
      j = 0U;
# 1806
      i___2 = 1U;
      }
# 1806
      while (i___2 < (unsigned int )argc) {
        {
# 1807
        tmp___65 = strncmp((char const   *)(*(argv + i___2)),
                           (char const   *)"-f", 2U);
        }
# 1807
        if (tmp___65 == 0) {
          {
# 1809
          p___1 = (*(argv + i___2)) + 2;
          }
# 1810
          if ((int )(*p___1) == 0) {
            {
# 1811
            i___2 ++;
# 1811
            (*(argv + i___2)) = (*(makefiles->list + j));
            }
          } else {
            {
# 1813
            (*(argv + i___2)) = concat((char const   *)"-f",
                                       (char const   *)(*(makefiles->list + j)),
                                       (char const   *)"");
            }
          }
          {
# 1814
          j ++;
          }
        }
        {
# 1806
        i___2 ++;
        }
      }
    }
# 1819
    if (stdin_nm) {
      {
# 1821
      nargv = (char **)xmalloc((unsigned int )(nargc + 2) * sizeof(char *));
# 1822
      memmove((void *)((char *)nargv), (void const   *)((char *)argv),
              (unsigned int )argc * sizeof(char *));
# 1823
      tmp___67 = nargc;
# 1823
      nargc ++;
# 1823
      (*(nargv + tmp___67)) = concat((char const   *)"-o",
                                     (char const   *)stdin_nm,
                                     (char const   *)"");
# 1824
      (*(nargv + nargc)) = (char *)0;
      }
    }
# 1827
    if ((unsigned int )directories___0 !=
        (unsigned int )((struct stringlist *)0)) {
# 1827
      if (directories___0->idx > 0U) {
# 1830
        if ((unsigned int )directory_before_chdir != (unsigned int )((char *)0)) {
          {
# 1832
          tmp___68 = chdir((char const   *)directory_before_chdir);
          }
# 1832
          if (tmp___68 < 0) {
            {
# 1834
            perror_with_name((char const   *)"chdir", (char const   *)"");
# 1835
            bad = (char )1;
            }
          } else {
            {
# 1838
            bad = (char )0;
            }
          }
        } else {
          {
# 1841
          bad = (char )1;
          }
        }
# 1842
        if (bad) {
          {
# 1843
          tmp___69 = (char const   *)dcgettext((char const   *)((void *)0),
                                               (char const   *)"Couldn\'t change back to original directory.",
                                               5);
# 1843
          fatal((struct floc  const  *)((struct floc *)0), tmp___69);
          }
        }
      }
    }
    {
# 1847
    p = environ;
    }
# 1847
    while ((unsigned int )(*p) != (unsigned int )((char *)0)) {
# 1848
      if ((int )(*((*p) + (sizeof("MAKELEVEL") - 1U))) == 61) {
        {
# 1848
        tmp___71 = strncmp((char const   *)(*p), (char const   *)"MAKELEVEL",
                           sizeof("MAKELEVEL") - 1U);
        }
# 1848
        if (tmp___71 == 0) {
          {
# 1855
          sgi_loses = (char *)__builtin_alloca(40);
# 1856
          (*p) = sgi_loses;
# 1857
          sprintf((char */* __restrict  */)(*p),
                  (char const   */* __restrict  */)((char const   *)"%s=%u"),
                  "MAKELEVEL", makelevel);
          }
# 1858
          break;
        }
      }
      {
# 1847
      p ++;
      }
    }
# 1875
    if (1 & db_level) {
      {
# 1878
      tmp___72 = (FILE */* __restrict  */)get_stdout();
      {
# 105 "spec.work"
      tmp___72->__BLAST_FLAG = 1;
      {

      }
      }
# 1878 "main.c"
      tmp___73 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                            (char const   *)"Re-executing:",
                                                            5);
      {
# 40 "spec.work"
      if (! (tmp___72->__BLAST_FLAG == 1)) {
# 42
        __error__();
      }
      {

      }
      }
# 1878 "main.c"
      fputs(tmp___73, tmp___72);
# 1879
      p___2 = nargv;
      }
# 1879
      while ((unsigned int )(*p___2) != (unsigned int )((char *)0)) {
        {
# 1880
        printf((char const   */* __restrict  */)((char const   *)" %s"),
               (*p___2));
# 1879
        p___2 ++;
        }
      }
      {
# 1881
      putchar__extinline((int )'\n');
      }
    }
    {
# 1884
    tmp___74 = get_stdout();
    {
# 105 "spec.work"
    tmp___74->__BLAST_FLAG = 1;
    {

    }
    }
# 1884 "main.c"
    fflush(tmp___74);
# 1885
    tmp___75 = get_stderr();
    {
# 97 "spec.work"
    tmp___75->__BLAST_FLAG = 1;
    {

    }
    }
# 1885 "main.c"
    fflush(tmp___75);
    }
# 1888
    if (job_rfd >= 0) {
      {
# 1889
      close(job_rfd);
      }
    }
    {
# 1892
    exec_command(nargv, environ);
    }
    default: 
    {
# 1901
    __assert_fail((char const   *)"0", (char const   *)"main.c", 1901U,
                  (char const   *)"main");
    }
# 1902
    break;
    }
    {
# 1905
    db_level = orig_db_level;
    }
  }
  {
# 1909
  define_makeflags(1, 0);
  }
# 1913
  if (stdin_nm) {
    {
# 1913
    tmp___77 = unlink((char const   *)stdin_nm);
    }
# 1913
    if (tmp___77 < 0) {
      {
# 1913
      tmp___78 = __errno_location();
      }
# 1913
      if ((*tmp___78) != 2) {
        {
# 1914
        tmp___76 = (char const   *)dcgettext((char const   *)((void *)0),
                                             (char const   *)"unlink (temporary file): ",
                                             5);
# 1914
        perror_with_name(tmp___76, (char const   *)stdin_nm);
        }
      }
    }
  }
# 1920
  if ((unsigned int )goals == (unsigned int )((struct dep *)0)) {
# 1922
    if ((unsigned int )default_goal_file != (unsigned int )((struct file *)0)) {
      {
# 1924
      goals = (struct dep *)xmalloc(sizeof(struct dep ));
# 1925
      goals->next = (struct dep *)0;
# 1926
      goals->name = (char *)0;
# 1927
      goals->ignore_mtime = 0U;
# 1928
      goals->file = default_goal_file;
      }
    }
  } else {
    {
# 1932
    lastgoal->next = (struct dep *)0;
    }
  }
# 1934
  if (! goals) {
# 1936
    if ((unsigned int )read_makefiles___0 == (unsigned int )((struct dep *)0)) {
      {
# 1937
      tmp___80 = (char const   *)dcgettext((char const   *)((void *)0),
                                           (char const   *)"No targets specified and no makefile found",
                                           5);
# 1937
      fatal((struct floc  const  *)((struct floc *)0), tmp___80);
      }
    }
    {
# 1939
    tmp___81 = (char const   *)dcgettext((char const   *)((void *)0),
                                         (char const   *)"No targets", 5);
# 1939
    fatal((struct floc  const  *)((struct floc *)0), tmp___81);
    }
  }
# 1944
  while (1) {
# 1944
    if (1 & db_level) {
      {
# 1944
      tmp___82 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                            (char const   *)"Updating goal targets....\n",
                                                            5);
# 1944
      printf(tmp___82);
# 1944
      tmp___83 = get_stdout();
      {
# 105 "spec.work"
      tmp___83->__BLAST_FLAG = 1;
      {

      }
      }
# 1944 "main.c"
      fflush(tmp___83);
      }
    }
# 1944
    break;
  }
  {
# 1946
  tmp___84 = update_goal_chain(goals, 0);
  }
# 1946
  switch (tmp___84) {
  case -1: 
  {

  }
  case 0: 
  {
# 1952
  status = 0;
  }
# 1953
  break;
  case 1: 
  {
# 1956
  status = 1;
  }
# 1957
  break;
  case 2: 
  {
# 1961
  status = 2;
  }
# 1962
  break;
  default: 
  {
# 1964
  abort();
  }
  }
# 1968
  if (clock_skew_detected) {
    {
# 1969
    tmp___85 = (char const   *)dcgettext((char const   *)((void *)0),
                                         (char const   *)"warning:  Clock skew detected.  Your build may be incomplete.",
                                         5);
# 1969
    error((struct floc  const  *)((struct floc *)0), tmp___85);
    }
  }
  {
# 1973
  die(status);
  }
# 1976
  return (0);
}
}
# 1981
static char options[(int )(1U + (sizeof(switches) / sizeof(switches[0])) * 3U)]  ;
# 1982
static struct option long_options[(int )(sizeof(switches) / sizeof(switches[0]) +
                                         sizeof(long_option_aliases) /
                                         sizeof(long_option_aliases[0]))]  ;
# 1987
static void init_switches(void) 
{ register char *p ;
  register int c ;
  register unsigned int i ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  unsigned int tmp___3 ;

  {
# 1994
  if ((int )options[0] != 0) {
# 1996
    return;
  }
  {
# 1998
  p = options;
# 2002
  tmp = p;
# 2002
  p ++;
# 2002
  (*tmp) = '-';
# 2004
  i = 0U;
  }
# 2004
  while (switches[i].c != 0) {
# 2006
    if ((unsigned int )switches[i].long_name == (unsigned int )((char *)0)) {
      {
# 2006
      long_options[i].name = (char const   *)"";
      }
    } else {
      {
# 2006
      long_options[i].name = (char const   *)switches[i].long_name;
      }
    }
    {
# 2008
    long_options[i].flag = (int *)0;
# 2009
    long_options[i].val = switches[i].c;
    }
# 2010
    if (switches[i].c <= 127) {
      {
# 2011
      tmp___0 = p;
# 2011
      p ++;
# 2011
      (*tmp___0) = (char )switches[i].c;
      }
    }
# 2012
    switch (switches[i].type) {
    case 0: 
    {

    }
    case 1: 
    {

    }
    case 5: 
    {
# 2017
    long_options[i].has_arg = 0;
    }
# 2018
    break;
    case 2: 
    {

    }
    case 3: 
    {

    }
    case 4: 
    {

    }
# 2023
    if (switches[i].c <= 127) {
      {
# 2024
      tmp___1 = p;
# 2024
      p ++;
# 2024
      (*tmp___1) = ':';
      }
    }
# 2025
    if ((unsigned int )switches[i].noarg_value != (unsigned int )((char *)0)) {
# 2027
      if (switches[i].c <= 127) {
        {
# 2028
        tmp___2 = p;
# 2028
        p ++;
# 2028
        (*tmp___2) = ':';
        }
      }
      {
# 2029
      long_options[i].has_arg = 2;
      }
    } else {
      {
# 2032
      long_options[i].has_arg = 1;
      }
    }
# 2033
    break;
    }
    {
# 2004
    i ++;
    }
  }
  {
# 2036
  (*p) = '\0';
# 2037
  c = 0;
  }
# 2037
  while ((unsigned int )c < sizeof(long_option_aliases) /
                            sizeof(long_option_aliases[0])) {
    {
# 2040
    tmp___3 = i;
# 2040
    i ++;
# 2040
    long_options[tmp___3] = long_option_aliases[c];
# 2037
    c ++;
    }
  }
  {
# 2041
  long_options[i].name = (char const   *)0;
  }
# 2042
  return;
}
}
# 2044
static void handle_non_switch_argument(char *arg , int env ) 
{ struct variable *v ;
  struct command_variable *cv ;
  struct command_variable *tmp ;
  struct file *f ;
  struct file *tmp___0 ;
  struct variable *v___0 ;
  char *value ;
  unsigned int oldlen ;
  unsigned int newlen ;

  {
# 2051
  if ((int )(*(arg + 0)) == 45) {
# 2051
    if ((int )(*(arg + 1)) == 0) {
# 2053
      return;
    }
  }
  {
# 2054
  v = try_variable_definition((struct floc  const  *)0, arg, 4, 0);
  }
# 2055
  if ((unsigned int )v != (unsigned int )((struct variable *)0)) {
    {
# 2059
    tmp = (struct command_variable *)xmalloc(sizeof((*cv)));
# 2059
    cv = tmp;
# 2061
    cv->variable = v;
# 2062
    cv->next = command_variables;
# 2063
    command_variables = cv;
    }
  } else {
# 2065
    if (! env) {
      {
# 2070
      tmp___0 = enter_command_line_file(arg);
# 2070
      f = tmp___0;
# 2071
      f->cmd_target = 1U;
      }
# 2073
      if ((unsigned int )goals == (unsigned int )((struct dep *)0)) {
        {
# 2075
        goals = (struct dep *)xmalloc(sizeof(struct dep ));
# 2076
        lastgoal = goals;
        }
      } else {
        {
# 2080
        lastgoal->next = (struct dep *)xmalloc(sizeof(struct dep ));
# 2081
        lastgoal = lastgoal->next;
        }
      }
      {
# 2083
      lastgoal->name = (char *)0;
# 2084
      lastgoal->file = f;
# 2085
      lastgoal->ignore_mtime = 0U;
# 2092
      v___0 = lookup_variable((char const   *)"MAKECMDGOALS", 12U);
      }
# 2093
      if ((unsigned int )v___0 == (unsigned int )((struct variable *)0)) {
        {
# 2094
        value = f->name;
        }
      } else {
        {
# 2100
        oldlen = strlen((char const   *)v___0->value);
# 2101
        newlen = strlen((char const   *)f->name);
# 2102
        value = (char *)__builtin_alloca(((oldlen + 1U) + newlen) + 1U);
# 2103
        memmove((void *)value, (void const   *)v___0->value, oldlen);
# 2104
        (*(value + oldlen)) = ' ';
# 2105
        memmove((void *)(value + (oldlen + 1U)), (void const   *)f->name,
                newlen + 1U);
        }
      }
      {
# 2107
      define_variable_in_set((char const   *)"MAKECMDGOALS", 12U, value, 0, 0,
                             current_variable_set_list->set,
                             (struct floc  const  *)((struct floc *)0));
      }
    }
  }
# 2110
  return;
}
}
# 2118
char *make_host ;
# 2114
static void print_usage(int bad ) 
{ char const   * const  *cpp ;
  FILE *usageto ;
  char const   * __restrict  tmp___1 ;
  char const   * __restrict  tmp___2 ;
  char const   * __restrict  tmp___3 ;
  char const   * __restrict  tmp___4 ;
  char const   * __restrict  tmp___5 ;

  {
# 2122
  if (print_version_flag) {
    {
# 2123
    print_version();
    }
  }
# 2125
  if (bad) {
    {
# 2125
    usageto = get_stderr();
    {
# 97 "spec.work"
    usageto->__BLAST_FLAG = 1;
    {

    }
    }

    }
  } else {
    {
# 2125 "main.c"
    usageto = get_stdout();
    {
# 105 "spec.work"
    usageto->__BLAST_FLAG = 1;
    {

    }
    }

    }
  }
  {
# 2127 "main.c"
  tmp___1 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                       (char const   *)"Usage: %s [options] [target] ...\n",
                                                       5);
  {
# 56 "spec.work"
  if (! (usageto->__BLAST_FLAG == 1)) {
# 58
    __error__();
  }
  {

  }
  }
# 2127 "main.c"
  fprintf((FILE */* __restrict  */)usageto, tmp___1, program);
# 2129
  cpp = usage;
  }
# 2129
  while ((*cpp)) {
    {
# 2130
    tmp___2 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                         (char const   *)(*cpp),
                                                         5);
    {
# 40 "spec.work"
    if (! (usageto->__BLAST_FLAG == 1)) {
# 42
      __error__();
    }
    {

    }
    }
# 2130 "main.c"
    fputs(tmp___2, (FILE */* __restrict  */)usageto);
# 2129
    cpp ++;
    }
  }
# 2132
  if (remote_description) {
# 2132
    if ((int )(*remote_description) == 0) {
      {
# 2133
      tmp___3 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                           (char const   *)"\nThis program built for %s\n",
                                                           5);
      {
# 56 "spec.work"
      if (! (usageto->__BLAST_FLAG == 1)) {
# 58
        __error__();
      }
      {

      }
      }
# 2133 "main.c"
      fprintf((FILE */* __restrict  */)usageto, tmp___3, make_host);
      }
    } else {
      {
# 2135
      tmp___4 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                           (char const   *)"\nThis program built for %s (%s)\n",
                                                           5);
      {
# 64 "spec.work"
      if (! (usageto->__BLAST_FLAG == 1)) {
# 66
        __error__();
      }
      {

      }
      }
# 2135 "main.c"
      fprintf((FILE */* __restrict  */)usageto, tmp___4, make_host,
              remote_description);
      }
    }
  } else {
    {
# 2133
    tmp___3 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                         (char const   *)"\nThis program built for %s\n",
                                                         5);
    {
# 56 "spec.work"
    if (! (usageto->__BLAST_FLAG == 1)) {
# 58
      __error__();
    }
    {

    }
    }
# 2133 "main.c"
    fprintf((FILE */* __restrict  */)usageto, tmp___3, make_host);
    }
  }
  {
# 2138
  tmp___5 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                       (char const   *)"Report bugs to <bug-make@gnu.org>\n",
                                                       5);
  {
# 48 "spec.work"
  if (! (usageto->__BLAST_FLAG == 1)) {
# 50
    __error__();
  }
  {

  }
  }
# 2138 "main.c"
  fprintf((FILE */* __restrict  */)usageto, tmp___5);
  }
# 2139
  return;
}
}
# 2144
static void decode_switches(int argc , char **argv , int env ) 
{ int bad ;
  register struct command_switch  const  *cs ;
  register struct stringlist *sl ;
  register int c ;
  int doit ;
  int tmp ;
  unsigned int tmp___3 ;
  char const   *cp ;
  int tmp___4 ;
  int i ;
  int tmp___5 ;
  char const   *cp___0 ;
  char const   *tmp___6 ;
  int tmp___7 ;
  int tmp___9 ;
  int tmp___10 ;

  {
  {
# 2150
  bad = 0;
# 2158
  init_switches();
# 2162
  opterr = ! env != 0;
# 2164
  optind = 0;
  }
# 2166
  while (optind < argc) {
    {
# 2169
    c = getopt_long(argc, (char * const  *)argv, (char const   *)(options),
                    (struct option  const  *)(long_options), (int *)0);
    }
# 2170
    if (c == -1) {
# 2172
      break;
    } else {
# 2173
      if (c == 1) {
        {
# 2175
        handle_non_switch_argument(optarg, env);
        }
      } else {
# 2176
        if (c == 63) {
          {
# 2180
          bad = 1;
          }
        } else {
          {
# 2182
          cs = switches;
          }
# 2182
          while (cs->c != 0) {
# 2183
            if (cs->c == c) {
# 2189
              if (env) {
# 2189
                if (cs->env) {
                  {
# 2189
                  tmp = 1;
                  }
                } else {
                  {
# 2189
                  tmp = 0;
                  }
                }
              } else {
                {
# 2189
                tmp = 1;
                }
              }
              {
# 2189
              doit = tmp;
              }
# 2191
              switch (cs->type) {
              default: 
              {
# 2194
              abort();
              }
              case 5: 
              {

              }
# 2197
              break;
              case 0: 
              {

              }
              case 1: 
              {

              }
# 2201
              if (doit) {
                {
# 2202
                (*((int *)cs->value_ptr)) = cs->type == 0;
                }
              }
# 2203
              break;
              case 2: 
              {

              }
# 2206
              if (! doit) {
# 2207
                break;
              }
# 2209
              if ((unsigned int )optarg == (unsigned int )((char *)0)) {
                {
# 2210
                optarg = cs->noarg_value;
                }
              }
              {
# 2212
              sl = (*((struct stringlist **)cs->value_ptr));
              }
# 2213
              if ((unsigned int )sl == (unsigned int )((struct stringlist *)0)) {
                {
# 2215
                sl = (struct stringlist *)xmalloc(sizeof(struct stringlist ));
# 2217
                sl->max = 5U;
# 2218
                sl->idx = 0U;
# 2219
                sl->list = (char **)xmalloc(5U * sizeof(char *));
# 2220
                (*((struct stringlist **)cs->value_ptr)) = sl;
                }
              } else {
# 2222
                if (sl->idx == sl->max - 1U) {
                  {
# 2224
                  sl->max += 5U;
# 2225
                  sl->list = (char **)xrealloc((char *)sl->list,
                                               sl->max * sizeof(char *));
                  }
                }
              }
              {
# 2229
              tmp___3 = sl->idx;
# 2229
              sl->idx ++;
# 2229
              (*(sl->list + tmp___3)) = optarg;
# 2230
              (*(sl->list + sl->idx)) = (char *)0;
              }
# 2231
              break;
              case 3: 
              {

              }
# 2236
              if ((unsigned int )optarg == (unsigned int )((char *)0)) {
# 2236
                if (argc > optind) {
                  {
# 2239
                  cp = (char const   *)(*(argv + optind));
                  }
# 2239
                  while ((unsigned int )(*(cp + 0)) - 48U <= 9U) {
                    {
# 2239
                    cp ++;
                    }
                  }
# 2241
                  if ((int const   )(*(cp + 0)) == 0) {
                    {
# 2242
                    tmp___4 = optind;
# 2242
                    optind = optind + 1;
# 2242
                    optarg = (*(argv + tmp___4));
                    }
                  }
                }
              }
# 2245
              if (! doit) {
# 2246
                break;
              }
# 2248
              if ((unsigned int )optarg != (unsigned int )((char *)0)) {
                {
# 2250
                tmp___5 = atoi((char const   *)optarg);
# 2250
                i = tmp___5;
# 2254
                cp___0 = (char const   *)optarg;
                }
# 2254
                while ((unsigned int )(*(cp___0 + 0)) - 48U <= 9U) {
                  {
# 2254
                  cp___0 ++;
                  }
                }
# 2257
                if (i < 1) {
                  {
# 2259
                  tmp___6 = (char const   *)dcgettext((char const   *)((void *)0),
                                                      (char const   *)"the `-%c\' option requires a positive integral argument",
                                                      5);
# 2259
                  error((struct floc  const  *)((struct floc *)0), tmp___6,
                        cs->c);
# 2261
                  bad = 1;
                  }
                } else {
# 2257
                  if ((int const   )(*(cp___0 + 0)) != 0) {
                    {
# 2259
                    tmp___6 = (char const   *)dcgettext((char const   *)((void *)0),
                                                        (char const   *)"the `-%c\' option requires a positive integral argument",
                                                        5);
# 2259
                    error((struct floc  const  *)((struct floc *)0), tmp___6,
                          cs->c);
# 2261
                    bad = 1;
                    }
                  } else {
                    {
# 2264
                    (*((unsigned int *)cs->value_ptr)) = (unsigned int )i;
                    }
                  }
                }
              } else {
                {
# 2267
                (*((unsigned int *)cs->value_ptr)) = (*((unsigned int *)cs->noarg_value));
                }
              }
# 2269
              break;
              case 4: 
              {

              }
# 2273
              if ((unsigned int )optarg == (unsigned int )((char *)0)) {
# 2273
                if (optind < argc) {
# 2273
                  if ((unsigned int )(*((*(argv + optind)) + 0)) - 48U <= 9U) {
                    {
# 2275
                    tmp___7 = optind;
# 2275
                    optind = optind + 1;
# 2275
                    optarg = (*(argv + tmp___7));
                    }
                  } else {
# 2273
                    if ((int )(*((*(argv + optind)) + 0)) == 46) {
                      {
# 2275
                      tmp___7 = optind;
# 2275
                      optind = optind + 1;
# 2275
                      optarg = (*(argv + tmp___7));
                      }
                    }
                  }
                }
              }
# 2277
              if (doit) {
# 2278
                if ((unsigned int )optarg != (unsigned int )((char *)0)) {
                  {
# 2278
                  (*((double *)cs->value_ptr)) = atof((char const   *)optarg);
                  }
                } else {
                  {
# 2278
                  (*((double *)cs->value_ptr)) = (*((double *)cs->noarg_value));
                  }
                }
              }
# 2282
              break;
              }
# 2287
              break;
            }
            {
# 2182
            cs ++;
            }
          }
        }
      }
    }
  }
# 2295
  while (optind < argc) {
    {
# 2296
    tmp___9 = optind;
# 2296
    optind = optind + 1;
# 2296
    handle_non_switch_argument((*(argv + tmp___9)), env);
    }
  }
# 2299
  if (! env) {
# 2299
    if (bad) {
      goto _L;
    } else {
# 2299
      if (print_usage_flag) {
        _L: 
        {
# 2301
        print_usage(bad);
        }
# 2302
        if (bad) {
          {
# 2302
          tmp___10 = 2;
          }
        } else {
          {
# 2302
          tmp___10 = 0;
          }
        }
        {
# 2302
        die(tmp___10);
        }
      }
    }
  }
# 2304
  return;
}
}
# 2311
static void decode_env_switches(char *envar , unsigned int len ) 
{ char *varref ;
  char *tmp ;
  char *value ;
  char *p ;
  int argc ;
  char **argv ;
  char *tmp___1 ;
  char *tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;

  {
  {
# 2316
  tmp = (char *)__builtin_alloca((2U + len) + 2U);
# 2316
  varref = tmp;
# 2322
  (*(varref + 0)) = '$';
# 2323
  (*(varref + 1)) = '(';
# 2324
  memmove((void *)(varref + 2), (void const   *)envar, len);
# 2325
  (*(varref + (2U + len))) = ')';
# 2326
  (*(varref + ((2U + len) + 1U))) = '\0';
# 2327
  value = variable_expand(varref);
# 2330
  value = next_token((char const   *)value);
# 2331
  len = strlen((char const   *)value);
  }
# 2332
  if (len == 0U) {
# 2333
    return;
  }
  {
# 2336
  argv = (char **)__builtin_alloca(((1U + len) + 1U) * sizeof(char *));
# 2341
  tmp___1 = xmalloc(2U * len);
# 2341
  p = tmp___1;
# 2345
  (*(argv + 0)) = (char *)0;
# 2346
  argc = 1;
# 2347
  (*(argv + argc)) = p;
  }
# 2348
  while ((int )(*value) != 0) {
# 2350
    if ((int )(*value) == 92) {
# 2350
      if ((int )(*(value + 1)) != 0) {
        {
# 2351
        value ++;
        }
      } else {
        goto _L;
      }
    } else {
      _L: 
      {
# 2352
      tmp___4 = _get__ctype_b((int )((unsigned char )(*value)));
      }
# 2352
      if (tmp___4 & 1) {
        {
# 2355
        tmp___2 = p;
# 2355
        p ++;
# 2355
        (*tmp___2) = '\0';
# 2356
        argc ++;
# 2356
        (*(argv + argc)) = p;
        }
# 2357
        while (1) {
          {
# 2358
          value ++;
# 2357
          tmp___3 = _get__ctype_b((int )((unsigned char )(*value)));
          }
# 2357
          if (! (tmp___3 & 1)) {
# 2357
            break;
          }
        }
# 2360
        continue;
      }
    }
    {
# 2362
    tmp___5 = p;
# 2362
    p ++;
# 2362
    tmp___6 = value;
# 2362
    value ++;
# 2362
    (*tmp___5) = (*tmp___6);
    }
  }
  {
# 2364
  (*p) = '\0';
# 2365
  argc ++;
# 2365
  (*(argv + argc)) = (char *)0;
  }
# 2367
  if ((int )(*((*(argv + 1)) + 0)) != 45) {
    {
# 2367
    tmp___7 = strchr((char const   *)(*(argv + 1)), (int )'=');
    }
# 2367
    if ((unsigned int )tmp___7 == (unsigned int )((char *)0)) {
      {
# 2372
      (*(argv + 1)) = concat((char const   *)"-", (char const   *)(*(argv + 1)),
                             (char const   *)"");
      }
    }
  }
  {
# 2375
  decode_switches(argc, argv, 1);
  }
# 2376
  return;
}
}
# 2384
static char *quote_for_env(char *out , char *in ) 
{ char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;

  {
# 2388
  while ((int )(*in) != 0) {
# 2390
    if ((int )(*in) == 36) {
      {
# 2391
      tmp = out;
# 2391
      out ++;
# 2391
      (*tmp) = '$';
      }
    } else {
      {
# 2392
      tmp___1 = _get__ctype_b((int )((unsigned char )(*in)));
      }
# 2392
      if (tmp___1 & 1) {
        {
# 2393
        tmp___0 = out;
# 2393
        out ++;
# 2393
        (*tmp___0) = '\\';
        }
      } else {
# 2392
        if ((int )(*in) == 92) {
          {
# 2393
          tmp___0 = out;
# 2393
          out ++;
# 2393
          (*tmp___0) = '\\';
          }
        }
      }
    }
    {
# 2394
    tmp___2 = out;
# 2394
    out ++;
# 2394
    tmp___3 = in;
# 2394
    in ++;
# 2394
    (*tmp___2) = (*tmp___3);
    }
  }
# 2397
  return (out);
}
}
# 2408
static char const   ref[17]   = 
# 2408
  {'$', '(', 'M', 'A', 'K', 'E', 'O', 'V', 'E', 'R', 'R', 'I', 'D', 'E', 'S',
   ')', '\0'};
# 2409
static char const   posixref[27]   = 
# 2409
  {'$', '(', '-', '*', '-', 'c', 'o', 'm', 'm', 'a', 'n', 'd', '-', 'v', 'a',
   'r', 'i', 'a', 'b', 'l', 'e', 's', '-', '*', '-', ')', '\0'};
# 2404
static void define_makeflags(int all , int makefile ) 
{ register struct command_switch  const  *cs ;
  char *flagstring ;
  register char *p ;
  unsigned int words ;
  struct variable *v ;
  struct flag *flags ;
  unsigned int flagslen ;
  struct flag *new ;
  struct flag *tmp ;
  size_t tmp___0 ;
  struct flag *new___0 ;
  struct flag *tmp___1 ;
  size_t tmp___2 ;
  struct flag *new___1 ;
  struct flag *tmp___3 ;
  size_t tmp___4 ;
  char *buf___1 ;
  char *tmp___5 ;
  struct flag *new___2 ;
  struct flag *tmp___6 ;
  size_t tmp___7 ;
  size_t tmp___8 ;
  struct flag *new___3 ;
  struct flag *tmp___9 ;
  size_t tmp___10 ;
  char *buf___2 ;
  char *tmp___11 ;
  struct flag *new___4 ;
  struct flag *tmp___12 ;
  size_t tmp___13 ;
  size_t tmp___14 ;
  struct stringlist *sl ;
  register unsigned int i ;
  struct flag *new___5 ;
  struct flag *tmp___15 ;
  size_t tmp___16 ;
  size_t tmp___17 ;
  unsigned int tmp___18 ;
  char *tmp___20 ;
  char *tmp___21 ;
  char *tmp___22 ;
  char *tmp___23 ;
  char *tmp___24 ;
  size_t tmp___25 ;
  char *tmp___26 ;
  char *tmp___27 ;
  char *tmp___28 ;
  char *tmp___29 ;
  char *tmp___30 ;
  char *tmp___31 ;
  char *tmp___32 ;
  char *tmp___33 ;
  char *tmp___34 ;
  int tmp___35 ;

  {
  {
# 2427
  flags = (struct flag *)0;
# 2428
  flagslen = 0U;
# 2445
  cs = switches;
  }
# 2445
  while (cs->c != 0) {
# 2446
    if (cs->toenv) {
# 2446
      if (makefile) {
# 2446
        if (! cs->no_makefile) {
          _L___4: 
# 2447
          switch (cs->type) {
          default: 
          {
# 2450
          abort();
          }
          case 5: 
          {

          }
# 2453
          break;
          case 0: 
          {

          }
          case 1: 
          {

          }
# 2457
          if ((! (*((int *)cs->value_ptr)) != 0) == (cs->type == 1)) {
# 2457
            if ((unsigned int )cs->default_value == (unsigned int )((char *)0)) {
              goto _L;
            } else {
# 2457
              if ((*((int *)cs->value_ptr)) != (*((int *)cs->default_value))) {
                _L: 
# 2460
                while (1) {
                  {
# 2460
                  tmp = (struct flag *)__builtin_alloca(sizeof(struct flag ));
# 2460
                  new = tmp;
# 2460
                  new->cs = cs;
# 2460
                  new->arg = (char *)0;
# 2460
                  new->next = flags;
# 2460
                  flags = new;
                  }
# 2460
                  if ((unsigned int )new->arg == (unsigned int )((char *)0)) {
                    {
# 2460
                    flagslen ++;
                    }
                  } else {
                    {
# 2460
                    flagslen += 4U;
                    }
                  }
# 2460
                  if (! (cs->c <= 127)) {
                    {
# 2460
                    tmp___0 = strlen((char const   *)cs->long_name);
# 2460
                    flagslen += 2U + tmp___0;
                    }
                  }
# 2460
                  break;
                }
              }
            }
          }
# 2461
          break;
          case 3: 
          {

          }
# 2464
          if (all) {
# 2466
            if ((unsigned int )cs->default_value != (unsigned int )((char *)0)) {
# 2466
              if ((*((unsigned int *)cs->value_ptr)) ==
                  (*((unsigned int *)cs->default_value))) {
# 2469
                break;
              } else {
                goto _L___1;
              }
            } else {
              _L___1: 
# 2470
              if ((unsigned int )cs->noarg_value != (unsigned int )((char *)0)) {
# 2470
                if ((*((unsigned int *)cs->value_ptr)) ==
                    (*((unsigned int *)cs->noarg_value))) {
# 2473
                  while (1) {
                    {
# 2473
                    tmp___1 = (struct flag *)__builtin_alloca(sizeof(struct flag ));
# 2473
                    new___0 = tmp___1;
# 2473
                    new___0->cs = cs;
# 2473
                    new___0->arg = "";
# 2473
                    new___0->next = flags;
# 2473
                    flags = new___0;
                    }
# 2473
                    if ((unsigned int )new___0->arg ==
                        (unsigned int )((char *)0)) {
                      {
# 2473
                      flagslen ++;
                      }
                    } else {
                      {
# 2473
                      flagslen += 4U;
                      }
                    }
# 2473
                    if (! (cs->c <= 127)) {
                      {
# 2473
                      tmp___2 = strlen((char const   *)cs->long_name);
# 2473
                      flagslen += 2U + tmp___2;
                      }
                    }
# 2473
                    break;
                  }
                } else {
                  goto _L___0;
                }
              } else {
                _L___0: 
# 2474
                if (cs->c == 106) {
# 2476
                  while (1) {
                    {
# 2476
                    tmp___3 = (struct flag *)__builtin_alloca(sizeof(struct flag ));
# 2476
                    new___1 = tmp___3;
# 2476
                    new___1->cs = cs;
# 2476
                    new___1->arg = "1";
# 2476
                    new___1->next = flags;
# 2476
                    flags = new___1;
                    }
# 2476
                    if ((unsigned int )new___1->arg ==
                        (unsigned int )((char *)0)) {
                      {
# 2476
                      flagslen ++;
                      }
                    } else {
                      {
# 2476
                      flagslen += 7U;
                      }
                    }
# 2476
                    if (! (cs->c <= 127)) {
                      {
# 2476
                      tmp___4 = strlen((char const   *)cs->long_name);
# 2476
                      flagslen += 2U + tmp___4;
                      }
                    }
# 2476
                    break;
                  }
                } else {
                  {
# 2479
                  tmp___5 = (char *)__builtin_alloca(30);
# 2479
                  buf___1 = tmp___5;
# 2480
                  sprintf((char */* __restrict  */)buf___1,
                          (char const   */* __restrict  */)((char const   *)"%u"),
                          (*((unsigned int *)cs->value_ptr)));
                  }
# 2481
                  while (1) {
                    {
# 2481
                    tmp___6 = (struct flag *)__builtin_alloca(sizeof(struct flag ));
# 2481
                    new___2 = tmp___6;
# 2481
                    new___2->cs = cs;
# 2481
                    new___2->arg = buf___1;
# 2481
                    new___2->next = flags;
# 2481
                    flags = new___2;
                    }
# 2481
                    if ((unsigned int )new___2->arg ==
                        (unsigned int )((char *)0)) {
                      {
# 2481
                      flagslen ++;
                      }
                    } else {
                      {
# 2481
                      tmp___7 = strlen((char const   *)buf___1);
# 2481
                      flagslen += 4U + 3U * tmp___7;
                      }
                    }
# 2481
                    if (! (cs->c <= 127)) {
                      {
# 2481
                      tmp___8 = strlen((char const   *)cs->long_name);
# 2481
                      flagslen += 2U + tmp___8;
                      }
                    }
# 2481
                    break;
                  }
                }
              }
            }
          }
# 2484
          break;
          case 4: 
          {

          }
# 2488
          if (all) {
# 2490
            if ((unsigned int )cs->default_value != (unsigned int )((char *)0)) {
# 2490
              if ((*((double *)cs->value_ptr)) ==
                  (*((double *)cs->default_value))) {
# 2493
                break;
              } else {
                goto _L___3;
              }
            } else {
              _L___3: 
# 2494
              if ((unsigned int )cs->noarg_value != (unsigned int )((char *)0)) {
# 2494
                if ((*((double *)cs->value_ptr)) ==
                    (*((double *)cs->noarg_value))) {
# 2497
                  while (1) {
                    {
# 2497
                    tmp___9 = (struct flag *)__builtin_alloca(sizeof(struct flag ));
# 2497
                    new___3 = tmp___9;
# 2497
                    new___3->cs = cs;
# 2497
                    new___3->arg = "";
# 2497
                    new___3->next = flags;
# 2497
                    flags = new___3;
                    }
# 2497
                    if ((unsigned int )new___3->arg ==
                        (unsigned int )((char *)0)) {
                      {
# 2497
                      flagslen ++;
                      }
                    } else {
                      {
# 2497
                      flagslen += 4U;
                      }
                    }
# 2497
                    if (! (cs->c <= 127)) {
                      {
# 2497
                      tmp___10 = strlen((char const   *)cs->long_name);
# 2497
                      flagslen += 2U + tmp___10;
                      }
                    }
# 2497
                    break;
                  }
                } else {
                  goto _L___2;
                }
              } else {
                _L___2: 
                {
# 2500
                tmp___11 = (char *)__builtin_alloca(100);
# 2500
                buf___2 = tmp___11;
# 2501
                sprintf((char */* __restrict  */)buf___2,
                        (char const   */* __restrict  */)((char const   *)"%g"),
                        (*((double *)cs->value_ptr)));
                }
# 2502
                while (1) {
                  {
# 2502
                  tmp___12 = (struct flag *)__builtin_alloca(sizeof(struct flag ));
# 2502
                  new___4 = tmp___12;
# 2502
                  new___4->cs = cs;
# 2502
                  new___4->arg = buf___2;
# 2502
                  new___4->next = flags;
# 2502
                  flags = new___4;
                  }
# 2502
                  if ((unsigned int )new___4->arg == (unsigned int )((char *)0)) {
                    {
# 2502
                    flagslen ++;
                    }
                  } else {
                    {
# 2502
                    tmp___13 = strlen((char const   *)buf___2);
# 2502
                    flagslen += 4U + 3U * tmp___13;
                    }
                  }
# 2502
                  if (! (cs->c <= 127)) {
                    {
# 2502
                    tmp___14 = strlen((char const   *)cs->long_name);
# 2502
                    flagslen += 2U + tmp___14;
                    }
                  }
# 2502
                  break;
                }
              }
            }
          }
# 2505
          break;
          case 2: 
          {

          }
# 2509
          if (all) {
            {
# 2511
            sl = (*((struct stringlist **)cs->value_ptr));
            }
# 2512
            if ((unsigned int )sl != (unsigned int )((struct stringlist *)0)) {
              {
# 2517
              i = sl->idx;
              }
# 2518
              while (1) {
                {
# 2518
                tmp___18 = i;
# 2518
                i --;
                }
# 2518
                if (! (tmp___18 > 0U)) {
# 2518
                  break;
                }
# 2519
                while (1) {
                  {
# 2519
                  tmp___15 = (struct flag *)__builtin_alloca(sizeof(struct flag ));
# 2519
                  new___5 = tmp___15;
# 2519
                  new___5->cs = cs;
# 2519
                  new___5->arg = (*(sl->list + i));
# 2519
                  new___5->next = flags;
# 2519
                  flags = new___5;
                  }
# 2519
                  if ((unsigned int )new___5->arg == (unsigned int )((char *)0)) {
                    {
# 2519
                    flagslen ++;
                    }
                  } else {
                    {
# 2519
                    tmp___16 = strlen((char const   *)(*(sl->list + i)));
# 2519
                    flagslen += 4U + 3U * tmp___16;
                    }
                  }
# 2519
                  if (! (cs->c <= 127)) {
                    {
# 2519
                    tmp___17 = strlen((char const   *)cs->long_name);
# 2519
                    flagslen += 2U + tmp___17;
                    }
                  }
# 2519
                  break;
                }
              }
            }
          }
# 2522
          break;
          }
        }
      } else {
        goto _L___4;
      }
    }
    {
# 2445
    cs ++;
    }
  }
  {
# 2525
  flagslen += 4U + sizeof(posixref);
# 2531
  flagstring = (char *)__builtin_alloca((1U + flagslen) + 1U);
# 2532
  memset((void *)flagstring, 0, (1U + flagslen) + 1U);
# 2533
  p = flagstring;
# 2534
  words = 1U;
# 2535
  tmp___20 = p;
# 2535
  p ++;
# 2535
  (*tmp___20) = '-';
  }
# 2536
  while ((unsigned int )flags != (unsigned int )((struct flag *)0)) {
# 2539
    if ((flags->cs)->c <= 127) {
      {
# 2540
      tmp___21 = p;
# 2540
      p ++;
# 2540
      (*tmp___21) = (char )(flags->cs)->c;
      }
    } else {
# 2543
      if ((int )(*p) != 45) {
        {
# 2545
        tmp___22 = p;
# 2545
        p ++;
# 2545
        (*tmp___22) = ' ';
# 2546
        tmp___23 = p;
# 2546
        p ++;
# 2546
        (*tmp___23) = '-';
        }
      }
      {
# 2548
      tmp___24 = p;
# 2548
      p ++;
# 2548
      (*tmp___24) = '-';
# 2549
      strcpy((char */* __restrict  */)p,
             (char const   */* __restrict  */)((char const   *)(flags->cs)->long_name));
# 2550
      tmp___25 = strlen((char const   *)p);
# 2550
      p += tmp___25;
      }
    }
# 2552
    if ((unsigned int )flags->arg != (unsigned int )((char *)0)) {
# 2558
      if ((int )(*(flags->arg + 0)) != 0) {
        {
# 2561
        tmp___26 = p;
# 2561
        p ++;
        }
# 2561
        if ((flags->cs)->c <= 127) {
          {
# 2561
          (*tmp___26) = ' ';
          }
        } else {
          {
# 2561
          (*tmp___26) = '=';
          }
        }
        {
# 2562
        p = quote_for_env(p, flags->arg);
        }
      }
      {
# 2564
      words ++;
# 2566
      tmp___27 = p;
# 2566
      p ++;
# 2566
      (*tmp___27) = ' ';
# 2567
      tmp___28 = p;
# 2567
      p ++;
# 2567
      (*tmp___28) = '-';
      }
    } else {
# 2569
      if (! ((flags->cs)->c <= 127)) {
        {
# 2571
        words ++;
# 2574
        tmp___29 = p;
# 2574
        p ++;
# 2574
        (*tmp___29) = ' ';
# 2575
        tmp___30 = p;
# 2575
        p ++;
# 2575
        (*tmp___30) = '-';
        }
      }
    }
    {
# 2577
    flags = flags->next;
    }
  }
# 2582
  if ((unsigned int )p == (unsigned int )(flagstring + 1)) {
    {
# 2584
    (*(flagstring + 0)) = '\0';
    }
  } else {
# 2585
    if ((int )(*(p + -1)) == 45) {
      {
# 2588
      p -= 2;
# 2589
      (*p) = '\0';
      }
    } else {
      {
# 2593
      (*p) = '\0';
      }
    }
  }
  {
# 2597
  define_variable_in_set((char const   *)"MFLAGS", 6U, flagstring, 1, 1,
                         current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
  }
# 2599
  if (all) {
# 2599
    if ((unsigned int )command_variables !=
        (unsigned int )((struct command_variable *)0)) {
# 2604
      if ((unsigned int )p == (unsigned int )(flagstring + 1)) {
        {
# 2606
        p = flagstring;
        }
      } else {
# 2610
        if ((int )(*(p + -1)) != 45) {
          {
# 2613
          tmp___31 = p;
# 2613
          p ++;
# 2613
          (*tmp___31) = ' ';
# 2614
          tmp___32 = p;
# 2614
          p ++;
# 2614
          (*tmp___32) = '-';
          }
        }
        {
# 2617
        tmp___33 = p;
# 2617
        p ++;
# 2617
        (*tmp___33) = '-';
# 2618
        tmp___34 = p;
# 2618
        p ++;
# 2618
        (*tmp___34) = ' ';
        }
      }
# 2622
      if (posix_pedantic) {
        {
# 2624
        memmove((void *)p, (void const   *)(posixref), sizeof(posixref) - 1U);
# 2625
        p += sizeof(posixref) - 1U;
        }
      } else {
        {
# 2629
        memmove((void *)p, (void const   *)(ref), sizeof(ref) - 1U);
# 2630
        p += sizeof(ref) - 1U;
        }
      }
    } else {
      goto _L___5;
    }
  } else {
    _L___5: 
# 2633
    if ((unsigned int )p == (unsigned int )(flagstring + 1)) {
      {
# 2635
      words = 0U;
# 2636
      p --;
      }
    } else {
# 2638
      if ((int )(*(p + -1)) == 45) {
        {
# 2640
        p -= 2;
        }
      }
    }
  }
  {
# 2642
  (*p) = '\0';
  }
# 2644
  if ((int )(*(flagstring + 0)) == 45) {
# 2644
    if ((int )(*(flagstring + 1)) != 45) {
      {
# 2644
      tmp___35 = 1;
      }
    } else {
      {
# 2644
      tmp___35 = 0;
      }
    }
  } else {
    {
# 2644
    tmp___35 = 0;
    }
  }
  {
# 2644
  v = define_variable_in_set((char const   *)"MAKEFLAGS", 9U,
                             flagstring + tmp___35, 2, 1,
                             current_variable_set_list->set,
                             (struct floc  const  *)((struct floc *)0));
  }
# 2658
  if (! all) {
    {
# 2662
    v->export = 0;
    }
  }
# 2663
  return;
}
}
# 2670
static int printed_version   = 0;
# 2667
static void print_version(void) 
{ char *precede ;
  char const   *tmp ;
  char const   * __restrict  tmp___0 ;
  FILE *tmp___1 ;

  {
# 2672
  if (print_data_base_flag) {
    {
# 2672
    tmp = (char const   *)"# ";
    }
  } else {
    {
# 2672
    tmp = (char const   *)"";
    }
  }
  {
# 2672
  precede = (char *)tmp;
  }
# 2674
  if (printed_version) {
# 2676
    return;
  }
  {
# 2683
  printf((char const   */* __restrict  */)((char const   *)"%sGNU Make %s\n%sCopyright (C) 2002  Free Software Foundation, Inc.\n"),
         precede, version_string, precede);
# 2687
  tmp___0 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                       (char const   *)"%sThis is free software; see the source for copying conditions.\n%sThere is NO warranty; not even for MERCHANTABILITY or FITNESS FOR A\n%sPARTICULAR PURPOSE.\n",
                                                       5);
# 2687
  printf(tmp___0, precede, precede, precede);
# 2692
  printed_version = 1;
# 2696
  tmp___1 = get_stdout();
  {
# 105 "spec.work"
  tmp___1->__BLAST_FLAG = 1;
  {

  }
  }
# 2696 "main.c"
  fflush(tmp___1);
  }
# 2697
  return;
}
}
# 2701
static void print_data_base(void) 
{ time_t when ;
  char *tmp ;
  char const   * __restrict  tmp___0 ;
  char *tmp___1 ;
  char const   * __restrict  tmp___2 ;

  {
  {
# 2706
  when = time((time_t *)0);
# 2707
  tmp = ctime((time_t const   *)(& when));
# 2707
  tmp___0 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                       (char const   *)"\n# Make data base, printed on %s",
                                                       5);
# 2707
  printf(tmp___0, tmp);
# 2709
  print_variable_data_base();
# 2710
  print_dir_data_base();
# 2711
  print_rule_data_base();
# 2712
  print_file_data_base();
# 2713
  print_vpath_data_base();
# 2715
  when = time((time_t *)0);
# 2716
  tmp___1 = ctime((time_t const   *)(& when));
# 2716
  tmp___2 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                       (char const   *)"\n# Finished Make data base on %s\n",
                                                       5);
# 2716
  printf(tmp___2, tmp___1);
  }
# 2717
  return;
}
}
# 2725
static char dying   = (char )0;
# 2721
void die(int status )  __attribute__((__noreturn__)) ;
# 2721
void die(int status ) 
{ int err ;

  {
# 2727
  if (! dying) {
    {
# 2731
    dying = (char )1;
    }
# 2733
    if (print_version_flag) {
      {
# 2734
      print_version();
      }
    }
    {
# 2737
    err = status != 0;
    }
# 2737
    while (job_slots_used > 0U) {
      {
# 2738
      reap_children(1, err);
# 2737
      err = 0;
      }
    }
    {
# 2741
    remote_cleanup();
# 2744
    remove_intermediates(0);
    }
# 2746
    if (print_data_base_flag) {
      {
# 2747
      print_data_base();
      }
    }
# 2754
    if ((unsigned int )directory_before_chdir != (unsigned int )((char *)0)) {
      {
# 2755
      chdir((char const   *)directory_before_chdir);
      }
    }
    {
# 2757
    log_working_directory(0);
    }
  }
  {
# 2760
  exit(status);
  {
# 121 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
# 2760 "main.c"
  return;
}
}
# 2770
static int entered   = 0;
# 2766
void log_working_directory(int entering ) 
{ FILE * __restrict  tmp ;
  char const   * __restrict  tmp___0 ;
  char const   * __restrict  tmp___1 ;
  char const   * __restrict  tmp___2 ;
  char const   * __restrict  tmp___3 ;
  char const   * __restrict  tmp___4 ;
  char const   * __restrict  tmp___5 ;
  char const   * __restrict  tmp___6 ;
  char const   * __restrict  tmp___7 ;

  {
# 2775
  if (print_directory_flag) {
# 2775
    if (entering == entered) {
# 2776
      return;
    }
  } else {
# 2776
    return;
  }
  {
# 2778
  entered = entering;
  }
# 2780
  if (print_data_base_flag) {
    {
# 2781
    tmp = (FILE */* __restrict  */)get_stdout();
    {
# 105 "spec.work"
    tmp->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 40
    if (! (tmp->__BLAST_FLAG == 1)) {
# 42
      __error__();
    }
    {

    }
    }
# 2781 "main.c"
    fputs((char const   */* __restrict  */)((char const   *)"# "), tmp);
    }
  }
# 2785
  if (makelevel == 0U) {
# 2786
    if ((unsigned int )starting_directory == (unsigned int )((char *)0)) {
# 2787
      if (entering) {
        {
# 2788
        tmp___0 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                             (char const   *)"%s: Entering an unknown directory",
                                                             5);
# 2788
        printf(tmp___0, program);
        }
      } else {
        {
# 2790
        tmp___1 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                             (char const   *)"%s: Leaving an unknown directory",
                                                             5);
# 2790
        printf(tmp___1, program);
        }
      }
    } else {
# 2792
      if (entering) {
        {
# 2793
        tmp___2 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                             (char const   *)"%s: Entering directory `%s\'\n",
                                                             5);
# 2793
        printf(tmp___2, program, starting_directory);
        }
      } else {
        {
# 2796
        tmp___3 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                             (char const   *)"%s: Leaving directory `%s\'\n",
                                                             5);
# 2796
        printf(tmp___3, program, starting_directory);
        }
      }
    }
  } else {
# 2799
    if ((unsigned int )starting_directory == (unsigned int )((char *)0)) {
# 2800
      if (entering) {
        {
# 2801
        tmp___4 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                             (char const   *)"%s[%u]: Entering an unknown directory",
                                                             5);
# 2801
        printf(tmp___4, program, makelevel);
        }
      } else {
        {
# 2804
        tmp___5 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                             (char const   *)"%s[%u]: Leaving an unknown directory",
                                                             5);
# 2804
        printf(tmp___5, program, makelevel);
        }
      }
    } else {
# 2807
      if (entering) {
        {
# 2808
        tmp___6 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                             (char const   *)"%s[%u]: Entering directory `%s\'\n",
                                                             5);
# 2808
        printf(tmp___6, program, makelevel, starting_directory);
        }
      } else {
        {
# 2811
        tmp___7 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                             (char const   *)"%s[%u]: Leaving directory `%s\'\n",
                                                             5);
# 2811
        printf(tmp___7, program, makelevel, starting_directory);
        }
      }
    }
  }
# 2813
  return;
}
}
# 62 "misc.c"
int alpha_compare(void const   *v1 , void const   *v2 ) 
{ char const   *s1 ;
  char const   *s2 ;
  int tmp ;

  {
  {
# 66
  s1 = (char const   *)(*((char **)v1));
# 67
  s2 = (char const   *)(*((char **)v2));
  }
# 69
  if ((int const   )(*s1) != (int const   )(*s2)) {
# 70
    return ((int const   )(*s1) - (int const   )(*s2));
  }
  {
# 71
  tmp = strcmp(s1, s2);
  }
# 71
  return (tmp);
}
}
# 78
void collapse_continuations(char *line ) 
{ register char *in ;
  register char *out ;
  register char *p ;
  register int backslash ;
  register unsigned int bs_write ;
  char *tmp ;
  unsigned int tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;

  {
  {
# 86
  in = strchr((char const   *)line, (int )'\n');
  }
# 87
  if ((unsigned int )in == (unsigned int )((char *)0)) {
# 88
    return;
  }
  {
# 90
  out = in;
  }
# 91
  while (1) {
# 91
    if ((unsigned int )out > (unsigned int )line) {
# 91
      if (! ((int )(*(out + -1)) == 92)) {
# 91
        break;
      }
    } else {
# 91
      break;
    }
    {
# 92
    out --;
    }
  }
# 94
  while ((int )(*in) != 0) {
    {
# 99
    backslash = 0;
# 100
    bs_write = 0U;
# 101
    p = in - 1;
    }
# 101
    while (1) {
# 101
      if ((unsigned int )p >= (unsigned int )line) {
# 101
        if (! ((int )(*p) == 92)) {
# 101
          break;
        }
      } else {
# 101
        break;
      }
# 103
      if (backslash) {
        {
# 104
        bs_write ++;
        }
      }
      {
# 105
      backslash = ! backslash != 0;
      }
# 109
      if ((unsigned int )in == (unsigned int )(out - 1)) {
        {
# 110
        abort();
        }
      }
      {
# 101
      p --;
      }
    }
# 114
    while (1) {
      {
# 114
      tmp___0 = bs_write;
# 114
      bs_write --;
      }
# 114
      if (! (tmp___0 > 0U)) {
# 114
        break;
      }
      {
# 115
      tmp = out;
# 115
      out ++;
# 115
      (*tmp) = '\\';
      }
    }
    {
# 118
    in ++;
    }
# 122
    if (backslash) {
      {
# 124
      in = next_token((char const   *)in);
      }
# 125
      while (1) {
# 125
        if ((unsigned int )out > (unsigned int )line) {
          {
# 125
          tmp___1 = _get__ctype_b((int )((unsigned char )(*(out + -1))));
          }
# 125
          if (! (tmp___1 & 1)) {
# 125
            break;
          }
        } else {
# 125
          break;
        }
        {
# 126
        out --;
        }
      }
      {
# 127
      tmp___2 = out;
# 127
      out ++;
# 127
      (*tmp___2) = ' ';
      }
    } else {
      {
# 131
      tmp___3 = out;
# 131
      out ++;
# 131
      (*tmp___3) = '\n';
      }
    }
# 135
    while ((int )(*in) != 0) {
# 136
      if ((int )(*in) == 92) {
        {
# 138
        p = in + 1;
        }
# 139
        while ((int )(*p) == 92) {
          {
# 140
          p ++;
          }
        }
# 141
        if ((int )(*p) == 10) {
          {
# 143
          in = p;
          }
# 144
          break;
        }
# 146
        while ((unsigned int )in < (unsigned int )p) {
          {
# 147
          tmp___4 = out;
# 147
          out ++;
# 147
          tmp___5 = in;
# 147
          in ++;
# 147
          (*tmp___4) = (*tmp___5);
          }
        }
      } else {
        {
# 150
        tmp___6 = out;
# 150
        out ++;
# 150
        tmp___7 = in;
# 150
        in ++;
# 150
        (*tmp___6) = (*tmp___7);
        }
      }
    }
  }
  {
# 153
  (*out) = '\0';
  }
# 154
  return;
}
}
# 160
void remove_comments(char *line ) 
{ char *comment ;

  {
  {
# 166
  comment = find_char_unquote(line, (int )'#', 0, 0);
  }
# 168
  if ((unsigned int )comment != (unsigned int )((char *)0)) {
    {
# 170
    (*comment) = '\0';
    }
  }
# 171
  return;
}
}
# 175
void print_spaces(unsigned int n ) 
{ unsigned int tmp ;

  {
# 179
  while (1) {
    {
# 179
    tmp = n;
# 179
    n --;
    }
# 179
    if (! (tmp > 0U)) {
# 179
      break;
    }
    {
# 180
    putchar__extinline((int )' ');
    }
  }
# 181
  return;
}
}
# 187
char *concat(char const   *s1 , char const   *s2 , char const   *s3 ) 
{ unsigned int len1 ;
  unsigned int len2 ;
  unsigned int len3 ;
  char *result___0 ;
  char *tmp___2 ;

  {
# 194
  if ((int const   )(*s1) != 0) {
    {
# 194
    len1 = strlen(s1);
    }
  } else {
    {
# 194
    len1 = 0U;
    }
  }
# 195
  if ((int const   )(*s2) != 0) {
    {
# 195
    len2 = strlen(s2);
    }
  } else {
    {
# 195
    len2 = 0U;
    }
  }
# 196
  if ((int const   )(*s3) != 0) {
    {
# 196
    len3 = strlen(s3);
    }
  } else {
    {
# 196
    len3 = 0U;
    }
  }
  {
# 198
  tmp___2 = xmalloc(((len1 + len2) + len3) + 1U);
# 198
  result___0 = tmp___2;
  }
# 200
  if ((int const   )(*s1) != 0) {
    {
# 201
    memmove((void *)result___0, (void const   *)s1, len1);
    }
  }
# 202
  if ((int const   )(*s2) != 0) {
    {
# 203
    memmove((void *)(result___0 + len1), (void const   *)s2, len2);
    }
  }
# 204
  if ((int const   )(*s3) != 0) {
    {
# 205
    memmove((void *)((result___0 + len1) + len2), (void const   *)s3, len3);
    }
  }
  {
# 206
  (*(((result___0 + len1) + len2) + len3)) = '\0';
  }
# 208
  return (result___0);
}
}
# 213
void message(int prefix , char const   *fmt  , ...) 
{ __ccured_va_list args ;
  unsigned long tmp ;
  FILE * __restrict  tmp___0 ;
  FILE *tmp___1 ;

  {
  {
# 227
  log_working_directory(1);
  }
# 229
  if ((unsigned int )fmt != (unsigned int )((char const   *)0)) {
# 231
    if (prefix) {
# 233
      if (makelevel == 0U) {
        {
# 234
        printf((char const   */* __restrict  */)((char const   *)"%s: "),
               program);
        }
      } else {
        {
# 236
        printf((char const   */* __restrict  */)((char const   *)"%s[%u]: "),
               program, makelevel);
        }
      }
    }
    {
# 238
    tmp = (unsigned long )GCC_STDARG_START();
# 238
    __ccured_va_start(args, tmp);
# 239
    tmp___0 = (FILE */* __restrict  */)get_stdout();
    {
# 105 "spec.work"
    tmp___0->__BLAST_FLAG = 1;
    {

    }
    }
# 239 "misc.c"
    vfprintf(tmp___0, (char const   */* __restrict  */)fmt, args);
# 240
    __ccured_va_end(args);
# 241
    putchar__extinline((int )'\n');
    }
  }
  {
# 244
  tmp___1 = get_stdout();
  {
# 105 "spec.work"
  tmp___1->__BLAST_FLAG = 1;
  {

  }
  }
# 244 "misc.c"
  fflush(tmp___1);
  }
# 245
  return;
}
}
# 249
void error(struct floc  const  *flocp , char const   *fmt  , ...) 
{ __ccured_va_list args ;
  FILE * __restrict  tmp ;
  FILE * __restrict  tmp___0 ;
  FILE * __restrict  tmp___1 ;
  unsigned long tmp___2 ;
  FILE * __restrict  tmp___3 ;
  FILE *tmp___4 ;
  FILE *tmp___5 ;

  {
  {
# 263
  log_working_directory(1);
  }
# 265
  if (flocp) {
# 265
    if (flocp->filenm) {
      {
# 266
      tmp = (FILE */* __restrict  */)get_stderr();
      {
# 97 "spec.work"
      tmp->__BLAST_FLAG = 1;
      {

      }
      }

      {
# 64
      if (! (tmp->__BLAST_FLAG == 1)) {
# 66
        __error__();
      }
      {

      }
      }
# 266 "misc.c"
      fprintf(tmp,
              (char const   */* __restrict  */)((char const   *)"%s:%lu: "),
              flocp->filenm, flocp->lineno);
      }
    } else {
      goto _L;
    }
  } else {
    _L: 
# 267
    if (makelevel == 0U) {
      {
# 268
      tmp___0 = (FILE */* __restrict  */)get_stderr();
      {
# 97 "spec.work"
      tmp___0->__BLAST_FLAG = 1;
      {

      }
      }

      {
# 56
      if (! (tmp___0->__BLAST_FLAG == 1)) {
# 58
        __error__();
      }
      {

      }
      }
# 268 "misc.c"
      fprintf(tmp___0,
              (char const   */* __restrict  */)((char const   *)"%s: "), program);
      }
    } else {
      {
# 270
      tmp___1 = (FILE */* __restrict  */)get_stderr();
      {
# 97 "spec.work"
      tmp___1->__BLAST_FLAG = 1;
      {

      }
      }

      {
# 64
      if (! (tmp___1->__BLAST_FLAG == 1)) {
# 66
        __error__();
      }
      {

      }
      }
# 270 "misc.c"
      fprintf(tmp___1,
              (char const   */* __restrict  */)((char const   *)"%s[%u]: "),
              program, makelevel);
      }
    }
  }
  {
# 272
  tmp___2 = (unsigned long )GCC_STDARG_START();
# 272
  __ccured_va_start(args, tmp___2);
# 273
  tmp___3 = (FILE */* __restrict  */)get_stderr();
  {
# 97 "spec.work"
  tmp___3->__BLAST_FLAG = 1;
  {

  }
  }
# 273 "misc.c"
  vfprintf(tmp___3, (char const   */* __restrict  */)fmt, args);
# 274
  __ccured_va_end(args);
# 276
  tmp___4 = get_stderr();
  {
# 97 "spec.work"
  tmp___4->__BLAST_FLAG = 1;
  {

  }
  }
# 276 "misc.c"
  _IO_putc((int )'\n', tmp___4);
# 277
  tmp___5 = get_stderr();
  {
# 97 "spec.work"
  tmp___5->__BLAST_FLAG = 1;
  {

  }
  }
# 277 "misc.c"
  fflush(tmp___5);
  }
# 278
  return;
}
}
# 282
void fatal(struct floc  const  *flocp , char const   *fmt  , ...)  __attribute__((__noreturn__)) ;
# 282
void fatal(struct floc  const  *flocp , char const   *fmt  , ...) 
{ __ccured_va_list args ;
  FILE * __restrict  tmp ;
  FILE * __restrict  tmp___0 ;
  FILE * __restrict  tmp___1 ;
  unsigned long tmp___2 ;
  FILE * __restrict  tmp___3 ;
  FILE * __restrict  tmp___4 ;
  char const   * __restrict  tmp___5 ;

  {
  {
# 296
  log_working_directory(1);
  }
# 298
  if (flocp) {
# 298
    if (flocp->filenm) {
      {
# 299
      tmp = (FILE */* __restrict  */)get_stderr();
      {
# 97 "spec.work"
      tmp->__BLAST_FLAG = 1;
      {

      }
      }

      {
# 64
      if (! (tmp->__BLAST_FLAG == 1)) {
# 66
        __error__();
      }
      {

      }
      }
# 299 "misc.c"
      fprintf(tmp,
              (char const   */* __restrict  */)((char const   *)"%s:%lu: *** "),
              flocp->filenm, flocp->lineno);
      }
    } else {
      goto _L;
    }
  } else {
    _L: 
# 300
    if (makelevel == 0U) {
      {
# 301
      tmp___0 = (FILE */* __restrict  */)get_stderr();
      {
# 97 "spec.work"
      tmp___0->__BLAST_FLAG = 1;
      {

      }
      }

      {
# 56
      if (! (tmp___0->__BLAST_FLAG == 1)) {
# 58
        __error__();
      }
      {

      }
      }
# 301 "misc.c"
      fprintf(tmp___0,
              (char const   */* __restrict  */)((char const   *)"%s: *** "),
              program);
      }
    } else {
      {
# 303
      tmp___1 = (FILE */* __restrict  */)get_stderr();
      {
# 97 "spec.work"
      tmp___1->__BLAST_FLAG = 1;
      {

      }
      }

      {
# 64
      if (! (tmp___1->__BLAST_FLAG == 1)) {
# 66
        __error__();
      }
      {

      }
      }
# 303 "misc.c"
      fprintf(tmp___1,
              (char const   */* __restrict  */)((char const   *)"%s[%u]: *** "),
              program, makelevel);
      }
    }
  }
  {
# 305
  tmp___2 = (unsigned long )GCC_STDARG_START();
# 305
  __ccured_va_start(args, tmp___2);
# 306
  tmp___3 = (FILE */* __restrict  */)get_stderr();
  {
# 97 "spec.work"
  tmp___3->__BLAST_FLAG = 1;
  {

  }
  }
# 306 "misc.c"
  vfprintf(tmp___3, (char const   */* __restrict  */)fmt, args);
# 307
  __ccured_va_end(args);
# 309
  tmp___4 = (FILE */* __restrict  */)get_stderr();
  {
# 97 "spec.work"
  tmp___4->__BLAST_FLAG = 1;
  {

  }
  }
# 309 "misc.c"
  tmp___5 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                       (char const   *)".  Stop.\n",
                                                       5);
  {
# 40 "spec.work"
  if (! (tmp___4->__BLAST_FLAG == 1)) {
# 42
    __error__();
  }
  {

  }
  }
# 309 "misc.c"
  fputs(tmp___5, tmp___4);
# 311
  die(2);
  }
# 311
  return;
}
}
# 338
void perror_with_name(char const   *str , char const   *name ) 
{ int *tmp ;
  char *tmp___0 ;
  char const   *tmp___1 ;

  {
  {
# 342
  tmp = __errno_location();
# 342
  tmp___0 = strerror((*tmp));
# 342
  tmp___1 = (char const   *)dcgettext((char const   *)((void *)0),
                                      (char const   *)"%s%s: %s", 5);
# 342
  error((struct floc  const  *)((struct floc *)0), tmp___1, str, name, tmp___0);
  }
# 343
  return;
}
}
# 347
void pfatal_with_name(char const   *name )  __attribute__((__noreturn__)) ;
# 347
void pfatal_with_name(char const   *name ) 
{ int *tmp ;
  char *tmp___0 ;
  char const   *tmp___1 ;

  {
  {
# 351
  tmp = __errno_location();
# 351
  tmp___0 = strerror((*tmp));
# 351
  tmp___1 = (char const   *)dcgettext((char const   *)((void *)0),
                                      (char const   *)"%s: %s", 5);
# 351
  fatal((struct floc  const  *)((struct floc *)0), tmp___1, name, tmp___0);
  }
# 351
  return;
}
}
# 365
char *xmalloc(unsigned int size ) 
{ char *result___0 ;
  char *tmp ;
  char const   *tmp___0 ;

  {
  {
# 369
  tmp = (char *)malloc(size);
# 369
  result___0 = tmp;
  }
# 370
  if ((unsigned int )result___0 == (unsigned int )((char *)0)) {
    {
# 371
    tmp___0 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"virtual memory exhausted",
                                        5);
# 371
    fatal((struct floc  const  *)((struct floc *)0), tmp___0);
    }
  }
# 372
  return (result___0);
}
}
# 376
char *xrealloc(char *ptr , unsigned int size ) 
{ char *result___0 ;
  char const   *tmp___1 ;

  {
# 384
  if (ptr) {
    {
# 384
    result___0 = (char *)realloc((void *)ptr, size);
    }
  } else {
    {
# 384
    result___0 = (char *)malloc(size);
    }
  }
# 385
  if ((unsigned int )result___0 == (unsigned int )((char *)0)) {
    {
# 386
    tmp___1 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"virtual memory exhausted",
                                        5);
# 386
    fatal((struct floc  const  *)((struct floc *)0), tmp___1);
    }
  }
# 387
  return (result___0);
}
}
# 391
char *xstrdup(char const   *ptr ) 
{ char *result___0 ;
  char const   *tmp ;

  {
  {
# 398
  result___0 = strdup(ptr);
  }
# 403
  if ((unsigned int )result___0 == (unsigned int )((char *)0)) {
    {
# 404
    tmp = (char const   *)dcgettext((char const   *)((void *)0),
                                    (char const   *)"virtual memory exhausted",
                                    5);
# 404
    fatal((struct floc  const  *)((struct floc *)0), tmp);
    }
  }
# 407
  return (result___0);
}
}
# 415
char *savestring(char const   *str , unsigned int length___0 ) 
{ register char *out ;
  char *tmp ;

  {
  {
# 420
  tmp = xmalloc(length___0 + 1U);
# 420
  out = tmp;
  }
# 421
  if (length___0 > 0U) {
    {
# 422
    memmove((void *)out, (void const   *)str, length___0);
    }
  }
  {
# 423
  (*(out + length___0)) = '\0';
  }
# 424
  return (out);
}
}
# 431
char *sindex(char const   *big , unsigned int blen , char const   *small ,
             unsigned int slen ) 
{ register unsigned int b ;
  int tmp ;

  {
# 438
  if (! blen) {
    {
# 439
    blen = strlen(big);
    }
  }
# 440
  if (! slen) {
    {
# 441
    slen = strlen(small);
    }
  }
# 443
  if (slen) {
# 443
    if (blen >= slen) {
      {
# 448
      slen --;
# 449
      blen -= slen;
# 451
      b = 0U;
      }
# 451
      while (b < blen) {
# 452
        if ((int const   )(*big) == (int const   )(*small)) {
          {
# 452
          tmp = strncmp(big + 1, small + 1, slen);
          }
# 452
          if (tmp == 0) {
# 453
            return ((char *)big);
          }
        }
        {
# 451
        b ++;
# 451
        big ++;
        }
      }
    }
  }
# 456
  return ((char *)0);
}
}
# 465
char *lindex(char const   *s , char const   *limit , int c ) 
{ char const   *tmp ;

  {
# 470
  while ((unsigned int )s < (unsigned int )limit) {
    {
# 471
    tmp = s;
# 471
    s ++;
    }
# 471
    if ((int const   )(*tmp) == c) {
# 472
      return ((char *)(s - 1));
    }
  }
# 474
  return ((char *)0);
}
}
# 479
char *end_of_token(char *s ) 
{ int tmp ;

  {
# 483
  while (1) {
# 483
    if ((int )(*s) != 0) {
      {
# 483
      tmp = _get__ctype_b((int )((unsigned char )(*s)));
      }
# 483
      if (tmp & 1) {
# 483
        break;
      }
    } else {
# 483
      break;
    }
    {
# 484
    s ++;
    }
  }
# 485
  return (s);
}
}
# 522
char *next_token(char const   *s ) 
{ int tmp ;

  {
# 526
  while (1) {
    {
# 526
    tmp = _get__ctype_b((int )((unsigned char )(*s)));
    }
# 526
    if (! (tmp & 1)) {
# 526
      break;
    }
    {
# 527
    s ++;
    }
  }
# 528
  return ((char *)s);
}
}
# 534
char *find_next_token(char **ptr , unsigned int *lengthptr ) 
{ char *p ;
  char *tmp ;
  char *end ;

  {
  {
# 539
  tmp = next_token((char const   *)(*ptr));
# 539
  p = tmp;
  }
# 542
  if ((int )(*p) == 0) {
# 543
    return ((char *)0);
  }
  {
# 545
  end = end_of_token(p);
# 545
  (*ptr) = end;
  }
# 546
  if ((unsigned int )lengthptr != (unsigned int )((unsigned int *)0)) {
    {
# 547
    (*lengthptr) = (unsigned int )(end - p);
    }
  }
# 548
  return (p);
}
}
# 554
struct dep *copy_dep_chain(struct dep *d ) 
{ register struct dep *c ;
  struct dep *firstnew ;
  struct dep *lastnew ;

  {
  {
# 559
  firstnew = (struct dep *)0;
# 560
  lastnew = (struct dep *)0;
  }
# 562
  while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
    {
# 564
    c = (struct dep *)xmalloc(sizeof(struct dep ));
# 565
    memmove((void *)((char *)c), (void const   *)((char *)d),
            sizeof(struct dep ));
    }
# 566
    if ((unsigned int )c->name != (unsigned int )((char *)0)) {
      {
# 567
      c->name = xstrdup((char const   *)c->name);
      }
    }
    {
# 568
    c->next = (struct dep *)0;
    }
# 569
    if ((unsigned int )firstnew == (unsigned int )((struct dep *)0)) {
      {
# 570
      lastnew = c;
# 570
      firstnew = lastnew;
      }
    } else {
      {
# 572
      lastnew->next = c;
# 572
      lastnew = lastnew->next;
      }
    }
    {
# 574
    d = d->next;
    }
  }
# 577
  return (firstnew);
}
}
# 685
void user_access(void) 
{ 

  {
# 757
  return;
}
}
# 761
void make_access(void) 
{ 

  {
# 805
  return;
}
}
# 809
void child_access(void) 
{ 

  {
# 839
  return;
}
}
# 92 "/users/rupak/ccured/include/gcc_3.2/pwd.h"
extern struct passwd *getpwnam(char const   *__name ) ;
# 38 "/users/rupak/ccured/include/pwd_wrappers.h"
extern void __deepcopy_passwd_from_compat(struct passwd *fat ,
                                          struct passwd  __attribute__((__compat__)) *compat ) 
{ 

  {
  {
# 40
  fat->pw_name = __mkptr_string((char */* __attribute__((__safe__)) */)compat->pw_name);
# 41
  fat->pw_passwd = __mkptr_string((char */* __attribute__((__safe__)) */)compat->pw_passwd);
# 42
  fat->pw_gecos = __mkptr_string((char */* __attribute__((__safe__)) */)compat->pw_gecos);
# 43
  fat->pw_dir = __mkptr_string((char */* __attribute__((__safe__)) */)compat->pw_dir);
# 44
  fat->pw_shell = __mkptr_string((char */* __attribute__((__safe__)) */)compat->pw_shell);
  }
# 45
  return;
}
}
# 48
static struct passwd my_passwd_result  ;
# 85 "read.c"
static struct conditionals toplevel_conditionals  ;
# 86
static struct conditionals *conditionals   = & toplevel_conditionals;
# 91
static char *default_include_directories[5]   = {"/usr/local/include",
                                                 "/usr/gnu/include",
                                                 "/usr/local/include",
                                                 "/usr/include", (char *)0};
# 111
static char **include_directories___0  ;
# 115
static unsigned int max_incl_len  ;
# 120
struct floc  const  *reading_file   = (struct floc  const  *)0;
# 124
static struct dep *read_makefiles   = (struct dep *)0;
# 126
static int eval_makefile(char *filename , int flags ) ;
# 127
static int eval(struct ebuffer *ebuf , int set_default ) ;
# 129
static long readline(struct ebuffer *ebuf ) ;
# 130
static void do_define(char *name , unsigned int namelen ,
                      enum variable_origin origin , struct ebuffer *ebuf ) ;
# 133
static int conditional_line(char *line , struct floc  const  *flocp ) ;
# 134
static void record_files(struct nameseq *filenames , char *pattern ,
                         char *pattern_percent , struct dep *deps ,
                         unsigned int cmds_started , char *commands ,
                         unsigned int commands_idx , int two_colon ,
                         int have_sysv_atvar , struct floc  const  *flocp ,
                         int set_default ) ;
# 139
static void record_target_var(struct nameseq *filenames , char *defn ,
                              int two_colon , enum variable_origin origin ,
                              struct floc  const  *flocp ) ;
# 143
static enum make_word_type get_next_mword(char *buffer , char *delim ,
                                          char **startp ,
                                          unsigned int *length___0 ) ;
# 223
static char *default_makefiles[4]   = {"GNUmakefile", "makefile", "Makefile",
                                       (char *)0};
# 148
struct dep *read_all_makefiles(char **makefiles___0 ) 
{ unsigned int num_makefiles ;
  char const   * __restrict  tmp ;
  FILE *tmp___0 ;
  char *value ;
  char *name ;
  char *p ;
  unsigned int length___0 ;
  int save ;
  char *tmp___1 ;
  int tmp___2 ;
  struct dep *tail ;
  register struct dep *d ;
  int tmp___3 ;
  register char **p___0 ;
  int tmp___4 ;
  int tmp___5 ;
  struct dep *tail___0 ;
  struct dep *d___0 ;
  struct dep *tmp___6 ;

  {
  {
# 152
  num_makefiles = 0U;
# 157
  define_variable_in_set((char const   *)"MAKEFILE_LIST",
                         sizeof("MAKEFILE_LIST") - 1U, "", 2, 0,
                         current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
  }
# 159
  while (1) {
# 159
    if (1 & db_level) {
      {
# 159
      tmp = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                       (char const   *)"Reading makefiles...\n",
                                                       5);
# 159
      printf(tmp);
# 159
      tmp___0 = get_stdout();
      {
# 105 "spec.work"
      tmp___0->__BLAST_FLAG = 1;
      {

      }
      }
# 159 "read.c"
      fflush(tmp___0);
      }
    }
# 159
    break;
  }
  {
# 172
  save = warn_undefined_variables_flag;
# 173
  warn_undefined_variables_flag = 0;
# 175
  value = allocated_variable_expand_for_file("$(MAKEFILES)", (struct file *)0);
# 177
  warn_undefined_variables_flag = save;
# 182
  p = value;
  }
# 184
  while (1) {
    {
# 184
    name = find_next_token(& p, & length___0);
    }
# 184
    if (! ((unsigned int )name != (unsigned int )((char *)0))) {
# 184
      break;
    }
# 186
    if ((int )(*p) != 0) {
      {
# 187
      tmp___1 = p;
# 187
      p ++;
# 187
      (*tmp___1) = '\0';
      }
    }
    {
# 188
    name = xstrdup((char const   *)name);
# 189
    tmp___2 = eval_makefile(name, 7);
    }
# 189
    if (tmp___2 < 2) {
      {
# 191
      free((void *)name);
      }
    }
  }
  {
# 194
  free((void *)value);
  }
# 199
  if ((unsigned int )makefiles___0 != (unsigned int )((char **)0)) {
# 200
    while ((unsigned int )(*makefiles___0) != (unsigned int )((char *)0)) {
      {
# 202
      tail = read_makefiles;
# 205
      tmp___3 = eval_makefile((*makefiles___0), 0);
      }
# 205
      if (! tmp___3) {
        {
# 206
        perror_with_name((char const   *)"", (char const   *)(*makefiles___0));
        }
      }
      {
# 209
      d = read_makefiles;
      }
# 210
      while ((unsigned int )d->next != (unsigned int )tail) {
        {
# 211
        d = d->next;
        }
      }
# 214
      if ((unsigned int )d->name == (unsigned int )((char *)0)) {
        {
# 214
        (*makefiles___0) = (d->file)->name;
        }
      } else {
        {
# 214
        (*makefiles___0) = d->name;
        }
      }
      {
# 215
      num_makefiles ++;
# 216
      makefiles___0 ++;
      }
    }
  }
# 221
  if (num_makefiles == 0U) {
    {
# 234
    p___0 = default_makefiles;
    }
# 235
    while (1) {
# 235
      if ((unsigned int )(*p___0) != (unsigned int )((char *)0)) {
        {
# 235
        tmp___4 = file_exists_p((*p___0));
        }
# 235
        if (tmp___4) {
# 235
          break;
        }
      } else {
# 235
        break;
      }
      {
# 236
      p___0 ++;
      }
    }
# 238
    if ((unsigned int )(*p___0) != (unsigned int )((char *)0)) {
      {
# 240
      tmp___5 = eval_makefile((*p___0), 0);
      }
# 240
      if (! tmp___5) {
        {
# 241
        perror_with_name((char const   *)"", (char const   *)(*p___0));
        }
      }
    } else {
      {
# 247
      tail___0 = read_makefiles;
      }
# 249
      while (1) {
# 249
        if ((unsigned int )tail___0 != (unsigned int )((struct dep *)0)) {
# 249
          if (! ((unsigned int )tail___0->next !=
                 (unsigned int )((struct dep *)0))) {
# 249
            break;
          }
        } else {
# 249
          break;
        }
        {
# 250
        tail___0 = tail___0->next;
        }
      }
      {
# 251
      p___0 = default_makefiles;
      }
# 251
      while ((unsigned int )(*p___0) != (unsigned int )((char *)0)) {
        {
# 253
        tmp___6 = (struct dep *)xmalloc(sizeof(struct dep ));
# 253
        d___0 = tmp___6;
# 254
        d___0->name = (char *)0;
# 255
        d___0->file = enter_file((*p___0));
# 256
        (d___0->file)->dontcare = 1U;
# 257
        d___0->ignore_mtime = 0U;
# 260
        d___0->changed = 4U;
        }
# 261
        if ((unsigned int )tail___0 == (unsigned int )((struct dep *)0)) {
          {
# 262
          read_makefiles = d___0;
          }
        } else {
          {
# 264
          tail___0->next = d___0;
          }
        }
        {
# 265
        tail___0 = d___0;
# 251
        p___0 ++;
        }
      }
# 267
      if ((unsigned int )tail___0 != (unsigned int )((struct dep *)0)) {
        {
# 268
        tail___0->next = (struct dep *)0;
        }
      }
    }
  }
# 272
  return (read_makefiles);
}
}
# 275
static int eval_makefile(char *filename , int flags ) 
{ struct dep *deps ;
  struct ebuffer ebuf ;
  struct floc  const  *curfile ;
  int makefile_errno ;
  int r ;
  char const   * __restrict  tmp ;
  char const   * __restrict  tmp___0 ;
  char const   * __restrict  tmp___1 ;
  char const   * __restrict  tmp___2 ;
  char const   * __restrict  tmp___3 ;
  char *expanded ;
  char *tmp___4 ;
  int *tmp___5 ;
  register unsigned int i ;
  char *name ;
  char *tmp___6 ;
  char *tmp___8 ;
  int *tmp___9 ;

  {
  {
# 286
  ebuf.floc.filenm = filename;
# 287
  ebuf.floc.lineno = 1UL;
  }
# 289
  if (2 & db_level) {
    {
# 291
    tmp = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                     (char const   *)"Reading makefile `%s\'",
                                                     5);
# 291
    printf(tmp, filename);
    }
# 292
    if (flags & 1) {
      {
# 293
      tmp___0 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                           (char const   *)" (no default goal)",
                                                           5);
# 293
      printf(tmp___0);
      }
    }
# 294
    if (flags & 2) {
      {
# 295
      tmp___1 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                           (char const   *)" (search path)",
                                                           5);
# 295
      printf(tmp___1);
      }
    }
# 296
    if (flags & 4) {
      {
# 297
      tmp___2 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                           (char const   *)" (don\'t care)",
                                                           5);
# 297
      printf(tmp___2);
      }
    }
# 298
    if (flags & 8) {
      {
# 299
      tmp___3 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                           (char const   *)" (no ~ expansion)",
                                                           5);
# 299
      printf(tmp___3);
      }
    }
    {
# 300
    puts((char const   *)"...");
    }
  }
# 307
  if (! (flags & 8)) {
# 307
    if ((int )(*(filename + 0)) == 126) {
      {
# 309
      tmp___4 = tilde_expand(filename);
# 309
      expanded = tmp___4;
      }
# 310
      if ((unsigned int )expanded != (unsigned int )((char *)0)) {
        {
# 311
        filename = expanded;
        }
      }
    }
  }
  {
# 314
  ebuf.fp = fopen((char const   */* __restrict  */)((char const   *)filename),
                  (char const   */* __restrict  */)((char const   *)"r"));
  {
# 17 "spec.work"
  if (ebuf.fp != (FILE *)0) {
# 17
    (ebuf.fp)->__BLAST_FLAG = 1;
  }
  {

  }
  }
# 316 "read.c"
  tmp___5 = __errno_location();
# 316
  makefile_errno = (*tmp___5);
  }
# 321
  if ((unsigned int )ebuf.fp == (unsigned int )((FILE *)0)) {
# 321
    if (flags & 2) {
# 321
      if ((int )(*filename) != 47) {
        {
# 324
        i = 0U;
        }
# 324
        while ((unsigned int )(*(include_directories___0 + i)) !=
               (unsigned int )((char *)0)) {
          {
# 326
          tmp___6 = concat((char const   *)(*(include_directories___0 + i)),
                           (char const   *)"/", (char const   *)filename);
# 326
          name = tmp___6;
# 327
          ebuf.fp = fopen((char const   */* __restrict  */)((char const   *)name),
                          (char const   */* __restrict  */)((char const   *)"r"));
          {
# 17 "spec.work"
          if (ebuf.fp != (FILE *)0) {
# 17
            (ebuf.fp)->__BLAST_FLAG = 1;
          }
          {

          }
          }

          }
# 328 "read.c"
          if ((unsigned int )ebuf.fp == (unsigned int )((FILE *)0)) {
            {
# 329
            free((void *)name);
            }
          } else {
            {
# 332
            filename = name;
            }
# 333
            break;
          }
          {
# 324
          i ++;
          }
        }
      }
    }
  }
  {
# 339
  deps = (struct dep *)xmalloc(sizeof(struct dep ));
# 340
  deps->next = read_makefiles;
# 341
  read_makefiles = deps;
# 342
  deps->name = (char *)0;
# 343
  deps->file = lookup_file(filename);
  }
# 344
  if ((unsigned int )deps->file == (unsigned int )((struct file *)0)) {
    {
# 346
    tmp___8 = xstrdup((char const   *)filename);
# 346
    deps->file = enter_file(tmp___8);
    }
# 347
    if (flags & 4) {
      {
# 348
      (deps->file)->dontcare = 1U;
      }
    }
  }
# 350
  if ((unsigned int )filename != (unsigned int )ebuf.floc.filenm) {
    {
# 351
    free((void *)filename);
    }
  }
  {
# 352
  filename = (deps->file)->name;
# 353
  deps->changed = (unsigned int )flags;
# 354
  deps->ignore_mtime = 0U;
  }
# 358
  if ((unsigned int )ebuf.fp == (unsigned int )((FILE *)0)) {
    {
# 363
    tmp___9 = __errno_location();
# 363
    (*tmp___9) = makefile_errno;
    }
# 364
    return (0);
  }
  {
# 368
  do_variable_definition((struct floc  const  *)(& ebuf.floc),
                         (char const   *)"MAKEFILE_LIST", filename, 2, 3, 0);
# 373
  ebuf.size = 200U;
# 374
  ebuf.bufstart = xmalloc(ebuf.size);
# 374
  ebuf.bufnext = ebuf.bufstart;
# 374
  ebuf.buffer = ebuf.bufnext;
# 376
  curfile = reading_file;
# 377
  reading_file = (struct floc  const  *)(& ebuf.floc);
# 379
  r = eval(& ebuf, ! (flags & 1) != 0);
# 381
  reading_file = curfile;
  {
# 88 "spec.work"
  if ((ebuf.fp)->__BLAST_FLAG == 1) {
# 89
    (ebuf.fp)->__BLAST_FLAG = 0;
  } else {
# 90
    __error__();
  }
  {

  }
  }
# 383 "read.c"
  fclose(ebuf.fp);
# 385
  free((void *)ebuf.bufstart);
  }
# 386
  return (r);
}
}
# 389
int eval_buffer(char *buffer ) 
{ struct ebuffer ebuf ;
  struct floc  const  *curfile ;
  int r ;

  {
  {
# 399
  ebuf.size = strlen((char const   *)buffer);
# 400
  ebuf.bufstart = buffer;
# 400
  ebuf.bufnext = ebuf.bufstart;
# 400
  ebuf.buffer = ebuf.bufnext;
# 401
  ebuf.fp = (FILE *)((void *)0);
# 403
  ebuf.floc = (*reading_file);
# 405
  curfile = reading_file;
# 406
  reading_file = (struct floc  const  *)(& ebuf.floc);
# 408
  r = eval(& ebuf, 1);
# 410
  reading_file = curfile;
  }
# 412
  return (r);
}
}
# 431
static char *collapsed   = (char *)0;
# 432
static unsigned int collapsed_length   = 0U;
# 426
static int eval(struct ebuffer *ebuf , int set_default ) 
{ unsigned int commands_len ;
  char *commands ;
  unsigned int commands_idx ;
  unsigned int cmds_started ;
  unsigned int tgts_started ;
  int ignoring ;
  int in_ignored_define ;
  int no_targets ;
  int have_sysv_atvar ;
  struct nameseq *filenames ;
  struct dep *deps ;
  long nlines ;
  int two_colon ;
  char *pattern ;
  char *pattern_percent ;
  struct floc *fstart ;
  struct floc fi ;
  int linelen ;
  char *line ;
  int len ;
  char *p ;
  char *p2 ;
  unsigned int tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int i ;
  int tmp___4 ;
  char const   *tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  char const   *tmp___12 ;
  int tmp___13 ;
  char const   *tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  char const   *tmp___17 ;
  char const   *tmp___18 ;
  int tmp___19 ;
  char const   *tmp___20 ;
  struct variable *tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  struct variable *v ;
  unsigned int len___0 ;
  char *ap ;
  int tmp___25 ;
  unsigned int len___1 ;
  struct variable *v___0 ;
  char *ap___0 ;
  int tmp___26 ;
  char *pattern___0 ;
  unsigned int len___2 ;
  int tmp___27 ;
  struct conditionals *save ;
  struct conditionals new_conditionals ;
  struct nameseq *files___0 ;
  int noerror ;
  char const   *tmp___28 ;
  char const   *tmp___29 ;
  struct nameseq *tmp___30 ;
  struct nameseq *next ;
  char *name ;
  int r ;
  int tmp___31 ;
  int *tmp___32 ;
  char *tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  struct variable *tmp___37 ;
  int tmp___38 ;
  char const   *tmp___39 ;
  enum make_word_type wtype ;
  enum variable_origin v_origin ;
  char *cmdleft ;
  char *semip ;
  char *lb_next ;
  unsigned int len___3 ;
  unsigned int plen ;
  char *colonp ;
  char *tmp___40 ;
  char const   *tmp___41 ;
  unsigned long p2_off ;
  unsigned long cmd_off ;
  char *pend ;
  size_t tmp___42 ;
  size_t tmp___43 ;
  size_t tmp___44 ;
  char *tmp___45 ;
  char const   *tmp___48 ;
  int tmp___49 ;
  char const   *tmp___50 ;
  struct nameseq *tmp___51 ;
  unsigned int l ;
  size_t tmp___52 ;
  int tmp___53 ;
  size_t tmp___54 ;
  size_t tmp___55 ;
  unsigned int l___0 ;
  char *tmp___56 ;
  register char *q ;
  register int backslash ;
  char *tmp___57 ;
  struct nameseq *target ;
  char const   *tmp___58 ;
  char const   *tmp___59 ;
  char const   *tmp___60 ;
  struct nameseq *tmp___61 ;
  struct dep **deps_ptr ;
  struct dep *d ;
  struct nameseq *tmp___63 ;
  unsigned int len___4 ;
  unsigned int tmp___65 ;
  char *tmp___66 ;
  unsigned int tmp___67 ;
  char const   *tmp___68 ;

  {
  {
# 433
  commands_len = 200U;
# 435
  commands_idx = 0U;
# 437
  ignoring = 0;
# 437
  in_ignored_define = 0;
# 438
  no_targets = 0;
# 439
  have_sysv_atvar = 0;
# 440
  filenames = (struct nameseq *)0;
# 441
  deps = (struct dep *)0;
# 442
  nlines = 0L;
# 443
  two_colon = 0;
# 444
  pattern = (char *)0;
# 464
  pattern_percent = (char *)0;
# 465
  tgts_started = 1U;
# 465
  cmds_started = tgts_started;
# 467
  fstart = & ebuf->floc;
# 468
  fi.filenm = ebuf->floc.filenm;
# 480
  commands = xmalloc(200U);
  }
# 482
  while (1) {
    {
# 491
    ebuf->floc.lineno = ebuf->floc.lineno + (unsigned long )nlines;
# 492
    nlines = readline(ebuf);
    }
# 495
    if (nlines < 0L) {
# 496
      break;
    }
    {
# 499
    line = ebuf->buffer;
    }
# 500
    if ((int )(*(line + 0)) == 0) {
# 501
      continue;
    }
    {
# 503
    linelen = (int )strlen((char const   *)line);
    }
# 507
    if ((int )(*(line + 0)) == 9) {
# 509
      if (no_targets) {
# 511
        continue;
      }
# 517
      if ((unsigned int )filenames != (unsigned int )((struct nameseq *)0)) {
# 519
        if (ignoring) {
# 521
          continue;
        }
# 524
        if (commands_idx == 0U) {
          {
# 525
          cmds_started = (unsigned int )ebuf->floc.lineno;
          }
        }
# 527
        if ((unsigned int )(linelen + 1) + commands_idx > commands_len) {
          {
# 529
          commands_len = ((unsigned int )(linelen + 1) + commands_idx) * 2U;
# 530
          commands = xrealloc(commands, commands_len);
          }
        }
        {
# 532
        memmove((void *)(commands + commands_idx), (void const   *)line,
                (unsigned int )linelen);
# 533
        commands_idx += (unsigned int )linelen;
# 534
        tmp = commands_idx;
# 534
        commands_idx ++;
# 534
        (*(commands + tmp)) = '\n';
        }
# 536
        continue;
      }
    }
# 542
    if (collapsed_length < (unsigned int )(linelen + 1)) {
      {
# 544
      collapsed_length = (unsigned int )(linelen + 1);
      }
# 545
      if ((unsigned int )collapsed != (unsigned int )((char *)0)) {
        {
# 546
        free((void *)collapsed);
        }
      }
      {
# 547
      tmp___0 = xmalloc(collapsed_length);
# 547
      collapsed = tmp___0;
      }
    }
    {
# 549
    strcpy((char */* __restrict  */)collapsed,
           (char const   */* __restrict  */)((char const   *)line));
# 551
    collapse_continuations(collapsed);
# 552
    remove_comments(collapsed);
# 556
    p = collapsed;
    }
# 557
    while (1) {
      {
# 557
      tmp___1 = _get__ctype_b((int )((unsigned char )(*p)));
      }
# 557
      if (! (tmp___1 & 8192)) {
# 557
        break;
      }
      {
# 558
      p ++;
      }
    }
# 560
    if ((int )(*p) == 0) {
# 562
      continue;
    }
    {
# 568
    p2 = p + 1;
    }
# 568
    while (1) {
# 568
      if ((int )(*p2) != 0) {
        {
# 568
        tmp___2 = _get__ctype_b((int )((unsigned char )(*p2)));
        }
# 568
        if (tmp___2 & 8192) {
# 568
          break;
        }
      } else {
# 568
        break;
      }
      {
# 568
      p2 ++;
      }
    }
    {
# 570
    len = p2 - p;
    }
# 575
    while (1) {
      {
# 575
      tmp___3 = _get__ctype_b((int )((unsigned char )(*p2)));
      }
# 575
      if (! (tmp___3 & 8192)) {
# 575
        break;
      }
      {
# 576
      p2 ++;
      }
    }
# 578
    if ((int )(*(p2 + 0)) == 58) {
      goto _L;
    } else {
# 578
      if ((int )(*(p2 + 0)) == 43) {
        goto _L;
      } else {
# 578
        if ((int )(*(p2 + 0)) == 61) {
          _L: 
# 578
          if ((int )(*(p2 + 1)) == 0) {
# 581
            if (ignoring) {
# 582
              continue;
            }
            goto skip_conditionals;
          }
        }
      }
    }
# 591
    if (! in_ignored_define) {
# 591
      if ((unsigned int )len == sizeof("ifdef") - 1U) {
        {
# 591
        tmp___6 = strncmp((char const   *)"ifdef", (char const   *)p,
                          sizeof("ifdef") - 1U);
        }
# 591
        if (tmp___6 == 0) {
          goto _L___0;
        } else {
          goto _L___5;
        }
      } else {
        _L___5: 
# 591
        if ((unsigned int )len == sizeof("ifndef") - 1U) {
          {
# 591
          tmp___7 = strncmp((char const   *)"ifndef", (char const   *)p,
                            sizeof("ifndef") - 1U);
          }
# 591
          if (tmp___7 == 0) {
            goto _L___0;
          } else {
            goto _L___4;
          }
        } else {
          _L___4: 
# 591
          if ((unsigned int )len == sizeof("ifeq") - 1U) {
            {
# 591
            tmp___8 = strncmp((char const   *)"ifeq", (char const   *)p,
                              sizeof("ifeq") - 1U);
            }
# 591
            if (tmp___8 == 0) {
              goto _L___0;
            } else {
              goto _L___3;
            }
          } else {
            _L___3: 
# 591
            if ((unsigned int )len == sizeof("ifneq") - 1U) {
              {
# 591
              tmp___9 = strncmp((char const   *)"ifneq", (char const   *)p,
                                sizeof("ifneq") - 1U);
              }
# 591
              if (tmp___9 == 0) {
                goto _L___0;
              } else {
                goto _L___2;
              }
            } else {
              _L___2: 
# 591
              if ((unsigned int )len == sizeof("else") - 1U) {
                {
# 591
                tmp___10 = strncmp((char const   *)"else", (char const   *)p,
                                   sizeof("else") - 1U);
                }
# 591
                if (tmp___10 == 0) {
                  goto _L___0;
                } else {
                  goto _L___1;
                }
              } else {
                _L___1: 
# 591
                if ((unsigned int )len == sizeof("endif") - 1U) {
                  {
# 591
                  tmp___11 = strncmp((char const   *)"endif", (char const   *)p,
                                     sizeof("endif") - 1U);
                  }
# 591
                  if (tmp___11 == 0) {
                    _L___0: 
                    {
# 596
                    tmp___4 = conditional_line(p, (struct floc  const  *)fstart);
# 596
                    i = tmp___4;
                    }
# 597
                    if (i < 0) {
                      {
# 598
                      tmp___5 = (char const   *)dcgettext((char const   *)((void *)0),
                                                          (char const   *)"invalid syntax in conditional",
                                                          5);
# 598
                      fatal((struct floc  const  *)fstart, tmp___5);
                      }
                    }
                    {
# 600
                    ignoring = i;
                    }
# 601
                    continue;
                  }
                }
              }
            }
          }
        }
      }
    }
# 604
    if ((unsigned int )len == sizeof("endef") - 1U) {
      {
# 604
      tmp___13 = strncmp((char const   *)"endef", (char const   *)p,
                         sizeof("endef") - 1U);
      }
# 604
      if (tmp___13 == 0) {
# 606
        if (! in_ignored_define) {
          {
# 607
          tmp___12 = (char const   *)dcgettext((char const   *)((void *)0),
                                               (char const   *)"extraneous `endef\'",
                                               5);
# 607
          fatal((struct floc  const  *)fstart, tmp___12);
          }
        }
        {
# 608
        in_ignored_define = 0;
        }
# 609
        continue;
      }
    }
# 612
    if ((unsigned int )len == sizeof("define") - 1U) {
      {
# 612
      tmp___16 = strncmp((char const   *)"define", (char const   *)p,
                         sizeof("define") - 1U);
      }
# 612
      if (tmp___16 == 0) {
# 614
        if (ignoring) {
          {
# 615
          in_ignored_define = 1;
          }
        } else {
# 618
          if ((int )(*p2) == 0) {
            {
# 619
            tmp___14 = (char const   *)dcgettext((char const   *)((void *)0),
                                                 (char const   *)"empty variable name",
                                                 5);
# 619
            fatal((struct floc  const  *)fstart, tmp___14);
            }
          }
          {
# 625
          p = strchr((char const   *)p2, (int )'\0');
          }
# 626
          while (1) {
            {
# 626
            tmp___15 = _get__ctype_b((int )((unsigned char )(*(p + -1))));
            }
# 626
            if (! (tmp___15 & 1)) {
# 626
              break;
            }
            {
# 627
            p --;
            }
          }
          {
# 628
          do_define(p2, (unsigned int )(p - p2), 2, ebuf);
          }
        }
# 630
        continue;
      }
    }
# 633
    if ((unsigned int )len == sizeof("override") - 1U) {
      {
# 633
      tmp___24 = strncmp((char const   *)"override", (char const   *)p,
                         sizeof("override") - 1U);
      }
# 633
      if (tmp___24 == 0) {
# 635
        if ((int )(*p2) == 0) {
          {
# 636
          tmp___17 = (char const   *)dcgettext((char const   *)((void *)0),
                                               (char const   *)"empty `override\' directive",
                                               5);
# 636
          error((struct floc  const  *)fstart, tmp___17);
          }
        }
        {
# 638
        tmp___22 = strncmp((char const   *)p2, (char const   *)"define", 6U);
        }
# 638
        if (tmp___22 == 0) {
          {
# 638
          tmp___23 = _get__ctype_b((int )((unsigned char )(*(p2 + 6))));
          }
# 638
          if (tmp___23 & 1) {
            goto _L___7;
          } else {
# 638
            if ((int )(*(p2 + 6)) == 0) {
              _L___7: 
# 641
              if (ignoring) {
                {
# 642
                in_ignored_define = 1;
                }
              } else {
                {
# 645
                p2 = next_token((char const   *)(p2 + 6));
                }
# 646
                if ((int )(*p2) == 0) {
                  {
# 647
                  tmp___18 = (char const   *)dcgettext((char const   *)((void *)0),
                                                       (char const   *)"empty variable name",
                                                       5);
# 647
                  fatal((struct floc  const  *)fstart, tmp___18);
                  }
                }
                {
# 653
                p = strchr((char const   *)p2, (int )'\0');
                }
# 654
                while (1) {
                  {
# 654
                  tmp___19 = _get__ctype_b((int )((unsigned char )(*(p + -1))));
                  }
# 654
                  if (! (tmp___19 & 1)) {
# 654
                    break;
                  }
                  {
# 655
                  p --;
                  }
                }
                {
# 656
                do_define(p2, (unsigned int )(p - p2), 5, ebuf);
                }
              }
            } else {
              goto _L___6;
            }
          }
        } else {
          _L___6: 
# 659
          if (! ignoring) {
            {
# 659
            tmp___21 = try_variable_definition((struct floc  const  *)fstart,
                                               p2, 5, 0);
            }
# 659
            if (! tmp___21) {
              {
# 661
              tmp___20 = (char const   *)dcgettext((char const   *)((void *)0),
                                                   (char const   *)"invalid `override\' directive",
                                                   5);
# 661
              error((struct floc  const  *)fstart, tmp___20);
              }
            }
          }
        }
# 663
        continue;
      }
    }
# 666
    if (ignoring) {
# 669
      continue;
    }
# 671
    if ((unsigned int )len == sizeof("export") - 1U) {
      {
# 671
      tmp___25 = strncmp((char const   *)"export", (char const   *)p,
                         sizeof("export") - 1U);
      }
# 671
      if (tmp___25 == 0) {
# 674
        if ((int )(*p2) == 0) {
          {
# 675
          export_all_variables = 1;
          }
        } else {
          {
# 680
          v = try_variable_definition((struct floc  const  *)fstart, p2, 2, 0);
          }
# 681
          if ((unsigned int )v != (unsigned int )((struct variable *)0)) {
            {
# 682
            v->export = 0;
            }
          } else {
            {
# 690
            ap = allocated_variable_expand_for_file(p2, (struct file *)0);
# 690
            p2 = ap;
# 692
            p = find_next_token(& p2, & len___0);
            }
# 692
            while ((unsigned int )p != (unsigned int )((char *)0)) {
              {
# 695
              v = lookup_variable((char const   *)p, len___0);
              }
# 696
              if ((unsigned int )v == (unsigned int )((struct variable *)0)) {
                {
# 697
                v = define_variable_in_set((char const   *)p, len___0, "", 2, 0,
                                           current_variable_set_list->set,
                                           (struct floc  const  *)fstart);
                }
              }
              {
# 699
              v->export = 0;
# 692
              p = find_next_token(& p2, & len___0);
              }
            }
            {
# 702
            free((void *)ap);
            }
          }
        }
        goto rule_complete;
      }
    }
# 708
    if ((unsigned int )len == sizeof("unexport") - 1U) {
      {
# 708
      tmp___26 = strncmp((char const   *)"unexport", (char const   *)p,
                         sizeof("unexport") - 1U);
      }
# 708
      if (tmp___26 == 0) {
# 710
        if ((int )(*p2) == 0) {
          {
# 711
          export_all_variables = 0;
          }
        } else {
          {
# 720
          ap___0 = allocated_variable_expand_for_file(p2, (struct file *)0);
# 720
          p2 = ap___0;
# 722
          p = find_next_token(& p2, & len___1);
          }
# 722
          while ((unsigned int )p != (unsigned int )((char *)0)) {
            {
# 725
            v___0 = lookup_variable((char const   *)p, len___1);
            }
# 726
            if ((unsigned int )v___0 == (unsigned int )((struct variable *)0)) {
              {
# 727
              v___0 = define_variable_in_set((char const   *)p, len___1, "", 2,
                                             0, current_variable_set_list->set,
                                             (struct floc  const  *)fstart);
              }
            }
            {
# 729
            v___0->export = 1;
# 722
            p = find_next_token(& p2, & len___1);
            }
          }
          {
# 732
          free((void *)ap___0);
          }
        }
        goto rule_complete;
      }
    }
    skip_conditionals: 
# 738
    if ((unsigned int )len == sizeof("vpath") - 1U) {
      {
# 738
      tmp___27 = strncmp((char const   *)"vpath", (char const   *)p,
                         sizeof("vpath") - 1U);
      }
# 738
      if (tmp___27 == 0) {
        {
# 742
        p2 = variable_expand(p2);
# 743
        p = find_next_token(& p2, & len___2);
        }
# 744
        if ((unsigned int )p != (unsigned int )((char *)0)) {
          {
# 746
          pattern___0 = savestring((char const   *)p, len___2);
# 747
          p = find_next_token(& p2, & len___2);
          }
        } else {
          {
# 753
          pattern___0 = (char *)0;
          }
        }
        {
# 754
        construct_vpath_list(pattern___0, p);
        }
# 755
        if ((unsigned int )pattern___0 != (unsigned int )((char *)0)) {
          {
# 756
          free((void *)pattern___0);
          }
        }
        goto rule_complete;
      }
    }
# 761
    if ((unsigned int )len == sizeof("include") - 1U) {
      {
# 761
      tmp___34 = strncmp((char const   *)"include", (char const   *)p,
                         sizeof("include") - 1U);
      }
# 761
      if (tmp___34 == 0) {
        goto _L___8;
      } else {
        goto _L___10;
      }
    } else {
      _L___10: 
# 761
      if ((unsigned int )len == sizeof("-include") - 1U) {
        {
# 761
        tmp___35 = strncmp((char const   *)"-include", (char const   *)p,
                           sizeof("-include") - 1U);
        }
# 761
        if (tmp___35 == 0) {
          goto _L___8;
        } else {
          goto _L___9;
        }
      } else {
        _L___9: 
# 761
        if ((unsigned int )len == sizeof("sinclude") - 1U) {
          {
# 761
          tmp___36 = strncmp((char const   *)"sinclude", (char const   *)p,
                             sizeof("sinclude") - 1U);
          }
# 761
          if (tmp___36 == 0) {
            _L___8: 
            {
# 770
            noerror = (int )(*(p + 0)) != 105;
# 772
            p = allocated_variable_expand_for_file(p2, (struct file *)0);
            }
# 773
            if ((int )(*p) == 0) {
# 775
              if (noerror) {
                {
# 775
                tmp___28 = (char const   *)"-";
                }
              } else {
                {
# 775
                tmp___28 = (char const   *)"";
                }
              }
              {
# 775
              tmp___29 = (char const   *)dcgettext((char const   *)((void *)0),
                                                   (char const   *)"no file name for `%sinclude\'",
                                                   5);
# 775
              error((struct floc  const  *)fstart, tmp___29, tmp___28);
              }
# 777
              continue;
            }
            {
# 781
            p2 = p;
# 782
            tmp___30 = parse_file_seq(& p2, (int )'\0', sizeof(struct nameseq ),
                                      1);
# 782
            files___0 = multi_glob(tmp___30, sizeof(struct nameseq ));
# 786
            free((void *)p);
# 790
            save = conditionals;
# 791
            memset((void *)((char *)(& new_conditionals)), 0,
                   sizeof(new_conditionals));
# 792
            conditionals = & new_conditionals;
            }
# 796
            while (1) {
# 796
              if ((unsigned int )filenames !=
                  (unsigned int )((struct nameseq *)0)) {
                {
# 796
                fi.lineno = (unsigned long )tgts_started;
# 796
                record_files(filenames, pattern, pattern_percent, deps,
                             cmds_started, commands, commands_idx, two_colon,
                             have_sysv_atvar, (struct floc  const  *)(& fi),
                             set_default);
                }
              }
              {
# 796
              filenames = (struct nameseq *)0;
# 796
              commands_idx = 0U;
# 796
              no_targets = 0;
              }
# 796
              if (pattern) {
                {
# 796
                free((void *)pattern);
# 796
                pattern = (char *)0;
                }
              }
# 796
              break;
            }
# 799
            while ((unsigned int )files___0 !=
                   (unsigned int )((struct nameseq *)0)) {
              {
# 801
              next = files___0->next;
# 802
              name = files___0->name;
# 805
              free((void *)((char *)files___0));
# 806
              files___0 = next;
              }
# 808
              if (noerror) {
                {
# 808
                tmp___31 = 4;
                }
              } else {
                {
# 808
                tmp___31 = 0;
                }
              }
              {
# 808
              r = eval_makefile(name, 10 | tmp___31);
              }
# 810
              if (! r) {
# 812
                if (! noerror) {
                  {
# 813
                  tmp___32 = __errno_location();
# 813
                  tmp___33 = strerror((*tmp___32));
# 813
                  error((struct floc  const  *)fstart, (char const   *)"%s: %s",
                        name, tmp___33);
                  }
                }
                {
# 814
                free((void *)name);
                }
              }
            }
# 819
            if (conditionals->ignoring) {
              {
# 820
              free((void *)conditionals->ignoring);
              }
            }
# 821
            if (conditionals->seen_else) {
              {
# 822
              free((void *)conditionals->seen_else);
              }
            }
            {
# 825
            conditionals = save;
            }
            goto rule_complete;
          }
        }
      }
    }
    {
# 830
    tmp___37 = try_variable_definition((struct floc  const  *)fstart, p, 2, 0);
    }
# 830
    if (tmp___37) {
      goto rule_complete;
    }
# 834
    if ((int )(*(line + 0)) == 9) {
      {
# 836
      p = collapsed;
      }
# 837
      while (1) {
        {
# 837
        tmp___38 = _get__ctype_b((int )((unsigned char )(*p)));
        }
# 837
        if (! (tmp___38 & 1)) {
# 837
          break;
        }
        {
# 838
        p ++;
        }
      }
# 839
      if ((int )(*p) == 0) {
# 841
        continue;
      }
      {
# 847
      tmp___39 = (char const   *)dcgettext((char const   *)((void *)0),
                                           (char const   *)"commands commence before first target",
                                           5);
# 847
      fatal((struct floc  const  *)fstart, tmp___39);
      }
    }
    {
# 864
    plen = 0U;
    }
# 869
    while (1) {
# 869
      if ((unsigned int )filenames != (unsigned int )((struct nameseq *)0)) {
        {
# 869
        fi.lineno = (unsigned long )tgts_started;
# 869
        record_files(filenames, pattern, pattern_percent, deps, cmds_started,
                     commands, commands_idx, two_colon, have_sysv_atvar,
                     (struct floc  const  *)(& fi), set_default);
        }
      }
      {
# 869
      filenames = (struct nameseq *)0;
# 869
      commands_idx = 0U;
# 869
      no_targets = 0;
      }
# 869
      if (pattern) {
        {
# 869
        free((void *)pattern);
# 869
        pattern = (char *)0;
        }
      }
# 869
      break;
    }
    {
# 870
    tgts_started = (unsigned int )fstart->lineno;
# 874
    cmdleft = find_char_unquote(line, (int )';', (int )'#', 0);
    }
# 875
    if ((unsigned int )cmdleft != (unsigned int )((char *)0)) {
# 875
      if ((int )(*cmdleft) == 35) {
        {
# 878
        (*cmdleft) = '\0';
# 879
        cmdleft = (char *)0;
        }
      } else {
        goto _L___11;
      }
    } else {
      _L___11: 
# 881
      if ((unsigned int )cmdleft != (unsigned int )((char *)0)) {
        {
# 883
        tmp___40 = cmdleft;
# 883
        cmdleft ++;
# 883
        (*tmp___40) = '\0';
        }
      }
    }
    {
# 884
    semip = cmdleft;
# 886
    collapse_continuations(line);
# 892
    wtype = get_next_mword(line, (char *)((void *)0), & lb_next, & len___3);
    }
# 893
    switch (wtype) {
    case 1: 
    {

    }
# 896
    if ((unsigned int )cmdleft != (unsigned int )((char *)0)) {
      {
# 897
      tmp___41 = (char const   *)dcgettext((char const   *)((void *)0),
                                           (char const   *)"missing rule before commands",
                                           5);
# 897
      fatal((struct floc  const  *)fstart, tmp___41);
      }
    }
# 900
    continue;
    case 4: 
    {

    }
    case 5: 
    {
# 906
    no_targets = 1;
    }
# 907
    continue;
    default: 
    {

    }
# 910
    break;
    }
    {
# 913
    p2 = variable_expand_string((char *)((void *)0), lb_next, (long )len___3);
    }
# 914
    while (1) {
      {
# 916
      lb_next += len___3;
      }
# 917
      if ((unsigned int )cmdleft == (unsigned int )((char *)0)) {
        {
# 920
        cmdleft = find_char_unquote(p2, (int )';', 0, 0);
        }
# 922
        if ((unsigned int )cmdleft != (unsigned int )((char *)0)) {
          {
# 924
          p2_off = (unsigned long )(p2 - variable_buffer);
# 925
          cmd_off = (unsigned long )(cmdleft - variable_buffer);
# 926
          tmp___42 = strlen((char const   *)p2);
# 926
          pend = p2 + tmp___42;
# 930
          (*cmdleft) = '\0';
# 940
          variable_expand_string(pend, lb_next, -1L);
# 941
          tmp___43 = strlen((char const   *)lb_next);
# 941
          lb_next += tmp___43;
# 942
          p2 = variable_buffer + p2_off;
# 943
          cmdleft = (variable_buffer + cmd_off) + 1;
          }
        }
      }
      {
# 947
      colonp = find_char_unquote(p2, (int )':', 0, 0);
      }
# 958
      if ((unsigned int )colonp != (unsigned int )((char *)0)) {
# 959
        break;
      }
      {
# 961
      wtype = get_next_mword(lb_next, (char *)((void *)0), & lb_next, & len___3);
      }
# 962
      if (wtype == 1) {
# 963
        break;
      }
      {
# 965
      tmp___44 = strlen((char const   *)p2);
# 965
      p2 += tmp___44;
# 966
      tmp___45 = p2;
# 966
      p2 ++;
# 966
      (*tmp___45) = ' ';
# 967
      p2 = variable_expand_string(p2, lb_next, (long )len___3);
      }
    }
    {
# 973
    p2 = next_token((char const   *)variable_buffer);
    }
# 978
    if (wtype == 1) {
# 980
      if ((int )(*p2) != 0) {
        {
# 983
        tmp___49 = strncmp((char const   *)line, (char const   *)"        ", 8U);
        }
# 983
        if (tmp___49 == 0) {
          {
# 983
          tmp___48 = (char const   *)dcgettext((char const   *)((void *)0),
                                               (char const   *)" (did you mean TAB instead of 8 spaces?)",
                                               5);
          }
        } else {
          {
# 983
          tmp___48 = (char const   *)"";
          }
        }
        {
# 983
        tmp___50 = (char const   *)dcgettext((char const   *)((void *)0),
                                             (char const   *)"missing separator%s",
                                             5);
# 983
        fatal((struct floc  const  *)fstart, tmp___50, tmp___48);
        }
      }
# 986
      continue;
    }
    {
# 991
    (*colonp) = '\0';
# 992
    tmp___51 = parse_file_seq(& p2, (int )'\0', sizeof(struct nameseq ), 1);
# 992
    filenames = multi_glob(tmp___51, sizeof(struct nameseq ));
# 996
    (*p2) = ':';
    }
# 998
    if (! filenames) {
      {
# 1002
      no_targets = 1;
      }
# 1003
      continue;
    }
# 1006
    if (! ((int )(*p2) != 0)) {
      {
# 1006
      __assert_fail((char const   *)"*p2 != \'\\0\'", (char const   *)"read.c",
                    1006U, (char const   *)"eval");
      }
    }
    {
# 1007
    p2 ++;
# 1010
    two_colon = (int )(*p2) == 58;
    }
# 1011
    if (two_colon) {
      {
# 1012
      p2 ++;
      }
    }
# 1018
    if ((int )(*lb_next) != 0) {
      {
# 1020
      l = (unsigned int )(p2 - variable_buffer);
# 1021
      plen = strlen((char const   *)p2);
# 1022
      tmp___52 = strlen((char const   *)lb_next);
# 1022
      variable_buffer_output(p2 + plen, lb_next, tmp___52 + 1U);
# 1024
      p2 = variable_buffer + l;
      }
    }
    {
# 1030
    wtype = get_next_mword(p2, (char *)((void *)0), & p, & len___3);
# 1032
    v_origin = 2;
    }
# 1033
    if (wtype == 2) {
# 1033
      if (len___3 == sizeof("override") - 1U) {
        {
# 1033
        tmp___53 = strncmp((char const   *)"override", (char const   *)p,
                           sizeof("override") - 1U);
        }
# 1033
        if (tmp___53 == 0) {
          {
# 1035
          v_origin = 5;
# 1036
          wtype = get_next_mword(p + len___3, (char *)((void *)0), & p,
                                 & len___3);
          }
        }
      }
    }
# 1039
    if (wtype != 1) {
      {
# 1040
      wtype = get_next_mword(p + len___3, (char *)((void *)0),
                             (char **)((void *)0), (unsigned int *)((void *)0));
      }
    }
# 1042
    if (wtype == 7) {
# 1046
      if (semip) {
        {
# 1048
        semip --;
# 1048
        (*semip) = ';';
# 1049
        tmp___54 = strlen((char const   *)semip);
# 1049
        tmp___55 = strlen((char const   *)p2);
# 1049
        variable_buffer_output(p2 + tmp___55, semip, tmp___54 + 1U);
        }
      }
      {
# 1052
      record_target_var(filenames, p, two_colon, v_origin,
                        (struct floc  const  *)fstart);
# 1053
      filenames = (struct nameseq *)0;
      }
# 1054
      continue;
    }
    {
# 1059
    find_char_unquote(lb_next, (int )'=', 0, 0);
# 1062
    no_targets = 0;
    }
# 1065
    if ((int )(*lb_next) != 0) {
      {
# 1067
      l___0 = (unsigned int )(p2 - variable_buffer);
# 1068
      variable_expand_string(p2 + plen, lb_next, -1L);
# 1069
      p2 = variable_buffer + l___0;
      }
# 1072
      if ((unsigned int )cmdleft == (unsigned int )((char *)0)) {
        {
# 1074
        cmdleft = find_char_unquote(p2, (int )';', 0, 0);
        }
# 1075
        if ((unsigned int )cmdleft != (unsigned int )((char *)0)) {
          {
# 1076
          tmp___56 = cmdleft;
# 1076
          cmdleft ++;
# 1076
          (*tmp___56) = '\0';
          }
        }
      }
    }
    {
# 1081
    have_sysv_atvar = 0;
    }
# 1082
    if (! posix_pedantic) {
      {
# 1083
      p = strchr((char const   *)p2, (int )'$');
      }
# 1083
      while ((unsigned int )p != (unsigned int )((char *)0)) {
# 1084
        if ((int )(*(p + 1)) == 64) {
          {
# 1086
          have_sysv_atvar = 1;
          }
# 1087
          break;
        } else {
# 1084
          if ((int )(*(p + 1)) == 40) {
# 1084
            if ((int )(*(p + 2)) == 64) {
              {
# 1086
              have_sysv_atvar = 1;
              }
# 1087
              break;
            }
          }
        }
        {
# 1083
        p = strchr((char const   *)(p + 1), (int )'$');
        }
      }
    }
    {
# 1091
    p = strchr((char const   *)p2, (int )':');
    }
# 1092
    while (1) {
# 1092
      if ((unsigned int )p != (unsigned int )((char *)0)) {
# 1092
        if (! ((int )(*(p + -1)) == 92)) {
# 1092
          break;
        }
      } else {
# 1092
        break;
      }
      {
# 1094
      q = p + -1;
# 1095
      backslash = 0;
      }
# 1096
      while (1) {
        {
# 1096
        tmp___57 = q;
# 1096
        q --;
        }
# 1096
        if (! ((int )(*tmp___57) == 92)) {
# 1096
          break;
        }
        {
# 1097
        backslash = ! backslash != 0;
        }
      }
# 1098
      if (backslash) {
        {
# 1099
        p = strchr((char const   *)(p + 1), (int )':');
        }
      } else {
# 1101
        break;
      }
    }
# 1136
    if ((unsigned int )p != (unsigned int )((char *)0)) {
      {
# 1139
      target = parse_file_seq(& p2, (int )':', sizeof(struct nameseq ), 1);
# 1140
      p2 ++;
      }
# 1141
      if ((unsigned int )target == (unsigned int )((struct nameseq *)0)) {
        {
# 1142
        tmp___58 = (char const   *)dcgettext((char const   *)((void *)0),
                                             (char const   *)"missing target pattern",
                                             5);
# 1142
        fatal((struct floc  const  *)fstart, tmp___58);
        }
      } else {
# 1143
        if ((unsigned int )target->next != (unsigned int )((struct nameseq *)0)) {
          {
# 1144
          tmp___59 = (char const   *)dcgettext((char const   *)((void *)0),
                                               (char const   *)"multiple target patterns",
                                               5);
# 1144
          fatal((struct floc  const  *)fstart, tmp___59);
          }
        }
      }
      {
# 1145
      pattern = target->name;
# 1146
      pattern_percent = find_percent(pattern);
      }
# 1147
      if ((unsigned int )pattern_percent == (unsigned int )((char *)0)) {
        {
# 1148
        tmp___60 = (char const   *)dcgettext((char const   *)((void *)0),
                                             (char const   *)"target pattern contains no `%%\'",
                                             5);
# 1148
        fatal((struct floc  const  *)fstart, tmp___60);
        }
      }
      {
# 1149
      free((void *)((char *)target));
      }
    } else {
      {
# 1152
      pattern = (char *)0;
      }
    }
    {
# 1155
    tmp___61 = parse_file_seq(& p2, (int )'|', sizeof(struct dep ), 1);
# 1155
    deps = (struct dep *)multi_glob(tmp___61, sizeof(struct dep ));
    }
# 1158
    if ((*p2)) {
      {
# 1163
      deps_ptr = & deps;
# 1165
      deps_ptr = & deps;
      }
# 1165
      while ((*deps_ptr)) {
        {
# 1165
        deps_ptr = & ((*deps_ptr))->next;
        }
      }
      {
# 1167
      p2 ++;
# 1168
      tmp___63 = parse_file_seq(& p2, (int )'\0', sizeof(struct dep ), 1);
# 1168
      (*deps_ptr) = (struct dep *)multi_glob(tmp___63, sizeof(struct dep ));
# 1171
      d = (*deps_ptr);
      }
# 1171
      while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
        {
# 1172
        d->ignore_mtime = 1U;
# 1171
        d = d->next;
        }
      }
    }
    {
# 1175
    commands_idx = 0U;
    }
# 1176
    if ((unsigned int )cmdleft != (unsigned int )((char *)0)) {
      {
# 1179
      tmp___65 = strlen((char const   *)cmdleft);
# 1179
      len___4 = tmp___65;
# 1181
      cmds_started = (unsigned int )fstart->lineno;
      }
# 1184
      if (len___4 + 2U > commands_len) {
        {
# 1186
        commands_len = (len___4 + 2U) * 2U;
# 1187
        tmp___66 = xrealloc(commands, commands_len);
# 1187
        commands = tmp___66;
        }
      }
      {
# 1189
      memmove((void *)commands, (void const   *)cmdleft, len___4);
# 1190
      commands_idx += len___4;
# 1191
      tmp___67 = commands_idx;
# 1191
      commands_idx ++;
# 1191
      (*(commands + tmp___67)) = '\n';
      }
    }
# 1194
    continue;
    rule_complete: 
# 1201
    while (1) {
# 1201
      if ((unsigned int )filenames != (unsigned int )((struct nameseq *)0)) {
        {
# 1201
        fi.lineno = (unsigned long )tgts_started;
# 1201
        record_files(filenames, pattern, pattern_percent, deps, cmds_started,
                     commands, commands_idx, two_colon, have_sysv_atvar,
                     (struct floc  const  *)(& fi), set_default);
        }
      }
      {
# 1201
      filenames = (struct nameseq *)0;
# 1201
      commands_idx = 0U;
# 1201
      no_targets = 0;
      }
# 1201
      if (pattern) {
        {
# 1201
        free((void *)pattern);
# 1201
        pattern = (char *)0;
        }
      }
# 1201
      break;
    }
  }
# 1206
  if (conditionals->if_cmds) {
    {
# 1207
    tmp___68 = (char const   *)dcgettext((char const   *)((void *)0),
                                         (char const   *)"missing `endif\'", 5);
# 1207
    fatal((struct floc  const  *)fstart, tmp___68);
    }
  }
# 1210
  while (1) {
# 1210
    if ((unsigned int )filenames != (unsigned int )((struct nameseq *)0)) {
      {
# 1210
      fi.lineno = (unsigned long )tgts_started;
# 1210
      record_files(filenames, pattern, pattern_percent, deps, cmds_started,
                   commands, commands_idx, two_colon, have_sysv_atvar,
                   (struct floc  const  *)(& fi), set_default);
      }
    }
    {
# 1210
    filenames = (struct nameseq *)0;
# 1210
    commands_idx = 0U;
# 1210
    no_targets = 0;
    }
# 1210
    if (pattern) {
      {
# 1210
      free((void *)pattern);
# 1210
      pattern = (char *)0;
      }
    }
# 1210
    break;
  }
  {
# 1212
  free((void *)commands);
  }
# 1214
  return (1);
}
}
# 1222
static void do_define(char *name , unsigned int namelen ,
                      enum variable_origin origin , struct ebuffer *ebuf ) 
{ struct floc defstart ;
  long nlines ;
  int nlevels ;
  unsigned int length___0 ;
  char *definition ;
  char *tmp ;
  unsigned int idx ;
  char *p ;
  char *var ;
  char *tmp___0 ;
  unsigned int len ;
  char *line ;
  char const   *tmp___1 ;
  char *tmp___2 ;
  unsigned int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  char *tmp___8 ;
  unsigned int tmp___9 ;
  char const   *tmp___10 ;

  {
  {
# 1230
  nlines = 0L;
# 1231
  nlevels = 1;
# 1232
  length___0 = 100U;
# 1233
  tmp = xmalloc(length___0);
# 1233
  definition = tmp;
# 1234
  idx = 0U;
# 1238
  tmp___0 = (char *)__builtin_alloca(namelen + 1U);
# 1238
  var = tmp___0;
# 1239
  memmove((void *)var, (void const   *)name, namelen);
# 1240
  (*(var + namelen)) = '\0';
# 1241
  var = variable_expand(var);
# 1243
  defstart = ebuf->floc;
  }
# 1245
  while (1) {
    {
# 1250
    ebuf->floc.lineno = ebuf->floc.lineno + (unsigned long )nlines;
# 1251
    nlines = readline(ebuf);
    }
# 1254
    if (nlines < 0L) {
# 1255
      break;
    }
    {
# 1257
    line = ebuf->buffer;
# 1259
    collapse_continuations(line);
    }
# 1265
    if ((int )(*(line + 0)) != 9) {
      {
# 1267
      p = next_token((char const   *)line);
# 1268
      len = strlen((char const   *)p);
      }
# 1271
      if (len == 6U) {
        goto _L___1;
      } else {
# 1271
        if (len > 6U) {
          {
# 1271
          tmp___6 = _get__ctype_b((int )((unsigned char )(*(p + 6))));
          }
# 1271
          if (tmp___6 & 1) {
            _L___1: 
            {
# 1271
            tmp___7 = strncmp((char const   *)p, (char const   *)"define", 6U);
            }
# 1271
            if (tmp___7 == 0) {
              {
# 1273
              nlevels ++;
              }
            } else {
              goto _L___2;
            }
          } else {
            goto _L___2;
          }
        } else {
          _L___2: 
# 1277
          if (len == 5U) {
            goto _L;
          } else {
# 1277
            if (len > 5U) {
              {
# 1277
              tmp___4 = _get__ctype_b((int )((unsigned char )(*(p + 5))));
              }
# 1277
              if (tmp___4 & 1) {
                _L: 
                {
# 1277
                tmp___5 = strncmp((char const   *)p, (char const   *)"endef", 5U);
                }
# 1277
                if (tmp___5 == 0) {
                  {
# 1280
                  p += 5;
# 1281
                  remove_comments(p);
# 1282
                  tmp___2 = next_token((char const   *)p);
                  }
# 1282
                  if ((int )(*tmp___2) != 0) {
                    {
# 1283
                    tmp___1 = (char const   *)dcgettext((char const   *)((void *)0),
                                                        (char const   *)"Extraneous text after `endef\' directive",
                                                        5);
# 1283
                    error((struct floc  const  *)(& ebuf->floc), tmp___1);
                    }
                  }
                  {
# 1286
                  nlevels --;
                  }
# 1286
                  if (nlevels == 0) {
# 1289
                    if (idx == 0U) {
                      {
# 1290
                      (*(definition + 0)) = '\0';
                      }
                    } else {
                      {
# 1292
                      (*(definition + (idx - 1U))) = '\0';
                      }
                    }
                    {
# 1295
                    tmp___3 = strlen((char const   *)var);
# 1295
                    define_variable_in_set((char const   *)var, tmp___3,
                                           definition, origin, 1,
                                           (struct variable_set *)((void *)0),
                                           (struct floc  const  *)(& defstart));
# 1297
                    free((void *)definition);
                    }
# 1298
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    {
# 1304
    len = strlen((char const   *)line);
    }
# 1305
    if ((idx + len) + 1U > length___0) {
      {
# 1307
      length___0 = (idx + len) * 2U;
# 1308
      tmp___8 = xrealloc(definition, length___0 + 1U);
# 1308
      definition = tmp___8;
      }
    }
    {
# 1311
    memmove((void *)(definition + idx), (void const   *)line, len);
# 1312
    idx += len;
# 1314
    tmp___9 = idx;
# 1314
    idx ++;
# 1314
    (*(definition + tmp___9)) = '\n';
    }
  }
  {
# 1318
  tmp___10 = (char const   *)dcgettext((char const   *)((void *)0),
                                       (char const   *)"missing `endef\', unterminated `define\'",
                                       5);
# 1318
  fatal((struct floc  const  *)(& defstart), tmp___10);
  }
# 1321
  return;
}
}
# 1335
static int conditional_line(char *line , struct floc  const  *flocp ) 
{ int notdef ;
  char *cmdname ;
  register unsigned int i ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *var ;
  struct variable *v ;
  register char *p ;
  char *tmp___9 ;
  unsigned int tmp___10 ;
  int tmp___11 ;
  char *s1 ;
  char *s2 ;
  unsigned int len ;
  char termin ;
  int tmp___12 ;
  register int count ;
  char *p___0 ;
  char *tmp___13 ;
  int tmp___14 ;
  char *tmp___15 ;
  register int count___0 ;
  char const   *tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;

  {
# 1344
  if ((int )(*line) == 105) {
    {
# 1347
    notdef = (int )(*(line + 2)) == 110;
    }
# 1348
    if (notdef) {
# 1350
      if ((int )(*(line + 3)) == 100) {
        {
# 1350
        cmdname = "ifndef";
        }
      } else {
        {
# 1350
        cmdname = "ifneq";
        }
      }
# 1351
      if ((int )(*(cmdname + 3)) == 100) {
        {
# 1351
        tmp = 7;
        }
      } else {
        {
# 1351
        tmp = 6;
        }
      }
      {
# 1351
      line += tmp;
      }
    } else {
# 1355
      if ((int )(*(line + 2)) == 100) {
        {
# 1355
        cmdname = "ifdef";
        }
      } else {
        {
# 1355
        cmdname = "ifeq";
        }
      }
# 1356
      if ((int )(*(cmdname + 2)) == 100) {
        {
# 1356
        tmp___0 = 6;
        }
      } else {
        {
# 1356
        tmp___0 = 5;
        }
      }
      {
# 1356
      line += tmp___0;
      }
    }
  } else {
    {
# 1362
    notdef = (int )(*(line + 1)) == 110;
    }
# 1363
    if (notdef) {
      {
# 1363
      cmdname = "endif";
      }
    } else {
      {
# 1363
      cmdname = "else";
      }
    }
# 1364
    if (notdef) {
      {
# 1364
      tmp___1 = 5;
      }
    } else {
      {
# 1364
      tmp___1 = 4;
      }
    }
    {
# 1364
    line += tmp___1;
    }
  }
  {
# 1367
  line = next_token((char const   *)line);
  }
# 1369
  if ((int )(*cmdname) == 101) {
# 1371
    if ((int )(*line) != 0) {
      {
# 1372
      tmp___2 = (char const   *)dcgettext((char const   *)((void *)0),
                                          (char const   *)"Extraneous text after `%s\' directive",
                                          5);
# 1372
      error(flocp, tmp___2, cmdname);
      }
    }
# 1374
    if (conditionals->if_cmds == 0U) {
      {
# 1375
      tmp___3 = (char const   *)dcgettext((char const   *)((void *)0),
                                          (char const   *)"extraneous `%s\'", 5);
# 1375
      fatal(flocp, tmp___3, cmdname);
      }
    }
# 1377
    if (notdef) {
      {
# 1378
      conditionals->if_cmds --;
      }
    } else {
# 1379
      if ((*(conditionals->seen_else + (conditionals->if_cmds - 1U)))) {
        {
# 1380
        tmp___4 = (char const   *)dcgettext((char const   *)((void *)0),
                                            (char const   *)"only one `else\' per conditional",
                                            5);
# 1380
        fatal(flocp, tmp___4);
        }
      } else {
        {
# 1384
        (*(conditionals->ignoring + (conditionals->if_cmds - 1U))) = (char )(! (*(conditionals->ignoring +
                                                                                  (conditionals->if_cmds -
                                                                                   1U))) !=
                                                                             0);
# 1388
        (*(conditionals->seen_else + (conditionals->if_cmds - 1U))) = (char )1;
        }
      }
    }
    {
# 1390
    i = 0U;
    }
# 1390
    while (i < conditionals->if_cmds) {
# 1391
      if ((*(conditionals->ignoring + i))) {
# 1392
        return (1);
      }
      {
# 1390
      i ++;
      }
    }
# 1393
    return (0);
  }
# 1396
  if (conditionals->allocated == 0U) {
    {
# 1398
    conditionals->allocated = 5U;
# 1399
    tmp___5 = xmalloc(conditionals->allocated);
# 1399
    conditionals->ignoring = tmp___5;
# 1400
    tmp___6 = xmalloc(conditionals->allocated);
# 1400
    conditionals->seen_else = tmp___6;
    }
  }
  {
# 1403
  conditionals->if_cmds ++;
  }
# 1404
  if (conditionals->if_cmds > conditionals->allocated) {
    {
# 1406
    conditionals->allocated += 5U;
# 1407
    tmp___7 = xrealloc(conditionals->ignoring, conditionals->allocated);
# 1407
    conditionals->ignoring = tmp___7;
# 1409
    tmp___8 = xrealloc(conditionals->seen_else, conditionals->allocated);
# 1409
    conditionals->seen_else = tmp___8;
    }
  }
  {
# 1414
  (*(conditionals->seen_else + (conditionals->if_cmds - 1U))) = (char )0;
# 1417
  i = 0U;
  }
# 1417
  while (i < conditionals->if_cmds - 1U) {
# 1418
    if ((*(conditionals->ignoring + i))) {
      {
# 1423
      (*(conditionals->ignoring + (conditionals->if_cmds - 1U))) = (char )1;
      }
# 1424
      return (1);
    }
    {
# 1417
    i ++;
    }
  }
# 1427
  if (notdef) {
    {
# 1427
    tmp___20 = 3;
    }
  } else {
    {
# 1427
    tmp___20 = 2;
    }
  }
# 1427
  if ((int )(*(cmdname + tmp___20)) == 100) {
    {
# 1432
    tmp___9 = end_of_token(line);
# 1432
    p = tmp___9;
# 1433
    i = (unsigned int )(p - line);
# 1434
    p = next_token((char const   *)p);
    }
# 1435
    if ((int )(*p) != 0) {
# 1436
      return (-1);
    }
    {
# 1440
    (*(line + i)) = '\0';
# 1441
    var = allocated_variable_expand_for_file(line, (struct file *)0);
# 1443
    tmp___10 = strlen((char const   *)var);
# 1443
    v = lookup_variable((char const   *)var, tmp___10);
    }
# 1444
    if ((unsigned int )v != (unsigned int )((struct variable *)0)) {
# 1444
      if ((int )(*(v->value)) != 0) {
        {
# 1444
        tmp___11 = 1;
        }
      } else {
        {
# 1444
        tmp___11 = 0;
        }
      }
    } else {
      {
# 1444
      tmp___11 = 0;
      }
    }
    {
# 1444
    (*(conditionals->ignoring + (conditionals->if_cmds - 1U))) = (char )(tmp___11 ==
                                                                         notdef);
# 1447
    free((void *)var);
    }
  } else {
# 1454
    if ((int )(*line) == 40) {
      {
# 1454
      tmp___12 = (int )',';
      }
    } else {
      {
# 1454
      tmp___12 = (int )(*line);
      }
    }
    {
# 1454
    termin = (char )tmp___12;
    }
# 1456
    if ((int )termin != 44) {
# 1456
      if ((int )termin != 34) {
# 1456
        if ((int )termin != 39) {
# 1457
          return (-1);
        }
      }
    }
    {
# 1459
    line ++;
# 1459
    s1 = line;
    }
# 1461
    if ((int )termin == 44) {
      {
# 1463
      count = 0;
      }
# 1464
      while ((int )(*line) != 0) {
# 1465
        if ((int )(*line) == 40) {
          {
# 1466
          count ++;
          }
        } else {
# 1467
          if ((int )(*line) == 41) {
            {
# 1468
            count --;
            }
          } else {
# 1469
            if ((int )(*line) == 44) {
# 1469
              if (count <= 0) {
# 1470
                break;
              }
            }
          }
        }
        {
# 1464
        line ++;
        }
      }
    } else {
# 1473
      while (1) {
# 1473
        if ((int )(*line) != 0) {
# 1473
          if (! ((int )(*line) != (int )termin)) {
# 1473
            break;
          }
        } else {
# 1473
          break;
        }
        {
# 1474
        line ++;
        }
      }
    }
# 1476
    if ((int )(*line) == 0) {
# 1477
      return (-1);
    }
# 1479
    if ((int )termin == 44) {
      {
# 1482
      tmp___13 = line;
# 1482
      line ++;
# 1482
      p___0 = tmp___13;
      }
# 1483
      while (1) {
        {
# 1483
        tmp___14 = _get__ctype_b((int )((unsigned char )(*(p___0 + -1))));
        }
# 1483
        if (! (tmp___14 & 1)) {
# 1483
          break;
        }
        {
# 1484
        p___0 --;
        }
      }
      {
# 1485
      (*p___0) = '\0';
      }
    } else {
      {
# 1488
      tmp___15 = line;
# 1488
      line ++;
# 1488
      (*tmp___15) = '\0';
      }
    }
    {
# 1490
    s2 = variable_expand(s1);
# 1493
    len = strlen((char const   *)s2);
# 1494
    s1 = (char *)__builtin_alloca(len + 1U);
# 1495
    memmove((void *)s1, (void const   *)s2, len + 1U);
    }
# 1497
    if ((int )termin != 44) {
      {
# 1499
      line = next_token((char const   *)line);
      }
    }
# 1501
    if ((int )termin == 44) {
      {
# 1501
      termin = ')';
      }
    } else {
      {
# 1501
      termin = (*line);
      }
    }
# 1502
    if ((int )termin != 41) {
# 1502
      if ((int )termin != 34) {
# 1502
        if ((int )termin != 39) {
# 1503
          return (-1);
        }
      }
    }
# 1506
    if ((int )termin == 41) {
      {
# 1508
      count___0 = 0;
# 1509
      s2 = next_token((char const   *)line);
# 1510
      line = s2;
      }
# 1510
      while ((int )(*line) != 0) {
# 1512
        if ((int )(*line) == 40) {
          {
# 1513
          count___0 ++;
          }
        } else {
# 1514
          if ((int )(*line) == 41) {
# 1516
            if (count___0 <= 0) {
# 1517
              break;
            } else {
              {
# 1519
              count___0 --;
              }
            }
          }
        }
        {
# 1510
        line ++;
        }
      }
    } else {
      {
# 1525
      line ++;
# 1526
      s2 = line;
      }
# 1527
      while (1) {
# 1527
        if ((int )(*line) != 0) {
# 1527
          if (! ((int )(*line) != (int )termin)) {
# 1527
            break;
          }
        } else {
# 1527
          break;
        }
        {
# 1528
        line ++;
        }
      }
    }
# 1531
    if ((int )(*line) == 0) {
# 1532
      return (-1);
    }
    {
# 1534
    (*line) = '\0';
# 1535
    line ++;
# 1535
    line = next_token((char const   *)line);
    }
# 1536
    if ((int )(*line) != 0) {
      {
# 1537
      tmp___17 = (char const   *)dcgettext((char const   *)((void *)0),
                                           (char const   *)"Extraneous text after `%s\' directive",
                                           5);
# 1537
      error(flocp, tmp___17, cmdname);
      }
    }
    {
# 1539
    s2 = variable_expand(s2);
    }
# 1540
    if ((unsigned int )s1 == (unsigned int )s2) {
      {
# 1540
      tmp___19 = 1;
      }
    } else {
# 1540
      if ((int )(*s1) == (int )(*s2)) {
# 1540
        if ((int )(*s1) == 0) {
          {
# 1540
          tmp___19 = 1;
          }
        } else {
          {
# 1540
          tmp___18 = strcmp((char const   *)(s1 + 1), (char const   *)(s2 + 1));
          }
# 1540
          if (tmp___18) {
            {
# 1540
            tmp___19 = 0;
            }
          } else {
            {
# 1540
            tmp___19 = 1;
            }
          }
        }
      } else {
        {
# 1540
        tmp___19 = 0;
        }
      }
    }
    {
# 1540
    (*(conditionals->ignoring + (conditionals->if_cmds - 1U))) = (char )(tmp___19 ==
                                                                         notdef);
    }
  }
  {
# 1545
  i = 0U;
  }
# 1545
  while (i < conditionals->if_cmds) {
# 1546
    if ((*(conditionals->ignoring + i))) {
# 1547
      return (1);
    }
    {
# 1545
    i ++;
    }
  }
# 1548
  return (0);
}
}
# 1553
static unsigned long dep_hash_1(void const   *key ) 
{ unsigned long _result_ ;
  unsigned char const   *_key_ ;
  char *tmp ;

  {
# 1557
  while (1) {
    {
# 1557
    _result_ = 0UL;
    }
# 1557
    while (1) {
# 1557
      if ((unsigned int )((struct dep  const  *)key)->name ==
          (unsigned int )((char *)0)) {
        {
# 1557
        tmp = (((struct dep  const  *)key)->file)->name;
        }
      } else {
        {
# 1557
        tmp = ((struct dep  const  *)key)->name;
        }
      }
      {
# 1557
      _key_ = (unsigned char const   *)tmp - 1;
      }
# 1557
      while (1) {
        {
# 1557
        _key_ ++;
        }
# 1557
        if (! (*_key_)) {
# 1557
          break;
        }
        {
# 1557
        _result_ += (unsigned long )((int const   )(*_key_) <<
                                     ((int const   )(*(_key_ + 1)) & 15));
        }
      }
# 1557
      break;
    }
# 1557
    return (_result_);
# 1557
    break;
  }
# 1558
  return (0UL);
}
}
# 1560
static unsigned long dep_hash_2(void const   *key ) 
{ unsigned long _result_ ;
  unsigned char const   *_key_ ;
  char *tmp ;

  {
# 1564
  while (1) {
    {
# 1564
    _result_ = 0UL;
    }
# 1564
    while (1) {
# 1564
      if ((unsigned int )((struct dep  const  *)key)->name ==
          (unsigned int )((char *)0)) {
        {
# 1564
        tmp = (((struct dep  const  *)key)->file)->name;
        }
      } else {
        {
# 1564
        tmp = ((struct dep  const  *)key)->name;
        }
      }
      {
# 1564
      _key_ = (unsigned char const   *)tmp - 1;
      }
# 1564
      while (1) {
        {
# 1564
        _key_ ++;
        }
# 1564
        if (! (*_key_)) {
# 1564
          break;
        }
        {
# 1564
        _result_ += (unsigned long )((int const   )(*_key_) <<
                                     ((int const   )(*(_key_ + 1)) & 7));
        }
      }
# 1564
      break;
    }
# 1564
    return (_result_);
# 1564
    break;
  }
# 1565
  return (0UL);
}
}
# 1567
static int dep_hash_cmp(void const   *x , void const   *y ) 
{ struct dep *dx ;
  struct dep *dy ;
  int cmp ;
  char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;

  {
  {
# 1572
  dx = (struct dep *)x;
# 1573
  dy = (struct dep *)y;
  }
# 1574
  if ((unsigned int )dy->name == (unsigned int )((char *)0)) {
    {
# 1574
    tmp = (dy->file)->name;
    }
  } else {
    {
# 1574
    tmp = dy->name;
    }
  }
# 1574
  if ((unsigned int )dx->name == (unsigned int )((char *)0)) {
    {
# 1574
    tmp___0 = (dx->file)->name;
    }
  } else {
    {
# 1574
    tmp___0 = dx->name;
    }
  }
  {
# 1574
  tmp___1 = strcmp((char const   *)tmp___0, (char const   *)tmp);
# 1574
  cmp = tmp___1;
  }
# 1580
  if (! cmp) {
# 1580
    if (dx->ignore_mtime != dy->ignore_mtime) {
      {
# 1581
      dy->ignore_mtime = 0U;
# 1581
      dx->ignore_mtime = dy->ignore_mtime;
      }
    }
  }
# 1583
  return (cmp);
}
}
# 1587
void uniquize_deps(struct dep *chain ) 
{ struct hash_table deps ;
  register struct dep **depp ;
  struct dep *dep ;
  struct dep **dep_slot ;
  struct dep **tmp ;

  {
  {
# 1594
  hash_init(& deps, 500UL, & dep_hash_1, & dep_hash_2, & dep_hash_cmp);
# 1600
  depp = & chain;
  }
# 1601
  while ((*depp)) {
    {
# 1603
    dep = (*depp);
# 1604
    tmp = (struct dep **)hash_find_slot(& deps, (void const   *)dep);
# 1604
    dep_slot = tmp;
    }
# 1605
    if ((unsigned int )(*dep_slot) == (unsigned int )((struct dep *)0)) {
      {
# 1607
      hash_insert_at(& deps, (void *)dep, (void const   *)dep_slot);
# 1608
      depp = & dep->next;
      }
    } else {
# 1605
      if ((unsigned int )((void *)(*dep_slot)) ==
          (unsigned int )hash_deleted_item) {
        {
# 1607
        hash_insert_at(& deps, (void *)dep, (void const   *)dep_slot);
# 1608
        depp = & dep->next;
        }
      } else {
        {
# 1614
        (*depp) = dep->next;
        }
      }
    }
  }
  {
# 1618
  hash_free(& deps, 0);
  }
# 1619
  return;
}
}
# 1630
static void record_target_var(struct nameseq *filenames , char *defn ,
                              int two_colon , enum variable_origin origin ,
                              struct floc  const  *flocp ) 
{ struct nameseq *nextf ;
  struct variable_set_list *global ;
  struct variable *v ;
  register char *name ;
  struct variable_set_list *vlist ;
  char *fname ;
  char *percent ;
  struct pattern_var *p ;
  struct file *f ;
  char const   *tmp ;
  struct variable *gv ;
  int len ;
  int tmp___0 ;
  size_t tmp___1 ;

  {
  {
# 1641
  global = current_variable_set_list;
  }
# 1646
  while ((unsigned int )filenames != (unsigned int )((struct nameseq *)0)) {
    {
# 1649
    name = filenames->name;
# 1654
    nextf = filenames->next;
# 1655
    free((void *)((char *)filenames));
# 1659
    percent = find_percent(name);
    }
# 1660
    if (percent) {
      {
# 1665
      p = create_pattern_var(name, percent);
# 1666
      vlist = p->vars;
# 1667
      fname = p->target;
      }
    } else {
      {
# 1677
      f = lookup_file(name);
      }
# 1678
      if (f) {
# 1680
        if (f->double_colon) {
          {
# 1681
          f = f->double_colon;
          }
        }
      } else {
        {
# 1679
        f = enter_file(name);
        }
      }
      {
# 1683
      initialize_file_variables(f, 1);
# 1684
      vlist = f->variables;
# 1685
      fname = f->name;
      }
    }
    {
# 1689
    current_variable_set_list = vlist;
# 1690
    v = try_variable_definition(flocp, defn, origin, 1);
    }
# 1691
    if (! v) {
      {
# 1692
      tmp = (char const   *)dcgettext((char const   *)((void *)0),
                                      (char const   *)"Malformed per-target variable definition",
                                      5);
# 1692
      error(flocp, tmp);
      }
    }
    {
# 1693
    v->per_target = 1U;
    }
# 1697
    if (origin != 5) {
      {
# 1700
      tmp___0 = (int )strlen((char const   *)v->name);
# 1700
      len = tmp___0;
# 1702
      current_variable_set_list = global;
# 1703
      gv = lookup_variable((char const   *)v->name, (unsigned int )len);
      }
# 1704
      if (gv) {
# 1704
        if (gv->origin == 3) {
          {
# 1706
          v = define_variable_in_set((char const   *)v->name,
                                     (unsigned int )len, gv->value, gv->origin,
                                     (int )gv->recursive, vlist->set, flocp);
# 1708
          v->append = 0U;
          }
        } else {
# 1704
          if (gv->origin == 4) {
            {
# 1706
            v = define_variable_in_set((char const   *)v->name,
                                       (unsigned int )len, gv->value,
                                       gv->origin, (int )gv->recursive,
                                       vlist->set, flocp);
# 1708
            v->append = 0U;
            }
          }
        }
      }
    }
# 1713
    if ((unsigned int )name != (unsigned int )fname) {
# 1713
      if ((unsigned int )name < (unsigned int )fname) {
        {
# 1714
        free((void *)name);
        }
      } else {
        {
# 1713
        tmp___1 = strlen((char const   *)fname);
        }
# 1713
        if ((unsigned int )name > (unsigned int )(fname + tmp___1)) {
          {
# 1714
          free((void *)name);
          }
        }
      }
    }
    {
# 1646
    filenames = nextf;
    }
  }
  {
# 1717
  current_variable_set_list = global;
  }
# 1718
  return;
}
}
# 2046
static char *percent___0   = "%";
# 1731
static void record_files(struct nameseq *filenames , char *pattern ,
                         char *pattern_percent , struct dep *deps ,
                         unsigned int cmds_started , char *commands ,
                         unsigned int commands_idx , int two_colon ,
                         int have_sysv_atvar , struct floc  const  *flocp ,
                         int set_default ) 
{ struct nameseq *nextf ;
  int implicit ;
  unsigned int max_targets ;
  unsigned int target_idx ;
  char **targets ;
  char **target_percents ;
  struct commands *cmds ;
  char *name ;
  struct file *f ;
  struct dep *d ;
  struct dep *this ;
  char *implicit_percent ;
  int tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___8 ;
  char *buffer ;
  char *tmp___9 ;
  char *o ;
  char *percent___1 ;
  char *tmp___10 ;
  char const   *tmp___11 ;
  int tmp___12 ;
  char *p ;
  int tlen ;
  int tmp___13 ;
  char *fnp ;
  char *tmp___14 ;
  int dlen ;
  int flen ;
  char *s ;
  char *at ;
  int atlen ;
  size_t tmp___15 ;
  int soff ;
  int poff ;
  size_t tmp___16 ;
  char *tmp___17 ;
  size_t tmp___18 ;
  char const   *tmp___19 ;
  char const   *tmp___20 ;
  char const   *tmp___21 ;
  char const   *tmp___22 ;
  struct dep *nextd ;
  struct dep *firstdeps ;
  struct dep *moredeps ;
  char *buffer___0 ;
  char *tmp___23 ;
  char *o___0 ;
  char *tmp___24 ;
  char const   *tmp___25 ;
  size_t tmp___26 ;
  int reject ;
  register struct dep *d2 ;
  char *tmp___27 ;
  char *tmp___28 ;
  char *tmp___29 ;
  char *tmp___30 ;
  int tmp___31 ;
  register unsigned int len ;
  char *tmp___32 ;
  unsigned int tmp___33 ;
  char *tmp___34 ;
  int tmp___35 ;
  char *tmp___36 ;
  char *tmp___37 ;
  char *tmp___38 ;
  int tmp___39 ;
  char *tmp___40 ;

  {
  {
# 1747
  implicit = 0;
# 1748
  max_targets = 0U;
# 1748
  target_idx = 0U;
# 1749
  targets = (char **)0;
# 1749
  target_percents = (char **)0;
  }
# 1752
  if (commands_idx > 0U) {
    {
# 1754
    cmds = (struct commands *)xmalloc(sizeof(struct commands ));
# 1755
    cmds->fileinfo.filenm = flocp->filenm;
# 1756
    cmds->fileinfo.lineno = (unsigned long )cmds_started;
# 1757
    cmds->commands = savestring((char const   *)commands, commands_idx);
# 1758
    cmds->command_lines = (char **)0;
    }
  } else {
    {
# 1761
    cmds = (struct commands *)0;
    }
  }
# 1763
  while ((unsigned int )filenames != (unsigned int )((struct nameseq *)0)) {
    {
# 1765
    name = filenames->name;
# 1771
    nextf = filenames->next;
# 1772
    free((void *)filenames);
    }
# 1778
    if ((unsigned int )name == (unsigned int )".POSIX") {
      {
# 1779
      posix_pedantic = 1;
      }
    } else {
# 1778
      if ((int )(*name) == (int )(*".POSIX")) {
# 1778
        if ((int )(*name) == 0) {
          {
# 1779
          posix_pedantic = 1;
          }
        } else {
          {
# 1778
          tmp___0 = strcmp((char const   *)(name + 1),
                           (char const   *)(".POSIX" + 1));
          }
# 1778
          if (! tmp___0) {
            {
# 1779
            posix_pedantic = 1;
            }
          }
        }
      }
    }
    {
# 1781
    implicit_percent = find_percent(name);
# 1782
    implicit |= (unsigned int )implicit_percent != (unsigned int )((char *)0);
    }
# 1784
    if (implicit) {
# 1784
      if ((unsigned int )pattern != (unsigned int )((char *)0)) {
        {
# 1785
        tmp___1 = (char const   *)dcgettext((char const   *)((void *)0),
                                            (char const   *)"mixed implicit and static pattern rules",
                                            5);
# 1785
        fatal(flocp, tmp___1);
        }
      }
    }
# 1787
    if (implicit) {
# 1787
      if ((unsigned int )implicit_percent == (unsigned int )((char *)0)) {
        {
# 1788
        tmp___2 = (char const   *)dcgettext((char const   *)((void *)0),
                                            (char const   *)"mixed implicit and normal rules",
                                            5);
# 1788
        fatal(flocp, tmp___2);
        }
      }
    }
# 1790
    if (implicit) {
# 1792
      if ((unsigned int )targets == (unsigned int )((char **)0)) {
        {
# 1794
        max_targets = 5U;
# 1795
        targets = (char **)xmalloc(5U * sizeof(char *));
# 1796
        target_percents = (char **)xmalloc(5U * sizeof(char *));
# 1797
        target_idx = 0U;
        }
      } else {
# 1799
        if (target_idx == max_targets - 1U) {
          {
# 1801
          max_targets += 5U;
# 1802
          targets = (char **)xrealloc((char *)targets,
                                      max_targets * sizeof(char *));
# 1804
          target_percents = (char **)xrealloc((char *)target_percents,
                                              max_targets * sizeof(char *));
          }
        }
      }
      {
# 1808
      (*(targets + target_idx)) = name;
# 1809
      (*(target_percents + target_idx)) = implicit_percent;
# 1810
      target_idx ++;
      }
      goto __Cont;
    }
# 1817
    if ((unsigned int )nextf != (unsigned int )((struct nameseq *)0)) {
      {
# 1817
      this = copy_dep_chain(deps);
      }
    } else {
      {
# 1817
      this = deps;
      }
    }
# 1819
    if ((unsigned int )pattern != (unsigned int )((char *)0)) {
      {
# 1825
      tmp___12 = pattern_matches(pattern, pattern_percent, name);
      }
# 1825
      if (tmp___12) {
        {
# 1837
        tmp___9 = variable_expand("");
# 1837
        buffer = tmp___9;
# 1839
        d = this;
        }
# 1839
        while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
          {
# 1842
          tmp___10 = find_percent(d->name);
# 1842
          percent___1 = tmp___10;
          }
# 1843
          if ((unsigned int )percent___1 == (unsigned int )((char *)0)) {
            goto __Cont___0;
          }
          {
# 1845
          o = patsubst_expand(buffer, name, pattern, d->name, pattern_percent,
                              percent___1);
          }
# 1849
          if ((unsigned int )o == (unsigned int )buffer) {
            {
# 1850
            tmp___11 = (char const   *)dcgettext((char const   *)((void *)0),
                                                 (char const   *)"target `%s\' leaves prerequisite pattern empty",
                                                 5);
# 1850
            fatal(flocp, tmp___11, name);
            }
          }
          {
# 1853
          free((void *)d->name);
# 1854
          d->name = savestring((char const   *)buffer,
                               (unsigned int )(o - buffer));
          }
          __Cont___0: 
          {
# 1839
          d = d->next;
          }
        }
      } else {
        {
# 1828
        tmp___8 = (char const   *)dcgettext((char const   *)((void *)0),
                                            (char const   *)"target `%s\' doesn\'t match the target pattern",
                                            5);
# 1828
        error(flocp, tmp___8, name);
# 1830
        this = (struct dep *)0;
        }
      }
    }
# 1869
    if (have_sysv_atvar) {
      {
# 1872
      tmp___13 = (int )strlen((char const   *)name);
# 1872
      tlen = tmp___13;
# 1873
      tmp___14 = strrchr((char const   *)name, (int )'/');
# 1873
      fnp = tmp___14;
      }
# 1877
      if (fnp) {
        {
# 1879
        dlen = fnp - name;
# 1880
        fnp ++;
# 1881
        flen = (int )strlen((char const   *)fnp);
        }
      } else {
        {
# 1885
        dlen = 0;
# 1886
        fnp = name;
# 1887
        flen = tlen;
        }
      }
      {
# 1891
      d = this;
      }
# 1891
      while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
        {
# 1892
        p = strchr((char const   *)d->name, (int )'$');
        }
# 1892
        while ((unsigned int )p != (unsigned int )((char *)0)) {
          {
# 1894
          s = p;
# 1899
          p ++;
          }
# 1899
          if ((int )(*(p + 0)) == 36) {
# 1899
            if ((int )(*(p + 1)) == 64) {
              {
# 1902
              tmp___15 = strlen((char const   *)p);
# 1902
              memmove((void *)s, (void const   *)p, tmp___15 + 1U);
              }
              goto __Cont___1;
            } else {
# 1899
              if ((int )(*(p + 1)) == 40) {
# 1899
                if ((int )(*(p + 2)) == 64) {
                  {
# 1902
                  tmp___15 = strlen((char const   *)p);
# 1902
                  memmove((void *)s, (void const   *)p, tmp___15 + 1U);
                  }
                  goto __Cont___1;
                }
              }
            }
          }
# 1908
          if ((int )(*(p + 0)) != 64) {
# 1908
            if ((int )(*(p + 0)) != 40) {
              goto __Cont___1;
            } else {
              {
# 1908
              p ++;
              }
# 1908
              if ((int )(*(p + 0)) != 64) {
                goto __Cont___1;
              } else {
                {
# 1908
                p ++;
                }
# 1908
                if ((int )(*(p + 0)) != 41) {
# 1908
                  if ((int )(*(p + 1)) != 41) {
                    goto __Cont___1;
                  } else {
# 1908
                    if ((int )(*(p + 0)) != 68) {
# 1908
                      if ((int )(*(p + 0)) != 70) {
                        goto __Cont___1;
                      }
                    }
                  }
                }
              }
            }
          }
# 1916
          switch ((int )(*(p + 0))) {
          case 68: 
          {
# 1919
          atlen = dlen;
# 1920
          at = name;
# 1921
          p += 2;
          }
# 1922
          break;
          case 70: 
          {
# 1925
          atlen = flen;
# 1926
          at = fnp;
# 1927
          p += 2;
          }
# 1928
          break;
          default: 
          {
# 1931
          atlen = tlen;
# 1932
          at = name;
# 1933
          p ++;
          }
# 1934
          break;
          }
          {
# 1939
          soff = s - d->name;
# 1940
          poff = p - d->name;
# 1941
          tmp___16 = strlen((char const   *)d->name);
# 1941
          tmp___17 = xrealloc(d->name, (tmp___16 + (unsigned int )atlen) + 1U);
# 1941
          d->name = tmp___17;
# 1943
          s = d->name + soff;
# 1944
          p = d->name + poff;
# 1948
          tmp___18 = strlen((char const   *)p);
# 1948
          memmove((void *)(s + atlen), (void const   *)p, tmp___18 + 1U);
# 1949
          memmove((void *)s, (void const   *)at, (unsigned int )atlen);
# 1950
          p = (s + atlen) - 1;
          }
          __Cont___1: 
          {
# 1892
          p = strchr((char const   *)(p + 1), (int )'$');
          }
        }
        {
# 1891
        d = d->next;
        }
      }
    }
# 1954
    if (two_colon) {
      {
# 2057
      f = lookup_file(name);
      }
# 2060
      if ((unsigned int )f != (unsigned int )((struct file *)0)) {
# 2060
        if (f->is_target) {
# 2060
          if (! f->double_colon) {
            {
# 2061
            tmp___25 = (char const   *)dcgettext((char const   *)((void *)0),
                                                 (char const   *)"target file `%s\' has both : and :: entries",
                                                 5);
# 2061
            fatal(flocp, tmp___25, f->name);
            }
          }
        }
      }
      {
# 2063
      f = enter_file(name);
      }
# 2068
      if ((unsigned int )f->double_colon == (unsigned int )((struct file *)0)) {
        {
# 2071
        f->double_colon = f;
        }
      }
      {
# 2072
      f->is_target = 1U;
# 2073
      f->deps = this;
# 2074
      f->cmds = cmds;
      }
    } else {
      {
# 1958
      f = enter_file(name);
      }
# 1960
      if (f->double_colon) {
        {
# 1961
        tmp___19 = (char const   *)dcgettext((char const   *)((void *)0),
                                             (char const   *)"target file `%s\' has both : and :: entries",
                                             5);
# 1961
        fatal(flocp, tmp___19, f->name);
        }
      }
# 1966
      if ((unsigned int )cmds != (unsigned int )((struct commands *)0)) {
# 1966
        if ((unsigned int )cmds == (unsigned int )f->cmds) {
          {
# 1967
          tmp___20 = (char const   *)dcgettext((char const   *)((void *)0),
                                               (char const   *)"target `%s\' given more than once in the same rule.",
                                               5);
# 1967
          error(flocp, tmp___20, f->name);
          }
        } else {
          goto _L;
        }
      } else {
        _L: 
# 1974
        if ((unsigned int )cmds != (unsigned int )((struct commands *)0)) {
# 1974
          if ((unsigned int )f->cmds != (unsigned int )((struct commands *)0)) {
# 1974
            if (f->is_target) {
              {
# 1976
              tmp___21 = (char const   *)dcgettext((char const   *)((void *)0),
                                                   (char const   *)"warning: overriding commands for target `%s\'",
                                                   5);
# 1976
              error((struct floc  const  *)(& cmds->fileinfo), tmp___21, f->name);
# 1979
              tmp___22 = (char const   *)dcgettext((char const   *)((void *)0),
                                                   (char const   *)"warning: ignoring old commands for target `%s\'",
                                                   5);
# 1979
              error((struct floc  const  *)(& (f->cmds)->fileinfo), tmp___22,
                    f->name);
              }
            }
          }
        }
      }
      {
# 1984
      f->is_target = 1U;
      }
# 1987
      if ((unsigned int )f == (unsigned int )default_file) {
# 1987
        if ((unsigned int )this == (unsigned int )((struct dep *)0)) {
# 1987
          if ((unsigned int )cmds == (unsigned int )((struct commands *)0)) {
            {
# 1988
            f->cmds = (struct commands *)0;
            }
          }
        }
      }
# 1989
      if ((unsigned int )cmds != (unsigned int )((struct commands *)0)) {
        {
# 1990
        f->cmds = cmds;
        }
      }
# 1993
      if ((unsigned int )f == (unsigned int )suffix_file) {
# 1993
        if ((unsigned int )this == (unsigned int )((struct dep *)0)) {
          {
# 1995
          d = f->deps;
          }
# 1996
          while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
            {
# 1998
            nextd = d->next;
# 1999
            free((void *)d->name);
# 2000
            free((void *)((char *)d));
# 2001
            d = nextd;
            }
          }
          {
# 2003
          f->deps = (struct dep *)0;
          }
        } else {
          goto _L___0;
        }
      } else {
        _L___0: 
# 2005
        if ((unsigned int )f->deps != (unsigned int )((struct dep *)0)) {
# 2010
          if ((unsigned int )cmds != (unsigned int )((struct commands *)0)) {
            {
# 2016
            firstdeps = this;
# 2017
            moredeps = f->deps;
            }
          } else {
            {
# 2022
            firstdeps = f->deps;
# 2023
            moredeps = this;
            }
          }
# 2026
          if ((unsigned int )firstdeps == (unsigned int )((struct dep *)0)) {
            {
# 2027
            firstdeps = moredeps;
            }
          } else {
            {
# 2030
            d = firstdeps;
            }
# 2031
            while ((unsigned int )d->next != (unsigned int )((struct dep *)0)) {
              {
# 2032
              d = d->next;
              }
            }
            {
# 2033
            d->next = moredeps;
            }
          }
          {
# 2036
          f->deps = firstdeps;
          }
        } else {
          {
# 2039
          f->deps = this;
          }
        }
      }
# 2044
      if ((unsigned int )pattern != (unsigned int )((char *)0)) {
        {
# 2047
        tmp___23 = variable_expand("");
# 2047
        buffer___0 = tmp___23;
# 2048
        tmp___24 = patsubst_expand(buffer___0, name, pattern, percent___0,
                                   pattern_percent, percent___0);
# 2048
        o___0 = tmp___24;
# 2050
        f->stem = savestring((char const   *)buffer___0,
                             (unsigned int )(o___0 - buffer___0));
        }
      }
    }
# 2078
    if ((unsigned int )f != (unsigned int )((struct file *)0)) {
# 2078
      if ((unsigned int )name != (unsigned int )f->name) {
# 2078
        if ((unsigned int )name < (unsigned int )f->name) {
          {
# 2081
          free((void *)name);
# 2082
          name = f->name;
          }
        } else {
          {
# 2078
          tmp___26 = strlen((char const   *)f->name);
          }
# 2078
          if ((unsigned int )name > (unsigned int )(f->name + tmp___26)) {
            {
# 2081
            free((void *)name);
# 2082
            name = f->name;
            }
          }
        }
      }
    }
# 2087
    if ((unsigned int )default_goal_file == (unsigned int )((struct file *)0)) {
# 2087
      if (set_default) {
# 2087
        if ((int )(*name) != 46) {
          goto _L___1;
        } else {
          {
# 2087
          tmp___40 = strchr((char const   *)name, (int )'/');
          }
# 2087
          if ((unsigned int )tmp___40 != (unsigned int )((char *)0)) {
            _L___1: 
            {
# 2094
            reject = 0;
# 2099
            d = suffix_file->deps;
            }
# 2099
            while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
# 2102
              if ((unsigned int )d->name == (unsigned int )((char *)0)) {
                {
# 2102
                tmp___27 = (d->file)->name;
                }
              } else {
                {
# 2102
                tmp___27 = d->name;
                }
              }
# 2102
              if ((int )(*tmp___27) != 46) {
# 2102
                if ((unsigned int )d->name == (unsigned int )((char *)0)) {
                  {
# 2102
                  tmp___28 = (d->file)->name;
                  }
                } else {
                  {
# 2102
                  tmp___28 = d->name;
                  }
                }
# 2102
                if ((unsigned int )name == (unsigned int )tmp___28) {
                  {
# 2104
                  reject = 1;
                  }
# 2105
                  break;
                } else {
# 2102
                  if ((unsigned int )d->name == (unsigned int )((char *)0)) {
                    {
# 2102
                    tmp___29 = (d->file)->name;
                    }
                  } else {
                    {
# 2102
                    tmp___29 = d->name;
                    }
                  }
# 2102
                  if ((int )(*name) == (int )(*tmp___29)) {
# 2102
                    if ((int )(*name) == 0) {
                      {
# 2104
                      reject = 1;
                      }
# 2105
                      break;
                    } else {
# 2102
                      if ((unsigned int )d->name == (unsigned int )((char *)0)) {
                        {
# 2102
                        tmp___30 = (d->file)->name;
                        }
                      } else {
                        {
# 2102
                        tmp___30 = d->name;
                        }
                      }
                      {
# 2102
                      tmp___31 = strcmp((char const   *)(name + 1),
                                        (char const   *)(tmp___30 + 1));
                      }
# 2102
                      if (! tmp___31) {
                        {
# 2104
                        reject = 1;
                        }
# 2105
                        break;
                      }
                    }
                  }
                }
              }
              {
# 2107
              d2 = suffix_file->deps;
              }
# 2107
              while ((unsigned int )d2 != (unsigned int )((struct dep *)0)) {
# 2109
                if ((unsigned int )d2->name == (unsigned int )((char *)0)) {
                  {
# 2109
                  tmp___32 = (d2->file)->name;
                  }
                } else {
                  {
# 2109
                  tmp___32 = d2->name;
                  }
                }
                {
# 2109
                tmp___33 = strlen((char const   *)tmp___32);
# 2109
                len = tmp___33;
                }
# 2110
                if ((unsigned int )d2->name == (unsigned int )((char *)0)) {
                  {
# 2110
                  tmp___34 = (d2->file)->name;
                  }
                } else {
                  {
# 2110
                  tmp___34 = d2->name;
                  }
                }
                {
# 2110
                tmp___35 = strncmp((char const   *)name,
                                   (char const   *)tmp___34, len);
                }
# 2110
                if (! (tmp___35 == 0)) {
                  goto __Cont___2;
                }
# 2112
                if ((unsigned int )d->name == (unsigned int )((char *)0)) {
                  {
# 2112
                  tmp___36 = (d->file)->name;
                  }
                } else {
                  {
# 2112
                  tmp___36 = d->name;
                  }
                }
# 2112
                if ((unsigned int )(name + len) == (unsigned int )tmp___36) {
                  {
# 2114
                  reject = 1;
                  }
# 2115
                  break;
                } else {
# 2112
                  if ((unsigned int )d->name == (unsigned int )((char *)0)) {
                    {
# 2112
                    tmp___37 = (d->file)->name;
                    }
                  } else {
                    {
# 2112
                    tmp___37 = d->name;
                    }
                  }
# 2112
                  if ((int )(*(name + len)) == (int )(*tmp___37)) {
# 2112
                    if ((int )(*(name + len)) == 0) {
                      {
# 2114
                      reject = 1;
                      }
# 2115
                      break;
                    } else {
# 2112
                      if ((unsigned int )d->name == (unsigned int )((char *)0)) {
                        {
# 2112
                        tmp___38 = (d->file)->name;
                        }
                      } else {
                        {
# 2112
                        tmp___38 = d->name;
                        }
                      }
                      {
# 2112
                      tmp___39 = strcmp((char const   *)((name + len) + 1),
                                        (char const   *)(tmp___38 + 1));
                      }
# 2112
                      if (! tmp___39) {
                        {
# 2114
                        reject = 1;
                        }
# 2115
                        break;
                      }
                    }
                  }
                }
                __Cont___2: 
                {
# 2107
                d2 = d2->next;
                }
              }
# 2118
              if (reject) {
# 2119
                break;
              }
              {
# 2099
              d = d->next;
              }
            }
# 2122
            if (! reject) {
              {
# 2123
              default_goal_file = f;
              }
            }
          }
        }
      }
    }
    __Cont: 
    {
# 1763
    filenames = nextf;
    }
  }
# 2127
  if (implicit) {
    {
# 2129
    (*(targets + target_idx)) = (char *)0;
# 2130
    (*(target_percents + target_idx)) = (char *)0;
# 2131
    create_pattern_rule(targets, target_percents, two_colon, deps, cmds, 1);
# 2132
    free((void *)((char *)target_percents));
    }
  }
# 2134
  return;
}
}
# 2142
char *find_char_unquote(char *string___0 , int stop1 , int stop2 , int blank ) 
{ unsigned int string_len ;
  register char *p ;
  int tmp ;
  int tmp___0 ;
  register int i ;

  {
  {
# 2149
  string_len = 0U;
# 2150
  p = string___0;
  }
# 2152
  while (1) {
# 2154
    if (stop2) {
# 2154
      if (blank) {
# 2155
        while (1) {
# 2155
          if ((int )(*p) != 0) {
# 2155
            if ((int )(*p) != stop1) {
# 2155
              if ((int )(*p) != stop2) {
                {
# 2155
                tmp = _get__ctype_b((int )((unsigned char )(*p)));
                }
# 2155
                if (tmp & 1) {
# 2155
                  break;
                }
              } else {
# 2155
                break;
              }
            } else {
# 2155
              break;
            }
          } else {
# 2155
            break;
          }
          {
# 2157
          p ++;
          }
        }
      } else {
        goto _L;
      }
    } else {
      _L: 
# 2158
      if (stop2) {
# 2159
        while (1) {
# 2159
          if ((int )(*p) != 0) {
# 2159
            if ((int )(*p) != stop1) {
# 2159
              if (! ((int )(*p) != stop2)) {
# 2159
                break;
              }
            } else {
# 2159
              break;
            }
          } else {
# 2159
            break;
          }
          {
# 2160
          p ++;
          }
        }
      } else {
# 2161
        if (blank) {
# 2162
          while (1) {
# 2162
            if ((int )(*p) != 0) {
# 2162
              if ((int )(*p) != stop1) {
                {
# 2162
                tmp___0 = _get__ctype_b((int )((unsigned char )(*p)));
                }
# 2162
                if (tmp___0 & 1) {
# 2162
                  break;
                }
              } else {
# 2162
                break;
              }
            } else {
# 2162
              break;
            }
            {
# 2164
            p ++;
            }
          }
        } else {
# 2166
          while (1) {
# 2166
            if ((int )(*p) != 0) {
# 2166
              if (! ((int )(*p) != stop1)) {
# 2166
                break;
              }
            } else {
# 2166
              break;
            }
            {
# 2167
            p ++;
            }
          }
        }
      }
    }
# 2169
    if ((int )(*p) == 0) {
# 2170
      break;
    }
# 2172
    if ((unsigned int )p > (unsigned int )string___0) {
# 2172
      if ((int )(*(p + -1)) == 92) {
        {
# 2175
        i = -2;
        }
# 2176
        while (1) {
# 2176
          if ((unsigned int )(p + i) >= (unsigned int )string___0) {
# 2176
            if (! ((int )(*(p + i)) == 92)) {
# 2176
              break;
            }
          } else {
# 2176
            break;
          }
          {
# 2177
          i --;
          }
        }
        {
# 2178
        i ++;
        }
# 2180
        if (string_len == 0U) {
          {
# 2181
          string_len = strlen((char const   *)string___0);
          }
        }
        {
# 2184
        memmove((void *)(p + i), (void const   *)(p + i / 2),
                ((string_len - (unsigned int )(p - string___0)) -
                 (unsigned int )(i / 2)) + 1U);
# 2185
        p += i / 2;
        }
# 2186
        if (i % 2 == 0) {
# 2189
          return (p);
        }
      } else {
# 2195
        return (p);
      }
    } else {
# 2195
      return (p);
    }
  }
# 2199
  return ((char *)0);
}
}
# 2204
char *find_percent(char *pattern ) 
{ char *tmp ;

  {
  {
# 2208
  tmp = find_char_unquote(pattern, (int )'%', 0, 0);
  }
# 2208
  return (tmp);
}
}
# 2224
struct nameseq *parse_file_seq(char **stringp , int stopchar ,
                               unsigned int size , int strip ) 
{ register struct nameseq *new ;
  register struct nameseq *new1 ;
  register struct nameseq *lastnew1 ;
  register char *p ;
  char *q ;
  char *name ;
  size_t tmp ;
  struct nameseq *n ;
  struct nameseq *lastn ;
  char *paren ;
  char *libname ;
  size_t tmp___2 ;
  char *tmp___3 ;

  {
  {
# 2231
  new = (struct nameseq *)0;
# 2233
  p = (*stringp);
  }
# 2243
  while (1) {
    {
# 2246
    p = next_token((char const   *)p);
    }
# 2247
    if ((int )(*p) == 0) {
# 2248
      break;
    }
# 2249
    if ((int )(*p) == stopchar) {
# 2250
      break;
    }
    {
# 2253
    q = p;
# 2254
    p = find_char_unquote(q, stopchar, 0, 1);
    }
# 2278
    if ((unsigned int )p == (unsigned int )((char *)0)) {
      {
# 2279
      tmp = strlen((char const   *)q);
# 2279
      p = q + tmp;
      }
    }
# 2281
    if (strip) {
# 2287
      while (1) {
# 2287
        if (p - q > 2) {
# 2287
          if ((int )(*(q + 0)) == 46) {
# 2287
            if (! ((int )(*(q + 1)) == 47)) {
# 2287
              break;
            }
          } else {
# 2287
            break;
          }
        } else {
# 2287
          break;
        }
        {
# 2290
        q += 2;
        }
# 2291
        while (1) {
# 2291
          if ((unsigned int )q < (unsigned int )p) {
# 2291
            if (! ((int )(*q) == 47)) {
# 2291
              break;
            }
          } else {
# 2291
            break;
          }
          {
# 2293
          q ++;
          }
        }
      }
    }
# 2298
    if ((unsigned int )q == (unsigned int )p) {
      {
# 2306
      name = savestring((char const   *)"./", 2U);
      }
    } else {
      {
# 2335
      name = savestring((char const   *)q, (unsigned int )(p - q));
      }
    }
    {
# 2339
    new1 = (struct nameseq *)xmalloc(size);
# 2340
    new1->name = name;
# 2341
    new1->next = new;
# 2342
    new = new1;
    }
  }
  {
# 2352
  new1 = new;
# 2353
  lastnew1 = (struct nameseq *)0;
  }
# 2354
  while ((unsigned int )new1 != (unsigned int )((struct nameseq *)0)) {
# 2355
    if ((int )(*(new1->name + 0)) != 40) {
      {
# 2355
      tmp___2 = strlen((char const   *)new1->name);
      }
# 2355
      if ((int )(*(new1->name + (tmp___2 - 1U))) == 41) {
        {
# 2355
        tmp___3 = strchr((char const   *)new1->name, (int )'(');
        }
# 2355
        if ((unsigned int )tmp___3 == (unsigned int )((char *)0)) {
          {
# 2362
          n = new1->next;
# 2362
          lastn = new1;
# 2363
          paren = (char *)0;
          }
# 2364
          while (1) {
# 2364
            if ((unsigned int )n != (unsigned int )((struct nameseq *)0)) {
              {
# 2364
              paren = strchr((char const   *)n->name, (int )'(');
              }
# 2364
              if (! ((unsigned int )paren == (unsigned int )((char *)0))) {
# 2364
                break;
              }
            } else {
# 2364
              break;
            }
            {
# 2366
            lastn = n;
# 2367
            n = n->next;
            }
          }
# 2369
          if ((unsigned int )n != (unsigned int )((struct nameseq *)0)) {
# 2369
            if ((int )(*(n->name + 0)) != 40) {
              {
# 2381
              paren ++;
# 2382
              libname = (char *)__builtin_alloca((paren - n->name) + 1);
# 2383
              memmove((void *)libname, (void const   *)n->name,
                      (unsigned int )(paren - n->name));
# 2384
              (*(libname + (paren - n->name))) = '\0';
              }
# 2386
              if ((int )(*paren) == 0) {
                {
# 2390
                lastn->next = n->next;
# 2391
                free((void *)n->name);
# 2392
                free((void *)((char *)n));
# 2394
                n = lastn->next;
                }
              } else {
                {
# 2399
                name = concat((char const   *)libname, (char const   *)paren,
                              (char const   *)")");
# 2400
                free((void *)n->name);
# 2401
                n->name = name;
                }
              }
# 2404
              if ((int )(*(new1->name + 1)) == 0) {
# 2408
                if ((unsigned int )lastnew1 ==
                    (unsigned int )((struct nameseq *)0)) {
                  {
# 2409
                  new = new1->next;
                  }
                } else {
                  {
# 2411
                  lastnew1->next = new1->next;
                  }
                }
                {
# 2412
                lastn = new1;
# 2413
                new1 = new1->next;
# 2414
                free((void *)lastn->name);
# 2415
                free((void *)((char *)lastn));
                }
              } else {
                {
# 2420
                name = concat((char const   *)libname,
                              (char const   *)new1->name, (char const   *)"");
# 2421
                free((void *)new1->name);
# 2422
                new1->name = name;
# 2423
                new1 = new1->next;
                }
              }
# 2430
              while ((unsigned int )new1 != (unsigned int )n) {
                {
# 2432
                name = concat((char const   *)libname,
                              (char const   *)new1->name, (char const   *)")");
# 2433
                free((void *)new1->name);
# 2434
                new1->name = name;
# 2435
                lastnew1 = new1;
# 2436
                new1 = new1->next;
                }
              }
            } else {
              {
# 2442
              lastnew1 = new1;
# 2443
              new1 = new1->next;
              }
            }
          } else {
            {
# 2442
            lastnew1 = new1;
# 2443
            new1 = new1->next;
            }
          }
        } else {
          {
# 2448
          lastnew1 = new1;
# 2449
          new1 = new1->next;
          }
        }
      } else {
        {
# 2448
        lastnew1 = new1;
# 2449
        new1 = new1->next;
        }
      }
    } else {
      {
# 2448
      lastnew1 = new1;
# 2449
      new1 = new1->next;
      }
    }
  }
  {
# 2454
  (*stringp) = p;
  }
# 2455
  return (new);
}
}
# 2471
static unsigned long readstring(struct ebuffer *ebuf ) 
{ char *p ;
  int backslash ;

  {
# 2478
  if ((unsigned int )ebuf->bufnext >
      (unsigned int )(ebuf->bufstart + ebuf->size)) {
# 2479
    return (4294967295UL);
  }
  {
# 2484
  ebuf->buffer = ebuf->bufnext;
# 2484
  p = ebuf->buffer;
  }
# 2486
  while (1) {
    {
# 2488
    backslash = 0;
    }
# 2491
    while (1) {
# 2491
      if ((int )(*p) != 10) {
# 2491
        if (! ((int )(*p) != 0)) {
# 2491
          break;
        }
      } else {
# 2491
        break;
      }
# 2492
      if ((int )(*p) == 92) {
        {
# 2493
        backslash = ! backslash != 0;
        }
      }
      {
# 2491
      p ++;
      }
    }
# 2497
    if ((int )(*p) == 0) {
# 2498
      break;
    } else {
# 2497
      if (! backslash) {
# 2498
        break;
      }
    }
  }
  {
# 2502
  (*p) = '\0';
# 2503
  ebuf->bufnext = p + 1;
  }
# 2505
  return (0UL);
}
}
# 2508
static long readline(struct ebuffer *ebuf ) 
{ char *p ;
  char *end ;
  char *start ;
  long nlines ;
  long tmp ;
  char *p2 ;
  unsigned long len ;
  int backslash ;
  char const   *tmp___0 ;
  unsigned long off ;
  char *tmp___1 ;
  char *tmp___2 ;
  int tmp___3 ;
  long tmp___5 ;

  {
  {
# 2515
  nlines = 0L;
  }
# 2520
  if (! ebuf->fp) {
    {
# 2521
    tmp = (long )readstring(ebuf);
    }
# 2521
    return (tmp);
  }
  {
# 2526
  start = ebuf->bufstart;
# 2526
  p = start;
# 2527
  end = p + ebuf->size;
# 2528
  (*p) = '\0';
  }
# 2530
  while (1) {
    {

    {
# 32 "spec.work"
    if (! ((ebuf->fp)->__BLAST_FLAG == 1)) {
# 34
      __error__();
    }
    {

    }
    }
# 2530 "read.c"
    tmp___2 = fgets((char */* __restrict  */)p, end - p,
                    (FILE */* __restrict  */)ebuf->fp);
    }
# 2530
    if (! ((unsigned int )tmp___2 != (unsigned int )((char *)0))) {
# 2530
      break;
    }
    {
# 2536
    len = (unsigned long )strlen((char const   *)p);
    }
# 2537
    if (len == 0UL) {
      {
# 2544
      tmp___0 = (char const   *)dcgettext((char const   *)((void *)0),
                                          (char const   *)"warning: NUL character seen; rest of line ignored",
                                          5);
# 2544
      error((struct floc  const  *)(& ebuf->floc), tmp___0);
# 2546
      (*(p + 0)) = '\n';
# 2547
      len = 1UL;
      }
    }
    {
# 2551
    p += len;
    }
# 2555
    if ((int )(*(p + -1)) != 10) {
      goto more_buffer;
    }
    {
# 2559
    nlines ++;
    }
# 2564
    if (p - start > 1) {
# 2564
      if ((int )(*(p + -2)) == 13) {
        {
# 2566
        p --;
# 2567
        (*(p + -1)) = '\n';
        }
      }
    }
    {
# 2571
    backslash = 0;
# 2572
    p2 = p - 2;
    }
# 2572
    while ((unsigned int )p2 >= (unsigned int )start) {
# 2574
      if ((int )(*p2) != 92) {
# 2575
        break;
      }
      {
# 2576
      backslash = ! backslash != 0;
# 2572
      p2 --;
      }
    }
# 2579
    if (! backslash) {
      {
# 2581
      (*(p + -1)) = '\0';
      }
# 2582
      break;
    }
# 2587
    if (end - p >= 80) {
# 2588
      continue;
    }
    more_buffer: 
    {
# 2594
    off = (unsigned long )(p - start);
# 2595
    ebuf->size *= 2U;
# 2596
    tmp___1 = xrealloc(start, ebuf->size);
# 2596
    ebuf->bufstart = tmp___1;
# 2596
    ebuf->buffer = ebuf->bufstart;
# 2596
    start = ebuf->buffer;
# 2598
    p = start + off;
# 2599
    end = start + ebuf->size;
# 2600
    (*p) = '\0';
    }
  }
  {
# 2604
  tmp___3 = ferror(ebuf->fp);
  }
# 2604
  if (tmp___3) {
    {
# 2605
    pfatal_with_name((char const   *)ebuf->floc.filenm);
    }
  }
# 2612
  if (nlines) {
    {
# 2612
    tmp___5 = nlines;
    }
  } else {
# 2612
    if ((unsigned int )p == (unsigned int )ebuf->bufstart) {
      {
# 2612
      tmp___5 = -1L;
      }
    } else {
      {
# 2612
      tmp___5 = 1L;
      }
    }
  }
# 2612
  return (tmp___5);
}
}
# 2633
static enum make_word_type get_next_mword(char *buffer , char *delim ,
                                          char **startp ,
                                          unsigned int *length___0 ) 
{ enum make_word_type wtype ;
  char *p ;
  char *beg ;
  char c ;
  int tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char closeparen ;
  int count ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;

  {
  {
# 2640
  wtype = 0;
# 2641
  p = buffer;
  }
# 2645
  while (1) {
    {
# 2645
    tmp = _get__ctype_b((int )((unsigned char )(*p)));
    }
# 2645
    if (! (tmp & 1)) {
# 2645
      break;
    }
    {
# 2646
    p ++;
    }
  }
  {
# 2648
  beg = p;
# 2649
  tmp___0 = p;
# 2649
  p ++;
# 2649
  c = (*tmp___0);
  }
# 2650
  switch ((int )c) {
  case 0: 
  {
# 2653
  wtype = 1;
  }
# 2654
  break;
  case 59: 
  {
# 2657
  wtype = 6;
  }
# 2658
  break;
  case 61: 
  {
# 2661
  wtype = 7;
  }
# 2662
  break;
  case 58: 
  {
# 2665
  wtype = 4;
  }
# 2666
  switch ((int )(*p)) {
  case 58: 
  {
# 2669
  p ++;
# 2670
  wtype = 5;
  }
# 2671
  break;
  case 61: 
  {
# 2674
  p ++;
# 2675
  wtype = 7;
  }
# 2676
  break;
  }
# 2678
  break;
  case 43: 
  {

  }
  case 63: 
  {

  }
# 2682
  if ((int )(*p) == 61) {
    {
# 2684
    p ++;
# 2685
    wtype = 7;
    }
# 2686
    break;
  }
  default: 
  {

  }
# 2690
  if (delim) {
    {
# 2690
    tmp___1 = strchr((char const   *)delim, (int )c);
    }
# 2690
    if (tmp___1) {
      {
# 2691
      wtype = 2;
      }
    }
  }
# 2692
  break;
  }
# 2696
  if (wtype != 0) {
    goto done;
  }
  {
# 2705
  wtype = 2;
  }
# 2708
  while (1) {
# 2713
    switch ((int )c) {
    case 0: 
    {

    }
    case 32: 
    {

    }
    case 9: 
    {

    }
    case 61: 
    {

    }
    goto done_word;
    case 58: 
    {

    }
    goto done_word;
    case 36: 
    {
# 2733
    tmp___2 = p;
# 2733
    p ++;
# 2733
    c = (*tmp___2);
    }
# 2734
    if ((int )c == 36) {
# 2735
      break;
    }
    {
# 2739
    wtype = 3;
    }
# 2741
    if ((int )c == 40) {
      {
# 2742
      closeparen = ')';
      }
    } else {
# 2743
      if ((int )c == 123) {
        {
# 2744
        closeparen = '}';
        }
      } else {
# 2747
        break;
      }
    }
    {
# 2749
    count = 0;
    }
# 2749
    while ((int )(*p) != 0) {
# 2751
      if ((int )(*p) == (int )c) {
        {
# 2752
        count ++;
        }
      } else {
# 2753
        if ((int )(*p) == (int )closeparen) {
          {
# 2753
          count --;
          }
# 2753
          if (count < 0) {
            {
# 2755
            p ++;
            }
# 2756
            break;
          }
        }
      }
      {
# 2749
      p ++;
      }
    }
# 2759
    break;
    case 63: 
    {

    }
    case 43: 
    {

    }
# 2763
    if ((int )(*p) == 61) {
      goto done_word;
    }
# 2765
    break;
    case 92: 
    {

    }
# 2768
    switch ((int )(*p)) {
    case 58: 
    {

    }
    case 59: 
    {

    }
    case 61: 
    {

    }
    case 92: 
    {
# 2774
    p ++;
    }
# 2775
    break;
    }
# 2777
    break;
    default: 
    {

    }
# 2780
    if (delim) {
      {
# 2780
      tmp___3 = strchr((char const   *)delim, (int )c);
      }
# 2780
      if (tmp___3) {
        goto done_word;
      }
    }
# 2782
    break;
    }
    {
# 2785
    tmp___4 = p;
# 2785
    p ++;
# 2785
    c = (*tmp___4);
    }
  }
  done_word: 
  {
# 2788
  p --;
  }
  done: 
# 2791
  if (startp) {
    {
# 2792
    (*startp) = beg;
    }
  }
# 2793
  if (length___0) {
    {
# 2794
    (*length___0) = (unsigned int )(p - beg);
    }
  }
# 2795
  return (wtype);
}
}
# 2801
void construct_include_path(char **arg_dirs ) 
{ register unsigned int i ;
  struct stat stbuf ;
  register unsigned int defsize ;
  register unsigned int max ;
  register char **dirs___0 ;
  char **tmp ;
  register unsigned int idx ;
  char *dir ;
  char **tmp___0 ;
  char *expanded ;
  char *tmp___1 ;
  unsigned int tmp___3 ;
  int tmp___4 ;
  unsigned int tmp___5 ;
  int tmp___6 ;
  unsigned int len ;
  unsigned int tmp___7 ;

  {
  {
# 2813
  defsize = sizeof(default_include_directories) /
            sizeof(default_include_directories[0]);
# 2815
  max = 5U;
# 2816
  tmp = (char **)xmalloc((5U + defsize) * sizeof(char *));
# 2816
  dirs___0 = tmp;
# 2817
  idx = 0U;
  }
# 2826
  if ((unsigned int )arg_dirs != (unsigned int )((char **)0)) {
# 2827
    while ((unsigned int )(*arg_dirs) != (unsigned int )((char *)0)) {
      {
# 2829
      tmp___0 = arg_dirs;
# 2829
      arg_dirs ++;
# 2829
      dir = (*tmp___0);
      }
# 2831
      if ((int )(*(dir + 0)) == 126) {
        {
# 2833
        tmp___1 = tilde_expand(dir);
# 2833
        expanded = tmp___1;
        }
# 2834
        if ((unsigned int )expanded != (unsigned int )((char *)0)) {
          {
# 2835
          dir = expanded;
          }
        }
      }
      {
# 2838
      tmp___4 = stat__extinline((char const   *)dir, & stbuf);
      }
# 2838
      if (tmp___4 == 0) {
# 2838
        if ((stbuf.st_mode & 61440U) == 16384U) {
# 2840
          if (idx == max - 1U) {
            {
# 2842
            max += 5U;
# 2843
            dirs___0 = (char **)xrealloc((char *)dirs___0, (max + defsize) *
                                                           sizeof(char *));
            }
          }
          {
# 2846
          tmp___3 = idx;
# 2846
          idx ++;
# 2846
          (*(dirs___0 + tmp___3)) = dir;
          }
        } else {
          goto _L;
        }
      } else {
        _L: 
# 2848
        if ((unsigned int )dir != (unsigned int )(*(arg_dirs + -1))) {
          {
# 2849
          free((void *)dir);
          }
        }
      }
    }
  }
  {
# 2870
  i = 0U;
  }
# 2870
  while ((unsigned int )default_include_directories[i] !=
         (unsigned int )((char *)0)) {
    {
# 2871
    tmp___6 = stat__extinline((char const   *)default_include_directories[i],
                              & stbuf);
    }
# 2871
    if (tmp___6 == 0) {
# 2871
      if ((stbuf.st_mode & 61440U) == 16384U) {
        {
# 2873
        tmp___5 = idx;
# 2873
        idx ++;
# 2873
        (*(dirs___0 + tmp___5)) = default_include_directories[i];
        }
      }
    }
    {
# 2870
    i ++;
    }
  }
  {
# 2875
  (*(dirs___0 + idx)) = (char *)0;
# 2879
  max_incl_len = 0U;
# 2880
  i = 0U;
  }
# 2880
  while (i < idx) {
    {
# 2882
    tmp___7 = strlen((char const   *)(*(dirs___0 + i)));
# 2882
    len = tmp___7;
    }
# 2884
    if ((int )(*((*(dirs___0 + i)) + (len - 1U))) == 47) {
      {
# 2887
      (*(dirs___0 + i)) = savestring((char const   *)(*(dirs___0 + i)), len - 1U);
      }
    }
# 2888
    if (len > max_incl_len) {
      {
# 2889
      max_incl_len = len;
      }
    }
    {
# 2880
    i ++;
    }
  }
  {
# 2892
  include_directories___0 = dirs___0;
  }
# 2893
  return;
}
}
# 2898
char *tilde_expand(char *name ) 
{ char *home_dir ;
  int is_variable ;
  int save ;
  char *logname ;
  char *tmp ;
  struct passwd *p ;
  struct passwd *tmp___0 ;
  char *new ;
  char *tmp___1 ;
  struct passwd *pwent ;
  char *userend ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;

  {
# 2903
  if ((int )(*(name + 1)) == 47) {
    goto _L___0;
  } else {
# 2903
    if ((int )(*(name + 1)) == 0) {
      _L___0: 
      {
# 2911
      save = warn_undefined_variables_flag;
# 2912
      warn_undefined_variables_flag = 0;
# 2914
      home_dir = allocated_variable_expand_for_file("$(HOME)", (struct file *)0);
# 2916
      warn_undefined_variables_flag = save;
# 2919
      is_variable = (int )(*(home_dir + 0)) != 0;
      }
# 2920
      if (! is_variable) {
        {
# 2922
        free((void *)home_dir);
# 2923
        home_dir = getenv((char const   *)"HOME");
        }
      }
# 2926
      if ((unsigned int )home_dir == (unsigned int )((char *)0)) {
        goto _L;
      } else {
# 2926
        if ((int )(*(home_dir + 0)) == 0) {
          _L: 
          {
# 2929
          tmp = getlogin();
# 2929
          logname = tmp;
# 2930
          home_dir = (char *)0;
          }
# 2931
          if ((unsigned int )logname != (unsigned int )((char *)0)) {
            {
# 2933
            tmp___0 = getpwnam((char const   *)logname);
# 2933
            p = tmp___0;
            }
# 2934
            if ((unsigned int )p != (unsigned int )((struct passwd *)0)) {
              {
# 2935
              home_dir = p->pw_dir;
              }
            }
          }
        }
      }
# 2939
      if ((unsigned int )home_dir != (unsigned int )((char *)0)) {
        {
# 2941
        tmp___1 = concat((char const   *)home_dir, (char const   *)"",
                         (char const   *)(name + 1));
# 2941
        new = tmp___1;
        }
# 2942
        if (is_variable) {
          {
# 2943
          free((void *)home_dir);
          }
        }
# 2944
        return (new);
      }
    } else {
      {
# 2951
      tmp___2 = strchr((char const   *)(name + 1), (int )'/');
# 2951
      userend = tmp___2;
      }
# 2952
      if ((unsigned int )userend != (unsigned int )((char *)0)) {
        {
# 2953
        (*userend) = '\0';
        }
      }
      {
# 2954
      pwent = getpwnam((char const   *)(name + 1));
      }
# 2955
      if ((unsigned int )pwent != (unsigned int )((struct passwd *)0)) {
# 2957
        if ((unsigned int )userend == (unsigned int )((char *)0)) {
          {
# 2958
          tmp___3 = xstrdup((char const   *)pwent->pw_dir);
          }
# 2958
          return (tmp___3);
        } else {
          {
# 2960
          tmp___4 = concat((char const   *)pwent->pw_dir, (char const   *)"/",
                           (char const   *)(userend + 1));
          }
# 2960
          return (tmp___4);
        }
      } else {
# 2962
        if ((unsigned int )userend != (unsigned int )((char *)0)) {
          {
# 2963
          (*userend) = '/';
          }
        }
      }
    }
  }
# 2967
  return ((char *)0);
}
}
# 2980
struct nameseq *multi_glob(struct nameseq *chain , unsigned int size ) 
{ register struct nameseq *new ;
  register struct nameseq *old ;
  struct nameseq *nexto ;
  glob_t gl ;
  char *memname ;
  char *newname ;
  char *tmp ;
  char *arname ;
  int tmp___0 ;
  int tmp___1 ;
  register int i ;
  struct nameseq *found ;
  struct nameseq *tmp___2 ;
  unsigned int alen ;
  unsigned int tmp___3 ;
  unsigned int mlen ;
  unsigned int tmp___4 ;
  struct nameseq *elt ;
  struct nameseq *tmp___5 ;
  char *tmp___6 ;
  struct nameseq *f ;
  struct nameseq *elt___0 ;
  struct nameseq *tmp___7 ;
  int tmp___8 ;
  char const   *tmp___9 ;

  {
  {
# 2986
  new = (struct nameseq *)0;
# 2991
  dir_setup_glob(& gl);
# 2993
  old = chain;
  }
# 2993
  while ((unsigned int )old != (unsigned int )((struct nameseq *)0)) {
    {
# 2999
    nexto = old->next;
    }
# 3001
    if ((int )(*(old->name + 0)) == 126) {
      {
# 3003
      tmp = tilde_expand(old->name);
# 3003
      newname = tmp;
      }
# 3004
      if ((unsigned int )newname != (unsigned int )((char *)0)) {
        {
# 3006
        free((void *)old->name);
# 3007
        old->name = newname;
        }
      }
    }
    {
# 3012
    tmp___0 = ar_name(old->name);
    }
# 3012
    if (tmp___0) {
      {
# 3020
      ar_parse_name(old->name, & arname, & memname);
# 3021
      free((void *)old->name);
# 3022
      old->name = arname;
      }
    } else {
      {
# 3025
      memname = (char *)0;
      }
    }
    {
# 3028
    tmp___1 = glob((char const   */* __restrict  */)((char const   *)old->name),
                   528, (int (*)(char const   * , int  ))((void *)0),
                   (glob_t */* __restrict  */)(& gl));
    }
# 3028
    switch (tmp___1) {
    case 0: 
    {
# 3032
    i = (int )gl.gl_pathc;
    }
# 3033
    while (1) {
      {
# 3033
      tmp___8 = i;
# 3033
      i --;
      }
# 3033
      if (! (tmp___8 > 0)) {
# 3033
        break;
      }
# 3036
      if ((unsigned int )memname != (unsigned int )((char *)0)) {
        {
# 3039
        tmp___2 = ar_glob((*(gl.gl_pathv + i)), memname, size);
# 3039
        found = tmp___2;
        }
# 3041
        if ((unsigned int )found == (unsigned int )((struct nameseq *)0)) {
          {
# 3044
          tmp___3 = strlen((char const   *)(*(gl.gl_pathv + i)));
# 3044
          alen = tmp___3;
# 3045
          tmp___4 = strlen((char const   *)memname);
# 3045
          mlen = tmp___4;
# 3046
          tmp___5 = (struct nameseq *)xmalloc(size);
# 3046
          elt = tmp___5;
          }
# 3048
          if (size > sizeof(struct nameseq )) {
            {
# 3049
            memset((void *)((char *)elt + sizeof(struct nameseq )), 0,
                   size - sizeof(struct nameseq ));
            }
          }
          {
# 3051
          tmp___6 = xmalloc(((alen + 1U) + mlen) + 2U);
# 3051
          elt->name = tmp___6;
# 3052
          memmove((void *)elt->name, (void const   *)(*(gl.gl_pathv + i)), alen);
# 3053
          (*(elt->name + alen)) = '(';
# 3054
          memmove((void *)(elt->name + (alen + 1U)), (void const   *)memname,
                  mlen);
# 3055
          (*(elt->name + ((alen + 1U) + mlen))) = ')';
# 3056
          (*(elt->name + (((alen + 1U) + mlen) + 1U))) = '\0';
# 3057
          elt->next = new;
# 3058
          new = elt;
          }
        } else {
          {
# 3063
          f = found;
          }
# 3064
          while ((unsigned int )f->next != (unsigned int )((struct nameseq *)0)) {
            {
# 3065
            f = f->next;
            }
          }
          {
# 3069
          f->next = new;
# 3070
          new = found;
          }
        }
        {
# 3073
        free((void *)memname);
        }
      } else {
        {
# 3078
        tmp___7 = (struct nameseq *)xmalloc(size);
# 3078
        elt___0 = tmp___7;
        }
# 3079
        if (size > sizeof(struct nameseq )) {
          {
# 3080
          memset((void *)((char *)elt___0 + sizeof(struct nameseq )), 0,
                 size - sizeof(struct nameseq ));
          }
        }
        {
# 3082
        elt___0->name = xstrdup((char const   *)(*(gl.gl_pathv + i)));
# 3083
        elt___0->next = new;
# 3084
        new = elt___0;
        }
      }
    }
    {
# 3087
    globfree(& gl);
# 3088
    free((void *)old->name);
# 3089
    free((void *)((char *)old));
    }
# 3090
    break;
    case 1: 
    {
# 3094
    tmp___9 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"virtual memory exhausted",
                                        5);
# 3094
    fatal((struct floc  const  *)((struct floc *)0), tmp___9);
    }
# 3095
    break;
    default: 
    {
# 3098
    old->next = new;
# 3099
    new = old;
    }
# 3100
    break;
    }
    {
# 2993
    old = nexto;
    }
  }
# 3104
  return (new);
}
}
# 60 "remake.c"
unsigned int commands_started   = 0U;
# 63
static unsigned int considered  ;
# 65
static int update_file(struct file *file , unsigned int depth ) ;
# 66
static int update_file_1(struct file *file , unsigned int depth ) ;
# 67
static int check_dep(struct file *file , unsigned int depth ,
                     uintmax_t this_mtime , int *must_make_ptr ) ;
# 68
static int touch_file(struct file *file ) ;
# 69
static void remake_file(struct file *file ) ;
# 70
static uintmax_t name_mtime(char *name ) ;
# 71
static int library_search(char **lib , uintmax_t *mtime_ptr ) ;
# 81
int update_goal_chain(struct dep *goals___0 , int makefiles___0 ) 
{ int t ;
  int q ;
  int n ;
  unsigned int j ;
  int status ;
  struct dep *g ;
  register struct dep *g___0 ;
  register struct dep *lastgoal___0 ;
  struct file *file ;
  int stop ;
  int any_not_updated ;
  unsigned int ocommands_started ;
  int x ;
  int tmp ;
  int tmp___0 ;
  uintmax_t mtime ;
  uintmax_t tmp___5 ;
  char *tmp___10 ;

  {
  {
# 86
  t = touch_flag;
# 86
  q = question_flag;
# 86
  n = just_print_flag;
# 87
  j = job_slots;
# 88
  status = -1;
# 95
  goals___0 = copy_dep_chain(goals___0);
# 104
  g = goals___0;
  }
# 104
  while ((unsigned int )g != (unsigned int )((struct dep *)0)) {
    {
# 105
    g->changed = 0U;
# 104
    g = g->next;
    }
  }
  {
# 109
  considered = 1U;
  }
# 113
  while ((unsigned int )goals___0 != (unsigned int )((struct dep *)0)) {
    {
# 119
    start_waiting_jobs();
# 123
    reap_children(1, 0);
# 125
    lastgoal___0 = (struct dep *)0;
# 126
    g___0 = goals___0;
    }
# 127
    while ((unsigned int )g___0 != (unsigned int )((struct dep *)0)) {
      {
# 131
      stop = 0;
# 131
      any_not_updated = 0;
      }
# 133
      if ((g___0->file)->double_colon) {
        {
# 133
        file = (g___0->file)->double_colon;
        }
      } else {
        {
# 133
        file = g___0->file;
        }
      }
# 133
      while ((unsigned int )file != (unsigned int )((void *)0)) {
# 139
        while ((unsigned int )file->renamed != (unsigned int )((struct file *)0)) {
          {
# 139
          file = file->renamed;
          }
        }
# 140
        if (makefiles___0) {
# 142
          if (file->cmd_target) {
            {
# 144
            touch_flag = t;
# 145
            question_flag = q;
# 146
            just_print_flag = n;
            }
          } else {
            {
# 149
            just_print_flag = 0;
# 149
            question_flag = just_print_flag;
# 149
            touch_flag = question_flag;
            }
          }
        }
        {
# 155
        ocommands_started = commands_started;
        }
# 157
        if (makefiles___0) {
          {
# 157
          tmp = 1;
          }
        } else {
          {
# 157
          tmp = 0;
          }
        }
        {
# 157
        x = update_file(file, (unsigned int )tmp);
        }
# 158
        while ((unsigned int )file->renamed != (unsigned int )((struct file *)0)) {
          {
# 158
          file = file->renamed;
          }
        }
        {
# 163
        g___0->changed = g___0->changed + (commands_started - ocommands_started);
# 169
        stop = 0;
        }
# 170
        if (x != 0) {
          goto _L;
        } else {
# 170
          if (file->updated) {
            _L: 
# 170
            if (status < 1) {
# 172
              if ((int )file->update_status != 0) {
                {
# 176
                status = (int )file->update_status;
                }
# 180
                if (keep_going_flag) {
                  {
# 180
                  tmp___0 = 0;
                  }
                } else {
# 180
                  if (question_flag) {
                    {
# 180
                    tmp___0 = 0;
                    }
                  } else {
# 180
                    if (makefiles___0) {
                      {
# 180
                      tmp___0 = 0;
                      }
                    } else {
                      {
# 180
                      tmp___0 = 1;
                      }
                    }
                  }
                }
                {
# 180
                stop = tmp___0;
                }
              } else {
# 185
                if (makefiles___0) {
# 185
                  if (file->last_mtime == 0ULL) {
                    {
# 185
                    tmp___5 = f_mtime(file, 0);
                    }
                  } else {
                    {
# 185
                    tmp___5 = file->last_mtime;
                    }
                  }
                } else {
# 185
                  if (file->last_mtime == 0ULL) {
                    {
# 185
                    tmp___5 = f_mtime(file, 1);
                    }
                  } else {
                    {
# 185
                    tmp___5 = file->last_mtime;
                    }
                  }
                }
                {
# 185
                mtime = tmp___5;
                }
# 186
                while ((unsigned int )file->renamed !=
                       (unsigned int )((struct file *)0)) {
                  {
# 186
                  file = file->renamed;
                  }
                }
# 188
                if (file->updated) {
# 188
                  if (g___0->changed) {
# 188
                    if (mtime != file->mtime_before_update) {
# 197
                      if (makefiles___0) {
# 197
                        if (! just_print_flag) {
# 197
                          if (! question_flag) {
                            {
# 199
                            status = 0;
                            }
                          }
                        }
                      } else {
                        {
# 199
                        status = 0;
                        }
                      }
# 200
                      if (makefiles___0) {
# 200
                        if (file->dontcare) {
                          {
# 202
                          stop = 1;
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
        {
# 209
        any_not_updated |= ! file->updated != 0;
        }
# 211
        if (stop) {
# 212
          break;
        }
        {
# 133
        file = file->prev;
        }
      }
      {
# 216
      file = g___0->file;
      }
# 218
      if (stop) {
        goto _L___0;
      } else {
# 218
        if (any_not_updated) {
          {
# 251
          lastgoal___0 = g___0;
# 252
          g___0 = g___0->next;
          }
        } else {
          _L___0: 
# 223
          if (! makefiles___0) {
# 223
            if ((int )file->update_status == 0) {
# 223
              if (! g___0->changed) {
# 223
                if (! silent_flag) {
# 223
                  if (! question_flag) {
# 230
                    if (file->phony) {
                      {
# 230
                      tmp___10 = dcgettext((char const   *)((void *)0),
                                           (char const   *)"Nothing to be done for `%s\'.",
                                           5);
                      }
                    } else {
# 230
                      if ((unsigned int )file->cmds ==
                          (unsigned int )((struct commands *)0)) {
                        {
# 230
                        tmp___10 = dcgettext((char const   *)((void *)0),
                                             (char const   *)"Nothing to be done for `%s\'.",
                                             5);
                        }
                      } else {
                        {
# 230
                        tmp___10 = dcgettext((char const   *)((void *)0),
                                             (char const   *)"`%s\' is up to date.",
                                             5);
                        }
                      }
                    }
                    {
# 230
                    message(1, (char const   *)tmp___10, file->name);
                    }
                  }
                }
              }
            }
          }
# 236
          if ((unsigned int )lastgoal___0 == (unsigned int )((struct dep *)0)) {
            {
# 237
            goals___0 = g___0->next;
            }
          } else {
            {
# 239
            lastgoal___0->next = g___0->next;
            }
          }
          {
# 242
          free((void *)((char *)g___0));
          }
# 244
          if ((unsigned int )lastgoal___0 == (unsigned int )((struct dep *)0)) {
            {
# 244
            g___0 = goals___0;
            }
          } else {
            {
# 244
            g___0 = lastgoal___0->next;
            }
          }
# 246
          if (stop) {
# 247
            break;
          }
        }
      }
    }
# 258
    if ((unsigned int )g___0 == (unsigned int )((struct dep *)0)) {
      {
# 259
      considered = (unsigned int )(! considered != 0);
      }
    }
  }
# 262
  if (makefiles___0) {
    {
# 264
    touch_flag = t;
# 265
    question_flag = q;
# 266
    just_print_flag = n;
# 267
    job_slots = j;
    }
  }
# 269
  return (status);
}
}
# 284
static int update_file(struct file *file , unsigned int depth ) 
{ register int status ;
  register struct file *f ;
  char const   * __restrict  tmp ;
  FILE *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  struct dep *d ;
  int tmp___3 ;

  {
  {
# 289
  status = 0;
  }
# 292
  if (file->double_colon) {
    {
# 292
    f = file->double_colon;
    }
  } else {
    {
# 292
    f = file;
    }
  }
# 298
  if (f->considered == considered) {
# 300
    while (1) {
# 300
      if (2 & db_level) {
        {
# 300
        print_spaces(depth);
# 300
        tmp = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                         (char const   *)"Pruning file `%s\'.\n",
                                                         5);
# 300
        printf(tmp, file->name);
# 300
        tmp___0 = get_stdout();
        {
# 105 "spec.work"
        tmp___0->__BLAST_FLAG = 1;
        {

        }
        }
# 300 "remake.c"
        fflush(tmp___0);
        }
      }
# 300
      break;
    }
# 301
    if (f->command_state == 3) {
      {
# 301
      tmp___1 = (int )f->update_status;
      }
    } else {
      {
# 301
      tmp___1 = 0;
      }
    }
# 301
    return (tmp___1);
  }
# 306
  while ((unsigned int )f != (unsigned int )((struct file *)0)) {
    {
# 308
    f->considered = considered;
# 310
    tmp___2 = update_file_1(f, depth);
# 310
    status |= tmp___2;
    }
# 311
    while ((unsigned int )f->renamed != (unsigned int )((struct file *)0)) {
      {
# 311
      f = f->renamed;
      }
    }
# 313
    if (status != 0) {
# 313
      if (! keep_going_flag) {
# 314
        break;
      }
    }
# 316
    if (f->command_state == 2) {
      {
# 321
      status = 0;
      }
# 322
      break;
    } else {
# 316
      if (f->command_state == 1) {
        {
# 321
        status = 0;
        }
# 322
        break;
      }
    }
    {
# 306
    f = f->prev;
    }
  }
# 328
  while ((unsigned int )f != (unsigned int )((struct file *)0)) {
    {
# 332
    f->considered = considered;
# 334
    d = f->deps;
    }
# 334
    while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
      {
# 335
      tmp___3 = update_file(d->file, depth + 1U);
# 335
      status |= tmp___3;
# 334
      d = d->next;
      }
    }
    {
# 328
    f = f->prev;
    }
  }
# 338
  return (status);
}
}
# 343
static int update_file_1(struct file *file , unsigned int depth ) 
{ register uintmax_t this_mtime ;
  int noexist ;
  int must_make ;
  int deps_changed ;
  int dep_status ;
  register struct dep *d ;
  register struct dep *lastd ;
  int running ;
  char const   * __restrict  tmp ;
  FILE *tmp___0 ;
  char const   * __restrict  tmp___1 ;
  FILE *tmp___2 ;
  char const   * __restrict  tmp___3 ;
  FILE *tmp___4 ;
  char const   * __restrict  tmp___5 ;
  FILE *tmp___6 ;
  char const   * __restrict  tmp___7 ;
  FILE *tmp___8 ;
  struct file *tmp___9 ;
  char const   * __restrict  tmp___11 ;
  FILE *tmp___12 ;
  int ns ;
  char const   *tmp___13 ;
  char const   * __restrict  tmp___14 ;
  FILE *tmp___15 ;
  char const   * __restrict  tmp___16 ;
  FILE *tmp___17 ;
  int tmp___18 ;
  char const   * __restrict  tmp___19 ;
  FILE *tmp___20 ;
  uintmax_t mtime ;
  int maybe_make ;
  char const   *tmp___22 ;
  struct file *tmp___23 ;
  int tmp___24 ;
  register struct file *f ;
  int tmp___25 ;
  uintmax_t tmp___27 ;
  uintmax_t mtime___0 ;
  uintmax_t tmp___29 ;
  int tmp___30 ;
  register struct file *f___0 ;
  int tmp___31 ;
  uintmax_t tmp___33 ;
  int tmp___34 ;
  struct file *tmp___35 ;
  char const   * __restrict  tmp___36 ;
  FILE *tmp___37 ;
  char const   * __restrict  tmp___38 ;
  FILE *tmp___39 ;
  char const   * __restrict  tmp___40 ;
  FILE *tmp___41 ;
  char const   *tmp___42 ;
  uintmax_t d_mtime ;
  uintmax_t tmp___44 ;
  int tmp___45 ;
  char const   *fmt ;
  char *tmp___46 ;
  FILE *tmp___47 ;
  char const   * __restrict  tmp___48 ;
  FILE *tmp___49 ;
  char const   * __restrict  tmp___50 ;
  FILE *tmp___51 ;
  char const   * __restrict  tmp___52 ;
  FILE *tmp___53 ;
  char const   * __restrict  tmp___54 ;
  char const   * __restrict  tmp___55 ;
  int tmp___56 ;
  FILE *tmp___57 ;
  char const   * __restrict  tmp___58 ;
  FILE *tmp___59 ;
  char const   * __restrict  tmp___60 ;
  FILE *tmp___61 ;
  int tmp___62 ;
  char const   * __restrict  tmp___63 ;
  FILE *tmp___64 ;
  char const   * __restrict  tmp___65 ;
  FILE *tmp___66 ;
  char const   * __restrict  tmp___67 ;
  FILE *tmp___68 ;
  char const   * __restrict  tmp___69 ;
  FILE *tmp___70 ;

  {
  {
# 350
  dep_status = 0;
# 352
  running = 0;
  }
# 354
  while (1) {
# 354
    if (2 & db_level) {
      {
# 354
      print_spaces(depth);
# 354
      tmp = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                       (char const   *)"Considering target file `%s\'.\n",
                                                       5);
# 354
      printf(tmp, file->name);
# 354
      tmp___0 = get_stdout();
      {
# 105 "spec.work"
      tmp___0->__BLAST_FLAG = 1;
      {

      }
      }
# 354 "remake.c"
      fflush(tmp___0);
      }
    }
# 354
    break;
  }
# 356
  if (file->updated) {
# 358
    if ((int )file->update_status > 0) {
# 360
      while (1) {
# 360
        if (2 & db_level) {
          {
# 360
          print_spaces(depth);
# 360
          tmp___1 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                               (char const   *)"Recently tried and failed to update file `%s\'.\n",
                                                               5);
# 360
          printf(tmp___1, file->name);
# 360
          tmp___2 = get_stdout();
          {
# 105 "spec.work"
          tmp___2->__BLAST_FLAG = 1;
          {

          }
          }
# 360 "remake.c"
          fflush(tmp___2);
          }
        }
# 360
        break;
      }
# 362
      return ((int )file->update_status);
    }
# 365
    while (1) {
# 365
      if (2 & db_level) {
        {
# 365
        print_spaces(depth);
# 365
        tmp___3 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                             (char const   *)"File `%s\' was considered already.\n",
                                                             5);
# 365
        printf(tmp___3, file->name);
# 365
        tmp___4 = get_stdout();
        {
# 105 "spec.work"
        tmp___4->__BLAST_FLAG = 1;
        {

        }
        }
# 365 "remake.c"
        fflush(tmp___4);
        }
      }
# 365
      break;
    }
# 366
    return (0);
  }
# 369
  switch (file->command_state) {
  case 0: 
  {

  }
  case 1: 
  {

  }
# 373
  break;
  case 2: 
  {

  }
# 375
  while (1) {
# 375
    if (2 & db_level) {
      {
# 375
      print_spaces(depth);
# 375
      tmp___5 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                           (char const   *)"Still updating file `%s\'.\n",
                                                           5);
# 375
      printf(tmp___5, file->name);
# 375
      tmp___6 = get_stdout();
      {
# 105 "spec.work"
      tmp___6->__BLAST_FLAG = 1;
      {

      }
      }
# 375 "remake.c"
      fflush(tmp___6);
      }
    }
# 375
    break;
  }
# 376
  return (0);
  case 3: 
  {

  }
# 378
  while (1) {
# 378
    if (2 & db_level) {
      {
# 378
      print_spaces(depth);
# 378
      tmp___7 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                           (char const   *)"Finished updating file `%s\'.\n",
                                                           5);
# 378
      printf(tmp___7, file->name);
# 378
      tmp___8 = get_stdout();
      {
# 105 "spec.work"
      tmp___8->__BLAST_FLAG = 1;
      {

      }
      }
# 378 "remake.c"
      fflush(tmp___8);
      }
    }
# 378
    break;
  }
# 379
  return ((int )file->update_status);
  default: 
  {
# 381
  abort();
  }
  }
  {
# 384
  depth ++;
  }
# 387
  if (file->double_colon) {
    {
# 387
    tmp___9 = file->double_colon;
    }
  } else {
    {
# 387
    tmp___9 = file;
    }
  }
  {
# 387
  tmp___9->updating = 1U;
  }
# 395
  if (file->last_mtime == 0ULL) {
    {
# 395
    this_mtime = f_mtime(file, 1);
    }
  } else {
    {
# 395
    this_mtime = file->last_mtime;
    }
  }
# 396
  while ((unsigned int )file->renamed != (unsigned int )((struct file *)0)) {
    {
# 396
    file = file->renamed;
    }
  }
  {
# 397
  noexist = this_mtime == 1ULL;
  }
# 398
  if (noexist) {
# 399
    while (1) {
# 399
      if (1 & db_level) {
        {
# 399
        print_spaces(depth);
# 399
        tmp___11 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                              (char const   *)"File `%s\' does not exist.\n",
                                                              5);
# 399
        printf(tmp___11, file->name);
# 399
        tmp___12 = get_stdout();
        {
# 105 "spec.work"
        tmp___12->__BLAST_FLAG = 1;
        {

        }
        }
# 399 "remake.c"
        fflush(tmp___12);
        }
      }
# 399
      break;
    }
  } else {
# 400
    if (3ULL <= this_mtime) {
# 400
      if (this_mtime <= 0xfffffffffb9aca02ULL) {
# 400
        if (file->low_resolution_time) {
          {
# 404
          ns = (int )((this_mtime - 3ULL) & 1073741823ULL);
          }
# 405
          if (ns != 0) {
            {
# 406
            tmp___13 = (char const   *)dcgettext((char const   *)((void *)0),
                                                 (char const   *)"*** Warning: .LOW_RESOLUTION_TIME file `%s\' has a high resolution time stamp",
                                                 5);
# 406
            error((struct floc  const  *)((struct floc *)0), tmp___13,
                  file->name);
            }
          }
          {
# 408
          this_mtime += (unsigned long long )(999999999 - ns);
          }
        }
      }
    }
  }
  {
# 411
  must_make = noexist;
  }
# 416
  if (! file->phony) {
# 416
    if ((unsigned int )file->cmds == (unsigned int )((struct commands *)0)) {
# 416
      if (! file->tried_implicit) {
        {
# 418
        tmp___18 = try_implicit_rule(file, depth);
        }
# 418
        if (tmp___18) {
# 419
          while (1) {
# 419
            if (8 & db_level) {
              {
# 419
              print_spaces(depth);
# 419
              tmp___14 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                    (char const   *)"Found an implicit rule for `%s\'.\n",
                                                                    5);
# 419
              printf(tmp___14, file->name);
# 419
              tmp___15 = get_stdout();
              {
# 105 "spec.work"
              tmp___15->__BLAST_FLAG = 1;
              {

              }
              }
# 419 "remake.c"
              fflush(tmp___15);
              }
            }
# 419
            break;
          }
        } else {
# 421
          while (1) {
# 421
            if (8 & db_level) {
              {
# 421
              print_spaces(depth);
# 421
              tmp___16 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                    (char const   *)"No implicit rule found for `%s\'.\n",
                                                                    5);
# 421
              printf(tmp___16, file->name);
# 421
              tmp___17 = get_stdout();
              {
# 105 "spec.work"
              tmp___17->__BLAST_FLAG = 1;
              {

              }
              }
# 421 "remake.c"
              fflush(tmp___17);
              }
            }
# 421
            break;
          }
        }
        {
# 422
        file->tried_implicit = 1U;
        }
      }
    }
  }
# 424
  if ((unsigned int )file->cmds == (unsigned int )((struct commands *)0)) {
# 424
    if (! file->is_target) {
# 424
      if ((unsigned int )default_file != (unsigned int )((struct file *)0)) {
# 424
        if ((unsigned int )default_file->cmds !=
            (unsigned int )((struct commands *)0)) {
# 427
          while (1) {
# 427
            if (8 & db_level) {
              {
# 427
              print_spaces(depth);
# 427
              tmp___19 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                    (char const   *)"Using default commands for `%s\'.\n",
                                                                    5);
# 427
              printf(tmp___19, file->name);
# 427
              tmp___20 = get_stdout();
              {
# 105 "spec.work"
              tmp___20->__BLAST_FLAG = 1;
              {

              }
              }
# 427 "remake.c"
              fflush(tmp___20);
              }
            }
# 427
            break;
          }
          {
# 428
          file->cmds = default_file->cmds;
          }
        }
      }
    }
  }
  {
# 434
  lastd = (struct dep *)0;
# 435
  d = file->deps;
  }
# 436
  while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
# 441
    while ((unsigned int )(d->file)->renamed !=
           (unsigned int )((struct file *)0)) {
      {
# 441
      d->file = (d->file)->renamed;
      }
    }
# 443
    if ((d->file)->last_mtime == 0ULL) {
      {
# 443
      mtime = f_mtime(d->file, 1);
      }
    } else {
      {
# 443
      mtime = (d->file)->last_mtime;
      }
    }
# 444
    while ((unsigned int )(d->file)->renamed !=
           (unsigned int )((struct file *)0)) {
      {
# 444
      d->file = (d->file)->renamed;
      }
    }
# 446
    if ((d->file)->double_colon) {
      {
# 446
      tmp___23 = (d->file)->double_colon;
      }
    } else {
      {
# 446
      tmp___23 = d->file;
      }
    }
# 446
    if (tmp___23->updating) {
      {
# 448
      tmp___22 = (char const   *)dcgettext((char const   *)((void *)0),
                                           (char const   *)"Circular %s <- %s dependency dropped.",
                                           5);
# 448
      error((struct floc  const  *)((struct floc *)0), tmp___22, file->name,
            (d->file)->name);
      }
# 453
      if ((unsigned int )lastd == (unsigned int )((struct dep *)0)) {
        {
# 454
        file->deps = d->next;
        }
      } else {
        {
# 456
        lastd->next = d->next;
        }
      }
      {
# 457
      d = d->next;
      }
# 458
      continue;
    }
    {
# 461
    (d->file)->parent = file;
# 462
    maybe_make = must_make;
# 463
    tmp___24 = check_dep(d->file, depth, this_mtime, & maybe_make);
# 463
    dep_status |= tmp___24;
    }
# 464
    if (! d->ignore_mtime) {
      {
# 465
      must_make = maybe_make;
      }
    }
# 467
    while ((unsigned int )(d->file)->renamed !=
           (unsigned int )((struct file *)0)) {
      {
# 467
      d->file = (d->file)->renamed;
      }
    }
    {
# 470
    f = d->file;
    }
# 471
    if (f->double_colon) {
      {
# 472
      f = f->double_colon;
      }
    }
# 473
    while (1) {
# 475
      if (f->command_state == 2) {
        {
# 475
        tmp___25 = 1;
        }
      } else {
# 475
        if (f->command_state == 1) {
          {
# 475
          tmp___25 = 1;
          }
        } else {
          {
# 475
          tmp___25 = 0;
          }
        }
      }
      {
# 475
      running |= tmp___25;
# 477
      f = f->prev;
      }
# 473
      if (! ((unsigned int )f != (unsigned int )((struct file *)0))) {
# 473
        break;
      }
    }
# 482
    if (dep_status != 0) {
# 482
      if (! keep_going_flag) {
# 483
        break;
      }
    }
# 485
    if (! running) {
# 486
      if ((d->file)->last_mtime == 0ULL) {
        {
# 486
        tmp___27 = f_mtime(d->file, 1);
        }
      } else {
        {
# 486
        tmp___27 = (d->file)->last_mtime;
        }
      }
      {
# 486
      d->changed = (unsigned int )(tmp___27 != mtime);
      }
    }
    {
# 488
    lastd = d;
# 489
    d = d->next;
    }
  }
# 495
  if (must_make) {
    goto _L___0;
  } else {
# 495
    if (always_make_flag) {
      _L___0: 
      {
# 497
      d = file->deps;
      }
# 497
      while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
# 498
        if ((d->file)->intermediate) {
# 500
          if ((d->file)->last_mtime == 0ULL) {
            {
# 500
            tmp___29 = f_mtime(d->file, 1);
            }
          } else {
            {
# 500
            tmp___29 = (d->file)->last_mtime;
            }
          }
          {
# 500
          mtime___0 = tmp___29;
          }
# 501
          while ((unsigned int )(d->file)->renamed !=
                 (unsigned int )((struct file *)0)) {
            {
# 501
            d->file = (d->file)->renamed;
            }
          }
          {
# 502
          (d->file)->parent = file;
# 503
          tmp___30 = update_file(d->file, depth);
# 503
          dep_status |= tmp___30;
          }
# 504
          while ((unsigned int )(d->file)->renamed !=
                 (unsigned int )((struct file *)0)) {
            {
# 504
            d->file = (d->file)->renamed;
            }
          }
          {
# 507
          f___0 = d->file;
          }
# 508
          if (f___0->double_colon) {
            {
# 509
            f___0 = f___0->double_colon;
            }
          }
# 510
          while (1) {
# 512
            if (f___0->command_state == 2) {
              {
# 512
              tmp___31 = 1;
              }
            } else {
# 512
              if (f___0->command_state == 1) {
                {
# 512
                tmp___31 = 1;
                }
              } else {
                {
# 512
                tmp___31 = 0;
                }
              }
            }
            {
# 512
            running |= tmp___31;
# 514
            f___0 = f___0->prev;
            }
# 510
            if (! ((unsigned int )f___0 != (unsigned int )((struct file *)0))) {
# 510
              break;
            }
          }
# 519
          if (dep_status != 0) {
# 519
            if (! keep_going_flag) {
# 520
              break;
            }
          }
# 522
          if (! running) {
# 523
            if (file->phony) {
# 523
              if ((unsigned int )file->cmds !=
                  (unsigned int )((struct commands *)0)) {
                {
# 523
                tmp___34 = 1;
                }
              } else {
                goto _L;
              }
            } else {
              _L: 
# 523
              if ((d->file)->last_mtime == 0ULL) {
                {
# 523
                tmp___33 = f_mtime(d->file, 1);
                }
              } else {
                {
# 523
                tmp___33 = (d->file)->last_mtime;
                }
              }
# 523
              if (tmp___33 != mtime___0) {
                {
# 523
                tmp___34 = 1;
                }
              } else {
                {
# 523
                tmp___34 = 0;
                }
              }
            }
            {
# 523
            d->changed = (unsigned int )tmp___34;
            }
          }
        }
        {
# 497
        d = d->next;
        }
      }
    }
  }
# 528
  if (file->double_colon) {
    {
# 528
    tmp___35 = file->double_colon;
    }
  } else {
    {
# 528
    tmp___35 = file;
    }
  }
  {
# 528
  tmp___35->updating = 0U;
  }
# 530
  while (1) {
# 530
    if (2 & db_level) {
      {
# 530
      print_spaces(depth);
# 530
      tmp___36 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                            (char const   *)"Finished prerequisites of target file `%s\'.\n",
                                                            5);
# 530
      printf(tmp___36, file->name);
# 530
      tmp___37 = get_stdout();
      {
# 105 "spec.work"
      tmp___37->__BLAST_FLAG = 1;
      {

      }
      }
# 530 "remake.c"
      fflush(tmp___37);
      }
    }
# 530
    break;
  }
# 532
  if (running) {
    {
# 534
    set_command_state(file, 1);
# 535
    depth --;
    }
# 536
    while (1) {
# 536
      if (2 & db_level) {
        {
# 536
        print_spaces(depth);
# 536
        tmp___38 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                              (char const   *)"The prerequisites of `%s\' are being made.\n",
                                                              5);
# 536
        printf(tmp___38, file->name);
# 536
        tmp___39 = get_stdout();
        {
# 105 "spec.work"
        tmp___39->__BLAST_FLAG = 1;
        {

        }
        }
# 536 "remake.c"
        fflush(tmp___39);
        }
      }
# 536
      break;
    }
# 537
    return (0);
  }
# 542
  if (dep_status != 0) {
    {
# 544
    file->update_status = (short )dep_status;
# 545
    notice_finished_file(file);
# 547
    depth --;
    }
# 549
    while (1) {
# 549
      if (2 & db_level) {
        {
# 549
        print_spaces(depth);
# 549
        tmp___40 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                              (char const   *)"Giving up on target file `%s\'.\n",
                                                              5);
# 549
        printf(tmp___40, file->name);
# 549
        tmp___41 = get_stdout();
        {
# 105 "spec.work"
        tmp___41->__BLAST_FLAG = 1;
        {

        }
        }
# 549 "remake.c"
        fflush(tmp___41);
        }
      }
# 549
      break;
    }
# 551
    if (depth == 0U) {
# 551
      if (keep_going_flag) {
# 551
        if (! just_print_flag) {
# 551
          if (! question_flag) {
            {
# 553
            tmp___42 = (char const   *)dcgettext((char const   *)((void *)0),
                                                 (char const   *)"Target `%s\' not remade because of errors.",
                                                 5);
# 553
            error((struct floc  const  *)((struct floc *)0), tmp___42,
                  file->name);
            }
          }
        }
      }
    }
# 556
    return (dep_status);
  }
# 559
  if (file->command_state == 1) {
    {
# 568
    set_command_state(file, 0);
    }
  }
  {
# 573
  deps_changed = 0;
# 574
  d = file->deps;
  }
# 574
  while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
# 576
    if ((d->file)->last_mtime == 0ULL) {
      {
# 576
      tmp___44 = f_mtime(d->file, 1);
      }
    } else {
      {
# 576
      tmp___44 = (d->file)->last_mtime;
      }
    }
    {
# 576
    d_mtime = tmp___44;
    }
# 577
    while ((unsigned int )(d->file)->renamed !=
           (unsigned int )((struct file *)0)) {
      {
# 577
      d->file = (d->file)->renamed;
      }
    }
# 579
    if (! d->ignore_mtime) {
# 585
      if (d_mtime == 1ULL) {
# 585
        if (! (d->file)->intermediate) {
          {
# 588
          must_make = 1;
          }
        }
      }
      {
# 592
      deps_changed = (int )((unsigned int )deps_changed | d->changed);
      }
    }
# 597
    if (noexist) {
      {
# 597
      tmp___45 = 1;
      }
    } else {
# 597
      if (d_mtime > this_mtime) {
        {
# 597
        tmp___45 = 1;
        }
      } else {
        {
# 597
        tmp___45 = 0;
        }
      }
    }
    {
# 597
    d->changed = d->changed | (unsigned int )tmp___45;
    }
# 599
    if (! noexist) {
# 599
      if (3 & db_level) {
        {
# 601
        fmt = (char const   *)0;
        }
# 603
        if (d->ignore_mtime) {
# 605
          if (2 & db_level) {
            {
# 606
            fmt = (char const   *)dcgettext((char const   *)((void *)0),
                                            (char const   *)"Prerequisite `%s\' is order-only for target `%s\'.\n",
                                            5);
            }
          }
        } else {
# 608
          if (d_mtime == 1ULL) {
# 610
            if (1 & db_level) {
              {
# 611
              fmt = (char const   *)dcgettext((char const   *)((void *)0),
                                              (char const   *)"Prerequisite `%s\' of target `%s\' does not exist.\n",
                                              5);
              }
            }
          } else {
# 613
            if (d->changed) {
# 615
              if (1 & db_level) {
                {
# 616
                fmt = (char const   *)dcgettext((char const   *)((void *)0),
                                                (char const   *)"Prerequisite `%s\' is newer than target `%s\'.\n",
                                                5);
                }
              }
            } else {
# 618
              if (2 & db_level) {
                {
# 619
                fmt = (char const   *)dcgettext((char const   *)((void *)0),
                                                (char const   *)"Prerequisite `%s\' is older than target `%s\'.\n",
                                                5);
                }
              }
            }
          }
        }
# 621
        if (fmt) {
          {
# 623
          print_spaces(depth);
          }
# 624
          if ((unsigned int )d->name == (unsigned int )((char *)0)) {
            {
# 624
            tmp___46 = (d->file)->name;
            }
          } else {
            {
# 624
            tmp___46 = d->name;
            }
          }
          {
# 624
          printf((char const   */* __restrict  */)fmt, tmp___46, file->name);
# 625
          tmp___47 = get_stdout();
          {
# 105 "spec.work"
          tmp___47->__BLAST_FLAG = 1;
          {

          }
          }
# 625 "remake.c"
          fflush(tmp___47);
          }
        }
      }
    }
    {
# 574
    d = d->next;
    }
  }
  {
# 631
  depth --;
  }
# 633
  if (file->double_colon) {
# 633
    if ((unsigned int )file->deps == (unsigned int )((struct dep *)0)) {
      {
# 635
      must_make = 1;
      }
# 636
      while (1) {
# 636
        if (1 & db_level) {
          {
# 636
          print_spaces(depth);
# 636
          tmp___48 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                (char const   *)"Target `%s\' is double-colon and has no prerequisites.\n",
                                                                5);
# 636
          printf(tmp___48, file->name);
# 636
          tmp___49 = get_stdout();
          {
# 105 "spec.work"
          tmp___49->__BLAST_FLAG = 1;
          {

          }
          }
# 636 "remake.c"
          fflush(tmp___49);
          }
        }
# 636
        break;
      }
    } else {
      goto _L___5;
    }
  } else {
    _L___5: 
# 639
    if (noexist) {
      _L___4: 
# 646
      if (! must_make) {
# 646
        if ((unsigned int )file->cmds != (unsigned int )((struct commands *)0)) {
# 646
          if (always_make_flag) {
            {
# 648
            must_make = 1;
            }
# 649
            while (1) {
# 649
              if (2 & db_level) {
                {
# 649
                print_spaces(depth);
# 649
                tmp___52 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                      (char const   *)"Making `%s\' due to always-make flag.\n",
                                                                      5);
# 649
                printf(tmp___52, file->name);
# 649
                tmp___53 = get_stdout();
                {
# 105 "spec.work"
                tmp___53->__BLAST_FLAG = 1;
                {

                }
                }
# 649 "remake.c"
                fflush(tmp___53);
                }
              }
# 649
              break;
            }
          }
        }
      }
    } else {
# 639
      if (file->is_target) {
# 639
        if (deps_changed) {
          goto _L___4;
        } else {
# 639
          if ((unsigned int )file->cmds == (unsigned int )((struct commands *)0)) {
# 639
            if (always_make_flag) {
              goto _L___4;
            } else {
              {
# 642
              must_make = 0;
              }
# 643
              while (1) {
# 643
                if (2 & db_level) {
                  {
# 643
                  print_spaces(depth);
# 643
                  tmp___50 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                        (char const   *)"No commands for `%s\' and no prerequisites actually changed.\n",
                                                                        5);
# 643
                  printf(tmp___50, file->name);
# 643
                  tmp___51 = get_stdout();
                  {
# 105 "spec.work"
                  tmp___51->__BLAST_FLAG = 1;
                  {

                  }
                  }
# 643 "remake.c"
                  fflush(tmp___51);
                  }
                }
# 643
                break;
              }
            }
          } else {
            goto _L___4;
          }
        }
      } else {
        goto _L___4;
      }
    }
  }
# 652
  if (! must_make) {
# 654
    if (2 & db_level) {
      {
# 656
      print_spaces(depth);
# 657
      tmp___54 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                            (char const   *)"No need to remake target `%s\'",
                                                            5);
# 657
      printf(tmp___54, file->name);
      }
# 658
      if (! ((unsigned int )file->name == (unsigned int )file->hname)) {
# 658
        if ((int )(*(file->name)) == (int )(*(file->hname))) {
# 658
          if (! ((int )(*(file->name)) == 0)) {
            {
# 658
            tmp___56 = strcmp((char const   *)(file->name + 1),
                              (char const   *)(file->hname + 1));
            }
# 658
            if (tmp___56) {
              {
# 659
              tmp___55 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                    (char const   *)"; using VPATH name `%s\'",
                                                                    5);
# 659
              printf(tmp___55, file->hname);
              }
            }
          }
        } else {
          {
# 659
          tmp___55 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                (char const   *)"; using VPATH name `%s\'",
                                                                5);
# 659
          printf(tmp___55, file->hname);
          }
        }
      }
      {
# 660
      puts((char const   *)".");
# 661
      tmp___57 = get_stdout();
      {
# 105 "spec.work"
      tmp___57->__BLAST_FLAG = 1;
      {

      }
      }
# 661 "remake.c"
      fflush(tmp___57);
      }
    }
    {
# 664
    notice_finished_file(file);
    }
# 670
    while (file) {
      {
# 672
      file->name = file->hname;
# 673
      file = file->prev;
      }
    }
# 676
    return (0);
  }
# 679
  while (1) {
# 679
    if (1 & db_level) {
      {
# 679
      print_spaces(depth);
# 679
      tmp___58 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                            (char const   *)"Must remake target `%s\'.\n",
                                                            5);
# 679
      printf(tmp___58, file->name);
# 679
      tmp___59 = get_stdout();
      {
# 105 "spec.work"
      tmp___59->__BLAST_FLAG = 1;
      {

      }
      }
# 679 "remake.c"
      fflush(tmp___59);
      }
    }
# 679
    break;
  }
# 683
  if (! ((unsigned int )file->name == (unsigned int )file->hname)) {
# 683
    if ((int )(*(file->name)) == (int )(*(file->hname))) {
# 683
      if (! ((int )(*(file->name)) == 0)) {
        {
# 683
        tmp___62 = strcmp((char const   *)(file->name + 1),
                          (char const   *)(file->hname + 1));
        }
# 683
        if (tmp___62) {
          goto _L___6;
        }
      }
    } else {
      _L___6: 
# 685
      while (1) {
# 685
        if (1 & db_level) {
          {
# 685
          tmp___60 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                (char const   *)"  Ignoring VPATH name `%s\'.\n",
                                                                5);
# 685
          printf(tmp___60, file->hname);
# 685
          tmp___61 = get_stdout();
          {
# 105 "spec.work"
          tmp___61->__BLAST_FLAG = 1;
          {

          }
          }
# 685 "remake.c"
          fflush(tmp___61);
          }
        }
# 685
        break;
      }
      {
# 686
      file->ignore_vpath = 1U;
      }
    }
  }
  {
# 690
  remake_file(file);
  }
# 692
  if (file->command_state != 3) {
# 694
    while (1) {
# 694
      if (2 & db_level) {
        {
# 694
        print_spaces(depth);
# 694
        tmp___63 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                              (char const   *)"Commands of `%s\' are being run.\n",
                                                              5);
# 694
        printf(tmp___63, file->name);
# 694
        tmp___64 = get_stdout();
        {
# 105 "spec.work"
        tmp___64->__BLAST_FLAG = 1;
        {

        }
        }
# 694 "remake.c"
        fflush(tmp___64);
        }
      }
# 694
      break;
    }
# 695
    return (0);
  }
# 698
  switch ((int )file->update_status) {
  case 2: 
  {

  }
# 701
  while (1) {
# 701
    if (1 & db_level) {
      {
# 701
      print_spaces(depth);
# 701
      tmp___65 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                            (char const   *)"Failed to remake target file `%s\'.\n",
                                                            5);
# 701
      printf(tmp___65, file->name);
# 701
      tmp___66 = get_stdout();
      {
# 105 "spec.work"
      tmp___66->__BLAST_FLAG = 1;
      {

      }
      }
# 701 "remake.c"
      fflush(tmp___66);
      }
    }
# 701
    break;
  }
# 702
  break;
  case 0: 
  {

  }
# 704
  while (1) {
# 704
    if (1 & db_level) {
      {
# 704
      print_spaces(depth);
# 704
      tmp___67 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                            (char const   *)"Successfully remade target file `%s\'.\n",
                                                            5);
# 704
      printf(tmp___67, file->name);
# 704
      tmp___68 = get_stdout();
      {
# 105 "spec.work"
      tmp___68->__BLAST_FLAG = 1;
      {

      }
      }
# 704 "remake.c"
      fflush(tmp___68);
      }
    }
# 704
    break;
  }
# 705
  break;
  case 1: 
  {

  }
# 707
  while (1) {
# 707
    if (1 & db_level) {
      {
# 707
      print_spaces(depth);
# 707
      tmp___69 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                            (char const   *)"Target file `%s\' needs remade under -q.\n",
                                                            5);
# 707
      printf(tmp___69, file->name);
# 707
      tmp___70 = get_stdout();
      {
# 105 "spec.work"
      tmp___70->__BLAST_FLAG = 1;
      {

      }
      }
# 707 "remake.c"
      fflush(tmp___70);
      }
    }
# 707
    break;
  }
# 708
  break;
  default: 
  {

  }
# 710
  if ((int )file->update_status >= 0) {
# 710
    if (! ((int )file->update_status <= 2)) {
      {
# 710
      __assert_fail((char const   *)"file->update_status >= 0 && file->update_status <= 2",
                    (char const   *)"remake.c", 710U,
                    (char const   *)"update_file_1");
      }
    }
  } else {
    {
# 710
    __assert_fail((char const   *)"file->update_status >= 0 && file->update_status <= 2",
                  (char const   *)"remake.c", 710U,
                  (char const   *)"update_file_1");
    }
  }
# 711
  break;
  }
  {
# 714
  file->updated = 1U;
  }
# 715
  return ((int )file->update_status);
}
}
# 724
void notice_finished_file(struct file *file ) 
{ struct dep *d ;
  int ran ;
  int touched ;
  unsigned int i ;
  struct file *f ;
  int i___0 ;

  {
  {
# 729
  ran = file->command_state == 2;
# 730
  touched = 0;
# 732
  file->command_state = 3;
# 733
  file->updated = 1U;
  }
# 735
  if (touch_flag) {
# 735
    if ((int )file->update_status == 0) {
# 744
      if ((unsigned int )file->cmds != (unsigned int )((struct commands *)0)) {
# 744
        if ((file->cmds)->any_recurse) {
          {
# 749
          i = 0U;
          }
# 749
          while (i < (file->cmds)->ncommand_lines) {
# 750
            if (! ((int )(*((file->cmds)->lines_flags + i)) & 1)) {
              goto have_nonrecursing;
            }
            {
# 749
            i ++;
            }
          }
        } else {
          goto have_nonrecursing;
        }
      } else {
        have_nonrecursing: 
# 756
        if (file->phony) {
          {
# 757
          file->update_status = (short )0;
          }
        } else {
          {
# 761
          file->update_status = (short )touch_file(file);
# 765
          commands_started = commands_started + 1U;
# 771
          touched = 1;
          }
        }
      }
    }
  }
# 776
  if (file->mtime_before_update == 0ULL) {
    {
# 777
    file->mtime_before_update = file->last_mtime;
    }
  }
# 779
  if (ran) {
# 779
    if (file->phony) {
      goto _L___2;
    } else {
      goto _L___1;
    }
  } else {
    _L___2: 
# 779
    if (touched) {
      _L___1: 
      {
# 782
      i___0 = 0;
      }
# 788
      if (question_flag) {
        goto _L___0;
      } else {
# 788
        if (just_print_flag) {
          goto _L___0;
        } else {
# 788
          if (touch_flag) {
            _L___0: 
            {
# 790
            i___0 = (int )(file->cmds)->ncommand_lines;
            }
# 790
            while (i___0 > 0) {
# 791
              if (! ((int )(*((file->cmds)->lines_flags + (i___0 - 1))) & 1)) {
# 792
                break;
              }
              {
# 790
              i___0 --;
              }
            }
          } else {
# 797
            if (file->is_target) {
# 797
              if ((unsigned int )file->cmds ==
                  (unsigned int )((struct commands *)0)) {
                {
# 798
                i___0 = 1;
                }
              }
            }
          }
        }
      }
# 800
      if (i___0 == 0) {
        {
# 800
        file->last_mtime = 0ULL;
        }
      } else {
        {
# 800
        file->last_mtime = 0xffffffffffffffffULL;
        }
      }
      {
# 804
      f = file->double_colon;
      }
# 804
      while ((unsigned int )f != (unsigned int )((struct file *)0)) {
        {
# 805
        f->last_mtime = file->last_mtime;
# 804
        f = f->prev;
        }
      }
    }
  }
# 808
  if (ran) {
# 808
    if ((int )file->update_status != -1) {
      {
# 813
      d = file->also_make;
      }
# 813
      while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
        {
# 815
        (d->file)->command_state = 3;
# 816
        (d->file)->updated = 1U;
# 817
        (d->file)->update_status = file->update_status;
        }
# 819
        if (ran) {
# 819
          if (! (d->file)->phony) {
            {
# 824
            f_mtime(d->file, 0);
            }
          }
        }
        {
# 813
        d = d->next;
        }
      }
    } else {
      goto _L___3;
    }
  } else {
    _L___3: 
# 826
    if ((int )file->update_status == -1) {
      {
# 829
      file->update_status = (short )0;
      }
    }
  }
# 830
  return;
}
}
# 839
static int check_dep(struct file *file , unsigned int depth ,
                     uintmax_t this_mtime , int *must_make_ptr ) 
{ struct dep *d ;
  int dep_status ;
  struct file *tmp ;
  uintmax_t mtime ;
  uintmax_t mtime___0 ;
  char const   * __restrict  tmp___1 ;
  FILE *tmp___2 ;
  char const   * __restrict  tmp___3 ;
  FILE *tmp___4 ;
  int tmp___5 ;
  char const   * __restrict  tmp___6 ;
  FILE *tmp___7 ;
  struct dep *lastd ;
  int maybe_make ;
  char const   *tmp___9 ;
  struct file *tmp___10 ;
  int tmp___11 ;
  struct file *tmp___12 ;

  {
  {
# 847
  dep_status = 0;
# 849
  depth ++;
  }
# 850
  if (file->double_colon) {
    {
# 850
    tmp = file->double_colon;
    }
  } else {
    {
# 850
    tmp = file;
    }
  }
  {
# 850
  tmp->updating = 1U;
  }
# 852
  if (file->intermediate) {
# 869
    if (! file->phony) {
# 869
      if ((unsigned int )file->cmds == (unsigned int )((struct commands *)0)) {
# 869
        if (! file->tried_implicit) {
          {
# 871
          tmp___5 = try_implicit_rule(file, depth);
          }
# 871
          if (tmp___5) {
# 872
            while (1) {
# 872
              if (8 & db_level) {
                {
# 872
                print_spaces(depth);
# 872
                tmp___1 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                     (char const   *)"Found an implicit rule for `%s\'.\n",
                                                                     5);
# 872
                printf(tmp___1, file->name);
# 872
                tmp___2 = get_stdout();
                {
# 105 "spec.work"
                tmp___2->__BLAST_FLAG = 1;
                {

                }
                }
# 872 "remake.c"
                fflush(tmp___2);
                }
              }
# 872
              break;
            }
          } else {
# 874
            while (1) {
# 874
              if (8 & db_level) {
                {
# 874
                print_spaces(depth);
# 874
                tmp___3 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                     (char const   *)"No implicit rule found for `%s\'.\n",
                                                                     5);
# 874
                printf(tmp___3, file->name);
# 874
                tmp___4 = get_stdout();
                {
# 105 "spec.work"
                tmp___4->__BLAST_FLAG = 1;
                {

                }
                }
# 874 "remake.c"
                fflush(tmp___4);
                }
              }
# 874
              break;
            }
          }
          {
# 875
          file->tried_implicit = 1U;
          }
        }
      }
    }
# 877
    if ((unsigned int )file->cmds == (unsigned int )((struct commands *)0)) {
# 877
      if (! file->is_target) {
# 877
        if ((unsigned int )default_file != (unsigned int )((struct file *)0)) {
# 877
          if ((unsigned int )default_file->cmds !=
              (unsigned int )((struct commands *)0)) {
# 880
            while (1) {
# 880
              if (8 & db_level) {
                {
# 880
                print_spaces(depth);
# 880
                tmp___6 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                                     (char const   *)"Using default commands for `%s\'.\n",
                                                                     5);
# 880
                printf(tmp___6, file->name);
# 880
                tmp___7 = get_stdout();
                {
# 105 "spec.work"
                tmp___7->__BLAST_FLAG = 1;
                {

                }
                }
# 880 "remake.c"
                fflush(tmp___7);
                }
              }
# 880
              break;
            }
            {
# 881
            file->cmds = default_file->cmds;
            }
          }
        }
      }
    }
# 886
    while ((unsigned int )file->renamed != (unsigned int )((struct file *)0)) {
      {
# 886
      file = file->renamed;
      }
    }
# 887
    if (file->last_mtime == 0ULL) {
      {
# 887
      mtime___0 = f_mtime(file, 1);
      }
    } else {
      {
# 887
      mtime___0 = file->last_mtime;
      }
    }
# 888
    while ((unsigned int )file->renamed != (unsigned int )((struct file *)0)) {
      {
# 888
      file = file->renamed;
      }
    }
# 889
    if (mtime___0 != 1ULL) {
# 889
      if (mtime___0 > this_mtime) {
        {
# 890
        (*must_make_ptr) = 1;
        }
      } else {
        goto _L;
      }
    } else {
      _L: 
      {
# 898
      lastd = (struct dep *)0;
# 899
      d = file->deps;
      }
# 900
      while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
# 904
        if ((d->file)->double_colon) {
          {
# 904
          tmp___10 = (d->file)->double_colon;
          }
        } else {
          {
# 904
          tmp___10 = d->file;
          }
        }
# 904
        if (tmp___10->updating) {
          {
# 906
          tmp___9 = (char const   *)dcgettext((char const   *)((void *)0),
                                              (char const   *)"Circular %s <- %s dependency dropped.",
                                              5);
# 906
          error((struct floc  const  *)((struct floc *)0), tmp___9, file->name,
                (d->file)->name);
          }
# 908
          if ((unsigned int )lastd == (unsigned int )((struct dep *)0)) {
            {
# 910
            file->deps = d->next;
# 911
            free((void *)((char *)d));
# 912
            d = file->deps;
            }
          } else {
            {
# 916
            lastd->next = d->next;
# 917
            free((void *)((char *)d));
# 918
            d = lastd->next;
            }
          }
# 920
          continue;
        }
        {
# 923
        (d->file)->parent = file;
# 924
        maybe_make = (*must_make_ptr);
# 925
        tmp___11 = check_dep(d->file, depth, this_mtime, & maybe_make);
# 925
        dep_status |= tmp___11;
        }
# 927
        if (! d->ignore_mtime) {
          {
# 928
          (*must_make_ptr) = maybe_make;
          }
        }
# 929
        while ((unsigned int )(d->file)->renamed !=
               (unsigned int )((struct file *)0)) {
          {
# 929
          d->file = (d->file)->renamed;
          }
        }
# 930
        if (dep_status != 0) {
# 930
          if (! keep_going_flag) {
# 931
            break;
          }
        }
# 933
        if ((d->file)->command_state == 2) {
          {
# 938
          set_command_state(file, 1);
          }
        } else {
# 933
          if ((d->file)->command_state == 1) {
            {
# 938
            set_command_state(file, 1);
            }
          }
        }
        {
# 940
        lastd = d;
# 941
        d = d->next;
        }
      }
    }
  } else {
    {
# 857
    dep_status = update_file(file, depth);
    }
# 858
    while ((unsigned int )file->renamed != (unsigned int )((struct file *)0)) {
      {
# 858
      file = file->renamed;
      }
    }
# 859
    if (file->last_mtime == 0ULL) {
      {
# 859
      mtime = f_mtime(file, 1);
      }
    } else {
      {
# 859
      mtime = file->last_mtime;
      }
    }
# 860
    while ((unsigned int )file->renamed != (unsigned int )((struct file *)0)) {
      {
# 860
      file = file->renamed;
      }
    }
# 861
    if (mtime == 1ULL) {
      {
# 862
      (*must_make_ptr) = 1;
      }
    } else {
# 861
      if (mtime > this_mtime) {
        {
# 862
        (*must_make_ptr) = 1;
        }
      }
    }
  }
# 946
  if (file->double_colon) {
    {
# 946
    tmp___12 = file->double_colon;
    }
  } else {
    {
# 946
    tmp___12 = file;
    }
  }
  {
# 946
  tmp___12->updating = 0U;
  }
# 947
  return (dep_status);
}
}
# 954
static int touch_file(struct file *file ) 
{ int tmp ;
  int fd ;
  int tmp___0 ;
  struct stat statbuf ;
  char buf___1 ;
  int tmp___1 ;
  ssize_t tmp___2 ;
  __off64_t tmp___3 ;
  ssize_t tmp___4 ;
  int tmp___5 ;

  {
# 958
  if (! silent_flag) {
    {
# 959
    message(0, (char const   *)"touch %s", file->name);
    }
  }
  {
# 962
  tmp___5 = ar_name(file->name);
  }
# 962
  if (tmp___5) {
    {
# 963
    tmp = ar_touch(file->name);
    }
# 963
    return (tmp);
  } else {
    {
# 967
    tmp___0 = open((char const   *)file->name, 66, 438);
# 967
    fd = tmp___0;
    }
# 969
    if (fd < 0) {
      {
# 970
      perror_with_name((char const   *)"touch: open: ",
                       (char const   *)file->name);
      }
# 970
      return (1);
    } else {
      {
# 976
      tmp___1 = fstat__extinline(fd, & statbuf);
      }
# 976
      if (tmp___1 < 0) {
        {
# 977
        perror_with_name((char const   *)"touch: fstat: ",
                         (char const   *)file->name);
        }
# 977
        return (1);
      }
      {
# 979
      tmp___2 = read(fd, (void *)(& buf___1), 1U);
      }
# 979
      if (tmp___2 < 0) {
        {
# 980
        perror_with_name((char const   *)"touch: read: ",
                         (char const   *)file->name);
        }
# 980
        return (1);
      }
      {
# 981
      tmp___3 = lseek(fd, 0LL, 0);
      }
# 981
      if (tmp___3 < 0LL) {
        {
# 982
        perror_with_name((char const   *)"touch: lseek: ",
                         (char const   *)file->name);
        }
# 982
        return (1);
      }
      {
# 983
      tmp___4 = write(fd, (void const   *)(& buf___1), 1U);
      }
# 983
      if (tmp___4 < 0) {
        {
# 984
        perror_with_name((char const   *)"touch: write: ",
                         (char const   *)file->name);
        }
# 984
        return (1);
      }
# 987
      if (statbuf.st_size == 0LL) {
        {
# 989
        close(fd);
# 990
        fd = open((char const   *)file->name, 514, 438);
        }
# 991
        if (fd < 0) {
          {
# 992
          perror_with_name((char const   *)"touch: open: ",
                           (char const   *)file->name);
          }
# 992
          return (1);
        }
      }
      {
# 994
      close(fd);
      }
    }
  }
# 998
  return (0);
}
}
# 1005
static void remake_file(struct file *file ) 
{ char const   *msg_noparent ;
  char const   *tmp ;
  char const   *msg_parent ;
  char const   *tmp___0 ;

  {
# 1009
  if ((unsigned int )file->cmds == (unsigned int )((struct commands *)0)) {
# 1011
    if (file->phony) {
      {
# 1013
      file->update_status = (short )0;
      }
    } else {
# 1014
      if (file->is_target) {
        {
# 1017
        file->update_status = (short )0;
        }
      } else {
        {
# 1020
        tmp = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"%sNo rule to make target `%s\'%s",
                                        5);
# 1020
        msg_noparent = tmp;
# 1022
        tmp___0 = (char const   *)dcgettext((char const   *)((void *)0),
                                            (char const   *)"%sNo rule to make target `%s\', needed by `%s\'%s",
                                            5);
# 1022
        msg_parent = tmp___0;
        }
# 1026
        if (! keep_going_flag) {
# 1026
          if (! file->dontcare) {
# 1028
            if ((unsigned int )file->parent == (unsigned int )((struct file *)0)) {
              {
# 1029
              fatal((struct floc  const  *)((struct floc *)0), msg_noparent, "",
                    file->name, "");
              }
            }
            {
# 1031
            fatal((struct floc  const  *)((struct floc *)0), msg_parent, "",
                  file->name, (file->parent)->name, "");
            }
          }
        }
# 1034
        if (! file->dontcare) {
# 1036
          if ((unsigned int )file->parent == (unsigned int )((struct file *)0)) {
            {
# 1037
            error((struct floc  const  *)((struct floc *)0), msg_noparent,
                  "*** ", file->name, ".");
            }
          } else {
            {
# 1039
            error((struct floc  const  *)((struct floc *)0), msg_parent, "*** ",
                  file->name, (file->parent)->name, ".");
            }
          }
        }
        {
# 1042
        file->update_status = (short )2;
        }
      }
    }
  } else {
    {
# 1047
    chop_commands(file->cmds);
    }
# 1050
    if (touch_flag) {
# 1050
      if ((file->cmds)->any_recurse) {
        {
# 1052
        execute_file_commands(file);
        }
# 1053
        return;
      }
    } else {
      {
# 1052
      execute_file_commands(file);
      }
# 1053
      return;
    }
    {
# 1057
    file->update_status = (short )0;
    }
  }
  {
# 1061
  notice_finished_file(file);
  }
# 1062
  return;
}
}
# 1202
static uintmax_t adjusted_now  ;
# 1072
uintmax_t f_mtime(struct file *file , int search ) 
{ uintmax_t mtime ;
  char *arname ;
  char *memname ;
  struct file *arfile ;
  int arname_used ;
  time_t member_date ;
  char *name ;
  unsigned int arlen ;
  unsigned int memlen ;
  char *tmp ;
  int tmp___0 ;
  char *name___0 ;
  uintmax_t tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  uintmax_t adjusted_mtime ;
  int resolution ;
  uintmax_t now ;
  uintmax_t tmp___10 ;
  double from_now ;
  char const   *tmp___11 ;

  {
  {
# 1082
  tmp___9 = ar_name(file->name);
  }
# 1082
  if (tmp___9) {
    {
# 1088
    arname_used = 0;
# 1092
    ar_parse_name(file->name, & arname, & memname);
# 1096
    arfile = lookup_file(arname);
    }
# 1097
    if ((unsigned int )arfile == (unsigned int )((struct file *)0)) {
      {
# 1099
      arfile = enter_file(arname);
# 1100
      arname_used = 1;
      }
    }
    {
# 1102
    mtime = f_mtime(arfile, search);
    }
# 1103
    while ((unsigned int )arfile->renamed != (unsigned int )((struct file *)0)) {
      {
# 1103
      arfile = arfile->renamed;
      }
    }
# 1104
    if (search) {
      {
# 1104
      tmp___0 = strcmp((char const   *)arfile->hname, (char const   *)arname);
      }
# 1104
      if (tmp___0) {
# 1112
        if (! arname_used) {
          {
# 1114
          free((void *)arname);
# 1115
          arname_used = 1;
          }
        }
        {
# 1118
        arname = arfile->hname;
# 1119
        arlen = strlen((char const   *)arname);
# 1120
        memlen = strlen((char const   *)memname);
# 1124
        tmp = xmalloc(((arlen + 1U) + memlen) + 2U);
# 1124
        name = tmp;
# 1125
        memmove((void *)name, (void const   *)arname, arlen);
# 1126
        (*(name + arlen)) = '(';
# 1127
        memmove((void *)((name + arlen) + 1), (void const   *)memname, memlen);
# 1128
        (*(name + ((arlen + 1U) + memlen))) = ')';
# 1129
        (*(name + (((arlen + 1U) + memlen) + 1U))) = '\0';
        }
# 1133
        if ((unsigned int )arfile->name == (unsigned int )arfile->hname) {
          {
# 1134
          rename_file(file, name);
          }
        } else {
          {
# 1136
          rehash_file(file, name);
          }
        }
# 1137
        while ((unsigned int )file->renamed != (unsigned int )((struct file *)0)) {
          {
# 1137
          file = file->renamed;
          }
        }
      }
    }
# 1140
    if (! arname_used) {
      {
# 1141
      free((void *)arname);
      }
    }
    {
# 1142
    free((void *)memname);
# 1144
    file->low_resolution_time = 1U;
    }
# 1146
    if (mtime == 1ULL) {
# 1148
      return (1ULL);
    }
    {
# 1150
    member_date = ar_member_date(file->hname);
    }
# 1151
    if (member_date == -1L) {
      {
# 1151
      mtime = 1ULL;
      }
    } else {
      {
# 1151
      mtime = file_timestamp_cons((char const   *)file->hname, member_date, 0);
      }
    }
  } else {
    {
# 1158
    mtime = name_mtime(file->name);
    }
# 1160
    if (mtime == 1ULL) {
# 1160
      if (search) {
# 1160
        if (! file->ignore_vpath) {
          {
# 1163
          name___0 = file->name;
# 1164
          tmp___7 = vpath_search(& name___0, & mtime);
          }
# 1164
          if (tmp___7) {
            goto _L;
          } else {
# 1164
            if ((int )(*(name___0 + 0)) == 45) {
# 1164
              if ((int )(*(name___0 + 1)) == 108) {
                {
# 1164
                tmp___8 = library_search(& name___0, & mtime);
                }
# 1164
                if (tmp___8) {
                  _L: 
# 1169
                  if (mtime != 0ULL) {
                    {
# 1172
                    file->last_mtime = mtime;
                    }
                  }
                  {
# 1177
                  tmp___4 = strlen((char const   *)name___0);
# 1177
                  tmp___5 = strlen((char const   *)file->name);
# 1177
                  tmp___6 = gpath_search(name___0, (int )((tmp___4 - tmp___5) -
                                                          1U));
                  }
# 1177
                  if (tmp___6) {
                    {
# 1179
                    rename_file(file, name___0);
                    }
# 1180
                    while ((unsigned int )file->renamed !=
                           (unsigned int )((struct file *)0)) {
                      {
# 1180
                      file = file->renamed;
                      }
                    }
# 1181
                    if (file->last_mtime == 0ULL) {
                      {
# 1181
                      tmp___3 = f_mtime(file, 1);
                      }
                    } else {
                      {
# 1181
                      tmp___3 = file->last_mtime;
                      }
                    }
# 1181
                    return (tmp___3);
                  }
                  {
# 1184
                  rehash_file(file, name___0);
                  }
# 1185
                  while ((unsigned int )file->renamed !=
                         (unsigned int )((struct file *)0)) {
                    {
# 1185
                    file = file->renamed;
                    }
                  }
                  {
# 1186
                  mtime = name_mtime(name___0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
# 1198
  if (! clock_skew_detected) {
# 1198
    if (mtime != 1ULL) {
# 1198
      if (! file->updated) {
        {
# 1204
        adjusted_mtime = mtime;
        }
# 1219
        if (adjusted_now < adjusted_mtime) {
          {
# 1222
          tmp___10 = file_timestamp_now(& resolution);
# 1222
          now = tmp___10;
# 1223
          adjusted_now = now + (unsigned long long )(resolution - 1);
          }
# 1224
          if (adjusted_now < adjusted_mtime) {
            {
# 1230
            from_now = (double )(((mtime - 3ULL) >> 30) - ((now - 3ULL) >> 30)) +
                       (double )((int )((mtime - 3ULL) & 1073741823ULL) -
                                 (int )((now - 3ULL) & 1073741823ULL)) / 1e9;
# 1234
            tmp___11 = (char const   *)dcgettext((char const   *)((void *)0),
                                                 (char const   *)"Warning: File `%s\' has modification time %.2g s in the future",
                                                 5);
# 1234
            error((struct floc  const  *)((struct floc *)0), tmp___11,
                  file->name, from_now);
# 1237
            clock_skew_detected = 1;
            }
          }
        }
      }
    }
  }
# 1244
  if (file->double_colon) {
    {
# 1245
    file = file->double_colon;
    }
  }
# 1247
  while (1) {
# 1254
    if (mtime != 1ULL) {
# 1254
      if (file->command_state == 0) {
# 1254
        if (file->command_state == 0) {
# 1254
          if (! file->tried_implicit) {
# 1254
            if (file->intermediate) {
              {
# 1257
              file->intermediate = 0U;
              }
            }
          }
        }
      }
    }
    {
# 1259
    file->last_mtime = mtime;
# 1260
    file = file->prev;
    }
# 1247
    if (! ((unsigned int )file != (unsigned int )((struct file *)0))) {
# 1247
      break;
    }
  }
# 1264
  return (mtime);
}
}
# 1270
static uintmax_t name_mtime(char *name ) 
{ struct stat st ;
  int *tmp ;
  int *tmp___0 ;
  int tmp___1 ;
  uintmax_t tmp___2 ;

  {
  {
# 1276
  tmp___1 = stat__extinline((char const   *)name, & st);
  }
# 1276
  if (tmp___1 != 0) {
    {
# 1278
    tmp = __errno_location();
    }
# 1278
    if ((*tmp) != 2) {
      {
# 1278
      tmp___0 = __errno_location();
      }
# 1278
      if ((*tmp___0) != 20) {
        {
# 1279
        perror_with_name((char const   *)"stat:", (char const   *)name);
        }
      }
    }
# 1280
    return (1ULL);
  }
  {
# 1283
  tmp___2 = file_timestamp_cons((char const   *)name, st.st_mtim.tv_sec,
                                (int )st.st_mtim.tv_nsec);
  }
# 1283
  return (tmp___2);
}
}
# 1296
static char *dirs[4]   = {"/lib", "/usr/lib", "/usr/local/lib", (char *)0};
# 1313
static char *libpatterns   = (char *)((void *)0);
# 1339
static char *buf___0   = (char *)((void *)0);
# 1340
static int buflen   = 0;
# 1341
static int libdir_maxlen   = -1;
# 1291
static int library_search(char **lib , uintmax_t *mtime_ptr ) 
{ char *libname ;
  uintmax_t mtime ;
  char *p ;
  char *p2 ;
  unsigned int len ;
  char *file ;
  char **dp ;
  int save ;
  char const   *tmp ;
  char *libbuf ;
  char *tmp___0 ;
  char c ;
  char *p3 ;
  char *p4 ;
  char const   *tmp___1 ;
  unsigned int tmp___2 ;
  int tmp___3 ;
  int l ;
  int tmp___4 ;
  size_t tmp___5 ;

  {
  {
# 1315
  libname = (*lib) + 2;
  }
# 1325
  if (! libpatterns) {
    {
# 1327
    save = warn_undefined_variables_flag;
# 1328
    warn_undefined_variables_flag = 0;
# 1330
    tmp = (char const   *)variable_expand("$(strip $(.LIBPATTERNS))");
# 1330
    libpatterns = xstrdup(tmp);
# 1332
    warn_undefined_variables_flag = save;
    }
  }
  {
# 1336
  p2 = libpatterns;
  }
# 1337
  while (1) {
    {
# 1337
    p = find_next_token(& p2, & len);
    }
# 1337
    if (! ((unsigned int )p != (unsigned int )((char *)0))) {
# 1337
      break;
    }
    {
# 1342
    tmp___0 = variable_expand("");
# 1342
    libbuf = tmp___0;
# 1346
    c = (*(p + len));
# 1349
    (*(p + len)) = '\0';
# 1350
    p3 = find_percent(p);
    }
# 1351
    if (! p3) {
      {
# 1355
      tmp___1 = (char const   *)dcgettext((char const   *)((void *)0),
                                          (char const   *)".LIBPATTERNS element `%s\' is not a pattern",
                                          5);
# 1355
      error((struct floc  const  *)((struct floc *)0), tmp___1, p);
      }
# 1356
      while (len) {
        {
# 1357
        (*p) = ' ';
# 1356
        len --;
# 1356
        p ++;
        }
      }
      {
# 1358
      (*p) = c;
      }
# 1359
      continue;
    }
    {
# 1361
    p4 = variable_buffer_output(libbuf, p, (unsigned int )(p3 - p));
# 1362
    tmp___2 = strlen((char const   *)libname);
# 1362
    p4 = variable_buffer_output(p4, libname, tmp___2);
# 1363
    p4 = variable_buffer_output(p4, p3 + 1, len - (unsigned int )(p3 - p));
# 1364
    (*(p + len)) = c;
# 1368
    mtime = name_mtime(libbuf);
    }
# 1369
    if (mtime != 1ULL) {
      {
# 1371
      (*lib) = xstrdup((char const   *)libbuf);
      }
# 1372
      if ((unsigned int )mtime_ptr != (unsigned int )((uintmax_t *)0)) {
        {
# 1373
        (*mtime_ptr) = mtime;
        }
      }
# 1374
      return (1);
    }
    {
# 1379
    file = libbuf;
# 1380
    tmp___3 = vpath_search(& file, mtime_ptr);
    }
# 1380
    if (tmp___3) {
      {
# 1382
      (*lib) = file;
      }
# 1383
      return (1);
    }
# 1388
    if (buflen) {
      {
# 1399
      tmp___5 = strlen((char const   *)libbuf);
      }
# 1399
      if ((unsigned int )buflen < tmp___5) {
        {
# 1401
        buflen = (int )strlen((char const   *)libbuf);
# 1402
        buf___0 = xrealloc(buf___0,
                           (unsigned int )((libdir_maxlen + buflen) + 2));
        }
      }
    } else {
      {
# 1390
      dp = dirs;
      }
# 1390
      while ((unsigned int )(*dp) != (unsigned int )((char *)0)) {
        {
# 1392
        tmp___4 = (int )strlen((char const   *)(*dp));
# 1392
        l = tmp___4;
        }
# 1393
        if (l > libdir_maxlen) {
          {
# 1394
          libdir_maxlen = l;
          }
        }
        {
# 1390
        dp ++;
        }
      }
      {
# 1396
      buflen = (int )strlen((char const   *)libbuf);
# 1397
      buf___0 = xmalloc((unsigned int )((libdir_maxlen + buflen) + 2));
      }
    }
    {
# 1405
    dp = dirs;
    }
# 1405
    while ((unsigned int )(*dp) != (unsigned int )((char *)0)) {
      {
# 1407
      sprintf((char */* __restrict  */)buf___0,
              (char const   */* __restrict  */)((char const   *)"%s/%s"), (*dp),
              libbuf);
# 1408
      mtime = name_mtime(buf___0);
      }
# 1409
      if (mtime != 1ULL) {
        {
# 1411
        (*lib) = xstrdup((char const   *)buf___0);
        }
# 1412
        if ((unsigned int )mtime_ptr != (unsigned int )((uintmax_t *)0)) {
          {
# 1413
          (*mtime_ptr) = mtime;
          }
        }
# 1414
        return (1);
      }
      {
# 1405
      dp ++;
      }
    }
  }
# 1419
  return (0);
}
}
# 26 "remote-stub.c"
char *remote_description   = (char *)0;
# 30
void remote_setup(void) 
{ 

  {
# 33
  return;
}
}
# 37
void remote_cleanup(void) 
{ 

  {
# 40
  return;
}
}
# 44
int start_remote_job_p(int first_p ) 
{ 

  {
# 48
  return (0);
}
}
# 58
int start_remote_job(char **argv , char **envp , int stdin_fd , int *is_remote ,
                     int *id_ptr , int *used_stdin ) 
{ 

  {
# 66
  return (-1);
}
}
# 75
int remote_status(int *exit_code_ptr , int *signal_ptr , int *coredump_ptr ,
                  int block ) 
{ int *tmp ;

  {
  {
# 80
  tmp = __errno_location();
# 80
  (*tmp) = 10;
  }
# 81
  return (-1);
}
}
# 87
void block_remote_children(void) 
{ 

  {
# 90
  return;
}
}
# 96
void unblock_remote_children(void) 
{ 

  {
# 99
  return;
}
}
# 103
int remote_kill(int id , int sig ) 
{ 

  {
# 108
  return (-1);
}
}
# 28 "rule.c"
static void freerule(struct rule *rule , struct rule *lastrule ) ;
# 56
static struct pattern_var *pattern_vars  ;
# 60
static struct pattern_var *last_pattern_var  ;
# 76
void count_implicit_rule_limits(void) 
{ char *name ;
  unsigned int namelen ;
  register struct rule *rule ;
  register struct rule *lastrule ;
  unsigned int ndeps ;
  register struct dep *dep ;
  struct rule *next ;
  unsigned int ntargets ;
  unsigned int len ;
  unsigned int tmp ;
  char *p ;
  char *tmp___0 ;
  char *p2 ;
  char *tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  {
# 83
  max_pattern_deps = 0U;
# 83
  max_pattern_targets = max_pattern_deps;
# 83
  num_pattern_rules = max_pattern_targets;
# 84
  max_pattern_dep_length = 0U;
# 86
  name = (char *)0;
# 87
  namelen = 0U;
# 88
  rule = pattern_rules;
# 89
  lastrule = (struct rule *)0;
  }
# 90
  while ((unsigned int )rule != (unsigned int )((struct rule *)0)) {
    {
# 92
    ndeps = 0U;
# 94
    next = rule->next;
# 97
    num_pattern_rules = num_pattern_rules + 1U;
# 99
    ntargets = 0U;
    }
# 100
    while ((unsigned int )(*(rule->targets + ntargets)) !=
           (unsigned int )((char *)0)) {
      {
# 101
      ntargets ++;
      }
    }
# 103
    if (ntargets > max_pattern_targets) {
      {
# 104
      max_pattern_targets = ntargets;
      }
    }
    {
# 106
    dep = rule->deps;
    }
# 106
    while ((unsigned int )dep != (unsigned int )((struct dep *)0)) {
      {
# 108
      tmp = strlen((char const   *)dep->name);
# 108
      len = tmp;
# 117
      tmp___0 = strrchr((char const   *)dep->name, (int )'/');
# 117
      p = tmp___0;
      }
# 118
      if ((unsigned int )p != (unsigned int )((char *)0)) {
        {
# 118
        tmp___2 = strchr((char const   *)dep->name, (int )'%');
        }
      } else {
        {
# 118
        tmp___2 = (char *)0;
        }
      }
      {
# 118
      p2 = tmp___2;
# 120
      ndeps ++;
      }
# 122
      if (len > max_pattern_dep_length) {
        {
# 123
        max_pattern_dep_length = len;
        }
      }
# 125
      if ((unsigned int )p != (unsigned int )((char *)0)) {
# 125
        if ((unsigned int )p2 > (unsigned int )p) {
# 129
          if ((unsigned int )p == (unsigned int )dep->name) {
            {
# 130
            p ++;
            }
          }
# 131
          if ((unsigned int )(p - dep->name) > namelen) {
# 133
            if ((unsigned int )name != (unsigned int )((char *)0)) {
              {
# 134
              free((void *)name);
              }
            }
            {
# 135
            namelen = (unsigned int )(p - dep->name);
# 136
            tmp___3 = xmalloc(namelen + 1U);
# 136
            name = tmp___3;
            }
          }
          {
# 138
          memmove((void *)name, (void const   *)dep->name,
                  (unsigned int )(p - dep->name));
# 139
          (*(name + (p - dep->name))) = '\0';
# 145
          tmp___4 = dir_file_exists_p(name, "");
          }
# 145
          if (tmp___4) {
            {
# 145
            tmp___5 = 0;
            }
          } else {
            {
# 145
            tmp___5 = 1;
            }
          }
          {
# 145
          dep->changed = (unsigned int )tmp___5;
          }
# 149
          if (dep->changed) {
# 149
            if ((int )(*name) == 47) {
              {
# 156
              freerule(rule, lastrule);
# 157
              num_pattern_rules = num_pattern_rules - 1U;
              }
              goto end_main_loop;
            }
          }
        } else {
          {
# 163
          dep->changed = 0U;
          }
        }
      } else {
        {
# 163
        dep->changed = 0U;
        }
      }
      {
# 106
      dep = dep->next;
      }
    }
# 166
    if (ndeps > max_pattern_deps) {
      {
# 167
      max_pattern_deps = ndeps;
      }
    }
    {
# 169
    lastrule = rule;
    }
    end_main_loop: 
    {
# 171
    rule = next;
    }
  }
# 174
  if ((unsigned int )name != (unsigned int )((char *)0)) {
    {
# 175
    free((void *)name);
    }
  }
# 176
  return;
}
}
# 184
static void convert_suffix_rule(char *target , char *source ,
                                struct commands *cmds ) 
{ char *targname ;
  char *targpercent ;
  char *depname ;
  char **names ;
  char **percents ;
  struct dep *deps ;
  unsigned int len ;

  {
# 194
  if ((unsigned int )target == (unsigned int )((char *)0)) {
    {
# 201
    targname = savestring((char const   *)"(%.o)", 5U);
# 203
    targpercent = targname + 1;
    }
  } else {
    {
# 208
    len = strlen((char const   *)target);
# 209
    targname = xmalloc((1U + len) + 1U);
# 210
    (*(targname + 0)) = '%';
# 211
    memmove((void *)(targname + 1), (void const   *)target, len + 1U);
# 212
    targpercent = targname;
    }
  }
  {
# 215
  names = (char **)xmalloc(2U * sizeof(char *));
# 216
  percents = (char **)__builtin_alloca(2U * sizeof(char *));
# 217
  (*(names + 0)) = targname;
# 218
  (*(percents + 0)) = targpercent;
# 219
  (*(percents + 1)) = (char *)0;
# 219
  (*(names + 1)) = (*(percents + 1));
  }
# 221
  if ((unsigned int )source == (unsigned int )((char *)0)) {
    {
# 222
    deps = (struct dep *)0;
    }
  } else {
    {
# 226
    len = strlen((char const   *)source);
# 227
    depname = xmalloc((1U + len) + 1U);
# 228
    (*(depname + 0)) = '%';
# 229
    memmove((void *)(depname + 1), (void const   *)source, len + 1U);
# 230
    deps = (struct dep *)xmalloc(sizeof(struct dep ));
# 231
    deps->next = (struct dep *)0;
# 232
    deps->name = depname;
# 233
    deps->ignore_mtime = 0U;
    }
  }
  {
# 236
  create_pattern_rule(names, percents, 0, deps, cmds, 0);
  }
# 237
  return;
}
}
# 243
void convert_to_pattern(void) 
{ register struct dep *d ;
  register struct dep *d2 ;
  register struct file *f ;
  register char *rulename ;
  register unsigned int slen ;
  register unsigned int s2len ;
  register unsigned int namelen ;
  char *tmp ;
  unsigned int tmp___0 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  char *tmp___12 ;
  char *tmp___13 ;
  int tmp___14 ;
  char *tmp___15 ;
  char *tmp___16 ;
  char *tmp___17 ;
  char *tmp___18 ;

  {
  {
# 253
  maxsuffix = 0U;
# 254
  d = suffix_file->deps;
  }
# 254
  while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
# 256
    if ((unsigned int )d->name == (unsigned int )((char *)0)) {
      {
# 256
      tmp = (d->file)->name;
      }
    } else {
      {
# 256
      tmp = d->name;
      }
    }
    {
# 256
    tmp___0 = strlen((char const   *)tmp);
# 256
    namelen = tmp___0;
    }
# 257
    if (namelen > maxsuffix) {
      {
# 258
      maxsuffix = namelen;
      }
    }
    {
# 254
    d = d->next;
    }
  }
  {
# 261
  rulename = (char *)__builtin_alloca(maxsuffix * 2U + 1U);
# 263
  d = suffix_file->deps;
  }
# 263
  while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
# 267
    if ((unsigned int )d->name == (unsigned int )((char *)0)) {
      {
# 267
      tmp___2 = (d->file)->name;
      }
    } else {
      {
# 267
      tmp___2 = d->name;
      }
    }
    {
# 267
    convert_suffix_rule(tmp___2, (char *)0, (struct commands *)0);
# 269
    f = d->file;
    }
# 270
    if ((unsigned int )f->cmds != (unsigned int )((struct commands *)0)) {
# 272
      if ((unsigned int )d->name == (unsigned int )((char *)0)) {
        {
# 272
        tmp___3 = (d->file)->name;
        }
      } else {
        {
# 272
        tmp___3 = d->name;
        }
      }
      {
# 272
      convert_suffix_rule("", tmp___3, f->cmds);
      }
    }
# 275
    if ((unsigned int )d->name == (unsigned int )((char *)0)) {
      {
# 275
      tmp___4 = (d->file)->name;
      }
    } else {
      {
# 275
      tmp___4 = d->name;
      }
    }
    {
# 275
    slen = strlen((char const   *)tmp___4);
    }
# 276
    if ((unsigned int )d->name == (unsigned int )((char *)0)) {
      {
# 276
      tmp___5 = (d->file)->name;
      }
    } else {
      {
# 276
      tmp___5 = d->name;
      }
    }
    {
# 276
    memmove((void *)rulename, (void const   *)tmp___5, slen);
# 277
    d2 = suffix_file->deps;
    }
# 277
    while ((unsigned int )d2 != (unsigned int )((struct dep *)0)) {
# 279
      if ((unsigned int )d2->name == (unsigned int )((char *)0)) {
        {
# 279
        tmp___6 = (d2->file)->name;
        }
      } else {
        {
# 279
        tmp___6 = d2->name;
        }
      }
      {
# 279
      s2len = strlen((char const   *)tmp___6);
      }
# 281
      if (slen == s2len) {
# 281
        if ((unsigned int )d->name == (unsigned int )((char *)0)) {
          {
# 281
          tmp___7 = (d->file)->name;
          }
        } else {
          {
# 281
          tmp___7 = d->name;
          }
        }
# 281
        if ((unsigned int )d2->name == (unsigned int )((char *)0)) {
          {
# 281
          tmp___8 = (d2->file)->name;
          }
        } else {
          {
# 281
          tmp___8 = d2->name;
          }
        }
# 281
        if ((unsigned int )tmp___7 == (unsigned int )tmp___8) {
          goto __Cont;
        } else {
# 281
          if ((unsigned int )d->name == (unsigned int )((char *)0)) {
            {
# 281
            tmp___9 = (d->file)->name;
            }
          } else {
            {
# 281
            tmp___9 = d->name;
            }
          }
# 281
          if ((unsigned int )d2->name == (unsigned int )((char *)0)) {
            {
# 281
            tmp___10 = (d2->file)->name;
            }
          } else {
            {
# 281
            tmp___10 = d2->name;
            }
          }
# 281
          if ((int )(*tmp___9) == (int )(*tmp___10)) {
# 281
            if ((unsigned int )d->name == (unsigned int )((char *)0)) {
              {
# 281
              tmp___11 = (d->file)->name;
              }
            } else {
              {
# 281
              tmp___11 = d->name;
              }
            }
# 281
            if ((int )(*tmp___11) == 0) {
              goto __Cont;
            } else {
# 281
              if ((unsigned int )d2->name == (unsigned int )((char *)0)) {
                {
# 281
                tmp___12 = (d2->file)->name;
                }
              } else {
                {
# 281
                tmp___12 = d2->name;
                }
              }
# 281
              if ((unsigned int )d->name == (unsigned int )((char *)0)) {
                {
# 281
                tmp___13 = (d->file)->name;
                }
              } else {
                {
# 281
                tmp___13 = d->name;
                }
              }
              {
# 281
              tmp___14 = strcmp((char const   *)(tmp___13 + 1),
                                (char const   *)(tmp___12 + 1));
              }
# 281
              if (! tmp___14) {
                goto __Cont;
              }
            }
          }
        }
      }
# 284
      if ((unsigned int )d2->name == (unsigned int )((char *)0)) {
        {
# 284
        tmp___15 = (d2->file)->name;
        }
      } else {
        {
# 284
        tmp___15 = d2->name;
        }
      }
      {
# 284
      memmove((void *)(rulename + slen), (void const   *)tmp___15, s2len + 1U);
# 285
      f = lookup_file(rulename);
      }
# 286
      if ((unsigned int )f == (unsigned int )((struct file *)0)) {
        goto __Cont;
      } else {
# 286
        if ((unsigned int )f->cmds == (unsigned int )((struct commands *)0)) {
          goto __Cont;
        }
      }
# 289
      if (s2len == 2U) {
# 289
        if ((int )(*(rulename + slen)) == 46) {
# 289
          if ((int )(*(rulename + (slen + 1U))) == 97) {
# 292
            if ((unsigned int )d->name == (unsigned int )((char *)0)) {
              {
# 292
              tmp___16 = (d->file)->name;
              }
            } else {
              {
# 292
              tmp___16 = d->name;
              }
            }
            {
# 292
            convert_suffix_rule((char *)0, tmp___16, f->cmds);
            }
          }
        }
      }
# 298
      if ((unsigned int )d->name == (unsigned int )((char *)0)) {
        {
# 298
        tmp___17 = (d->file)->name;
        }
      } else {
        {
# 298
        tmp___17 = d->name;
        }
      }
# 298
      if ((unsigned int )d2->name == (unsigned int )((char *)0)) {
        {
# 298
        tmp___18 = (d2->file)->name;
        }
      } else {
        {
# 298
        tmp___18 = d2->name;
        }
      }
      {
# 298
      convert_suffix_rule(tmp___18, tmp___17, f->cmds);
      }
      __Cont: 
      {
# 277
      d2 = d2->next;
      }
    }
    {
# 263
    d = d->next;
    }
  }
# 301
  return;
}
}
# 312
int new_pattern_rule(struct rule *rule , int override ) 
{ register struct rule *r ;
  register struct rule *lastrule ;
  register unsigned int i ;
  register unsigned int j ;
  int tmp ;
  register struct dep *d ;
  register struct dep *d2 ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  int tmp___7 ;

  {
  {
# 320
  rule->in_use = (char )0;
# 321
  rule->terminal = (char )0;
# 323
  rule->next = (struct rule *)0;
# 326
  lastrule = (struct rule *)0;
# 327
  r = pattern_rules;
  }
# 327
  while ((unsigned int )r != (unsigned int )((struct rule *)0)) {
    {
# 328
    i = 0U;
    }
# 328
    while ((unsigned int )(*(rule->targets + i)) != (unsigned int )((char *)0)) {
      {
# 330
      j = 0U;
      }
# 330
      while ((unsigned int )(*(r->targets + j)) != (unsigned int )((char *)0)) {
# 331
        if (! ((unsigned int )(*(rule->targets + i)) ==
               (unsigned int )(*(r->targets + j)))) {
# 331
          if ((int )(*((*(rule->targets + i)))) ==
              (int )(*((*(r->targets + j))))) {
# 331
            if (! ((int )(*((*(rule->targets + i)))) == 0)) {
              {
# 331
              tmp = strcmp((char const   *)((*(rule->targets + i)) + 1),
                           (char const   *)((*(r->targets + j)) + 1));
              }
# 331
              if (tmp) {
# 332
                break;
              }
            }
          } else {
# 332
            break;
          }
        }
        {
# 330
        j ++;
        }
      }
# 333
      if ((unsigned int )(*(r->targets + j)) == (unsigned int )((char *)0)) {
        {
# 337
        d = rule->deps;
# 337
        d2 = r->deps;
        }
# 337
        while (1) {
# 337
          if ((unsigned int )d != (unsigned int )((struct dep *)0)) {
# 337
            if (! ((unsigned int )d2 != (unsigned int )((struct dep *)0))) {
# 337
              break;
            }
          } else {
# 337
            break;
          }
# 339
          if ((unsigned int )d->name == (unsigned int )((char *)0)) {
            {
# 339
            tmp___0 = (d->file)->name;
            }
          } else {
            {
# 339
            tmp___0 = d->name;
            }
          }
# 339
          if ((unsigned int )d2->name == (unsigned int )((char *)0)) {
            {
# 339
            tmp___1 = (d2->file)->name;
            }
          } else {
            {
# 339
            tmp___1 = d2->name;
            }
          }
# 339
          if (! ((unsigned int )tmp___0 == (unsigned int )tmp___1)) {
# 339
            if ((unsigned int )d->name == (unsigned int )((char *)0)) {
              {
# 339
              tmp___2 = (d->file)->name;
              }
            } else {
              {
# 339
              tmp___2 = d->name;
              }
            }
# 339
            if ((unsigned int )d2->name == (unsigned int )((char *)0)) {
              {
# 339
              tmp___3 = (d2->file)->name;
              }
            } else {
              {
# 339
              tmp___3 = d2->name;
              }
            }
# 339
            if ((int )(*tmp___2) == (int )(*tmp___3)) {
# 339
              if ((unsigned int )d->name == (unsigned int )((char *)0)) {
                {
# 339
                tmp___4 = (d->file)->name;
                }
              } else {
                {
# 339
                tmp___4 = d->name;
                }
              }
# 339
              if (! ((int )(*tmp___4) == 0)) {
# 339
                if ((unsigned int )d2->name == (unsigned int )((char *)0)) {
                  {
# 339
                  tmp___5 = (d2->file)->name;
                  }
                } else {
                  {
# 339
                  tmp___5 = d2->name;
                  }
                }
# 339
                if ((unsigned int )d->name == (unsigned int )((char *)0)) {
                  {
# 339
                  tmp___6 = (d->file)->name;
                  }
                } else {
                  {
# 339
                  tmp___6 = d->name;
                  }
                }
                {
# 339
                tmp___7 = strcmp((char const   *)(tmp___6 + 1),
                                 (char const   *)(tmp___5 + 1));
                }
# 339
                if (tmp___7) {
# 340
                  break;
                }
              }
            } else {
# 340
              break;
            }
          }
          {
# 337
          d = d->next;
# 337
          d2 = d2->next;
          }
        }
# 341
        if ((unsigned int )d == (unsigned int )((struct dep *)0)) {
# 341
          if ((unsigned int )d2 == (unsigned int )((struct dep *)0)) {
# 344
            if (override) {
              {
# 347
              freerule(r, lastrule);
              }
# 349
              if ((unsigned int )pattern_rules ==
                  (unsigned int )((struct rule *)0)) {
                {
# 350
                pattern_rules = rule;
                }
              } else {
                {
# 352
                last_pattern_rule->next = rule;
                }
              }
              {
# 353
              last_pattern_rule = rule;
              }
              goto matched;
            } else {
              {
# 361
              freerule(rule, (struct rule *)0);
              }
# 362
              return (0);
            }
          }
        }
      }
      {
# 328
      i ++;
      }
    }
    {
# 327
    lastrule = r;
# 327
    r = r->next;
    }
  }
  matched: 
  {

  }
# 370
  if ((unsigned int )r == (unsigned int )((struct rule *)0)) {
# 373
    if ((unsigned int )pattern_rules == (unsigned int )((struct rule *)0)) {
      {
# 374
      pattern_rules = rule;
      }
    } else {
      {
# 376
      last_pattern_rule->next = rule;
      }
    }
    {
# 377
    last_pattern_rule = rule;
    }
  }
# 380
  return (1);
}
}
# 389
void install_pattern_rule(struct pspec *p , int terminal ) 
{ register struct rule *r ;
  char *ptr ;
  struct nameseq *tmp___3 ;
  int tmp___6 ;

  {
  {
# 397
  r = (struct rule *)xmalloc(sizeof(struct rule ));
# 399
  r->targets = (char **)xmalloc(2U * sizeof(char *));
# 400
  r->suffixes = (char **)xmalloc(2U * sizeof(char *));
# 401
  r->lens = (unsigned int *)xmalloc(2U * sizeof(unsigned int ));
# 403
  (*(r->targets + 1)) = (char *)0;
# 404
  (*(r->suffixes + 1)) = (char *)0;
# 405
  (*(r->lens + 1)) = 0U;
# 407
  (*(r->lens + 0)) = strlen((char const   *)p->target);
# 410
  (*(r->targets + 0)) = savestring((char const   *)p->target, (*(r->lens + 0)));
# 411
  (*(r->suffixes + 0)) = find_percent((*(r->targets + 0)));
  }
# 412
  if ((unsigned int )(*(r->suffixes + 0)) == (unsigned int )((char *)0)) {
    {
# 414
    abort();
    }
  } else {
    {
# 416
    (*(r->suffixes + 0)) = (*(r->suffixes + 0)) + 1;
    }
  }
  {
# 418
  ptr = p->dep;
# 419
  tmp___3 = parse_file_seq(& ptr, (int )'\0', sizeof(struct dep ), 1);
# 419
  r->deps = (struct dep *)multi_glob(tmp___3, sizeof(struct dep ));
# 423
  tmp___6 = new_pattern_rule(r, 0);
  }
# 423
  if (tmp___6) {
    {
# 425
    r->terminal = (char )terminal;
# 426
    r->cmds = (struct commands *)xmalloc(sizeof(struct commands ));
# 427
    (r->cmds)->fileinfo.filenm = (char *)0;
# 428
    (r->cmds)->fileinfo.lineno = 0UL;
# 431
    (r->cmds)->commands = xstrdup((char const   *)p->commands);
# 432
    (r->cmds)->command_lines = (char **)0;
    }
  }
# 434
  return;
}
}
# 441
static void freerule(struct rule *rule , struct rule *lastrule ) 
{ struct rule *next ;
  register unsigned int i ;
  register struct dep *dep ;
  struct dep *t ;

  {
  {
# 445
  next = rule->next;
# 449
  i = 0U;
  }
# 449
  while ((unsigned int )(*(rule->targets + i)) != (unsigned int )((char *)0)) {
    {
# 450
    free((void *)(*(rule->targets + i)));
# 449
    i ++;
    }
  }
  {
# 452
  dep = rule->deps;
  }
# 453
  while (dep) {
    {
# 457
    t = dep->next;
# 460
    free((void *)((char *)dep));
# 461
    dep = t;
    }
  }
  {
# 464
  free((void *)((char *)rule->targets));
# 465
  free((void *)((char *)rule->suffixes));
# 466
  free((void *)((char *)rule->lens));
# 479
  free((void *)((char *)rule));
  }
# 481
  if ((unsigned int )pattern_rules == (unsigned int )rule) {
# 482
    if ((unsigned int )lastrule != (unsigned int )((struct rule *)0)) {
      {
# 483
      abort();
      }
    } else {
      {
# 485
      pattern_rules = next;
      }
    }
  } else {
# 486
    if ((unsigned int )lastrule != (unsigned int )((struct rule *)0)) {
      {
# 487
      lastrule->next = next;
      }
    }
  }
# 488
  if ((unsigned int )last_pattern_rule == (unsigned int )rule) {
    {
# 489
    last_pattern_rule = lastrule;
    }
  }
# 490
  return;
}
}
# 503
void create_pattern_rule(char **targets , char **target_percents ,
                         int terminal , struct dep *deps ,
                         struct commands *commands , int override ) 
{ register struct rule *r ;
  struct rule *tmp ;
  register unsigned int max_targets ;
  register unsigned int i ;
  char *tmp___5 ;
  int tmp___8 ;

  {
  {
# 512
  tmp = (struct rule *)xmalloc(sizeof(struct rule ));
# 512
  r = tmp;
# 515
  r->cmds = commands;
# 516
  r->deps = deps;
# 517
  r->targets = targets;
# 519
  max_targets = 2U;
# 520
  r->lens = (unsigned int *)xmalloc(2U * sizeof(unsigned int ));
# 521
  r->suffixes = (char **)xmalloc(2U * sizeof(char *));
# 522
  i = 0U;
  }
# 522
  while ((unsigned int )(*(targets + i)) != (unsigned int )((char *)0)) {
# 524
    if (i == max_targets - 1U) {
      {
# 526
      max_targets += 5U;
# 527
      r->lens = (unsigned int *)xrealloc((char *)r->lens,
                                         max_targets * sizeof(unsigned int ));
# 529
      r->suffixes = (char **)xrealloc((char *)r->suffixes,
                                      max_targets * sizeof(char *));
      }
    }
    {
# 532
    (*(r->lens + i)) = strlen((char const   *)(*(targets + i)));
    }
# 533
    if ((unsigned int )target_percents == (unsigned int )((char **)0)) {
      {
# 533
      tmp___5 = find_percent((*(targets + i)));
      }
    } else {
      {
# 533
      tmp___5 = (*(target_percents + i));
      }
    }
    {
# 533
    (*(r->suffixes + i)) = tmp___5 + 1;
    }
# 535
    if ((unsigned int )(*(r->suffixes + i)) == (unsigned int )((char *)0)) {
      {
# 536
      abort();
      }
    }
    {
# 522
    i ++;
    }
  }
# 539
  if (i < max_targets - 1U) {
    {
# 541
    r->lens = (unsigned int *)xrealloc((char *)r->lens,
                                       (i + 1U) * sizeof(unsigned int ));
# 543
    r->suffixes = (char **)xrealloc((char *)r->suffixes,
                                    (i + 1U) * sizeof(char *));
    }
  }
  {
# 547
  tmp___8 = new_pattern_rule(r, override);
  }
# 547
  if (tmp___8) {
    {
# 548
    r->terminal = (char )terminal;
    }
  }
# 549
  return;
}
}
# 553
struct pattern_var *create_pattern_var(char *target , char *suffix ) 
{ register struct pattern_var *p ;
  unsigned int len ;
  unsigned int tmp ;
  int tmp___0 ;

  {
  {
# 557
  p = (struct pattern_var *)0;
# 558
  tmp = strlen((char const   *)target);
# 558
  len = tmp;
# 561
  p = pattern_vars;
  }
# 561
  while ((unsigned int )p != (unsigned int )((void *)0)) {
# 562
    if (p->len == len) {
      {
# 562
      tmp___0 = strcmp((char const   *)p->target, (char const   *)target);
      }
# 562
      if (! tmp___0) {
# 563
        break;
      }
    }
    {
# 561
    p = p->next;
    }
  }
# 565
  if ((unsigned int )p == (unsigned int )((struct pattern_var *)0)) {
    {
# 567
    p = (struct pattern_var *)xmalloc(sizeof(struct pattern_var ));
    }
# 568
    if ((unsigned int )last_pattern_var !=
        (unsigned int )((struct pattern_var *)0)) {
      {
# 569
      last_pattern_var->next = p;
      }
    } else {
      {
# 571
      pattern_vars = p;
      }
    }
    {
# 572
    last_pattern_var = p;
# 573
    p->next = (struct pattern_var *)0;
# 574
    p->target = target;
# 575
    p->len = len;
# 576
    p->suffix = suffix + 1;
# 577
    p->vars = create_new_variable_set();
    }
  }
# 580
  return (p);
}
}
# 585
struct pattern_var *lookup_pattern_var(char *target ) 
{ struct pattern_var *p ;
  unsigned int targlen ;
  unsigned int tmp ;
  char *stem ;
  unsigned int stemlen ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
# 590
  tmp = strlen((char const   *)target);
# 590
  targlen = tmp;
# 592
  p = pattern_vars;
  }
# 592
  while ((unsigned int )p != (unsigned int )((struct pattern_var *)0)) {
# 597
    if (p->len > targlen) {
      goto __Cont;
    }
    {
# 603
    stem = target + ((p->suffix - p->target) - 1);
# 604
    stemlen = (targlen - p->len) + 1U;
    }
# 607
    if ((unsigned int )stem > (unsigned int )target) {
      {
# 607
      tmp___0 = strncmp((char const   *)p->target, (char const   *)target,
                        (unsigned int )(stem - target));
      }
# 607
      if (! (tmp___0 == 0)) {
        goto __Cont;
      }
    }
# 615
    if ((int )(*(p->suffix)) == (int )(*(stem + stemlen))) {
# 615
      if ((int )(*(p->suffix)) == 0) {
# 617
        break;
      } else {
# 615
        if ((unsigned int )(p->suffix + 1) ==
            (unsigned int )(stem + (stemlen + 1U))) {
# 617
          break;
        } else {
# 615
          if ((int )(*(p->suffix + 1)) == (int )(*(stem + (stemlen + 1U)))) {
# 615
            if ((int )(*(p->suffix + 1)) == 0) {
# 617
              break;
            } else {
              {
# 615
              tmp___1 = strcmp((char const   *)((p->suffix + 1) + 1),
                               (char const   *)((stem + (stemlen + 1U)) + 1));
              }
# 615
              if (! tmp___1) {
# 617
                break;
              }
            }
          }
        }
      }
    }
    __Cont: 
    {
# 592
    p = p->next;
    }
  }
# 620
  return (p);
}
}
# 625
static void print_rule(struct rule *r ) 
{ register unsigned int i ;
  register struct dep *d ;
  FILE * __restrict  tmp ;
  char *tmp___0 ;

  {
  {
# 632
  i = 0U;
  }
# 632
  while ((unsigned int )(*(r->targets + i)) != (unsigned int )((char *)0)) {
    {
# 634
    tmp = (FILE */* __restrict  */)get_stdout();
    {
# 105 "spec.work"
    tmp->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 40
    if (! (tmp->__BLAST_FLAG == 1)) {
# 42
      __error__();
    }
    {

    }
    }
# 634 "rule.c"
    fputs((char const   */* __restrict  */)((char const   *)(*(r->targets + i))),
          tmp);
    }
# 635
    if ((unsigned int )(*(r->targets + (i + 1U))) != (unsigned int )((char *)0)) {
      {
# 636
      putchar__extinline((int )' ');
      }
    } else {
      {
# 638
      putchar__extinline((int )':');
      }
    }
    {
# 632
    i ++;
    }
  }
# 640
  if (r->terminal) {
    {
# 641
    putchar__extinline((int )':');
    }
  }
  {
# 643
  d = r->deps;
  }
# 643
  while ((unsigned int )d != (unsigned int )((struct dep *)0)) {
# 644
    if ((unsigned int )d->name == (unsigned int )((char *)0)) {
      {
# 644
      tmp___0 = (d->file)->name;
      }
    } else {
      {
# 644
      tmp___0 = d->name;
      }
    }
    {
# 644
    printf((char const   */* __restrict  */)((char const   *)" %s"), tmp___0);
# 643
    d = d->next;
    }
  }
  {
# 645
  putchar__extinline((int )'\n');
  }
# 647
  if ((unsigned int )r->cmds != (unsigned int )((struct commands *)0)) {
    {
# 648
    print_commands(r->cmds);
    }
  }
# 649
  return;
}
}
# 651
void print_rule_data_base(void) 
{ register unsigned int rules ;
  register unsigned int terminal ;
  register struct rule *r ;
  char const   *tmp ;
  char const   *tmp___0 ;
  char const   * __restrict  tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  struct pattern_var *p ;
  char const   *tmp___5 ;
  char const   * __restrict  tmp___6 ;

  {
  {
# 657
  tmp = (char const   *)dcgettext((char const   *)((void *)0),
                                  (char const   *)"\n# Implicit Rules", 5);
# 657
  puts(tmp);
# 659
  terminal = 0U;
# 659
  rules = terminal;
# 660
  r = pattern_rules;
  }
# 660
  while ((unsigned int )r != (unsigned int )((struct rule *)0)) {
    {
# 662
    rules ++;
# 664
    putchar__extinline((int )'\n');
# 665
    print_rule(r);
    }
# 667
    if (r->terminal) {
      {
# 668
      terminal ++;
      }
    }
    {
# 660
    r = r->next;
    }
  }
# 671
  if (rules == 0U) {
    {
# 672
    tmp___0 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"\n# No implicit rules.",
                                        5);
# 672
    puts(tmp___0);
    }
  } else {
    {
# 675
    tmp___1 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                         (char const   *)"\n# %u implicit rules, %u",
                                                         5);
# 675
    printf(tmp___1, rules, terminal);
# 677
    printf((char const   */* __restrict  */)((char const   *)" (%.1f%%)"),
           ((double )terminal / (double )rules) * 100.0);
# 684
    tmp___2 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)" terminal.", 5);
# 684
    puts(tmp___2);
    }
  }
# 687
  if (num_pattern_rules != rules) {
# 691
    if (num_pattern_rules != 0U) {
      {
# 692
      tmp___3 = (char const   *)dcgettext((char const   *)((void *)0),
                                          (char const   *)"BUG: num_pattern_rules wrong!  %u != %u",
                                          5);
# 692
      fatal((struct floc  const  *)((struct floc *)0), tmp___3,
            num_pattern_rules, rules);
      }
    }
  }
  {
# 696
  tmp___4 = (char const   *)dcgettext((char const   *)((void *)0),
                                      (char const   *)"\n# Pattern-specific variable values",
                                      5);
# 696
  puts(tmp___4);
# 701
  rules = 0U;
# 702
  p = pattern_vars;
  }
# 702
  while ((unsigned int )p != (unsigned int )((struct pattern_var *)0)) {
    {
# 704
    rules ++;
# 706
    printf((char const   */* __restrict  */)((char const   *)"\n%s :\n"),
           p->target);
# 707
    print_variable_set((p->vars)->set, "# ");
# 702
    p = p->next;
    }
  }
# 710
  if (rules == 0U) {
    {
# 711
    tmp___5 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"\n# No pattern-specific variable values.",
                                        5);
# 711
    puts(tmp___5);
    }
  } else {
    {
# 714
    tmp___6 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                         (char const   *)"\n# %u pattern-specific variable values",
                                                         5);
# 714
    printf(tmp___6, rules);
    }
  }
# 717
  return;
}
}
# 35 "variable.c"
static unsigned long variable_hash_1(void const   *keyv ) 
{ struct variable  const  *key ;
  unsigned long _result_ ;
  unsigned char const   *_key_ ;
  int _n_ ;

  {
  {
# 39
  key = (struct variable  const  *)keyv;
  }
# 40
  while (1) {
    {
# 40
    _result_ = 0UL;
    }
# 40
    while (1) {
      {
# 40
      _key_ = (unsigned char const   *)key->name - 1;
# 40
      _n_ = key->length;
      }
# 40
      if (_n_) {
# 40
        while (1) {
          {
# 40
          _n_ --;
          }
# 40
          if (_n_) {
            {
# 40
            _key_ ++;
            }
# 40
            if (! (*_key_)) {
# 40
              break;
            }
          } else {
# 40
            break;
          }
          {
# 40
          _result_ += (unsigned long )((int const   )(*_key_) <<
                                       ((int const   )(*(_key_ + 1)) & 15));
          }
        }
      }
      {
# 40
      _key_ ++;
# 40
      _result_ += (unsigned long )(*_key_);
      }
# 40
      break;
    }
# 40
    return (_result_);
# 40
    break;
  }
# 41
  return (0UL);
}
}
# 43
static unsigned long variable_hash_2(void const   *keyv ) 
{ struct variable  const  *key ;
  unsigned long _result_ ;
  unsigned char const   *_key_ ;
  int _n_ ;

  {
  {
# 47
  key = (struct variable  const  *)keyv;
  }
# 48
  while (1) {
    {
# 48
    _result_ = 0UL;
    }
# 48
    while (1) {
      {
# 48
      _key_ = (unsigned char const   *)key->name - 1;
# 48
      _n_ = key->length;
      }
# 48
      if (_n_) {
# 48
        while (1) {
          {
# 48
          _n_ --;
          }
# 48
          if (_n_) {
            {
# 48
            _key_ ++;
            }
# 48
            if (! (*_key_)) {
# 48
              break;
            }
          } else {
# 48
            break;
          }
          {
# 48
          _result_ += (unsigned long )((int const   )(*_key_) <<
                                       ((int const   )(*(_key_ + 1)) & 7));
          }
        }
      }
      {
# 48
      _key_ ++;
# 48
      _result_ += (unsigned long )(*_key_);
      }
# 48
      break;
    }
# 48
    return (_result_);
# 48
    break;
  }
# 49
  return (0UL);
}
}
# 51
static int variable_hash_cmp(void const   *xv , void const   *yv ) 
{ struct variable  const  *x ;
  struct variable  const  *y ;
  int result___0 ;
  int tmp ;

  {
  {
# 56
  x = (struct variable  const  *)xv;
# 57
  y = (struct variable  const  *)yv;
# 58
  result___0 = x->length - y->length;
  }
# 59
  if (result___0) {
# 60
    return (result___0);
  }
# 61
  while (1) {
    {
# 61
    tmp = strncmp((char const   *)x->name, (char const   *)y->name,
                  (unsigned int )x->length);
    }
# 61
    return (tmp);
# 61
    break;
  }
# 62
  return (0);
}
}
# 74
static struct variable_set global_variable_set  ;
# 75
static struct variable_set_list global_setlist   = {(struct variable_set_list *)0,
                                                    & global_variable_set};
# 77
struct variable_set_list *current_variable_set_list   = & global_setlist;
# 81
void init_hash_global_variable_set(void) 
{ 

  {
  {
# 84
  hash_init(& global_variable_set.table, 523UL, & variable_hash_1,
            & variable_hash_2, & variable_hash_cmp);
  }
# 86
  return;
}
}
# 95
struct variable *define_variable_in_set(char const   *name ,
                                        unsigned int length___0 , char *value ,
                                        enum variable_origin origin ,
                                        int recursive ,
                                        struct variable_set *set ,
                                        struct floc  const  *flocp ) 
{ struct variable *v ;
  struct variable **var_slot ;
  struct variable var_key ;

  {
# 109
  if ((unsigned int )set == (unsigned int )((void *)0)) {
    {
# 110
    set = & global_variable_set;
    }
  }
  {
# 112
  var_key.name = (char *)name;
# 113
  var_key.length = (int )length___0;
# 114
  var_slot = (struct variable **)hash_find_slot(& set->table,
                                                (void const   *)(& var_key));
  }
# 116
  if (env_overrides) {
# 116
    if (origin == 1) {
      {
# 117
      origin = 3;
      }
    }
  }
  {
# 119
  v = (*var_slot);
  }
# 120
  if (! ((unsigned int )v == (unsigned int )((struct variable *)0))) {
# 120
    if (! ((unsigned int )((void *)v) == (unsigned int )hash_deleted_item)) {
# 122
      if (env_overrides) {
# 122
        if (v->origin == 1) {
          {
# 125
          v->origin = 3;
          }
        }
      }
# 130
      if (origin >= v->origin) {
# 132
        if ((unsigned int )v->value != (unsigned int )((char *)0)) {
          {
# 133
          free((void *)v->value);
          }
        }
        {
# 134
        v->value = xstrdup((char const   *)value);
        }
# 135
        if ((unsigned int )flocp != (unsigned int )((struct floc  const  *)0)) {
          {
# 136
          v->fileinfo = (*flocp);
          }
        } else {
          {
# 138
          v->fileinfo.filenm = (char *)0;
          }
        }
        {
# 139
        v->origin = origin;
# 140
        v->recursive = (unsigned int )recursive;
        }
      }
# 142
      return (v);
    }
  }
  {
# 147
  v = (struct variable *)xmalloc(sizeof(struct variable ));
# 148
  v->name = savestring(name, length___0);
# 149
  v->length = (int )length___0;
# 150
  hash_insert_at(& set->table, (void *)v, (void const   *)var_slot);
# 151
  v->value = xstrdup((char const   *)value);
  }
# 152
  if ((unsigned int )flocp != (unsigned int )((struct floc  const  *)0)) {
    {
# 153
    v->fileinfo = (*flocp);
    }
  } else {
    {
# 155
    v->fileinfo.filenm = (char *)0;
    }
  }
  {
# 156
  v->origin = origin;
# 157
  v->recursive = (unsigned int )recursive;
# 158
  v->expanding = 0U;
# 159
  v->exp_count = 0U;
# 160
  v->per_target = 0U;
# 161
  v->append = 0U;
# 162
  v->export = 3;
# 164
  v->exportable = 1U;
  }
# 165
  if ((int const   )(*name) != 95) {
# 165
    if ((int const   )(*name) < 65) {
      goto _L___3;
    } else {
# 165
      if ((int const   )(*name) > 90) {
        _L___3: 
# 165
        if ((int const   )(*name) < 97) {
          {
# 167
          v->exportable = 0U;
          }
        } else {
# 165
          if ((int const   )(*name) > 122) {
            {
# 167
            v->exportable = 0U;
            }
          } else {
            goto _L___2;
          }
        }
      } else {
        goto _L___2;
      }
    }
  } else {
    _L___2: 
    {
# 170
    name ++;
    }
# 170
    while ((int const   )(*name) != 0) {
# 171
      if ((int const   )(*name) != 95) {
# 171
        if ((int const   )(*name) < 97) {
          goto _L___0;
        } else {
# 171
          if ((int const   )(*name) > 122) {
            _L___0: 
# 171
            if ((int const   )(*name) < 65) {
              goto _L;
            } else {
# 171
              if ((int const   )(*name) > 90) {
                _L: 
# 171
                if (! ((unsigned int )(*name) - 48U <= 9U)) {
# 173
                  break;
                }
              }
            }
          }
        }
      }
      {
# 170
      name ++;
      }
    }
# 175
    if ((int const   )(*name) != 0) {
      {
# 176
      v->exportable = 0U;
      }
    }
  }
# 179
  return (v);
}
}
# 196
static struct variable *handle_special_var(struct variable *var ) ;
# 196
static unsigned long last_var_count   = 0UL;
# 192
static struct variable *handle_special_var(struct variable *var ) 
{ unsigned long max ;
  size_t tmp ;
  unsigned long len ;
  char *p ;
  struct variable **vp ;
  struct variable **end ;
  struct variable *v ;
  int l ;
  unsigned long off ;
  char *tmp___0 ;
  int tmp___1 ;

  {
# 224
  if ((unsigned int )var->name == (unsigned int )".VARIABLES") {
    goto _L___0;
  } else {
# 224
    if ((int )(*(var->name)) == (int )(*".VARIABLES")) {
# 224
      if ((int )(*(var->name)) == 0) {
        goto _L___0;
      } else {
        {
# 224
        tmp___1 = strcmp((char const   *)(var->name + 1),
                         (char const   *)(".VARIABLES" + 1));
        }
# 224
        if (! tmp___1) {
          _L___0: 
# 224
          if (global_variable_set.table.ht_fill != last_var_count) {
            {
# 227
            tmp = strlen((char const   *)var->value);
# 227
            max = (unsigned long )((tmp / 500U + 1U) * 500U);
# 230
            vp = (struct variable **)global_variable_set.table.ht_vec;
# 231
            end = vp + global_variable_set.table.ht_size;
# 234
            var->value = xrealloc(var->value, (unsigned int )max);
# 237
            p = var->value;
# 238
            len = 0UL;
            }
# 239
            while ((unsigned int )vp < (unsigned int )end) {
# 240
              if (! ((unsigned int )(*vp) ==
                     (unsigned int )((struct variable *)0))) {
# 240
                if (! ((unsigned int )((void *)(*vp)) ==
                       (unsigned int )hash_deleted_item)) {
                  {
# 242
                  v = (*vp);
# 243
                  l = v->length;
# 245
                  len += (unsigned long )(l + 1);
                  }
# 246
                  if (len > max) {
                    {
# 248
                    off = (unsigned long )(p - var->value);
# 250
                    max += (unsigned long )(((l + 1) / 500 + 1) * 500);
# 251
                    var->value = xrealloc(var->value, (unsigned int )max);
# 252
                    p = var->value + off;
                    }
                  }
                  {
# 255
                  memmove((void *)p, (void const   *)v->name, (unsigned int )l);
# 256
                  p += l;
# 257
                  tmp___0 = p;
# 257
                  p ++;
# 257
                  (*tmp___0) = ' ';
                  }
                }
              }
              {
# 239
              vp ++;
              }
            }
            {
# 259
            (*(p - 1)) = '\0';
# 265
            last_var_count = global_variable_set.table.ht_fill;
            }
          }
        }
      }
    }
  }
# 268
  return (var);
}
}
# 277
struct variable *lookup_variable(char const   *name , unsigned int length___0 ) 
{ struct variable_set_list  const  *setlist ;
  struct variable var_key ;
  struct variable_set  const  *set ;
  struct variable *v ;
  struct variable *tmp___1 ;

  {
  {
# 285
  var_key.name = (char *)name;
# 286
  var_key.length = (int )length___0;
# 288
  setlist = (struct variable_set_list  const  *)current_variable_set_list;
  }
# 288
  while ((unsigned int )setlist !=
         (unsigned int )((struct variable_set_list  const  *)0)) {
    {
# 291
    set = (struct variable_set  const  *)setlist->set;
# 294
    v = (struct variable *)hash_find_item(& set->table,
                                          (void const   *)(& var_key));
    }
# 295
    if (v) {
# 296
      if (v->special) {
        {
# 296
        tmp___1 = handle_special_var(v);
        }
      } else {
        {
# 296
        tmp___1 = v;
        }
      }
# 296
      return (tmp___1);
    }
    {
# 288
    setlist = (struct variable_set_list  const  *)setlist->next;
    }
  }
# 355
  return ((struct variable *)0);
}
}
# 363
struct variable *lookup_variable_in_set(char const   *name ,
                                        unsigned int length___0 ,
                                        struct variable_set  const  *set ) 
{ struct variable var_key ;
  struct variable *tmp ;

  {
  {
# 371
  var_key.name = (char *)name;
# 372
  var_key.length = (int )length___0;
# 374
  tmp = (struct variable *)hash_find_item(& set->table,
                                          (void const   *)(& var_key));
  }
# 374
  return (tmp);
}
}
# 386
void initialize_file_variables(struct file *file , int reading ) 
{ register struct variable_set_list *l ;
  struct pattern_var *p ;
  struct pattern_var *tmp___1 ;

  {
  {
# 391
  l = file->variables;
  }
# 393
  if ((unsigned int )l == (unsigned int )((struct variable_set_list *)0)) {
    {
# 395
    l = (struct variable_set_list *)xmalloc(sizeof(struct variable_set_list ));
# 397
    l->set = (struct variable_set *)xmalloc(sizeof(struct variable_set ));
# 398
    hash_init(& (l->set)->table, 23UL, & variable_hash_1, & variable_hash_2,
              & variable_hash_cmp);
# 400
    file->variables = l;
    }
  }
# 407
  if (file->double_colon) {
# 407
    if ((unsigned int )file->double_colon != (unsigned int )file) {
      {
# 409
      initialize_file_variables(file->double_colon, reading);
# 410
      l->next = (file->double_colon)->variables;
      }
# 411
      return;
    }
  }
# 414
  if ((unsigned int )file->parent == (unsigned int )((struct file *)0)) {
    {
# 415
    l->next = & global_setlist;
    }
  } else {
    {
# 418
    initialize_file_variables(file->parent, reading);
# 419
    l->next = (file->parent)->variables;
    }
  }
# 425
  if (! reading) {
# 425
    if (! file->pat_searched) {
      {
# 427
      tmp___1 = lookup_pattern_var(file->name);
# 427
      p = tmp___1;
# 429
      file->pat_searched = 1U;
      }
# 430
      if ((unsigned int )p != (unsigned int )((struct pattern_var *)0)) {
        {
# 434
        file->pat_variables = (struct variable_set_list *)xmalloc(sizeof(struct variable_set_list ));
# 436
        (file->pat_variables)->set = (p->vars)->set;
        }
      }
    }
  }
# 442
  if ((unsigned int )file->pat_variables !=
      (unsigned int )((struct variable_set_list *)0)) {
    {
# 444
    (file->pat_variables)->next = l->next;
# 445
    l->next = file->pat_variables;
    }
  }
# 447
  return;
}
}
# 452
static void free_variable_name_and_value(void *item ) 
{ struct variable *v ;

  {
  {
# 456
  v = (struct variable *)item;
# 457
  free((void *)v->name);
# 458
  free((void *)v->value);
  }
# 459
  return;
}
}
# 461
void pop_variable_scope(void) 
{ struct variable_set_list *setlist ;
  struct variable_set *set ;

  {
  {
# 464
  setlist = current_variable_set_list;
# 465
  set = setlist->set;
# 467
  current_variable_set_list = setlist->next;
# 468
  free((void *)((char *)setlist));
# 470
  hash_map(& set->table,
           (void (*)(void const   *item ))(& free_variable_name_and_value));
# 471
  hash_free(& set->table, 1);
# 473
  free((void *)((char *)set));
  }
# 474
  return;
}
}
# 476
struct variable_set_list *create_new_variable_set(void) 
{ register struct variable_set_list *setlist ;
  register struct variable_set *set ;

  {
  {
# 482
  set = (struct variable_set *)xmalloc(sizeof(struct variable_set ));
# 483
  hash_init(& set->table, 13UL, & variable_hash_1, & variable_hash_2,
            & variable_hash_cmp);
# 486
  setlist = (struct variable_set_list *)xmalloc(sizeof(struct variable_set_list ));
# 488
  setlist->set = set;
# 489
  setlist->next = current_variable_set_list;
  }
# 491
  return (setlist);
}
}
# 496
struct variable_set_list *push_new_variable_scope(void) 
{ 

  {
  {
# 499
  current_variable_set_list = create_new_variable_set();
  }
# 499
  return (current_variable_set_list);
}
}
# 504
static void merge_variable_sets(struct variable_set *to_set ,
                                struct variable_set *from_set ) 
{ struct variable **from_var_slot ;
  struct variable **from_var_end ;
  struct variable *from_var ;
  struct variable **to_var_slot ;
  struct variable **tmp ;

  {
  {
# 508
  from_var_slot = (struct variable **)from_set->table.ht_vec;
# 509
  from_var_end = from_var_slot + from_set->table.ht_size;
  }
# 511
  while ((unsigned int )from_var_slot < (unsigned int )from_var_end) {
# 512
    if (! ((unsigned int )(*from_var_slot) ==
           (unsigned int )((struct variable *)0))) {
# 512
      if (! ((unsigned int )((void *)(*from_var_slot)) ==
             (unsigned int )hash_deleted_item)) {
        {
# 514
        from_var = (*from_var_slot);
# 515
        tmp = (struct variable **)hash_find_slot(& to_set->table,
                                                 (void const   *)(*from_var_slot));
# 515
        to_var_slot = tmp;
        }
# 517
        if ((unsigned int )(*to_var_slot) ==
            (unsigned int )((struct variable *)0)) {
          {
# 518
          hash_insert_at(& to_set->table, (void *)from_var,
                         (void const   *)to_var_slot);
          }
        } else {
# 517
          if ((unsigned int )((void *)(*to_var_slot)) ==
              (unsigned int )hash_deleted_item) {
            {
# 518
            hash_insert_at(& to_set->table, (void *)from_var,
                           (void const   *)to_var_slot);
            }
          } else {
            {
# 522
            free((void *)from_var->value);
# 523
            free((void *)from_var);
            }
          }
        }
      }
    }
    {
# 511
    from_var_slot ++;
    }
  }
# 526
  return;
}
}
# 530
void merge_variable_set_lists(struct variable_set_list **setlist0 ,
                              struct variable_set_list *setlist1 ) 
{ register struct variable_set_list *list0 ;
  struct variable_set_list *last0 ;
  struct variable_set_list *next ;

  {
  {
# 534
  list0 = (*setlist0);
# 535
  last0 = (struct variable_set_list *)0;
  }
# 537
  while (1) {
# 537
    if ((unsigned int )setlist1 !=
        (unsigned int )((struct variable_set_list *)0)) {
# 537
      if (! ((unsigned int )list0 !=
             (unsigned int )((struct variable_set_list *)0))) {
# 537
        break;
      }
    } else {
# 537
      break;
    }
    {
# 539
    next = setlist1;
# 540
    setlist1 = setlist1->next;
# 542
    merge_variable_sets(list0->set, next->set);
# 544
    last0 = list0;
# 545
    list0 = list0->next;
    }
  }
# 548
  if ((unsigned int )setlist1 != (unsigned int )((struct variable_set_list *)0)) {
# 550
    if ((unsigned int )last0 == (unsigned int )((struct variable_set_list *)0)) {
      {
# 551
      (*setlist0) = setlist1;
      }
    } else {
      {
# 553
      last0->next = setlist1;
      }
    }
  }
# 555
  return;
}
}
# 560
void define_automatic_variables(void) 
{ register struct variable *v ;
  char buf___1[200] ;
  char const   *tmp ;
  char const   *tmp___0 ;

  {
  {
# 571
  sprintf((char */* __restrict  */)(buf___1),
          (char const   */* __restrict  */)((char const   *)"%u"), makelevel);
# 572
  define_variable_in_set((char const   *)"MAKELEVEL", sizeof("MAKELEVEL") - 1U,
                         buf___1, 1, 0, current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
  }
# 574
  if ((unsigned int )remote_description == (unsigned int )((char *)0)) {
    {
# 574
    tmp = (char const   *)"";
    }
  } else {
# 574
    if ((int )(*(remote_description + 0)) == 0) {
      {
# 574
      tmp = (char const   *)"";
      }
    } else {
      {
# 574
      tmp = (char const   *)remote_description;
      }
    }
  }
# 574
  if ((unsigned int )remote_description == (unsigned int )((char *)0)) {
    {
# 574
    tmp___0 = (char const   *)"";
    }
  } else {
# 574
    if ((int )(*(remote_description + 0)) == 0) {
      {
# 574
      tmp___0 = (char const   *)"";
      }
    } else {
      {
# 574
      tmp___0 = (char const   *)"-";
      }
    }
  }
  {
# 574
  sprintf((char */* __restrict  */)(buf___1),
          (char const   */* __restrict  */)((char const   *)"%s%s%s"),
          version_string, tmp___0, tmp);
# 580
  define_variable_in_set((char const   *)"MAKE_VERSION", 12U, buf___1, 0, 0,
                         current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
# 608
  v = define_variable_in_set((char const   *)"SHELL", 5U, default_shell, 0, 0,
                             current_variable_set_list->set,
                             (struct floc  const  *)((struct floc *)0));
# 609
  v->export = 0;
  }
# 616
  if ((int )(*(v->value)) == 0) {
    {
# 618
    free((void *)v->value);
# 619
    v->origin = 2;
# 620
    v->value = xstrdup((char const   *)(default_shell));
    }
  } else {
# 616
    if (v->origin == 1) {
      {
# 618
      free((void *)v->value);
# 619
      v->origin = 2;
# 620
      v->value = xstrdup((char const   *)(default_shell));
      }
    } else {
# 616
      if (v->origin == 3) {
        {
# 618
        free((void *)v->value);
# 619
        v->origin = 2;
# 620
        v->value = xstrdup((char const   *)(default_shell));
        }
      }
    }
  }
  {
# 625
  v = define_variable_in_set((char const   *)"MAKEFILES", 9U, "", 0, 0,
                             current_variable_set_list->set,
                             (struct floc  const  *)((struct floc *)0));
# 626
  v->export = 2;
# 640
  define_variable_in_set((char const   *)"@D", 2U, "$(patsubst %/,%,$(dir $@))",
                         6, 1, current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
# 641
  define_variable_in_set((char const   *)"%D", 2U, "$(patsubst %/,%,$(dir $%))",
                         6, 1, current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
# 642
  define_variable_in_set((char const   *)"*D", 2U, "$(patsubst %/,%,$(dir $*))",
                         6, 1, current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
# 643
  define_variable_in_set((char const   *)"<D", 2U, "$(patsubst %/,%,$(dir $<))",
                         6, 1, current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
# 644
  define_variable_in_set((char const   *)"?D", 2U, "$(patsubst %/,%,$(dir $?))",
                         6, 1, current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
# 645
  define_variable_in_set((char const   *)"^D", 2U, "$(patsubst %/,%,$(dir $^))",
                         6, 1, current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
# 646
  define_variable_in_set((char const   *)"+D", 2U, "$(patsubst %/,%,$(dir $+))",
                         6, 1, current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
# 648
  define_variable_in_set((char const   *)"@F", 2U, "$(notdir $@)", 6, 1,
                         current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
# 649
  define_variable_in_set((char const   *)"%F", 2U, "$(notdir $%)", 6, 1,
                         current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
# 650
  define_variable_in_set((char const   *)"*F", 2U, "$(notdir $*)", 6, 1,
                         current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
# 651
  define_variable_in_set((char const   *)"<F", 2U, "$(notdir $<)", 6, 1,
                         current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
# 652
  define_variable_in_set((char const   *)"?F", 2U, "$(notdir $?)", 6, 1,
                         current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
# 653
  define_variable_in_set((char const   *)"^F", 2U, "$(notdir $^)", 6, 1,
                         current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
# 654
  define_variable_in_set((char const   *)"+F", 2U, "$(notdir $+)", 6, 1,
                         current_variable_set_list->set,
                         (struct floc  const  *)((struct floc *)0));
  }
# 655
  return;
}
}
# 663
char **target_environment(struct file *file ) 
{ struct variable_set_list *set_list ;
  register struct variable_set_list *s ;
  struct hash_table table ;
  struct variable **v_slot ;
  struct variable **v_end ;
  struct variable makelevel_key ;
  char **result_0 ;
  char **result___0 ;
  struct variable_set *set ;
  struct variable **new_slot ;
  struct variable *v ;
  struct variable *gv ;
  unsigned int tmp ;
  struct variable *v___0 ;
  char *value ;
  char *tmp___2 ;
  char **tmp___3 ;
  char **tmp___4 ;
  char *tmp___5 ;

  {
# 676
  if ((unsigned int )file == (unsigned int )((struct file *)0)) {
    {
# 677
    set_list = current_variable_set_list;
    }
  } else {
    {
# 679
    set_list = file->variables;
    }
  }
  {
# 681
  hash_init(& table, 523UL, & variable_hash_1, & variable_hash_2,
            & variable_hash_cmp);
# 686
  s = set_list;
  }
# 686
  while ((unsigned int )s != (unsigned int )((struct variable_set_list *)0)) {
    {
# 688
    set = s->set;
# 689
    v_slot = (struct variable **)set->table.ht_vec;
# 690
    v_end = v_slot + set->table.ht_size;
    }
# 691
    while ((unsigned int )v_slot < (unsigned int )v_end) {
# 692
      if (! ((unsigned int )(*v_slot) == (unsigned int )((struct variable *)0))) {
# 692
        if (! ((unsigned int )((void *)(*v_slot)) ==
               (unsigned int )hash_deleted_item)) {
          {
# 695
          v = (*v_slot);
          }
# 700
          if (v->per_target) {
# 700
            if (v->export == 3) {
              {
# 704
              tmp = strlen((char const   *)v->name);
# 704
              gv = lookup_variable_in_set((char const   *)v->name, tmp,
                                          (struct variable_set  const  *)(& global_variable_set));
              }
# 706
              if (gv) {
                {
# 707
                v->export = gv->export;
                }
              }
            }
          }
# 710
          switch (v->export) {
          case 3: 
          {

          }
# 713
          if (v->origin == 0) {
            goto __Cont;
          } else {
# 713
            if (v->origin == 6) {
              goto __Cont;
            }
          }
# 718
          if (! v->exportable) {
            goto __Cont;
          }
# 721
          if (! export_all_variables) {
# 721
            if (v->origin != 4) {
# 721
              if (v->origin != 1) {
# 721
                if (v->origin != 3) {
                  goto __Cont;
                }
              }
            }
          }
# 725
          break;
          case 0: 
          {

          }
# 728
          break;
          case 1: 
          {

          }
          goto __Cont;
          case 2: 
          {

          }
# 734
          if (v->origin == 0) {
            goto __Cont;
          }
# 736
          break;
          }
          {
# 739
          new_slot = (struct variable **)hash_find_slot(& table,
                                                        (void const   *)v);
          }
# 740
          if ((unsigned int )(*new_slot) ==
              (unsigned int )((struct variable *)0)) {
            {
# 741
            hash_insert_at(& table, (void *)v, (void const   *)new_slot);
            }
          } else {
# 740
            if ((unsigned int )((void *)(*new_slot)) ==
                (unsigned int )hash_deleted_item) {
              {
# 741
              hash_insert_at(& table, (void *)v, (void const   *)new_slot);
              }
            }
          }
        }
      }
      __Cont: 
      {
# 691
      v_slot ++;
      }
    }
    {
# 686
    s = s->next;
    }
  }
  {
# 745
  makelevel_key.name = "MAKELEVEL";
# 746
  makelevel_key.length = (int )(sizeof("MAKELEVEL") - 1U);
# 747
  hash_delete(& table, (void const   *)(& makelevel_key));
# 749
  result_0 = (char **)xmalloc((unsigned int )((table.ht_fill + 2UL) *
                                              (unsigned long )sizeof(char *)));
# 749
  result___0 = result_0;
# 751
  v_slot = (struct variable **)table.ht_vec;
# 752
  v_end = v_slot + table.ht_size;
  }
# 753
  while ((unsigned int )v_slot < (unsigned int )v_end) {
# 754
    if (! ((unsigned int )(*v_slot) == (unsigned int )((struct variable *)0))) {
# 754
      if (! ((unsigned int )((void *)(*v_slot)) ==
             (unsigned int )hash_deleted_item)) {
        {
# 756
        v___0 = (*v_slot);
        }
# 761
        if (v___0->recursive) {
# 761
          if (v___0->origin != 1) {
# 761
            if (v___0->origin != 3) {
              {
# 764
              tmp___2 = recursively_expand_for_file(v___0, file);
# 764
              value = tmp___2;
# 770
              tmp___3 = result___0;
# 770
              result___0 ++;
# 770
              (*tmp___3) = concat((char const   *)v___0->name,
                                  (char const   *)"=", (char const   *)value);
# 771
              free((void *)value);
              }
            } else {
              {
# 780
              tmp___4 = result___0;
# 780
              result___0 ++;
# 780
              (*tmp___4) = concat((char const   *)v___0->name,
                                  (char const   *)"=",
                                  (char const   *)v___0->value);
              }
            }
          } else {
            {
# 780
            tmp___4 = result___0;
# 780
            result___0 ++;
# 780
            (*tmp___4) = concat((char const   *)v___0->name,
                                (char const   *)"=",
                                (char const   *)v___0->value);
            }
          }
        } else {
          {
# 780
          tmp___4 = result___0;
# 780
          result___0 ++;
# 780
          (*tmp___4) = concat((char const   *)v___0->name, (char const   *)"=",
                              (char const   *)v___0->value);
          }
        }
      }
    }
    {
# 753
    v_slot ++;
    }
  }
  {
# 784
  tmp___5 = xmalloc(100U);
# 784
  (*result___0) = tmp___5;
# 785
  sprintf((char */* __restrict  */)(*result___0),
          (char const   */* __restrict  */)((char const   *)"%s=%u"),
          "MAKELEVEL", makelevel + 1U);
# 786
  result___0 ++;
# 786
  (*result___0) = (char *)0;
# 788
  hash_free(& table, 0);
  }
# 790
  return (result_0);
}
}
# 796
struct variable *do_variable_definition(struct floc  const  *flocp ,
                                        char const   *varname , char *value ,
                                        enum variable_origin origin ,
                                        enum variable_flavor flavor ,
                                        int target_var ) 
{ char *p ;
  char *alloc_value ;
  struct variable *v ;
  int append ;
  unsigned int tmp ;
  unsigned int tmp___0 ;
  unsigned int tmp___1 ;
  unsigned int oldlen ;
  unsigned int vallen ;
  char *val ;
  struct variable_set *tmp___3 ;
  unsigned int tmp___4 ;

  {
  {
# 805
  alloc_value = (char *)((void *)0);
# 807
  append = 0;
  }
# 811
  switch (flavor) {
  default: 
  {

  }
  case 0: 
  {
# 816
  abort();
  }
  case 1: 
  {
# 822
  alloc_value = allocated_variable_expand_for_file(value, (struct file *)0);
# 822
  p = alloc_value;
  }
# 823
  break;
  case 4: 
  {
# 827
  tmp = strlen(varname);
# 827
  v = lookup_variable(varname, tmp);
  }
# 828
  if (v) {
# 829
    return (v);
  }
  {
# 831
  flavor = 2;
  }
  case 2: 
  {
# 836
  p = value;
  }
# 837
  break;
  case 3: 
  {

  }
# 842
  if (target_var) {
    {
# 844
    append = 1;
# 845
    tmp___0 = strlen(varname);
# 845
    v = lookup_variable_in_set(varname, tmp___0,
                               (struct variable_set  const  *)current_variable_set_list->set);
    }
  } else {
    {
# 849
    tmp___1 = strlen(varname);
# 849
    v = lookup_variable(varname, tmp___1);
    }
  }
# 851
  if ((unsigned int )v == (unsigned int )((struct variable *)0)) {
    {
# 855
    p = value;
# 856
    flavor = 2;
    }
  } else {
    {
# 865
    val = value;
    }
# 866
    if (v->recursive) {
      {
# 869
      flavor = 2;
      }
    } else {
      {
# 876
      alloc_value = allocated_variable_expand_for_file(val, (struct file *)0);
# 876
      val = alloc_value;
      }
    }
    {
# 878
    oldlen = strlen((char const   *)v->value);
# 879
    vallen = strlen((char const   *)val);
# 880
    p = (char *)__builtin_alloca(((oldlen + 1U) + vallen) + 1U);
# 881
    memmove((void *)p, (void const   *)v->value, oldlen);
# 882
    (*(p + oldlen)) = ' ';
# 883
    memmove((void *)(p + (oldlen + 1U)), (void const   *)val, vallen + 1U);
    }
  }
  }
# 1002
  if (target_var) {
    {
# 1002
    tmp___3 = current_variable_set_list->set;
    }
  } else {
    {
# 1002
    tmp___3 = (struct variable_set *)((void *)0);
    }
  }
  {
# 1002
  tmp___4 = strlen(varname);
# 1002
  v = define_variable_in_set(varname, tmp___4, p, origin, flavor == 2, tmp___3,
                             flocp);
# 1007
  v->append = (unsigned int )append;
  }
# 1009
  if (alloc_value) {
    {
# 1010
    free((void *)alloc_value);
    }
  }
# 1012
  return (v);
}
}
# 1028
struct variable *try_variable_definition(struct floc  const  *flocp ,
                                         char *line ,
                                         enum variable_origin origin ,
                                         int target_var ) 
{ register int c ;
  register char *p ;
  register char *beg ;
  register char *end ;
  enum variable_flavor flavor ;
  char *name ;
  char *expanded_name ;
  struct variable *v ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char closeparen ;
  int count ;
  char *tmp___3 ;
  int tmp___4 ;
  char const   *tmp___6 ;

  {
  {
# 1036
  p = line;
# 1039
  flavor = 0;
  }
# 1043
  while (1) {
    {
# 1045
    tmp = p;
# 1045
    p ++;
# 1045
    c = (int )(*tmp);
    }
# 1046
    if (c == 0) {
# 1047
      return ((struct variable *)0);
    } else {
# 1046
      if (c == 35) {
# 1047
        return ((struct variable *)0);
      }
    }
# 1048
    if (c == 61) {
      {
# 1050
      end = p - 1;
# 1051
      flavor = 2;
      }
# 1052
      break;
    } else {
# 1054
      if (c == 58) {
# 1055
        if ((int )(*p) == 61) {
          {
# 1057
          tmp___0 = p;
# 1057
          p ++;
# 1057
          end = tmp___0 - 1;
# 1058
          flavor = 1;
          }
# 1059
          break;
        } else {
# 1063
          return ((struct variable *)0);
        }
      } else {
# 1064
        if (c == 43) {
# 1064
          if ((int )(*p) == 61) {
            {
# 1066
            tmp___1 = p;
# 1066
            p ++;
# 1066
            end = tmp___1 - 1;
# 1067
            flavor = 3;
            }
# 1068
            break;
          } else {
            goto _L___0;
          }
        } else {
          _L___0: 
# 1070
          if (c == 63) {
# 1070
            if ((int )(*p) == 61) {
              {
# 1072
              tmp___2 = p;
# 1072
              p ++;
# 1072
              end = tmp___2 - 1;
# 1073
              flavor = 4;
              }
# 1074
              break;
            } else {
              goto _L;
            }
          } else {
            _L: 
# 1076
            if (c == 36) {
              {
# 1082
              tmp___3 = p;
# 1082
              p ++;
# 1082
              c = (int )(*tmp___3);
              }
# 1083
              if (c == 40) {
                {
# 1084
                closeparen = ')';
                }
              } else {
# 1085
                if (c == 123) {
                  {
# 1086
                  closeparen = '}';
                  }
                } else {
# 1088
                  continue;
                }
              }
              {
# 1092
              count = 0;
              }
# 1093
              while ((int )(*p) != 0) {
# 1095
                if ((int )(*p) == c) {
                  {
# 1096
                  count ++;
                  }
                } else {
# 1097
                  if ((int )(*p) == (int )closeparen) {
                    {
# 1097
                    count --;
                    }
# 1097
                    if (count < 0) {
                      {
# 1099
                      p ++;
                      }
# 1100
                      break;
                    }
                  }
                }
                {
# 1093
                p ++;
                }
              }
            }
          }
        }
      }
    }
  }
  {
# 1106
  beg = next_token((char const   *)line);
  }
# 1107
  while (1) {
# 1107
    if ((unsigned int )end > (unsigned int )beg) {
      {
# 1107
      tmp___4 = _get__ctype_b((int )((unsigned char )(*(end + -1))));
      }
# 1107
      if (! (tmp___4 & 1)) {
# 1107
        break;
      }
    } else {
# 1107
      break;
    }
    {
# 1108
    end --;
    }
  }
  {
# 1109
  p = next_token((char const   *)p);
# 1112
  name = (char *)__builtin_alloca((end - beg) + 1);
# 1113
  memmove((void *)name, (void const   *)beg, (unsigned int )(end - beg));
# 1114
  (*(name + (end - beg))) = '\0';
# 1115
  expanded_name = allocated_variable_expand_for_file(name, (struct file *)0);
  }
# 1117
  if ((int )(*(expanded_name + 0)) == 0) {
    {
# 1118
    tmp___6 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"empty variable name", 5);
# 1118
    fatal(flocp, tmp___6);
    }
  }
  {
# 1120
  v = do_variable_definition(flocp, (char const   *)expanded_name, p, origin,
                             flavor, target_var);
# 1123
  free((void *)expanded_name);
  }
# 1125
  return (v);
}
}
# 1130
static void print_variable(struct variable *v , char *prefix ) 
{ char const   *origin ;
  FILE * __restrict  tmp ;
  FILE * __restrict  tmp___0 ;
  char const   * __restrict  tmp___1 ;
  FILE * __restrict  tmp___2 ;
  register char *p ;
  char const   *tmp___4 ;
  FILE * __restrict  tmp___5 ;
  char *tmp___6 ;

  {
# 1137
  switch (v->origin) {
  case 0: 
  {
# 1140
  origin = (char const   *)dcgettext((char const   *)((void *)0),
                                     (char const   *)"default", 5);
  }
# 1141
  break;
  case 1: 
  {
# 1143
  origin = (char const   *)dcgettext((char const   *)((void *)0),
                                     (char const   *)"environment", 5);
  }
# 1144
  break;
  case 2: 
  {
# 1146
  origin = (char const   *)dcgettext((char const   *)((void *)0),
                                     (char const   *)"makefile", 5);
  }
# 1147
  break;
  case 3: 
  {
# 1149
  origin = (char const   *)dcgettext((char const   *)((void *)0),
                                     (char const   *)"environment under -e", 5);
  }
# 1150
  break;
  case 4: 
  {
# 1152
  origin = (char const   *)dcgettext((char const   *)((void *)0),
                                     (char const   *)"command line", 5);
  }
# 1153
  break;
  case 5: 
  {
# 1155
  origin = (char const   *)dcgettext((char const   *)((void *)0),
                                     (char const   *)"`override\' directive", 5);
  }
# 1156
  break;
  case 6: 
  {
# 1158
  origin = (char const   *)dcgettext((char const   *)((void *)0),
                                     (char const   *)"automatic", 5);
  }
# 1159
  break;
  case 7: 
  {

  }
  default: 
  {
# 1162
  abort();
  }
  }
  {
# 1164
  tmp = (FILE */* __restrict  */)get_stdout();
  {
# 105 "spec.work"
  tmp->__BLAST_FLAG = 1;
  {

  }
  }

  {
# 40
  if (! (tmp->__BLAST_FLAG == 1)) {
# 42
    __error__();
  }
  {

  }
  }
# 1164 "variable.c"
  fputs((char const   */* __restrict  */)((char const   *)"# "), tmp);
# 1165
  tmp___0 = (FILE */* __restrict  */)get_stdout();
  {
# 105 "spec.work"
  tmp___0->__BLAST_FLAG = 1;
  {

  }
  }

  {
# 40
  if (! (tmp___0->__BLAST_FLAG == 1)) {
# 42
    __error__();
  }
  {

  }
  }
# 1165 "variable.c"
  fputs((char const   */* __restrict  */)origin, tmp___0);
  }
# 1166
  if (v->fileinfo.filenm) {
    {
# 1167
    tmp___1 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                         (char const   *)" (from `%s\', line %lu)",
                                                         5);
# 1167
    printf(tmp___1, v->fileinfo.filenm, v->fileinfo.lineno);
    }
  }
  {
# 1169
  putchar__extinline((int )'\n');
# 1170
  tmp___2 = (FILE */* __restrict  */)get_stdout();
  {
# 105 "spec.work"
  tmp___2->__BLAST_FLAG = 1;
  {

  }
  }

  {
# 40
  if (! (tmp___2->__BLAST_FLAG == 1)) {
# 42
    __error__();
  }
  {

  }
  }
# 1170 "variable.c"
  fputs((char const   */* __restrict  */)((char const   *)prefix), tmp___2);
  }
# 1173
  if (v->recursive) {
    {
# 1173
    tmp___6 = strchr((char const   *)v->value, (int )'\n');
    }
# 1173
    if ((unsigned int )tmp___6 != (unsigned int )((char *)0)) {
      {
# 1174
      printf((char const   */* __restrict  */)((char const   *)"define %s\n%s\nendef\n"),
             v->name, v->value);
      }
    } else {
      goto _L___0;
    }
  } else {
    _L___0: 
# 1179
    if (v->recursive) {
# 1179
      if (v->append) {
        {
# 1179
        tmp___4 = (char const   *)"+";
        }
      } else {
        {
# 1179
        tmp___4 = (char const   *)"";
        }
      }
    } else {
      {
# 1179
      tmp___4 = (char const   *)":";
      }
    }
    {
# 1179
    printf((char const   */* __restrict  */)((char const   *)"%s %s= "),
           v->name, tmp___4);
# 1182
    p = next_token((char const   *)v->value);
    }
# 1183
    if ((unsigned int )p != (unsigned int )v->value) {
# 1183
      if ((int )(*p) == 0) {
        {
# 1185
        printf((char const   */* __restrict  */)((char const   *)"$(subst ,,%s)"),
               v->value);
        }
      } else {
        goto _L;
      }
    } else {
      _L: 
# 1186
      if (v->recursive) {
        {
# 1187
        tmp___5 = (FILE */* __restrict  */)get_stdout();
        {
# 105 "spec.work"
        tmp___5->__BLAST_FLAG = 1;
        {

        }
        }

        {
# 40
        if (! (tmp___5->__BLAST_FLAG == 1)) {
# 42
          __error__();
        }
        {

        }
        }
# 1187 "variable.c"
        fputs((char const   */* __restrict  */)((char const   *)v->value),
              tmp___5);
        }
      } else {
        {
# 1190
        p = v->value;
        }
# 1190
        while ((int )(*p) != 0) {
# 1192
          if ((int )(*p) == 36) {
            {
# 1193
            putchar__extinline((int )'$');
            }
          }
          {
# 1194
          putchar__extinline((int )(*p));
# 1190
          p ++;
          }
        }
      }
    }
    {
# 1196
    putchar__extinline((int )'\n');
    }
  }
# 1173
  return;
}
}
# 1204
void print_variable_set(struct variable_set *set , char *prefix ) 
{ FILE * __restrict  tmp ;
  char const   * __restrict  tmp___0 ;
  FILE * __restrict  tmp___1 ;
  FILE *tmp___2 ;
  FILE *tmp___3 ;

  {
  {
# 1209
  hash_map_arg(& set->table,
               (void (*)(void const   *item , void *arg ))(& print_variable),
               (void *)prefix);
# 1211
  tmp = (FILE */* __restrict  */)get_stdout();
  {
# 105 "spec.work"
  tmp->__BLAST_FLAG = 1;
  {

  }
  }
# 1211 "variable.c"
  tmp___0 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                       (char const   *)"# variable set hash-table stats:\n",
                                                       5);
  {
# 40 "spec.work"
  if (! (tmp->__BLAST_FLAG == 1)) {
# 42
    __error__();
  }
  {

  }
  }
# 1211 "variable.c"
  fputs(tmp___0, tmp);
# 1212
  tmp___1 = (FILE */* __restrict  */)get_stdout();
  {
# 105 "spec.work"
  tmp___1->__BLAST_FLAG = 1;
  {

  }
  }

  {
# 40
  if (! (tmp___1->__BLAST_FLAG == 1)) {
# 42
    __error__();
  }
  {

  }
  }
# 1212 "variable.c"
  fputs((char const   */* __restrict  */)((char const   *)"# "), tmp___1);
# 1213
  tmp___2 = get_stdout();
  {
# 105 "spec.work"
  tmp___2->__BLAST_FLAG = 1;
  {

  }
  }
# 1213 "variable.c"
  hash_print_stats(& set->table, tmp___2);
# 1214
  tmp___3 = get_stdout();
  {
# 105 "spec.work"
  tmp___3->__BLAST_FLAG = 1;
  {

  }
  }
# 1214 "variable.c"
  _IO_putc((int )'\n', tmp___3);
  }
# 1215
  return;
}
}
# 1219
void print_variable_data_base(void) 
{ char const   *tmp ;

  {
  {
# 1222
  tmp = (char const   *)dcgettext((char const   *)((void *)0),
                                  (char const   *)"\n# Variables\n", 5);
# 1222
  puts(tmp);
# 1224
  print_variable_set(& global_variable_set, "");
  }
# 1225
  return;
}
}
# 1230
void print_file_variables(struct file *file ) 
{ 

  {
# 1234
  if ((unsigned int )file->variables !=
      (unsigned int )((struct variable_set_list *)0)) {
    {
# 1235
    print_variable_set((file->variables)->set, "# ");
    }
  }
# 1236
  return;
}
}
# 10 "version.c"
char *version_string   = "3.80";
# 11
char *make_host   = "i686-pc-linux-gnu";
# 42 "vpath.c"
static struct vpath *vpaths  ;
# 46
static struct vpath *general_vpath  ;
# 50
static struct vpath *gpaths  ;
# 52
static int selective_vpath_search(struct vpath *path , char **file ,
                                  uintmax_t *mtime_ptr ) ;
# 58
void build_vpath_lists(void) 
{ register struct vpath *new ;
  register struct vpath *old ;
  register struct vpath *nexto ;
  register char *p ;
  int save ;
  struct vpath *save_vpaths ;
  int save___0 ;
  struct vpath *save_vpaths___0 ;

  {
  {
# 61
  new = (struct vpath *)0;
# 66
  old = vpaths;
  }
# 66
  while ((unsigned int )old != (unsigned int )((struct vpath *)0)) {
    {
# 68
    nexto = old->next;
# 69
    old->next = new;
# 70
    new = old;
# 66
    old = nexto;
    }
  }
  {
# 73
  vpaths = new;
# 81
  save = warn_undefined_variables_flag;
# 82
  warn_undefined_variables_flag = 0;
# 84
  p = variable_expand("$(strip $(VPATH))");
# 86
  warn_undefined_variables_flag = save;
  }
# 89
  if ((int )(*p) != 0) {
    {
# 92
    save_vpaths = vpaths;
# 96
    vpaths = (struct vpath *)0;
# 99
    construct_vpath_list("%", p);
# 103
    general_vpath = vpaths;
# 104
    vpaths = save_vpaths;
    }
  }
  {
# 113
  save___0 = warn_undefined_variables_flag;
# 114
  warn_undefined_variables_flag = 0;
# 116
  p = variable_expand("$(strip $(GPATH))");
# 118
  warn_undefined_variables_flag = save___0;
  }
# 121
  if ((int )(*p) != 0) {
    {
# 124
    save_vpaths___0 = vpaths;
# 128
    vpaths = (struct vpath *)0;
# 131
    construct_vpath_list("%", p);
# 135
    gpaths = vpaths;
# 136
    vpaths = save_vpaths___0;
    }
  }
# 138
  return;
}
}
# 159
void construct_vpath_list(char *pattern , char *dirpath ) 
{ register unsigned int elem ;
  register char *p ;
  register char **vpath ;
  register unsigned int maxvpath ;
  unsigned int maxelem ;
  char *percent___1 ;
  register struct vpath *path ;
  register struct vpath *lastpath ;
  struct vpath *next ;
  int tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  int tmp___3 ;
  char *v ;
  unsigned int len ;
  int tmp___4 ;
  unsigned int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  struct vpath *path___0 ;

  {
  {
# 168
  percent___1 = (char *)((void *)0);
  }
# 170
  if ((unsigned int )pattern != (unsigned int )((char *)0)) {
    {
# 172
    pattern = xstrdup((char const   *)pattern);
# 173
    percent___1 = find_percent(pattern);
    }
  }
# 176
  if ((unsigned int )dirpath == (unsigned int )((char *)0)) {
    {
# 181
    lastpath = (struct vpath *)0;
# 182
    path = vpaths;
    }
# 183
    while ((unsigned int )path != (unsigned int )((struct vpath *)0)) {
      {
# 185
      next = path->next;
      }
# 187
      if ((unsigned int )pattern == (unsigned int )((char *)0)) {
        goto _L___1;
      } else {
# 187
        if ((unsigned int )percent___1 == (unsigned int )((char *)0)) {
# 187
          if ((unsigned int )path->percent == (unsigned int )((char *)0)) {
            goto _L___2;
          } else {
            goto _L___3;
          }
        } else {
          _L___3: 
# 187
          if (percent___1 - pattern == path->percent - path->pattern) {
            _L___2: 
# 187
            if ((unsigned int )pattern == (unsigned int )path->pattern) {
              goto _L___1;
            } else {
# 187
              if ((int )(*pattern) == (int )(*(path->pattern))) {
# 187
                if ((int )(*pattern) == 0) {
                  goto _L___1;
                } else {
                  {
# 187
                  tmp = strcmp((char const   *)(pattern + 1),
                               (char const   *)(path->pattern + 1));
                  }
# 187
                  if (tmp) {
                    {
# 204
                    lastpath = path;
                    }
                  } else {
                    _L___1: 
# 193
                    if ((unsigned int )lastpath ==
                        (unsigned int )((struct vpath *)0)) {
                      {
# 194
                      vpaths = path->next;
                      }
                    } else {
                      {
# 196
                      lastpath->next = next;
                      }
                    }
                    {
# 199
                    free((void *)path->pattern);
# 200
                    free((void *)((char *)path->searchpath));
# 201
                    free((void *)((char *)path));
                    }
                  }
                }
              } else {
                {
# 204
                lastpath = path;
                }
              }
            }
          } else {
            {
# 204
            lastpath = path;
            }
          }
        }
      }
      {
# 206
      path = next;
      }
    }
# 209
    if ((unsigned int )pattern != (unsigned int )((char *)0)) {
      {
# 210
      free((void *)pattern);
      }
    }
# 211
    return;
  }
  {
# 222
  maxelem = 2U;
# 223
  p = dirpath;
  }
# 224
  while ((int )(*p) != 0) {
    {
# 225
    tmp___0 = p;
# 225
    p ++;
    }
# 225
    if ((int )(*tmp___0) == 58) {
      {
# 226
      maxelem ++;
      }
    } else {
      {
# 225
      tmp___1 = _get__ctype_b((int )((unsigned char )(*p)));
      }
# 225
      if (tmp___1 & 1) {
        {
# 226
        maxelem ++;
        }
      }
    }
  }
  {
# 228
  vpath = (char **)xmalloc(maxelem * sizeof(char *));
# 229
  maxvpath = 0U;
# 232
  p = dirpath;
  }
# 233
  while (1) {
# 233
    if (! ((int )(*p) == 58)) {
      {
# 233
      tmp___3 = _get__ctype_b((int )((unsigned char )(*p)));
      }
# 233
      if (! (tmp___3 & 1)) {
# 233
        break;
      }
    }
    {
# 234
    p ++;
    }
  }
  {
# 236
  elem = 0U;
  }
# 237
  while ((int )(*p) != 0) {
    {
# 243
    v = p;
    }
# 244
    while (1) {
# 244
      if ((int )(*p) != 0) {
# 244
        if ((int )(*p) != 58) {
          {
# 244
          tmp___4 = _get__ctype_b((int )((unsigned char )(*p)));
          }
# 244
          if (tmp___4 & 1) {
# 244
            break;
          }
        } else {
# 244
          break;
        }
      } else {
# 244
        break;
      }
      {
# 246
      p ++;
      }
    }
    {
# 248
    len = (unsigned int )(p - v);
    }
# 255
    if (len > 1U) {
# 255
      if ((int )(*(p + -1)) == 47) {
        {
# 256
        len --;
        }
      }
    }
# 258
    if (len > 1U) {
      goto _L___4;
    } else {
# 258
      if ((int )(*v) != 46) {
        _L___4: 
        {
# 260
        v = savestring((char const   *)v, len);
# 264
        tmp___6 = dir_file_exists_p(v, "");
        }
# 264
        if (tmp___6) {
          {
# 267
          tmp___5 = elem;
# 267
          elem ++;
# 267
          (*(vpath + tmp___5)) = dir_name(v);
# 268
          free((void *)v);
          }
# 269
          if (len > maxvpath) {
            {
# 270
            maxvpath = len;
            }
          }
        } else {
          {
# 274
          free((void *)v);
          }
        }
      }
    }
# 278
    while (1) {
# 278
      if (! ((int )(*p) == 58)) {
        {
# 278
        tmp___7 = _get__ctype_b((int )((unsigned char )(*p)));
        }
# 278
        if (! (tmp___7 & 1)) {
# 278
          break;
        }
      }
      {
# 279
      p ++;
      }
    }
  }
# 282
  if (elem > 0U) {
# 288
    if (elem < maxelem - 1U) {
      {
# 289
      vpath = (char **)xrealloc((char *)vpath, (elem + 1U) * sizeof(char *));
      }
    }
    {
# 293
    (*(vpath + elem)) = (char *)0;
# 296
    path___0 = (struct vpath *)xmalloc(sizeof(struct vpath ));
# 297
    path___0->searchpath = vpath;
# 298
    path___0->maxlen = maxvpath;
# 299
    path___0->next = vpaths;
# 300
    vpaths = path___0;
# 303
    path___0->pattern = pattern;
# 304
    path___0->percent = percent___1;
# 305
    path___0->patlen = strlen((char const   *)pattern);
    }
  } else {
    {
# 310
    free((void *)((char *)vpath));
    }
# 311
    if ((unsigned int )pattern != (unsigned int )((char *)0)) {
      {
# 312
      free((void *)pattern);
      }
    }
  }
# 314
  return;
}
}
# 319
int gpath_search(char *file , int len ) 
{ register char **gp ;
  int tmp ;

  {
# 326
  if (gpaths) {
# 326
    if ((unsigned int )len <= gpaths->maxlen) {
      {
# 327
      gp = gpaths->searchpath;
      }
# 327
      while ((unsigned int )(*gp) != (unsigned int )((void *)0)) {
        {
# 328
        tmp = strncmp((char const   *)(*gp), (char const   *)file,
                      (unsigned int )len);
        }
# 328
        if (tmp == 0) {
# 328
          if ((int )(*((*gp) + len)) == 0) {
# 329
            return (1);
          }
        }
        {
# 327
        gp ++;
        }
      }
    }
  }
# 331
  return (0);
}
}
# 340
int vpath_search(char **file , uintmax_t *mtime_ptr ) 
{ register struct vpath *v ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
# 350
  if ((int )(*((*file))) == 47) {
# 356
    return (0);
  } else {
# 350
    if ((unsigned int )vpaths == (unsigned int )((struct vpath *)0)) {
# 350
      if ((unsigned int )general_vpath == (unsigned int )((struct vpath *)0)) {
# 356
        return (0);
      }
    }
  }
  {
# 358
  v = vpaths;
  }
# 358
  while ((unsigned int )v != (unsigned int )((struct vpath *)0)) {
    {
# 359
    tmp___0 = pattern_matches(v->pattern, v->percent, (*file));
    }
# 359
    if (tmp___0) {
      {
# 360
      tmp = selective_vpath_search(v, file, mtime_ptr);
      }
# 360
      if (tmp) {
# 361
        return (1);
      }
    }
    {
# 358
    v = v->next;
    }
  }
# 363
  if ((unsigned int )general_vpath != (unsigned int )((struct vpath *)0)) {
    {
# 363
    tmp___1 = selective_vpath_search(general_vpath, file, mtime_ptr);
    }
# 363
    if (tmp___1) {
# 365
      return (1);
    }
  }
# 367
  return (0);
}
}
# 377
static int selective_vpath_search(struct vpath *path , char **file ,
                                  uintmax_t *mtime_ptr ) 
{ int not_target ;
  char *name ;
  char *n ;
  char *filename ;
  register char **vpath ;
  unsigned int maxvpath ;
  register unsigned int i ;
  unsigned int flen ;
  unsigned int vlen ;
  unsigned int name_dplen ;
  int exists ;
  struct file *f ;
  struct file *tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int exists_in_cache ;
  char *tmp___2 ;
  struct file *f___0 ;
  struct file *tmp___3 ;
  int tmp___4 ;
  struct stat st ;
  int tmp___6 ;

  {
  {
# 386
  vpath = path->searchpath;
# 387
  maxvpath = path->maxlen;
# 390
  exists = 0;
# 396
  tmp = lookup_file((*file));
# 396
  f = tmp;
  }
# 397
  if ((unsigned int )f == (unsigned int )((struct file *)0)) {
    {
# 397
    tmp___0 = 1;
    }
  } else {
# 397
    if (f->is_target) {
      {
# 397
      tmp___0 = 0;
      }
    } else {
      {
# 397
      tmp___0 = 1;
      }
    }
  }
  {
# 397
  not_target = tmp___0;
# 400
  flen = strlen((char const   *)(*file));
# 406
  n = strrchr((char const   *)(*file), (int )'/');
  }
# 415
  if ((unsigned int )n != (unsigned int )((char *)0)) {
    {
# 415
    name_dplen = (unsigned int )(n - (*file));
    }
  } else {
    {
# 415
    name_dplen = 0U;
    }
  }
# 416
  if (name_dplen > 0U) {
    {
# 416
    filename = n + 1;
    }
  } else {
    {
# 416
    filename = (*file);
    }
  }
# 417
  if (name_dplen > 0U) {
    {
# 418
    flen -= name_dplen + 1U;
    }
  }
  {
# 424
  tmp___1 = xmalloc(((((maxvpath + 1U) + name_dplen) + 1U) + flen) + 1U);
# 424
  name = tmp___1;
# 427
  i = 0U;
  }
# 427
  while ((unsigned int )(*(vpath + i)) != (unsigned int )((char *)0)) {
    {
# 429
    exists_in_cache = 0;
# 431
    n = name;
# 434
    vlen = strlen((char const   *)(*(vpath + i)));
# 435
    memmove((void *)n, (void const   *)(*(vpath + i)), vlen);
# 436
    n += vlen;
    }
# 439
    if (name_dplen > 0U) {
      {
# 442
      tmp___2 = n;
# 442
      n ++;
# 442
      (*tmp___2) = '/';
# 444
      memmove((void *)n, (void const   *)(*file), name_dplen);
# 445
      n += name_dplen;
      }
    }
# 455
    if ((unsigned int )n != (unsigned int )name) {
# 455
      if ((int )(*(n + -1)) != 47) {
        {
# 457
        (*n) = '/';
# 458
        memmove((void *)(n + 1), (void const   *)filename, flen + 1U);
        }
      } else {
        {
# 462
        memmove((void *)n, (void const   *)filename, flen + 1U);
        }
      }
    } else {
      {
# 462
      memmove((void *)n, (void const   *)filename, flen + 1U);
      }
    }
    {
# 478
    tmp___3 = lookup_file(name);
# 478
    f___0 = tmp___3;
    }
# 479
    if ((unsigned int )f___0 != (unsigned int )((struct file *)0)) {
# 480
      if (not_target) {
        {
# 480
        tmp___4 = 1;
        }
      } else {
# 480
        if (f___0->is_target) {
          {
# 480
          tmp___4 = 1;
          }
        } else {
          {
# 480
          tmp___4 = 0;
          }
        }
      }
      {
# 480
      exists = tmp___4;
      }
    }
# 483
    if (! exists) {
      {
# 493
      (*n) = '\0';
# 498
      exists = dir_file_exists_p(name, filename);
# 498
      exists_in_cache = exists;
      }
    }
# 502
    if (exists) {
      {
# 514
      (*n) = '/';
      }
# 517
      if (exists_in_cache) {
        {
# 517
        tmp___6 = stat__extinline((char const   *)name, & st);
        }
# 517
        if (tmp___6 == 0) {
          _L: 
          {
# 523
          (*file) = savestring((char const   *)name,
                               (unsigned int )((n + 1) - name) + flen);
          }
# 525
          if ((unsigned int )mtime_ptr != (unsigned int )((uintmax_t *)0)) {
# 529
            if (exists_in_cache) {
              {
# 529
              (*mtime_ptr) = file_timestamp_cons((char const   *)name,
                                                 st.st_mtim.tv_sec,
                                                 (int )st.st_mtim.tv_nsec);
              }
            } else {
              {
# 529
              (*mtime_ptr) = 0ULL;
              }
            }
          }
          {
# 533
          free((void *)name);
          }
# 534
          return (1);
        } else {
          {
# 537
          exists = 0;
          }
        }
      } else {
        goto _L;
      }
    }
    {
# 427
    i ++;
    }
  }
  {
# 541
  free((void *)name);
  }
# 542
  return (0);
}
}
# 547
void print_vpath_data_base(void) 
{ register unsigned int nvpaths ;
  register struct vpath *v ;
  char const   *tmp ;
  register unsigned int i ;
  int tmp___0 ;
  char const   *tmp___1 ;
  char const   * __restrict  tmp___2 ;
  char const   *tmp___3 ;
  register char **path ;
  register unsigned int i___0 ;
  FILE * __restrict  tmp___4 ;
  char const   * __restrict  tmp___5 ;
  int tmp___6 ;

  {
  {
# 553
  tmp = (char const   *)dcgettext((char const   *)((void *)0),
                                  (char const   *)"\n# VPATH Search Paths\n", 5);
# 553
  puts(tmp);
# 555
  nvpaths = 0U;
# 556
  v = vpaths;
  }
# 556
  while ((unsigned int )v != (unsigned int )((struct vpath *)0)) {
    {
# 560
    nvpaths ++;
# 562
    printf((char const   */* __restrict  */)((char const   *)"vpath %s "),
           v->pattern);
# 564
    i = 0U;
    }
# 564
    while ((unsigned int )(*(v->searchpath + i)) != (unsigned int )((char *)0)) {
# 565
      if ((unsigned int )(*(v->searchpath + (i + 1U))) ==
          (unsigned int )((char *)0)) {
        {
# 565
        tmp___0 = (int )'\n';
        }
      } else {
        {
# 565
        tmp___0 = (int )':';
        }
      }
      {
# 565
      printf((char const   */* __restrict  */)((char const   *)"%s%c"),
             (*(v->searchpath + i)), tmp___0);
# 564
      i ++;
      }
    }
    {
# 556
    v = v->next;
    }
  }
# 569
  if ((unsigned int )vpaths == (unsigned int )((struct vpath *)0)) {
    {
# 570
    tmp___1 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"# No `vpath\' search paths.",
                                        5);
# 570
    puts(tmp___1);
    }
  } else {
    {
# 572
    tmp___2 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                         (char const   *)"\n# %u `vpath\' search paths.\n",
                                                         5);
# 572
    printf(tmp___2, nvpaths);
    }
  }
# 574
  if ((unsigned int )general_vpath == (unsigned int )((struct vpath *)0)) {
    {
# 575
    tmp___3 = (char const   *)dcgettext((char const   *)((void *)0),
                                        (char const   *)"\n# No general (`VPATH\' variable) search path.",
                                        5);
# 575
    puts(tmp___3);
    }
  } else {
    {
# 578
    path = general_vpath->searchpath;
# 581
    tmp___4 = (FILE */* __restrict  */)get_stdout();
    {
# 105 "spec.work"
    tmp___4->__BLAST_FLAG = 1;
    {

    }
    }
# 581 "vpath.c"
    tmp___5 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                         (char const   *)"\n# General (`VPATH\' variable) search path:\n# ",
                                                         5);
    {
# 40 "spec.work"
    if (! (tmp___4->__BLAST_FLAG == 1)) {
# 42
      __error__();
    }
    {

    }
    }
# 581 "vpath.c"
    fputs(tmp___5, tmp___4);
# 583
    i___0 = 0U;
    }
# 583
    while ((unsigned int )(*(path + i___0)) != (unsigned int )((char *)0)) {
# 584
      if ((unsigned int )(*(path + (i___0 + 1U))) == (unsigned int )((char *)0)) {
        {
# 584
        tmp___6 = (int )'\n';
        }
      } else {
        {
# 584
        tmp___6 = (int )':';
        }
      }
      {
# 584
      printf((char const   */* __restrict  */)((char const   *)"%s%c"),
             (*(path + i___0)), tmp___6);
# 583
      i___0 ++;
      }
    }
  }
# 587
  return;
}
}
# 28 "hash.c"
static void hash_rehash(struct hash_table *ht ) ;
# 29
static unsigned long round_up_2(unsigned long n ) ;
# 38
void *hash_deleted_item   = (void *)(& hash_deleted_item);
# 43
void hash_init(struct hash_table *ht , unsigned long size ,
               unsigned long (*hash_1)(void const   *key ) ,
               unsigned long (*hash_2)(void const   *key ) ,
               int (*hash_cmp)(void const   *x , void const   *y ) ) 
{ void *tmp ;
  char const   * __restrict  tmp___0 ;
  FILE * __restrict  tmp___1 ;

  {
  {
# 51
  ht->ht_size = round_up_2(size);
# 52
  ht->ht_empty_slots = ht->ht_size;
# 53
  tmp = calloc(sizeof(struct token *), (unsigned int )ht->ht_size);
# 53
  ht->ht_vec = (void **)((struct token **)tmp);
  }
# 54
  if ((unsigned int )ht->ht_vec == (unsigned int )((void **)0)) {
    {
# 56
    tmp___0 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                         (char const   *)"can\'t allocate %ld bytes for hash table: memory exhausted",
                                                         5);
# 56
    tmp___1 = (FILE */* __restrict  */)get_stderr();
    {
# 97 "spec.work"
    tmp___1->__BLAST_FLAG = 1;
    {

    }
    }

    {
# 56
    if (! (tmp___1->__BLAST_FLAG == 1)) {
# 58
      __error__();
    }
    {

    }
    }
# 56 "hash.c"
    fprintf(tmp___1, tmp___0,
            ht->ht_size * (unsigned long )sizeof(struct token *));
# 58
    exit(1);
    {
# 121 "spec.work"
    while (1) {

    }
    {

    }
    }

    }
  }
  {
# 61 "hash.c"
  ht->ht_capacity = ht->ht_size - ht->ht_size / 16UL;
# 62
  ht->ht_fill = 0UL;
# 63
  ht->ht_collisions = 0UL;
# 64
  ht->ht_lookups = 0UL;
# 65
  ht->ht_rehashes = 0U;
# 66
  ht->ht_hash_1 = hash_1;
# 67
  ht->ht_hash_2 = hash_2;
# 68
  ht->ht_compare = hash_cmp;
  }
# 69
  return;
}
}
# 73
void hash_load(struct hash_table *ht , void *item_table ,
               unsigned long cardinality , unsigned long size ) 
{ char *items ;
  unsigned long tmp ;

  {
  {
# 80
  items = (char *)item_table;
  }
# 81
  while (1) {
    {
# 81
    tmp = cardinality;
# 81
    cardinality --;
    }
# 81
    if (! tmp) {
# 81
      break;
    }
    {
# 83
    hash_insert(ht, (void *)items);
# 84
    items += size;
    }
  }
# 86
  return;
}
}
# 93
void **hash_find_slot(struct hash_table *ht , void const   *key ) 
{ void **slot ;
  void **deleted_slot ;
  unsigned int hash_2 ;
  unsigned int hash_1 ;
  unsigned int tmp ;
  void **tmp___0 ;
  int tmp___1 ;
  unsigned long tmp___2 ;

  {
  {
# 99
  deleted_slot = (void **)0;
# 100
  hash_2 = 0U;
# 101
  tmp = (unsigned int )((*(ht->ht_hash_1)))(key);
# 101
  hash_1 = tmp;
# 103
  ht->ht_lookups = ht->ht_lookups + 1UL;
  }
# 104
  while (1) {
    {
# 106
    hash_1 = (unsigned int )((unsigned long )hash_1 & (ht->ht_size - 1UL));
# 107
    slot = ht->ht_vec + hash_1;
    }
# 109
    if ((unsigned int )(*slot) == (unsigned int )((void *)0)) {
# 110
      if (deleted_slot) {
        {
# 110
        tmp___0 = deleted_slot;
        }
      } else {
        {
# 110
        tmp___0 = slot;
        }
      }
# 110
      return (tmp___0);
    }
# 111
    if ((unsigned int )(*slot) == (unsigned int )hash_deleted_item) {
# 113
      if ((unsigned int )deleted_slot == (unsigned int )((void **)0)) {
        {
# 114
        deleted_slot = slot;
        }
      }
    } else {
# 118
      if ((unsigned int )key == (unsigned int )(*slot)) {
# 119
        return (slot);
      }
      {
# 120
      tmp___1 = ((*(ht->ht_compare)))(key, (void const   *)(*slot));
      }
# 120
      if (tmp___1 == 0) {
# 121
        return (slot);
      }
      {
# 122
      ht->ht_collisions = ht->ht_collisions + 1UL;
      }
    }
# 124
    if (! hash_2) {
      {
# 125
      tmp___2 = ((*(ht->ht_hash_2)))(key);
# 125
      hash_2 = (unsigned int )(tmp___2 | 1UL);
      }
    }
    {
# 126
    hash_1 += hash_2;
    }
  }
# 128
  return ((void **)0);
}
}
# 130
void *hash_find_item(struct hash_table *ht , void const   *key ) 
{ void **slot ;
  void **tmp ;
  void *tmp___0 ;

  {
  {
# 135
  tmp = hash_find_slot(ht, key);
# 135
  slot = tmp;
  }
# 136
  if ((unsigned int )(*slot) == (unsigned int )((void *)0)) {
    {
# 136
    tmp___0 = (void *)0;
    }
  } else {
# 136
    if ((unsigned int )(*slot) == (unsigned int )hash_deleted_item) {
      {
# 136
      tmp___0 = (void *)0;
      }
    } else {
      {
# 136
      tmp___0 = (*slot);
      }
    }
  }
# 136
  return (tmp___0);
}
}
# 139
void *hash_insert(struct hash_table *ht , void *item ) 
{ void **slot ;
  void **tmp ;
  void *old_item ;
  void *tmp___0 ;
  void *tmp___1 ;

  {
  {
# 144
  tmp = hash_find_slot(ht, (void const   *)item);
# 144
  slot = tmp;
  }
# 145
  if (slot) {
    {
# 145
    tmp___0 = (*slot);
    }
  } else {
    {
# 145
    tmp___0 = (void *)0;
    }
  }
  {
# 145
  old_item = tmp___0;
# 146
  hash_insert_at(ht, item, (void const   *)slot);
  }
# 147
  if ((unsigned int )old_item == (unsigned int )((void *)0)) {
    {
# 147
    tmp___1 = (void *)0;
    }
  } else {
# 147
    if ((unsigned int )old_item == (unsigned int )hash_deleted_item) {
      {
# 147
      tmp___1 = (void *)0;
      }
    } else {
      {
# 147
      tmp___1 = old_item;
      }
    }
  }
# 147
  return (tmp___1);
}
}
# 150
void *hash_insert_at(struct hash_table *ht , void *item , void const   *slot ) 
{ void *old_item ;
  void *tmp ;

  {
  {
# 156
  old_item = (*((void **)slot));
  }
# 157
  if ((unsigned int )old_item == (unsigned int )((void *)0)) {
    goto _L;
  } else {
# 157
    if ((unsigned int )old_item == (unsigned int )hash_deleted_item) {
      _L: 
      {
# 159
      ht->ht_fill = ht->ht_fill + 1UL;
      }
# 160
      if ((unsigned int )old_item == (unsigned int )((void *)0)) {
        {
# 161
        ht->ht_empty_slots = ht->ht_empty_slots - 1UL;
        }
      }
      {
# 162
      old_item = item;
      }
    }
  }
  {
# 164
  (*((void const   **)slot)) = (void const   *)item;
  }
# 165
  if (ht->ht_empty_slots < ht->ht_size - ht->ht_capacity) {
    {
# 167
    hash_rehash(ht);
# 168
    tmp = (void *)hash_find_slot(ht, (void const   *)item);
    }
# 168
    return (tmp);
  } else {
# 171
    return ((void *)slot);
  }
}
}
# 174
void *hash_delete(struct hash_table *ht , void const   *item ) 
{ void **slot ;
  void **tmp ;
  void *tmp___0 ;

  {
  {
# 179
  tmp = hash_find_slot(ht, item);
# 179
  slot = tmp;
# 180
  tmp___0 = hash_delete_at(ht, (void const   *)slot);
  }
# 180
  return (tmp___0);
}
}
# 183
void *hash_delete_at(struct hash_table *ht , void const   *slot ) 
{ void *item ;

  {
  {
# 188
  item = (*((void **)slot));
  }
# 189
  if ((unsigned int )item == (unsigned int )((void *)0)) {
# 196
    return ((void *)0);
  } else {
# 189
    if ((unsigned int )item == (unsigned int )hash_deleted_item) {
# 196
      return ((void *)0);
    } else {
      {
# 191
      (*((void const   **)slot)) = (void const   *)hash_deleted_item;
# 192
      ht->ht_fill = ht->ht_fill - 1UL;
      }
# 193
      return (item);
    }
  }
}
}
# 199
void hash_free_items(struct hash_table *ht ) 
{ void **vec ;
  void **end ;
  void *item ;

  {
  {
# 203
  vec = ht->ht_vec;
# 204
  end = vec + ht->ht_size;
  }
# 205
  while ((unsigned int )vec < (unsigned int )end) {
    {
# 207
    item = (*vec);
    }
# 208
    if (! ((unsigned int )item == (unsigned int )((void *)0))) {
# 208
      if (! ((unsigned int )item == (unsigned int )hash_deleted_item)) {
        {
# 209
        free(item);
        }
      }
    }
    {
# 210
    (*vec) = (void *)0;
# 205
    vec ++;
    }
  }
  {
# 212
  ht->ht_fill = 0UL;
# 213
  ht->ht_empty_slots = ht->ht_size;
  }
# 214
  return;
}
}
# 216
void hash_delete_items(struct hash_table *ht ) 
{ void **vec ;
  void **end ;

  {
  {
# 220
  vec = ht->ht_vec;
# 221
  end = vec + ht->ht_size;
  }
# 222
  while ((unsigned int )vec < (unsigned int )end) {
    {
# 223
    (*vec) = (void *)0;
# 222
    vec ++;
    }
  }
  {
# 224
  ht->ht_fill = 0UL;
# 225
  ht->ht_collisions = 0UL;
# 226
  ht->ht_lookups = 0UL;
# 227
  ht->ht_rehashes = 0U;
# 228
  ht->ht_empty_slots = ht->ht_size;
  }
# 229
  return;
}
}
# 231
void hash_free(struct hash_table *ht , int free_items ) 
{ 

  {
# 236
  if (free_items) {
    {
# 237
    hash_free_items(ht);
    }
  } else {
    {
# 240
    ht->ht_fill = 0UL;
# 241
    ht->ht_empty_slots = ht->ht_size;
    }
  }
  {
# 243
  free((void *)ht->ht_vec);
# 244
  ht->ht_vec = (void **)0;
# 245
  ht->ht_capacity = 0UL;
  }
# 246
  return;
}
}
# 248
void hash_map(struct hash_table *ht , void (*map)(void const   *item ) ) 
{ void **slot ;
  void **end ;

  {
  {
# 254
  end = ht->ht_vec + ht->ht_size;
# 256
  slot = ht->ht_vec;
  }
# 256
  while ((unsigned int )slot < (unsigned int )end) {
# 258
    if (! ((unsigned int )(*slot) == (unsigned int )((void *)0))) {
# 258
      if (! ((unsigned int )(*slot) == (unsigned int )hash_deleted_item)) {
        {
# 259
        ((*map))((void const   *)(*slot));
        }
      }
    }
    {
# 256
    slot ++;
    }
  }
# 261
  return;
}
}
# 263
void hash_map_arg(struct hash_table *ht ,
                  void (*map)(void const   *item , void *arg ) , void *arg ) 
{ void **slot ;
  void **end ;

  {
  {
# 270
  end = ht->ht_vec + ht->ht_size;
# 272
  slot = ht->ht_vec;
  }
# 272
  while ((unsigned int )slot < (unsigned int )end) {
# 274
    if (! ((unsigned int )(*slot) == (unsigned int )((void *)0))) {
# 274
      if (! ((unsigned int )(*slot) == (unsigned int )hash_deleted_item)) {
        {
# 275
        ((*map))((void const   *)(*slot), arg);
        }
      }
    }
    {
# 272
    slot ++;
    }
  }
# 277
  return;
}
}
# 281
static void hash_rehash(struct hash_table *ht ) 
{ unsigned long old_ht_size ;
  void **old_vec ;
  void **ovp ;
  void *tmp ;
  void **slot ;
  void **tmp___0 ;

  {
  {
# 285
  old_ht_size = ht->ht_size;
# 286
  old_vec = ht->ht_vec;
  }
# 289
  if (ht->ht_fill >= ht->ht_capacity) {
    {
# 291
    ht->ht_size = ht->ht_size * 2UL;
# 292
    ht->ht_capacity = ht->ht_size - (ht->ht_size >> 4);
    }
  }
  {
# 294
  ht->ht_rehashes = ht->ht_rehashes + 1U;
# 295
  tmp = calloc(sizeof(struct token *), (unsigned int )ht->ht_size);
# 295
  ht->ht_vec = (void **)((struct token **)tmp);
# 297
  ovp = old_vec;
  }
# 297
  while ((unsigned int )ovp < (unsigned int )(old_vec + old_ht_size)) {
# 299
    if (! ((unsigned int )(*ovp) == (unsigned int )((void *)0))) {
# 299
      if (! ((unsigned int )(*ovp) == (unsigned int )hash_deleted_item)) {
        {
# 301
        tmp___0 = hash_find_slot(ht, (void const   *)(*ovp));
# 301
        slot = tmp___0;
# 302
        (*slot) = (*ovp);
        }
      }
    }
    {
# 297
    ovp ++;
    }
  }
  {
# 305
  ht->ht_empty_slots = ht->ht_size - ht->ht_fill;
# 306
  free((void *)old_vec);
  }
# 307
  return;
}
}
# 309
void hash_print_stats(struct hash_table *ht , FILE *out_FILE ) 
{ char const   * __restrict  tmp ;
  char const   * __restrict  tmp___0 ;
  double tmp___1 ;
  char const   * __restrict  tmp___2 ;

  {
  {
# 315
  tmp = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                   (char const   *)"Load=%ld/%ld=%.0f%%, ",
                                                   5);
  {
# 72 "spec.work"
  if (! (out_FILE->__BLAST_FLAG == 1)) {
# 74
    __error__();
  }
  {

  }
  }
# 315 "hash.c"
  fprintf((FILE */* __restrict  */)out_FILE, tmp, ht->ht_fill, ht->ht_size,
          (100.0 * (double )ht->ht_fill) / (double )ht->ht_size);
# 317
  tmp___0 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                       (char const   *)"Rehash=%d, ",
                                                       5);
  {
# 56 "spec.work"
  if (! (out_FILE->__BLAST_FLAG == 1)) {
# 58
    __error__();
  }
  {

  }
  }
# 317 "hash.c"
  fprintf((FILE */* __restrict  */)out_FILE, tmp___0, ht->ht_rehashes);
  }
# 318
  if (ht->ht_lookups) {
    {
# 318
    tmp___1 = (100.0 * (double )ht->ht_collisions) / (double )ht->ht_lookups;
    }
  } else {
    {
# 318
    tmp___1 = (double )0;
    }
  }
  {
# 318
  tmp___2 = (char const   */* __restrict  */)dcgettext((char const   *)((void *)0),
                                                       (char const   *)"Collisions=%ld/%ld=%.0f%%",
                                                       5);
  {
# 72 "spec.work"
  if (! (out_FILE->__BLAST_FLAG == 1)) {
# 74
    __error__();
  }
  {

  }
  }
# 318 "hash.c"
  fprintf((FILE */* __restrict  */)out_FILE, tmp___2, ht->ht_collisions,
          ht->ht_lookups, tmp___1);
  }
# 322
  return;
}
}
# 327
void **hash_dump(struct hash_table *ht , void **vector_0 ,
                 int (*compare)(void const   * , void const   * ) ) 
{ void **vector ;
  void **slot ;
  void **end ;
  void **tmp___0 ;

  {
  {
# 335
  end = ht->ht_vec + ht->ht_size;
  }
# 337
  if ((unsigned int )vector_0 == (unsigned int )((void **)0)) {
    {
# 338
    vector_0 = (void **)xmalloc((unsigned int )((unsigned long )sizeof(void *) *
                                                (ht->ht_fill + 1UL)));
    }
  }
  {
# 339
  vector = vector_0;
# 341
  slot = ht->ht_vec;
  }
# 341
  while ((unsigned int )slot < (unsigned int )end) {
# 342
    if (! ((unsigned int )(*slot) == (unsigned int )((void *)0))) {
# 342
      if (! ((unsigned int )(*slot) == (unsigned int )hash_deleted_item)) {
        {
# 343
        tmp___0 = vector;
# 343
        vector ++;
# 343
        (*tmp___0) = (*slot);
        }
      }
    }
    {
# 341
    slot ++;
    }
  }
  {
# 344
  (*vector) = (void *)0;
  }
# 346
  if (compare) {
    {
# 347
    qsort((void *)vector_0, (unsigned int )ht->ht_fill, sizeof(void *),
          (int (*)(void const   * __attribute__((__safe__)) left ,
                   void const   * __attribute__((__safe__)) right ))compare);
    }
  }
# 348
  return (vector_0);
}
}
# 353
static unsigned long round_up_2(unsigned long n ) 
{ 

  {
  {
# 357
  n |= n >> 1;
# 358
  n |= n >> 2;
# 359
  n |= n >> 4;
# 360
  n |= n >> 8;
# 361
  n |= n >> 16;
  }
# 368
  return (n + 1UL);
}
}
void __initialize__(void) 
{ 

  {
# 254 "/users/rupak/ccured/include/string_wrappers.h"
  saved_str = (char const   *)((void *)0);
# 387 "commands.c"
  handling_fatal_signal = 0;
# 377 "dir.c"
  open_directories = 0U;
# 65 "file.c"
  all_secondary = 0;
# 778
  last_targ_count = 0UL;
# 349 "function.c"
  result = (char *)0;
# 1338
  shell_function_pid = 0;
# 57 "job.c"
  batch_mode_shell = 0;
# 208
  children = (struct child *)0;
# 212
  job_slots_used = 0U;
# 216
  good_stdin_used = 0;
# 220
  waiting_jobs = (struct child *)0;
# 224
  unixy_shell = 1;
# 390
  dead_children = 0U;
# 658
  delete_on_error = -1;
# 874
  bad_stdin = -1;
# 1623
  lossage = -1;
# 144 "main.c"
  debug_flag = 0;
# 146
  db_level = 0;
# 156
  env_overrides = 0;
# 161
  ignore_errors_flag = 0;
# 166
  print_data_base_flag = 0;
# 171
  question_flag = 0;
# 175
  no_builtin_rules_flag = 0;
# 176
  no_builtin_variables_flag = 0;
# 181
  default_keep_going_flag = 0;
# 185
  print_directory_flag = 0;
# 190
  inhibit_print_directory_flag = 0;
# 194
  print_version_flag = 0;
# 198
  makefiles = (struct stringlist *)0;
# 202
  job_slots = 1U;
# 203
  default_job_slots = 1U;
# 207
  inf_jobs = 0U;
# 211
  jobserver_fds = (struct stringlist *)0;
# 214
  job_rfd = -1;
# 221
  max_load_average = - 1.0;
# 222
  default_load_average = - 1.0;
# 230
  directories___0 = (struct stringlist *)0;
# 234
  include_directories = (struct stringlist *)0;
# 238
  old_files = (struct stringlist *)0;
# 242
  new_files = (struct stringlist *)0;
# 246
  print_usage_flag = 0;
# 256
  always_make_flag = 0;
# 840
  stdin_nm = (char *)0;
# 2670
  printed_version = 0;
# 2725
  dying = (char )0;
# 2770
  entered = 0;
# 86 "read.c"
  conditionals = & toplevel_conditionals;
# 120
  reading_file = (struct floc  const  *)0;
# 124
  read_makefiles = (struct dep *)0;
# 431
  collapsed = (char *)0;
# 432
  collapsed_length = 0U;
# 2046
  percent___0 = "%";
# 60 "remake.c"
  commands_started = 0U;
# 1313
  libpatterns = (char *)((void *)0);
# 1339
  buf___0 = (char *)((void *)0);
# 1340
  buflen = 0;
# 1341
  libdir_maxlen = -1;
# 26 "remote-stub.c"
  remote_description = (char *)0;
# 77 "variable.c"
  current_variable_set_list = & global_setlist;
# 196
  last_var_count = 0UL;
# 10 "version.c"
  version_string = "3.80";
# 11
  make_host = "i686-pc-linux-gnu";
# 38 "hash.c"
  hash_deleted_item = (void *)(& hash_deleted_item);
}
}
