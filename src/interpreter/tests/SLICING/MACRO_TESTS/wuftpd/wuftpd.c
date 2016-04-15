/**************************************************************/
/* This is the version that can be compiled by TRACER and gcc */
/**************************************************************/

struct _IO_marker;
// # 2 "file_openclose.h"
typedef long off_t;
// # 3
typedef long long off64_t;
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
   off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   off64_t _offset ;
   void *pad1 ;
   void *pad2 ;
   int _mode ;
   char _unused2[(int )(15U * sizeof(int ) - 2U * sizeof(void *))] ;
};
// # 38
typedef struct _IO_FILE FILE;
// # 1
struct _IO_marker;
// # 39
/* extern */ FILE *stderr ;
// # 40
/* extern */ FILE *stdout ;
// # 55
int EXIT  ;
// # 57
void exit(int status ) 
{ 
// # 58
  EXIT = 1;
/*   _L:  */
/*   goto _L; */
}
// # 2 "spec.work"
int BLAST_error  ;
// # 3
void error__(void) 
{ 
// # 5
  BLAST_error = 0;
  // ERROR: goto ERROR;
  
}
// # 8
void BLAST_error__(void) 
{ 
  // # 10
  BLAST_error = 0;
  //BERROR: goto BERROR;   
}

void initialize__(void) ;
// # 201 "/usr/lib/gcc-lib/i386-redhat-linux/3.2/include/stddef.h"
typedef unsigned int size_t;
// # 34 "/usr/include/bits/types.h"
typedef unsigned char u_char;
// # 35
typedef unsigned short u_short;
// # 37
typedef unsigned long u_long;
// # 131
typedef unsigned long long dev_t;
// # 132
typedef unsigned int uid_t;
// # 133
typedef unsigned int __gid_t;
// # 134
typedef unsigned long ino_t;
// # 136
typedef unsigned int mode_t;
// # 137
typedef unsigned int nlink_t;
// # 138
// # 139
// # 140
typedef int pid_t;
typedef int int32_t;
// # 143
typedef unsigned long rlim_t;
// # 146
typedef long time_t;
// # 148
typedef long suseconds_t;
// # 161
typedef long blksize_t;
// # 166
typedef long blkcnt_t;
// # 180
typedef int ssize_t;
// # 189
typedef unsigned int socklen_t;
// # 46 "/users/rupak/ccured/include/gcc_3.2/stdio.h"
// # 243 "/users/rupak/ccured/include/ccured_GNUCC.patch"
typedef struct __ccured_va_list *__gnuc_va_list;
// # 172 "/usr/include/libio.h"
// # 178
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
// # 263
// # 327
typedef struct _IO_FILE _IO_FILE;
// # 263 "/users/rupak/ccured/include/ccured_GNUCC.patch"
struct __ccured_va_list {
   int next ;
};
// # 263
typedef struct __ccured_va_list *__ccured_va_list;
// # 35 "/usr/include/sys/types.h"
// # 36
// # 38
// # 67
typedef __gid_t gid_t;
// # 72
// # 82
// # 88
// # 100
// # 110
// # 76 "/users/rupak/ccured/include/gcc_3.2/time.h"
// # 193 "/usr/include/sys/types.h"
// # 28 "/usr/include/bits/sigset.h"
struct anonstruct_sigset_t_2 {
   unsigned long val[(int )(1024U / (8U * sizeof(unsigned long )))] ;
};
// # 28
typedef struct anonstruct_sigset_t_2 sigset_t;
// # 38 "/usr/include/sys/select.h"
// # 118 "/users/rupak/ccured/include/gcc_3.2/time.h"
struct timespec {
   time_t tv_sec ;
   long tv_nsec ;
};
// # 69 "/usr/include/bits/time.h"
struct timeval {
   time_t tv_sec ;
   suseconds_t tv_usec ;
};
// # 55 "/usr/include/sys/select.h"
typedef long fd_mask;
// # 67
struct anonstruct_fd_set_3 {
   fd_mask fds_bits[(int )(1024U / (8U * sizeof(fd_mask )))] ;
};
// # 67
typedef struct anonstruct_fd_set_3 fd_set;
// # 247 "/users/rupak/ccured/include/gcc_3.2/unistd.h"
// # 36 "/usr/include/bits/stat.h"
struct stat {
   dev_t st_dev ;
   unsigned short pad1 ;
   ino_t st_ino ;
   mode_t st_mode ;
   nlink_t st_nlink ;
   uid_t st_uid ;
   __gid_t st_gid ;
   dev_t st_rdev ;
   unsigned short pad2 ;
   off_t st_size ;
   blksize_t st_blksize ;
   blkcnt_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   unsigned long unused4 ;
   unsigned long unused5 ;
};
// # 29 "/usr/include/bits/sockaddr.h"
typedef unsigned short sa_family_t;
// # 145 "/usr/include/bits/socket.h"
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
// # 73 "/users/rupak/ccured/include/gcc_3.2/signal.h"
typedef void (*sighandler_t)(int  );
// # 25 "/users/rupak/ccured/include/gcc_3.2/bits/sigaction.h"
struct sigaction {
   void (*sa_handler)(int  ) ;
   sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
// # 107 "/usr/include/bits/resource.h"
// # 115
struct rlimit {
   rlim_t rlim_cur ;
   rlim_t rlim_max ;
};
// # 43 "/usr/include/sys/resource.h"
typedef int rlimit_resource_t;
// # 65 "/usr/include/bits/waitstatus.h"
struct anonstruct_wait_terminated_44 {
   unsigned int w_termsig : 7 ;
   unsigned int w_coredump : 1 ;
   unsigned int w_retcode : 8 ;
   unsigned int  : 16 ;
};
// # 65
struct anonstruct_wait_stopped_45 {
   unsigned int w_stopval : 8 ;
   unsigned int w_stopsig : 8 ;
   unsigned int  : 16 ;
};
// # 65
union wait {
   int w_status ;
   struct anonstruct_wait_terminated_44 wait_terminated ;
   struct anonstruct_wait_stopped_45 wait_stopped ;
};
// # 50 "/usr/include/stdint.h"
typedef unsigned short uint16_t;
// # 52
typedef unsigned int uint32_t;
// # 89 "/usr/include/netinet/in.h"
typedef uint16_t in_port_t;
// # 133
typedef uint32_t in_addr_t;
// # 134
struct in_addr {
   in_addr_t s_addr ;
};
// # 216
struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[(int )(((sizeof(struct sockaddr ) -
                                   sizeof(unsigned short )) - sizeof(in_port_t )) -
                                 sizeof(struct in_addr ))] ;
};
// # 50 "/users/rupak/ccured/include/gcc_3.2/pwd.h"
struct passwd {
   char *pw_name ;
   char *pw_passwd ;
   uid_t pw_uid ;
   __gid_t pw_gid ;
   char *pw_gecos ;
   char *pw_dir ;
   char *pw_shell ;
};
// # 43 "/users/rupak/ccured/include/gcc_3.2/grp.h"
struct group {
   char *gr_name ;
   char *gr_passwd ;
   __gid_t gr_gid ;
   char **gr_mem ;
};
// # 36 "/usr/include/bits/setjmp.h"
typedef int __jmp_buf[6];
// # 36 "/users/rupak/ccured/include/gcc_3.2/setjmp.h"
struct jmp_buf_tag {
   __jmp_buf jmpbuf ;
   int mask_was_saved ;
   sigset_t saved_mask ;
};
// # 36
typedef struct jmp_buf_tag jmp_buf[1];
// # 98
typedef struct jmp_buf_tag sigjmp_buf[1];
// # 96 "/users/rupak/ccured/include/gcc_3.2/netdb.h"
struct hostent {
   char *h_name ;
   char **h_aliases ;
   int h_addrtype ;
   int h_length ;
   char **h_addr_list ;
};
// # 207
struct servent {
   char *s_name ;
   char **s_aliases ;
   int s_port ;
   char *s_proto ;
};
// # 393
struct addrinfo {
   int ai_flags ;
   int ai_family ;
   int ai_socktype ;
   int ai_protocol ;
   socklen_t ai_addrlen ;
   struct sockaddr *ai_addr ;
   char *ai_canonname ;
   struct addrinfo *ai_next ;
};
// # 37 "/users/rupak/ccured/include/functions/getaddrinfo.h"
struct libc_addrinfo {
   int ai_flags ;
   int ai_family ;
   int ai_socktype ;
   int ai_protocol ;
   socklen_t ai_addrlen ;
   struct sockaddr *ai_addr ;
   char *ai_canonname ;
   struct libc_addrinfo *ai_next ;
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
// # 31 "conversions.h"
struct convert {
   struct convert *next ;
   char *stripprefix ;
   char *stripfix ;
   char *prefix ;
   char *postfix ;
   char *external_cmd ;
   int types ;
   int options ;
   char *name ;
};
// # 41 "extensions.h"
struct aclmember {
   struct aclmember *next ;
   char keyword[20] ;
   char *arg[50] ;
};
// # 40 "/users/rupak/ccured/include/gcc_3.2/shadow.h"
struct spwd {
   char */*  attribute__((mdsize__(nullterm))) */ sp_namp ;
   char * /* attribute__((mdsize__(nullterm))) */ sp_pwdp ;
   long sp_lstchg ;
   long sp_min ;
   long sp_max ;
   long sp_warn ;
   long sp_inact ;
   long sp_expire ;
   unsigned long sp_flag ;
};
// # 23 "/usr/include/bits/dirent.h"
struct dirent {
   ino_t d_ino ;
   off_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
// # 128 "/usr/include/dirent.h"
typedef struct dirstream DIR;
// # 139 "ftpcmd.y"
struct tab {
   char *name ;
   short token ;
   short state ;
   short implemented ;
   char *help ;
};
// # 183
union anonunion_yystype_47 {
   char *String ;
   int Number ;
};
// # 183
typedef union anonunion_yystype_47 yystype;
// # 78 "/usr/share/bison/bison.simple"
union yyalloc {
   short yyss ;
   yystype yyvs ;
};
// # 52 "/usr/include/bits/utmp.h"
struct exit_status {
   short e_termination ;
   short e_exit ;
};
// # 60
struct utmp {
   short ut_type ;
   pid_t ut_pid ;
   char ut_line[32] ;
   char ut_id[4] ;
   char ut_user[32] ;
   char ut_host[256] ;
   struct exit_status ut_exit ;
   long ut_session ;
   struct timeval ut_tv ;
   int32_t ut_addr_v6[4] ;
   char unused[20] ;
};
// # 244 "popen.c"
union anonunion_u_51 {
   int in ;
   int i ;
};
// # 51 "/usr/include/regex.h"
typedef unsigned long reg_syntax_t;
// # 333
struct re_pattern_buffer {
   unsigned char *buffer ;
   unsigned long allocated ;
   unsigned long used ;
   reg_syntax_t syntax ;
   char *fastmap ;
   char *translate ;
   size_t re_nsub ;
   unsigned int can_be_null : 1 ;
   unsigned int regs_allocated : 2 ;
   unsigned int fastmap_accurate : 1 ;
   unsigned int no_sub : 1 ;
   unsigned int not_bol : 1 ;
   unsigned int not_eol : 1 ;
   unsigned int newline_anchor : 1 ;
};
// # 401
typedef struct re_pattern_buffer regex_t;
// # 404
typedef int regoff_t;
// # 428
struct anonstruct_regmatch_t_47 {
   regoff_t rm_so ;
   regoff_t rm_eo ;
};
// # 428
typedef struct anonstruct_regmatch_t_47 regmatch_t;
// # 574 "extensions.c"
struct dirlist {
   struct dirlist *next ;
   int dircode ;
   char dirname[1] ;
};
// # 76 "private.c"
struct acgrp {
   char gname[100] ;
   char gpass[100] ;
   char gr_name[100] ;
   gid_t gr_gid ;
   struct acgrp *next ;
};
// # 58 "conversions.c"
struct str2int {
   char *string ;
   int value ;
};
// # 106 "routevector.c"
struct v_addr {
   u_long s_external_identity ;
   u_long s_vector ;
   unsigned short s_sig ;
};
// # 111
typedef struct v_addr v_addr;
// # 112
struct v_index {
   v_addr *memory ;
   v_addr **index ;
   unsigned short count ;
   unsigned short slots ;
};
// # 118
typedef struct v_index v_index;
// # 119
struct v_paddr {
   u_long s_address ;
   int minport ;
   int maxport ;
   unsigned short s_sig ;
};
// # 125
typedef struct v_paddr v_paddr;
// # 126
struct v_ports {
   v_paddr *memory ;
   v_paddr **index ;
   unsigned short count ;
   unsigned short slots ;
};
// # 132
typedef struct v_ports v_ports;
// # 36 "wu_fnmatch.c"
typedef int boolean;
struct dirstream;
// # 19 "/users/rupak/ccured/include/ccured.h"
/* extern */ void *wrapperAlloc(unsigned int  a) {}
// # 52
/* extern */ void * /*attribute__((safe__))*/ ptrof_nocheck(void *ptr ) {}
// # 64
/* extern */ void * /*attribute__((safe__))*/ endof(void *ptr ) {}
// # 79
/* extern */ void * /*attribute__((safe__))*/ ptrof(void *ptr ) {}
// # 93
/* extern */ void verify_nul(char /*const*/   *ptr ) {}
// # 126
/* extern */ char *stringof(char /*const*/   *ptr ) {}
// # 182
/* extern */ void *mkptr(void * /*attribute__((safe__))*/ p , void *phome ) {}
// # 198
/* extern */ void *mkptr_size(void * /*attribute__((safe__))*/ p , unsigned int len ) {}
// # 208
/* extern */ char *mkptr_string(char * /*attribute__((safe__))*/ p ) {}
// # 229
/* extern */ void *trusted_cast(void *p ) {}
// # 239
/* extern */ void * /*attribute__((safe__))*/ trusted_deepcast(void * /*attribute__((safe__))*/ p ) {}
// # 311
/* extern */ int __ccured_has_empty_mangling(unsigned int  a) {}
// # 432 "/usr/include/libio.h"
/* extern */ int _IO_getc(_IO_FILE *fp ) {}
// # 433
/* extern */ int _IO_putc(int c , _IO_FILE *fp ) {}
// # 167 "/users/rupak/ccured/include/ccured_GNUCC.patch"
/* extern */ FILE *get_stdin(void) {}
// # 169
/* extern */ FILE *get_stdout(void) {}
// # 171
/* extern */ FILE *get_stderr(void) {}
// # 156 "/usr/include/stdio.h"
/* extern */ int rename(char /*const*/   *old , char /*const*/   *new ) {}
// # 202
/* extern */ int fclose(FILE *stream ) {}
// # 204
/* extern */ int fflush(FILE *stream ) {}
// # 221
/* extern */ FILE *fopen(char /*const*/   *   filename ,
                   char /*const*/   *   modes ) {}
// # 224
/* extern */ FILE *freopen(char /*const*/   *   filename ,
                     char /*const*/   *   modes ,
                     FILE *   stream ) {}
// # 252
/* extern */ FILE *fdopen(int fd , char /*const*/   *modes ) {}
// # 297
/* extern */ int fprintf(FILE *   stream ,
                   char /*const*/   *   format  , ...) {}
// # 300
/* extern */ int printf(char /*const*/   *   format  , ...) {}
// # 302
/* extern */ int sprintf(char *   s , char /*const*/   *   format 
                   , ...) {}
// # 319
/* extern */ int snprintf(char *   s , size_t maxlen ,
                    char /*const*/   *   format  , ...) {}
// # 323
/* extern */ int vsnprintf(char *   s , size_t maxlen ,
                     char /*const*/   *   format , __gnuc_va_list arg ) {}
// # 358
/* extern */ int sscanf(char /*const*/   *   s ,
                  char /*const*/   *   format  , ...) {}
// # 442
/* extern */ char *fgets(char *   s , int n ,
                   FILE *   stream ) {}
// # 491
/* extern */ size_t fread(void *   ptr , size_t size , size_t n ,
                    FILE *   stream ) {}
// # 515
/* extern */ int fseek(FILE *stream , long off , int whence ) {}
// # 581
/* extern */ int ferror(FILE *stream ) {}
// # 594
/* extern */ void perror(char /*const*/   *s ) {}
// # 606
/* extern */ int fileno(FILE *stream ) ;
// # 264 "/users/rupak/ccured/include/ccured_GNUCC.patch"
/* extern */ void __ccured_va_start(__ccured_va_list a , unsigned long  b) {}
// # 267
/* extern */ void __ccured_va_end(__ccured_va_list  a) {}
// # 337 "/users/rupak/ccured/include/stdio_wrappers.h"
/* extern */ int ( /* missing proto */  GCC_STDARG_START)() {}
// # 468
void perror_wrapper(char /*const*/   *s ) 
{ char /*const*/   *tmp ;

  {
  {
// # 469
  tmp = (char /*const*/   *)stringof(s);
// # 469
  perror(tmp);
  }
// # 470
  return;
}
}
// # 30 "COPYRIGHT.c"
void print_copyright(void) ;
// # 31
// # 33
char *Copyright   = "\n  Copyright (c) 1999,2000 WU-FTPD Development Group.\n  All rights reserved.\n\n  Portions Copyright (c) 1980, 1985, 1988, 1989, 1990, 1991, 1993, 1994\n    The Regents of the University of California.\n  Portions Copyright (c) 1993, 1994 Washington University in Saint Louis.\n  Portions Copyright (c) 1996, 1998 Berkeley Software Design, Inc.\n  Portions Copyright (c) 1989 Massachusetts Institute of Technology.\n  Portions Copyright (c) 1998 Sendmail, Inc.\n  Portions Copyright (c) 1983, 1995, 1996, 1997 Eric P.  Allman.\n  Portions Copyright (c) 1997 by Stan Barber.\n  Portions Copyright (c) 1997 by Kent Landfield.\n  Portions Copyright (c) 1991, 1992, 1993, 1994, 1995, 1996, 1997\n    Free Software Foundation, Inc.  \n\n  Use and distribution of this software and its source code are governed \n  by the terms and conditions of the WU-FTPD Software License (\"LICENSE\").\n\n  If you did not receive a copy of the license, it may be obtained online\n  at http://www.wu-ftpd.org/license.html.\n";
// # 55
char version[49]   = 
// # 1
  {'V', 'e', 'r', 's', 'i', 'o', 'n', ' ', 'w', 'u', '-', '2', '.', '6', '.',
   '2', '(', '5', ')', ' ', 'F', 'r', 'i', ' ', 'S', 'e', 'p', ' ', '1', '7',
   ' ', '1', '0', ':', '5', '4', ':', '0', '2', ' ', 'P', 'D', 'T', ' ', '2',
   '0', '0', '4', '\0'};
void print_copyright(void) 
{ 

  {
  {
// # 57
  printf((char /*const*/   */*   */)((char /*const*/   *)"%s\n"), Copyright);
// # 58
  printf((char /*const*/   */*   */)((char /*const*/   *)"%s\n"), version);
  }
// # 59
  return;
}
}
// # 1 "vers.c"
// # 48 "/users/rupak/ccured/include/time_wrappers.h"
/* extern */ time_t time(time_t *t ) ;
// # 63
/* extern */ char *ctime(time_t /*const*/   *timep ) ;
// # 106 "/usr/include/sys/select.h"
/* extern */ int select(int nfds , fd_set *   readfds ,
                  fd_set *   writefds ,
                  fd_set *   exceptfds ,
                  struct timeval *   timeout ) ;
// # 144 "/users/rupak/ccured/include/gcc_3.2/stdlib.h"
/* extern */ int atoi(char /*const*/   *nptr )  /*attribute__((pure__))*/ ;
// # 179
/* extern */ unsigned long strtoul(char /*const*/   *   nptr ,
                             char **   endptr , int base ) ;
// # 473 "/usr/include/stdlib.h"
/* extern */ int rand(void) ;
// # 475
/* extern */ void srand(unsigned int seed ) ;
// # 556
/* extern */ void *malloc(size_t size )  /*attribute__((malloc__))*/ ;
// # 558
/* extern */ void *calloc(size_t nmemb , size_t size )  /*attribute__((malloc__))*/ ;
// # 539 "/users/rupak/ccured/include/ccured_GNUCC.patch"
/* extern */ void *realloc(void *ptr , size_t size ) ;
// # 569 "/usr/include/stdlib.h"
/* extern */ void free(void *ptr ) ;
// # 613
// # 737
/* extern */ void qsort(void *base , size_t nmemb , size_t size ,
                  int (*compar)(void /*const*/   * /*attribute__((safe__))*/ left ,
                                  void /*const*/   * /*attribute__((safe__))*/ right ) ) ;
// # 10 "/users/rupak/ccured/include/malloc_wrappers.h"
void *realloc_wrapper(void *b , int sz ) 
{ void *res ;
  void *tmp ;
  void *tmp_0 ;
  void *result ;
  // # 12
  tmp = (void *)ptrof(b);
  // # 12
  tmp_0 = realloc(tmp, (unsigned int )sz);
  // # 12
  res = tmp_0;
  // # 15
  result = b;
  // # 17
  result = mkptr_size((void *)res,
                        (unsigned int )sz);
  // # 18
  return (result);
}
// # 23
void free_wrapper(void *x ) 
{ void *tmp ;

  // # 24
  tmp = (void *)ptrof(x);
  // # 24
  free(tmp);
  // # 25
  return;
}
// # 152 "/users/rupak/ccured/include/stdlib_wrappers.h"
static void *qsort_base  ;
// # 156
static int (*qsort_compare)(void * , void * )  ;
// # 195
static void *bsearch_base  ;
// # 196
static void *bsearch_key  ;
// # 200
static int (*bsearch_compare)(void * , void * )  ;
// # 290 "/users/rupak/ccured/include/gcc_3.2/unistd.h"
/* extern */ off_t lseek(int fd , off_t offset , int whence ) ;
// # 306
/* extern */ int close(int fd ) ;
// # 310
/* extern */ ssize_t read(int fd , void *buf , size_t nbytes ) ;
// # 313
/* extern */ ssize_t write(int fd , void /*const*/   *buf , size_t n ) ;
// # 353
/* extern */ int pipe(int *pipedes ) ;
// # 362
/* extern */ unsigned int alarm(unsigned int seconds ) ;
// # 371
/* extern */ unsigned int sleep(unsigned int seconds ) ;
// # 393
/* extern */ int chown(char /*const*/   *file , uid_t owner , __gid_t group ) ;
// # 409
/* extern */ int chdir(char /*const*/   *path ) ;
// # 413
/* extern */ int fchdir(int fd ) ;
// # 423
/* extern */ char *getcwd(char *buf , size_t size ) ;
// # 444
/* extern */ int dup2(int fd , int fd2 ) ;
// # 467
/* extern */ int execv(char /*const*/   *path , char * /*const*/  *argv ) ;
// # 489
/* extern */ int nice(int inc ) ;
// # 494
/* extern */ void _exit(int status )  /*attribute__((noreturn__))*/ ;
// # 518
/* extern */ pid_t getpid(void) ;
// # 591
/* extern */ uid_t geteuid(void) ;
// # 597
/* extern */ __gid_t getegid(void) ;
// # 602
/* extern */ int getgroups(int size , __gid_t *list ) ;
// # 613
/* extern */ int setuid(uid_t uid ) ;
// # 623
/* extern */ int seteuid(uid_t uid ) ;
// # 630
/* extern */ int setgid(__gid_t gid ) ;
// # 640
/* extern */ int setegid(__gid_t gid ) ;
// # 672
/* extern */ pid_t vfork(void) ;
// # 706
/* extern */ int readlink(char /*const*/   *   path ,
                    char *   buf , size_t len ) ;
// # 711
/* extern */ int unlink(char /*const*/   *name ) ;
// # 714
/* extern */ int rmdir(char /*const*/   *path ) ;
// # 47 "/usr/include/getopt.h"
/* extern */ char *optarg ;
// # 70
/* extern */ int optopt ;
// # 145
/* extern */ int getopt(int argc , char * /*const*/  *argv ,
                  char /*const*/   *shortopts ) ;
// # 752 "/users/rupak/ccured/include/gcc_3.2/unistd.h"
/* extern */ int gethostname(char *name , size_t len ) ;
// # 798
/* extern */ char *getusershell(void) ;
// # 799
/* extern */ void endusershell(void) ;
// # 813
/* extern */ int chroot(char /*const*/   *path ) ;
// # 859
/* extern */ int ftruncate(int fd , off_t length ) ;
// # 15 "/users/rupak/ccured/include/functions/deepcopy_stringarray.h"
inline static char **deepcopy_stringarray_from_compat(char * /*attribute__((safe__))*/ * /*attribute__((safe__))*/ array_in ) 
{ int num_strings ;
  int i ;
  char **new_array ;
  char * /*attribute__((safe__))*/ * /*attribute__((safe__))*/ p ;
  void * /*attribute__((safe__))*/ tmp ;
  char **tmp_0 ;
  int tmp_2 ;
  void *tmp_3 ;
  void *tmp_5 ;

  {
  {
// # 17
  num_strings = 0;
  }
// # 24
  if ((unsigned int )array_in ==
      (unsigned int )((char * /*attribute__((safe__))*/ *)0)) {
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
    tmp_3 = trusted_cast((void *)((unsigned long )p +
                                      (unsigned long )(1U * sizeof((*p)))));
// # 31
    p = (char * * )((char * /*attribute__((safe__))*/ *)tmp_3);
// # 32
    num_strings ++;
    }
  }
  {
// # 34
  num_strings ++;
// # 36
  tmp_2 = __ccured_has_empty_mangling(sizeof((*new_array)));
  }
// # 36
  if (tmp_2) {
    {
// # 38
    tmp = trusted_deepcast((void *)((void *)array_in));
// # 38
    tmp_0 = (char **)mkptr_size(tmp, (unsigned int )num_strings *
                                         sizeof((*(new_array + 0))));
    }
// # 38
    return (tmp_0);
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
      tmp_5 = trusted_cast((void *)((unsigned long )array_in +
                                        (unsigned long )((unsigned int )i *
                                                         sizeof((*array_in)))));
// # 46
      p = (char * * )((char * /*attribute__((safe__))*/ *)tmp_5);
// # 47
      (*(new_array + i)) = mkptr_string((*p));
// # 43
      i ++;
      }
    }
  }
// # 50
  return (new_array);
}
}
// # 255 "/users/rupak/ccured/include/gcc_3.2/sys/stat.h"
/* extern */ int chmod(char /*const*/   *file , mode_t mode ) ;
// # 272
/* extern */ mode_t umask(mode_t mask ) ;
// # 281
/* extern */ int mkdir(char /*const*/   *path , mode_t mode ) ;
// # 319
/* extern */ int fxstat(int ver , int fildes , struct stat *stat_buf ) {}
// # 320
/* extern */ int xstat(int ver , char /*const*/   *filename ,
                   struct stat *stat_buf ) {}
// # 322
/* extern */ int lxstat(int ver , char /*const*/   *filename ,
                    struct stat *stat_buf ) {}
// # 356
inline static int statextinline(char /*const*/   *path ,
                                    struct stat *statbuf ) 
{ int tmp ;

  {
  {
// # 359
  tmp = xstat(3, path, statbuf);
  }
// # 359
  return (tmp);
}
}
// # 363
inline static int lstatextinline(char /*const*/   *path ,
                                     struct stat *statbuf ) 
{ int tmp ;

  {
  {
// # 366
  tmp = lxstat(3, path, statbuf);
  }
// # 366
  return (tmp);
}
}
// # 370
inline static int fstatextinline(int fd , struct stat *statbuf ) 
{ int tmp ;

  {
  {
// # 372
  tmp = fxstat(3, fd, statbuf);
  }
// # 372
  return (tmp);
}
}
// # 100 "/usr/include/sys/socket.h"
/* extern */ int socket(int domain , int type , int protocol ) ;
// # 110
/* extern */ int bind(int fd , void /*const*/   *addr , socklen_t len ) ;
// # 114
/* extern */ int getsockname(int fd , void *   addr ,
                       socklen_t *   len ) ;
// # 121
/* extern */ int connect(int fd , void /*const*/   *addr , socklen_t len ) ;
// # 126
/* extern */ int getpeername(int fd , void *   addr ,
                       socklen_t *   len ) ;
// # 175
/* extern */ int setsockopt(int fd , int level , int optname ,
                      void /*const*/   *optval , socklen_t optlen ) ;
// # 182
/* extern */ int listen(int fd , int n ) ;
// # 189
/* extern */ int accept(int fd , void *   addr ,
                  socklen_t *   addr_len ) ;
// # 199
/* extern */ int shutdown(int fd , int how ) ;
// # 60 "/users/rupak/ccured/include/gcc_3.2/fcntl.h"
/* extern */ int fcntl(int fd , int cmd  , ...) ;
// # 66
/* extern */ int open(char /*const*/   *file , int flag  , ...) ;
// # 51 "/usr/include/sys/file.h"
/* extern */ int flock(int fd , int operation ) ;
// # 90 "/users/rupak/ccured/include/gcc_3.2/signal.h"
/* extern */ sighandler_t signal(int sig , void (*handler)(int  ) ) ;
// # 114
/* extern */ int kill(pid_t pid , int sig ) ;
// # 209
/* extern */ int sigemptyset(sigset_t *set ) ;
// # 215
/* extern */ int sigaddset(sigset_t *set , int signo ) ;
// # 241
/* extern */ int sigprocmask(int how , sigset_t /*const*/   *   set ,
                       sigset_t *   oset ) ;
// # 285
/* extern */ char /*const*/   * /*const*/  sys_siglist[64] ;
// # 57 "/users/rupak/ccured/include/signal_wrappers.h"
inline static void *mkfat_sighandler(void *in ) 
{ void *tmp ;
  void *tmp_0 ;

  {
// # 58
  if ((int )in == 1) {
    {
// # 59
    tmp = mkptr((void *)in, (void *)0);
    }
// # 59
    return (tmp);
  } else {
    {
// # 61
    tmp_0 = mkptr_size((void *)in, 1U);
    }
// # 61
    return (tmp_0);
  }
}
}
// # 80
/* extern */ void deepcopy_sigaction_from_compat(struct sigaction *fat ,
                                             struct sigaction  /*attribute__((__compat__))*/ *compat ) 
{ 

  {
  {
// # 81
  fat->sa_handler = (void (*)(int  ))mkfat_sighandler((void *)compat->sa_handler);
// # 82
  fat->sa_restorer = (void (*)(void))mkfat_sighandler((void *)compat->sa_restorer);
  }
// # 84
  return;
}
}
// # 51 "/usr/include/sys/resource.h"
/* extern */ int getrlimit(rlimit_resource_t resource , struct rlimit *rlimits ) ;
// # 109 "/usr/include/sys/wait.h"
/* extern */ pid_t wait(union wait *stat_loc ) ;
// # 50 "../support/ftp.h"
char *typenames[5]   = {"0", "ASCII", "EBCDIC", "Image", "Local"};
// # 61
char *formnames[4]   = {"0", "Nonprint", "Telnet", "Carriage-control"};
// # 72
char *strunames[4]   = {"0", "File", "Record", "Page"};
// # 83
char *modenames[4]   = {"0", "Stream", "Block", "Compressed"};
// # 35 "/users/rupak/ccured/include/gcc_3.2/arpa/inet.h"
/* extern */ in_addr_t inet_addr(char /*const*/   *cp ) ;
// # 54
/* extern */ char *inet_ntoa(struct in_addr in ) ;
// # 522 "/users/rupak/ccured/include/ccured_GNUCC.patch"
char *inet_ntoa_wrapper(struct in_addr in ) 
{ char * /*attribute__((safe__))*/ tmp ;
  char *tmp_0 ;

  {
  {
// # 524
  tmp = (char *)inet_ntoa(in);
// # 524
  tmp_0 = mkptr_string(tmp);
  }
// # 524
  return (tmp_0);
}
}
// # 72
/* extern */ int _get__ctype_b(int  a) {}
// # 110 "/usr/include/ctype.h"
/* extern */ int isspace(int  a) {}
// # 116
/* extern */ int tolower(int c ) {}
// # 119
/* extern */ int toupper(int c ) {}
// # 81 "/users/rupak/ccured/include/gcc_3.2/pwd.h"
// # 89
/* extern */ struct passwd *getpwuid(uid_t uid ) {}
// # 92
/* extern */ struct passwd *getpwnam(char /*const*/   *name ) {}
// # 38 "/users/rupak/ccured/include/gcc_3.2/string.h"
/* extern */ void *memcpy(void *   dest ,
                    void /*const*/   *   src , size_t n ) {}
// # 58
/* extern */ void *memset(void *s , int c , size_t n ) {}
// # 82
/* extern */ char *strcpy(char *   dest ,
                    char /*const*/   *   src ) {}
// # 85
/* extern */ char *strncpy(char *   dest ,
                     char /*const*/   *   src , size_t n ) {}
// # 89
/* extern */ char *strcat(char *   dest ,
                    char /*const*/   *   src ) {}
// # 96
/* extern */ int strcmp(char /*const*/   *s1 , char /*const*/   *s2 )  /*attribute__((pure__))*/ {}
// # 99
/* extern */ int strncmp(char /*const*/   *s1 , char /*const*/   *s2 , size_t n )  /*attribute__((pure__))*/ {}
// # 126
/* extern */ char *strdup(char /*const*/   *s )  /*attribute__((malloc__))*/ {}
// # 162
/* extern */ char *strchr(char /*const*/   *s , int c )  /*attribute__((pure__))*/ {}
// # 164
/* extern */ char *strrchr(char /*const*/   *s , int c )  /*attribute__((pure__))*/ {}
// # 183
/* extern */ char *strpbrk(char /*const*/   *s , char /*const*/   *accept )  /*attribute__((pure__))*/ {}
// # 336 "/users/rupak/ccured/include/ccured_GNUCC.patch"
/* extern */ char * /* attribute__((rostring, */
/* nullterm__)) */ strstr(char /*const*/   * /* attribute__((rostring, */
/*                       nullterm__)) */ haystack ,
                      char /*const*/   * /* attribute__((rostring, */
/*                       nullterm__)) */ needle ) {}
// # 191 "/usr/include/string.h"
/* extern */ char *strtok(char *   s , char /*const*/   *   delim ) {}
// # 230
/* extern */ size_t strlen(char /*const*/   *s )  /*attribute__((pure__))*/ {}
// # 243
/* extern */ char *strerror(int errnum ) {}
// # 287
/* extern */ int strcasecmp(char /*const*/   *s1 , char /*const*/   *s2 )  /*attribute__((pure__))*/ {}
// # 291
/* extern */ int strncasecmp(char /*const*/   *s1 , char /*const*/   *s2 , size_t n )  /*attribute__((pure__))*/ {}
// # 309
/* extern */ char *strsep(char **   stringp ,
                    char /*const*/   *   delim ) {}
// # 138 "/users/rupak/ccured/include/string_wrappers.h"
char *strrchr_wrapper(char /*const*/   *s , int chr ) 
{ char *result ;
  char *tmp ;
  char *tmp_0 ;

  {
  {
// # 141
  tmp = stringof(s);
// # 141
  result = strrchr((char /*const*/   *)tmp, chr);
// # 142
  tmp_0 = (char *)mkptr((void *)((void *)result),
                            (void *)s);
  }
// # 142
  return (tmp_0);
}
}
// # 168
int strcasecmp_wrapper(char /*const*/   *s1 , char /*const*/   *s2 ) 
{ char *tmp ;
  char *tmp_0 ;
  int tmp_1 ;

  {
  {
// # 170
  tmp = stringof(s2);
// # 170
  tmp_0 = stringof(s1);
// # 170
  tmp_1 = strcasecmp((char /*const*/   *)tmp_0, (char /*const*/   *)tmp);
  }
// # 170
  return (tmp_1);
}
}
// # 181
int strncasecmp_wrapper(char /*const*/   *s1 , char /*const*/   *s2 , unsigned int n ) 
{ void * /*attribute__((safe__))*/ tmp ;
  void * /*attribute__((safe__))*/ tmp_0 ;
  void * /*attribute__((safe__))*/ tmp_1 ;
  void * /*attribute__((safe__))*/ tmp_2 ;
  char *tmp_3 ;
  char *tmp_4 ;
  int tmp_5 ;

  {
  {
// # 183
  tmp = endof((void *)s1);
// # 183
  tmp_0 = ptrof_nocheck((void *)s1);
  }
// # 183
  if ((unsigned int )tmp - (unsigned int )tmp_0 < n) {
    {
// # 185
    verify_nul(s1);
    }
  }
  {
// # 187
  tmp_1 = endof((void *)s2);
// # 187
  tmp_2 = ptrof_nocheck((void *)s2);
  }
// # 187
  if ((unsigned int )tmp_1 - (unsigned int )tmp_2 < n) {
    {
// # 188
    verify_nul(s2);
    }
  }
  {
// # 190
  tmp_3 = (char *)ptrof((void *)s2);
// # 190
  tmp_4 = (char *)ptrof((void *)s1);
// # 190
  tmp_5 = strncasecmp((char /*const*/   *)tmp_4, (char /*const*/   *)tmp_3, n);
  }
// # 190
  return (tmp_5);
}
}
// # 254
static char /*const*/   *saved_str   = (char /*const*/   *)((void *)0);
// # 38 "/users/rupak/ccured/include/pwd_wrappers.h"
/* extern */ void deepcopy_passwd_from_compat(struct passwd *fat ,
                                          struct passwd  /*attribute__((__compat__))*/ *compat ) 
{ 

  {
  {
// # 40
  fat->pw_name = mkptr_string((char *)compat->pw_name);
// # 41
  fat->pw_passwd = mkptr_string((char *)compat->pw_passwd);
// # 42
  fat->pw_gecos = mkptr_string((char *)compat->pw_gecos);
// # 43
  fat->pw_dir = mkptr_string((char *)compat->pw_dir);
// # 44
  fat->pw_shell = mkptr_string((char *)compat->pw_shell);
  }
// # 45
  return;
}
}
// # 48
static struct passwd my_passwd_result  ;
// # 63 "/users/rupak/ccured/include/gcc_3.2/grp.h"
/* extern */ void endgrent(void) ;
// # 81
/* extern */ struct group *getgrgid(__gid_t gid ) ;
// # 84
/* extern */ struct group *getgrnam(char /*const*/   *name ) ;
// # 148
/* extern */ int initgroups(char /*const*/   *user , __gid_t group ) ;
// # 13 "/users/rupak/ccured/include/grp_wrappers.h"
/* extern */ void deepcopy_group_from_compat(struct group *fat ,
                                         struct group  /*attribute__((__compat__))*/ *compat ) 
{ 

  {
  {
// # 15
  fat->gr_name = mkptr_string((char *)compat->gr_name);
// # 16
  fat->gr_passwd = mkptr_string((char *)compat->gr_passwd);
// # 18
  fat->gr_mem = deepcopy_stringarray_from_compat((char * /*attribute__((safe__))*/ *)((char * /*attribute__((safe__))*/ *)compat->gr_mem));
  }
// # 19
  return;
}
}
// # 21
static struct group my_group_result  ;
// # 58 "/users/rupak/ccured/include/gcc_3.2/setjmp.h"
/* extern */ int sigsetjmp(struct jmp_buf_tag *env , int savemask ) {}
// # 63
/* extern */ int _setjmp(struct jmp_buf_tag *env ) {}
// # 80
/* extern */ void longjmp(struct jmp_buf_tag *env , int val )  /* attribute__((noreturn__)) */ {}
// # 108
/* extern */ void siglongjmp(struct jmp_buf_tag *env , int val )  /* attribute__((noreturn__)) */ {}
// # 38 "/usr/include/bits/errno.h"
/* extern */ int *errno_location(void)  /* attribute__((__const*__)) */ {}
// # 119 "/users/rupak/ccured/include/gcc_3.2/netdb.h"
/* extern */ struct hostent *gethostbyaddr(void /*const*/   *addr , socklen_t len ,
                                     int type ) {}
// # 123
/* extern */ struct hostent *gethostbyname(char /*const*/   *name ) {}
// # 228
/* extern */ struct servent *getservbyname(char /*const*/   *name ,
                                     char /*const*/   *proto ) {}
// # 468
/* extern */ char /*const*/   *gai_strerror(int ecode ) {}
// # 48 "/users/rupak/ccured/include/functions/getaddrinfo.h"
/* extern */ int true_getaddrinfo(char /*const*/   *node , char /*const*/   *service ,
                            struct libc_addrinfo  /*const*/  *hints ,
                            struct libc_addrinfo **res ) {}
// # 52
/* extern */ void true_freeaddrinfo(struct libc_addrinfo *res ) {}
// # 58
int getaddrinfo_wrapper(char /*const*/   *node , char /*const*/   *service ,
                        struct addrinfo  /*const*/  *hints , struct addrinfo **res ) 
{ struct libc_addrinfo libc_hints ;
  struct libc_addrinfo *libc_res ;
  struct libc_addrinfo *source ;
  struct addrinfo *dest ;
  int len ;
  int ret ;
  char /*const*/   *tmp ;
  char /*const*/   *tmp_0 ;
  struct addrinfo *newNode ;
  struct addrinfo *tmp_1 ;
  void *   tmp_3 ;
  size_t tmp_4 ;
  void *   tmp_6 ;

  {
  {
// # 67
  dest = (struct addrinfo *)((void *)0);
// # 75
  libc_hints.ai_flags = hints->ai_flags;
// # 76
  libc_hints.ai_family = hints->ai_family;
// # 77
  libc_hints.ai_socktype = hints->ai_socktype;
// # 78
  libc_hints.ai_protocol = hints->ai_protocol;
// # 79
  libc_hints.ai_addrlen = hints->ai_addrlen;
// # 80
  libc_hints.ai_addr = (struct sockaddr *)ptrof((void *)hints->ai_addr);
// # 81
  libc_hints.ai_canonname = (char *)ptrof((void *)hints->ai_canonname);
// # 82
  libc_hints.ai_next = (struct libc_addrinfo *)((void *)0);
// # 88
  tmp = (char /*const*/   *)ptrof((void *)service);
// # 88
  tmp_0 = (char /*const*/   *)ptrof((void *)node);
// # 88
  ret = true_getaddrinfo(tmp_0, tmp,
                         (struct libc_addrinfo  /*const*/  *)(& libc_hints),
                         & libc_res);
  }
// # 90
  if (ret != 0) {
// # 91
    return (ret);
  }
  {
// # 97
  (*res) = (struct addrinfo *)((void *)0);
// # 98
  source = libc_res;
  }
// # 98
  while ((unsigned int )source != (unsigned int )((void *)0)) {
    {
// # 100
    tmp_1 = (struct addrinfo *)wrapperAlloc(sizeof((*dest)));
// # 100
    newNode = tmp_1;
    }
// # 102
    if (dest) {
      {
// # 108
      dest->ai_next = newNode;
      }
    } else {
      {
// # 104
      (*res) = newNode;
      }
    }
    {
// # 110
    dest = newNode;
// # 113
    dest->ai_flags = source->ai_flags;
// # 114
    dest->ai_family = source->ai_family;
// # 115
    dest->ai_socktype = source->ai_socktype;
// # 116
    dest->ai_protocol = source->ai_protocol;
// # 117
    dest->ai_addrlen = source->ai_addrlen;
// # 119
    len = (int )source->ai_addrlen;
// # 120
    dest->ai_addr = (struct sockaddr *)wrapperAlloc((unsigned int )len);
// # 122
    tmp_3 = (void */*   */)ptrof((void *)dest->ai_addr);
// # 122
    memcpy(tmp_3,
           (void /*const*/   */*   */)((void /*const*/   *)source->ai_addr),
           (unsigned int )len);
    }
// # 124
    if (source->ai_canonname) {
      {
// # 125
      tmp_4 = strlen((char /*const*/   *)source->ai_canonname);
// # 125
      len = (int )(tmp_4 + 1U);
// # 126
      dest->ai_canonname = (char *)wrapperAlloc((unsigned int )len);
// # 127
      tmp_6 = (void */*   */)ptrof((void *)dest->ai_canonname);
// # 127
      memcpy(tmp_6,
             (void /*const*/   */*   */)((void /*const*/   *)source->ai_canonname),
             (unsigned int )len);
      }
    } else {
      {
// # 130
      dest->ai_canonname = (char *)((void *)0);
      }
    }
    {
// # 134
    dest->ai_next = (struct addrinfo *)((void *)0);
// # 98
    source = source->ai_next;
    }
  }
  {
// # 139
  true_freeaddrinfo(libc_res);
  }
// # 141
  return (ret);
}
}
// # 146
void freeaddrinfo_wrapper(struct addrinfo *res ) 
{ struct addrinfo *next ;

  {
// # 150
  while (res) {
    {
// # 151
    next = res->ai_next;
// # 153
    free_wrapper((void *)res->ai_addr);
    }
// # 154
    if (res->ai_canonname) {
      {
// # 155
      free_wrapper((void *)res->ai_canonname);
      }
    }
    {
// # 157
    free_wrapper((void *)res);
// # 159
    res = next;
    }
  }
// # 161
  return;
}
}
// # 164
char /*const*/   *gai_strerror_wrapper(int code ) 
{ char * /*attribute__((safe__))*/ tmp ;
  char /*const*/   *tmp_0 ;

  {
  {
// # 165
  tmp = (char *)gai_strerror(code);
// # 165
  tmp_0 = (char /*const*/   *)mkptr_string(tmp);
  }
// # 165
  return (tmp_0);
}
}
// # 44 "proto.h"
int parsetime(char *whattime ) ;
// # 45
int validtime(char *ptr ) ;
// # 46
int hostmatch(char *addr , char *remoteaddr_0 , char *remotehost_0 ) ;
// # 47
int acl_guestgroup(struct passwd *pw_0 ) ;
// # 48
int acl_realgroup(struct passwd *pw_0 ) ;
// # 49
void acl_autogroup(struct passwd *pw_0 ) ;
// # 50
void acl_setfunctions(void) ;
// # 51
int acl_getclass(char *classbuf ) ;
// # 52
int acl_getlimit(char *class , char *msgpathbuf ) ;
// # 53
int acl_getnice(char *class ) ;
// # 54
void acl_getdefumask(char *class ) ;
// # 55
void acl_tcpwindow(char *class ) ;
// # 58
int acl_deny(char *msgpathbuf ) ;
// # 59
int acl_countusers(char *class ) ;
// # 60
void acl_join(char *class ) ;
// # 61
void acl_remove(void) ;
// # 62
void pr_mesg(int msgcode , char *msgfile ) ;
// # 63
void access_init(void) ;
// # 64
int access_ok(int msgcode ) ;
// # 69
struct aclmember *getaclentry(char *keyword , struct aclmember **next ) ;
// # 70
void parseacl(void) ;
// # 71
int readacl(char *aclpath ) ;
// # 84
int wu_authenticate(void) ;
// # 89
void conv_init(void) ;
// # 94
int check_newer(char *path , struct stat *st , int flag ) ;
// # 96
void msg_massage(char /*const*/   *inbuf , char *outbuf , size_t outlen ) ;
// # 97
int cwd_beenhere(int dircode ) ;
// # 98
void show_banner(int msgcode ) ;
// # 99
void show_message(int msgcode , int mode_0 ) ;
// # 100
void show_readme(int code , int mode_0 ) ;
// # 101
int deny_badasciixfer(int msgcode , char *filepath ) ;
// # 102
int is_shutdown(int quiet , int new_0 ) ;
// # 104
int type_match(char *typelist ) ;
// # 105
int path_compare(char *p1 , char *p2 ) ;
// # 106
void expand_id(void) ;
// # 107
int fn_check(char *name ) ;
// # 108
int dir_check(char *name , uid_t *uid , gid_t *gid , int *d_mode ,
              int *valid_0 ) ;
// # 110
int del_check(char *name ) ;
// # 111
int regexmatch(char *name , char *rgexp ) ;
// # 112
int checknoretrieve(char *name ) ;
// # 121
void SetCheckMethod(char /*const*/   *method ) ;
// # 122
void ShowCheckMethod(void) ;
// # 123
void CheckSum(char *pathname ) ;
// # 124
void CheckSumLastFile(void) ;
// # 129
char *wu_getline(char *s , int n , FILE *iop ) ;
// # 130
int yyparse(void) ;
// # 131
void upper(char *s ) ;
// # 132
char *copy(char *s ) ;
// # 133
void sizecmd(char *filename ) ;
// # 134
void site_exec(char *cmd ) ;
// # 135
void alias(char *s ) ;
// # 136
void cdpath(void) ;
// # 137
void print_groups(void) ;
// # 143
void randomsig(int sig ) ;
// # 144
void lostconn(int sig ) ;
// # 148
/* extern */ char *sgetsave(char *s ) ;
// # 149
struct passwd *sgetpwnam(char *name ) ;
// # 151
void user(char *name ) ;
// # 152
int checkuser(char *name ) ;
// # 153
int denieduid(uid_t uid ) ;
// # 154
int alloweduid(uid_t uid ) ;
// # 155
int deniedgid(gid_t gid ) ;
// # 156
int allowedgid(gid_t gid ) ;
// # 157
void end_login(void) ;
// # 158
int validate_eaddr(char *eaddr ) ;
// # 159
void pass(char *passwd ) ;
// # 160
int restricteduid(uid_t uid ) ;
// # 161
int unrestricteduid(uid_t uid ) ;
// # 162
int restrictedgid(gid_t gid ) ;
// # 163
int unrestrictedgid(gid_t gid ) ;
// # 164
char *opt_string(int options ) ;
// # 165
void retrieve(char *cmd , char *name ) ;
// # 166
void store(char *name , char *mode_0 , int unique ) ;
// # 167
FILE *getdatasock(char *mode_0 ) ;
// # 168
FILE *dataconn(char *name , off_t size , char *mode_0 ) ;
// # 172
int send_data(FILE *instr , FILE *outstr , off_t blksize ) ;
// # 174
int receive_data(FILE *instr , FILE *outstr ) ;
// # 175
void statfilecmd(char *filename ) ;
// # 176
void statcmd(void) ;
// # 177
void fatal(char *s ) ;
// # 178
void vreply(long flags , int n , char *fmt , __ccured_va_list ap ) ;
// # 179
void reply(int n , char *fmt  , ...) ;
// # 180
void lreply(int n , char *fmt  , ...) ;
// # 181
void ack(char *s ) ;
// # 182
void nack(char *s ) ;
// # 183
void yyerror(char *s ) ;
// # 184
void delete(char *name ) ;
// # 185
void cwd(char *path ) ;
// # 186
void makedir(char *name ) ;
// # 187
void removedir(char *name ) ;
// # 188
void pwd(void) ;
// # 189
char *renamefrom(char *name ) ;
// # 190
void renamecmd(char *from , char *to ) ;
// # 191
void dologout(int status ) ;
// # 192
void myoob(int sig ) ;
// # 193
void passive(void) ;
// # 194
char *gunique(char *local ) ;
// # 195
void perror_reply(int code , char *string ) ;
// # 196
void send_file_list(char *whichfiles ) ;
// # 197
void initsetproctitle(int argc , char **argv , char **envp ) ;
// # 198
void setproctitle(char /*const*/   *fmt  , ...) ;
// # 210
void fixpath(char *path ) ;
// # 215
void blkfree(char **av0 ) ;
// # 216
char **ftpglob(char *v ) ;
// # 229
void wu_logwtmp(char *line_0 , char *name , char *host , int login_0 ) ;
// # 234
void setup_paths(void) ;
// # 239
FILE *ftpd_popen(char *program , char *type_0 , int closestderr ) ;
// # 240
int ftpd_pclose(FILE *iop ) ;
// # 246
void parsepriv(void) ;
// # 247
void priv_setup(char *path ) ;
// # 248
void priv_group(char *group ) ;
// # 249
void priv_gpass(char *gpass ) ;
// # 259
char *fb_realpath(char /*const*/   *path , char *resolved ) ;
// # 260
char *wu_realpath(char /*const*/   *path , char *resolved_path ,
                  char *chroot_path_0 ) ;
// # 265
int restrict_check(char *name ) ;
// # 266
int test_restriction(char *name ) ;
// # 267
int restrict_list_check(char *name ) ;
// # 272
int routevector(void) ;
// # 273
void checkports(void) ;
// # 278
int enable_signaling(void) ;
// # 279
int delay_signaling(void) ;
// # 284
void load_timeouts(void) ;
// # 295
/* extern */ char *strcasestr(char *s , char *find ) ;
// # 172 "/usr/include/sys/syslog.h"
/* extern */ void closelog(void) ;
// # 175
/* extern */ void openlog(char /*const*/   *ident , int option , int facility ) ;
// # 182
/* extern */ void syslog(int pri , char /*const*/   *fmt  , ...) ;
// # 191 "/users/rupak/ccured/include/gcc_3.2/time.h"
/* extern */ time_t mktime(struct tm *tp ) ;
// # 229
/* extern */ struct tm *gmtime(time_t /*const*/   *timer ) ;
// # 233
/* extern */ struct tm *localtime(time_t /*const*/   *timer ) ;
// # 43 "conversions.h"
struct convert *cvtptr  ;
// # 58 "/usr/include/shadow.h"
/* extern */ void setspent(void) ;
// # 61
/* extern */ void endspent(void) ;
// # 67
/* extern */ struct spwd */* attribute__((split__))*/ getspnam(char /*const*/   */* attribute__((split__))*/ name )  /*attribute__((__compat__))*/ ;
// # 73
/* extern */ struct spwd */* attribute__((split__))*/ fgetspent(FILE */* attribute__((split__))*/ stream )  /*attribute__((__compat__))*/ ;
// # 146 "pathnames.h"
char path_ftpaccess[4096]  ;
// # 147
char path_ftpusers[4096]  ;
// # 148
char path_ftphosts[4096]  ;
// # 149
char path_private[4096]  ;
// # 150
char path_cvt[4096]  ;
// # 132 "/usr/include/dirent.h"
/* extern */ DIR *opendir(char /*const*/   *name ) {}
// # 136
/* extern */ int closedir(DIR *dirp ) {}
// # 146
/* extern */ struct dirent *readdir(DIR *dirp ) {}
// # 201
/* extern */ int dirfd(DIR *dirp ) {}
// # 218 "ftpd.c"
int pidfd ;
// # 222
/* extern */ char *crypt(char /*const*/   * a, char /*const*/   * b) {}
// # 226
char *home  ;
// # 227
char cbuf[512]  ;
// # 228
off_t restart_point  ;
// # 229
int yyerrorcalled  ;
// # 231
struct sockaddr_in ctrl_addr  ;
// # 232
struct sockaddr_in data_source  ;
// # 233
struct sockaddr_in data_dest  ;
// # 234
struct sockaddr_in his_addr  ;
// # 235
struct sockaddr_in pasv_addr  ;
// # 236
struct sockaddr_in vect_addr  ;
// # 237
int route_vectored   = 0;
// # 238
int passive_port_min   = -1;
// # 239
int passive_port_max   = -1;
// # 240
int restricted_user   = 0;
// # 260
int data  ;
// # 261
jmp_buf errcatch  ;
// # 262
sigjmp_buf urgcatch  ;
// # 263
int logged_in   = 0;
// # 264
struct passwd *pw  ;
// # 265
char chroot_path[4096]  ;
// # 266
int debug   = 0;
// # 267
int disable_rfc931   = 0;
// # 268
unsigned int timeout_idle ;
// # 269
unsigned int timeout_maxidle ;
// # 270
unsigned int timeout_data ;
// # 271
unsigned int timeout_accept ;
// # 272
unsigned int timeout_connect ;
// # 277
int logging   = 0;
// # 278
int log_commands   = 0;
// # 279
int log_security   = 0;
// # 280
int syslogmsg   = 0;
// # 281
static int wtmp_logging   = 1;
// # 295
int anonymous   = 1;
// # 296
int guest  ;
// # 297
int type  ;
// # 298
int form  ;
// # 299
int stru  ;
// # 300
int mode  ;
// # 301
int usedefault   = 1;
// # 302
int pdata   = -1;
// # 303
int transflag  ;
// # 304
int ftwflag  ;
// # 305
off_t file_size  ;
// # 306
off_t byte_count  ;
// # 307
int TCPwindowsize   = 0;
// # 345
int retrieve_is_data   = 1;
// # 346
char LastFileTransferred[4096]   = {'\0'};
// # 348
static char *RootDirectory   = (char *)((void *)0);
// # 354
unsigned int defumask   = (unsigned int )18;
// # 358
char tmpline[7]  ;
// # 359
char hostname[64]  ;
// # 360
char remotehost[64]  ;
// # 361
char remoteaddr[64]  ;
// # 362
char *remoteident   = "[nowhere yet]";
// # 372
int use_accessfile   = 0;
// # 373
char guestpw[64]  ;
// # 374
char privatepw[64]  ;
// # 375
int nameserved   = 0;
// # 376
char authuser[100]  ;
// # 377
int authenticated  ;
// # 378
int keepalive ;
// # 381
int xferlog   = 0;
// # 382
int log_outbound_xfers   = 0;
// # 383
int log_incoming_xfers   = 0;
// # 384
char logfile[4096]  ;
// # 388
int dolreplies   = 1;
// # 391
char *autospout   = (char *)((void *)0);
// # 392
int autospout_free   = 0;
// # 395
int mangleopts   = 0;
// # 398
int lgi_failure_threshold   = 5;
// # 405
int swaitmax   = 90;
// # 406
int swaitint   = 5;
// # 436
char proctitle[8192]  ;
// # 473
char ls_long[1024]  ;
// # 474
char ls_short[1024]  ;
// # 475
char ls_plain[1024]  ;
// # 483
int Bypass_PID_Files   = 0;
// # 495
int use_pam   = 0;
// # 507
void dolog(struct sockaddr_in *sin ) ;
// # 524
time_t login_time  ;
// # 525
long limit_time   = (long )0;
// # 529
int pasv_allowed(char *remoteaddr_0 ) ;
// # 530
int port_allowed(char *remoteaddr_0 ) ;
// # 536
static void alarm_signal(int sig ) 
{ 

  {
// # 538
  return;
}
}
// # 540
static FILE *draconian_FILE   = (FILE *)((void *)0);
// # 542
static void draconian_alarm_signal(int sig ) 
{ 

  {
// # 544
  if ((unsigned int )draconian_FILE != (unsigned int )((void *)0)) {
    {

    {
// # 96 "spec.work"
    if (draconian_FILE->BLAST_FLAG == 1) {
// # 97
      draconian_FILE->BLAST_FLAG = 0;
    } else {
// # 98
      error__();
    }
    {

    }
    }
// # 545 "ftpd.c"
    fclose(draconian_FILE);
// # 546
    draconian_FILE = (FILE *)((void *)0);
    }
  }
// # 548
  return;
}
}
// # 550
static void socket_flush_wait(FILE *file ) 
{ char c ;
  int fd_0 ;
  int tmp ;

  {
  {
// # 554
  tmp = fileno(file);
// # 554
  fd_0 = tmp;
  }
// # 555
  if ((unsigned int )draconian_FILE != (unsigned int )((void *)0)) {
    {
// # 556
    shutdown(fd_0, 1);
    }
  }
// # 557
  if ((unsigned int )draconian_FILE != (unsigned int )((void *)0)) {
    {
// # 558
    read(fd_0, (void *)(& c), 1U);
    }
  }
// # 565
  return;
}
}
// # 567
int main(int argc , char **argv , char **envp ) { 

  int slice_criteria;
  int addrlen ;
  int on ;
  int tos ;
  int c ;
  int which ;
  struct hostent *shp ;
  struct aclmember *entry ;
  struct servent *serv ;
  int tmp ;
  int tmp_0 ;
  int tmp_1 ;
  register unsigned short v ;
  register unsigned short x ;
  register unsigned short v_0 ;
  register unsigned short x_0 ;
  int tmp_2 ;
  int tmp_3 ;
  size_t tmp_4 ;
  register unsigned short v_1 ;
  register unsigned short x_1 ;
  unsigned short tmp_5 ;
  int tmp_6 ;
  unsigned int val ;
  char *tmp_7 ;
  FILE *   tmp_8 ;
  void (*tmp_9)(int  ) ;
  int tmp_10 ;
  pid_t tmp_11 ;
  FILE *tmp_12 ;
  int tmp_13 ;
  int tmp_14 ;
  int tmp_15 ;
  int tmp_16 ;
  struct aclmember *tmp_17 ;
  int tmp_18 ;
  struct aclmember *tmp_19 ;
  size_t tmp_20 ;
  struct aclmember *tmp_21 ;
  size_t tmp_22 ;
  struct aclmember *tmp_23 ;
  size_t tmp_24 ;
  int version_option ;
  char output_text[1025] ;
  int arg_count ;
  int output_len ;
  int tmp_25 ;
  int tmp_26 ;
  int tmp_27 ;
  int tmp_28 ;
  struct aclmember *tmp_29 ;
  int arg_len ;

  {
  initialize__();
  {
// # 574
  on = 1;
// # 603
  closelog();
// # 605
  openlog((char /*const*/   *)"ftpd", 9, 88);
// # 622
  addrlen = (int )sizeof(his_addr);
// # 623
  tmp = getpeername(0,
                    (void */*   */)((void *)((struct sockaddr *)(& his_addr))),
                    (socklen_t */*   */)((socklen_t *)(& addrlen)));
  }
// # 623
  if (tmp < 0) {
// # 624
    syslog(3, (char /*const*/   *)"getpeername (%s): %m", (*(argv + 0)));
// # 626
    exit(1);
  }
  {
// # 629 "ftpd.c"
  addrlen = (int )sizeof(ctrl_addr);
// # 630
  tmp_0 = getsockname(0,
                        (void */*   */)((void *)((struct sockaddr *)(& ctrl_addr))),
                        (socklen_t */*   */)((socklen_t *)(& addrlen)));
  }
// # 630
  if (tmp_0 < 0) {
// # 631
    syslog(3, (char /*const*/   *)"getsockname (%s): %m", (*(argv + 0)));
// # 633
    exit(1);
  }
  {
// # 637 "ftpd.c"
  tos = 16;
// # 638
  tmp_1 = setsockopt(0, 0, 1, (void /*const*/   *)((char *)(& tos)), sizeof(int ));
  }
// # 638
  if (tmp_1 < 0) {
    {
// # 639
    syslog(4, (char /*const*/   *)"setsockopt (IP_TOS): %m");
    }
  }
  {
// # 642
  serv = getservbyname((char /*const*/   *)"ftp-data", (char /*const*/   *)"tcp");
  }
// # 643
  if ((unsigned int )serv != (unsigned int )((void *)0)) {
    {
// # 644
    data_source.sin_port = (unsigned short )serv->s_port;
    }
  } else {
    {
// # 646
    x_0 = ctrl_addr.sin_port;
// # 646
    tmp_2 = __builtin_constant_p((int )x_0);
    }
// # 646
    if (tmp_2) {
      {
// # 646
      v_0 = (unsigned short )((((int )x_0 >> 8) & 255) |
                                  (((int )x_0 & 255) << 8));
      }
    } else {
      {
// # 646
      asm  ("rorw $8, %w0": "=r" (v_0): "0" (x_0): "cc");
      }
    }
    {
// # 646
    x = (unsigned short )((int )v_0 - 1);
// # 646
    tmp_3 = __builtin_constant_p((int )x);
    }
// # 646
    if (tmp_3) {
      {
// # 646
      v = (unsigned short )((((int )x >> 8) & 255) |
                              (((int )x & 255) << 8));
      }
    } else {
      {
// # 646
      asm  ("rorw $8, %w0": "=r" (v): "0" (x): "cc");
      }
    }
    {
// # 646
    data_source.sin_port = v;
    }
  }
// # 650
  while (1) {
    {
// # 650
    c = getopt(argc, (char * /*const*/  *)argv,
               (char /*const*/   *)":aAvdlLiIoP:qQr:t:T:u:wVWX");
    }
// # 650
    if (! (c != -1)) {
// # 650
      break;
    }
// # 654
    switch (c) {
    case 97: 
    {
// # 657
    use_accessfile = 1;
    }
// # 658
    break;
    case 65: 
    {
// # 661
    use_accessfile = 0;
    }
// # 662
    break;
    case 118: 
    {
// # 665
    debug = 1;
    }
// # 666
    break;
    case 100: 
    {
// # 669
    debug = 1;
    }
// # 670
    break;
    case 108: 
    {
// # 673
    logging = 1;
    }
// # 674
    break;
    case 76: 
    {
// # 677
    log_commands = 1;
    }
// # 678
    break;
    case 105: 
    {
// # 681
    log_incoming_xfers = 1;
    }
// # 682
    break;
    case 73: 
    {
// # 685
    disable_rfc931 = 1;
    }
// # 686
    break;
    case 111: 
    {
// # 689
    log_outbound_xfers = 1;
    }
// # 690
    break;
    case 113: 
    {
// # 693
    Bypass_PID_Files = 0;
    }
// # 694
    break;
    case 81: 
    {
// # 697
    Bypass_PID_Files = 1;
    }
// # 698
    break;
    case 114: 
    {

    }
// # 701
    if ((unsigned int )optarg != (unsigned int )((void *)0)) {
// # 701
      if ((int )(*(optarg + 0)) != 0) {
        {
// # 702
        tmp_4 = strlen((char /*const*/   *)optarg);
// # 702
        RootDirectory = (char *)malloc(tmp_4 + 1U);
        }
// # 703
        if ((unsigned int )RootDirectory != (unsigned int )((void *)0)) {
          {
// # 704
          strcpy((char */*   */)RootDirectory,
                 (char /*const*/   */*   */)((char /*const*/   *)optarg));
          }
        }
      }
    }
// # 706
    break;
    case 80: 
    {
// # 709
    tmp_5 = (unsigned short )atoi((char /*const*/   *)optarg);
// # 709
    x_1 = tmp_5;
// # 709
    tmp_6 = __builtin_constant_p((int )x_1);
    }
// # 709
    if (tmp_6) {
      {
// # 709
      v_1 = (unsigned short )((((int )x_1 >> 8) & 255) |
                                  (((int )x_1 & 255) << 8));
      }
    } else {
      {
// # 709
      asm  ("rorw $8, %w0": "=r" (v_1): "0" (x_1): "cc");
      }
    }
    {
// # 709
    data_source.sin_port = v_1;
    }
// # 710
    break;
    case 116: 
    {
// # 727
    timeout_idle = (unsigned int )atoi((char /*const*/   *)optarg);
    }
// # 728
    if (timeout_maxidle < timeout_idle) {
      {
// # 729
      timeout_maxidle = timeout_idle;
      }
    }
// # 730
    break;
    case 84: 
    {
// # 733
    timeout_maxidle = (unsigned int )atoi((char /*const*/   *)optarg);
    }
// # 734
    if (timeout_idle > timeout_maxidle) {
      {
// # 735
      timeout_idle = timeout_maxidle;
      }
    }
// # 736
    break;
    case 117: 
    {
// # 740
    val = 0U;
    }
// # 742
    while (1) {
// # 742
      if ((*optarg)) {
// # 742
        if ((int )(*optarg) >= 48) {
// # 742
          if (! ((int )(*optarg) <= 57)) {
// # 742
            break;
          }
        } else {
// # 742
          break;
        }
      } else {
// # 742
        break;
      }
      {
// # 743
      tmp_7 = optarg;
// # 743
      optarg ++;
// # 743
      val = (val * 8U + (unsigned int )(*tmp_7)) - 48U;
      }
    }
// # 744
    if ((*optarg)) {
      {
// # 745
      syslog(3, (char /*const*/   *)"bad value for -u");
      }
    } else {
// # 744
      if (val > 511U) {
        {
// # 745
        syslog(3, (char /*const*/   *)"bad value for -u");
        }
      } else {
        {
// # 747
        defumask = val;
        }
      }
    }
// # 748
    break;
    case 86: 
    {
      // # 752
      print_copyright();
      // # 753
      exit(0);      
    }
    case 119: 
    {
// # 756 "ftpd.c"
    wtmp_logging = 1;
    }
// # 757
    break;
    case 87: 
    {
// # 760
    wtmp_logging = 0;
    }
// # 761
    break;
    case 120: 
    {
// # 764
    syslogmsg = 2;
    }
// # 765
    break;
    case 88: 
    {
// # 768
    syslogmsg = 1;
    }
// # 769
    break;
    case 58: 
    {
// # 772
    syslog(3, (char /*const*/   *)"option -%c requires an argument", optopt);
    }
// # 773
    break;
    default: 
    {
// # 776
    syslog(3, (char /*const*/   *)"unknown option -%c ignored", optopt);
    }
// # 777
    break;
    }
  }
  {
// # 780
  initsetproctitle(argc, argv, envp);
// # 781
  tmp_8 = (FILE */*   */)get_stderr();
  {
// # 105 "spec.work"
  tmp_8->BLAST_FLAG = 1;
  {

  }
  }
// # 781 "ftpd.c"
  freopen((char /*const*/   */*   */)((char /*const*/   *)"/dev/null"),
          (char /*const*/   */*   */)((char /*const*/   *)"w"), tmp_8);
// # 789
  signal(1, & randomsig);
// # 795
  signal(2, & randomsig);
// # 801
  signal(3, & randomsig);
// # 807
  signal(4, & randomsig);
// # 813
  signal(5, & randomsig);
// # 819
  signal(6, & randomsig);
// # 831
  signal(8, & randomsig);
// # 837
  signal(9, & randomsig);
// # 843
  signal(7, & randomsig);
// # 849
  signal(11, & randomsig);
// # 855
  signal(31, & randomsig);
// # 861
  signal(14, & randomsig);
// # 867
  signal(19, & randomsig);
// # 873
  signal(20, & randomsig);
// # 879
  signal(21, & randomsig);
// # 885
  signal(22, & randomsig);
// # 891
  signal(29, & randomsig);
// # 897
  signal(24, & randomsig);
// # 903
  signal(25, & randomsig);
// # 909
  signal(28, & randomsig);
// # 915
  signal(26, & randomsig);
// # 921
  signal(27, & randomsig);
// # 927
  signal(10, & randomsig);
// # 933
  signal(12, & randomsig);
// # 940
  signal(13, & lostconn);
// # 946
  signal(17, (void (*)(int  ))1);
// # 953
  tmp_9 = signal(23, & myoob);
  }
// # 953
  if ((unsigned int )tmp_9 == (unsigned int )((void (*)(int  ))-1)) {
    {
// # 954
    syslog(3, (char /*const*/   *)"signal: %m");
    }
  }
  {
// # 966
  setup_paths();
// # 975
  access_init();
// # 1008
  tmp_10 = setsockopt(0, 1, 10, (void /*const*/   *)((char *)(& on)), sizeof(int ));
  }
// # 1008
  if (tmp_10 < 0) {
    {
// # 1009
    syslog(3, (char /*const*/   *)"setsockopt (SO_OOBINLINE): %m");
    }
  }
  {
// # 1013
  tmp_11 = getpid();
// # 1013
  tmp_12 = get_stdin();
  {
// # 121 "spec.work"
  tmp_12->BLAST_FLAG = 1;
  {

  }
  }
// # 1013 "ftpd.c"
  tmp_13 = fileno(tmp_12);
// # 1013
  tmp_14 = fcntl(tmp_13, 8, tmp_11);
  }
// # 1013
  if (tmp_14 == -1) {
    {
// # 1014
    syslog(3, (char /*const*/   *)"fcntl F_SETOWN: %m");
    }
  }
// # 1024
  if ((unsigned int )RootDirectory != (unsigned int )((void *)0)) {
    {
// # 1025
    tmp_15 = chroot((char /*const*/   *)RootDirectory);
    }
// # 1025
    if (tmp_15 < 0) {
// # 1027
      syslog(3, (char /*const*/   *)"Cannot chroot to initial directory, aborting.");
// # 1028
      exit(1);
    } else {
      {
// # 1025 "ftpd.c"
      tmp_16 = chdir((char /*const*/   *)"/");
      }
// # 1025
      if (tmp_16 < 0) {
	// # 1027
        syslog(3,
               (char /*const*/   *)"Cannot chroot to initial directory, aborting.");
	// # 1028
        exit(1);
      }
    }
  }
  {
// # 1037 "ftpd.c"
  dolog(& his_addr);
// # 1039
  data = -1;
// # 1040
  type = 1;
// # 1041
  form = 1;
// # 1042
  stru = 1;
// # 1043
  mode = 1;
// # 1044
  tmpline[0] = '\0';
// # 1045
  yyerrorcalled = 0;
// # 1047
  entry = (struct aclmember *)((void *)0);
// # 1048
  tmp_17 = getaclentry("hostname", & entry);
  }
// # 1048
  if (tmp_17) {
// # 1048
    if (entry->arg[0]) {
      {
// # 1049
      strncpy((char */*   */)(hostname),
              (char /*const*/   */*   */)((char /*const*/   *)entry->arg[0]),
              sizeof(hostname));
// # 1050
      hostname[sizeof(hostname) - 1U] = '\0';
      }
    } else {
      goto _L;
    }
  } else {
    _L: 
    {
// # 1056
    gethostname(hostname, sizeof(hostname));
// # 1059
    shp = gethostbyname((char /*const*/   *)(hostname));
    }
// # 1060
    if ((unsigned int )shp != (unsigned int )((void *)0)) {
      {
// # 1061
      strncpy((char */*   */)(hostname),
              (char /*const*/   */*   */)((char /*const*/   *)shp->h_name),
              sizeof(hostname));
// # 1062
      hostname[sizeof(hostname) - 1U] = '\0';
      }
    }
  }
  {
// # 1065
  route_vectored = routevector();
// # 1066
  conv_init();
// # 1214
  tmp_18 = is_shutdown(1, 1);
  }
// # 1214
  if (tmp_18 != 0) {
    // # 1215
    syslog(6, (char /*const*/   *)"connection refused (server shut down) from %s",
           remoteident);
    // # 1217
    reply(500, "%s FTP server shut down -- please try again later.", hostname);
    // # 1219
    exit(0);
  }
  {
// # 1236 "ftpd.c"
  show_banner(220);
// # 1239
  entry = (struct aclmember *)((void *)0);
// # 1240
  tmp_19 = getaclentry("lslong", & entry);
  }
// # 1240
  if (tmp_19) {
// # 1240
    if (entry->arg[0]) {
      {
// # 1240
      tmp_20 = strlen((char /*const*/   *)entry->arg[0]);
      }
// # 1240
      if ((int )tmp_20 > 0) {
        {
// # 1241
        strcpy((char */*   */)(ls_long),
               (char /*const*/   */*   */)((char /*const*/   *)entry->arg[0]));
// # 1242
        which = 1;
        }
// # 1242
        while (1) {
// # 1242
          if (which < 50) {
// # 1242
            if (! entry->arg[which]) {
// # 1242
              break;
            }
          } else {
// # 1242
            break;
          }
          {
// # 1243
          strcat((char */*   */)(ls_long),
                 (char /*const*/   */*   */)((char /*const*/   *)" "));
// # 1244
          strcat((char */*   */)(ls_long),
                 (char /*const*/   */*   */)((char /*const*/   *)entry->arg[which]));
// # 1242
          which ++;
          }
        }
      } else {
        {
// # 1255
        strcpy((char */*   */)(ls_long),
               (char /*const*/   */*   */)((char /*const*/   *)"/bin/ls -lgA"));
        }
      }
    } else {
      {
// # 1255
      strcpy((char */*   */)(ls_long),
             (char /*const*/   */*   */)((char /*const*/   *)"/bin/ls -lgA"));
      }
    }
  } else {
    {
// # 1255
    strcpy((char */*   */)(ls_long),
           (char /*const*/   */*   */)((char /*const*/   *)"/bin/ls -lgA"));
    }
  }
  {
// # 1258
  strcat((char */*   */)(ls_long),
         (char /*const*/   */*   */)((char /*const*/   *)" %s"));
// # 1260
  entry = (struct aclmember *)((void *)0);
// # 1261
  tmp_21 = getaclentry("lsshort", & entry);
  }
// # 1261
  if (tmp_21) {
// # 1261
    if (entry->arg[0]) {
      {
// # 1261
      tmp_22 = strlen((char /*const*/   *)entry->arg[0]);
      }
// # 1261
      if ((int )tmp_22 > 0) {
        {
// # 1262
        strcpy((char */*   */)(ls_short),
               (char /*const*/   */*   */)((char /*const*/   *)entry->arg[0]));
// # 1263
        which = 1;
        }
// # 1263
        while (1) {
// # 1263
          if (which < 50) {
// # 1263
            if (! entry->arg[which]) {
// # 1263
              break;
            }
          } else {
// # 1263
            break;
          }
          {
// # 1264
          strcat((char */*   */)(ls_short),
                 (char /*const*/   */*   */)((char /*const*/   *)" "));
// # 1265
          strcat((char */*   */)(ls_short),
                 (char /*const*/   */*   */)((char /*const*/   *)entry->arg[which]));
// # 1263
          which ++;
          }
        }
      } else {
        {
// # 1277
        strcpy((char */*   */)(ls_short),
               (char /*const*/   */*   */)((char /*const*/   *)"/bin/ls -lgA"));
        }
      }
    } else {
      {
// # 1277
      strcpy((char */*   */)(ls_short),
             (char /*const*/   */*   */)((char /*const*/   *)"/bin/ls -lgA"));
      }
    }
  } else {
    {
// # 1277
    strcpy((char */*   */)(ls_short),
           (char /*const*/   */*   */)((char /*const*/   *)"/bin/ls -lgA"));
    }
  }
  {
// # 1280
  strcat((char */*   */)(ls_short),
         (char /*const*/   */*   */)((char /*const*/   *)" %s"));
// # 1282
  entry = (struct aclmember *)((void *)0);
// # 1283
  tmp_23 = getaclentry("lsplain", & entry);
  }
// # 1283
  if (tmp_23) {
// # 1283
    if (entry->arg[0]) {
      {
// # 1283
      tmp_24 = strlen((char /*const*/   *)entry->arg[0]);
      }
// # 1283
      if ((int )tmp_24 > 0) {
        {
// # 1284
        strcpy((char */*   */)(ls_plain),
               (char /*const*/   */*   */)((char /*const*/   *)entry->arg[0]));
// # 1285
        which = 1;
        }
// # 1285
        while (1) {
// # 1285
          if (which < 50) {
// # 1285
            if (! entry->arg[which]) {
// # 1285
              break;
            }
          } else {
// # 1285
            break;
          }
          {
// # 1286
          strcat((char */*   */)(ls_plain),
                 (char /*const*/   */*   */)((char /*const*/   *)" "));
// # 1287
          strcat((char */*   */)(ls_plain),
                 (char /*const*/   */*   */)((char /*const*/   *)entry->arg[which]));
// # 1285
          which ++;
          }
        }
      } else {
        {
// # 1291
        strcpy((char */*   */)(ls_plain),
               (char /*const*/   */*   */)((char /*const*/   *)"/bin/ls"));
        }
      }
    } else {
      {
// # 1291
      strcpy((char */*   */)(ls_plain),
             (char /*const*/   */*   */)((char /*const*/   *)"/bin/ls"));
      }
    }
  } else {
    {
// # 1291
    strcpy((char */*   */)(ls_plain),
           (char /*const*/   */*   */)((char /*const*/   *)"/bin/ls"));
    }
  }
  {
// # 1292
  strcat((char */*   */)(ls_plain),
         (char /*const*/   */*   */)((char /*const*/   *)" %s"));
// # 1316
  version_option = 0;
// # 1320
  entry = (struct aclmember *)((void *)0);
// # 1321
  tmp_29 = getaclentry("greeting", & entry);
  }
// # 1321
  if (tmp_29) {
// # 1321
    if (entry->arg[0]) {
      {
// # 1322
      tmp_28 = strcasecmp((char /*const*/   *)entry->arg[0],
                            (char /*const*/   *)"full");
      }
// # 1322
      if (tmp_28) {
        {
// # 1324
        tmp_27 = strcasecmp((char /*const*/   *)entry->arg[0],
                              (char /*const*/   *)"text");
        }
// # 1324
        if (tmp_27) {
          _L_0: 
          {
// # 1326
          tmp_26 = strcasecmp((char /*const*/   *)entry->arg[0],
                                (char /*const*/   *)"terse");
          }
// # 1326
          if (tmp_26) {
            {
// # 1328
            tmp_25 = strcasecmp((char /*const*/   *)entry->arg[0],
                                  (char /*const*/   *)"brief");
            }
// # 1328
            if (! tmp_25) {
              {
// # 1329
              version_option = 1;
              }
            }
          } else {
            {
// # 1327
            version_option = 2;
            }
          }
        } else {
// # 1324
          if (entry->arg[1]) {
            {
// # 1325
            version_option = 3;
            }
          } else {
            goto _L_0;
          }
        }
      } else {
        {
// # 1323
        version_option = 0;
        }
      }
    }
  }
// # 1331
  switch (version_option) {
  default: 
  {
// # 1333
  reply(220, "%s FTP server (%s) ready.", hostname, version);
  }
// # 1334
  break;
  case 1: 
  {
// # 1336
  reply(220, "%s FTP server ready.", hostname);
  }
// # 1337
  break;
  case 2: 
  {
// # 1339
  reply(220, "FTP server ready.");
  }
// # 1340
  break;
  case 3: 
  {
// # 1342
  output_text[0] = '\0';
// # 1343
  output_len = 0;
// # 1344
  arg_count = 1;
  }
// # 1344
  while ((unsigned int )entry->arg[arg_count] != (unsigned int )((void *)0)) {
    {
// # 1347
    arg_len = (int )strlen((char /*const*/   *)entry->arg[arg_count]);
    }
// # 1349
    if (output_len + arg_len > 1024) {
// # 1351
      break;
    }
    {
// # 1355
    strcat((char */*   */)(output_text),
           (char /*const*/   */*   */)((char /*const*/   *)entry->arg[arg_count]));
// # 1356
    output_len += arg_len;
    }
// # 1358
    if ((unsigned int )entry->arg[arg_count + 1] != (unsigned int )((void *)0)) {
// # 1359
      if (output_len + 2 > 1024) {
// # 1361
        break;
      }
      {
// # 1364
      strcat((char */*   */)(output_text),
             (char /*const*/   */*   */)((char /*const*/   *)" "));
// # 1365
      output_len ++;
      }
    }
    {
// # 1344
    arg_count ++;
    }
  }
  {
// # 1368
  reply(220, "%s", output_text);
  }
// # 1369
  break;
  }
  // # 1372
  _setjmp(errcatch);
  // # 1374
  while (1) {
    // # 1375
    yyparse();
  }
  // # 1374
  slice_criteria = BLAST_error;
  return (0);
  }
} // end of main



// # 1380
void randomsig(int sig ) 
{ 

  // # 1383
  syslog(3, (char /*const*/   *)"exiting on signal %d: %s", sig, sys_siglist[sig]);
  // # 1387
  chdir((char /*const*/   *)"/");
  // # 1388
  signal(6, (void (*)(int  ))0);
  // # 1389
  signal(4, (void (*)(int  ))0);
  // # 1390
  exit(1);
  // # 1390 "ftpd.c"
  return;
}

// # 1394
void lostconn(int sig ) 
{ 

  {
// # 1399
  if (debug) {
    {
// # 1400
    syslog(7, (char /*const*/   *)"lost connection to %s", remoteident);
    }
  }
  {
// # 1402
  dologout(-1);
  }
// # 1403
  return;
}
}
// # 1405
static char ttyline[20]  ;
// # 1504
/* extern */ char *sgetsave(char *s ) 
{ char *new_0 ;
  size_t tmp ;

  {
  {
// # 1508
  tmp = strlen((char /*const*/   *)s);
// # 1508
  new_0 = (char *)malloc(tmp + 1U);
  }
// # 1510
  if ((unsigned int )new_0 == (unsigned int )((void *)0)) {
    {
// # 1511
    perror_reply(421, "Local resource failure: malloc");
// # 1512
    dologout(1);
    }
  }
  {
// # 1515
  strcpy((char */*   */)new_0,
         (char /*const*/   */*   */)((char /*const*/   *)s));
  }
// # 1516
  return (new_0);
}
}
// # 1523
static struct passwd save  ;
// # 1521
struct passwd *sgetpwnam(char *name ) 
{ register struct passwd *p ;
  struct spwd *spw ;
  int expired ;
  time_t now ;
  long today ;
  char /*const*/   * /*attribute__((mdsize__(nullterm)))*/ tmp ;
  size_t tmp_0 ;

  {
  {
// # 1562
  p = getpwnam((char /*const*/   *)name);
  }
// # 1562
  if ((unsigned int )p == (unsigned int )((void *)0)) {
// # 1564
    return (p);
  }
// # 1567
  if (save.pw_name) {
    {
// # 1568
    free((void *)save.pw_name);
    }
  }
// # 1569
  if (save.pw_gecos) {
    {
// # 1570
    free((void *)save.pw_gecos);
    }
  }
// # 1571
  if (save.pw_dir) {
    {
// # 1572
    free((void *)save.pw_dir);
    }
  }
// # 1573
  if (save.pw_shell) {
    {
// # 1574
    free((void *)save.pw_shell);
    }
  }
// # 1575
  if (save.pw_passwd) {
    {
// # 1576
    free((void *)save.pw_passwd);
    }
  }
  {
// # 1578
  save = (*p);
// # 1580
  save.pw_name = sgetsave(p->pw_name);
// # 1590
  save.pw_passwd = sgetsave(p->pw_passwd);
  }
// # 1593
  if (p) {
// # 1593
    if ((unsigned int )p->pw_passwd == (unsigned int )((void *)0)) {
      goto _L;
    } else {
      {
// # 1593
      tmp_0 = strlen((char /*const*/   *)p->pw_passwd);
      }
// # 1593
      if (tmp_0 < 8U) {
        _L: 
        {
// # 1598
        setspent();
// # 1599
        spw = (struct spwd *)getspnam((char /*const*/   *)((char /*const*/   *)p->pw_name));
        }
// # 1599
        if ((unsigned int )spw != (unsigned int )((void *)0)) {
          {
// # 1601
          expired = 0;
// # 1607
          now = time((time_t *)0);
// # 1608
          today = now / 86400L;
          }
// # 1610
          if (spw->sp_expire > 0L) {
// # 1610
            if (spw->sp_expire < today) {
              {
// # 1611
              expired ++;
              }
            }
          }
// # 1612
          if (spw->sp_max > 0L) {
// # 1612
            if (spw->sp_lstchg > 0L) {
// # 1612
              if (spw->sp_lstchg + spw->sp_max < today) {
                {
// # 1614
                expired ++;
                }
              }
            }
          }
          {
// # 1615
          free((void *)save.pw_passwd);
          }
// # 1616
          if (expired) {
            {
// # 1616
            tmp = (char /*const*/   */* attribute__((mdsize__(nullterm))) */)((char /*const*/   *)"");
            }
          } else {
            {
// # 1616
            tmp = (char /*const*/   */* attribute__((mdsize__(nullterm))) */)((char /*const*/   *)spw->sp_pwdp);
            }
          }
          {
// # 1616
          save.pw_passwd = sgetsave((char *)tmp);
          }
        } else {
          {
// # 1623
          free((void *)save.pw_passwd);
// # 1624
          save.pw_passwd = sgetsave("");
          }
        }
        {
// # 1629
        endspent();
        }
      }
    }
  }
  {
// # 1633
  save.pw_gecos = sgetsave(p->pw_gecos);
// # 1634
  save.pw_dir = sgetsave(p->pw_dir);
// # 1635
  save.pw_shell = sgetsave(p->pw_shell);
  }
// # 1647
  return (& save);
}
}
// # 1673
int login_attempts  ;
// # 1674
int askpasswd  ;
// # 1676
int DenyLoginAfterPassword  ;
// # 1677
char DelayedMessageFile[4096]  ;
// # 1732
void user(char *name ) 
{ char *cp ;
  char *shell ;
  struct aclmember *entry ;
  int machineok ;
  char guestservername[64] ;
  struct hostent *tmphostent ;
  char dns_localhost[64] ;
  int machinecount ;
  int tmp ;
  struct aclmember *tmp_0 ;
  size_t tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;
  int tmp_4 ;
  int tmp_5 ;
  int tmp_6 ;
  int tmp_7 ;
  int tmp_8 ;
  int tmp_9 ;
  int tmp_10 ;
  int tmp_11 ;
  int tmp_12 ;
  int tmp_13 ;
  int tmp_14 ;

  {
// # 1741
  if (logged_in) {
    {
// # 1746
    reply(530, "Already logged in.");
    }
// # 1747
    return;
  }
  {
// # 1750
  askpasswd = 1;
// # 1751
  DenyLoginAfterPassword = 0;
// # 1752
  DelayedMessageFile[0] = '\0';
// # 1779
  anonymous = 0;
// # 1780
  acl_remove();
// # 1782
  tmp_5 = strcasecmp((char /*const*/   *)name, (char /*const*/   *)"ftp");
  }
// # 1782
  if (tmp_5) {
    {
// # 1782
    tmp_6 = strcasecmp((char /*const*/   *)name, (char /*const*/   *)"anonymous");
    }
// # 1782
    if (! tmp_6) {
      _L: 
      {
// # 1783
      entry = (struct aclmember *)((void *)0);
// # 1784
      machineok = 1;
// # 1786
      guestservername[0] = '\0';
// # 1809
      tmp_2 = checkuser("ftp");
      }
// # 1809
      if (tmp_2) {
        {
// # 1811
        DenyLoginAfterPassword = 1;
// # 1812
        syslog(5, (char /*const*/   *)"FTP LOGIN REFUSED (ftp in %s) FROM %s, %s",
               "/etc/ftpusers", remoteident, name);
        }
      } else {
        {
// # 1809
        tmp_3 = checkuser("anonymous");
        }
// # 1809
        if (tmp_3) {
          {
// # 1811
          DenyLoginAfterPassword = 1;
// # 1812
          syslog(5, (char /*const*/   *)"FTP LOGIN REFUSED (ftp in %s) FROM %s, %s",
                 "/etc/ftpusers", remoteident, name);
          }
        } else {
          {
// # 1846
          tmp_0 = getaclentry("guestserver", & entry);
          }
// # 1846
          if (tmp_0) {
// # 1846
            if (entry->arg[0]) {
              {
// # 1846
              tmp_1 = strlen((char /*const*/   *)entry->arg[0]);
              }
// # 1846
              if ((int )tmp_1 > 0) {
                {
// # 1854
                machineok = 0;
                }
// # 1856
                if (hostname[0]) {
                  {
// # 1856
                  tmphostent = gethostbyname((char /*const*/   *)(hostname));
                  }
// # 1856
                  if (tmphostent) {
                    {
// # 1873
                    strncpy((char */*   */)(dns_localhost),
                            (char /*const*/   */*   */)((char /*const*/   *)tmphostent->h_name),
                            sizeof(dns_localhost));
// # 1876
                    dns_localhost[sizeof(dns_localhost) - 1U] = '\0';
// # 1878
                    machinecount = 0;
                    }
// # 1878
                    while (1) {
// # 1878
                      if (entry->arg[machinecount]) {
// # 1878
                        if (! (*(entry->arg[machinecount] + 0))) {
// # 1878
                          break;
                        }
                      } else {
// # 1878
                        break;
                      }
                      {
// # 1882
                      tmphostent = gethostbyname((char /*const*/   *)entry->arg[machinecount]);
                      }
// # 1882
                      if (tmphostent) {
// # 1887
                        if (! machinecount) {
// # 1887
                          if (tmphostent->h_name) {
                            {
// # 1888
                            strncpy((char */*   */)(guestservername),
                                    (char /*const*/   */*   */)((char /*const*/   *)entry->arg[machinecount]),
                                    sizeof(guestservername));
// # 1890
                            guestservername[sizeof(guestservername) - 1U] = '\0';
                            }
                          }
                        }
                        {
// # 1893
                        tmp = strcasecmp((char /*const*/   *)tmphostent->h_name,
                                         (char /*const*/   *)(dns_localhost));
                        }
// # 1893
                        if (! tmp) {
                          {
// # 1894
                          machineok ++;
                          }
// # 1895
                          break;
                        }
                      }
                      {
// # 1878
                      machinecount ++;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
// # 1901
      if (machineok) {
        {
// # 1915
        pw = sgetpwnam("ftp");
        }
// # 1915
        if ((unsigned int )pw != (unsigned int )((void *)0)) {
          {
// # 1916
          anonymous = 1;
// # 1917
          tmp_4 = access_ok(530);
          }
// # 1917
          if (tmp_4 < 1) {
            {
// # 1919
            DenyLoginAfterPassword = 1;
// # 1920
            syslog(5,
                   (char /*const*/   *)"FTP LOGIN REFUSED (access denied) FROM %s, %s",
                   remoteident, name);
// # 1922
            reply(331,
                  "Guest login ok, send your complete e-mail address as password.");
            }
          } else {
            {
// # 1932
            askpasswd = 1;
            }
// # 1936
            if (use_accessfile) {
              {
// # 1937
              acl_setfunctions();
              }
            }
            {
// # 1938
            reply(331,
                  "Guest login ok, send your complete e-mail address as password.");
            }
          }
        } else {
          {
// # 1943
          DenyLoginAfterPassword = 1;
// # 1944
          reply(331,
                "Guest login ok, send your complete e-mail address as password.");
// # 1945
          syslog(5,
                 (char /*const*/   *)"FTP LOGIN REFUSED (ftp not in /etc/passwd) FROM %s, %s",
                 remoteident, name);
          }
        }
      } else {
// # 1902
        if (guestservername[0]) {
          {
// # 1903
          reply(530,
                "Guest login not allowed on this machine, connect to %s instead.",
                guestservername);
          }
        } else {
          {
// # 1907
          reply(530, "Guest login not allowed on this machine.");
          }
        }
        {
// # 1909
        syslog(5,
               (char /*const*/   *)"FTP LOGIN REFUSED (localhost not in guestservers) FROM %s, %s",
               remoteident, name);
        }
      }
// # 1954
      return;
    }
  } else {
    goto _L;
  }
  {
// # 1995
  pw = sgetpwnam(name);
  }
// # 1995
  if ((unsigned int )pw != (unsigned int )((void *)0)) {
    {
// # 1997
    tmp_7 = denieduid(pw->pw_uid);
    }
// # 1997
    if (tmp_7) {
      {
// # 1997
      tmp_8 = alloweduid(pw->pw_uid);
      }
// # 1997
      if (tmp_8) {
        goto _L_0;
      } else {
        {
// # 2000
        DenyLoginAfterPassword = 1;
// # 2001
        syslog(5,
               (char /*const*/   *)"FTP LOGIN REFUSED (username in denied-uid) FROM %s, %s",
               remoteident, name);
// # 2003
        reply(331, "Password required for %s.", name);
        }
// # 2010
        return;
      }
    } else {
      _L_0: 
      {
// # 1997
      tmp_9 = deniedgid(pw->pw_gid);
      }
// # 1997
      if (tmp_9) {
        {
// # 1997
        tmp_10 = allowedgid(pw->pw_gid);
        }
// # 1997
        if (! tmp_10) {
          {
// # 2000
          DenyLoginAfterPassword = 1;
// # 2001
          syslog(5,
                 (char /*const*/   *)"FTP LOGIN REFUSED (username in denied-uid) FROM %s, %s",
                 remoteident, name);
// # 2003
          reply(331, "Password required for %s.", name);
          }
// # 2010
          return;
        }
      }
    }
    {
// # 2017
    shell = pw->pw_shell;
    }
// # 2017
    if ((unsigned int )shell == (unsigned int )((void *)0)) {
      {
// # 2018
      shell = "/bin/sh";
      }
    } else {
// # 2017
      if ((int )(*shell) == 0) {
        {
// # 2018
        shell = "/bin/sh";
        }
      }
    }
// # 2019
    while (1) {
      {
// # 2019
      cp = getusershell();
      }
// # 2019
      if (! ((unsigned int )cp != (unsigned int )((void *)0))) {
// # 2019
        break;
      }
      {
// # 2020
      tmp_11 = strcmp((char /*const*/   *)cp, (char /*const*/   *)shell);
      }
// # 2020
      if (tmp_11 == 0) {
// # 2021
        break;
      }
    }
    {
// # 2022
    endusershell();
    }
// # 2023
    if ((unsigned int )cp == (unsigned int )((void *)0)) {
      goto _L_1;
    } else {
      {
// # 2023
      tmp_12 = checkuser(name);
      }
// # 2023
      if (tmp_12) {
        _L_1: 
        {
// # 2025
        DenyLoginAfterPassword = 1;
        }
// # 2026
        if ((unsigned int )cp == (unsigned int )((void *)0)) {
          {
// # 2027
          syslog(5,
                 (char /*const*/   *)"FTP LOGIN REFUSED (shell not in /etc/shells) FROM %s, %s",
                 remoteident, name);
          }
        } else {
          {
// # 2029
          syslog(5,
                 (char /*const*/   *)"FTP LOGIN REFUSED (username in %s) FROM %s, %s",
                 "/etc/ftpusers", remoteident, name);
          }
        }
        {
// # 2030
        reply(331, "Password required for %s.", name);
// # 2038
        pw = (struct passwd *)((void *)0);
        }
// # 2039
        return;
      }
    }
// # 2047
    if (use_accessfile) {
      {
// # 2048
      guest = acl_guestgroup(pw);
      }
// # 2049
      if (guest) {
        {
// # 2049
        tmp_13 = acl_realgroup(pw);
        }
// # 2049
        if (tmp_13) {
          {
// # 2050
          guest = 0;
          }
        }
      }
    }
  }
  {
// # 2053
  tmp_14 = access_ok(530);
  }
// # 2053
  if (tmp_14 < 1) {
    {
// # 2055
    DenyLoginAfterPassword = 1;
// # 2056
    syslog(5, (char /*const*/   *)"FTP LOGIN REFUSED (access denied) FROM %s, %s",
           remoteident, name);
// # 2058
    reply(331, "Password required for %s.", name);
    }
// # 2064
    return;
  } else {
// # 2066
    if (use_accessfile) {
      {
// # 2067
      acl_setfunctions();
      }
    }
  }
  {
// # 2120
  reply(331, "Password required for %s.", name);
// # 2126
  askpasswd = 1;
  }
// # 2129
  if (login_attempts) {
    {
// # 2130
    enable_signaling();
// # 2131
    sleep((unsigned int )login_attempts);
    }
  }
// # 2133
  return;
}
}
// # 2138
int checkuser(char *name ) 
{ register FILE *fd_0 ;
  register char *p ;
  char line_0[8192] ;
  int tmp ;
  char *tmp_0 ;

  {
  {
// # 2144
  fd_0 = fopen((char /*const*/   */*   */)((char /*const*/   *)"/etc/ftpusers"),
                 (char /*const*/   */*   */)((char /*const*/   *)"r"));
  {
// # 17 "spec.work"
  if (fd_0 != (FILE *)0) {
// # 17
    fd_0->BLAST_FLAG = 1;
  }
  {

  }
  }

  }
// # 2144 "ftpd.c"
  if ((unsigned int )fd_0 != (unsigned int )((void *)0)) {
// # 2145
    while (1) {
      {

	// # 32 "spec.work"
	if (! (fd_0->BLAST_FLAG == 1)) {
	  // # 34
	  error__();
	}
	// # 2145 "ftpd.c"
	tmp_0 = fgets((char */*   */)(line_0),
                      (int )sizeof(line_0), (FILE */*   */)fd_0);
      }
      // # 2145
      if (! ((unsigned int )tmp_0 != (unsigned int )((void *)0))) {
	// # 2145
        break;
      }
      {
// # 2146
      p = strchr((char /*const*/   *)(line_0), (int )'\n');
      }
// # 2146
      if ((unsigned int )p != (unsigned int )((void *)0)) {
        {
// # 2147
        (*p) = '\0';
        }
// # 2148
        if ((int )line_0[0] == 35) {
// # 2149
          continue;
        }
        {
// # 2150
        tmp = strcasecmp((char /*const*/   *)(line_0), (char /*const*/   *)name);
        }
// # 2150
        if (tmp == 0) {
          {

          {
// # 96 "spec.work"
          if (fd_0->BLAST_FLAG == 1) {
// # 97
            fd_0->BLAST_FLAG = 0;
          } else {
// # 98
            error__();
          }
          {

          }
          }
// # 2151 "ftpd.c"
          fclose(fd_0);
          }
// # 2152
          return (1);
        }
      }
    }
    {

    {
// # 96 "spec.work"
    if (fd_0->BLAST_FLAG == 1) {
// # 97
      fd_0->BLAST_FLAG = 0;
    } else {
// # 98
      error__();
    }
    {

    }
    }
// # 2155 "ftpd.c"
    fclose(fd_0);
    }
  }
// # 2157
  return (0);
}
}
// # 2160
int denieduid(uid_t uid ) 
{ struct aclmember *entry ;
  int which ;
  char *ptr ;
  struct passwd *pw_0 ;
  int tmp ;
  unsigned long tmp_0 ;
  char *tmp_1 ;
  unsigned long tmp_2 ;
  char *tmp_3 ;
  unsigned long tmp_4 ;
  unsigned long tmp_5 ;
  struct aclmember *tmp_6 ;

  {
  {
// # 2162
  entry = (struct aclmember *)((void *)0);
  }
// # 2167
  while (1) {
    {
// # 2167
    tmp_6 = getaclentry("deny-uid", & entry);
    }
// # 2167
    if (! tmp_6) {
// # 2167
      break;
    }
    {
// # 2168
    which = 0;
    }
// # 2168
    while (1) {
// # 2168
      if (which < 50) {
// # 2168
        if (! entry->arg[which]) {
// # 2168
          break;
        }
      } else {
// # 2168
        break;
      }
      {
// # 2169
      tmp = strcmp((char /*const*/   *)entry->arg[which], (char /*const*/   *)"*");
      }
// # 2169
      if (! tmp) {
// # 2170
        return (1);
      }
// # 2171
      if ((int )(*(entry->arg[which] + 0)) == 37) {
        {
// # 2172
        ptr = strchr((char /*const*/   *)(entry->arg[which] + 1), (int )'-');
        }
// # 2172
        if ((unsigned int )ptr == (unsigned int )((void *)0)) {
          {
// # 2173
          ptr = strchr((char /*const*/   *)(entry->arg[which] + 1), (int )'+');
          }
// # 2173
          if ((unsigned int )ptr == (unsigned int )((void *)0)) {
            {
// # 2174
            tmp_0 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 2174
            if ((unsigned long )uid == tmp_0) {
// # 2175
              return (1);
            }
          } else {
            {
// # 2178
            tmp_1 = ptr;
// # 2178
            ptr ++;
// # 2178
            (*tmp_1) = '\0';
            }
// # 2179
            if ((int )(*(entry->arg[which] + 1)) == 0) {
              {
// # 2181
              ptr --;
// # 2181
              (*ptr) = '+';
              }
// # 2182
              return (1);
            } else {
              {
// # 2179
              tmp_2 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry->arg[which] +
                                                                                   1)),
                                (char **/*   */)((char **)((void *)0)),
                                0);
              }
// # 2179
              if ((unsigned long )uid >= tmp_2) {
                {
// # 2181
                ptr --;
// # 2181
                (*ptr) = '+';
                }
// # 2182
                return (1);
              }
            }
            {
// # 2184
            ptr --;
// # 2184
            (*ptr) = '+';
            }
          }
        } else {
          {
// # 2188
          tmp_3 = ptr;
// # 2188
          ptr ++;
// # 2188
          (*tmp_3) = '\0';
          }
// # 2189
          if ((int )(*(entry->arg[which] + 1)) == 0) {
            goto _L;
          } else {
            {
// # 2189
            tmp_4 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 2189
            if ((unsigned long )uid >= tmp_4) {
              _L: 
// # 2189
              if ((int )(*ptr) == 0) {
                {
// # 2193
                ptr --;
// # 2193
                (*ptr) = '-';
                }
// # 2194
                return (1);
              } else {
                {
// # 2189
                tmp_5 = strtoul((char /*const*/   */*   */)((char /*const*/   *)ptr),
                                  (char **/*   */)((char **)((void *)0)),
                                  0);
                }
// # 2189
                if ((unsigned long )uid <= tmp_5) {
                  {
// # 2193
                  ptr --;
// # 2193
                  (*ptr) = '-';
                  }
// # 2194
                  return (1);
                }
              }
            }
          }
          {
// # 2196
          ptr --;
// # 2196
          (*ptr) = '-';
          }
        }
      } else {
        {
// # 2203
        pw_0 = getpwnam((char /*const*/   *)entry->arg[which]);
        }
// # 2205
        if (pw_0) {
// # 2205
          if (uid == pw_0->pw_uid) {
// # 2206
            return (1);
          }
        }
      }
      {
// # 2168
      which ++;
      }
    }
  }
// # 2210
  return (0);
}
}
// # 2213
int alloweduid(uid_t uid ) 
{ struct aclmember *entry ;
  int which ;
  char *ptr ;
  struct passwd *pw_0 ;
  int tmp ;
  unsigned long tmp_0 ;
  char *tmp_1 ;
  unsigned long tmp_2 ;
  char *tmp_3 ;
  unsigned long tmp_4 ;
  unsigned long tmp_5 ;
  struct aclmember *tmp_6 ;

  {
  {
// # 2215
  entry = (struct aclmember *)((void *)0);
  }
// # 2220
  while (1) {
    {
// # 2220
    tmp_6 = getaclentry("allow-uid", & entry);
    }
// # 2220
    if (! tmp_6) {
// # 2220
      break;
    }
    {
// # 2221
    which = 0;
    }
// # 2221
    while (1) {
// # 2221
      if (which < 50) {
// # 2221
        if (! entry->arg[which]) {
// # 2221
          break;
        }
      } else {
// # 2221
        break;
      }
      {
// # 2222
      tmp = strcmp((char /*const*/   *)entry->arg[which], (char /*const*/   *)"*");
      }
// # 2222
      if (! tmp) {
// # 2223
        return (1);
      }
// # 2224
      if ((int )(*(entry->arg[which] + 0)) == 37) {
        {
// # 2225
        ptr = strchr((char /*const*/   *)(entry->arg[which] + 1), (int )'-');
        }
// # 2225
        if ((unsigned int )ptr == (unsigned int )((void *)0)) {
          {
// # 2226
          ptr = strchr((char /*const*/   *)(entry->arg[which] + 1), (int )'+');
          }
// # 2226
          if ((unsigned int )ptr == (unsigned int )((void *)0)) {
            {
// # 2227
            tmp_0 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 2227
            if ((unsigned long )uid == tmp_0) {
// # 2228
              return (1);
            }
          } else {
            {
// # 2231
            tmp_1 = ptr;
// # 2231
            ptr ++;
// # 2231
            (*tmp_1) = '\0';
            }
// # 2232
            if ((int )(*(entry->arg[which] + 1)) == 0) {
              {
// # 2234
              ptr --;
// # 2234
              (*ptr) = '+';
              }
// # 2235
              return (1);
            } else {
              {
// # 2232
              tmp_2 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry->arg[which] +
                                                                                   1)),
                                (char **/*   */)((char **)((void *)0)),
                                0);
              }
// # 2232
              if ((unsigned long )uid >= tmp_2) {
                {
// # 2234
                ptr --;
// # 2234
                (*ptr) = '+';
                }
// # 2235
                return (1);
              }
            }
            {
// # 2237
            ptr --;
// # 2237
            (*ptr) = '+';
            }
          }
        } else {
          {
// # 2241
          tmp_3 = ptr;
// # 2241
          ptr ++;
// # 2241
          (*tmp_3) = '\0';
          }
// # 2242
          if ((int )(*(entry->arg[which] + 1)) == 0) {
            goto _L;
          } else {
            {
// # 2242
            tmp_4 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 2242
            if ((unsigned long )uid >= tmp_4) {
              _L: 
// # 2242
              if ((int )(*ptr) == 0) {
                {
// # 2246
                ptr --;
// # 2246
                (*ptr) = '-';
                }
// # 2247
                return (1);
              } else {
                {
// # 2242
                tmp_5 = strtoul((char /*const*/   */*   */)((char /*const*/   *)ptr),
                                  (char **/*   */)((char **)((void *)0)),
                                  0);
                }
// # 2242
                if ((unsigned long )uid <= tmp_5) {
                  {
// # 2246
                  ptr --;
// # 2246
                  (*ptr) = '-';
                  }
// # 2247
                  return (1);
                }
              }
            }
          }
          {
// # 2249
          ptr --;
// # 2249
          (*ptr) = '-';
          }
        }
      } else {
        {
// # 2256
        pw_0 = getpwnam((char /*const*/   *)entry->arg[which]);
        }
// # 2258
        if (pw_0) {
// # 2258
          if (uid == pw_0->pw_uid) {
// # 2259
            return (1);
          }
        }
      }
      {
// # 2221
      which ++;
      }
    }
  }
// # 2263
  return (0);
}
}
// # 2266
int deniedgid(gid_t gid ) 
{ struct aclmember *entry ;
  int which ;
  char *ptr ;
  struct group *grp ;
  int tmp ;
  unsigned long tmp_0 ;
  char *tmp_1 ;
  unsigned long tmp_2 ;
  char *tmp_3 ;
  unsigned long tmp_4 ;
  unsigned long tmp_5 ;
  struct aclmember *tmp_6 ;

  {
  {
// # 2268
  entry = (struct aclmember *)((void *)0);
  }
// # 2273
  while (1) {
    {
// # 2273
    tmp_6 = getaclentry("deny-gid", & entry);
    }
// # 2273
    if (! tmp_6) {
// # 2273
      break;
    }
    {
// # 2274
    which = 0;
    }
// # 2274
    while (1) {
// # 2274
      if (which < 50) {
// # 2274
        if (! entry->arg[which]) {
// # 2274
          break;
        }
      } else {
// # 2274
        break;
      }
      {
// # 2275
      tmp = strcmp((char /*const*/   *)entry->arg[which], (char /*const*/   *)"*");
      }
// # 2275
      if (! tmp) {
// # 2276
        return (1);
      }
// # 2277
      if ((int )(*(entry->arg[which] + 0)) == 37) {
        {
// # 2278
        ptr = strchr((char /*const*/   *)(entry->arg[which] + 1), (int )'-');
        }
// # 2278
        if ((unsigned int )ptr == (unsigned int )((void *)0)) {
          {
// # 2279
          ptr = strchr((char /*const*/   *)(entry->arg[which] + 1), (int )'+');
          }
// # 2279
          if ((unsigned int )ptr == (unsigned int )((void *)0)) {
            {
// # 2280
            tmp_0 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 2280
            if ((unsigned long )gid == tmp_0) {
// # 2281
              return (1);
            }
          } else {
            {
// # 2284
            tmp_1 = ptr;
// # 2284
            ptr ++;
// # 2284
            (*tmp_1) = '\0';
            }
// # 2285
            if ((int )(*(entry->arg[which] + 1)) == 0) {
              {
// # 2287
              ptr --;
// # 2287
              (*ptr) = '+';
              }
// # 2288
              return (1);
            } else {
              {
// # 2285
              tmp_2 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry->arg[which] +
                                                                                   1)),
                                (char **/*   */)((char **)((void *)0)),
                                0);
              }
// # 2285
              if ((unsigned long )gid >= tmp_2) {
                {
// # 2287
                ptr --;
// # 2287
                (*ptr) = '+';
                }
// # 2288
                return (1);
              }
            }
            {
// # 2290
            ptr --;
// # 2290
            (*ptr) = '+';
            }
          }
        } else {
          {
// # 2294
          tmp_3 = ptr;
// # 2294
          ptr ++;
// # 2294
          (*tmp_3) = '\0';
          }
// # 2295
          if ((int )(*(entry->arg[which] + 1)) == 0) {
            goto _L;
          } else {
            {
// # 2295
            tmp_4 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 2295
            if ((unsigned long )gid >= tmp_4) {
              _L: 
// # 2295
              if ((int )(*ptr) == 0) {
                {
// # 2299
                ptr --;
// # 2299
                (*ptr) = '-';
                }
// # 2300
                return (1);
              } else {
                {
// # 2295
                tmp_5 = strtoul((char /*const*/   */*   */)((char /*const*/   *)ptr),
                                  (char **/*   */)((char **)((void *)0)),
                                  0);
                }
// # 2295
                if ((unsigned long )gid <= tmp_5) {
                  {
// # 2299
                  ptr --;
// # 2299
                  (*ptr) = '-';
                  }
// # 2300
                  return (1);
                }
              }
            }
          }
          {
// # 2302
          ptr --;
// # 2302
          (*ptr) = '-';
          }
        }
      } else {
        {
// # 2306
        grp = getgrnam((char /*const*/   *)entry->arg[which]);
        }
// # 2307
        if (grp) {
// # 2307
          if (gid == grp->gr_gid) {
// # 2308
            return (1);
          }
        }
      }
      {
// # 2274
      which ++;
      }
    }
  }
// # 2312
  return (0);
}
}
// # 2315
int allowedgid(gid_t gid ) 
{ struct aclmember *entry ;
  int which ;
  char *ptr ;
  struct group *grp ;
  int tmp ;
  unsigned long tmp_0 ;
  char *tmp_1 ;
  unsigned long tmp_2 ;
  char *tmp_3 ;
  unsigned long tmp_4 ;
  unsigned long tmp_5 ;
  struct aclmember *tmp_6 ;

  {
  {
// # 2317
  entry = (struct aclmember *)((void *)0);
  }
// # 2322
  while (1) {
    {
// # 2322
    tmp_6 = getaclentry("allow-gid", & entry);
    }
// # 2322
    if (! tmp_6) {
// # 2322
      break;
    }
    {
// # 2323
    which = 0;
    }
// # 2323
    while (1) {
// # 2323
      if (which < 50) {
// # 2323
        if (! entry->arg[which]) {
// # 2323
          break;
        }
      } else {
// # 2323
        break;
      }
      {
// # 2324
      tmp = strcmp((char /*const*/   *)entry->arg[which], (char /*const*/   *)"*");
      }
// # 2324
      if (! tmp) {
// # 2325
        return (1);
      }
// # 2326
      if ((int )(*(entry->arg[which] + 0)) == 37) {
        {
// # 2327
        ptr = strchr((char /*const*/   *)(entry->arg[which] + 1), (int )'-');
        }
// # 2327
        if ((unsigned int )ptr == (unsigned int )((void *)0)) {
          {
// # 2328
          ptr = strchr((char /*const*/   *)(entry->arg[which] + 1), (int )'+');
          }
// # 2328
          if ((unsigned int )ptr == (unsigned int )((void *)0)) {
            {
// # 2329
            tmp_0 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 2329
            if ((unsigned long )gid == tmp_0) {
// # 2330
              return (1);
            }
          } else {
            {
// # 2333
            tmp_1 = ptr;
// # 2333
            ptr ++;
// # 2333
            (*tmp_1) = '\0';
            }
// # 2334
            if ((int )(*(entry->arg[which] + 1)) == 0) {
              {
// # 2336
              ptr --;
// # 2336
              (*ptr) = '+';
              }
// # 2337
              return (1);
            } else {
              {
// # 2334
              tmp_2 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry->arg[which] +
                                                                                   1)),
                                (char **/*   */)((char **)((void *)0)),
                                0);
              }
// # 2334
              if ((unsigned long )gid >= tmp_2) {
                {
// # 2336
                ptr --;
// # 2336
                (*ptr) = '+';
                }
// # 2337
                return (1);
              }
            }
            {
// # 2339
            ptr --;
// # 2339
            (*ptr) = '+';
            }
          }
        } else {
          {
// # 2343
          tmp_3 = ptr;
// # 2343
          ptr ++;
// # 2343
          (*tmp_3) = '\0';
          }
// # 2344
          if ((int )(*(entry->arg[which] + 1)) == 0) {
            goto _L;
          } else {
            {
// # 2344
            tmp_4 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 2344
            if ((unsigned long )gid >= tmp_4) {
              _L: 
// # 2344
              if ((int )(*ptr) == 0) {
                {
// # 2348
                ptr --;
// # 2348
                (*ptr) = '-';
                }
// # 2349
                return (1);
              } else {
                {
// # 2344
                tmp_5 = strtoul((char /*const*/   */*   */)((char /*const*/   *)ptr),
                                  (char **/*   */)((char **)((void *)0)),
                                  0);
                }
// # 2344
                if ((unsigned long )gid <= tmp_5) {
                  {
// # 2348
                  ptr --;
// # 2348
                  (*ptr) = '-';
                  }
// # 2349
                  return (1);
                }
              }
            }
          }
          {
// # 2351
          ptr --;
// # 2351
          (*ptr) = '-';
          }
        }
      } else {
        {
// # 2355
        grp = getgrnam((char /*const*/   *)entry->arg[which]);
        }
// # 2356
        if (grp) {
// # 2356
          if (gid == grp->gr_gid) {
// # 2357
            return (1);
          }
        }
      }
      {
// # 2323
      which ++;
      }
    }
  }
// # 2361
  return (0);
}
}
// # 2367
void end_login(void) 
{ 

  {
  {
// # 2369
  delay_signaling();
// # 2370
  seteuid(0U);
  }
// # 2371
  if (logged_in) {
// # 2372
    if (wtmp_logging) {
      {
// # 2373
      wu_logwtmp(ttyline, pw->pw_name, remotehost, 0);
      }
    }
  }
  {
// # 2374
  pw = (struct passwd *)((void *)0);
// # 2378
  logged_in = 0;
// # 2379
  anonymous = 0;
// # 2380
  guest = 0;
  }
// # 2381
  return;
}
}
// # 2383
int validate_eaddr(char *eaddr ) 
{ int i ;
  int host ;
  int state_0 ;
  int tmp ;

  {
  {
// # 2387
  state_0 = 0;
// # 2387
  host = state_0;
// # 2387
  i = host;
  }
// # 2387
  while ((int )(*(eaddr + i)) != 0) {
// # 2388
    switch ((int )(*(eaddr + i))) {
    case 46: 
    {

    }
// # 2390
    if (! host) {
// # 2391
      return (0);
    }
// # 2392
    if (state_0 == 2) {
      {
// # 2393
      state_0 = 3;
      }
    }
    {
// # 2394
    host = 0;
    }
// # 2395
    break;
    case 64: 
    {

    }
// # 2397
    if (host) {
// # 2397
      if (state_0 > 1) {
// # 2398
        return (0);
      } else {
        {
// # 2397
        tmp = strncasecmp((char /*const*/   *)"ftp",
                          (char /*const*/   *)((eaddr + i) - host),
                          (unsigned int )host);
        }
// # 2397
        if (! tmp) {
// # 2398
          return (0);
        }
      }
    } else {
// # 2398
      return (0);
    }
    {
// # 2399
    state_0 = 2;
// # 2400
    host = 0;
    }
// # 2401
    break;
    case 33: 
    {

    }
    case 37: 
    {

    }
// # 2404
    if (host) {
// # 2404
      if (state_0 > 1) {
// # 2405
        return (0);
      }
    } else {
// # 2405
      return (0);
    }
    {
// # 2406
    state_0 = 1;
// # 2407
    host = 0;
    }
// # 2408
    break;
    case 45: 
    {

    }
// # 2410
    break;
    default: 
    {
// # 2412
    host ++;
    }
    }
    {
// # 2387
    i ++;
    }
  }
// # 2415
  if (state_0 == 3) {
// # 2415
    if (host > 1) {
// # 2417
      return (1);
    } else {
      goto _L_0;
    }
  } else {
    _L_0: 
// # 2415
    if (state_0 == 2) {
// # 2415
      if (host) {
        goto _L;
      } else {
// # 2417
        return (1);
      }
    } else {
      _L: 
// # 2415
      if (state_0 == 1) {
// # 2415
        if (host > 1) {
// # 2417
          return (1);
        } else {
// # 2419
          return (0);
        }
      } else {
// # 2419
        return (0);
      }
    }
  }
}
}
// # 2464
void pass(char *passwd ) 
{ char *xpasswd ;
  char *salt ;
  int passwarn ;
  int rval ;
  int tmp ;
  char *pwin ;
  char *pwout ;
  struct aclmember *entry ;
  int valid_0 ;
  int enforce ;
  char *tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;
  int tmp_4 ;
  int tmp_5 ;
  int tmp_6 ;
  int tmp_7 ;
  int tmp_8 ;
  struct aclmember *tmp_9 ;
  char /*const*/   *tmp_10 ;
  char /*const*/   *tmp_11 ;
  struct aclmember *tmp_12 ;
  int tmp_13 ;
  int cnt ;
  char *tmp_14 ;
  char *tmp_15 ;
  int tmp_16 ;
  int tmp_17 ;
  mode_t oldmask ;
  int *tmp_18 ;
  char *tmp_19 ;
  int tmp_20 ;
  pid_t tmp_21 ;
  int tmp_22 ;
  int tmp_23 ;
  int tmp_24 ;
  int tmp_25 ;
  char *sp ;
  struct aclmember *entry_0 ;
  char *root_path ;
  char class[1024] ;
  int which ;
  int tmp_26 ;
  int tmp_27 ;
  struct aclmember *tmp_28 ;
  int which_0 ;
  char *ptr ;
  unsigned long tmp_29 ;
  char *tmp_30 ;
  unsigned long tmp_31 ;
  char *tmp_32 ;
  unsigned long tmp_33 ;
  unsigned long tmp_34 ;
  struct passwd *guest_pw ;
  struct passwd *tmp_35 ;
  int tmp_36 ;
  struct aclmember *tmp_37 ;
  struct passwd *chroot_pw ;
  int tmp_38 ;
  int tmp_39 ;
  int tmp_40 ;
  int tmp_41 ;
  int tmp_42 ;
  char *tmp_43 ;
  int tmp_44 ;
  int tmp_45 ;
  int i ;
  int tmp_46 ;
  int tmp_47 ;
  int tmp_48 ;
  char /*const*/   *tmp_49 ;
  char /*const*/   *tmp_50 ;
  struct aclmember *entry_1 ;
  int tmp_51 ;
  int tmp_52 ;
  int tmp_53 ;
  struct aclmember *tmp_54 ;

  {
  {
// # 2471
  passwarn = 0;
// # 2472
  rval = 1;
  }
// # 2504
  if (logged_in) {
    {
// # 2509
    reply(503, "Login with USER first.");
    }
// # 2510
    return;
  } else {
// # 2504
    if (askpasswd == 0) {
      {
// # 2509
      reply(503, "Login with USER first.");
      }
// # 2510
      return;
    }
  }
  {
// # 2512
  askpasswd = 0;
  }
// # 2517
  if ((int )(*passwd) == 45) {
    {
// # 2518
    dolreplies = 0;
    }
  } else {
    {
// # 2520
    dolreplies = 1;
    }
  }
// # 2522
  if (anonymous) {
    {
// # 2733
    pwout = guestpw;
// # 2734
    entry = (struct aclmember *)((void *)0);
// # 2736
    enforce = 0;
// # 2738
    tmp_12 = getaclentry("passwd-check", & entry);
    }
// # 2738
    if (tmp_12) {
// # 2738
      if (entry->arg[0]) {
        {
// # 2738
        tmp_13 = strcasecmp((char /*const*/   *)entry->arg[0],
                              (char /*const*/   *)"none");
        }
// # 2738
        if (tmp_13) {
          {
// # 2741
          tmp_3 = strcasecmp((char /*const*/   *)entry->arg[0],
                               (char /*const*/   *)"rfc822");
          }
// # 2741
          if (tmp_3) {
            {
// # 2743
            tmp_2 = strcasecmp((char /*const*/   *)entry->arg[0],
                                 (char /*const*/   *)"trivial");
            }
// # 2743
            if (tmp_2) {
              {
// # 2746
              valid_0 = 1;
              }
            } else {
              {
// # 2744
              tmp_1 = strchr((char /*const*/   *)passwd, (int )'@');
              }
// # 2744
              if ((unsigned int )tmp_1 == (unsigned int )((void *)0)) {
                {
// # 2744
                valid_0 = 0;
                }
              } else {
                {
// # 2744
                valid_0 = 1;
                }
              }
            }
          } else {
            {
// # 2742
            valid_0 = validate_eaddr(passwd);
            }
          }
// # 2747
          if (entry->arg[1]) {
            {
// # 2747
            tmp_4 = strcasecmp((char /*const*/   *)entry->arg[1],
                                 (char /*const*/   *)"enforce");
            }
// # 2747
            if (! tmp_4) {
              {
// # 2748
              enforce = 1;
              }
            }
          }
          {
// # 2752
          entry = (struct aclmember *)((void *)0);
          }
// # 2753
          while (1) {
            {
// # 2753
            tmp_9 = getaclentry("deny-email", & entry);
            }
// # 2753
            if (! tmp_9) {
// # 2753
              break;
            }
// # 2754
            if (entry->arg[0]) {
              {
// # 2754
              tmp_5 = strcasecmp((char /*const*/   *)passwd,
                                   (char /*const*/   *)entry->arg[0]);
              }
// # 2754
              if (tmp_5 == 0) {
                {
// # 2760
                valid_0 = 0;
                }
// # 2761
                break;
              } else {
                {
// # 2754
                tmp_6 = regexmatch(passwd, entry->arg[0]);
                }
// # 2754
                if (tmp_6) {
                  {
// # 2760
                  valid_0 = 0;
                  }
// # 2761
                  break;
                } else {
// # 2754
                  if ((int )(*passwd) == 45) {
                    {
// # 2754
                    tmp_7 = strcasecmp((char /*const*/   *)(passwd + 1),
                                         (char /*const*/   *)entry->arg[0]);
                    }
// # 2754
                    if (tmp_7 == 0) {
                      {
// # 2760
                      valid_0 = 0;
                      }
// # 2761
                      break;
                    } else {
                      {
// # 2754
                      tmp_8 = regexmatch(passwd + 1, entry->arg[0]);
                      }
// # 2754
                      if (tmp_8) {
                        {
// # 2760
                        valid_0 = 0;
                        }
// # 2761
                        break;
                      }
                    }
                  }
                }
              }
            }
          }
// # 2764
          if (valid_0) {
            _L: 
// # 2785
            if (! valid_0) {
              {
// # 2786
              passwarn = 1;
              }
            }
          } else {
// # 2764
            if (enforce) {
              {
// # 2765
              lreply(530, "The response \'%s\' is not valid", passwd);
// # 2766
              lreply(530, "Please use your e-mail address as your password");
              }
// # 2767
              if (authenticated) {
                {
// # 2767
                tmp_10 = (char /*const*/   *)(authuser);
                }
              } else {
                {
// # 2767
                tmp_10 = (char /*const*/   *)"joe";
                }
              }
// # 2767
              if (authenticated) {
                {
// # 2767
                tmp_11 = (char /*const*/   *)(authuser);
                }
              } else {
                {
// # 2767
                tmp_11 = (char /*const*/   *)"joe";
                }
              }
              {
// # 2767
              lreply(530, "   for example: %s@%s or %s@", tmp_11, remotehost,
                     tmp_10);
// # 2770
              lreply(530, "[%s will be added if password ends with @]",
                     remotehost);
// # 2772
              reply(530, "Login incorrect.");
// # 2777
              acl_remove();
// # 2778
              login_attempts ++;
              }
// # 2778
              if (login_attempts >= lgi_failure_threshold) {
		// # 2779
                syslog(5, (char /*const*/   *)"repeated login failures from %s",
                       remoteident);
		// # 2781
                exit(0);
	      }
	      // # 2783 "ftpd.c"
              return;
            } else {
              goto _L;
            }
          }
        }
      }
    }
// # 2788
    if ((*passwd)) {
      {
// # 2792
      cnt = (int )(sizeof(guestpw) - 2U);
// # 2794
      pwin = passwd;
      }
// # 2794
      while (1) {
// # 2794
        if ((*pwin)) {
          {
// # 2794
          tmp_17 = cnt;
// # 2794
          cnt --;
          }
// # 2794
          if (! tmp_17) {
// # 2794
            break;
          }
        } else {
// # 2794
          break;
        }
        {
// # 2795
        tmp_16 = _get__ctype_b((int )(*pwin));
        }
// # 2795
        if (tmp_16 & 32768) {
          {
// # 2798
          tmp_15 = pwout;
// # 2798
          pwout ++;
// # 2798
          (*tmp_15) = (*pwin);
          }
        } else {
          {
// # 2796
          tmp_14 = pwout;
// # 2796
          pwout ++;
// # 2796
          (*tmp_14) = '_';
          }
        }
        {
// # 2794
        pwin ++;
        }
      }
    } else {
      {
// # 2789
      strcpy((char */*   */)(guestpw),
             (char /*const*/   */*   */)((char /*const*/   *)"[none_given]"));
      }
    }
// # 2801
    if (DenyLoginAfterPassword) {
      {
// # 2802
      pr_mesg(530, DelayedMessageFile);
// # 2803
      reply(530, "Login incorrect.");
// # 2804
      acl_remove();
// # 2805
      pw = (struct passwd *)((void *)0);
// # 2806
      login_attempts ++;
      }
// # 2806
      if (login_attempts >= lgi_failure_threshold) {
        {
// # 2807
        syslog(5, (char /*const*/   *)"repeated login failures from %s", remoteident);
// # 2809
        exit(0);
        }
      }
// # 2811 "ftpd.c"
      return;
    }
  } else {
// # 2524
    if (DenyLoginAfterPassword) {
      {
// # 2525
      pr_mesg(530, DelayedMessageFile);
// # 2526
      reply(530, "Login incorrect.");
// # 2527
      acl_remove();
// # 2528
      pw = (struct passwd *)((void *)0);
// # 2529
      login_attempts ++;
      }
// # 2529
      if (login_attempts >= lgi_failure_threshold) {
        {
// # 2530
        syslog(5, (char /*const*/   *)"repeated login failures from %s", remoteident);
// # 2532
        exit(0);
        }
      }
// # 2534 "ftpd.c"
      return;
    }
// # 2537
    if ((int )(*passwd) == 45) {
      {
// # 2538
      passwd ++;
      }
    }
    {
// # 2592
    guestpw[0] = '\0';
    }
// # 2593
    if ((unsigned int )pw == (unsigned int )((void *)0)) {
      {
// # 2594
      salt = "xx";
      }
    } else {
      {
// # 2597
      salt = pw->pw_passwd;
      }
    }
    {
// # 2627
    xpasswd = crypt((char /*const*/   *)passwd, (char /*const*/   *)salt);
    }
// # 2637
    if ((unsigned int )pw != (unsigned int )((void *)0)) {
// # 2655
      if ((int )(*(pw->pw_passwd)) != 0) {
        {
// # 2655
        tmp = strcmp((char /*const*/   *)xpasswd, (char /*const*/   *)pw->pw_passwd);
        }
// # 2655
        if (tmp == 0) {
          {
// # 2661
          rval = 0;
          }
        }
      }
    }
// # 2703
    if (rval) {
      {
// # 2704
      reply(530, "Login incorrect.");
// # 2717
      acl_remove();
// # 2719
      pw = (struct passwd *)((void *)0);
// # 2720
      login_attempts ++;
      }
// # 2720
      if (login_attempts >= lgi_failure_threshold) {
        {
// # 2721
        syslog(5, (char /*const*/   *)"repeated login failures from %s", remoteident);
// # 2723
        exit(0);
        }
      }
// # 2725 "ftpd.c"
      return;
    }
  }
// # 2817
  if (log_outbound_xfers) {
    goto _L_0;
  } else {
// # 2817
    if (log_incoming_xfers) {
      _L_0: 
// # 2817
      if (syslogmsg != 1) {
        {
// # 2819
        oldmask = umask(0U);
// # 2820
        xferlog = open((char /*const*/   *)(logfile), 1089, 416);
// # 2821
        umask(oldmask);
        }
// # 2822
        if (xferlog < 0) {
          {
// # 2823
          tmp_18 = errno_location();
// # 2823
          tmp_19 = strerror((*tmp_18));
// # 2823
          syslog(3, (char /*const*/   *)"cannot open logfile %s: %s", logfile,
                 tmp_19);
// # 2825
          xferlog = 0;
          }
        }
      }
    }
  }
  {
// # 2840
  enable_signaling();
  }
// # 2842
  if (anonymous) {
// # 2842
    if (use_accessfile) {
      {
// # 2843
      acl_autogroup(pw);
// # 2844
      guest = acl_guestgroup(pw);
      }
// # 2845
      if (guest) {
        {
// # 2845
        tmp_20 = acl_realgroup(pw);
        }
// # 2845
        if (tmp_20) {
          {
// # 2846
          guest = 0;
          }
        }
      }
      {
// # 2847
      /* transformed by vijay: anonymous = ! guest != 0; */
	if(!guest != 0) anonymous = 1;
	else anonymous = 0;
      }
    }
  }
  {
// # 2850
  login_attempts = 0;
// # 2853
  setegid(pw->pw_gid);
// # 2857
  initgroups((char /*const*/   *)pw->pw_name, pw->pw_gid);
  }
// # 2862
  if (wtmp_logging) {
    {
// # 2867
    tmp_21 = getpid();
// # 2867
    sprintf((char */*   */)(ttyline),
            (char /*const*/   */*   */)((char /*const*/   *)"ftpd%d"),
            tmp_21);
// # 2872
    wu_logwtmp(ttyline, pw->pw_name, remotehost, 1);
    }
  }
  {
// # 2874
  logged_in = 1;
// # 2876
  expand_id();
// # 2883
  restricted_user = 0;
  }
// # 2884
  if (! anonymous) {
    {
// # 2885
    tmp_22 = restricteduid(pw->pw_uid);
    }
// # 2885
    if (tmp_22) {
      {
// # 2885
      tmp_23 = unrestricteduid(pw->pw_uid);
      }
// # 2885
      if (tmp_23) {
        goto _L_1;
      } else {
        {
// # 2887
        restricted_user = 1;
        }
      }
    } else {
      _L_1: 
      {
// # 2885
      tmp_24 = restrictedgid(pw->pw_gid);
      }
// # 2885
      if (tmp_24) {
        {
// # 2885
        tmp_25 = unrestrictedgid(pw->pw_gid);
        }
// # 2885
        if (! tmp_25) {
          {
// # 2887
          restricted_user = 1;
          }
        }
      }
    }
  }
// # 2888
  if (anonymous) {
    goto _L_3;
  } else {
// # 2888
    if (guest) {
      _L_3: 
      {
// # 2941
      entry_0 = (struct aclmember *)((void *)0);
// # 2942
      root_path = (char *)((void *)0);
      }
// # 2944
      if (anonymous) {
        {
// # 2947
        acl_getclass(class);
        }
// # 2948
        while (1) {
          {
// # 2948
          tmp_28 = getaclentry("anonymous-root", & entry_0);
          }
// # 2948
          if (tmp_28) {
// # 2948
            if (! entry_0->arg[0]) {
// # 2948
              break;
            }
          } else {
// # 2948
            break;
          }
// # 2949
          if (entry_0->arg[1]) {
            {
// # 2956
            which = 1;
            }
// # 2956
            while (1) {
// # 2956
              if (which < 50) {
// # 2956
                if (! entry_0->arg[which]) {
// # 2956
                  break;
                }
              } else {
// # 2956
                break;
              }
              {
// # 2957
              tmp_27 = strcmp((char /*const*/   *)entry_0->arg[which],
                                (char /*const*/   *)"*");
              }
// # 2957
              if (tmp_27) {
                {
// # 2962
                tmp_26 = strcasecmp((char /*const*/   *)entry_0->arg[which],
                                      (char /*const*/   *)(class));
                }
// # 2962
                if (! tmp_26) {
                  {
// # 2963
                  root_path = entry_0->arg[0];
                  }
                }
              } else {
// # 2958
                if (! root_path) {
                  {
// # 2959
                  root_path = entry_0->arg[0];
                  }
                }
              }
              {
// # 2956
              which ++;
              }
            }
          } else {
// # 2950
            if (! root_path) {
              {
// # 2951
              root_path = entry_0->arg[0];
              }
            }
          }
        }
      } else {
// # 2970
        while (1) {
          {
// # 2970
          tmp_37 = getaclentry("guest-root", & entry_0);
          }
// # 2970
          if (tmp_37) {
// # 2970
            if (! entry_0->arg[0]) {
// # 2970
              break;
            }
          } else {
// # 2970
            break;
          }
// # 2971
          if (entry_0->arg[1]) {
            {
// # 2979
            which_0 = 1;
            }
// # 2979
            while (1) {
// # 2979
              if (which_0 < 50) {
// # 2979
                if (! entry_0->arg[which_0]) {
// # 2979
                  break;
                }
              } else {
// # 2979
                break;
              }
              {
// # 2980
              tmp_36 = strcmp((char /*const*/   *)entry_0->arg[which_0],
                                (char /*const*/   *)"*");
              }
// # 2980
              if (tmp_36) {
// # 2985
                if ((int )(*(entry_0->arg[which_0] + 0)) == 37) {
                  {
// # 2986
                  ptr = strchr((char /*const*/   *)(entry_0->arg[which_0] + 1),
                               (int )'-');
                  }
// # 2986
                  if ((unsigned int )ptr == (unsigned int )((void *)0)) {
                    {
// # 2987
                    ptr = strchr((char /*const*/   *)(entry_0->arg[which_0] + 1),
                                 (int )'+');
                    }
// # 2987
                    if ((unsigned int )ptr == (unsigned int )((void *)0)) {
                      {
// # 2988
                      tmp_29 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry_0->arg[which_0] +
                                                                                            1)),
                                         (char **/*   */)((char **)((void *)0)),
                                         0);
                      }
// # 2988
                      if ((unsigned long )pw->pw_uid == tmp_29) {
                        {
// # 2989
                        root_path = entry_0->arg[0];
                        }
                      }
                    } else {
                      {
// # 2992
                      tmp_30 = ptr;
// # 2992
                      ptr ++;
// # 2992
                      (*tmp_30) = '\0';
                      }
// # 2993
                      if ((int )(*(entry_0->arg[which_0] + 1)) == 0) {
                        {
// # 2995
                        root_path = entry_0->arg[0];
                        }
                      } else {
                        {
// # 2993
                        tmp_31 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry_0->arg[which_0] +
                                                                                              1)),
                                           (char **/*   */)((char **)((void *)0)),
                                           0);
                        }
// # 2993
                        if ((unsigned long )pw->pw_uid >= tmp_31) {
                          {
// # 2995
                          root_path = entry_0->arg[0];
                          }
                        }
                      }
                      {
// # 2996
                      ptr --;
// # 2996
                      (*ptr) = '+';
                      }
                    }
                  } else {
                    {
// # 3000
                    tmp_32 = ptr;
// # 3000
                    ptr ++;
// # 3000
                    (*tmp_32) = '\0';
                    }
// # 3001
                    if ((int )(*(entry_0->arg[which_0] + 1)) == 0) {
                      goto _L_2;
                    } else {
                      {
// # 3001
                      tmp_33 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry_0->arg[which_0] +
                                                                                            1)),
                                         (char **/*   */)((char **)((void *)0)),
                                         0);
                      }
// # 3001
                      if ((unsigned long )pw->pw_uid >= tmp_33) {
                        _L_2: 
// # 3001
                        if ((int )(*ptr) == 0) {
                          {
// # 3005
                          root_path = entry_0->arg[0];
                          }
                        } else {
                          {
// # 3001
                          tmp_34 = strtoul((char /*const*/   */*   */)((char /*const*/   *)ptr),
                                             (char **/*   */)((char **)((void *)0)),
                                             0);
                          }
// # 3001
                          if ((unsigned long )pw->pw_uid <= tmp_34) {
                            {
// # 3005
                            root_path = entry_0->arg[0];
                            }
                          }
                        }
                      }
                    }
                    {
// # 3006
                    ptr --;
// # 3006
                    (*ptr) = '-';
                    }
                  }
                } else {
                  {
// # 3013
                  tmp_35 = getpwnam((char /*const*/   *)entry_0->arg[which_0]);
// # 3013
                  guest_pw = tmp_35;
                  }
// # 3015
                  if (guest_pw) {
// # 3015
                    if (pw->pw_uid == guest_pw->pw_uid) {
                      {
// # 3016
                      root_path = entry_0->arg[0];
                      }
                    }
                  }
                }
              } else {
// # 2981
                if (! root_path) {
                  {
// # 2982
                  root_path = entry_0->arg[0];
                  }
                }
              }
              {
// # 2979
              which_0 ++;
              }
            }
          } else {
// # 2972
            if (! root_path) {
              {
// # 2973
              root_path = entry_0->arg[0];
              }
            }
          }
        }
      }
// # 3024
      if (root_path) {
        {
// # 3025
        chroot_pw = (struct passwd *)((void *)0);
// # 3041
        strncpy((char */*   */)(chroot_path),
                (char /*const*/   */*   */)((char /*const*/   *)root_path),
                sizeof(chroot_path));
// # 3042
        chroot_path[sizeof(chroot_path) - 1U] = '\0';
// # 3043
        pw->pw_dir = sgetsave(chroot_path);
// # 3044
        tmp_38 = chroot((char /*const*/   *)root_path);
        }
// # 3044
        if (tmp_38 < 0) {
          {
// # 3049
          reply(530, "Can\'t set guest privileges.");
          }
          goto bad;
        } else {
          {
// # 3044
          tmp_39 = chdir((char /*const*/   *)"/");
          }
// # 3044
          if (tmp_39 < 0) {
            {
// # 3049
            reply(530, "Can\'t set guest privileges.");
            }
            goto bad;
          }
        }
        {
// # 3055
        chroot_pw = getpwuid(pw->pw_uid);
        }
// # 3055
        if ((unsigned int )chroot_pw != (unsigned int )((void *)0)) {
          {
// # 3057
          tmp_40 = chdir((char /*const*/   *)chroot_pw->pw_dir);
          }
// # 3057
          if (tmp_40 >= 0) {
            {
// # 3058
            home = sgetsave(chroot_pw->pw_dir);
            }
          }
        }
        goto slimy_hack;
      }
      {
// # 3065
      sp = (char *)strstr((char /*const*/   */* attribute__((rostring,
                          nullterm__)) */)((char /*const*/   *)pw->pw_dir),
                          (char /*const*/   */* attribute__((rostring,
                          nullterm__)) */)((char /*const*/   *)"/./"));
      }
// # 3065
      if ((unsigned int )sp == (unsigned int )((void *)0)) {
        {
// # 3066
        strncpy((char */*   */)(chroot_path),
                (char /*const*/   */*   */)((char /*const*/   *)pw->pw_dir),
                sizeof(chroot_path));
// # 3067
        chroot_path[sizeof(chroot_path) - 1U] = '\0';
// # 3082
        tmp_41 = chroot((char /*const*/   *)pw->pw_dir);
        }
// # 3082
        if (tmp_41 < 0) {
          {
// # 3087
          reply(530, "Can\'t set guest privileges.");
          }
          goto bad;
        } else {
          {
// # 3082
          tmp_42 = chdir((char /*const*/   *)"/");
          }
// # 3082
          if (tmp_42 < 0) {
            {
// # 3087
            reply(530, "Can\'t set guest privileges.");
            }
            goto bad;
          }
        }
      } else {
        {
// # 3092
        tmp_43 = sp;
// # 3092
        sp ++;
// # 3092
        (*tmp_43) = '\0';
// # 3093
        strncpy((char */*   */)(chroot_path),
                (char /*const*/   */*   */)((char /*const*/   *)pw->pw_dir),
                sizeof(chroot_path));
// # 3094
        chroot_path[sizeof(chroot_path) - 1U] = '\0';
// # 3109
        tmp_44 = chroot((char /*const*/   *)pw->pw_dir);
        }
// # 3109
        if (tmp_44 < 0) {
          {
// # 3114
          reply(550, "Can\'t set guest privileges.");
          }
          goto bad;
        } else {
          {
// # 3109
          sp ++;
// # 3109
          tmp_45 = chdir((char /*const*/   *)sp);
          }
// # 3109
          if (tmp_45 < 0) {
            {
// # 3114
            reply(550, "Can\'t set guest privileges.");
            }
            goto bad;
          }
        }
      }
      slimy_hack: 
      {
// # 3123
      i = 0;
// # 3124
      i ++;
      }
    }
  }
  {
// # 3171
  tmp_46 = seteuid(pw->pw_uid);
  }
// # 3171
  if (tmp_46 < 0) {
    {
// # 3177
    reply(530, "Can\'t set uid.");
    }
    goto bad;
  }
// # 3181
  if (! anonymous) {
// # 3181
    if (! guest) {
      {
// # 3182
      tmp_48 = chdir((char /*const*/   *)pw->pw_dir);
      }
// # 3182
      if (tmp_48 < 0) {
        {
// # 3192
        tmp_47 = chdir((char /*const*/   *)"/");
        }
// # 3192
        if (tmp_47 < 0) {
          {
// # 3197
          reply(530, "User %s: can\'t change directory to %s.", pw->pw_name,
                pw->pw_dir);
          }
          goto bad;
        } else {
          {
// # 3202
          lreply(230, "No directory! Logging in with home=/");
          }
        }
      }
    }
  }
// # 3211
  if (passwarn) {
    {
// # 3212
    lreply(230, "The response \'%s\' is not valid", passwd);
// # 3213
    lreply(230, "Next time please use your e-mail address as your password");
    }
// # 3215
    if (authenticated) {
      {
// # 3215
      tmp_49 = (char /*const*/   *)(authuser);
      }
    } else {
      {
// # 3215
      tmp_49 = (char /*const*/   *)"joe";
      }
    }
    {
// # 3215
    lreply(230, "        for example: %s@%s", tmp_49, remotehost);
    }
  }
  {
// # 3221
  show_message(230, 0);
// # 3222
  show_message(230, 1);
// # 3223
  show_readme(230, 0);
// # 3224
  show_readme(230, 1);
// # 3234
  is_shutdown(0, 0);
  }
// # 3236
  if (anonymous) {
    {
// # 3238
    reply(230, "Guest login ok, access restrictions apply.");
// # 3239
    sprintf((char */*   */)(proctitle),
            (char /*const*/   */*   */)((char /*const*/   *)"%s: anonymous/%.*s"),
            remotehost, (int )((sizeof(proctitle) - sizeof(remotehost)) -
                               sizeof(": anonymous/")), passwd);
// # 3242
    setproctitle((char /*const*/   *)"%s", proctitle);
    }
// # 3243
    if (logging) {
      {
// # 3244
      syslog(6, (char /*const*/   *)"ANONYMOUS FTP LOGIN FROM %s, %s", remoteident,
             passwd);
      }
    }
  } else {
// # 3248
    if (guest) {
      {
// # 3248
      tmp_50 = (char /*const*/   *)"  Access restrictions apply.";
      }
    } else {
      {
// # 3248
      tmp_50 = (char /*const*/   *)"";
      }
    }
    {
// # 3248
    reply(230, "User %s logged in.%s", pw->pw_name, tmp_50);
// # 3250
    sprintf((char */*   */)(proctitle),
            (char /*const*/   */*   */)((char /*const*/   *)"%s: %s"),
            remotehost, pw->pw_name);
// # 3251
    setproctitle((char /*const*/   *)"%s", proctitle);
    }
// # 3252
    if (logging) {
      {
// # 3253
      syslog(6, (char /*const*/   *)"FTP LOGIN FROM %s, %s", remoteident,
             pw->pw_name);
      }
    }
  }
  {
// # 3263
  home = pw->pw_dir;
// # 3264
  umask(defumask);
// # 3265
  time(& login_time);
// # 3268
  entry_1 = (struct aclmember *)((void *)0);
  }
// # 3269
  while (1) {
    {
// # 3269
    tmp_54 = getaclentry("limit-time", & entry_1);
    }
// # 3269
    if (tmp_54) {
// # 3269
      if (entry_1->arg[0]) {
// # 3269
        if (! entry_1->arg[1]) {
// # 3269
          break;
        }
      } else {
// # 3269
        break;
      }
    } else {
// # 3269
      break;
    }
// # 3270
    if (anonymous) {
      {
// # 3270
      tmp_51 = strcasecmp((char /*const*/   *)entry_1->arg[0],
                            (char /*const*/   *)"anonymous");
      }
// # 3270
      if (tmp_51 == 0) {
        {
// # 3273
        limit_time = (long )strtoul((char /*const*/   */*   */)((char /*const*/   *)entry_1->arg[1]),
                                    (char **/*   */)((char **)((void *)0)),
                                    0);
        }
      } else {
        goto _L_5;
      }
    } else {
      _L_5: 
// # 3270
      if (guest) {
        {
// # 3270
        tmp_52 = strcasecmp((char /*const*/   *)entry_1->arg[0],
                              (char /*const*/   *)"guest");
        }
// # 3270
        if (tmp_52 == 0) {
          {
// # 3273
          limit_time = (long )strtoul((char /*const*/   */*   */)((char /*const*/   *)entry_1->arg[1]),
                                      (char **/*   */)((char **)((void *)0)),
                                      0);
          }
        } else {
          goto _L_4;
        }
      } else {
        _L_4: 
// # 3270
        if (guest | anonymous) {
          {
// # 3270
          tmp_53 = strcmp((char /*const*/   *)entry_1->arg[0],
                            (char /*const*/   *)"*");
          }
// # 3270
          if (tmp_53 == 0) {
            {
// # 3273
            limit_time = (long )strtoul((char /*const*/   */*   */)((char /*const*/   *)entry_1->arg[1]),
                                        (char **/*   */)((char **)((void *)0)),
                                        0);
            }
          }
        }
      }
    }
  }
// # 3275
  return;
  bad: 
// # 3278
  if (xferlog) {
    {
// # 3279
    close(xferlog);
    }
  }
  {
// # 3280
  xferlog = 0;
// # 3281
  end_login();
  }
// # 3282
  return;
}
}
// # 3285
int restricteduid(uid_t uid ) 
{ struct aclmember *entry ;
  int which ;
  char *ptr ;
  struct passwd *pw_0 ;
  int tmp ;
  unsigned long tmp_0 ;
  char *tmp_1 ;
  unsigned long tmp_2 ;
  char *tmp_3 ;
  unsigned long tmp_4 ;
  unsigned long tmp_5 ;
  struct aclmember *tmp_6 ;

  {
  {
// # 3287
  entry = (struct aclmember *)((void *)0);
  }
// # 3292
  while (1) {
    {
// # 3292
    tmp_6 = getaclentry("restricted-uid", & entry);
    }
// # 3292
    if (! tmp_6) {
// # 3292
      break;
    }
    {
// # 3293
    which = 0;
    }
// # 3293
    while (1) {
// # 3293
      if (which < 50) {
// # 3293
        if (! entry->arg[which]) {
// # 3293
          break;
        }
      } else {
// # 3293
        break;
      }
      {
// # 3294
      tmp = strcmp((char /*const*/   *)entry->arg[which], (char /*const*/   *)"*");
      }
// # 3294
      if (! tmp) {
// # 3295
        return (1);
      }
// # 3296
      if ((int )(*(entry->arg[which] + 0)) == 37) {
        {
// # 3297
        ptr = strchr((char /*const*/   *)(entry->arg[which] + 1), (int )'-');
        }
// # 3297
        if ((unsigned int )ptr == (unsigned int )((void *)0)) {
          {
// # 3298
          ptr = strchr((char /*const*/   *)(entry->arg[which] + 1), (int )'+');
          }
// # 3298
          if ((unsigned int )ptr == (unsigned int )((void *)0)) {
            {
// # 3299
            tmp_0 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 3299
            if ((unsigned long )uid == tmp_0) {
// # 3300
              return (1);
            }
          } else {
            {
// # 3303
            tmp_1 = ptr;
// # 3303
            ptr ++;
// # 3303
            (*tmp_1) = '\0';
            }
// # 3304
            if ((int )(*(entry->arg[which] + 1)) == 0) {
              {
// # 3306
              ptr --;
// # 3306
              (*ptr) = '+';
              }
// # 3307
              return (1);
            } else {
              {
// # 3304
              tmp_2 = strtoul((char /*const*/   */*   */)((char /*const*/   *)(entry->arg[which] +
                                                                                   1)),
                                (char **/*   */)((char **)((void *)0)),
                                0);
              }
// # 3304
              if ((unsigned long )uid >= tmp_2) {
                {
// # 3306
                ptr --;
// # 3306
                (*ptr) = '+';
                }
// # 3307
                return (1);
              }
            }
            {
// # 3309
            ptr --;
// # 3309
            (*ptr) = '+';
            }
          }
        } else {
          {
// # 3313
          tmp_3 = ptr;
// # 3313
          ptr ++;
// # 3313
          (*tmp_3) = '\0';
          }
// # 3314
          if ((int )(*(entry->arg[which] + 1)) == 0) {
            goto _L;
          } else {
            {
// # 3314
            tmp_4 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 3314
            if ((unsigned long )uid >= tmp_4) {
              _L: 
// # 3314
              if ((int )(*ptr) == 0) {
                {
// # 3318
                ptr --;
// # 3318
                (*ptr) = '-';
                }
// # 3319
                return (1);
              } else {
                {
// # 3314
                tmp_5 = strtoul((char/*const*/  */*   */)((char/*const*/  *)ptr),
                                  (char **/*   */)((char **)((void *)0)),
                                  0);
                }
// # 3314
                if ((unsigned long )uid <= tmp_5) {
                  {
// # 3318
                  ptr --;
// # 3318
                  (*ptr) = '-';
                  }
// # 3319
                  return (1);
                }
              }
            }
          }
          {
// # 3321
          ptr --;
// # 3321
          (*ptr) = '-';
          }
        }
      } else {
        {
// # 3328
        pw_0 = getpwnam((char/*const*/  *)entry->arg[which]);
        }
// # 3330
        if (pw_0) {
// # 3330
          if (uid == pw_0->pw_uid) {
// # 3331
            return (1);
          }
        }
      }
      {
// # 3293
      which ++;
      }
    }
  }
// # 3335
  return (0);
}
}
// # 3338
int unrestricteduid(uid_t uid ) 
{ struct aclmember *entry ;
  int which ;
  char *ptr ;
  struct passwd *pw_0 ;
  int tmp ;
  unsigned long tmp_0 ;
  char *tmp_1 ;
  unsigned long tmp_2 ;
  char *tmp_3 ;
  unsigned long tmp_4 ;
  unsigned long tmp_5 ;
  struct aclmember *tmp_6 ;

  {
  {
// # 3340
  entry = (struct aclmember *)((void *)0);
  }
// # 3345
  while (1) {
    {
// # 3345
    tmp_6 = getaclentry("unrestricted-uid", & entry);
    }
// # 3345
    if (! tmp_6) {
// # 3345
      break;
    }
    {
// # 3346
    which = 0;
    }
// # 3346
    while (1) {
// # 3346
      if (which < 50) {
// # 3346
        if (! entry->arg[which]) {
// # 3346
          break;
        }
      } else {
// # 3346
        break;
      }
      {
// # 3347
      tmp = strcmp((char/*const*/  *)entry->arg[which], (char/*const*/  *)"*");
      }
// # 3347
      if (! tmp) {
// # 3348
        return (1);
      }
// # 3349
      if ((int )(*(entry->arg[which] + 0)) == 37) {
        {
// # 3350
        ptr = strchr((char/*const*/  *)(entry->arg[which] + 1), (int )'-');
        }
// # 3350
        if ((unsigned int )ptr == (unsigned int )((void *)0)) {
          {
// # 3351
          ptr = strchr((char/*const*/  *)(entry->arg[which] + 1), (int )'+');
          }
// # 3351
          if ((unsigned int )ptr == (unsigned int )((void *)0)) {
            {
// # 3352
            tmp_0 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 3352
            if ((unsigned long )uid == tmp_0) {
// # 3353
              return (1);
            }
          } else {
            {
// # 3356
            tmp_1 = ptr;
// # 3356
            ptr ++;
// # 3356
            (*tmp_1) = '\0';
            }
// # 3357
            if ((int )(*(entry->arg[which] + 1)) == 0) {
              {
// # 3359
              ptr --;
// # 3359
              (*ptr) = '+';
              }
// # 3360
              return (1);
            } else {
              {
// # 3357
              tmp_2 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                   1)),
                                (char **/*   */)((char **)((void *)0)),
                                0);
              }
// # 3357
              if ((unsigned long )uid >= tmp_2) {
                {
// # 3359
                ptr --;
// # 3359
                (*ptr) = '+';
                }
// # 3360
                return (1);
              }
            }
            {
// # 3362
            ptr --;
// # 3362
            (*ptr) = '+';
            }
          }
        } else {
          {
// # 3366
          tmp_3 = ptr;
// # 3366
          ptr ++;
// # 3366
          (*tmp_3) = '\0';
          }
// # 3367
          if ((int )(*(entry->arg[which] + 1)) == 0) {
            goto _L;
          } else {
            {
// # 3367
            tmp_4 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 3367
            if ((unsigned long )uid >= tmp_4) {
              _L: 
// # 3367
              if ((int )(*ptr) == 0) {
                {
// # 3371
                ptr --;
// # 3371
                (*ptr) = '-';
                }
// # 3372
                return (1);
              } else {
                {
// # 3367
                tmp_5 = strtoul((char/*const*/  */*   */)((char/*const*/  *)ptr),
                                  (char **/*   */)((char **)((void *)0)),
                                  0);
                }
// # 3367
                if ((unsigned long )uid <= tmp_5) {
                  {
// # 3371
                  ptr --;
// # 3371
                  (*ptr) = '-';
                  }
// # 3372
                  return (1);
                }
              }
            }
          }
          {
// # 3374
          ptr --;
// # 3374
          (*ptr) = '-';
          }
        }
      } else {
        {
// # 3381
        pw_0 = getpwnam((char/*const*/  *)entry->arg[which]);
        }
// # 3383
        if (pw_0) {
// # 3383
          if (uid == pw_0->pw_uid) {
// # 3384
            return (1);
          }
        }
      }
      {
// # 3346
      which ++;
      }
    }
  }
// # 3388
  return (0);
}
}
// # 3391
int restrictedgid(gid_t gid ) 
{ struct aclmember *entry ;
  int which ;
  char *ptr ;
  struct group *grp ;
  int tmp ;
  unsigned long tmp_0 ;
  char *tmp_1 ;
  unsigned long tmp_2 ;
  char *tmp_3 ;
  unsigned long tmp_4 ;
  unsigned long tmp_5 ;
  struct aclmember *tmp_6 ;

  {
  {
// # 3393
  entry = (struct aclmember *)((void *)0);
  }
// # 3398
  while (1) {
    {
// # 3398
    tmp_6 = getaclentry("restricted-gid", & entry);
    }
// # 3398
    if (! tmp_6) {
// # 3398
      break;
    }
    {
// # 3399
    which = 0;
    }
// # 3399
    while (1) {
// # 3399
      if (which < 50) {
// # 3399
        if (! entry->arg[which]) {
// # 3399
          break;
        }
      } else {
// # 3399
        break;
      }
      {
// # 3400
      tmp = strcmp((char/*const*/  *)entry->arg[which], (char/*const*/  *)"*");
      }
// # 3400
      if (! tmp) {
// # 3401
        return (1);
      }
// # 3402
      if ((int )(*(entry->arg[which] + 0)) == 37) {
        {
// # 3403
        ptr = strchr((char/*const*/  *)(entry->arg[which] + 1), (int )'-');
        }
// # 3403
        if ((unsigned int )ptr == (unsigned int )((void *)0)) {
          {
// # 3404
          ptr = strchr((char/*const*/  *)(entry->arg[which] + 1), (int )'+');
          }
// # 3404
          if ((unsigned int )ptr == (unsigned int )((void *)0)) {
            {
// # 3405
            tmp_0 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 3405
            if ((unsigned long )gid == tmp_0) {
// # 3406
              return (1);
            }
          } else {
            {
// # 3409
            tmp_1 = ptr;
// # 3409
            ptr ++;
// # 3409
            (*tmp_1) = '\0';
            }
// # 3410
            if ((int )(*(entry->arg[which] + 1)) == 0) {
              {
// # 3412
              ptr --;
// # 3412
              (*ptr) = '+';
              }
// # 3413
              return (1);
            } else {
              {
// # 3410
              tmp_2 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                   1)),
                                (char **/*   */)((char **)((void *)0)),
                                0);
              }
// # 3410
              if ((unsigned long )gid >= tmp_2) {
                {
// # 3412
                ptr --;
// # 3412
                (*ptr) = '+';
                }
// # 3413
                return (1);
              }
            }
            {
// # 3415
            ptr --;
// # 3415
            (*ptr) = '+';
            }
          }
        } else {
          {
// # 3419
          tmp_3 = ptr;
// # 3419
          ptr ++;
// # 3419
          (*tmp_3) = '\0';
          }
// # 3420
          if ((int )(*(entry->arg[which] + 1)) == 0) {
            goto _L;
          } else {
            {
// # 3420
            tmp_4 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 3420
            if ((unsigned long )gid >= tmp_4) {
              _L: 
// # 3420
              if ((int )(*ptr) == 0) {
                {
// # 3424
                ptr --;
// # 3424
                (*ptr) = '-';
                }
// # 3425
                return (1);
              } else {
                {
// # 3420
                tmp_5 = strtoul((char/*const*/  */*   */)((char/*const*/  *)ptr),
                                  (char **/*   */)((char **)((void *)0)),
                                  0);
                }
// # 3420
                if ((unsigned long )gid <= tmp_5) {
                  {
// # 3424
                  ptr --;
// # 3424
                  (*ptr) = '-';
                  }
// # 3425
                  return (1);
                }
              }
            }
          }
          {
// # 3427
          ptr --;
// # 3427
          (*ptr) = '-';
          }
        }
      } else {
        {
// # 3431
        grp = getgrnam((char/*const*/  *)entry->arg[which]);
        }
// # 3432
        if (grp) {
// # 3432
          if (gid == grp->gr_gid) {
// # 3433
            return (1);
          }
        }
      }
      {
// # 3399
      which ++;
      }
    }
  }
// # 3437
  return (0);
}
}
// # 3440
int unrestrictedgid(gid_t gid ) 
{ struct aclmember *entry ;
  int which ;
  char *ptr ;
  struct group *grp ;
  int tmp ;
  unsigned long tmp_0 ;
  char *tmp_1 ;
  unsigned long tmp_2 ;
  char *tmp_3 ;
  unsigned long tmp_4 ;
  unsigned long tmp_5 ;
  struct aclmember *tmp_6 ;

  {
  {
// # 3442
  entry = (struct aclmember *)((void *)0);
  }
// # 3447
  while (1) {
    {
// # 3447
    tmp_6 = getaclentry("unrestricted-gid", & entry);
    }
// # 3447
    if (! tmp_6) {
// # 3447
      break;
    }
    {
// # 3448
    which = 0;
    }
// # 3448
    while (1) {
// # 3448
      if (which < 50) {
// # 3448
        if (! entry->arg[which]) {
// # 3448
          break;
        }
      } else {
// # 3448
        break;
      }
      {
// # 3449
      tmp = strcmp((char/*const*/  *)entry->arg[which], (char/*const*/  *)"*");
      }
// # 3449
      if (! tmp) {
// # 3450
        return (1);
      }
// # 3451
      if ((int )(*(entry->arg[which] + 0)) == 37) {
        {
// # 3452
        ptr = strchr((char/*const*/  *)(entry->arg[which] + 1), (int )'-');
        }
// # 3452
        if ((unsigned int )ptr == (unsigned int )((void *)0)) {
          {
// # 3453
          ptr = strchr((char/*const*/  *)(entry->arg[which] + 1), (int )'+');
          }
// # 3453
          if ((unsigned int )ptr == (unsigned int )((void *)0)) {
            {
// # 3454
            tmp_0 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 3454
            if ((unsigned long )gid == tmp_0) {
// # 3455
              return (1);
            }
          } else {
            {
// # 3458
            tmp_1 = ptr;
// # 3458
            ptr ++;
// # 3458
            (*tmp_1) = '\0';
            }
// # 3459
            if ((int )(*(entry->arg[which] + 1)) == 0) {
              {
// # 3461
              ptr --;
// # 3461
              (*ptr) = '+';
              }
// # 3462
              return (1);
            } else {
              {
// # 3459
              tmp_2 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                   1)),
                                (char **/*   */)((char **)((void *)0)),
                                0);
              }
// # 3459
              if ((unsigned long )gid >= tmp_2) {
                {
// # 3461
                ptr --;
// # 3461
                (*ptr) = '+';
                }
// # 3462
                return (1);
              }
            }
            {
// # 3464
            ptr --;
// # 3464
            (*ptr) = '+';
            }
          }
        } else {
          {
// # 3468
          tmp_3 = ptr;
// # 3468
          ptr ++;
// # 3468
          (*tmp_3) = '\0';
          }
// # 3469
          if ((int )(*(entry->arg[which] + 1)) == 0) {
            goto _L;
          } else {
            {
// # 3469
            tmp_4 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 3469
            if ((unsigned long )gid >= tmp_4) {
              _L: 
// # 3469
              if ((int )(*ptr) == 0) {
                {
// # 3473
                ptr --;
// # 3473
                (*ptr) = '-';
                }
// # 3474
                return (1);
              } else {
                {
// # 3469
                tmp_5 = strtoul((char/*const*/  */*   */)((char/*const*/  *)ptr),
                                  (char **/*   */)((char **)((void *)0)),
                                  0);
                }
// # 3469
                if ((unsigned long )gid <= tmp_5) {
                  {
// # 3473
                  ptr --;
// # 3473
                  (*ptr) = '-';
                  }
// # 3474
                  return (1);
                }
              }
            }
          }
          {
// # 3476
          ptr --;
// # 3476
          (*ptr) = '-';
          }
        }
      } else {
        {
// # 3480
        grp = getgrnam((char/*const*/  *)entry->arg[which]);
        }
// # 3481
        if (grp) {
// # 3481
          if (gid == grp->gr_gid) {
// # 3482
            return (1);
          }
        }
      }
      {
// # 3448
      which ++;
      }
    }
  }
// # 3486
  return (0);
}
}
// # 3491
static char buf[100]  ;
// # 3489
char *opt_string(int options ) 
{ char *ptr ;
  char *tmp ;
  char *tmp_0 ;
  char *tmp_1 ;
  char *tmp_2 ;
  char *tmp_3 ;

  {
  {
// # 3492
  ptr = buf;
  }
// # 3494
  if ((options & 1) != 0) {
    {
// # 3495
    tmp = ptr;
// # 3495
    ptr ++;
// # 3495
    (*tmp) = 'C';
    }
  }
// # 3496
  if ((options & 4) != 0) {
    {
// # 3497
    tmp_0 = ptr;
// # 3497
    ptr ++;
// # 3497
    (*tmp_0) = 'T';
    }
  }
// # 3498
  if ((options & 2) != 0) {
    {
// # 3499
    tmp_1 = ptr;
// # 3499
    ptr ++;
// # 3499
    (*tmp_1) = 'U';
    }
  }
// # 3500
  if (options == 0) {
    {
// # 3501
    tmp_2 = ptr;
// # 3501
    ptr ++;
// # 3501
    (*tmp_2) = '_';
    }
  }
  {
// # 3502
  tmp_3 = ptr;
// # 3502
  ptr ++;
// # 3502
  (*tmp_3) = '\0';
  }
// # 3503
  return (buf);
}
}
// # 4179
static char line[8192]  ;
// # 3971
void retrieve(char *cmd , char *name ) 
{ FILE *fin ;
  FILE *dout_1 ;
  struct stat st ;
  struct stat junk ;
  int (*closefunc)() ;
  int options ;
  int ThisRetrieveIsData ;
  time_t start_time ;
  time_t tmp ;
  char *logname ;
  char namebuf[4096] ;
  char fnbuf[4096] ;
  int TransferComplete ;
  struct convert *cptr ;
  char realname[4096] ;
  int stat_ret ;
  int tmp_0 ;
  char *ptr ;
  int pfxlen ;
  int tmp_1 ;
  int sfxlen ;
  int tmp_2 ;
  int namelen ;
  int tmp_3 ;
  int tmp_4 ;
  int tmp_5 ;
  int pfxlen_0 ;
  int tmp_6 ;
  int namelen_0 ;
  int tmp_7 ;
  int tmp_8 ;
  int tmp_9 ;
  int tmp_10 ;
  int tmp_11 ;
  int tmp_12 ;
  int tmp_13 ;
  int tmp_14 ;
  int *tmp_15 ;
  int *tmp_16 ;
  int *tmp_17 ;
  int tmp_18 ;
  int tmp_19 ;
  register int i ;
  register int n ;
  register int c ;
  int tmp_20 ;
  int tmp_21 ;
  off_t tmp_22 ;
  char *tmp_23 ;
  char msg[4452] ;
  size_t msglen ;
  int xfertime ;
  time_t tmp_24 ;
  time_t curtime ;
  time_t tmp_25 ;
  int loop ;
  char *tmp_26 ;
  int tmp_27 ;
  int tmp_28 ;
  char *tmp_29 ;
  int tmp_30 ;
  char/*const*/  *tmp_31 ;
  char *tmp_32 ;
  int tmp_34 ;
  char *tmp_35 ;
  int tmp_36 ;
  size_t tmp_37 ;
  size_t tmp_38 ;

  {
  {
// # 3973
  fin = (FILE *)((void *)0);
// # 3975
  closefunc = (int (*)())((void *)0);
// # 3976
  options = 0;
// # 3977
  ThisRetrieveIsData = retrieve_is_data;
// # 3978
  tmp = time((time_t *)((void *)0));
// # 3978
  start_time = tmp;
// # 3982
  TransferComplete = 0;
// # 3985
  stat_ret = -1;
// # 3989
  wu_realpath((char/*const*/  *)name, realname, chroot_path);
  }
// # 3991
  if ((unsigned int )cmd == (unsigned int )((void *)0)) {
    {
// # 3991
    stat_ret = statextinline((char/*const*/  *)name, & st);
    }
// # 3991
    if (stat_ret == 0) {
// # 3993
      if (use_accessfile) {
        {
// # 3993
        tmp_0 = checknoretrieve(name);
        }
// # 3993
        if (tmp_0) {
// # 3994
          if (log_security) {
// # 3995
            if (anonymous) {
              {
// # 3996
              syslog(5,
                     (char/*const*/  *)"anonymous(%s) of %s tried to download %s (noretrieve)",
                     guestpw, remoteident, realname);
              }
            } else {
              {
// # 3999
              syslog(5,
                     (char/*const*/  *)"%s of %s tried to download %s (noretrieve)",
                     pw->pw_name, remoteident, realname);
              }
            }
          }
// # 4001
          return;
        }
      }
    }
  }
  {
// # 4055
  logname = (char *)((void *)0);
  }
// # 4056
  if ((unsigned int )cmd == (unsigned int )((void *)0)) {
// # 4056
    if (stat_ret != 0) {
      {
// # 4059
      cptr = cvtptr;
      }
// # 4059
      while ((unsigned int )cptr != (unsigned int )((void *)0)) {
// # 4060
        if (! (mangleopts & 1)) {
// # 4060
          if (cptr->options & 1) {
            goto Cont;
          }
        }
// # 4062
        if (! (mangleopts & 2)) {
// # 4062
          if (cptr->options & 2) {
            goto Cont;
          }
        }
// # 4064
        if (! (mangleopts & 4)) {
// # 4064
          if (cptr->options & 4) {
            goto Cont;
          }
        }
// # 4067
        if (cptr->stripfix) {
// # 4067
          if (cptr->postfix) {
            {
// # 4068
            tmp_1 = (int )strlen((char/*const*/  *)cptr->postfix);
// # 4068
            pfxlen = tmp_1;
// # 4069
            tmp_2 = (int )strlen((char/*const*/  *)cptr->stripfix);
// # 4069
            sfxlen = tmp_2;
// # 4070
            tmp_3 = (int )strlen((char/*const*/  *)name);
// # 4070
            namelen = tmp_3;
// # 4071
            strcpy((char */*   */)(fnbuf),
                   (char/*const*/  */*   */)((char/*const*/  *)name));
            }
// # 4073
            if (namelen <= pfxlen) {
              goto Cont;
            }
// # 4075
            if ((unsigned int )((namelen - pfxlen) + sfxlen) >= sizeof(fnbuf)) {
              goto Cont;
            }
            {
// # 4078
            tmp_4 = strcmp((char/*const*/  *)((fnbuf + namelen) - pfxlen),
                             (char/*const*/  *)cptr->postfix);
            }
// # 4078
            if (tmp_4) {
              goto Cont;
            }
            {
// # 4080
            (*((fnbuf + namelen) - pfxlen)) = '\0';
// # 4081
            strcat((char */*   */)(fnbuf),
                   (char/*const*/  */*   */)((char/*const*/  *)cptr->stripfix));
// # 4082
            tmp_5 = statextinline((char/*const*/  *)(fnbuf), & st);
            }
// # 4082
            if (tmp_5 != 0) {
              goto Cont;
            }
          } else {
            goto _L;
          }
        } else {
          _L: 
// # 4085
          if (cptr->postfix) {
            {
// # 4086
            tmp_6 = (int )strlen((char/*const*/  *)cptr->postfix);
// # 4086
            pfxlen_0 = tmp_6;
// # 4087
            tmp_7 = (int )strlen((char/*const*/  *)name);
// # 4087
            namelen_0 = tmp_7;
            }
// # 4089
            if (namelen_0 <= pfxlen_0) {
              goto Cont;
            }
            {
// # 4091
            strcpy((char */*   */)(fnbuf),
                   (char/*const*/  */*   */)((char/*const*/  *)name));
// # 4092
            tmp_8 = strcmp((char/*const*/  *)((fnbuf + namelen_0) - pfxlen_0),
                             (char/*const*/  *)cptr->postfix);
            }
// # 4092
            if (tmp_8) {
              goto Cont;
            }
            {
// # 4094
            (*((fnbuf + namelen_0) - pfxlen_0)) = (char )((void *)0);
// # 4095
            tmp_9 = statextinline((char/*const*/  *)(fnbuf), & st);
            }
// # 4095
            if (tmp_9 != 0) {
              goto Cont;
            }
          } else {
// # 4098
            if (cptr->stripfix) {
              {
// # 4099
              strcpy((char */*   */)(fnbuf),
                     (char/*const*/  */*   */)((char/*const*/  *)name));
// # 4100
              strcat((char */*   */)(fnbuf),
                     (char/*const*/  */*   */)((char/*const*/  *)cptr->stripfix));
// # 4101
              tmp_10 = statextinline((char/*const*/  *)(fnbuf), & st);
              }
// # 4101
              if (tmp_10 != 0) {
                goto Cont;
              }
            } else {
              goto Cont;
            }
          }
        }
// # 4108
        if ((st.st_mode & 61440U) == 16384U) {
// # 4109
          if (cptr->types) {
// # 4109
            if (! (cptr->types & 2)) {
              {
// # 4110
              reply(550, "Cannot %s directories.", cptr->name);
              }
// # 4111
              return;
            }
          } else {
            {
// # 4110
            reply(550, "Cannot %s directories.", cptr->name);
            }
// # 4111
            return;
          }
// # 4113
          if (cptr->options & 4) {
            {
// # 4114
            strcpy((char */*   */)(namebuf),
                   (char/*const*/  */*   */)((char/*const*/  *)(fnbuf)));
// # 4115
            strcat((char */*   */)(namebuf),
                   (char/*const*/  */*   */)((char/*const*/  *)"/.notar"));
// # 4116
            tmp_11 = statextinline((char/*const*/  *)(namebuf), & junk);
            }
// # 4116
            if (tmp_11 == 0) {
// # 4117
              if (log_security) {
// # 4118
                if (anonymous) {
                  {
// # 4119
                  syslog(5,
                         (char/*const*/  *)"anonymous(%s) of %s tried to tar %s (.notar)",
                         guestpw, remoteident, realname);
                  }
                } else {
                  {
// # 4122
                  syslog(5, (char/*const*/  *)"%s of %s tried to tar %s (.notar)",
                         pw->pw_name, remoteident, realname);
                  }
                }
              }
              {
// # 4124
              reply(550, "Sorry, you may not TAR that directory.");
              }
// # 4125
              return;
            }
          }
        }
// # 4132
        if (use_accessfile) {
          {
// # 4132
          tmp_12 = checknoretrieve(fnbuf);
          }
// # 4132
          if (tmp_12) {
// # 4133
            if (log_security) {
// # 4134
              if (anonymous) {
                {
// # 4135
                syslog(5,
                       (char/*const*/  *)"anonymous(%s) of %s tried to download %s (noretrieve)",
                       guestpw, remoteident, realname);
                }
              } else {
                {
// # 4138
                syslog(5,
                       (char/*const*/  *)"%s of %s tried to download %s (noretrieve)",
                       pw->pw_name, remoteident, realname);
                }
              }
            }
// # 4140
            return;
          }
        }
// # 4143
        if ((st.st_mode & 61440U) == 32768U) {
// # 4143
          if (cptr->types) {
// # 4143
            if ((cptr->types & 1) == 0) {
              {
// # 4144
              reply(550, "Cannot %s plain files.", cptr->name);
              }
// # 4145
              return;
            }
          } else {
            {
// # 4144
            reply(550, "Cannot %s plain files.", cptr->name);
            }
// # 4145
            return;
          }
        }
// # 4147
		/*transformed by vijay: if (((st.st_mode & 61440U) == 32768U) != 0) */
        if ((st.st_mode & 61440U) == 32768U) {
// # 4147
          /* transformed by vijay: if (((st.st_mode & 61440U) == 16384U) != 0) */
          if ((st.st_mode & 61440U) == 16384U) {
            {
// # 4148
            reply(550, "Cannot %s special files.", cptr->name);
            }
// # 4149
            return;
          }
        }
// # 4151
        if (cptr->types) {
// # 4151
          if (! (cptr->types & 4)) {
            _L_0: 
            {
// # 4151
            tmp_13 = deny_badasciixfer(550, "");
            }
// # 4151
            if (tmp_13) {
// # 4152
              return;
            }
          }
        } else {
          goto _L_0;
        }
        {
// # 4154
        logname = fnbuf;
// # 4155
        options |= cptr->options;
// # 4157
        strcpy((char */*   */)(namebuf),
               (char/*const*/  */*   */)((char/*const*/  *)cptr->external_cmd));
// # 4158
        ptr = strchr((char/*const*/  *)(namebuf), (int )' ');
        }
// # 4158
        if ((unsigned int )ptr != (unsigned int )((void *)0)) {
          {
// # 4159
          (*ptr) = '\0';
          }
        }
        {
// # 4160
        tmp_14 = statextinline((char/*const*/  *)(namebuf), & st);
        }
// # 4160
        if (tmp_14 != 0) {
          {
// # 4161
          syslog(3, (char/*const*/  *)"external command %s not found", namebuf);
// # 4163
          reply(550,
                "Local error: conversion program not found. Cannot %s file.",
                cptr->name);
          }
// # 4166
          return;
        }
        {
// # 4168
        retrieve(cptr->external_cmd, logname);
        }
        goto logresults;
        Cont: 
        {
// # 4059
        cptr = cptr->next;
        }
      }
    }
  }
// # 4174
  if ((unsigned int )cmd == (unsigned int )((void *)0)) {
    {
// # 4175
    fin = fopen((char/*const*/  */*   */)((char/*const*/  *)name),
                (char/*const*/  */*   */)((char/*const*/  *)"r"));
    {
// # 17 "spec.work"
    if (fin != (FILE *)0) {
// # 17
      fin->BLAST_FLAG = 1;
    }
    {

    }
    }
// # 4175 "ftpd.c"
    closefunc = (int (*)())(& fclose);
// # 4176
    st.st_size = 0L;
    }
  } else {
    {
// # 4181
    snprintf((char */*   */)(line), sizeof(line),
             (char/*const*/  */*   */)((char/*const*/  *)cmd), name);
// # 4181
    name = line;
// # 4182
    fin = ftpd_popen(line, "r", 1);
// # 4182
    closefunc = (int (*)())(& ftpd_pclose);
// # 4183
    st.st_size = -1L;
// # 4185
    st.st_blksize = 8192L;
    }
  }
// # 4188
  if ((unsigned int )fin == (unsigned int )((void *)0)) {
    {
// # 4189
    tmp_15 = errno_location();
    }
// # 4189
    if ((*tmp_15) != 0) {
      {
// # 4190
      perror_reply(550, name);
      }
    }
    {
// # 4191
    tmp_16 = errno_location();
    }
// # 4191
    if ((*tmp_16) == 13) {
      goto _L_1;
    } else {
      {
// # 4191
      tmp_17 = errno_location();
      }
// # 4191
      if ((*tmp_17) == 1) {
        _L_1: 
// # 4192
        if (log_security) {
// # 4193
          if (anonymous) {
            {
// # 4194
            syslog(5,
                   (char/*const*/  *)"anonymous(%s) of %s tried to download %s (file permissions)",
                   guestpw, remoteident, realname);
            }
          } else {
            {
// # 4197
            syslog(5,
                   (char/*const*/  *)"%s of %s tried to download %s (file permissions)",
                   pw->pw_name, remoteident, realname);
            }
          }
        }
      }
    }
// # 4199
    return;
  }
// # 4201
  if ((unsigned int )cmd == (unsigned int )((void *)0)) {
    {
// # 4201
    tmp_18 = fileno(fin);
// # 4201
    tmp_19 = fstatextinline(tmp_18, & st);
    }
// # 4201
    if (tmp_19 < 0) {
      {
// # 4203
      reply(550, "%s: not a plain file.", name);
      }
      goto done;
    } else {
// # 4201
      if ((st.st_mode & 61440U) != 32768U) {
        {
// # 4203
        reply(550, "%s: not a plain file.", name);
        }
        goto done;
      }
    }
  }
// # 4206
  if (restart_point) {
// # 4207
    if (type == 1) {
      {
// # 4210
      n = (int )restart_point;
// # 4211
      i = 0;
      }
// # 4212
      while (1) {
        {
// # 4212
        tmp_20 = i;
// # 4212
        i ++;
        }
// # 4212
        if (! (tmp_20 < n)) {
// # 4212
          break;
        }
        {
// # 4213
        c = _IO_getc(fin);
        }
// # 4213
        if (c == -1) {
          {
// # 4214
          perror_reply(550, name);
          }
          goto done;
        }
// # 4217
        if (c == 10) {
          {
// # 4218
          i ++;
          }
        }
      }
    } else {
      {
// # 4221
      tmp_21 = fileno(fin);
// # 4221
      tmp_22 = lseek(tmp_21, restart_point, 0);
      }
// # 4221
      if (tmp_22 < 0L) {
        {
// # 4222
        perror_reply(550, name);
        }
        goto done;
      }
    }
  }
  {
// # 4227
  dout_1 = dataconn(name, st.st_size, "w");
  }
// # 4228
  if ((unsigned int )dout_1 == (unsigned int )((void *)0)) {
    goto done;
  }
  {
// # 4241
  TransferComplete = send_data(fin, dout_1, st.st_blksize * 2L);
  {
// # 96 "spec.work"
  if (dout_1->BLAST_FLAG == 1) {
// # 97
    dout_1->BLAST_FLAG = 0;
  } else {
// # 98
    error__();
  }
  {

  }
  }
// # 4251 "ftpd.c"
  fclose(dout_1);
  }
  logresults: 
// # 4254
  if (ThisRetrieveIsData) {
// # 4255
    if ((unsigned int )logname != (unsigned int )((void *)0)) {
      {
// # 4255
      tmp_23 = logname;
      }
    } else {
      {
// # 4255
      tmp_23 = name;
      }
    }
    {
// # 4255
    fb_realpath((char/*const*/  *)tmp_23, LastFileTransferred);
    }
  }
// # 4257
  if (log_outbound_xfers) {
// # 4257
    if (xferlog) {
      goto _L_2;
    } else {
// # 4257
      if (syslogmsg) {
        _L_2: 
// # 4257
        if ((unsigned int )cmd == (unsigned int )((char *)0)) {
          {
// # 4260
          tmp_24 = time((time_t *)((void *)0));
// # 4260
          xfertime = (int )(tmp_24 - start_time);
// # 4261
          tmp_25 = time((time_t *)((void *)0));
// # 4261
          curtime = tmp_25;
          }
// # 4264
          if (! xfertime) {
            {
// # 4265
            xfertime ++;
            }
          }
// # 4269
          if ((unsigned int )logname != (unsigned int )((void *)0)) {
            {
// # 4269
            tmp_26 = logname;
            }
          } else {
            {
// # 4269
            tmp_26 = name;
            }
          }
          {
// # 4269
          fb_realpath((char/*const*/  *)tmp_26, namebuf);
// # 4271
          loop = 0;
          }
// # 4271
          while (namebuf[loop]) {
            {
// # 4272
            tmp_27 = _get__ctype_b((int )namebuf[loop]);
            }
// # 4272
            if (tmp_27 & 8192) {
              {
// # 4273
              namebuf[loop] = '_';
              }
            } else {
              {
// # 4272
              tmp_28 = _get__ctype_b((int )namebuf[loop]);
              }
// # 4272
              if (tmp_28 & 2) {
                {
// # 4273
                namebuf[loop] = '_';
                }
              }
            }
            {
// # 4271
            loop ++;
            }
          }
          {
// # 4294
          tmp_29 = ctime((time_t/*const*/  *)(& curtime));
// # 4294
          sprintf((char */*   */)(msg),
                  (char/*const*/  */*   */)((char/*const*/  *)"%.24s %d %s %u "),
                  tmp_29, xfertime, remotehost, byte_count);
// # 4300
          msglen = strlen((char/*const*/  *)(msg));
          }
// # 4301
          if (TransferComplete) {
            {
// # 4301
            tmp_30 = (int )'c';
            }
          } else {
            {
// # 4301
            tmp_30 = (int )'i';
            }
          }
// # 4301
          if (authenticated) {
            {
// # 4301
            tmp_31 = (char/*const*/  *)(authuser);
            }
          } else {
            {
// # 4301
            tmp_31 = (char/*const*/  *)"*";
            }
          }
// # 4301
          if (anonymous) {
            {
// # 4301
            tmp_32 = guestpw;
            }
          } else {
            {
// # 4301
            tmp_32 = pw->pw_name;
            }
          }
// # 4301
          if (anonymous) {
            {
// # 4301
            tmp_34 = (int )'a';
            }
          } else {
// # 4301
            if (guest) {
              {
// # 4301
              tmp_34 = (int )'g';
              }
            } else {
              {
// # 4301
              tmp_34 = (int )'r';
              }
            }
          }
          {
// # 4301
          tmp_35 = opt_string(options);
          }
// # 4301
          if (type == 1) {
            {
// # 4301
            tmp_36 = (int )'a';
            }
          } else {
            {
// # 4301
            tmp_36 = (int )'b';
            }
          }
          {
// # 4301
          snprintf((char */*   */)(msg + msglen),
                   sizeof(msg) - msglen,
                   (char/*const*/  */*   */)((char/*const*/  *)"%s %c %s %c %c %s ftp %d %s %c\n"),
                   namebuf, tmp_36, tmp_35, 'o', tmp_34, tmp_32,
                   authenticated, tmp_31, tmp_30);
// # 4313
          tmp_37 = strlen((char/*const*/  *)(msg));
          }
// # 4313
          if (tmp_37 == sizeof(msg) - 1U) {
            {
// # 4314
            msg[sizeof(msg) - 2U] = '\n';
            }
          }
// # 4315
          if (syslogmsg != 1) {
            {
// # 4316
            tmp_38 = strlen((char/*const*/  *)(msg));
// # 4316
            write(xferlog, (void/*const*/  *)(msg), tmp_38);
            }
          }
// # 4317
          if (syslogmsg != 0) {
            {
// # 4318
            syslog(6, (char/*const*/  *)"xferlog (send): %s", msg + 25);
            }
          }
        }
      }
    }
  }
  {
// # 4320
  data = -1;
// # 4321
  pdata = -1;
  }
  done: 
// # 4323
  if (closefunc) {
    {
// # 4324
    ((*closefunc))(fin);
    }
  }
// # 4325
  return;
}
}
// # 4327
void store(char *name , char *mode_0 , int unique ) 
{ FILE *fout ;
  FILE *din ;
  struct stat st ;
  int TransferIncomplete ;
  time_t start_time ;
  time_t tmp ;
  struct aclmember *entry ;
  char realname[4096] ;
  int open_flags ;
  int tmp_0 ;
  int tmp_1 ;
  register int i ;
  register int n ;
  register int c ;
  int tmp_2 ;
  int tmp_3 ;
  int tmp_4 ;
  off_t tmp_5 ;
  char namebuf[4096] ;
  char msg[4452] ;
  size_t msglen ;
  int xfertime ;
  time_t tmp_6 ;
  time_t curtime ;
  time_t tmp_7 ;
  int loop ;
  int tmp_8 ;
  int tmp_9 ;
  char *tmp_10 ;
  int tmp_11 ;
  char/*const*/  *tmp_12 ;
  char *tmp_13 ;
  int tmp_15 ;
  char *tmp_16 ;
  int tmp_17 ;
  size_t tmp_18 ;
  size_t tmp_19 ;

  {
  {
// # 4331
  TransferIncomplete = 1;
// # 4333
  tmp = time((time_t *)((void *)0));
// # 4333
  start_time = tmp;
// # 4335
  entry = (struct aclmember *)((void *)0);
// # 4346
  open_flags = 0;
// # 4359
  wu_realpath((char/*const*/  *)name, realname, chroot_path);
  }
// # 4394
  if (unique) {
    {
// # 4394
    tmp_0 = statextinline((char/*const*/  *)name, & st);
    }
// # 4394
    if (tmp_0 == 0) {
      {
// # 4394
      name = gunique(name);
      }
// # 4394
      if ((unsigned int )name == (unsigned int )((void *)0)) {
// # 4396
        return;
      }
    }
  }
  {
// # 4401
  tmp_1 = fn_check(name);
  }
// # 4401
  if (tmp_1 <= 0) {
// # 4402
    if (log_security) {
// # 4403
      if (anonymous) {
        {
// # 4404
        syslog(5,
               (char/*const*/  *)"anonymous(%s) of %s tried to upload \"%s\" (path-filter)",
               guestpw, remoteident, realname);
        }
      } else {
        {
// # 4407
        syslog(5,
               (char/*const*/  *)"%s of %s tried to upload \"%s\" (path-filter)",
               pw->pw_name, remoteident, realname);
        }
      }
    }
// # 4409
    return;
  }
// # 4508
  if (restart_point) {
// # 4508
    if ((open_flags & 1024) == 0) {
      {
// # 4509
      mode_0 = "r+";
      }
    }
  }
  {
// # 4514
  fout = fopen((char/*const*/  */*   */)((char/*const*/  *)name),
               (char/*const*/  */*   */)((char/*const*/  *)mode_0));
  {
// # 17 "spec.work"
  if (fout != (FILE *)0) {
// # 17
    fout->BLAST_FLAG = 1;
  }
  {

  }
  }

  }
// # 4517 "ftpd.c"
  if ((unsigned int )fout == (unsigned int )((void *)0)) {
// # 4518
    if (log_security) {
// # 4519
      if (anonymous) {
        {
// # 4520
        syslog(5,
               (char/*const*/  *)"anonymous(%s) of %s tried to upload %s (permissions)",
               guestpw, remoteident, realname);
        }
      } else {
        {
// # 4523
        syslog(5, (char/*const*/  *)"%s of %s tried to upload %s (permissions)",
               pw->pw_name, remoteident, realname);
        }
      }
    }
    {
// # 4525
    perror_reply(553, name);
    }
// # 4526
    return;
  }
// # 4528
  if (restart_point) {
// # 4529
    if (type == 1) {
      {
// # 4532
      n = (int )restart_point;
// # 4533
      i = 0;
      }
// # 4534
      while (1) {
        {
// # 4534
        tmp_2 = i;
// # 4534
        i ++;
        }
// # 4534
        if (! (tmp_2 < n)) {
// # 4534
          break;
        }
        {
// # 4535
        c = _IO_getc(fout);
        }
// # 4535
        if (c == -1) {
          {
// # 4536
          perror_reply(550, name);
          }
          goto done;
        }
// # 4539
        if (c == 10) {
          {
// # 4540
          i ++;
          }
        }
      }
      {
// # 4544
      tmp_3 = fseek(fout, 0L, 1);
      }
// # 4544
      if (tmp_3 < 0) {
        {
// # 4545
        perror_reply(550, name);
        }
        goto done;
      }
    } else {
      {
// # 4549
      tmp_4 = fileno(fout);
// # 4549
      tmp_5 = lseek(tmp_4, restart_point, 0);
      }
// # 4549
      if (tmp_5 < 0L) {
        {
// # 4550
        perror_reply(550, name);
        }
        goto done;
      }
    }
  }
  {
// # 4554
  din = dataconn(name, -1L, "r");
  }
// # 4555
  if ((unsigned int )din == (unsigned int )((void *)0)) {
    goto done;
  }
  {
// # 4557
  TransferIncomplete = receive_data(din, fout);
  {
// # 96 "spec.work"
  if (din->BLAST_FLAG == 1) {
// # 97
    din->BLAST_FLAG = 0;
  } else {
// # 98
    error__();
  }
  {

  }
  }
// # 4558 "ftpd.c"
  fclose(din);
  }
// # 4559
  if (TransferIncomplete == 0) {
// # 4560
    if (unique) {
      {
// # 4561
      reply(226, "Transfer complete (unique file name:%s).", name);
      }
    } else {
      {
// # 4563
      reply(226, "Transfer complete.");
      }
    }
  }
  {
// # 4566
  fb_realpath((char/*const*/  *)name, LastFileTransferred);
  }
// # 4622
  if (log_incoming_xfers) {
// # 4622
    if (xferlog) {
      goto _L;
    } else {
// # 4622
      if (syslogmsg) {
        _L: 
        {
// # 4625
        tmp_6 = time((time_t *)((void *)0));
// # 4625
        xfertime = (int )(tmp_6 - start_time);
// # 4626
        tmp_7 = time((time_t *)((void *)0));
// # 4626
        curtime = tmp_7;
        }
// # 4629
        if (! xfertime) {
          {
// # 4630
          xfertime ++;
          }
        }
        {
// # 4634
        fb_realpath((char/*const*/  *)name, namebuf);
// # 4636
        loop = 0;
        }
// # 4636
        while (namebuf[loop]) {
          {
// # 4637
          tmp_8 = _get__ctype_b((int )namebuf[loop]);
          }
// # 4637
          if (tmp_8 & 8192) {
            {
// # 4638
            namebuf[loop] = '_';
            }
          } else {
            {
// # 4637
            tmp_9 = _get__ctype_b((int )namebuf[loop]);
            }
// # 4637
            if (tmp_9 & 2) {
              {
// # 4638
              namebuf[loop] = '_';
              }
            }
          }
          {
// # 4636
          loop ++;
          }
        }
        {
// # 4641
        tmp_10 = ctime((time_t/*const*/  *)(& curtime));
// # 4641
        sprintf((char */*   */)(msg),
                (char/*const*/  */*   */)((char/*const*/  *)"%.24s %d %s %u "),
                tmp_10, xfertime, remotehost, byte_count);
// # 4647
        msglen = strlen((char/*const*/  *)(msg));
        }
// # 4648
        if (TransferIncomplete) {
          {
// # 4648
          tmp_11 = (int )'i';
          }
        } else {
          {
// # 4648
          tmp_11 = (int )'c';
          }
        }
// # 4648
        if (authenticated) {
          {
// # 4648
          tmp_12 = (char/*const*/  *)(authuser);
          }
        } else {
          {
// # 4648
          tmp_12 = (char/*const*/  *)"*";
          }
        }
// # 4648
        if (anonymous) {
          {
// # 4648
          tmp_13 = guestpw;
          }
        } else {
          {
// # 4648
          tmp_13 = pw->pw_name;
          }
        }
// # 4648
        if (anonymous) {
          {
// # 4648
          tmp_15 = (int )'a';
          }
        } else {
// # 4648
          if (guest) {
            {
// # 4648
            tmp_15 = (int )'g';
            }
          } else {
            {
// # 4648
            tmp_15 = (int )'r';
            }
          }
        }
        {
// # 4648
        tmp_16 = opt_string(0);
        }
// # 4648
        if (type == 1) {
          {
// # 4648
          tmp_17 = (int )'a';
          }
        } else {
          {
// # 4648
          tmp_17 = (int )'b';
          }
        }
        {
// # 4648
        snprintf((char */*   */)(msg + msglen), sizeof(msg) - msglen,
                 (char/*const*/  */*   */)((char/*const*/  *)"%s %c %s %c %c %s ftp %d %s %c\n"),
                 namebuf, tmp_17, tmp_16, 'i', tmp_15, tmp_13,
                 authenticated, tmp_12, tmp_11);
// # 4660
        tmp_18 = strlen((char/*const*/  *)(msg));
        }
// # 4660
        if (tmp_18 == sizeof(msg) - 1U) {
          {
// # 4661
          msg[sizeof(msg) - 2U] = '\n';
          }
        }
// # 4662
        if (syslogmsg != 1) {
          {
// # 4663
          tmp_19 = strlen((char/*const*/  *)(msg));
// # 4663
          write(xferlog, (void/*const*/  *)(msg), tmp_19);
          }
        }
// # 4664
        if (syslogmsg != 0) {
          {
// # 4665
          syslog(6, (char/*const*/  *)"xferlog (recv): %s", msg + 25);
          }
        }
      }
    }
  }
  {
// # 4667
  data = -1;
// # 4668
  pdata = -1;
  }
  done: 
  {

  {
// # 96 "spec.work"
  if (fout->BLAST_FLAG == 1) {
// # 97
    fout->BLAST_FLAG = 0;
  } else {
// # 98
    error__();
  }
  {

  }
  }
// # 4670 "ftpd.c"
  fclose(fout);
  }
// # 4671
  return;
}
}
// # 4673
FILE *getdatasock(char *mode_0 ) 
{ int s ;
  int on ;
  int tries ;
  FILE *tmp ;
  int tmp_0 ;
  int tmp_1 ;
  int tmp_2 ;
  int *tmp_3 ;
  int tmp_4 ;
  FILE *tmp_5 ;
  int *tmp_6 ;
  int *tmp_7 ;

  {
  {
// # 4675
  on = 1;
  }
// # 4677
  if (data >= 0) {
    {
// # 4678
    tmp = fdopen(data, (char/*const*/  *)mode_0);
    {
// # 25 "spec.work"
    tmp->BLAST_FLAG = 1;
    {

    }
    }

    }
// # 4678 "ftpd.c"
    return (tmp);
  }
  {
// # 4679
  delay_signaling();
// # 4680
  seteuid(0U);
// # 4681
  s = socket(2, 1, 0);
  }
// # 4682
  if (s < 0) {
    goto bad;
  }
  {
// # 4684
  tmp_0 = setsockopt(s, 1, 2, (void/*const*/  *)((char *)(& on)), sizeof(on));
  }
// # 4684
  if (tmp_0 < 0) {
    goto bad;
  }
// # 4687
  if (keepalive) {
    {
// # 4688
    setsockopt(s, 1, 9, (void/*const*/  *)((char *)(& on)), sizeof(on));
    }
  }
// # 4689
  if (TCPwindowsize) {
// # 4690
    if ((int )(*mode_0) == 119) {
      {
// # 4690
      tmp_1 = 7;
      }
    } else {
      {
// # 4690
      tmp_1 = 8;
      }
    }
    {
// # 4690
    setsockopt(s, 1, tmp_1, (void/*const*/  *)((char *)(& TCPwindowsize)),
               sizeof(TCPwindowsize));
    }
  }
  {
// # 4693
  data_source.sin_family = (unsigned short )2;
// # 4694
  data_source.sin_addr = ctrl_addr.sin_addr;
// # 4699
  tries = 1;
  }
// # 4699
  while (1) {
    {
// # 4700
    tmp_2 = bind(s, (void/*const*/  *)((struct sockaddr *)(& data_source)),
                   sizeof(data_source));
    }
// # 4700
    if (tmp_2 >= 0) {
// # 4702
      break;
    }
    {
// # 4703
    tmp_3 = errno_location();
    }
// # 4703
    if ((*tmp_3) != 98) {
      goto bad;
    } else {
// # 4703
      if (tries > 10) {
        goto bad;
      }
    }
    {
// # 4705
    sleep((unsigned int )tries);
// # 4699
    tries ++;
    }
  }
  {
// # 4719
  seteuid(pw->pw_uid);
// # 4720
  enable_signaling();
// # 4723
  on = 8;
// # 4724
  tmp_4 = setsockopt(s, 0, 1, (void/*const*/  *)((char *)(& on)), sizeof(int ));
  }
// # 4724
  if (tmp_4 < 0) {
    {
// # 4725
    syslog(4, (char/*const*/  *)"setsockopt (IP_TOS): %m");
    }
  }
  {
// # 4739
  tmp_5 = fdopen(s, (char/*const*/  *)mode_0);
  {
// # 25 "spec.work"
  tmp_5->BLAST_FLAG = 1;
  {

  }
  }

  }
// # 4739 "ftpd.c"
  return (tmp_5);
  bad: 
  {
// # 4741
  tmp_6 = errno_location();
// # 4741
  on = (*tmp_6);
// # 4742
  seteuid(pw->pw_uid);
// # 4743
  enable_signaling();
  }
// # 4744
  if (s != -1) {
    {
// # 4745
    close(s);
    }
  }
  {
// # 4746
  tmp_7 = errno_location();
// # 4746
  (*tmp_7) = on;
  }
// # 4747
  return ((FILE *)((void *)0));
}
}
// # 4750
FILE *dataconn(char *name , off_t size , char *mode_0 ) 
{ char sizebuf[32] ;
  FILE *file ;
  int retry ;
  int on ;
  int tos ;
  struct sockaddr_in from ;
  char dataaddr[64] ;
  int fromlen ;
  int s ;
  int rv ;
  int tmp ;
  struct timeval timeout ;
  fd_set set ;
  unsigned int i ;
  fd_set *arr ;
  int *tmp_0 ;
  char/*const*/  *   tmp_1 ;
  char *tmp_2 ;
  int tmp_3 ;
  int tmp_4 ;
  char/*const*/  *tmp_5 ;
  FILE *tmp_6 ;
  FILE *tmp_7 ;
  int *tmp_8 ;
  char *tmp_9 ;
  register unsigned short v ;
  register unsigned short x ;
  int tmp_10 ;
  char *tmp_11 ;
  int *tmp_12 ;
  int *tmp_13 ;
  int tmp_14 ;
  int tmp_15 ;
  char/*const*/  *tmp_16 ;

  {
  {
// # 4754
  retry = 0;
// # 4755
  on = 1;
// # 4764
  file_size = size;
// # 4765
  byte_count = 0L;
  }
// # 4766
  if (size != -1L) {
    {
// # 4767
    sprintf((char */*   */)(sizebuf),
            (char/*const*/  */*   */)((char/*const*/  *)" (%u bytes)"),
            size);
    }
  } else {
    {
// # 4769
    strcpy((char */*   */)(sizebuf),
           (char/*const*/  */*   */)((char/*const*/  *)""));
    }
  }
// # 4770
  if (pdata >= 0) {
    {
// # 4776
    fromlen = (int )sizeof(from);
    }
// # 4783
    if (keepalive) {
      {
// # 4784
      setsockopt(pdata, 1, 9, (void/*const*/  *)((char *)(& on)), sizeof(on));
      }
    }
// # 4785
    if (TCPwindowsize) {
// # 4786
      if ((int )(*mode_0) == 119) {
        {
// # 4786
        tmp = 7;
        }
      } else {
        {
// # 4786
        tmp = 8;
        }
      }
      {
// # 4786
      setsockopt(pdata, 1, tmp, (void/*const*/  *)((char *)(& TCPwindowsize)),
                 sizeof(TCPwindowsize));
      }
    }
// # 4789
    while (1) {
// # 4793
      while (1) {
        {
// # 4793
        arr = & set;
// # 4793
        i = 0U;
        }
// # 4793
        while (i < sizeof(fd_set ) / sizeof(fd_mask )) {
          {
// # 4793
          arr->fds_bits[i] = 0L;
// # 4793
          i ++;
          }
        }
// # 4793
        break;
      }
      {
// # 4794
      set.fds_bits[(unsigned int )pdata / (8U * sizeof(fd_mask ))] |= 1L <<
                                                                          (unsigned int )pdata %
                                                                          (8U *
                                                                           sizeof(fd_mask ));
// # 4796
      timeout.tv_usec = 0L;
// # 4797
      timeout.tv_sec = (long )timeout_accept;
// # 4801
      rv = select(pdata + 1, (fd_set */*   */)(& set),
                  (fd_set */*   */)((fd_set *)0),
                  (fd_set */*   */)((fd_set *)0),
                  (struct timeval */*   */)(& timeout));
      }
// # 4789
      if (rv == -1) {
        {
// # 4789
        tmp_0 = errno_location();
        }
// # 4789
        if (! ((*tmp_0) == 4)) {
// # 4789
          break;
        }
      } else {
// # 4789
        break;
      }
    }
// # 4805
    if (rv != -1) {
// # 4805
      if (rv != 0) {
        {
// # 4806
        s = accept(pdata,
                   (void */*   */)((void *)((struct sockaddr *)(& from))),
                   (socklen_t */*   */)((socklen_t *)(& fromlen)));
        }
      } else {
        {
// # 4808
        s = -1;
        }
      }
    } else {
      {
// # 4808
      s = -1;
      }
    }
// # 4815
    if (s == -1) {
      {
// # 4816
      reply(425, "Can\'t open data connection.");
// # 4817
      close(pdata);
// # 4818
      pdata = -1;
      }
// # 4819
      return ((FILE *)((void *)0));
    }
    {
// # 4821
    close(pdata);
// # 4822
    pdata = s;
// # 4824
    tos = 16;
// # 4825
    setsockopt(s, 0, 1, (void/*const*/  *)((char *)(& tos)), sizeof(int ));
// # 4829
    tmp_1 = (char/*const*/  */*   */)inet_ntoa(from.sin_addr);
// # 4829
    strncpy((char */*   */)(dataaddr), tmp_1, sizeof(dataaddr));
// # 4830
    tmp_4 = pasv_allowed(dataaddr);
    }
// # 4830
    if (! tmp_4) {
      {
// # 4831
      tmp_3 = strcasecmp((char/*const*/  *)(dataaddr),
                           (char/*const*/  *)(remoteaddr));
      }
// # 4831
      if (tmp_3 != 0) {
// # 4845
        if (anonymous) {
          {
// # 4845
          tmp_2 = guestpw;
          }
        } else {
          {
// # 4845
          tmp_2 = pw->pw_name;
          }
        }
        {
// # 4845
        syslog(5, (char/*const*/  *)"%s of %s: data connect from %s for %s%s",
               tmp_2, remoteident, dataaddr, name, sizebuf);
        }
      }
    }
// # 4859
    if (type == 1) {
      {
// # 4859
      tmp_5 = (char/*const*/  *)"ASCII";
      }
    } else {
      {
// # 4859
      tmp_5 = (char/*const*/  *)"BINARY";
      }
    }
    {
// # 4859
    reply(150, "Opening %s mode data connection for %s%s.", tmp_5, name,
          sizebuf);
// # 4861
    tmp_6 = fdopen(pdata, (char/*const*/  *)mode_0);
    {
// # 25 "spec.work"
    tmp_6->BLAST_FLAG = 1;
    {

    }
    }

    }
// # 4861 "ftpd.c"
    return (tmp_6);
  }
// # 4863
  if (data >= 0) {
    {
// # 4864
    reply(125, "Using existing data connection for %s%s.", name, sizebuf);
// # 4866
    usedefault = 1;
// # 4867
    tmp_7 = fdopen(data, (char/*const*/  *)mode_0);
    {
// # 25 "spec.work"
    tmp_7->BLAST_FLAG = 1;
    {

    }
    }

    }
// # 4867 "ftpd.c"
    return (tmp_7);
  }
// # 4869
  if (usedefault) {
    {
// # 4870
    data_dest = his_addr;
    }
  }
// # 4871
  if ((int )data_dest.sin_port == 0) {
    {
// # 4872
    reply(500, "Can\'t build data connection: no PORT specified");
    }
// # 4873
    return ((FILE *)((void *)0));
  }
  {
// # 4875
  usedefault = 1;
// # 4876
  file = getdatasock(mode_0);
  }
// # 4877
  if ((unsigned int )file == (unsigned int )((void *)0)) {
    {
// # 4878
    tmp_8 = errno_location();
// # 4878
    tmp_9 = strerror((*tmp_8));
// # 4880
    x = data_source.sin_port;
// # 4880
    tmp_10 = __builtin_constant_p((int )x);
    }
// # 4880
    if (tmp_10) {
      {
// # 4880
      v = (unsigned short )((((int )x >> 8) & 255) |
                              (((int )x & 255) << 8));
      }
    } else {
      {
// # 4880
      asm  ("rorw $8, %w0": "=r" (v): "0" (x): "cc");
      }
    }
    {
// # 4880
    tmp_11 = inet_ntoa(data_source.sin_addr);
// # 4880
    reply(425, "Can\'t create data socket (%s,%d): %s.", tmp_11, v, tmp_9);
    }
// # 4881
    return ((FILE *)((void *)0));
  }
  {
// # 4883
  data = fileno(file);
// # 4884
  signal(14, & alarm_signal);
// # 4885
  alarm(timeout_connect);
  }
// # 4886
  while (1) {
    {
// # 4886
    tmp_14 = connect(data, (void/*const*/  *)((struct sockaddr *)(& data_dest)),
                       sizeof(data_dest));
    }
// # 4886
    if (! (tmp_14 < 0)) {
// # 4886
      break;
    }
    {
// # 4888
    alarm(0U);
// # 4889
    tmp_12 = errno_location();
    }
// # 4889
    if ((*tmp_12) == 98) {
      goto _L;
    } else {
      {
// # 4889
      tmp_13 = errno_location();
      }
// # 4889
      if ((*tmp_13) == 4) {
        _L: 
// # 4889
        if (retry < swaitmax) {
          {
// # 4890
          sleep((unsigned int )swaitint);
// # 4891
          retry += swaitint;
// # 4892
          signal(14, & alarm_signal);
// # 4893
          alarm(timeout_connect);
          }
// # 4894
          continue;
        }
      }
    }
    {
// # 4896
    perror_reply(425, "Can\'t build data connection");
    {
// # 96 "spec.work"
    if (file->BLAST_FLAG == 1) {
// # 97
      file->BLAST_FLAG = 0;
    } else {
// # 98
      error__();
    }
    {

    }
    }
// # 4897 "ftpd.c"
    fclose(file);
// # 4898
    data = -1;
    }
// # 4899
    return ((FILE *)((void *)0));
  }
  {
// # 4901
  alarm(0U);
  }
// # 4902
  if (keepalive) {
    {
// # 4903
    setsockopt(pdata, 1, 9, (void/*const*/  *)((char *)(& on)), sizeof(on));
    }
  }
// # 4904
  if (TCPwindowsize) {
// # 4905
    if ((int )(*mode_0) == 119) {
      {
// # 4905
      tmp_15 = 7;
      }
    } else {
      {
// # 4905
      tmp_15 = 8;
      }
    }
    {
// # 4905
    setsockopt(data, 1, tmp_15, (void/*const*/  *)((char *)(& TCPwindowsize)),
               sizeof(TCPwindowsize));
    }
  }
// # 4916
  if (type == 1) {
    {
// # 4916
    tmp_16 = (char/*const*/  *)"ASCII";
    }
  } else {
    {
// # 4916
    tmp_16 = (char/*const*/  *)"BINARY";
    }
  }
  {
// # 4916
  reply(150, "Opening %s mode data connection for %s%s.", tmp_16, name,
        sizebuf);
  }
// # 4918
  return (file);
}
}
// # 4934
static char *buf_0  ;
// # 4926
int send_data(FILE *instr , FILE *outstr , off_t blksize ) 
{ register int c ;
  register int cnt ;
  int netfd ;
  int filefd ;
  int tmp ;
  int tmp_0 ;
  int tmp_1 ;
  int tmp_2 ;
  ssize_t tmp_4 ;

  {
  {
// # 4933
  cnt = 0;
// # 4946
  buf_0 = (char *)((void *)0);
// # 4947
  tmp = sigsetjmp(urgcatch, 1);
  }
// # 4947
  if (tmp) {
    {
// # 4948
    draconian_FILE = (FILE *)((void *)0);
// # 4949
    alarm(0U);
// # 4950
    transflag = 0;
    }
// # 4951
    if (buf_0) {
      {
// # 4952
      free((void *)buf_0);
      }
    }
    {
// # 4953
    retrieve_is_data = 1;
    }
// # 4954
    return (0);
  }
  {
// # 4956
  transflag ++;
  }
// # 4957
  switch (type) {
  case 1: 
  {
// # 4960
  draconian_FILE = outstr;
// # 4961
  signal(14, & draconian_alarm_signal);
// # 4962
  alarm(timeout_data);
  }
// # 4963
  while (1) {
// # 4963
    if ((unsigned int )draconian_FILE != (unsigned int )((void *)0)) {
      {
// # 4963
      c = _IO_getc(instr);
      }
// # 4963
      if (! (c != -1)) {
// # 4963
        break;
      }
    } else {
// # 4963
      break;
    }
    {
// # 4964
    byte_count ++;
    }
// # 4964
    if (byte_count % 4096L == 0L) {
      {
// # 4965
      signal(14, & draconian_alarm_signal);
// # 4966
      alarm(timeout_data);
      }
    }
// # 4968
    if (c == 10) {
      {
// # 4969
      tmp_0 = ferror(outstr);
      }
// # 4969
      if (tmp_0) {
        goto data_err;
      }
      {
// # 4971
      _IO_putc((int )'\r', outstr);
      }
    }
    {
// # 4981
    _IO_putc(c, outstr);
    }
  }
// # 4991
  if ((unsigned int )draconian_FILE != (unsigned int )((void *)0)) {
    {
// # 4992
    signal(14, & draconian_alarm_signal);
// # 4993
    alarm(timeout_data);
    {
// # 40 "spec.work"
    if (! (outstr->BLAST_FLAG == 1)) {
// # 42
      error__();
    }
    {

    }
    }
// # 4994 "ftpd.c"
    fflush(outstr);
    }
  }
// # 4996
  if ((unsigned int )draconian_FILE != (unsigned int )((void *)0)) {
    {
// # 4997
    signal(14, & draconian_alarm_signal);
// # 4998
    alarm(timeout_data);
// # 4999
    socket_flush_wait(outstr);
    }
  }
  {
// # 5001
  transflag = 0;
// # 5002
  tmp_1 = ferror(instr);
  }
// # 5002
  if (tmp_1) {
    goto file_err;
  }
// # 5004
  if ((unsigned int )draconian_FILE == (unsigned int )((void *)0)) {
    goto data_err;
  } else {
    {
// # 5004
    tmp_2 = ferror(outstr);
    }
// # 5004
    if (tmp_2) {
      goto data_err;
    }
  }
  {
// # 5006
  draconian_FILE = (FILE *)((void *)0);
// # 5007
  alarm(0U);
// # 5008
  reply(226, "Transfer complete.");
// # 5017
  retrieve_is_data = 1;
  }
// # 5018
  return (1);
  case 3: 
  {

  }
  case 4: 
  {
// # 5026
  buf_0 = (char *)malloc((unsigned int )blksize);
  }
// # 5026
  if ((unsigned int )buf_0 == (unsigned int )((void *)0)) {
    {
// # 5027
    transflag = 0;
// # 5028
    perror_reply(451, "Local resource failure: malloc");
// # 5029
    retrieve_is_data = 1;
    }
// # 5030
    return (0);
  }
  {
// # 5032
  netfd = fileno(outstr);
// # 5033
  filefd = fileno(instr);
// # 5034
  draconian_FILE = outstr;
// # 5035
  signal(14, & draconian_alarm_signal);
// # 5036
  alarm(timeout_data);
  }
// # 5041
  while (1) {
// # 5041
    if ((unsigned int )draconian_FILE != (unsigned int )((void *)0)) {
      {
// # 5041
      cnt = read(filefd, (void *)buf_0, (unsigned int )blksize);
      }
// # 5041
      if (cnt > 0) {
        {
// # 5041
        tmp_4 = write(netfd, (void/*const*/  *)buf_0, (unsigned int )cnt);
        }
// # 5041
        if (! (tmp_4 == cnt)) {
// # 5041
          break;
        }
      } else {
// # 5041
        break;
      }
    } else {
// # 5041
      break;
    }
    {
// # 5042
    signal(14, & draconian_alarm_signal);
// # 5043
    alarm(timeout_data);
// # 5044
    byte_count += (long )cnt;
    }
  }
  {
// # 5071
  transflag = 0;
// # 5072
  free((void *)buf_0);
  }
// # 5073
  if ((unsigned int )draconian_FILE != (unsigned int )((void *)0)) {
    {
// # 5074
    signal(14, & draconian_alarm_signal);
// # 5075
    alarm(timeout_data);
// # 5076
    socket_flush_wait(outstr);
    }
  }
// # 5078
  if (cnt != 0) {
// # 5079
    if (cnt < 0) {
      goto file_err;
    }
    goto data_err;
  }
// # 5083
  if ((unsigned int )draconian_FILE == (unsigned int )((void *)0)) {
    goto data_err;
  }
  {
// # 5085
  draconian_FILE = (FILE *)((void *)0);
// # 5086
  alarm(0U);
// # 5087
  reply(226, "Transfer complete.");
// # 5096
  retrieve_is_data = 1;
  }
// # 5097
  return (1);
  default: 
  {
// # 5099
  transflag = 0;
// # 5100
  reply(550, "Unimplemented TYPE %d in send_data", type);
// # 5101
  retrieve_is_data = 1;
  }
// # 5102
  return (0);
  }
  data_err: 
  {
// # 5106
  draconian_FILE = (FILE *)((void *)0);
// # 5107
  alarm(0U);
// # 5108
  transflag = 0;
// # 5109
  perror_reply(426, "Data connection");
// # 5110
  retrieve_is_data = 1;
  }
// # 5111
  return (0);
  file_err: 
  {
// # 5114
  draconian_FILE = (FILE *)((void *)0);
// # 5115
  alarm(0U);
// # 5116
  transflag = 0;
// # 5117
  perror_reply(551, "Error on input file");
// # 5118
  retrieve_is_data = 1;
  }
// # 5119
  return (0);
}
}
// # 5131
static char *buf_1  ;
// # 5127
int receive_data(FILE *instr , FILE *outstr ) 
{ register int c ;
  int cnt ;
  int bare_lfs ;
  int netfd ;
  int filefd ;
  size_t buffer_size ;
  int tmp ;
  ssize_t tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;
  int tmp_4 ;

  {
  {
// # 5130
  cnt = 0;
// # 5130
  bare_lfs = 0;
// # 5136
  buffer_size = (unsigned int )8192;
// # 5139
  buf_1 = (char *)((void *)0);
// # 5140
  tmp = sigsetjmp(urgcatch, 1);
  }
// # 5140
  if (tmp) {
    {
// # 5141
    alarm(0U);
// # 5142
    transflag = 0;
    }
// # 5143
    if (buf_1) {
      {
// # 5144
      free((void *)buf_1);
      }
    }
// # 5145
    return (-1);
  }
  {
// # 5147
  transflag ++;
  }
// # 5148
  switch (type) {
  case 3: 
  {

  }
  case 4: 
  {
// # 5152
  buf_1 = (char *)malloc(buffer_size);
  }
// # 5152
  if ((unsigned int )buf_1 == (unsigned int )((void *)0)) {
    {
// # 5153
    transflag = 0;
// # 5154
    perror_reply(451, "Local resource failure: malloc");
    }
// # 5155
    return (-1);
  }
  {
// # 5157
  netfd = fileno(instr);
// # 5158
  filefd = fileno(outstr);
// # 5159
  draconian_FILE = instr;
// # 5160
  signal(14, & draconian_alarm_signal);
// # 5161
  alarm(timeout_data);
  }
// # 5162
  while (1) {
// # 5162
    if ((unsigned int )draconian_FILE != (unsigned int )((void *)0)) {
      {
// # 5162
      cnt = read(netfd, (void *)buf_1, buffer_size);
      }
// # 5162
      if (cnt > 0) {
        {
// # 5162
        tmp_1 = write(filefd, (void/*const*/  *)buf_1, (unsigned int )cnt);
        }
// # 5162
        if (! (tmp_1 == cnt)) {
// # 5162
          break;
        }
      } else {
// # 5162
        break;
      }
    } else {
// # 5162
      break;
    }
    {
// # 5163
    byte_count += (long )cnt;
// # 5170
    signal(14, & draconian_alarm_signal);
// # 5171
    alarm(timeout_data);
    }
  }
  {
// # 5173
  transflag = 0;
// # 5174
  free((void *)buf_1);
  }
// # 5175
  if (cnt != 0) {
// # 5176
    if (cnt < 0) {
      goto data_err;
    }
    goto file_err;
  }
// # 5180
  if ((unsigned int )draconian_FILE == (unsigned int )((void *)0)) {
    goto data_err;
  }
  {
// # 5182
  draconian_FILE = (FILE *)((void *)0);
// # 5183
  alarm(0U);
  }
// # 5190
  return (0);
  case 2: 
  {
// # 5193
  reply(553, "TYPE E not implemented.");
// # 5194
  transflag = 0;
  }
// # 5195
  return (-1);
  case 1: 
  {
// # 5198
  draconian_FILE = instr;
// # 5199
  signal(14, & draconian_alarm_signal);
// # 5200
  alarm(timeout_data);
  }
// # 5201
  while (1) {
// # 5201
    if ((unsigned int )draconian_FILE != (unsigned int )((void *)0)) {
      {
// # 5201
      c = _IO_getc(instr);
      }
// # 5201
      if (! (c != -1)) {
// # 5201
        break;
      }
    } else {
// # 5201
      break;
    }
    {
// # 5202
    byte_count ++;
    }
// # 5202
    if (byte_count % 4096L == 0L) {
      {
// # 5203
      signal(14, & draconian_alarm_signal);
// # 5204
      alarm(timeout_data);
      }
    }
// # 5206
    if (c == 10) {
      {
// # 5207
      bare_lfs ++;
      }
    }
// # 5208
    while (c == 13) {
      {
// # 5209
      tmp_2 = ferror(outstr);
      }
// # 5209
      if (tmp_2) {
        goto file_err;
      }
      {
// # 5211
      signal(14, & draconian_alarm_signal);
// # 5212
      alarm(timeout_data);
      }
// # 5213
      if ((unsigned int )draconian_FILE != (unsigned int )((void *)0)) {
        {
// # 5213
        c = _IO_getc(instr);
        }
// # 5213
        if (c != 10) {
          {
// # 5214
          _IO_putc((int )'\r', outstr);
          }
// # 5221
          if (c == -1) {
            goto contin2;
          }
          {
// # 5223
          byte_count ++;
          }
// # 5223
          if (byte_count % 4096L == 0L) {
            {
// # 5224
            signal(14, & draconian_alarm_signal);
// # 5225
            alarm(timeout_data);
            }
          }
        }
      }
    }
    {
// # 5229
    _IO_putc(c, outstr);
    }
    contin2: 
    {

    }
  }
  {

  {
// # 40 "spec.work"
  if (! (outstr->BLAST_FLAG == 1)) {
// # 42
    error__();
  }
  {

  }
  }
// # 5238 "ftpd.c"
  fflush(outstr);
  }
// # 5239
  if ((unsigned int )draconian_FILE == (unsigned int )((void *)0)) {
    goto data_err;
  } else {
    {
// # 5239
    tmp_3 = ferror(instr);
    }
// # 5239
    if (tmp_3) {
      goto data_err;
    }
  }
  {
// # 5241
  tmp_4 = ferror(outstr);
  }
// # 5241
  if (tmp_4) {
    goto file_err;
  }
  {
// # 5243
  transflag = 0;
// # 5244
  draconian_FILE = (FILE *)((void *)0);
// # 5245
  alarm(0U);
  }
// # 5246
  if (bare_lfs) {
    {
// # 5247
    lreply(226, "WARNING! %d bare linefeeds received in ASCII mode", bare_lfs);
// # 5248
    lreply(0, "   File may not have transferred correctly.");
    }
  }
// # 5256
  return (0);
  default: 
  {
// # 5258
  reply(550, "Unimplemented TYPE %d in receive_data", type);
// # 5259
  transflag = 0;
  }
// # 5260
  return (-1);
  }
  data_err: 
  {
// # 5264
  draconian_FILE = (FILE *)((void *)0);
// # 5265
  alarm(0U);
// # 5266
  transflag = 0;
// # 5267
  perror_reply(426, "Data Connection");
  }
// # 5268
  return (-1);
  file_err: 
  {
// # 5271
  draconian_FILE = (FILE *)((void *)0);
// # 5272
  alarm(0U);
// # 5273
  transflag = 0;
// # 5274
  perror_reply(452, "Error writing file");
  }
// # 5275
  return (-1);
}
}
// # 5278
void statfilecmd(char *filename ) 
{ char line_0[8192] ;
  char *ptr ;
  FILE *fin ;
  char *tmp ;

  {
  {
// # 5286
  fixpath(filename);
  }
// # 5287
  if ((int )(*(filename + 0)) == 0) {
    {
// # 5288
    filename = ".";
    }
  }
// # 5290
  if (anonymous) {
// # 5290
    if (dolreplies) {
      {
// # 5291
      snprintf((char */*   */)(line_0), sizeof(line_0),
               (char/*const*/  */*   */)((char/*const*/  *)(ls_long)),
               filename);
      }
    } else {
      {
// # 5293
      snprintf((char */*   */)(line_0), sizeof(line_0),
               (char/*const*/  */*   */)((char/*const*/  *)(ls_short)),
               filename);
      }
    }
  } else {
    {
// # 5293
    snprintf((char */*   */)(line_0), sizeof(line_0),
             (char/*const*/  */*   */)((char/*const*/  *)(ls_short)),
             filename);
    }
  }
  {
// # 5294
  fin = ftpd_popen(line_0, "r", 0);
// # 5296
  lreply(213, "status of %s:", filename);
  }
// # 5317
  while (1) {
    {

    {
// # 32 "spec.work"
    if (! (fin->BLAST_FLAG == 1)) {
// # 34
      error__();
    }
    {

    }
    }
// # 5317 "ftpd.c"
    tmp = fgets((char */*   */)(line_0), (int )sizeof(line_0),
                (FILE */*   */)fin);
    }
// # 5317
    if (! ((unsigned int )tmp != (unsigned int )((void *)0))) {
// # 5317
      break;
    }
    {
// # 5318
    ptr = strchr((char/*const*/  *)(line_0), (int )'\n');
    }
// # 5318
    if (ptr) {
      {
// # 5319
      (*ptr) = '\0';
      }
    }
    {
// # 5320
    lreply(0, "%s", line_0);
    }
  }
  {
// # 5322
  ftpd_pclose(fin);
// # 5326
  reply(213, "End of Status");
  }
// # 5327
  return;
}
}
// # 5329
void statcmd(void) 
{ struct sockaddr_in *sin ;
  u_char *a ;
  u_char *p ;
  char *tmp ;
  int tmp_0 ;
  char/*const*/  *tmp_1 ;
  char/*const*/  *tmp_2 ;
  char/*const*/  *tmp_3 ;

  {
  {
// # 5334
  lreply(211, "%s FTP server status:", hostname);
// # 5335
  lreply(0, "     %s", version);
// # 5336
  tmp_0 = _get__ctype_b((int )remotehost[0]);
  }
// # 5336
  if (tmp_0 & 2048) {
    {
// # 5340
    lreply(0, "     Connected to %s", remotehost);
    }
  } else {
    {
// # 5337
    tmp = inet_ntoa(his_addr.sin_addr);
// # 5337
    lreply(0, "     Connected to %s (%s)", remotehost, tmp);
    }
  }
// # 5342
  if (logged_in) {
// # 5343
    if (anonymous) {
      {
// # 5344
      lreply(0, "     Logged in anonymously");
      }
    } else {
      {
// # 5346
      lreply(0, "     Logged in as %s", pw->pw_name);
      }
    }
  } else {
// # 5348
    if (askpasswd) {
      {
// # 5349
      lreply(0, "     Waiting for password");
      }
    } else {
      {
// # 5351
      lreply(0, "     Waiting for user name");
      }
    }
  }
// # 5353
  if (type == 4) {
    {
// # 5355
    lreply(0, "     TYPE: %s %d; STRUcture: %s; transfer MODE: %s",
           typenames[type], 8, strunames[stru], modenames[mode]);
    }
  } else {
// # 5362
    if (type == 1) {
      {
// # 5362
      tmp_1 = (char/*const*/  *)formnames[form];
      }
    } else {
// # 5362
      if (type == 2) {
        {
// # 5362
        tmp_1 = (char/*const*/  *)formnames[form];
        }
      } else {
        {
// # 5362
        tmp_1 = (char/*const*/  *)"";
        }
      }
    }
// # 5362
    if (type == 1) {
      {
// # 5362
      tmp_2 = (char/*const*/  *)", FORM: ";
      }
    } else {
// # 5362
      if (type == 2) {
        {
// # 5362
        tmp_2 = (char/*const*/  *)", FORM: ";
        }
      } else {
        {
// # 5362
        tmp_2 = (char/*const*/  *)"";
        }
      }
    }
    {
// # 5362
    lreply(0, "     TYPE: %s%s%s; STRUcture: %s; transfer MODE: %s",
           typenames[type], tmp_2, tmp_1, strunames[stru], modenames[mode]);
    }
  }
// # 5366
  if (data != -1) {
    {
// # 5367
    lreply(0, "     Data connection open");
    }
  } else {
// # 5368
    if (pdata != -1) {
      goto _L;
    } else {
// # 5368
      if (usedefault == 0) {
        _L: 
// # 5369
        if (usedefault == 0) {
          {
// # 5370
          sin = & data_dest;
          }
        } else {
// # 5371
          if (route_vectored) {
            {
// # 5372
            sin = & vect_addr;
            }
          } else {
            {
// # 5374
            sin = & pasv_addr;
            }
          }
        }
        {
// # 5375
        a = (u_char *)(& sin->sin_addr);
// # 5376
        p = (u_char *)(& sin->sin_port);
        }
// # 5378
        if (usedefault == 0) {
          {
// # 5378
          tmp_3 = (char/*const*/  *)"PORT";
          }
        } else {
          {
// # 5378
          tmp_3 = (char/*const*/  *)"in Passive mode";
          }
        }
        {
// # 5378
        lreply(0, "     %s (%d,%d,%d,%d,%d,%d)", tmp_3,
               (int )(*(a + 0)) & 255, (int )(*(a + 1)) & 255,
               (int )(*(a + 2)) & 255, (int )(*(a + 3)) & 255,
               (int )(*(p + 0)) & 255, (int )(*(p + 1)) & 255);
        }
      } else {
        {
// # 5384
        lreply(0, "     No data connection");
        }
      }
    }
  }
  {
// # 5393
  reply(211, "End of status");
  }
// # 5394
  return;
}
}
// # 5396
void fatal(char *s ) 
{ 

  {
  {
// # 5398
  reply(451, "Error in server: %s\n", s);
// # 5399
  reply(221, "Closing connection due to server error.");
// # 5400
  dologout(0);
  }
// # 5402
  return;
}
}
// # 5407
void vreply(long flags , int n , char *fmt , __ccured_va_list ap ) 
{ char buf_2[8192] ;
  int tmp ;
  unsigned int tmp_0 ;
  int tmp_1 ;
  unsigned int tmp_2 ;
  int tmp_3 ;
  FILE *tmp_4 ;

  {
  {
// # 5411
  flags &= 6L;
  }
// # 5413
  if (n) {
// # 5414
    if (flags & 4L) {
      {
// # 5414
      tmp = (int )'-';
      }
    } else {
      {
// # 5414
      tmp = (int )' ';
      }
    }
    {
// # 5414
    sprintf((char */*   */)(buf_2),
            (char/*const*/  */*   */)((char/*const*/  *)"%03d%c"), n, tmp);
    }
  }
// # 5419
  if (flags & 2L) {
// # 5420
    if (n) {
      {
// # 5420
      tmp_0 = sizeof(buf_2) - 4U;
      }
    } else {
      {
// # 5420
      tmp_0 = sizeof(buf_2);
      }
    }
// # 5420
    if (n) {
      {
// # 5420
      tmp_1 = 4;
      }
    } else {
      {
// # 5420
      tmp_1 = 0;
      }
    }
    {
// # 5420
    snprintf((char */*   */)(buf_2 + tmp_1), tmp_0,
             (char/*const*/  */*   */)((char/*const*/  *)"%s"), fmt);
    }
  } else {
// # 5422
    if (n) {
      {
// # 5422
      tmp_2 = sizeof(buf_2) - 4U;
      }
    } else {
      {
// # 5422
      tmp_2 = sizeof(buf_2);
      }
    }
// # 5422
    if (n) {
      {
// # 5422
      tmp_3 = 4;
      }
    } else {
      {
// # 5422
      tmp_3 = 0;
      }
    }
    {
// # 5422
    vsnprintf((char */*   */)(buf_2 + tmp_3), tmp_2,
              (char/*const*/  */*   */)((char/*const*/  *)fmt), ap);
    }
  }
// # 5424
  if (debug) {
    {
// # 5425
    syslog(7, (char/*const*/  *)"<--- %s", buf_2);
    }
  }
  {
// # 5432
  printf((char/*const*/  */*   */)((char/*const*/  *)"%s\r\n"), buf_2);
// # 5437
  tmp_4 = get_stdout();
  {
// # 113 "spec.work"
  tmp_4->BLAST_FLAG = 1;
  {

  }
  }

  {
// # 40
  if (! (tmp_4->BLAST_FLAG == 1)) {
// # 42
    error__();
  }
  {

  }
  }
// # 5437 "ftpd.c"
  fflush(tmp_4);
  }
// # 5438
  return;
}
}
// # 5440
void reply(int n , char *fmt  , ...) 
{ __ccured_va_list ap ;
  char *p ;
  char *ptr ;
  unsigned long tmp ;

  {
// # 5444
  if ((unsigned int )autospout != (unsigned int )((void *)0)) {
    {
// # 5445
    ptr = autospout;
    }
// # 5447
    while ((*ptr)) {
      {
// # 5448
      p = strchr((char/*const*/  *)ptr, (int )'\n');
      }
// # 5448
      if ((unsigned int )p != (unsigned int )((void *)0)) {
        {
// # 5449
        (*p) = '\0';
        }
      }
      {
// # 5452
      vreply(6L, n, ptr, ap);
      }
// # 5454
      if (p) {
        {
// # 5455
        ptr = p + 1;
        }
      } else {
// # 5457
        break;
      }
    }
// # 5460
    if (autospout_free) {
      {
// # 5461
      free((void *)autospout);
// # 5462
      autospout_free = 0;
      }
    }
    {
// # 5464
    autospout = (char *)0;
    }
  }
  {
// # 5467
  tmp = (unsigned long )GCC_STDARG_START();
// # 5467
  __ccured_va_start(ap, tmp);
// # 5470
  vreply(0L, n, fmt, ap);
// # 5472
  __ccured_va_end(ap);
  }
// # 5473
  return;
}
}
// # 5475
void lreply(int n , char *fmt  , ...) 
{ __ccured_va_list ap ;
  unsigned long tmp ;

  {
// # 5479
  if (! dolreplies) {
// # 5480
    return;
  }
  {
// # 5482
  tmp = (unsigned long )GCC_STDARG_START();
// # 5482
  __ccured_va_start(ap, tmp);
// # 5485
  vreply(4L, n, fmt, ap);
// # 5487
  __ccured_va_end(ap);
  }
// # 5488
  return;
}
}
// # 5490
void ack(char *s ) 
{ 

  {
  {
// # 5492
  reply(250, "%s command successful.", s);
  }
// # 5493
  return;
}
}
// # 5495
void nack(char *s ) 
{ 

  {
  {
// # 5497
  reply(502, "%s command not implemented.", s);
  }
// # 5498
  return;
}
}
// # 5500
void yyerror(char *s ) 
{ char *cp ;

  {
// # 5503
  if ((unsigned int )s == (unsigned int )((void *)0)) {
// # 5504
    return;
  } else {
// # 5503
    if (yyerrorcalled != 0) {
// # 5504
      return;
    }
  }
  {
// # 5505
  cp = strchr((char/*const*/  *)(cbuf), (int )'\n');
  }
// # 5505
  if ((unsigned int )cp != (unsigned int )((void *)0)) {
    {
// # 5506
    (*cp) = '\0';
    }
  }
  {
// # 5507
  reply(500, "\'%s\': command not understood.", cbuf);
// # 5508
  yyerrorcalled = 1;
  }
// # 5509
  return;
}
}
// # 5512
void delete(char *name ) 
{ struct stat st ;
  char realname[4096] ;
  int tmp ;
  int tmp_0 ;
  uid_t uid ;
  gid_t gid ;
  int d_mode ;
  int valid_0 ;
  int tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;
  char path[4096] ;

  {
  {
// # 5521
  wu_realpath((char/*const*/  *)name, realname, chroot_path);
// # 5523
  tmp = del_check(name);
  }
// # 5523
  if (tmp == 0) {
// # 5524
    if (log_security) {
// # 5525
      if (anonymous) {
        {
// # 5526
        syslog(5, (char/*const*/  *)"anonymous(%s) of %s tried to delete %s",
               guestpw, remoteident, realname);
        }
      } else {
        {
// # 5529
        syslog(5, (char/*const*/  *)"%s of %s tried to delete %s", pw->pw_name,
               remoteident, realname);
        }
      }
    }
// # 5531
    return;
  }
  {
// # 5534
  tmp_0 = lstatextinline((char/*const*/  *)name, & st);
  }
// # 5534
  if (tmp_0 < 0) {
    {
// # 5535
    perror_reply(550, name);
    }
// # 5536
    return;
  }
// # 5538
  if ((st.st_mode & 61440U) == 16384U) {
    {
// # 5547
    tmp_1 = dir_check(name, & uid, & gid, & d_mode, & valid_0);
    }
// # 5547
    if (tmp_1 <= 0) {
// # 5548
      if (log_security) {
// # 5549
        if (anonymous) {
          {
// # 5550
          syslog(5,
                 (char/*const*/  *)"anonymous(%s) of %s tried to delete directory %s",
                 guestpw, remoteident, realname);
          }
        } else {
          {
// # 5553
          syslog(5, (char/*const*/  *)"%s of %s tried to delete directory %s",
                 pw->pw_name, remoteident, realname);
          }
        }
      }
// # 5555
      return;
    }
    {
// # 5558
    tmp_2 = rmdir((char/*const*/  *)name);
    }
// # 5558
    if (tmp_2 < 0) {
// # 5559
      if (log_security) {
// # 5560
        if (anonymous) {
          {
// # 5561
          syslog(5,
                 (char/*const*/  *)"anonymous(%s) of %s tried to delete directory %s (permissions)",
                 guestpw, remoteident, realname);
          }
        } else {
          {
// # 5564
          syslog(5,
                 (char/*const*/  *)"%s of %s tried to delete directory %s (permissions)",
                 pw->pw_name, remoteident, realname);
          }
        }
      }
      {
// # 5566
      perror_reply(550, name);
      }
// # 5567
      return;
    }
    goto done;
  }
  {
// # 5571
  tmp_3 = unlink((char/*const*/  *)name);
  }
// # 5571
  if (tmp_3 < 0) {
// # 5572
    if (log_security) {
// # 5573
      if (anonymous) {
        {
// # 5574
        syslog(5,
               (char/*const*/  *)"anonymous(%s) of %s tried to delete %s (permissions)",
               guestpw, remoteident, realname);
        }
      } else {
        {
// # 5577
        syslog(5, (char/*const*/  *)"%s of %s tried to delete %s (permissions)",
               pw->pw_name, remoteident, realname);
        }
      }
    }
    {
// # 5579
    perror_reply(550, name);
    }
// # 5580
    return;
  }
  done: 
  {
// # 5586
  wu_realpath((char/*const*/  *)name, path, chroot_path);
  }
// # 5588
  if (log_security) {
// # 5589
    if ((st.st_mode & 61440U) == 16384U) {
// # 5590
      if (anonymous) {
        {
// # 5591
        syslog(5, (char/*const*/  *)"%s of %s deleted directory %s", guestpw,
               remoteident, path);
        }
      } else {
        {
// # 5594
        syslog(5, (char/*const*/  *)"%s of %s deleted directory %s", pw->pw_name,
               remoteident, path);
        }
      }
    } else {
// # 5597
      if (anonymous) {
        {
// # 5598
        syslog(5, (char/*const*/  *)"%s of %s deleted %s", guestpw, remoteident,
               path);
        }
      } else {
        {
// # 5602
        syslog(5, (char/*const*/  *)"%s of %s deleted %s", pw->pw_name,
               remoteident, path);
        }
      }
    }
  }
  {
// # 5607
  ack("DELE");
  }
// # 5608
  return;
}
}
// # 5610
void cwd(char *path ) 
{ struct aclmember *entry ;
  char cdpath_0[4097] ;
  int tmp ;
  int tmp_0 ;
  struct aclmember *tmp_1 ;
  int tmp_2 ;
  struct aclmember *tmp_3 ;
  int tmp_4 ;

  {
  {
// # 5612
  entry = (struct aclmember *)((void *)0);
// # 5615
  tmp_4 = chdir((char/*const*/  *)path);
  }
// # 5615
  if (tmp_4 < 0) {
// # 5617
    while (1) {
      {
// # 5617
      tmp_1 = getaclentry("alias", & entry);
      }
// # 5617
      if (tmp_1) {
// # 5617
        if (entry->arg[0]) {
// # 5617
          if (! ((unsigned int )entry->arg[1] != (unsigned int )((void *)0))) {
// # 5617
            break;
          }
        } else {
// # 5617
          break;
        }
      } else {
// # 5617
        break;
      }
      {
// # 5618
      tmp_0 = strcasecmp((char/*const*/  *)entry->arg[0], (char/*const*/  *)path);
      }
// # 5618
      if (! tmp_0) {
        {
// # 5619
        tmp = chdir((char/*const*/  *)entry->arg[1]);
        }
// # 5619
        if (tmp < 0) {
          {
// # 5620
          perror_reply(550, path);
          }
        } else {
          {
// # 5622
          show_message(250, 1);
// # 5623
          show_readme(250, 1);
// # 5624
          ack("CWD");
          }
        }
// # 5626
        return;
      }
    }
    {
// # 5630
    entry = (struct aclmember *)((void *)0);
    }
// # 5631
    while (1) {
      {
// # 5631
      tmp_3 = getaclentry("cdpath", & entry);
      }
// # 5631
      if (tmp_3) {
// # 5631
        if (! ((unsigned int )entry->arg[0] != (unsigned int )((void *)0))) {
// # 5631
          break;
        }
      } else {
// # 5631
        break;
      }
      {
// # 5632
      snprintf((char */*   */)(cdpath_0), sizeof(cdpath_0),
               (char/*const*/  */*   */)((char/*const*/  *)"%s/%s"),
               entry->arg[0], path);
// # 5633
      tmp_2 = chdir((char/*const*/  *)(cdpath_0));
      }
// # 5633
      if (tmp_2 >= 0) {
        {
// # 5634
        show_message(250, 1);
// # 5635
        show_readme(250, 1);
// # 5636
        ack("CWD");
        }
// # 5637
        return;
      }
    }
    {
// # 5640
    perror_reply(550, path);
    }
  } else {
    {
// # 5643
    show_message(250, 1);
// # 5644
    show_readme(250, 1);
// # 5645
    ack("CWD");
    }
  }
// # 5647
  return;
}
}
// # 5649
void makedir(char *name ) 
{ uid_t uid ;
  gid_t gid ;
  int d_mode ;
  mode_t oldumask ;
  int valid_0 ;
  uid_t oldid ;
  char path[4097] ;
  char realname[4096] ;
  int tmp ;
  int tmp_0 ;
  int *tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;
  int tmp_4 ;

  {
  {
// # 5660
  wu_realpath((char/*const*/  *)name, realname, chroot_path);
// # 5664
  tmp = dir_check(name, & uid, & gid, & d_mode, & valid_0);
  }
// # 5664
  if (tmp <= 0) {
// # 5665
    if (log_security) {
// # 5666
      if (anonymous) {
        {
// # 5667
        syslog(5,
               (char/*const*/  *)"anonymous(%s) of %s tried to create directory %s",
               guestpw, remoteident, realname);
        }
      } else {
        {
// # 5670
        syslog(5, (char/*const*/  *)"%s of %s tried to create directory %s",
               pw->pw_name, remoteident, realname);
        }
      }
    }
// # 5672
    return;
  }
  {
// # 5678
  tmp_0 = fn_check(name);
  }
// # 5678
  if (tmp_0 <= 0) {
// # 5679
    if (log_security) {
// # 5680
      if (anonymous) {
        {
// # 5681
        syslog(5,
               (char/*const*/  *)"anonymous(%s) of %s tried to create directory %s (path-filter)",
               guestpw, remoteident, realname);
        }
      } else {
        {
// # 5684
        syslog(5,
               (char/*const*/  *)"%s of %s tried to create directory %s (path-filter)",
               pw->pw_name, remoteident, realname);
        }
      }
    }
// # 5686
    return;
  }
  {
// # 5689
  oldumask = umask(0U);
  }
// # 5690
  if (valid_0 <= 0) {
    {
// # 5691
    d_mode = 511;
// # 5692
    umask(oldumask);
    }
  }
  {
// # 5695
  tmp_2 = mkdir((char/*const*/  *)name, (unsigned int )d_mode);
  }
// # 5695
  if (tmp_2 < 0) {
    {
// # 5696
    tmp_1 = errno_location();
    }
// # 5696
    if ((*tmp_1) == 17) {
// # 5697
      if (log_security) {
// # 5698
        if (anonymous) {
          {
// # 5699
          syslog(5,
                 (char/*const*/  *)"anonymous(%s) of %s tried to create directory %s (exists)",
                 guestpw, remoteident, realname);
          }
        } else {
          {
// # 5702
          syslog(5,
                 (char/*const*/  *)"%s of %s tried to create directory %s (exists)",
                 pw->pw_name, remoteident, realname);
          }
        }
      }
      {
// # 5704
      fb_realpath((char/*const*/  *)name, path);
// # 5705
      reply(521, "\"%s\" directory exists", path);
      }
    } else {
// # 5708
      if (log_security) {
// # 5709
        if (anonymous) {
          {
// # 5710
          syslog(5,
                 (char/*const*/  *)"anonymous(%s) of %s tried to create directory %s (permissions)",
                 guestpw, remoteident, realname);
          }
        } else {
          {
// # 5713
          syslog(5,
                 (char/*const*/  *)"%s of %s tried to create directory %s (permissions)",
                 pw->pw_name, remoteident, realname);
          }
        }
      }
      {
// # 5715
      perror_reply(550, name);
      }
    }
    {
// # 5717
    umask(oldumask);
    }
// # 5718
    return;
  }
  {
// # 5720
  umask(oldumask);
  }
// # 5721
  if (valid_0 > 0) {
    {
// # 5722
    oldid = geteuid();
    }
// # 5723
    if (uid != 0U) {
      {
// # 5724
      seteuid(uid);
      }
    }
// # 5725
    if (uid == 0U) {
      goto _L;
    } else {
      {
// # 5725
      tmp_4 = chown((char/*const*/  *)name, uid, gid);
      }
// # 5725
      if (tmp_4 < 0) {
        _L: 
        {
// # 5726
        delay_signaling();
// # 5727
        seteuid(0U);
// # 5728
        tmp_3 = chown((char/*const*/  *)name, uid, gid);
        }
// # 5728
        if (tmp_3 < 0) {
          {
// # 5729
          seteuid(oldid);
// # 5730
          enable_signaling();
// # 5731
          perror_reply(550, "chown");
          }
// # 5732
          return;
        }
        {
// # 5734
        seteuid(oldid);
// # 5735
        enable_signaling();
        }
      } else {
        {
// # 5738
        seteuid(oldid);
        }
      }
    }
  }
  {
// # 5740
  wu_realpath((char/*const*/  *)name, path, chroot_path);
  }
// # 5741
  if (log_security) {
// # 5742
    if (anonymous) {
      {
// # 5743
      syslog(5, (char/*const*/  *)"%s of %s created directory %s", guestpw,
             remoteident, path);
      }
    } else {
      {
// # 5746
      syslog(5, (char/*const*/  *)"%s of %s created directory %s", pw->pw_name,
             remoteident, path);
      }
    }
  }
  {
// # 5749
  fb_realpath((char/*const*/  *)name, path);
// # 5756
  reply(257, "\"%s\" new directory created.", path);
  }
// # 5757
  return;
}
}
// # 5759
void removedir(char *name ) 
{ uid_t uid ;
  gid_t gid ;
  int d_mode ;
  int valid_0 ;
  char realname[4096] ;
  int tmp ;
  int tmp_0 ;
  int *tmp_1 ;
  char path[4096] ;
  int tmp_2 ;

  {
  {
// # 5767
  wu_realpath((char/*const*/  *)name, realname, chroot_path);
// # 5773
  tmp = del_check(name);
  }
// # 5773
  if (tmp == 0) {
// # 5774
    return;
  }
  {
// # 5778
  tmp_0 = dir_check(name, & uid, & gid, & d_mode, & valid_0);
  }
// # 5778
  if (tmp_0 <= 0) {
// # 5779
    if (log_security) {
// # 5780
      if (anonymous) {
        {
// # 5781
        syslog(5,
               (char/*const*/  *)"anonymous(%s) of %s tried to remove directory %s",
               guestpw, remoteident, realname);
        }
      } else {
        {
// # 5784
        syslog(5, (char/*const*/  *)"%s of %s tried to remove directory %s",
               pw->pw_name, remoteident, realname);
        }
      }
    }
// # 5786
    return;
  }
  {
// # 5789
  tmp_2 = rmdir((char/*const*/  *)name);
  }
// # 5789
  if (tmp_2 < 0) {
    {
// # 5790
    tmp_1 = errno_location();
    }
// # 5790
    if ((*tmp_1) == 16) {
      {
// # 5791
      perror_reply(450, name);
      }
    } else {
// # 5793
      if (log_security) {
// # 5794
        if (anonymous) {
          {
// # 5795
          syslog(5,
                 (char/*const*/  *)"anonymous(%s) of %s tried to remove directory %s (permissions)",
                 guestpw, remoteident, realname);
          }
        } else {
          {
// # 5798
          syslog(5,
                 (char/*const*/  *)"%s of %s tried to remove directory %s (permissions)",
                 pw->pw_name, remoteident, realname);
          }
        }
      }
      {
// # 5800
      perror_reply(550, name);
      }
    }
  } else {
    {
// # 5806
    wu_realpath((char/*const*/  *)name, path, chroot_path);
    }
// # 5808
    if (log_security) {
// # 5809
      if (anonymous) {
        {
// # 5810
        syslog(5, (char/*const*/  *)"%s of %s deleted directory %s", guestpw,
               remoteident, path);
        }
      } else {
        {
// # 5813
        syslog(5, (char/*const*/  *)"%s of %s deleted directory %s", pw->pw_name,
               remoteident, path);
        }
      }
    }
    {
// # 5816
    ack("RMD");
    }
  }
// # 5818
  return;
}
}
// # 5820
void pwd(void) 
{ char path[4097] ;
  char rhome[4097] ;
  char *rpath ;
  int pathlen ;
  char *tmp ;

  {
  {
// # 5824
  rpath = path;
// # 5835
  tmp = getcwd(path, 4096U);
  }
// # 5835
  if ((unsigned int )tmp == (unsigned int )((char *)((void *)0))) {
    {
// # 5843
    fb_realpath((char/*const*/  *)".", path);
    }
  }
// # 5846
  if (restricted_user) {
    {
// # 5847
    fb_realpath((char/*const*/  *)home, rhome);
// # 5848
    pathlen = (int )strlen((char/*const*/  *)(rhome));
    }
// # 5849
    if (pathlen) {
// # 5849
      if ((int )rhome[pathlen - 1] == 47) {
        {
// # 5850
        pathlen --;
        }
      }
    }
    {
// # 5851
    rpath = rpath + pathlen;
    }
// # 5852
    if (! (*rpath)) {
      {
// # 5853
      strcpy((char */*   */)rpath,
             (char/*const*/  */*   */)((char/*const*/  *)"/"));
      }
    }
  }
  {
// # 5855
  reply(257, "\"%s\" is current directory.", rpath);
  }
// # 5856
  return;
}
}
// # 5858
char *renamefrom(char *name ) 
{ struct stat st ;
  int tmp ;

  {
  {
// # 5862
  tmp = lstatextinline((char/*const*/  *)name, & st);
  }
// # 5862
  if (tmp < 0) {
    {
// # 5863
    perror_reply(550, name);
    }
// # 5864
    return ((char *)0);
  }
  {
// # 5866
  reply(350, "File exists, ready for destination name");
  }
// # 5867
  return (name);
}
}
// # 5870
void renamecmd(char *from , char *to ) 
{ int allowed ;
  int tmp ;
  char realfrom[4096] ;
  char realto[4096] ;
  struct aclmember *entry ;
  int tmp_0 ;
  int tmp_1 ;
  struct aclmember *tmp_2 ;
  char frompath[4096] ;
  char topath[4096] ;
  int tmp_3 ;

  {
// # 5872
  if (anonymous) {
    {
// # 5872
    tmp = 0;
    }
  } else {
    {
// # 5872
    tmp = 1;
    }
  }
  {
// # 5872
  allowed = tmp;
// # 5875
  entry = (struct aclmember *)((void *)0);
// # 5879
  wu_realpath((char/*const*/  *)from, realfrom, chroot_path);
// # 5880
  wu_realpath((char/*const*/  *)to, realto, chroot_path);
// # 5884
  tmp_0 = fn_check(to);
  }
// # 5884
  if (tmp_0 == 0) {
// # 5885
    if (log_security) {
// # 5886
      if (anonymous) {
        {
// # 5887
        syslog(5,
               (char/*const*/  *)"anonymous(%s) of %s tried to rename %s to \"%s\" (path-filter)",
               guestpw, remoteident, realfrom, realto);
        }
      } else {
        {
// # 5890
        syslog(5,
               (char/*const*/  *)"%s of %s tried to rename %s to \"%s\" (path-filter)",
               pw->pw_name, remoteident, realfrom, realto);
        }
      }
    }
// # 5892
    return;
  }
// # 5899
  while (1) {
    {
// # 5899
    tmp_2 = getaclentry("rename", & entry);
    }
// # 5899
    if (tmp_2) {
// # 5899
      if (entry->arg[0]) {
// # 5899
        if (! ((unsigned int )entry->arg[1] != (unsigned int )((void *)0))) {
// # 5899
          break;
        }
      } else {
// # 5899
        break;
      }
    } else {
// # 5899
      break;
    }
    {
// # 5900
    tmp_1 = type_match(entry->arg[1]);
    }
// # 5900
    if (tmp_1) {
// # 5901
      if (anonymous) {
// # 5902
        if ((int )(*(entry->arg[0])) == 121) {
          {
// # 5903
          allowed = 1;
          }
        }
      } else {
// # 5905
        if ((int )(*(entry->arg[0])) == 110) {
          {
// # 5906
          allowed = 0;
          }
        }
      }
    }
  }
// # 5908
  if (! allowed) {
// # 5909
    if (log_security) {
// # 5910
      if (anonymous) {
        {
// # 5911
        syslog(5,
               (char/*const*/  *)"anonymous(%s) of %s tried to rename %s to %s",
               guestpw, remoteident, realfrom, realto);
        }
      } else {
        {
// # 5914
        syslog(5, (char/*const*/  *)"%s of %s tried to rename %s to %s",
               pw->pw_name, remoteident, realfrom, realto);
        }
      }
    }
    {
// # 5916
    reply(553, "%s: Permission denied on server. (rename)", from);
    }
// # 5917
    return;
  }
  {
// # 5937
  tmp_3 = rename((char/*const*/  *)from, (char/*const*/  *)to);
  }
// # 5937
  if (tmp_3 < 0) {
// # 5938
    if (log_security) {
// # 5939
      if (anonymous) {
        {
// # 5940
        syslog(5,
               (char/*const*/  *)"anonymous(%s) of %s tried to rename %s to %s",
               guestpw, remoteident, realfrom, realto);
        }
      } else {
        {
// # 5943
        syslog(5, (char/*const*/  *)"%s of %s tried to rename %s to %s",
               pw->pw_name, remoteident, realfrom, realto);
        }
      }
    }
    {
// # 5945
    perror_reply(550, "rename");
    }
  } else {
    {
// # 5951
    wu_realpath((char/*const*/  *)from, frompath, chroot_path);
// # 5952
    wu_realpath((char/*const*/  *)to, topath, chroot_path);
    }
// # 5954
    if (log_security) {
// # 5955
      if (anonymous) {
        {
// # 5956
        syslog(5, (char/*const*/  *)"%s of %s renamed %s to %s", guestpw,
               remoteident, frompath, topath);
        }
      } else {
        {
// # 5959
        syslog(5, (char/*const*/  *)"%s of %s renamed %s to %s", pw->pw_name,
               remoteident, frompath, topath);
        }
      }
    }
    {
// # 5962
    ack("RNTO");
    }
  }
// # 5964
  return;
}
}
// # 5966
void dolog(struct sockaddr_in *sin ) 
{ struct hostent *hp ;
  char *blah ;
  int tmp ;
  int n ;
  size_t tmp_0 ;
  size_t tmp_1 ;
  size_t tmp_3 ;

  {
  {
// # 5991
  hp = gethostbyaddr((void/*const*/  *)((char *)(& sin->sin_addr)),
                     sizeof(struct in_addr ), 2);
// # 5994
  blah = inet_ntoa(sin->sin_addr);
// # 5996
  strncpy((char */*   */)(remoteaddr),
          (char/*const*/  */*   */)((char/*const*/  *)blah),
          sizeof(remoteaddr));
// # 5998
  tmp = strcasecmp((char/*const*/  *)(remoteaddr), (char/*const*/  *)"0.0.0.0");
  }
// # 5998
  if (tmp) {
// # 6003
    if (hp) {
      {
// # 6004
      nameserved = 1;
// # 6005
      strncpy((char */*   */)(remotehost),
              (char/*const*/  */*   */)((char/*const*/  *)hp->h_name),
              sizeof(remotehost));
      }
    } else {
      {
// # 6008
      nameserved = 0;
// # 6009
      strncpy((char */*   */)(remotehost),
              (char/*const*/  */*   */)((char/*const*/  *)(remoteaddr)),
              sizeof(remotehost));
      }
    }
  } else {
    {
// # 5999
    nameserved = 1;
// # 6000
    strncpy((char */*   */)(remotehost),
            (char/*const*/  */*   */)((char/*const*/  *)"localhost"),
            sizeof(remotehost));
    }
  }
  {
// # 6021
  remotehost[sizeof(remotehost) - 1U] = '\0';
// # 6022
  sprintf((char */*   */)(proctitle),
          (char/*const*/  */*   */)((char/*const*/  *)"%s: connected"),
          remotehost);
// # 6023
  setproctitle((char/*const*/  *)"%s", proctitle);
// # 6025
  wu_authenticate();
// # 6029
  tmp_0 = strlen((char/*const*/  *)(remotehost));
// # 6029
  tmp_1 = strlen((char/*const*/  *)(remoteaddr));
  }
// # 6029
  if (authenticated) {
    {
// # 6029
    tmp_3 = strlen((char/*const*/  *)(authuser + 5));
    }
  } else {
    {
// # 6029
    tmp_3 = 0U;
    }
  }
  {
// # 6029
  n = (int )(((20U + tmp_0) + tmp_1) + tmp_3);
// # 6031
  remoteident = (char *)malloc((unsigned int )n);
  }
// # 6031
  if ((unsigned int )remoteident == (unsigned int )((void *)0)) {
    {
// # 6032
    syslog(3, (char/*const*/  *)"malloc: %m");
// # 6034
    exit(1);
    }
  } else {
// # 6037 "ftpd.c"
    if (authenticated) {
      {
// # 6038
      sprintf((char */*   */)remoteident,
              (char/*const*/  */*   */)((char/*const*/  *)"%s @ %s [%s]"),
              authuser, remotehost, remoteaddr);
      }
    } else {
      {
// # 6041
      sprintf((char */*   */)remoteident,
              (char/*const*/  */*   */)((char/*const*/  *)"%s [%s]"),
              remotehost, remoteaddr);
      }
    }
  }
// # 6053
  return;
}
}
// # 6057
void dologout(int status ) 
{ 

  {
  {
// # 6063
  transflag = 0;
// # 6069
  alarm(0U);
  }
// # 6071
  if (logged_in) {
    {
// # 6072
    delay_signaling();
// # 6073
    seteuid(0U);
    }
// # 6074
    if (wtmp_logging) {
      {
// # 6075
      wu_logwtmp(ttyline, pw->pw_name, remotehost, 0);
      }
    }
  }
// # 6077
  if (logging) {
    {
// # 6078
    syslog(6, (char/*const*/  *)"FTP session closed");
    }
  }
// # 6079
  if (xferlog) {
    {
// # 6080
    close(xferlog);
    }
  }
  {
// # 6081
  acl_remove();
// # 6082
  close(data);
// # 6083
  close(pdata);
// # 6088
  _exit(status);
  }
// # 6088
  return;
}
}
// # 6091
void myoob(int sig ) 
{ char *cp ;
  FILE *tmp ;
  char *tmp_0 ;
  int tmp_1 ;
  int tmp_2 ;

  {
// # 6096
  if (! transflag) {
    {
// # 6098
    signal(23, & myoob);
    }
// # 6100
    return;
  }
  {
// # 6102
  cp = tmpline;
// # 6103
  tmp = get_stdin();
  {
// # 121 "spec.work"
  tmp->BLAST_FLAG = 1;
  {

  }
  }
// # 6103 "ftpd.c"
  tmp_0 = wu_getline(cp, (int )(sizeof(tmpline) - 1U), tmp);
  }
// # 6103
  if ((unsigned int )tmp_0 == (unsigned int )((void *)0)) {
    {
// # 6104
    reply(221, "You could at least say goodbye.");
// # 6105
    dologout(0);
    }
  }
  {
// # 6107
  upper(cp);
// # 6108
  tmp_1 = strcasecmp((char/*const*/  *)cp, (char/*const*/  *)"ABOR\r\n");
  }
// # 6108
  if (tmp_1 == 0) {
    {
// # 6109
    tmpline[0] = '\0';
// # 6110
    reply(426, "Transfer aborted. Data connection closed.");
// # 6111
    reply(226, "Abort successful");
// # 6113
    signal(23, & myoob);
    }
// # 6115
    if (ftwflag > 0) {
      {
// # 6116
      ftwflag ++;
      }
// # 6117
      return;
    }
    {
// # 6119
    siglongjmp(urgcatch, 1);
    }
  }
  {
// # 6121
  tmp_2 = strcasecmp((char/*const*/  *)cp, (char/*const*/  *)"STAT\r\n");
  }
// # 6121
  if (tmp_2 == 0) {
    {
// # 6122
    tmpline[0] = '\0';
    }
// # 6123
    if (file_size != -1L) {
      {
// # 6124
      reply(213, "Status: %u of %u bytes transferred", byte_count, file_size);
      }
    } else {
      {
// # 6127
      reply(213, "Status: %u bytes transferred", byte_count);
      }
    }
  }
  {
// # 6130
  signal(23, & myoob);
  }
// # 6132
  return;
}
}
// # 6139
void passive(void) 
{ int len ;
  int bind_error ;
  int on ;
  register char *p ;
  register char *a ;
  int *port_array ;
  int *pasv_port_array ;
  int i ;
  int j ;
  int k ;
  unsigned int tmp ;
  int *tmp_0 ;
  int tmp_1 ;
  register unsigned short v ;
  register unsigned short x ;
  int tmp_2 ;
  int *tmp_3 ;
  int *tmp_4 ;
  int tmp_5 ;
  int tmp_6 ;
  char *s ;
  size_t tmp_7 ;
  char *tmp_8 ;
  int i_0 ;
  register unsigned short v_0 ;
  register unsigned short x_0 ;
  int tmp_9 ;
  char *s_0 ;
  size_t tmp_10 ;
  char *tmp_11 ;

  {
  {
// # 6147
  on = 1;
  }
// # 6152
  if (pdata > 0) {
    {
// # 6153
    close(pdata);
// # 6154
    pdata = -1;
    }
  }
// # 6156
  if (! logged_in) {
    {
// # 6157
    reply(530, "Login with USER first.");
    }
// # 6158
    return;
  }
  {
// # 6160
  pdata = socket(2, 1, 0);
  }
// # 6161
  if (pdata < 0) {
    {
// # 6162
    perror_reply(425, "Can\'t open passive connection");
    }
// # 6163
    return;
  }
// # 6165
  if (keepalive) {
    {
// # 6166
    setsockopt(pdata, 1, 9, (void/*const*/  *)((char *)(& on)), sizeof(on));
    }
  }
// # 6167
  if (TCPwindowsize) {
    {
// # 6168
    setsockopt(pdata, 1, 7, (void/*const*/  *)((char *)(& TCPwindowsize)),
               sizeof(TCPwindowsize));
// # 6169
    setsockopt(pdata, 1, 8, (void/*const*/  *)((char *)(& TCPwindowsize)),
               sizeof(TCPwindowsize));
    }
  }
  {
// # 6171
  pasv_addr = ctrl_addr;
// # 6172
  pasv_addr.sin_port = (unsigned short )0;
// # 6173
  delay_signaling();
// # 6174
  seteuid(0U);
// # 6176
  checkports();
  }
// # 6178
  if (passive_port_min == -1) {
    {
// # 6179
    passive_port_max = 65534;
// # 6180
    passive_port_min = 1024;
    }
  }
// # 6190
  if (passive_port_max < passive_port_min) {
    {
// # 6191
    seteuid(pw->pw_uid);
// # 6192
    enable_signaling();
    }
    goto pasv_error;
  }
  {
// # 6196
  i = (passive_port_max - passive_port_min) + 1;
// # 6198
  port_array = (int *)calloc((unsigned int )i, sizeof(int ));
  }
// # 6199
  if ((unsigned int )port_array == (unsigned int )((void *)0)) {
    {
// # 6200
    seteuid(pw->pw_uid);
// # 6201
    enable_signaling();
    }
    goto pasv_error;
  }
  {
// # 6205
  pasv_port_array = (int *)calloc((unsigned int )i, sizeof(int ));
  }
// # 6206
  if ((unsigned int )pasv_port_array == (unsigned int )((void *)0)) {
    {
// # 6207
    free((void *)port_array);
// # 6208
    seteuid(pw->pw_uid);
// # 6209
    enable_signaling();
    }
    goto pasv_error;
  }
// # 6213
  while (1) {
    {
// # 6214
    i --;
// # 6215
    (*(port_array + i)) = passive_port_min + i;
    }
// # 6213
    if (! (i > 0)) {
// # 6213
      break;
    }
  }
  {
// # 6218
  tmp = (unsigned int )time((time_t *)((void *)0));
// # 6218
  srand(tmp);
// # 6231
  bind_error = -1;
// # 6232
  tmp_0 = errno_location();
// # 6232
  (*tmp_0) = 98;
// # 6233
  i = 3;
  }
// # 6233
  while (1) {
// # 6233
    if (bind_error < 0) {
      {
// # 6233
      tmp_4 = errno_location();
      }
// # 6233
      if ((*tmp_4) == 98) {
// # 6233
        if (! (i > 0)) {
// # 6233
          break;
        }
      } else {
// # 6233
        break;
      }
    } else {
// # 6233
      break;
    }
    {
// # 6234
    j = (passive_port_max - passive_port_min) + 1;
    }
// # 6234
    while (1) {
// # 6234
      if (bind_error < 0) {
        {
// # 6234
        tmp_3 = errno_location();
        }
// # 6234
        if ((*tmp_3) == 98) {
// # 6234
          if (! (j > 0)) {
// # 6234
            break;
          }
        } else {
// # 6234
          break;
        }
      } else {
// # 6234
        break;
      }
// # 6235
      if (i == 3) {
        {
// # 6236
        tmp_1 = rand();
// # 6236
        k = (int )(((1.0 * (double )j) * (double )tmp_1) /
                   ((double )2147483647 + 1.0));
// # 6237
        (*(pasv_port_array + (j - 1))) = (*(port_array + k));
        }
// # 6238
        while (1) {
          {
// # 6238
          k ++;
          }
// # 6238
          if (! (k < j)) {
// # 6238
            break;
          }
          {
// # 6239
          (*(port_array + (k - 1))) = (*(port_array + k));
          }
        }
      }
      {
// # 6241
      x = (unsigned short )(*(pasv_port_array + (j - 1)));
// # 6241
      tmp_2 = __builtin_constant_p((int )x);
      }
// # 6241
      if (tmp_2) {
        {
// # 6241
        v = (unsigned short )((((int )x >> 8) & 255) |
                                (((int )x & 255) << 8));
        }
      } else {
        {
// # 6241
        asm  ("rorw $8, %w0": "=r" (v): "0" (x): "cc");
        }
      }
      {
// # 6241
      pasv_addr.sin_port = v;
// # 6242
      bind_error = bind(pdata,
                        (void/*const*/  *)((struct sockaddr *)(& pasv_addr)),
                        sizeof(pasv_addr));
// # 6234
      j --;
      }
    }
    {
// # 6233
    i --;
    }
  }
  {
// # 6246
  free((void *)pasv_port_array);
// # 6247
  free((void *)port_array);
  }
// # 6249
  if (bind_error < 0) {
    {
// # 6250
    seteuid(pw->pw_uid);
// # 6251
    enable_signaling();
    }
    goto pasv_error;
  }
  {
// # 6256
  seteuid(pw->pw_uid);
// # 6257
  enable_signaling();
// # 6258
  len = (int )sizeof(pasv_addr);
// # 6259
  tmp_5 = getsockname(pdata,
                        (void */*   */)((void *)((struct sockaddr *)(& pasv_addr))),
                        (socklen_t */*   */)((socklen_t *)(& len)));
  }
// # 6259
  if (tmp_5 < 0) {
    goto pasv_error;
  }
  {
// # 6261
  tmp_6 = listen(pdata, 1);
  }
// # 6261
  if (tmp_6 < 0) {
    goto pasv_error;
  }
  {
// # 6263
  usedefault = 1;
  }
// # 6264
  if (route_vectored) {
    {
// # 6265
    a = (char *)(& vect_addr.sin_addr);
    }
  } else {
    {
// # 6267
    a = (char *)(& pasv_addr.sin_addr);
    }
  }
  {
// # 6268
  p = (char *)(& pasv_addr.sin_port);
  }
// # 6272
  if (debug) {
    {
// # 6273
    tmp_7 = strlen((char/*const*/  *)remoteident);
// # 6273
    tmp_8 = (char *)calloc(128U + tmp_7, sizeof(char ));
// # 6273
    s = tmp_8;
    }
// # 6274
    if (s) {
      {
// # 6275
      x_0 = pasv_addr.sin_port;
// # 6275
      tmp_9 = __builtin_constant_p((int )x_0);
      }
// # 6275
      if (tmp_9) {
        {
// # 6275
        v_0 = (unsigned short )((((int )x_0 >> 8) & 255) |
                                    (((int )x_0 & 255) << 8));
        }
      } else {
        {
// # 6275
        asm  ("rorw $8, %w0": "=r" (v_0): "0" (x_0): "cc");
        }
      }
      {
// # 6275
      i_0 = (int )v_0;
// # 6276
      sprintf((char */*   */)s,
              (char/*const*/  */*   */)((char/*const*/  *)"PASV port %i assigned to %s"),
              i_0, remoteident);
// # 6277
      syslog(7, (char/*const*/  *)"%s", s);
// # 6278
      free((void *)s);
      }
    }
  }
  {
// # 6281
  reply(227, "Entering Passive Mode (%d,%d,%d,%d,%d,%d)",
        (int )(*(a + 0)) & 255, (int )(*(a + 1)) & 255, (int )(*(a + 2)) & 255,
        (int )(*(a + 3)) & 255, (int )(*(p + 0)) & 255, (int )(*(p + 1)) & 255);
  }
// # 6283
  return;
  pasv_error: 
  {
// # 6286
  close(pdata);
// # 6287
  pdata = -1;
  }
// # 6288
  if (debug) {
    {
// # 6289
    tmp_10 = strlen((char/*const*/  *)remoteident);
// # 6289
    tmp_11 = (char *)calloc(128U + tmp_10, sizeof(char ));
// # 6289
    s_0 = tmp_11;
    }
// # 6290
    if (s_0) {
      {
// # 6291
      sprintf((char */*   */)s_0,
              (char/*const*/  */*   */)((char/*const*/  *)"PASV port assignment assigned for %s"),
              remoteident);
// # 6292
      syslog(7, (char/*const*/  *)"%s", s_0);
// # 6293
      free((void *)s_0);
      }
    }
  }
  {
// # 6296
  perror_reply(425, "Can\'t open passive connection");
  }
// # 6297
  return;
}
}
// # 6306
static char new[4096]  ;
// # 6304
char *gunique(char *local ) 
{ struct stat st ;
  char *cp ;
  char *tmp ;
  int count ;
  char/*const*/  *tmp_0 ;
  char/*const*/  *tmp_1 ;
  int tmp_2 ;
  size_t tmp_3 ;
  char *tmp_4 ;
  char *tmp_5 ;
  int tmp_6 ;

  {
  {
// # 6308
  tmp = strrchr((char/*const*/  *)local, (int )'/');
// # 6308
  cp = tmp;
// # 6309
  count = 0;
  }
// # 6311
  if (cp) {
    {
// # 6312
    (*cp) = '\0';
    }
  }
// # 6313
  if (cp) {
    {
// # 6313
    tmp_1 = (char/*const*/  *)local;
    }
  } else {
    {
// # 6313
    tmp_1 = (char/*const*/  *)".";
    }
  }
  {
// # 6313
  tmp_2 = statextinline(tmp_1, & st);
  }
// # 6313
  if (tmp_2 < 0) {
// # 6314
    if (cp) {
      {
// # 6314
      tmp_0 = (char/*const*/  *)local;
      }
    } else {
      {
// # 6314
      tmp_0 = (char/*const*/  *)".";
      }
    }
    {
// # 6314
    perror_reply(553, (char *)tmp_0);
    }
// # 6315
    return ((char *)0);
  }
// # 6317
  if (cp) {
    {
// # 6318
    (*cp) = '/';
    }
  }
  {
// # 6319
  strncpy((char */*   */)(new),
          (char/*const*/  */*   */)((char/*const*/  *)local),
          sizeof(new) - 3U);
// # 6320
  new[sizeof(new) - 3U] = '\0';
// # 6321
  tmp_3 = strlen((char/*const*/  *)(new));
// # 6321
  cp = new + tmp_3;
// # 6322
  tmp_4 = cp;
// # 6322
  cp ++;
// # 6322
  (*tmp_4) = '.';
// # 6323
  count = 1;
  }
// # 6323
  while (count < 100) {
// # 6324
    if (count == 10) {
      {
// # 6325
      cp -= 2;
// # 6326
      tmp_5 = cp;
// # 6326
      cp ++;
// # 6326
      (*tmp_5) = '.';
      }
    }
    {
// # 6328
    sprintf((char */*   */)cp,
            (char/*const*/  */*   */)((char/*const*/  *)"%d"), count);
// # 6329
    tmp_6 = statextinline((char/*const*/  *)(new), & st);
    }
// # 6329
    if (tmp_6 < 0) {
// # 6330
      return (new);
    }
    {
// # 6323
    count ++;
    }
  }
  {
// # 6332
  reply(452, "Unique file name cannot be created.");
  }
// # 6333
  return ((char *)0);
}
}
// # 6338
void perror_reply(int code , char *string ) 
{ size_t len ;
  size_t tmp ;
  int tmp_0 ;
  int *tmp_1 ;
  char *tmp_2 ;

  {
// # 6344
  if (restricted_user) {
// # 6344
    if ((unsigned int )home != (unsigned int )((void *)0)) {
// # 6344
      if ((int )(*(home + 0)) != 0) {
        {
// # 6345
        tmp = strlen((char/*const*/  *)home);
// # 6345
        len = tmp;
// # 6346
        tmp_0 = strncmp((char/*const*/  *)home, (char/*const*/  *)string, len);
        }
// # 6346
        if (tmp_0 == 0) {
// # 6347
          if ((int )(*(string + (len - 1U))) == 47) {
            {
// # 6348
            string += len - 1U;
            }
          } else {
// # 6349
            if ((int )(*(string + len)) == 47) {
              {
// # 6350
              string += len;
              }
            } else {
// # 6351
              if ((int )(*(string + len)) == 0) {
                {
// # 6352
                string = "/";
                }
              }
            }
          }
        }
      }
    }
  }
  {
// # 6355
  tmp_1 = errno_location();
// # 6355
  tmp_2 = strerror((*tmp_1));
// # 6355
  reply(code, "%s: %s.", string, tmp_2);
  }
// # 6356
  return;
}
}
// # 6358
static char *onefile[2]   = {"", (char *)0};
// # 6362
char *globerr  ;
// # 6367
static FILE *dout_0  ;
// # 6368
static DIR *dirp  ;
// # 6369
static char **sdirlist  ;
// # 6370
static char *wildcard   = (char *)((void *)0);
// # 6364
void send_file_list(char *whichfiles ) 
{ struct stat st ;
  register char **dirlist ;
  register char *dirname ;
  int simple ;
  int statret ;
  int tmp ;
  size_t tmp_0 ;
  char *tmp_1 ;
  int *tmp_2 ;
  char *tmp_3 ;
  int tmp_4 ;
  char/*const*/  *tmp_5 ;
  size_t tmp_6 ;
  char **tmp_7 ;
  int tmp_8 ;

  {
  {
// # 6375
  simple = 0;
// # 6402
  draconian_FILE = (FILE *)((void *)0);
// # 6403
  dout_0 = (FILE *)((void *)0);
// # 6404
  dirp = (DIR *)((void *)0);
// # 6405
  sdirlist = (char **)((void *)0);
// # 6406
  wildcard = (char *)((void *)0);
// # 6407
  tmp_1 = strpbrk((char/*const*/  *)whichfiles, (char/*const*/  *)"~{[*?");
  }
// # 6407
  if ((unsigned int )tmp_1 == (unsigned int )((void *)0)) {
// # 6408
    if ((int )(*(whichfiles + 0)) == 0) {
      {
// # 6409
      wildcard = strdup((char/*const*/  *)"*");
      }
// # 6410
      if ((unsigned int )wildcard == (unsigned int )((void *)0)) {
        {
// # 6411
        reply(550, "Memory allocation error");
        }
        goto globfree;
      }
      {
// # 6414
      whichfiles = wildcard;
      }
    } else {
      {
// # 6417
      tmp = statextinline((char/*const*/  *)whichfiles, & st);
// # 6417
      statret = tmp < 0;
      }
// # 6417
      if (statret) {
        {
// # 6418
        statret = lstatextinline((char/*const*/  *)whichfiles, & st);
        }
      }
// # 6419
      if (statret >= 0) {
// # 6420
        if ((st.st_mode & 61440U) == 16384U) {
          {
// # 6421
          tmp_0 = strlen((char/*const*/  *)whichfiles);
// # 6421
          wildcard = (char *)malloc(tmp_0 + 3U);
          }
// # 6422
          if ((unsigned int )wildcard == (unsigned int )((void *)0)) {
            {
// # 6423
            reply(550, "Memory allocation error");
            }
            goto globfree;
          }
          {
// # 6426
          strcpy((char */*   */)wildcard,
                 (char/*const*/  */*   */)((char/*const*/  *)whichfiles));
// # 6427
          strcat((char */*   */)wildcard,
                 (char/*const*/  */*   */)((char/*const*/  *)"/*"));
// # 6428
          whichfiles = wildcard;
          }
        }
      }
    }
  }
  {
// # 6433
  tmp_3 = strpbrk((char/*const*/  *)whichfiles, (char/*const*/  *)"~{[*?");
  }
// # 6433
  if ((unsigned int )tmp_3 != (unsigned int )((void *)0)) {
    {
// # 6434
    globerr = (char *)((void *)0);
// # 6435
    dirlist = ftpglob(whichfiles);
// # 6436
    sdirlist = dirlist;
    }
// # 6437
    if ((unsigned int )globerr != (unsigned int )((void *)0)) {
      {
// # 6438
      reply(550, "%s", globerr);
      }
      goto globfree;
    } else {
// # 6441
      if ((unsigned int )dirlist == (unsigned int )((void *)0)) {
        {
// # 6442
        tmp_2 = errno_location();
// # 6442
        (*tmp_2) = 2;
// # 6443
        perror_reply(550, whichfiles);
        }
        goto globfree;
      }
    }
  } else {
    {
// # 6448
    onefile[0] = whichfiles;
// # 6449
    dirlist = onefile;
// # 6450
    simple = 1;
    }
  }
  {
// # 6453
  tmp_4 = sigsetjmp(urgcatch, 1);
  }
// # 6453
  if (tmp_4) {
    {
// # 6454
    transflag = 0;
    }
// # 6455
    if ((unsigned int )dout_0 != (unsigned int )((void *)0)) {
      {

      {
// # 96 "spec.work"
      if (dout_0->BLAST_FLAG == 1) {
// # 97
        dout_0->BLAST_FLAG = 0;
      } else {
// # 98
        error__();
      }
      {

      }
      }
// # 6456 "ftpd.c"
      fclose(dout_0);
      }
    }
// # 6457
    if ((unsigned int )dirp != (unsigned int )((void *)0)) {
      {
// # 6458
      closedir(dirp);
      }
    }
    {
// # 6459
    data = -1;
// # 6460
    pdata = -1;
    }
    goto globfree;
  }
// # 6463
  while (1) {
    {
// # 6463
    tmp_7 = dirlist;
// # 6463
    dirlist ++;
// # 6463
    dirname = (*tmp_7);
    }
// # 6463
    if (! ((unsigned int )dirname != (unsigned int )((void *)0))) {
// # 6463
      break;
    }
    {
// # 6464
    statret = statextinline((char/*const*/  *)dirname, & st);
    }
// # 6465
    if (statret < 0) {
      {
// # 6466
      statret = lstatextinline((char/*const*/  *)dirname, & st);
      }
    }
// # 6467
    if (statret < 0) {
// # 6470
      if ((int )(*(dirname + 0)) == 45) {
// # 6470
        if ((unsigned int )(*dirlist) == (unsigned int )((void *)0)) {
// # 6470
          if (transflag == 0) {
            {
// # 6471
            retrieve_is_data = 0;
// # 6473
            retrieve(ls_plain, dirname);
// # 6477
            retrieve_is_data = 1;
            }
            goto globfree;
          }
        }
      }
      {
// # 6480
      perror_reply(550, dirname);
      }
// # 6481
      if ((unsigned int )dout_0 != (unsigned int )((void *)0)) {
        {

        {
// # 96 "spec.work"
        if (dout_0->BLAST_FLAG == 1) {
// # 97
          dout_0->BLAST_FLAG = 0;
        } else {
// # 98
          error__();
        }
        {

        }
        }
// # 6482 "ftpd.c"
        fclose(dout_0);
// # 6483
        transflag = 0;
// # 6484
        data = -1;
// # 6485
        pdata = -1;
        }
      }
      goto globfree;
    }
// # 6490
    if ((st.st_mode & 61440U) != 16384U) {
// # 6493
      if ((unsigned int )dout_0 == (unsigned int )((void *)0)) {
        {
// # 6494
        dout_0 = dataconn("file list", -1L, "w");
        }
// # 6495
        if ((unsigned int )dout_0 == (unsigned int )((void *)0)) {
          goto globfree;
        }
        {
// # 6497
        transflag ++;
// # 6498
        draconian_FILE = dout_0;
        }
      }
// # 6500
      if ((unsigned int )draconian_FILE != (unsigned int )((void *)0)) {
        {
// # 6501
        signal(14, & draconian_alarm_signal);
// # 6502
        alarm(timeout_data);
        }
// # 6503
        if (type == 1) {
          {
// # 6503
          tmp_5 = (char/*const*/  *)"\r";
          }
        } else {
          {
// # 6503
          tmp_5 = (char/*const*/  *)"";
          }
        }
        {

        {
// # 72 "spec.work"
        if (! (dout_0->BLAST_FLAG == 1)) {
// # 74
          error__();
        }
        {

        }
        }
// # 6503 "ftpd.c"
        fprintf((FILE */*   */)dout_0,
                (char/*const*/  */*   */)((char/*const*/  *)"%s%s\n"),
                dirname, tmp_5);
        }
      }
      {
// # 6506
      tmp_6 = strlen((char/*const*/  *)dirname);
// # 6506
      byte_count = (long )((unsigned long )byte_count +
                           (unsigned long )(tmp_6 + 1U));
      }
    }
  }
// # 6518
  if ((unsigned int )dout_0 != (unsigned int )((void *)0)) {
// # 6519
    if ((unsigned int )draconian_FILE != (unsigned int )((void *)0)) {
      {
// # 6520
      signal(14, & draconian_alarm_signal);
// # 6521
      alarm(timeout_data);
      {
// # 40 "spec.work"
      if (! (dout_0->BLAST_FLAG == 1)) {
// # 42
        error__();
      }
      {

      }
      }
// # 6522 "ftpd.c"
      fflush(dout_0);
      }
    }
// # 6524
    if ((unsigned int )draconian_FILE != (unsigned int )((void *)0)) {
      {
// # 6525
      signal(14, & draconian_alarm_signal);
// # 6526
      alarm(timeout_data);
// # 6527
      socket_flush_wait(dout_0);
      }
    }
  }
// # 6530
  if ((unsigned int )dout_0 == (unsigned int )((void *)0)) {
    {
// # 6531
    reply(550, "No files found.");
    }
  } else {
// # 6532
    if ((unsigned int )draconian_FILE == (unsigned int )((void *)0)) {
      {
// # 6533
      alarm(0U);
// # 6534
      perror_reply(550, "Data connection");
      }
    } else {
      {
// # 6532
      tmp_8 = ferror(dout_0);
      }
// # 6532
      if (tmp_8 != 0) {
        {
// # 6533
        alarm(0U);
// # 6534
        perror_reply(550, "Data connection");
        }
      } else {
        {
// # 6541
        alarm(0U);
// # 6542
        reply(226, "Transfer complete.");
        }
      }
    }
  }
  {
// # 6545
  transflag = 0;
  }
// # 6546
  if ((unsigned int )dout_0 != (unsigned int )((void *)0)) {
// # 6546
    if ((unsigned int )draconian_FILE != (unsigned int )((void *)0)) {
      {

      {
// # 96 "spec.work"
      if (dout_0->BLAST_FLAG == 1) {
// # 97
        dout_0->BLAST_FLAG = 0;
      } else {
// # 98
        error__();
      }
      {

      }
      }
// # 6547 "ftpd.c"
      fclose(dout_0);
      }
    }
  }
  {
// # 6548
  data = -1;
// # 6549
  pdata = -1;
  }
  globfree: 
// # 6551
  if ((unsigned int )wildcard != (unsigned int )((void *)0)) {
    {
// # 6552
    free((void *)wildcard);
// # 6553
    wildcard = (char *)((void *)0);
    }
  }
// # 6555
  if (sdirlist) {
    {
// # 6556
    blkfree(sdirlist);
// # 6557
    free((void *)((char *)sdirlist));
    }
  }
// # 6559
  return;
}
}
// # 6652
char **Argv   = (char **)((void *)0);
// # 6656
char *LastArgv   = (char *)((void *)0);
// # 6671
/* extern */ char **environ ;
// # 6663
void initsetproctitle(int argc , char **argv , char **envp ) 
{ register int i ;
  register int envpsize ;
  char **newenviron ;
  size_t tmp ;
  size_t tmp_0 ;
  int err ;
  size_t tmp_2 ;
  size_t tmp_3 ;

  {
  {
// # 6669
  envpsize = 0;
// # 6677
  tmp = strlen((char/*const*/  *)(*(argv + (argc - 1))));
// # 6677
  LastArgv = (*(argv + (argc - 1))) + tmp;
  }
// # 6678
  if ((unsigned int )envp != (unsigned int )((void *)0)) {
    {
// # 6683
    i = 0;
    }
// # 6683
    while ((unsigned int )(*(envp + i)) != (unsigned int )((void *)0)) {
      {
// # 6684
      tmp_0 = strlen((char/*const*/  *)(*(envp + i)));
// # 6684
      envpsize = (int )((unsigned int )envpsize + (tmp_0 + 1U));
// # 6683
      i ++;
      }
    }
    {
// # 6685
    newenviron = (char **)malloc(sizeof(char *) * (unsigned int )(i + 1));
    }
// # 6686
    if (newenviron) {
      {
// # 6687
      err = 0;
// # 6688
      i = 0;
      }
// # 6688
      while ((unsigned int )(*(envp + i)) != (unsigned int )((void *)0)) {
        {
// # 6689
        (*(newenviron + i)) = strdup((char/*const*/  *)(*(envp + i)));
        }
// # 6689
        if ((unsigned int )(*(newenviron + i)) == (unsigned int )((void *)0)) {
          {
// # 6690
          err = 1;
          }
// # 6691
          break;
        }
        {
// # 6688
        i ++;
        }
      }
// # 6694
      if (err) {
        {
// # 6695
        i = 0;
        }
// # 6695
        while ((unsigned int )(*(newenviron + i)) != (unsigned int )((void *)0)) {
          {
// # 6696
          free((void *)(*(newenviron + i)));
// # 6695
          i ++;
          }
        }
        {
// # 6697
        free((void *)newenviron);
// # 6698
        i = 0;
        }
      } else {
        {
// # 6701
        (*(newenviron + i)) = (char *)((void *)0);
// # 6702
        environ = newenviron;
        }
      }
    } else {
      {
// # 6706
      i = 0;
      }
    }
// # 6713
    while (1) {
// # 6713
      if (i > 0) {
// # 6713
        if (! ((unsigned int )(*(envp + (i - 1))) < (unsigned int )(*(argv + 0)))) {
          {
// # 6713
          tmp_2 = strlen((char/*const*/  *)(*(argv + (argc - 1))));
          }
// # 6713
          if (! ((unsigned int )(*(envp + (i - 1))) >
                 (unsigned int )((((*(argv + (argc - 1))) + tmp_2) + 1) +
                                 envpsize))) {
// # 6713
            break;
          }
        }
      } else {
// # 6713
        break;
      }
      {
// # 6716
      i --;
      }
    }
// # 6718
    if (i > 0) {
      {
// # 6719
      tmp_3 = strlen((char/*const*/  *)(*(envp + (i - 1))));
// # 6719
      LastArgv = (*(envp + (i - 1))) + tmp_3;
      }
    }
  }
  {
// # 6724
  Argv = argv;
  }
// # 6726
  return;
}
}
// # 6732
void setproctitle(char/*const*/  *fmt  , ...) 
{ register char *p ;
  register int i ;
  char buf_2[2048] ;
  __ccured_va_list ap ;
  size_t tmp ;
  unsigned long tmp_0 ;
  char *tmp_1 ;

  {
  {
// # 6753
  p = buf_2;
// # 6756
  strcpy((char */*   */)p,
         (char/*const*/  */*   */)((char/*const*/  *)"ftpd: "));
// # 6757
  tmp = strlen((char/*const*/  *)p);
// # 6757
  p += tmp;
// # 6760
  tmp_0 = (unsigned long )GCC_STDARG_START();
// # 6760
  __ccured_va_start(ap, tmp_0);
// # 6761
  vsnprintf((char */*   */)p,
            sizeof(buf_2) - (unsigned int )(p - buf_2),
            (char/*const*/  */*   */)fmt, ap);
// # 6762
  __ccured_va_end(ap);
// # 6764
  i = (int )strlen((char/*const*/  *)(buf_2));
  }
// # 6816
  if (i > (LastArgv - (*(Argv + 0))) - 2) {
    {
// # 6817
    i = (LastArgv - (*(Argv + 0))) - 2;
// # 6818
    buf_2[i] = '\0';
    }
  }
  {
// # 6820
  strcpy((char */*   */)(*(Argv + 0)),
         (char/*const*/  */*   */)((char/*const*/  *)(buf_2)));
// # 6821
  p = (*(Argv + 0)) + i;
  }
// # 6822
  while ((unsigned int )p < (unsigned int )LastArgv) {
    {
// # 6823
    tmp_1 = p;
// # 6823
    p ++;
// # 6823
    (*tmp_1) = ' ';
    }
  }
  {
// # 6824
  (*(Argv + 1)) = (char *)((void *)0);
  }
// # 6831
  return;
}
}
// # 7274
int pasv_allowed(char *remoteaddr_0 ) 
{ char class[4096] ;
  int which ;
  struct aclmember *entry ;
  int tmp ;
  int tmp_0 ;
  struct aclmember *tmp_1 ;

  {
  {
// # 7278
  entry = (struct aclmember *)((void *)0);
// # 7279
  acl_getclass(class);
  }
// # 7280
  while (1) {
    {
// # 7280
    tmp_1 = getaclentry("pasv-allow", & entry);
    }
// # 7280
    if (! tmp_1) {
// # 7280
      break;
    }
// # 7281
    if ((unsigned int )entry->arg[0] != (unsigned int )((void *)0)) {
      {
// # 7281
      tmp_0 = strcasecmp((char/*const*/  *)(class),
                           (char/*const*/  *)entry->arg[0]);
      }
// # 7281
      if (tmp_0 == 0) {
        {
// # 7282
        which = 1;
        }
// # 7282
        while (1) {
// # 7282
          if (which < 50) {
// # 7282
            if (! ((unsigned int )entry->arg[which] !=
                   (unsigned int )((void *)0))) {
// # 7282
              break;
            }
          } else {
// # 7282
            break;
          }
          {
// # 7283
          tmp = hostmatch(entry->arg[which], remoteaddr_0, (char *)((void *)0));
          }
// # 7283
          if (tmp) {
// # 7284
            return (1);
          }
          {
// # 7282
          which ++;
          }
        }
      }
    }
  }
// # 7287
  return (0);
}
}
// # 7290
int port_allowed(char *remoteaddr_0 ) 
{ char class[4096] ;
  int which ;
  struct aclmember *entry ;
  int tmp ;
  int tmp_0 ;
  struct aclmember *tmp_1 ;

  {
  {
// # 7294
  entry = (struct aclmember *)((void *)0);
// # 7295
  acl_getclass(class);
  }
// # 7296
  while (1) {
    {
// # 7296
    tmp_1 = getaclentry("port-allow", & entry);
    }
// # 7296
    if (! tmp_1) {
// # 7296
      break;
    }
// # 7297
    if ((unsigned int )entry->arg[0] != (unsigned int )((void *)0)) {
      {
// # 7297
      tmp_0 = strcasecmp((char/*const*/  *)(class),
                           (char/*const*/  *)entry->arg[0]);
      }
// # 7297
      if (tmp_0 == 0) {
        {
// # 7298
        which = 1;
        }
// # 7298
        while (1) {
// # 7298
          if (which < 50) {
// # 7298
            if (! ((unsigned int )entry->arg[which] !=
                   (unsigned int )((void *)0))) {
// # 7298
              break;
            }
          } else {
// # 7298
            break;
          }
          {
// # 7299
          tmp = hostmatch(entry->arg[which], remoteaddr_0, (char *)((void *)0));
          }
// # 7299
          if (tmp) {
// # 7300
            return (1);
          }
          {
// # 7298
          which ++;
          }
        }
      }
    }
  }
// # 7303
  return (0);
}
}
// # 7436
void fixpath(char *path ) 
{ int abs_0 ;
  char *in ;
  char *out ;
  char *tmp ;
  char *tmp_0 ;
  char *tmp_1 ;
  char *tmp_2 ;
  char *tmp_3 ;
  char *tmp_4 ;
  char *tmp_5 ;
  char *tmp_6 ;
  char *tmp_7 ;
  char *tmp_8 ;

  {
  {
// # 7438
  abs_0 = 0;
  }
// # 7442
  if ((int )(*path) == 47) {
    {
// # 7443
    abs_0 = 1;
// # 7444
    path ++;
    }
  } else {
// # 7446
    if ((int )(*path) == 126) {
// # 7447
      while (1) {
        {
// # 7448
        path ++;
        }
// # 7447
        if ((int )(*path) != 0) {
// # 7447
          if (! ((int )(*path) != 47)) {
// # 7447
            break;
          }
        } else {
// # 7447
          break;
        }
      }
// # 7450
      if ((int )(*path) == 47) {
        {
// # 7451
        path ++;
        }
      }
    }
  }
  {
// # 7453
  in = path;
// # 7454
  out = path;
  }
// # 7455
  while ((int )(*in) != 0) {
// # 7456
    if ((int )(*in) == 47) {
      {
// # 7457
      in ++;
      }
    } else {
// # 7458
      if ((int )(*(in + 0)) == 46) {
// # 7458
        if ((int )(*(in + 1)) == 47) {
          goto _L_3;
        } else {
// # 7458
          if ((int )(*(in + 1)) == 0) {
            _L_3: 
            {
// # 7459
            in ++;
            }
// # 7460
            if ((int )(*in) == 47) {
              {
// # 7461
              in ++;
              }
            }
          } else {
            goto _L_2;
          }
        }
      } else {
        _L_2: 
// # 7463
        if ((int )(*(in + 0)) == 46) {
// # 7463
          if ((int )(*(in + 1)) == 46) {
// # 7463
            if ((int )(*(in + 2)) == 47) {
              goto _L_0;
            } else {
// # 7463
              if ((int )(*(in + 2)) == 0) {
                _L_0: 
// # 7464
                if ((unsigned int )out == (unsigned int )path) {
// # 7465
                  if (abs_0) {
                    {
// # 7466
                    in ++;
// # 7467
                    in ++;
                    }
// # 7468
                    if ((int )(*in) == 47) {
                      {
// # 7469
                      in ++;
                      }
                    }
                  } else {
                    {
// # 7472
                    tmp = out;
// # 7472
                    out ++;
// # 7472
                    tmp_0 = in;
// # 7472
                    in ++;
// # 7472
                    (*tmp) = (*tmp_0);
// # 7473
                    tmp_1 = out;
// # 7473
                    out ++;
// # 7473
                    tmp_2 = in;
// # 7473
                    in ++;
// # 7473
                    (*tmp_1) = (*tmp_2);
                    }
// # 7474
                    if ((int )(*in) == 47) {
                      {
// # 7475
                      tmp_3 = out;
// # 7475
                      out ++;
// # 7475
                      tmp_4 = in;
// # 7475
                      in ++;
// # 7475
                      (*tmp_3) = (*tmp_4);
                      }
                    }
                    {
// # 7476
                    path = out;
                    }
                  }
                } else {
                  {
// # 7480
                  out --;
                  }
// # 7481
                  while (1) {
// # 7481
                    if ((unsigned int )out != (unsigned int )path) {
                      {
// # 7481
                      out --;
                      }
// # 7481
                      if (! ((int )(*out) != 47)) {
// # 7481
                        break;
                      }
                    } else {
// # 7481
                      break;
                    }
                  }
                  {
// # 7482
                  in ++;
// # 7483
                  in ++;
                  }
// # 7484
                  if ((int )(*in) == 47) {
                    {
// # 7485
                    in ++;
                    }
                  }
                }
              } else {
                goto _L_1;
              }
            }
          } else {
            goto _L_1;
          }
        } else {
          _L_1: 
// # 7489
          while (1) {
            {
// # 7490
            tmp_5 = out;
// # 7490
            out ++;
// # 7490
            tmp_6 = in;
// # 7490
            in ++;
// # 7490
            (*tmp_5) = (*tmp_6);
            }
// # 7489
            if ((int )(*in) != 0) {
// # 7489
              if (! ((int )(*in) != 47)) {
// # 7489
                break;
              }
            } else {
// # 7489
              break;
            }
          }
// # 7492
          if ((int )(*in) == 47) {
            {
// # 7493
            tmp_7 = out;
// # 7493
            out ++;
// # 7493
            tmp_8 = in;
// # 7493
            in ++;
// # 7493
            (*tmp_7) = (*tmp_8);
            }
          }
        }
      }
    }
  }
  {
// # 7496
  (*out) = '\0';
  }
// # 7497
  return;
}
}
// # 129 "ftpcmd.y"
static unsigned short cliport   = (unsigned short )0;
// # 130
static struct in_addr cliaddr  ;
// # 131
static int cmd_type  ;
// # 132
static int cmd_form  ;
// # 133
static int cmd_bytesz  ;
// # 135
char *fromname  ;
// # 147
// # 148
// # 150
static void toolong(int a ) ;
// # 151
void help(struct tab *ctab , char *s ) ;
// # 152
struct tab *lookup(struct tab *p , char *cmd ) ;
// # 153
int yylex(void) ;
// # 155
static char *nullstr   = "(null)";
// # 204
static char/*const*/  yytranslate[331]   = 
// # 204
  {(char/*const*/  )0, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2, (char/*const*/  )2,
   (char/*const*/  )1, (char/*const*/  )3, (char/*const*/  )4, (char/*const*/  )5,
   (char/*const*/  )6, (char/*const*/  )7, (char/*const*/  )8, (char/*const*/  )9,
   (char/*const*/  )10, (char/*const*/  )11, (char/*const*/  )12, (char/*const*/  )13,
   (char/*const*/  )14, (char/*const*/  )15, (char/*const*/  )16, (char/*const*/  )17,
   (char/*const*/  )18, (char/*const*/  )19, (char/*const*/  )20, (char/*const*/  )21,
   (char/*const*/  )22, (char/*const*/  )23, (char/*const*/  )24, (char/*const*/  )25,
   (char/*const*/  )26, (char/*const*/  )27, (char/*const*/  )28, (char/*const*/  )29,
   (char/*const*/  )30, (char/*const*/  )31, (char/*const*/  )32, (char/*const*/  )33,
   (char/*const*/  )34, (char/*const*/  )35, (char/*const*/  )36, (char/*const*/  )37,
   (char/*const*/  )38, (char/*const*/  )39, (char/*const*/  )40, (char/*const*/  )41,
   (char/*const*/  )42, (char/*const*/  )43, (char/*const*/  )44, (char/*const*/  )45,
   (char/*const*/  )46, (char/*const*/  )47, (char/*const*/  )48, (char/*const*/  )49,
   (char/*const*/  )50, (char/*const*/  )51, (char/*const*/  )52, (char/*const*/  )53,
   (char/*const*/  )54, (char/*const*/  )55, (char/*const*/  )56, (char/*const*/  )57,
   (char/*const*/  )58, (char/*const*/  )59, (char/*const*/  )60, (char/*const*/  )61,
   (char/*const*/  )62, (char/*const*/  )63, (char/*const*/  )64, (char/*const*/  )65,
   (char/*const*/  )66, (char/*const*/  )67, (char/*const*/  )68, (char/*const*/  )69,
   (char/*const*/  )70, (char/*const*/  )71, (char/*const*/  )72, (char/*const*/  )73,
   (char/*const*/  )74, (char/*const*/  )75, (char/*const*/  )76};
// # 347
static short/*const*/  yyr1[93]   = 
// # 347
  {(short/*const*/  )0, (short/*const*/  )77, (short/*const*/  )77,
   (short/*const*/  )77, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )78,
   (short/*const*/  )78, (short/*const*/  )78, (short/*const*/  )79,
   (short/*const*/  )79, (short/*const*/  )79, (short/*const*/  )79,
   (short/*const*/  )79, (short/*const*/  )79, (short/*const*/  )79,
   (short/*const*/  )79, (short/*const*/  )79, (short/*const*/  )79,
   (short/*const*/  )80, (short/*const*/  )81, (short/*const*/  )81,
   (short/*const*/  )82, (short/*const*/  )83, (short/*const*/  )84,
   (short/*const*/  )84, (short/*const*/  )84, (short/*const*/  )85,
   (short/*const*/  )85, (short/*const*/  )85, (short/*const*/  )85,
   (short/*const*/  )85, (short/*const*/  )85, (short/*const*/  )85,
   (short/*const*/  )85, (short/*const*/  )86, (short/*const*/  )86,
   (short/*const*/  )86, (short/*const*/  )87, (short/*const*/  )87,
   (short/*const*/  )87, (short/*const*/  )88, (short/*const*/  )89,
   (short/*const*/  )90, (short/*const*/  )91, (short/*const*/  )92};
// # 362
static short/*const*/  yyr2[93]   = 
// # 362
  {(short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )2, (short/*const*/  )2,
   (short/*const*/  )4, (short/*const*/  )4, (short/*const*/  )5, (short/*const*/  )3,
   (short/*const*/  )5, (short/*const*/  )5, (short/*const*/  )5, (short/*const*/  )5,
   (short/*const*/  )9, (short/*const*/  )5, (short/*const*/  )5, (short/*const*/  )5,
   (short/*const*/  )3, (short/*const*/  )5, (short/*const*/  )3, (short/*const*/  )5,
   (short/*const*/  )5, (short/*const*/  )3, (short/*const*/  )5, (short/*const*/  )5,
   (short/*const*/  )3, (short/*const*/  )3, (short/*const*/  )5, (short/*const*/  )3,
   (short/*const*/  )5, (short/*const*/  )3, (short/*const*/  )5, (short/*const*/  )5,
   (short/*const*/  )3, (short/*const*/  )3, (short/*const*/  )5, (short/*const*/  )7,
   (short/*const*/  )5, (short/*const*/  )7, (short/*const*/  )9, (short/*const*/  )5,
   (short/*const*/  )7, (short/*const*/  )7, (short/*const*/  )7, (short/*const*/  )5,
   (short/*const*/  )7, (short/*const*/  )9, (short/*const*/  )7, (short/*const*/  )9,
   (short/*const*/  )7, (short/*const*/  )7, (short/*const*/  )5, (short/*const*/  )3,
   (short/*const*/  )5, (short/*const*/  )5, (short/*const*/  )2, (short/*const*/  )2,
   (short/*const*/  )5, (short/*const*/  )5, (short/*const*/  )5, (short/*const*/  )7,
   (short/*const*/  )5, (short/*const*/  )5, (short/*const*/  )7, (short/*const*/  )5,
   (short/*const*/  )7, (short/*const*/  )5, (short/*const*/  )1, (short/*const*/  )0,
   (short/*const*/  )1, (short/*const*/  )1, (short/*const*/  )11, (short/*const*/  )1,
   (short/*const*/  )1, (short/*const*/  )1, (short/*const*/  )1, (short/*const*/  )3,
   (short/*const*/  )1, (short/*const*/  )3, (short/*const*/  )1, (short/*const*/  )1,
   (short/*const*/  )3, (short/*const*/  )2, (short/*const*/  )1, (short/*const*/  )1,
   (short/*const*/  )1, (short/*const*/  )1, (short/*const*/  )1, (short/*const*/  )1,
   (short/*const*/  )1, (short/*const*/  )1, (short/*const*/  )1, (short/*const*/  )1,
   (short/*const*/  )0};
// # 379
static short/*const*/  yydefact[268]   = 
// # 379
  {(short/*const*/  )1, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )92, (short/*const*/  )92,
   (short/*const*/  )92, (short/*const*/  )92, (short/*const*/  )92,
   (short/*const*/  )92, (short/*const*/  )92, (short/*const*/  )92,
   (short/*const*/  )92, (short/*const*/  )92, (short/*const*/  )92,
   (short/*const*/  )92, (short/*const*/  )92, (short/*const*/  )92,
   (short/*const*/  )92, (short/*const*/  )92, (short/*const*/  )92,
   (short/*const*/  )92, (short/*const*/  )92, (short/*const*/  )92,
   (short/*const*/  )92, (short/*const*/  )92, (short/*const*/  )92,
   (short/*const*/  )92, (short/*const*/  )92, (short/*const*/  )92,
   (short/*const*/  )92, (short/*const*/  )92, (short/*const*/  )92,
   (short/*const*/  )2, (short/*const*/  )3, (short/*const*/  )55, (short/*const*/  )0,
   (short/*const*/  )67, (short/*const*/  )54, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )66,
   (short/*const*/  )0, (short/*const*/  )68, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )7, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )24,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )25, (short/*const*/  )0,
   (short/*const*/  )18, (short/*const*/  )0, (short/*const*/  )16, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )21, (short/*const*/  )0, (short/*const*/  )27,
   (short/*const*/  )29, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )32,
   (short/*const*/  )33, (short/*const*/  )0, (short/*const*/  )51, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )4, (short/*const*/  )5, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )74, (short/*const*/  )76,
   (short/*const*/  )78, (short/*const*/  )79, (short/*const*/  )0,
   (short/*const*/  )82, (short/*const*/  )84, (short/*const*/  )83,
   (short/*const*/  )0, (short/*const*/  )86, (short/*const*/  )87,
   (short/*const*/  )85, (short/*const*/  )0, (short/*const*/  )89, (short/*const*/  )0,
   (short/*const*/  )88, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )69, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )6,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )81,
   (short/*const*/  )8, (short/*const*/  )9, (short/*const*/  )10, (short/*const*/  )13,
   (short/*const*/  )14, (short/*const*/  )15, (short/*const*/  )0,
   (short/*const*/  )11, (short/*const*/  )57, (short/*const*/  )56,
   (short/*const*/  )23, (short/*const*/  )22, (short/*const*/  )26,
   (short/*const*/  )19, (short/*const*/  )17, (short/*const*/  )0,
   (short/*const*/  )34, (short/*const*/  )0, (short/*const*/  )36, (short/*const*/  )0,
   (short/*const*/  )39, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )67,
   (short/*const*/  )43, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )58, (short/*const*/  )61,
   (short/*const*/  )60, (short/*const*/  )0, (short/*const*/  )63, (short/*const*/  )0,
   (short/*const*/  )65, (short/*const*/  )20, (short/*const*/  )28,
   (short/*const*/  )30, (short/*const*/  )31, (short/*const*/  )50,
   (short/*const*/  )52, (short/*const*/  )53, (short/*const*/  )0,
   (short/*const*/  )73, (short/*const*/  )71, (short/*const*/  )72,
   (short/*const*/  )75, (short/*const*/  )77, (short/*const*/  )80,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )91, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )90, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )35, (short/*const*/  )37,
   (short/*const*/  )40, (short/*const*/  )0, (short/*const*/  )41,
   (short/*const*/  )42, (short/*const*/  )0, (short/*const*/  )44, (short/*const*/  )0,
   (short/*const*/  )46, (short/*const*/  )48, (short/*const*/  )49,
   (short/*const*/  )59, (short/*const*/  )62, (short/*const*/  )64,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )12, (short/*const*/  )38,
   (short/*const*/  )45, (short/*const*/  )47, (short/*const*/  )0, (short/*const*/  )0,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )70, (short/*const*/  )0,
   (short/*const*/  )0};
// # 410
static short/*const*/  yydefgoto[16]   = 
// # 410
  {(short/*const*/  )1, (short/*const*/  )35, (short/*const*/  )36,
   (short/*const*/  )71, (short/*const*/  )73, (short/*const*/  )132,
   (short/*const*/  )111, (short/*const*/  )215, (short/*const*/  )116,
   (short/*const*/  )120, (short/*const*/  )124, (short/*const*/  )126,
   (short/*const*/  )127, (short/*const*/  )232, (short/*const*/  )221,
   (short/*const*/  )41};
// # 416
static short/*const*/  yypact[268]   = 
// # 416
  {(short/*const*/  )-32768, (short/*const*/  )11, (short/*const*/  )-7,
   (short/*const*/  )-12, (short/*const*/  )3, (short/*const*/  )7,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )15,
   (short/*const*/  )86, (short/*const*/  )-32768, (short/*const*/  )33,
   (short/*const*/  )93, (short/*const*/  )106, (short/*const*/  )132,
   (short/*const*/  )133, (short/*const*/  )134, (short/*const*/  )135,
   (short/*const*/  )136, (short/*const*/  )137, (short/*const*/  )138,
   (short/*const*/  )139, (short/*const*/  )140, (short/*const*/  )141,
   (short/*const*/  )143, (short/*const*/  )1, (short/*const*/  )13,
   (short/*const*/  )30, (short/*const*/  )145, (short/*const*/  )87,
   (short/*const*/  )92, (short/*const*/  )147, (short/*const*/  )146,
   (short/*const*/  )150, (short/*const*/  )151, (short/*const*/  )152,
   (short/*const*/  )154, (short/*const*/  )155, (short/*const*/  )157,
   (short/*const*/  )158, (short/*const*/  )-32768, (short/*const*/  )159,
   (short/*const*/  )-32768, (short/*const*/  )160, (short/*const*/  )161,
   (short/*const*/  )-32768, (short/*const*/  )41, (short/*const*/  )94,
   (short/*const*/  )9, (short/*const*/  )148, (short/*const*/  )148,
   (short/*const*/  )148, (short/*const*/  )162, (short/*const*/  )163,
   (short/*const*/  )148, (short/*const*/  )148, (short/*const*/  )-32768,
   (short/*const*/  )148, (short/*const*/  )148, (short/*const*/  )-32768,
   (short/*const*/  )148, (short/*const*/  )-32768, (short/*const*/  )156,
   (short/*const*/  )-32768, (short/*const*/  )61, (short/*const*/  )148,
   (short/*const*/  )-32768, (short/*const*/  )165, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )148, (short/*const*/  )148,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )148,
   (short/*const*/  )-32768, (short/*const*/  )148, (short/*const*/  )148,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )153,
   (short/*const*/  )168, (short/*const*/  )164, (short/*const*/  )170,
   (short/*const*/  )-32768, (short/*const*/  )-13, (short/*const*/  )171,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )172, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )173, (short/*const*/  )-32768,
   (short/*const*/  )174, (short/*const*/  )-32768, (short/*const*/  )175,
   (short/*const*/  )176, (short/*const*/  )95, (short/*const*/  )-32768,
   (short/*const*/  )177, (short/*const*/  )178, (short/*const*/  )179,
   (short/*const*/  )180, (short/*const*/  )181, (short/*const*/  )182,
   (short/*const*/  )183, (short/*const*/  )98, (short/*const*/  )100,
   (short/*const*/  )102, (short/*const*/  )185, (short/*const*/  )186,
   (short/*const*/  )104, (short/*const*/  )187, (short/*const*/  )188,
   (short/*const*/  )189, (short/*const*/  )190, (short/*const*/  )122,
   (short/*const*/  )191, (short/*const*/  )192, (short/*const*/  )124,
   (short/*const*/  )126, (short/*const*/  )193, (short/*const*/  )194,
   (short/*const*/  )195, (short/*const*/  )196, (short/*const*/  )197,
   (short/*const*/  )198, (short/*const*/  )199, (short/*const*/  )167,
   (short/*const*/  )-32768, (short/*const*/  )20, (short/*const*/  )20,
   (short/*const*/  )163, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )144,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )200,
   (short/*const*/  )-32768, (short/*const*/  )201, (short/*const*/  )-32768,
   (short/*const*/  )202, (short/*const*/  )-32768, (short/*const*/  )201,
   (short/*const*/  )15, (short/*const*/  )86, (short/*const*/  )-32768,
   (short/*const*/  )204, (short/*const*/  )205, (short/*const*/  )206,
   (short/*const*/  )207, (short/*const*/  )208, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )209,
   (short/*const*/  )-32768, (short/*const*/  )148, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )211, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )214,
   (short/*const*/  )203, (short/*const*/  )-32768, (short/*const*/  )215,
   (short/*const*/  )216, (short/*const*/  )218, (short/*const*/  )219,
   (short/*const*/  )220, (short/*const*/  )128, (short/*const*/  )130,
   (short/*const*/  )221, (short/*const*/  )222, (short/*const*/  )223,
   (short/*const*/  )-32768, (short/*const*/  )224, (short/*const*/  )225,
   (short/*const*/  )226, (short/*const*/  )227, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )148,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )148,
   (short/*const*/  )-32768, (short/*const*/  )148, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )213,
   (short/*const*/  )228, (short/*const*/  )231, (short/*const*/  )232,
   (short/*const*/  )233, (short/*const*/  )234, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )217, (short/*const*/  )235, (short/*const*/  )238,
   (short/*const*/  )237, (short/*const*/  )-32768, (short/*const*/  )242,
   (short/*const*/  )-32768};
// # 447
static short/*const*/  yypgoto[16]   = 
// # 447
  {(short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-32768,
   (short/*const*/  )-11, (short/*const*/  )16, (short/*const*/  )-96,
   (short/*const*/  )-32768, (short/*const*/  )52, (short/*const*/  )-32768,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )-80,
   (short/*const*/  )-32768, (short/*const*/  )-32768, (short/*const*/  )29,
   (short/*const*/  )66};
// # 457
static short/*const*/  yytable[257]   = 
// # 457
  {(short/*const*/  )128, (short/*const*/  )129, (short/*const*/  )165,
   (short/*const*/  )38, (short/*const*/  )133, (short/*const*/  )134,
   (short/*const*/  )131, (short/*const*/  )135, (short/*const*/  )136,
   (short/*const*/  )37, (short/*const*/  )137, (short/*const*/  )266,
   (short/*const*/  )2, (short/*const*/  )121, (short/*const*/  )122,
   (short/*const*/  )154, (short/*const*/  )88, (short/*const*/  )89,
   (short/*const*/  )39, (short/*const*/  )166, (short/*const*/  )156,
   (short/*const*/  )157, (short/*const*/  )123, (short/*const*/  )40,
   (short/*const*/  )158, (short/*const*/  )212, (short/*const*/  )159,
   (short/*const*/  )160, (short/*const*/  )90, (short/*const*/  )91,
   (short/*const*/  )213, (short/*const*/  )3, (short/*const*/  )4,
   (short/*const*/  )70, (short/*const*/  )214, (short/*const*/  )5,
   (short/*const*/  )6, (short/*const*/  )7, (short/*const*/  )8, (short/*const*/  )9,
   (short/*const*/  )10, (short/*const*/  )11, (short/*const*/  )12,
   (short/*const*/  )13, (short/*const*/  )112, (short/*const*/  )92,
   (short/*const*/  )93, (short/*const*/  )113, (short/*const*/  )74,
   (short/*const*/  )114, (short/*const*/  )115, (short/*const*/  )14,
   (short/*const*/  )15, (short/*const*/  )16, (short/*const*/  )17,
   (short/*const*/  )18, (short/*const*/  )19, (short/*const*/  )20,
   (short/*const*/  )21, (short/*const*/  )22, (short/*const*/  )23,
   (short/*const*/  )24, (short/*const*/  )25, (short/*const*/  )26,
   (short/*const*/  )27, (short/*const*/  )28, (short/*const*/  )29,
   (short/*const*/  )30, (short/*const*/  )31, (short/*const*/  )217,
   (short/*const*/  )32, (short/*const*/  )33, (short/*const*/  )34,
   (short/*const*/  )42, (short/*const*/  )43, (short/*const*/  )44,
   (short/*const*/  )45, (short/*const*/  )46, (short/*const*/  )47,
   (short/*const*/  )48, (short/*const*/  )49, (short/*const*/  )50,
   (short/*const*/  )51, (short/*const*/  )52, (short/*const*/  )53,
   (short/*const*/  )54, (short/*const*/  )55, (short/*const*/  )56,
   (short/*const*/  )57, (short/*const*/  )58, (short/*const*/  )59,
   (short/*const*/  )60, (short/*const*/  )61, (short/*const*/  )62,
   (short/*const*/  )63, (short/*const*/  )64, (short/*const*/  )65,
   (short/*const*/  )66, (short/*const*/  )67, (short/*const*/  )68,
   (short/*const*/  )69, (short/*const*/  )117, (short/*const*/  )95,
   (short/*const*/  )96, (short/*const*/  )72, (short/*const*/  )118,
   (short/*const*/  )119, (short/*const*/  )97, (short/*const*/  )98,
   (short/*const*/  )75, (short/*const*/  )173, (short/*const*/  )174,
   (short/*const*/  )139, (short/*const*/  )182, (short/*const*/  )183,
   (short/*const*/  )184, (short/*const*/  )185, (short/*const*/  )186,
   (short/*const*/  )187, (short/*const*/  )190, (short/*const*/  )191,
   (short/*const*/  )76, (short/*const*/  )233, (short/*const*/  )140,
   (short/*const*/  )141, (short/*const*/  )142, (short/*const*/  )143,
   (short/*const*/  )144, (short/*const*/  )145, (short/*const*/  )146,
   (short/*const*/  )147, (short/*const*/  )148, (short/*const*/  )149,
   (short/*const*/  )150, (short/*const*/  )151, (short/*const*/  )152,
   (short/*const*/  )153, (short/*const*/  )196, (short/*const*/  )197,
   (short/*const*/  )200, (short/*const*/  )201, (short/*const*/  )202,
   (short/*const*/  )203, (short/*const*/  )242, (short/*const*/  )243,
   (short/*const*/  )244, (short/*const*/  )245, (short/*const*/  )77,
   (short/*const*/  )78, (short/*const*/  )79, (short/*const*/  )80,
   (short/*const*/  )81, (short/*const*/  )82, (short/*const*/  )83,
   (short/*const*/  )84, (short/*const*/  )85, (short/*const*/  )218,
   (short/*const*/  )86, (short/*const*/  )87, (short/*const*/  )253,
   (short/*const*/  )94, (short/*const*/  )100, (short/*const*/  )254,
   (short/*const*/  )99, (short/*const*/  )255, (short/*const*/  )101,
   (short/*const*/  )125, (short/*const*/  )102, (short/*const*/  )103,
   (short/*const*/  )104, (short/*const*/  )161, (short/*const*/  )105,
   (short/*const*/  )106, (short/*const*/  )107, (short/*const*/  )138,
   (short/*const*/  )108, (short/*const*/  )109, (short/*const*/  )0,
   (short/*const*/  )224, (short/*const*/  )163, (short/*const*/  )110,
   (short/*const*/  )130, (short/*const*/  )131, (short/*const*/  )155,
   (short/*const*/  )162, (short/*const*/  )164, (short/*const*/  )211,
   (short/*const*/  )167, (short/*const*/  )168, (short/*const*/  )169,
   (short/*const*/  )170, (short/*const*/  )171, (short/*const*/  )172,
   (short/*const*/  )175, (short/*const*/  )176, (short/*const*/  )177,
   (short/*const*/  )178, (short/*const*/  )179, (short/*const*/  )180,
   (short/*const*/  )181, (short/*const*/  )188, (short/*const*/  )189,
   (short/*const*/  )192, (short/*const*/  )193, (short/*const*/  )194,
   (short/*const*/  )195, (short/*const*/  )225, (short/*const*/  )198,
   (short/*const*/  )199, (short/*const*/  )204, (short/*const*/  )205,
   (short/*const*/  )206, (short/*const*/  )207, (short/*const*/  )208,
   (short/*const*/  )209, (short/*const*/  )210, (short/*const*/  )216,
   (short/*const*/  )223, (short/*const*/  )219, (short/*const*/  )236,
   (short/*const*/  )220, (short/*const*/  )222, (short/*const*/  )226,
   (short/*const*/  )227, (short/*const*/  )228, (short/*const*/  )229,
   (short/*const*/  )230, (short/*const*/  )231, (short/*const*/  )234,
   (short/*const*/  )235, (short/*const*/  )256, (short/*const*/  )237,
   (short/*const*/  )238, (short/*const*/  )239, (short/*const*/  )262,
   (short/*const*/  )240, (short/*const*/  )241, (short/*const*/  )246,
   (short/*const*/  )247, (short/*const*/  )248, (short/*const*/  )249,
   (short/*const*/  )250, (short/*const*/  )267, (short/*const*/  )0,
   (short/*const*/  )257, (short/*const*/  )251, (short/*const*/  )252,
   (short/*const*/  )258, (short/*const*/  )259, (short/*const*/  )260,
   (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )0, (short/*const*/  )261,
   (short/*const*/  )263, (short/*const*/  )264, (short/*const*/  )265};
// # 487
static short/*const*/  yycheck[257]   = 
// # 487
  {(short/*const*/  )80, (short/*const*/  )81, (short/*const*/  )15,
   (short/*const*/  )15, (short/*const*/  )84, (short/*const*/  )85,
   (short/*const*/  )19, (short/*const*/  )87, (short/*const*/  )88,
   (short/*const*/  )16, (short/*const*/  )90, (short/*const*/  )0, (short/*const*/  )1,
   (short/*const*/  )4, (short/*const*/  )5, (short/*const*/  )95, (short/*const*/  )15,
   (short/*const*/  )16, (short/*const*/  )15, (short/*const*/  )115,
   (short/*const*/  )100, (short/*const*/  )101, (short/*const*/  )13,
   (short/*const*/  )16, (short/*const*/  )104, (short/*const*/  )5,
   (short/*const*/  )106, (short/*const*/  )107, (short/*const*/  )15,
   (short/*const*/  )16, (short/*const*/  )10, (short/*const*/  )20,
   (short/*const*/  )21, (short/*const*/  )18, (short/*const*/  )14,
   (short/*const*/  )24, (short/*const*/  )25, (short/*const*/  )26,
   (short/*const*/  )27, (short/*const*/  )28, (short/*const*/  )29,
   (short/*const*/  )30, (short/*const*/  )31, (short/*const*/  )32,
   (short/*const*/  )3, (short/*const*/  )15, (short/*const*/  )16, (short/*const*/  )6,
   (short/*const*/  )15, (short/*const*/  )8, (short/*const*/  )9, (short/*const*/  )40,
   (short/*const*/  )41, (short/*const*/  )42, (short/*const*/  )43,
   (short/*const*/  )44, (short/*const*/  )45, (short/*const*/  )46,
   (short/*const*/  )47, (short/*const*/  )48, (short/*const*/  )49,
   (short/*const*/  )50, (short/*const*/  )51, (short/*const*/  )52,
   (short/*const*/  )53, (short/*const*/  )54, (short/*const*/  )55,
   (short/*const*/  )56, (short/*const*/  )57, (short/*const*/  )165,
   (short/*const*/  )59, (short/*const*/  )60, (short/*const*/  )61,
   (short/*const*/  )7, (short/*const*/  )8, (short/*const*/  )9, (short/*const*/  )10,
   (short/*const*/  )11, (short/*const*/  )12, (short/*const*/  )13,
   (short/*const*/  )14, (short/*const*/  )15, (short/*const*/  )16,
   (short/*const*/  )17, (short/*const*/  )18, (short/*const*/  )19,
   (short/*const*/  )20, (short/*const*/  )21, (short/*const*/  )22,
   (short/*const*/  )23, (short/*const*/  )24, (short/*const*/  )25,
   (short/*const*/  )26, (short/*const*/  )27, (short/*const*/  )28,
   (short/*const*/  )29, (short/*const*/  )30, (short/*const*/  )31,
   (short/*const*/  )32, (short/*const*/  )33, (short/*const*/  )34,
   (short/*const*/  )7, (short/*const*/  )15, (short/*const*/  )16,
   (short/*const*/  )18, (short/*const*/  )11, (short/*const*/  )12,
   (short/*const*/  )15, (short/*const*/  )16, (short/*const*/  )16,
   (short/*const*/  )15, (short/*const*/  )16, (short/*const*/  )51,
   (short/*const*/  )15, (short/*const*/  )16, (short/*const*/  )15,
   (short/*const*/  )16, (short/*const*/  )15, (short/*const*/  )16,
   (short/*const*/  )15, (short/*const*/  )16, (short/*const*/  )15,
   (short/*const*/  )202, (short/*const*/  )62, (short/*const*/  )63,
   (short/*const*/  )64, (short/*const*/  )65, (short/*const*/  )66,
   (short/*const*/  )67, (short/*const*/  )68, (short/*const*/  )69,
   (short/*const*/  )70, (short/*const*/  )71, (short/*const*/  )72,
   (short/*const*/  )73, (short/*const*/  )74, (short/*const*/  )75,
   (short/*const*/  )15, (short/*const*/  )16, (short/*const*/  )15,
   (short/*const*/  )16, (short/*const*/  )15, (short/*const*/  )16,
   (short/*const*/  )15, (short/*const*/  )16, (short/*const*/  )15,
   (short/*const*/  )16, (short/*const*/  )15, (short/*const*/  )15,
   (short/*const*/  )15, (short/*const*/  )15, (short/*const*/  )15,
   (short/*const*/  )15, (short/*const*/  )15, (short/*const*/  )15,
   (short/*const*/  )15, (short/*const*/  )12, (short/*const*/  )16,
   (short/*const*/  )15, (short/*const*/  )239, (short/*const*/  )15,
   (short/*const*/  )15, (short/*const*/  )242, (short/*const*/  )16,
   (short/*const*/  )244, (short/*const*/  )15, (short/*const*/  )18,
   (short/*const*/  )16, (short/*const*/  )16, (short/*const*/  )15,
   (short/*const*/  )17, (short/*const*/  )16, (short/*const*/  )15,
   (short/*const*/  )15, (short/*const*/  )18, (short/*const*/  )16,
   (short/*const*/  )16, (short/*const*/  )-1, (short/*const*/  )189,
   (short/*const*/  )15, (short/*const*/  )19, (short/*const*/  )19,
   (short/*const*/  )19, (short/*const*/  )18, (short/*const*/  )16,
   (short/*const*/  )15, (short/*const*/  )19, (short/*const*/  )16,
   (short/*const*/  )16, (short/*const*/  )16, (short/*const*/  )16,
   (short/*const*/  )16, (short/*const*/  )16, (short/*const*/  )16,
   (short/*const*/  )16, (short/*const*/  )16, (short/*const*/  )16,
   (short/*const*/  )16, (short/*const*/  )16, (short/*const*/  )16,
   (short/*const*/  )15, (short/*const*/  )15, (short/*const*/  )15,
   (short/*const*/  )15, (short/*const*/  )15, (short/*const*/  )15,
   (short/*const*/  )190, (short/*const*/  )16, (short/*const*/  )16,
   (short/*const*/  )16, (short/*const*/  )16, (short/*const*/  )16,
   (short/*const*/  )16, (short/*const*/  )16, (short/*const*/  )16,
   (short/*const*/  )16, (short/*const*/  )164, (short/*const*/  )188,
   (short/*const*/  )18, (short/*const*/  )16, (short/*const*/  )19,
   (short/*const*/  )19, (short/*const*/  )18, (short/*const*/  )18,
   (short/*const*/  )18, (short/*const*/  )18, (short/*const*/  )18,
   (short/*const*/  )18, (short/*const*/  )17, (short/*const*/  )15,
   (short/*const*/  )17, (short/*const*/  )16, (short/*const*/  )16,
   (short/*const*/  )15, (short/*const*/  )17, (short/*const*/  )16,
   (short/*const*/  )16, (short/*const*/  )16, (short/*const*/  )16,
   (short/*const*/  )16, (short/*const*/  )16, (short/*const*/  )16,
   (short/*const*/  )0, (short/*const*/  )-1, (short/*const*/  )16,
   (short/*const*/  )19, (short/*const*/  )19, (short/*const*/  )16,
   (short/*const*/  )16, (short/*const*/  )16, (short/*const*/  )-1,
   (short/*const*/  )-1, (short/*const*/  )-1, (short/*const*/  )19,
   (short/*const*/  )19, (short/*const*/  )17, (short/*const*/  )19};
// # 373 "/usr/share/bison/bison.simple"
int yychar  ;
struct tab cmdtab[48]   ; /*= 
// # 1249
  {{"USER", (short )274, (short )2, (short )1, "<sp> username"},
   {"PASS", (short )275, (short )5, (short )1, "<sp> password"},
   {"ACCT", (short )276, (short )2, (short )0, "(specify account)"},
   {"SMNT", (short )312, (short )1, (short )0, "(structure mount)"},
   {"REIN", (short )277, (short )1, (short )0, "(reinitialize server state)"},
   {"QUIT", (short )278, (short )1, (short )1, "(terminate service)"},
   {"PORT", (short )279, (short )1, (short )1, "<sp> b0, b1, b2, b3, b4, b5"},
   {"PASV", (short )280, (short )1, (short )1, "(set server in passive mode)"},
   {"TYPE", (short )281, (short )1, (short )1, "<sp> [ A | E | I | L ]"},
   {"STRU", (short )282, (short )1, (short )1, "(specify file structure)"},
   {"MODE", (short )283, (short )1, (short )1, "(specify transfer mode)"},
   {"RETR", (short )284, (short )2, (short )1, "<sp> file-name"},
   {"STOR", (short )285, (short )2, (short )1, "<sp> file-name"},
   {"APPE", (short )286, (short )2, (short )1, "<sp> file-name"},
   {"MLFL", (short )287, (short )4, (short )0, "(mail file)"},
   {"MAIL", (short )288, (short )4, (short )0, "(mail to user)"},
   {"MSND", (short )289, (short )4, (short )0, "(mail send to terminal)"},
   {"MSOM", (short )290, (short )4, (short )0,
    "(mail send to terminal or mailbox)"},
   {"MSAM", (short )291, (short )4, (short )0,
    "(mail send to terminal and mailbox)"},
   {"MRSQ", (short )292, (short )4, (short )0,
    "(mail recipient scheme question)"},
   {"MRCP", (short )293, (short )2, (short )0, "(mail recipient)"},
   {"ALLO", (short )294, (short )1, (short )1, "allocate storage (vacuously)"},
   {"REST", (short )295, (short )1, (short )1, "(restart command)"},
   {"RNFR", (short )296, (short )2, (short )1, "<sp> file-name"},
   {"RNTO", (short )297, (short )2, (short )1, "<sp> file-name"},
   {"ABOR", (short )298, (short )1, (short )1, "(abort operation)"},
   {"DELE", (short )299, (short )2, (short )1, "<sp> file-name"},
   {"CWD", (short )300, (short )4, (short )1, "[ <sp> directory-name ]"},
   {"XCWD", (short )300, (short )4, (short )1, "[ <sp> directory-name ]"},
   {"LIST", (short )301, (short )4, (short )1, "[ <sp> path-name ]"},
   {"NLST", (short )302, (short )4, (short )1, "[ <sp> path-name ]"},
   {"SITE", (short )303, (short )7, (short )1, "site-cmd [ <sp> arguments ]"},
   {"SYST", (short )313, (short )1, (short )1, "(get type of operating system)"},
   {"STAT", (short )304, (short )4, (short )1, "[ <sp> path-name ]"},
   {"HELP", (short )305, (short )4, (short )1, "[ <sp> <string> ]"},
   {"NOOP", (short )306, (short )1, (short )1, ""},
   {"MKD", (short )307, (short )2, (short )1, "<sp> path-name"},
   {"XMKD", (short )307, (short )2, (short )1, "<sp> path-name"},
   {"RMD", (short )308, (short )2, (short )1, "<sp> path-name"},
   {"XRMD", (short )308, (short )2, (short )1, "<sp> path-name"},
   {"PWD", (short )309, (short )1, (short )1, "(return current directory)"},
   {"XPWD", (short )309, (short )1, (short )1, "(return current directory)"},
   {"CDUP", (short )310, (short )1, (short )1, "(change to parent directory)"},
   {"XCUP", (short )310, (short )1, (short )1, "(change to parent directory)"},
   {"STOU", (short )311, (short )2, (short )1, "<sp> file-name"},
   {"SIZE", (short )314, (short )4, (short )1, "<sp> path-name"},
   {"MDTM", (short )315, (short )4, (short )1, "<sp> path-name"},
   {(char *)((void *)0), (short )0, (short )0, (short )0, (char *)0}}; */
// # 1301
struct tab sitetab[16]   ; /*=
// # 1301
  {{"UMASK", (short )316, (short )1, (short )1, "[ <sp> umask ]"},
   {"IDLE", (short )317, (short )1, (short )1, "[ <sp> maximum-idle-time ]"},
   {"CHMOD", (short )318, (short )8, (short )1, "<sp> mode <sp> file-name"},
   {"HELP", (short )305, (short )4, (short )1, "[ <sp> <string> ]"},
   {"GROUP", (short )319, (short )2, (short )1, "<sp> access-group"},
   {"GPASS", (short )320, (short )4, (short )1, "<sp> access-password"},
   {"NEWER", (short )321, (short )9, (short )1,
    "<sp> YYYYMMDDHHMMSS [ <sp> path-name ]"},
   {"MINFO", (short )322, (short )9, (short )1,
    "<sp> YYYYMMDDHHMMSS [ <sp> path-name ]"},
   {"INDEX", (short )323, (short )2, (short )1, "<sp> pattern"},
   {"EXEC", (short )324, (short )2, (short )1, "<sp> command [ <sp> arguments ]"},
   {"ALIAS", (short )325, (short )4, (short )1, "[ <sp> alias ] "},
   {"CDPATH", (short )326, (short )4, (short )1, "[ <sp> ] "},
   {"GROUPS", (short )327, (short )4, (short )1, "[ <sp> ] "},
   {"CHECKMETHOD", (short )328, (short )4, (short )1, "[ <sp> method ]"},
   {"CHECKSUM", (short )329, (short )4, (short )1, "[ <sp> file-name ]"},
   {(char *)((void *)0), (short )0, (short )0, (short )0, (char *)0}}; */
// # 373
yystype yylval  ;
// # 373
int yynerrs  ;
// omitted gcc builtin __builtin_alloca

// omitted gcc builtin __builtin_memcpy

// # 376
int yyparse(void) 
{ register int yystate ;
  register int yyn ;
  int yyresult ;
  int yyerrstatus ;
  int yychar1 ;
  short yyssa[200] ;
  short *yyss ;
  register short *yyssp ;
  yystype yyvsa[200] ;
  yystype *yyvs ;
  register yystype *yyvsp ;
  unsigned int yystacksize ;
  yystype yyval ;
  int yylen ;
  unsigned int yysize ;
  short *yyss1 ;
  union yyalloc *yyptr ;
  union yyalloc *tmp ;
  unsigned int yynewbytes ;
  unsigned int yynewbytes_0 ;
  register unsigned short v ;
  register unsigned short x ;
  int tmp_0 ;
  char *tmp_1 ;
  char/*const*/  *tmp_2 ;
  int tmp_3 ;
  register unsigned short v_0 ;
  register unsigned short x_0 ;
  int tmp_4 ;
  char *tmp_5 ;
  int tmp_6 ;
  char *tmp_7 ;
  int tmp_8 ;
  char *tmp_9 ;
  int tmp_10 ;
  int tmp_11 ;
  int tmp_12 ;
  int tmp_13 ;
  char *tmp_14 ;
  int tmp_15 ;
  char *tmp_16 ;
  int tmp_17 ;
  char *tmp_18 ;
  int tmp_19 ;
  char *tmp_20 ;
  int tmp_21 ;
  int tmp_22 ;
  char *tmp_23 ;
  int tmp_24 ;
  register char *cp ;
  int tmp_25 ;
  char *tmp_26 ;
  int tmp_27 ;
  char *tmp_28 ;
  int tmp_29 ;
  int tmp_30 ;
  mode_t oldmask ;
  mode_t oldmask_0 ;
  struct aclmember *entry ;
  int ok ;
  int tmp_31 ;
  struct aclmember *tmp_32 ;
  struct aclmember *entry_0 ;
  int ok_0 ;
  int tmp_33 ;
  char *tmp_34 ;
  int tmp_35 ;
  struct aclmember *tmp_36 ;
  char path[4096] ;
  int tmp_37 ;
  char *tmp_38 ;
  char *tmp_39 ;
  char buf_2[4096] ;
  size_t tmp_40 ;
  char *tmp_41 ;
  int tmp_42 ;
  char *tmp_43 ;
  int tmp_44 ;
  char *tmp_45 ;
  struct stat stbuf ;
  register struct tm *t ;
  int tmp_46 ;
  int tmp_47 ;
  char *tmp_48 ;
  int tmp_49 ;
  char *tmp_50 ;
  char *tmp_51 ;
  int tmp_52 ;
  register char *a ;
  register char *p ;
  char **globlist ;
  char *t_0 ;
  size_t tmp_54 ;
  char *tmp_55 ;
  int *tmp_56 ;
  int tmp_57 ;
  int tmp_58 ;
  int *tmp_59 ;
  char **globlist_0 ;
  int *tmp_60 ;
  int tmp_61 ;
  int tmp_62 ;
  register int ret ;
  register int dec ;
  register int multby ;
  register int digit_0 ;

  {
  {
// # 391
  yychar1 = 0;
// # 403
  yyss = yyssa;
// # 408
  yyvs = yyvsa;
// # 424
  yystacksize = 200U;
// # 440
  yystate = 0;
// # 441
  yyerrstatus = 0;
// # 442
  yynerrs = 0;
// # 443
  yychar = -2;
// # 450
  yyssp = yyss;
// # 451
  yyvsp = yyvs;
  }
  goto yysetstate;
  yynewstate: 
  {
// # 464
  yyssp ++;
  }
  yysetstate: 
  {
// # 467
  (*yyssp) = (short )yystate;
  }
// # 469
  if ((unsigned int )yyssp >= (unsigned int )((yyss + yystacksize) - 1)) {
    {
// # 472
    yysize = (unsigned int )((yyssp - yyss) + 1);
    }
// # 508
    if (yystacksize >= 10000U) {
      goto yyoverflowlab;
    }
    {
// # 510
    yystacksize *= 2U;
    }
// # 511
    if (yystacksize > 10000U) {
      {
// # 512
      yystacksize = 10000U;
      }
    }
    {
// # 515
    yyss1 = yyss;
// # 516
    tmp = (union yyalloc *)__builtin_alloca(yystacksize * (sizeof(short ) +
                                                           sizeof(yystype )) +
                                            (sizeof(union yyalloc ) - 1U));
// # 516
    yyptr = tmp;
    }
// # 518
    if (! yyptr) {
      goto yyoverflowlab;
    }
// # 520
    while (1) {
      {
// # 520
      __builtin_memcpy(& yyptr->yyss, yyss, yysize * sizeof((*yyss)));
// # 520
      yyss = & yyptr->yyss;
// # 520
      yynewbytes = yystacksize * sizeof((*yyss)) + (sizeof(union yyalloc ) - 1U);
// # 520
      yyptr += yynewbytes / sizeof((*yyptr));
      }
// # 520
      break;
    }
// # 521
    while (1) {
      {
// # 521
      __builtin_memcpy(& yyptr->yyvs, yyvs, yysize * sizeof((*yyvs)));
// # 521
      yyvs = & yyptr->yyvs;
// # 521
      yynewbytes_0 = yystacksize * sizeof((*yyvs)) +
                       (sizeof(union yyalloc ) - 1U);
// # 521
      yyptr += yynewbytes_0 / sizeof((*yyptr));
      }
// # 521
      break;
    }
// # 526
    if ((unsigned int )yyss1 != (unsigned int )(yyssa)) {
// # 527
/*       while (1) { */
/*         break; */
/*       } */
    }
    {
// # 532
    yyssp = (yyss + yysize) - 1;
// # 533
    yyvsp = (yyvs + yysize) - 1;
    }
// # 541
    if ((unsigned int )yyssp >= (unsigned int )((yyss + yystacksize) - 1)) {
      goto yyabortlab;
    }
  }
  goto yybackup;
  yybackup: 
  {
// # 561
  yyn = (int )yypact[yystate];
  }
// # 562
  if (yyn == -32768) {
    goto yydefault;
  }
// # 570
  if (yychar == -2) {
    {
// # 573
    yychar = yylex();
    }
  }
// # 578
  if (yychar <= 0) {
    {
// # 580
    yychar1 = 0;
// # 581
    yychar = 0;
    }
  } else {
// # 587
    if ((unsigned int )yychar <= 330U) {
      {
// # 587
      yychar1 = (int )yytranslate[yychar];
      }
    } else {
      {
// # 587
      yychar1 = 93;
      }
    }
  }
  {
// # 606
  yyn += yychar1;
  }
// # 607
  if (yyn < 0) {
    goto yydefault;
  } else {
// # 607
    if (yyn > 256) {
      goto yydefault;
    } else {
// # 607
      if ((int/*const*/  )yycheck[yyn] != yychar1) {
        goto yydefault;
      }
    }
  }
  {
// # 610
  yyn = (int )yytable[yyn];
  }
// # 619
  if (yyn < 0) {
// # 621
    if (yyn == -32768) {
      goto yyerrlab;
    }
    {
// # 623
    yyn = - yyn;
    }
    goto yyreduce;
  } else {
// # 626
    if (yyn == 0) {
      goto yyerrlab;
    }
  }
// # 629
  if (yyn == 267) {
    goto yyacceptlab;
  }
// # 637
  if (yychar != 0) {
    {
// # 638
    yychar = -2;
    }
  }
  {
// # 640
  yyvsp ++;
// # 640
  (*yyvsp) = yylval;
  }
// # 647
  if (yyerrstatus) {
    {
// # 648
    yyerrstatus --;
    }
  }
  {
// # 650
  yystate = yyn;
  }
  goto yynewstate;
  yydefault: 
  {
// # 658
  yyn = (int )yydefact[yystate];
  }
// # 659
  if (yyn == 0) {
    goto yyerrlab;
  }
  goto yyreduce;
  yyreduce: 
  {
// # 669
  yylen = (int )yyr2[yyn];
// # 679
  yyval = (*(yyvsp + (1 - yylen)));
  }
// # 705
  switch (yyn) {
  case 2: 
  {
// # 198 "ftpcmd.y"
  fromname = (char *)((void *)0);
// # 199
  restart_point = 0L;
  }
// # 201
  break;
  case 4: 
  {
// # 206
  user((yyvsp + -1)->String);
  }
// # 207
  if (log_commands) {
    {
// # 208
    syslog(6, (char/*const*/  *)"USER %s", (yyvsp + -1)->String);
    }
  }
  {
// # 209
  free((void *)(yyvsp + -1)->String);
  }
// # 211
  break;
  case 5: 
  {

  }
// # 213
  if (log_commands) {
// # 214
    if (anonymous) {
      {
// # 215
      syslog(6, (char/*const*/  *)"PASS %s", (yyvsp + -1)->String);
      }
    } else {
      {
// # 217
      syslog(6, (char/*const*/  *)"PASS password");
      }
    }
  }
  {
// # 219
  pass((yyvsp + -1)->String);
// # 220
  free((void *)(yyvsp + -1)->String);
  }
// # 222
  break;
  case 6: 
  {

  }
// # 224
  if (log_commands) {
    {
// # 225
    syslog(6, (char/*const*/  *)"PORT");
    }
  }
// # 228
  if ((yyvsp + -3)->Number) {
// # 232
    if (cliaddr.s_addr == his_addr.sin_addr.s_addr) {
      goto _L_0;
    } else {
      {
// # 230
      tmp_2 = (char/*const*/  *)inet_ntoa(cliaddr);
// # 230
      tmp_3 = port_allowed((char *)tmp_2);
      }
// # 232
      if (tmp_3) {
        _L_0: 
        {
// # 232
        x_0 = cliport;
// # 232
        tmp_4 = __builtin_constant_p((int )x_0);
        }
// # 232
        if (tmp_4) {
          {
// # 232
          v_0 = (unsigned short )((((int )x_0 >> 8) & 255) |
                                      (((int )x_0 & 255) << 8));
          }
        } else {
          {
// # 232
          asm  ("rorw $8, %w0": "=r" (v_0): "0" (x_0): "cc");
          }
        }
// # 232
        if ((int )v_0 > 1023) {
          {
// # 233
          usedefault = 0;
          }
// # 234
          if (pdata >= 0) {
            {
// # 235
            close(pdata);
// # 236
            pdata = -1;
            }
          }
          {
// # 238
          data_dest.sin_family = (unsigned short )2;
// # 239
          data_dest.sin_addr = cliaddr;
// # 240
          data_dest.sin_port = cliport;
// # 241
          reply(200, "PORT command successful.");
          }
        } else {
          goto _L;
        }
      } else {
        _L: 
        {
// # 245
        memset((void *)(& data_dest), 0, sizeof(data_dest));
// # 247
        x = cliport;
// # 247
        tmp_0 = __builtin_constant_p((int )x);
        }
// # 247
        if (tmp_0) {
          {
// # 247
          v = (unsigned short )((((int )x >> 8) & 255) |
                                  (((int )x & 255) << 8));
          }
        } else {
          {
// # 247
          asm  ("rorw $8, %w0": "=r" (v): "0" (x): "cc");
          }
        }
        {
// # 247
        tmp_1 = inet_ntoa(cliaddr);
// # 247
        syslog(4, (char/*const*/  *)"refused PORT %s,%d from %s", tmp_1, v,
               remoteident);
// # 248
        reply(500, "Illegal PORT Command");
        }
      }
    }
  }
// # 254
  break;
  case 7: 
  {

  }
// # 258
  if (log_commands) {
    {
// # 259
    syslog(6, (char/*const*/  *)"PASV");
    }
  }
// # 260
  if ((yyvsp + -1)->Number) {
    {
// # 262
    passive();
    }
  }
// # 267
  break;
  case 8: 
  {

  }
// # 269
  if (log_commands) {
    {
// # 270
    syslog(6, (char/*const*/  *)"TYPE %s", typenames[cmd_type]);
    }
  }
// # 271
  if ((yyvsp + -3)->Number) {
// # 272
    switch (cmd_type) {
    case 1: 
    {

    }
// # 275
    if (cmd_form == 1) {
      {
// # 276
      reply(200, "Type set to A.");
// # 277
      type = cmd_type;
// # 278
      form = cmd_form;
      }
    } else {
      {
// # 281
      reply(504, "Form must be N.");
      }
    }
// # 282
    break;
    case 2: 
    {
// # 285
    reply(504, "Type E not implemented.");
    }
// # 286
    break;
    case 3: 
    {
// # 289
    reply(200, "Type set to I.");
// # 290
    type = cmd_type;
    }
// # 291
    break;
    case 4: 
    {

    }
// # 295
    if (cmd_bytesz == 8) {
      {
// # 296
      reply(200, "Type set to L (byte size 8).");
// # 298
      type = cmd_type;
      }
    } else {
      {
// # 301
      reply(504, "Byte size must be 8.");
      }
    }
    }
  }
// # 307
  break;
  case 9: 
  {

  }
// # 309
  if (log_commands) {
    {
// # 310
    syslog(6, (char/*const*/  *)"STRU %s", strunames[(yyvsp + -1)->Number]);
    }
  }
// # 311
  if ((yyvsp + -3)->Number) {
// # 312
    switch ((yyvsp + -1)->Number) {
    case 1: 
    {
// # 315
    reply(200, "STRU F ok.");
    }
// # 316
    break;
    default: 
    {
// # 319
    reply(504, "Unimplemented STRU type.");
    }
    }
  }
// # 322
  break;
  case 10: 
  {

  }
// # 324
  if (log_commands) {
    {
// # 325
    syslog(6, (char/*const*/  *)"MODE %s", modenames[(yyvsp + -1)->Number]);
    }
  }
// # 326
  if ((yyvsp + -3)->Number) {
// # 327
    switch ((yyvsp + -1)->Number) {
    case 1: 
    {
// # 330
    reply(200, "MODE S ok.");
    }
// # 331
    break;
    default: 
    {
// # 334
    reply(502, "Unimplemented MODE type.");
    }
    }
  }
// # 337
  break;
  case 11: 
  {

  }
// # 339
  if (log_commands) {
    {
// # 340
    syslog(6, (char/*const*/  *)"ALLO %d", (yyvsp + -1)->Number);
    }
  }
// # 341
  if ((yyvsp + -3)->Number) {
    {
// # 342
    reply(202, "ALLO command ignored.");
    }
  }
// # 344
  break;
  case 12: 
  {

  }
// # 346
  if (log_commands) {
    {
// # 347
    syslog(6, (char/*const*/  *)"ALLO %d R %d", (yyvsp + -5)->Number,
           (yyvsp + -1)->Number);
    }
  }
// # 348
  if ((yyvsp + -7)->Number) {
    {
// # 349
    reply(202, "ALLO command ignored.");
    }
  }
// # 351
  break;
  case 13: 
  {

  }
// # 353
  if (log_commands) {
// # 354
    if ((yyvsp + -1)->String) {
      {
// # 354
      tmp_5 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 354
      tmp_5 = nullstr;
      }
    }
    {
// # 354
    syslog(6, (char/*const*/  *)"RETR %s", tmp_5);
    }
  }
// # 355
  if ((yyvsp + -3)->Number) {
// # 355
    if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
      {
// # 355
      tmp_6 = restrict_check((yyvsp + -1)->String);
      }
// # 355
      if (! tmp_6) {
        {
// # 356
        retrieve_is_data = 1;
// # 357
        retrieve((char *)((void *)0), (yyvsp + -1)->String);
        }
      }
    }
  }
// # 359
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 360
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 362
  break;
  case 14: 
  {

  }
// # 364
  if (log_commands) {
// # 365
    if ((yyvsp + -1)->String) {
      {
// # 365
      tmp_7 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 365
      tmp_7 = nullstr;
      }
    }
    {
// # 365
    syslog(6, (char/*const*/  *)"STOR %s", tmp_7);
    }
  }
// # 366
  if ((yyvsp + -3)->Number) {
// # 366
    if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
      {
// # 366
      tmp_8 = restrict_check((yyvsp + -1)->String);
      }
// # 366
      if (! tmp_8) {
        {
// # 367
        store((yyvsp + -1)->String, "w", 0);
        }
      }
    }
  }
// # 368
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 369
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 371
  break;
  case 15: 
  {

  }
// # 373
  if (log_commands) {
// # 374
    if ((yyvsp + -1)->String) {
      {
// # 374
      tmp_9 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 374
      tmp_9 = nullstr;
      }
    }
    {
// # 374
    syslog(6, (char/*const*/  *)"APPE %s", tmp_9);
    }
  }
// # 375
  if ((yyvsp + -3)->Number) {
// # 375
    if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
      {
// # 375
      tmp_10 = restrict_check((yyvsp + -1)->String);
      }
// # 375
      if (! tmp_10) {
        {
// # 376
        store((yyvsp + -1)->String, "a", 0);
        }
      }
    }
  }
// # 377
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 378
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 380
  break;
  case 16: 
  {

  }
// # 382
  if (log_commands) {
    {
// # 383
    syslog(6, (char/*const*/  *)"NLST");
    }
  }
// # 384
  if ((yyvsp + -1)->Number) {
    {
// # 384
    tmp_11 = restrict_check(".");
    }
// # 384
    if (! tmp_11) {
      {
// # 385
      send_file_list("");
      }
    }
  }
// # 387
  break;
  case 17: 
  {

  }
// # 389
  if (log_commands) {
    {
// # 390
    syslog(6, (char/*const*/  *)"NLST %s", (yyvsp + -1)->String);
    }
  }
// # 391
  if ((yyvsp + -3)->Number) {
// # 391
    if ((yyvsp + -1)->String) {
      {
// # 391
      tmp_12 = restrict_check((yyvsp + -1)->String);
      }
// # 391
      if (! tmp_12) {
        {
// # 392
        send_file_list((yyvsp + -1)->String);
        }
      }
    }
  }
// # 393
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 394
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 396
  break;
  case 18: 
  {

  }
// # 398
  if (log_commands) {
    {
// # 399
    syslog(6, (char/*const*/  *)"LIST");
    }
  }
// # 400
  if ((yyvsp + -1)->Number) {
    {
// # 400
    tmp_13 = restrict_check(".");
    }
// # 400
    if (! tmp_13) {
      {
// # 401
      retrieve_is_data = 0;
      }
// # 403
      if (anonymous) {
// # 403
        if (dolreplies) {
          {
// # 404
          retrieve(ls_long, "");
          }
        } else {
          {
// # 406
          retrieve(ls_short, "");
          }
        }
      } else {
        {
// # 406
        retrieve(ls_short, "");
        }
      }
    }
  }
// # 412
  break;
  case 19: 
  {

  }
// # 414
  if (log_commands) {
// # 415
    if ((yyvsp + -1)->String) {
      {
// # 415
      tmp_14 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 415
      tmp_14 = nullstr;
      }
    }
    {
// # 415
    syslog(6, (char/*const*/  *)"LIST %s", tmp_14);
    }
  }
// # 416
  if ((yyvsp + -3)->Number) {
// # 416
    if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
      {
// # 416
      tmp_15 = restrict_list_check((yyvsp + -1)->String);
      }
// # 416
      if (! tmp_15) {
        {
// # 417
        retrieve_is_data = 0;
        }
// # 419
        if (anonymous) {
// # 419
          if (dolreplies) {
            {
// # 420
            retrieve(ls_long, (yyvsp + -1)->String);
            }
          } else {
            {
// # 422
            retrieve(ls_short, (yyvsp + -1)->String);
            }
          }
        } else {
          {
// # 422
          retrieve(ls_short, (yyvsp + -1)->String);
          }
        }
      }
    }
  }
// # 427
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 428
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 430
  break;
  case 20: 
  {

  }
// # 432
  if (log_commands) {
// # 433
    if ((yyvsp + -1)->String) {
      {
// # 433
      tmp_16 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 433
      tmp_16 = nullstr;
      }
    }
    {
// # 433
    syslog(6, (char/*const*/  *)"STAT %s", tmp_16);
    }
  }
// # 434
  if ((yyvsp + -3)->Number) {
// # 434
    if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
      {
// # 434
      tmp_17 = restrict_check((yyvsp + -1)->String);
      }
// # 434
      if (! tmp_17) {
        {
// # 435
        statfilecmd((yyvsp + -1)->String);
        }
      }
    }
  }
// # 436
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 437
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 439
  break;
  case 21: 
  {

  }
// # 441
  if (log_commands) {
    {
// # 442
    syslog(6, (char/*const*/  *)"STAT");
    }
  }
// # 443
  if ((yyvsp + -1)->Number) {
    {
// # 444
    statcmd();
    }
  }
// # 446
  break;
  case 22: 
  {

  }
// # 448
  if (log_commands) {
// # 449
    if ((yyvsp + -1)->String) {
      {
// # 449
      tmp_18 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 449
      tmp_18 = nullstr;
      }
    }
    {
// # 449
    syslog(6, (char/*const*/  *)"DELE %s", tmp_18);
    }
  }
// # 450
  if ((yyvsp + -3)->Number) {
// # 450
    if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
      {
// # 450
      tmp_19 = restrict_check((yyvsp + -1)->String);
      }
// # 450
      if (! tmp_19) {
        {
// # 451
        delete((yyvsp + -1)->String);
        }
      }
    }
  }
// # 452
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 453
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 455
  break;
  case 23: 
  {

  }
// # 457
  if (log_commands) {
// # 458
    if ((yyvsp + -1)->String) {
      {
// # 458
      tmp_20 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 458
      tmp_20 = nullstr;
      }
    }
    {
// # 458
    syslog(6, (char/*const*/  *)"RNTO %s", tmp_20);
    }
  }
// # 459
  if ((yyvsp + -3)->Number) {
// # 459
    if ((yyvsp + -1)->String) {
      {
// # 459
      tmp_21 = restrict_check((yyvsp + -1)->String);
      }
// # 459
      if (! tmp_21) {
// # 460
        if (fromname) {
          {
// # 461
          renamecmd(fromname, (yyvsp + -1)->String);
// # 462
          free((void *)fromname);
// # 463
          fromname = (char *)((void *)0);
          }
        } else {
          {
// # 466
          reply(503, "Bad sequence of commands.");
          }
        }
      }
    }
  }
// # 469
  if ((yyvsp + -1)->String) {
    {
// # 470
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 472
  break;
  case 24: 
  {

  }
// # 474
  if (log_commands) {
    {
// # 475
    syslog(6, (char/*const*/  *)"ABOR");
    }
  }
// # 476
  if ((yyvsp + -1)->Number) {
    {
// # 477
    reply(225, "ABOR command successful.");
    }
  }
// # 479
  break;
  case 25: 
  {

  }
// # 481
  if (log_commands) {
    {
// # 482
    syslog(6, (char/*const*/  *)"CWD");
    }
  }
// # 483
  if ((yyvsp + -1)->Number) {
    {
// # 483
    tmp_22 = restrict_check(home);
    }
// # 483
    if (! tmp_22) {
      {
// # 484
      cwd(home);
      }
    }
  }
// # 486
  break;
  case 26: 
  {

  }
// # 488
  if (log_commands) {
// # 489
    if ((yyvsp + -1)->String) {
      {
// # 489
      tmp_23 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 489
      tmp_23 = nullstr;
      }
    }
    {
// # 489
    syslog(6, (char/*const*/  *)"CWD %s", tmp_23);
    }
  }
// # 490
  if ((yyvsp + -3)->Number) {
// # 490
    if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
      {
// # 490
      tmp_24 = restrict_check((yyvsp + -1)->String);
      }
// # 490
      if (! tmp_24) {
        {
// # 491
        cwd((yyvsp + -1)->String);
        }
      }
    }
  }
// # 492
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 493
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 495
  break;
  case 27: 
  {

  }
// # 497
  if (log_commands) {
    {
// # 498
    syslog(6, (char/*const*/  *)"HELP");
    }
  }
// # 499
  if ((yyvsp + -1)->Number) {
    {
// # 500
    help(cmdtab, (char *)((void *)0));
    }
  }
// # 502
  break;
  case 28: 
  {
// # 504
  cp = (yyvsp + -1)->String;
  }
// # 506
  if (log_commands) {
    {
// # 507
    syslog(6, (char/*const*/  *)"HELP %s", (yyvsp + -1)->String);
    }
  }
// # 508
  if ((yyvsp + -3)->Number) {
    {
// # 509
    tmp_25 = strncasecmp((char/*const*/  *)cp, (char/*const*/  *)"SITE", 4U);
    }
// # 509
    if (tmp_25 == 0) {
      {
// # 510
      cp = (yyvsp + -1)->String + 4;
      }
// # 511
      if ((int )(*cp) == 32) {
        {
// # 512
        cp ++;
        }
      }
// # 513
      if ((*cp)) {
        {
// # 514
        help(sitetab, cp);
        }
      } else {
        {
// # 516
        help(sitetab, (char *)((void *)0));
        }
      }
    } else {
      {
// # 519
      help(cmdtab, (yyvsp + -1)->String);
      }
    }
  }
// # 520
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 521
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 523
  break;
  case 29: 
  {

  }
// # 525
  if (log_commands) {
    {
// # 526
    syslog(6, (char/*const*/  *)"NOOP");
    }
  }
// # 527
  if ((yyvsp + -1)->Number) {
    {
// # 528
    reply(200, "NOOP command successful.");
    }
  }
// # 530
  break;
  case 30: 
  {

  }
// # 532
  if (log_commands) {
// # 533
    if ((yyvsp + -1)->String) {
      {
// # 533
      tmp_26 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 533
      tmp_26 = nullstr;
      }
    }
    {
// # 533
    syslog(6, (char/*const*/  *)"MKD %s", tmp_26);
    }
  }
// # 534
  if ((yyvsp + -3)->Number) {
// # 534
    if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
      {
// # 534
      tmp_27 = restrict_check((yyvsp + -1)->String);
      }
// # 534
      if (! tmp_27) {
        {
// # 535
        makedir((yyvsp + -1)->String);
        }
      }
    }
  }
// # 536
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 537
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 539
  break;
  case 31: 
  {

  }
// # 541
  if (log_commands) {
// # 542
    if ((yyvsp + -1)->String) {
      {
// # 542
      tmp_28 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 542
      tmp_28 = nullstr;
      }
    }
    {
// # 542
    syslog(6, (char/*const*/  *)"RMD %s", tmp_28);
    }
  }
// # 543
  if ((yyvsp + -3)->Number) {
// # 543
    if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
      {
// # 543
      tmp_29 = restrict_check((yyvsp + -1)->String);
      }
// # 543
      if (! tmp_29) {
        {
// # 544
        removedir((yyvsp + -1)->String);
        }
      }
    }
  }
// # 545
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 546
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 548
  break;
  case 32: 
  {

  }
// # 550
  if (log_commands) {
    {
// # 551
    syslog(6, (char/*const*/  *)"PWD");
    }
  }
// # 552
  if ((yyvsp + -1)->Number) {
    {
// # 553
    pwd();
    }
  }
// # 555
  break;
  case 33: 
  {

  }
// # 557
  if (log_commands) {
    {
// # 558
    syslog(6, (char/*const*/  *)"CDUP");
    }
  }
// # 559
  if ((yyvsp + -1)->Number) {
    {
// # 560
    tmp_30 = test_restriction("..");
    }
// # 560
    if (tmp_30) {
      {
// # 563
      ack("CWD");
      }
    } else {
      {
// # 561
      cwd("..");
      }
    }
  }
// # 565
  break;
  case 34: 
  {

  }
// # 568
  if (log_commands) {
    {
// # 569
    syslog(6, (char/*const*/  *)"SITE HELP");
    }
  }
// # 570
  if ((yyvsp + -3)->Number) {
    {
// # 571
    help(sitetab, (char *)((void *)0));
    }
  }
// # 573
  break;
  case 35: 
  {

  }
// # 575
  if (log_commands) {
    {
// # 576
    syslog(6, (char/*const*/  *)"SITE HELP %s", (yyvsp + -1)->String);
    }
  }
// # 577
  if ((yyvsp + -5)->Number) {
    {
// # 578
    help(sitetab, (yyvsp + -1)->String);
    }
  }
// # 579
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 580
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 582
  break;
  case 36: 
  {

  }
// # 586
  if (log_commands) {
    {
// # 587
    syslog(6, (char/*const*/  *)"SITE UMASK");
    }
  }
// # 588
  if ((yyvsp + -3)->Number) {
    {
// # 589
    oldmask = umask(0U);
// # 590
    umask(oldmask);
// # 591
    reply(200, "Current UMASK is %03o", oldmask);
    }
  }
// # 594
  break;
  case 37: 
  {
// # 597
  entry = (struct aclmember *)((void *)0);
// # 598
  ok = 1;
  }
// # 600
  if (log_commands) {
    {
// # 601
    syslog(6, (char/*const*/  *)"SITE UMASK %03o", (yyvsp + -1)->Number);
    }
  }
// # 602
  if ((yyvsp + -5)->Number) {
// # 604
    while (1) {
      {
// # 604
      tmp_32 = getaclentry("umask", & entry);
      }
// # 604
      if (tmp_32) {
// # 604
        if (entry->arg[0]) {
// # 604
          if (! ((unsigned int )entry->arg[1] != (unsigned int )((void *)0))) {
// # 604
            break;
          }
        } else {
// # 604
          break;
        }
      } else {
// # 604
        break;
      }
      {
// # 605
      tmp_31 = type_match(entry->arg[1]);
      }
// # 605
      if (tmp_31) {
// # 606
        if ((int )(*(entry->arg[0])) == 110) {
          {
// # 607
          ok = 0;
          }
        }
      }
    }
// # 609
    if (ok) {
// # 609
      if (restricted_user) {
        {
// # 619
        reply(553, "Permission denied on server. (umask)");
        }
      } else {
// # 610
        if ((yyvsp + -1)->Number < 0) {
          {
// # 611
          reply(501, "Bad UMASK value");
          }
        } else {
// # 610
          if ((yyvsp + -1)->Number > 511) {
            {
// # 611
            reply(501, "Bad UMASK value");
            }
          } else {
            {
// # 614
            oldmask_0 = umask((unsigned int )(yyvsp + -1)->Number);
// # 615
            reply(200, "UMASK set to %03o (was %03o)", (yyvsp + -1)->Number,
                  oldmask_0);
            }
          }
        }
      }
    } else {
      {
// # 619
      reply(553, "Permission denied on server. (umask)");
      }
    }
  }
// # 622
  break;
  case 38: 
  {
// # 624
  entry_0 = (struct aclmember *)((void *)0);
  }
// # 625
  if (anonymous) {
    {
// # 625
    tmp_33 = 0;
    }
  } else {
    {
// # 625
    tmp_33 = 1;
    }
  }
  {
// # 625
  ok_0 = tmp_33;
  }
// # 627
  if (log_commands) {
// # 628
    if ((yyvsp + -1)->String) {
      {
// # 628
      tmp_34 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 628
      tmp_34 = nullstr;
      }
    }
    {
// # 628
    syslog(6, (char/*const*/  *)"SITE CHMOD %03o %s", (yyvsp + -3)->Number,
           tmp_34);
    }
  }
// # 629
  if ((yyvsp + -7)->Number) {
// # 629
    if ((yyvsp + -1)->String) {
// # 631
      while (1) {
        {
// # 631
        tmp_36 = getaclentry("chmod", & entry_0);
        }
// # 631
        if (tmp_36) {
// # 631
          if (entry_0->arg[0]) {
// # 631
            if (! ((unsigned int )entry_0->arg[1] !=
                   (unsigned int )((void *)0))) {
// # 631
              break;
            }
          } else {
// # 631
            break;
          }
        } else {
// # 631
          break;
        }
        {
// # 632
        tmp_35 = type_match(entry_0->arg[1]);
        }
// # 632
        if (tmp_35) {
// # 633
          if (anonymous) {
// # 634
            if ((int )(*(entry_0->arg[0])) == 121) {
              {
// # 635
              ok_0 = 1;
              }
            }
          } else {
// # 637
            if ((int )(*(entry_0->arg[0])) == 110) {
              {
// # 638
              ok_0 = 0;
              }
            }
          }
        }
      }
// # 640
      if (ok_0) {
// # 644
        if ((yyvsp + -3)->Number < 0) {
          {
// # 645
          reply(501, "CHMOD: Mode value must be between 0 and 0777");
          }
        } else {
// # 644
          if ((yyvsp + -3)->Number > 511) {
            {
// # 645
            reply(501, "CHMOD: Mode value must be between 0 and 0777");
            }
          } else {
            {
// # 647
            tmp_37 = chmod((char/*const*/  *)(yyvsp + -1)->String,
                             (unsigned int )(yyvsp + -3)->Number);
            }
// # 647
            if (tmp_37 < 0) {
              {
// # 649
              perror_reply(550, (yyvsp + -1)->String);
              }
            } else {
              {
// # 653
              wu_realpath((char/*const*/  *)(yyvsp + -1)->String, path,
                          chroot_path);
              }
// # 655
              if (log_security) {
// # 656
                if (anonymous) {
                  {
// # 657
                  syslog(5,
                         (char/*const*/  *)"%s of %s changed permissions for %s",
                         guestpw, remoteident, path);
                  }
                } else {
                  {
// # 660
                  syslog(5,
                         (char/*const*/  *)"%s of %s changed permissions for %s",
                         pw->pw_name, remoteident, path);
                  }
                }
              }
              {
// # 663
              reply(200, "CHMOD command successful.");
              }
            }
          }
        }
      } else {
        {
// # 667
        reply(553, "Permission denied on server. (chmod)");
        }
      }
    }
  }
// # 669
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 670
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 672
  break;
  case 39: 
  {

  }
// # 674
  if (log_commands) {
    {
// # 675
    syslog(6, (char/*const*/  *)"SITE IDLE");
    }
  }
// # 676
  if ((yyvsp + -3)->Number) {
    {
// # 677
    reply(200, "Current IDLE time limit is %d seconds; max %d", timeout_idle,
          timeout_maxidle);
    }
  }
// # 681
  break;
  case 40: 
  {

  }
// # 683
  if (log_commands) {
    {
// # 684
    syslog(6, (char/*const*/  *)"SITE IDLE %d", (yyvsp + -1)->Number);
    }
  }
// # 685
  if ((yyvsp + -5)->Number) {
// # 686
    if ((yyvsp + -1)->Number < 30) {
      {
// # 687
      reply(501, "Maximum IDLE time must be between 30 and %d seconds",
            timeout_maxidle);
      }
    } else {
// # 686
      if ((unsigned int )(yyvsp + -1)->Number > timeout_maxidle) {
        {
// # 687
        reply(501, "Maximum IDLE time must be between 30 and %d seconds",
              timeout_maxidle);
        }
      } else {
        {
// # 692
        timeout_idle = (unsigned int )(yyvsp + -1)->Number;
// # 693
        reply(200, "Maximum IDLE time set to %d seconds", timeout_idle);
        }
      }
    }
  }
// # 696
  break;
  case 41: 
  {

  }
// # 699
  if (log_commands) {
    {
// # 700
    syslog(6, (char/*const*/  *)"SITE GROUP %s", (yyvsp + -1)->String);
    }
  }
// # 701
  if (! restricted_user) {
// # 701
    if ((yyvsp + -5)->Number) {
// # 701
      if ((yyvsp + -1)->String) {
        {
// # 702
        priv_group((yyvsp + -1)->String);
        }
      }
    }
  }
  {
// # 703
  free((void *)(yyvsp + -1)->String);
  }
// # 706
  break;
  case 42: 
  {

  }
// # 709
  if (log_commands) {
    {
// # 710
    syslog(6, (char/*const*/  *)"SITE GPASS password");
    }
  }
// # 711
  if (! restricted_user) {
// # 711
    if ((yyvsp + -5)->Number) {
// # 711
      if ((yyvsp + -1)->String) {
        {
// # 712
        priv_gpass((yyvsp + -1)->String);
        }
      }
    }
  }
  {
// # 713
  free((void *)(yyvsp + -1)->String);
  }
// # 716
  break;
  case 43: 
  {

  }
// # 719
  if (log_commands) {
    {
// # 720
    syslog(6, (char/*const*/  *)"SITE GPASS");
    }
  }
// # 721
  if (! restricted_user) {
// # 721
    if ((yyvsp + -3)->Number) {
      {
// # 722
      priv_gpass((char *)((void *)0));
      }
    }
  }
// # 725
  break;
  case 44: 
  {

  }
// # 727
  if (log_commands) {
    {
// # 728
    syslog(6, (char/*const*/  *)"SITE NEWER %s", (yyvsp + -1)->String);
    }
  }
  {
// # 733
  reply(500, "Command no longer honored by this server");
// # 735
  free((void *)(yyvsp + -1)->String);
  }
// # 737
  break;
  case 45: 
  {

  }
// # 739
  if (log_commands) {
// # 740
    if ((yyvsp + -1)->String) {
      {
// # 740
      tmp_38 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 740
      tmp_38 = nullstr;
      }
    }
    {
// # 740
    syslog(6, (char/*const*/  *)"SITE NEWER %s %s", (yyvsp + -3)->String, tmp_38);
    }
  }
  {
// # 746
  reply(500, "Command no longer honored by this server");
// # 748
  free((void *)(yyvsp + -3)->String);
  }
// # 749
  if ((yyvsp + -1)->String) {
    {
// # 750
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 752
  break;
  case 46: 
  {

  }
// # 754
  if (log_commands) {
    {
// # 755
    syslog(6, (char/*const*/  *)"SITE MINFO %s", (yyvsp + -1)->String);
    }
  }
  {
// # 760
  reply(500, "Command no longer honored by this server");
// # 762
  free((void *)(yyvsp + -1)->String);
  }
// # 764
  break;
  case 47: 
  {

  }
// # 766
  if (log_commands) {
// # 767
    if ((yyvsp + -1)->String) {
      {
// # 767
      tmp_39 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 767
      tmp_39 = nullstr;
      }
    }
    {
// # 767
    syslog(6, (char/*const*/  *)"SITE MINFO %s %s", (yyvsp + -3)->String, tmp_39);
    }
  }
  {
// # 773
  reply(500, "Command no longer honored by this server");
// # 775
  free((void *)(yyvsp + -3)->String);
  }
// # 776
  if ((yyvsp + -1)->String) {
    {
// # 777
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 779
  break;
  case 48: 
  {

  }
// # 784
  if (! restricted_user) {
// # 784
    if ((yyvsp + -5)->Number != 0) {
// # 784
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
        {
// # 786
        tmp_40 = strlen((char/*const*/  *)(yyvsp + -1)->String);
        }
// # 786
        if (tmp_40 + 7U <= sizeof(buf_2)) {
          {
// # 787
          sprintf((char */*   */)(buf_2),
                  (char/*const*/  */*   */)((char/*const*/  *)"index %s"),
                  (yyvsp + -1)->String);
// # 788
          site_exec(buf_2);
          }
        }
      }
    }
  }
// # 791
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 792
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 794
  break;
  case 49: 
  {

  }
// # 796
  if (! restricted_user) {
// # 796
    if ((yyvsp + -5)->Number != 0) {
// # 796
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
        {
// # 797
        site_exec((yyvsp + -1)->String);
        }
      }
    }
  }
// # 799
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 800
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 802
  break;
  case 50: 
  {

  }
// # 805
  if (log_commands) {
// # 806
    if ((yyvsp + -1)->String) {
      {
// # 806
      tmp_41 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 806
      tmp_41 = nullstr;
      }
    }
    {
// # 806
    syslog(6, (char/*const*/  *)"STOU %s", tmp_41);
    }
  }
// # 807
  if ((yyvsp + -3)->Number) {
// # 807
    if ((yyvsp + -1)->String) {
      {
// # 807
      tmp_42 = restrict_check((yyvsp + -1)->String);
      }
// # 807
      if (! tmp_42) {
        {
// # 808
        store((yyvsp + -1)->String, "w", 1);
        }
      }
    }
  }
// # 809
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 810
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 812
  break;
  case 51: 
  {

  }
// # 814
  if (log_commands) {
    {
// # 815
    syslog(6, (char/*const*/  *)"SYST");
    }
  }
// # 816
  if ((yyvsp + -1)->Number) {
    {
// # 822
    reply(215, "UNIX Type: L%d", 8);
    }
  }
// # 828
  break;
  case 52: 
  {

  }
// # 838
  if (log_commands) {
// # 839
    if ((yyvsp + -1)->String) {
      {
// # 839
      tmp_43 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 839
      tmp_43 = nullstr;
      }
    }
    {
// # 839
    syslog(6, (char/*const*/  *)"SIZE %s", tmp_43);
    }
  }
// # 840
  if ((yyvsp + -3)->Number) {
// # 840
    if ((yyvsp + -1)->String) {
      {
// # 840
      tmp_44 = restrict_check((yyvsp + -1)->String);
      }
// # 840
      if (! tmp_44) {
        {
// # 841
        sizecmd((yyvsp + -1)->String);
        }
      }
    }
  }
// # 843
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 844
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 846
  break;
  case 53: 
  {

  }
// # 858
  if (log_commands) {
// # 859
    if ((yyvsp + -1)->String) {
      {
// # 859
      tmp_45 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 859
      tmp_45 = nullstr;
      }
    }
    {
// # 859
    syslog(6, (char/*const*/  *)"MDTM %s", tmp_45);
    }
  }
// # 860
  if ((yyvsp + -3)->Number) {
// # 860
    if ((yyvsp + -1)->String) {
      {
// # 860
      tmp_47 = restrict_check((yyvsp + -1)->String);
      }
// # 860
      if (! tmp_47) {
        {
// # 863
        tmp_46 = statextinline((char/*const*/  *)(yyvsp + -1)->String, & stbuf);
        }
// # 863
        if (tmp_46 < 0) {
          {
// # 864
          perror_reply(550, (yyvsp + -1)->String);
          }
        } else {
// # 865
          if ((stbuf.st_mode & 61440U) != 32768U) {
            {
// # 866
            reply(550, "%s: not a plain file.", (yyvsp + -1)->String);
            }
          } else {
            {
// # 871
            t = gmtime((time_t/*const*/  *)(& stbuf.st_mtim.tv_sec));
// # 872
            reply(213, "%04d%02d%02d%02d%02d%02d", t->tm_year + 1900,
                  t->tm_mon + 1, t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec);
            }
          }
        }
      }
    }
  }
// # 878
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 879
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 881
  break;
  case 54: 
  {

  }
// # 883
  if (log_commands) {
    {
// # 884
    syslog(6, (char/*const*/  *)"QUIT");
    }
  }
  {
// # 892
  reply(221, "Goodbye.");
// # 893
  dologout(0);
  }
// # 895
  break;
  case 55: 
  {
// # 897
  yyerrstatus = 0;
  }
// # 899
  break;
  case 56: 
  {

  }
// # 904
  if (log_commands) {
// # 905
    if ((yyvsp + -1)->String) {
      {
// # 905
      tmp_48 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 905
      tmp_48 = nullstr;
      }
    }
    {
// # 905
    syslog(6, (char/*const*/  *)"RNFR %s", tmp_48);
    }
  }
// # 906
  if ((yyvsp + -3)->Number) {
    {
// # 907
    restart_point = 0L;
    }
  }
// # 908
  if ((yyvsp + -3)->Number) {
// # 908
    if ((yyvsp + -1)->String) {
      {
// # 908
      tmp_49 = restrict_check((yyvsp + -1)->String);
      }
// # 908
      if (! tmp_49) {
        {
// # 909
        fromname = renamefrom((yyvsp + -1)->String);
        }
      }
    }
  }
// # 911
  if ((unsigned int )fromname == (unsigned int )((char *)0)) {
// # 911
    if ((yyvsp + -1)->String) {
      {
// # 912
      free((void *)(yyvsp + -1)->String);
      }
    }
  }
// # 914
  break;
  case 57: 
  {

  }
// # 916
  if (log_commands) {
    {
// # 917
    syslog(6, (char/*const*/  *)"REST %d", (int )restart_point);
    }
  }
// # 918
  if ((yyvsp + -3)->Number) {
    {
// # 919
    fromname = (char *)0;
// # 920
    restart_point = (long )(yyvsp + -1)->Number;
// # 921
    reply(350, "Restarting at %ld. %s", restart_point,
          "Send STORE or RETRIEVE to initiate transfer.");
    }
  }
// # 925
  break;
  case 58: 
  {

  }
// # 928
  if (log_commands) {
    {
// # 929
    syslog(6, (char/*const*/  *)"SITE ALIAS");
    }
  }
// # 930
  if ((yyvsp + -3)->Number) {
    {
// # 931
    alias((char *)((void *)0));
    }
  }
// # 933
  break;
  case 59: 
  {

  }
// # 935
  if (log_commands) {
    {
// # 936
    syslog(6, (char/*const*/  *)"SITE ALIAS %s", (yyvsp + -1)->String);
    }
  }
// # 937
  if ((yyvsp + -5)->Number) {
    {
// # 938
    alias((yyvsp + -1)->String);
    }
  }
// # 939
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 940
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 942
  break;
  case 60: 
  {

  }
// # 944
  if (log_commands) {
    {
// # 945
    syslog(6, (char/*const*/  *)"SITE GROUPS");
    }
  }
// # 946
  if ((yyvsp + -3)->Number) {
    {
// # 947
    print_groups();
    }
  }
// # 949
  break;
  case 61: 
  {

  }
// # 951
  if (log_commands) {
    {
// # 952
    syslog(6, (char/*const*/  *)"SITE CDPATH");
    }
  }
// # 953
  if ((yyvsp + -3)->Number) {
    {
// # 954
    cdpath();
    }
  }
// # 956
  break;
  case 62: 
  {

  }
// # 958
  if (log_commands) {
// # 959
    if ((yyvsp + -1)->String) {
      {
// # 959
      tmp_50 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 959
      tmp_50 = nullstr;
      }
    }
    {
// # 959
    syslog(6, (char/*const*/  *)"SITE CHECKMETHOD %s", tmp_50);
    }
  }
// # 960
  if ((yyvsp + -5)->Number) {
// # 960
    if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
      {
// # 961
      SetCheckMethod((char/*const*/  *)(yyvsp + -1)->String);
      }
    }
  }
// # 962
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 963
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 965
  break;
  case 63: 
  {

  }
// # 967
  if (log_commands) {
    {
// # 968
    syslog(6, (char/*const*/  *)"SITE CHECKMETHOD");
    }
  }
// # 969
  if ((yyvsp + -3)->Number) {
    {
// # 970
    ShowCheckMethod();
    }
  }
// # 972
  break;
  case 64: 
  {

  }
// # 974
  if (log_commands) {
// # 975
    if ((yyvsp + -1)->String) {
      {
// # 975
      tmp_51 = (yyvsp + -1)->String;
      }
    } else {
      {
// # 975
      tmp_51 = nullstr;
      }
    }
    {
// # 975
    syslog(6, (char/*const*/  *)"SITE CHECKSUM %s", tmp_51);
    }
  }
// # 976
  if ((yyvsp + -5)->Number) {
// # 976
    if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
      {
// # 976
      tmp_52 = restrict_check((yyvsp + -1)->String);
      }
// # 976
      if (! tmp_52) {
        {
// # 977
        CheckSum((yyvsp + -1)->String);
        }
      }
    }
  }
// # 978
  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
    {
// # 979
    free((void *)(yyvsp + -1)->String);
    }
  }
// # 981
  break;
  case 65: 
  {

  }
// # 983
  if (log_commands) {
    {
// # 984
    syslog(6, (char/*const*/  *)"SITE CHECKSUM");
    }
  }
// # 985
  if ((yyvsp + -3)->Number) {
    {
// # 986
    CheckSumLastFile();
    }
  }
// # 988
  break;
  case 67: 
  {
// # 995
  yyval.String = (char *)malloc(1U);
// # 996
  (*(yyval.String + 0)) = '\0';
  }
// # 998
  break;
  case 70: 
  {
// # 1008
  a = (char *)(& cliaddr);
// # 1009
  (*(a + 0)) = (char )(yyvsp + -10)->Number;
// # 1010
  (*(a + 1)) = (char )(yyvsp + -8)->Number;
// # 1011
  (*(a + 2)) = (char )(yyvsp + -6)->Number;
// # 1012
  (*(a + 3)) = (char )(yyvsp + -4)->Number;
// # 1013
  p = (char *)(& cliport);
// # 1014
  (*(p + 0)) = (char )(yyvsp + -2)->Number;
// # 1015
  (*(p + 1)) = (char )(yyvsp + 0)->Number;
  }
// # 1017
  break;
  case 71: 
  {
// # 1021
  yyval.Number = 1;
  }
// # 1023
  break;
  case 72: 
  {
// # 1025
  yyval.Number = 2;
  }
// # 1027
  break;
  case 73: 
  {
// # 1029
  yyval.Number = 3;
  }
// # 1031
  break;
  case 74: 
  {
// # 1035
  cmd_type = 1;
// # 1036
  cmd_form = 1;
  }
// # 1038
  break;
  case 75: 
  {
// # 1040
  cmd_type = 1;
// # 1041
  cmd_form = (yyvsp + 0)->Number;
  }
// # 1043
  break;
  case 76: 
  {
// # 1045
  cmd_type = 2;
// # 1046
  cmd_form = 1;
  }
// # 1048
  break;
  case 77: 
  {
// # 1050
  cmd_type = 2;
// # 1051
  cmd_form = (yyvsp + 0)->Number;
  }
// # 1053
  break;
  case 78: 
  {
// # 1055
  cmd_type = 3;
  }
// # 1057
  break;
  case 79: 
  {
// # 1059
  cmd_type = 4;
// # 1060
  cmd_bytesz = 8;
  }
// # 1062
  break;
  case 80: 
  {
// # 1064
  cmd_type = 4;
// # 1065
  cmd_bytesz = (yyvsp + 0)->Number;
  }
// # 1067
  break;
  case 81: 
  {
// # 1070
  cmd_type = 4;
// # 1071
  cmd_bytesz = (yyvsp + 0)->Number;
  }
// # 1073
  break;
  case 82: 
  {
// # 1077
  yyval.Number = 1;
  }
// # 1079
  break;
  case 83: 
  {
// # 1081
  yyval.Number = 2;
  }
// # 1083
  break;
  case 84: 
  {
// # 1085
  yyval.Number = 3;
  }
// # 1087
  break;
  case 85: 
  {
// # 1091
  yyval.Number = 1;
  }
// # 1093
  break;
  case 86: 
  {
// # 1095
  yyval.Number = 2;
  }
// # 1097
  break;
  case 87: 
  {
// # 1099
  yyval.Number = 3;
  }
// # 1101
  break;
  case 88: 
  {

  }
// # 1110
  if (restricted_user) {
// # 1110
    if (logged_in) {
// # 1110
      if ((yyvsp + 0)->String) {
        {
// # 1110
        tmp_62 = strncmp((char/*const*/  *)(yyvsp + 0)->String,
                           (char/*const*/  *)"/", 1U);
        }
// # 1110
        if (tmp_62 == 0) {
          {
// # 1116
          tmp_54 = strlen((char/*const*/  *)(yyvsp + 0)->String);
// # 1116
          tmp_55 = (char *)calloc((1U + tmp_54) + 1U, sizeof(char ));
// # 1116
          t_0 = tmp_55;
          }
// # 1117
          if ((unsigned int )t_0 == (unsigned int )((void *)0)) {
            {
// # 1118
            tmp_56 = errno_location();
// # 1118
            (*tmp_56) = 11;
// # 1119
            perror_reply(550, (yyvsp + 0)->String);
// # 1120
            yyval.String = (char *)((void *)0);
            }
          } else {
            {
// # 1123
            (*(t_0 + 0)) = '~';
// # 1124
            (*(t_0 + 1)) = '\0';
// # 1125
            tmp_58 = strncmp((char/*const*/  *)(yyvsp + 0)->String,
                               (char/*const*/  *)"/../", 4U);
            }
// # 1125
            if (tmp_58 == 0) {
              {
// # 1126
              strcpy((char */*   */)(t_0 + 1),
                     (char/*const*/  */*   */)((char/*const*/  *)((yyvsp +
                                                                         0)->String +
                                                                        3)));
              }
            } else {
              {
// # 1127
              tmp_57 = strcmp((char/*const*/  *)(yyvsp + 0)->String,
                                (char/*const*/  *)"/..");
              }
// # 1127
              if (tmp_57 != 0) {
                {
// # 1128
                strcpy((char */*   */)(t_0 + 1),
                       (char/*const*/  */*   */)((char/*const*/  *)(yyvsp +
                                                                          0)->String));
                }
              }
            }
            {
// # 1129
            globlist = ftpglob(t_0);
            }
// # 1130
            if (globerr) {
              {
// # 1131
              reply(550, "%s", globerr);
// # 1132
              yyval.String = (char *)((void *)0);
              }
// # 1133
              if (globlist) {
                {
// # 1134
                blkfree(globlist);
// # 1135
                free((void *)((char *)globlist));
                }
              }
            } else {
// # 1138
              if (globlist) {
// # 1138
                if ((*globlist)) {
                  {
// # 1139
                  yyval.String = (*globlist);
// # 1140
                  blkfree(globlist + 1);
// # 1141
                  free((void *)((char *)globlist));
                  }
                } else {
                  goto _L_1;
                }
              } else {
                _L_1: 
// # 1144
                if (globlist) {
                  {
// # 1145
                  blkfree(globlist);
// # 1146
                  free((void *)((char *)globlist));
                  }
                }
                {
// # 1148
                tmp_59 = errno_location();
// # 1148
                (*tmp_59) = 2;
// # 1149
                perror_reply(550, (yyvsp + 0)->String);
// # 1150
                yyval.String = (char *)((void *)0);
                }
              }
            }
            {
// # 1152
            free((void *)t_0);
            }
          }
          {
// # 1154
          free((void *)(yyvsp + 0)->String);
          }
        } else {
          goto _L_5;
        }
      } else {
        goto _L_5;
      }
    } else {
      goto _L_5;
    }
  } else {
    _L_5: 
// # 1156
    if (logged_in) {
// # 1156
      if ((yyvsp + 0)->String) {
        {
// # 1156
        tmp_61 = strncmp((char/*const*/  *)(yyvsp + 0)->String,
                           (char/*const*/  *)"~", 1U);
        }
// # 1156
        if (tmp_61 == 0) {
          {
// # 1159
          globlist_0 = ftpglob((yyvsp + 0)->String);
          }
// # 1160
          if (globerr) {
            {
// # 1161
            reply(550, "%s", globerr);
// # 1162
            yyval.String = (char *)((void *)0);
            }
// # 1163
            if (globlist_0) {
              {
// # 1164
              blkfree(globlist_0);
// # 1165
              free((void *)((char *)globlist_0));
              }
            }
          } else {
// # 1168
            if (globlist_0) {
// # 1168
              if ((*globlist_0)) {
                {
// # 1169
                yyval.String = (*globlist_0);
// # 1170
                blkfree(globlist_0 + 1);
// # 1171
                free((void *)((char *)globlist_0));
                }
              } else {
                goto _L_2;
              }
            } else {
              _L_2: 
// # 1174
              if (globlist_0) {
                {
// # 1175
                blkfree(globlist_0);
// # 1176
                free((void *)((char *)globlist_0));
                }
              }
              {
// # 1178
              tmp_60 = errno_location();
// # 1178
              (*tmp_60) = 2;
// # 1179
              perror_reply(550, (yyvsp + 0)->String);
// # 1180
              yyval.String = (char *)((void *)0);
              }
            }
          }
          {
// # 1182
          free((void *)(yyvsp + 0)->String);
          }
        } else {
          {
// # 1185
          yyval.String = (yyvsp + 0)->String;
          }
        }
      } else {
        {
// # 1185
        yyval.String = (yyvsp + 0)->String;
        }
      }
    } else {
      {
// # 1185
      yyval.String = (yyvsp + 0)->String;
      }
    }
  }
// # 1187
  break;
  case 91: 
  {
// # 1203
  dec = (yyvsp + 0)->Number;
// # 1204
  multby = 1;
// # 1205
  ret = 0;
  }
// # 1206
  while (dec) {
    {
// # 1207
    digit_0 = dec % 10;
    }
// # 1208
    if (digit_0 > 7) {
      {
// # 1209
      ret = -1;
      }
// # 1210
      break;
    }
    {
// # 1212
    ret += digit_0 * multby;
// # 1213
    multby *= 8;
// # 1214
    dec /= 10;
    }
  }
  {
// # 1216
  yyval.Number = ret;
  }
// # 1218
  break;
  case 92: 
  {

  }
// # 1222
  if (logged_in) {
    {
// # 1223
    yyval.Number = 1;
    }
  } else {
// # 1225
    if (log_commands) {
      {
// # 1226
      syslog(6, (char/*const*/  *)"cmd failure - not logged in");
      }
    }
    {
// # 1227
    reply(530, "Please login with USER and PASS.");
// # 1228
    yyval.Number = 0;
// # 1229
    yyerrorcalled = 1;
    }
  }
// # 1232
  break;
  }
  {
// # 707 "/usr/share/bison/bison.simple"
  yyvsp -= yylen;
// # 708
  yyssp -= yylen;
// # 724
  yyvsp ++;
// # 724
  (*yyvsp) = yyval;
// # 733
  yyn = (int )yyr1[yyn];
// # 735
  yystate = (int/*const*/  )yypgoto[yyn - 77] + (int/*const*/  )(*yyssp);
  }
// # 736
  if (yystate >= 0) {
// # 736
    if (yystate <= 256) {
// # 736
      if ((int/*const*/  )yycheck[yystate] == (int/*const*/  )(*yyssp)) {
        {
// # 737
        yystate = (int )yytable[yystate];
        }
      } else {
        {
// # 739
        yystate = (int )yydefgoto[yyn - 77];
        }
      }
    } else {
      {
// # 739
      yystate = (int )yydefgoto[yyn - 77];
      }
    }
  } else {
    {
// # 739
    yystate = (int )yydefgoto[yyn - 77];
    }
  }
  goto yynewstate;
  yyerrlab: 
// # 749
  if (! yyerrstatus) {
    {
// # 751
    yynerrs ++;
// # 799
    yyerror("parse error");
    }
  }
  goto yyerrlab1;
  yyerrlab1: 
// # 808
  if (yyerrstatus == 3) {
// # 814
    if (yychar == 0) {
      goto yyabortlab;
    }
    {
// # 818
    yychar = -2;
    }
  }
  {
// # 824
  yyerrstatus = 3;
  }
  goto yyerrhandle;
  yyerrdefault: 
// # 850
  if ((unsigned int )yyssp == (unsigned int )yyss) {
    goto yyabortlab;
  }
  {
// # 852
  yyvsp --;
// # 853
  yyssp --;
// # 853
  yystate = (int )(*yyssp);
  }
  yyerrhandle: 
  {
// # 873
  yyn = (int )yypact[yystate];
  }
// # 874
  if (yyn == -32768) {
    goto yyerrdefault;
  }
  {
// # 877
  yyn ++;
  }
// # 878
  if (yyn < 0) {
    goto yyerrdefault;
  } else {
// # 878
    if (yyn > 256) {
      goto yyerrdefault;
    } else {
// # 878
      if ((int/*const*/  )yycheck[yyn] != 1) {
        goto yyerrdefault;
      }
    }
  }
  {
// # 881
  yyn = (int )yytable[yyn];
  }
// # 882
  if (yyn < 0) {
// # 884
    if (yyn == -32768) {
      goto yyerrdefault;
    }
    {
// # 886
    yyn = - yyn;
    }
    goto yyreduce;
  } else {
// # 889
    if (yyn == 0) {
      goto yyerrdefault;
    }
  }
// # 892
  if (yyn == 267) {
    goto yyacceptlab;
  }
  {
// # 897
  yyvsp ++;
// # 897
  (*yyvsp) = yylval;
// # 902
  yystate = yyn;
  }
  goto yynewstate;
  yyacceptlab: 
  {
// # 910
  yyresult = 0;
  }
  goto yyreturn;
  yyabortlab: 
  {
// # 917
  yyresult = 1;
  }
  goto yyreturn;
  yyoverflowlab: 
  {
// # 924
  yyerror("parser stack overflow");
// # 925
  yyresult = 2;
  }
  yyreturn: 
// # 930
  if ((unsigned int )yyss != (unsigned int )(yyssa)) {
// # 931
/*     while (1) { */
/*       break; */
/*     } */
  }
// # 933
  return (yyresult);
}
}
// # 1249 "ftpcmd.y"
// # 1321
struct tab *lookup(struct tab *p , char *cmd ) 
{ int tmp ;

  {
// # 1323
  while ((unsigned int )p->name != (unsigned int )((void *)0)) {
    {
// # 1324
    tmp = strcmp((char/*const*/  *)cmd, (char/*const*/  *)p->name);
    }
// # 1324
    if (tmp == 0) {
// # 1325
      return (p);
    }
    {
// # 1323
    p ++;
    }
  }
// # 1326
  return ((struct tab *)0);
}
}
// # 1334
char *wu_getline(char *s , int n , FILE *iop ) 
{ register int c ;
  register char *cs ;
  char *passtxt ;
  char *tmp ;
  char *tmp_0 ;
  int tmp_1 ;
  FILE *tmp_2 ;
  FILE *tmp_3 ;
  char *tmp_4 ;
  int tmp_5 ;
  int *tmp_6 ;
  char *tmp_7 ;
  int tmp_8 ;

  {
  {
// # 1338
  passtxt = "PASS password\r\n";
// # 1340
  cs = s;
// # 1342
  c = 0;
  }
// # 1342
  while (1) {
// # 1342
    if ((int )tmpline[c] != 0) {
      {
// # 1342
      n --;
      }
// # 1342
      if (! (n > 0)) {
// # 1342
        break;
      }
    } else {
// # 1342
      break;
    }
    {
// # 1343
    tmp = cs;
// # 1343
    cs ++;
// # 1343
    (*tmp) = tmpline[c];
    }
// # 1344
    if ((int )tmpline[c] == 10) {
      {
// # 1345
      tmp_0 = cs;
// # 1345
      cs ++;
// # 1345
      (*tmp_0) = '\0';
      }
// # 1346
      if (debug) {
        {
// # 1347
        tmp_1 = strncasecmp((char/*const*/  *)passtxt, (char/*const*/  *)s, 5U);
        }
// # 1347
        if (tmp_1 == 0) {
          {
// # 1348
          syslog(7, (char/*const*/  *)"command: %s", passtxt);
          }
        } else {
          {
// # 1350
          syslog(7, (char/*const*/  *)"command: %s", s);
          }
        }
      }
      {
// # 1352
      tmpline[0] = '\0';
      }
// # 1353
      return (s);
    }
// # 1355
    if (c == 0) {
      {
// # 1356
      tmpline[0] = '\0';
      }
    }
    {
// # 1342
    c ++;
    }
  }
  retry: 
// # 1359
  while (1) {
    {
// # 1359
    c = _IO_getc(iop);
    }
// # 1359
    if (! (c != -1)) {
// # 1359
      break;
    }
    {
// # 1364
    c &= 255;
    }
// # 1365
    if (c == 255) {
      {
// # 1366
      c = _IO_getc(iop);
      }
// # 1366
      if (c != -1) {
        {
// # 1371
        c &= 255;
        }
// # 1372
        switch (c) {
        case 251: 
        {

        }
        case 252: 
        {
// # 1375
        c = _IO_getc(iop);
// # 1380
        printf((char/*const*/  */*   */)((char/*const*/  *)"%c%c%c"), 255,
               254, 255 & c);
// # 1381
        tmp_2 = get_stdout();
        {
// # 113 "spec.work"
        tmp_2->BLAST_FLAG = 1;
        {

        }
        }

        {
// # 40
        if (! (tmp_2->BLAST_FLAG == 1)) {
// # 42
          error__();
        }
        {

        }
        }
// # 1381 "ftpcmd.y"
        fflush(tmp_2);
        }
// # 1382
        continue;
        case 253: 
        {

        }
        case 254: 
        {
// # 1385
        c = _IO_getc(iop);
// # 1390
        printf((char/*const*/  */*   */)((char/*const*/  *)"%c%c%c"), 255,
               252, 255 & c);
// # 1391
        tmp_3 = get_stdout();
        {
// # 113 "spec.work"
        tmp_3->BLAST_FLAG = 1;
        {

        }
        }

        {
// # 40
        if (! (tmp_3->BLAST_FLAG == 1)) {
// # 42
          error__();
        }
        {

        }
        }
// # 1391 "ftpcmd.y"
        fflush(tmp_3);
        }
// # 1392
        continue;
        case 255: 
        {

        }
// # 1394
        break;
        default: 
        {

        }
// # 1396
        continue;
        }
      }
    }
    {
// # 1400
    tmp_4 = cs;
// # 1400
    cs ++;
// # 1400
    (*tmp_4) = (char )c;
// # 1401
    n --;
    }
// # 1401
    if (n <= 0) {
// # 1402
      break;
    } else {
// # 1401
      if (c == 10) {
// # 1402
        break;
      }
    }
  }
// # 1405
  if (c == -1) {
// # 1405
    if ((unsigned int )cs == (unsigned int )s) {
      {
// # 1406
      tmp_5 = ferror(iop);
      }
// # 1406
      if (tmp_5) {
        {
// # 1406
        tmp_6 = errno_location();
        }
// # 1406
        if ((*tmp_6) == 4) {
          goto retry;
        }
      }
// # 1408
      return ((char *)((void *)0));
    }
  }
  {
// # 1411
  tmp_7 = cs;
// # 1411
  cs ++;
// # 1411
  (*tmp_7) = '\0';
  }
// # 1412
  if (debug) {
    {
// # 1413
    tmp_8 = strncasecmp((char/*const*/  *)passtxt, (char/*const*/  *)s, 5U);
    }
// # 1413
    if (tmp_8 == 0) {
      {
// # 1414
      syslog(7, (char/*const*/  *)"command: %s", passtxt);
      }
    } else {
      {
// # 1416
      syslog(7, (char/*const*/  *)"command: %s", s);
      }
    }
  }
// # 1418
  return (s);
}
}
// # 1421
static void toolong(int a ) 
{ time_t now ;
  char *tmp ;
  char/*const*/  *tmp_0 ;

  {
  {
// # 1425
  reply(421, "Timeout (%d seconds): closing control connection.", timeout_idle);
// # 1427
  time(& now);
  }
// # 1428
  if (logging) {
    {
// # 1429
    tmp = ctime((time_t/*const*/  *)(& now));
    }
// # 1429
    if (pw) {
      {
// # 1429
      tmp_0 = (char/*const*/  *)pw->pw_name;
      }
    } else {
      {
// # 1429
      tmp_0 = (char/*const*/  *)"unknown";
      }
    }
    {
// # 1429
    syslog(6, (char/*const*/  *)"User %s timed out after %d seconds at %.24s",
           tmp_0, timeout_idle, tmp);
    }
  }
  {
// # 1433
  dologout(1);
  }
// # 1434
  return;
}
}
// # 1438
static int cpos  ;
// # 1438
static int state  ;
// # 1436
int yylex(void) 
{ register char *cp ;
  register char *cp2 ;
  register struct tab *p ;
  int n ;
  time_t now ;
  char c ;
  int tmp ;
  FILE *tmp_0 ;
  char *tmp_1 ;
  char *tmp_2 ;
  int tmp_3 ;
  int tmp_4 ;
  int tmp_5 ;
  int tmp_6 ;
  int tmp_7 ;
  int tmp_8 ;
  int tmp_9 ;

  {
  {
// # 1443
  c = '\0';
  }
// # 1447
  while (1) {
// # 1448
    switch (state) {
    case 0: 
    {
// # 1451
    yyerrorcalled = 0;
// # 1453
    setproctitle((char/*const*/  *)"%s: IDLE", proctitle);
// # 1455
    tmp = is_shutdown(! logged_in != 0, 0);
    }
// # 1455
    if (tmp != 0) {
      {
// # 1456
      reply(221, "Server shutting down.  Goodbye.");
// # 1457
      dologout(0);
      }
    }
    {
// # 1460
    time(& now);
    }
// # 1461
    if (limit_time > 0L) {
// # 1461
      if ((now - login_time) / 60L > limit_time) {
        {
// # 1462
        reply(221, "Time limit reached.  Goodbye.");
// # 1463
        dologout(0);
        }
      }
    }
    {
// # 1473
    signal(14, & toolong);
// # 1474
    alarm(timeout_idle);
// # 1476
    tmp_0 = get_stdin();
    {
// # 121 "spec.work"
    tmp_0->BLAST_FLAG = 1;
    {

    }
    }
// # 1476 "ftpcmd.y"
    tmp_1 = wu_getline(cbuf, (int )(sizeof(cbuf) - 1U), tmp_0);
    }
// # 1476
    if ((unsigned int )tmp_1 == (unsigned int )((void *)0)) {
      {
// # 1477
      alarm(0U);
// # 1478
      reply(221, "You could at least say goodbye.");
// # 1479
      dologout(0);
      }
    }
    {
// # 1482
    alarm(0U);
// # 1484
    cp = strchr((char/*const*/  *)(cbuf), (int )'\r');
    }
// # 1484
    if (cp) {
      {
// # 1485
      tmp_2 = cp;
// # 1485
      cp ++;
// # 1485
      (*tmp_2) = '\n';
// # 1486
      (*cp) = '\0';
      }
    }
    {
// # 1488
    cp = strpbrk((char/*const*/  *)(cbuf), (char/*const*/  *)" \n");
    }
// # 1488
    if (cp) {
      {
// # 1489
      cpos = cp - cbuf;
      }
    }
// # 1490
    if (cpos == 0) {
      {
// # 1491
      cpos = 4;
      }
    }
    {
// # 1492
    c = cbuf[cpos];
// # 1493
    cbuf[cpos] = '\0';
// # 1494
    upper(cbuf);
// # 1501
    p = lookup(cmdtab, cbuf);
// # 1502
    cbuf[cpos] = c;
// # 1503
    tmp_3 = strncasecmp((char/*const*/  *)(cbuf), (char/*const*/  *)"PASS", 4U);
    }
// # 1503
    if (tmp_3 != 0) {
      {
// # 1503
      tmp_4 = strncasecmp((char/*const*/  *)(cbuf),
                            (char/*const*/  *)"SITE GPASS", 10U);
      }
// # 1503
      if (tmp_4 != 0) {
        {
// # 1505
        cp = strchr((char/*const*/  *)(cbuf), (int )'\n');
        }
// # 1505
        if (cp) {
          {
// # 1506
          (*cp) = '\0';
          }
        }
        {
// # 1507
        setproctitle((char/*const*/  *)"%s: %s", proctitle, cbuf);
        }
// # 1508
        if (cp) {
          {
// # 1509
          (*cp) = '\n';
          }
        }
      }
    }
// # 1511
    if ((unsigned int )p != (unsigned int )((struct tab *)0)) {
// # 1512
      if ((int )p->implemented == 0) {
        {
// # 1513
        nack(p->name);
// # 1514
        longjmp(errcatch, 0);
        }
      }
      {
// # 1517
      state = (int )p->state;
// # 1518
      yylval.String = p->name;
      }
// # 1519
      return ((int )p->token);
    }
// # 1521
    break;
    case 7: 
    {

    }
// # 1524
    if ((int )cbuf[cpos] == 32) {
      {
// # 1525
      cpos ++;
      }
// # 1526
      return (269);
    }
    {
// # 1528
    cp = & cbuf[cpos];
// # 1529
    cp2 = strpbrk((char/*const*/  *)cp, (char/*const*/  *)" \n");
    }
// # 1529
    if (cp2) {
      {
// # 1530
      cpos = cp2 - cbuf;
      }
    }
    {
// # 1531
    c = cbuf[cpos];
// # 1532
    cbuf[cpos] = '\0';
// # 1533
    upper(cp);
// # 1534
    p = lookup(sitetab, cp);
// # 1535
    cbuf[cpos] = c;
    }
// # 1536
    if ((unsigned int )p != (unsigned int )((struct tab *)0)) {
// # 1538
      if ((int )p->implemented == 0) {
        {
// # 1545
        state = 0;
// # 1546
        nack(p->name);
// # 1547
        longjmp(errcatch, 0);
        }
      }
      {
// # 1550
      state = (int )p->state;
// # 1551
      yylval.String = p->name;
      }
// # 1552
      return ((int )p->token);
    }
    {
// # 1554
    state = 0;
    }
// # 1555
    break;
    case 4: 
    {

    }
// # 1558
    if ((int )cbuf[cpos] == 10) {
      {
// # 1559
      state = 0;
      }
// # 1560
      return (270);
    }
    case 2: 
    {

    }
    case 5: 
    {

    }
    dostr1: 
// # 1567
    if ((int )cbuf[cpos] == 32) {
      {
// # 1568
      cpos ++;
      }
// # 1569
      if (state == 4) {
        {
// # 1570
        state = 3;
        }
      } else {
        {
// # 1572
        state ++;
        }
      }
// # 1573
      return (269);
    }
// # 1575
    break;
    case 6: 
    {

    }
// # 1578
    if ((int )cbuf[cpos] == 10) {
      {
// # 1579
      state = 0;
      }
// # 1580
      return (270);
    }
    case 3: 
    {
// # 1585
    cp = & cbuf[cpos];
// # 1586
    n = (int )strlen((char/*const*/  *)cp);
// # 1587
    cpos += n - 1;
    }
// # 1591
    if (n > 1) {
// # 1591
      if ((int )cbuf[cpos] == 10) {
        {
// # 1592
        cbuf[cpos] = '\0';
// # 1593
        yylval.String = copy(cp);
// # 1594
        cbuf[cpos] = '\n';
// # 1595
        state = 1;
        }
// # 1596
        return (272);
      }
    }
// # 1598
    break;
    case 8: 
    {

    }
// # 1601
    if ((int )cbuf[cpos] == 32) {
      {
// # 1602
      cpos ++;
      }
// # 1603
      return (269);
    }
    {
// # 1605
    tmp_6 = _get__ctype_b((int )cbuf[cpos]);
    }
// # 1605
    if (tmp_6 & 2048) {
      {
// # 1606
      cp = & cbuf[cpos];
      }
// # 1607
      while (1) {
        {
// # 1607
        cpos ++;
// # 1607
        tmp_5 = _get__ctype_b((int )cbuf[cpos]);
        }
// # 1607
        if (! (tmp_5 & 2048)) {
// # 1607
          break;
        }
      }
      {
// # 1608
      c = cbuf[cpos];
// # 1609
      cbuf[cpos] = '\0';
// # 1610
      yylval.Number = atoi((char/*const*/  *)cp);
// # 1611
      cbuf[cpos] = c;
// # 1612
      state = 2;
      }
// # 1613
      return (273);
    }
    {
// # 1615
    state = 2;
    }
    goto dostr1;
    case 9: 
    {

    }
// # 1619
    if ((int )cbuf[cpos] == 32) {
      {
// # 1620
      cpos ++;
      }
// # 1621
      return (269);
    }
    {
// # 1624
    cp = & cbuf[cpos];
// # 1625
    cp2 = strpbrk((char/*const*/  *)cp, (char/*const*/  *)" \n");
    }
// # 1626
    if ((unsigned int )cp2 != (unsigned int )((void *)0)) {
      {
// # 1627
      c = (*cp2);
// # 1628
      (*cp2) = '\0';
      }
    }
    {
// # 1630
    n = (int )strlen((char/*const*/  *)cp);
// # 1631
    cpos += n;
    }
// # 1635
    if (cp2 - cp > 1) {
      {
// # 1636
      yylval.String = copy(cp);
// # 1637
      cbuf[cpos] = c;
// # 1638
      state = 4;
      }
// # 1639
      return (272);
    }
// # 1641
    break;
    case 1: 
    {
// # 1644
    tmp_8 = _get__ctype_b((int )cbuf[cpos]);
    }
// # 1644
    if (tmp_8 & 2048) {
      {
// # 1645
      cp = & cbuf[cpos];
      }
// # 1646
      while (1) {
        {
// # 1646
        cpos ++;
// # 1646
        tmp_7 = _get__ctype_b((int )cbuf[cpos]);
        }
// # 1646
        if (! (tmp_7 & 2048)) {
// # 1646
          break;
        }
      }
      {
// # 1647
      c = cbuf[cpos];
// # 1648
      cbuf[cpos] = '\0';
// # 1649
      yylval.Number = atoi((char/*const*/  *)cp);
// # 1650
      cbuf[cpos] = c;
      }
// # 1651
      return (273);
    }
    {
// # 1653
    tmp_9 = cpos;
// # 1653
    cpos ++;
    }
// # 1653
    switch ((int )cbuf[tmp_9]) {
    case 10: 
    {
// # 1656
    state = 0;
    }
// # 1657
    return (270);
    case 32: 
    {

    }
// # 1660
    return (269);
    case 44: 
    {

    }
// # 1663
    return (271);
    case 65: 
    {

    }
    case 97: 
    {

    }
// # 1667
    return (257);
    case 66: 
    {

    }
    case 98: 
    {

    }
// # 1671
    return (258);
    case 67: 
    {

    }
    case 99: 
    {

    }
// # 1675
    return (259);
    case 69: 
    {

    }
    case 101: 
    {

    }
// # 1679
    return (260);
    case 70: 
    {

    }
    case 102: 
    {

    }
// # 1683
    return (261);
    case 73: 
    {

    }
    case 105: 
    {

    }
// # 1687
    return (262);
    case 76: 
    {

    }
    case 108: 
    {

    }
// # 1691
    return (263);
    case 78: 
    {

    }
    case 110: 
    {

    }
// # 1695
    return (264);
    case 80: 
    {

    }
    case 112: 
    {

    }
// # 1699
    return (265);
    case 82: 
    {

    }
    case 114: 
    {

    }
// # 1703
    return (266);
    case 83: 
    {

    }
    case 115: 
    {

    }
// # 1707
    return (267);
    case 84: 
    {

    }
    case 116: 
    {

    }
// # 1711
    return (268);
    }
// # 1714
    break;
    default: 
    {
// # 1717
    fatal("Unknown state in scanner.");
    }
    }
// # 1719
    if (yyerrorcalled == 0) {
      {
// # 1720
      cp = strchr((char/*const*/  *)(cbuf), (int )'\n');
      }
// # 1720
      if ((unsigned int )cp != (unsigned int )((void *)0)) {
        {
// # 1721
        (*cp) = '\0';
        }
      }
// # 1722
      if (logged_in) {
        {
// # 1723
        reply(500, "\'%s\': command not understood.", cbuf);
        }
      } else {
        {
// # 1725
        reply(530, "Please login with USER and PASS.");
        }
      }
    }
    {
// # 1727
    state = 0;
// # 1728
    longjmp(errcatch, 0);
    }
  }
// # 1730
  return (0);
}
}
// # 1732
void upper(char *s ) 
{ int tmp ;

  {
// # 1734
  while ((int )(*s) != 0) {
    {
// # 1735
    tmp = _get__ctype_b((int )(*s));
    }
// # 1735
    if (tmp & 512) {
      {
// # 1736
      (*s) = (char )toupper((int )(*s));
      }
    }
    {
// # 1737
    s ++;
    }
  }
// # 1739
  return;
}
}
// # 1741
char *copy(char *s ) 
{ char *p ;
  size_t tmp ;

  {
  {
// # 1745
  tmp = strlen((char/*const*/  *)s);
// # 1745
  p = (char *)malloc(tmp + 1U);
  }
// # 1746
  if ((unsigned int )p == (unsigned int )((void *)0)) {
    {
// # 1747
    fatal("Ran out of memory.");
    }
  }
  {
// # 1748
  strcpy((char */*   */)p,
         (char/*const*/  */*   */)((char/*const*/  *)s));
  }
// # 1749
  return (p);
}
}
// # 1752
void help(struct tab *ctab , char *s ) 
{ struct aclmember *entry ;
  struct tab *c ;
  size_t width ;
  size_t NCMDS ;
  char *type_0 ;
  size_t len ;
  size_t tmp ;
  register size_t i ;
  register size_t j ;
  register size_t w ;
  size_t columns ;
  size_t lines ;
  char line_0[8192] ;
  char *ptr ;
  int tmp_0 ;
  size_t tmp_1 ;
  char *tmp_2 ;
  FILE *tmp_3 ;
  struct aclmember *tmp_4 ;

  {
  {
// # 1754
  entry = (struct aclmember *)((void *)0);
  }
// # 1759
  if ((unsigned int )ctab == (unsigned int )(sitetab)) {
    {
// # 1760
    type_0 = "SITE ";
    }
  } else {
    {
// # 1762
    type_0 = "";
    }
  }
  {
// # 1763
  width = 0U;
// # 1763
  NCMDS = 0U;
// # 1764
  c = ctab;
  }
// # 1764
  while ((unsigned int )c->name != (unsigned int )((void *)0)) {
    {
// # 1765
    tmp = strlen((char/*const*/  *)c->name);
// # 1765
    len = tmp;
    }
// # 1767
    if (len > width) {
      {
// # 1768
      width = len;
      }
    }
    {
// # 1769
    NCMDS ++;
// # 1764
    c ++;
    }
  }
  {
// # 1771
  width = (width + 8U) & 4294967288U;
  }
// # 1772
  if ((unsigned int )s == (unsigned int )((char *)0)) {
    {
// # 1776
    lreply(214, "The following %scommands are recognized %s.", type_0,
           "(* =>\'s unimplemented)");
// # 1778
    columns = 76U / width;
    }
// # 1779
    if (columns == 0U) {
      {
// # 1780
      columns = 1U;
      }
    }
    {
// # 1781
    lines = ((NCMDS + columns) - 1U) / columns;
// # 1782
    i = 0U;
    }
// # 1782
    while (i < lines) {
      {
// # 1783
      ptr = line_0;
// # 1784
      strcpy((char */*   */)ptr,
             (char/*const*/  */*   */)((char/*const*/  *)"   "));
// # 1785
      ptr += 3;
// # 1786
      j = 0U;
      }
// # 1786
      while (j < columns) {
        {
// # 1787
        c = (ctab + j * lines) + i;
        }
// # 1788
        if (c->implemented) {
          {
// # 1788
          tmp_0 = (int )' ';
          }
        } else {
          {
// # 1788
          tmp_0 = (int )'*';
          }
        }
        {
// # 1788
        sprintf((char */*   */)ptr,
                (char/*const*/  */*   */)((char/*const*/  *)"%s%c"),
                c->name, tmp_0);
// # 1790
        tmp_1 = strlen((char/*const*/  *)c->name);
// # 1790
        w = tmp_1 + 1U;
// # 1791
        ptr += w;
        }
// # 1792
        if ((unsigned int )(c + lines) >= (unsigned int )(ctab + NCMDS)) {
// # 1793
          break;
        }
// # 1794
        while (w < width) {
          {
// # 1795
          tmp_2 = ptr;
// # 1795
          ptr ++;
// # 1795
          (*tmp_2) = ' ';
// # 1796
          w ++;
          }
        }
        {
// # 1786
        j ++;
        }
      }
      {
// # 1799
      (*ptr) = '\0';
// # 1800
      lreply(0, "%s", line_0);
// # 1782
      i ++;
      }
    }
    {
// # 1802
    tmp_3 = get_stdout();
    {
// # 113 "spec.work"
    tmp_3->BLAST_FLAG = 1;
    {

    }
    }

    {
// # 40
    if (! (tmp_3->BLAST_FLAG == 1)) {
// # 42
      error__();
    }
    {

    }
    }
// # 1802 "ftpcmd.y"
    fflush(tmp_3);
// # 1808
    tmp_4 = getaclentry("email", & entry);
    }
// # 1808
    if (tmp_4) {
// # 1808
      if (entry->arg[0]) {
        {
// # 1809
        reply(214, "Direct comments to %s.", entry->arg[0]);
        }
      } else {
        {
// # 1811
        reply(214, "Direct comments to ftp-bugs@%s.", hostname);
        }
      }
    } else {
      {
// # 1811
      reply(214, "Direct comments to ftp-bugs@%s.", hostname);
      }
    }
// # 1812
    return;
  }
  {
// # 1814
  upper(s);
// # 1815
  c = lookup(ctab, s);
  }
// # 1816
  if ((unsigned int )c == (unsigned int )((struct tab *)((void *)0))) {
    {
// # 1817
    reply(502, "Unknown command %s.", s);
    }
// # 1818
    return;
  }
// # 1820
  if (c->implemented) {
    {
// # 1821
    reply(214, "Syntax: %s%s %s", type_0, c->name, c->help);
    }
  } else {
    {
// # 1823
    reply(214, "%s%-*s\t%s; unimplemented.", type_0, width, c->name, c->help);
    }
  }
// # 1825
  return;
}
}
// # 1827
void sizecmd(char *filename ) 
{ struct stat stbuf ;
  int tmp ;
  FILE *fin ;
  register int c ;
  register long count ;
  struct stat stbuf_0 ;
  int tmp_0 ;
  int tmp_1 ;

  {
// # 1829
  switch (type) {
  case 4: 
  {

  }
  case 3: 
  {
// # 1833
  tmp = statextinline((char/*const*/  *)filename, & stbuf);
  }
// # 1833
  if (tmp < 0) {
    {
// # 1835
    reply(550, "%s: not a plain file.", filename);
    }
  } else {
// # 1833
    if ((stbuf.st_mode & 61440U) != 32768U) {
      {
// # 1835
      reply(550, "%s: not a plain file.", filename);
      }
    } else {
      {
// # 1843
      reply(213, "%lu", stbuf.st_size);
      }
    }
  }
// # 1846
  break;
  case 1: 
  {
// # 1853
  fin = fopen((char/*const*/  */*   */)((char/*const*/  *)filename),
              (char/*const*/  */*   */)((char/*const*/  *)"r"));
  {
// # 17 "spec.work"
  if (fin != (FILE *)0) {
// # 17
    fin->BLAST_FLAG = 1;
  }
  {

  }
  }

  }
// # 1854 "ftpcmd.y"
  if ((unsigned int )fin == (unsigned int )((void *)0)) {
    {
// # 1855
    perror_reply(550, filename);
    }
// # 1856
    return;
  }
  {
// # 1858
  tmp_0 = fileno(fin);
// # 1858
  tmp_1 = fstatextinline(tmp_0, & stbuf_0);
  }
// # 1858
  if (tmp_1 < 0) {
    {
// # 1860
    reply(550, "%s: not a plain file.", filename);
    {
// # 96 "spec.work"
    if (fin->BLAST_FLAG == 1) {
// # 97
      fin->BLAST_FLAG = 0;
    } else {
// # 98
      error__();
    }
    {

    }
    }
// # 1861 "ftpcmd.y"
    fclose(fin);
    }
// # 1862
    return;
  } else {
// # 1858
    if ((stbuf_0.st_mode & 61440U) != 32768U) {
      {
// # 1860
      reply(550, "%s: not a plain file.", filename);
      {
// # 96 "spec.work"
      if (fin->BLAST_FLAG == 1) {
// # 97
        fin->BLAST_FLAG = 0;
      } else {
// # 98
        error__();
      }
      {

      }
      }
// # 1861 "ftpcmd.y"
      fclose(fin);
      }
// # 1862
      return;
    }
  }
  {
// # 1865
  count = 0L;
  }
// # 1866
  while (1) {
    {
// # 1866
    c = _IO_getc(fin);
    }
// # 1866
    if (! (c != -1)) {
// # 1866
      break;
    }
// # 1867
    if (c == 10) {
      {
// # 1868
      count ++;
      }
    }
    {
// # 1869
    count ++;
    }
  }
  {

  {
// # 96 "spec.work"
  if (fin->BLAST_FLAG == 1) {
// # 97
    fin->BLAST_FLAG = 0;
  } else {
// # 98
    error__();
  }
  {

  }
  }
// # 1871 "ftpcmd.y"
  fclose(fin);
// # 1873
  reply(213, "%ld", count);
  }
// # 1874
  break;
  default: 
  {
// # 1877
  reply(504, "SIZE not implemented for Type %c.", (*("?AEIL" + type)));
  }
  }
// # 1879
  return;
}
}
// # 1881
void site_exec(char *cmd ) 
{ char buf_2[4096] ;
  char *sp ;
  char *tmp ;
  char *slash ;
  char *t ;
  FILE *cmdf ;
  char *tmp_0 ;
  int tmp_1 ;
  int tmp_2 ;
  size_t tmp_3 ;
  size_t tmp_4 ;
  int lines ;
  int maxlines ;
  struct aclmember *entry ;
  char class[1024] ;
  int maxfound ;
  int defmaxlines ;
  int which ;
  int tmp_5 ;
  int tmp_6 ;
  struct aclmember *tmp_7 ;
  size_t len ;
  size_t tmp_8 ;
  char *tmp_9 ;

  {
  {
// # 1887
  tmp = strchr((char/*const*/  *)cmd, (int )' ');
// # 1887
  sp = tmp;
  }
// # 1893
  if ((unsigned int )sp == (unsigned int )((char *)0)) {
// # 1894
    while (1) {
      {
// # 1894
      slash = strchr((char/*const*/  *)cmd, (int )'/');
      }
// # 1894
      if (! ((unsigned int )slash != (unsigned int )((char *)0))) {
// # 1894
        break;
      }
      {
// # 1895
      cmd = slash + 1;
      }
    }
  } else {
// # 1898
    while (1) {
// # 1898
      if (sp) {
        {
// # 1898
        tmp_0 = strchr((char/*const*/  *)cmd, (int )'/');
// # 1898
        slash = tmp_0;
        }
// # 1898
        if (slash) {
// # 1898
          if (! ((unsigned int )slash < (unsigned int )sp)) {
// # 1898
            break;
          }
        } else {
// # 1898
          break;
        }
      } else {
// # 1898
        break;
      }
      {
// # 1900
      cmd = slash + 1;
      }
    }
  }
  {
// # 1903
  t = cmd;
  }
// # 1903
  while (1) {
// # 1903
    if ((*t)) {
      {
// # 1903
      tmp_2 = _get__ctype_b((int )(*t));
      }
// # 1903
      if (tmp_2 & 8192) {
// # 1903
        break;
      }
    } else {
// # 1903
      break;
    }
    {
// # 1904
    tmp_1 = _get__ctype_b((int )(*t));
    }
// # 1904
    if (tmp_1 & 256) {
      {
// # 1905
      (*t) = (char )tolower((int )(*t));
      }
    }
    {
// # 1903
    t ++;
    }
  }
  {
// # 1910
  tmp_3 = strlen((char/*const*/  *)"/bin/ftp-exec");
// # 1910
  tmp_4 = strlen((char/*const*/  *)cmd);
  }
// # 1910
  if ((tmp_3 + tmp_4) + 2U > sizeof(buf_2)) {
// # 1911
    return;
  }
  {
// # 1912
  sprintf((char */*   */)(buf_2),
          (char/*const*/  */*   */)((char/*const*/  *)"%s/%s"),
          "/bin/ftp-exec", cmd);
// # 1914
  cmdf = ftpd_popen(buf_2, "r", 0);
  }
// # 1915
  if (cmdf) {
    {
// # 1921
    lines = 0;
// # 1922
    maxlines = 0;
// # 1923
    entry = (struct aclmember *)((void *)0);
// # 1925
    maxfound = 0;
// # 1926
    defmaxlines = 20;
// # 1929
    acl_getclass(class);
    }
// # 1930
    while (1) {
      {
// # 1930
      tmp_7 = getaclentry("site-exec-max-lines", & entry);
      }
// # 1930
      if (tmp_7) {
// # 1930
        if (! entry->arg[0]) {
// # 1930
          break;
        }
      } else {
// # 1930
        break;
      }
// # 1931
      if (entry->arg[1]) {
        {
// # 1932
        which = 1;
        }
// # 1932
        while (1) {
// # 1932
          if (which < 50) {
// # 1932
            if (! entry->arg[which]) {
// # 1932
              break;
            }
          } else {
// # 1932
            break;
          }
          {
// # 1933
          tmp_5 = strcasecmp((char/*const*/  *)entry->arg[which],
                               (char/*const*/  *)(class));
          }
// # 1933
          if (! tmp_5) {
            {
// # 1934
            maxlines = atoi((char/*const*/  *)entry->arg[0]);
// # 1935
            maxfound = 1;
            }
          }
          {
// # 1937
          tmp_6 = strcmp((char/*const*/  *)entry->arg[which],
                           (char/*const*/  *)"*");
          }
// # 1937
          if (! tmp_6) {
            {
// # 1938
            defmaxlines = atoi((char/*const*/  *)entry->arg[0]);
            }
          }
          {
// # 1932
          which ++;
          }
        }
      } else {
        {
// # 1941
        defmaxlines = atoi((char/*const*/  *)entry->arg[0]);
        }
      }
    }
// # 1943
    if (! maxfound) {
      {
// # 1944
      maxlines = defmaxlines;
      }
    }
    {
// # 1945
    lreply(200, "%s", cmd);
    }
// # 1946
    while (1) {
      // # 32 "spec.work"
      if (! (cmdf->BLAST_FLAG == 1)) {
	// # 34
	error__();
      }
      // # 1946 "ftpcmd.y"
      tmp_9 = fgets((char */*   */)(buf_2), (int )sizeof(buf_2),
		    (FILE */*   */)cmdf);
// # 1946
      if (! tmp_9) {
	// # 1946
        break;
      }
      // # 1947
      tmp_8 = strlen((char/*const*/  *)(buf_2));
      // # 1947
      len = tmp_8;
      // # 1949
      if (len > 0U) {
	// # 1949
        if ((int )buf_2[len - 1U] == 10) {
	  // # 1950
	  len --;
	  // # 1950
	  buf_2[len] = '\0';
        }
      }
      // # 1951
      lreply(200, "%s", buf_2);
      // # 1952
      if (maxlines <= 0) {
	// # 1953
	lines ++;
      } else {
	// # 1954
	lines ++;
	// # 1954
        if (lines >= maxlines) {
	  // # 1955
	  lreply(200, "*** Truncated ***");
	  // # 1956
          break;
        }
      }
    } // end of while
    {
// # 1959
    reply(200, " (end of \'%s\')", cmd);
    }
// # 1960
    if (log_commands) {
      {
// # 1961
      syslog(6, (char/*const*/  *)"SITE EXEC (lines: %d): %s", lines, cmd);
      }
    }
    {
// # 1962
    ftpd_pclose(cmdf);
    }
  } else {
    {
// # 1916
    perror_reply(550, cmd);
    }
// # 1917
    if (log_commands) {
      {
// # 1918
      syslog(6, (char/*const*/  *)"SITE EXEC (FAIL: %m): %s", cmd);
      }
    }
  }
// # 1965
  return;
}
}
// # 1967
void alias(char *s ) 
{ struct aclmember *entry ;
  int tmp ;
  struct aclmember *tmp_0 ;
  struct aclmember *tmp_1 ;
  FILE *tmp_2 ;

  {
  {
// # 1969
  entry = (struct aclmember *)((void *)0);
  }
// # 1971
  if ((unsigned int )s != (unsigned int )((char *)((void *)0))) {
// # 1972
    while (1) {
      {
// # 1972
      tmp_0 = getaclentry("alias", & entry);
      }
// # 1972
      if (tmp_0) {
// # 1972
        if (entry->arg[0]) {
// # 1972
          if (! ((unsigned int )entry->arg[1] != (unsigned int )((void *)0))) {
// # 1972
            break;
          }
        } else {
// # 1972
          break;
        }
      } else {
// # 1972
        break;
      }
      {
// # 1973
      tmp = strcmp((char/*const*/  *)entry->arg[0], (char/*const*/  *)s);
      }
// # 1973
      if (! tmp) {
        {
// # 1974
        reply(214, "%s is an alias for %s.", entry->arg[0], entry->arg[1]);
        }
// # 1975
        return;
      }
    }
    {
// # 1977
    reply(502, "Unknown alias %s.", s);
    }
// # 1978
    return;
  }
  {
// # 1981
  lreply(214, "The following aliases are available.");
  }
// # 1983
  while (1) {
    {
// # 1983
    tmp_1 = getaclentry("alias", & entry);
    }
// # 1983
    if (tmp_1) {
// # 1983
      if (entry->arg[0]) {
// # 1983
        if (! ((unsigned int )entry->arg[1] != (unsigned int )((void *)0))) {
// # 1983
          break;
        }
      } else {
// # 1983
        break;
      }
    } else {
// # 1983
      break;
    }
    {
// # 1984
    lreply(0, "   %-8s %s", entry->arg[0], entry->arg[1]);
    }
  }
  {
// # 1985
  tmp_2 = get_stdout();
  {
// # 113 "spec.work"
  tmp_2->BLAST_FLAG = 1;
  {

  }
  }

  {
// # 40
  if (! (tmp_2->BLAST_FLAG == 1)) {
// # 42
    error__();
  }
  {

  }
  }
// # 1985 "ftpcmd.y"
  fflush(tmp_2);
// # 1987
  reply(214, "");
  }
// # 1988
  return;
}
}
// # 1990
void cdpath(void) 
{ struct aclmember *entry ;
  struct aclmember *tmp ;
  FILE *tmp_0 ;

  {
  {
// # 1992
  entry = (struct aclmember *)((void *)0);
// # 1994
  lreply(214, "The cdpath is:");
  }
// # 1995
  while (1) {
    {
// # 1995
    tmp = getaclentry("cdpath", & entry);
    }
// # 1995
    if (tmp) {
// # 1995
      if (! ((unsigned int )entry->arg[0] != (unsigned int )((void *)0))) {
// # 1995
        break;
      }
    } else {
// # 1995
      break;
    }
    {
// # 1996
    lreply(0, "  %s", entry->arg[0]);
    }
  }
  {
// # 1997
  tmp_0 = get_stdout();
  {
// # 113 "spec.work"
  tmp_0->BLAST_FLAG = 1;
  {

  }
  }

  {
// # 40
  if (! (tmp_0->BLAST_FLAG == 1)) {
// # 42
    error__();
  }
  {

  }
  }
// # 1997 "ftpcmd.y"
  fflush(tmp_0);
// # 1998
  reply(214, "");
  }
// # 1999
  return;
}
}
// # 2001
void print_groups(void) 
{ gid_t groups[32] ;
  int ngroups ;
  FILE *tmp ;

  {
  {
// # 2004
  ngroups = 0;
// # 2006
  ngroups = getgroups(32, groups);
  }
// # 2006
  if (ngroups < 0) {
// # 2007
    return;
  }
  {
// # 2010
  lreply(214, "Group membership is:");
// # 2011
  ngroups --;
  }
// # 2013
  while (ngroups >= 0) {
    {
// # 2014
    lreply(214, "  %d", groups[ngroups]);
// # 2013
    ngroups --;
    }
  }
  {
// # 2016
  tmp = get_stdout();
  {
// # 113 "spec.work"
  tmp->BLAST_FLAG = 1;
  {

  }
  }

  {
// # 40
  if (! (tmp->BLAST_FLAG == 1)) {
// # 42
    error__();
  }
  {

  }
  }
// # 2016 "ftpcmd.y"
  fflush(tmp);
// # 2017
  reply(214, "");
  }
// # 2018
  return;
}
}
// # 54 "glob.c"
static char **gargv  ;
// # 55
static int gargc  ;
// # 56
static size_t gnleft  ;
// # 57
static short gflag  ;
// # 58
static int tglob(char c ) ;
// # 62
static char *strend(char *cp ) ;
// # 63
static void addpath(char c ) ;
// # 64
static void ginit(char **agargv ) ;
// # 65
static void collect(char *as ) ;
// # 66
static void acollect(char *as ) ;
// # 67
// # 68
static void expand(char *as ) ;
// # 69
static void matchdir(char *pattern ) ;
// # 70
static int execbrc(char *p , char *s ) ;
// # 71
static int match(char *s , char *p ) ;
// # 72
static int amatch(char *s , char *p ) ;
// # 73
static void Gcat(char *s1 , char *s2 ) ;
// # 75
static void rscan(char **t , int (*f)(char  ) ) ;
// # 79
int letter(char c ) ;
// # 80
int digit(char c ) ;
// # 81
int gethdir(char *home_0 ) ;
// # 82
int any(int c , char *s ) ;
// # 83
int blklen(char **av ) ;
// # 85
char *strspl(char *cp , char *dp ) ;
// # 86
char **copyblk(char **v ) ;
// # 87
char **blkcpy(char **oav , char **bv ) ;
// # 93
static int globcnt  ;
// # 95
char *globchars   = "`{[*?";
// # 97
static char *gpath  ;
// # 97
static char *gpathp  ;
// # 97
static char *lastgpathp  ;
// # 98
static int globbed  ;
// # 99
static char *entp  ;
// # 100
static char **sortbas  ;
// # 107
char **ftpglob(char *v ) 
{ char agpath[8192] ;
  char *agargv[21845] ;
  char *vv[2] ;
  size_t tmp ;
  size_t tmp_0 ;
  size_t tmp_1 ;
  char **tmp_2 ;

  {
  {
// # 113
  fixpath(v);
  }
// # 114
  if ((int )(*(v + 0)) == 0) {
    {
// # 115
    v = "*";
    }
  } else {
    {
// # 116
    tmp_0 = strlen((char/*const*/  *)v);
    }
// # 116
    if (tmp_0 > 1U) {
      {
// # 116
      tmp_1 = strlen((char/*const*/  *)v);
      }
// # 116
      if ((int )(*(v + (tmp_1 - 1U))) == 47) {
        {
// # 117
        tmp = strlen((char/*const*/  *)v);
// # 117
        (*(v + (tmp - 1U))) = '\0';
        }
      }
    }
  }
  {
// # 119
  vv[0] = v;
// # 120
  vv[1] = (char *)((void *)0);
// # 121
  globerr = (char *)((void *)0);
// # 122
  gflag = (short )0;
// # 123
  rscan(vv, & tglob);
  }
// # 124
  if ((int )gflag == 0) {
    {
// # 125
    vv[0] = strspl(v, "");
// # 126
    tmp_2 = copyblk(vv);
    }
// # 126
    return (tmp_2);
  }
  {
// # 129
  globerr = (char *)((void *)0);
// # 130
  gpath = agpath;
// # 131
  gpathp = gpath;
// # 132
  (*gpathp) = (char )0;
// # 133
  lastgpathp = gpath + (sizeof(agpath) - 2U);
// # 134
  ginit(agargv);
// # 135
  globcnt = 0;
// # 136
  collect(v);
  }
// # 137
  if (globcnt == 0) {
// # 137
    if ((int )gflag & 1) {
      {
// # 138
      blkfree(gargv);
// # 138
      gargv = (char **)0;
      }
// # 139
      return ((char **)0);
    } else {
      {
// # 142
      gargv = copyblk(gargv);
      }
// # 142
      return (gargv);
    }
  } else {
    {
// # 142
    gargv = copyblk(gargv);
    }
// # 142
    return (gargv);
  }
}
}
// # 145
static void ginit(char **agargv ) 
{ 

  {
  {
// # 148
  (*(agargv + 0)) = (char *)0;
// # 149
  gargv = agargv;
// # 150
  sortbas = agargv;
// # 151
  gargc = 0;
// # 152
  gnleft = 131068U;
  }
// # 153
  return;
}
}
// # 155
static void collect(char *as ) 
{ int tmp ;
  int tmp_0 ;

  {
  {
// # 157
  tmp = strcmp((char/*const*/  *)as, (char/*const*/  *)"{");
  }
// # 157
  if (tmp == 0) {
    {
// # 158
    Gcat(as, "");
// # 159
    sort();
    }
  } else {
    {
// # 157
    tmp_0 = strcmp((char/*const*/  *)as, (char/*const*/  *)"{}");
    }
// # 157
    if (tmp_0 == 0) {
      {
// # 158
      Gcat(as, "");
// # 159
      sort();
      }
    } else {
      {
// # 162
      acollect(as);
      }
    }
  }
// # 163
  return;
}
}
// # 165
static void acollect(char *as ) 
{ register int ogargc ;

  {
  {
// # 167
  ogargc = gargc;
// # 169
  gpathp = gpath;
// # 170
  (*gpathp) = (char )0;
// # 171
  globbed = 0;
// # 172
  expand(as);
  }
// # 173
  if (gargc != ogargc) {
    {
// # 174
    sort();
    }
  }
// # 175
  return;
}
}
// # 177
static int argcmp(void/*const*/  *p1 , void/*const*/  *p2 ) 
{ char *s1 ;
  char *s2 ;
  int tmp ;

  {
  {
// # 180
  s1 = (*((char **)p1));
// # 181
  s2 = (*((char **)p2));
// # 183
  tmp = strcmp((char/*const*/  *)s1, (char/*const*/  *)s2);
  }
// # 183
  return (tmp);
}
}
// # 186
void sort(void) 
{ char **Gvp ;

  {
  {
// # 188
  Gvp = gargv + gargc;
  }
// # 190
  if (! globerr) {
    {
// # 191
    qsort((void *)sortbas, (unsigned int )(Gvp - sortbas), sizeof((*sortbas)),
          (int (*)(void/*const*/  * /*attribute__((safe__))*/ left ,
                   void/*const*/  * /*attribute__((safe__))*/ right ))(& argcmp));
    }
  }
  {
// # 192
  sortbas = Gvp;
  }
// # 193
  return;
}
}
// # 195
static void expand(char *as ) 
{ register char *cs ;
  register char *sgpathp ;
  register char *oldcs ;
  struct stat stb ;
  char *tmp ;
  int tmp_0 ;
  int tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;
  char *tmp_4 ;
  int tmp_5 ;

  {
// # 201
  if (globerr) {
// # 202
    return;
  }
  {
// # 203
  sgpathp = gpathp;
// # 204
  cs = as;
  }
// # 205
  if ((int )(*cs) == 126) {
// # 205
    if ((unsigned int )gpathp == (unsigned int )gpath) {
      {
// # 206
      addpath('~');
// # 207
      cs ++;
      }
// # 207
      while (1) {
        {
// # 207
        tmp_0 = letter((*cs));
        }
// # 207
        if (! tmp_0) {
          {
// # 207
          tmp_1 = digit((*cs));
          }
// # 207
          if (! tmp_1) {
// # 207
            if (! ((int )(*cs) == 45)) {
// # 207
              break;
            }
          }
        }
        {
// # 208
        tmp = cs;
// # 208
        cs ++;
// # 208
        addpath((*tmp));
        }
      }
// # 209
      if ((*cs)) {
// # 209
        if ((int )(*cs) == 47) {
          _L: 
// # 210
          if ((unsigned int )gpathp != (unsigned int )(gpath + 1)) {
            {
// # 211
            (*gpathp) = (char )0;
// # 212
            tmp_2 = gethdir(gpath + 1);
            }
// # 212
            if (tmp_2) {
              {
// # 213
              globerr = "Unknown user name after ~";
              }
            }
            {
// # 214
            strcpy((char */*   */)gpath,
                   (char/*const*/  */*   */)((char/*const*/  *)(gpath + 1)));
            }
          } else {
            {
// # 217
            strcpy((char */*   */)gpath,
                   (char/*const*/  */*   */)((char/*const*/  *)home));
            }
          }
          {
// # 218
          gpathp = strend(gpath);
          }
        }
      } else {
        goto _L;
      }
    }
  }
// # 221
  while (1) {
    {
// # 221
    tmp_5 = any((int )(*cs), globchars);
    }
// # 221
    if (tmp_5) {
// # 221
      break;
    }
// # 222
    if ((int )(*cs) == 0) {
// # 223
      if (globbed) {
        {
// # 225
        tmp_3 = statextinline((char/*const*/  *)gpath, & stb);
        }
// # 225
        if (tmp_3 >= 0) {
          {
// # 226
          Gcat(gpath, "");
// # 227
          globcnt ++;
          }
        }
      } else {
        {
// # 224
        Gcat(gpath, "");
        }
      }
      goto endit;
    }
    {
// # 231
    tmp_4 = cs;
// # 231
    cs ++;
// # 231
    addpath((*tmp_4));
    }
  }
  {
// # 233
  oldcs = cs;
  }
// # 234
  while (1) {
// # 234
    if ((unsigned int )cs > (unsigned int )as) {
// # 234
      if (! ((int )(*cs) != 47)) {
// # 234
        break;
      }
    } else {
// # 234
      break;
    }
    {
// # 235
    cs --;
// # 235
    gpathp --;
    }
  }
// # 236
  if ((int )(*cs) == 47) {
    {
// # 237
    cs ++;
// # 237
    gpathp ++;
    }
  }
  {
// # 238
  (*gpathp) = (char )0;
  }
// # 239
  if ((int )(*oldcs) == 123) {
    {
// # 240
    execbrc(cs, (char *)0);
    }
// # 241
    return;
  }
  {
// # 243
  matchdir(cs);
  }
  endit: 
  {
// # 245
  gpathp = sgpathp;
// # 246
  (*gpathp) = (char )0;
  }
// # 247
  return;
}
}
// # 249
static void matchdir(char *pattern ) 
{ struct stat stb ;
  register struct dirent *dp ;
  DIR *dirp_0 ;
  char/*const*/  *tmp ;
  int tmp_0 ;
  int tmp_1 ;
  int *tmp_2 ;
  int tmp_3 ;

  {
// # 261
  if ((int )(*gpath) == 0) {
    {
// # 261
    tmp = (char/*const*/  *)".";
    }
  } else {
    {
// # 261
    tmp = (char/*const*/  *)gpath;
    }
  }
  {
// # 261
  dirp_0 = opendir(tmp);
  }
// # 262
  if ((unsigned int )dirp_0 == (unsigned int )((void *)0)) {
// # 263
    if (globbed) {
// # 264
      return;
    }
    goto patherr2;
  }
  {
// # 268
  tmp_0 = dirfd(dirp_0);
// # 268
  tmp_1 = fstatextinline(tmp_0, & stb);
  }
// # 268
  if (tmp_1 < 0) {
    goto patherr1;
  }
// # 273
  if (! ((stb.st_mode & 61440U) == 16384U)) {
    {
// # 274
    tmp_2 = errno_location();
// # 274
    (*tmp_2) = 20;
    }
    goto patherr1;
  }
// # 277
  while (1) {
// # 277
    if (globerr) {
// # 277
      break;
    } else {
      {
// # 277
      dp = readdir(dirp_0);
      }
// # 277
      if (! ((unsigned int )dp != (unsigned int )((void *)0))) {
// # 277
        break;
      }
    }
// # 278
    if (dp->d_ino == 0UL) {
// # 279
      continue;
    }
    {
// # 280
    tmp_3 = match(dp->d_name, pattern);
    }
// # 280
    if (tmp_3) {
      {
// # 281
      Gcat(gpath, dp->d_name);
// # 282
      globcnt ++;
      }
    }
  }
  {
// # 285
  closedir(dirp_0);
  }
// # 286
  return;
  patherr1: 
  {
// # 289
  closedir(dirp_0);
  }
  patherr2: 
  {
// # 291
  globerr = "Bad directory components";
  }
// # 292
  return;
}
}
// # 294
static int execbrc(char *p , char *s ) 
{ char restbuf[8194] ;
  char *restbufend ;
  register char *pe ;
  register char *pm ;
  register char *pl ;
  int brclev ;
  char *lm ;
  char savec ;
  char *sgpathp ;
  char *tmp ;
  char *tmp_0 ;
  size_t tmp_1 ;
  size_t tmp_2 ;
  int tmp_3 ;

  {
  {
// # 297
  restbufend = & restbuf[sizeof(restbuf)];
// # 299
  brclev = 0;
// # 302
  lm = restbuf;
  }
// # 302
  while ((int )(*p) != 123) {
// # 303
    if ((unsigned int )lm >= (unsigned int )restbufend) {
// # 304
      return (0);
    }
    {
// # 302
    tmp = lm;
// # 302
    lm ++;
// # 302
    tmp_0 = p;
// # 302
    p ++;
// # 302
    (*tmp) = (*tmp_0);
    }
  }
  {
// # 306
  p ++;
// # 306
  pe = p;
  }
// # 306
  while ((*pe)) {
// # 307
    switch ((int )(*pe)) {
    case 123: 
    {
// # 310
    brclev ++;
    }
    goto Cont;
    case 125: 
    {

    }
// # 314
    if (brclev == 0) {
      goto pend;
    }
    {
// # 316
    brclev --;
    }
    goto Cont;
    case 91: 
    {
// # 320
    pe ++;
    }
// # 320
    while (1) {
// # 320
      if ((*pe)) {
// # 320
        if (! ((int )(*pe) != 93)) {
// # 320
          break;
        }
      } else {
// # 320
        break;
      }
      goto Cont_0;
      Cont_0: 
      {
// # 320
      pe ++;
      }
    }
// # 322
    if (! (*pe)) {
      {
// # 323
      globerr = "Missing ]";
      }
// # 324
      return (0);
    }
    goto Cont;
    }
    Cont: 
    {
// # 306
    pe ++;
    }
  }
  pend: 
// # 330
  if (brclev) {
    {
// # 331
    globerr = "Missing }";
    }
// # 332
    return (0);
  } else {
// # 330
    if (! (*pe)) {
      {
// # 331
      globerr = "Missing }";
      }
// # 332
      return (0);
    }
  }
  {
// # 334
  pm = p;
// # 334
  pl = pm;
  }
// # 334
  while ((unsigned int )pm <= (unsigned int )pe) {
// # 335
    switch ((int )(*pm) & 255) {
    case 123: 
    {
// # 338
    brclev ++;
    }
    goto Cont_1;
    case 125: 
    {

    }
// # 342
    if (brclev) {
      {
// # 343
      brclev --;
      }
      goto Cont_1;
    }
    goto doit;
    case 172: 
    {

    }
    case 44: 
    {

    }
// # 350
    if (brclev) {
      goto Cont_1;
    }
    doit: 
    {
// # 353
    savec = (*pm);
// # 354
    (*pm) = (char )0;
// # 355
    tmp_1 = strlen((char/*const*/  *)pl);
// # 355
    tmp_2 = strlen((char/*const*/  *)(pe + 1));
    }
// # 355
    if ((unsigned int )((lm + tmp_1) + tmp_2) >= (unsigned int )restbufend) {
// # 356
      return (0);
    }
    {
// # 357
    strcpy((char */*   */)lm,
           (char/*const*/  */*   */)((char/*const*/  *)pl));
// # 358
    strcat((char */*   */)(restbuf),
           (char/*const*/  */*   */)((char/*const*/  *)(pe + 1)));
// # 359
    (*pm) = savec;
    }
// # 360
    if ((unsigned int )s == (unsigned int )((char *)0)) {
      {
// # 361
      sgpathp = gpathp;
// # 362
      expand(restbuf);
// # 363
      gpathp = sgpathp;
// # 364
      (*gpathp) = (char )0;
      }
    } else {
      {
// # 366
      tmp_3 = amatch(s, restbuf);
      }
// # 366
      if (tmp_3) {
// # 367
        return (1);
      }
    }
    {
// # 368
    sort();
// # 369
    pl = pm + 1;
    }
    goto Cont_1;
    case 91: 
    {
// # 373
    pm ++;
    }
// # 373
    while (1) {
// # 373
      if ((*pm)) {
// # 373
        if (! ((int )(*pm) != 93)) {
// # 373
          break;
        }
      } else {
// # 373
        break;
      }
      goto Cont_2;
      Cont_2: 
      {
// # 373
      pm ++;
      }
    }
// # 375
    if (! (*pm)) {
      {
// # 376
      globerr = "Missing ]";
      }
// # 377
      return (0);
    }
    goto Cont_1;
    }
    Cont_1: 
    {
// # 334
    pm ++;
    }
  }
// # 382
  return (0);
}
}
// # 385
static int match(char *s , char *p ) 
{ register int c ;
  register char *sentp ;
  char sglobbed ;

  {
  {
// # 389
  sglobbed = (char )globbed;
  }
// # 391
  if ((int )(*s) == 46) {
// # 391
    if ((int )(*p) != 46) {
// # 392
      return (0);
    }
  }
  {
// # 393
  sentp = entp;
// # 394
  entp = s;
// # 395
  c = amatch(s, p);
// # 396
  entp = sentp;
// # 397
  globbed = (int )sglobbed;
  }
// # 398
  return (c);
}
}
// # 401
static int amatch(char *s , char *p ) 
{ register int scc ;
  int ok ;
  int lc ;
  char *sgpathp ;
  struct stat stb ;
  int c ;
  int cc ;
  char *tmp ;
  char *tmp_0 ;
  int tmp_1 ;
  char *tmp_2 ;
  char *tmp_3 ;
  int tmp_4 ;
  char *tmp_5 ;
  char *tmp_6 ;
  int tmp_7 ;

  {
  {
// # 409
  globbed = 1;
  }
// # 410
  while (1) {
    {
// # 411
    tmp = s;
// # 411
    s ++;
// # 411
    scc = (int )(*tmp) & 127;
// # 412
    tmp_0 = p;
// # 412
    p ++;
// # 412
    c = (int )(*tmp_0);
    }
// # 412
    switch (c) {
    case 123: 
    {
// # 415
    tmp_1 = execbrc(p - 1, s - 1);
    }
// # 415
    return (tmp_1);
    case 91: 
    {
// # 418
    ok = 0;
// # 419
    lc = 32767;
    }
// # 420
    while (1) {
      {
// # 420
      tmp_3 = p;
// # 420
      p ++;
// # 420
      cc = (int )(*tmp_3);
      }
// # 420
      if (! cc) {
// # 420
        break;
      }
// # 421
      if (cc == 93) {
// # 422
        if (ok) {
// # 423
          break;
        }
// # 424
        return (0);
      }
// # 426
      if (cc == 45) {
// # 427
        if (lc <= scc) {
          {
// # 427
          tmp_2 = p;
// # 427
          p ++;
          }
// # 427
          if (scc <= (int )(*tmp_2)) {
            {
// # 428
            ok ++;
            }
          }
        }
      } else {
        {
// # 430
        lc = cc;
        }
// # 430
        if (scc == lc) {
          {
// # 431
          ok ++;
          }
        }
      }
    }
// # 433
    if (cc == 0) {
      {
// # 434
      globerr = "Missing ]";
      }
// # 435
      return (0);
    }
    goto Cont;
    case 42: 
    {

    }
// # 440
    if (! (*p)) {
// # 441
      return (1);
    }
// # 442
    if ((int )(*p) == 47) {
      {
// # 443
      p ++;
      }
      goto slash;
    }
    {
// # 446
    s --;
    }
// # 447
    while (1) {
      {
// # 448
      tmp_4 = amatch(s, p);
      }
// # 448
      if (tmp_4) {
// # 449
        return (1);
      }
      {
// # 447
      tmp_5 = s;
// # 447
      s ++;
      }
// # 447
      if (! (*tmp_5)) {
// # 447
        break;
      }
    }
// # 451
    return (0);
    case 0: 
    {

    }
// # 454
	/* transformed by vijay: return (scc == 0); */
	if(scc == 0) return 1;
	else return 0;
    default: 
    {

    }
// # 457
    if (c != scc) {
// # 458
      return (0);
    }
    goto Cont;
    case 63: 
    {

    }
// # 462
    if (scc == 0) {
// # 463
      return (0);
    }
    goto Cont;
    case 47: 
    {

    }
// # 467
    if (scc) {
// # 468
      return (0);
    }
    slash: 
    {
// # 470
    s = entp;
// # 471
    sgpathp = gpathp;
    }
// # 472
    while ((*s)) {
      {
// # 473
      tmp_6 = s;
// # 473
      s ++;
// # 473
      addpath((*tmp_6));
      }
    }
    {
// # 474
    addpath('/');
// # 475
    tmp_7 = statextinline((char/*const*/  *)gpath, & stb);
    }
// # 475
    if (tmp_7 == 0) {
// # 475
      if ((stb.st_mode & 61440U) == 16384U) {
// # 476
        if ((int )(*p) == 0) {
          {
// # 477
          Gcat(gpath, "");
// # 478
          globcnt ++;
          }
        } else {
          {
// # 481
          expand(p);
          }
        }
      }
    }
    {
// # 482
    gpathp = sgpathp;
// # 483
    (*gpathp) = (char )0;
    }
// # 484
    return (0);
    }
    Cont: 
    {

    }
  }
// # 487
  return (0);
}
}
// # 489
static void Gcat(char *s1 , char *s2 ) 
{ register size_t len ;
  size_t tmp ;
  size_t tmp_0 ;

  {
  {
// # 491
  tmp = strlen((char/*const*/  *)s1);
// # 491
  tmp_0 = strlen((char/*const*/  *)s2);
// # 491
  len = (tmp + tmp_0) + 1U;
  }
// # 493
  if (globerr) {
// # 494
    return;
  }
// # 495
  if (len >= gnleft) {
    {
// # 496
    globerr = "Arguments too long";
    }
  } else {
// # 495
    if (gargc >= 21844) {
      {
// # 496
      globerr = "Arguments too long";
      }
    } else {
// # 497
      if (len > 4096U) {
        {
// # 498
        globerr = "Pathname too long";
        }
      } else {
        {
// # 500
        gargc ++;
// # 501
        gnleft -= len;
// # 502
        (*(gargv + gargc)) = (char *)0;
// # 503
        (*(gargv + (gargc - 1))) = strspl(s1, s2);
        }
      }
    }
  }
// # 505
  return;
}
}
// # 507
static void addpath(char c ) 
{ char *tmp ;

  {
// # 510
  if ((unsigned int )gpathp >= (unsigned int )lastgpathp) {
    {
// # 511
    globerr = "Pathname too long";
    }
  } else {
    {
// # 513
    tmp = gpathp;
// # 513
    gpathp ++;
// # 513
    (*tmp) = c;
// # 514
    (*gpathp) = (char )0;
    }
  }
// # 516
  return;
}
}
// # 518
static void rscan(char **t , int (*f)(char  ) ) 
{ register char *p ;
  register char c ;
  int tmp ;
  int tmp_0 ;
  char *tmp_1 ;
  char **tmp_2 ;

  {
// # 522
  while (1) {
    {
// # 522
    tmp_2 = t;
// # 522
    t ++;
// # 522
    p = (*tmp_2);
    }
// # 522
    if (! p) {
// # 522
      break;
    }
// # 523
    if ((int )(*p) == 126) {
      {
// # 524
      gflag = (short )((int )gflag | 2);
      }
    } else {
      {
// # 525
      tmp = strcmp((char/*const*/  *)p, (char/*const*/  *)"{");
      }
// # 525
      if (tmp == 0) {
// # 526
        continue;
      } else {
        {
// # 525
        tmp_0 = strcmp((char/*const*/  *)p, (char/*const*/  *)"{}");
        }
// # 525
        if (tmp_0 == 0) {
// # 526
          continue;
        }
      }
    }
// # 527
    while (1) {
      {
// # 527
      tmp_1 = p;
// # 527
      p ++;
// # 527
      c = (*tmp_1);
      }
// # 527
      if (! c) {
// # 527
        break;
      }
      {
// # 528
      ((*f))(c);
      }
    }
  }
// # 530
  return;
}
}
// # 531
static int tglob(char c ) 
{ int tmp ;
  int tmp_0 ;

  {
  {
// # 533
  tmp_0 = any((int )c, globchars);
  }
// # 533
  if (tmp_0) {
// # 534
    if ((int )c == 123) {
      {
// # 534
      tmp = 2;
      }
    } else {
      {
// # 534
      tmp = 1;
      }
    }
    {
// # 534
    gflag = (short )((int )gflag | tmp);
    }
  }
// # 535
  return ((int )c);
}
}
// # 538
int letter(char c ) 
{ int tmp ;

  {
// # 540
  if ((int )c >= 97) {
// # 540
    if ((int )c <= 122) {
      {
// # 540
      tmp = 1;
      }
    } else {
      goto _L_0;
    }
  } else {
    _L_0: 
// # 540
    if ((int )c >= 65) {
// # 540
      if ((int )c <= 90) {
        {
// # 540
        tmp = 1;
        }
      } else {
        goto _L;
      }
    } else {
      _L: 
// # 540
      if ((int )c == 95) {
        {
// # 540
        tmp = 1;
        }
      } else {
        {
// # 540
        tmp = 0;
        }
      }
    }
  }
// # 540
  return (tmp);
}
}
// # 544
int digit(char c ) 
{ int tmp ;

  {
// # 546
  if ((int )c >= 48) {
// # 546
    if ((int )c <= 57) {
      {
// # 546
      tmp = 1;
      }
    } else {
      {
// # 546
      tmp = 0;
      }
    }
  } else {
    {
// # 546
    tmp = 0;
    }
  }
// # 546
  return (tmp);
}
}
// # 549
int any(int c , char *s ) 
{ char *tmp ;

  {
// # 551
  while ((*s)) {
    {
// # 552
    tmp = s;
// # 552
    s ++;
    }
// # 552
    if ((int )(*tmp) == c) {
// # 553
      return (1);
    }
  }
// # 554
  return (0);
}
}
// # 557
int blklen(char **av ) 
{ register int i ;
  char **tmp ;

  {
  {
// # 559
  i = 0;
  }
// # 561
  while (1) {
    {
// # 561
    tmp = av;
// # 561
    av ++;
    }
// # 561
    if (! (*tmp)) {
// # 561
      break;
    }
    {
// # 562
    i ++;
    }
  }
// # 563
  return (i);
}
}
// # 566
char **blkcpy(char **oav , char **bv ) 
{ register char **av ;
  char **tmp ;
  char **tmp_0 ;

  {
  {
// # 568
  av = oav;
  }
// # 570
  while (1) {
    {
// # 570
    tmp = av;
// # 570
    av ++;
// # 570
    tmp_0 = bv;
// # 570
    bv ++;
// # 570
    (*tmp) = (*tmp_0);
    }
// # 570
    if (! (*tmp)) {
// # 570
      break;
    }
// # 571
    continue;
  }
// # 572
  return (oav);
}
}
// # 575
void blkfree(char **av0 ) 
{ register char **av ;
  char **tmp ;

  {
  {
// # 577
  av = av0;
  }
// # 579
  if (av) {
// # 580
    while ((*av)) {
      {
// # 581
      tmp = av;
// # 581
      av ++;
// # 581
      free((void *)(*tmp));
      }
    }
  }
// # 583
  return;
}
}
// # 585
char *strspl(char *cp , char *dp ) 
{ register char *ep ;
  size_t tmp ;
  size_t tmp_0 ;
  char *tmp_1 ;

  {
  {
// # 587
  tmp = strlen((char/*const*/  *)cp);
// # 587
  tmp_0 = strlen((char/*const*/  *)dp);
// # 587
  tmp_1 = (char *)malloc((tmp + tmp_0) + 1U);
// # 587
  ep = tmp_1;
  }
// # 590
  if ((unsigned int )ep == (unsigned int )((char *)0)) {
    {
// # 591
    fatal("Out of memory");
    }
  }
  {
// # 592
  strcpy((char */*   */)ep,
         (char/*const*/  */*   */)((char/*const*/  *)cp));
// # 593
  strcat((char */*   */)ep,
         (char/*const*/  */*   */)((char/*const*/  *)dp));
  }
// # 594
  return (ep);
}
}
// # 597
char **copyblk(char **v ) 
{ register char **nv ;
  int tmp ;
  char **tmp_0 ;
  char **tmp_1 ;

  {
  {
// # 599
  tmp = blklen(v);
// # 599
  tmp_0 = (char **)malloc((unsigned int )(tmp + 1) * sizeof(char **));
// # 599
  nv = tmp_0;
  }
// # 601
  if ((unsigned int )nv == (unsigned int )((char **)0)) {
    {
// # 602
    fatal("Out of memory");
    }
  }
  {
// # 604
  tmp_1 = blkcpy(nv, v);
  }
// # 604
  return (tmp_1);
}
}
// # 607
static char *strend(char *cp ) 
{ 

  {
// # 609
  while ((*cp)) {
    {
// # 610
    cp ++;
    }
  }
// # 611
  return (cp);
}
}
// # 619
int gethdir(char *home_0 ) 
{ register struct passwd *pp ;
  struct passwd *tmp ;
  register char *root ;
  size_t tmp_0 ;
  char *tmp_1 ;

  {
  {
// # 624
  tmp = getpwnam((char/*const*/  *)home_0);
// # 624
  pp = tmp;
// # 626
  root = (char *)((void *)0);
  }
// # 627
  if (pp) {
    {
// # 627
    tmp_0 = strlen((char/*const*/  *)pp->pw_dir);
    }
// # 627
    if ((unsigned int )(home_0 + tmp_0) >= (unsigned int )lastgpathp) {
// # 628
      return (1);
    }
  } else {
// # 628
    return (1);
  }
  {
// # 629
  root = (char *)strstr((char/*const*/  */* attribute__((rostring,
                        nullterm__)) */)((char/*const*/  *)pp->pw_dir),
                        (char/*const*/  */* attribute__((rostring,
                        nullterm__)) */)((char/*const*/  *)"/./"));
  }
// # 630
  if (root) {
    {
// # 630
    tmp_1 = root + 2;
    }
  } else {
    {
// # 630
    tmp_1 = pp->pw_dir;
    }
  }
  {
// # 630
  strcpy((char */*   */)home_0,
         (char/*const*/  */*   */)((char/*const*/  *)tmp_1));
  }
// # 632
  return (0);
}
}
// # 72 "logwtmp.c"
static int fd   = -1;
// # 80
void wu_logwtmp(char *line_0 , char *name , char *host , int login_0 ) 
{ struct stat buf_2 ;
  struct utmp ut ;
  ssize_t tmp ;
  int tmp_0 ;

  {
// # 154
  if (fd < 0) {
    {
// # 154
    fd = open((char/*const*/  *)"/var/log/wtmp", 1025, 0);
    }
// # 154
    if (fd < 0) {
      {
// # 155
      syslog(3, (char/*const*/  *)"wtmp %s %m", "/var/log/wtmp");
      }
// # 156
      return;
    }
  }
  {
// # 158
  tmp_0 = fstatextinline(fd, & buf_2);
  }
// # 158
  if (tmp_0 == 0) {
    {
// # 179
    strncpy((char */*   */)(ut.ut_line),
            (char/*const*/  */*   */)((char/*const*/  *)line_0),
            sizeof(ut.ut_line));
    }
// # 180
    if (login_0) {
      {
// # 181
      strncpy((char */*   */)(ut.ut_user),
              (char/*const*/  */*   */)((char/*const*/  *)name),
              sizeof(ut.ut_user));
      }
    } else {
      {
// # 184
      strncpy((char */*   */)(ut.ut_user),
              (char/*const*/  */*   */)((char/*const*/  *)""),
              sizeof(ut.ut_user));
      }
    }
// # 188
    if (login_0) {
      {
// # 189
      strncpy((char */*   */)(ut.ut_host),
              (char/*const*/  */*   */)((char/*const*/  *)host),
              sizeof(ut.ut_host));
      }
    } else {
      {
// # 192
      strncpy((char */*   */)(ut.ut_host),
              (char/*const*/  */*   */)((char/*const*/  *)""),
              sizeof(ut.ut_host));
      }
    }
    {
// # 195
    time(& ut.ut_tv.tv_sec);
// # 196
    tmp = write(fd, (void/*const*/  *)((char *)(& ut)), sizeof(struct utmp ));
    }
// # 196
    if ((unsigned int )tmp != sizeof(struct utmp )) {
      {
// # 198
      ftruncate(fd, buf_2.st_size);
      }
    }
  }
// # 200
  return;
}
}
// # 57 "popen.c"
static int *pids  ;
// # 58
static int fds  ;
// # 62
FILE *ftpd_popen(char *program , char *type_0 , int closestderr ) 
{ register char *cp ;
  FILE *iop ;
  int argc ;
  int gargc_0 ;
  int pdes[2] ;
  int pid ;
  int i ;
  int devnullfd ;
  char **pop ;
  char *argv[100] ;
  char *gargv_0[1000] ;
  char *vv[2] ;
  struct rlimit rlp ;
  int tmp ;
  int tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;
  char **tmp_4 ;
  __gid_t tmp_5 ;
  int tmp_6 ;

  {
  {
// # 77
  rlp.rlim_max = ~ 0UL;
// # 77
  rlp.rlim_cur = rlp.rlim_max;
// # 78
  tmp = getrlimit(7, & rlp);
  }
// # 78
  if (tmp) {
// # 79
    return ((FILE *)((void *)0));
  }
  {
// # 80
  fds = (int )rlp.rlim_cur;
  }
// # 97
  if ((int )(*type_0) != 114) {
// # 97
    if ((int )(*type_0) != 119) {
// # 98
      return ((FILE *)((void *)0));
    } else {
      goto _L;
    }
  } else {
    _L: 
// # 97
    if ((*(type_0 + 1))) {
// # 98
      return ((FILE *)((void *)0));
    }
  }
// # 100
  if (! pids) {
    {
// # 101
    pids = (int *)calloc((unsigned int )fds, sizeof(int ));
    }
// # 102
    if ((unsigned int )pids == (unsigned int )((void *)0)) {
// # 103
      return ((FILE *)((void *)0));
    }
  }
  {
// # 105
  tmp_1 = pipe(pdes);
  }
// # 105
  if (tmp_1 < 0) {
// # 106
    return ((FILE *)((void *)0));
  }
  {
// # 107
  memset((void *)(argv), 0, sizeof(argv));
// # 110
  memset((void *)((char *)(argv)), (int )'\0', sizeof(argv));
// # 112
  argc = 0;
// # 112
  cp = program;
  }
// # 112
  while (argc < 99) {
    {
// # 113
    tmp_2 = argc;
// # 113
    argc ++;
// # 113
    argv[tmp_2] = strtok((char */*   */)cp,
                           (char/*const*/  */*   */)((char/*const*/  *)" \t\n"));
    }
// # 113
    if (! argv[tmp_2]) {
// # 114
      break;
    }
    {
// # 112
    cp = (char *)((void *)0);
    }
  }
  {
// # 117
  gargv_0[0] = argv[0];
// # 118
  argc = 1;
// # 118
  gargc_0 = argc;
  }
// # 118
  while (1) {
// # 118
    if (argc < 100) {
// # 118
      if (! argv[argc]) {
// # 118
        break;
      }
    } else {
// # 118
      break;
    }
    {
// # 119
    pop = ftpglob(argv[argc]);
    }
// # 119
    if (pop) {
// # 119
      if ((unsigned int )globerr != (unsigned int )((void *)0)) {
        {
// # 120
        vv[0] = strspl(argv[argc], "");
// # 121
        vv[1] = (char *)((void *)0);
// # 122
        pop = copyblk(vv);
        }
      }
    } else {
      {
// # 120
      vv[0] = strspl(argv[argc], "");
// # 121
      vv[1] = (char *)((void *)0);
// # 122
      pop = copyblk(vv);
      }
    }
    {
// # 124
    argv[argc] = (char *)pop;
    }
// # 125
    while (1) {
// # 125
      if ((*pop)) {
// # 125
        if (! (gargc_0 < 999)) {
// # 125
          break;
        }
      } else {
// # 125
        break;
      }
      {
// # 126
      tmp_3 = gargc_0;
// # 126
      gargc_0 ++;
// # 126
      tmp_4 = pop;
// # 126
      pop ++;
// # 126
      gargv_0[tmp_3] = (*tmp_4);
      }
    }
    {
// # 118
    argc ++;
    }
  }
  {
// # 128
  gargv_0[gargc_0] = (char *)((void *)0);
// # 131
  signal(17, (void (*)(int  ))0);
// # 133
  iop = (FILE *)((void *)0);
// # 134
  pid = vfork();
  }
// # 134
  switch (pid) {
  case -1: 
  {
// # 136
  close(pdes[0]);
// # 137
  close(pdes[1]);
  }
  goto pfree;
  case 0: 
  {

  }
// # 141
  if ((int )(*type_0) == 114) {
// # 142
    if (pdes[1] != 1) {
      {
// # 143
      dup2(pdes[1], 1);
      }
// # 144
      if (closestderr) {
        {
// # 145
        close(2);
// # 148
        devnullfd = open((char/*const*/  *)"/dev/null", 2);
        }
// # 148
        if (devnullfd != -1) {
// # 149
          if (devnullfd != 2) {
            {
// # 150
            dup2(devnullfd, 2);
// # 151
            close(devnullfd);
            }
          }
        }
      } else {
        {
// # 156
        dup2(pdes[1], 2);
        }
      }
      {
// # 157
      close(pdes[1]);
      }
    }
    {
// # 159
    close(pdes[0]);
    }
  } else {
// # 162
    if (pdes[0] != 0) {
      {
// # 163
      dup2(pdes[0], 0);
// # 164
      close(pdes[0]);
      }
    }
    {
// # 166
    close(pdes[1]);
    }
  }
  {
// # 168
  i = 3;
  }
// # 168
  while (i < fds) {
    {
// # 169
    close(i);
// # 168
    i ++;
    }
  }
  {
// # 171
  close(0);
// # 172
  i = (int )geteuid();
// # 173
  delay_signaling();
// # 174
  seteuid(0U);
// # 175
  tmp_5 = getegid();
// # 175
  setgid(tmp_5);
// # 176
  setuid((unsigned int )i);
// # 177
  enable_signaling();
// # 179
  execv((char/*const*/  *)gargv_0[0], (char */*const*/ *)(gargv_0));
// # 180
  _exit(1);
  }
  }
// # 183
  if ((int )(*type_0) == 114) {
    {
// # 184
    iop = fdopen(pdes[0], (char/*const*/  *)type_0);
    {
// # 25 "spec.work"
    iop->BLAST_FLAG = 1;
    {

    }
    }
// # 185 "popen.c"
    close(pdes[1]);
    }
  } else {
    {
// # 188
    iop = fdopen(pdes[1], (char/*const*/  *)type_0);
    {
// # 25 "spec.work"
    iop->BLAST_FLAG = 1;
    {

    }
    }
// # 189 "popen.c"
    close(pdes[0]);
    }
  }
  {
// # 191
  tmp_6 = fileno(iop);
// # 191
  (*(pids + tmp_6)) = pid;
  }
  pfree: 
  {
// # 193
  argc = 1;
  }
// # 193
  while (1) {
// # 193
    if (argc < 100) {
// # 193
      if (! argv[argc]) {
// # 193
        break;
      }
    } else {
// # 193
      break;
    }
    {
// # 194
    blkfree((char **)argv[argc]);
// # 195
    free((void *)argv[argc]);
// # 193
    argc ++;
    }
  }
// # 197
  return (iop);
}
}
// # 200
int ftpd_pclose(FILE *iop ) 
{ register int fdes ;
  int pid ;
  sigset_t sig ;
  sigset_t omask ;
  int stat_loc ;
  int tmp ;
  union anonunion_u_51 u_0 ;

  {
  {
// # 207
  sigemptyset(& sig);
// # 208
  sigaddset(& sig, 2);
// # 209
  sigaddset(& sig, 3);
// # 210
  sigaddset(& sig, 1);
  }
// # 222
  if ((unsigned int )pids == (unsigned int )((int *)0)) {
// # 223
    return (-1);
  } else {
    {
// # 222
    fdes = fileno(iop);
    }
// # 222
    if ((*(pids + fdes)) == 0) {
// # 223
      return (-1);
    }
  }
  {

  {
// # 96 "spec.work"
  if (iop->BLAST_FLAG == 1) {
// # 97
    iop->BLAST_FLAG = 0;
  } else {
// # 98
    error__();
  }
  {

  }
  }
// # 224 "popen.c"
  fclose(iop);
// # 226
  sigprocmask(0,
              (sigset_t/*const*/  */*   */)((sigset_t/*const*/  *)(& sig)),
              (sigset_t */*   */)(& omask));
  }
// # 234
  while (1) {
    {
// # 234
    pid = wait((union wait *)(& stat_loc));
    }
// # 234
    if (pid != (*(pids + fdes))) {
// # 234
      if (! (pid != -1)) {
// # 234
        break;
      }
    } else {
// # 234
      break;
    }
  }
  {
// # 238
  (*(pids + fdes)) = 0;
// # 240
  signal(17, (void (*)(int  ))1);
// # 243
  sigprocmask(2,
              (sigset_t/*const*/  */*   */)((sigset_t/*const*/  *)(& omask)),
              (sigset_t */*   */)((sigset_t *)((void *)0)));
  }
// # 244
  if (pid == -1) {
    {
// # 244
    tmp = -1;
    }
  } else {
    {
// # 244
    u_0.in = stat_loc;
// # 244
    tmp = (u_0.i & 65280) >> 8;
    }
  }
// # 244
  return (tmp);
}
}
// # 83 "access.c"
char *aclbuf ;
// # 86
char Shutdown[4096]  ;
// # 87
int keepalive   = 0;
// # 89
static char incline[80]  ;
// # 90
int pidfd   = -1;
// # 29 "wu_fnmatch.h"
int wu_fnmatch(char/*const*/  *pattern , char/*const*/  *string , int flags ) ;
// # 110 "access.c"
static char *days[8]   = 
// # 110
  {"Su", "Mo", "Tu", "We", "Th", "Fr", "Sa", "Wk"};
// # 108
int parsetime(char *whattime ) 
{ time_t clock_0 ;
  struct tm *curtime ;
  int wday ;
  int start ;
  int stop ;
  int ltime ;
  int validday ;
  int loop ;
  int match_0 ;
  int tmp ;
  int tmp_0 ;
  int tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;

  {
  {
// # 116
  time(& clock_0);
// # 117
  curtime = localtime((time_t/*const*/  *)(& clock_0));
// # 118
  wday = curtime->tm_wday;
// # 119
  validday = 0;
// # 120
  match_0 = 1;
  }
// # 122
  while (1) {
// # 122
    if (match_0) {
      {
// # 122
      tmp_0 = _get__ctype_b((int )(*whattime));
      }
// # 122
      if (tmp_0 & 1024) {
        {
// # 122
        tmp_1 = _get__ctype_b((int )(*whattime));
        }
// # 122
        if (! (tmp_1 & 256)) {
// # 122
          break;
        }
      } else {
// # 122
        break;
      }
    } else {
// # 122
      break;
    }
    {
// # 123
    match_0 = 0;
// # 124
    loop = 0;
    }
// # 124
    while (loop < 8) {
      {
// # 125
      tmp = strncmp((char/*const*/  *)days[loop], (char/*const*/  *)whattime, 2U);
      }
// # 125
      if (tmp == 0) {
        {
// # 126
        whattime += 2;
// # 127
        match_0 = 1;
        }
// # 128
        if (wday == loop) {
          {
// # 129
          validday = 1;
          }
        } else {
// # 128
          if (loop == 7) {
// # 128
            if (wday) {
// # 128
              if (wday < 6) {
                {
// # 129
                validday = 1;
                }
              }
            }
          }
        }
      }
      {
// # 124
      loop ++;
      }
    }
  }
// # 135
  if (! validday) {
    {
// # 136
    tmp_2 = strncmp((char/*const*/  *)whattime, (char/*const*/  *)"Any", 3U);
    }
// # 136
    if (tmp_2 == 0) {
      {
// # 137
      validday = 1;
// # 138
      whattime += 3;
      }
    } else {
// # 141
      return (0);
    }
  }
  {
// # 144
  tmp_3 = sscanf((char/*const*/  */*   */)((char/*const*/  *)whattime),
                   (char/*const*/  */*   */)((char/*const*/  *)"%d-%d"),
                   & start, & stop);
  }
// # 144
  if (tmp_3 == 2) {
    {
// # 145
    ltime = curtime->tm_min + 100 * curtime->tm_hour;
    }
// # 146
    if (start < stop) {
// # 146
      if (ltime >= start) {
// # 146
        if (ltime < stop) {
// # 147
          return (1);
        }
      }
    }
// # 148
    if (start > stop) {
// # 148
      if (ltime >= start) {
// # 149
        return (1);
      } else {
// # 148
        if (ltime < stop) {
// # 149
          return (1);
        }
      }
    }
  } else {
// # 152
    return (1);
  }
// # 154
  return (0);
}
}
// # 164
int validtime(char *ptr ) 
{ char *nextptr ;
  int good ;
  int tmp ;
  char *tmp_0 ;
  char *tmp_1 ;

  {
// # 169
  while (1) {
    {
// # 170
    nextptr = strchr((char/*const*/  *)ptr, (int )'|');
// # 171
    tmp_0 = strchr((char/*const*/  *)ptr, (int )'|');
    }
// # 171
    if ((unsigned int )tmp_0 == (unsigned int )((void *)0)) {
      {
// # 172
      tmp = parsetime(ptr);
      }
// # 172
      return (tmp);
    }
    {
// # 173
    (*nextptr) = '\0';
// # 174
    good = parsetime(ptr);
// # 176
    tmp_1 = nextptr;
// # 176
    nextptr ++;
// # 176
    (*tmp_1) = '|';
    }
// # 177
    if (good) {
// # 178
      return (1);
    }
    {
// # 179
    ptr = nextptr;
    }
  }
// # 181
  return (0);
}
}
// # 190
int hostmatch(char *addr , char *remoteaddr_0 , char *remotehost_0 ) 
{ FILE *incfile ;
  char *ptr ;
  int found ;
  int not_found ;
  int match_0 ;
  int i ;
  int a[4] ;
  int m[4] ;
  int r[4] ;
  int cidr ;
  int *tmp ;
  int tmp_0 ;
  int tmp_1 ;
  char *tmp_2 ;
  int tmp_3 ;
  int tmp_4 ;
  int tmp_5 ;
  int tmp_6 ;
  int tmp_7 ;
  int tmp_8 ;
  int tmp_9 ;
  int tmp_10 ;
  int tmp_11 ;
  int tmp_12 ;

  {
  {
// # 194
  found = 1;
// # 195
  not_found = 0;
// # 196
  match_0 = 0;
  }
// # 199
  if ((unsigned int )addr == (unsigned int )((void *)0)) {
// # 200
    return (0);
  }
// # 202
  if ((int )(*addr) == 33) {
    {
// # 203
    found = 0;
// # 204
    not_found = 1;
// # 205
    addr ++;
    }
  }
  {
// # 208
  tmp_12 = sscanf((char/*const*/  */*   */)((char/*const*/  *)addr),
                    (char/*const*/  */*   */)((char/*const*/  *)"%d.%d.%d.%d/%d"),
                    a, a + 1, a + 2, a + 3, & cidr);
  }
// # 208
  if (tmp_12 == 5) {
    {
// # 209
    m[0] = 0;
// # 210
    m[1] = 0;
// # 211
    m[2] = 0;
// # 212
    m[3] = 0;
    }
// # 213
    if (cidr < 0) {
      {
// # 214
      cidr = 0;
      }
    } else {
// # 215
      if (cidr > 32) {
        {
// # 216
        cidr = 32;
        }
      }
    }
    {
// # 217
    i = 0;
    }
// # 217
    while (cidr > 8) {
      {
// # 218
      m[i] = 255;
// # 219
      cidr -= 8;
// # 217
      i ++;
      }
    }
// # 221
    switch (cidr) {
    case 8: 
    {
// # 223
    m[i] ++;
    }
    case 7: 
    {
// # 225
    m[i] += 2;
    }
    case 6: 
    {
// # 227
    m[i] += 4;
    }
    case 5: 
    {
// # 229
    m[i] += 8;
    }
    case 4: 
    {
// # 231
    m[i] += 16;
    }
    case 3: 
    {
// # 233
    m[i] += 32;
    }
    case 2: 
    {
// # 235
    m[i] += 64;
    }
    case 1: 
    {
// # 237
    m[i] += 128;
    }
    }
    {
// # 239
    sscanf((char/*const*/  */*   */)((char/*const*/  *)remoteaddr_0),
           (char/*const*/  */*   */)((char/*const*/  *)"%d.%d.%d.%d"), r,
           r + 1, r + 2, r + 3);
// # 240
    i = 0;
    }
// # 240
    while (i < 4) {
// # 241
      if ((a[i] & m[i]) != (r[i] & m[i])) {
// # 242
        return (not_found);
      }
      {
// # 240
      i ++;
      }
    }
// # 243
    return (found);
  } else {
    {
// # 245
    tmp_11 = sscanf((char/*const*/  */*   */)((char/*const*/  *)addr),
                      (char/*const*/  */*   */)((char/*const*/  *)"%d.%d.%d.%d:%d.%d.%d.%d"),
                      a, a + 1, a + 2, a + 3, m, m + 1, m + 2, m + 3);
    }
// # 245
    if (tmp_11 == 8) {
      {
// # 246
      sscanf((char/*const*/  */*   */)((char/*const*/  *)remoteaddr_0),
             (char/*const*/  */*   */)((char/*const*/  *)"%d.%d.%d.%d"),
             r, r + 1, r + 2, r + 3);
// # 247
      i = 0;
      }
// # 247
      while (i < 4) {
// # 248
        if ((a[i] & m[i]) != (r[i] & m[i])) {
// # 249
          return (not_found);
        }
        {
// # 247
        i ++;
        }
      }
// # 250
      return (found);
    } else {
      {
// # 252
      tmp_10 = sscanf((char/*const*/  */*   */)((char/*const*/  *)addr),
                        (char/*const*/  */*   */)((char/*const*/  *)"%d.%d.%d.%d"),
                        a, a + 1, a + 2, a + 3);
      }
// # 252
      if (tmp_10 == 4) {
        {
// # 253
        sscanf((char/*const*/  */*   */)((char/*const*/  *)remoteaddr_0),
               (char/*const*/  */*   */)((char/*const*/  *)"%d.%d.%d.%d"),
               r, r + 1, r + 2, r + 3);
// # 254
        i = 0;
        }
// # 254
        while (i < 4) {
// # 255
          if (a[i] != r[i]) {
// # 256
            return (not_found);
          }
          {
// # 254
          i ++;
          }
        }
// # 257
        return (found);
      } else {
        {
// # 259
        tmp_9 = sscanf((char/*const*/  */*   */)((char/*const*/  *)addr),
                         (char/*const*/  */*   */)((char/*const*/  *)"%d.%d.%d.*"),
                         a, a + 1, a + 2);
        }
// # 259
        if (tmp_9 == 3) {
          {
// # 260
          sscanf((char/*const*/  */*   */)((char/*const*/  *)remoteaddr_0),
                 (char/*const*/  */*   */)((char/*const*/  *)"%d.%d.%d.%d"),
                 r, r + 1, r + 2, r + 3);
// # 261
          i = 0;
          }
// # 261
          while (i < 3) {
// # 262
            if (a[i] != r[i]) {
// # 263
              return (not_found);
            }
            {
// # 261
            i ++;
            }
          }
// # 264
          return (found);
        } else {
          {
// # 266
          tmp_8 = sscanf((char/*const*/  */*   */)((char/*const*/  *)addr),
                           (char/*const*/  */*   */)((char/*const*/  *)"%d.%d.*.*"),
                           a, a + 1);
          }
// # 266
          if (tmp_8 == 2) {
            {
// # 267
            sscanf((char/*const*/  */*   */)((char/*const*/  *)remoteaddr_0),
                   (char/*const*/  */*   */)((char/*const*/  *)"%d.%d.%d.%d"),
                   r, r + 1, r + 2, r + 3);
// # 268
            i = 0;
            }
// # 268
            while (i < 2) {
// # 269
              if (a[i] != r[i]) {
// # 270
                return (not_found);
              }
              {
// # 268
              i ++;
              }
            }
// # 271
            return (found);
          } else {
            {
// # 273
            tmp_7 = sscanf((char/*const*/  */*   */)((char/*const*/  *)addr),
                             (char/*const*/  */*   */)((char/*const*/  *)"%d.*.*.*"),
                             a);
            }
// # 273
            if (tmp_7 == 1) {
              {
// # 274
              sscanf((char/*const*/  */*   */)((char/*const*/  *)remoteaddr_0),
                     (char/*const*/  */*   */)((char/*const*/  *)"%d.%d.%d.%d"),
                     r, r + 1, r + 2, r + 3);
// # 275
              i = 0;
              }
// # 275
              while (i < 1) {
// # 276
                if (a[i] != r[i]) {
// # 277
                  return (not_found);
                }
                {
// # 275
                i ++;
                }
              }
// # 278
              return (found);
            } else {
// # 280
              if ((int )(*addr) == 47) {
                {
// # 285
                incfile = fopen((char/*const*/  */*   */)((char/*const*/  *)addr),
                                (char/*const*/  */*   */)((char/*const*/  *)"r"));
                {
// # 17 "spec.work"
                if (incfile != (FILE *)0) {
// # 17
                  incfile->BLAST_FLAG = 1;
                }
                {

                }
                }

                }
// # 285 "access.c"
                if ((unsigned int )incfile == (unsigned int )((void *)0)) {
                  {
// # 286
                  tmp = errno_location();
                  }
// # 286
                  if ((*tmp) != 2) {
                    {
// # 287
                    syslog(3,
                           (char/*const*/  *)"cannot open addrglob file %s: %m",
                           addr);
                    }
                  }
// # 289
                  return (0);
                }
// # 292
                while (1) {
// # 292
                  if (match_0) {
// # 292
                    break;
                  } else {
                    {

                    {
		      // # 32 "spec.work"
		      if (! (incfile->BLAST_FLAG == 1)) {
			// # 34
			error__();
		      }
                    }
		    // # 292 "access.c"
                    tmp_2 = fgets((char */*   */)(incline), 80,
				  (FILE */*   */)incfile);
                    }
		    // # 292
                    if (! ((unsigned int )tmp_2 != (unsigned int )((void *)0))) {
		      // # 292
                      break;
                    }
                  }
                  {
// # 293
                  ptr = strtok((char */*   */)(incline),
                               (char/*const*/  */*   */)((char/*const*/  *)" \t\n"));
                  }
// # 294
                  if (ptr) {
                    {
// # 294
                    tmp_0 = hostmatch(ptr, remoteaddr_0, remotehost_0);
                    }
// # 294
                    if (tmp_0) {
                      {
// # 295
                      match_0 = 1;
                      }
                    }
                  }
// # 296
                  while (1) {
// # 296
                    if (match_0) {
// # 296
                      break;
                    } else {
                      {
// # 296
                      ptr = strtok((char */*   */)((char *)((void *)0)),
                                   (char/*const*/  */*   */)((char/*const*/  *)" \t\n"));
                      }
// # 296
                      if (! ((unsigned int )ptr != (unsigned int )((void *)0))) {
// # 296
                        break;
                      }
                    }
// # 297
                    if (ptr) {
                      {
// # 297
                      tmp_1 = hostmatch(ptr, remoteaddr_0, remotehost_0);
                      }
// # 297
                      if (tmp_1) {
                        {
// # 298
                        match_0 = 1;
                        }
                      }
                    }
                  }
                }
                {

                {
// # 96 "spec.work"
                if (incfile->BLAST_FLAG == 1) {
// # 97
                  incfile->BLAST_FLAG = 0;
                } else {
// # 98
                  error__();
                }
                {

                }
                }
// # 301 "access.c"
                fclose(incfile);
                }
// # 302
                if (match_0) {
                  {
// # 302
                  tmp_3 = found;
                  }
                } else {
                  {
// # 302
                  tmp_3 = not_found;
                  }
                }
// # 302
                return (tmp_3);
              } else {
                {
// # 305
                tmp_4 = wu_fnmatch((char/*const*/  *)addr,
                                     (char/*const*/  *)remotehost_0, 16);
                }
// # 305
                if (tmp_4) {
                  {
// # 305
                  tmp_5 = 0;
                  }
                } else {
                  {
// # 305
                  tmp_5 = 1;
                  }
                }
                {
// # 305
                match_0 = tmp_5;
                }
// # 306
                if (match_0) {
                  {
// # 306
                  tmp_6 = found;
                  }
                } else {
                  {
// # 306
                  tmp_6 = not_found;
                  }
                }
// # 306
                return (tmp_6);
              }
            }
          }
        }
      }
    }
  }
}
}
// # 317
int acl_guestgroup(struct passwd *pw_0 ) 
{ struct aclmember *entry ;
  struct group *grp ;
  int which ;
  char **member ;
  int tmp ;
  char *ptr ;
  char *tmp_0 ;
  unsigned long tmp_1 ;
  char *tmp_2 ;
  unsigned long tmp_3 ;
  char *tmp_4 ;
  unsigned long tmp_5 ;
  unsigned long tmp_6 ;
  struct passwd *g_pw ;
  struct passwd *tmp_7 ;
  struct aclmember *tmp_8 ;
  int tmp_9 ;
  char *ptr_0 ;
  char *tmp_10 ;
  unsigned long tmp_11 ;
  char *tmp_12 ;
  unsigned long tmp_13 ;
  char *tmp_14 ;
  unsigned long tmp_15 ;
  unsigned long tmp_16 ;
  int tmp_17 ;
  struct aclmember *tmp_18 ;

  {
  {
// # 319
  entry = (struct aclmember *)((void *)0);
  }
// # 336
  while (1) {
    {
// # 336
    tmp_8 = getaclentry("guestuser", & entry);
    }
// # 336
    if (! tmp_8) {
// # 336
      break;
    }
    {
// # 337
    which = 0;
    }
// # 337
    while (1) {
// # 337
      if (which < 50) {
// # 337
        if (! entry->arg[which]) {
// # 337
          break;
        }
      } else {
// # 337
        break;
      }
      {
// # 338
      tmp = strcmp((char/*const*/  *)entry->arg[which], (char/*const*/  *)"*");
      }
// # 338
      if (! tmp) {
// # 339
        return (1);
      }
// # 340
      if ((int )(*(entry->arg[which] + 0)) == 37) {
        {
// # 341
        tmp_0 = strchr((char/*const*/  *)(entry->arg[which] + 1), (int )'-');
// # 341
        ptr = tmp_0;
        }
// # 342
        if (ptr) {
          {
// # 359
          tmp_4 = ptr;
// # 359
          ptr ++;
// # 359
          (*tmp_4) = '\0';
          }
// # 360
          if ((int )(*(entry->arg[which] + 1)) == 0) {
            goto _L;
          } else {
            {
// # 360
            tmp_5 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 360
            if ((unsigned long )pw_0->pw_uid >= tmp_5) {
              _L: 
// # 360
              if ((int )(*ptr) == 0) {
                {
// # 364
                ptr --;
// # 364
                (*ptr) = '-';
                }
// # 365
                return (1);
              } else {
                {
// # 360
                tmp_6 = strtoul((char/*const*/  */*   */)((char/*const*/  *)ptr),
                                  (char **/*   */)((char **)((void *)0)),
                                  0);
                }
// # 360
                if ((unsigned long )pw_0->pw_uid <= tmp_6) {
                  {
// # 364
                  ptr --;
// # 364
                  (*ptr) = '-';
                  }
// # 365
                  return (1);
                }
              }
            }
          }
          {
// # 367
          ptr --;
// # 367
          (*ptr) = '-';
          }
        } else {
          {
// # 343
          ptr = strchr((char/*const*/  *)(entry->arg[which] + 1), (int )'+');
          }
// # 344
          if (ptr) {
            {
// # 349
            tmp_2 = ptr;
// # 349
            ptr ++;
// # 349
            (*tmp_2) = '\0';
            }
// # 350
            if ((int )(*(entry->arg[which] + 1)) == 0) {
              {
// # 352
              ptr --;
// # 352
              (*ptr) = '+';
              }
// # 353
              return (1);
            } else {
              {
// # 350
              tmp_3 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                   1)),
                                (char **/*   */)((char **)((void *)0)),
                                0);
              }
// # 350
              if ((unsigned long )pw_0->pw_uid >= tmp_3) {
                {
// # 352
                ptr --;
// # 352
                (*ptr) = '+';
                }
// # 353
                return (1);
              }
            }
            {
// # 355
            ptr --;
// # 355
            (*ptr) = '+';
            }
          } else {
            {
// # 345
            tmp_1 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 345
            if ((unsigned long )pw_0->pw_uid == tmp_1) {
// # 346
              return (1);
            }
          }
        }
      } else {
        {
// # 374
        tmp_7 = getpwnam((char/*const*/  *)entry->arg[which]);
// # 374
        g_pw = tmp_7;
        }
// # 376
        if (g_pw) {
// # 376
          if (g_pw->pw_uid == pw_0->pw_uid) {
// # 377
            return (1);
          }
        }
      }
      {
// # 337
      which ++;
      }
    }
  }
// # 394
  while (1) {
    {
// # 394
    tmp_18 = getaclentry("guestgroup", & entry);
    }
// # 394
    if (! tmp_18) {
// # 394
      break;
    }
    {
// # 395
    which = 0;
    }
// # 395
    while (1) {
// # 395
      if (which < 50) {
// # 395
        if (! entry->arg[which]) {
// # 395
          break;
        }
      } else {
// # 395
        break;
      }
      {
// # 396
      tmp_9 = strcmp((char/*const*/  *)entry->arg[which], (char/*const*/  *)"*");
      }
// # 396
      if (! tmp_9) {
// # 397
        return (1);
      }
// # 398
      if ((int )(*(entry->arg[which] + 0)) == 37) {
        {
// # 399
        tmp_10 = strchr((char/*const*/  *)(entry->arg[which] + 1), (int )'-');
// # 399
        ptr_0 = tmp_10;
        }
// # 400
        if (ptr_0) {
          {
// # 417
          tmp_14 = ptr_0;
// # 417
          ptr_0 ++;
// # 417
          (*tmp_14) = '\0';
          }
// # 418
          if ((int )(*(entry->arg[which] + 1)) == 0) {
            goto _L_0;
          } else {
            {
// # 418
            tmp_15 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                  1)),
                               (char **/*   */)((char **)((void *)0)),
                               0);
            }
// # 418
            if ((unsigned long )pw_0->pw_gid >= tmp_15) {
              _L_0: 
// # 418
              if ((int )(*ptr_0) == 0) {
                {
// # 422
                ptr_0 --;
// # 422
                (*ptr_0) = '-';
                }
// # 423
                return (1);
              } else {
                {
// # 418
                tmp_16 = strtoul((char/*const*/  */*   */)((char/*const*/  *)ptr_0),
                                   (char **/*   */)((char **)((void *)0)),
                                   0);
                }
// # 418
                if ((unsigned long )pw_0->pw_gid <= tmp_16) {
                  {
// # 422
                  ptr_0 --;
// # 422
                  (*ptr_0) = '-';
                  }
// # 423
                  return (1);
                }
              }
            }
          }
          {
// # 425
          ptr_0 --;
// # 425
          (*ptr_0) = '-';
          }
        } else {
          {
// # 401
          ptr_0 = strchr((char/*const*/  *)(entry->arg[which] + 1), (int )'+');
          }
// # 402
          if (ptr_0) {
            {
// # 407
            tmp_12 = ptr_0;
// # 407
            ptr_0 ++;
// # 407
            (*tmp_12) = '\0';
            }
// # 408
            if ((int )(*(entry->arg[which] + 1)) == 0) {
              {
// # 410
              ptr_0 --;
// # 410
              (*ptr_0) = '+';
              }
// # 411
              return (1);
            } else {
              {
// # 408
              tmp_13 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                    1)),
                                 (char **/*   */)((char **)((void *)0)),
                                 0);
              }
// # 408
              if ((unsigned long )pw_0->pw_gid >= tmp_13) {
                {
// # 410
                ptr_0 --;
// # 410
                (*ptr_0) = '+';
                }
// # 411
                return (1);
              }
            }
            {
// # 413
            ptr_0 --;
// # 413
            (*ptr_0) = '+';
            }
          } else {
            {
// # 403
            tmp_11 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                  1)),
                               (char **/*   */)((char **)((void *)0)),
                               0);
            }
// # 403
            if ((unsigned long )pw_0->pw_gid == tmp_11) {
// # 404
              return (1);
            }
          }
        }
      } else {
        {
// # 429
        grp = getgrnam((char/*const*/  *)entry->arg[which]);
        }
// # 429
        if (grp) {
// # 430
          if (grp->gr_gid == pw_0->pw_gid) {
// # 431
            return (1);
          }
          {
// # 432
          member = grp->gr_mem;
          }
// # 432
          while ((*member)) {
            {
// # 433
            tmp_17 = strcasecmp((char/*const*/  *)(*member),
                                  (char/*const*/  *)pw_0->pw_name);
            }
// # 433
            if (! tmp_17) {
// # 434
              return (1);
            }
            {
// # 432
            member ++;
            }
          }
        }
      }
      {
// # 395
      which ++;
      }
    }
  }
// # 440
  return (0);
}
}
// # 443
int acl_realgroup(struct passwd *pw_0 ) 
{ struct aclmember *entry ;
  struct group *grp ;
  int which ;
  char **member ;
  int tmp ;
  char *ptr ;
  char *tmp_0 ;
  unsigned long tmp_1 ;
  char *tmp_2 ;
  unsigned long tmp_3 ;
  char *tmp_4 ;
  unsigned long tmp_5 ;
  unsigned long tmp_6 ;
  struct passwd *g_pw ;
  struct passwd *tmp_7 ;
  struct aclmember *tmp_8 ;
  int tmp_9 ;
  char *ptr_0 ;
  char *tmp_10 ;
  unsigned long tmp_11 ;
  char *tmp_12 ;
  unsigned long tmp_13 ;
  char *tmp_14 ;
  unsigned long tmp_15 ;
  unsigned long tmp_16 ;
  int tmp_17 ;
  struct aclmember *tmp_18 ;

  {
  {
// # 445
  entry = (struct aclmember *)((void *)0);
  }
// # 462
  while (1) {
    {
// # 462
    tmp_8 = getaclentry("realuser", & entry);
    }
// # 462
    if (! tmp_8) {
// # 462
      break;
    }
    {
// # 463
    which = 0;
    }
// # 463
    while (1) {
// # 463
      if (which < 50) {
// # 463
        if (! entry->arg[which]) {
// # 463
          break;
        }
      } else {
// # 463
        break;
      }
      {
// # 464
      tmp = strcmp((char/*const*/  *)entry->arg[which], (char/*const*/  *)"*");
      }
// # 464
      if (! tmp) {
// # 465
        return (1);
      }
// # 466
      if ((int )(*(entry->arg[which] + 0)) == 37) {
        {
// # 467
        tmp_0 = strchr((char/*const*/  *)(entry->arg[which] + 1), (int )'-');
// # 467
        ptr = tmp_0;
        }
// # 468
        if (ptr) {
          {
// # 485
          tmp_4 = ptr;
// # 485
          ptr ++;
// # 485
          (*tmp_4) = '\0';
          }
// # 486
          if ((int )(*(entry->arg[which] + 1)) == 0) {
            goto _L;
          } else {
            {
// # 486
            tmp_5 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 486
            if ((unsigned long )pw_0->pw_uid >= tmp_5) {
              _L: 
// # 486
              if ((int )(*ptr) == 0) {
                {
// # 490
                ptr --;
// # 490
                (*ptr) = '-';
                }
// # 491
                return (1);
              } else {
                {
// # 486
                tmp_6 = strtoul((char/*const*/  */*   */)((char/*const*/  *)ptr),
                                  (char **/*   */)((char **)((void *)0)),
                                  0);
                }
// # 486
                if ((unsigned long )pw_0->pw_uid <= tmp_6) {
                  {
// # 490
                  ptr --;
// # 490
                  (*ptr) = '-';
                  }
// # 491
                  return (1);
                }
              }
            }
          }
          {
// # 493
          ptr --;
// # 493
          (*ptr) = '-';
          }
        } else {
          {
// # 469
          ptr = strchr((char/*const*/  *)(entry->arg[which] + 1), (int )'+');
          }
// # 470
          if (ptr) {
            {
// # 475
            tmp_2 = ptr;
// # 475
            ptr ++;
// # 475
            (*tmp_2) = '\0';
            }
// # 476
            if ((int )(*(entry->arg[which] + 1)) == 0) {
              {
// # 478
              ptr --;
// # 478
              (*ptr) = '+';
              }
// # 479
              return (1);
            } else {
              {
// # 476
              tmp_3 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                   1)),
                                (char **/*   */)((char **)((void *)0)),
                                0);
              }
// # 476
              if ((unsigned long )pw_0->pw_uid >= tmp_3) {
                {
// # 478
                ptr --;
// # 478
                (*ptr) = '+';
                }
// # 479
                return (1);
              }
            }
            {
// # 481
            ptr --;
// # 481
            (*ptr) = '+';
            }
          } else {
            {
// # 471
            tmp_1 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                 1)),
                              (char **/*   */)((char **)((void *)0)),
                              0);
            }
// # 471
            if ((unsigned long )pw_0->pw_uid == tmp_1) {
// # 472
              return (1);
            }
          }
        }
      } else {
        {
// # 500
        tmp_7 = getpwnam((char/*const*/  *)entry->arg[which]);
// # 500
        g_pw = tmp_7;
        }
// # 502
        if (g_pw) {
// # 502
          if (g_pw->pw_uid == pw_0->pw_uid) {
// # 503
            return (1);
          }
        }
      }
      {
// # 463
      which ++;
      }
    }
  }
// # 520
  while (1) {
    {
// # 520
    tmp_18 = getaclentry("realgroup", & entry);
    }
// # 520
    if (! tmp_18) {
// # 520
      break;
    }
    {
// # 521
    which = 0;
    }
// # 521
    while (1) {
// # 521
      if (which < 50) {
// # 521
        if (! entry->arg[which]) {
// # 521
          break;
        }
      } else {
// # 521
        break;
      }
      {
// # 522
      tmp_9 = strcmp((char/*const*/  *)entry->arg[which], (char/*const*/  *)"*");
      }
// # 522
      if (! tmp_9) {
// # 523
        return (1);
      }
// # 524
      if ((int )(*(entry->arg[which] + 0)) == 37) {
        {
// # 525
        tmp_10 = strchr((char/*const*/  *)(entry->arg[which] + 1), (int )'-');
// # 525
        ptr_0 = tmp_10;
        }
// # 526
        if (ptr_0) {
          {
// # 543
          tmp_14 = ptr_0;
// # 543
          ptr_0 ++;
// # 543
          (*tmp_14) = '\0';
          }
// # 544
          if ((int )(*(entry->arg[which] + 1)) == 0) {
            goto _L_0;
          } else {
            {
// # 544
            tmp_15 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                  1)),
                               (char **/*   */)((char **)((void *)0)),
                               0);
            }
// # 544
            if ((unsigned long )pw_0->pw_gid >= tmp_15) {
              _L_0: 
// # 544
              if ((int )(*ptr_0) == 0) {
                {
// # 548
                ptr_0 --;
// # 548
                (*ptr_0) = '-';
                }
// # 549
                return (1);
              } else {
                {
// # 544
                tmp_16 = strtoul((char/*const*/  */*   */)((char/*const*/  *)ptr_0),
                                   (char **/*   */)((char **)((void *)0)),
                                   0);
                }
// # 544
                if ((unsigned long )pw_0->pw_gid <= tmp_16) {
                  {
// # 548
                  ptr_0 --;
// # 548
                  (*ptr_0) = '-';
                  }
// # 549
                  return (1);
                }
              }
            }
          }
          {
// # 551
          ptr_0 --;
// # 551
          (*ptr_0) = '-';
          }
        } else {
          {
// # 527
          ptr_0 = strchr((char/*const*/  *)(entry->arg[which] + 1), (int )'+');
          }
// # 528
          if (ptr_0) {
            {
// # 533
            tmp_12 = ptr_0;
// # 533
            ptr_0 ++;
// # 533
            (*tmp_12) = '\0';
            }
// # 534
            if ((int )(*(entry->arg[which] + 1)) == 0) {
              {
// # 536
              ptr_0 --;
// # 536
              (*ptr_0) = '+';
              }
// # 537
              return (1);
            } else {
              {
// # 534
              tmp_13 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                    1)),
                                 (char **/*   */)((char **)((void *)0)),
                                 0);
              }
// # 534
              if ((unsigned long )pw_0->pw_gid >= tmp_13) {
                {
// # 536
                ptr_0 --;
// # 536
                (*ptr_0) = '+';
                }
// # 537
                return (1);
              }
            }
            {
// # 539
            ptr_0 --;
// # 539
            (*ptr_0) = '+';
            }
          } else {
            {
// # 529
            tmp_11 = strtoul((char/*const*/  */*   */)((char/*const*/  *)(entry->arg[which] +
                                                                                  1)),
                               (char **/*   */)((char **)((void *)0)),
                               0);
            }
// # 529
            if ((unsigned long )pw_0->pw_gid == tmp_11) {
// # 530
              return (1);
            }
          }
        }
      } else {
        {
// # 555
        grp = getgrnam((char/*const*/  *)entry->arg[which]);
        }
// # 555
        if (grp) {
// # 556
          if (grp->gr_gid == pw_0->pw_gid) {
// # 557
            return (1);
          }
          {
// # 558
          member = grp->gr_mem;
          }
// # 558
          while ((*member)) {
            {
// # 559
            tmp_17 = strcasecmp((char/*const*/  *)(*member),
                                  (char/*const*/  *)pw_0->pw_name);
            }
// # 559
            if (! tmp_17) {
// # 560
              return (1);
            }
            {
// # 558
            member ++;
            }
          }
        }
      }
      {
// # 521
      which ++;
      }
    }
  }
// # 566
  return (0);
}
}
// # 577
void acl_autogroup(struct passwd *pw_0 ) 
{ char class[1024] ;
  struct aclmember *entry ;
  struct group *grp ;
  int which ;
  int tmp ;
  struct aclmember *tmp_0 ;

  {
  {
// # 581
  entry = (struct aclmember *)((void *)0);
// # 585
  acl_getclass(class);
  }
// # 588
  while (1) {
    {
// # 588
    tmp_0 = getaclentry("autogroup", & entry);
    }
// # 588
    if (! tmp_0) {
// # 588
      break;
    }
// # 589
    if (entry->arg[0]) {
// # 589
      if (! entry->arg[1]) {
// # 590
        continue;
      }
    } else {
// # 590
      continue;
    }
    {
// # 591
    which = 1;
    }
// # 591
    while (1) {
// # 591
      if (which < 50) {
// # 591
        if (! entry->arg[which]) {
// # 591
          break;
        }
      } else {
// # 591
        break;
      }
      {
// # 592
      tmp = strcasecmp((char/*const*/  *)entry->arg[which],
                       (char/*const*/  *)(class));
      }
// # 592
      if (! tmp) {
// # 593
        if ((int )(*(entry->arg[0] + 0)) == 37) {
          {
// # 594
          pw_0->pw_gid = (__gid_t )atoi((char/*const*/  *)(entry->arg[0] + 1));
          }
        } else {
          {
// # 596
          grp = getgrnam((char/*const*/  *)entry->arg[0]);
          }
// # 596
          if (grp) {
            {
// # 597
            pw_0->pw_gid = grp->gr_gid;
            }
          } else {
            {
// # 599
            syslog(3, (char/*const*/  *)"autogroup: set group %s not found",
                   entry->arg[0]);
            }
          }
          {
// # 600
          endgrent();
          }
        }
// # 602
        return;
      }
      {
// # 591
      which ++;
      }
    }
  }
// # 606
  return;
}
}
// # 619
void acl_setfunctions(void) 
{ char class[1024] ;
  struct aclmember *entry ;
  int l_compress ;
  int l_tar ;
  int inbound ;
  int outbound ;
  int which ;
  int set ;
  struct aclmember *tmp ;
  struct aclmember *tmp_0 ;
  int tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;
  struct aclmember *tmp_4 ;
  int tmp_5 ;
  int tmp_6 ;
  struct aclmember *tmp_7 ;
  char *tmp_8 ;
  char *tmp_9 ;
  char *tmp_10 ;
  int tmp_11 ;
  char *tmp_12 ;
  char *tmp_13 ;
  char *tmp_14 ;
  char *tmp_15 ;
  char *tmp_16 ;
  int tmp_17 ;
  char *tmp_18 ;
  char *tmp_19 ;
  char *tmp_20 ;
  int tmp_21 ;
  int tmp_22 ;
  int tmp_23 ;
  int tmp_24 ;
  int tmp_25 ;
  struct aclmember *tmp_26 ;

  {
  {
// # 626
  entry = (struct aclmember *)((void *)0);
// # 628
  inbound = 0;
// # 628
  outbound = 0;
// # 630
  log_incoming_xfers = 0;
// # 631
  log_outbound_xfers = 0;
// # 632
  log_commands = 0;
// # 633
  log_security = 0;
// # 635
  memset((void *)(class), 0, sizeof(class));
// # 637
  acl_getclass(class);
// # 639
  entry = (struct aclmember *)((void *)0);
// # 640
  tmp = getaclentry("loginfails", & entry);
  }
// # 640
  if (tmp) {
// # 640
    if ((unsigned int )entry->arg[0] != (unsigned int )((void *)0)) {
      {
// # 641
      lgi_failure_threshold = atoi((char/*const*/  *)entry->arg[0]);
      }
    }
  }
  {
// # 644
  entry = (struct aclmember *)((void *)0);
// # 645
  tmp_0 = getaclentry("private", & entry);
  }
// # 645
  if (tmp_0) {
    {
// # 645
    tmp_1 = strcasecmp((char/*const*/  *)entry->arg[0], (char/*const*/  *)"yes");
    }
// # 645
    if (! tmp_1) {
      {
// # 646
      priv_setup(path_private);
      }
    }
  }
  {
// # 649
  entry = (struct aclmember *)((void *)0);
// # 650
  set = 0;
  }
// # 651
  while (1) {
// # 651
    if (set) {
// # 651
      break;
    } else {
      {
// # 651
      tmp_4 = getaclentry("compress", & entry);
      }
// # 651
      if (! tmp_4) {
// # 651
        break;
      }
    }
    {
// # 652
    l_compress = 0;
// # 653
    tmp_2 = strcasecmp((char/*const*/  *)entry->arg[0], (char/*const*/  *)"yes");
    }
// # 653
    if (! tmp_2) {
      {
// # 654
      l_compress = 1;
      }
    }
    {
// # 655
    which = 1;
    }
// # 655
    while (1) {
// # 655
      if (which < 50) {
// # 655
        if (! entry->arg[which]) {
// # 655
          break;
        }
      } else {
// # 655
        break;
      }
      {
// # 656
      tmp_3 = wu_fnmatch((char/*const*/  *)entry->arg[which],
                           (char/*const*/  *)(class), 16);
      }
// # 656
      if (! tmp_3) {
        {
// # 657
        mangleopts = mangleopts | l_compress * 3;
// # 658
        set = 1;
        }
      }
      {
// # 655
      which ++;
      }
    }
  }
  {
// # 663
  entry = (struct aclmember *)((void *)0);
// # 664
  set = 0;
  }
// # 665
  while (1) {
// # 665
    if (set) {
// # 665
      break;
    } else {
      {
// # 665
      tmp_7 = getaclentry("tar", & entry);
      }
// # 665
      if (! tmp_7) {
// # 665
        break;
      }
    }
    {
// # 666
    l_tar = 0;
// # 667
    tmp_5 = strcasecmp((char/*const*/  *)entry->arg[0], (char/*const*/  *)"yes");
    }
// # 667
    if (! tmp_5) {
      {
// # 668
      l_tar = 1;
      }
    }
    {
// # 669
    which = 1;
    }
// # 669
    while (1) {
// # 669
      if (which < 50) {
// # 669
        if (! entry->arg[which]) {
// # 669
          break;
        }
      } else {
// # 669
        break;
      }
      {
// # 670
      tmp_6 = wu_fnmatch((char/*const*/  *)entry->arg[which],
                           (char/*const*/  *)(class), 16);
      }
// # 670
      if (! tmp_6) {
        {
// # 671
        mangleopts = mangleopts | l_tar * 4;
// # 672
        set = 1;
        }
      }
      {
// # 669
      which ++;
      }
    }
  }
  {
// # 679
  entry = (struct aclmember *)((void *)0);
  }
// # 680
  while (1) {
    {
// # 680
    tmp_26 = getaclentry("log", & entry);
    }
// # 680
    if (! tmp_26) {
// # 680
      break;
    }
    {
// # 681
    tmp_11 = strcasecmp((char/*const*/  *)entry->arg[0],
                          (char/*const*/  *)"commands");
    }
// # 681
    if (! tmp_11) {
// # 682
      if (anonymous) {
        {
// # 682
        tmp_8 = strcasestr(entry->arg[1], "anonymous");
        }
// # 682
        if (tmp_8) {
          {
// # 683
          log_commands = 1;
          }
        }
      }
// # 684
      if (guest) {
        {
// # 684
        tmp_9 = strcasestr(entry->arg[1], "guest");
        }
// # 684
        if (tmp_9) {
          {
// # 685
          log_commands = 1;
          }
        }
      }
// # 686
      if (! guest) {
// # 686
        if (! anonymous) {
          {
// # 686
          tmp_10 = strcasestr(entry->arg[1], "real");
          }
// # 686
          if (tmp_10) {
            {
// # 687
            log_commands = 1;
            }
          }
        }
      }
    }
    {
// # 689
    tmp_17 = strcasecmp((char/*const*/  *)entry->arg[0],
                          (char/*const*/  *)"transfers");
    }
// # 689
    if (! tmp_17) {
      {
// # 690
      set = 0;
// # 691
      tmp_12 = strcasestr(entry->arg[1], "anonymous");
      }
// # 691
      if (tmp_12) {
// # 691
        if (anonymous) {
          {
// # 692
          set = 1;
          }
        }
      }
      {
// # 693
      tmp_13 = strcasestr(entry->arg[1], "guest");
      }
// # 693
      if (tmp_13) {
// # 693
        if (guest) {
          {
// # 694
          set = 1;
          }
        }
      }
      {
// # 695
      tmp_14 = strcasestr(entry->arg[1], "real");
      }
// # 695
      if (tmp_14) {
// # 695
        if (! guest) {
// # 695
          if (! anonymous) {
            {
// # 696
            set = 1;
            }
          }
        }
      }
      {
// # 697
      tmp_15 = strcasestr(entry->arg[2], "inbound");
      }
// # 697
      if (tmp_15) {
        {
// # 698
        inbound = 1;
        }
      }
      {
// # 699
      tmp_16 = strcasestr(entry->arg[2], "outbound");
      }
// # 699
      if (tmp_16) {
        {
// # 700
        outbound = 1;
        }
      }
// # 701
      if (set) {
        {
// # 702
        log_incoming_xfers = inbound;
        }
      }
// # 703
      if (set) {
        {
// # 704
        log_outbound_xfers = outbound;
        }
      }
    }
    {
// # 706
    tmp_21 = strcasecmp((char/*const*/  *)entry->arg[0],
                          (char/*const*/  *)"security");
    }
// # 706
    if (! tmp_21) {
      {
// # 707
      tmp_18 = strcasestr(entry->arg[1], "anonymous");
      }
// # 707
      if (tmp_18) {
// # 707
        if (anonymous) {
          {
// # 708
          log_security = 1;
          }
        }
      }
      {
// # 709
      tmp_19 = strcasestr(entry->arg[1], "guest");
      }
// # 709
      if (tmp_19) {
// # 709
        if (guest) {
          {
// # 710
          log_security = 1;
          }
        }
      }
      {
// # 711
      tmp_20 = strcasestr(entry->arg[1], "real");
      }
// # 711
      if (tmp_20) {
// # 711
        if (! guest) {
// # 711
          if (! anonymous) {
            {
// # 712
            log_security = 1;
            }
          }
        }
      }
    }
    {
// # 714
    tmp_22 = strcasecmp((char/*const*/  *)entry->arg[0],
                          (char/*const*/  *)"syslog");
    }
// # 714
    if (! tmp_22) {
      {
// # 715
      syslogmsg = 1;
      }
    }
    {
// # 716
    tmp_23 = strcasecmp((char/*const*/  *)entry->arg[0],
                          (char/*const*/  *)"xferlog");
    }
// # 716
    if (! tmp_23) {
      {
// # 717
      syslogmsg = 0;
      }
    }
    {
// # 718
    tmp_24 = strcasecmp((char/*const*/  *)entry->arg[0],
                          (char/*const*/  *)"syslog+xferlog");
    }
// # 718
    if (tmp_24) {
      {
// # 718
      tmp_25 = strcasecmp((char/*const*/  *)entry->arg[0],
                            (char/*const*/  *)"xferlog+syslog");
      }
// # 718
      if (! tmp_25) {
        {
// # 720
        syslogmsg = 2;
        }
      }
    } else {
      {
// # 720
      syslogmsg = 2;
      }
    }
  }
// # 722
  return;
}
}
// # 730
int acl_getclass(char *classbuf ) 
{ int which ;
  struct aclmember *entry ;
  char *tmp ;
  int tmp_0 ;
  char *tmp_1 ;
  int tmp_2 ;
  char *tmp_3 ;
  int tmp_4 ;
  struct aclmember *tmp_5 ;

  {
  {
// # 733
  entry = (struct aclmember *)((void *)0);
  }
// # 735
  while (1) {
    {
// # 735
    tmp_5 = getaclentry("class", & entry);
    }
// # 735
    if (! tmp_5) {
// # 735
      break;
    }
// # 736
    if (entry->arg[0]) {
      {
// # 737
      strcpy((char */*   */)classbuf,
             (char/*const*/  */*   */)((char/*const*/  *)entry->arg[0]));
      }
    }
    {
// # 739
    which = 2;
    }
// # 739
    while (1) {
// # 739
      if (which < 50) {
// # 739
        if (! entry->arg[which]) {
// # 739
          break;
        }
      } else {
// # 739
        break;
      }
// # 740
      if (anonymous) {
        {
// # 740
        tmp = strcasestr(entry->arg[1], "anonymous");
        }
// # 740
        if (tmp) {
          {
// # 740
          tmp_0 = hostmatch(entry->arg[which], remoteaddr, remotehost);
          }
// # 740
          if (tmp_0) {
// # 742
            return (1);
          }
        }
      }
// # 744
      if (guest) {
        {
// # 744
        tmp_1 = strcasestr(entry->arg[1], "guest");
        }
// # 744
        if (tmp_1) {
          {
// # 744
          tmp_2 = hostmatch(entry->arg[which], remoteaddr, remotehost);
          }
// # 744
          if (tmp_2) {
// # 745
            return (1);
          }
        }
      }
// # 747
      if (! guest) {
// # 747
        if (! anonymous) {
          {
// # 747
          tmp_3 = strcasestr(entry->arg[1], "real");
          }
// # 747
          if (tmp_3) {
            {
// # 747
            tmp_4 = hostmatch(entry->arg[which], remoteaddr, remotehost);
            }
// # 747
            if (tmp_4) {
// # 749
              return (1);
            }
          }
        }
      }
      {
// # 739
      which ++;
      }
    }
  }
  {
// # 753
  (*classbuf) = (char )((void *)0);
  }
// # 754
  return (0);
}
}
// # 765
int acl_getlimit(char *class , char *msgpathbuf ) 
{ int limit ;
  struct aclmember *entry ;
  int tmp ;
  int tmp_0 ;
  struct aclmember *tmp_1 ;

  {
  {
// # 768
  entry = (struct aclmember *)((void *)0);
  }
// # 770
  if (msgpathbuf) {
    {
// # 771
    (*msgpathbuf) = '\0';
    }
  }
// # 774
  while (1) {
    {
// # 774
    tmp_1 = getaclentry("limit", & entry);
    }
// # 774
    if (! tmp_1) {
// # 774
      break;
    }
// # 775
    if (entry->arg[0]) {
// # 775
      if (entry->arg[1]) {
// # 775
        if (! entry->arg[2]) {
// # 776
          continue;
        }
      } else {
// # 776
        continue;
      }
    } else {
// # 776
      continue;
    }
    {
// # 777
    tmp_0 = strcasecmp((char/*const*/  *)class, (char/*const*/  *)entry->arg[0]);
    }
// # 777
    if (! tmp_0) {
      {
// # 778
      limit = atoi((char/*const*/  *)entry->arg[1]);
// # 779
      tmp = validtime(entry->arg[2]);
      }
// # 779
      if (tmp) {
// # 780
        if (entry->arg[3]) {
// # 780
          if (msgpathbuf) {
            {
// # 781
            strcpy((char */*   */)msgpathbuf,
                   (char/*const*/  */*   */)((char/*const*/  *)entry->arg[3]));
            }
          }
        }
// # 782
        return (limit);
      }
    }
  }
// # 786
  return (-1);
}
}
// # 796
int acl_getnice(char *class ) 
{ int nice_delta_for_class_found ;
  int nice_delta ;
  int default_nice_delta ;
  struct aclmember *entry ;
  int tmp ;
  struct aclmember *tmp_0 ;

  {
  {
// # 798
  nice_delta_for_class_found = 0;
// # 799
  nice_delta = 0;
// # 800
  default_nice_delta = 0;
// # 802
  entry = (struct aclmember *)((void *)0);
  }
// # 805
  while (1) {
    {
// # 805
    tmp_0 = getaclentry("nice", & entry);
    }
// # 805
    if (! tmp_0) {
// # 805
      break;
    }
// # 806
    if (! entry->arg[0]) {
// # 807
      continue;
    }
// # 808
    if (entry->arg[1]) {
      {
// # 810
      tmp = strcasecmp((char/*const*/  *)class, (char/*const*/  *)entry->arg[1]);
      }
// # 810
      if (! tmp) {
        {
// # 811
        nice_delta_for_class_found = 1;
// # 812
        nice_delta = atoi((char/*const*/  *)entry->arg[0]);
        }
      }
    } else {
      {
// # 809
      default_nice_delta = atoi((char/*const*/  *)entry->arg[0]);
      }
    }
  }
// # 815
  if (! nice_delta_for_class_found) {
    {
// # 816
    nice_delta = default_nice_delta;
    }
  }
// # 817
  return (nice_delta);
}
}
// # 828
void acl_getdefumask(char *class ) 
{ struct aclmember *entry ;
  int tmp ;
  struct aclmember *tmp_0 ;

  {
  {
// # 830
  entry = (struct aclmember *)((void *)0);
  }
// # 833
  while (1) {
    {
// # 833
    tmp_0 = getaclentry("defumask", & entry);
    }
// # 833
    if (! tmp_0) {
// # 833
      break;
    }
// # 834
    if (! entry->arg[0]) {
// # 835
      continue;
    }
// # 836
    if (entry->arg[1]) {
      {
// # 838
      tmp = strcasecmp((char/*const*/  *)class, (char/*const*/  *)entry->arg[1]);
      }
// # 838
      if (! tmp) {
        {
// # 839
        defumask = (unsigned int )strtoul((char/*const*/  */*   */)((char/*const*/  *)entry->arg[0]),
                                          (char **/*   */)((char **)((void *)0)),
                                          0);
        }
// # 840
        break;
      }
    } else {
      {
// # 837
      defumask = (unsigned int )strtoul((char/*const*/  */*   */)((char/*const*/  *)entry->arg[0]),
                                        (char **/*   */)((char **)((void *)0)),
                                        0);
      }
    }
  }
  {
// # 843
  umask(defumask);
  }
// # 844
  return;
}
}
// # 853
void acl_tcpwindow(char *class ) 
{ struct aclmember *entry ;
  int tmp ;
  struct aclmember *tmp_0 ;

  {
  {
// # 855
  entry = (struct aclmember *)((void *)0);
  }
// # 858
  while (1) {
    {
// # 858
    tmp_0 = getaclentry("tcpwindow", & entry);
    }
// # 858
    if (! tmp_0) {
// # 858
      break;
    }
// # 859
    if (! entry->arg[0]) {
// # 860
      continue;
    }
// # 861
    if (entry->arg[1]) {
      {
// # 863
      tmp = strcasecmp((char/*const*/  *)class, (char/*const*/  *)entry->arg[1]);
      }
// # 863
      if (! tmp) {
        {
// # 864
        TCPwindowsize = (int )strtoul((char/*const*/  */*   */)((char/*const*/  *)entry->arg[0]),
                                      (char **/*   */)((char **)((void *)0)),
                                      0);
        }
// # 865
        break;
      }
    } else {
      {
// # 862
      TCPwindowsize = (int )strtoul((char/*const*/  */*   */)((char/*const*/  *)entry->arg[0]),
                                    (char **/*   */)((char **)((void *)0)),
                                    0);
      }
    }
  }
// # 868
  return;
}
}
// # 1105
int acl_deny(char *msgpathbuf ) 
{ struct aclmember *entry ;
  int tmp ;
  int tmp_0 ;
  struct aclmember *tmp_1 ;

  {
  {
// # 1107
  entry = (struct aclmember *)((void *)0);
  }
// # 1109
  if (msgpathbuf) {
    {
// # 1110
    (*msgpathbuf) = (char )((void *)0);
    }
  }
// # 1113
  while (1) {
    {
// # 1113
    tmp_1 = getaclentry("deny", & entry);
    }
// # 1113
    if (! tmp_1) {
// # 1113
      break;
    }
// # 1114
    if (! entry->arg[0]) {
// # 1115
      continue;
    }
    {
// # 1116
    tmp_0 = strcasecmp((char/*const*/  *)entry->arg[0],
                         (char/*const*/  *)"!nameserved");
    }
// # 1116
    if (tmp_0 == 0) {
// # 1117
      if (! nameserved) {
// # 1118
        if (entry->arg[1]) {
          {
// # 1119
          strcpy((char */*   */)msgpathbuf,
                 (char/*const*/  */*   */)((char/*const*/  *)entry->arg[1]));
          }
        }
// # 1120
        return (1);
      }
    } else {
      {
// # 1123
      tmp = hostmatch(entry->arg[0], remoteaddr, remotehost);
      }
// # 1123
      if (tmp) {
// # 1124
        if (entry->arg[1]) {
          {
// # 1125
          strcpy((char */*   */)msgpathbuf,
                 (char/*const*/  */*   */)((char/*const*/  *)entry->arg[1]));
          }
        }
// # 1126
        return (1);
      }
    }
  }
// # 1129
  return (0);
}
}
// # 1139
int acl_countusers(char *class ) 
{ int count ;
  int which ;
  char pidfile[4096] ;
  pid_t buf_2[1024] ;
  mode_t oldmask ;
  int tmp ;
  int tmp_0 ;
  ssize_t tmp_1 ;

  {
// # 1148
  if (Bypass_PID_Files) {
// # 1149
    return (0);
  }
  {
// # 1155
  sprintf((char */*   */)(pidfile),
          (char/*const*/  */*   */)((char/*const*/  *)"/var/run/ftp.pids-%s"),
          class);
  }
// # 1157
  if (pidfd < 0) {
    {
// # 1159
    oldmask = umask(0U);
// # 1160
    pidfd = open((char/*const*/  *)(pidfile), 66, 420);
// # 1161
    umask(oldmask);
    }
  }
// # 1164
  if (pidfd < 0) {
    {
// # 1165
    syslog(3, (char/*const*/  *)"cannot open pid file %s: %m", pidfile);
    }
// # 1166
    return (-1);
  }
// # 1170
  while (1) {
    {
// # 1170
    tmp = flock(pidfd, 2);
    }
// # 1170
    if (! tmp) {
// # 1170
      break;
    }
    {
// # 1172
    syslog(3, (char/*const*/  *)"sleeping: flock of pid file failed: %m");
// # 1182
    sleep(1U);
    }
  }
  {
// # 1184
  lseek(pidfd, 0L, 0);
// # 1186
  count = 0;
// # 1188
  tmp_1 = read(pidfd, (void *)(buf_2), sizeof(buf_2));
  }
// # 1188
  if ((unsigned int )tmp_1 == sizeof(buf_2)) {
    {
// # 1189
    which = 0;
    }
// # 1189
    while (which < 1024) {
// # 1190
      if (buf_2[which]) {
        {
// # 1190
        tmp_0 = kill(buf_2[which], 0);
        }
// # 1190
        if (! tmp_0) {
          {
// # 1191
          count ++;
          }
        }
      }
      {
// # 1189
      which ++;
      }
    }
  }
  {
// # 1194
  flock(pidfd, 8);
  }
// # 1200
  return (count);
}
}
// # 1210
void acl_join(char *class ) 
{ int which ;
  int avail ;
  pid_t buf_2[1024] ;
  char pidfile[4096] ;
  pid_t procid ;
  mode_t oldmask ;
  int tmp ;
  int tmp_0 ;
  ssize_t tmp_1 ;
  int tmp_2 ;

  {
// # 1220
  if (Bypass_PID_Files) {
// # 1221
    return;
  }
  {
// # 1228
  sprintf((char */*   */)(pidfile),
          (char/*const*/  */*   */)((char/*const*/  *)"/var/run/ftp.pids-%s"),
          class);
  }
// # 1230
  if (pidfd < 0) {
    {
// # 1232
    oldmask = umask(0U);
// # 1233
    pidfd = open((char/*const*/  *)(pidfile), 66, 420);
// # 1234
    umask(oldmask);
    }
  }
// # 1237
  if (pidfd < 0) {
    {
// # 1238
    syslog(3, (char/*const*/  *)"cannot open pid file %s: %m", pidfile);
    }
// # 1239
    return;
  }
// # 1243
  while (1) {
    {
// # 1243
    tmp = flock(pidfd, 2);
    }
// # 1243
    if (! tmp) {
// # 1243
      break;
    }
    {
// # 1245
    syslog(3, (char/*const*/  *)"sleeping: flock of pid file failed: %m");
// # 1255
    sleep(1U);
    }
  }
  {
// # 1258
  procid = getpid();
// # 1260
  lseek(pidfd, 0L, 0);
// # 1261
  tmp_1 = read(pidfd, (void *)(buf_2), sizeof(buf_2));
  }
// # 1261
  if ((unsigned int )tmp_1 < sizeof(buf_2)) {
    {
// # 1262
    which = 0;
    }
// # 1262
    while (which < 1024) {
      goto Cont;
      Cont: 
      {
// # 1262
      tmp_0 = which;
// # 1262
      which ++;
// # 1262
      buf_2[tmp_0] = 0;
      }
    }
  }
  {
// # 1265
  avail = 0;
// # 1266
  which = 0;
  }
// # 1266
  while (which < 1024) {
// # 1267
    if (buf_2[which] == 0) {
      {
// # 1268
      avail = which;
// # 1269
      buf_2[which] = 0;
      }
    } else {
      {
// # 1267
      tmp_2 = kill(buf_2[which], 0);
      }
// # 1267
      if (tmp_2 == -1) {
        {
// # 1268
        avail = which;
// # 1269
        buf_2[which] = 0;
        }
      } else {
// # 1271
        if (buf_2[which] == procid) {
          {
// # 1274
          flock(pidfd, 8);
          }
// # 1280
          return;
        }
      }
    }
    {
// # 1266
    which ++;
    }
  }
  {
// # 1284
  buf_2[avail] = procid;
// # 1286
  lseek(pidfd, 0L, 0);
// # 1287
  write(pidfd, (void/*const*/  *)((void *)(buf_2)), sizeof(buf_2));
// # 1289
  flock(pidfd, 8);
  }
// # 1296
  return;
}
}
// # 1305
void acl_remove(void) 
{ char class[1024] ;
  int which ;
  int avail ;
  pid_t buf_2[1024] ;
  char pidfile[4096] ;
  pid_t procid ;
  int tmp ;
  mode_t oldmask ;
  int tmp_0 ;
  int tmp_1 ;
  ssize_t tmp_2 ;
  int tmp_3 ;

  {
// # 1316
  if (Bypass_PID_Files) {
// # 1317
    return;
  }
  {
// # 1319
  tmp = acl_getclass(class);
  }
// # 1319
  if (! tmp) {
// # 1320
    return;
  }
  {
// # 1328
  sprintf((char */*   */)(pidfile),
          (char/*const*/  */*   */)((char/*const*/  *)"/var/run/ftp.pids-%s"),
          class);
  }
// # 1330
  if (pidfd < 0) {
    {
// # 1332
    oldmask = umask(0U);
// # 1333
    pidfd = open((char/*const*/  *)(pidfile), 66, 420);
// # 1334
    umask(oldmask);
    }
  }
// # 1337
  if (pidfd < 0) {
    {
// # 1338
    syslog(3, (char/*const*/  *)"cannot open pid file %s: %m", pidfile);
    }
// # 1339
    return;
  }
// # 1343
  while (1) {
    {
// # 1343
    tmp_0 = flock(pidfd, 2);
    }
// # 1343
    if (! tmp_0) {
// # 1343
      break;
    }
    {
// # 1345
    syslog(3, (char/*const*/  *)"sleeping: flock of pid file failed: %m");
// # 1355
    sleep(1U);
    }
  }
  {
// # 1358
  procid = getpid();
// # 1360
  lseek(pidfd, 0L, 0);
// # 1361
  tmp_2 = read(pidfd, (void *)(buf_2), sizeof(buf_2));
  }
// # 1361
  if ((unsigned int )tmp_2 < sizeof(buf_2)) {
    {
// # 1362
    which = 0;
    }
// # 1362
    while (which < 1024) {
      //      goto Cont;
      //      Cont: 
      // # 1362
      tmp_1 = which;
      // # 1362
      which ++;
      // # 1362
      buf_2[tmp_1] = 0;
    }
  }
  {
// # 1365
  avail = 0;
// # 1366
  which = 0;
  }
// # 1366
  while (which < 1024) {
// # 1367
    if (buf_2[which] == 0) {
      {
// # 1368
      avail = which;
// # 1369
      buf_2[which] = 0;
      }
    } else {
      {
// # 1367
      tmp_3 = kill(buf_2[which], 0);
      }
// # 1367
      if (tmp_3 == -1) {
        {
// # 1368
        avail = which;
// # 1369
        buf_2[which] = 0;
        }
      } else {
// # 1371
        if (buf_2[which] == procid) {
          {
// # 1372
          buf_2[which] = 0;
          }
        }
      }
    }
    {
// # 1366
    which ++;
    }
  }
  {
// # 1376
  lseek(pidfd, 0L, 0);
// # 1377
  write(pidfd, (void/*const*/  *)((void *)(buf_2)), sizeof(buf_2));
// # 1379
  flock(pidfd, 8);
// # 1386
  close(pidfd);
// # 1387
  pidfd = -1;
  }
// # 1388
  return;
}
}
// # 1396
void pr_mesg(int msgcode , char *msgfile ) 
{ FILE *infile ;
  char inbuf[1024] ;
  char outbuf[1024] ;
  char *cr ;
  char *tmp ;
  size_t tmp_0 ;

  {
// # 1401
  if (msgfile) {
    {
// # 1401
    tmp_0 = strlen((char/*const*/  *)msgfile);
    }
// # 1401
    if ((int )tmp_0 > 0) {
      {
// # 1402
      infile = fopen((char/*const*/  */*   */)((char/*const*/  *)msgfile),
                     (char/*const*/  */*   */)((char/*const*/  *)"r"));
      {
// # 17 "spec.work"
      if (infile != (FILE *)0) {
// # 17
        infile->BLAST_FLAG = 1;
      }
      {

      }
      }

      }
// # 1403 "access.c"
      if (infile) {
// # 1404
        while (1) {
          {

          {
// # 32 "spec.work"
          if (! (infile->BLAST_FLAG == 1)) {
// # 34
            error__();
          }
          {

          }
          }
// # 1404 "access.c"
          tmp = fgets((char */*   */)(inbuf), (int )sizeof(inbuf),
                      (FILE */*   */)infile);
          }
// # 1404
          if (! ((unsigned int )tmp != (unsigned int )((void *)0))) {
// # 1404
            break;
          }
          {
// # 1405
          cr = strchr((char/*const*/  *)(inbuf), (int )'\n');
          }
// # 1405
          if ((unsigned int )cr != (unsigned int )((void *)0)) {
            {
// # 1406
            (*cr) = '\0';
            }
          }
          {
// # 1407
          msg_massage((char/*const*/  *)(inbuf), outbuf, sizeof(outbuf));
// # 1408
          lreply(msgcode, "%s", outbuf);
          }
        }
        {

        {
// # 96 "spec.work"
        if (infile->BLAST_FLAG == 1) {
// # 97
          infile->BLAST_FLAG = 0;
        } else {
// # 98
          error__();
        }
        {

        }
        }
// # 1410 "access.c"
        fclose(infile);
        }
      }
    }
  }
// # 1413
  return;
}
}
// # 1421
void access_init(void) 
{ struct aclmember *entry ;
  int tmp ;
  struct aclmember *tmp_0 ;
  int tmp_1 ;
  struct aclmember *tmp_2 ;

  {
  {
// # 1425
  tmp = readacl(path_ftpaccess);
  }
// # 1425
  if (! tmp) {
// # 1426
    return;
  }
  {
// # 1427
  parseacl();
// # 1429
  Shutdown[0] = '\0';
// # 1430
  entry = (struct aclmember *)((void *)0);
// # 1431
  tmp_0 = getaclentry("shutdown", & entry);
  }
// # 1431
  if (tmp_0) {
// # 1431
    if ((unsigned int )entry->arg[0] != (unsigned int )((void *)0)) {
      {
// # 1432
      strncpy((char */*   */)(Shutdown),
              (char/*const*/  */*   */)((char/*const*/  *)entry->arg[0]),
              sizeof(Shutdown));
      }
    }
  }
  {
// # 1451
  entry = (struct aclmember *)((void *)0);
// # 1452
  tmp_2 = getaclentry("keepalive", & entry);
  }
// # 1452
  if (tmp_2) {
// # 1452
    if ((unsigned int )entry->arg[0] != (unsigned int )((void *)0)) {
      {
// # 1453
      tmp_1 = strcasecmp((char/*const*/  *)entry->arg[0], (char/*const*/  *)"yes");
      }
// # 1453
      if (! tmp_1) {
        {
// # 1454
        keepalive = 1;
        }
      }
    }
  }
  {
// # 1455
  load_timeouts();
  }
// # 1456
  return;
}
}
// # 1465
int access_ok(int msgcode ) 
{ char class[1024] ;
  char msgfile[4096] ;
  int limit ;
  int nice_delta ;
  int tmp ;
  int tmp_0 ;
  int tmp_1 ;

  {
// # 1471
  if (! use_accessfile) {
// # 1472
    return (1);
  }
// # 1474
  if ((unsigned int )aclbuf == (unsigned int )((void *)0)) {
    {
// # 1475
    syslog(5, (char/*const*/  *)"ACCESS DENIED (error reading access file) TO %s",
           remoteident);
    }
// # 1478
    return (0);
  }
  {
// # 1480
  tmp = acl_deny(msgfile);
  }
// # 1480
  if (tmp) {
    {
// # 1482
    memcpy((void */*   */)((void *)(DelayedMessageFile)),
           (void/*const*/  */*   */)((void/*const*/  *)(msgfile)),
           sizeof(msgfile));
// # 1486
    syslog(5, (char/*const*/  *)"ACCESS DENIED (deny command) TO %s", remoteident);
    }
// # 1488
    return (0);
  }
  {
// # 1491
  tmp_0 = acl_getclass(class);
  }
// # 1491
  if (! tmp_0) {
    {
// # 1492
    syslog(5, (char/*const*/  *)"ACCESS DENIED (not in any class) TO %s",
           remoteident);
    }
// # 1494
    return (0);
  }
  {
// # 1496
  nice_delta = acl_getnice(class);
  }
// # 1496
  if (nice_delta) {
// # 1497
    if (nice_delta < 0) {
      {
// # 1498
      syslog(5, (char/*const*/  *)"Process nice value adjusted by %d", nice_delta);
      }
    }
    {
// # 1499
    nice(nice_delta);
    }
  }
  {
// # 1501
  acl_getdefumask(class);
// # 1502
  acl_tcpwindow(class);
// # 1513
  limit = acl_getlimit(class, msgfile);
  }
// # 1515
  if (limit == -1) {
    {
// # 1516
    acl_join(class);
    }
// # 1517
    return (1);
  } else {
    {
// # 1515
    tmp_1 = acl_countusers(class);
    }
// # 1515
    if (tmp_1 < limit) {
      {
// # 1516
      acl_join(class);
      }
// # 1517
      return (1);
    } else {
      {
// # 1525
      memcpy((void */*   */)((void *)(DelayedMessageFile)),
             (void/*const*/  */*   */)((void/*const*/  *)(msgfile)),
             sizeof(msgfile));
      }
// # 1529
      return (-1);
    }
  }
}
}
// # 547 "/usr/include/regex.h"
/* extern */ int regcomp(regex_t *   preg ,
                   char/*const*/  *   pattern , int cflags ) ;
// # 551
/* extern */ int regexec(regex_t/*const*/  *   preg ,
                   char/*const*/  *   string , size_t nmatch ,
                   regmatch_t *   pmatch , int eflags ) ;
// # 165 "extensions.c"
char shuttime[30]  ;
// # 165
char denytime[30]  ;
// # 165
char disctime[30]  ;
// # 167
FILE *dout  ;
// # 169
time_t newer_time  ;
// # 171
int show_fullinfo  ;
// # 197
int check_newer(char *path , struct stat *st , int flag ) 
{ char/*const*/  *tmp ;
  int tmp_0 ;

  {
// # 199
  if (st->st_mtim.tv_sec > newer_time) {
// # 200
    if (show_fullinfo != 0) {
// # 201
      if (flag == 1) {
        goto _L;
      } else {
// # 201
        if (flag == 2) {
          _L: 
// # 202
          if (flag == 1) {
            {
// # 202
            tmp = (char/*const*/  *)"F";
            }
          } else {
            {
// # 202
            tmp = (char/*const*/  *)"D";
            }
          }
          {

          {
// # 88 "spec.work"
          if (! (dout->BLAST_FLAG == 1)) {
// # 90
            error__();
          }
          {

          }
          }
// # 202 "extensions.c"
          fprintf((FILE */*   */)dout,
                  (char/*const*/  */*   */)((char/*const*/  *)"%s %u %u %s\n"),
                  tmp, st->st_size, st->st_mtim.tv_sec, path);
          }
        }
      }
    } else {
// # 207
      if (flag == 1) {
        {

        {
// # 64 "spec.work"
        if (! (dout->BLAST_FLAG == 1)) {
// # 66
          error__();
        }
        {

        }
        }
// # 208 "extensions.c"
        fprintf((FILE */*   */)dout,
                (char/*const*/  */*   */)((char/*const*/  *)"%s\n"), path);
        }
      }
    }
  }
// # 215
  if (ftwflag > 1) {
    {
// # 215
    tmp_0 = 1;
    }
  } else {
    {
// # 215
    tmp_0 = 0;
    }
  }
// # 215
  return (tmp_0);
}
}
// # 249
void msg_massage(char/*const*/  *inbuf , char *outbuf , size_t outlen ) 
{ char/*const*/  *inptr ;
  char *outptr ;
  char buffer[4096] ;
  time_t curtime ;
  int limit ;
  struct aclmember *entry ;
  char *tmp ;
  struct aclmember *tmp_0 ;
  int tmp_1 ;
  char/*const*/  *   tmp_2 ;
  char/*const*/  *tmp_3 ;
  char *tmp_4 ;
  char *tmp_5 ;
  char *tmp_6 ;

  {
  {
// # 251
  inptr = inbuf;
// # 252
  outptr = outbuf;
// # 272
  acl_getclass(buffer);
// # 273
  limit = acl_getlimit(buffer, (char *)((void *)0));
  }
// # 275
  while (1) {
// # 275
    if (outlen > 1U) {
// # 275
      if (! ((int/*const*/  )(*inptr) != 0)) {
// # 275
        break;
      }
    } else {
// # 275
      break;
    }
// # 276
    if ((int/*const*/  )(*inptr) != 37) {
      {
// # 277
      tmp = outptr;
// # 277
      outptr ++;
// # 277
      (*tmp) = (*inptr);
// # 278
      outlen --;
      }
    } else {
      {
// # 281
      entry = (struct aclmember *)((void *)0);
// # 282
      inptr ++;
      }
// # 282
      switch ((int )(*inptr)) {
      case 69: 
      {
// # 289
      tmp_0 = getaclentry("email", & entry);
      }
// # 289
      if (tmp_0) {
// # 289
        if (entry->arg[0]) {
          {
// # 290
          snprintf((char */*   */)outptr, outlen,
                   (char/*const*/  */*   */)((char/*const*/  *)"%s"),
                   entry->arg[0]);
          }
        } else {
          {
// # 292
          (*outptr) = '\0';
          }
        }
      } else {
        {
// # 292
        (*outptr) = '\0';
        }
      }
// # 293
      break;
      case 78: 
      {
// # 296
      tmp_1 = acl_countusers(buffer);
// # 296
      snprintf((char */*   */)outptr, outlen,
               (char/*const*/  */*   */)((char/*const*/  *)"%d"), tmp_1);
      }
// # 297
      break;
      case 77: 
      {

      }
// # 300
      if (limit == -1) {
        {
// # 301
        strncpy((char */*   */)outptr,
                (char/*const*/  */*   */)((char/*const*/  *)"unlimited"),
                outlen);
        }
      } else {
        {
// # 303
        snprintf((char */*   */)outptr, outlen,
                 (char/*const*/  */*   */)((char/*const*/  *)"%d"), limit);
        }
      }
// # 304
      break;
      case 84: 
      {
// # 307
      time(& curtime);
// # 308
      tmp_2 = (char/*const*/  */*   */)ctime((time_t/*const*/  *)(& curtime));
// # 308
      strncpy((char */*   */)outptr, tmp_2, outlen);
      }
// # 309
      if (outlen > 24U) {
        {
// # 310
        (*(outptr + 24)) = '\0';
        }
      }
// # 311
      break;
      case 70: 
      {
// # 317
      (*outptr) = '\0';
      }
// # 319
      break;
      case 67: 
      {
// # 323
      getcwd(outptr, outlen);
      }
// # 328
      break;
      case 82: 
      {
// # 331
      strncpy((char */*   */)outptr,
              (char/*const*/  */*   */)((char/*const*/  *)(remotehost)),
              outlen);
      }
// # 332
      break;
      case 76: 
      {
// # 335
      strncpy((char */*   */)outptr,
              (char/*const*/  */*   */)((char/*const*/  *)(hostname)),
              outlen);
      }
// # 336
      break;
      case 85: 
      {

      }
// # 342
      if ((unsigned int )pw == (unsigned int )((void *)0)) {
        {
// # 342
        tmp_3 = (char/*const*/  *)"[unknown]";
        }
      } else {
        {
// # 342
        tmp_3 = (char/*const*/  *)pw->pw_name;
        }
      }
      {
// # 342
      strncpy((char */*   */)outptr,
              (char/*const*/  */*   */)tmp_3, outlen);
      }
// # 345
      break;
      case 115: 
      {
// # 348
      strncpy((char */*   */)outptr,
              (char/*const*/  */*   */)((char/*const*/  *)(shuttime)),
              outlen);
      }
// # 349
      if (outlen > 24U) {
        {
// # 350
        (*(outptr + 24)) = '\0';
        }
      }
// # 351
      break;
      case 100: 
      {
// # 354
      strncpy((char */*   */)outptr,
              (char/*const*/  */*   */)((char/*const*/  *)(disctime)),
              outlen);
      }
// # 355
      if (outlen > 24U) {
        {
// # 356
        (*(outptr + 24)) = '\0';
        }
      }
// # 357
      break;
      case 114: 
      {
// # 360
      strncpy((char */*   */)outptr,
              (char/*const*/  */*   */)((char/*const*/  *)(denytime)),
              outlen);
      }
// # 361
      if (outlen > 24U) {
        {
// # 362
        (*(outptr + 24)) = '\0';
        }
      }
// # 363
      break;
      case 117: 
      {

      }
// # 367
      if (authenticated) {
        {
// # 368
        strncpy((char */*   */)outptr,
                (char/*const*/  */*   */)((char/*const*/  *)(authuser)),
                outlen);
        }
      } else {
        {
// # 370
        strncpy((char */*   */)outptr,
                (char/*const*/  */*   */)((char/*const*/  *)"[unknown]"),
                outlen);
        }
      }
// # 371
      break;
      case 37: 
      {
// # 448
      tmp_4 = outptr;
// # 448
      outptr ++;
// # 448
      (*tmp_4) = '%';
// # 449
      outlen --;
// # 450
      (*outptr) = '\0';
      }
// # 451
      break;
      default: 
      {
// # 544
      tmp_5 = outptr;
// # 544
      outptr ++;
// # 544
      (*tmp_5) = '%';
// # 545
      outlen --;
      }
// # 546
      if (outlen > 1U) {
        {
// # 547
        tmp_6 = outptr;
// # 547
        outptr ++;
// # 547
        (*tmp_6) = (*inptr);
// # 548
        outlen --;
        }
      }
      {
// # 550
      (*outptr) = '\0';
      }
// # 551
      break;
      }
      {
// # 553
      (*(outptr + (outlen - 1U))) = '\0';
      }
// # 554
      while ((*outptr)) {
        {
// # 555
        outptr ++;
// # 556
        outlen --;
        }
      }
    }
    {
// # 559
    inptr ++;
    }
  }
// # 561
  if (outlen > 0U) {
    {
// # 562
    (*outptr) = '\0';
    }
  }
// # 563
  return;
}
}
// # 580
static struct dirlist *head   = (struct dirlist *)((void *)0);
// # 572
int cwd_beenhere(int dircode ) 
{ struct dirlist *curptr ;
  char cwd_0[4096] ;
  int tmp ;
  size_t tmp_0 ;

  {
  {
// # 584
  fb_realpath((char/*const*/  *)".", cwd_0);
// # 586
  curptr = head;
  }
// # 586
  while ((unsigned int )curptr != (unsigned int )((void *)0)) {
    {
// # 587
    tmp = strcmp((char/*const*/  *)(curptr->dirname), (char/*const*/  *)(cwd_0));
    }
// # 587
    if (tmp == 0) {
// # 588
      if (! (curptr->dircode & dircode)) {
        {
// # 589
        curptr->dircode |= dircode;
        }
// # 590
        return (0);
      }
// # 592
      return (1);
    }
    {
// # 586
    curptr = curptr->next;
    }
  }
  {
// # 594
  tmp_0 = strlen((char/*const*/  *)(cwd_0));
// # 594
  curptr = (struct dirlist *)malloc((tmp_0 + 1U) + sizeof(struct dirlist ));
  }
// # 596
  if ((unsigned int )curptr != (unsigned int )((void *)0)) {
    {
// # 597
    curptr->next = head;
// # 598
    head = curptr;
// # 599
    curptr->dircode = dircode;
// # 600
    strcpy((char */*   */)(curptr->dirname),
           (char/*const*/  */*   */)((char/*const*/  *)(cwd_0)));
    }
  }
// # 602
  return (0);
}
}
// # 611
void show_banner(int msgcode ) 
{ char *crptr ;
  char linebuf[1024] ;
  char outbuf[1024] ;
  struct aclmember *entry ;
  FILE *infile ;
  char *tmp ;
  struct aclmember *tmp_0 ;

  {
  {
// # 614
  entry = (struct aclmember *)((void *)0);
  }
// # 640
  while (1) {
    {
// # 640
    tmp_0 = getaclentry("banner", & entry);
    }
// # 640
    if (! tmp_0) {
// # 640
      break;
    }
    {
// # 641
    infile = fopen((char/*const*/  */*   */)((char/*const*/  *)entry->arg[0]),
                   (char/*const*/  */*   */)((char/*const*/  *)"r"));
    {
// # 17 "spec.work"
    if (infile != (FILE *)0) {
// # 17
      infile->BLAST_FLAG = 1;
    }
    {

    }
    }

    }
// # 642 "extensions.c"
    if (infile) {
// # 643
      while (1) {
        {

        {
// # 32 "spec.work"
        if (! (infile->BLAST_FLAG == 1)) {
// # 34
          error__();
        }
        {

        }
        }
// # 643 "extensions.c"
        tmp = fgets((char */*   */)(linebuf), (int )sizeof(linebuf),
                    (FILE */*   */)infile);
        }
// # 643
        if (! ((unsigned int )tmp != (unsigned int )((void *)0))) {
// # 643
          break;
        }
        {
// # 644
        crptr = strchr((char/*const*/  *)(linebuf), (int )'\n');
        }
// # 644
        if ((unsigned int )crptr != (unsigned int )((void *)0)) {
          {
// # 645
          (*crptr) = '\0';
          }
        }
        {
// # 646
        msg_massage((char/*const*/  *)(linebuf), outbuf, sizeof(outbuf));
// # 647
        lreply(msgcode, "%s", outbuf);
        }
      }
      {

      {
// # 96 "spec.work"
      if (infile->BLAST_FLAG == 1) {
// # 97
        infile->BLAST_FLAG = 0;
      } else {
// # 98
        error__();
      }
      {

      }
      }
// # 649 "extensions.c"
      fclose(infile);
// # 651
      lreply(msgcode, "");
      }
    }
  }
// # 658
  return;
}
}
// # 666
void show_message(int msgcode , int mode_0 ) 
{ char *crptr ;
  char linebuf[1024] ;
  char outbuf[1024] ;
  char class[4096] ;
  char cwd_0[4096] ;
  int show ;
  int which ;
  struct aclmember *entry ;
  FILE *infile ;
  int tmp ;
  int tmp_0 ;
  int tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;
  int tmp_4 ;
  int tmp_5 ;
  char *tmp_6 ;
  size_t tmp_7 ;
  struct aclmember *tmp_8 ;

  {
  {
// # 670
  entry = (struct aclmember *)((void *)0);
  }
// # 673
  if (mode_0 == 1) {
    {
// # 673
    tmp = cwd_beenhere(1);
    }
// # 673
    if (tmp != 0) {
// # 674
      return;
    }
  }
  {
// # 677
  getcwd(cwd_0, 4095U);
// # 681
  acl_getclass(class);
  }
// # 684
  while (1) {
    {
// # 684
    tmp_8 = getaclentry("message", & entry);
    }
// # 684
    if (! tmp_8) {
// # 684
      break;
    }
// # 685
    if (! entry->arg[0]) {
// # 686
      continue;
    }
    {
// # 687
    show = 0;
    }
// # 689
    if (mode_0 == 0) {
// # 689
      if (entry->arg[1]) {
        {
// # 689
        tmp_1 = strcasecmp((char/*const*/  *)entry->arg[1],
                             (char/*const*/  *)"login");
        }
// # 689
        if (! tmp_1) {
          _L: 
// # 690
          if (entry->arg[2]) {
            {
// # 693
            which = 2;
            }
// # 693
            while (1) {
// # 693
              if (which < 50) {
// # 693
                if (! entry->arg[which]) {
// # 693
                  break;
                }
              } else {
// # 693
                break;
              }
              {
// # 694
              tmp_0 = strcasecmp((char/*const*/  *)(class),
                                   (char/*const*/  *)entry->arg[which]);
              }
// # 694
              if (tmp_0 == 0) {
                {
// # 695
                show ++;
                }
              }
              {
// # 693
              which ++;
              }
            }
          } else {
            {
// # 691
            show ++;
            }
          }
        }
      } else {
        goto _L;
      }
    }
// # 697
    if (mode_0 == 1) {
// # 697
      if (entry->arg[1]) {
        {
// # 697
        tmp_3 = strncasecmp((char/*const*/  *)entry->arg[1],
                              (char/*const*/  *)"cwd=", 4U);
        }
// # 697
        if (! tmp_3) {
          {
// # 697
          tmp_4 = strcmp((char/*const*/  *)(entry->arg[1] + 4),
                           (char/*const*/  *)(cwd_0));
          }
// # 697
          if (tmp_4) {
// # 697
            if ((int )(*(entry->arg[1] + 4)) == 42) {
              goto _L_0;
            } else {
              {
// # 697
              tmp_5 = wu_fnmatch((char/*const*/  *)(entry->arg[1] + 4),
                                   (char/*const*/  *)(cwd_0), 1);
              }
// # 697
              if (! tmp_5) {
                _L_0: 
// # 700
                if (entry->arg[2]) {
                  {
// # 703
                  which = 2;
                  }
// # 703
                  while (1) {
// # 703
                    if (which < 50) {
// # 703
                      if (! entry->arg[which]) {
// # 703
                        break;
                      }
                    } else {
// # 703
                      break;
                    }
                    {
// # 704
                    tmp_2 = strcasecmp((char/*const*/  *)(class),
                                         (char/*const*/  *)entry->arg[which]);
                    }
// # 704
                    if (tmp_2 == 0) {
                      {
// # 705
                      show ++;
                      }
                    }
                    {
// # 703
                    which ++;
                    }
                  }
                } else {
                  {
// # 701
                  show ++;
                  }
                }
              }
            }
          } else {
            goto _L_0;
          }
        }
      }
    }
// # 707
    if (show) {
      {
// # 707
      tmp_7 = strlen((char/*const*/  *)entry->arg[0]);
      }
// # 707
      if ((int )tmp_7 > 0) {
        {
// # 708
        infile = fopen((char/*const*/  */*   */)((char/*const*/  *)entry->arg[0]),
                       (char/*const*/  */*   */)((char/*const*/  *)"r"));
        {
// # 17 "spec.work"
        if (infile != (FILE *)0) {
// # 17
          infile->BLAST_FLAG = 1;
        }
        {

        }
        }

        }
// # 709 "extensions.c"
        if (infile) {
// # 710
          while (1) {
            {

            {
// # 32 "spec.work"
            if (! (infile->BLAST_FLAG == 1)) {
// # 34
              error__();
            }
            {

            }
            }
// # 710 "extensions.c"
            tmp_6 = fgets((char */*   */)(linebuf),
                            (int )sizeof(linebuf),
                            (FILE */*   */)infile);
            }
// # 710
            if (! ((unsigned int )tmp_6 != (unsigned int )((void *)0))) {
// # 710
              break;
            }
            {
// # 711
            crptr = strchr((char/*const*/  *)(linebuf), (int )'\n');
            }
// # 711
            if ((unsigned int )crptr != (unsigned int )((void *)0)) {
              {
// # 712
              (*crptr) = '\0';
              }
            }
            {
// # 713
            msg_massage((char/*const*/  *)(linebuf), outbuf, sizeof(outbuf));
// # 714
            lreply(msgcode, "%s", outbuf);
            }
          }
          {

          {
// # 96 "spec.work"
          if (infile->BLAST_FLAG == 1) {
// # 97
            infile->BLAST_FLAG = 0;
          } else {
// # 98
            error__();
          }
          {

          }
          }
// # 716 "extensions.c"
          fclose(infile);
// # 718
          lreply(msgcode, "");
          }
        }
      }
    }
  }
// # 723
  return;
}
}
// # 732
void show_readme(int code , int mode_0 ) 
{ char **filelist ;
  char **sfilelist ;
  char class[4096] ;
  char cwd_0[4096] ;
  int show ;
  int which ;
  int days_0 ;
  time_t clock_0 ;
  struct stat buf_2 ;
  struct tm *tp ;
  struct aclmember *entry ;
  int tmp ;
  int tmp_0 ;
  int tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;
  int tmp_4 ;
  int tmp_5 ;
  int *tmp_6 ;
  char/*const*/  *tmp_7 ;
  char *tmp_8 ;
  int tmp_9 ;
  struct aclmember *tmp_10 ;

  {
  {
// # 740
  entry = (struct aclmember *)((void *)0);
// # 742
  tmp = cwd_beenhere(2);
  }
// # 742
  if (tmp != 0) {
// # 743
    return;
  }
  {
// # 746
  getcwd(cwd_0, 4095U);
// # 750
  acl_getclass(class);
  }
// # 753
  while (1) {
    {
// # 753
    tmp_10 = getaclentry("readme", & entry);
    }
// # 753
    if (! tmp_10) {
// # 753
      break;
    }
// # 754
    if (! entry->arg[0]) {
// # 755
      continue;
    }
    {
// # 756
    show = 0;
    }
// # 758
    if (mode_0 == 0) {
// # 758
      if (entry->arg[1]) {
        {
// # 758
        tmp_1 = strcasecmp((char/*const*/  *)entry->arg[1],
                             (char/*const*/  *)"login");
        }
// # 758
        if (! tmp_1) {
          _L: 
// # 759
          if (entry->arg[2]) {
            {
// # 762
            which = 2;
            }
// # 762
            while (1) {
// # 762
              if (which < 50) {
// # 762
                if (! entry->arg[which]) {
// # 762
                  break;
                }
              } else {
// # 762
                break;
              }
              {
// # 763
              tmp_0 = strcasecmp((char/*const*/  *)(class),
                                   (char/*const*/  *)entry->arg[which]);
              }
// # 763
              if (tmp_0 == 0) {
                {
// # 764
                show ++;
                }
              }
              {
// # 762
              which ++;
              }
            }
          } else {
            {
// # 760
            show ++;
            }
          }
        }
      } else {
        goto _L;
      }
    }
// # 766
    if (mode_0 == 1) {
// # 766
      if (entry->arg[1]) {
        {
// # 766
        tmp_3 = strncasecmp((char/*const*/  *)entry->arg[1],
                              (char/*const*/  *)"cwd=", 4U);
        }
// # 766
        if (! tmp_3) {
          {
// # 766
          tmp_4 = strcmp((char/*const*/  *)(entry->arg[1] + 4),
                           (char/*const*/  *)(cwd_0));
          }
// # 766
          if (tmp_4) {
// # 766
            if ((int )(*(entry->arg[1] + 4)) == 42) {
              goto _L_0;
            } else {
              {
// # 766
              tmp_5 = wu_fnmatch((char/*const*/  *)(entry->arg[1] + 4),
                                   (char/*const*/  *)(cwd_0), 1);
              }
// # 766
              if (! tmp_5) {
                _L_0: 
// # 769
                if (entry->arg[2]) {
                  {
// # 772
                  which = 2;
                  }
// # 772
                  while (1) {
// # 772
                    if (which < 50) {
// # 772
                      if (! entry->arg[which]) {
// # 772
                        break;
                      }
                    } else {
// # 772
                      break;
                    }
                    {
// # 773
                    tmp_2 = strcasecmp((char/*const*/  *)(class),
                                         (char/*const*/  *)entry->arg[which]);
                    }
// # 773
                    if (tmp_2 == 0) {
                      {
// # 774
                      show ++;
                      }
                    }
                    {
// # 772
                    which ++;
                    }
                  }
                } else {
                  {
// # 770
                  show ++;
                  }
                }
              }
            }
          } else {
            goto _L_0;
          }
        }
      }
    }
// # 776
    if (show) {
      {
// # 777
      globerr = (char *)((void *)0);
// # 778
      filelist = ftpglob(entry->arg[0]);
// # 779
      sfilelist = filelist;
      }
// # 780
      if (! globerr) {
// # 781
        while (1) {
// # 781
          if (filelist) {
// # 781
            if (! (*filelist)) {
// # 781
              break;
            }
          } else {
// # 781
            break;
          }
          {
// # 782
          tmp_6 = errno_location();
// # 782
          (*tmp_6) = 0;
// # 783
          tmp_9 = statextinline((char/*const*/  *)(*filelist), & buf_2);
          }
// # 783
          if (! tmp_9) {
// # 783
            if ((buf_2.st_mode & 61440U) == 32768U) {
              {
// # 785
              lreply(code, "Please read the file %s", (*filelist));
// # 786
              time(& clock_0);
// # 787
              tp = localtime((time_t/*const*/  *)(& clock_0));
// # 788
              days_0 = 365 * tp->tm_year + tp->tm_yday;
// # 789
              tp = localtime((time_t/*const*/  *)(& buf_2.st_mtim.tv_sec));
// # 790
              days_0 -= 365 * tp->tm_year + tp->tm_yday;
              }
// # 797
              if (days_0 == 1) {
                {
// # 797
                tmp_7 = (char/*const*/  *)"";
                }
              } else {
                {
// # 797
                tmp_7 = (char/*const*/  *)"s";
                }
              }
              {
// # 797
              tmp_8 = ctime((time_t/*const*/  *)(& buf_2.st_mtim.tv_sec));
// # 797
              lreply(code, "  it was last modified on %.24s - %d day%s ago",
                     tmp_8, days_0, tmp_7);
              }
            }
          }
          {
// # 804
          filelist ++;
          }
        }
      }
// # 807
      if (sfilelist) {
        {
// # 808
        blkfree(sfilelist);
// # 809
        free((void *)((char *)sfilelist));
        }
      }
    }
  }
// # 813
  return;
}
}
// # 823
int deny_badasciixfer(int msgcode , char *filepath ) 
{ 

  {
// # 826
  if (type == 1) {
// # 826
    if (! (*filepath)) {
      {
// # 827
      reply(msgcode,
            "This is a BINARY file, using ASCII mode to transfer will corrupt it.");
      }
// # 828
      return (1);
    }
  }
// # 832
  return (0);
}
}
// # 843
static struct tm tmbuf  ;
// # 844
static struct stat s_last  ;
// # 845
static long last   = (long )0;
// # 845
static time_t shut  ;
// # 845
static time_t deny  ;
// # 845
static time_t disc  ;
// # 846
static int valid  ;
// # 847
static char text[2048]  ;
// # 841
int is_shutdown(int quiet , int new_0 ) 
{ struct stat s_cur ;
  FILE *fp ;
  int deny_off ;
  int disc_off ;
  time_t curtime ;
  time_t tmp ;
  char buf_2[1024] ;
  char linebuf[1024] ;
  int tmp_0 ;
  int tmp_1 ;
  char/*const*/  *   tmp_2 ;
  char/*const*/  *   tmp_3 ;
  char/*const*/  *   tmp_4 ;
  size_t tmp_5 ;
  size_t tmp_6 ;
  char *tmp_7 ;

  {
  {
// # 856
  tmp = time((time_t *)((void *)0));
// # 856
  curtime = tmp;
  }
// # 860
  if ((int )Shutdown[0] == 0) {
// # 861
    return (0);
  } else {
    {
// # 860
    tmp_0 = statextinline((char/*const*/  *)(Shutdown), & s_cur);
    }
// # 860
    if (tmp_0) {
// # 861
      return (0);
    }
  }
// # 863
  if (s_last.st_mtim.tv_sec != s_cur.st_mtim.tv_sec) {
    {
// # 864
    s_last = s_cur;
// # 865
    valid = 0;
// # 867
    fp = fopen((char/*const*/  */*   */)((char/*const*/  *)(Shutdown)),
               (char/*const*/  */*   */)((char/*const*/  *)"r"));
    {
// # 17 "spec.work"
    if (fp != (FILE *)0) {
// # 17
      fp->BLAST_FLAG = 1;
    }
    {

    }
    }

    }
// # 868 "extensions.c"
    if ((unsigned int )fp == (unsigned int )((void *)0)) {
// # 869
      return (0);
    }
    {
// # 870
    fgets((char */*   */)(buf_2), (int )sizeof(buf_2),
          (FILE */*   */)fp);
// # 871
    tmp_1 = sscanf((char/*const*/  */*   */)((char/*const*/  *)(buf_2)),
                     (char/*const*/  */*   */)((char/*const*/  *)"%d %d %d %d %d %ld %ld"),
                     & tmbuf.tm_year, & tmbuf.tm_mon, & tmbuf.tm_mday,
                     & tmbuf.tm_hour, & tmbuf.tm_min, & deny, & disc);
    }
// # 871
    if (tmp_1 != 7) {
      {

      {
// # 96 "spec.work"
      if (fp->BLAST_FLAG == 1) {
// # 97
        fp->BLAST_FLAG = 0;
      } else {
// # 98
        error__();
      }
      {

      }
      }
// # 873 "extensions.c"
      fclose(fp);
      }
// # 874
      return (0);
    }
    {
// # 876
    valid = 1;
// # 877
    deny_off = (int )(3600L * (deny / 100L) + 60L * (deny % 100L));
// # 878
    disc_off = (int )(3600L * (disc / 100L) + 60L * (disc % 100L));
// # 880
    tmbuf.tm_year = tmbuf.tm_year - 1900;
// # 881
    tmbuf.tm_isdst = -1;
// # 882
    shut = mktime(& tmbuf);
// # 883
    tmp_2 = (char/*const*/  */*   */)ctime((time_t/*const*/  *)(& shut));
// # 883
    strcpy((char */*   */)(shuttime), tmp_2);
// # 885
    disc = shut - (long )disc_off;
// # 886
    tmp_3 = (char/*const*/  */*   */)ctime((time_t/*const*/  *)(& disc));
// # 886
    strcpy((char */*   */)(disctime), tmp_3);
// # 888
    deny = shut - (long )deny_off;
// # 889
    tmp_4 = (char/*const*/  */*   */)ctime((time_t/*const*/  *)(& deny));
// # 889
    strcpy((char */*   */)(denytime), tmp_4);
// # 891
    text[0] = '\0';
    }
// # 893
    while (1) {
	// # 32 "spec.work"
	if (! (fp->BLAST_FLAG == 1)) {
	  // # 34
	  error__();
	}

	// # 893 "extensions.c"
	tmp_7 = fgets((char */*   */)(buf_2), (int )sizeof(buf_2),
                      (FILE */*   */)fp);
	// # 893
	if (! ((unsigned int )tmp_7 != (unsigned int )((void *)0))) {
	  // # 893
	  break;
	}
	// # 894
	msg_massage((char/*const*/  *)(buf_2), linebuf, sizeof(linebuf));
	// # 895
	tmp_5 = strlen((char/*const*/  *)(text));
	// # 895
	tmp_6 = strlen((char/*const*/  *)(linebuf));
	// # 895
	if (tmp_5 + tmp_6 < sizeof(text)) {
	    // # 896
	    strcat((char */*   */)(text),
		   (char/*const*/  */*   */)((char/*const*/  *)(linebuf)));
	}
    } // end of while
    {

    {
// # 96 "spec.work"
    if (fp->BLAST_FLAG == 1) {
// # 97
      fp->BLAST_FLAG = 0;
    } else {
// # 98
      error__();
    }
    {

    }
    }
// # 899 "extensions.c"
    fclose(fp);
    }
  }
// # 901
  if (! valid) {
// # 902
    return (0);
  }
// # 905
  if (last == 0L) {
// # 905
    if (! quiet) {
      {
// # 906
      autospout = text;
// # 907
      autospout_free = 0;
// # 908
      last = curtime;
      }
    }
  }
// # 911
  if (new_0) {
// # 911
    if (curtime > deny) {
// # 912
      return (1);
    }
  }
// # 915
  if (curtime > disc) {
// # 916
    return (1);
  }
// # 919
  if (curtime > disc - 60L) {
// # 919
    if (! quiet) {
      {
// # 920
      autospout = text;
// # 921
      autospout_free = 0;
// # 922
      last = curtime;
      }
    }
  }
// # 925
  if (curtime > disc - 900L) {
// # 926
    if (curtime - last > 300L) {
// # 926
      if (! quiet) {
        {
// # 927
        autospout = text;
// # 928
        autospout_free = 0;
// # 929
        last = curtime;
        }
      }
    }
  }
// # 933
  if (curtime < disc - 86400L) {
// # 933
    if (! quiet) {
// # 934
      if (curtime - last > 1800L) {
        {
// # 935
        autospout = text;
// # 936
        autospout_free = 0;
// # 937
        last = curtime;
        }
      }
    }
  }
// # 941
  if (curtime > disc - 86400L) {
// # 941
    if (! quiet) {
// # 942
      if (curtime - last >= 86400L) {
        {
// # 943
        autospout = text;
// # 944
        autospout_free = 0;
// # 945
        last = curtime;
        }
      }
    }
  }
// # 948
  return (0);
}
}
// # 953
/* extern */ int ftw(char/*const*/  *path , int (*fn)(char * , struct stat * , int  ) ,
               int depth ) ;
// # 951
void newer(char *date , char *path , int showlots ) 
{ struct tm tm ;
  int tmp ;
  int tmp_0 ;

  {
  {
// # 956
  tmp_0 = sscanf((char/*const*/  */*   */)((char/*const*/  *)date),
                   (char/*const*/  */*   */)((char/*const*/  *)"%04d%02d%02d%02d%02d%02d"),
                   & tm.tm_year, & tm.tm_mon, & tm.tm_mday, & tm.tm_hour,
                   & tm.tm_min, & tm.tm_sec);
  }
// # 956
  if (tmp_0 == 6) {
    {
// # 960
    tm.tm_year = tm.tm_year - 1900;
// # 961
    tm.tm_mon = tm.tm_mon - 1;
// # 962
    tm.tm_isdst = -1;
// # 963
    newer_time = mktime(& tm);
// # 964
    dout = dataconn("file list", -1L, "w");
    }
// # 966
    if ((unsigned int )dout != (unsigned int )((void *)0)) {
      {
// # 971
      ftwflag = 1;
// # 972
      transflag = transflag + 1;
// # 973
      show_fullinfo = showlots;
// # 975
      ftw((char/*const*/  *)path, & check_newer, -1);
      }
// # 981
      if (ftwflag == 1) {
        {
// # 982
        tmp = ferror(dout);
        }
// # 982
        if (tmp != 0) {
          {
// # 983
          perror_reply(550, "Data connection");
          }
        } else {
          {
// # 985
          reply(226, "Transfer complete.");
          }
        }
      }
      {

      {
// # 96 "spec.work"
      if (dout->BLAST_FLAG == 1) {
// # 97
        dout->BLAST_FLAG = 0;
      } else {
// # 98
        error__();
      }
      {

      }
      }
// # 988 "extensions.c"
      fclose(dout);
// # 989
      data = -1;
// # 990
      pdata = -1;
// # 991
      transflag = 0;
// # 992
      ftwflag = 0;
      }
    }
  } else {
    {
// # 996
    reply(501, "Bad DATE format");
    }
  }
// # 997
  return;
}
}
// # 999
int type_match(char *typelist ) 
{ char *tmp ;
  char *tmp_0 ;
  char *tmp_1 ;
  char class[1024] ;
  int tmp_2 ;
  int tmp_3 ;

  {
// # 1001
  if (anonymous) {
    {
// # 1001
    tmp = strcasestr(typelist, "anonymous");
    }
// # 1001
    if (tmp) {
// # 1002
      return (1);
    }
  }
// # 1003
  if (guest) {
    {
// # 1003
    tmp_0 = strcasestr(typelist, "guest");
    }
// # 1003
    if (tmp_0) {
// # 1004
      return (1);
    }
  }
// # 1005
  if (! guest) {
// # 1005
    if (! anonymous) {
      {
// # 1005
      tmp_1 = strcasestr(typelist, "real");
      }
// # 1005
      if (tmp_1) {
// # 1006
        return (1);
      }
    }
  }
  {
// # 1008
  tmp_3 = strncasecmp((char/*const*/  *)typelist, (char/*const*/  *)"class=", 6U);
  }
// # 1008
  if (tmp_3 == 0) {
    {
// # 1011
    acl_getclass(class);
// # 1012
    tmp_2 = strcasecmp((char/*const*/  *)(typelist + 6), (char/*const*/  *)(class));
    }
// # 1012
    if (tmp_2 == 0) {
// # 1013
      return (1);
    }
  }
// # 1016
  return (0);
}
}
// # 1019
int path_compare(char *p1 , char *p2 ) 
{ int tmp ;
  int tmp_0 ;
  int tmp_1 ;

  {
  {
// # 1021
  tmp_0 = strcmp((char/*const*/  *)p1, (char/*const*/  *)"*");
  }
// # 1021
  if (tmp_0 == 0) {
    {
// # 1022
    tmp = (int )strlen((char/*const*/  *)p1);
    }
// # 1022
    return (tmp);
  } else {
    {
// # 1021
    tmp_1 = wu_fnmatch((char/*const*/  *)p1, (char/*const*/  *)p2, 1);
    }
// # 1021
    if (tmp_1 == 0) {
      {
// # 1022
      tmp = (int )strlen((char/*const*/  *)p1);
      }
// # 1022
      return (tmp);
    } else {
// # 1024
      return (-2);
    }
  }
}
}
// # 1027
void expand_id(void) 
{ char class[1024] ;
  struct aclmember *entry ;
  char *q ;
  int i ;
  int options ;
  int classfound ;
  int classmatched ;
  int tmp ;
  int tmp_0 ;
  int tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;
  char buf_2[8192] ;
  struct passwd *pwent ;
  struct passwd *tmp_4 ;
  size_t tmp_5 ;
  int tmp_7 ;
  struct group *grent ;
  struct group *tmp_8 ;
  size_t tmp_9 ;
  int tmp_11 ;
  struct aclmember *tmp_12 ;

  {
  {
// # 1030
  entry = (struct aclmember *)((void *)0);
// # 1031
  acl_getclass(class);
  }
// # 1032
  while (1) {
    {
// # 1032
    tmp_12 = getaclentry("upload", & entry);
    }
// # 1032
    if (! tmp_12) {
// # 1032
      break;
    }
    {
// # 1034
    i = 0;
// # 1035
    options = 1;
// # 1036
    classfound = 0;
// # 1037
    classmatched = 0;
    }
// # 1038
    while (1) {
// # 1038
      if (options) {
// # 1038
        if (i < 50) {
          {
// # 1038
          q = entry->arg[i];
          }
// # 1038
          if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1038
            if (! ((int )(*(q + 0)) != 0)) {
// # 1038
              break;
            }
          } else {
// # 1038
            break;
          }
        } else {
// # 1038
          break;
        }
      } else {
// # 1038
        break;
      }
      {
// # 1042
      tmp_3 = strcasecmp((char/*const*/  *)q, (char/*const*/  *)"absolute");
      }
// # 1042
      if (tmp_3 == 0) {
        {
// # 1043
        i ++;
        }
      } else {
        {
// # 1044
        tmp_2 = strcasecmp((char/*const*/  *)q, (char/*const*/  *)"relative");
        }
// # 1044
        if (tmp_2 == 0) {
          {
// # 1045
          i ++;
          }
        } else {
          {
// # 1046
          tmp_1 = strncasecmp((char/*const*/  *)q, (char/*const*/  *)"class=", 6U);
          }
// # 1046
          if (tmp_1 == 0) {
            {
// # 1047
            i ++;
// # 1048
            classfound = 1;
// # 1049
            tmp = strcasecmp((char/*const*/  *)(q + 6), (char/*const*/  *)(class));
            }
// # 1049
            if (tmp == 0) {
              {
// # 1050
              classmatched = 1;
              }
            }
          } else {
            {
// # 1052
            tmp_0 = strcmp((char/*const*/  *)q, (char/*const*/  *)"-");
            }
// # 1052
            if (tmp_0 == 0) {
              {
// # 1053
              i ++;
// # 1054
              options = 0;
              }
            } else {
              {
// # 1057
              options = 0;
              }
            }
          }
        }
      }
    }
// # 1059
    if (classfound) {
// # 1059
      if (classmatched) {
        _L: 
// # 1064
        if (i + 3 < 50) {
          {
// # 1064
          q = entry->arg[i + 3];
          }
// # 1064
          if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1064
            if ((int )(*(q + 0)) != 0) {
              {
// # 1064
              tmp_7 = strcmp((char/*const*/  *)q, (char/*const*/  *)"*");
              }
// # 1064
              if (tmp_7 != 0) {
// # 1068
                if ((int )(*(q + 0)) == 37) {
                  {
// # 1069
                  sprintf((char */*   */)(buf_2),
                          (char/*const*/  */*   */)((char/*const*/  *)"%s"),
                          q + 1);
                  }
                } else {
                  {
// # 1071
                  tmp_4 = getpwnam((char/*const*/  *)q);
// # 1071
                  pwent = tmp_4;
                  }
// # 1072
                  if (pwent) {
                    {
// # 1073
                    sprintf((char */*   */)(buf_2),
                            (char/*const*/  */*   */)((char/*const*/  *)"%u"),
                            pwent->pw_uid);
                    }
                  } else {
                    {
// # 1075
                    sprintf((char */*   */)(buf_2),
                            (char/*const*/  */*   */)((char/*const*/  *)"%d"),
                            0);
                    }
                  }
                }
                {
// # 1077
                tmp_5 = strlen((char/*const*/  *)(buf_2));
// # 1077
                entry->arg[i + 3] = (char *)malloc(tmp_5 + 1U);
                }
// # 1078
                if ((unsigned int )entry->arg[i + 3] ==
                    (unsigned int )((void *)0)) {
                  {
// # 1079
                  syslog(3, (char/*const*/  *)"calloc error in expand_id");
// # 1080
                  exit(0);
                  }
                }
                {
// # 1082 "extensions.c"
                strcpy((char */*   */)entry->arg[i + 3],
                       (char/*const*/  */*   */)((char/*const*/  *)(buf_2)));
                }
              }
            }
          }
        }
// # 1087
        if (i + 4 < 50) {
          {
// # 1087
          q = entry->arg[i + 4];
          }
// # 1087
          if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1087
            if ((int )(*(q + 0)) != 0) {
              {
// # 1087
              tmp_11 = strcmp((char/*const*/  *)q, (char/*const*/  *)"*");
              }
// # 1087
              if (tmp_11 != 0) {
// # 1091
                if ((int )(*(q + 0)) == 37) {
                  {
// # 1092
                  sprintf((char */*   */)(buf_2),
                          (char/*const*/  */*   */)((char/*const*/  *)"%s"),
                          q + 1);
                  }
                } else {
                  {
// # 1094
                  tmp_8 = getgrnam((char/*const*/  *)q);
// # 1094
                  grent = tmp_8;
                  }
// # 1095
                  if (grent) {
                    {
// # 1096
                    sprintf((char */*   */)(buf_2),
                            (char/*const*/  */*   */)((char/*const*/  *)"%u"),
                            grent->gr_gid);
                    }
                  } else {
                    {
// # 1098
                    sprintf((char */*   */)(buf_2),
                            (char/*const*/  */*   */)((char/*const*/  *)"%d"),
                            0);
                    }
                  }
                  {
// # 1099
                  endgrent();
                  }
                }
                {
// # 1101
                tmp_9 = strlen((char/*const*/  *)(buf_2));
// # 1101
                entry->arg[i + 4] = (char *)malloc(tmp_9 + 1U);
                }
// # 1102
                if ((unsigned int )entry->arg[i + 4] ==
                    (unsigned int )((void *)0)) {
                  {
// # 1103
                  syslog(3, (char/*const*/  *)"calloc error in expand_id");
// # 1104
                  exit(0);
                  }
                }
                {
// # 1106 "extensions.c"
                strcpy((char */*   */)entry->arg[i + 4],
                       (char/*const*/  */*   */)((char/*const*/  *)(buf_2)));
                }
              }
            }
          }
        }
      }
    } else {
      goto _L;
    }
  }
// # 1110
  return;
}
}
// # 1112
int fn_check(char *name ) 
{ struct aclmember *entry ;
  int j ;
  char *path ;
  regex_t regexbuf ;
  regmatch_t regmatchbuf ;
  int tmp ;
  int tmp_0 ;
  int tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;
  struct aclmember *tmp_4 ;

  {
  {
// # 1117
  entry = (struct aclmember *)((void *)0);
  }
// # 1139
  while (1) {
    {
// # 1139
    tmp_4 = getaclentry("path-filter", & entry);
    }
// # 1139
    if (tmp_4) {
// # 1139
      if (! ((unsigned int )entry->arg[0] != (unsigned int )((void *)0))) {
// # 1139
        break;
      }
    } else {
// # 1139
      break;
    }
    {
// # 1140
    tmp_3 = type_match(entry->arg[0]);
    }
// # 1140
    if (tmp_3) {
// # 1140
      if (entry->arg[1]) {
// # 1140
        if (entry->arg[2]) {
          {
// # 1146
          path = strrchr((char/*const*/  *)name, (int )'/');
          }
// # 1146
          if (path) {
            {
// # 1147
            path ++;
            }
          } else {
            {
// # 1149
            path = name;
            }
          }
          {
// # 1153
          tmp = regcomp((regex_t */*   */)(& regexbuf),
                        (char/*const*/  */*   */)((char/*const*/  *)entry->arg[2]),
                        1);
          }
// # 1153
          if (tmp != 0) {
            {
// # 1154
            reply(550, "HAVE_REGEX error");
            }
// # 1162
            return (0);
          }
          {
// # 1165
          tmp_0 = regexec((regex_t/*const*/  */*   */)((regex_t/*const*/  *)(& regexbuf)),
                            (char/*const*/  */*   */)((char/*const*/  *)path),
                            1U, (regmatch_t */*   */)(& regmatchbuf),
                            0);
          }
// # 1165
          if (tmp_0 != 0) {
            {
// # 1177
            pr_mesg(550, entry->arg[1]);
// # 1178
            reply(550, "%s: Permission denied on server. (Filename (accept))",
                  name);
            }
// # 1179
            return (0);
          }
          {
// # 1183
          j = 3;
          }
// # 1183
          while (j < 50) {
// # 1185
            if (entry->arg[j]) {
              {
// # 1187
              tmp_1 = regcomp((regex_t */*   */)(& regexbuf),
                                (char/*const*/  */*   */)((char/*const*/  *)entry->arg[j]),
                                1);
              }
// # 1187
              if (tmp_1 != 0) {
                {
// # 1188
                reply(550, "HAVE_REGEX error");
                }
// # 1196
                return (0);
              }
              {
// # 1199
              tmp_2 = regexec((regex_t/*const*/  */*   */)((regex_t/*const*/  *)(& regexbuf)),
                                (char/*const*/  */*   */)((char/*const*/  *)path),
                                1U,
                                (regmatch_t */*   */)(& regmatchbuf),
                                0);
              }
// # 1199
              if (tmp_2 == 0) {
                {
// # 1211
                pr_mesg(550, entry->arg[1]);
// # 1212
                reply(550, "%s: Permission denied on server. (Filename (deny))",
                      name);
                }
// # 1213
                return (0);
              }
            }
            {
// # 1183
            j ++;
            }
          }
        }
      }
    }
  }
// # 1219
  return (1);
}
}
// # 1222
int dir_check(char *name , uid_t *uid , gid_t *gid , int *d_mode ,
              int *valid_0 ) 
{ struct aclmember *entry ;
  int match_value ;
  char *ap2 ;
  char *ap3 ;
  char *ap4 ;
  char *ap5 ;
  char *ap6 ;
  char *ap7 ;
  char cwdir[4096] ;
  char *pwdir ;
  char abspwdir[4096] ;
  char relpwdir[4096] ;
  char path[4096] ;
  char *sp ;
  struct stat stbuf ;
  int stat_result ;
  char class[1024] ;
  size_t tmp ;
  char *tmp_0 ;
  char *tmp_1 ;
  char *tmp_2 ;
  char *q ;
  int i ;
  int options ;
  int classfound ;
  int classmatched ;
  int tmp_3 ;
  int tmp_4 ;
  int tmp_5 ;
  int tmp_6 ;
  int tmp_7 ;
  int j ;
  int tmp_8 ;
  struct aclmember *tmp_9 ;
  int tmp_10 ;
  int tmp_11 ;
  int tmp_12 ;

  {
  {
// # 1224
  entry = (struct aclmember *)((void *)0);
// # 1225
  match_value = -1;
// # 1226
  ap2 = (char *)((void *)0);
// # 1227
  ap3 = (char *)((void *)0);
// # 1228
  ap4 = (char *)((void *)0);
// # 1229
  ap5 = (char *)((void *)0);
// # 1230
  ap6 = (char *)((void *)0);
// # 1231
  ap7 = (char *)((void *)0);
// # 1239
  stat_result = -1;
// # 1244
  acl_getclass(class);
// # 1246
  (*valid_0) = 0;
// # 1253
  tmp = strlen((char/*const*/  *)name);
  }
// # 1253
  if (tmp + 1U > sizeof(path)) {
    {
// # 1254
    perror_reply(550, "Path too long");
    }
// # 1255
    return (-1);
  }
  {
// # 1258
  strcpy((char */*   */)(path),
         (char/*const*/  */*   */)((char/*const*/  *)name));
// # 1259
  sp = strrchr((char/*const*/  *)(path), (int )'/');
  }
// # 1260
  if (sp) {
    {
// # 1261
    (*sp) = '\0';
    }
  } else {
    {
// # 1263
    strcpy((char */*   */)(path),
           (char/*const*/  */*   */)((char/*const*/  *)"."));
    }
  }
  {
// # 1265
  tmp_0 = fb_realpath((char/*const*/  *)(path), cwdir);
  }
// # 1265
  if ((unsigned int )tmp_0 == (unsigned int )((void *)0)) {
    {
// # 1266
    perror_reply(550, "Could not determine cwdir");
    }
// # 1267
    return (-1);
  }
  {
// # 1270
  tmp_1 = fb_realpath((char/*const*/  *)home, relpwdir);
  }
// # 1270
  if ((unsigned int )tmp_1 == (unsigned int )((void *)0)) {
    {
// # 1271
    perror_reply(550, "Could not determine pwdir");
    }
// # 1272
    return (-1);
  }
  {
// # 1275
  tmp_2 = wu_realpath((char/*const*/  *)home, abspwdir, chroot_path);
  }
// # 1275
  if ((unsigned int )tmp_2 == (unsigned int )((void *)0)) {
    {
// # 1276
    perror_reply(550, "Could not determine pwdir");
    }
// # 1277
    return (-1);
  }
// # 1280
  while (1) {
    {
// # 1280
    tmp_9 = getaclentry("upload", & entry);
    }
// # 1280
    if (! tmp_9) {
// # 1280
      break;
    }
    {
// # 1282
    i = 0;
// # 1283
    options = 1;
// # 1284
    classfound = 0;
// # 1285
    classmatched = 0;
// # 1286
    pwdir = abspwdir;
    }
// # 1287
    while (1) {
// # 1287
      if (options) {
// # 1287
        if (i < 50) {
          {
// # 1287
          q = entry->arg[i];
          }
// # 1287
          if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1287
            if (! ((int )(*(q + 0)) != 0)) {
// # 1287
              break;
            }
          } else {
// # 1287
            break;
          }
        } else {
// # 1287
          break;
        }
      } else {
// # 1287
        break;
      }
      {
// # 1291
      tmp_7 = strcasecmp((char/*const*/  *)q, (char/*const*/  *)"absolute");
      }
// # 1291
      if (tmp_7 == 0) {
        {
// # 1292
        i ++;
// # 1293
        pwdir = abspwdir;
        }
      } else {
        {
// # 1295
        tmp_6 = strcasecmp((char/*const*/  *)q, (char/*const*/  *)"relative");
        }
// # 1295
        if (tmp_6 == 0) {
          {
// # 1296
          i ++;
// # 1297
          pwdir = relpwdir;
          }
        } else {
          {
// # 1299
          tmp_5 = strncasecmp((char/*const*/  *)q, (char/*const*/  *)"class=", 6U);
          }
// # 1299
          if (tmp_5 == 0) {
            {
// # 1300
            i ++;
// # 1301
            classfound = 1;
// # 1302
            tmp_3 = strcasecmp((char/*const*/  *)(q + 6),
                                 (char/*const*/  *)(class));
            }
// # 1302
            if (tmp_3 == 0) {
              {
// # 1303
              classmatched = 1;
              }
            }
          } else {
            {
// # 1305
            tmp_4 = strcmp((char/*const*/  *)q, (char/*const*/  *)"-");
            }
// # 1305
            if (tmp_4 == 0) {
              {
// # 1306
              i ++;
// # 1307
              options = 0;
              }
            } else {
              {
// # 1310
              options = 0;
              }
            }
          }
        }
      }
    }
// # 1312
    if (classfound) {
// # 1312
      if (classmatched) {
        _L: 
// # 1314
        if (i + 1 < 50) {
          {
// # 1314
          q = entry->arg[i];
          }
// # 1314
          if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1314
            if ((int )(*(q + 0)) != 0) {
              {
// # 1314
              tmp_8 = path_compare(q, pwdir);
              }
// # 1314
              if (0 < tmp_8) {
                {
// # 1314
                j = path_compare(entry->arg[i + 1], cwdir);
                }
// # 1314
                if (j >= match_value) {
                  {
// # 1319
                  match_value = j;
// # 1321
                  ap2 = (char *)((void *)0);
                  }
// # 1322
                  if (i + 2 < 50) {
                    {
// # 1322
                    q = entry->arg[i + 2];
                    }
// # 1322
                    if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1322
                      if ((int )(*(q + 0)) != 0) {
                        {
// # 1325
                        ap2 = q;
                        }
                      }
                    }
                  }
                  {
// # 1327
                  ap3 = (char *)((void *)0);
                  }
// # 1328
                  if (i + 3 < 50) {
                    {
// # 1328
                    q = entry->arg[i + 3];
                    }
// # 1328
                    if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1328
                      if ((int )(*(q + 0)) != 0) {
                        {
// # 1331
                        ap3 = q;
                        }
                      }
                    }
                  }
                  {
// # 1333
                  ap4 = (char *)((void *)0);
                  }
// # 1334
                  if (i + 4 < 50) {
                    {
// # 1334
                    q = entry->arg[i + 4];
                    }
// # 1334
                    if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1334
                      if ((int )(*(q + 0)) != 0) {
                        {
// # 1337
                        ap4 = q;
                        }
                      }
                    }
                  }
                  {
// # 1339
                  ap5 = (char *)((void *)0);
                  }
// # 1340
                  if (i + 5 < 50) {
                    {
// # 1340
                    q = entry->arg[i + 5];
                    }
// # 1340
                    if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1340
                      if ((int )(*(q + 0)) != 0) {
                        {
// # 1343
                        ap5 = q;
                        }
                      }
                    }
                  }
                  {
// # 1345
                  ap6 = (char *)((void *)0);
                  }
// # 1346
                  if (i + 6 < 50) {
                    {
// # 1346
                    q = entry->arg[i + 6];
                    }
// # 1346
                    if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1346
                      if ((int )(*(q + 0)) != 0) {
                        {
// # 1349
                        ap6 = q;
                        }
                      }
                    }
                  }
                  {
// # 1351
                  ap7 = (char *)((void *)0);
                  }
// # 1352
                  if (i + 7 < 50) {
                    {
// # 1352
                    q = entry->arg[i + 7];
                    }
// # 1352
                    if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1352
                      if ((int )(*(q + 0)) != 0) {
                        {
// # 1355
                        ap7 = q;
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
    } else {
      goto _L;
    }
  }
// # 1360
  if (anonymous) {
// # 1360
    if (match_value < 0) {
      {
// # 1361
      reply(550, "%s: Permission denied on server. (Upload dirs)", name);
      }
// # 1362
      return (0);
    }
  }
// # 1364
  if (ap2) {
    {
// # 1364
    tmp_10 = strcasecmp((char/*const*/  *)ap2, (char/*const*/  *)"no");
    }
// # 1364
    if (tmp_10) {
      goto _L_1;
    } else {
      {
// # 1367
      reply(550, "%s: Permission denied on server. (Upload dirs)", name);
      }
// # 1368
      return (0);
    }
  } else {
    _L_1: 
// # 1364
    if (ap3) {
      {
// # 1364
      tmp_11 = strcasecmp((char/*const*/  *)ap3, (char/*const*/  *)"nodirs");
      }
// # 1364
      if (tmp_11) {
        goto _L_0;
      } else {
        {
// # 1367
        reply(550, "%s: Permission denied on server. (Upload dirs)", name);
        }
// # 1368
        return (0);
      }
    } else {
      _L_0: 
// # 1364
      if (ap6) {
        {
// # 1364
        tmp_12 = strcasecmp((char/*const*/  *)ap6, (char/*const*/  *)"nodirs");
        }
// # 1364
        if (! tmp_12) {
          {
// # 1367
          reply(550, "%s: Permission denied on server. (Upload dirs)", name);
          }
// # 1368
          return (0);
        }
      }
    }
  }
// # 1370
  if (ap3) {
// # 1370
    if ((int )(*ap3) == 42) {
      {
// # 1371
      stat_result = statextinline((char/*const*/  *)(path), & stbuf);
      }
    } else {
      goto _L_2;
    }
  } else {
    _L_2: 
// # 1370
    if (ap4) {
// # 1370
      if ((int )(*ap4) == 42) {
        {
// # 1371
        stat_result = statextinline((char/*const*/  *)(path), & stbuf);
        }
      }
    }
  }
// # 1372
  if (ap3) {
// # 1373
    if ((int )(*(ap3 + 0)) != 42) {
      {
// # 1374
      (*uid) = (uid_t )atoi((char/*const*/  *)ap3);
      }
    } else {
// # 1373
      if ((int )(*(ap3 + 1)) != 0) {
        {
// # 1374
        (*uid) = (uid_t )atoi((char/*const*/  *)ap3);
        }
      } else {
// # 1375
        if (stat_result == 0) {
          {
// # 1376
          (*uid) = stbuf.st_uid;
          }
        }
      }
    }
  }
// # 1378
  if (ap4) {
// # 1379
    if ((int )(*(ap4 + 0)) != 42) {
      {
// # 1380
      (*gid) = (gid_t )atoi((char/*const*/  *)ap4);
      }
    } else {
// # 1379
      if ((int )(*(ap4 + 1)) != 0) {
        {
// # 1380
        (*gid) = (gid_t )atoi((char/*const*/  *)ap4);
        }
      } else {
// # 1381
        if (stat_result == 0) {
          {
// # 1382
          (*gid) = stbuf.st_gid;
          }
        }
      }
    }
  }
// # 1384
  if (ap7) {
    {
// # 1385
    sscanf((char/*const*/  */*   */)((char/*const*/  *)ap7),
           (char/*const*/  */*   */)((char/*const*/  *)"%o"), d_mode);
// # 1386
    (*valid_0) = 1;
    }
  } else {
// # 1388
    if (ap5) {
      {
// # 1389
      sscanf((char/*const*/  */*   */)((char/*const*/  *)ap5),
             (char/*const*/  */*   */)((char/*const*/  *)"%o"), d_mode);
      }
// # 1390
      if ((*d_mode) & 384) {
        {
// # 1391
        (*d_mode) |= 64;
        }
      }
// # 1392
      if ((*d_mode) & 48) {
        {
// # 1393
        (*d_mode) |= 8;
        }
      }
// # 1394
      if ((*d_mode) & 6) {
        {
// # 1395
        (*d_mode) |= 1;
        }
      }
      {
// # 1396
      (*valid_0) = 1;
      }
    }
  }
// # 1398
  return (1);
}
}
// # 1401
int upl_check(char *name , uid_t *uid , gid_t *gid , int *f_mode ,
              int *valid_0 ) 
{ int match_value ;
  char cwdir[4096] ;
  char *pwdir ;
  char abspwdir[4096] ;
  char relpwdir[4096] ;
  char path[4096] ;
  char *sp ;
  struct stat stbuf ;
  int stat_result ;
  char *ap2 ;
  char *ap3 ;
  char *ap4 ;
  char *ap5 ;
  struct aclmember *entry ;
  char class[1024] ;
  size_t tmp ;
  char *tmp_0 ;
  char *tmp_1 ;
  char *tmp_2 ;
  char *q ;
  int i ;
  int options ;
  int classfound ;
  int classmatched ;
  int tmp_3 ;
  int tmp_4 ;
  int tmp_5 ;
  int tmp_6 ;
  int tmp_7 ;
  int j ;
  int tmp_8 ;
  struct aclmember *tmp_9 ;
  int tmp_10 ;
  int tmp_11 ;
  int tmp_12 ;

  {
  {
// # 1403
  match_value = -1;
// # 1411
  stat_result = -1;
// # 1412
  ap2 = (char *)((void *)0);
// # 1413
  ap3 = (char *)((void *)0);
// # 1414
  ap4 = (char *)((void *)0);
// # 1415
  ap5 = (char *)((void *)0);
// # 1416
  entry = (struct aclmember *)((void *)0);
// # 1421
  (*valid_0) = 0;
// # 1422
  acl_getclass(class);
// # 1430
  tmp = strlen((char/*const*/  *)name);
  }
// # 1430
  if (tmp + 1U > sizeof(path)) {
    {
// # 1431
    perror_reply(553, "Path too long");
    }
// # 1432
    return (-1);
  }
  {
// # 1435
  strcpy((char */*   */)(path),
         (char/*const*/  */*   */)((char/*const*/  *)name));
// # 1436
  sp = strrchr((char/*const*/  *)(path), (int )'/');
  }
// # 1437
  if (sp) {
    {
// # 1438
    (*sp) = '\0';
    }
  } else {
    {
// # 1440
    strcpy((char */*   */)(path),
           (char/*const*/  */*   */)((char/*const*/  *)"."));
    }
  }
  {
// # 1442
  tmp_0 = fb_realpath((char/*const*/  *)(path), cwdir);
  }
// # 1442
  if ((unsigned int )tmp_0 == (unsigned int )((void *)0)) {
    {
// # 1443
    perror_reply(553, "Could not determine cwdir");
    }
// # 1444
    return (-1);
  }
  {
// # 1447
  tmp_1 = wu_realpath((char/*const*/  *)home, abspwdir, chroot_path);
  }
// # 1447
  if ((unsigned int )tmp_1 == (unsigned int )((void *)0)) {
    {
// # 1448
    perror_reply(553, "Could not determine pwdir");
    }
// # 1449
    return (-1);
  }
  {
// # 1452
  tmp_2 = fb_realpath((char/*const*/  *)home, relpwdir);
  }
// # 1452
  if ((unsigned int )tmp_2 == (unsigned int )((void *)0)) {
    {
// # 1453
    perror_reply(553, "Could not determine pwdir");
    }
// # 1454
    return (-1);
  }
// # 1461
  while (1) {
    {
// # 1461
    tmp_9 = getaclentry("upload", & entry);
    }
// # 1461
    if (! tmp_9) {
// # 1461
      break;
    }
    {
// # 1463
    i = 0;
// # 1464
    options = 1;
// # 1465
    classfound = 0;
// # 1466
    classmatched = 0;
// # 1467
    pwdir = abspwdir;
    }
// # 1468
    while (1) {
// # 1468
      if (options) {
// # 1468
        if (i < 50) {
          {
// # 1468
          q = entry->arg[i];
          }
// # 1468
          if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1468
            if (! ((int )(*(q + 0)) != 0)) {
// # 1468
              break;
            }
          } else {
// # 1468
            break;
          }
        } else {
// # 1468
          break;
        }
      } else {
// # 1468
        break;
      }
      {
// # 1472
      tmp_7 = strcasecmp((char/*const*/  *)q, (char/*const*/  *)"absolute");
      }
// # 1472
      if (tmp_7 == 0) {
        {
// # 1473
        i ++;
// # 1474
        pwdir = abspwdir;
        }
      } else {
        {
// # 1476
        tmp_6 = strcasecmp((char/*const*/  *)q, (char/*const*/  *)"relative");
        }
// # 1476
        if (tmp_6 == 0) {
          {
// # 1477
          i ++;
// # 1478
          pwdir = relpwdir;
          }
        } else {
          {
// # 1480
          tmp_5 = strncasecmp((char/*const*/  *)q, (char/*const*/  *)"class=", 6U);
          }
// # 1480
          if (tmp_5 == 0) {
            {
// # 1481
            i ++;
// # 1482
            classfound = 1;
// # 1483
            tmp_3 = strcasecmp((char/*const*/  *)(q + 6),
                                 (char/*const*/  *)(class));
            }
// # 1483
            if (tmp_3 == 0) {
              {
// # 1484
              classmatched = 1;
              }
            }
          } else {
            {
// # 1486
            tmp_4 = strcmp((char/*const*/  *)q, (char/*const*/  *)"-");
            }
// # 1486
            if (tmp_4 == 0) {
              {
// # 1487
              i ++;
// # 1488
              options = 0;
              }
            } else {
              {
// # 1491
              options = 0;
              }
            }
          }
        }
      }
    }
// # 1493
    if (classfound) {
// # 1493
      if (classmatched) {
        _L: 
// # 1495
        if (i + 1 < 50) {
          {
// # 1495
          q = entry->arg[i];
          }
// # 1495
          if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1495
            if ((int )(*(q + 0)) != 0) {
              {
// # 1495
              tmp_8 = path_compare(q, pwdir);
              }
// # 1495
              if (0 < tmp_8) {
                {
// # 1495
                j = path_compare(entry->arg[i + 1], cwdir);
                }
// # 1495
                if (j >= match_value) {
                  {
// # 1500
                  match_value = j;
// # 1502
                  ap2 = (char *)((void *)0);
                  }
// # 1503
                  if (i + 2 < 50) {
                    {
// # 1503
                    q = entry->arg[i + 2];
                    }
// # 1503
                    if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1503
                      if ((int )(*(q + 0)) != 0) {
                        {
// # 1506
                        ap2 = q;
                        }
                      }
                    }
                  }
                  {
// # 1508
                  ap3 = (char *)((void *)0);
                  }
// # 1509
                  if (i + 3 < 50) {
                    {
// # 1509
                    q = entry->arg[i + 3];
                    }
// # 1509
                    if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1509
                      if ((int )(*(q + 0)) != 0) {
                        {
// # 1512
                        ap3 = q;
                        }
                      }
                    }
                  }
                  {
// # 1514
                  ap4 = (char *)((void *)0);
                  }
// # 1515
                  if (i + 4 < 50) {
                    {
// # 1515
                    q = entry->arg[i + 4];
                    }
// # 1515
                    if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1515
                      if ((int )(*(q + 0)) != 0) {
                        {
// # 1518
                        ap4 = q;
                        }
                      }
                    }
                  }
                  {
// # 1520
                  ap5 = (char *)((void *)0);
                  }
// # 1521
                  if (i + 5 < 50) {
                    {
// # 1521
                    q = entry->arg[i + 5];
                    }
// # 1521
                    if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1521
                      if ((int )(*(q + 0)) != 0) {
                        {
// # 1524
                        ap5 = q;
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
    } else {
      goto _L;
    }
  }
// # 1529
  if (ap3) {
    {
// # 1529
    tmp_10 = strcasecmp((char/*const*/  *)"dirs", (char/*const*/  *)ap3);
    }
// # 1529
    if (tmp_10) {
      {
// # 1529
      tmp_11 = strcasecmp((char/*const*/  *)"nodirs", (char/*const*/  *)ap3);
      }
// # 1529
      if (! tmp_11) {
        {
// # 1532
        ap3 = (char *)((void *)0);
        }
      }
    } else {
      {
// # 1532
      ap3 = (char *)((void *)0);
      }
    }
  }
// # 1537
  if (match_value >= 0) {
    {
// # 1538
    tmp_12 = strcasecmp((char/*const*/  *)ap2, (char/*const*/  *)"yes");
    }
// # 1538
    if (tmp_12) {
      {
// # 1558
      reply(553, "%s: Permission denied on server. (Upload)", name);
      }
// # 1559
      return (-1);
    } else {
// # 1539
      if (ap3) {
// # 1539
        if ((int )(*ap3) == 42) {
          {
// # 1540
          stat_result = statextinline((char/*const*/  *)(path), & stbuf);
          }
        } else {
          goto _L_0;
        }
      } else {
        _L_0: 
// # 1539
        if (ap4) {
// # 1539
          if ((int )(*ap4) == 42) {
            {
// # 1540
            stat_result = statextinline((char/*const*/  *)(path), & stbuf);
            }
          }
        }
      }
// # 1541
      if (ap3) {
// # 1542
        if ((int )(*(ap3 + 0)) != 42) {
          {
// # 1543
          (*uid) = (uid_t )atoi((char/*const*/  *)ap3);
          }
        } else {
// # 1542
          if ((int )(*(ap3 + 1)) != 0) {
            {
// # 1543
            (*uid) = (uid_t )atoi((char/*const*/  *)ap3);
            }
          } else {
// # 1544
            if (stat_result == 0) {
              {
// # 1545
              (*uid) = stbuf.st_uid;
              }
            }
          }
        }
      }
// # 1547
      if (ap4) {
// # 1548
        if ((int )(*(ap4 + 0)) != 42) {
          {
// # 1549
          (*gid) = (gid_t )atoi((char/*const*/  *)ap4);
          }
        } else {
// # 1548
          if ((int )(*(ap4 + 1)) != 0) {
            {
// # 1549
            (*gid) = (gid_t )atoi((char/*const*/  *)ap4);
            }
          } else {
// # 1550
            if (stat_result == 0) {
              {
// # 1551
              (*gid) = stbuf.st_gid;
              }
            }
          }
        }
        {
// # 1552
        (*valid_0) = 1;
        }
      }
// # 1554
      if (ap5) {
        {
// # 1555
        sscanf((char/*const*/  */*   */)((char/*const*/  *)ap5),
               (char/*const*/  */*   */)((char/*const*/  *)"%o"), f_mode);
        }
      }
    }
  } else {
// # 1567
    if (anonymous) {
      {
// # 1568
      reply(553, "%s: Permission denied on server. (Upload)", name);
      }
// # 1569
      return (-1);
    }
// # 1571
    return (1);
  }
// # 1574
  return (match_value);
}
}
// # 1577
int del_check(char *name ) 
{ int pdelete ;
  int tmp ;
  struct aclmember *entry ;
  int tmp_0 ;
  struct aclmember *tmp_1 ;

  {
// # 1579
  if (anonymous) {
    {
// # 1579
    tmp = 0;
    }
  } else {
    {
// # 1579
    tmp = 1;
    }
  }
  {
// # 1579
  pdelete = tmp;
// # 1580
  entry = (struct aclmember *)((void *)0);
  }
// # 1582
  while (1) {
    {
// # 1582
    tmp_1 = getaclentry("delete", & entry);
    }
// # 1582
    if (tmp_1) {
// # 1582
      if (entry->arg[0]) {
// # 1582
        if (! ((unsigned int )entry->arg[1] != (unsigned int )((void *)0))) {
// # 1582
          break;
        }
      } else {
// # 1582
        break;
      }
    } else {
// # 1582
      break;
    }
    {
// # 1583
    tmp_0 = type_match(entry->arg[1]);
    }
// # 1583
    if (tmp_0) {
// # 1584
      if (anonymous) {
// # 1585
        if ((int )(*(entry->arg[0])) == 121) {
          {
// # 1586
          pdelete = 1;
          }
        }
      } else {
// # 1588
        if ((int )(*(entry->arg[0])) == 110) {
          {
// # 1589
          pdelete = 0;
          }
        }
      }
    }
  }
// # 1597
  if (pdelete) {
// # 1602
    return (1);
  } else {
    {
// # 1598
    reply(553, "%s: Permission denied on server. (Delete)", name);
    }
// # 1599
    return (0);
  }
}
}
// # 1610
int regexmatch(char *name , char *rgexp ) 
{ regex_t regexbuf ;
  regmatch_t regmatchbuf ;
  int tmp ;
  int tmp_0 ;

  {
  {
// # 1627
  tmp = regcomp((regex_t */*   */)(& regexbuf),
                (char/*const*/  */*   */)((char/*const*/  *)rgexp), 1);
  }
// # 1627
  if (tmp != 0) {
    {
// # 1628
    reply(553, "HAVE_REGEX error");
    }
// # 1636
    return (0);
  }
  {
// # 1640
  tmp_0 = regexec((regex_t/*const*/  */*   */)((regex_t/*const*/  *)(& regexbuf)),
                    (char/*const*/  */*   */)((char/*const*/  *)name), 1U,
                    (regmatch_t */*   */)(& regmatchbuf), 0);
  }
// # 1640
  if (tmp_0 != 0) {
// # 1652
    return (0);
  }
// # 1654
  return (1);
}
}
// # 1657
static int allow_retrieve(char *name ) 
{ char realname[4097] ;
  char localname[4097] ;
  char *whichname ;
  int i ;
  size_t len ;
  struct aclmember *entry ;
  char *p ;
  char *q ;
  int options ;
  int classfound ;
  int classmatched ;
  char class[1024] ;
  int tmp ;
  int tmp_0 ;
  int tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;
  char *tmp_11 ;
  char *tmp_12 ;
  int tmp_13 ;
  struct aclmember *tmp_14 ;

  {
  {
// # 1664
  entry = (struct aclmember *)((void *)0);
// # 1673
  acl_getclass(class);
  }
// # 1674
  if ((unsigned int )name == (unsigned int )((char *)((void *)0))) {
// # 1676
    return (0);
  } else {
// # 1674
    if ((int )(*name) == 0) {
// # 1676
      return (0);
    }
  }
  {
// # 1677
  fb_realpath((char/*const*/  *)name, localname);
// # 1678
  wu_realpath((char/*const*/  *)name, realname, chroot_path);
  }
// # 1679
  while (1) {
    {
// # 1679
    tmp_14 = getaclentry("allow-retrieve", & entry);
    }
// # 1679
    if (! tmp_14) {
// # 1679
      break;
    }
    {
// # 1680
    whichname = realname;
// # 1681
    i = 0;
// # 1682
    options = 1;
// # 1683
    classfound = 0;
// # 1684
    classmatched = 0;
    }
// # 1685
    while (1) {
// # 1685
      if (options) {
// # 1685
        if (i < 50) {
          {
// # 1685
          q = entry->arg[i];
          }
// # 1685
          if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1685
            if (! ((int )(*(q + 0)) != 0)) {
// # 1685
              break;
            }
          } else {
// # 1685
            break;
          }
        } else {
// # 1685
          break;
        }
      } else {
// # 1685
        break;
      }
      {
// # 1689
      tmp_3 = strcasecmp((char/*const*/  *)q, (char/*const*/  *)"absolute");
      }
// # 1689
      if (tmp_3 == 0) {
        {
// # 1690
        i ++;
// # 1691
        whichname = realname;
        }
      } else {
        {
// # 1693
        tmp_2 = strcasecmp((char/*const*/  *)q, (char/*const*/  *)"relative");
        }
// # 1693
        if (tmp_2 == 0) {
          {
// # 1694
          i ++;
// # 1695
          whichname = localname;
          }
        } else {
          {
// # 1697
          tmp_1 = strncasecmp((char/*const*/  *)q, (char/*const*/  *)"class=", 6U);
          }
// # 1697
          if (tmp_1 == 0) {
            {
// # 1698
            i ++;
// # 1699
            classfound = 1;
// # 1700
            tmp = strcasecmp((char/*const*/  *)(q + 6), (char/*const*/  *)(class));
            }
// # 1700
            if (tmp == 0) {
              {
// # 1701
              classmatched = 1;
              }
            }
          } else {
            {
// # 1703
            tmp_0 = strcmp((char/*const*/  *)q, (char/*const*/  *)"-");
            }
// # 1703
            if (tmp_0 == 0) {
              {
// # 1704
              i ++;
// # 1705
              options = 0;
              }
            } else {
              {
// # 1708
              options = 0;
              }
            }
          }
        }
      }
    }
// # 1710
    if (classfound) {
// # 1710
      if (classmatched) {
        _L: 
// # 1711
        while (1) {
// # 1711
          if (i < 50) {
            {
// # 1711
            q = entry->arg[i];
            }
// # 1711
            if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1711
              if (! ((int )(*(q + 0)) != 0)) {
// # 1711
                break;
              }
            } else {
// # 1711
              break;
            }
          } else {
// # 1711
            break;
          }
          {
// # 1712
          len = strlen((char/*const*/  *)q);
          }
// # 1713
          if ((int )(*(q + 0)) == 47) {
            {
// # 1713
            p = whichname;
            }
          } else {
            {
// # 1713
            tmp_12 = strrchr((char/*const*/  *)whichname, (int )'/');
            }
// # 1713
            if (tmp_12) {
              {
// # 1713
              tmp_11 = strrchr((char/*const*/  *)whichname, (int )'/');
// # 1713
              p = tmp_11 + 1;
              }
            } else {
              {
// # 1713
              p = whichname;
              }
            }
          }
          {
// # 1714
          tmp_13 = wu_fnmatch((char/*const*/  *)q, (char/*const*/  *)p, 9);
          }
// # 1714
          if (! tmp_13) {
// # 1715
            return (1);
          }
          {
// # 1711
          i ++;
          }
        }
      }
    } else {
      goto _L;
    }
  }
// # 1720
  return (0);
}
}
// # 1723
int checknoretrieve(char *name ) 
{ char realname[4097] ;
  char localname[4097] ;
  char *whichname ;
  int i ;
  size_t len ;
  struct aclmember *entry ;
  char *p ;
  char *q ;
  int options ;
  int classfound ;
  int classmatched ;
  char class[1024] ;
  int tmp ;
  int tmp_0 ;
  int tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;
  char *tmp_11 ;
  char *tmp_12 ;
  int tmp_13 ;
  int tmp_14 ;
  struct aclmember *tmp_15 ;

  {
  {
// # 1730
  entry = (struct aclmember *)((void *)0);
// # 1741
  acl_getclass(class);
  }
// # 1742
  if ((unsigned int )name == (unsigned int )((char *)((void *)0))) {
// # 1744
    return (0);
  } else {
// # 1742
    if ((int )(*name) == 0) {
// # 1744
      return (0);
    }
  }
  {
// # 1745
  fb_realpath((char/*const*/  *)name, localname);
// # 1746
  wu_realpath((char/*const*/  *)name, realname, chroot_path);
  }
// # 1747
  while (1) {
    {
// # 1747
    tmp_15 = getaclentry("noretrieve", & entry);
    }
// # 1747
    if (! tmp_15) {
// # 1747
      break;
    }
    {
// # 1748
    whichname = realname;
// # 1749
    i = 0;
// # 1750
    options = 1;
// # 1751
    classfound = 0;
// # 1752
    classmatched = 0;
    }
// # 1753
    while (1) {
// # 1753
      if (options) {
// # 1753
        if (i < 50) {
          {
// # 1753
          q = entry->arg[i];
          }
// # 1753
          if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1753
            if (! ((int )(*(q + 0)) != 0)) {
// # 1753
              break;
            }
          } else {
// # 1753
            break;
          }
        } else {
// # 1753
          break;
        }
      } else {
// # 1753
        break;
      }
      {
// # 1757
      tmp_3 = strcasecmp((char/*const*/  *)q, (char/*const*/  *)"absolute");
      }
// # 1757
      if (tmp_3 == 0) {
        {
// # 1758
        i ++;
// # 1759
        whichname = realname;
        }
      } else {
        {
// # 1761
        tmp_2 = strcasecmp((char/*const*/  *)q, (char/*const*/  *)"relative");
        }
// # 1761
        if (tmp_2 == 0) {
          {
// # 1762
          i ++;
// # 1763
          whichname = localname;
          }
        } else {
          {
// # 1765
          tmp_1 = strncasecmp((char/*const*/  *)q, (char/*const*/  *)"class=", 6U);
          }
// # 1765
          if (tmp_1 == 0) {
            {
// # 1766
            i ++;
// # 1767
            classfound = 1;
// # 1768
            tmp = strcasecmp((char/*const*/  *)(q + 6), (char/*const*/  *)(class));
            }
// # 1768
            if (tmp == 0) {
              {
// # 1769
              classmatched = 1;
              }
            }
          } else {
            {
// # 1771
            tmp_0 = strcmp((char/*const*/  *)q, (char/*const*/  *)"-");
            }
// # 1771
            if (tmp_0 == 0) {
              {
// # 1772
              i ++;
// # 1773
              options = 0;
              }
            } else {
              {
// # 1776
              options = 0;
              }
            }
          }
        }
      }
    }
// # 1778
    if (classfound) {
// # 1778
      if (classmatched) {
        _L: 
// # 1779
        while (1) {
// # 1779
          if (i < 50) {
            {
// # 1779
            q = entry->arg[i];
            }
// # 1779
            if ((unsigned int )q != (unsigned int )((char *)((void *)0))) {
// # 1779
              if (! ((int )(*(q + 0)) != 0)) {
// # 1779
                break;
              }
            } else {
// # 1779
              break;
            }
          } else {
// # 1779
            break;
          }
          {
// # 1780
          len = strlen((char/*const*/  *)q);
          }
// # 1781
          if ((int )(*(q + 0)) == 47) {
            {
// # 1781
            p = whichname;
            }
          } else {
            {
// # 1781
            tmp_12 = strrchr((char/*const*/  *)whichname, (int )'/');
            }
// # 1781
            if (tmp_12) {
              {
// # 1781
              tmp_11 = strrchr((char/*const*/  *)whichname, (int )'/');
// # 1781
              p = tmp_11 + 1;
              }
            } else {
              {
// # 1781
              p = whichname;
              }
            }
          }
          {
// # 1782
          tmp_14 = wu_fnmatch((char/*const*/  *)q, (char/*const*/  *)p, 9);
          }
// # 1782
          if (! tmp_14) {
            {
// # 1783
            tmp_13 = allow_retrieve(name);
            }
// # 1783
            if (! tmp_13) {
              {
// # 1787
              reply(550, "%s is marked unretrievable", localname);
              }
// # 1788
              return (1);
            }
          }
          {
// # 1779
          i ++;
          }
        }
      }
    } else {
      goto _L;
    }
  }
// # 1794
  return (0);
}
}
// # 2263
static int CheckMethod   = 0;
// # 2265
void SetCheckMethod(char/*const*/  *method ) 
{ int tmp ;
  int tmp_0 ;
  int tmp_1 ;
  int tmp_2 ;

  {
  {
// # 2267
  tmp_1 = strcasecmp(method, (char/*const*/  *)"md5");
  }
// # 2267
  if (tmp_1 == 0) {
    {
// # 2269
    CheckMethod = 0;
    }
  } else {
    {
// # 2267
    tmp_2 = strcasecmp(method, (char/*const*/  *)"rfc1321");
    }
// # 2267
    if (tmp_2 == 0) {
      {
// # 2269
      CheckMethod = 0;
      }
    } else {
      {
// # 2270
      tmp = strcasecmp(method, (char/*const*/  *)"crc");
      }
// # 2270
      if (tmp == 0) {
        {
// # 2272
        CheckMethod = 1;
        }
      } else {
        {
// # 2270
        tmp_0 = strcasecmp(method, (char/*const*/  *)"posix");
        }
// # 2270
        if (tmp_0 == 0) {
          {
// # 2272
          CheckMethod = 1;
          }
        } else {
          {
// # 2274
          reply(500, "Unrecognized checksum method");
          }
// # 2275
          return;
        }
      }
    }
  }
// # 2277
  switch (CheckMethod) {
  default: 
  {
// # 2279
  reply(200, "Checksum method is now: MD5 (RFC1321)");
  }
// # 2280
  break;
  case 1: 
  {
// # 2282
  reply(200, "Checksum method is now: CRC (POSIX)");
  }
// # 2283
  break;
  }
// # 2283
  return;
}
}
// # 2287
void ShowCheckMethod(void) 
{ 

  {
// # 2289
  switch (CheckMethod) {
  default: 
  {
// # 2291
  reply(200, "Current checksum method: MD5 (RFC1321)");
  }
// # 2292
  break;
  case 1: 
  {
// # 2294
  reply(200, "Current checksum method: CRC (POSIX)");
  }
// # 2295
  break;
  }
// # 2295
  return;
}
}
// # 2299
void CheckSum(char *pathname ) 
{ char *cmd ;
  char buf_2[4096] ;
  FILE *cmdf ;
  struct stat st ;
  int tmp ;
  size_t tmp_0 ;
  size_t tmp_1 ;
  char *crptr ;
  char *tmp_2 ;
  char *tmp_3 ;

  {
  {
// # 2306
  tmp = statextinline((char/*const*/  *)pathname, & st);
  }
// # 2306
  if (tmp == 0) {
// # 2307
    if ((st.st_mode & 61440U) != 32768U) {
      {
// # 2308
      reply(500, "%s: not a plain file.", pathname);
      }
// # 2309
      return;
    }
  } else {
    {
// # 2313
    perror_reply(550, pathname);
    }
// # 2314
    return;
  }
// # 2317
  switch (CheckMethod) {
  default: 
  {
// # 2319
  cmd = "/bin/md5sum";
  }
// # 2320
  break;
  case 1: 
  {
// # 2322
  cmd = "/bin/cksum";
  }
// # 2323
  break;
  }
  {
// # 2326
  tmp_0 = strlen((char/*const*/  *)cmd);
// # 2326
  tmp_1 = strlen((char/*const*/  *)pathname);
  }
// # 2326
  if (((tmp_0 + 1U) + tmp_1) + 1U > sizeof(buf_2)) {
    {
// # 2327
    reply(500, "Pathname too long");
    }
// # 2328
    return;
  }
  {
// # 2330
  sprintf((char */*   */)(buf_2),
          (char/*const*/  */*   */)((char/*const*/  *)"%s %s"), cmd,
          pathname);
// # 2332
  cmdf = ftpd_popen(buf_2, "r", 0);
  }
// # 2333
  if (cmdf) {
    {

    {
// # 32 "spec.work"
    if (! (cmdf->BLAST_FLAG == 1)) {
// # 34
      error__();
    }
    {

    }
    }
// # 2337 "extensions.c"
    tmp_3 = fgets((char */*   */)(buf_2), (int )sizeof(buf_2),
                    (FILE */*   */)cmdf);
    }
// # 2337
    if (tmp_3) {
      {
// # 2338
      tmp_2 = strchr((char/*const*/  *)(buf_2), (int )'\n');
// # 2338
      crptr = tmp_2;
      }
// # 2339
      if ((unsigned int )crptr != (unsigned int )((void *)0)) {
        {
// # 2340
        (*crptr) = '\0';
        }
      }
      {
// # 2341
      reply(200, "%s", buf_2);
      }
    }
    {
// # 2343
    ftpd_pclose(cmdf);
    }
  } else {
    {
// # 2334
    perror_reply(550, cmd);
    }
  }
// # 2333
  return;
}
}
// # 2347
void CheckSumLastFile(void) 
{ 

  {
// # 2351
  if ((int )LastFileTransferred[0] == 0) {
    {
// # 2352
    reply(500, "Nothing transferred yet");
    }
  } else {
    {
// # 2354
    CheckSum(LastFileTransferred);
    }
  }
// # 2355
  return;
}
}
// # 55 "realpath.c"
char *wu_realpath(char/*const*/  *path , char *resolved_path ,
                  char *chroot_path_0 ) 
{ char *ptr ;
  char q[4096] ;
  size_t tmp ;
  size_t tmp_0 ;
  size_t tmp_1 ;
  size_t tmp_2 ;
  size_t tmp_3 ;
  size_t tmp_4 ;

  {
  {
// # 60
  fb_realpath(path, q);
  }
// # 62
  if ((unsigned int )chroot_path_0 == (unsigned int )((void *)0)) {
    {
// # 63
    strcpy((char */*   */)resolved_path,
           (char/*const*/  */*   */)((char/*const*/  *)(q)));
    }
  } else {
    {
// # 65
    strcpy((char */*   */)resolved_path,
           (char/*const*/  */*   */)((char/*const*/  *)chroot_path_0));
    }
// # 66
    if ((int )q[0] != 47) {
      {
// # 67
      tmp = strlen((char/*const*/  *)resolved_path);
// # 67
      tmp_0 = strlen((char/*const*/  *)(q));
      }
// # 67
      if (tmp + tmp_0 < 4096U) {
        {
// # 68
        strcat((char */*   */)resolved_path,
               (char/*const*/  */*   */)((char/*const*/  *)(q)));
        }
      } else {
// # 70
        return ((char *)((void *)0));
      }
    } else {
// # 72
      if ((int )q[1] != 0) {
        {
// # 73
        ptr = q;
        }
// # 73
        while ((int )(*ptr) != 0) {
          {
// # 73
          ptr ++;
          }
        }
// # 74
        if ((unsigned int )ptr == (unsigned int )resolved_path) {
          goto _L;
        } else {
          {
// # 74
          ptr --;
          }
// # 74
          if ((int )(*ptr) != 47) {
            _L: 
            {
// # 75
            tmp_1 = strlen((char/*const*/  *)resolved_path);
// # 75
            tmp_2 = strlen((char/*const*/  *)(q));
            }
// # 75
            if (tmp_1 + tmp_2 < 4096U) {
              {
// # 76
              strcat((char */*   */)resolved_path,
                     (char/*const*/  */*   */)((char/*const*/  *)(q)));
              }
            } else {
// # 78
              return ((char *)((void *)0));
            }
          } else {
            {
// # 81
            tmp_3 = strlen((char/*const*/  *)resolved_path);
// # 81
            tmp_4 = strlen((char/*const*/  *)(q));
            }
// # 81
            if ((tmp_3 + tmp_4) - 1U < 4096U) {
              {
// # 82
              strcat((char */*   */)resolved_path,
                     (char/*const*/  */*   */)((char/*const*/  *)(& q[1])));
              }
            } else {
// # 84
              return ((char *)((void *)0));
            }
          }
        }
      }
    }
  }
// # 88
  return (resolved_path);
}
}
// # 98
char *fb_realpath(char/*const*/  *path , char *resolved ) 
{ struct stat sb ;
  int fd_0 ;
  int n ;
  int rootd ;
  int serrno ;
  char *p ;
  char *q ;
  char wbuf[4096] ;
  int symlinks ;
  int resultcode ;
  int *tmp ;
  uid_t userid ;
  uid_t tmp_0 ;
  int *tmp_1 ;
  int *tmp_2 ;
  uid_t userid_0 ;
  uid_t tmp_3 ;
  int *tmp_4 ;
  int *tmp_5 ;
  int *tmp_6 ;
  uid_t userid_1 ;
  uid_t tmp_7 ;
  int *tmp_8 ;
  int *tmp_9 ;
  int *tmp_10 ;
  int *tmp_11 ;
  size_t len ;
  size_t tmp_12 ;
  char *tmp_13 ;
  char *tmp_14 ;
  int *tmp_15 ;
  uid_t userid_2 ;
  uid_t tmp_16 ;
  int *tmp_17 ;
  int *tmp_18 ;
  int *tmp_19 ;
  uid_t userid_3 ;
  uid_t tmp_20 ;
  int *tmp_21 ;
  int *tmp_22 ;
  int *tmp_23 ;
  char *tmp_25 ;
  uid_t userid_4 ;
  uid_t tmp_26 ;
  int *tmp_27 ;
  char *tmp_29 ;
  int *tmp_30 ;
  int *tmp_31 ;
  size_t tmp_32 ;
  size_t tmp_33 ;
  int *tmp_34 ;
  uid_t userid_5 ;
  uid_t tmp_35 ;
  int *tmp_36 ;
  int *tmp_37 ;
  int *tmp_38 ;
  int *tmp_39 ;
  uid_t userid_6 ;
  uid_t tmp_40 ;
  int *tmp_41 ;
  int *tmp_42 ;

  {
  {
// # 103
  symlinks = 0;
// # 112
  tmp = errno_location();
// # 112
  (*tmp) = 0;
// # 120
  fd_0 = open((char/*const*/  *)".", 0);
// # 122
  tmp_1 = errno_location();
  }
// # 122
  if (13 == (*tmp_1)) {
    {
// # 123
    tmp_0 = geteuid();
// # 123
    userid = tmp_0;
// # 124
    delay_signaling();
// # 125
    seteuid(0U);
// # 133
    fd_0 = open((char/*const*/  *)".", 0);
// # 135
    seteuid(userid);
// # 136
    enable_signaling();
    }
  }
// # 141
  if (fd_0 < 0) {
    {
// # 144
    strcpy((char */*   */)resolved,
           (char/*const*/  */*   */)((char/*const*/  *)"."));
    }
// # 145
    return ((char *)((void *)0));
  }
  {
// # 156
  strncpy((char */*   */)resolved,
          (char/*const*/  */*   */)path, 4095U);
// # 157
  (*(resolved + 4095)) = '\0';
  }
  loop: 
  {
// # 159
  q = strrchr((char/*const*/  *)resolved, (int )'/');
  }
// # 160
  if ((unsigned int )q != (unsigned int )((void *)0)) {
    {
// # 161
    p = q + 1;
    }
// # 162
    if ((unsigned int )q == (unsigned int )resolved) {
      {
// # 163
      q = "/";
      }
    } else {
// # 165
      while (1) {
        {
// # 166
        q --;
        }
// # 165
        if ((unsigned int )q > (unsigned int )resolved) {
// # 165
          if (! ((int )(*q) == 47)) {
// # 165
            break;
          }
        } else {
// # 165
          break;
        }
      }
      {
// # 168
      (*(q + 1)) = '\0';
// # 169
      q = resolved;
      }
    }
    {
// # 171
    tmp_2 = errno_location();
// # 171
    (*tmp_2) = 0;
// # 172
    resultcode = chdir((char/*const*/  *)q);
// # 173
    tmp_5 = errno_location();
    }
// # 173
    if (13 == (*tmp_5)) {
      {
// # 174
      tmp_3 = geteuid();
// # 174
      userid_0 = tmp_3;
// # 175
      delay_signaling();
// # 176
      seteuid(0U);
// # 177
      tmp_4 = errno_location();
// # 177
      (*tmp_4) = 0;
// # 178
      resultcode = chdir((char/*const*/  *)q);
// # 179
      seteuid(userid_0);
// # 180
      enable_signaling();
      }
    }
// # 182
    if (resultcode < 0) {
      goto err1;
    }
  } else {
    {
// # 186
    p = resolved;
    }
  }
// # 189
  if ((int )(*p) != 0) {
    {
// # 190
    tmp_6 = errno_location();
// # 190
    (*tmp_6) = 0;
// # 191
    resultcode = lstatextinline((char/*const*/  *)p, & sb);
// # 192
    tmp_9 = errno_location();
    }
// # 192
    if (13 == (*tmp_9)) {
      {
// # 193
      tmp_7 = geteuid();
// # 193
      userid_1 = tmp_7;
// # 194
      delay_signaling();
// # 195
      seteuid(0U);
// # 196
      tmp_8 = errno_location();
// # 196
      (*tmp_8) = 0;
// # 197
      resultcode = lstatextinline((char/*const*/  *)p, & sb);
// # 198
      seteuid(userid_1);
// # 199
      enable_signaling();
      }
    }
// # 201
    if (resultcode == 0) {
// # 203
      if ((sb.st_mode & 61440U) == 40960U) {
        {
// # 204
        symlinks ++;
        }
// # 204
        if (symlinks > 20) {
          {
// # 205
          tmp_10 = errno_location();
// # 205
          (*tmp_10) = 40;
          }
          goto err1;
        }
        {
// # 208
        tmp_11 = errno_location();
// # 208
        (*tmp_11) = 0;
// # 210
        tmp_12 = strlen((char/*const*/  *)p);
// # 210
        len = tmp_12;
// # 211
        tmp_14 = (char *)calloc(len + 1U, sizeof(char ));
// # 211
        tmp_13 = tmp_14;
        }
// # 212
        if ((unsigned int )tmp_13 == (unsigned int )((char *)0)) {
          {
// # 213
          tmp_15 = errno_location();
// # 213
          serrno = (*tmp_15);
          }
          goto err1;
        }
        {
// # 216
        strcpy((char */*   */)tmp_13,
               (char/*const*/  */*   */)((char/*const*/  *)p));
// # 217
        p = tmp_13;
// # 219
        n = readlink((char/*const*/  */*   */)((char/*const*/  *)p),
                     (char */*   */)resolved, 4096U);
// # 220
        tmp_18 = errno_location();
        }
// # 220
        if (13 == (*tmp_18)) {
          {
// # 221
          tmp_16 = geteuid();
// # 221
          userid_2 = tmp_16;
// # 222
          delay_signaling();
// # 223
          seteuid(0U);
// # 224
          tmp_17 = errno_location();
// # 224
          (*tmp_17) = 0;
// # 225
          n = readlink((char/*const*/  */*   */)((char/*const*/  *)p),
                       (char */*   */)resolved, 4096U);
// # 226
          seteuid(userid_2);
// # 227
          enable_signaling();
          }
        }
// # 229
        if (n < 0) {
          {
// # 230
          free((void *)p);
          }
          goto err1;
        }
        {
// # 233
        free((void *)p);
// # 234
        (*(resolved + n)) = '\0';
        }
        goto loop;
      }
// # 238
      if ((sb.st_mode & 61440U) == 16384U) {
        {
// # 239
        tmp_19 = errno_location();
// # 239
        (*tmp_19) = 0;
// # 240
        resultcode = chdir((char/*const*/  *)p);
// # 241
        tmp_22 = errno_location();
        }
// # 241
        if (13 == (*tmp_22)) {
          {
// # 242
          tmp_20 = geteuid();
// # 242
          userid_3 = tmp_20;
// # 243
          delay_signaling();
// # 244
          seteuid(0U);
// # 245
          tmp_21 = errno_location();
// # 245
          (*tmp_21) = 0;
// # 246
          resultcode = chdir((char/*const*/  *)p);
// # 247
          seteuid(userid_3);
// # 248
          enable_signaling();
          }
        }
// # 250
        if (resultcode < 0) {
          goto err1;
        }
        {
// # 252
        p = "";
        }
      }
    }
  }
  {
// # 261
  strcpy((char */*   */)(wbuf),
         (char/*const*/  */*   */)((char/*const*/  *)p));
// # 262
  tmp_23 = errno_location();
// # 262
  (*tmp_23) = 0;
// # 264
  tmp_25 = getcwd(resolved, 4096U);
  }
// # 264
  if ((unsigned int )tmp_25 == (unsigned int )((void *)0)) {
    {
// # 264
    resultcode = 0;
    }
  } else {
    {
// # 264
    resultcode = 1;
    }
  }
  {
// # 272
  tmp_30 = errno_location();
  }
// # 272
  if (13 == (*tmp_30)) {
    {
// # 273
    tmp_26 = geteuid();
// # 273
    userid_4 = tmp_26;
// # 274
    delay_signaling();
// # 275
    seteuid(0U);
// # 276
    tmp_27 = errno_location();
// # 276
    (*tmp_27) = 0;
// # 278
    tmp_29 = getcwd(resolved, 4096U);
    }
// # 278
    if ((unsigned int )tmp_29 == (unsigned int )((void *)0)) {
      {
// # 278
      resultcode = 0;
      }
    } else {
      {
// # 278
      resultcode = 1;
      }
    }
    {
// # 286
    seteuid(userid_4);
// # 287
    enable_signaling();
    }
  }
// # 289
  if (resultcode == 0) {
    goto err1;
  }
// # 296
  if ((int )(*(resolved + 0)) == 47) {
// # 296
    if ((int )(*(resolved + 1)) == 0) {
      {
// # 297
      rootd = 1;
      }
    } else {
      {
// # 299
      rootd = 0;
      }
    }
  } else {
    {
// # 299
    rootd = 0;
    }
  }
// # 301
  if (wbuf[0]) {
    {
// # 302
    tmp_32 = strlen((char/*const*/  *)resolved);
// # 302
    tmp_33 = strlen((char/*const*/  *)(wbuf));
    }
// # 302
    if (((tmp_32 + tmp_33) + (unsigned int )rootd) + 1U > 4096U) {
      {
// # 303
      tmp_31 = errno_location();
// # 303
      (*tmp_31) = 36;
      }
      goto err1;
    }
// # 306
    if (rootd == 0) {
      {
// # 307
      strcat((char */*   */)resolved,
             (char/*const*/  */*   */)((char/*const*/  *)"/"));
      }
    }
    {
// # 308
    strcat((char */*   */)resolved,
           (char/*const*/  */*   */)((char/*const*/  *)(wbuf)));
    }
  }
  {
// # 312
  tmp_34 = errno_location();
// # 312
  (*tmp_34) = 0;
// # 316
  resultcode = fchdir(fd_0);
// # 318
  tmp_37 = errno_location();
  }
// # 318
  if (13 == (*tmp_37)) {
    {
// # 319
    tmp_35 = geteuid();
// # 319
    userid_5 = tmp_35;
// # 320
    delay_signaling();
// # 321
    seteuid(0U);
// # 322
    tmp_36 = errno_location();
// # 322
    (*tmp_36) = 0;
// # 326
    resultcode = fchdir(fd_0);
// # 328
    seteuid(userid_5);
// # 329
    enable_signaling();
    }
  }
// # 331
  if (resultcode < 0) {
    {
// # 332
    tmp_38 = errno_location();
// # 332
    serrno = (*tmp_38);
    }
    goto err2;
  }
  {
// # 338
  close(fd_0);
  }
// # 340
  return (resolved);
  err1: 
  {
// # 342
  tmp_39 = errno_location();
// # 342
  serrno = (*tmp_39);
// # 346
  fchdir(fd_0);
// # 348
  tmp_41 = errno_location();
  }
// # 348
  if (13 == (*tmp_41)) {
    {
// # 349
    tmp_40 = geteuid();
// # 349
    userid_6 = tmp_40;
// # 350
    delay_signaling();
// # 351
    seteuid(0U);
// # 355
    fchdir(fd_0);
// # 357
    seteuid(userid_6);
// # 358
    enable_signaling();
    }
  }
  err2: 
  {
// # 363
  close(fd_0);
// # 364
  tmp_42 = errno_location();
// # 364
  (*tmp_42) = serrno;
  }
// # 366
  return ((char *)((void *)0));
}
}
// # 50 "acl.c"
char *aclbuf   = (char *)((void *)0);
// # 51
static struct aclmember *aclmembers  ;
// # 60
struct aclmember *getaclentry(char *keyword , struct aclmember **next ) 
{ int tmp ;

  {
// # 62
  while (1) {
// # 63
    if ((*next)) {
      {
// # 66
      (*next) = ((*next))->next;
      }
    } else {
      {
// # 64
      (*next) = aclmembers;
      }
    }
// # 62
    if ((*next)) {
      {
// # 62
      tmp = strcasecmp((char/*const*/  *)(((*next))->keyword),
                       (char/*const*/  *)keyword);
      }
// # 62
      if (! tmp) {
// # 62
        break;
      }
    } else {
// # 62
      break;
    }
  }
// # 69
  return ((*next));
}
}
// # 79
void parseacl(void) 
{ char *ptr ;
  char *aclptr ;
  char *line_0 ;
  int cnt ;
  struct aclmember *member ;
  struct aclmember *acltail ;
  char *tmp ;
  int tmp_1 ;

  {
  {
// # 81
  aclptr = aclbuf;
  }
// # 85
  if (aclbuf) {
// # 85
    if (! (*aclbuf)) {
// # 86
      return;
    }
  } else {
// # 86
    return;
  }
  {
// # 88
  aclmembers = (struct aclmember *)((void *)0);
// # 89
  acltail = (struct aclmember *)((void *)0);
  }
// # 91
  while ((int )(*aclptr) != 0) {
    {
// # 92
    line_0 = aclptr;
    }
// # 93
    while (1) {
// # 93
      if ((*aclptr)) {
// # 93
        if (! ((int )(*aclptr) != 10)) {
// # 93
          break;
        }
      } else {
// # 93
        break;
      }
      {
// # 94
      aclptr ++;
      }
    }
    {
// # 95
    tmp = aclptr;
// # 95
    aclptr ++;
// # 95
    (*tmp) = (char )((void *)0);
// # 98
    ptr = strchr((char/*const*/  *)line_0, (int )'#');
    }
// # 98
    if ((unsigned int )ptr != (unsigned int )((void *)0)) {
// # 100
      if ((unsigned int )ptr > (unsigned int )aclbuf) {
// # 100
        if ((int )(*(ptr - 1)) != 92) {
          {
// # 101
          (*ptr) = '\0';
          }
        }
      }
    }
    {
// # 103
    ptr = strtok((char */*   */)line_0,
                 (char/*const*/  */*   */)((char/*const*/  *)" \t"));
    }
// # 104
    if (ptr) {
      {
// # 105
      member = (struct aclmember *)calloc(1U, sizeof(struct aclmember ));
      }
// # 107
      if ((unsigned int )member == (unsigned int )((void *)0)) {
        {
// # 108
        syslog(3, (char/*const*/  *)"calloc error parsing acl");
// # 109
        exit(0);
        }
      }
      {
// # 111 "acl.c"
      strcpy((char */*   */)(member->keyword),
             (char/*const*/  */*   */)((char/*const*/  *)ptr));
// # 112
      cnt = 0;
      }
// # 113
      while (1) {
        {
// # 113
        ptr = strtok((char */*   */)((char *)((void *)0)),
                     (char/*const*/  */*   */)((char/*const*/  *)" \t"));
        }
// # 113
        if (! ((unsigned int )ptr != (unsigned int )((void *)0))) {
// # 113
          break;
        }
// # 114
        if (cnt >= 50) {
          {
// # 115
          syslog(3,
                 (char/*const*/  *)"Too many args (>%d) in ftpaccess: %s %s %s %s %s ...",
                 49, member->keyword, member->arg[0], member->arg[1],
                 member->arg[2], member->arg[3]);
          }
// # 119
          break;
        }
        {
// # 121
        tmp_1 = cnt;
// # 121
        cnt ++;
// # 121
        member->arg[tmp_1] = ptr;
        }
      }
// # 123
      if (acltail) {
        {
// # 124
        acltail->next = member;
        }
      }
      {
// # 125
      acltail = member;
      }
// # 126
      if (! aclmembers) {
        {
// # 127
        aclmembers = member;
        }
      }
    }
  }
// # 130
  return;
}
}
// # 139
int readacl(char *aclpath ) 
{ FILE *aclfile ;
  struct stat finfo ;
  int *tmp ;
  char *tmp_0 ;
  int *tmp_1 ;
  char *tmp_2 ;
  int tmp_3 ;
  int tmp_4 ;
  int *tmp_7 ;
  char *tmp_8 ;
  size_t tmp_9 ;

  {
// # 145
  if (! use_accessfile) {
// # 146
    return (0);
  }
  {
// # 148
  aclfile = fopen((char/*const*/  */*   */)((char/*const*/  *)aclpath),
                  (char/*const*/  */*   */)((char/*const*/  *)"r"));
  {
// # 17 "spec.work"
  if (aclfile != (FILE *)0) {
// # 17
    aclfile->BLAST_FLAG = 1;
  }
  {

  }
  }

  }
// # 148 "acl.c"
  if ((unsigned int )aclfile == (unsigned int )((void *)0)) {
    {
// # 149
    tmp = errno_location();
// # 149
    tmp_0 = strerror((*tmp));
// # 149
    syslog(3, (char/*const*/  *)"cannot open access file %s: %s", aclpath, tmp_0);
    }
// # 151
    return (0);
  }
  {
// # 153
  tmp_3 = fileno(aclfile);
// # 153
  tmp_4 = fstatextinline(tmp_3, & finfo);
  }
// # 153
  if (tmp_4 != 0) {
    {
// # 154
    tmp_1 = errno_location();
// # 154
    tmp_2 = strerror((*tmp_1));
// # 154
    syslog(3, (char/*const*/  *)"cannot fstat access file %s: %s", aclpath,
           tmp_2);
    {
// # 96 "spec.work"
    if (aclfile->BLAST_FLAG == 1) {
// # 97
      aclfile->BLAST_FLAG = 0;
    } else {
// # 98
      error__();
    }
    {

    }
    }
// # 156 "acl.c"
    fclose(aclfile);
    }
// # 157
    return (0);
  }
// # 159
  if (finfo.st_size == 0L) {
    {
// # 160
    aclbuf = (char *)calloc(1U, 1U);
    }
  } else {
    {
// # 163
    aclbuf = (char *)malloc((unsigned int )finfo.st_size + 1U);
    }
// # 163
    if (! aclbuf) {
      {
// # 164
      syslog(3, (char/*const*/  *)"could not malloc aclbuf (%d bytes)",
             finfo.st_size + 1L);
      {
// # 96 "spec.work"
      if (aclfile->BLAST_FLAG == 1) {
// # 97
        aclfile->BLAST_FLAG = 0;
      } else {
// # 98
        error__();
      }
      {

      }
      }
// # 165 "acl.c"
      fclose(aclfile);
      }
// # 166
      return (0);
    }
    {
// # 168
    tmp_9 = fread((void */*   */)((void *)aclbuf),
                    (unsigned int )finfo.st_size, 1U,
                    (FILE */*   */)aclfile);
    }
// # 168
    if (! tmp_9) {
      {
// # 169
      tmp_7 = errno_location();
// # 169
      tmp_8 = strerror((*tmp_7));
// # 169
      syslog(3, (char/*const*/  *)"error reading acl file %s: %s", aclpath,
             tmp_8);
// # 171
      free((void *)aclbuf);
// # 172
      aclbuf = (char *)((void *)0);
      {
// # 96 "spec.work"
      if (aclfile->BLAST_FLAG == 1) {
// # 97
        aclfile->BLAST_FLAG = 0;
      } else {
// # 98
        error__();
      }
      {

      }
      }
// # 173 "acl.c"
      fclose(aclfile);
      }
// # 174
      return (0);
    }
    {
// # 176
    (*(aclbuf + finfo.st_size)) = '\0';
    }
  }
  {

  {
// # 96 "spec.work"
  if (aclfile->BLAST_FLAG == 1) {
// # 97
    aclfile->BLAST_FLAG = 0;
  } else {
// # 98
    error__();
  }
  {

  }
  }
// # 178 "acl.c"
  fclose(aclfile);
  }
// # 179
  return (1);
}
}
// # 72 "private.c"
char *passbuf   = (char *)((void *)0);
// # 73
char groupname[100]  ;
// # 74
int group_given   = 0;
// # 84
struct acgrp *privptr  ;
// # 88
int group_attempts  ;
// # 90
void parsepriv(void) 
{ char *ptr ;
  char *acptr ;
  char *line_0 ;
  char *argv[3] ;
  char *p ;
  char *val ;
  struct acgrp *aptr ;
  struct acgrp *privtail ;
  struct group *gr ;
  int n ;
  char *tmp ;
  char *tmp_0 ;
  gid_t gid ;
  gid_t tmp_1 ;

  {
  {
// # 93
  acptr = passbuf;
// # 95
  privtail = (struct acgrp *)((void *)0);
  }
// # 99
  if (passbuf) {
// # 99
    if (! (*passbuf)) {
// # 100
      return;
    }
  } else {
// # 100
    return;
  }
// # 103
  while ((int )(*acptr) != 0) {
    {
// # 104
    line_0 = acptr;
    }
// # 105
    while (1) {
// # 105
      if ((*acptr)) {
// # 105
        if (! ((int )(*acptr) != 10)) {
// # 105
          break;
        }
      } else {
// # 105
        break;
      }
      {
// # 106
      acptr ++;
      }
    }
    {
// # 107
    tmp = acptr;
// # 107
    acptr ++;
// # 107
    (*tmp) = '\0';
// # 110
    ptr = strchr((char/*const*/  *)line_0, (int )'#');
    }
// # 110
    if ((unsigned int )ptr != (unsigned int )((void *)0)) {
      {
// # 111
      (*ptr) = '\0';
      }
    }
// # 113
    if ((int )(*line_0) == 0) {
// # 114
      continue;
    }
    {
// # 117
    n = 0;
// # 117
    p = line_0;
    }
// # 117
    while (1) {
// # 117
      if (n < 3) {
// # 117
        if (! ((unsigned int )p != (unsigned int )((void *)0))) {
// # 117
          break;
        }
      } else {
// # 117
        break;
      }
      {
// # 118
      tmp_0 = strsep((char **/*   */)(& p),
                       (char/*const*/  */*   */)((char/*const*/  *)":\n"));
// # 118
      val = tmp_0;
// # 119
      argv[n] = val;
      }
// # 120
      if ((int )(*(argv[n] + 0)) == 32) {
        {
// # 121
        argv[n] = (char *)((void *)0);
        }
      } else {
// # 120
        if ((int )(*(argv[n] + 0)) == 0) {
          {
// # 121
          argv[n] = (char *)((void *)0);
          }
        }
      }
      {
// # 117
      n ++;
      }
    }
// # 124
    if (n != 3) {
// # 125
      continue;
    } else {
// # 124
      if ((unsigned int )p != (unsigned int )((void *)0)) {
// # 125
        continue;
      }
    }
// # 127
    if (argv[0]) {
// # 127
      if (argv[2]) {
// # 128
        if ((int )(*(argv[2] + 0)) == 37) {
          {
// # 129
          tmp_1 = (gid_t )atoi((char/*const*/  *)(argv[2] + 1));
// # 129
          gid = tmp_1;
// # 130
          gr = getgrgid(gid);
          }
// # 130
          if ((unsigned int )gr != (unsigned int )((void *)0)) {
            {
// # 131
            aptr = (struct acgrp *)calloc(1U, sizeof(struct acgrp ));
            }
// # 132
            if ((unsigned int )aptr == (unsigned int )((void *)0)) {
              {
// # 133
              syslog(3, (char/*const*/  *)"calloc error in parsepriv");
// # 134
              exit(0);
              }
            }
// # 138 "private.c"
            if (privtail) {
              {
// # 139
              privtail->next = aptr;
              }
            }
            {
// # 140
            privtail = aptr;
            }
// # 141
            if (! privptr) {
              {
// # 142
              privptr = aptr;
              }
            }
            {
// # 144
            strcpy((char */*   */)(aptr->gname),
                   (char/*const*/  */*   */)((char/*const*/  *)argv[0]));
            }
// # 145
            if ((unsigned int )argv[1] == (unsigned int )((void *)0)) {
              {
// # 146
              aptr->gpass[0] = '\0';
              }
            } else {
              {
// # 148
              strcpy((char */*   */)(aptr->gpass),
                     (char/*const*/  */*   */)((char/*const*/  *)argv[1]));
              }
            }
            {
// # 149
            strcpy((char */*   */)(aptr->gr_name),
                   (char/*const*/  */*   */)((char/*const*/  *)gr->gr_name));
// # 150
            aptr->gr_gid = gid;
            }
          }
        } else {
          {
// # 154
          gr = getgrnam((char/*const*/  *)argv[2]);
          }
// # 154
          if ((unsigned int )gr != (unsigned int )((void *)0)) {
            {
// # 155
            aptr = (struct acgrp *)calloc(1U, sizeof(struct acgrp ));
            }
// # 156
            if ((unsigned int )aptr == (unsigned int )((void *)0)) {
              {
// # 157
              syslog(3, (char/*const*/  *)"calloc error in parsepriv");
// # 158
              exit(0);
              }
            }
// # 162 "private.c"
            if (privtail) {
              {
// # 163
              privtail->next = aptr;
              }
            }
            {
// # 164
            privtail = aptr;
            }
// # 165
            if (! privptr) {
              {
// # 166
              privptr = aptr;
              }
            }
            {
// # 168
            strcpy((char */*   */)(aptr->gname),
                   (char/*const*/  */*   */)((char/*const*/  *)argv[0]));
            }
// # 169
            if ((unsigned int )argv[1] == (unsigned int )((void *)0)) {
              {
// # 170
              aptr->gpass[0] = '\0';
              }
            } else {
              {
// # 172
              strcpy((char */*   */)(aptr->gpass),
                     (char/*const*/  */*   */)((char/*const*/  *)argv[1]));
              }
            }
            {
// # 173
            strcpy((char */*   */)(aptr->gr_name),
                   (char/*const*/  */*   */)((char/*const*/  *)argv[2]));
// # 174
            aptr->gr_gid = gr->gr_gid;
            }
          }
        }
        {
// # 177
        endgrent();
        }
      }
    }
  }
// # 180
  return;
}
}
// # 188
void priv_setup(char *path ) 
{ FILE *prvfile ;
  struct stat finfo ;
  int *tmp ;
  char *tmp_0 ;
  int *tmp_1 ;
  int *tmp_2 ;
  char *tmp_3 ;
  int tmp_4 ;
  int tmp_5 ;
  int *tmp_8 ;
  char *tmp_9 ;
  size_t tmp_10 ;

  {
  {
// # 193
  passbuf = (char *)((void *)0);
// # 195
  prvfile = fopen((char/*const*/  */*   */)((char/*const*/  *)path),
                  (char/*const*/  */*   */)((char/*const*/  *)"r"));
  {
// # 17 "spec.work"
  if (prvfile != (FILE *)0) {
// # 17
    prvfile->BLAST_FLAG = 1;
  }
  {

  }
  }

  }
// # 195 "private.c"
  if ((unsigned int )prvfile == (unsigned int )((void *)0)) {
    {
// # 196
    tmp_1 = errno_location();
    }
// # 196
    if ((*tmp_1) != 2) {
      {
// # 197
      tmp = errno_location();
// # 197
      tmp_0 = strerror((*tmp));
// # 197
      syslog(3, (char/*const*/  *)"cannot open private access file %s: %s", path,
             tmp_0);
      }
    }
// # 199
    return;
  }
  {
// # 201
  tmp_4 = fileno(prvfile);
// # 201
  tmp_5 = fstatextinline(tmp_4, & finfo);
  }
// # 201
  if (tmp_5 != 0) {
    {
// # 202
    tmp_2 = errno_location();
// # 202
    tmp_3 = strerror((*tmp_2));
// # 202
    syslog(3, (char/*const*/  *)"cannot fstat private access file %s: %s", path,
           tmp_3);
    {
// # 96 "spec.work"
    if (prvfile->BLAST_FLAG == 1) {
// # 97
      prvfile->BLAST_FLAG = 0;
    } else {
// # 98
      error__();
    }
    {

    }
    }
// # 204 "private.c"
    fclose(prvfile);
    }
// # 205
    return;
  }
// # 207
  if (finfo.st_size == 0L) {
    {
// # 208
    passbuf = (char *)calloc(1U, 1U);
    }
  } else {
    {
// # 211
    passbuf = (char *)malloc((unsigned int )finfo.st_size + 1U);
    }
// # 211
    if (! passbuf) {
      {
// # 212
      syslog(3, (char/*const*/  *)"could not malloc passbuf (%d bytes)",
             finfo.st_size + 1L);
      {
// # 96 "spec.work"
      if (prvfile->BLAST_FLAG == 1) {
// # 97
        prvfile->BLAST_FLAG = 0;
      } else {
// # 98
        error__();
      }
      {

      }
      }
// # 214 "private.c"
      fclose(prvfile);
      }
// # 215
      return;
    }
    {
// # 217
    tmp_10 = fread((void */*   */)((void *)passbuf),
                     (unsigned int )finfo.st_size, 1U,
                     (FILE */*   */)prvfile);
    }
// # 217
    if (! tmp_10) {
      {
// # 218
      tmp_8 = errno_location();
// # 218
      tmp_9 = strerror((*tmp_8));
// # 218
      syslog(3, (char/*const*/  *)"error reading private access file %s: %s",
             path, tmp_9);
      {
// # 96 "spec.work"
      if (prvfile->BLAST_FLAG == 1) {
// # 97
        prvfile->BLAST_FLAG = 0;
      } else {
// # 98
        error__();
      }
      {

      }
      }
// # 220 "private.c"
      fclose(prvfile);
      }
// # 221
      return;
    }
    {
// # 223
    (*(passbuf + finfo.st_size)) = '\0';
    }
  }
  {

  {
// # 96 "spec.work"
  if (prvfile->BLAST_FLAG == 1) {
// # 97
    prvfile->BLAST_FLAG = 0;
  } else {
// # 98
    error__();
  }
  {

  }
  }
// # 225 "private.c"
  fclose(prvfile);
// # 226
  parsepriv();
  }
// # 227
  return;
}
}
// # 236
static struct acgrp *priv_getent(char *group ) 
{ struct acgrp *ptr ;
  int tmp ;

  {
  {
// # 240
  ptr = privptr;
  }
// # 240
  while (ptr) {
    {
// # 241
    tmp = strcasecmp((char/*const*/  *)group, (char/*const*/  *)(ptr->gname));
    }
// # 241
    if (! tmp) {
// # 242
      return (ptr);
    }
    {
// # 240
    ptr = ptr->next;
    }
  }
// # 244
  return ((struct acgrp *)((void *)0));
}
}
// # 253
void priv_group(char *group ) 
{ size_t tmp ;

  {
  {
// # 255
  tmp = strlen((char/*const*/  *)group);
  }
// # 255
  if ((int )tmp < 100) {
    {
// # 256
    strncpy((char */*   */)(groupname),
            (char/*const*/  */*   */)((char/*const*/  *)group), 100U);
// # 257
    group_given = 1;
// # 258
    reply(200, "Request for access to group %s accepted.", group);
    }
  } else {
    {
// # 261
    group_given = 0;
// # 262
    reply(500, "Illegal group name");
    }
  }
// # 265
  return;
}
}
// # 274
void priv_gpass(char *gpass ) 
{ char *xgpass ;
  struct acgrp *grp ;
  uid_t uid ;
  gid_t gid ;
  int tmp ;

  {
  {
// # 276
  xgpass = (char *)((void *)0);
  }
// # 281
  if (group_given == 0) {
    {
// # 282
    reply(503, "Give group name with SITE GROUP first.");
    }
// # 283
    return;
  }
  {
// # 287
  group_given = 0;
// # 289
  grp = priv_getent(groupname);
  }
// # 290
  if (passbuf) {
// # 290
    if (gpass) {
// # 290
      if ((int )(*gpass) != 0) {
// # 290
        if (grp) {
// # 290
          if ((int )grp->gpass[0] != 0) {
            {
// # 294
            xgpass = crypt((char/*const*/  *)gpass, (char/*const*/  *)(grp->gpass));
            }
          }
        }
      }
    }
  }
// # 297
  if ((unsigned int )gpass != (unsigned int )((void *)0)) {
// # 297
    if ((int )(*gpass) != 0) {
// # 297
      if ((unsigned int )grp != (unsigned int )((void *)0)) {
// # 297
        if ((int )grp->gpass[0] != 0) {
          {
// # 297
          tmp = strcmp((char/*const*/  *)xgpass, (char/*const*/  *)(grp->gpass));
          }
// # 297
          if (! (tmp == 0)) {
            goto _L_5;
          }
        } else {
          goto _L_5;
        }
      } else {
        goto _L_5;
      }
    } else {
      goto _L_5;
    }
  } else {
    _L_5: 
// # 297
    if ((unsigned int )gpass == (unsigned int )((void *)0)) {
      goto _L_1;
    } else {
// # 297
      if ((int )(*gpass) == 0) {
        _L_1: 
// # 297
        if ((unsigned int )grp != (unsigned int )((void *)0)) {
// # 297
          if (! ((int )grp->gpass[0] == 0)) {
            goto _L_0;
          }
        } else {
          goto _L_0;
        }
      } else {
        _L_0: 
        {
// # 307
        reply(530, "Group access request incorrect.");
// # 308
        grp = (struct acgrp *)((void *)0);
// # 309
        group_attempts ++;
        }
// # 309
        if (group_attempts >= lgi_failure_threshold) {
          {
// # 310
          syslog(5,
                 (char/*const*/  *)"repeated group access failures from %s, group %s",
                 remoteident, groupname);
// # 313
          exit(0);
          }
        }
        {
// # 315 "private.c"
        sleep((unsigned int )group_attempts);
        }
// # 316
        return;
      }
    }
  }
  {
// # 319
  uid = geteuid();
// # 320
  gid = grp->gr_gid;
// # 322
  delay_signaling();
// # 323
  seteuid(0U);
// # 324
  setegid(gid);
// # 325
  seteuid(uid);
// # 326
  enable_signaling();
// # 328
  reply(200, "Group access enabled.");
// # 329
  group_attempts = 0;
  }
// # 330
  return;
}
}
// # 40 "authenticate.c"
unsigned int timeout_rfc931 ;
// # 48
int wu_authenticate(void) 
{ char *user_0 ;

  {
  {
// # 56
  authenticated = 0;
// # 58
  user_0 = "*";
// # 73
  strncpy((char */*   */)(authuser),
          (char/*const*/  */*   */)((char/*const*/  *)user_0),
          sizeof(authuser));
// # 74
  authuser[99] = '\0';
  }
// # 75
  return (0);
}
}
// # 55 "conversions.c"
char *convbuf   = (char *)((void *)0);
// # 63
struct str2int c_list[7]; /*  = {{"T_REG", 1}, {"T_ASCII", 4}, {"T_DIR", 2},
                              {"O_COMPRESS", 1}, {"O_UNCOMPRESS", 2},
                              {"O_TAR", 4}, {(char *)((void *)0), 0}}; */
// # 74
static int conv(char *str ) 
{ int rc ;
  int counter ;
  char * /* attribute__((rostring, nullterm__)) */ tmp ;

  {
  {
// # 76
  rc = 0;
  }
// # 81
  if (str) {
    {
// # 82
    counter = 0;
    }
// # 82
    while (c_list[counter].string) {
      {
// # 83
      tmp = strstr((char/*const*/  */* attribute__((rostring,
                   nullterm__)) */)((char/*const*/  *)str),
                   (char/*const*/  */* attribute__((rostring,
                   nullterm__)) */)((char/*const*/  *)c_list[counter].string));
      }
// # 83
      if (tmp) {
        {
// # 84
        rc = rc | c_list[counter].value;
        }
      }
      {
// # 82
      counter ++;
      }
    }
  }
// # 85
  return (rc);
}
}
// # 88
static int readconv(char *convpath ) 
{ FILE *convfile ;
  struct stat finfo ;
  int *tmp ;
  char *tmp_0 ;
  int *tmp_1 ;
  int *tmp_2 ;
  char *tmp_3 ;
  int tmp_4 ;
  int tmp_5 ;
  int *tmp_8 ;
  char *tmp_9 ;
  size_t tmp_10 ;

  {
  {
// # 93
  convfile = fopen((char/*const*/  */*   */)((char/*const*/  *)convpath),
                   (char/*const*/  */*   */)((char/*const*/  *)"r"));
  {
// # 17 "spec.work"
  if (convfile != (FILE *)0) {
// # 17
    convfile->BLAST_FLAG = 1;
  }
  {

  }
  }

  }
// # 93 "conversions.c"
  if ((unsigned int )convfile == (unsigned int )((void *)0)) {
    {
// # 94
    tmp_1 = errno_location();
    }
// # 94
    if ((*tmp_1) != 2) {
      {
// # 95
      tmp = errno_location();
// # 95
      tmp_0 = strerror((*tmp));
// # 95
      syslog(3, (char/*const*/  *)"cannot open conversion file %s: %s", convpath,
             tmp_0);
      }
    }
// # 97
    return (0);
  }
  {
// # 99
  tmp_4 = fileno(convfile);
// # 99
  tmp_5 = fstatextinline(tmp_4, & finfo);
  }
// # 99
  if (tmp_5 != 0) {
    {
// # 100
    tmp_2 = errno_location();
// # 100
    tmp_3 = strerror((*tmp_2));
// # 100
    syslog(3, (char/*const*/  *)"cannot fstat conversion file %s: %s", convpath,
           tmp_3);
    {
// # 96 "spec.work"
    if (convfile->BLAST_FLAG == 1) {
// # 97
      convfile->BLAST_FLAG = 0;
    } else {
// # 98
      error__();
    }
    {

    }
    }
// # 102 "conversions.c"
    fclose(convfile);
    }
// # 103
    return (0);
  }
// # 105
  if (finfo.st_size == 0L) {
    {
// # 106
    convbuf = (char *)calloc(1U, 1U);
    }
  } else {
    {
// # 109
    convbuf = (char *)malloc((unsigned int )finfo.st_size + 1U);
    }
// # 109
    if (! convbuf) {
      {
// # 110
      syslog(3, (char/*const*/  *)"could not malloc convbuf (%d bytes)",
             finfo.st_size + 1L);
      {
// # 96 "spec.work"
      if (convfile->BLAST_FLAG == 1) {
// # 97
        convfile->BLAST_FLAG = 0;
      } else {
// # 98
        error__();
      }
      {

      }
      }
// # 111 "conversions.c"
      fclose(convfile);
      }
// # 112
      return (0);
    }
    {
// # 114
    tmp_10 = fread((void */*   */)((void *)convbuf),
                     (unsigned int )finfo.st_size, 1U,
                     (FILE */*   */)convfile);
    }
// # 114
    if (! tmp_10) {
      {
// # 115
      tmp_8 = errno_location();
// # 115
      tmp_9 = strerror((*tmp_8));
// # 115
      syslog(3, (char/*const*/  *)"error reading conv file %s: %s", convpath,
             tmp_9);
// # 117
      convbuf = (char *)((void *)0);
      {
// # 96 "spec.work"
      if (convfile->BLAST_FLAG == 1) {
// # 97
        convfile->BLAST_FLAG = 0;
      } else {
// # 98
        error__();
      }
      {

      }
      }
// # 118 "conversions.c"
      fclose(convfile);
      }
// # 119
      return (0);
    }
    {
// # 121
    (*(convbuf + finfo.st_size)) = '\0';
    }
  }
  {

  {
// # 96 "spec.work"
  if (convfile->BLAST_FLAG == 1) {
// # 97
    convfile->BLAST_FLAG = 0;
  } else {
// # 98
    error__();
  }
  {

  }
  }
// # 123 "conversions.c"
  fclose(convfile);
  }
// # 124
  return (1);
}
}
// # 127
static void parseconv(void) 
{ char *ptr ;
  char *convptr ;
  char *line_0 ;
  char *argv[8] ;
  char *p ;
  char *val ;
  struct convert *cptr ;
  struct convert *cvttail ;
  int n ;
  char *tmp ;
  char *tmp_0 ;

  {
  {
// # 130
  convptr = convbuf;
// # 132
  cvttail = (struct convert *)((void *)0);
  }
// # 135
  if (convbuf) {
// # 135
    if (! (*convbuf)) {
// # 136
      return;
    }
  } else {
// # 136
    return;
  }
// # 139
  while ((int )(*convptr) != 0) {
    {
// # 140
    line_0 = convptr;
    }
// # 141
    while (1) {
// # 141
      if ((*convptr)) {
// # 141
        if (! ((int )(*convptr) != 10)) {
// # 141
          break;
        }
      } else {
// # 141
        break;
      }
      {
// # 142
      convptr ++;
      }
    }
    {
// # 143
    tmp = convptr;
// # 143
    convptr ++;
// # 143
    (*tmp) = '\0';
// # 146
    ptr = strchr((char/*const*/  *)line_0, (int )'#');
    }
// # 146
    if ((unsigned int )ptr != (unsigned int )((void *)0)) {
      {
// # 147
      (*ptr) = '\0';
      }
    }
// # 149
    if ((int )(*line_0) == 0) {
// # 150
      continue;
    }
    {
// # 153
    n = 0;
// # 153
    p = line_0;
    }
// # 153
    while (1) {
// # 153
      if (n < 8) {
// # 153
        if (! ((unsigned int )p != (unsigned int )((void *)0))) {
// # 153
          break;
        }
      } else {
// # 153
        break;
      }
      {
// # 154
      tmp_0 = strsep((char **/*   */)(& p),
                       (char/*const*/  */*   */)((char/*const*/  *)":\n"));
// # 154
      val = tmp_0;
// # 155
      argv[n] = val;
      }
// # 156
      if ((int )(*(argv[n] + 0)) == 32) {
        {
// # 157
        argv[n] = (char *)((void *)0);
        }
      } else {
// # 156
        if ((int )(*(argv[n] + 0)) == 0) {
          {
// # 157
          argv[n] = (char *)((void *)0);
          }
        }
      }
      {
// # 153
      n ++;
      }
    }
// # 160
    if (n != 8) {
// # 161
      continue;
    } else {
// # 160
      if ((unsigned int )p != (unsigned int )((void *)0)) {
// # 161
        continue;
      }
    }
// # 164
    if (argv[0]) {
      _L_1: 
// # 164
      if (argv[4]) {
// # 164
        if (! argv[7]) {
// # 165
          continue;
        }
      } else {
// # 165
        continue;
      }
    } else {
// # 164
      if (argv[1]) {
        goto _L_1;
      } else {
// # 164
        if (argv[2]) {
          goto _L_1;
        } else {
// # 164
          if (argv[3]) {
            goto _L_1;
          } else {
// # 165
            continue;
          }
        }
      }
    }
    {
// # 168
    cptr = (struct convert *)calloc(1U, sizeof(struct convert ));
    }
// # 170
    if ((unsigned int )cptr == (unsigned int )((void *)0)) {
      {
// # 171
      syslog(3, (char/*const*/  *)"calloc error parsing ftpconversions");
// # 172
      exit(0);
      }
    }
// # 174 "conversions.c"
    if (cvttail) {
      {
// # 175
      cvttail->next = cptr;
      }
    }
    {
// # 176
    cvttail = cptr;
    }
// # 177
    if (! cvtptr) {
      {
// # 178
      cvtptr = cptr;
      }
    }
    {
// # 180
    cptr->stripprefix = argv[0];
// # 181
    cptr->stripfix = argv[1];
// # 182
    cptr->prefix = argv[2];
// # 183
    cptr->postfix = argv[3];
// # 184
    cptr->external_cmd = argv[4];
// # 185
    cptr->types = conv(argv[5]);
// # 186
    cptr->options = conv(argv[6]);
// # 187
    cptr->name = argv[7];
    }
  }
// # 189
  return;
}
}
// # 191
void conv_init(void) 
{ int tmp ;

  {
  {
// # 197
  tmp = readconv(path_cvt);
  }
// # 197
  if (tmp < 0) {
// # 198
    return;
  }
  {
// # 199
  parseconv();
  }
// # 200
  return;
}
}
// # 112 "paths.c"
void setup_paths(void) 
{ 

  {
  {
// # 132
  strcpy((char */*   */)(path_ftpaccess),
         (char/*const*/  */*   */)((char/*const*/  *)"/etc/ftpaccess"));
// # 133
  strcpy((char */*   */)(path_ftpusers),
         (char/*const*/  */*   */)((char/*const*/  *)"/etc/ftpusers"));
// # 134
  strcpy((char */*   */)(path_private),
         (char/*const*/  */*   */)((char/*const*/  *)"/etc/ftpgroups"));
// # 135
  strcpy((char */*   */)(path_cvt),
         (char/*const*/  */*   */)((char/*const*/  *)"/etc/ftpconversions"));
// # 136
  strcpy((char */*   */)(logfile),
         (char/*const*/  */*   */)((char/*const*/  *)"/var/log/xferlog"));
  }
// # 230
  return;
}
}
// # 54 "sigfix.c"
int enable_signaling(void) 
{ 

  {
// # 65
  return (0);
}
}
// # 69
int delay_signaling(void) 
{ 

  {
// # 80
  return (0);
}
}
// # 83 "routevector.c"
static struct sockaddr_in *vector_ptr   = (struct sockaddr_in *)((void *)0);
// # 134
static struct v_index *VECTORS   = (struct v_index *)((void *)0);
// # 135
static struct v_ports *PORTS   = (struct v_ports *)((void *)0);
// # 143
static struct v_index *initvectstruct(int num ) ;
// # 144
static struct v_ports *initportstruct(int num ) ;
// # 145
static void makeportentry(v_paddr *p , u_long entry , u_short s_sig ,
                          char *minport_in , char *maxport_in ) ;
// # 146
static void makevectentry(v_addr *p , u_long external_identity , u_long vector ,
                          u_short s_sig ) ;
// # 147
static void addportentry(char *address_in , char *minport_in , char *maxport_in ) ;
// # 148
static void addvectentry(char *external_identity_in , char *vector_in ) ;
// # 149
static void initportvectors(void) ;
// # 150
static int addr_cmp(u_long s1 , u_short s1_sig , u_long s2 , u_short s2_sig ) ;
// # 151
static int addr_smatch(u_long s1 , u_long s2 , u_short shift_in ) ;
// # 152
static v_paddr *find_passive_port_entry(u_long addr ) ;
// # 153
static v_addr *find_passive_vect_entry(u_long addr ) ;
// # 155
int routevector(void) 
{ int vect_addr_set ;
  u_long entry ;
  v_addr *vaddr ;
  register unsigned int v ;
  register unsigned int x ;
  int tmp ;
  register unsigned int v_0 ;
  register unsigned int x_0 ;
  int tmp_0 ;

  {
  {
// # 161
  vect_addr_set = 0;
// # 163
  initportvectors();
  }
// # 164
  if ((unsigned int )VECTORS != (unsigned int )((void *)0)) {
    {
// # 165
    x = his_addr.sin_addr.s_addr;
// # 165
    tmp = __builtin_constant_p((int )x);
    }
// # 165
    if (tmp) {
      {
// # 165
      v = ((((x & 4278190080U) >> 24) | ((x & 16711680U) >> 8)) |
             ((x & 65280U) << 8)) | ((x & 255U) << 24);
      }
    } else {
      {
// # 165
      asm  ("rorw $8, %w0;"
                "rorl $16, %0;"
                "rorw $8, %w0": "=r" (v): "0" (x): "cc");
      }
    }
    {
// # 165
    entry = (unsigned long )v;
    }
// # 166
    if ((int )entry != -1) {
      {
// # 167
      vaddr = find_passive_vect_entry(entry);
      }
// # 168
      if ((unsigned int )vaddr != (unsigned int )((void *)0)) {
        {
// # 169
        x_0 = (unsigned int )vaddr->s_external_identity;
// # 169
        tmp_0 = __builtin_constant_p((int )x_0);
        }
// # 169
        if (tmp_0) {
          {
// # 169
          v_0 = ((((x_0 & 4278190080U) >> 24) |
                      ((x_0 & 16711680U) >> 8)) | ((x_0 & 65280U) << 8)) |
                    ((x_0 & 255U) << 24);
          }
        } else {
          {
// # 169
          asm  ("rorw $8, %w0;"
                    "rorl $16, %0;"
                    "rorw $8, %w0": "=r" (v_0): "0" (x_0): "cc");
          }
        }
        {
// # 169
        vect_addr.sin_addr.s_addr = v_0;
// # 170
        vect_addr.sin_family = (unsigned short )2;
// # 171
        vect_addr_set = 1;
// # 172
        vector_ptr = & vect_addr;
        }
      }
    }
  }
// # 183
  return (vect_addr_set);
}
}
// # 188
void checkports(void) 
{ u_long entry ;
  v_paddr *addr ;

  {
  {
// # 193
  passive_port_min = -1;
// # 194
  passive_port_max = -1;
  }
// # 195
  if ((unsigned int )PORTS != (unsigned int )((void *)0)) {
    {
// # 196
    entry = (unsigned long )his_addr.sin_addr.s_addr;
    }
// # 197
    if ((int )entry != -1) {
      {
// # 198
      addr = find_passive_port_entry(entry);
      }
// # 199
      if ((unsigned int )addr != (unsigned int )((void *)0)) {
        {
// # 200
        passive_port_min = addr->minport;
// # 201
        passive_port_max = addr->maxport;
        }
      }
    }
  }
// # 207
  return;
}
}
// # 211
static struct v_index *initvectstruct(int num ) 
{ int i ;
  v_addr *ptr ;
  v_addr **index_0 ;
  v_index *v ;
  register unsigned int v1 ;
  register unsigned int x ;
  unsigned int tmp ;
  int tmp_0 ;
  register unsigned int v_0 ;
  register unsigned int x_0 ;
  unsigned int tmp_1 ;
  int tmp_2 ;
  v_addr **tmp_3 ;
  v_addr *tmp_4 ;

  {
  {
// # 217
  v = (v_index *)malloc(sizeof(v_index ));
  }
// # 217
  if ((unsigned int )v == (unsigned int )((v_index *)((void *)0))) {
    {
// # 218
    syslog(6, (char/*const*/  *)"ERROR allocating memory for index record");
// # 219
    perror_reply(421, "Local resource failure: malloc");
// # 220
    dologout(1);
    }
  } else {
    {
// # 223
    v->count = (unsigned short )0;
// # 224
    v->slots = (unsigned short )0;
// # 225
    v->index = (v_addr **)((void *)0);
// # 226
    v->memory = (v_addr *)malloc(sizeof(v_addr ) * (unsigned int )num);
    }
// # 226
    if ((unsigned int )v->memory == (unsigned int )((v_addr *)((void *)0))) {
      {
// # 227
      syslog(6, (char/*const*/  *)"ERROR allocating memory for port addresses");
// # 228
      perror_reply(421, "Local resource failure: malloc");
// # 229
      dologout(1);
      }
    } else {
      {
// # 232
      v->index = (v_addr **)malloc(sizeof(v_addr *) * (unsigned int )num);
      }
// # 232
      if ((unsigned int )v->index == (unsigned int )((v_addr **)((void *)0))) {
        {
// # 233
        syslog(6, (char/*const*/  *)"ERROR allocating memory for vector index");
// # 234
        perror_reply(421, "Local resource failure: malloc");
// # 235
        dologout(1);
        }
      } else {
        {
// # 238
        v->slots = (unsigned short )num;
// # 239
        i = 0;
// # 239
        ptr = v->memory;
// # 239
        index_0 = v->index;
        }
// # 239
        while (i < num) {
          {
// # 240
          tmp = inet_addr((char/*const*/  *)"0.0.0.0");
// # 240
          x = tmp;
// # 240
          tmp_0 = __builtin_constant_p((int )x);
          }
// # 240
          if (tmp_0) {
            {
// # 240
            v1 = ((((x & 4278190080U) >> 24) | ((x & 16711680U) >> 8)) |
                   ((x & 65280U) << 8)) | ((x & 255U) << 24);
            }
          } else {
            {
// # 240
            asm  ("rorw $8, %w0;"
                      "rorl $16, %0;"
                      "rorw $8, %w0": "=r" (v1): "0" (x): "cc");
            }
          }
          {
// # 240
          ptr->s_external_identity = (unsigned long )v1;
// # 241
          tmp_1 = inet_addr((char/*const*/  *)"0.0.0.0");
// # 241
          x_0 = tmp_1;
// # 241
          tmp_2 = __builtin_constant_p((int )x_0);
          }
// # 241
          if (tmp_2) {
            {
// # 241
            v_0 = ((((x_0 & 4278190080U) >> 24) |
                        ((x_0 & 16711680U) >> 8)) |
                       ((x_0 & 65280U) << 8)) | ((x_0 & 255U) << 24);
            }
          } else {
            {
// # 241
            asm  ("rorw $8, %w0;"
                      "rorl $16, %0;"
                      "rorw $8, %w0": "=r" (v_0): "0" (x_0): "cc");
            }
          }
          {
// # 241
          ptr->s_vector = (unsigned long )v_0;
// # 242
          ptr->s_sig = (unsigned short )0;
// # 243
          tmp_3 = index_0;
// # 243
          index_0 ++;
// # 243
          tmp_4 = ptr;
// # 243
          ptr ++;
// # 243
          (*tmp_3) = tmp_4;
// # 239
          i ++;
          }
        }
      }
    }
  }
// # 248
  return (v);
}
}
// # 253
static struct v_ports *initportstruct(int num ) 
{ int i ;
  v_paddr *ptr ;
  v_ports *v ;
  register unsigned int v1 ;
  register unsigned int x ;
  unsigned int tmp ;
  int tmp_0 ;

  {
  {
// # 259
  v = (v_ports *)malloc(sizeof(v_ports ));
  }
// # 259
  if ((unsigned int )v == (unsigned int )((v_ports *)((void *)0))) {
    {
// # 260
    syslog(6, (char/*const*/  *)"ERROR allocating memory for index record");
// # 261
    perror_reply(421, "Local resource failure: malloc");
// # 262
    dologout(1);
    }
  } else {
    {
// # 265
    v->slots = (unsigned short )0;
// # 266
    v->count = (unsigned short )0;
// # 267
    v->index = (v_paddr **)((void *)0);
// # 268
    v->memory = (v_paddr *)malloc(sizeof(v_paddr ) * (unsigned int )(num + 1));
    }
// # 268
    if ((unsigned int )v->memory == (unsigned int )((v_paddr *)((void *)0))) {
      {
// # 269
      syslog(6, (char/*const*/  *)"ERROR allocating memory for port addresses");
// # 270
      perror_reply(421, "Local resource failure: malloc");
// # 271
      dologout(1);
      }
    } else {
      {
// # 274
      v->index = (v_paddr **)malloc(sizeof(v_paddr *) * (unsigned int )num);
      }
// # 274
      if ((unsigned int )v->index == (unsigned int )((v_paddr **)((void *)0))) {
        {
// # 275
        syslog(6, (char/*const*/  *)"ERROR allocating memory for port index");
// # 276
        perror_reply(421, "Local resource failure: malloc");
// # 277
        dologout(1);
        }
      } else {
        {
// # 280
        v->slots = (unsigned short )num;
// # 281
        i = 0;
// # 281
        ptr = v->memory;
        }
// # 281
        while (i < num) {
          {
// # 282
          (*(v->index + i)) = ptr;
// # 283
          tmp = inet_addr((char/*const*/  *)"0.0.0.0");
// # 283
          x = tmp;
// # 283
          tmp_0 = __builtin_constant_p((int )x);
          }
// # 283
          if (tmp_0) {
            {
// # 283
            v1 = ((((x & 4278190080U) >> 24) | ((x & 16711680U) >> 8)) |
                   ((x & 65280U) << 8)) | ((x & 255U) << 24);
            }
          } else {
            {
// # 283
            asm  ("rorw $8, %w0;"
                      "rorl $16, %0;"
                      "rorw $8, %w0": "=r" (v1): "0" (x): "cc");
            }
          }
          {
// # 283
          ptr->s_address = (unsigned long )v1;
// # 284
          ptr->minport = -1;
// # 285
          ptr->maxport = -1;
// # 286
          ptr->s_sig = (unsigned short )0;
// # 281
          i ++;
// # 281
          ptr ++;
          }
        }
      }
    }
  }
// # 291
  return (v);
}
}
// # 296
static void makeportentry(v_paddr *p , u_long entry , u_short s_sig ,
                          char *minport_in , char *maxport_in ) 
{ 

  {
  {
// # 298
  p->s_address = entry;
// # 299
  p->s_sig = s_sig;
// # 300
  p->minport = atoi((char/*const*/  *)minport_in);
// # 301
  p->maxport = atoi((char/*const*/  *)maxport_in);
  }
// # 303
  if (p->maxport < p->minport) {
    {
// # 304
    p->minport = -1;
// # 305
    p->maxport = -1;
    }
  }
// # 307
  return;
}
}
// # 310
static void makevectentry(v_addr *p , u_long external_identity , u_long vector ,
                          u_short s_sig ) 
{ 

  {
  {
// # 312
  p->s_external_identity = external_identity;
// # 313
  p->s_vector = vector;
// # 314
  p->s_sig = s_sig;
  }
// # 315
  return;
}
}
// # 319
static void addportentry(char *address_in , char *minport_in , char *maxport_in ) 
{ u_long entry ;
  int cmp ;
  u_short s_sig ;
  char *s1 ;
  char *s2 ;
  char addrstr[65] ;
  register unsigned short i ;
  register unsigned short fnd ;
  v_paddr *vp ;
  v_paddr *p1 ;
  register unsigned int v ;
  register unsigned int x ;
  unsigned int tmp_0 ;
  int tmp_1 ;
  size_t tmp_2 ;

  {
  {
// # 327
  s_sig = (unsigned short )0;
  }
// # 329
  if ((unsigned int )PORTS == (unsigned int )((void *)0)) {
    {
// # 330
    syslog(6, (char/*const*/  *)"ERROR port index addition, invalid ptr");
// # 331
    perror_reply(421, "Local resource failure: malloc");
// # 332
    dologout(1);
    }
  } else {
    {
// # 335
    tmp_2 = strlen((char/*const*/  *)address_in);
    }
// # 335
    if (tmp_2 > 64U) {
      {
// # 336
      syslog(6, (char/*const*/  *)"ERROR ftpaccess port entry<%s> too large",
             address_in);
      }
    } else {
      {
// # 341
      i = (unsigned short )0;
      }
// # 341
      while ((int )i < 64) {
        {
// # 342
        addrstr[i] = '\0';
// # 341
        i = (unsigned short )((int )i + 1);
        }
      }
      {
// # 343
      s1 = address_in;
// # 343
      s2 = addrstr;
      }
// # 343
      while (1) {
// # 343
        if ((*s1)) {
// # 343
          if (! ((int )(*s1) != 47)) {
// # 343
            break;
          }
        } else {
// # 343
          break;
        }
        {
// # 344
        (*s2) = (*s1);
// # 343
        s1 ++;
// # 343
        s2 ++;
        }
      }
      {
// # 345
      (*s2) = '\0';
      }
// # 346
      if ((int )(*s1) == 47) {
        {
// # 347
        s1 ++;
        }
// # 348
        if ((*s1)) {
          {
// # 349
          s_sig = (u_short )atoi((char/*const*/  *)s1);
          }
        }
      }
      {
// # 351
      tmp_0 = inet_addr((char/*const*/  *)(addrstr));
// # 351
      x = tmp_0;
// # 351
      tmp_1 = __builtin_constant_p((int )x);
      }
// # 351
      if (tmp_1) {
        {
// # 351
        v = ((((x & 4278190080U) >> 24) | ((x & 16711680U) >> 8)) |
               ((x & 65280U) << 8)) | ((x & 255U) << 24);
        }
      } else {
        {
// # 351
        asm  ("rorw $8, %w0;"
                  "rorl $16, %0;"
                  "rorw $8, %w0": "=r" (v): "0" (x): "cc");
        }
      }
      {
// # 351
      entry = (unsigned long )v;
      }
// # 351
      if ((int )entry == -1) {
        {
// # 352
        syslog(6, (char/*const*/  *)"ERROR ftpaccess port entry<%s> invalid",
               address_in);
        }
      } else {
        {
// # 354
        i = (unsigned short )0;
// # 354
        fnd = (unsigned short )0;
        }
// # 354
        while (1) {
// # 354
          if ((int )i < (int )PORTS->count) {
// # 354
            if ((int )fnd == 0) {
// # 354
              if (! (entry != 0UL)) {
// # 354
                break;
              }
            } else {
// # 354
              break;
            }
          } else {
// # 354
            break;
          }
          {
// # 355
          vp = (*(PORTS->index + (int )i));
// # 356
          cmp = addr_cmp(vp->s_address, vp->s_sig, entry, s_sig);
          }
// # 357
          if (cmp == 0) {
            {
// # 358
            fnd = (unsigned short )1;
// # 359
            makeportentry(vp, entry, s_sig, minport_in, maxport_in);
            }
          } else {
// # 361
            if (cmp > 0) {
              {
// # 363
              p1 = (*(PORTS->index + (int )PORTS->count));
              }
// # 363
              while ((unsigned int )p1 >= (unsigned int )vp) {
                {
// # 364
                (*p1) = (*(p1 - 1));
// # 363
                p1 --;
                }
              }
              {
// # 365
              fnd = (unsigned short )2;
// # 366
              makeportentry(vp, entry, s_sig, minport_in, maxport_in);
// # 367
              PORTS->count = (unsigned short )((int )PORTS->count + 1);
              }
            }
          }
          {
// # 354
          i = (unsigned short )((int )i + 1);
          }
        }
// # 370
        if ((int )fnd == 0) {
          {
// # 371
          makeportentry((*(PORTS->index + (int )PORTS->count)), entry, s_sig,
                        minport_in, maxport_in);
// # 372
          PORTS->count = (unsigned short )((int )PORTS->count + 1);
          }
        }
// # 374
        if ((int )i == (int )PORTS->slots) {
          {
// # 375
          syslog(6,
                 (char/*const*/  *)"ERROR bad slot count  for port index record");
// # 376
          perror_reply(421, "Local resource failure: malloc");
// # 377
          dologout(1);
          }
        }
      }
    }
  }
// # 382
  return;
}
}
// # 386
static void addvectentry(char *external_identity_in , char *vector_in ) 
{ u_long external_identity ;
  u_long vector ;
  int cmp ;
  u_short s_sig ;
  char *s1 ;
  char *s2 ;
  char addrstr[65] ;
  register unsigned short i ;
  register unsigned short fnd ;
  v_addr *vp ;
  v_addr *p1 ;
  register unsigned int v ;
  register unsigned int x ;
  unsigned int tmp_0 ;
  int tmp_1 ;
  register unsigned int v_0 ;
  register unsigned int x_0 ;
  unsigned int tmp_2 ;
  int tmp_3 ;
  size_t tmp_4 ;
  size_t tmp_5 ;

  {
  {
// # 394
  s_sig = (unsigned short )0;
  }
// # 396
  if ((unsigned int )VECTORS == (unsigned int )((void *)0)) {
    {
// # 397
    syslog(6, (char/*const*/  *)"ERROR vector index addition, invalid ptr");
// # 398
    perror_reply(421, "Local resource failure: malloc");
// # 399
    dologout(1);
    }
  } else {
    {
// # 402
    tmp_5 = strlen((char/*const*/  *)external_identity_in);
    }
// # 402
    if (tmp_5 > 64U) {
      {
// # 403
      syslog(6, (char/*const*/  *)"ERROR ftpaccess passive entry <%s> to large",
             external_identity_in);
      }
    } else {
      {
// # 405
      tmp_4 = strlen((char/*const*/  *)vector_in);
      }
// # 405
      if (tmp_4 > 64U) {
        {
// # 406
        syslog(6, (char/*const*/  *)"ERROR ftpaccess vector entry<%s> to large",
               vector_in);
        }
      } else {
        {
// # 411
        i = (unsigned short )0;
        }
// # 411
        while ((int )i < 64) {
          {
// # 412
          addrstr[i] = '\0';
// # 411
          i = (unsigned short )((int )i + 1);
          }
        }
        {
// # 413
        s1 = vector_in;
// # 413
        s2 = addrstr;
        }
// # 413
        while (1) {
// # 413
          if ((*s1)) {
// # 413
            if (! ((int )(*s1) != 47)) {
// # 413
              break;
            }
          } else {
// # 413
            break;
          }
          {
// # 414
          (*s2) = (*s1);
// # 413
          s1 ++;
// # 413
          s2 ++;
          }
        }
        {
// # 415
        (*s2) = '\0';
        }
// # 416
        if ((int )(*s1) == 47) {
          {
// # 417
          s1 ++;
          }
// # 418
          if ((*s1)) {
            {
// # 419
            s_sig = (u_short )atoi((char/*const*/  *)s1);
            }
          }
        }
        {
// # 421
        tmp_2 = inet_addr((char/*const*/  *)(addrstr));
// # 421
        x_0 = tmp_2;
// # 421
        tmp_3 = __builtin_constant_p((int )x_0);
        }
// # 421
        if (tmp_3) {
          {
// # 421
          v_0 = ((((x_0 & 4278190080U) >> 24) |
                      ((x_0 & 16711680U) >> 8)) | ((x_0 & 65280U) << 8)) |
                    ((x_0 & 255U) << 24);
          }
        } else {
          {
// # 421
          asm  ("rorw $8, %w0;"
                    "rorl $16, %0;"
                    "rorw $8, %w0": "=r" (v_0): "0" (x_0): "cc");
          }
        }
        {
// # 421
        vector = (unsigned long )v_0;
        }
// # 421
        if ((int )vector == -1) {
          {
// # 422
          syslog(6, (char/*const*/  *)"ERROR ftpaccess vector entry<%s> invalid",
                 vector_in);
          }
        } else {
          {
// # 424
          tmp_0 = inet_addr((char/*const*/  *)external_identity_in);
// # 424
          x = tmp_0;
// # 424
          tmp_1 = __builtin_constant_p((int )x);
          }
// # 424
          if (tmp_1) {
            {
// # 424
            v = ((((x & 4278190080U) >> 24) | ((x & 16711680U) >> 8)) |
                   ((x & 65280U) << 8)) | ((x & 255U) << 24);
            }
          } else {
            {
// # 424
            asm  ("rorw $8, %w0;"
                      "rorl $16, %0;"
                      "rorw $8, %w0": "=r" (v): "0" (x): "cc");
            }
          }
          {
// # 424
          external_identity = (unsigned long )v;
          }
// # 424
          if ((int )external_identity == -1) {
            {
// # 425
            syslog(6,
                   (char/*const*/  *)"ERROR ftpaccess vector entry<%s> invalid",
                   external_identity_in);
            }
          } else {
            {
// # 427
            i = (unsigned short )0;
// # 427
            fnd = (unsigned short )0;
            }
// # 427
            while (1) {
// # 427
              if ((int )i < (int )VECTORS->count) {
// # 427
                if ((int )fnd == 0) {
// # 427
                  if (! (vector != 0UL)) {
// # 427
                    break;
                  }
                } else {
// # 427
                  break;
                }
              } else {
// # 427
                break;
              }
              {
// # 428
              vp = (*(VECTORS->index + (int )i));
// # 429
              cmp = addr_cmp(vp->s_vector, vp->s_sig, vector, s_sig);
              }
// # 430
              if (cmp == 0) {
                {
// # 431
                fnd = (unsigned short )1;
// # 432
                makevectentry(vp, external_identity, vector, s_sig);
                }
              } else {
// # 434
                if (cmp > 0) {
                  {
// # 436
                  p1 = (*(VECTORS->index + (int )VECTORS->count));
                  }
// # 436
                  while ((unsigned int )p1 >= (unsigned int )vp) {
                    {
// # 437
                    (*p1) = (*(p1 - 1));
// # 436
                    p1 --;
                    }
                  }
                  {
// # 438
                  fnd = (unsigned short )2;
// # 439
                  makevectentry(vp, external_identity, vector, s_sig);
// # 440
                  VECTORS->count = (unsigned short )((int )VECTORS->count + 1);
                  }
                }
              }
              {
// # 427
              i = (unsigned short )((int )i + 1);
              }
            }
// # 443
            if ((int )fnd == 0) {
              {
// # 444
              makevectentry((*(VECTORS->index + (int )VECTORS->count)),
                            external_identity, vector, s_sig);
// # 445
              VECTORS->count = (unsigned short )((int )VECTORS->count + 1);
              }
            }
// # 447
            if ((int )i >= (int )VECTORS->slots) {
              {
// # 448
              syslog(6,
                     (char/*const*/  *)"ERROR bad slot count  for passive vectors index record");
// # 449
              perror_reply(421, "Local resource failure: malloc");
// # 450
              dologout(1);
              }
            }
          }
        }
      }
    }
  }
// # 457
  return;
}
}
// # 461
static void initportvectors(void) 
{ struct aclmember *entry ;
  int pcnt ;
  int acnt ;
  int tmp ;
  int tmp_0 ;
  struct aclmember *tmp_1 ;
  int tmp_4 ;
  int tmp_5 ;
  struct aclmember *tmp_6 ;

  {
  {
// # 463
  entry = (struct aclmember *)((void *)0);
// # 467
  pcnt = 0;
// # 468
  acnt = 0;
// # 470
  entry = (struct aclmember *)((void *)0);
  }
// # 472
  while (1) {
    {
// # 472
    tmp_1 = getaclentry("passive", & entry);
    }
// # 472
    if (! tmp_1) {
// # 472
      break;
    }
    {
// # 473
    tmp = strcasecmp((char/*const*/  *)entry->arg[0], (char/*const*/  *)"ports");
    }
// # 473
    if (! tmp) {
// # 474
      if (entry->arg[0]) {
// # 474
        if (entry->arg[1]) {
// # 474
          if (! entry->arg[2]) {
// # 475
            continue;
          }
        } else {
// # 475
          continue;
        }
      } else {
// # 475
        continue;
      }
      {
// # 476
      pcnt ++;
      }
    }
    {
// # 478
    tmp_0 = strcasecmp((char/*const*/  *)entry->arg[0],
                         (char/*const*/  *)"address");
    }
// # 478
    if (! tmp_0) {
// # 479
      if (entry->arg[0]) {
// # 479
        if (entry->arg[1]) {
// # 479
          if (! entry->arg[2]) {
// # 480
            continue;
          }
        } else {
// # 480
          continue;
        }
      } else {
// # 480
        continue;
      }
      {
// # 481
      acnt ++;
      }
    }
  }
// # 484
  if (pcnt > 0) {
    {
// # 484
    PORTS = initportstruct(pcnt);
    }
  } else {
    {
// # 484
    PORTS = (struct v_ports *)((void *)0);
    }
  }
// # 485
  if (acnt > 0) {
    {
// # 485
    VECTORS = initvectstruct(acnt);
    }
  } else {
    {
// # 485
    VECTORS = (struct v_index *)((void *)0);
    }
  }
// # 486
  while (1) {
    {
// # 486
    tmp_6 = getaclentry("passive", & entry);
    }
// # 486
    if (! tmp_6) {
// # 486
      break;
    }
    {
// # 487
    tmp_5 = strcasecmp((char/*const*/  *)entry->arg[0], (char/*const*/  *)"ports");
    }
// # 487
    if (tmp_5) {
      {
// # 489
      tmp_4 = strcasecmp((char/*const*/  *)entry->arg[0],
                           (char/*const*/  *)"address");
      }
// # 489
      if (! tmp_4) {
        {
// # 490
        addvectentry(entry->arg[1], entry->arg[2]);
        }
      }
    } else {
      {
// # 488
      addportentry(entry->arg[1], entry->arg[2], entry->arg[3]);
      }
    }
  }
// # 492
  return;
}
}
// # 499
static int addr_cmp(u_long s1 , u_short s1_sig , u_long s2 , u_short s2_sig ) 
{ 

  {
// # 501
  if ((int )s1_sig > (int )s2_sig) {
// # 502
    return (-1);
  }
// # 503
  if ((int )s1_sig < (int )s2_sig) {
// # 504
    return (1);
  }
// # 505
  if (s1 < s2) {
// # 506
    return (-1);
  }
// # 507
  if (s1 > s2) {
// # 508
    return (1);
  }
// # 509
  return (0);
}
}
// # 524
static int addr_smatch(u_long s1 , u_long s2 , u_short shift_in ) 
{ u_long sh1 ;
  u_long sh2 ;
  int shift ;

  {
// # 529
  if ((int )shift_in > 0) {
    {
// # 530
    shift = (int )(sizeof(u_long ) * 8U);
    }
// # 531
    if (shift >= (int )shift_in) {
      {
// # 532
      shift -= (int )shift_in;
      }
    }
// # 533
    if (shift > 0) {
      {
// # 534
      sh2 = (s2 >> shift) << shift;
// # 535
      sh1 = (s1 >> shift) << shift;
      }
    } else {
      {
// # 538
      sh2 = s2;
// # 539
      sh1 = s1;
      }
    }
// # 541
    if (sh1 < sh2) {
// # 542
      return (-1);
    }
// # 543
    if (sh1 > sh2) {
// # 544
      return (1);
    }
  }
// # 546
  return (0);
}
}
// # 551
static v_paddr *find_passive_port_entry(u_long addr ) 
{ register int i ;
  v_paddr *p ;
  int tmp ;

  {
// # 556
  if ((unsigned int )PORTS != (unsigned int )((void *)0)) {
    {
// # 557
    i = 0;
    }
// # 557
    while (i < (int )PORTS->count) {
      {
// # 558
      p = (*(PORTS->index + i));
// # 559
      tmp = addr_smatch(addr, p->s_address, p->s_sig);
      }
// # 559
      if (tmp == 0) {
// # 560
        return (p);
      }
      {
// # 557
      i ++;
      }
    }
  }
// # 562
  return ((v_paddr *)((void *)0));
}
}
// # 567
static v_addr *find_passive_vect_entry(u_long addr ) 
{ register int i ;
  v_addr *p ;
  int tmp ;

  {
// # 572
  if ((unsigned int )VECTORS != (unsigned int )((void *)0)) {
    {
// # 573
    i = 0;
    }
// # 573
    while (i < (int )VECTORS->count) {
      {
// # 574
      p = (*(VECTORS->index + i));
// # 575
      tmp = addr_smatch(addr, p->s_vector, p->s_sig);
      }
// # 575
      if (tmp == 0) {
// # 576
        return (p);
      }
      {
// # 573
      i ++;
      }
    }
  }
// # 578
  return ((v_addr *)((void *)0));
}
}
// # 62 "restrict.c"
int restrict_check(char *name ) 
{ int tmp ;

  {
  {
// # 64
  tmp = test_restriction(name);
  }
// # 64
  if (! tmp) {
// # 65
    return (0);
  }
  {
// # 66
  reply(550, "Permission denied on server.  You are restricted to your account.");
  }
// # 67
  return (1);
}
}
// # 70
int test_restriction(char *name ) 
{ char rhome[4097] ;
  char rname[4097] ;
  char path[4097] ;
  char curwd[4097] ;
  char *tmp ;
  size_t tmp_0 ;
  size_t tmp_1 ;
  size_t tmp_2 ;
  int tmp_3 ;

  {
// # 75
  if (restricted_user == 0) {
// # 76
    return (0);
  }
  {
// # 79
  fb_realpath((char/*const*/  *)home, rhome);
// # 81
  path[0] = '\0';
  }
// # 84
  if ((int )(*(name + 0)) != 47) {
    {
// # 90
    tmp = getcwd(curwd, 4096U);
    }
// # 90
    if ((unsigned int )tmp == (unsigned int )((char *)((void *)0))) {
// # 94
      return (1);
    }
    {
// # 97
    strcpy((char */*   */)(path),
           (char/*const*/  */*   */)((char/*const*/  *)(curwd)));
// # 98
    strcat((char */*   */)(path),
           (char/*const*/  */*   */)((char/*const*/  *)"/"));
    }
  }
  {
// # 102
  tmp_0 = strlen((char/*const*/  *)(path));
// # 102
  tmp_1 = strlen((char/*const*/  *)name);
  }
// # 102
  if ((tmp_0 + tmp_1) + 2U > sizeof(path)) {
// # 103
    return (1);
  }
  {
// # 106
  strcat((char */*   */)(path),
         (char/*const*/  */*   */)((char/*const*/  *)name));
// # 107
  fb_realpath((char/*const*/  *)(path), rname);
// # 108
  strcat((char */*   */)(rname),
         (char/*const*/  */*   */)((char/*const*/  *)"/"));
// # 110
  tmp_2 = strlen((char/*const*/  *)(rhome));
// # 110
  tmp_3 = strncmp((char/*const*/  *)(rhome), (char/*const*/  *)(rname), tmp_2);
  }
// # 110
  if (tmp_3) {
// # 111
    return (1);
  }
// # 114
  return (0);
}
}
// # 117
int restrict_list_check(char *name ) 
{ char *beg ;
  char *copy_0 ;
  char *end ;
  int flag ;
  int tmp ;
  int tmp_0 ;

  {
  {
// # 122
  beg = name;
  }
// # 124
  while ((int )(*beg) != 0) {
    {
// # 126
    flag = 0;
// # 127
    end = beg;
    }
// # 128
    while (1) {
// # 128
      if ((*end)) {
        {
// # 128
        tmp = _get__ctype_b((int )(*end));
        }
// # 128
        if (tmp & 8192) {
// # 128
          break;
        }
      } else {
// # 128
        break;
      }
      {
// # 129
      end ++;
      }
    }
// # 130
    if (! (*end)) {
      {
// # 131
      flag = 1;
      }
    }
// # 132
    if (! flag) {
      {
// # 133
      (*end) = '\0';
      }
    }
    {
// # 134
    copy_0 = strdup((char/*const*/  *)beg);
    }
// # 135
    if (! flag) {
      {
// # 136
      (*end) = ' ';
      }
    }
// # 138
    if (! copy_0) {
      {
// # 139
      reply(550, "Permission denied on server.  Out of memory.");
      }
// # 140
      return (1);
    }
    {
// # 144
    tmp_0 = restrict_check(copy_0);
    }
// # 144
    if (tmp_0) {
      {
// # 145
      free((void *)copy_0);
      }
// # 146
      return (1);
    }
    {
// # 148
    free((void *)copy_0);
// # 149
    beg = end;
    }
// # 150
    if (! flag) {
      {
// # 151
      beg ++;
      }
    }
  }
// # 155
  return (0);
}
}
// # 44 "wu_fnmatch.c"
static char/*const*/  *rangematch(char/*const*/  *pattern , char/*const*/  *string ,
                                int flags ) 
{ char test ;
  boolean negate ;
  int tmp ;
  boolean ok ;
  char c ;
  char/*const*/  *tmp_0 ;
  char/*const*/  *tmp_1 ;
  char c2 ;
  char/*const*/  *tmp_2 ;
  char/*const*/  *tmp_3 ;

  {
  {
// # 52
  test = (*string);
  }
// # 53
  if ((int/*const*/  )(*pattern) == 33) {
    {
// # 53
    tmp = 1;
    }
  } else {
// # 53
    if ((int/*const*/  )(*pattern) == 94) {
      {
// # 53
      tmp = 1;
      }
    } else {
      {
// # 53
      tmp = 0;
      }
    }
  }
  {
// # 53
  negate = tmp;
// # 54
  ok = 0;
  }
// # 55
  if (negate) {
    {
// # 56
    pattern ++;
    }
  }
// # 57
  if (flags & 16) {
    {
// # 58
    test = (char )tolower((int )((unsigned char )test));
    }
  }
// # 59
  while ((int/*const*/  )(*pattern) != 93) {
    {
// # 60
    tmp_0 = pattern;
// # 60
    pattern ++;
// # 60
    c = (*tmp_0);
    }
// # 61
    if ((int )c == 92) {
// # 61
      if (! (flags & 2)) {
        {
// # 62
        tmp_1 = pattern;
// # 62
        pattern ++;
// # 62
        c = (*tmp_1);
        }
      }
    }
// # 63
    if ((int )c == 0) {
// # 64
      return ((char/*const*/  *)((void *)0));
    }
// # 65
    if (flags & 16) {
      {
// # 66
      c = (char )tolower((int )((unsigned char )c));
      }
    }
// # 67
    if ((int/*const*/  )(*pattern) == 45) {
      {
// # 68
      c2 = (*(pattern + 1));
      }
// # 69
      if ((int )c2 != 0) {
// # 69
        if ((int )c2 != 93) {
          {
// # 71
          pattern += 2;
          }
// # 72
          if ((int )c2 == 92) {
// # 72
            if (! (flags & 2)) {
              {
// # 73
              tmp_2 = pattern;
// # 73
              pattern ++;
// # 73
              c2 = (*tmp_2);
              }
            }
          }
// # 74
          if ((int )c2 == 0) {
// # 75
            return ((char/*const*/  *)((void *)0));
          }
// # 76
          if (flags & 16) {
            {
// # 77
            c2 = (char )tolower((int )((unsigned char )c2));
            }
          }
// # 79
          if ((int )c <= (int )test) {
// # 79
            if ((int )test <= (int )c2) {
              {
// # 80
              ok = 1;
              }
            }
          }
        } else {
          goto _L;
        }
      } else {
        _L: 
// # 82
        if ((int )c == (int )test) {
          {
// # 83
          ok = 1;
          }
        }
      }
    } else {
// # 85
      if ((int )c == (int )test) {
        {
// # 86
        ok = 1;
        }
      }
    }
  }
// # 88
  if (ok == negate) {
    {
// # 88
    tmp_3 = (char/*const*/  *)((void *)0);
    }
  } else {
    {
// # 88
    tmp_3 = pattern;
    }
  }
// # 88
  return (tmp_3);
}
}
// # 91
int wu_fnmatch(char/*const*/  *pattern , char/*const*/  *string , int flags ) 
{ char/*const*/  *stringstart ;
  char test ;
  char c ;
  char/*const*/  *tmp ;
  int tmp_0 ;
  int tmp_2 ;
  char *tmp_3 ;
  int tmp_4 ;
  char/*const*/  *tmp_5 ;
  int tmp_6 ;
  int tmp_7 ;

  {
  {
// # 93
  stringstart = string;
  }
// # 94
  while (1) {
    {
// # 96
    tmp = pattern;
// # 96
    pattern ++;
// # 96
    c = (*tmp);
    }
// # 97
    switch ((int )c) {
    case 0: 
    {

    }
// # 100
    if (flags & 8) {
// # 100
      if ((int/*const*/  )(*string) == 47) {
// # 102
        return (0);
      }
    }
// # 111
    if (flags & 8) {
// # 111
      if ((unsigned int )string != (unsigned int )stringstart) {
// # 111
        if (flags & 1) {
// # 111
          if ((int/*const*/  )(*(string - 1)) == 47) {
// # 115
            return (0);
          }
        }
      }
    }
// # 117
    if ((int/*const*/  )(*string) == 0) {
      {
// # 117
      tmp_0 = 0;
      }
    } else {
      {
// # 117
      tmp_0 = 1;
      }
    }
// # 117
    return (tmp_0);
    case 63: 
    {

    }
// # 119
    if ((int/*const*/  )(*string) == 0) {
// # 120
      return (1);
    }
// # 121
    if ((int/*const*/  )(*string) == 47) {
// # 121
      if (flags & 1) {
// # 123
        return (1);
      }
    }
// # 124
    if ((int/*const*/  )(*string) == 46) {
// # 124
      if (flags & 4) {
// # 124
        if ((unsigned int )string == (unsigned int )stringstart) {
// # 129
          return (1);
        } else {
// # 124
          if (flags & 1) {
// # 124
            if ((int/*const*/  )(*(string - 1)) == 47) {
// # 129
              return (1);
            }
          }
        }
      }
    }
    {
// # 130
    string ++;
    }
// # 131
    break;
    case 42: 
    {
// # 133
    c = (*pattern);
    }
// # 134
    while ((int )c == 42) {
      {
// # 135
      pattern ++;
// # 135
      c = (*pattern);
      }
    }
// # 136
    if ((int/*const*/  )(*string) == 46) {
// # 136
      if (flags & 4) {
// # 136
        if ((unsigned int )string == (unsigned int )stringstart) {
// # 141
          return (1);
        } else {
// # 136
          if (flags & 1) {
// # 136
            if ((int/*const*/  )(*(string - 1)) == 47) {
// # 141
              return (1);
            }
          }
        }
      }
    }
// # 143
    if ((int )c == 0) {
// # 144
      if (flags & 1) {
// # 146
        if (flags & 8) {
// # 147
          return (0);
        }
        {
// # 149
        tmp_3 = strchr(string, (int )'/');
        }
// # 149
        if ((unsigned int )tmp_3 == (unsigned int )((void *)0)) {
          {
// # 149
          tmp_2 = 0;
          }
        } else {
          {
// # 149
          tmp_2 = 1;
          }
        }
// # 149
        return (tmp_2);
      } else {
// # 152
        return (0);
      }
    } else {
// # 153
      if ((int )c == 47) {
// # 153
        if (flags & 1) {
          {
// # 155
          string = (char/*const*/  *)strchr(string, (int )'/');
          }
// # 156
          if ((unsigned int )string == (unsigned int )((void *)0)) {
// # 157
            return (1);
          }
// # 158
          break;
        }
      }
    }
    {
// # 161
    test = (*string);
    }
// # 161
    while ((int )test != 0) {
      {
// # 162
      tmp_4 = wu_fnmatch(pattern, string, flags & -5);
      }
// # 162
      if (! tmp_4) {
// # 163
        return (0);
      }
// # 164
      if ((int )test == 47) {
// # 164
        if (flags & 1) {
// # 166
          break;
        }
      }
      {
// # 161
      string ++;
// # 161
      test = (*string);
      }
    }
// # 168
    return (1);
    case 91: 
    {

    }
// # 170
    if ((int/*const*/  )(*string) == 0) {
// # 171
      return (1);
    }
// # 172
    if ((int/*const*/  )(*string) == 47) {
// # 172
      if (flags & 1) {
// # 174
        return (1);
      }
    }
    {
// # 175
    pattern = rangematch(pattern, string, flags);
    }
// # 176
    if ((unsigned int )pattern == (unsigned int )((void *)0)) {
// # 177
      return (1);
    }
    {
// # 178
    string ++;
    }
// # 179
    break;
    case 92: 
    {

    }
// # 181
    if (! (flags & 2)) {
      {
// # 182
      tmp_5 = pattern;
// # 182
      pattern ++;
// # 182
      c = (*tmp_5);
      }
// # 183
      if ((int )c == 0) {
        {
// # 184
        c = '\\';
// # 185
        pattern --;
        }
      }
    }
    default: 
    {

    }
// # 190
    if (! ((int )c == (int )(*string))) {
// # 192
      if (flags & 16) {
        {
// # 192
        tmp_6 = tolower((int )((unsigned char )c));
// # 192
        tmp_7 = tolower((int )((unsigned char )(*string)));
        }
// # 192
        if (! (tmp_6 == tmp_7)) {
// # 196
          return (1);
        }
      } else {
// # 196
        return (1);
      }
    }
    {
// # 197
    string ++;
    }
// # 198
    break;
    }
  }
// # 202
  return (0);
}
}
// # 36 "timeout.c"
unsigned int timeout_idle   = 900U;
// # 37
unsigned int timeout_maxidle   = 7200U;
// # 38
unsigned int timeout_data   = 1200U;
// # 39
unsigned int timeout_rfc931   = 10U;
// # 40
unsigned int timeout_accept   = 120U;
// # 41
unsigned int timeout_connect   = 120U;
// # 43
void load_timeouts(void) 
{ struct aclmember *entry ;
  unsigned long value ;
  unsigned long tmp ;
  int tmp_0 ;
  int tmp_1 ;
  int tmp_2 ;
  int tmp_3 ;
  int tmp_4 ;
  int tmp_5 ;
  struct aclmember *tmp_6 ;

  {
  {
// # 45
  entry = (struct aclmember *)((void *)0);
  }
// # 46
  while (1) {
    {
// # 46
    tmp_6 = getaclentry("timeout", & entry);
    }
// # 46
    if (! tmp_6) {
// # 46
      break;
    }
// # 47
    if ((unsigned int )entry->arg[0] != (unsigned int )((void *)0)) {
// # 47
      if ((unsigned int )entry->arg[1] != (unsigned int )((void *)0)) {
        {
// # 48
        tmp = strtoul((char/*const*/  */*   */)((char/*const*/  *)entry->arg[1]),
                      (char **/*   */)((char **)((void *)0)), 0);
// # 48
        value = tmp;
// # 49
        tmp_5 = strcasecmp((char/*const*/  *)entry->arg[0],
                             (char/*const*/  *)"rfc931");
        }
// # 49
        if (tmp_5 == 0) {
          {
// # 50
          timeout_rfc931 = (unsigned int )value;
          }
        } else {
// # 51
          if (value > 0UL) {
            {
// # 52
            tmp_4 = strcasecmp((char/*const*/  *)entry->arg[0],
                                 (char/*const*/  *)"idle");
            }
// # 52
            if (tmp_4 == 0) {
              {
// # 53
              timeout_idle = (unsigned int )value;
              }
            } else {
              {
// # 54
              tmp_3 = strcasecmp((char/*const*/  *)entry->arg[0],
                                   (char/*const*/  *)"maxidle");
              }
// # 54
              if (tmp_3 == 0) {
                {
// # 55
                timeout_maxidle = (unsigned int )value;
                }
              } else {
                {
// # 56
                tmp_2 = strcasecmp((char/*const*/  *)entry->arg[0],
                                     (char/*const*/  *)"data");
                }
// # 56
                if (tmp_2 == 0) {
                  {
// # 57
                  timeout_data = (unsigned int )value;
                  }
                } else {
                  {
// # 58
                  tmp_1 = strcasecmp((char/*const*/  *)entry->arg[0],
                                       (char/*const*/  *)"accept");
                  }
// # 58
                  if (tmp_1 == 0) {
                    {
// # 59
                    timeout_accept = (unsigned int )value;
                    }
                  } else {
                    {
// # 60
                    tmp_0 = strcasecmp((char/*const*/  *)entry->arg[0],
                                         (char/*const*/  *)"connect");
                    }
// # 60
                    if (tmp_0 == 0) {
                      {
// # 61
                      timeout_connect = (unsigned int )value;
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
  }
// # 64
  return;
}
}
// # 26 "getpwnam.c"
struct passwd *fgetpwent(FILE *stream ) 
{ char *entry ;
  char *tmp ;
  struct passwd *p ;
  struct passwd *tmp_0 ;
  char *tmp_1 ;
  char *tmp2 ;
  char *tmp_2 ;
  char *tmp_3 ;
  char *tmp_4 ;
  char *tmp_5 ;
  char *tmp_6 ;
  char *tmp_7 ;
  char *tmp_8 ;
  char *tmp_9 ;
  char *tmp_11 ;
  char *tmp_12 ;
  char *tmp_13 ;
  char *tmp_15 ;
  char *tmp_16 ;
  char *tmp_17 ;
  char *tmp_18 ;
  char *tmp_19 ;
  char *tmp_20 ;
  char *tmp_21 ;
  char *tmp_22 ;
  char *tmp_23 ;
  size_t tmp_24 ;
  size_t tmp_25 ;
  size_t tmp_26 ;
  int tmp_27 ;

  {
  {
// # 28
  tmp = (char *)malloc(1024U);
// # 28
  entry = tmp;
// # 29
  tmp_0 = (struct passwd *)malloc(sizeof(struct passwd ));
// # 29
  p = tmp_0;
  {
// # 32 "spec.work"
  if (! (stream->BLAST_FLAG == 1)) {
// # 34
    error__();
  }
  {

  }
  }
// # 32 "getpwnam.c"
  tmp_2 = fgets((char */*   */)entry, 1024,
                  (FILE */*   */)stream);
  }
// # 32
  if (! tmp_2) {
    {
// # 33
    free((void *)entry);
// # 34
    free((void *)p);
    }
// # 35
    return ((struct passwd *)((void *)0));
  }
  {
// # 37
  tmp_1 = strdup((char/*const*/  *)entry);
// # 38
  tmp_4 = strchr((char/*const*/  *)tmp_1, (int )':');
  }
// # 38
  if (tmp_4) {
    {
// # 39
    tmp_3 = strchr((char/*const*/  *)tmp_1, (int )':');
// # 39
    (*tmp_3) = (char )0;
// # 40
    p->pw_name = tmp_1;
    }
  } else {
    {
// # 42
    free((void *)tmp_1);
// # 42
    free((void *)entry);
// # 42
    free((void *)p);
    }
// # 42
    return ((struct passwd *)((void *)0));
  }
  {
// # 44
  tmp_5 = strchr((char/*const*/  *)entry, (int )':');
// # 44
  tmp2 = tmp_5 + 1;
// # 45
  tmp_1 = strdup((char/*const*/  *)tmp2);
// # 46
  tmp_7 = strchr((char/*const*/  *)tmp_1, (int )':');
  }
// # 46
  if (tmp_7) {
    {
// # 47
    tmp_6 = strchr((char/*const*/  *)tmp_1, (int )':');
// # 47
    (*tmp_6) = (char )0;
// # 48
    p->pw_passwd = tmp_1;
    }
  } else {
    {
// # 50
    free((void *)tmp_1);
// # 50
    free((void *)entry);
// # 50
    free((void *)p->pw_name);
// # 50
    free((void *)p);
    }
// # 50
    return ((struct passwd *)((void *)0));
  }
  {
// # 52
  tmp_8 = strchr((char/*const*/  *)tmp2, (int )':');
// # 52
  tmp2 = tmp_8 + 1;
// # 53
  tmp_1 = strdup((char/*const*/  *)tmp2);
// # 54
  tmp_11 = strchr((char/*const*/  *)tmp_1, (int )':');
  }
// # 54
  if (tmp_11) {
    {
// # 55
    tmp_9 = strchr((char/*const*/  *)tmp_1, (int )':');
// # 55
    (*tmp_9) = (char )0;
// # 56
    p->pw_uid = (uid_t )atoi((char/*const*/  *)tmp_1);
    }
  } else {
    {
// # 58
    free((void *)tmp_1);
// # 58
    free((void *)entry);
// # 58
    free((void *)p->pw_passwd);
// # 58
    free((void *)p->pw_name);
// # 58
    free((void *)p);
    }
// # 58
    return ((struct passwd *)((void *)0));
  }
  {
// # 60
  free((void *)tmp_1);
// # 61
  tmp_12 = strchr((char/*const*/  *)tmp2, (int )':');
// # 61
  tmp2 = tmp_12 + 1;
// # 62
  tmp_1 = strdup((char/*const*/  *)tmp2);
// # 63
  tmp_15 = strchr((char/*const*/  *)tmp_1, (int )':');
  }
// # 63
  if (tmp_15) {
    {
// # 64
    tmp_13 = strchr((char/*const*/  *)tmp_1, (int )':');
// # 64
    (*tmp_13) = (char )0;
// # 65
    p->pw_gid = (__gid_t )atoi((char/*const*/  *)tmp_1);
    }
  } else {
    {
// # 67
    free((void *)tmp_1);
// # 67
    free((void *)entry);
// # 67
    free((void *)p->pw_passwd);
// # 67
    free((void *)p->pw_name);
// # 67
    free((void *)p);
    }
// # 67
    return ((struct passwd *)((void *)0));
  }
  {
// # 69
  free((void *)tmp_1);
// # 70
  tmp_16 = strchr((char/*const*/  *)tmp2, (int )':');
// # 70
  tmp2 = tmp_16 + 1;
// # 71
  tmp_1 = strdup((char/*const*/  *)tmp2);
// # 72
  tmp_18 = strchr((char/*const*/  *)tmp_1, (int )':');
  }
// # 72
  if (tmp_18) {
    {
// # 73
    tmp_17 = strchr((char/*const*/  *)tmp_1, (int )':');
// # 73
    (*tmp_17) = (char )0;
// # 74
    p->pw_gecos = tmp_1;
    }
  } else {
    {
// # 76
    free((void *)tmp_1);
// # 76
    free((void *)entry);
// # 76
    free((void *)p->pw_passwd);
// # 76
    free((void *)p->pw_name);
// # 76
    free((void *)p);
    }
// # 76
    return ((struct passwd *)((void *)0));
  }
  {
// # 78
  tmp_19 = strchr((char/*const*/  *)tmp2, (int )':');
// # 78
  tmp2 = tmp_19 + 1;
// # 79
  tmp_1 = strdup((char/*const*/  *)tmp2);
// # 80
  tmp_21 = strchr((char/*const*/  *)tmp_1, (int )':');
  }
// # 80
  if (tmp_21) {
    {
// # 81
    tmp_20 = strchr((char/*const*/  *)tmp_1, (int )':');
// # 81
    (*tmp_20) = (char )0;
// # 82
    p->pw_dir = tmp_1;
    }
  } else {
    {
// # 84
    free((void *)tmp_1);
// # 84
    free((void *)entry);
// # 84
    free((void *)p->pw_gecos);
// # 84
    free((void *)p->pw_passwd);
// # 84
    free((void *)p->pw_name);
// # 84
    free((void *)p);
    }
// # 84
    return ((struct passwd *)((void *)0));
  }
  {
// # 86
  tmp_22 = strchr((char/*const*/  *)tmp2, (int )':');
// # 86
  tmp2 = tmp_22 + 1;
// # 87
  tmp_23 = strchr((char/*const*/  *)tmp2, (int )':');
  }
// # 87
  if (tmp_23) {
    {
// # 88
    free((void *)entry);
// # 88
    free((void *)p->pw_dir);
// # 88
    free((void *)p->pw_gecos);
// # 88
    free((void *)p->pw_passwd);
// # 88
    free((void *)p->pw_name);
// # 88
    free((void *)p);
    }
// # 88
    return ((struct passwd *)((void *)0));
  }
// # 90
  while (1) {
    {
// # 90
    tmp_25 = strlen((char/*const*/  *)tmp2);
    }
// # 90
    if (tmp_25) {
      {
// # 90
      tmp_26 = strlen((char/*const*/  *)tmp2);
// # 90
      tmp_27 = isspace((int )(*(tmp2 + (tmp_26 - 1U))));
      }
// # 90
      if (! tmp_27) {
// # 90
        break;
      }
    } else {
// # 90
      break;
    }
    {
// # 91
    tmp_24 = strlen((char/*const*/  *)tmp2);
// # 91
    (*(tmp2 + (tmp_24 - 1U))) = (char )0;
    }
  }
  {
// # 92
  p->pw_shell = strdup((char/*const*/  *)tmp2);
// # 93
  free((void *)entry);
  }
// # 94
  return (p);
}
}
// # 99
struct passwd *bero_getpwnam(char/*const*/  *name , char/*const*/  *file ) 
{ FILE *f ;
  struct passwd *p ;
  struct passwd *r ;
  struct passwd *tmp ;
  int tmp_0 ;
  int tmp_1 ;

  {
  {
// # 105
  tmp_0 = strcmp(file, (char/*const*/  *)"/etc/passwd");
  }
// # 105
  if (! tmp_0) {
    {
// # 106
    tmp = getpwnam(name);
    }
// # 106
    return (tmp);
  }
  {
// # 107
  f = fopen((char/*const*/  */*   */)file,
            (char/*const*/  */*   */)((char/*const*/  *)"r"));
  {
// # 17 "spec.work"
  if (f != (FILE *)0) {
// # 17
    f->BLAST_FLAG = 1;
  }
  {

  }
  }

  }
// # 108 "getpwnam.c"
  if ((unsigned int )f == (unsigned int )((void *)0)) {
// # 109
    return ((struct passwd *)((void *)0));
  }
  {
// # 110
  p = (struct passwd *)((void *)0);
// # 111
  r = (struct passwd *)((void *)0);
  }
// # 112
  while (1) {
// # 112
    if ((unsigned int )r == (unsigned int )((void *)0)) {
      {
// # 112
      p = fgetpwent(f);
      }
// # 112
      if (! p) {
// # 112
        break;
      }
    } else {
// # 112
      break;
    }
    {
// # 113
    tmp_1 = strcasecmp((char/*const*/  *)p->pw_name, name);
    }
// # 113
    if (! tmp_1) {
      {
// # 114
      r = p;
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
    error__();
  }
  {

  }
  }
// # 115 "getpwnam.c"
  fclose(f);
  }
// # 116
  return (r);
}
}
// # 119
struct passwd *bero_getpwuid(uid_t uid , char/*const*/  *file ) 
{ FILE *f ;
  struct passwd *p ;
  struct passwd *r ;
  struct passwd *tmp ;
  int tmp_0 ;

  {
  {
// # 125
  tmp_0 = strcmp(file, (char/*const*/  *)"/etc/passwd");
  }
// # 125
  if (! tmp_0) {
    {
// # 126
    tmp = getpwuid(uid);
    }
// # 126
    return (tmp);
  }
  {
// # 127
  f = fopen((char/*const*/  */*   */)file,
            (char/*const*/  */*   */)((char/*const*/  *)"r"));
  {
// # 17 "spec.work"
  if (f != (FILE *)0) {
// # 17
    f->BLAST_FLAG = 1;
  }
  {

  }
  }

  }
// # 128 "getpwnam.c"
  if ((unsigned int )f == (unsigned int )((void *)0)) {
// # 129
    return ((struct passwd *)((void *)0));
  }
  {
// # 130
  p = (struct passwd *)((void *)0);
// # 131
  r = (struct passwd *)((void *)0);
  }
// # 132
  while (1) {
// # 132
    if ((unsigned int )r == (unsigned int )((void *)0)) {
      {
// # 132
      p = fgetpwent(f);
      }
// # 132
      if (! p) {
// # 132
        break;
      }
    } else {
// # 132
      break;
    }
// # 133
    if (p->pw_uid == uid) {
      {
// # 134
      r = p;
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
    error__();
  }
  {

  }
  }
// # 135 "getpwnam.c"
  fclose(f);
  }
// # 136
  return (r);
}
}
// # 140
struct spwd *bero_getspnam(char/*const*/  *name , char/*const*/  *file ) 
{ FILE *f ;
  struct spwd *s ;
  struct spwd *r ;
  int tmp ;

  {
  {
// # 145
  f = fopen((char/*const*/  */*   */)file,
            (char/*const*/  */*   */)((char/*const*/  *)"r"));
  {
// # 17 "spec.work"
  if (f != (FILE *)0) {
// # 17
    f->BLAST_FLAG = 1;
  }
  {

  }
  }

  }
// # 146 "getpwnam.c"
  if ((unsigned int )f == (unsigned int )((void *)0)) {
// # 147
    return ((struct spwd *)((void *)0));
  }
  {
// # 148
  s = (struct spwd *)((void *)0);
// # 149
  r = (struct spwd *)((void *)0);
  }
// # 150
  while (1) {
// # 150
    if ((unsigned int )r == (unsigned int )((void *)0)) {
      {
// # 150
      s = (struct spwd *)fgetspent((FILE *)f);
      }
// # 150
      if (! s) {
// # 150
        break;
      }
    } else {
// # 150
      break;
    }
    {
// # 151
    tmp = strcasecmp((char/*const*/  *)s->sp_namp, name);
    }
// # 151
    if (! tmp) {
      {
// # 152
      r = s;
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
    error__();
  }
  {

  }
  }
// # 153 "getpwnam.c"
  fclose(f);
  }
// # 154
  return (r);
}
}
// # 246 "authuser.c"
int auth_dummy_variable   = 0;
void initialize__(void) 
{ 

  {
// # 33 "COPYRIGHT.c"
  Copyright = "\n  Copyright (c) 1999,2000 WU-FTPD Development Group.\n  All rights reserved.\n\n  Portions Copyright (c) 1980, 1985, 1988, 1989, 1990, 1991, 1993, 1994\n    The Regents of the University of California.\n  Portions Copyright (c) 1993, 1994 Washington University in Saint Louis.\n  Portions Copyright (c) 1996, 1998 Berkeley Software Design, Inc.\n  Portions Copyright (c) 1989 Massachusetts Institute of Technology.\n  Portions Copyright (c) 1998 Sendmail, Inc.\n  Portions Copyright (c) 1983, 1995, 1996, 1997 Eric P.  Allman.\n  Portions Copyright (c) 1997 by Stan Barber.\n  Portions Copyright (c) 1997 by Kent Landfield.\n  Portions Copyright (c) 1991, 1992, 1993, 1994, 1995, 1996, 1997\n    Free Software Foundation, Inc.  \n\n  Use and distribution of this software and its source code are governed \n  by the terms and conditions of the WU-FTPD Software License (\"LICENSE\").\n\n  If you did not receive a copy of the license, it may be obtained online\n  at http://www.wu-ftpd.org/license.html.\n";
// # 254 "/users/rupak/ccured/include/string_wrappers.h"
  saved_str = (char/*const*/  *)((void *)0);
// # 237 "ftpd.c"
  route_vectored = 0;
// # 238
  passive_port_min = -1;
// # 239
  passive_port_max = -1;
// # 240
  restricted_user = 0;
// # 263
  logged_in = 0;
// # 266
  debug = 0;
// # 267
  disable_rfc931 = 0;
// # 277
  logging = 0;
// # 278
  log_commands = 0;
// # 279
  log_security = 0;
// # 280
  syslogmsg = 0;
// # 281
  wtmp_logging = 1;
// # 295
  anonymous = 1;
// # 301
  usedefault = 1;
// # 302
  pdata = -1;
// # 307
  TCPwindowsize = 0;
// # 345
  retrieve_is_data = 1;
// # 348
  RootDirectory = (char *)((void *)0);
// # 354
  defumask = (unsigned int )18;
// # 362
  remoteident = "[nowhere yet]";
// # 372
  use_accessfile = 0;
// # 375
  nameserved = 0;
// # 381
  xferlog = 0;
// # 382
  log_outbound_xfers = 0;
// # 383
  log_incoming_xfers = 0;
// # 388
  dolreplies = 1;
// # 391
  autospout = (char *)((void *)0);
// # 392
  autospout_free = 0;
// # 395
  mangleopts = 0;
// # 398
  lgi_failure_threshold = 5;
// # 405
  swaitmax = 90;
// # 406
  swaitint = 5;
// # 483
  Bypass_PID_Files = 0;
// # 495
  use_pam = 0;
// # 525
  limit_time = (long )0;
// # 540
  draconian_FILE = (FILE *)((void *)0);
// # 6370
  wildcard = (char *)((void *)0);
// # 6652
  Argv = (char **)((void *)0);
// # 6656
  LastArgv = (char *)((void *)0);
// # 129 "ftpcmd.y"
  cliport = (unsigned short )0;
// # 155
  nullstr = "(null)";
// # 95 "glob.c"
  globchars = "`{[*?";
// # 72 "logwtmp.c"
  fd = -1;
// # 87 "access.c"
  keepalive = 0;
// # 90
  pidfd = -1;
// # 580 "extensions.c"
  head = (struct dirlist *)((void *)0);
// # 845
  last = (long )0;
// # 2263
  CheckMethod = 0;
// # 50 "acl.c"
  aclbuf = (char *)((void *)0);
// # 72 "private.c"
  passbuf = (char *)((void *)0);
// # 74
  group_given = 0;
// # 55 "conversions.c"
  convbuf = (char *)((void *)0);
// # 83 "routevector.c"
  vector_ptr = (struct sockaddr_in *)((void *)0);
// # 134
  VECTORS = (struct v_index *)((void *)0);
// # 135
  PORTS = (struct v_ports *)((void *)0);
// # 36 "timeout.c"
  timeout_idle = 900U;
// # 37
  timeout_maxidle = 7200U;
// # 38
  timeout_data = 1200U;
// # 39
  timeout_rfc931 = 10U;
// # 40
  timeout_accept = 120U;
// # 41
  timeout_connect = 120U;
// # 246 "authuser.c"
  auth_dummy_variable = 0;
}
}
