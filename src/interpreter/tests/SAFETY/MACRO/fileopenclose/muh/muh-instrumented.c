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
# 136 "/usr/include/bits/types.h"
typedef unsigned int __mode_t;
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
# 180
typedef int __ssize_t;
# 189
typedef unsigned int __socklen_t;
# 46 "/users/rupak/ccured/include/gcc_3.2/stdio.h"
typedef struct _IO_FILE FILE;
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
struct _IO_FILE {
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
# 327
typedef struct _IO_FILE _IO_FILE;
# 263 "/users/rupak/ccured/include/ccured_GNUCC.patch"
struct __ccured_va_list {
   int next ;
};
# 263
typedef struct __ccured_va_list *__ccured_va_list;
# 110 "/usr/include/sys/types.h"
typedef __ssize_t ssize_t;
# 76 "/users/rupak/ccured/include/gcc_3.2/time.h"
typedef __time_t time_t;
# 28 "/usr/include/bits/sigset.h"
struct __anonstruct___sigset_t_12 {
   unsigned long __val[(int )(1024U / (8U * sizeof(unsigned long )))] ;
};
# 28
typedef struct __anonstruct___sigset_t_12 __sigset_t;
# 38 "/usr/include/sys/select.h"
typedef __sigset_t sigset_t;
# 69 "/usr/include/bits/time.h"
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
# 55 "/usr/include/sys/select.h"
typedef long __fd_mask;
# 67
struct __anonstruct_fd_set_13 {
   __fd_mask __fds_bits[(int )(1024U / (8U * sizeof(__fd_mask )))] ;
};
# 67
typedef struct __anonstruct_fd_set_13 fd_set;
# 247 "/users/rupak/ccured/include/gcc_3.2/unistd.h"
typedef __socklen_t socklen_t;
# 29 "/usr/include/bits/sockaddr.h"
typedef unsigned short sa_family_t;
# 145 "/usr/include/bits/socket.h"
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
# 50 "/usr/include/stdint.h"
typedef unsigned short uint16_t;
# 52
typedef unsigned int uint32_t;
# 89 "/usr/include/netinet/in.h"
typedef uint16_t in_port_t;
# 133
typedef uint32_t in_addr_t;
# 134
struct in_addr {
   in_addr_t s_addr ;
};
# 216
struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[(int )(((sizeof(struct sockaddr ) -
                                   sizeof(unsigned short )) - sizeof(in_port_t )) -
                                 sizeof(struct in_addr ))] ;
};
# 96 "/users/rupak/ccured/include/gcc_3.2/netdb.h"
struct hostent {
   char *h_name ;
   char **h_aliases ;
   int h_addrtype ;
   int h_length ;
   char **h_addr_list ;
};
# 393
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
# 37 "/users/rupak/ccured/include/functions/getaddrinfo.h"
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
# 25 "/users/rupak/ccured/include/gcc_3.2/bits/sigaction.h"
struct sigaction {
   void (*sa_handler)(int  ) ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
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
# 110 "muh.h"
struct __anonstruct_status_type_47 {
   char *nickname ;
   int got_nick ;
   int passok ;
   int init ;
   int supress ;
   int allowconnect ;
   int allowreply ;
   time_t startup ;
   char *idhostname ;
};
# 110
typedef struct __anonstruct_status_type_47 status_type;
# 122
struct __anonstruct_client_info_48 {
   int connected ;
   char *nickname ;
   char *username ;
   char *hostname ;
};
# 122
typedef struct __anonstruct_client_info_48 client_info;
# 129
struct __anonstruct_server_info_49 {
   int connected ;
   char *realname ;
   char *greeting[4] ;
   char *isupport[3] ;
   int current ;
};
# 129
typedef struct __anonstruct_server_info_49 server_info;
# 137
struct __anonstruct_cfg_type_50 {
   int listenport ;
   int logging ;
   int leave ;
   int getnick ;
   int antiidle ;
   int nevergiveup ;
   int jumprestricted ;
   int rejoin ;
   int dccbounce ;
   char *nickname ;
   char *altnickname ;
   char *username ;
   char *realname ;
   char *password ;
   char *home ;
   char *leavemsg ;
   char *bind ;
   char *listenhost ;
   char *awaynotice ;
   char *forwardmsg ;
   char *channels ;
   char *dccbind ;
};
# 163
struct __anonstruct_server_type_51 {
   char *name ;
   int port ;
   char *password ;
   int working ;
};
# 163
typedef struct __anonstruct_server_type_51 server_type;
# 170
struct __anonstruct_serverlist_type_52 {
   server_type **data ;
   int amount ;
};
# 170
typedef struct __anonstruct_serverlist_type_52 serverlist_type;
# 175
struct __anonstruct_connection_type_53 {
   int socket ;
   int timer ;
   char buffer[1024] ;
   int offset ;
};
# 175
typedef struct __anonstruct_connection_type_53 connection_type;
# 182
struct __anonstruct_timer_type_54 {
   int reply ;
   int listen ;
   int nickname ;
   int antiidle ;
   int forward ;
};
# 182
typedef struct __anonstruct_timer_type_54 timer_type;
# 20 "channels.h"
struct __anonstruct_channellist_type_55 {
   char **data ;
   char **topic ;
   char **topicwho ;
   char **topicwhen ;
   int amount ;
};
# 20
typedef struct __anonstruct_channellist_type_55 channellist_type;
# 35 "log.h"
struct LogHash {
   char *channel ;
   int logtype ;
   char *filename ;
   FILE *logfile ;
   struct LogHash *next ;
};
# 26 "commands.c"
struct CommandHash {
   char const   *cmd ;
   int cmdvalue ;
   struct CommandHash *next ;
};
# 34
struct CommandAddStruct {
   char *cmd ;
   int mask ;
};
# 32 "dcc.c"
struct __anonstruct_dccbounce_55 {
   int src ;
   int dest ;
   int src_wa ;
   int dest_wa ;
   int connected ;
   time_t created ;
   int srcport ;
   struct sockaddr_in destaddr ;
};
# 32
typedef struct __anonstruct_dccbounce_55 dccbounce;
# 48
struct __anonstruct_dccbounce_type_56 {
   dccbounce **data ;
   int amount ;
};
# 48
typedef struct __anonstruct_dccbounce_type_56 dccbounce_type;
# 55
struct __anonstruct_dcccommand_57 {
   char type[16] ;
   int argc ;
   char *arg1 ;
   int args[3] ;
   int fromclient ;
};
# 55
typedef struct __anonstruct_dcccommand_57 dcccommand;
# 66
struct __anonstruct_dcccall_58 {
   char *cmd ;
   int (*func)(char *dest , dcccommand *dcc ) ;
};
# 66
typedef struct __anonstruct_dcccall_58 dcccall;
# 20 "ignore.c"
struct __anonstruct_ignore_type_55 {
   char *hostname ;
   int ttl ;
   int type ;
};
# 20
typedef struct __anonstruct_ignore_type_55 ignore_type;
# 26
struct __anonstruct_ignores_type_56 {
   ignore_type **data ;
   int amount ;
};
# 26
typedef struct __anonstruct_ignores_type_56 ignores_type;
# 19 "perm.h"
struct __anonstruct_perm_type_55 {
   char *name ;
   int allowed ;
};
# 19
typedef struct __anonstruct_perm_type_55 perm_type;
# 24
struct __anonstruct_permlist_type_56 {
   perm_type **data ;
   int amount ;
};
# 24
typedef struct __anonstruct_permlist_type_56 permlist_type;
# 73 "parser.y"
union __anonunion_yystype_57 {
   int boolean ;
   int number ;
   char *string ;
};
# 73
typedef union __anonunion_yystype_57 yystype;
# 78 "/usr/share/bison/bison.simple"
union yyalloc {
   short yyss ;
   yystype yyvs ;
};
# 101 "lexer.c"
typedef struct yy_buffer_state *YY_BUFFER_STATE;
# 143
typedef unsigned int yy_size_t;
# 146
struct yy_buffer_state {
   FILE *yy_input_file ;
   char *yy_ch_buf ;
   char *yy_buf_pos ;
   yy_size_t yy_buf_size ;
   int yy_n_chars ;
   int yy_is_our_buffer ;
   int yy_is_interactive ;
   int yy_at_bol ;
   int yy_fill_buffer ;
   int yy_buffer_status ;
};
# 269
typedef unsigned char YY_CHAR;
# 271
typedef int yy_state_type;
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
# 22 "ascii.h"
char pics[3][5][23] ;
# 20 "ascii.c"
char pics[3][5][23]   = {{{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                           ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\\', '_',
                           '/', ' ', '\0'}, {' ', 'm', 'u', 'h', '!', ' ', '(',
                                             ' ', '_', ' ', ')', ' ', ' ', ' ',
                                             ' ', ' ', ' ', '-', '(', '_', ')',
                                             '-', '\0'},
                          {' ', ' ', ' ', '\\', ' ', ' ', '~', 'O', ' ', 'o',
                           '~', '_', '_', ' ', ' ', ' ', ' ', ' ', '/', ' ',
                           '\\', ' ', '\0'}, {' ', ' ', ' ', ' ', ' ', ' ', '(',
                                              '.', '_', '.', ')', ' ', '|',
                                              '\\', ' ', ' ', ' ', ' ', ' ',
                                              ' ', ' ', ' ', '\0'},
                          {'_', '_', '_', '_', '_', '_', '_', '_', '|', '_',
                           '|', '_', '|', '_', '_', '_', '_', '_', '_', '_',
                           '_', '_', '\0'}}, {{' ', '*', ' ', ' ', ' ', ' ',
                                               ' ', '*', ' ', ' ', ' ', ' ',
                                               ' ', ' ', ' ', ' ', ' ', ' ',
                                               ' ', '_', ' ', ' ', '\0'},
                                              {' ', ' ', ' ', ' ', '*', ' ',
                                               ' ', ' ', ' ', ' ', ' ', ' ',
                                               '*', ' ', ' ', ' ', '*', ' ',
                                               '(', '_', ')', ' ', '\0'},
                                              {' ', ' ', ' ', ' ', ' ', ' ',
                                               '(', ' ', '_', ' ', ')', ' ',
                                               ' ', ' ', '*', ' ', ' ', ' ',
                                               ' ', ' ', ' ', ' ', '\0'},
                                              {' ', '*', ' ', ' ', ' ', ' ',
                                               '~', 'u', ' ', 'u', '~', '_',
                                               '_', ' ', ' ', ' ', ' ', ' ',
                                               '*', ' ', ' ', ' ', '\0'},
                                              {'_', '_', '_', '_', '_', '_',
                                               '(', '.', '_', '.', ')', '_',
                                               '|', '\\', '_', '_', '_', '_',
                                               '_', '_', '_', '\0', (char )0}},
                         {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                           ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/', '\\',
                           ' ', ' ', '\0'}, {'x', '-', 'm', 'u', 'h', '!', '(',
                                             ' ', '_', ' ', ')', ' ', ' ', ' ',
                                             ' ', ' ', ' ', '/', ' ', 'o', '\\',
                                             ' ', '\0'},
                          {' ', ' ', ' ', ' ', '\\', ' ', '~', '@', ' ', '*',
                           '~', '_', '_', ' ', ' ', ' ', '/', 'o', ' ', ' ',
                           ' ', '\\', '\0'}, {' ', ' ', ' ', ' ', ' ', ' ', '(',
                                              '.', '_', '.', ')', ' ', '|',
                                              '\\', ' ', ' ', '/', '_', '_',
                                              '_', 'o', '\\', '\0'},
                          {'_', '_', '_', '_', '_', '_', '_', '_', '|', '_',
                           '|', '_', '|', '_', '_', '_', '_', '_', '|', '|',
                           '_', '_', '\0'}}};
# 432 "/usr/include/libio.h"
extern int _IO_getc(_IO_FILE *__fp ) ;
# 167 "/users/rupak/ccured/include/ccured_GNUCC.patch"
extern FILE *get_stdin(void) ;
# 169
extern FILE *get_stdout(void) ;
# 171
extern FILE *get_stderr(void) ;
# 202 "/usr/include/stdio.h"
extern int fclose(FILE *__stream ) ;
# 204
extern int fflush(FILE *__stream ) ;
# 221
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes ) ;
# 224
extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream ) ;
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
# 323
extern int vsnprintf(char * __restrict  __s , size_t __maxlen ,
                     char const   * __restrict  __format , __gnuc_va_list __arg ) ;
# 442
extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;
# 491
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n ,
                    FILE * __restrict  __stream ) ;
# 494
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size ,
                     size_t __n , FILE * __restrict  __s ) ;
# 515
extern int fseek(FILE *__stream , long __off , int __whence ) ;
# 517
extern long ftell(FILE *__stream ) ;
# 519
extern void rewind(FILE *__stream ) ;
# 577
extern void clearerr(FILE *__stream ) ;
# 581
extern int ferror(FILE *__stream ) ;
# 594
extern void perror(char const   *__s ) ;
# 606
extern int fileno(FILE *__stream ) ;
# 618
extern FILE *popen(char const   *__command , char const   *__modes ) ;
# 621
extern int pclose(FILE *__stream ) ;
# 264 "/users/rupak/ccured/include/ccured_GNUCC.patch"
extern void __ccured_va_start(__ccured_va_list  , unsigned long  ) ;
# 267
extern void __ccured_va_end(__ccured_va_list  ) ;
# 337 "/users/rupak/ccured/include/stdio_wrappers.h"
extern int ( /* missing proto */  GCC_STDARG_START)() ;
# 468
void perror_wrapper(char const   *s___0 ) 
{ char const   *tmp ;

  {
  {
# 469
  tmp = (char const   *)__stringof(s___0);
# 469
  perror(tmp);
  }
# 470
  return;
}
}
# 144 "/users/rupak/ccured/include/gcc_3.2/stdlib.h"
extern int atoi(char const   *__nptr )  __attribute__((__pure__)) ;
# 179
extern unsigned long strtoul(char const   * __restrict  __nptr ,
                             char ** __restrict  __endptr , int __base ) ;
# 48 "/users/rupak/ccured/include/time_wrappers.h"
extern time_t time(time_t *__timer ) ;
# 106 "/usr/include/sys/select.h"
extern int select(int __nfds , fd_set * __restrict  __readfds ,
                  fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds ,
                  struct timeval * __restrict  __timeout ) ;
# 423 "/usr/include/stdlib.h"
extern long random(void) ;
# 473
extern int rand(void) ;
# 475
extern void srand(unsigned int __seed ) ;
# 556
extern void *malloc(size_t __size )  __attribute__((__malloc__)) ;
# 558
extern void *calloc(size_t __nmemb , size_t __size )  __attribute__((__malloc__)) ;
# 539 "/users/rupak/ccured/include/ccured_GNUCC.patch"
extern void *realloc(void *__ptr , size_t __size ) ;
# 569 "/usr/include/stdlib.h"
extern void free(void *__ptr ) ;
# 612
void exit(int __status )  __attribute__((__noreturn__)) ;
# 613
void exit(int __status )  __attribute__((__noreturn__)) ;
# 613
# 626
extern char *getenv(char const   *__name ) ;
# 10 "/users/rupak/ccured/include/malloc_wrappers.h"
void *realloc_wrapper(void *b , int sz ) 
{ void *res ;
  void *tmp ;
  void *tmp___0 ;
  void *result ;

  {
  {
# 12
  tmp = (void *)__ptrof(b);
# 12
  tmp___0 = realloc(tmp, (unsigned int )sz);
# 12
  res = tmp___0;
# 15
  result = b;
# 17
  result = __mkptr_size((void */* __attribute__((__safe__)) */)res,
                        (unsigned int )sz);
  }
# 18
  return (result);
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
# 82
extern char *strcpy(char * __restrict  __dest ,
                    char const   * __restrict  __src ) ;
# 85
extern char *strncpy(char * __restrict  __dest ,
                     char const   * __restrict  __src , size_t __n ) ;
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
# 191 "/usr/include/string.h"
extern char *strtok(char * __restrict  __s , char const   * __restrict  __delim ) ;
# 230
extern size_t strlen(char const   *__s )  __attribute__((__pure__)) ;
# 243
extern char *strerror(int __errnum ) ;
# 260
extern void bzero(void *__s , size_t __n ) ;
# 287
extern int strcasecmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__)) ;
# 291
extern int strncasecmp(char const   *__s1 , char const   *__s2 , size_t __n )  __attribute__((__pure__)) ;
# 138 "/users/rupak/ccured/include/string_wrappers.h"
char *strrchr_wrapper(char const   *s___0 , int chr ) 
{ char *result ;
  char *tmp ;
  char *tmp___0 ;

  {
  {
# 141
  tmp = __stringof(s___0);
# 141
  result = strrchr((char const   *)tmp, chr);
# 142
  tmp___0 = (char *)__mkptr((void */* __attribute__((__safe__)) */)((void *)result),
                            (void *)s___0);
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
# 38 "/usr/include/bits/errno.h"
extern int *__errno_location(void)  __attribute__((__const__)) ;
# 60 "/users/rupak/ccured/include/gcc_3.2/fcntl.h"
extern int fcntl(int __fd , int __cmd  , ...) ;
# 74 "/users/rupak/ccured/include/io_wrappers.h"
extern int unlink(char const   *__name ) ;
# 306 "/users/rupak/ccured/include/gcc_3.2/unistd.h"
extern int close(int __fd ) ;
# 310
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
# 313
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
# 371
extern unsigned int sleep(unsigned int __seconds ) ;
# 409
extern int chdir(char const   *__path ) ;
# 665
extern __pid_t fork(void) ;
# 686
extern int isatty(int __fd ) ;
# 47 "/usr/include/getopt.h"
extern char *optarg ;
# 66
extern int opterr ;
# 70
extern int optopt ;
# 145
extern int getopt(int ___argc , char * const  *___argv ,
                  char const   *__shortopts ) ;
# 752 "/users/rupak/ccured/include/gcc_3.2/unistd.h"
extern int gethostname(char *__name , size_t __len ) ;
# 817
extern char *getpass(char const   *__prompt ) ;
# 100 "/usr/include/sys/socket.h"
extern int socket(int __domain , int __type , int __protocol ) ;
# 110
extern int bind(int __fd , void const   *__addr , socklen_t __len ) ;
# 121
extern int connect(int __fd , void const   *__addr , socklen_t __len ) ;
# 136
extern ssize_t recv(int __fd , void *__buf , size_t __n , int __flags ) ;
# 168
extern int getsockopt(int __fd , int __level , int __optname ,
                      void * __restrict  __optval ,
                      socklen_t * __restrict  __optlen ) ;
# 175
extern int setsockopt(int __fd , int __level , int __optname ,
                      void const   *__optval , socklen_t __optlen ) ;
# 182
extern int listen(int __fd , int __n ) ;
# 189
extern int accept(int __fd , void * __restrict  __addr ,
                  socklen_t * __restrict  __addr_len ) ;
# 272 "/users/rupak/ccured/include/gcc_3.2/sys/stat.h"
extern __mode_t umask(__mode_t __mask ) ;
# 61 "/users/rupak/ccured/include/gcc_3.2/netdb.h"
extern int *__h_errno_location(void)  __attribute__((__const__)) ;
# 91
extern char const   *hstrerror(int __err_num ) ;
# 119
extern struct hostent *gethostbyaddr(void const   *__addr , __socklen_t __len ,
                                     int __type ) ;
# 123
extern struct hostent *gethostbyname(char const   *__name ) ;
# 468
extern char const   *gai_strerror(int __ecode ) ;
# 48 "/users/rupak/ccured/include/functions/getaddrinfo.h"
extern int true_getaddrinfo(char const   *node , char const   *service ,
                            struct libc_addrinfo  const  *hints ,
                            struct libc_addrinfo **res ) ;
# 52
extern void true_freeaddrinfo(struct libc_addrinfo *res ) ;
# 58
int getaddrinfo_wrapper(char const   *node , char const   *service ,
                        struct addrinfo  const  *hints , struct addrinfo **res ) 
{ struct libc_addrinfo libc_hints ;
  struct libc_addrinfo *libc_res ;
  struct libc_addrinfo *source ;
  struct addrinfo *dest ;
  int len ;
  int ret ;
  char const   *tmp ;
  char const   *tmp___0 ;
  struct addrinfo *newNode ;
  struct addrinfo *tmp___1 ;
  void * __restrict  tmp___3 ;
  size_t tmp___4 ;
  void * __restrict  tmp___6 ;

  {
  {
# 67
  dest = (struct addrinfo *)((void *)0);
# 75
  libc_hints.ai_flags = hints->ai_flags;
# 76
  libc_hints.ai_family = hints->ai_family;
# 77
  libc_hints.ai_socktype = hints->ai_socktype;
# 78
  libc_hints.ai_protocol = hints->ai_protocol;
# 79
  libc_hints.ai_addrlen = hints->ai_addrlen;
# 80
  libc_hints.ai_addr = (struct sockaddr *)__ptrof((void *)hints->ai_addr);
# 81
  libc_hints.ai_canonname = (char *)__ptrof((void *)hints->ai_canonname);
# 82
  libc_hints.ai_next = (struct libc_addrinfo *)((void *)0);
# 88
  tmp = (char const   *)__ptrof((void *)service);
# 88
  tmp___0 = (char const   *)__ptrof((void *)node);
# 88
  ret = true_getaddrinfo(tmp___0, tmp,
                         (struct libc_addrinfo  const  *)(& libc_hints),
                         & libc_res);
  }
# 90
  if (ret != 0) {
# 91
    return (ret);
  }
  {
# 97
  (*res) = (struct addrinfo *)((void *)0);
# 98
  source = libc_res;
  }
# 98
  while ((unsigned int )source != (unsigned int )((void *)0)) {
    {
# 100
    tmp___1 = (struct addrinfo *)wrapperAlloc(sizeof((*dest)));
# 100
    newNode = tmp___1;
    }
# 102
    if (dest) {
      {
# 108
      dest->ai_next = newNode;
      }
    } else {
      {
# 104
      (*res) = newNode;
      }
    }
    {
# 110
    dest = newNode;
# 113
    dest->ai_flags = source->ai_flags;
# 114
    dest->ai_family = source->ai_family;
# 115
    dest->ai_socktype = source->ai_socktype;
# 116
    dest->ai_protocol = source->ai_protocol;
# 117
    dest->ai_addrlen = source->ai_addrlen;
# 119
    len = (int )source->ai_addrlen;
# 120
    dest->ai_addr = (struct sockaddr *)wrapperAlloc((unsigned int )len);
# 122
    tmp___3 = (void */* __restrict  */)__ptrof((void *)dest->ai_addr);
# 122
    memcpy(tmp___3,
           (void const   */* __restrict  */)((void const   *)source->ai_addr),
           (unsigned int )len);
    }
# 124
    if (source->ai_canonname) {
      {
# 125
      tmp___4 = strlen((char const   *)source->ai_canonname);
# 125
      len = (int )(tmp___4 + 1U);
# 126
      dest->ai_canonname = (char *)wrapperAlloc((unsigned int )len);
# 127
      tmp___6 = (void */* __restrict  */)__ptrof((void *)dest->ai_canonname);
# 127
      memcpy(tmp___6,
             (void const   */* __restrict  */)((void const   *)source->ai_canonname),
             (unsigned int )len);
      }
    } else {
      {
# 130
      dest->ai_canonname = (char *)((void *)0);
      }
    }
    {
# 134
    dest->ai_next = (struct addrinfo *)((void *)0);
# 98
    source = source->ai_next;
    }
  }
  {
# 139
  true_freeaddrinfo(libc_res);
  }
# 141
  return (ret);
}
}
# 146
void freeaddrinfo_wrapper(struct addrinfo *res ) 
{ struct addrinfo *next ;

  {
# 150
  while (res) {
    {
# 151
    next = res->ai_next;
# 153
    free_wrapper((void *)res->ai_addr);
    }
# 154
    if (res->ai_canonname) {
      {
# 155
      free_wrapper((void *)res->ai_canonname);
      }
    }
    {
# 157
    free_wrapper((void *)res);
# 159
    res = next;
    }
  }
# 161
  return;
}
}
# 164
char const   *gai_strerror_wrapper(int code ) 
{ char * __attribute__((__safe__)) tmp ;
  char const   *tmp___0 ;

  {
  {
# 165
  tmp = (char */* __attribute__((__safe__)) */)gai_strerror(code);
# 165
  tmp___0 = (char const   *)__mkptr_string(tmp);
  }
# 165
  return (tmp___0);
}
}
# 54 "/users/rupak/ccured/include/gcc_3.2/arpa/inet.h"
extern char *inet_ntoa(struct in_addr __in ) ;
# 522 "/users/rupak/ccured/include/ccured_GNUCC.patch"
char *inet_ntoa_wrapper(struct in_addr __in ) 
{ char * __attribute__((__safe__)) tmp ;
  char *tmp___0 ;

  {
  {
# 524
  tmp = (char */* __attribute__((__safe__)) */)inet_ntoa(__in);
# 524
  tmp___0 = __mkptr_string(tmp);
  }
# 524
  return (tmp___0);
}
}
# 114 "/users/rupak/ccured/include/gcc_3.2/signal.h"
extern int kill(__pid_t __pid , int __sig ) ;
# 209
extern int sigemptyset(sigset_t *__set ) ;
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
# 116 "/usr/include/ctype.h"
extern int tolower(int __c ) ;
# 119
extern int toupper(int __c ) ;
# 33 "/users/rupak/ccured/include/gcc_3.2/crypt.h"
extern char *crypt(char const   *__key , char const   *__salt ) ;
# 197 "/users/rupak/ccured/include/gcc_3.2/time.h"
extern size_t strftime(char * __restrict  __s , size_t __maxsize ,
                       char const   * __restrict  __format ,
                       struct tm  const  * __restrict  __tp ) ;
# 229
extern struct tm *gmtime(time_t const   *__timer ) ;
# 233
extern struct tm *localtime(time_t const   *__timer ) ;
# 39 "common.h"
int _xstrcmp(char const   *s1 , char const   *s2 , char const   *file ,
             int line ) ;
# 40
int _xstrncmp(char const   *s1 , char const   *s2 , size_t n ,
              char const   *file , int line ) ;
# 41
int _xstrcasecmp(char const   *s1 , char const   *s2 , char const   *file ,
                 int line ) ;
# 44
char *_xstrcpy(char *dest , char const   *src , char const   *file , int line ) ;
# 45
char *_xstrncpy(char *dest , char const   *src , size_t n , char const   *file ,
                int line ) ;
# 47
void *xmalloc(size_t size ) ;
# 48
void *xcalloc(size_t nmemb , size_t size ) ;
# 49
void xfree(void *ptr ) ;
# 50
void *xrealloc(void *ptr , size_t size ) ;
# 190 "muh.h"
server_info i_server  ;
# 191
client_info i_client  ;
# 192
client_info i_newclient  ;
# 194
connection_type c_server  ;
# 195
connection_type c_client  ;
# 196
connection_type c_newclient  ;
# 198
struct __anonstruct_cfg_type_50 cfg ;
# 199
status_type status  ;
# 200
serverlist_type servers  ;
# 202
FILE *messagelog ;
# 203
void escape(void) ;
# 204
void read_cfg(void) ;
# 205
void drop_client(char *reason ) ;
# 206
void drop_newclient(char *reason ) ;
# 207
void drop_server(char *reason ) ;
# 208
void drop_all(char *reason ) ;
# 209
void server_next(int disablecurrent ) ;
# 210
int proceed_timer(int *timer , int warn , int exceed ) ;
# 214
int lineno ;
# 215
FILE *yyin ;
# 216
void yyrestart(FILE *input_file ) ;
# 219
int yyparse(void) ;
# 29 "channels.h"
channellist_type channels  ;
# 31
void add_channel(char *s___0 ) ;
# 32
void rem_channel(char *s___0 ) ;
# 33
void drop_channels(void) ;
# 34
void compact_channels_table(int *amount ) ;
# 35
char *list_channels(void) ;
# 38
void channel_topic(char *channel , char *topic ) ;
# 39
void channel_when(char *channel , char *topicwho , char *topicwhen ) ;
# 41
int find_channel(char *p ) ;
# 42
unsigned int hash_channel(char *p ) ;
# 19 "table.h"
void **add_item(void **data , int elementsize , int *entries , int *indx ) ;
# 20
void **rem_item(void **data , int number , int *entries ) ;
# 21
void **compact_table(void **data , int *entries ) ;
# 22
void **free_table(void **data , int *entries , int clear ) ;
# 44 "log.h"
int global_logtype  ;
# 46
void add_log(char *log_channel , char *logfile , int logtype___0 ) ;
# 47
void add_log_global(char *channel ) ;
# 48
void rem_log(char *channel ) ;
# 49
void clear_logs(void) ;
# 50
void close_logs(void) ;
# 51
void open_logfile(struct LogHash *ptr ) ;
# 52
struct LogHash *find_log_any(char *channel , int logtype___0 ) ;
# 54
void write_logentry(struct LogHash *ptr , char *format  , ...) ;
# 55
void write_logentry_all(int type , char *format  , ...) ;
# 28 "channels.c"
void add_channel(char *s___0 ) 
{ struct LogHash *ptr ;
  int i ;
  int indx ;
  int tmp ;

  {
  {
# 32
  indx = -1;
# 35
  i = 0;
  }
# 35
  while (i < channels.amount) {
# 37
    if ((*(channels.data + i))) {
      {
# 37
      tmp = _xstrcmp((char const   *)(*(channels.data + i)),
                     (char const   *)s___0, (char const   *)"channels.c", 37);
      }
# 37
      if (tmp == 0) {
# 38
        return;
      }
    }
    {
# 35
    i ++;
    }
  }
  {
# 41
  i = 0;
  }
# 41
  while (i < channels.amount) {
# 43
    if (! (*(channels.data + i))) {
      {
# 45
      indx = i;
      }
# 46
      break;
    }
    {
# 41
    i ++;
    }
  }
# 51
  if (indx < 0) {
    {
# 53
    channels.amount ++;
# 53
    channels.data = (char **)xrealloc((void *)channels.data,
                                      (unsigned int )channels.amount *
                                      sizeof(void *));
# 54
    indx = channels.amount - 1;
    }
  }
  {
# 57
  (*(channels.data + indx)) = strdup((char const   *)s___0);
# 60
  channels.topic = (char **)xrealloc((void *)channels.topic,
                                     (unsigned int )channels.amount *
                                     sizeof(void *));
# 61
  channels.topicwho = (char **)xrealloc((void *)channels.topicwho,
                                        (unsigned int )channels.amount *
                                        sizeof(void *));
# 62
  channels.topicwhen = (char **)xrealloc((void *)channels.topicwhen,
                                         (unsigned int )channels.amount *
                                         sizeof(void *));
# 64
  (*(channels.topic + indx)) = (char *)((void *)0);
# 65
  (*(channels.topicwho + indx)) = (char *)((void *)0);
# 66
  (*(channels.topicwhen + indx)) = (char *)((void *)0);
# 68
  ptr = find_log_any((*(channels.data + indx)), 0);
  }
# 68
  if (ptr) {
    {
# 69
    open_logfile(ptr);
    }
  } else {
# 71
    if (global_logtype) {
      {
# 72
      add_log_global((*(channels.data + indx)));
      }
    }
  }
# 73
  return;
}
}
# 79
void rem_channel(char *s___0 ) 
{ int i ;
  int tmp ;

  {
  {
# 82
  i = 0;
  }
# 82
  while (i < channels.amount) {
# 84
    if ((*(channels.data + i))) {
      {
# 84
      tmp = _xstrcmp((char const   *)(*(channels.data + i)),
                     (char const   *)s___0, (char const   *)"channels.c", 84);
      }
# 84
      if (tmp == 0) {
# 86
        if (i >= 0) {
# 86
          if (i < channels.amount) {
# 91
            if ((*(channels.data + i))) {
              {
# 91
              free((void *)(*(channels.data + i)));
# 91
              (*(channels.data + i)) = (char *)((void *)0);
              }
            }
# 92
            if ((*(channels.topic + i))) {
              {
# 92
              free((void *)(*(channels.topic + i)));
# 92
              (*(channels.topic + i)) = (char *)((void *)0);
              }
            }
# 93
            if ((*(channels.topicwho + i))) {
              {
# 93
              free((void *)(*(channels.topicwho + i)));
# 93
              (*(channels.topicwho + i)) = (char *)((void *)0);
              }
            }
# 94
            if ((*(channels.topicwhen + i))) {
              {
# 94
              free((void *)(*(channels.topicwhen + i)));
# 94
              (*(channels.topicwhen + i)) = (char *)((void *)0);
              }
            }
          }
        }
        {
# 97
        compact_channels_table(& channels.amount);
        }
      }
    }
    {
# 82
    i ++;
    }
  }
# 100
  return;
}
}
# 106
void compact_channels_table(int *amount ) 
{ int i ;

  {
  {
# 108
  i = (*amount) - 1;
  }
# 110
  while (i >= 0) {
# 112
    if ((*(channels.data + i))) {
      {
# 130
      i = -1;
      }
    } else {
      {
# 114
      (*amount) --;
# 115
      channels.data = (char **)xrealloc((void *)channels.data,
                                        (unsigned int )(*amount) *
                                        sizeof(void *));
# 116
      channels.topic = (char **)xrealloc((void *)channels.topic,
                                         (unsigned int )(*amount) *
                                         sizeof(void *));
# 117
      channels.topicwho = (char **)xrealloc((void *)channels.topicwho,
                                            (unsigned int )(*amount) *
                                            sizeof(void *));
# 118
      channels.topicwhen = (char **)xrealloc((void *)channels.topicwhen,
                                             (unsigned int )(*amount) *
                                             sizeof(void *));
      }
# 120
      if (! (*amount)) {
        {
# 122
        channels.data = (char **)((void *)0);
# 123
        channels.topic = (char **)((void *)0);
# 124
        channels.topicwho = (char **)((void *)0);
# 125
        channels.topicwhen = (char **)((void *)0);
        }
      }
    }
    {
# 132
    i --;
    }
  }
# 134
  return;
}
}
# 140
int find_channel(char *p ) 
{ int i ;
  int tmp ;

  {
# 144
  if (! channels.amount) {
# 145
    return (-1);
  }
  {
# 147
  i = 0;
  }
# 147
  while (i < channels.amount) {
# 149
    if ((*(channels.data + i))) {
      {
# 149
      tmp = _xstrcmp((char const   *)(*(channels.data + i)), (char const   *)p,
                     (char const   *)"channels.c", 149);
      }
# 149
      if (tmp == 0) {
# 150
        return (i);
      }
    }
    {
# 147
    i ++;
    }
  }
# 153
  return (-1);
}
}
# 160
void drop_channels(void) 
{ int i ;

  {
  {
# 164
  close_logs();
# 166
  i = 0;
  }
# 166
  while (i < channels.amount) {
# 168
    if ((*(channels.data + i))) {
      {
# 168
      free((void *)(*(channels.data + i)));
# 168
      (*(channels.data + i)) = (char *)((void *)0);
      }
    }
# 169
    if ((*(channels.topic + i))) {
      {
# 169
      free((void *)(*(channels.topic + i)));
# 169
      (*(channels.topic + i)) = (char *)((void *)0);
      }
    }
# 170
    if ((*(channels.topicwho + i))) {
      {
# 170
      free((void *)(*(channels.topicwho + i)));
# 170
      (*(channels.topicwho + i)) = (char *)((void *)0);
      }
    }
# 171
    if ((*(channels.topicwhen + i))) {
      {
# 171
      free((void *)(*(channels.topicwhen + i)));
# 171
      (*(channels.topicwhen + i)) = (char *)((void *)0);
      }
    }
    {
# 166
    i ++;
    }
  }
# 174
  if (channels.data) {
    {
# 174
    free((void *)channels.data);
# 174
    channels.data = (char **)((void *)0);
    }
  }
# 175
  if (channels.topic) {
    {
# 175
    free((void *)channels.topic);
# 175
    channels.topic = (char **)((void *)0);
    }
  }
# 176
  if (channels.topicwho) {
    {
# 176
    free((void *)channels.topicwho);
# 176
    channels.topicwho = (char **)((void *)0);
    }
  }
# 177
  if (channels.topicwhen) {
    {
# 177
    free((void *)channels.topicwhen);
# 177
    channels.topicwhen = (char **)((void *)0);
    }
  }
  {
# 179
  channels.amount = 0;
  }
# 180
  return;
}
}
# 186
char *list_channels(void) 
{ int i ;
  char *temp ;
  size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;

  {
# 191
  if (! channels.amount) {
# 192
    return ((char *)((void *)0));
  }
  {
# 194
  temp = (char *)xmalloc(1U);
# 195
  (*(temp + 0)) = (char )0;
# 197
  i = 0;
  }
# 197
  while (i < channels.amount) {
# 199
    if ((*(channels.data + i))) {
      {
# 201
      tmp = strlen((char const   *)temp);
# 201
      tmp___0 = strlen((char const   *)(*(channels.data + i)));
# 201
      temp = (char *)xrealloc((void *)temp, (tmp + tmp___0) + 2U);
# 202
      strcat((char */* __restrict  */)temp,
             (char const   */* __restrict  */)((char const   *)(*(channels.data +
                                                                  i))));
# 203
      strcat((char */* __restrict  */)temp,
             (char const   */* __restrict  */)((char const   *)","));
      }
    }
    {
# 197
    i ++;
    }
  }
  {
# 208
  tmp___1 = strlen((char const   *)temp);
# 208
  (*(temp + (tmp___1 - 1U))) = (char )0;
  }
# 209
  return (temp);
}
}
# 216
void channel_topic(char *channel , char *topic ) 
{ int i ;
  int hastopic ;
  char *p ;
  int tmp ;

  {
  {
# 219
  hastopic = 1;
# 222
  p = topic;
# 223
  p ++;
  }
# 226
  if (p) {
# 226
    if ((int )(*p) == 0) {
      {
# 227
      hastopic = 0;
      }
    }
  } else {
    {
# 227
    hastopic = 0;
    }
  }
  {
# 230
  i = 0;
  }
# 230
  while (i < channels.amount) {
# 232
    if ((*(channels.data + i))) {
      {
# 232
      tmp = _xstrcmp((char const   *)(*(channels.data + i)),
                     (char const   *)channel, (char const   *)"channels.c", 232);
      }
# 232
      if (tmp) {
        goto __Cont;
      }
    }
# 235
    if ((*(channels.topic + i))) {
      {
# 235
      free((void *)(*(channels.topic + i)));
# 235
      (*(channels.topic + i)) = (char *)((void *)0);
      }
    }
# 237
    if (hastopic) {
      {
# 238
      (*(channels.topic + i)) = strdup((char const   *)topic);
      }
    }
# 241
    if ((*(channels.topicwho + i))) {
      {
# 241
      free((void *)(*(channels.topicwho + i)));
# 241
      (*(channels.topicwho + i)) = (char *)((void *)0);
      }
    }
# 242
    if ((*(channels.topicwhen + i))) {
      {
# 242
      free((void *)(*(channels.topicwhen + i)));
# 242
      (*(channels.topicwhen + i)) = (char *)((void *)0);
      }
    }
# 244
    return;
    __Cont: 
    {
# 230
    i ++;
    }
  }
# 246
  return;
}
}
# 252
void channel_when(char *channel , char *topicwho , char *topicwhen ) 
{ int i ;
  int tmp ;

  {
  {
# 256
  i = 0;
  }
# 256
  while (i < channels.amount) {
# 258
    if ((*(channels.data + i))) {
      {
# 258
      tmp = _xstrcmp((char const   *)(*(channels.data + i)),
                     (char const   *)channel, (char const   *)"channels.c", 258);
      }
# 258
      if (tmp) {
        goto __Cont;
      }
    }
# 261
    if ((*(channels.topic + i))) {
# 263
      if ((*(channels.topicwho + i))) {
        {
# 263
        free((void *)(*(channels.topicwho + i)));
# 263
        (*(channels.topicwho + i)) = (char *)((void *)0);
        }
      }
# 264
      if ((*(channels.topicwhen + i))) {
        {
# 264
        free((void *)(*(channels.topicwhen + i)));
# 264
        (*(channels.topicwhen + i)) = (char *)((void *)0);
        }
      }
      {
# 266
      (*(channels.topicwho + i)) = strdup((char const   *)topicwho);
# 267
      (*(channels.topicwhen + i)) = strdup((char const   *)topicwhen);
      }
    }
# 270
    return;
    __Cont: 
    {
# 256
    i ++;
    }
  }
# 272
  return;
}
}
# 278
unsigned int hash_channel(char *p ) 
{ int i ;
  unsigned int hash ;
  char *tmp ;
  int tmp___0 ;

  {
  {
# 280
  i = 25;
# 281
  hash = 0U;
  }
# 283
  while (1) {
# 283
    if ((*p)) {
      {
# 283
      i --;
      }
# 283
      if (! i) {
# 283
        break;
      }
    } else {
# 283
      break;
    }
    {
# 284
    tmp = p;
# 284
    p ++;
# 284
    tmp___0 = tolower((int )(*tmp));
# 284
    hash = (hash << 4) - (hash + (unsigned int )((unsigned char )tmp___0));
    }
  }
# 286
  return (hash & 39U);
}
}
# 40 "commands.h"
int find_command(char *p ) ;
# 41
void setup_commands(void) ;
# 21 "commands.c"
static struct CommandHash *cmd_hash[16]  ;
# 22
static int hash_command(char const   *p ) ;
# 23
static void add_command(char const   *cmd , int cmdvalue ) ;
# 45
static struct CommandAddStruct cmd_add_table[13]   = 
# 45
  {{"PING", 1}, {"PONG", 2}, {"MODE", 64}, {"NICK", 4}, {"NOTICE", 1024},
   {"KICK", 8}, {"JOIN", 16}, {"PART", 32}, {"TOPIC", 128}, {"KILL", 256},
   {"PRIVMSG", 512}, {"QUIT", 4096}, {(char *)((void *)0), 0}};
# 67
static int hash_command(char const   *p ) 
{ int hash_val ;

  {
  {
# 69
  hash_val = 0;
  }
# 71
  while ((*p)) {
    {
# 73
    hash_val += (int )(*p) & 223;
# 74
    p ++;
    }
  }
# 77
  return (hash_val % 16);
}
}
# 84
int find_command(char *p ) 
{ struct CommandHash *ptr ;
  int cmdindex ;
  int tmp ;

  {
  {
# 89
  cmdindex = hash_command((char const   *)p);
# 91
  ptr = cmd_hash[cmdindex];
  }
# 91
  while (ptr) {
    {
# 93
    tmp = _xstrcasecmp((char const   *)p, ptr->cmd,
                       (char const   *)"commands.c", 93);
    }
# 93
    if (tmp == 0) {
# 94
      return (ptr->cmdvalue);
    }
    {
# 91
    ptr = ptr->next;
    }
  }
# 97
  return (0);
}
}
# 104
static void add_command(char const   *cmd , int cmdvalue ) 
{ struct CommandHash *ptr ;
  struct CommandHash *temp_ptr ;
  struct CommandHash *last_ptr ;
  int cmdindex ;
  int tmp ;

  {
  {
# 108
  last_ptr = (struct CommandHash *)((void *)0);
# 111
  cmdindex = hash_command(cmd);
# 114
  temp_ptr = cmd_hash[cmdindex];
  }
# 114
  while (temp_ptr) {
    {
# 116
    tmp = _xstrcasecmp(cmd, temp_ptr->cmd, (char const   *)"commands.c", 116);
    }
# 116
    if (tmp == 0) {
# 117
      return;
    }
    {
# 119
    last_ptr = temp_ptr;
# 114
    temp_ptr = temp_ptr->next;
    }
  }
  {
# 122
  ptr = (struct CommandHash *)xcalloc(1U, sizeof(struct CommandHash ));
# 124
  ptr->cmd = cmd;
# 125
  ptr->cmdvalue = cmdvalue;
  }
# 127
  if (last_ptr) {
    {
# 128
    last_ptr->next = ptr;
    }
  } else {
    {
# 130
    cmd_hash[cmdindex] = ptr;
    }
  }
# 131
  return;
}
}
# 137
void setup_commands(void) 
{ int i ;

  {
  {
# 141
  i = 0;
  }
# 141
  while (cmd_add_table[i].cmd) {
    {
# 142
    add_command((char const   *)cmd_add_table[i].cmd, cmd_add_table[i].mask);
# 141
    i ++;
    }
  }
# 143
  return;
}
}
# 22 "irc.h"
int highest_socket ;
# 23
char const   *net_errstr  ;
# 28
int sock_open(void) ;
# 29
int sock_close(connection_type *connection ) ;
# 30
int sock_listen(int sock ) ;
# 31
int sock_setnonblock(int sock ) ;
# 32
int sock_setblock(int sock ) ;
# 33
int sock_setreuse(int sock ) ;
# 34
int sock_bind(int sock , char *bindhost , int port ) ;
# 35
int sock_bindlookedup(int sock , int port ) ;
# 36
int sock_accept(int sock , char **s___0 , int checkperm ) ;
# 39
int rawsock_close(int sock ) ;
# 40
struct hostent *name_lookup(char *host ) ;
# 42
int irc_write(connection_type *connection , char *format  , ...) ;
# 45
int irc_read(connection_type *connection ) ;
# 48
int irc_connect(connection_type *connection , server_type *server ,
                char *nickname , char *username , char *realname , char *bindto ) ;
# 60
void irc_notice(connection_type *connection , char *nickname , char *format 
                , ...) ;
# 20 "tools.h"
void upcase(char *what ) ;
# 21
void randname(char *randchar , int length ) ;
# 23
int pos(char *str , char what ) ;
# 24
int lastpos(char *str , char what ) ;
# 26
char *nextword(char *string ) ;
# 27
char *gettimestamp(void) ;
# 28
char *gettimestamp2(void) ;
# 29
void getuptime(time_t now , int *days , int *hours , int *minutes ,
               int *seconds ) ;
# 30
void report(char *format  , ...) ;
# 31
void error(char *format  , ...) ;
# 19 "dcc.h"
char *dcc_initiate(char *param , int fromclient ) ;
# 20
void dcc_socketsubscribe(fd_set *readset , fd_set *writeset ) ;
# 21
void dcc_socketcheck(fd_set *readset , fd_set *writeset ) ;
# 22
void dcc_timer(void) ;
# 26 "dcc.c"
static int dcc_bouncedata(int a , int b , int *wrflag ) ;
# 27
static int dcc_addbounce(void) ;
# 28
static void dcc_killbounce(int dccindex ) ;
# 53
dccbounce_type dccs  ;
# 63
int dcc_realinitiate(char *dest , dcccommand *dcc ) ;
# 64
int dcc_resume(char *dest , dcccommand *dcc ) ;
# 71
dcccall dcccalls[5]   = {{"CHAT", & dcc_realinitiate},
                         {"SEND", & dcc_realinitiate}, {"RESUME", & dcc_resume},
                         {"ACCEPT", & dcc_resume},
                         {(char *)((void *)0),
                          (int (*)(char *dest , dcccommand *dcc ))((void *)0)}};
# 81
static char buffer[2048]  ;
# 79
static int dcc_bouncedata(int a , int b , int *wrflag ) 
{ int rret ;
  int wret ;
  int *tmp ;
  int *tmp___0 ;

  {
  {
# 83
  rret = recv(a, (void *)(buffer), 2048U, 2);
  }
# 84
  if (rret <= 0) {
    {
# 85
    tmp = __errno_location();
    }
# 85
    if ((*tmp) == 11) {
# 86
      return (1);
    }
# 87
    return (0);
  }
  {
# 90
  wret = write(b, (void const   *)(buffer), (unsigned int )rret);
  }
# 91
  if (wret <= 0) {
    {
# 92
    tmp___0 = __errno_location();
    }
# 92
    if ((*tmp___0) == 11) {
      {
# 93
      (*wrflag) = 0;
      }
    }
# 95
    return (0);
  }
  {
# 99
  recv(a, (void *)(buffer), (unsigned int )wret, 0);
  }
# 101
  if (wret != rret) {
    {
# 102
    (*wrflag) = 0;
    }
  }
# 103
  return (1);
}
}
# 106
static int dcc_addbounce(void) 
{ int dccindex ;

  {
  {
# 109
  dccs.data = (dccbounce **)add_item((void **)dccs.data,
                                     (int )sizeof(dccbounce ), & dccs.amount,
                                     & dccindex);
# 110
  bzero((void *)(*(dccs.data + dccindex)), sizeof(dccbounce ));
# 111
  ((*(dccs.data + dccindex)))->created = time((time_t *)((void *)0));
  }
# 115
  return (dccindex);
}
}
# 118
static void dcc_killbounce(int dccindex ) 
{ 

  {
# 120
  if (((*(dccs.data + dccindex)))->src) {
    {
# 121
    rawsock_close(((*(dccs.data + dccindex)))->src);
    }
  }
# 123
  if (((*(dccs.data + dccindex)))->dest) {
    {
# 124
    rawsock_close(((*(dccs.data + dccindex)))->dest);
    }
  }
  {
# 126
  dccs.data = (dccbounce **)rem_item((void **)dccs.data, dccindex, & dccs.amount);
  }
# 130
  return;
}
}
# 132
void dcc_timer(void) 
{ int i ;
  time_t t ;

  {
  {
# 137
  t = time((time_t *)((void *)0));
# 139
  i = 0;
  }
# 139
  while (i < dccs.amount) {
# 140
    if (! (*(dccs.data + i))) {
      goto __Cont;
    }
# 142
    if (! ((*(dccs.data + i)))->dest) {
# 142
      if (((*(dccs.data + i)))->created + 80L < t) {
        {
# 143
        error("dcc: bounce timed out! [%d]\n", i);
# 144
        dcc_killbounce(i);
        }
        goto __Cont;
      }
    }
    __Cont: 
    {
# 139
    i ++;
    }
  }
# 148
  return;
}
}
# 150
void dcc_socketsubscribe(fd_set *readset , fd_set *writeset ) 
{ int i ;

  {
  {
# 154
  i = 0;
  }
# 154
  while (i < dccs.amount) {
# 155
    if (! (*(dccs.data + i))) {
      goto __Cont;
    }
# 158
    if (((*(dccs.data + i)))->connected) {
# 158
      if (((*(dccs.data + i)))->dest_wa) {
        {
# 159
        readset->__fds_bits[(unsigned int )((*(dccs.data + i)))->src /
                            (8U * sizeof(__fd_mask ))] = readset->__fds_bits[(unsigned int )((*(dccs.data +
                                                                                                i)))->src /
                                                                             (8U *
                                                                              sizeof(__fd_mask ))] |
                                                         (1L <<
                                                          (unsigned int )((*(dccs.data +
                                                                             i)))->src %
                                                          (8U *
                                                           sizeof(__fd_mask )));
        }
      }
    } else {
      {
# 159
      readset->__fds_bits[(unsigned int )((*(dccs.data + i)))->src /
                          (8U * sizeof(__fd_mask ))] = readset->__fds_bits[(unsigned int )((*(dccs.data +
                                                                                              i)))->src /
                                                                           (8U *
                                                                            sizeof(__fd_mask ))] |
                                                       (1L <<
                                                        (unsigned int )((*(dccs.data +
                                                                           i)))->src %
                                                        (8U * sizeof(__fd_mask )));
      }
    }
# 162
    if (((*(dccs.data + i)))->connected) {
# 162
      if (((*(dccs.data + i)))->src_wa) {
        {
# 163
        readset->__fds_bits[(unsigned int )((*(dccs.data + i)))->dest /
                            (8U * sizeof(__fd_mask ))] = readset->__fds_bits[(unsigned int )((*(dccs.data +
                                                                                                i)))->dest /
                                                                             (8U *
                                                                              sizeof(__fd_mask ))] |
                                                         (1L <<
                                                          (unsigned int )((*(dccs.data +
                                                                             i)))->dest %
                                                          (8U *
                                                           sizeof(__fd_mask )));
        }
      }
    }
# 166
    if (((*(dccs.data + i)))->dest) {
# 166
      if (! ((*(dccs.data + i)))->dest_wa) {
        {
# 167
        writeset->__fds_bits[(unsigned int )((*(dccs.data + i)))->dest /
                             (8U * sizeof(__fd_mask ))] = writeset->__fds_bits[(unsigned int )((*(dccs.data +
                                                                                                  i)))->dest /
                                                                               (8U *
                                                                                sizeof(__fd_mask ))] |
                                                          (1L <<
                                                           (unsigned int )((*(dccs.data +
                                                                              i)))->dest %
                                                           (8U *
                                                            sizeof(__fd_mask )));
        }
      }
    }
# 169
    if (((*(dccs.data + i)))->connected) {
# 169
      if (! ((*(dccs.data + i)))->src_wa) {
        {
# 170
        writeset->__fds_bits[(unsigned int )((*(dccs.data + i)))->src /
                             (8U * sizeof(__fd_mask ))] = writeset->__fds_bits[(unsigned int )((*(dccs.data +
                                                                                                  i)))->src /
                                                                               (8U *
                                                                                sizeof(__fd_mask ))] |
                                                          (1L <<
                                                           (unsigned int )((*(dccs.data +
                                                                              i)))->src %
                                                           (8U *
                                                            sizeof(__fd_mask )));
        }
      }
    }
    __Cont: 
    {
# 154
    i ++;
    }
  }
# 173
  return;
}
}
# 175
void dcc_socketcheck(fd_set *readset , fd_set *writeset ) 
{ int i ;
  int sockopt ;
  int len ;
  int socksave ;
  char *host ;
  char *tmp ;
  int tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  {
# 180
  i = 0;
  }
# 180
  while (i < dccs.amount) {
# 181
    if (! (*(dccs.data + i))) {
      goto __Cont;
    }
# 185
    if (((*(dccs.data + i)))->connected) {
# 185
      if (writeset->__fds_bits[(unsigned int )((*(dccs.data + i)))->src /
                               (8U * sizeof(__fd_mask ))] &
          (1L << (unsigned int )((*(dccs.data + i)))->src %
                 (8U * sizeof(__fd_mask )))) {
        {
# 186
        ((*(dccs.data + i)))->src_wa = 1;
        }
      }
    }
# 192
    if (((*(dccs.data + i)))->dest) {
# 192
      if (writeset->__fds_bits[(unsigned int )((*(dccs.data + i)))->dest /
                               (8U * sizeof(__fd_mask ))] &
          (1L << (unsigned int )((*(dccs.data + i)))->dest %
                 (8U * sizeof(__fd_mask )))) {
# 193
        if (((*(dccs.data + i)))->connected) {
          {
# 216
          ((*(dccs.data + i)))->dest_wa = 1;
          }
        } else {
          {
# 194
          len = (int )sizeof(int );
# 195
          getsockopt(((*(dccs.data + i)))->dest, 1, 4,
                     (void */* __restrict  */)((void *)(& sockopt)),
                     (socklen_t */* __restrict  */)((socklen_t *)(& len)));
          }
# 196
          if (sockopt) {
            {
# 197
            tmp = strerror(sockopt);
# 197
            error("dcc: can\'t connect peer! (%s) [%d]\n", tmp, i);
# 198
            dcc_killbounce(i);
            }
            goto __Cont;
          }
          {
# 201
          socksave = ((*(dccs.data + i)))->src;
# 203
          ((*(dccs.data + i)))->src = sock_accept(socksave, & host, 0);
          }
# 203
          if (((*(dccs.data + i)))->src <= 0) {
            {
# 204
            error("dcc: can\'t accept incoming! (%s) [%d]\n", net_errstr, i);
# 205
            dcc_killbounce(i);
            }
            goto __Cont;
          }
          {
# 208
          rawsock_close(socksave);
# 210
          ((*(dccs.data + i)))->connected = 1;
# 211
          report("dcc: bounce from %s established! [%d]\n", host, i);
# 212
          xfree((void *)host);
          }
          goto __Cont;
        }
      }
    }
# 224
    if (readset->__fds_bits[(unsigned int )((*(dccs.data + i)))->src /
                            (8U * sizeof(__fd_mask ))] &
        (1L << (unsigned int )((*(dccs.data + i)))->src %
               (8U * sizeof(__fd_mask )))) {
# 225
      if (((*(dccs.data + i)))->connected) {
        {
# 247
        tmp___2 = dcc_bouncedata(((*(dccs.data + i)))->src,
                                 ((*(dccs.data + i)))->dest,
                                 & ((*(dccs.data + i)))->dest_wa);
        }
# 247
        if (! tmp___2) {
          {
# 248
          report("dcc: ending bounce [%d]\n", i);
# 249
          dcc_killbounce(i);
          }
          goto __Cont;
        }
      } else {
# 227
        if (! ((*(dccs.data + i)))->dest) {
          {
# 228
          ((*(dccs.data + i)))->dest = sock_open();
          }
# 228
          if (((*(dccs.data + i)))->dest < 0) {
            {
# 229
            error("dcc: socket-error! (%s) [%d]\n", net_errstr, i);
# 230
            dcc_killbounce(i);
            }
            goto __Cont;
          }
          {
# 233
          sock_setnonblock(((*(dccs.data + i)))->dest);
# 235
          tmp___0 = connect(((*(dccs.data + i)))->dest,
                            (void const   *)((struct sockaddr *)(& ((*(dccs.data +
                                                                       i)))->destaddr)),
                            sizeof(struct sockaddr ));
          }
# 235
          if (tmp___0 < 0) {
            {
# 235
            tmp___1 = __errno_location();
            }
# 235
            if ((*tmp___1) != 115) {
              {
# 237
              error("dcc: can\'t connect peer! (%s) [%d]\n", net_errstr, i);
# 238
              dcc_killbounce(i);
              }
              goto __Cont;
            }
          }
        }
      }
    }
# 255
    if (((*(dccs.data + i)))->connected) {
# 255
      if (readset->__fds_bits[(unsigned int )((*(dccs.data + i)))->dest /
                              (8U * sizeof(__fd_mask ))] &
          (1L << (unsigned int )((*(dccs.data + i)))->dest %
                 (8U * sizeof(__fd_mask )))) {
        {
# 259
        tmp___3 = dcc_bouncedata(((*(dccs.data + i)))->dest,
                                 ((*(dccs.data + i)))->src,
                                 & ((*(dccs.data + i)))->src_wa);
        }
# 259
        if (! tmp___3) {
          {
# 260
          report("dcc: ending bounce [%d]\n", i);
# 261
          dcc_killbounce(i);
          }
          goto __Cont;
        }
      }
    }
    __Cont: 
    {
# 180
    i ++;
    }
  }
# 266
  return;
}
}
# 270
char *dcc_initiate(char *param , int fromclient ) 
{ dcccommand dcc ;
  char *dparam ;
  char *chop ;
  char *check ;
  int i ;
  char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  {
# 276
  bzero((void *)(& dcc), sizeof(dcccommand ));
# 278
  dparam = strdup((char const   *)param);
# 279
  chop = dparam;
# 281
  dcc.fromclient = fromclient;
  }
# 285
  while (1) {
    {
# 285
    chop = strchr((char const   *)chop, (int )' ');
    }
# 285
    if (chop) {
      {
# 285
      chop ++;
      }
# 285
      if (! (*chop)) {
# 285
        break;
      }
    } else {
# 285
      break;
    }
# 286
    switch (dcc.argc) {
    case 0: 
    {
# 288
    _xstrncpy(dcc.type, (char const   *)chop, 15U, (char const   *)"dcc.c", 288);
# 289
    tmp___0 = strchr((char const   *)(dcc.type), (int )' ');
    }
# 289
    if (tmp___0) {
      {
# 290
      tmp = strchr((char const   *)(dcc.type), (int )' ');
# 290
      (*tmp) = (char )0;
      }
    }
    {
# 291
    dcc.type[15] = (char )0;
# 292
    upcase(dcc.type);
    }
# 293
    break;
    case 1: 
    {
# 295
    dcc.arg1 = chop;
    }
# 296
    break;
    case 2: 
    {
# 298
    (*(chop - 1)) = (char )0;
    }
    case 3: 
    {

    }
    case 4: 
    {
# 301
    dcc.args[dcc.argc - 2] = (int )strtoul((char const   */* __restrict  */)((char const   *)chop),
                                           (char **/* __restrict  */)(& check),
                                           10);
    }
# 302
    if ((unsigned int )check == (unsigned int )chop) {
      {
# 303
      xfree((void *)dparam);
      }
# 303
      return ((char *)((void *)0));
    }
# 305
    break;
    }
    {
# 307
    dcc.argc ++;
    }
  }
# 310
  if (dcc.argc < 4) {
    {
# 311
    xfree((void *)dparam);
    }
# 311
    return ((char *)((void *)0));
  }
  {
# 317
  i = 0;
  }
# 317
  while (dcccalls[i].cmd) {
    {
# 318
    tmp___2 = _xstrcmp((char const   *)dcccalls[i].cmd,
                       (char const   *)(dcc.type), (char const   *)"dcc.c", 318);
    }
# 318
    if (tmp___2 == 0) {
      {
# 319
      tmp___1 = ((*(dcccalls[i].func)))(param, & dcc);
      }
# 319
      if (! tmp___1) {
        {
# 320
        xfree((void *)dparam);
        }
# 320
        return ((char *)((void *)0));
      }
# 321
      break;
    }
    {
# 317
    i ++;
    }
  }
  {
# 325
  xfree((void *)dparam);
  }
# 326
  return (param);
}
}
# 329
int dcc_realinitiate(char *dest , dcccommand *dcc ) 
{ unsigned int address ;
  unsigned int port ;
  struct hostent *host ;
  char *hostname ;
  unsigned int myport ;
  int i ;
  int dccindex ;
  register unsigned int __v ;
  register unsigned int __x ;
  int tmp ;
  int tmp___1 ;
  long tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  register unsigned int __v___0 ;
  register unsigned int __x___0 ;
  int tmp___5 ;
  char *tmp___6 ;
  register unsigned short __v___1 ;
  register unsigned short __x___1 ;
  int tmp___7 ;
  char *tmp___8 ;

  {
  {
# 337
  __x = (unsigned int )dcc->args[0];
# 337
  tmp = __builtin_constant_p((int )__x);
  }
# 337
  if (tmp) {
    {
# 337
    __v = ((((__x & 4278190080U) >> 24) | ((__x & 16711680U) >> 8)) |
           ((__x & 65280U) << 8)) | ((__x & 255U) << 24);
    }
  } else {
    {
# 337
    __asm__  ("rorw $8, %w0;"
              "rorl $16, %0;"
              "rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
    }
  }
  {
# 337
  address = __v;
# 338
  port = (unsigned int )dcc->args[1];
  }
# 341
  if (dcc->fromclient) {
    _L: 
# 345
    if (cfg.bind) {
      {
# 346
      host = name_lookup(cfg.bind);
      }
    } else {
      {
# 349
      hostname = (char *)xmalloc(256U);
# 350
      tmp___1 = gethostname(hostname, 255U);
      }
# 350
      if (tmp___1) {
        {
# 351
        xfree((void *)hostname);
        }
# 352
        return (0);
      }
      {
# 354
      host = name_lookup(hostname);
# 355
      xfree((void *)hostname);
      }
    }
  } else {
# 341
    if (cfg.dccbind) {
      {
# 342
      host = name_lookup(cfg.dccbind);
      }
    } else {
      goto _L;
    }
  }
  {
# 359
  dccindex = dcc_addbounce();
# 360
  ((*(dccs.data + dccindex)))->src = sock_open();
  }
# 360
  if (((*(dccs.data + dccindex)))->src < 0) {
    {
# 361
    error("unable to create socket!\n");
# 362
    dcc_killbounce(dccindex);
    }
# 363
    return (0);
  }
  {
# 366
  sock_setnonblock(((*(dccs.data + dccindex)))->src);
# 368
  i = 15;
  }
# 369
  while (1) {
    {
# 370
    tmp___2 = random();
# 370
    myport = (unsigned int )((tmp___2 & 65535L) | 1024L);
# 369
    tmp___3 = sock_bind(((*(dccs.data + dccindex)))->src, (char *)((void *)0),
                        (int )myport);
    }
# 369
    if (tmp___3) {
# 369
      break;
    } else {
      {
# 369
      i --;
      }
# 369
      if (! i) {
# 369
        break;
      }
    }
  }
# 373
  if (! i) {
    {
# 374
    error("general socket error (%s)!\n", "unable to bind to any port");
# 375
    dcc_killbounce(dccindex);
    }
# 376
    return (0);
  }
  {
# 379
  ((*(dccs.data + dccindex)))->srcport = (int )myport;
# 381
  tmp___4 = sock_listen(((*(dccs.data + dccindex)))->src);
  }
# 381
  if (! tmp___4) {
    {
# 382
    error("unable to listen!\n");
# 383
    dcc_killbounce(dccindex);
    }
# 384
    return (0);
  }
  {
# 389
  __x___0 = (unsigned int )(*((unsigned long *)(*(host->h_addr_list + 0))));
# 389
  tmp___5 = __builtin_constant_p((int )__x___0);
  }
# 389
  if (tmp___5) {
    {
# 389
    __v___0 = ((((__x___0 & 4278190080U) >> 24) | ((__x___0 & 16711680U) >> 8)) |
               ((__x___0 & 65280U) << 8)) | ((__x___0 & 255U) << 24);
    }
  } else {
    {
# 389
    __asm__  ("rorw $8, %w0;"
              "rorl $16, %0;"
              "rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
    }
  }
  {
# 389
  sprintf((char */* __restrict  */)dest,
          (char const   */* __restrict  */)((char const   *)"\001DCC %s %s %u %u"),
          dcc->type, dcc->arg1, __v___0, myport);
  }
# 392
  if (dcc->argc == 5) {
    {
# 393
    sprintf((char */* __restrict  */)dest,
            (char const   */* __restrict  */)((char const   *)"%s %u\001"),
            dest, dcc->args[2]);
    }
  } else {
    {
# 396
    strcat((char */* __restrict  */)dest,
           (char const   */* __restrict  */)((char const   *)"\001"));
    }
  }
  {
# 399
  tmp___6 = inet_ntoa((*((struct in_addr *)(& address))));
# 399
  host = name_lookup(tmp___6);
# 400
  memcpy((void */* __restrict  */)((void *)((char *)(& ((*(dccs.data + dccindex)))->destaddr.sin_addr))),
         (void const   */* __restrict  */)((void const   *)(*(host->h_addr_list +
                                                              0))),
         (unsigned int )host->h_length);
# 401
  __x___1 = (unsigned short )port;
# 401
  tmp___7 = __builtin_constant_p((int )__x___1);
  }
# 401
  if (tmp___7) {
    {
# 401
    __v___1 = (unsigned short )((((int )__x___1 >> 8) & 255) |
                                (((int )__x___1 & 255) << 8));
    }
  } else {
    {
# 401
    __asm__  ("rorw $8, %w0": "=r" (__v___1): "0" (__x___1): "cc");
    }
  }
  {
# 401
  ((*(dccs.data + dccindex)))->destaddr.sin_port = __v___1;
# 402
  ((*(dccs.data + dccindex)))->destaddr.sin_family = (unsigned short )host->h_addrtype;
# 404
  tmp___8 = inet_ntoa((*((struct in_addr *)(& address))));
# 404
  report("dcc: starting bounce to %s:%d! [%d]\n", tmp___8, port, dccindex);
  }
# 406
  return (1);
}
}
# 409
int dcc_resume(char *dest , dcccommand *dcc ) 
{ int i ;
  int resume ;
  int tmp ;
  register unsigned short __v ;
  register unsigned short __x ;
  int tmp___0 ;
  register unsigned short __v___0 ;
  register unsigned short __x___0 ;
  int tmp___1 ;

  {
  {
# 414
  tmp = _xstrcmp((char const   *)(dcc->type), (char const   *)"RESUME",
                 (char const   *)"dcc.c", 414);
# 414
  resume = tmp == 0;
# 416
  i = 0;
  }
# 416
  while (i < dccs.amount) {
# 417
    if (! (*(dccs.data + i))) {
      goto __Cont;
    }
# 420
    if (resume) {
# 421
      if (((*(dccs.data + i)))->srcport == dcc->args[0]) {
        {
# 422
        __x = ((*(dccs.data + i)))->destaddr.sin_port;
# 422
        tmp___0 = __builtin_constant_p((int )__x);
        }
# 422
        if (tmp___0) {
          {
# 422
          __v = (unsigned short )((((int )__x >> 8) & 255) |
                                  (((int )__x & 255) << 8));
          }
        } else {
          {
# 422
          __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
          }
        }
        {
# 422
        sprintf((char */* __restrict  */)dest,
                (char const   */* __restrict  */)((char const   *)"\001DCC RESUME %s %u %u\001"),
                dcc->arg1, __v, dcc->args[1]);
        }
# 423
        return (1);
      }
    } else {
      {
# 427
      __x___0 = ((*(dccs.data + i)))->destaddr.sin_port;
# 427
      tmp___1 = __builtin_constant_p((int )__x___0);
      }
# 427
      if (tmp___1) {
        {
# 427
        __v___0 = (unsigned short )((((int )__x___0 >> 8) & 255) |
                                    (((int )__x___0 & 255) << 8));
        }
      } else {
        {
# 427
        __asm__  ("rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
        }
      }
# 427
      if ((int )__v___0 == dcc->args[0]) {
        {
# 428
        sprintf((char */* __restrict  */)dest,
                (char const   */* __restrict  */)((char const   *)"\001DCC ACCEPT %s %u %u\001"),
                dcc->arg1, ((*(dccs.data + i)))->srcport, dcc->args[1]);
        }
# 429
        return (1);
      }
    }
    __Cont: 
    {
# 416
    i ++;
    }
  }
# 433
  return (0);
}
}
# 23 "ignore.h"
void add_ignore(char *hostname , int ttl , int type ) ;
# 25
void process_ignores(void) ;
# 26
int is_ignore(char *hostname , int type ) ;
# 31 "ignore.c"
static void del_ignorebynumber(int i ) ;
# 32
ignores_type ignores  ;
# 34
void add_ignore(char *hostname , int ttl , int type ) 
{ int i ;
  int indx ;
  int tmp ;

  {
# 38
  if (! hostname) {
# 38
    return;
  }
  {
# 39
  i = 0;
  }
# 39
  while (i < ignores.amount) {
# 40
    if ((*(ignores.data + i))) {
      {
# 40
      tmp = _xstrcmp((char const   *)((*(ignores.data + i)))->hostname,
                     (char const   *)hostname, (char const   *)"ignore.c", 41);
      }
# 40
      if (tmp == 0) {
# 40
        if (((*(ignores.data + i)))->type == type) {
# 42
          return;
        }
      }
    }
    {
# 39
    i ++;
    }
  }
  {
# 45
  ignores.data = (ignore_type **)add_item((void **)ignores.data,
                                          (int )sizeof(ignore_type ),
                                          & ignores.amount, & indx);
# 46
  ((*(ignores.data + indx)))->hostname = strdup((char const   *)hostname);
# 47
  ((*(ignores.data + indx)))->ttl = ttl;
# 48
  ((*(ignores.data + indx)))->type = type;
  }
# 49
  return;
}
}
# 51
void del_ignore(char *hostname ) 
{ int i ;
  int tmp___0 ;

  {
  {
# 54
  i = 0;
  }
# 54
  while (i < ignores.amount) {
# 55
    if ((*(ignores.data + i))) {
      {
# 55
      tmp___0 = _xstrcmp((char const   *)((*(ignores.data + i)))->hostname,
                         (char const   *)hostname, (char const   *)"ignore.c",
                         55);
      }
# 55
      if (tmp___0 == 0) {
        {
# 56
        xfree((void *)((*(ignores.data + i)))->hostname);
# 57
        ignores.data = (ignore_type **)rem_item((void **)ignores.data, i,
                                                & ignores.amount);
        }
      }
    }
    {
# 54
    i ++;
    }
  }
# 59
  return;
}
}
# 61
static void del_ignorebynumber(int i ) 
{ 

  {
# 63
  if (i < ignores.amount) {
# 63
    if ((*(ignores.data + i))) {
      {
# 64
      xfree((void *)((*(ignores.data + i)))->hostname);
# 65
      ignores.data = (ignore_type **)rem_item((void **)ignores.data, i,
                                              & ignores.amount);
      }
    }
  }
# 67
  return;
}
}
# 70
void process_ignores(void) 
{ int i ;

  {
  {
# 73
  i = 0;
  }
# 73
  while (i < ignores.amount) {
# 74
    if ((*(ignores.data + i))) {
# 75
      if (((*(ignores.data + i)))->ttl) {
        {
# 75
        ((*(ignores.data + i)))->ttl = ((*(ignores.data + i)))->ttl - 1;
        }
      } else {
        {
# 76
        del_ignorebynumber(i);
        }
      }
    }
    {
# 73
    i ++;
    }
  }
# 79
  return;
}
}
# 81
int is_ignore(char *hostname , int type ) 
{ int i ;
  int tmp ;

  {
  {
# 84
  i = 0;
  }
# 84
  while (i < ignores.amount) {
# 85
    if ((*(ignores.data + i))) {
      {
# 85
      tmp = _xstrcmp((char const   *)((*(ignores.data + i)))->hostname,
                     (char const   *)hostname, (char const   *)"ignore.c", 86);
      }
# 85
      if (tmp == 0) {
# 85
        if (((*(ignores.data + i)))->type == type) {
# 87
          return (1);
        }
      }
    }
    {
# 84
    i ++;
    }
  }
# 88
  return (0);
}
}
# 29 "perm.h"
void add_perm(permlist_type *table , char *name , int allowed ) ;
# 30
void drop_perm(permlist_type *table ) ;
# 31
int is_perm(permlist_type *table , char *name ) ;
# 33
permlist_type hostlist  ;
# 34
permlist_type peoplelist  ;
# 23 "irc.c"
static void track_highest(void) ;
# 24
static void track_add(int s___0 ) ;
# 25
static void track_del(int s___0 ) ;
# 27
struct hostent *hostinfo  ;
# 31
struct sockaddr_in addr  ;
# 37
int track_socks[512]  ;
# 39
int highest_socket   = 0;
# 41
static void track_highest(void) 
{ int i ;

  {
  {
# 44
  highest_socket = 0;
# 45
  i = 0;
  }
# 45
  while (i < 512) {
# 46
    if (track_socks[i] > highest_socket) {
      {
# 46
      highest_socket = track_socks[i];
      }
    }
    {
# 45
    i ++;
    }
  }
# 47
  return;
}
}
# 49
static void track_add(int s___0 ) 
{ int i ;

  {
  {
# 51
  i = 0;
  }
# 52
  while (1) {
# 52
    if (track_socks[i]) {
# 52
      if (! (i < 512)) {
# 52
        break;
      }
    } else {
# 52
      break;
    }
    {
# 52
    i ++;
    }
  }
# 53
  if (i < 512) {
    {
# 53
    track_socks[i] = s___0;
    }
  }
  {
# 54
  track_highest();
  }
# 55
  return;
}
}
# 57
static void track_del(int s___0 ) 
{ int i ;

  {
  {
# 60
  i = 0;
  }
# 60
  while (i < 512) {
# 61
    if (track_socks[i] == s___0) {
      {
# 61
      track_socks[i] = 0;
      }
    }
    {
# 60
    i ++;
    }
  }
  {
# 62
  track_highest();
  }
# 63
  return;
}
}
# 65
int sock_open(void) 
{ int i ;
  int *tmp ;

  {
  {
# 73
  i = socket(2, 1, 0);
  }
# 73
  if (i < 0) {
    {
# 76
    tmp = __errno_location();
# 76
    net_errstr = (char const   *)strerror((*tmp));
    }
# 77
    return (-1);
  }
  {
# 79
  track_add(i);
# 80
  sock_setreuse(i);
  }
# 82
  return (i);
}
}
# 85
int rawsock_close(int sock ) 
{ 

  {
# 87
  if (! sock) {
# 88
    return (1);
  }
  {
# 90
  track_del(sock);
# 91
  close(sock);
  }
# 92
  return (1);
}
}
# 95
int sock_close(connection_type *connection ) 
{ 

  {
  {
# 98
  rawsock_close(connection->socket);
# 99
  connection->socket = 0;
  }
# 100
  return (1);
}
}
# 104
int sock_setnonblock(int sock ) 
{ int *tmp ;
  int tmp___0 ;

  {
  {
# 106
  tmp___0 = fcntl(sock, 4, 2048);
  }
# 106
  if (tmp___0 < 0) {
    {
# 108
    tmp = __errno_location();
# 108
    net_errstr = (char const   *)strerror((*tmp));
    }
# 109
    return (0);
  } else {
# 113
    return (1);
  }
}
}
# 117
int sock_setblock(int sock ) 
{ int flags ;
  int *tmp ;
  int *tmp___0 ;
  int tmp___1 ;

  {
  {
# 121
  flags = fcntl(sock, 3, 0);
  }
# 121
  if (flags < 0) {
    {
# 123
    tmp = __errno_location();
# 123
    net_errstr = (char const   *)strerror((*tmp));
    }
# 124
    return (0);
  }
  {
# 127
  flags &= -2049;
# 129
  tmp___1 = fcntl(sock, 4, flags);
  }
# 129
  if (tmp___1 < 0) {
    {
# 131
    tmp___0 = __errno_location();
# 131
    net_errstr = (char const   *)strerror((*tmp___0));
    }
# 132
    return (0);
  }
# 135
  return (1);
}
}
# 138
int sock_setreuse(int sock ) 
{ int i ;
  int *tmp ;
  int tmp___0 ;

  {
  {
# 140
  i = 1;
# 141
  tmp___0 = setsockopt(sock, 1, 2, (void const   *)((void *)(& i)), sizeof(i));
  }
# 141
  if (tmp___0 < 0) {
    {
# 143
    tmp = __errno_location();
# 143
    net_errstr = (char const   *)strerror((*tmp));
    }
# 144
    return (0);
  } else {
# 148
    return (1);
  }
}
}
# 152
struct hostent *name_lookup(char *host ) 
{ int *tmp ;
  char const   *tmp___0 ;

  {
  {
# 158
  hostinfo = gethostbyname((char const   *)host);
  }
# 158
  if (hostinfo) {
# 159
    return (hostinfo);
  } else {
    {
# 164
    tmp = __h_errno_location();
# 164
    tmp___0 = hstrerror((*tmp));
# 164
    net_errstr = tmp___0;
    }
# 168
    return ((struct hostent *)((void *)0));
  }
}
}
# 226
int sock_bind(int sock , char *bindhost , int port ) 
{ struct hostent *tmp ;
  register unsigned short __v ;
  register unsigned short __x ;
  int tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;

  {
  {
# 228
  bzero((void *)(& addr), sizeof(struct sockaddr_in ));
# 230
  addr.sin_addr.s_addr = 0U;
# 231
  addr.sin_family = (unsigned short )2;
  }
# 233
  if (bindhost) {
    {
# 235
    tmp = name_lookup(bindhost);
    }
# 235
    if (! tmp) {
# 236
      return (0);
    }
    {
# 238
    memcpy((void */* __restrict  */)((void *)((char *)(& addr.sin_addr))),
           (void const   */* __restrict  */)((void const   *)(*(hostinfo->h_addr_list +
                                                                0))),
           (unsigned int )hostinfo->h_length);
# 239
    addr.sin_family = (unsigned short )hostinfo->h_addrtype;
    }
  }
  {
# 242
  __x = (unsigned short )port;
# 242
  tmp___0 = __builtin_constant_p((int )__x);
  }
# 242
  if (tmp___0) {
    {
# 242
    __v = (unsigned short )((((int )__x >> 8) & 255) | (((int )__x & 255) << 8));
    }
  } else {
    {
# 242
    __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
    }
  }
  {
# 242
  addr.sin_port = __v;
# 244
  tmp___2 = bind(sock, (void const   *)((struct sockaddr *)(& addr)),
                 sizeof(struct sockaddr ));
  }
# 244
  if (tmp___2 < 0) {
    {
# 246
    tmp___1 = __errno_location();
# 246
    net_errstr = (char const   *)strerror((*tmp___1));
    }
# 246
    return (0);
  }
# 249
  return (1);
}
}
# 252
int sock_bindlookedup(int sock , int port ) 
{ register unsigned short __v ;
  register unsigned short __x ;
  int tmp ;
  int *tmp___0 ;
  int tmp___1 ;

  {
  {
# 254
  bzero((void *)(& addr), sizeof(struct sockaddr_in ));
# 256
  addr.sin_addr.s_addr = 0U;
# 257
  addr.sin_family = (unsigned short )2;
  }
# 259
  if (hostinfo) {
    {
# 261
    memcpy((void */* __restrict  */)((void *)((char *)(& addr.sin_addr))),
           (void const   */* __restrict  */)((void const   *)(*(hostinfo->h_addr_list +
                                                                0))),
           (unsigned int )hostinfo->h_length);
# 262
    addr.sin_family = (unsigned short )hostinfo->h_addrtype;
    }
  }
  {
# 265
  __x = (unsigned short )port;
# 265
  tmp = __builtin_constant_p((int )__x);
  }
# 265
  if (tmp) {
    {
# 265
    __v = (unsigned short )((((int )__x >> 8) & 255) | (((int )__x & 255) << 8));
    }
  } else {
    {
# 265
    __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
    }
  }
  {
# 265
  addr.sin_port = __v;
# 267
  tmp___1 = bind(sock, (void const   *)((struct sockaddr *)(& addr)),
                 sizeof(struct sockaddr ));
  }
# 267
  if (tmp___1 < 0) {
    {
# 269
    tmp___0 = __errno_location();
# 269
    net_errstr = (char const   *)strerror((*tmp___0));
    }
# 270
    return (0);
  }
# 272
  return (1);
}
}
# 276
int sock_listen(int sock ) 
{ int tmp ;
  int *tmp___0 ;
  int tmp___1 ;

  {
  {
# 278
  tmp = sock_setnonblock(sock);
  }
# 278
  if (! tmp) {
# 279
    return (0);
  }
  {
# 281
  tmp___1 = listen(sock, 5);
  }
# 281
  if (tmp___1 < 0) {
    {
# 283
    tmp___0 = __errno_location();
# 283
    net_errstr = (char const   *)strerror((*tmp___0));
    }
# 284
    return (0);
  }
# 286
  return (1);
}
}
# 289
int sock_accept(int sock , char **s___0 , int checkperm ) 
{ int temp ;
  int store ;
  char *ip ;
  int perm ;
  int *tmp ;
  int tmp___0 ;

  {
  {
# 304
  temp = (int )sizeof(struct sockaddr_in );
# 306
  store = accept(sock,
                 (void */* __restrict  */)((void *)((struct sockaddr *)(& addr))),
                 (socklen_t */* __restrict  */)((socklen_t *)(& temp)));
  }
# 306
  if (store < 0) {
    {
# 308
    tmp = __errno_location();
# 308
    net_errstr = (char const   *)strerror((*tmp));
    }
# 309
    return (0);
  }
  {
# 315
  ip = inet_ntoa(addr.sin_addr);
# 317
  perm = is_perm(& hostlist, ip);
# 330
  hostinfo = gethostbyaddr((void const   *)((char *)(& addr.sin_addr.s_addr)),
                           sizeof(struct in_addr ), 2);
  }
# 332
  if (hostinfo) {
    {
# 333
    (*s___0) = strdup((char const   *)hostinfo->h_name);
# 334
    tmp___0 = is_perm(& hostlist, (*s___0));
# 334
    perm |= tmp___0;
    }
  } else {
    {
# 336
    (*s___0) = strdup((char const   *)ip);
    }
  }
# 339
  if (checkperm) {
# 339
    if (perm) {
      {
# 341
      track_add(store);
      }
# 342
      return (store);
    } else {
      {
# 346
      close(store);
      }
# 347
      return (-1);
    }
  } else {
    {
# 341
    track_add(store);
    }
# 342
    return (store);
  }
}
}
# 351
int irc_write(connection_type *connection , char *format  , ...) 
{ __ccured_va_list va ;
  char buffer___0[1024] ;
  unsigned long tmp ;
  size_t tmp___0 ;
  int tmp___1 ;

  {
  {
# 356
  tmp = (unsigned long )GCC_STDARG_START();
# 356
  __ccured_va_start(va, tmp);
# 357
  vsnprintf((char */* __restrict  */)(buffer___0), 1021U,
            (char const   */* __restrict  */)((char const   *)format), va);
# 358
  __ccured_va_end(va);
# 359
  strcat((char */* __restrict  */)(buffer___0),
         (char const   */* __restrict  */)((char const   *)"\r\n"));
# 363
  tmp___0 = strlen((char const   *)(buffer___0));
# 363
  tmp___1 = write(connection->socket, (void const   *)(buffer___0), tmp___0);
  }
# 363
  return (tmp___1);
}
}
# 366
void irc_privmsg(connection_type *connection , char *nickname , char *format 
                 , ...) 
{ __ccured_va_list va ;
  char buffer___0[1024] ;
  unsigned long tmp ;

  {
  {
# 371
  tmp = (unsigned long )GCC_STDARG_START();
# 371
  __ccured_va_start(va, tmp);
# 372
  vsnprintf((char */* __restrict  */)(buffer___0), 1014U,
            (char const   */* __restrict  */)((char const   *)format), va);
# 373
  __ccured_va_end(va);
# 375
  irc_write(connection, "PRIVMSG %s :%s", nickname, buffer___0);
  }
# 376
  return;
}
}
# 378
void irc_notice(connection_type *connection , char *nickname , char *format 
                , ...) 
{ __ccured_va_list va ;
  char buffer___0[1024] ;
  unsigned long tmp ;

  {
  {
# 383
  tmp = (unsigned long )GCC_STDARG_START();
# 383
  __ccured_va_start(va, tmp);
# 384
  vsnprintf((char */* __restrict  */)(buffer___0), 1014U,
            (char const   */* __restrict  */)((char const   *)format), va);
# 385
  __ccured_va_end(va);
# 387
  irc_write(connection, "NOTICE %s :%s", nickname, buffer___0);
  }
# 388
  return;
}
}
# 390
int irc_read(connection_type *connection ) 
{ int ret ;
  int *tmp ;

  {
  {
# 394
  connection->timer = 0;
  }
# 395
  while (1) {
    {
# 396
    ret = read(connection->socket, (void *)(connection->buffer +
                                            connection->offset), 1U);
    }
# 397
    if (ret == 0) {
# 397
      return (-1);
    }
# 398
    if (ret == -1) {
      {
# 398
      tmp = __errno_location();
      }
# 398
      if ((*tmp) == 11) {
# 398
        return (0);
      }
    }
    {
# 399
    connection->offset = connection->offset + 1;
    }
# 395
    if ((int )connection->buffer[connection->offset - 1] != 10) {
# 395
      if (! (connection->offset < 1020)) {
# 395
        break;
      }
    } else {
# 395
      break;
    }
  }
  {
# 401
  connection->buffer[connection->offset - 1] = (char )0;
  }
# 402
  if ((int )connection->buffer[connection->offset - 2] == 13) {
    {
# 402
    connection->buffer[connection->offset - 2] = (char )0;
    }
  }
  {
# 407
  connection->offset = 0;
  }
# 408
  return (1);
}
}
# 411
int irc_connect(connection_type *connection , server_type *server ,
                char *nickname , char *username , char *realname , char *bindto ) 
{ int randport ;
  int ri ;
  int attempts ;
  struct hostent *tmp ;
  long tmp___0 ;
  long tmp___1 ;
  register unsigned short __v ;
  register unsigned short __x ;
  int tmp___2 ;
  int tmp___3 ;
  struct hostent *tmp___4 ;
  register unsigned short __v___0 ;
  register unsigned short __x___0 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;

  {
  {
# 422
  randport = 0;
# 424
  connection->timer = 0;
# 426
  connection->socket = sock_open();
  }
# 426
  if (connection->socket < 0) {
# 427
    return (1);
  }
  {
# 429
  hostinfo = (struct hostent *)0;
  }
# 430
  if (bindto) {
    {
# 431
    tmp = name_lookup(bindto);
    }
# 431
    if (! tmp) {
# 431
      return (3);
    }
  }
  {
# 434
  attempts = 15;
  }
# 435
  while (1) {
    {
# 436
    tmp___0 = random();
# 436
    ri = (int )(tmp___0 & 255L);
    }
# 436
    while (ri) {
      {
# 437
      tmp___1 = random();
# 437
      randport = (int )((tmp___1 & 65535L) | 1024L);
# 436
      ri --;
      }
    }
    {
# 441
    __x = (unsigned short )randport;
# 441
    tmp___2 = __builtin_constant_p((int )__x);
    }
# 441
    if (tmp___2) {
      {
# 441
      __v = (unsigned short )((((int )__x >> 8) & 255) |
                              (((int )__x & 255) << 8));
      }
    } else {
      {
# 441
      __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
      }
    }
    {
# 441
    addr.sin_port = __v;
# 443
    attempts --;
# 435
    tmp___3 = sock_bindlookedup(connection->socket, randport);
    }
# 435
    if (tmp___3) {
# 435
      break;
    } else {
# 435
      if (! attempts) {
# 435
        break;
      }
    }
  }
# 446
  if (! attempts) {
# 446
    return (3);
  }
  {
# 448
  tmp___4 = name_lookup(server->name);
  }
# 448
  if (! tmp___4) {
# 448
    return (2);
  }
  {
# 456
  memcpy((void */* __restrict  */)((void *)((char *)(& addr.sin_addr))),
         (void const   */* __restrict  */)((void const   *)(*(hostinfo->h_addr_list +
                                                              0))),
         (unsigned int )hostinfo->h_length);
# 457
  __x___0 = (unsigned short )server->port;
# 457
  tmp___5 = __builtin_constant_p((int )__x___0);
  }
# 457
  if (tmp___5) {
    {
# 457
    __v___0 = (unsigned short )((((int )__x___0 >> 8) & 255) |
                                (((int )__x___0 & 255) << 8));
    }
  } else {
    {
# 457
    __asm__  ("rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
    }
  }
  {
# 457
  addr.sin_port = __v___0;
# 458
  addr.sin_family = (unsigned short )hostinfo->h_addrtype;
# 459
  tmp___6 = connect(connection->socket,
                    (void const   *)((struct sockaddr *)(& addr)),
                    sizeof(struct sockaddr_in ));
  }
# 459
  if (tmp___6 < 0) {
# 459
    return (4);
  }
# 462
  if (server->password) {
    {
# 462
    irc_write(connection, "PASS %s", server->password);
    }
  }
  {
# 463
  tmp___7 = irc_write(connection, "NICK %s", nickname);
  }
# 463
  if (tmp___7 < 0) {
# 463
    return (5);
  }
  {
# 464
  tmp___8 = irc_write(connection, "USER %s +i %s :%s", username, server->name,
                      realname);
  }
# 464
  if (tmp___8 < 0) {
# 464
    return (5);
  }
  {
# 465
  tmp___9 = sock_setnonblock(connection->socket);
  }
# 465
  if (! tmp___9) {
# 465
    return (6);
  }
# 466
  return (0);
}
}
# 22 "log.c"
static struct LogHash *log_table[40]  ;
# 23
static struct LogHash *global_log_table[40]  ;
# 26
static void open_logfiles_global(void) ;
# 27
static char *get_logtimestamp(void) ;
# 28
static struct LogHash *find_log(char *channel , int logtype___0 ) ;
# 34
void add_log(char *log_channel , char *logfile , int logtype___0 ) 
{ char *channel ;
  int multi ;
  int tmp ;
  char *tmp___0 ;
  struct LogHash *ptr ;
  struct LogHash *temp_ptr ;
  struct LogHash *last_ptr ;
  unsigned int hashval ;
  int tmp___1 ;
  size_t tmp___3 ;

  {
  {
# 37
  multi = 0;
  }
# 40
  if (! log_channel) {
# 41
    return;
  }
  {
# 46
  tmp = _xstrcmp((char const   *)log_channel, (char const   *)"*",
                 (char const   *)"log.c", 46);
  }
# 46
  if (tmp == 0) {
    {
# 48
    global_logtype = logtype___0;
# 49
    open_logfiles_global();
    }
# 50
    return;
  }
  {
# 56
  tmp___0 = strchr((char const   *)log_channel, (int )',');
  }
# 56
  if (tmp___0) {
    {
# 57
    multi = 1;
    }
  }
  {
# 59
  channel = strtok((char */* __restrict  */)log_channel,
                   (char const   */* __restrict  */)((char const   *)","));
  }
# 59
  while (channel) {
    {
# 63
    last_ptr = (struct LogHash *)((void *)0);
# 66
    hashval = hash_channel(channel);
# 68
    temp_ptr = log_table[hashval];
    }
# 68
    while (temp_ptr) {
      {
# 71
      tmp___1 = _xstrcasecmp((char const   *)channel,
                             (char const   *)temp_ptr->channel,
                             (char const   *)"log.c", 71);
      }
# 71
      if (tmp___1 == 0) {
# 72
        return;
      }
      {
# 74
      last_ptr = temp_ptr;
# 68
      temp_ptr = temp_ptr->next;
      }
    }
    {
# 77
    ptr = (struct LogHash *)xcalloc(1U, sizeof(struct LogHash ));
# 79
    ptr->channel = strdup((char const   *)channel);
# 80
    ptr->logtype = logtype___0;
    }
# 85
    if (logfile) {
# 85
      if (multi) {
        {
# 87
        tmp___3 = strlen((char const   *)channel);
# 87
        logfile = (char *)xmalloc(tmp___3 + 5U);
# 88
        sprintf((char */* __restrict  */)logfile,
                (char const   */* __restrict  */)((char const   *)"%s.log"),
                channel);
# 89
        ptr->filename = logfile;
        }
      } else {
        {
# 92
        ptr->filename = strdup((char const   *)logfile);
        }
      }
    } else {
      {
# 87
      tmp___3 = strlen((char const   *)channel);
# 87
      logfile = (char *)xmalloc(tmp___3 + 5U);
# 88
      sprintf((char */* __restrict  */)logfile,
              (char const   */* __restrict  */)((char const   *)"%s.log"),
              channel);
# 89
      ptr->filename = logfile;
      }
    }
# 94
    if (last_ptr) {
      {
# 95
      last_ptr->next = ptr;
      }
    } else {
      {
# 97
      log_table[hashval] = ptr;
      }
    }
    {
# 99
    open_logfile(ptr);
# 59
    channel = strtok((char */* __restrict  */)((char *)((void *)0)),
                     (char const   */* __restrict  */)((char const   *)","));
    }
  }
# 101
  return;
}
}
# 107
void add_log_global(char *channel ) 
{ struct LogHash *ptr ;
  struct LogHash *temp_ptr ;
  struct LogHash *last_ptr ;
  unsigned int hashval ;
  char *logfile ;
  int tmp ;
  size_t tmp___1 ;

  {
  {
# 111
  last_ptr = (struct LogHash *)((void *)0);
# 115
  hashval = hash_channel(channel);
# 117
  temp_ptr = global_log_table[hashval];
  }
# 117
  while (temp_ptr) {
    {
# 120
    tmp = _xstrcasecmp((char const   *)channel,
                       (char const   *)temp_ptr->channel,
                       (char const   *)"log.c", 120);
    }
# 120
    if (tmp == 0) {
# 121
      return;
    }
    {
# 123
    last_ptr = temp_ptr;
# 117
    temp_ptr = temp_ptr->next;
    }
  }
  {
# 126
  ptr = (struct LogHash *)xcalloc(1U, sizeof(struct LogHash ));
# 128
  ptr->channel = strdup((char const   *)channel);
# 129
  ptr->logtype = global_logtype;
# 131
  tmp___1 = strlen((char const   *)channel);
# 131
  logfile = (char *)xmalloc(tmp___1 + 5U);
# 132
  sprintf((char */* __restrict  */)logfile,
          (char const   */* __restrict  */)((char const   *)"%s.log"), channel);
# 133
  ptr->filename = logfile;
  }
# 135
  if (last_ptr) {
    {
# 136
    last_ptr->next = ptr;
    }
  } else {
    {
# 138
    global_log_table[hashval] = ptr;
    }
  }
  {
# 140
  open_logfile(ptr);
  }
# 141
  return;
}
}
# 148
void rem_log(char *channel ) 
{ struct LogHash *ptr ;
  struct LogHash *next_ptr ;
  unsigned int hashval ;
  char *tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;

  {
  {
# 151
  next_ptr = (struct LogHash *)((void *)0);
# 154
  hashval = hash_channel(channel);
# 156
  ptr = log_table[hashval];
  }
# 156
  while (ptr) {
    {
# 158
    tmp___0 = _xstrcasecmp((char const   *)channel,
                           (char const   *)ptr->channel,
                           (char const   *)"log.c", 158);
    }
# 158
    if (tmp___0 == 0) {
# 160
      if (ptr->logfile) {
        {
# 162
        tmp = get_logtimestamp();
# 162
        write_logentry(ptr, "Session Close: %s\n\n", tmp);
        {
# 40 "spec.work"
        if (! ((ptr->logfile)->__BLAST_FLAG == 1)) {
# 42
          __error__();
        }
        {

        }
        }
# 163 "log.c"
        fflush(ptr->logfile);
        {
# 96 "spec.work"
        if ((ptr->logfile)->__BLAST_FLAG == 1) {
# 97
          (ptr->logfile)->__BLAST_FLAG = 0;
        } else {
# 98
          __error__();
        }
        {

        }
        }
# 164 "log.c"
        fclose(ptr->logfile);
# 165
        ptr->logfile = (FILE *)((void *)0);
        }
# 167
        return;
      }
    }
    {
# 156
    ptr = ptr->next;
    }
  }
# 173
  if (! global_logtype) {
# 174
    return;
  }
  {
# 176
  ptr = global_log_table[hashval];
  }
# 176
  while (ptr) {
    {
# 178
    next_ptr = ptr->next;
# 183
    tmp___2 = _xstrcasecmp((char const   *)channel,
                           (char const   *)ptr->channel,
                           (char const   *)"log.c", 183);
    }
# 183
    if (tmp___2 == 0) {
# 185
      if (ptr->logfile) {
        {
# 187
        tmp___1 = get_logtimestamp();
# 187
        write_logentry(ptr, "Session Close: %s\n\n", tmp___1);
        {
# 96 "spec.work"
        if ((ptr->logfile)->__BLAST_FLAG == 1) {
# 97
          (ptr->logfile)->__BLAST_FLAG = 0;
        } else {
# 98
          __error__();
        }
        {

        }
        }
# 188 "log.c"
        fclose(ptr->logfile);
        }
      }
# 191
      if (ptr->channel) {
        {
# 191
        free((void *)ptr->channel);
# 191
        ptr->channel = (char *)((void *)0);
        }
      }
# 192
      if (ptr->logfile) {
        {
# 192
        free((void *)ptr->logfile);
# 192
        ptr->logfile = (FILE *)((void *)0);
        }
      }
# 193
      if (ptr) {
        {
# 193
        free((void *)ptr);
# 193
        ptr = (struct LogHash *)((void *)0);
        }
      }
    }
    {
# 176
    ptr = next_ptr;
    }
  }
# 196
  return;
}
}
# 202
void clear_logs(void) 
{ struct LogHash *ptr ;
  struct LogHash *next_ptr ;
  int i ;
  char *tmp ;
  char *tmp___0 ;

  {
  {
# 208
  i = 0;
  }
# 208
  while (i < 40) {
    {
# 211
    ptr = log_table[i];
    }
# 211
    while (ptr) {
      {
# 213
      next_ptr = ptr->next;
      }
# 215
      if (ptr->logfile) {
        {
# 217
        tmp = get_logtimestamp();
# 217
        write_logentry(ptr, "Session Close: %s\n\n", tmp);
        {
# 96 "spec.work"
        if ((ptr->logfile)->__BLAST_FLAG == 1) {
# 97
          (ptr->logfile)->__BLAST_FLAG = 0;
        } else {
# 98
          __error__();
        }
        {

        }
        }
# 218 "log.c"
        fclose(ptr->logfile);
        }
      }
      {
# 221
      xfree((void *)ptr->channel);
# 222
      xfree((void *)ptr->filename);
# 223
      xfree((void *)ptr);
# 211
      ptr = next_ptr;
      }
    }
    {
# 227
    ptr = global_log_table[i];
    }
# 227
    while (ptr) {
      {
# 229
      next_ptr = ptr->next;
      }
# 231
      if (ptr->logfile) {
        {
# 233
        tmp___0 = get_logtimestamp();
# 233
        write_logentry(ptr, "Session Close: %s\n\n", tmp___0);
        {
# 96 "spec.work"
        if ((ptr->logfile)->__BLAST_FLAG == 1) {
# 97
          (ptr->logfile)->__BLAST_FLAG = 0;
        } else {
# 98
          __error__();
        }
        {

        }
        }
# 234 "log.c"
        fclose(ptr->logfile);
        }
      }
      {
# 237
      xfree((void *)ptr->channel);
# 238
      xfree((void *)ptr->filename);
# 239
      xfree((void *)ptr);
# 227
      ptr = next_ptr;
      }
    }
    {
# 242
    log_table[i] = (struct LogHash *)((void *)0);
# 243
    global_log_table[i] = (struct LogHash *)((void *)0);
# 208
    i ++;
    }
  }
# 245
  return;
}
}
# 251
void close_logs(void) 
{ struct LogHash *ptr ;
  struct LogHash *next_ptr ;
  int i ;
  char *tmp ;
  char *tmp___0 ;

  {
  {
# 257
  i = 0;
  }
# 257
  while (i < 40) {
    {
# 259
    ptr = log_table[i];
    }
# 259
    while (ptr) {
      {
# 261
      next_ptr = ptr->next;
      }
# 263
      if (ptr->logfile) {
        {
# 265
        tmp = get_logtimestamp();
# 265
        write_logentry(ptr, "Session Close: %s\n\n", tmp);
        {
# 96 "spec.work"
        if ((ptr->logfile)->__BLAST_FLAG == 1) {
# 97
          (ptr->logfile)->__BLAST_FLAG = 0;
        } else {
# 98
          __error__();
        }
        {

        }
        }
# 266 "log.c"
        fclose(ptr->logfile);
# 267
        ptr->logfile = (FILE *)((void *)0);
        }
      }
      {
# 259
      ptr = next_ptr;
      }
    }
    {
# 274
    ptr = global_log_table[i];
    }
# 274
    while (ptr) {
      {
# 276
      next_ptr = ptr->next;
      }
# 278
      if (ptr->logfile) {
        {
# 280
        tmp___0 = get_logtimestamp();
# 280
        write_logentry(ptr, "Session Close: %s\n\n", tmp___0);
        {
# 96 "spec.work"
        if ((ptr->logfile)->__BLAST_FLAG == 1) {
# 97
          (ptr->logfile)->__BLAST_FLAG = 0;
        } else {
# 98
          __error__();
        }
        {

        }
        }
# 281 "log.c"
        fclose(ptr->logfile);
        }
      }
      {
# 284
      xfree((void *)ptr->channel);
# 285
      xfree((void *)ptr->filename);
# 286
      xfree((void *)ptr);
# 274
      ptr = next_ptr;
      }
    }
    {
# 289
    global_log_table[i] = (struct LogHash *)((void *)0);
# 257
    i ++;
    }
  }
# 291
  return;
}
}
# 297
void open_logfile(struct LogHash *ptr ) 
{ char *tmp ;
  int tmp___0 ;

  {
  {
# 299
  tmp___0 = find_channel(ptr->channel);
  }
# 299
  if (tmp___0 >= 0) {
    {
# 301
    ptr->logfile = fopen((char const   */* __restrict  */)((char const   *)ptr->filename),
                         (char const   */* __restrict  */)((char const   *)"a"));
    {
# 17 "spec.work"
    if (ptr->logfile != (FILE *)0) {
# 17
      (ptr->logfile)->__BLAST_FLAG = 1;
    }
    {

    }
    }
# 302 "log.c"
    tmp = get_logtimestamp();
# 302
    write_logentry(ptr, "Session Start: %s\n", tmp);
    }
  }
# 304
  return;
}
}
# 310
static void open_logfiles_global(void) 
{ struct LogHash *ptr ;
  int i ;

  {
# 316
  if (! channels.amount) {
# 317
    return;
  }
# 320
  if (! global_logtype) {
# 321
    return;
  }
  {
# 323
  i = 0;
  }
# 323
  while (i < channels.amount) {
# 325
    if (! (*(channels.data + i))) {
      goto __Cont;
    }
    {
# 329
    ptr = find_log((*(channels.data + i)), 0);
    }
# 329
    if (ptr) {
      goto __Cont;
    }
    {
# 332
    add_log_global((*(channels.data + i)));
    }
    __Cont: 
    {
# 323
    i ++;
    }
  }
# 334
  return;
}
}
# 340
static struct LogHash *find_log(char *channel , int logtype___0 ) 
{ unsigned int hashval ;
  struct LogHash *ptr ;
  int tmp ;

  {
# 345
  if (! channel) {
# 346
    return ((struct LogHash *)((void *)0));
  }
  {
# 348
  hashval = hash_channel(channel);
# 350
  ptr = log_table[hashval];
  }
# 350
  while (ptr) {
    {
# 352
    tmp = _xstrcasecmp((char const   *)channel, (char const   *)ptr->channel,
                       (char const   *)"log.c", 352);
    }
# 352
    if (tmp == 0) {
# 352
      if (ptr->logtype & logtype___0) {
# 354
        return (ptr);
      } else {
# 352
        if (! logtype___0) {
# 354
          return (ptr);
        }
      }
    }
    {
# 350
    ptr = ptr->next;
    }
  }
# 357
  return ((struct LogHash *)((void *)0));
}
}
# 364
struct LogHash *find_log_any(char *channel , int logtype___0 ) 
{ unsigned int hashval ;
  struct LogHash *ptr ;
  int tmp ;

  {
# 369
  if (! channel) {
# 370
    return ((struct LogHash *)((void *)0));
  }
  {
# 373
  ptr = find_log(channel, logtype___0);
  }
# 373
  if (ptr) {
# 374
    return (ptr);
  }
  {
# 376
  hashval = hash_channel(channel);
# 378
  ptr = global_log_table[hashval];
  }
# 378
  while (ptr) {
    {
# 380
    tmp = _xstrcasecmp((char const   *)channel, (char const   *)ptr->channel,
                       (char const   *)"log.c", 380);
    }
# 380
    if (tmp == 0) {
# 380
      if (ptr->logtype & logtype___0) {
# 382
        return (ptr);
      } else {
# 380
        if (! logtype___0) {
# 382
          return (ptr);
        }
      }
    }
    {
# 378
    ptr = ptr->next;
    }
  }
# 385
  return ((struct LogHash *)((void *)0));
}
}
# 392
void write_logentry(struct LogHash *ptr , char *format  , ...) 
{ char buffer___0[1024] ;
  __ccured_va_list va ;
  unsigned long tmp ;

  {
  {
# 397
  tmp = (unsigned long )GCC_STDARG_START();
# 397
  __ccured_va_start(va, tmp);
# 398
  vsnprintf((char */* __restrict  */)(buffer___0), 1023U,
            (char const   */* __restrict  */)((char const   *)format), va);
# 399
  __ccured_va_end(va);
  {
# 64 "spec.work"
  if (! ((ptr->logfile)->__BLAST_FLAG == 1)) {
# 66
    __error__();
  }
  {

  }
  }
# 401 "log.c"
  fprintf((FILE */* __restrict  */)ptr->logfile,
          (char const   */* __restrict  */)((char const   *)"%s"), buffer___0);
  {
# 40 "spec.work"
  if (! ((ptr->logfile)->__BLAST_FLAG == 1)) {
# 42
    __error__();
  }
  {

  }
  }
# 402 "log.c"
  fflush(ptr->logfile);
  }
# 403
  return;
}
}
# 409
void write_logentry_all(int type , char *format  , ...) 
{ struct LogHash *ptr ;
  char buffer___0[1024] ;
  __ccured_va_list va ;
  int i ;
  unsigned long tmp ;

  {
  {
# 416
  tmp = (unsigned long )GCC_STDARG_START();
# 416
  __ccured_va_start(va, tmp);
# 417
  vsnprintf((char */* __restrict  */)(buffer___0), 1023U,
            (char const   */* __restrict  */)((char const   *)format), va);
# 418
  __ccured_va_end(va);
# 420
  i = 0;
  }
# 420
  while (i < channels.amount) {
# 422
    if ((*(channels.data + i))) {
      {
# 422
      ptr = find_log_any((*(channels.data + i)), type);
      }
# 422
      if (ptr) {
        {
# 423
        write_logentry(ptr, "%s", buffer___0);
        }
      }
    }
    {
# 420
    i ++;
    }
  }
# 426
  return;
}
}
# 437
static char stamp[100]  ;
# 433
static char *get_logtimestamp(void) 
{ time_t now ;
  struct tm *form ;

  {
  {
# 439
  time(& now);
# 440
  form = localtime((time_t const   *)(& now));
# 441
  strftime((char */* __restrict  */)(stamp), 99U,
           (char const   */* __restrict  */)((char const   *)"%a %b %d %H:%M:%S %Y"),
           (struct tm  const  */* __restrict  */)((struct tm  const  *)form));
  }
# 442
  return (stamp);
}
}
# 19 "match.h"
int match(char *string , char *pattern ) ;
# 21 "match.c"
int match(char *string , char *pattern ) 
{ char *str ;
  char *pat ;

  {
# 25
  if (string) {
# 25
    if (! pattern) {
# 25
      return (0);
    }
  } else {
# 25
    return (0);
  }
  {
# 27
  str = strdup((char const   *)string);
# 28
  upcase(str);
# 29
  string = str;
# 31
  pat = strdup((char const   *)pattern);
# 32
  upcase(pat);
# 33
  pattern = pat;
  }
# 35
  while (1) {
# 36
    if (! (*string)) {
# 36
      if (! (*pattern)) {
# 37
        if (str) {
          {
# 37
          free((void *)str);
# 37
          str = (char *)((void *)0);
          }
        }
# 37
        if (pat) {
          {
# 37
          free((void *)pat);
# 37
          pat = (char *)((void *)0);
          }
        }
# 38
        return (1);
      }
    }
# 40
    if ((*string)) {
# 40
      if (! (*pattern)) {
        _L: 
# 41
        if (str) {
          {
# 41
          free((void *)str);
# 41
          str = (char *)((void *)0);
          }
        }
# 41
        if (pat) {
          {
# 41
          free((void *)pat);
# 41
          pat = (char *)((void *)0);
          }
        }
# 42
        return (0);
      }
    } else {
      goto _L;
    }
# 45
    if ((int )(*string) == (int )(*pattern)) {
      {
# 45
      string ++;
# 45
      pattern ++;
      }
    } else {
# 45
      if ((*string)) {
# 45
        if ((int )(*pattern) == 63) {
          {
# 45
          string ++;
# 45
          pattern ++;
          }
        } else {
          goto _L___0;
        }
      } else {
        _L___0: 
# 47
        if ((int )(*pattern) == 42) {
# 48
          if ((int )(*string) == (int )(*(pattern + 1))) {
            {
# 48
            pattern ++;
            }
          } else {
# 50
            if ((int )(*(pattern + 1)) == (int )(*(string + 1))) {
              {
# 50
              string ++;
# 50
              pattern ++;
              }
            } else {
              {
# 51
              string ++;
              }
            }
          }
        } else {
# 54
          if (str) {
            {
# 54
            free((void *)str);
# 54
            str = (char *)((void *)0);
            }
          }
# 54
          if (pat) {
            {
# 54
            free((void *)pat);
# 54
            pat = (char *)((void *)0);
            }
          }
# 55
          return (0);
        }
      }
    }
  }
# 58
  return (0);
}
}
# 31 "muh.c"
FILE *messagelog   = (FILE *)((void *)0);
# 33
static int read_server(void) ;
# 34
static int read_newclient(void) ;
# 35
static int read_client(void) ;
# 36
static int checkconfig(void) ;
# 38
static void fakeconnect(void) ;
# 39
static void sig_term(void) ;
# 40
static void create_listen(void) ;
# 41
static void rehash(void) ;
# 42
static void client_left(void) ;
# 43
static void check_timers(void) ;
# 44
static void run(void) ;
# 45
static void init(void) ;
# 47
static void server_reset(void) ;
# 48
static void setup_home(char *s___0 ) ;
# 49
static void muh_commands(char *command , char *param ) ;
# 50
static void server_commands(char *command , char *param , int *pass ) ;
# 51
static void server_reply_num(int command , char *origin , char *param1 ,
                             char *param2 , int *pass ) ;
# 53
static void server_reply_str(char *command , char *origin , char *param1 ,
                             char *param2 , int *pass ) ;
# 58
struct __anonstruct_cfg_type_50 cfg   = 
# 58
  {0, 1, 1, 1, 0, 0, 0, 0, 0, (char *)((void *)0), (char *)((void *)0),
   (char *)((void *)0), (char *)((void *)0), (char *)((void *)0),
   (char *)((void *)0), (char *)((void *)0), (char *)((void *)0),
   (char *)((void *)0), (char *)((void *)0), (char *)((void *)0),
   (char *)((void *)0), (char *)((void *)0)};
# 74
timer_type timers  ;
# 86
int listensocket   = 0;
# 87
char *forwardmsg   = (char *)((void *)0);
# 88
char const   *muh_binary  ;
# 91
void escape(void) 
{ 

  {
  {
# 93
  rawsock_close(listensocket);
# 94
  sock_close(& c_server);
# 95
  sock_close(& c_client);
# 96
  sock_close(& c_newclient);
  }
# 97
  if (messagelog) {
    {

    {
# 96 "spec.work"
    if (messagelog->__BLAST_FLAG == 1) {
# 97
      messagelog->__BLAST_FLAG = 0;
    } else {
# 98
      __error__();
    }
    {

    }
    }
# 97 "muh.c"
    fclose(messagelog);
    }
  }
  {
# 98
  unlink((char const   *)"pid");
# 99
  error("terminating...\n");
# 100
  exit(1);
  {
# 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
# 100 "muh.c"
  return;
}
}
# 103
void read_cfg(void) 
{ int tmp ;

  {
  {
# 105
  lineno = 1;
# 106
  report("parsing configuration file...\n");
# 107
  yyin = fopen((char const   */* __restrict  */)((char const   *)"muhrc"),
               (char const   */* __restrict  */)((char const   *)"r"));
  {
# 17 "spec.work"
  if (yyin != (FILE *)0) {
# 17
    yyin->__BLAST_FLAG = 1;
  }
  {

  }
  }

  }
# 107 "muh.c"
  if (! yyin) {
    {
# 108
    error("unable to open muhrc in %s!\n", cfg.home);
# 109
    escape();
    }
  }
  {
# 111
  yyrestart(yyin);
# 112
  tmp = yyparse();
  }
# 112
  if (tmp) {
    {

    {
# 96 "spec.work"
    if (yyin->__BLAST_FLAG == 1) {
# 97
      yyin->__BLAST_FLAG = 0;
    } else {
# 98
      __error__();
    }
    {

    }
    }
# 113 "muh.c"
    fclose(yyin);
# 114
    escape();
    }
  }
  {

  {
# 96 "spec.work"
  if (yyin->__BLAST_FLAG == 1) {
# 97
    yyin->__BLAST_FLAG = 0;
  } else {
# 98
    __error__();
  }
  {

  }
  }
# 116 "muh.c"
  fclose(yyin);
  }
# 117
  return;
}
}
# 119
static void sig_term(void) 
{ 

  {
  {
# 121
  error("caught sigterm, terminating...\n");
# 122
  escape();
  }
# 123
  return;
}
}
# 125
void drop_client(char *reason ) 
{ 

  {
# 127
  if (i_client.connected) {
# 128
    if (reason) {
      {
# 130
      sock_setblock(c_server.socket);
      }
# 131
      if ((int )(*(reason + 0)) == 58) {
        {
# 132
        irc_write(& c_client, "ERROR %s", reason);
        }
      } else {
        {
# 134
        irc_write(& c_client, "ERROR :Closing Link: %s", reason);
        }
      }
    }
    {
# 136
    sock_close(& c_client);
# 137
    i_client.connected = 0;
    }
  }
# 139
  return;
}
}
# 141
void drop_newclient(char *reason ) 
{ 

  {
# 143
  if (i_newclient.connected) {
# 144
    if (reason) {
      {
# 145
      sock_setblock(c_server.socket);
# 146
      irc_write(& c_newclient, "ERROR :Closing Link: %s", reason);
      }
    }
    {
# 148
    sock_close(& c_newclient);
# 149
    i_newclient.connected = 0;
# 150
    status.init = 0;
    }
  }
# 152
  return;
}
}
# 154
void drop_server(char *reason ) 
{ char *tmp ;

  {
# 156
  if (c_server.socket) {
# 157
    if (reason) {
      {
# 159
      sock_setblock(c_server.socket);
# 160
      irc_write(& c_server, "QUIT :%s", reason);
# 162
      tmp = gettimestamp2();
# 162
      write_logentry_all(2, "%s *** %s has quit IRC (%s %s)\n", tmp,
                         status.nickname, reason, "");
      }
    }
    {
# 165
    sock_close(& c_server);
    }
  }
  {
# 167
  i_server.connected = 0;
  }
# 169
  if (! cfg.rejoin) {
    {
# 170
    drop_channels();
    }
  }
  {
# 172
  close_logs();
  }
# 173
  return;
}
}
# 175
void drop_all(char *reason ) 
{ 

  {
  {
# 177
  drop_server(reason);
# 178
  drop_client(reason);
# 179
  drop_newclient((char *)((void *)0));
  }
# 180
  return;
}
}
# 186
static void server_reset(void) 
{ int i ;

  {
  {
# 190
  i = 0;
  }
# 190
  while (i < servers.amount) {
    {
# 192
    ((*(servers.data + i)))->working = 1;
# 190
    i ++;
    }
  }
# 194
  return;
}
}
# 195
void server_next(int disablecurrent ) 
{ int i ;
  int x ;

  {
  {
# 197
  i = i_server.current;
  }
# 200
  if (disablecurrent) {
    {
# 200
    ((*(servers.data + i_server.current)))->working = 0;
    }
  }
# 202
  while (1) {
    {
# 203
    i_server.current = i_server.current + 1;
    }
# 204
    if (i_server.current >= servers.amount) {
      {
# 204
      i_server.current = 0;
      }
    }
# 202
    if (((*(servers.data + i_server.current)))->working) {
# 202
      break;
    } else {
# 202
      if (! (i_server.current != i)) {
# 202
        break;
      }
    }
  }
# 207
  if (! ((*(servers.data + i_server.current)))->working) {
# 208
    if (cfg.nevergiveup) {
      {
# 209
      report("i\'m out of servers but i won\'t give up...\n");
# 210
      x = 0;
      }
# 210
      while (x < servers.amount) {
        {
# 211
        ((*(servers.data + x)))->working = 1;
# 210
        x ++;
        }
      }
      {
# 212
      i_server.current = 0;
      }
    } else {
      {
# 215
      error("i\'m out of servers, terminating...\n");
# 216
      escape();
      }
    }
  }
# 220
  if (i == i_server.current) {
    {
# 221
    report("trying to reconnect to \'%s\' in 5 seconds...\n",
           ((*(servers.data + i_server.current)))->name);
# 222
    sleep(5U);
    }
  }
# 224
  return;
}
}
# 226
int proceed_timer(int *timer , int warn , int exceed ) 
{ 

  {
  {
# 228
  (*timer) ++;
  }
# 229
  if ((*timer) == warn) {
# 229
    return (1);
  }
# 230
  if ((*timer) >= exceed) {
    {
# 231
    (*timer) = 0;
    }
# 232
    return (2);
  }
# 234
  return (0);
}
}
# 237
static void create_listen(void) 
{ int tmp ;
  int tmp___0 ;

  {
# 239
  if (listensocket) {
    {
# 239
    rawsock_close(listensocket);
    }
  }
  {
# 242
  listensocket = sock_open();
  }
# 242
  if (listensocket < 0) {
    {
# 243
    error("unable to create socket!\n");
# 244
    escape();
    }
  }
  {
# 247
  tmp = sock_bind(listensocket, cfg.listenhost, cfg.listenport);
  }
# 247
  if (! tmp) {
# 248
    if (cfg.listenhost) {
      {
# 249
      error("unable to bind to \'%s\':%d!\n", cfg.listenhost, cfg.listenport);
      }
    } else {
      {
# 251
      error("unable to bind to port %d!\n", cfg.listenport);
      }
    }
    {
# 252
    escape();
    }
  }
  {
# 255
  tmp___0 = sock_listen(listensocket);
  }
# 255
  if (! tmp___0) {
    {
# 256
    error("unable to listen!\n");
# 257
    escape();
    }
  }
# 260
  if (cfg.listenhost) {
    {
# 261
    report("listening on host %s/port %d.\n", cfg.listenhost, cfg.listenport);
    }
  } else {
    {
# 263
    report("listening on port %d.\n", cfg.listenport);
    }
  }
# 265
  return;
}
}
# 267
static void rehash(void) 
{ char *oldnick ;
  char *oldlistenhost ;
  char *oldrealname ;
  char *oldusername ;
  int oldlistenport ;
  int tmp ;
  int tmp___3 ;
  int tmp___5 ;
  int tmp___6 ;

  {
  {
# 275
  report("rehashing...\n");
# 277
  oldnick = strdup((char const   *)cfg.nickname);
# 278
  oldusername = strdup((char const   *)cfg.username);
# 279
  oldrealname = strdup((char const   *)cfg.realname);
# 280
  oldlistenport = cfg.listenport;
  }
# 281
  if (cfg.listenhost) {
    {
# 282
    oldlistenhost = strdup((char const   *)cfg.listenhost);
    }
  } else {
    {
# 284
    oldlistenhost = (char *)((void *)0);
    }
  }
  {
# 287
  clear_logs();
# 289
  read_cfg();
# 291
  tmp = _xstrcmp((char const   *)oldnick, (char const   *)cfg.nickname,
                 (char const   *)"muh.c", 291);
  }
# 291
  if (tmp) {
    {
# 291
    status.got_nick = 0;
    }
  }
# 293
  if (oldlistenport != cfg.listenport) {
    {
# 297
    create_listen();
    }
  } else {
# 293
    if ((unsigned int )oldlistenhost == (unsigned int )((void *)0)) {
# 293
      if ((unsigned int )cfg.listenhost == (unsigned int )((void *)0)) {
        {
# 293
        tmp___3 = 0;
        }
      } else {
        {
# 293
        tmp___3 = 1;
        }
      }
    } else {
# 293
      if ((unsigned int )cfg.listenhost == (unsigned int )((void *)0)) {
        {
# 293
        tmp___3 = 1;
        }
      } else {
        {
# 293
        tmp___3 = _xstrcmp((char const   *)oldlistenhost,
                           (char const   *)cfg.listenhost,
                           (char const   *)"muh.c", 296);
        }
      }
    }
# 293
    if (tmp___3) {
      {
# 297
      create_listen();
      }
    }
  }
# 299
  if (! cfg.logging) {
# 299
    if (messagelog) {
      {

      {
# 96 "spec.work"
      if (messagelog->__BLAST_FLAG == 1) {
# 97
        messagelog->__BLAST_FLAG = 0;
      } else {
# 98
        __error__();
      }
      {

      }
      }
# 300 "muh.c"
      fclose(messagelog);
# 301
      messagelog = (FILE *)((void *)0);
      }
    }
  }
# 304
  if (cfg.logging) {
# 304
    if (! messagelog) {
      {
# 305
      messagelog = fopen((char const   */* __restrict  */)((char const   *)"messages"),
                         (char const   */* __restrict  */)((char const   *)"a+"));
      {
# 17 "spec.work"
      if (messagelog != (FILE *)0) {
# 17
        messagelog->__BLAST_FLAG = 1;
      }
      {

      }
      }

      }
# 305 "muh.c"
      if (! messagelog) {
        {
# 306
        report("can\'t open msgfile, won\'t log anything i get!\n");
        }
      }
    }
  }
  {
# 310
  tmp___5 = _xstrcmp((char const   *)oldrealname, (char const   *)cfg.realname,
                     (char const   *)"muh.c", 310);
  }
# 310
  if (tmp___5) {
    {
# 311
    drop_all("reconnecting to server...");
# 312
    report("reconnecting to server...\n");
# 313
    i_server.current = i_server.current - 1;
# 314
    sleep(5U);
# 315
    server_next(0);
    }
  } else {
    {
# 310
    tmp___6 = _xstrcmp((char const   *)oldusername,
                       (char const   *)cfg.username, (char const   *)"muh.c",
                       310);
    }
# 310
    if (tmp___6) {
      {
# 311
      drop_all("reconnecting to server...");
# 312
      report("reconnecting to server...\n");
# 313
      i_server.current = i_server.current - 1;
# 314
      sleep(5U);
# 315
      server_next(0);
      }
    }
  }
# 318
  if (oldnick) {
    {
# 318
    free((void *)oldnick);
# 318
    oldnick = (char *)((void *)0);
    }
  }
# 319
  if (oldrealname) {
    {
# 319
    free((void *)oldrealname);
# 319
    oldrealname = (char *)((void *)0);
    }
  }
# 320
  if (oldusername) {
    {
# 320
    free((void *)oldusername);
# 320
    oldusername = (char *)((void *)0);
    }
  }
# 321
  if (oldlistenhost) {
    {
# 321
    free((void *)oldlistenhost);
# 321
    oldlistenhost = (char *)((void *)0);
    }
  }
# 322
  return;
}
}
# 324
static void client_left(void) 
{ char *chns ;
  char *tmp ;

  {
  {
# 328
  chns = list_channels();
  }
# 328
  if (chns) {
# 329
    if (cfg.leavemsg) {
      {
# 329
      irc_write(& c_server, "PRIVMSG %s :\001ACTION %s\001", chns, cfg.leavemsg);
      }
    }
# 330
    if (cfg.leave) {
      {
# 332
      report("leaving channels...\n");
# 333
      irc_write(& c_server, "JOIN 0");
      }
    } else {
      {
# 336
      tmp = gettimestamp2();
# 336
      write_logentry_all(128, "%s *** client has %sconnected\n", tmp, "dis");
      }
    }
# 338
    if (chns) {
      {
# 338
      free((void *)chns);
# 338
      chns = (char *)((void *)0);
      }
    }
  }
# 340
  return;
}
}
# 342
static void check_timers(void) 
{ FILE *fwd ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;

  {
# 346
  if (i_client.connected) {
    {
# 347
    tmp = proceed_timer(& c_client.timer, 60, 120);
    }
# 347
    switch (tmp) {
    case 0: 
    {

    }
# 349
    break;
    case 1: 
    {
# 351
    irc_write(& c_client, "PING :%s", i_server.realname);
    }
# 352
    break;
    case 2: 
    {
# 354
    drop_client("Ping timeout");
# 355
    error("disconnected stoned client.\n");
# 356
    client_left();
    }
# 357
    break;
    }
  } else {
# 361
    if (cfg.antiidle) {
      {
# 361
      tmp___0 = proceed_timer(& timers.antiidle, 0, 600);
      }
# 361
      if (tmp___0 == 2) {
        {
# 361
        irc_write(& c_server, "PRIVMSG");
        }
      }
    }
  }
# 364
  if (i_server.connected == 1) {
    {
# 366
    tmp___1 = proceed_timer(& c_server.timer, 60, 120);
    }
# 366
    switch (tmp___1) {
    case 0: 
    {

    }
# 369
    break;
    case 1: 
    {
# 371
    irc_write(& c_server, "PING :%s", i_server.realname);
    }
# 372
    break;
    case 2: 
    {
# 374
    drop_all("disconnecting from stoned server.\n");
# 375
    error("disconnecting from stoned server.\n");
# 376
    server_next(0);
    }
# 377
    break;
    }
  }
# 381
  if (i_server.connected == 2) {
    {
# 382
    tmp___2 = proceed_timer(& c_server.timer, 90, 150);
    }
# 382
    switch (tmp___2) {
    case 0: 
    {

    }
# 384
    break;
    case 1: 
    {
# 386
    irc_write(& c_server, "PING :%s", i_server.realname);
    }
# 387
    break;
    case 2: 
    {
# 389
    drop_all("disconnecting from stoned server.\n");
# 390
    error("disconnecting from stoned server.\n");
# 391
    server_next(0);
    }
# 392
    break;
    }
  }
# 396
  if (i_newclient.connected) {
    {
# 397
    tmp___3 = proceed_timer(& c_newclient.timer, 0, 20);
    }
# 397
    switch (tmp___3) {
    case 0: 
    {

    }
    case 1: 
    {

    }
# 400
    break;
    case 2: 
    {

    }
# 402
    if (status.init) {
      {
# 403
      error("authorisation failed, dropping new client!\n");
# 404
      irc_write(& c_newclient, ":%s 464 %s :Password Incorrect",
                i_server.realname, cfg.nickname);
# 405
      drop_newclient("Bad Password");
      }
    } else {
      {
# 408
      error("new client timed out in authorisation state!\n");
# 409
      drop_newclient("Ping timeout");
      }
    }
# 411
    if (i_client.connected) {
      {
# 411
      irc_notice(& c_client, status.nickname,
                 "Unsuccessful connect-attempt from \'%s\'!",
                 i_newclient.hostname);
      }
    }
# 412
    if (i_newclient.nickname) {
      {
# 412
      free((void *)i_newclient.nickname);
# 412
      i_newclient.nickname = (char *)((void *)0);
      }
    }
# 413
    if (i_newclient.username) {
      {
# 413
      free((void *)i_newclient.username);
# 413
      i_newclient.username = (char *)((void *)0);
      }
    }
# 414
    if (i_newclient.hostname) {
      {
# 414
      free((void *)i_newclient.hostname);
# 414
      i_newclient.hostname = (char *)((void *)0);
      }
    }
# 416
    break;
    }
  }
  {
# 420
  tmp___4 = proceed_timer(& timers.listen, 0, 15);
  }
# 420
  if (tmp___4 == 2) {
    {
# 420
    status.allowconnect = 1;
    }
  }
  {
# 422
  tmp___5 = proceed_timer(& timers.reply, 0, 4);
  }
# 422
  if (tmp___5 == 2) {
    {
# 422
    status.allowreply = 1;
    }
  }
# 424
  if (cfg.getnick) {
# 424
    if (! status.got_nick) {
# 424
      if (! i_client.connected) {
        {
# 424
        tmp___6 = proceed_timer(& timers.nickname, 0, 3);
        }
# 424
        if (tmp___6 == 2) {
          {
# 425
          irc_write(& c_server, "NICK %s", cfg.nickname);
          }
        }
      }
    }
  }
# 427
  if (cfg.forwardmsg) {
    {
# 428
    tmp___7 = proceed_timer(& timers.forward, 0, 180);
    }
# 428
    switch (tmp___7) {
    case 0: 
    {

    }
    case 1: 
    {

    }
# 431
    break;
    case 2: 
    {

    }
# 433
    if (forwardmsg) {
      {
# 433
      fwd = popen((char const   *)cfg.forwardmsg, (char const   *)"w");
      }
# 433
      if (fwd) {
        {

        {
# 64 "spec.work"
        if (! (fwd->__BLAST_FLAG == 1)) {
# 66
          __error__();
        }
        {

        }
        }
# 434 "muh.c"
        fprintf((FILE */* __restrict  */)fwd,
                (char const   */* __restrict  */)((char const   *)"%s"),
                forwardmsg);
# 435
        pclose(fwd);
        }
# 436
        if (forwardmsg) {
          {
# 436
          free((void *)forwardmsg);
# 436
          forwardmsg = (char *)((void *)0);
          }
        }
      }
    }
# 438
    break;
    }
  }
# 442
  if (cfg.dccbounce) {
    {
# 443
    dcc_timer();
    }
  }
# 444
  return;
}
}
# 447
static void server_reply_num(int command , char *origin , char *param1 ,
                             char *param2 , int *pass ) 
{ char *chns ;
  char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  char *p ;
  char *p___0 ;
  char *tmp___2 ;
  char *p___1 ;
  char *topicwho ;
  char *tmp___3 ;
  char *tmp___4 ;
  int tmp___6 ;

  {
# 451
  switch (command) {
  case 1: 
  {
# 454
  i_server.connected = i_server.connected + 1;
  }
# 456
  if (i_server.realname) {
    {
# 456
    free((void *)i_server.realname);
# 456
    i_server.realname = (char *)((void *)0);
    }
  }
  {
# 457
  i_server.realname = strdup((char const   *)origin);
  }
# 459
  if (status.nickname) {
    {
# 459
    free((void *)status.nickname);
# 459
    status.nickname = (char *)((void *)0);
    }
  }
  {
# 460
  status.nickname = strdup((char const   *)param1);
  }
# 462
  if (i_server.greeting[0]) {
    {
# 462
    free((void *)i_server.greeting[0]);
# 462
    i_server.greeting[0] = (char *)((void *)0);
    }
  }
  {
# 463
  i_server.greeting[0] = strdup((char const   *)param2);
  }
# 465
  if (status.idhostname) {
    {
# 465
    free((void *)status.idhostname);
# 465
    status.idhostname = (char *)((void *)0);
    }
  }
  {
# 466
  tmp___0 = strchr((char const   *)param2, (int )'!');
  }
# 466
  if (tmp___0) {
    {
# 467
    tmp = strchr((char const   *)param2, (int )'!');
# 467
    status.idhostname = strdup((char const   *)(tmp + 1));
    }
  } else {
    {
# 469
    status.idhostname = strdup((char const   *)"(null)");
    }
  }
  {
# 471
  tmp___1 = lastpos(i_server.greeting[0], ' ');
# 471
  (*(i_server.greeting[0] + tmp___1)) = (char )0;
# 472
  report("connected to \'%s\'.\n", i_server.realname);
# 473
  irc_write(& c_server, "MODE %s :+i", status.nickname);
  }
# 475
  if (status.startup) {
# 485
    if (cfg.rejoin == 1) {
      {
# 485
      chns = list_channels();
      }
# 485
      if (chns) {
        {
# 487
        report("rejoining channels (%s)...\n", chns);
# 488
        irc_write(& c_server, "JOIN %s", chns);
        }
# 489
        if (chns) {
          {
# 489
          free((void *)chns);
# 489
          chns = (char *)((void *)0);
          }
        }
        {
# 490
        drop_channels();
        }
      } else {
        goto _L;
      }
    } else {
      _L: 
# 492
      if (cfg.rejoin == 2) {
# 492
        if (cfg.channels) {
          {
# 494
          report("rejoining channels (%s)...\n", cfg.channels);
# 495
          irc_write(& c_server, "JOIN %s", cfg.channels);
# 496
          drop_channels();
          }
        }
      }
    }
  } else {
# 477
    if (cfg.channels) {
      {
# 479
      report("autojoining channels (%s)...\n", cfg.channels);
# 480
      irc_write(& c_server, "JOIN %s", cfg.channels);
      }
    }
    {
# 483
    time(& status.startup);
    }
  }
# 499
  if (i_server.isupport[0]) {
    {
# 499
    free((void *)i_server.isupport[0]);
# 499
    i_server.isupport[0] = (char *)((void *)0);
    }
  }
# 500
  if (i_server.isupport[1]) {
    {
# 500
    free((void *)i_server.isupport[1]);
# 500
    i_server.isupport[1] = (char *)((void *)0);
    }
  }
# 501
  if (i_server.isupport[2]) {
    {
# 501
    free((void *)i_server.isupport[2]);
# 501
    i_server.isupport[2] = (char *)((void *)0);
    }
  }
# 503
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
# 509
  if (i_server.greeting[command - 1]) {
    {
# 509
    free((void *)i_server.greeting[command - 1]);
# 509
    i_server.greeting[command - 1] = (char *)((void *)0);
    }
  }
  {
# 510
  i_server.greeting[command - 1] = strdup((char const   *)param2);
  }
# 512
  break;
  case 5: 
  {

  }
# 516
  if (i_server.isupport[0]) {
# 518
    if (i_server.isupport[1]) {
# 520
      if (! i_server.isupport[2]) {
        {
# 521
        i_server.isupport[2] = strdup((char const   *)param2);
        }
      }
    } else {
      {
# 519
      i_server.isupport[1] = strdup((char const   *)param2);
      }
    }
  } else {
    {
# 517
    i_server.isupport[0] = strdup((char const   *)param2);
    }
  }
# 522
  break;
  case 484: 
  {

  }
# 525
  if (cfg.jumprestricted) {
    {
# 526
    drop_all("restricted connection");
# 527
    report("connection is restricted, jumping...\n");
# 528
    server_next(1);
    }
  }
# 530
  break;
  case 331: 
  {
# 536
  p = strchr((char const   *)param2, (int )' ');
  }
# 536
  if (p) {
    {
# 537
    (*p) = '\0';
    }
  } else {
# 539
    return;
  }
  {
# 541
  channel_topic(param2, ":");
  }
# 543
  break;
  case 332: 
  {
# 549
  p___0 = strchr((char const   *)param2, (int )' ');
  }
# 549
  if (p___0) {
    {
# 550
    tmp___2 = p___0;
# 550
    p___0 ++;
# 550
    (*tmp___2) = '\0';
    }
  } else {
# 552
    return;
  }
  {
# 554
  channel_topic(param2, p___0);
  }
# 556
  break;
  case 333: 
  {
# 563
  p___1 = strchr((char const   *)param2, (int )' ');
  }
# 563
  if (p___1) {
    {
# 564
    tmp___3 = p___1;
# 564
    p___1 ++;
# 564
    (*tmp___3) = '\0';
    }
  } else {
# 566
    return;
  }
  {
# 568
  topicwho = p___1;
# 570
  p___1 = strchr((char const   *)topicwho, (int )' ');
  }
# 570
  if (p___1) {
    {
# 571
    tmp___4 = p___1;
# 571
    p___1 ++;
# 571
    (*tmp___4) = '\0';
    }
  } else {
# 573
    return;
  }
  {
# 575
  channel_when(param2, topicwho, p___1);
  }
# 577
  break;
  default: 
  {

  }
# 581
  break;
  }
# 584
  if (! i_client.connected) {
# 585
    switch (command) {
    case 432: 
    {
# 587
    error("\'%s\' is a invalid nickname - terminating!\n", cfg.nickname);
# 588
    escape();
    }
# 589
    break;
    case 437: 
    {

    }
    case 433: 
    {

    }
# 593
    if (status.got_nick) {
      goto _L___1;
    } else {
# 593
      if (i_server.connected != 2) {
        _L___1: 
# 594
        if (status.nickname) {
          {
# 594
          tmp___6 = _xstrcmp((char const   *)status.nickname,
                             (char const   *)cfg.altnickname,
                             (char const   *)"muh.c", 594);
          }
# 594
          if (tmp___6 == 0) {
# 595
            if (status.nickname) {
              {
# 595
              free((void *)status.nickname);
# 595
              status.nickname = (char *)((void *)0);
              }
            }
            {
# 596
            status.nickname = (char *)xmalloc(9U);
# 597
            randname(status.nickname, 8);
            }
          } else {
            goto _L___0;
          }
        } else {
          _L___0: 
# 600
          if (status.nickname) {
            {
# 600
            free((void *)status.nickname);
# 600
            status.nickname = (char *)((void *)0);
            }
          }
          {
# 601
          status.nickname = strdup((char const   *)cfg.altnickname);
          }
        }
# 604
        if (command == 433) {
          {
# 605
          report("nickname \'%s\' is in use - using nickname \'%s\'.\n",
                 cfg.nickname, status.nickname);
          }
        } else {
          {
# 607
          report("nickname \'%s\' is unavailable - using nickname \'%s\'.\n",
                 cfg.nickname, status.nickname);
          }
        }
        {
# 608
        irc_write(& c_server, "NICK %s", status.nickname);
        }
      }
    }
    {
# 610
    status.got_nick = 0;
    }
# 611
    break;
    default: 
    {

    }
# 614
    break;
    }
  }
# 584
  return;
}
}
# 751
static char timebuffer[20]  ;
# 619
static void server_reply_str(char *command , char *origin , char *param1 ,
                             char *param2 , int *pass ) 
{ struct LogHash *ptr ;
  char *nick ;
  char *hostname ;
  char *p ;
  int i ;
  int l ;
  int cmdindex ;
  char *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;
  char *s___0 ;
  char *target ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  char *tmp___9 ;
  char const   *tmp___11 ;
  char *tmp___12 ;
  int tmp___13 ;
  char *tmp___14 ;
  int tmp___15 ;
  char *tmp___16 ;
  struct tm *tmptr ;
  time_t now ;
  char const   *tmp___17 ;
  char *tmp___18 ;
  char *tmp___19 ;
  size_t tmp___20 ;
  time_t now___0 ;
  char timebuffer___0[120] ;
  struct tm *tmptr___0 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  char *tmp___30 ;
  size_t tmp___32 ;
  size_t tmp___33 ;
  int tmp___35 ;
  int chw ;
  char *tmp___36 ;
  int tmp___37 ;

  {
  {
# 626
  p = strchr((char const   *)origin, (int )'!');
  }
# 626
  if (p) {
    {
# 628
    tmp = p;
# 628
    p ++;
# 628
    (*tmp) = '\0';
# 629
    nick = strdup((char const   *)origin);
# 630
    hostname = strdup((char const   *)p);
    }
  } else {
    {
# 634
    nick = strdup((char const   *)origin);
# 635
    hostname = strdup((char const   *)origin);
    }
  }
  {
# 638
  cmdindex = find_command(command);
  }
# 639
  switch (cmdindex) {
  case 0: 
  {

  }
# 643
  break;
  case 4: 
  {
# 646
  tmp___1 = _xstrcasecmp((char const   *)status.nickname, (char const   *)nick,
                         (char const   *)"muh.c", 646);
  }
# 646
  if (tmp___1 == 0) {
# 649
    if (status.nickname) {
      {
# 649
      free((void *)status.nickname);
# 649
      status.nickname = (char *)((void *)0);
      }
    }
    {
# 650
    status.nickname = strdup((char const   *)(param1 + 1));
# 652
    tmp___0 = _xstrcasecmp((char const   *)status.nickname,
                           (char const   *)cfg.nickname,
                           (char const   *)"muh.c", 652);
    }
# 652
    if (tmp___0 == 0) {
      {
# 654
      status.got_nick = 1;
# 655
      report("cool, got nick \'%s\'!\n", status.nickname);
      }
    } else {
      {
# 658
      status.got_nick = 0;
      }
    }
  }
  {
# 661
  tmp___2 = gettimestamp2();
# 661
  write_logentry_all(32, "%s *** %s is now known as %s\n", tmp___2, nick,
                     param1 + 1);
  }
# 664
  break;
  case 2: 
  {
# 667
  (*pass) = 0;
  }
# 668
  break;
  case 8: 
  {
# 671
  ptr = find_log_any(param1, 4);
  }
# 671
  if (ptr) {
    {
# 676
    s___0 = strchr((char const   *)param2, (int )' ');
    }
# 676
    if (s___0) {
      {
# 680
      (*s___0) = '\0';
# 681
      target = strdup((char const   *)param2);
# 682
      (*s___0) = ' ';
# 684
      tmp___3 = nextword(param2);
# 684
      tmp___4 = gettimestamp2();
# 684
      write_logentry(ptr, "%s *** %s was kicked by %s (%s)\n", tmp___4, target,
                     nick, tmp___3 + 1);
      }
# 687
      if (target) {
        {
# 687
        free((void *)target);
# 687
        target = (char *)((void *)0);
        }
      }
    }
  }
  {
# 691
  tmp___6 = pos(param2, ' ');
# 691
  tmp___7 = _xstrncmp((char const   *)status.nickname, (char const   *)param2,
                      (unsigned int )(tmp___6 - 1), (char const   *)"muh.c", 691);
  }
# 691
  if (tmp___7 == 0) {
# 696
    if (! i_client.connected) {
      {
# 697
      tmp___5 = nextword(param2);
# 697
      report("%s kicked me out of %s (%s)!\n", origin, param1, tmp___5 + 1);
      }
    }
    {
# 699
    rem_channel(param1);
# 700
    rem_log(param1);
    }
# 701
    break;
  }
# 704
  break;
  case 16: 
  {
# 707
  tmp___8 = _xstrcasecmp((char const   *)status.nickname, (char const   *)nick,
                         (char const   *)"muh.c", 707);
  }
# 707
  if (tmp___8 == 0) {
    {
# 708
    add_channel(param1 + 1);
    }
  }
  {
# 710
  ptr = find_log_any(param1 + 1, 1);
  }
# 710
  if (ptr) {
    {
# 711
    tmp___9 = gettimestamp2();
# 711
    write_logentry(ptr, "%s *** %s!%s has joined %s\n", tmp___9, nick, hostname,
                   param1 + 1);
    }
  }
# 714
  break;
  case 32: 
  {
# 717
  ptr = find_log_any(param1, 4);
  }
# 717
  if (ptr) {
# 718
    if (param2) {
# 718
      if (param2 + 1) {
        {
# 718
        tmp___11 = (char const   *)(param2 + 1);
        }
      } else {
        {
# 718
        tmp___11 = (char const   *)"";
        }
      }
    } else {
      {
# 718
      tmp___11 = (char const   *)"";
      }
    }
    {
# 718
    tmp___12 = gettimestamp2();
# 718
    write_logentry(ptr, "%s *** %s has left %s (%s)\n", tmp___12, nick, param1,
                   tmp___11);
    }
  }
  {
# 722
  tmp___13 = _xstrcasecmp((char const   *)status.nickname, (char const   *)nick,
                          (char const   *)"muh.c", 722);
  }
# 722
  if (tmp___13 == 0) {
    {
# 724
    rem_channel(param1);
# 725
    rem_log(param1);
    }
  }
# 728
  break;
  case 4096: 
  {
# 731
  tmp___14 = gettimestamp2();
# 731
  write_logentry_all(2, "%s *** %s has quit IRC (%s %s)\n", tmp___14, nick,
                     param1 + 1, param2);
  }
# 734
  break;
  case 256: 
  {
# 737
  tmp___15 = _xstrcasecmp((char const   *)status.nickname, (char const   *)nick,
                          (char const   *)"muh.c", 737);
  }
# 737
  if (tmp___15 == 0) {
    {
# 738
    error("you\'ve been killed by \'%s\'!\n", nick);
    }
  }
# 740
  break;
  case 64: 
  {
# 743
  ptr = find_log_any(param1, 8);
  }
# 743
  if (ptr) {
    {
# 744
    tmp___16 = gettimestamp2();
# 744
    write_logentry(ptr, "%s *** %s sets mode %s\n", tmp___16, nick, param2);
    }
  }
# 747
  break;
  case 128: 
  {
# 755
  channel_topic(param1, param2);
# 757
  time(& now);
# 758
  tmptr = gmtime((time_t const   *)(& now));
# 759
  strftime((char */* __restrict  */)(timebuffer), 20U,
           (char const   */* __restrict  */)((char const   *)"%s"),
           (struct tm  const  */* __restrict  */)((struct tm  const  *)tmptr));
# 760
  channel_when(param1, origin, timebuffer);
# 763
  ptr = find_log_any(param1, 64);
  }
# 763
  if (ptr) {
# 764
    if (param2 + 1) {
      {
# 764
      tmp___17 = (char const   *)(param2 + 1);
      }
    } else {
      {
# 764
      tmp___17 = (char const   *)"";
      }
    }
    {
# 764
    tmp___18 = gettimestamp2();
# 764
    write_logentry(ptr, "%s *** %s changes topic to \'%s\'\n", tmp___18, nick,
                   tmp___17);
    }
  }
# 767
  break;
  case 1024: 
  {

  }
  case 512: 
  {

  }
# 771
  if (status.nickname) {
    {
# 771
    tmp___37 = _xstrcasecmp((char const   *)param1,
                            (char const   *)status.nickname,
                            (char const   *)"muh.c", 771);
    }
# 771
    if (tmp___37 == 0) {
# 773
      if (! i_client.connected) {
        {
# 773
        tmp___35 = is_perm(& peoplelist, origin);
        }
# 773
        if (tmp___35) {
# 776
          if ((int )(*(param2 + 1)) == 1) {
            {
# 778
            upcase(param2);
            }
# 780
            if (cmdindex == 512) {
# 780
              if (cfg.dccbounce) {
                {
# 780
                tmp___28 = _xstrcmp((char const   *)(param2 + 2),
                                    (char const   *)"DCC\001",
                                    (char const   *)"muh.c", 781);
                }
# 780
                if (tmp___28 == 0) {
                  {
# 783
                  tmp___19 = dcc_initiate(param2 + 1, 0);
                  }
# 783
                  if (tmp___19) {
                    {
# 785
                    irc_write(& c_client, ":%s PRIVMSG %s :%s", origin, param1,
                              param2 + 1);
# 786
                    (*pass) = 0;
                    }
                  }
                } else {
                  goto _L___0;
                }
              } else {
                goto _L___0;
              }
            } else {
              _L___0: 
              {
# 789
              tmp___27 = is_ignore(hostname, 1);
              }
# 789
              if (tmp___27) {
                {
# 828
                report("received a CTCP %s from %s. (didn\'t reply)\n",
                       param2 + 1, origin);
                }
              } else {
# 789
                if (status.allowreply) {
                  {
# 791
                  report("received a CTCP %s from %s.\n", param2 + 1, origin);
# 793
                  tmp___23 = _xstrncmp((char const   *)(param2 + 2),
                                       (char const   *)"PING", 4U,
                                       (char const   *)"muh.c", 793);
                  }
# 793
                  if (tmp___23 == 0) {
                    {
# 795
                    tmp___20 = strlen((char const   *)(param2 + 1));
                    }
# 795
                    if (tmp___20 > 6U) {
                      {
# 796
                      irc_notice(& c_server, nick, "%s", param2 + 1);
                      }
                    }
                  } else {
                    {
# 799
                    tmp___22 = _xstrcmp((char const   *)(param2 + 2),
                                        (char const   *)"VERSION\001",
                                        (char const   *)"muh.c", 799);
                    }
# 799
                    if (tmp___22 == 0) {
                      {
# 800
                      irc_notice(& c_server, nick,
                                 "\001VERSION muh v2.1rc1 (http://mind.riot.org/muh)\001");
                      }
                    } else {
                      {
# 802
                      tmp___21 = _xstrcmp((char const   *)(param2 + 2),
                                          (char const   *)"TIME\001",
                                          (char const   *)"muh.c", 802);
                      }
# 802
                      if (tmp___21 == 0) {
                        {
# 808
                        time(& now___0);
# 809
                        tmptr___0 = localtime((time_t const   *)(& now___0));
# 810
                        strftime((char */* __restrict  */)(timebuffer___0),
                                 120U,
                                 (char const   */* __restrict  */)((char const   *)"%a %b %d %T %Y"),
                                 (struct tm  const  */* __restrict  */)((struct tm  const  *)tmptr___0));
# 812
                        irc_notice(& c_server, nick, "\001TIME %s\001",
                                   timebuffer___0);
                        }
                      }
                    }
                  }
                  {
# 816
                  tmp___24 = _xstrcmp((char const   *)(param2 + 2),
                                      (char const   *)"USERINFO\001",
                                      (char const   *)"muh.c", 816);
                  }
# 816
                  if (tmp___24 == 0) {
                    {
# 817
                    irc_notice(& c_server, nick,
                               "\001USERINFO weiss-hellbraun gefleckt, milchgebend.\001");
                    }
                  }
                  {
# 818
                  tmp___25 = _xstrcmp((char const   *)(param2 + 2),
                                      (char const   *)"CLIENTINFO\001",
                                      (char const   *)"muh.c", 818);
                  }
# 818
                  if (tmp___25 == 0) {
                    {
# 819
                    irc_notice(& c_server, nick,
                               "\001CLIENTINFO GIBMILCH MUH KACK FURZ WIEDERKAEU BRUNZ LAUF SCHWANZWEDEL FRISS SAUF LECK\001");
                    }
                  }
                  {
# 820
                  tmp___26 = _xstrcmp((char const   *)(param2 + 2),
                                      (char const   *)"FINGER\001",
                                      (char const   *)"muh.c", 820);
                  }
# 820
                  if (tmp___26 == 0) {
                    {
# 821
                    irc_notice(& c_server, nick,
                               "\001FINGER point that fucking finger up your ass!\001");
                    }
                  }
                  {
# 823
                  add_ignore(hostname, 6, 1);
# 824
                  status.allowreply = 0;
# 825
                  timers.reply = 0;
                  }
                } else {
                  {
# 828
                  report("received a CTCP %s from %s. (didn\'t reply)\n",
                         param2 + 1, origin);
                  }
                }
              }
            }
          } else {
            {
# 834
            tmp___29 = is_ignore(hostname, 0);
            }
# 834
            if (! tmp___29) {
# 834
              if (status.allowreply) {
# 836
                if (cfg.awaynotice) {
                  {
# 837
                  irc_notice(& c_server, nick, "%s", cfg.awaynotice);
                  }
                }
                {
# 839
                add_ignore(hostname, 120, 0);
# 840
                status.allowreply = 0;
# 841
                timers.reply = 0;
                }
              }
            }
# 844
            if (cfg.logging) {
# 844
              if (messagelog) {
                {
# 846
                tmp___30 = gettimestamp();
                {
# 80 "spec.work"
                if (! (messagelog->__BLAST_FLAG == 1)) {
# 82
                  __error__();
                }
                {

                }
                }
# 846 "muh.c"
                fprintf((FILE */* __restrict  */)messagelog,
                        (char const   */* __restrict  */)((char const   *)"%s(%s) %s\n"),
                        tmp___30, origin, param2 + 1);
                {
# 40 "spec.work"
                if (! (messagelog->__BLAST_FLAG == 1)) {
# 42
                  __error__();
                }
                {

                }
                }
# 847 "muh.c"
                fflush(messagelog);
                }
              }
            }
# 850
            if (cfg.forwardmsg) {
              {
# 852
              timers.forward = 0;
              }
# 853
              if (forwardmsg) {
                {
# 853
                l = (int )strlen((char const   *)forwardmsg);
                }
              } else {
                {
# 853
                l = 0;
                }
              }
              {
# 854
              tmp___32 = strlen((char const   *)origin);
# 854
              tmp___33 = strlen((char const   *)(param2 + 1));
# 854
              i = (int )((((unsigned int )l + tmp___32) + tmp___33) + 5U);
# 855
              forwardmsg = (char *)xrealloc((void *)forwardmsg, (unsigned int )i);
# 856
              sprintf((char */* __restrict  */)(forwardmsg + l),
                      (char const   */* __restrict  */)((char const   *)"(%s) %s\n"),
                      origin, param2 + 1);
              }
            }
          }
        }
      }
    } else {
      goto _L___1;
    }
  } else {
    _L___1: 
    {
# 863
    chw = 0;
    }
# 866
    if ((int )(*(param1 + 0)) == 64) {
      {
# 868
      chw = 1;
# 869
      param1 ++;
      }
    } else {
# 866
      if ((int )(*(param1 + 0)) == 37) {
        {
# 868
        chw = 1;
# 869
        param1 ++;
        }
      } else {
# 866
        if ((int )(*(param1 + 0)) == 43) {
          {
# 868
          chw = 1;
# 869
          param1 ++;
          }
        }
      }
    }
    {
# 872
    ptr = find_log_any(param1, 16);
    }
# 872
    if (ptr) {
# 874
      if (cmdindex == 512) {
        {
# 875
        tmp___36 = gettimestamp2();
# 875
        write_logentry(ptr, "%s <%s> %s\n", tmp___36, nick, param2 + 1);
        }
      } else {
# 879
        if (chw) {
          {
# 880
          param1 --;
          }
        }
        {
# 882
        write_logentry(ptr, "%s -%s:%s- %s\n", & gettimestamp2, nick, param1,
                       param2 + 1);
        }
      }
    }
  }
# 888
  break;
  default: 
  {

  }
# 891
  break;
  }
# 894
  if (nick) {
    {
# 894
    free((void *)nick);
# 894
    nick = (char *)((void *)0);
    }
  }
# 895
  if (hostname) {
    {
# 895
    free((void *)hostname);
# 895
    hostname = (char *)((void *)0);
    }
  }
# 895
  return;
}
}
# 898
static void server_commands(char *command , char *param , int *pass ) 
{ int tmp ;
  int tmp___0 ;

  {
  {
# 900
  upcase(command);
# 902
  tmp = _xstrcmp((char const   *)command, (char const   *)"PING",
                 (char const   *)"muh.c", 902);
  }
# 902
  if (tmp == 0) {
    {
# 904
    (*pass) = 0;
    }
# 905
    if (param) {
# 905
      if ((int )(*(param + 0)) == 58) {
        {
# 905
        param ++;
        }
      }
    }
# 907
    if (param) {
      {
# 907
      irc_write(& c_server, "PONG :%s", param);
      }
    }
  }
  {
# 910
  tmp___0 = _xstrcmp((char const   *)command, (char const   *)"ERROR",
                     (char const   *)"muh.c", 910);
  }
# 910
  if (tmp___0 == 0) {
    {
# 911
    (*pass) = 0;
# 913
    drop_server((char *)((void *)0));
# 914
    drop_newclient((char *)((void *)0));
    }
# 915
    if (param) {
      {
# 916
      drop_client(param);
      }
    } else {
      {
# 918
      drop_client("closed connection after server reported error.\n");
      }
    }
# 920
    if (param) {
      {
# 921
      error("server-error! (%s)\n", param);
      }
    } else {
      {
# 923
      error("server-error! (%s)\n", "unknown");
      }
    }
    {
# 924
    server_next(i_server.connected == 0);
    }
  }
# 926
  return;
}
}
# 929
static int read_server(void) 
{ char *backup ;
  char *origin ;
  char *command ;
  char *param1 ;
  char *param2 ;
  int rstate ;
  int pass ;
  int tmp ;
  size_t tmp___0 ;

  {
  {
# 931
  backup = (char *)0;
# 934
  pass = 0;
# 936
  rstate = irc_read(& c_server);
  }
# 937
  if (rstate > 0) {
    {
# 938
    rstate = 0;
# 939
    tmp___0 = strlen((char const   *)(c_server.buffer));
    }
# 939
    if (tmp___0) {
      {
# 940
      pass = 1;
# 942
      backup = strdup((char const   *)(c_server.buffer));
      }
# 944
      if ((int )c_server.buffer[0] == 58) {
        {
# 945
        origin = strtok((char */* __restrict  */)(c_server.buffer + 1),
                        (char const   */* __restrict  */)((char const   *)" "));
# 946
        command = strtok((char */* __restrict  */)((char *)((void *)0)),
                         (char const   */* __restrict  */)((char const   *)" "));
# 947
        param1 = strtok((char */* __restrict  */)((char *)((void *)0)),
                        (char const   */* __restrict  */)((char const   *)" "));
# 948
        param2 = strtok((char */* __restrict  */)((char *)((void *)0)),
                        (char const   */* __restrict  */)((char const   *)"\0"));
        }
# 952
        if (command) {
          {
# 953
          tmp = atoi((char const   *)command);
# 953
          server_reply_num(tmp, origin, param1, param2, & pass);
# 954
          server_reply_str(command, origin, param1, param2, & pass);
          }
        }
      } else {
        {
# 958
        command = strtok((char */* __restrict  */)(c_server.buffer),
                         (char const   */* __restrict  */)((char const   *)" "));
# 959
        param1 = strtok((char */* __restrict  */)((char *)((void *)0)),
                        (char const   */* __restrict  */)((char const   *)"\0"));
        }
# 961
        if (command) {
          {
# 962
          server_commands(command, param1, & pass);
          }
        }
      }
# 965
      if (i_client.connected) {
# 965
        if (pass) {
          {
# 965
          irc_write(& c_client, "%s", backup);
          }
        }
      }
# 966
      if (backup) {
        {
# 966
        free((void *)backup);
# 966
        backup = (char *)((void *)0);
        }
      }
    }
  }
# 969
  return (rstate);
}
}
# 973
static void fakeconnect(void) 
{ int i ;
  time_t t ;
  struct tm *tt ;
  int pic ;
  long tmp ;
  int tmp___0 ;
  int j ;
  struct LogHash *ptr ;
  char *tmp___1 ;

  {
  {
# 978
  pic = 0;
# 980
  irc_write(& c_client, ":%s 001 %s %s %s!~%s@%s", i_server.realname,
            status.nickname, i_server.greeting[0], status.nickname,
            i_client.username, i_client.hostname);
# 981
  i = 1;
  }
# 981
  while (i < 4) {
    {
# 982
    irc_write(& c_client, ":%s %03d %s %s", i_server.realname, i + 1,
              status.nickname, i_server.greeting[i]);
# 981
    i ++;
    }
  }
  {
# 984
  i = 0;
  }
# 984
  while (i < 3) {
# 986
    if (i_server.isupport[i]) {
      {
# 987
      irc_write(& c_client, ":%s 005 %s %s", i_server.realname, status.nickname,
                i_server.isupport[i]);
      }
    }
    {
# 984
    i ++;
    }
  }
  {
# 990
  irc_write(& c_server, "LUSERS");
  }
# 992
  if (! cfg.leave) {
    {
# 992
    report("reintroducing channels...\n");
    }
  }
  {
# 998
  irc_write(& c_client, ":%s 375 %s :- muh version 2.1rc1 -", i_server.realname,
            status.nickname);
# 1001
  time(& t);
# 1002
  tt = localtime((time_t const   *)(& t));
  }
# 1004
  if (tt->tm_hour > 6) {
# 1004
    if (tt->tm_hour < 19) {
      {
# 1004
      pic = 0;
      }
    } else {
      {
# 1004
      pic = 1;
      }
    }
  } else {
    {
# 1004
    pic = 1;
    }
  }
# 1007
  if (tt->tm_mday == 24) {
# 1007
    if (tt->tm_mon == 11) {
      {
# 1007
      pic = 2;
      }
    }
  }
  {
# 1009
  i = 0;
  }
# 1009
  while (i < 5) {
    {
# 1010
    irc_write(& c_client, ":%s 372 %s :%s", i_server.realname, status.nickname,
              pics[pic][i]);
# 1009
    i ++;
    }
  }
  {
# 1012
  irc_write(& c_client, ":%s 372 %s :- running on server %s with nickname %s",
            i_server.realname, status.nickname,
            ((*(servers.data + i_server.current)))->name, status.nickname);
  }
# 1014
  if (messagelog) {
    {
# 1014
    tmp = ftell(messagelog);
    }
# 1014
    if (tmp) {
      {
# 1015
      irc_write(& c_client,
                ":%s 372 %s :- you have messages waiting. (read them with /muh read)",
                i_server.realname, status.nickname);
      }
    } else {
      {
# 1017
      irc_write(& c_client, ":%s 372 %s :- you have no messages waiting.",
                i_server.realname, status.nickname);
      }
    }
  } else {
    {
# 1017
    irc_write(& c_client, ":%s 372 %s :- you have no messages waiting.",
              i_server.realname, status.nickname);
    }
  }
  {
# 1019
  irc_write(& c_client, ":%s 376 %s :End of /MOTD command.", i_server.realname,
            status.nickname);
# 1021
  tmp___0 = _xstrcmp((char const   *)i_client.nickname,
                     (char const   *)status.nickname, (char const   *)"muh.c",
                     1021);
  }
# 1021
  if (tmp___0 != 0) {
    {
# 1022
    irc_write(& c_client, ":%s NICK :%s", i_client.nickname, status.nickname);
    }
# 1023
    if (i_client.nickname) {
      {
# 1023
      free((void *)i_client.nickname);
# 1023
      i_client.nickname = (char *)((void *)0);
      }
    }
    {
# 1024
    i_client.nickname = strdup((char const   *)status.nickname);
    }
  }
# 1027
  if (cfg.leave) {
# 1027
    if (cfg.channels) {
# 1027
      if (channels.amount) {
        goto _L___0;
      } else {
        {
# 1029
        report("rejoining channels (%s)...\n", cfg.channels);
# 1030
        irc_write(& c_server, "JOIN %s", cfg.channels);
        }
      }
    } else {
      goto _L___0;
    }
  } else {
    _L___0: 
# 1032
    if (channels.amount) {
      {
# 1036
      j = 0;
      }
# 1036
      while (j < channels.amount) {
# 1038
        if ((*(channels.data + j))) {
          {
# 1042
          irc_write(& c_client, ":%s!%s JOIN :%s", status.nickname,
                    status.idhostname, (*(channels.data + j)));
          }
# 1046
          if ((*(channels.topic + j))) {
            {
# 1048
            irc_write(& c_client, ":%s %d %s %s %s", i_server.realname, 332,
                      status.nickname, (*(channels.data + j)),
                      (*(channels.topic + j)));
            }
# 1052
            if ((*(channels.topicwho + j))) {
              {
# 1053
              irc_write(& c_client, ":%s %d %s %s %s %s", i_server.realname,
                        333, status.nickname, (*(channels.data + j)),
                        (*(channels.topicwho + j)), (*(channels.topicwhen + j)));
              }
            }
          } else {
            {
# 1060
            irc_write(& c_client, ":%s %d %s %s :No topic is set",
                      i_server.realname, 331, status.nickname,
                      (*(channels.data + j)));
            }
          }
          {
# 1065
          ptr = find_log_any((*(channels.data + j)), 128);
          }
# 1065
          if (ptr) {
            {
# 1066
            tmp___1 = gettimestamp2();
# 1066
            write_logentry(ptr, "%s *** client has %sconnected\n", tmp___1, "");
            }
          }
          {
# 1068
          irc_write(& c_server, "NAMES %s", (*(channels.data + j)));
          }
        }
        {
# 1036
        j ++;
        }
      }
    }
  }
# 1072
  return;
}
}
# 1074
static int read_newclient(void) 
{ char *command ;
  char *param ;
  int c_status ;
  int tmp ;
  char const   *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  size_t tmp___3 ;
  int tmp___4 ;
  char const   *tmp___5 ;
  int tmp___6 ;
  char const   *tmp___7 ;
  int tmp___8 ;

  {
  {
# 1077
  tmp = irc_read(& c_newclient);
# 1077
  c_status = tmp;
  }
# 1079
  if (c_status > 0) {
    {
# 1081
    c_status = 0;
# 1082
    c_newclient.buffer[30] = (char )0;
# 1083
    command = strtok((char */* __restrict  */)(c_newclient.buffer),
                     (char const   */* __restrict  */)((char const   *)" "));
# 1084
    param = strtok((char */* __restrict  */)((char *)((void *)0)),
                   (char const   */* __restrict  */)((char const   *)"\0"));
    }
# 1086
    if (command) {
# 1086
      if (param) {
        {
# 1087
        upcase(command);
# 1088
        tmp___4 = _xstrcmp((char const   *)command, (char const   *)"PASS",
                           (char const   *)"muh.c", 1088);
        }
# 1088
        if (tmp___4 == 0) {
# 1088
          if (! (status.init & 1)) {
# 1090
            if ((int )(*param) == 58) {
              {
# 1090
              param ++;
              }
            }
            {
# 1091
            tmp___3 = strlen((char const   *)cfg.password);
            }
# 1091
            if (tmp___3 == 13U) {
              {
# 1092
              tmp___0 = (char const   *)crypt((char const   *)param,
                                              (char const   *)cfg.password);
# 1092
              tmp___1 = _xstrcmp(tmp___0, (char const   *)cfg.password,
                                 (char const   *)"muh.c", 1092);
              }
# 1092
              if (tmp___1 == 0) {
                {
# 1093
                status.passok = 1;
                }
              }
            } else {
              {
# 1096
              tmp___2 = _xstrcmp((char const   *)param,
                                 (char const   *)cfg.password,
                                 (char const   *)"muh.c", 1096);
              }
# 1096
              if (tmp___2 == 0) {
                {
# 1097
                status.passok = 1;
                }
              }
            }
            {
# 1099
            status.init = status.init | 1;
            }
          }
        }
        {
# 1101
        tmp___6 = _xstrcmp((char const   *)command, (char const   *)"NICK",
                           (char const   *)"muh.c", 1101);
        }
# 1101
        if (tmp___6 == 0) {
          {
# 1102
          status.init = status.init | 2;
          }
# 1103
          if (i_newclient.nickname) {
            {
# 1103
            free((void *)i_newclient.nickname);
# 1103
            i_newclient.nickname = (char *)((void *)0);
            }
          }
          {
# 1104
          tmp___5 = (char const   *)strtok((char */* __restrict  */)param,
                                           (char const   */* __restrict  */)((char const   *)" "));
# 1104
          i_newclient.nickname = strdup(tmp___5);
          }
        }
        {
# 1107
        tmp___8 = _xstrcmp((char const   *)command, (char const   *)"USER",
                           (char const   *)"muh.c", 1107);
        }
# 1107
        if (tmp___8 == 0) {
          {
# 1108
          status.init = status.init | 4;
          }
# 1109
          if (i_newclient.username) {
            {
# 1109
            free((void *)i_newclient.username);
# 1109
            i_newclient.username = (char *)((void *)0);
            }
          }
          {
# 1110
          tmp___7 = (char const   *)strtok((char */* __restrict  */)param,
                                           (char const   */* __restrict  */)((char const   *)" "));
# 1110
          i_newclient.username = strdup(tmp___7);
          }
        }
# 1113
        if (status.init == 7) {
# 1113
          if (status.passok) {
            {
# 1114
            report("authorisation successful!\n");
            }
# 1116
            if (i_client.connected) {
              {
# 1117
              drop_client("New connection established!");
# 1118
              report("dropped old client.\n");
              }
            }
# 1121
            if (i_client.nickname) {
              {
# 1121
              free((void *)i_client.nickname);
# 1121
              i_client.nickname = (char *)((void *)0);
              }
            }
# 1122
            if (i_client.username) {
              {
# 1122
              free((void *)i_client.username);
# 1122
              i_client.username = (char *)((void *)0);
              }
            }
# 1123
            if (i_client.hostname) {
              {
# 1123
              free((void *)i_client.hostname);
# 1123
              i_client.hostname = (char *)((void *)0);
              }
            }
            {
# 1125
            i_client.nickname = i_newclient.nickname;
# 1126
            i_client.username = i_newclient.username;
# 1127
            i_client.hostname = i_newclient.hostname;
# 1129
            i_newclient.nickname = (char *)((void *)0);
# 1130
            i_newclient.username = (char *)((void *)0);
# 1131
            i_newclient.hostname = (char *)((void *)0);
# 1133
            i_client.connected = 1;
# 1134
            i_newclient.connected = 0;
# 1136
            c_client.socket = c_newclient.socket;
# 1137
            c_newclient.socket = 0;
# 1139
            status.passok = 0;
# 1140
            status.init = 0;
# 1141
            fakeconnect();
            }
          }
        }
      }
    }
  }
# 1146
  return (c_status);
}
}
# 1149
static void muh_commands(char *command , char *param ) 
{ int corr ;
  int i ;
  char *s___0 ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  char *tmp___2 ;
  long tmp___3 ;
  time_t now ;
  int seconds ;
  int minutes ;
  int hours ;
  int days ;
  char const   *tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;

  {
  {
# 1151
  corr = 0;
  }
# 1155
  if (! command) {
    {
# 1157
    irc_notice(& c_client, status.nickname,
               "Available commands: HELP READ DEL JUMP REHASH RESET DIE PRINT UPTIME");
    }
# 1158
    return;
  }
  {
# 1161
  upcase(command);
# 1163
  tmp___13 = _xstrcmp((char const   *)command, (char const   *)"READ",
                      (char const   *)"muh.c", 1163);
  }
# 1163
  if (tmp___13 == 0) {
    {
# 1164
    corr ++;
    }
# 1165
    if (messagelog) {
      {
# 1165
      tmp___3 = ftell(messagelog);
      }
# 1165
      if (tmp___3) {
        {

        {
# 40 "spec.work"
        if (! (messagelog->__BLAST_FLAG == 1)) {
# 42
          __error__();
        }
        {

        }
        }
# 1166 "muh.c"
        fflush(messagelog);
# 1167
        rewind(messagelog);
# 1169
        irc_notice(& c_client, status.nickname, "Playing messagelog...");
# 1171
        s___0 = (char *)xmalloc(1024U);
        }
# 1172
        while (1) {
          {

          {
# 32 "spec.work"
          if (! (messagelog->__BLAST_FLAG == 1)) {
# 34
            __error__();
          }
          {

          }
          }
# 1172 "muh.c"
          tmp___2 = fgets((char */* __restrict  */)s___0, 1023,
                          (FILE */* __restrict  */)messagelog);
          }
# 1172
          if (! tmp___2) {
# 1172
            break;
          }
          {
# 1173
          tmp___1 = strlen((char const   *)s___0);
          }
# 1173
          if ((int )(*(s___0 + (tmp___1 - 1U))) == 10) {
            {
# 1173
            tmp___0 = strlen((char const   *)s___0);
# 1173
            (*(s___0 + (tmp___0 - 1U))) = (char )0;
            }
          }
          {
# 1174
          irc_notice(& c_client, status.nickname, "%s", s___0);
          }
        }
# 1176
        if (s___0) {
          {
# 1176
          free((void *)s___0);
# 1176
          s___0 = (char *)((void *)0);
          }
        }
        {
# 1178
        irc_notice(& c_client, status.nickname, "End of messagelog.");
# 1179
        fseek(messagelog, 0L, 2);
        }
      } else {
        {
# 1181
        irc_notice(& c_client, status.nickname, "You don\'t have any messages!");
        }
      }
    } else {
      {
# 1181
      irc_notice(& c_client, status.nickname, "You don\'t have any messages!");
      }
    }
  } else {
    {
# 1184
    tmp___12 = _xstrcmp((char const   *)command, (char const   *)"DEL",
                        (char const   *)"muh.c", 1184);
    }
# 1184
    if (tmp___12 == 0) {
      {
# 1186
      corr ++;
      }
# 1187
      if (messagelog) {
        {

        {
# 96 "spec.work"
        if (messagelog->__BLAST_FLAG == 1) {
# 97
          messagelog->__BLAST_FLAG = 0;
        } else {
# 98
          __error__();
        }
        {

        }
        }
# 1188 "muh.c"
        fclose(messagelog);
        }
      }
      {
# 1190
      unlink((char const   *)"messages");
      }
# 1191
      if (cfg.logging) {
        {
# 1192
        messagelog = fopen((char const   */* __restrict  */)((char const   *)"messages"),
                           (char const   */* __restrict  */)((char const   *)"w+"));
        {
# 17 "spec.work"
        if (messagelog != (FILE *)0) {
# 17
          messagelog->__BLAST_FLAG = 1;
        }
        {

        }
        }

        }
      }
      {
# 1194 "muh.c"
      irc_notice(& c_client, status.nickname, "Killed your messages.");
      }
    } else {
      {
# 1197
      tmp___11 = _xstrcmp((char const   *)command, (char const   *)"REHASH",
                          (char const   *)"muh.c", 1197);
      }
# 1197
      if (tmp___11 == 0) {
        {
# 1199
        corr ++;
# 1200
        irc_notice(& c_client, status.nickname, "rehashing...");
# 1201
        rehash();
        }
      } else {
        {
# 1204
        tmp___10 = _xstrcmp((char const   *)command, (char const   *)"RESET",
                            (char const   *)"muh.c", 1204);
        }
# 1204
        if (tmp___10 == 0) {
          {
# 1206
          corr ++;
# 1207
          irc_notice(& c_client, status.nickname,
                     "resetting all servers to working..");
# 1208
          server_reset();
          }
        } else {
          {
# 1211
          tmp___9 = _xstrcmp((char const   *)command, (char const   *)"UPTIME",
                             (char const   *)"muh.c", 1211);
          }
# 1211
          if (tmp___9 == 0) {
            {
# 1216
            corr ++;
# 1217
            time(& now);
# 1218
            now -= status.startup;
# 1219
            getuptime(now, & days, & hours, & minutes, & seconds);
# 1219
            irc_notice(& c_client, status.nickname,
                       "muh has been online: %dd %02dh %02dm %02ds\n", days,
                       hours, minutes, seconds);
            }
          } else {
            {
# 1225
            tmp___8 = _xstrcmp((char const   *)command, (char const   *)"JUMP",
                               (char const   *)"muh.c", 1225);
            }
# 1225
            if (tmp___8 == 0) {
              {
# 1227
              corr ++;
# 1228
              drop_all("changing server...");
# 1229
              report("changing server...\n");
              }
# 1230
              if (param) {
                {
# 1231
                i = atoi((char const   *)param);
# 1232
                i --;
                }
# 1233
                if (i < 0) {
                  {
# 1233
                  i = 0;
                  }
                }
# 1234
                if (i >= servers.amount) {
                  {
# 1234
                  i = servers.amount - 1;
                  }
                }
                {
# 1235
                ((*(servers.data + i)))->working = 1;
# 1236
                i_server.current = i - 1;
                }
              }
              {
# 1238
              server_next(0);
              }
            } else {
              {
# 1241
              tmp___7 = _xstrcmp((char const   *)command, (char const   *)"DIE",
                                 (char const   *)"muh.c", 1241);
              }
# 1241
              if (tmp___7 == 0) {
                {
# 1242
                corr ++;
# 1243
                drop_all("ouch.");
# 1244
                report("dying...\n");
# 1245
                escape();
                }
              } else {
                {
# 1248
                tmp___6 = _xstrcmp((char const   *)command,
                                   (char const   *)"PRINT",
                                   (char const   *)"muh.c", 1248);
                }
# 1248
                if (tmp___6 == 0) {
                  {
# 1249
                  corr ++;
# 1250
                  irc_notice(& c_client, status.nickname,
                             "Printing serverlist...");
# 1251
                  i = 0;
                  }
# 1251
                  while (i < servers.amount) {
# 1252
                    if (((*(servers.data + i)))->password) {
                      {
# 1252
                      tmp___4 = (char const   *)":*";
                      }
                    } else {
                      {
# 1252
                      tmp___4 = (char const   *)"";
                      }
                    }
# 1252
                    if (((*(servers.data + i)))->working) {
                      {
# 1252
                      tmp___5 = (int )'+';
                      }
                    } else {
                      {
# 1252
                      tmp___5 = (int )'-';
                      }
                    }
                    {
# 1252
                    irc_notice(& c_client, status.nickname, "%c[%d] %s:%d%s",
                               tmp___5, i + 1, ((*(servers.data + i)))->name,
                               ((*(servers.data + i)))->port, tmp___4);
# 1251
                    i ++;
                    }
                  }
                  {
# 1259
                  irc_notice(& c_client, status.nickname,
                             "Current server is %d.", i_server.current + 1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
# 1262
  if (! corr) {
    {
# 1262
    irc_notice(& c_client, status.nickname,
               "Available commands: HELP READ DEL JUMP REHASH RESET DIE PRINT UPTIME");
    }
  }
# 1263
  return;
}
}
# 1265
static int read_client(void) 
{ int c_status ;
  char *backup ;
  char *command ;
  char *param1 ;
  char *param2 ;
  int pass ;
  char *tmp ;
  struct LogHash *ptr ;
  char *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  size_t tmp___7 ;

  {
  {
# 1269
  pass = 1;
# 1271
  c_status = irc_read(& c_client);
  }
# 1274
  if (c_status > 0) {
    {
# 1276
    c_status = 0;
# 1278
    tmp___7 = strlen((char const   *)(c_client.buffer));
    }
# 1278
    if (tmp___7) {
      {
# 1280
      backup = strdup((char const   *)(c_client.buffer));
# 1282
      command = strtok((char */* __restrict  */)(c_client.buffer),
                       (char const   */* __restrict  */)((char const   *)" "));
# 1283
      param1 = strtok((char */* __restrict  */)((char *)((void *)0)),
                      (char const   */* __restrict  */)((char const   *)" "));
# 1284
      param2 = strtok((char */* __restrict  */)((char *)((void *)0)),
                      (char const   */* __restrict  */)((char const   *)"\0"));
      }
# 1285
      if (param1) {
# 1285
        if ((int )(*(param1 + 0)) == 58) {
          {
# 1285
          param1 ++;
          }
        }
      }
# 1287
      if (command) {
        {
# 1289
        upcase(command);
# 1291
        tmp___6 = _xstrcmp((char const   *)command, (char const   *)"MUH",
                           (char const   *)"muh.c", 1291);
        }
# 1291
        if (tmp___6 == 0) {
          {
# 1293
          muh_commands(param1, param2);
# 1294
          pass = 0;
          }
        } else {
          {
# 1297
          tmp___5 = _xstrcmp((char const   *)command, (char const   *)"QUIT",
                             (char const   *)"muh.c", 1297);
          }
# 1297
          if (tmp___5 == 0) {
            {
# 1299
            drop_client("muh!");
# 1300
            client_left();
# 1301
            report("client signed off.\n");
# 1302
            pass = 0;
            }
          } else {
            {
# 1305
            tmp___4 = _xstrcmp((char const   *)command, (char const   *)"PONG",
                               (char const   *)"muh.c", 1305);
            }
# 1305
            if (tmp___4 == 0) {
              {
# 1308
              pass = 0;
              }
            } else {
              {
# 1311
              tmp___3 = _xstrcmp((char const   *)command,
                                 (char const   *)"PING",
                                 (char const   *)"muh.c", 1311);
              }
# 1311
              if (tmp___3 == 0) {
                {
# 1313
                irc_write(& c_client, ":%s PONG %s :%s", i_server.realname,
                          i_server.realname, status.nickname);
# 1314
                pass = 0;
                }
              } else {
                {
# 1317
                tmp___2 = _xstrcmp((char const   *)command,
                                   (char const   *)"PRIVMSG",
                                   (char const   *)"muh.c", 1317);
                }
# 1317
                if (tmp___2 == 0) {
# 1319
                  if (cfg.dccbounce) {
                    {
# 1319
                    tmp___1 = _xstrncmp((char const   *)param2,
                                        (char const   *)"\001DCC", 4U,
                                        (char const   *)"muh.c", 1319);
                    }
# 1319
                    if (tmp___1 == 0) {
                      {
# 1321
                      tmp = dcc_initiate(param2, 1);
                      }
# 1321
                      if (tmp) {
                        {
# 1323
                        irc_write(& c_server, "PRIVMSG %s :%s", param1, param2);
# 1324
                        pass = 0;
                        }
                      }
                    } else {
                      goto _L;
                    }
                  } else {
                    _L: 
# 1327
                    if ((int )(*(param2 + 0)) != 1) {
# 1327
                      if ((int )(*(param1 + 0)) == 35) {
                        {
# 1331
                        ptr = find_log_any(param1, 16);
                        }
# 1331
                        if (ptr) {
                          {
# 1332
                          tmp___0 = gettimestamp2();
# 1332
                          write_logentry(ptr, "%s <%s> %s\n", tmp___0,
                                         status.nickname, param2 + 1);
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
# 1337
      if (pass) {
        {
# 1337
        irc_write(& c_server, "%s", backup);
        }
      }
# 1338
      if (backup) {
        {
# 1338
        free((void *)backup);
# 1338
        backup = (char *)((void *)0);
        }
      }
    }
  }
# 1341
  return (c_status);
}
}
# 1344
static void run(void) 
{ fd_set rfds ;
  fd_set wfds ;
  struct timeval tv ;
  int selret ;
  int tmp ;
  int *tmp___0 ;
  char *tmp___1 ;
  unsigned int __i ;
  fd_set *__arr ;
  unsigned int __i___0 ;
  fd_set *__arr___0 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;

  {
# 1350
  while (1) {
# 1351
    if (! i_server.connected) {
      {
# 1352
      report("trying server \'%s\' on port %d...\n",
             ((*(servers.data + i_server.current)))->name,
             ((*(servers.data + i_server.current)))->port);
# 1353
      tmp = irc_connect(& c_server, (*(servers.data + i_server.current)),
                        cfg.nickname, cfg.username, cfg.realname, cfg.bind);
      }
# 1353
      switch (tmp) {
      case 0: 
      {
# 1355
      report("tcp-connection to \'%s\' established!\n",
             ((*(servers.data + i_server.current)))->name);
# 1356
      i_server.connected = 1;
      }
# 1357
      break;
      case 1: 
      {
# 1359
      error("unable to create socket!\n");
# 1360
      escape();
      }
# 1361
      break;
      case 2: 
      {
# 1363
      error("unable to resolve \'%s\'!\n",
            ((*(servers.data + i_server.current)))->name);
# 1364
      drop_server((char *)((void *)0));
# 1365
      server_next(1);
      }
# 1366
      break;
      case 3: 
      {

      }
# 1368
      if (cfg.bind) {
        {
# 1369
        error("unable to bind to \'%s\':%d!\n", cfg.bind, cfg.listenport);
        }
      } else {
        {
# 1371
        error("unable to bind to port %d!\n", cfg.listenport);
        }
      }
      {
# 1372
      escape();
      }
# 1373
      break;
      case 4: 
      {
# 1375
      tmp___0 = __errno_location();
# 1375
      tmp___1 = strerror((*tmp___0));
# 1375
      error("unable to connect to \'%s\'! (%s)\n",
            ((*(servers.data + i_server.current)))->name, tmp___1);
# 1376
      drop_server((char *)((void *)0));
# 1377
      server_next(1);
      }
# 1378
      break;
      case 5: 
      {
# 1380
      error("error while sending data to \'%s\'!\n",
            ((*(servers.data + i_server.current)))->name);
# 1381
      drop_server((char *)((void *)0));
# 1382
      server_next(0);
      }
# 1383
      break;
      case 6: 
      {
# 1385
      error("general socket error (%s)!\n", net_errstr);
# 1386
      escape();
      }
# 1387
      break;
      default: 
      {

      }
# 1389
      break;
      }
    }
    {
# 1393
    tv.tv_usec = 0L;
# 1394
    tv.tv_sec = 1L;
    }
# 1396
    while (1) {
      {
# 1396
      __arr = & rfds;
# 1396
      __i = 0U;
      }
# 1396
      while (__i < sizeof(fd_set ) / sizeof(__fd_mask )) {
        {
# 1396
        __arr->__fds_bits[__i] = 0L;
# 1396
        __i ++;
        }
      }
# 1396
      break;
    }
# 1397
    while (1) {
      {
# 1397
      __arr___0 = & wfds;
# 1397
      __i___0 = 0U;
      }
# 1397
      while (__i___0 < sizeof(fd_set ) / sizeof(__fd_mask )) {
        {
# 1397
        __arr___0->__fds_bits[__i___0] = 0L;
# 1397
        __i___0 ++;
        }
      }
# 1397
      break;
    }
# 1399
    if (i_server.connected == 2) {
# 1399
      if (status.allowconnect) {
# 1399
        if (! i_newclient.connected) {
          {
# 1399
          rfds.__fds_bits[(unsigned int )listensocket /
                          (8U * sizeof(__fd_mask ))] = rfds.__fds_bits[(unsigned int )listensocket /
                                                                       (8U *
                                                                        sizeof(__fd_mask ))] |
                                                       (1L <<
                                                        (unsigned int )listensocket %
                                                        (8U * sizeof(__fd_mask )));
          }
        }
      }
    }
# 1400
    if (i_server.connected) {
      {
# 1400
      rfds.__fds_bits[(unsigned int )c_server.socket / (8U * sizeof(__fd_mask ))] = rfds.__fds_bits[(unsigned int )c_server.socket /
                                                                                                    (8U *
                                                                                                     sizeof(__fd_mask ))] |
                                                                                    (1L <<
                                                                                     (unsigned int )c_server.socket %
                                                                                     (8U *
                                                                                      sizeof(__fd_mask )));
      }
    }
# 1401
    if (i_client.connected) {
      {
# 1401
      rfds.__fds_bits[(unsigned int )c_client.socket / (8U * sizeof(__fd_mask ))] = rfds.__fds_bits[(unsigned int )c_client.socket /
                                                                                                    (8U *
                                                                                                     sizeof(__fd_mask ))] |
                                                                                    (1L <<
                                                                                     (unsigned int )c_client.socket %
                                                                                     (8U *
                                                                                      sizeof(__fd_mask )));
      }
    }
# 1402
    if (i_newclient.connected) {
      {
# 1402
      rfds.__fds_bits[(unsigned int )c_newclient.socket /
                      (8U * sizeof(__fd_mask ))] = rfds.__fds_bits[(unsigned int )c_newclient.socket /
                                                                   (8U *
                                                                    sizeof(__fd_mask ))] |
                                                   (1L <<
                                                    (unsigned int )c_newclient.socket %
                                                    (8U * sizeof(__fd_mask )));
      }
    }
# 1404
    if (cfg.dccbounce) {
      {
# 1405
      dcc_socketsubscribe(& rfds, & wfds);
      }
    }
    {
# 1410
    selret = select(highest_socket + 1, (fd_set */* __restrict  */)(& rfds),
                    (fd_set */* __restrict  */)(& wfds),
                    (fd_set */* __restrict  */)((fd_set *)((void *)0)),
                    (struct timeval */* __restrict  */)(& tv));
    }
# 1412
    if (selret > 0) {
# 1413
      if (rfds.__fds_bits[(unsigned int )c_server.socket /
                          (8U * sizeof(__fd_mask ))] &
          (1L << (unsigned int )c_server.socket % (8U * sizeof(__fd_mask )))) {
        {
# 1414
        tmp___2 = read_server();
        }
# 1414
        if (tmp___2 < 0) {
          {
# 1415
          drop_all("server dropped connection!\n");
# 1416
          error("server dropped connection!\n");
# 1417
          server_next(0);
          }
        }
      }
# 1421
      if (rfds.__fds_bits[(unsigned int )listensocket /
                          (8U * sizeof(__fd_mask ))] &
          (1L << (unsigned int )listensocket % (8U * sizeof(__fd_mask )))) {
        {
# 1422
        status.allowconnect = 0;
        }
# 1423
        if (i_newclient.hostname) {
          {
# 1423
          free((void *)i_newclient.hostname);
# 1423
          i_newclient.hostname = (char *)((void *)0);
          }
        }
        {
# 1424
        c_newclient.socket = sock_accept(listensocket, & i_newclient.hostname, 1);
        }
# 1424
        if (c_newclient.socket > 0) {
          {
# 1425
          c_newclient.offset = 0;
# 1426
          i_newclient.connected = 1;
          }
# 1427
          if (i_client.connected) {
            {
# 1430
            report("reconnection-attempt from \'%s\'.\n", i_newclient.hostname);
            }
          } else {
            {
# 1428
            report("caught client from \'%s\'.\n", i_newclient.hostname);
            }
          }
        } else {
# 1434
          if (c_newclient.socket) {
            {
# 1435
            report("denied client from \'%s\'.\n", i_newclient.hostname);
            }
          } else {
            {
# 1437
            error("unable to accept connection from \'%s\'!\n",
                  i_newclient.hostname);
            }
          }
# 1438
          if (i_newclient.hostname) {
            {
# 1438
            free((void *)i_newclient.hostname);
# 1438
            i_newclient.hostname = (char *)((void *)0);
            }
          }
          {
# 1439
          c_newclient.socket = 0;
          }
        }
      }
# 1443
      if (rfds.__fds_bits[(unsigned int )c_client.socket /
                          (8U * sizeof(__fd_mask ))] &
          (1L << (unsigned int )c_client.socket % (8U * sizeof(__fd_mask )))) {
        {
# 1444
        tmp___3 = read_client();
        }
# 1444
        if (tmp___3 < 0) {
          {
# 1446
          drop_client((char *)((void *)0));
# 1447
          client_left();
# 1448
          report("client dropped connection.\n");
          }
        }
      }
# 1452
      if (rfds.__fds_bits[(unsigned int )c_newclient.socket /
                          (8U * sizeof(__fd_mask ))] &
          (1L << (unsigned int )c_newclient.socket % (8U * sizeof(__fd_mask )))) {
        {
# 1453
        tmp___4 = read_newclient();
        }
# 1453
        if (tmp___4 < 0) {
          {
# 1455
          drop_newclient((char *)((void *)0));
# 1456
          report("client dropped connection in authorisation-state.\n");
          }
        }
      }
# 1460
      if (cfg.dccbounce) {
        {
# 1461
        dcc_socketcheck(& rfds, & wfds);
        }
      }
    }
# 1464
    if (! selret) {
      {
# 1465
      check_timers();
# 1466
      process_ignores();
      }
    }
  }
# 1469
  return;
}
}
# 1471
static void init(void) 
{ struct sigaction sv ;
  unsigned int tmp ;

  {
  {
# 1475
  sigemptyset(& sv.sa_mask);
# 1476
  sv.sa_flags = 0;
# 1477
  sv.sa_handler = (void (*)(int  ))(& sig_term);
# 1478
  sigaction(15,
            (struct sigaction  const  */* __restrict  */)((struct sigaction  const  *)(& sv)),
            (struct sigaction */* __restrict  */)((struct sigaction *)((void *)0)));
# 1479
  sigaction(2,
            (struct sigaction  const  */* __restrict  */)((struct sigaction  const  *)(& sv)),
            (struct sigaction */* __restrict  */)((struct sigaction *)((void *)0)));
# 1480
  sigaction(9,
            (struct sigaction  const  */* __restrict  */)((struct sigaction  const  *)(& sv)),
            (struct sigaction */* __restrict  */)((struct sigaction *)((void *)0)));
# 1482
  sv.sa_handler = (void (*)(int  ))(& rehash);
# 1483
  sigaction(1,
            (struct sigaction  const  */* __restrict  */)((struct sigaction  const  *)(& sv)),
            (struct sigaction */* __restrict  */)((struct sigaction *)((void *)0)));
# 1485
  sv.sa_handler = (void (*)(int  ))1;
# 1486
  sigaction(10,
            (struct sigaction  const  */* __restrict  */)((struct sigaction  const  *)(& sv)),
            (struct sigaction */* __restrict  */)((struct sigaction *)((void *)0)));
# 1487
  sigaction(13,
            (struct sigaction  const  */* __restrict  */)((struct sigaction  const  *)(& sv)),
            (struct sigaction */* __restrict  */)((struct sigaction *)((void *)0)));
# 1490
  umask(4294966911U);
# 1493
  status.got_nick = 1;
# 1494
  status.allowconnect = 1;
# 1495
  status.startup = 0L;
# 1496
  i_server.current = 0;
# 1498
  tmp = (unsigned int )time((time_t *)((void *)0));
# 1498
  srand(tmp);
# 1500
  create_listen();
# 1502
  messagelog = fopen((char const   */* __restrict  */)((char const   *)"messages"),
                     (char const   */* __restrict  */)((char const   *)"a+"));
  {
# 17 "spec.work"
  if (messagelog != (FILE *)0) {
# 17
    messagelog->__BLAST_FLAG = 1;
  }
  {

  }
  }

  }
# 1502 "muh.c"
  if (! messagelog) {
    {
# 1503
    report("can\'t open msgfile, won\'t log anything i get!\n");
    }
  }
# 1505
  return;
}
}
# 1507
static int checkconfig(void) 
{ int err ;

  {
  {
# 1509
  err = 0;
  }
# 1511
  if (! cfg.listenport) {
    {
# 1511
    error("\'%s\' has not been set!\n", "listenport");
# 1511
    err ++;
    }
  }
# 1512
  if (! cfg.password) {
    {
# 1512
    error("\'%s\' has not been set!\n", "password");
# 1512
    err ++;
    }
  }
# 1513
  if (! cfg.nickname) {
    {
# 1513
    error("\'%s\' has not been set!\n", "nickname");
# 1513
    err ++;
    }
  }
# 1514
  if (! cfg.altnickname) {
    {
# 1514
    error("\'%s\' has not been set!\n", "altnickname");
# 1514
    err ++;
    }
  }
# 1515
  if (! cfg.username) {
    {
# 1515
    error("\'%s\' has not been set!\n", "username");
# 1515
    err ++;
    }
  }
# 1516
  if (! cfg.realname) {
    {
# 1516
    error("\'%s\' has not been set!\n", "realname");
# 1516
    err ++;
    }
  }
# 1518
  if (! cfg.listenhost) {
# 1520
    if (cfg.bind) {
      {
# 1521
      cfg.listenhost = cfg.bind;
      }
    }
  }
# 1524
  if (! servers.amount) {
    {
# 1526
    error("no servers have been specified!\n");
# 1527
    err ++;
    }
  }
# 1530
  return (err == 0);
}
}
# 1533
static void setup_home(char *s___0 ) 
{ size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  int tmp___4 ;

  {
# 1535
  if (s___0) {
    {
# 1536
    cfg.home = strdup((char const   *)s___0);
# 1537
    tmp___0 = strlen((char const   *)cfg.home);
    }
# 1537
    if ((int )(*(cfg.home + (tmp___0 - 1U))) != 47) {
      {
# 1538
      tmp = strlen((char const   *)cfg.home);
# 1538
      cfg.home = (char *)xrealloc((void *)cfg.home, tmp + 2U);
# 1539
      strcat((char */* __restrict  */)cfg.home,
             (char const   */* __restrict  */)((char const   *)"/"));
      }
    }
  } else {
    {
# 1543
    s___0 = getenv((char const   *)"HOME");
    }
# 1543
    if (! s___0) {
      {
# 1544
      error("$HOME is not set! (set it or use -d)\n");
# 1545
      escape();
      }
    }
    {
# 1548
    tmp___1 = strlen((char const   *)s___0);
# 1548
    tmp___2 = strlen((char const   *)".muh/");
# 1548
    cfg.home = (char *)xmalloc((tmp___1 + tmp___2) + 2U);
# 1549
    _xstrcpy(cfg.home, (char const   *)s___0, (char const   *)"muh.c", 1549);
# 1551
    tmp___3 = strlen((char const   *)cfg.home);
    }
# 1551
    if ((int )(*(cfg.home + (tmp___3 - 1U))) != 47) {
      {
# 1552
      strcat((char */* __restrict  */)cfg.home,
             (char const   */* __restrict  */)((char const   *)"/"));
      }
    }
    {
# 1554
    strcat((char */* __restrict  */)cfg.home,
           (char const   */* __restrict  */)((char const   *)".muh/"));
    }
  }
  {
# 1557
  tmp___4 = chdir((char const   *)cfg.home);
  }
# 1557
  if (tmp___4 < 0) {
    {
# 1558
    error("can\'t chdir to %s!\n", cfg.home);
# 1559
    escape();
    }
  }
# 1561
  return;
}
}
# 1563
int main(int paramc , char **params ) 
{ int pid ;
  FILE *pidfile ;
  char *muhdir ;
  int dofork ;
  int c ;
  char salt[3] ;
  FILE * __restrict  tmp ;
  unsigned int tmp___0 ;
  char const   *tmp___1 ;
  char *tmp___2 ;
  int tmp___3 ;
  FILE * __restrict  tmp___4 ;
  FILE *tmp___5 ;
  FILE * __restrict  tmp___6 ;

  {
  __initialize__();
  {
# 1565
  pid = 0;
# 1567
  muhdir = (char *)0;
# 1568
  dofork = 1;
# 1572
  tmp = (FILE */* __restrict  */)get_stdout();
  {
# 113 "spec.work"
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
# 1572 "muh.c"
  fprintf(tmp, (char const   */* __restrict  */)((char const   *)"%s"),
          "-=======================================================-\n muh v2.1rc1 -- http://mind.riot.org/muh/\n Copyright (c) 1998-2002 Sebastian Kienzl <zap@riot.org>\n                    2002 Lee Hardy <lee@leeh.co.uk>\n-=======================================================-\n     This program comes with ABSOLUTELY NO WARRANTY!\n      This is free software, and you are welcome to\n        redistribute it under certain conditions.\n              For details, read \'COPYING\'.\n-=======================================================-\n\n");
# 1574
  opterr = 0;
  }
# 1576
  while (1) {
    {
# 1576
    c = getopt(paramc, (char * const  *)params, (char const   *)":cfd:");
    }
# 1576
    if (! (c > 0)) {
# 1576
      break;
    }
# 1577
    switch (c) {
    case 99: 
    {
# 1579
    tmp___0 = (unsigned int )time((time_t *)((void *)0));
# 1579
    srand(tmp___0);
# 1580
    randname(salt, 2);
# 1581
    tmp___1 = (char const   *)getpass((char const   *)"Enter password to crypt: ");
# 1581
    tmp___2 = crypt(tmp___1, (char const   *)(salt));
# 1581
    printf((char const   */* __restrict  */)((char const   *)"Set this as password in your muhrc: %s\n\n"),
           tmp___2);
    }
# 1582
    return (0);
# 1583
    break;
    case 100: 
    {
# 1585
    muhdir = optarg;
    }
# 1586
    break;
    case 102: 
    {
# 1588
    dofork = 0;
    }
# 1589
    break;
    case 58: 
    {
# 1591
    error("option -%c requires an argument!\n", optopt);
# 1592
    escape();
    }
# 1593
    break;
    default: 
    {
# 1595
    printf((char const   */* __restrict  */)((char const   *)"Usage: %s [-f] [-c] [-d dir]\n\n     -f\t\tstay in foreground\n     -d dir\tother directory than default for muh-files\n     -c\t\tcreate crypted password\n\n"),
           (*(params + 0)));
    }
# 1596
    return (1);
# 1597
    break;
    }
  }
  {
# 1601
  setup_home(muhdir);
# 1603
  read_cfg();
# 1604
  tmp___3 = checkconfig();
  }
# 1604
  if (! tmp___3) {
    {
# 1604
    escape();
    }
  }
  {
# 1606
  setup_commands();
# 1608
  init();
  }
# 1610
  if (dofork) {
    {
# 1611
    pid = fork();
    }
# 1612
    if (pid < 0) {
      {
# 1613
      error("unable to fork!\n");
# 1614
      escape();
      }
    }
# 1616
    if (pid == 0) {
      {
# 1617
      tmp___4 = (FILE */* __restrict  */)get_stdout();
      {
# 113 "spec.work"
      tmp___4->__BLAST_FLAG = 1;
      {

      }
      }
# 1617 "muh.c"
      tmp___5 = freopen((char const   */* __restrict  */)((char const   *)"log"),
                        (char const   */* __restrict  */)((char const   *)"a"),
                        tmp___4);
      }
# 1617
      if (! tmp___5) {
        {
# 1618
        error("can\'t write to %s!\n", cfg.home);
# 1619
        escape();
        }
      }
      {
# 1622
      tmp___6 = (FILE */* __restrict  */)get_stdout();
      {
# 113 "spec.work"
      tmp___6->__BLAST_FLAG = 1;
      {

      }
      }
# 1622 "muh.c"
      setvbuf(tmp___6, (char */* __restrict  */)((char *)((void *)0)), 2, 0U);
# 1626
      printf((char const   */* __restrict  */)((char const   *)"\n"));
# 1627
      report("---------- NEW SESSION ----------\n");
# 1628
      report("muh version 2.1rc1 - starting log...\n");
      }
# 1629
      if (cfg.listenhost) {
        {
# 1630
        report("listening on host %s/port %d.\n", cfg.listenhost, cfg.listenport);
        }
      } else {
        {
# 1632
        report("listening on port %d.\n", cfg.listenport);
        }
      }
      {
# 1633
      report("muh\'s nick is \'%s\'.\n", cfg.nickname);
      }
    }
# 1636
    if (pid) {
      {
# 1637
      pidfile = fopen((char const   */* __restrict  */)((char const   *)"pid"),
                      (char const   */* __restrict  */)((char const   *)"w"));
      {
# 17 "spec.work"
      if (pidfile != (FILE *)0) {
# 17
        pidfile->__BLAST_FLAG = 1;
      }
      {

      }
      }

      }
# 1637 "muh.c"
      if (! pidfile) {
        {
# 1638
        error("can\'t write to %s!\n", cfg.home);
# 1639
        kill(pid, 15);
# 1640
        escape();
        }
      }
      {

      {
# 64 "spec.work"
      if (! (pidfile->__BLAST_FLAG == 1)) {
# 66
        __error__();
      }
      {

      }
      }
# 1642 "muh.c"
      fprintf((FILE */* __restrict  */)pidfile,
              (char const   */* __restrict  */)((char const   *)"%d\n"), pid);
      {
# 96 "spec.work"
      if (pidfile->__BLAST_FLAG == 1) {
# 97
        pidfile->__BLAST_FLAG = 0;
      } else {
# 98
        __error__();
      }
      {

      }
      }
# 1643 "muh.c"
      fclose(pidfile);
# 1644
      report("muh\'s nick is \'%s\'.\n", cfg.nickname);
# 1645
      report("alrite, muh\'s forked. (pid %d)\n", pid);
# 1646
      exit(0);
      {
# 129 "spec.work"
      while (1) {

      }
      {

      }
      }

      }
    }
  }
  {
# 1649 "muh.c"
  run();
  }
# 1650
  return (0);
}
}
# 21 "perm.c"
void add_perm(permlist_type *table , char *name , int allowed ) 
{ int indx ;

  {
# 25
  if (! name) {
# 25
    return;
  }
  {
# 26
  table->data = (perm_type **)add_item((void **)table->data,
                                       (int )sizeof(perm_type ),
                                       & table->amount, & indx);
# 27
  ((*(table->data + indx)))->name = name;
# 28
  ((*(table->data + indx)))->allowed = allowed;
  }
# 29
  return;
}
}
# 31
void drop_perm(permlist_type *table ) 
{ int i ;

  {
  {
# 34
  i = 0;
  }
# 34
  while (i < table->amount) {
# 35
    if (((*(table->data + i)))->name) {
      {
# 35
      free((void *)((*(table->data + i)))->name);
# 35
      ((*(table->data + i)))->name = (char *)((void *)0);
      }
    }
    {
# 34
    i ++;
    }
  }
  {
# 36
  table->data = (perm_type **)free_table((void **)table->data, & table->amount,
                                         1);
  }
# 37
  return;
}
}
# 39
int is_perm(permlist_type *table , char *name ) 
{ int i ;
  int tmp ;

  {
  {
# 43
  i = 0;
  }
# 43
  while (i < table->amount) {
    {
# 44
    tmp = match(name, ((*(table->data + i)))->name);
    }
# 44
    if (tmp) {
# 44
      return (((*(table->data + i)))->allowed);
    }
    {
# 43
    i ++;
    }
  }
# 46
  return (1);
}
}
# 22 "table.c"
void **add_item(void **data , int elementsize , int *entries , int *indx ) 
{ int i ;
  int ind ;
  void *tmp___0 ;

  {
  {
# 25
  ind = -1;
# 27
  i = 0;
  }
# 27
  while (i < (*entries)) {
# 28
    if (! (*(data + i))) {
      {
# 29
      ind = i;
      }
    }
    {
# 27
    i ++;
    }
  }
# 35
  if (ind < 0) {
    {
# 36
    (*entries) ++;
# 36
    data = (void **)xrealloc((void *)data, (unsigned int )(*entries) *
                                           sizeof(void *));
# 37
    ind = (*entries) - 1;
    }
  }
  {
# 43
  tmp___0 = xmalloc((unsigned int )elementsize);
# 43
  (*(data + ind)) = tmp___0;
# 45
  (*indx) = ind;
  }
# 47
  return (data);
}
}
# 50
void **compact_table(void **data , int *entries ) 
{ int i ;

  {
  {
# 55
  i = (*entries) - 1;
  }
# 57
  while (i >= 0) {
# 58
    if ((*(data + i))) {
      {
# 66
      i = -1;
      }
    } else {
      {
# 59
      (*entries) --;
# 59
      data = (void **)xrealloc((void *)data, (unsigned int )(*entries) *
                                             sizeof(void *));
      }
# 60
      if (! (*entries)) {
        {
# 60
        data = (void **)0;
        }
      }
    }
    {
# 67
    i --;
    }
  }
# 73
  return (data);
}
}
# 76
void **rem_item(void **data , int number , int *entries ) 
{ 

  {
# 78
  if (number >= 0) {
# 78
    if (number < (*entries)) {
      {
# 82
      xfree((*(data + number)));
# 83
      (*(data + number)) = (void *)0;
      }
    }
  }
  {
# 85
  data = compact_table(data, entries);
  }
# 86
  return (data);
}
}
# 89
void **free_table(void **data , int *entries , int clear ) 
{ int i ;

  {
  {
# 92
  i = 0;
  }
# 92
  while (i < (*entries)) {
# 93
    if ((*(data + i))) {
      {
# 93
      xfree((*(data + i)));
      }
    }
    {
# 92
    i ++;
    }
  }
  {
# 95
  xfree((void *)data);
  }
# 97
  if (clear) {
    {
# 98
    (*entries) = 0;
    }
  }
# 100
  return ((void **)0);
}
}
# 20 "tools.c"
void upcase(char *what ) 
{ char *doit ;

  {
# 23
  if (what) {
    {
# 23
    doit = what;
    }
# 23
    while (1) {
# 23
      if (doit) {
# 23
        if (! (*doit)) {
# 23
          break;
        }
      } else {
# 23
        break;
      }
      {
# 23
      (*doit) = (char )toupper((int )(*doit));
# 23
      doit ++;
      }
    }
  }
# 24
  return;
}
}
# 26
void randname(char *randchar , int length ) 
{ int i ;
  int tmp ;

  {
# 29
  if (randchar) {
    {
# 31
    i = 0;
    }
# 31
    while (i < length) {
      {
# 31
      tmp = rand();
# 31
      (*(randchar + i)) = (char )(65 + tmp % 56);
# 31
      i ++;
      }
    }
    {
# 32
    (*(randchar + length)) = (char )0;
    }
  }
# 34
  return;
}
}
# 36
int pos(char *str , char what ) 
{ int i ;

  {
  {
# 38
  i = 0;
  }
# 39
  if (str) {
# 40
    while ((*(str + i))) {
# 41
      if ((int )(*(str + i)) == (int )what) {
# 41
        return (i);
      }
      {
# 42
      i ++;
      }
    }
  }
# 45
  return (-1);
}
}
# 48
int lastpos(char *str , char what ) 
{ int i ;
  size_t tmp ;

  {
# 51
  if (str) {
    {
# 52
    tmp = strlen((char const   *)str);
# 52
    i = (int )(tmp - 1U);
    }
# 53
    while (i) {
# 54
      if ((int )(*(str + i)) == (int )what) {
# 54
        return (i);
      }
      {
# 55
      i --;
      }
    }
  }
# 58
  return (-1);
}
}
# 61
char *nextword(char *string ) 
{ int i ;

  {
  {
# 64
  i = pos(string, ' ');
  }
# 64
  if (i < 0) {
# 65
    return ((char *)((void *)0));
  } else {
# 67
    return ((string + i) + 1);
  }
}
}
# 71
char *lastword(char *from ) 
{ int i ;

  {
  {
# 74
  i = lastpos(from, ' ');
  }
# 74
  if (i < 0) {
# 75
    return (from);
  } else {
# 76
    return ((from + i) + 1);
  }
}
}
# 88
static char stamp___0[100]  ;
# 84
char *gettimestamp(void) 
{ time_t t ;
  struct tm *lt ;

  {
  {
# 90
  time(& t);
# 91
  lt = localtime((time_t const   *)(& t));
# 92
  strftime((char */* __restrict  */)(stamp___0), 99U,
           (char const   */* __restrict  */)((char const   *)"[%a %d %b %H:%M:%S]"),
           (struct tm  const  */* __restrict  */)((struct tm  const  *)lt));
  }
# 93
  return (stamp___0);
}
}
# 105
static char stamp___1[8]  ;
# 101
char *gettimestamp2(void) 
{ time_t now ;
  struct tm *form ;

  {
  {
# 107
  time(& now);
# 108
  form = localtime((time_t const   *)(& now));
# 109
  strftime((char */* __restrict  */)(stamp___1), 8U,
           (char const   */* __restrict  */)((char const   *)"[%H:%M]"),
           (struct tm  const  */* __restrict  */)((struct tm  const  *)form));
  }
# 110
  return (stamp___1);
}
}
# 113
void getuptime(time_t now , int *days , int *hours , int *minutes ,
               int *seconds ) 
{ 

  {
  {
# 116
  (*days) = (int )(now / 86400L);
# 117
  now %= 86400L;
# 118
  (*hours) = (int )(now / 3600L);
# 119
  now %= 3600L;
# 120
  (*minutes) = (int )(now / 60L);
# 121
  (*seconds) = (int )(now % 60L);
  }
# 122
  return;
}
}
# 124
void report(char *format  , ...) 
{ char buffer___0[150] ;
  __ccured_va_list va ;
  unsigned long tmp ;
  char *tmp___0 ;
  FILE * __restrict  tmp___1 ;

  {
  {
# 129
  tmp = (unsigned long )GCC_STDARG_START();
# 129
  __ccured_va_start(va, tmp);
# 130
  vsnprintf((char */* __restrict  */)(buffer___0), 149U,
            (char const   */* __restrict  */)((char const   *)format), va);
# 131
  __ccured_va_end(va);
# 132
  tmp___0 = gettimestamp();
# 132
  tmp___1 = (FILE */* __restrict  */)get_stdout();
  {
# 113 "spec.work"
  tmp___1->__BLAST_FLAG = 1;
  {

  }
  }

  {
# 72
  if (! (tmp___1->__BLAST_FLAG == 1)) {
# 74
    __error__();
  }
  {

  }
  }
# 132 "tools.c"
  fprintf(tmp___1, (char const   */* __restrict  */)((char const   *)"%s + %s"),
          tmp___0, buffer___0);
  }
# 133
  return;
}
}
# 135
void error(char *format  , ...) 
{ char buffer___0[150] ;
  __ccured_va_list va ;
  unsigned long tmp ;
  char *tmp___0 ;
  FILE * __restrict  tmp___1 ;

  {
  {
# 140
  tmp = (unsigned long )GCC_STDARG_START();
# 140
  __ccured_va_start(va, tmp);
# 141
  vsnprintf((char */* __restrict  */)(buffer___0), 149U,
            (char const   */* __restrict  */)((char const   *)format), va);
# 142
  __ccured_va_end(va);
# 143
  tmp___0 = gettimestamp();
# 143
  tmp___1 = (FILE */* __restrict  */)get_stdout();
  {
# 113 "spec.work"
  tmp___1->__BLAST_FLAG = 1;
  {

  }
  }

  {
# 72
  if (! (tmp___1->__BLAST_FLAG == 1)) {
# 74
    __error__();
  }
  {

  }
  }
# 143 "tools.c"
  fprintf(tmp___1, (char const   */* __restrict  */)((char const   *)"%s - %s"),
          tmp___0, buffer___0);
  }
# 144
  return;
}
}
# 26 "parser.y"
int yylex(void) ;
# 27
static int yyerror(char *e ) ;
# 28
static void add_server(char *name , int port , char *pass ) ;
# 30
int lineno   = 1;
# 32
int logtype   = 0;
# 33
char *logchan  ;
# 34
char *logfilename  ;
# 36
permlist_type *permlist  ;
# 38
static void add_server(char *name , int port , char *pass ) 
{ int i ;
  int indx ;
  int tmp ;

  {
# 42
  if (! name) {
# 42
    return;
  }
# 43
  if (! port) {
    {
# 43
    port = 6667;
    }
  }
  {
# 45
  i = 0;
  }
# 45
  while (i < servers.amount) {
    {
# 46
    tmp = strcmp((char const   *)((*(servers.data + i)))->name,
                 (char const   *)name);
    }
# 46
    if (tmp == 0) {
# 46
      if (((*(servers.data + i)))->port == port) {
# 46
        if ((unsigned int )((*(servers.data + i)))->password ==
            (unsigned int )pass) {
# 49
          if (name) {
            {
# 49
            free((void *)name);
            }
          }
# 50
          if (pass) {
            {
# 50
            free((void *)pass);
            }
          }
# 51
          return;
        }
      }
    }
    {
# 45
    i ++;
    }
  }
  {
# 55
  servers.data = (server_type **)add_item((void **)servers.data,
                                          (int )sizeof(server_type ),
                                          & servers.amount, & indx);
# 56
  ((*(servers.data + indx)))->name = name;
# 57
  ((*(servers.data + indx)))->port = port;
# 58
  ((*(servers.data + indx)))->password = pass;
# 59
  ((*(servers.data + indx)))->working = 1;
  }
# 60
  return;
}
}
# 62
static int yyerror(char *e ) 
{ 

  {
  {
# 64
  error("parse error on line %d!\n", lineno);
  }
# 65
  return (0);
}
}
# 95
static char const   yytranslate[297]   = 
# 95
  {(char const   )0, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )47, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )48, (char const   )43,
   (char const   )2, (char const   )44, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )45,
   (char const   )2, (char const   )46, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )2, (char const   )2, (char const   )2, (char const   )2,
   (char const   )1, (char const   )3, (char const   )4, (char const   )5,
   (char const   )6, (char const   )7, (char const   )8, (char const   )9,
   (char const   )10, (char const   )11, (char const   )12, (char const   )13,
   (char const   )14, (char const   )15, (char const   )16, (char const   )17,
   (char const   )18, (char const   )19, (char const   )20, (char const   )21,
   (char const   )22, (char const   )23, (char const   )24, (char const   )25,
   (char const   )26, (char const   )27, (char const   )28, (char const   )29,
   (char const   )30, (char const   )31, (char const   )32, (char const   )33,
   (char const   )34, (char const   )35, (char const   )36, (char const   )37,
   (char const   )38, (char const   )39, (char const   )40, (char const   )41,
   (char const   )42};
# 202
static short const   yyr1[61]   = 
# 202
  {(short const   )0, (short const   )49, (short const   )49,
   (short const   )50, (short const   )50, (short const   )51,
   (short const   )51, (short const   )51, (short const   )51,
   (short const   )51, (short const   )52, (short const   )51,
   (short const   )53, (short const   )51, (short const   )51,
   (short const   )51, (short const   )51, (short const   )51,
   (short const   )51, (short const   )51, (short const   )51,
   (short const   )51, (short const   )51, (short const   )51,
   (short const   )51, (short const   )51, (short const   )51,
   (short const   )51, (short const   )51, (short const   )51,
   (short const   )51, (short const   )51, (short const   )54,
   (short const   )54, (short const   )55, (short const   )55,
   (short const   )55, (short const   )56, (short const   )56,
   (short const   )57, (short const   )58, (short const   )58,
   (short const   )59, (short const   )59, (short const   )59,
   (short const   )59, (short const   )61, (short const   )60,
   (short const   )62, (short const   )62, (short const   )63,
   (short const   )63, (short const   )63, (short const   )63,
   (short const   )63, (short const   )63, (short const   )63,
   (short const   )63, (short const   )63, (short const   )64,
   (short const   )65};
# 214
static short const   yyr2[61]   = 
# 214
  {(short const   )0, (short const   )1, (short const   )2, (short const   )2,
   (short const   )2, (short const   )3, (short const   )3, (short const   )3,
   (short const   )3, (short const   )4, (short const   )0, (short const   )5,
   (short const   )0, (short const   )5, (short const   )4, (short const   )3,
   (short const   )3, (short const   )3, (short const   )3, (short const   )3,
   (short const   )3, (short const   )3, (short const   )3, (short const   )3,
   (short const   )3, (short const   )3, (short const   )3, (short const   )3,
   (short const   )3, (short const   )3, (short const   )3, (short const   )3,
   (short const   )1, (short const   )3, (short const   )1, (short const   )3,
   (short const   )5, (short const   )1, (short const   )3, (short const   )3,
   (short const   )2, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )0, (short const   )5,
   (short const   )3, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )4,
   (short const   )4};
# 228
static short const   yydefact[136]   = 
# 228
  {(short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )10, (short const   )12,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )1, (short const   )0, (short const   )4, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )2, (short const   )3, (short const   )5, (short const   )7,
   (short const   )8, (short const   )34, (short const   )0, (short const   )32,
   (short const   )0, (short const   )0, (short const   )15, (short const   )16,
   (short const   )17, (short const   )6, (short const   )18,
   (short const   )19, (short const   )20, (short const   )21,
   (short const   )22, (short const   )23, (short const   )24,
   (short const   )25, (short const   )26, (short const   )27,
   (short const   )28, (short const   )29, (short const   )30,
   (short const   )31, (short const   )45, (short const   )46,
   (short const   )0, (short const   )0, (short const   )0, (short const   )41,
   (short const   )42, (short const   )43, (short const   )44,
   (short const   )0, (short const   )9, (short const   )0, (short const   )0,
   (short const   )0, (short const   )37, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )14, (short const   )40,
   (short const   )35, (short const   )33, (short const   )0,
   (short const   )11, (short const   )0, (short const   )13, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )39,
   (short const   )38, (short const   )50, (short const   )51,
   (short const   )52, (short const   )53, (short const   )54,
   (short const   )55, (short const   )56, (short const   )57,
   (short const   )58, (short const   )0, (short const   )49,
   (short const   )59, (short const   )60, (short const   )36,
   (short const   )47, (short const   )0, (short const   )48, (short const   )0,
   (short const   )0};
# 246
static short const   yydefgoto[17]   = 
# 246
  {(short const   )27, (short const   )28, (short const   )29,
   (short const   )35, (short const   )36, (short const   )62,
   (short const   )63, (short const   )97, (short const   )98,
   (short const   )88, (short const   )89, (short const   )90,
   (short const   )100, (short const   )126, (short const   )127,
   (short const   )91, (short const   )92};
# 252
static short const   yypact[136]   = 
# 252
  {(short const   )70, (short const   )-26, (short const   )-23,
   (short const   )-22, (short const   )-21, (short const   )-32,
   (short const   )-32768, (short const   )-32768, (short const   )-20,
   (short const   )-19, (short const   )-18, (short const   )-17,
   (short const   )-16, (short const   )-15, (short const   )-8,
   (short const   )-7, (short const   )-6, (short const   )-5,
   (short const   )-2, (short const   )0, (short const   )28,
   (short const   )29, (short const   )30, (short const   )31,
   (short const   )57, (short const   )58, (short const   )59,
   (short const   )40, (short const   )-32768, (short const   )60,
   (short const   )-32768, (short const   )38, (short const   )100,
   (short const   )101, (short const   )102, (short const   )63,
   (short const   )64, (short const   )106, (short const   )107,
   (short const   )108, (short const   )109, (short const   )112,
   (short const   )113, (short const   )114, (short const   )115,
   (short const   )118, (short const   )117, (short const   )120,
   (short const   )121, (short const   )122, (short const   )123,
   (short const   )124, (short const   )125, (short const   )128,
   (short const   )127, (short const   )2, (short const   )-32768,
   (short const   )-32768, (short const   )-32768, (short const   )-32768,
   (short const   )-32768, (short const   )69, (short const   )-45,
   (short const   )-32768, (short const   )129, (short const   )129,
   (short const   )-32768, (short const   )-32768, (short const   )-32768,
   (short const   )-32768, (short const   )-32768, (short const   )-32768,
   (short const   )-32768, (short const   )-32768, (short const   )-32768,
   (short const   )-32768, (short const   )-32768, (short const   )-32768,
   (short const   )-32768, (short const   )-32768, (short const   )-32768,
   (short const   )-32768, (short const   )-32768, (short const   )-32768,
   (short const   )-32768, (short const   )-32768, (short const   )67,
   (short const   )74, (short const   )-1, (short const   )-32768,
   (short const   )-32768, (short const   )-32768, (short const   )-32768,
   (short const   )131, (short const   )-32768, (short const   )102,
   (short const   )79, (short const   )-31, (short const   )-32768,
   (short const   )-27, (short const   )84, (short const   )132,
   (short const   )133, (short const   )-32768, (short const   )-32768,
   (short const   )85, (short const   )-32768, (short const   )136,
   (short const   )-32768, (short const   )129, (short const   )-32768,
   (short const   )-30, (short const   )93, (short const   )97,
   (short const   )137, (short const   )-32768, (short const   )-32768,
   (short const   )-32768, (short const   )-32768, (short const   )-32768,
   (short const   )-32768, (short const   )-32768, (short const   )-32768,
   (short const   )-32768, (short const   )-32768, (short const   )-32768,
   (short const   )-29, (short const   )-32768, (short const   )-32768,
   (short const   )-32768, (short const   )-32768, (short const   )-32768,
   (short const   )-30, (short const   )-32768, (short const   )141,
   (short const   )-32768};
# 270
static short const   yypgoto[17]   = 
# 270
  {(short const   )-32768, (short const   )116, (short const   )-32768,
   (short const   )-32768, (short const   )-32768, (short const   )-32768,
   (short const   )49, (short const   )80, (short const   )37,
   (short const   )-32768, (short const   )61, (short const   )-32768,
   (short const   )-32768, (short const   )-32768, (short const   )15,
   (short const   )-32768, (short const   )-32768};
# 280
static short const   yytable[150]   = 
# 280
  {(short const   )84, (short const   )94, (short const   )95,
   (short const   )84, (short const   )117, (short const   )118,
   (short const   )119, (short const   )120, (short const   )121,
   (short const   )122, (short const   )123, (short const   )124,
   (short const   )125, (short const   )34, (short const   )131,
   (short const   )108, (short const   )109, (short const   )30,
   (short const   )132, (short const   )110, (short const   )109,
   (short const   )31, (short const   )32, (short const   )33,
   (short const   )37, (short const   )38, (short const   )39,
   (short const   )40, (short const   )41, (short const   )42,
   (short const   )85, (short const   )86, (short const   )87,
   (short const   )85, (short const   )86, (short const   )87,
   (short const   )43, (short const   )44, (short const   )45,
   (short const   )46, (short const   )134, (short const   )1,
   (short const   )47, (short const   )58, (short const   )48,
   (short const   )103, (short const   )2, (short const   )3, (short const   )4,
   (short const   )5, (short const   )6, (short const   )7, (short const   )8,
   (short const   )9, (short const   )10, (short const   )11,
   (short const   )12, (short const   )13, (short const   )14,
   (short const   )15, (short const   )16, (short const   )17,
   (short const   )18, (short const   )19, (short const   )20,
   (short const   )21, (short const   )22, (short const   )23,
   (short const   )24, (short const   )25, (short const   )26,
   (short const   )1, (short const   )49, (short const   )50,
   (short const   )51, (short const   )52, (short const   )2, (short const   )3,
   (short const   )4, (short const   )5, (short const   )6, (short const   )7,
   (short const   )8, (short const   )9, (short const   )10, (short const   )11,
   (short const   )12, (short const   )13, (short const   )14,
   (short const   )15, (short const   )16, (short const   )17,
   (short const   )18, (short const   )19, (short const   )20,
   (short const   )21, (short const   )22, (short const   )23,
   (short const   )24, (short const   )25, (short const   )26,
   (short const   )53, (short const   )54, (short const   )57,
   (short const   )55, (short const   )59, (short const   )60,
   (short const   )61, (short const   )64, (short const   )65,
   (short const   )66, (short const   )101, (short const   )67,
   (short const   )68, (short const   )69, (short const   )70,
   (short const   )71, (short const   )93, (short const   )102,
   (short const   )72, (short const   )73, (short const   )74,
   (short const   )75, (short const   )76, (short const   )77,
   (short const   )78, (short const   )79, (short const   )107,
   (short const   )111, (short const   )80, (short const   )81,
   (short const   )82, (short const   )83, (short const   )114,
   (short const   )96, (short const   )105, (short const   )128,
   (short const   )112, (short const   )113, (short const   )115,
   (short const   )129, (short const   )135, (short const   )130,
   (short const   )56, (short const   )106, (short const   )99,
   (short const   )116, (short const   )133, (short const   )0,
   (short const   )104};
# 299
static short const   yycheck[150]   = 
# 299
  {(short const   )1, (short const   )46, (short const   )47, (short const   )1,
   (short const   )34, (short const   )35, (short const   )36,
   (short const   )37, (short const   )38, (short const   )39,
   (short const   )40, (short const   )41, (short const   )42,
   (short const   )45, (short const   )43, (short const   )46,
   (short const   )47, (short const   )43, (short const   )47,
   (short const   )46, (short const   )47, (short const   )44,
   (short const   )44, (short const   )44, (short const   )44,
   (short const   )44, (short const   )44, (short const   )44,
   (short const   )44, (short const   )44, (short const   )31,
   (short const   )32, (short const   )33, (short const   )31,
   (short const   )32, (short const   )33, (short const   )44,
   (short const   )44, (short const   )44, (short const   )44,
   (short const   )0, (short const   )1, (short const   )44, (short const   )5,
   (short const   )44, (short const   )46, (short const   )6, (short const   )7,
   (short const   )8, (short const   )9, (short const   )10, (short const   )11,
   (short const   )12, (short const   )13, (short const   )14,
   (short const   )15, (short const   )16, (short const   )17,
   (short const   )18, (short const   )19, (short const   )20,
   (short const   )21, (short const   )22, (short const   )23,
   (short const   )24, (short const   )25, (short const   )26,
   (short const   )27, (short const   )28, (short const   )29,
   (short const   )30, (short const   )1, (short const   )44,
   (short const   )44, (short const   )44, (short const   )44,
   (short const   )6, (short const   )7, (short const   )8, (short const   )9,
   (short const   )10, (short const   )11, (short const   )12,
   (short const   )13, (short const   )14, (short const   )15,
   (short const   )16, (short const   )17, (short const   )18,
   (short const   )19, (short const   )20, (short const   )21,
   (short const   )22, (short const   )23, (short const   )24,
   (short const   )25, (short const   )26, (short const   )27,
   (short const   )28, (short const   )29, (short const   )30,
   (short const   )44, (short const   )44, (short const   )43,
   (short const   )45, (short const   )5, (short const   )5, (short const   )5,
   (short const   )45, (short const   )45, (short const   )4,
   (short const   )44, (short const   )5, (short const   )5, (short const   )5,
   (short const   )3, (short const   )3, (short const   )48, (short const   )44,
   (short const   )5, (short const   )5, (short const   )3, (short const   )5,
   (short const   )3, (short const   )3, (short const   )3, (short const   )3,
   (short const   )48, (short const   )44, (short const   )5, (short const   )5,
   (short const   )3, (short const   )5, (short const   )48, (short const   )5,
   (short const   )4, (short const   )43, (short const   )5, (short const   )5,
   (short const   )3, (short const   )43, (short const   )0, (short const   )5,
   (short const   )27, (short const   )95, (short const   )65,
   (short const   )109, (short const   )132, (short const   )-1,
   (short const   )88};
# 373 "/usr/share/bison/bison.simple"
int yychar  ;
# 373
yystype yylval  ;
# 373
int yynerrs  ;
// omitted gcc builtin __builtin_alloca

// omitted gcc builtin __builtin_memcpy

# 376
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
  unsigned int yynewbytes___0 ;
  size_t tmp___0 ;
  size_t tmp___1 ;

  {
  {
# 391
  yychar1 = 0;
# 403
  yyss = yyssa;
# 408
  yyvs = yyvsa;
# 424
  yystacksize = 200U;
# 440
  yystate = 0;
# 441
  yyerrstatus = 0;
# 442
  yynerrs = 0;
# 443
  yychar = -2;
# 450
  yyssp = yyss;
# 451
  yyvsp = yyvs;
  }
  goto yysetstate;
  yynewstate: 
  {
# 464
  yyssp ++;
  }
  yysetstate: 
  {
# 467
  (*yyssp) = (short )yystate;
  }
# 469
  if ((unsigned int )yyssp >= (unsigned int )((yyss + yystacksize) - 1)) {
    {
# 472
    yysize = (unsigned int )((yyssp - yyss) + 1);
    }
# 508
    if (yystacksize >= 10000U) {
      goto yyoverflowlab;
    }
    {
# 510
    yystacksize *= 2U;
    }
# 511
    if (yystacksize > 10000U) {
      {
# 512
      yystacksize = 10000U;
      }
    }
    {
# 515
    yyss1 = yyss;
# 516
    tmp = (union yyalloc *)__builtin_alloca(yystacksize * (sizeof(short ) +
                                                           sizeof(yystype )) +
                                            (sizeof(union yyalloc ) - 1U));
# 516
    yyptr = tmp;
    }
# 518
    if (! yyptr) {
      goto yyoverflowlab;
    }
# 520
    while (1) {
      {
# 520
      __builtin_memcpy(& yyptr->yyss, yyss, yysize * sizeof((*yyss)));
# 520
      yyss = & yyptr->yyss;
# 520
      yynewbytes = yystacksize * sizeof((*yyss)) + (sizeof(union yyalloc ) - 1U);
# 520
      yyptr += yynewbytes / sizeof((*yyptr));
      }
# 520
      break;
    }
# 521
    while (1) {
      {
# 521
      __builtin_memcpy(& yyptr->yyvs, yyvs, yysize * sizeof((*yyvs)));
# 521
      yyvs = & yyptr->yyvs;
# 521
      yynewbytes___0 = yystacksize * sizeof((*yyvs)) +
                       (sizeof(union yyalloc ) - 1U);
# 521
      yyptr += yynewbytes___0 / sizeof((*yyptr));
      }
# 521
      break;
    }
# 526
    if ((unsigned int )yyss1 != (unsigned int )(yyssa)) {
# 527
      while (1) {
# 527
        break;
      }
    }
    {
# 532
    yyssp = (yyss + yysize) - 1;
# 533
    yyvsp = (yyvs + yysize) - 1;
    }
# 541
    if ((unsigned int )yyssp >= (unsigned int )((yyss + yystacksize) - 1)) {
      goto yyabortlab;
    }
  }
  goto yybackup;
  yybackup: 
  {
# 561
  yyn = (int )yypact[yystate];
  }
# 562
  if (yyn == -32768) {
    goto yydefault;
  }
# 570
  if (yychar == -2) {
    {
# 573
    yychar = yylex();
    }
  }
# 578
  if (yychar <= 0) {
    {
# 580
    yychar1 = 0;
# 581
    yychar = 0;
    }
  } else {
# 587
    if ((unsigned int )yychar <= 296U) {
      {
# 587
      yychar1 = (int )yytranslate[yychar];
      }
    } else {
      {
# 587
      yychar1 = 66;
      }
    }
  }
  {
# 606
  yyn += yychar1;
  }
# 607
  if (yyn < 0) {
    goto yydefault;
  } else {
# 607
    if (yyn > 149) {
      goto yydefault;
    } else {
# 607
      if ((int const   )yycheck[yyn] != yychar1) {
        goto yydefault;
      }
    }
  }
  {
# 610
  yyn = (int )yytable[yyn];
  }
# 619
  if (yyn < 0) {
# 621
    if (yyn == -32768) {
      goto yyerrlab;
    }
    {
# 623
    yyn = - yyn;
    }
    goto yyreduce;
  } else {
# 626
    if (yyn == 0) {
      goto yyerrlab;
    }
  }
# 629
  if (yyn == 135) {
    goto yyacceptlab;
  }
# 637
  if (yychar != 0) {
    {
# 638
    yychar = -2;
    }
  }
  {
# 640
  yyvsp ++;
# 640
  (*yyvsp) = yylval;
  }
# 647
  if (yyerrstatus) {
    {
# 648
    yyerrstatus --;
    }
  }
  {
# 650
  yystate = yyn;
  }
  goto yynewstate;
  yydefault: 
  {
# 658
  yyn = (int )yydefact[yystate];
  }
# 659
  if (yyn == 0) {
    goto yyerrlab;
  }
  goto yyreduce;
  yyreduce: 
  {
# 669
  yylen = (int )yyr2[yyn];
# 679
  yyval = (*(yyvsp + (1 - yylen)));
  }
# 705
  switch (yyn) {
  case 4: 
  {
# 98 "parser.y"
  yyerrstatus = 0;
  }
# 99
  break;
  case 5: 
  {
# 102
  tmp___0 = strlen((char const   *)(yyvsp + 0)->string);
  }
# 102
  if (tmp___0 > 40U) {
    {
# 102
    report("WARNING: overlength nickname given\n");
    }
  }
# 103
  if (cfg.nickname) {
    {
# 103
    free((void *)cfg.nickname);
    }
  }
  {
# 103
  cfg.nickname = strdup((char const   *)(yyvsp + 0)->string);
# 103
  (yyvsp + 0)->string = (char *)((void *)0);
  }
# 105
  break;
  case 6: 
  {
# 106
  tmp___1 = strlen((char const   *)(yyvsp + 0)->string);
  }
# 106
  if (tmp___1 > 40U) {
    {
# 106
    report("WARNING: overlength altnickname given\n");
    }
  }
# 107
  if (cfg.altnickname) {
    {
# 107
    free((void *)cfg.altnickname);
    }
  }
  {
# 107
  cfg.altnickname = strdup((char const   *)(yyvsp + 0)->string);
# 107
  (yyvsp + 0)->string = (char *)((void *)0);
  }
# 109
  break;
  case 7: 
  {

  }
# 109
  if (cfg.realname) {
    {
# 109
    free((void *)cfg.realname);
    }
  }
  {
# 109
  cfg.realname = strdup((char const   *)(yyvsp + 0)->string);
# 109
  (yyvsp + 0)->string = (char *)((void *)0);
  }
# 110
  break;
  case 8: 
  {

  }
# 110
  if (cfg.username) {
    {
# 110
    free((void *)cfg.username);
    }
  }
  {
# 110
  cfg.username = strdup((char const   *)(yyvsp + 0)->string);
# 110
  (yyvsp + 0)->string = (char *)((void *)0);
  }
# 111
  break;
  case 10: 
  {
# 112
  permlist = & hostlist;
# 112
  drop_perm(permlist);
  }
# 113
  break;
  case 12: 
  {
# 113
  permlist = & peoplelist;
# 113
  drop_perm(permlist);
  }
# 114
  break;
  case 14: 
  {
# 115
  add_log(logchan, logfilename, logtype);
  }
# 116
  if (logchan) {
    {
# 116
    free((void *)logchan);
# 116
    logchan = (char *)((void *)0);
    }
  }
# 117
  if (logfilename) {
    {
# 117
    free((void *)logfilename);
# 117
    logfilename = (char *)((void *)0);
    }
  }
# 119
  break;
  case 15: 
  {
# 119
  cfg.listenport = (yyvsp + 0)->number;
  }
# 120
  break;
  case 16: 
  {

  }
# 120
  if (cfg.listenhost) {
    {
# 120
    free((void *)cfg.listenhost);
    }
  }
  {
# 120
  cfg.listenhost = strdup((char const   *)(yyvsp + 0)->string);
# 120
  (yyvsp + 0)->string = (char *)((void *)0);
  }
# 121
  break;
  case 17: 
  {

  }
# 121
  if (cfg.password) {
    {
# 121
    free((void *)cfg.password);
    }
  }
  {
# 121
  cfg.password = strdup((char const   *)(yyvsp + 0)->string);
# 121
  (yyvsp + 0)->string = (char *)((void *)0);
  }
# 122
  break;
  case 18: 
  {
# 122
  cfg.logging = (yyvsp + 0)->boolean;
  }
# 123
  break;
  case 19: 
  {
# 123
  cfg.leave = (yyvsp + 0)->boolean;
  }
# 124
  break;
  case 20: 
  {

  }
# 124
  if (cfg.leavemsg) {
    {
# 124
    free((void *)cfg.leavemsg);
    }
  }
  {
# 124
  cfg.leavemsg = strdup((char const   *)(yyvsp + 0)->string);
# 124
  (yyvsp + 0)->string = (char *)((void *)0);
  }
# 125
  break;
  case 21: 
  {

  }
# 125
  if (cfg.awaynotice) {
    {
# 125
    free((void *)cfg.awaynotice);
    }
  }
  {
# 125
  cfg.awaynotice = strdup((char const   *)(yyvsp + 0)->string);
# 125
  (yyvsp + 0)->string = (char *)((void *)0);
  }
# 126
  break;
  case 22: 
  {
# 126
  cfg.getnick = (yyvsp + 0)->boolean;
  }
# 127
  break;
  case 23: 
  {

  }
# 127
  if (cfg.bind) {
    {
# 127
    free((void *)cfg.bind);
    }
  }
  {
# 127
  cfg.bind = strdup((char const   *)(yyvsp + 0)->string);
# 127
  (yyvsp + 0)->string = (char *)((void *)0);
  }
# 128
  break;
  case 24: 
  {
# 128
  cfg.antiidle = (yyvsp + 0)->boolean;
  }
# 129
  break;
  case 25: 
  {
# 129
  cfg.nevergiveup = (yyvsp + 0)->boolean;
  }
# 130
  break;
  case 26: 
  {
# 130
  cfg.jumprestricted = (yyvsp + 0)->boolean;
  }
# 131
  break;
  case 27: 
  {
# 131
  cfg.rejoin = (yyvsp + 0)->boolean;
  }
# 132
  break;
  case 28: 
  {

  }
# 132
  if (cfg.forwardmsg) {
    {
# 132
    free((void *)cfg.forwardmsg);
    }
  }
  {
# 132
  cfg.forwardmsg = strdup((char const   *)(yyvsp + 0)->string);
# 132
  (yyvsp + 0)->string = (char *)((void *)0);
  }
# 133
  break;
  case 29: 
  {

  }
# 133
  if (cfg.channels) {
    {
# 133
    free((void *)cfg.channels);
    }
  }
  {
# 133
  cfg.channels = strdup((char const   *)(yyvsp + 0)->string);
# 133
  (yyvsp + 0)->string = (char *)((void *)0);
  }
# 134
  break;
  case 30: 
  {
# 134
  cfg.dccbounce = (yyvsp + 0)->boolean;
  }
# 135
  break;
  case 31: 
  {

  }
# 135
  if (cfg.dccbind) {
    {
# 135
    free((void *)cfg.dccbind);
    }
  }
  {
# 135
  cfg.dccbind = strdup((char const   *)(yyvsp + 0)->string);
# 135
  (yyvsp + 0)->string = (char *)((void *)0);
  }
# 136
  break;
  case 34: 
  {
# 142
  add_server((yyvsp + 0)->string, 0, (char *)((void *)0));
  }
# 143
  break;
  case 35: 
  {
# 143
  add_server((yyvsp + -2)->string, (yyvsp + 0)->number, (char *)((void *)0));
  }
# 144
  break;
  case 36: 
  {
# 144
  add_server((yyvsp + -4)->string, (yyvsp + -2)->number, (yyvsp + 0)->string);
  }
# 145
  break;
  case 39: 
  {
# 151
  add_perm(permlist, (yyvsp + -2)->string, (yyvsp + 0)->boolean);
  }
# 152
  break;
  case 46: 
  {
# 160
  logtype = 0;
  }
# 161
  break;
  case 50: 
  {
# 167
  logtype |= 1;
  }
# 168
  break;
  case 51: 
  {
# 169
  logtype |= 4;
  }
# 170
  break;
  case 52: 
  {
# 171
  logtype |= 2;
  }
# 172
  break;
  case 53: 
  {
# 173
  logtype |= 8;
  }
# 174
  break;
  case 54: 
  {
# 175
  logtype |= 16;
  }
# 176
  break;
  case 55: 
  {
# 177
  logtype |= 32;
  }
# 178
  break;
  case 56: 
  {
# 179
  logtype |= 64;
  }
# 180
  break;
  case 57: 
  {
# 181
  logtype |= 128;
  }
# 182
  break;
  case 58: 
  {
# 183
  logtype |= 255;
  }
# 184
  break;
  case 59: 
  {
# 187
  logchan = strdup((char const   *)yylval.string);
  }
# 189
  break;
  case 60: 
  {
# 192
  logfilename = strdup((char const   *)yylval.string);
  }
# 194
  break;
  }
  {
# 707 "/usr/share/bison/bison.simple"
  yyvsp -= yylen;
# 708
  yyssp -= yylen;
# 724
  yyvsp ++;
# 724
  (*yyvsp) = yyval;
# 733
  yyn = (int )yyr1[yyn];
# 735
  yystate = (int const   )yypgoto[yyn - 49] + (int const   )(*yyssp);
  }
# 736
  if (yystate >= 0) {
# 736
    if (yystate <= 149) {
# 736
      if ((int const   )yycheck[yystate] == (int const   )(*yyssp)) {
        {
# 737
        yystate = (int )yytable[yystate];
        }
      } else {
        {
# 739
        yystate = (int )yydefgoto[yyn - 49];
        }
      }
    } else {
      {
# 739
      yystate = (int )yydefgoto[yyn - 49];
      }
    }
  } else {
    {
# 739
    yystate = (int )yydefgoto[yyn - 49];
    }
  }
  goto yynewstate;
  yyerrlab: 
# 749
  if (! yyerrstatus) {
    {
# 751
    yynerrs ++;
# 799
    yyerror("parse error");
    }
  }
  goto yyerrlab1;
  yyerrlab1: 
# 808
  if (yyerrstatus == 3) {
# 814
    if (yychar == 0) {
      goto yyabortlab;
    }
    {
# 818
    yychar = -2;
    }
  }
  {
# 824
  yyerrstatus = 3;
  }
  goto yyerrhandle;
  yyerrdefault: 
# 850
  if ((unsigned int )yyssp == (unsigned int )yyss) {
    goto yyabortlab;
  }
  {
# 852
  yyvsp --;
# 853
  yyssp --;
# 853
  yystate = (int )(*yyssp);
  }
  yyerrhandle: 
  {
# 873
  yyn = (int )yypact[yystate];
  }
# 874
  if (yyn == -32768) {
    goto yyerrdefault;
  }
  {
# 877
  yyn ++;
  }
# 878
  if (yyn < 0) {
    goto yyerrdefault;
  } else {
# 878
    if (yyn > 149) {
      goto yyerrdefault;
    } else {
# 878
      if ((int const   )yycheck[yyn] != 1) {
        goto yyerrdefault;
      }
    }
  }
  {
# 881
  yyn = (int )yytable[yyn];
  }
# 882
  if (yyn < 0) {
# 884
    if (yyn == -32768) {
      goto yyerrdefault;
    }
    {
# 886
    yyn = - yyn;
    }
    goto yyreduce;
  } else {
# 889
    if (yyn == 0) {
      goto yyerrdefault;
    }
  }
# 892
  if (yyn == 135) {
    goto yyacceptlab;
  }
  {
# 897
  yyvsp ++;
# 897
  (*yyvsp) = yylval;
# 902
  yystate = yyn;
  }
  goto yynewstate;
  yyacceptlab: 
  {
# 910
  yyresult = 0;
  }
  goto yyreturn;
  yyabortlab: 
  {
# 917
  yyresult = 1;
  }
  goto yyreturn;
  yyoverflowlab: 
  {
# 924
  yyerror("parser stack overflow");
# 925
  yyresult = 2;
  }
  yyreturn: 
# 930
  if ((unsigned int )yyss != (unsigned int )(yyssa)) {
# 931
    while (1) {
# 931
      break;
    }
  }
# 933
  return (yyresult);
}
}
# 103 "lexer.c"
int yyleng  ;
# 104
FILE *yyout ;
# 203
static struct yy_buffer_state *yy_current_buffer   = (struct yy_buffer_state *)0;
# 213
static char yy_hold_char  ;
# 215
static int yy_n_chars  ;
# 221
static char *yy_c_buf_p   = (char *)0;
# 222
static int yy_init   = 1;
# 223
static int yy_start   = 0;
# 228
static int yy_did_buffer_switch_on_eof  ;
# 232
void yy_switch_to_buffer(YY_BUFFER_STATE new_buffer ) ;
# 233
void yy_load_buffer_state(void) ;
# 234
YY_BUFFER_STATE yy_create_buffer(FILE *file , int size ) ;
# 236
void yy_init_buffer(YY_BUFFER_STATE b , FILE *file ) ;
# 237
void yy_flush_buffer(YY_BUFFER_STATE b ) ;
# 240
YY_BUFFER_STATE yy_scan_buffer(char *base , yy_size_t size ) ;
# 242
YY_BUFFER_STATE yy_scan_bytes(char const   *bytes , int len ) ;
# 244
static void *yy_flex_alloc(yy_size_t size ) ;
# 245
static void *yy_flex_realloc(void *ptr , yy_size_t size ) ;
# 246
static void yy_flex_free(void *ptr ) ;
# 270
FILE *yyin   = (FILE *)0;
# 270
FILE *yyout   = (FILE *)0;
# 272
char *yytext  ;
# 275
static yy_state_type yy_get_previous_state(void) ;
# 276
static yy_state_type yy_try_NUL_trans(yy_state_type yy_current_state ) ;
# 277
static int yy_get_next_buffer(void) ;
# 278
static void yy_fatal_error(char const   *msg ) ;
# 293
static short const   yy_accept[285]   = 
# 293
  {(short const   )0, (short const   )53, (short const   )53, (short const   )0,
   (short const   )0, (short const   )58, (short const   )56, (short const   )1,
   (short const   )55, (short const   )56, (short const   )2,
   (short const   )56, (short const   )53, (short const   )56,
   (short const   )56, (short const   )56, (short const   )56,
   (short const   )56, (short const   )56, (short const   )56,
   (short const   )56, (short const   )56, (short const   )56,
   (short const   )56, (short const   )56, (short const   )56,
   (short const   )56, (short const   )56, (short const   )56,
   (short const   )56, (short const   )56, (short const   )56,
   (short const   )6, (short const   )7, (short const   )6, (short const   )1,
   (short const   )0, (short const   )54, (short const   )2, (short const   )4,
   (short const   )3, (short const   )53, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )12,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )5, (short const   )3, (short const   )52,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )40, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )9,
   (short const   )0, (short const   )0, (short const   )28, (short const   )30,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )50, (short const   )0, (short const   )0,
   (short const   )0, (short const   )15, (short const   )0, (short const   )24,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )11, (short const   )41, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )45, (short const   )14, (short const   )0,
   (short const   )0, (short const   )20, (short const   )44,
   (short const   )26, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )47, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )46, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )8, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )22, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )21, (short const   )0, (short const   )34, (short const   )0,
   (short const   )0, (short const   )16, (short const   )0, (short const   )0,
   (short const   )42, (short const   )0, (short const   )0, (short const   )0,
   (short const   )10, (short const   )0, (short const   )29, (short const   )0,
   (short const   )0, (short const   )0, (short const   )43, (short const   )25,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )19, (short const   )0, (short const   )0, (short const   )31,
   (short const   )0, (short const   )36, (short const   )0, (short const   )0,
   (short const   )13, (short const   )0, (short const   )27, (short const   )0,
   (short const   )0, (short const   )48, (short const   )0, (short const   )0,
   (short const   )0, (short const   )15, (short const   )0, (short const   )24,
   (short const   )17, (short const   )18, (short const   )0,
   (short const   )37, (short const   )0, (short const   )38, (short const   )0,
   (short const   )0, (short const   )0, (short const   )51, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )35, (short const   )23, (short const   )22,
   (short const   )0, (short const   )0, (short const   )0, (short const   )16,
   (short const   )0, (short const   )32, (short const   )49, (short const   )0,
   (short const   )0, (short const   )33, (short const   )39, (short const   )0};
# 328
static int const   yy_ec[256]   = 
# 328
  {0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 2, 1, 4, 5, 1, 1, 1, 1, 1, 1, 6, 1, 1, 1, 1, 7, 8, 8, 8, 8,
   8, 8, 8, 8, 8, 8, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 10, 11, 12, 13,
   14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
   33, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1};
# 360
static int const   yy_meta[34]   = 
# 360
  {0, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1};
# 368
static short const   yy_base[289]   = 
# 368
  {(short const   )0, (short const   )0, (short const   )0, (short const   )31,
   (short const   )32, (short const   )295, (short const   )296,
   (short const   )292, (short const   )296, (short const   )36,
   (short const   )0, (short const   )35, (short const   )285,
   (short const   )23, (short const   )27, (short const   )30,
   (short const   )38, (short const   )25, (short const   )39,
   (short const   )279, (short const   )268, (short const   )267,
   (short const   )43, (short const   )46, (short const   )48,
   (short const   )55, (short const   )260, (short const   )275,
   (short const   )274, (short const   )25, (short const   )259,
   (short const   )272, (short const   )296, (short const   )296,
   (short const   )277, (short const   )281, (short const   )69,
   (short const   )296, (short const   )0, (short const   )296,
   (short const   )0, (short const   )274, (short const   )50,
   (short const   )253, (short const   )271, (short const   )257,
   (short const   )249, (short const   )268, (short const   )254,
   (short const   )264, (short const   )247, (short const   )264,
   (short const   )255, (short const   )251, (short const   )244,
   (short const   )241, (short const   )241, (short const   )250,
   (short const   )257, (short const   )238, (short const   )249,
   (short const   )236, (short const   )235, (short const   )249,
   (short const   )244, (short const   )229, (short const   )247,
   (short const   )231, (short const   )229, (short const   )232,
   (short const   )237, (short const   )58, (short const   )227,
   (short const   )223, (short const   )227, (short const   )237,
   (short const   )222, (short const   )296, (short const   )0,
   (short const   )296, (short const   )226, (short const   )230,
   (short const   )213, (short const   )233, (short const   )222,
   (short const   )221, (short const   )228, (short const   )231,
   (short const   )231, (short const   )229, (short const   )210,
   (short const   )210, (short const   )205, (short const   )213,
   (short const   )206, (short const   )211, (short const   )202,
   (short const   )203, (short const   )65, (short const   )203,
   (short const   )218, (short const   )215, (short const   )216,
   (short const   )213, (short const   )206, (short const   )211,
   (short const   )196, (short const   )198, (short const   )193,
   (short const   )200, (short const   )196, (short const   )188,
   (short const   )204, (short const   )203, (short const   )189,
   (short const   )296, (short const   )197, (short const   )196,
   (short const   )296, (short const   )296, (short const   )201,
   (short const   )189, (short const   )193, (short const   )60,
   (short const   )199, (short const   )188, (short const   )180,
   (short const   )193, (short const   )196, (short const   )187,
   (short const   )176, (short const   )175, (short const   )188,
   (short const   )187, (short const   )182, (short const   )181,
   (short const   )188, (short const   )296, (short const   )169,
   (short const   )175, (short const   )168, (short const   )63,
   (short const   )166, (short const   )161, (short const   )171,
   (short const   )163, (short const   )167, (short const   )171,
   (short const   )174, (short const   )296, (short const   )296,
   (short const   )164, (short const   )174, (short const   )172,
   (short const   )170, (short const   )169, (short const   )166,
   (short const   )158, (short const   )150, (short const   )158,
   (short const   )164, (short const   )296, (short const   )296,
   (short const   )150, (short const   )164, (short const   )296,
   (short const   )296, (short const   )153, (short const   )151,
   (short const   )152, (short const   )149, (short const   )155,
   (short const   )296, (short const   )152, (short const   )153,
   (short const   )151, (short const   )157, (short const   )137,
   (short const   )141, (short const   )150, (short const   )296,
   (short const   )153, (short const   )139, (short const   )134,
   (short const   )150, (short const   )139, (short const   )137,
   (short const   )144, (short const   )135, (short const   )296,
   (short const   )142, (short const   )131, (short const   )139,
   (short const   )139, (short const   )138, (short const   )130,
   (short const   )121, (short const   )65, (short const   )134,
   (short const   )131, (short const   )132, (short const   )131,
   (short const   )126, (short const   )133, (short const   )120,
   (short const   )114, (short const   )113, (short const   )296,
   (short const   )117, (short const   )296, (short const   )110,
   (short const   )115, (short const   )113, (short const   )121,
   (short const   )122, (short const   )105, (short const   )120,
   (short const   )119, (short const   )117, (short const   )296,
   (short const   )107, (short const   )296, (short const   )112,
   (short const   )103, (short const   )102, (short const   )296,
   (short const   )296, (short const   )97, (short const   )101,
   (short const   )92, (short const   )99, (short const   )107,
   (short const   )102, (short const   )106, (short const   )104,
   (short const   )296, (short const   )103, (short const   )106,
   (short const   )296, (short const   )103, (short const   )296,
   (short const   )93, (short const   )99, (short const   )296,
   (short const   )84, (short const   )296, (short const   )83,
   (short const   )83, (short const   )296, (short const   )80,
   (short const   )94, (short const   )91, (short const   )296,
   (short const   )94, (short const   )296, (short const   )296,
   (short const   )296, (short const   )83, (short const   )296,
   (short const   )86, (short const   )296, (short const   )87,
   (short const   )73, (short const   )72, (short const   )296,
   (short const   )70, (short const   )85, (short const   )69,
   (short const   )83, (short const   )82, (short const   )296,
   (short const   )296, (short const   )296, (short const   )70,
   (short const   )61, (short const   )74, (short const   )296,
   (short const   )64, (short const   )296, (short const   )296,
   (short const   )72, (short const   )54, (short const   )296,
   (short const   )296, (short const   )296, (short const   )89,
   (short const   )91, (short const   )51, (short const   )35};
# 403
static short const   yy_def[289]   = 
# 403
  {(short const   )0, (short const   )284, (short const   )1,
   (short const   )285, (short const   )285, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )286, (short const   )287, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )286, (short const   )284, (short const   )287,
   (short const   )284, (short const   )288, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )288, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )0,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284};
# 438
static short const   yy_nxt[330]   = 
# 438
  {(short const   )0, (short const   )6, (short const   )7, (short const   )8,
   (short const   )9, (short const   )10, (short const   )6, (short const   )11,
   (short const   )12, (short const   )13, (short const   )14,
   (short const   )15, (short const   )16, (short const   )17,
   (short const   )18, (short const   )19, (short const   )20,
   (short const   )6, (short const   )21, (short const   )6, (short const   )22,
   (short const   )23, (short const   )24, (short const   )6,
   (short const   )25, (short const   )26, (short const   )27,
   (short const   )28, (short const   )29, (short const   )30,
   (short const   )6, (short const   )6, (short const   )6, (short const   )31,
   (short const   )33, (short const   )33, (short const   )78,
   (short const   )34, (short const   )34, (short const   )37,
   (short const   )37, (short const   )39, (short const   )40,
   (short const   )42, (short const   )45, (short const   )43,
   (short const   )47, (short const   )51, (short const   )53,
   (short const   )49, (short const   )46, (short const   )73,
   (short const   )38, (short const   )48, (short const   )44,
   (short const   )50, (short const   )58, (short const   )52,
   (short const   )74, (short const   )61, (short const   )59,
   (short const   )65, (short const   )54, (short const   )62,
   (short const   )68, (short const   )66, (short const   )60,
   (short const   )109, (short const   )69, (short const   )63,
   (short const   )79, (short const   )67, (short const   )37,
   (short const   )37, (short const   )175, (short const   )64,
   (short const   )110, (short const   )157, (short const   )80,
   (short const   )134, (short const   )135, (short const   )223,
   (short const   )283, (short const   )158, (short const   )282,
   (short const   )176, (short const   )281, (short const   )280,
   (short const   )279, (short const   )224, (short const   )32,
   (short const   )32, (short const   )36, (short const   )36,
   (short const   )278, (short const   )277, (short const   )276,
   (short const   )275, (short const   )274, (short const   )273,
   (short const   )272, (short const   )271, (short const   )270,
   (short const   )269, (short const   )268, (short const   )267,
   (short const   )266, (short const   )265, (short const   )264,
   (short const   )263, (short const   )262, (short const   )261,
   (short const   )260, (short const   )259, (short const   )258,
   (short const   )257, (short const   )256, (short const   )255,
   (short const   )254, (short const   )253, (short const   )252,
   (short const   )251, (short const   )250, (short const   )249,
   (short const   )248, (short const   )247, (short const   )246,
   (short const   )245, (short const   )244, (short const   )243,
   (short const   )242, (short const   )241, (short const   )240,
   (short const   )239, (short const   )238, (short const   )237,
   (short const   )236, (short const   )235, (short const   )234,
   (short const   )233, (short const   )232, (short const   )231,
   (short const   )230, (short const   )229, (short const   )228,
   (short const   )227, (short const   )226, (short const   )225,
   (short const   )222, (short const   )221, (short const   )220,
   (short const   )219, (short const   )218, (short const   )217,
   (short const   )216, (short const   )215, (short const   )214,
   (short const   )213, (short const   )212, (short const   )211,
   (short const   )210, (short const   )209, (short const   )208,
   (short const   )207, (short const   )206, (short const   )205,
   (short const   )204, (short const   )203, (short const   )202,
   (short const   )201, (short const   )200, (short const   )199,
   (short const   )198, (short const   )197, (short const   )196,
   (short const   )195, (short const   )194, (short const   )193,
   (short const   )192, (short const   )191, (short const   )190,
   (short const   )189, (short const   )188, (short const   )187,
   (short const   )186, (short const   )185, (short const   )184,
   (short const   )183, (short const   )182, (short const   )181,
   (short const   )180, (short const   )179, (short const   )178,
   (short const   )177, (short const   )174, (short const   )173,
   (short const   )172, (short const   )171, (short const   )170,
   (short const   )169, (short const   )168, (short const   )167,
   (short const   )166, (short const   )165, (short const   )164,
   (short const   )163, (short const   )162, (short const   )161,
   (short const   )160, (short const   )159, (short const   )156,
   (short const   )155, (short const   )154, (short const   )153,
   (short const   )152, (short const   )151, (short const   )150,
   (short const   )149, (short const   )148, (short const   )147,
   (short const   )146, (short const   )145, (short const   )144,
   (short const   )143, (short const   )142, (short const   )141,
   (short const   )140, (short const   )139, (short const   )138,
   (short const   )137, (short const   )136, (short const   )133,
   (short const   )132, (short const   )131, (short const   )130,
   (short const   )129, (short const   )128, (short const   )127,
   (short const   )126, (short const   )125, (short const   )124,
   (short const   )123, (short const   )122, (short const   )121,
   (short const   )120, (short const   )119, (short const   )118,
   (short const   )117, (short const   )116, (short const   )115,
   (short const   )114, (short const   )113, (short const   )112,
   (short const   )111, (short const   )108, (short const   )107,
   (short const   )106, (short const   )105, (short const   )104,
   (short const   )103, (short const   )102, (short const   )101,
   (short const   )100, (short const   )99, (short const   )98,
   (short const   )97, (short const   )96, (short const   )95,
   (short const   )94, (short const   )93, (short const   )92,
   (short const   )91, (short const   )90, (short const   )89,
   (short const   )88, (short const   )87, (short const   )86,
   (short const   )85, (short const   )84, (short const   )83,
   (short const   )82, (short const   )81, (short const   )41,
   (short const   )35, (short const   )77, (short const   )76,
   (short const   )75, (short const   )72, (short const   )71,
   (short const   )70, (short const   )57, (short const   )56,
   (short const   )55, (short const   )41, (short const   )35,
   (short const   )284, (short const   )5, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284};
# 478
static short const   yy_chk[330]   = 
# 478
  {(short const   )0, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )1, (short const   )1,
   (short const   )1, (short const   )1, (short const   )3, (short const   )4,
   (short const   )288, (short const   )3, (short const   )4, (short const   )9,
   (short const   )9, (short const   )11, (short const   )11,
   (short const   )13, (short const   )14, (short const   )13,
   (short const   )15, (short const   )17, (short const   )18,
   (short const   )16, (short const   )14, (short const   )29,
   (short const   )287, (short const   )15, (short const   )13,
   (short const   )16, (short const   )22, (short const   )17,
   (short const   )29, (short const   )23, (short const   )22,
   (short const   )24, (short const   )18, (short const   )23,
   (short const   )25, (short const   )24, (short const   )22,
   (short const   )71, (short const   )25, (short const   )23,
   (short const   )42, (short const   )24, (short const   )36,
   (short const   )36, (short const   )141, (short const   )23,
   (short const   )71, (short const   )123, (short const   )42,
   (short const   )98, (short const   )98, (short const   )197,
   (short const   )281, (short const   )123, (short const   )280,
   (short const   )141, (short const   )277, (short const   )275,
   (short const   )274, (short const   )197, (short const   )285,
   (short const   )285, (short const   )286, (short const   )286,
   (short const   )273, (short const   )269, (short const   )268,
   (short const   )267, (short const   )266, (short const   )265,
   (short const   )263, (short const   )262, (short const   )261,
   (short const   )259, (short const   )257, (short const   )253,
   (short const   )251, (short const   )250, (short const   )249,
   (short const   )247, (short const   )246, (short const   )244,
   (short const   )242, (short const   )241, (short const   )239,
   (short const   )237, (short const   )236, (short const   )234,
   (short const   )233, (short const   )232, (short const   )231,
   (short const   )230, (short const   )229, (short const   )228,
   (short const   )227, (short const   )224, (short const   )223,
   (short const   )222, (short const   )220, (short const   )218,
   (short const   )217, (short const   )216, (short const   )215,
   (short const   )214, (short const   )213, (short const   )212,
   (short const   )211, (short const   )210, (short const   )208,
   (short const   )206, (short const   )205, (short const   )204,
   (short const   )203, (short const   )202, (short const   )201,
   (short const   )200, (short const   )199, (short const   )198,
   (short const   )196, (short const   )195, (short const   )194,
   (short const   )193, (short const   )192, (short const   )191,
   (short const   )190, (short const   )188, (short const   )187,
   (short const   )186, (short const   )185, (short const   )184,
   (short const   )183, (short const   )182, (short const   )181,
   (short const   )179, (short const   )178, (short const   )177,
   (short const   )176, (short const   )175, (short const   )174,
   (short const   )173, (short const   )171, (short const   )170,
   (short const   )169, (short const   )168, (short const   )167,
   (short const   )164, (short const   )163, (short const   )160,
   (short const   )159, (short const   )158, (short const   )157,
   (short const   )156, (short const   )155, (short const   )154,
   (short const   )153, (short const   )152, (short const   )151,
   (short const   )148, (short const   )147, (short const   )146,
   (short const   )145, (short const   )144, (short const   )143,
   (short const   )142, (short const   )140, (short const   )139,
   (short const   )138, (short const   )136, (short const   )135,
   (short const   )134, (short const   )133, (short const   )132,
   (short const   )131, (short const   )130, (short const   )129,
   (short const   )128, (short const   )127, (short const   )126,
   (short const   )125, (short const   )124, (short const   )122,
   (short const   )121, (short const   )120, (short const   )117,
   (short const   )116, (short const   )114, (short const   )113,
   (short const   )112, (short const   )111, (short const   )110,
   (short const   )109, (short const   )108, (short const   )107,
   (short const   )106, (short const   )105, (short const   )104,
   (short const   )103, (short const   )102, (short const   )101,
   (short const   )100, (short const   )99, (short const   )97,
   (short const   )96, (short const   )95, (short const   )94,
   (short const   )93, (short const   )92, (short const   )91,
   (short const   )90, (short const   )89, (short const   )88,
   (short const   )87, (short const   )86, (short const   )85,
   (short const   )84, (short const   )83, (short const   )82,
   (short const   )81, (short const   )80, (short const   )76,
   (short const   )75, (short const   )74, (short const   )73,
   (short const   )72, (short const   )70, (short const   )69,
   (short const   )68, (short const   )67, (short const   )66,
   (short const   )65, (short const   )64, (short const   )63,
   (short const   )62, (short const   )61, (short const   )60,
   (short const   )59, (short const   )58, (short const   )57,
   (short const   )56, (short const   )55, (short const   )54,
   (short const   )53, (short const   )52, (short const   )51,
   (short const   )50, (short const   )49, (short const   )48,
   (short const   )47, (short const   )46, (short const   )45,
   (short const   )44, (short const   )43, (short const   )41,
   (short const   )35, (short const   )34, (short const   )31,
   (short const   )30, (short const   )28, (short const   )27,
   (short const   )26, (short const   )21, (short const   )20,
   (short const   )19, (short const   )12, (short const   )7, (short const   )5,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284, (short const   )284, (short const   )284,
   (short const   )284};
# 518
static yy_state_type yy_last_accepting_state  ;
# 519
static char *yy_last_accepting_cpos  ;
# 525
static int yy_more_flag   = 0;
# 526
static int yy_more_len   = 0;
# 22 "lexer.l"
char *s  ;
# 22
char *d  ;
# 715 "lex.yy.c"
int yylex(void) 
{ register yy_state_type yy_current_state ;
  register char *yy_cp ;
  register char *yy_bp ;
  register int yy_act ;
  register YY_CHAR yy_c ;
  int yy_amount_of_matched_text ;
  yy_state_type yy_next_state ;
  int tmp ;

  {
# 726
  if (yy_init) {
    {
# 728
    yy_init = 0;
    }
# 734
    if (! yy_start) {
      {
# 735
      yy_start = 1;
      }
    }
# 737
    if (! yyin) {
      {
# 738
      yyin = get_stdin();
      {
# 121 "spec.work"
      yyin->__BLAST_FLAG = 1;
      {

      }
      }

      }
    }
# 740 "lex.yy.c"
    if (! yyout) {
      {
# 741
      yyout = get_stdout();
      {
# 113 "spec.work"
      yyout->__BLAST_FLAG = 1;
      {

      }
      }

      }
    }
# 743 "lex.yy.c"
    if (! yy_current_buffer) {
      {
# 744
      yy_current_buffer = yy_create_buffer(yyin, 16384);
      }
    }
    {
# 747
    yy_load_buffer_state();
    }
  }
# 750
  while (1) {
    {
# 752
    yy_more_len = 0;
    }
# 753
    if (yy_more_flag) {
      {
# 755
      yy_more_len = yy_c_buf_p - yytext;
# 756
      yy_more_flag = 0;
      }
    }
    {
# 758
    yy_cp = yy_c_buf_p;
# 761
    (*yy_cp) = yy_hold_char;
# 766
    yy_bp = yy_cp;
# 768
    yy_current_state = yy_start;
    }
    yy_match: 
# 770
    while (1) {
      {
# 772
      yy_c = (unsigned char )yy_ec[(unsigned int )((unsigned char )(*yy_cp))];
      }
# 773
      if (yy_accept[yy_current_state]) {
        {
# 775
        yy_last_accepting_state = yy_current_state;
# 776
        yy_last_accepting_cpos = yy_cp;
        }
      }
# 778
      while ((int const   )yy_chk[(int const   )yy_base[yy_current_state] +
                                  (int const   )yy_c] != yy_current_state) {
        {
# 780
        yy_current_state = (int )yy_def[yy_current_state];
        }
# 781
        if (yy_current_state >= 285) {
          {
# 782
          yy_c = (unsigned char )yy_meta[(unsigned int )yy_c];
          }
        }
      }
      {
# 784
      yy_current_state = (int )yy_nxt[(unsigned int )yy_base[yy_current_state] +
                                      (unsigned int )yy_c];
# 785
      yy_cp ++;
      }
# 770
      if (! ((int const   )yy_base[yy_current_state] != 296)) {
# 770
        break;
      }
    }
    yy_find_action: 
    {
# 790
    yy_act = (int )yy_accept[yy_current_state];
    }
# 791
    if (yy_act == 0) {
      {
# 793
      yy_cp = yy_last_accepting_cpos;
# 794
      yy_current_state = yy_last_accepting_state;
# 795
      yy_act = (int )yy_accept[yy_current_state];
      }
    }
    {
# 798
    yytext = yy_bp;
# 798
    yytext -= yy_more_len;
# 798
    yyleng = yy_cp - yytext;
# 798
    yy_hold_char = (*yy_cp);
# 798
    (*yy_cp) = '\0';
# 798
    yy_c_buf_p = yy_cp;
    }
    do_action: 
# 804
    switch (yy_act) {
    case 0: 
    {
# 808
    (*yy_cp) = yy_hold_char;
# 809
    yy_cp = yy_last_accepting_cpos;
# 810
    yy_current_state = yy_last_accepting_state;
    }
    goto yy_find_action;
    case 1: 
    {

    }
# 33 "lexer.l"
    break;
    case 2: 
    {

    }
    case 3: 
    {

    }
# 36
    break;
    case 4: 
    {
# 37
    yy_start = 3;
    }
# 38
    break;
    case 5: 
    {
# 38
    yy_start = 1;
    }
# 39
    break;
    case 6: 
    {

    }
# 40
    break;
    case 7: 
    {
# 40
    lineno = lineno + 1;
    }
# 41
    break;
    case 8: 
    {
# 42
    yylval.boolean = 2;
    }
# 42
    return (257);
# 43
    break;
    case 9: 
    {

    }
    case 10: 
    {

    }
    case 11: 
    {
# 46
    yylval.boolean = 1;
    }
# 46
    return (257);
# 47
    break;
    case 12: 
    {

    }
    case 13: 
    {

    }
    case 14: 
    {
# 50
    yylval.boolean = 0;
    }
# 50
    return (257);
# 51
    break;
    case 15: 
    {

    }
# 53
    return (260);
# 54
    break;
    case 16: 
    {

    }
# 54
    return (269);
# 55
    break;
    case 17: 
    {

    }
# 55
    return (261);
# 56
    break;
    case 18: 
    {

    }
# 56
    return (262);
# 57
    break;
    case 19: 
    {

    }
# 57
    return (263);
# 58
    break;
    case 20: 
    {

    }
# 58
    return (264);
# 59
    break;
    case 21: 
    {

    }
# 59
    return (265);
# 60
    break;
    case 22: 
    {

    }
# 61
    return (266);
# 62
    break;
    case 23: 
    {

    }
# 62
    return (267);
# 63
    break;
    case 24: 
    {

    }
# 63
    return (268);
# 64
    break;
    case 25: 
    {

    }
# 65
    return (270);
# 66
    break;
    case 26: 
    {

    }
# 66
    return (271);
# 67
    break;
    case 27: 
    {

    }
# 67
    return (272);
# 68
    break;
    case 28: 
    {

    }
# 68
    return (273);
# 69
    break;
    case 29: 
    {

    }
# 69
    return (274);
# 70
    break;
    case 30: 
    {

    }
# 70
    return (275);
# 71
    break;
    case 31: 
    {

    }
# 71
    return (276);
# 72
    break;
    case 32: 
    {

    }
# 72
    return (277);
# 73
    break;
    case 33: 
    {

    }
# 73
    return (278);
# 74
    break;
    case 34: 
    {

    }
# 74
    return (279);
# 75
    break;
    case 35: 
    {

    }
# 75
    return (280);
# 76
    break;
    case 36: 
    {

    }
# 76
    return (281);
# 77
    break;
    case 37: 
    {

    }
# 78
    return (282);
# 79
    break;
    case 38: 
    {

    }
# 79
    return (282);
# 80
    break;
    case 39: 
    {

    }
# 80
    return (283);
# 81
    break;
    case 40: 
    {

    }
# 82
    return (284);
# 83
    break;
    case 41: 
    {

    }
# 83
    return (285);
# 84
    break;
    case 42: 
    {

    }
# 84
    return (286);
# 85
    break;
    case 43: 
    {

    }
# 85
    return (287);
# 86
    break;
    case 44: 
    {

    }
# 86
    return (288);
# 87
    break;
    case 45: 
    {

    }
# 87
    return (289);
# 88
    break;
    case 46: 
    {

    }
# 88
    return (290);
# 89
    break;
    case 47: 
    {

    }
# 89
    return (291);
# 90
    break;
    case 48: 
    {

    }
# 90
    return (292);
# 91
    break;
    case 49: 
    {

    }
# 91
    return (293);
# 92
    break;
    case 50: 
    {

    }
# 92
    return (294);
# 93
    break;
    case 51: 
    {

    }
# 93
    return (295);
# 94
    break;
    case 52: 
    {

    }
# 94
    return (296);
# 95
    break;
    case 53: 
    {
# 97
    yylval.number = atoi((char const   *)yytext);
    }
# 98
    return (258);
# 100
    break;
    case 54: 
    {

    }
# 102
    if ((int )(*(yytext + (yyleng - 2))) == 92) {
# 103
      while (1) {
        {
# 103
        (*yy_cp) = yy_hold_char;
# 103
        yy_cp = ((yy_bp + yyleng) - 1) - yy_more_len;
# 103
        yy_c_buf_p = yy_cp;
# 103
        yytext = yy_bp;
# 103
        yytext -= yy_more_len;
# 103
        yyleng = yy_cp - yytext;
# 103
        yy_hold_char = (*yy_cp);
# 103
        (*yy_cp) = '\0';
# 103
        yy_c_buf_p = yy_cp;
        }
# 103
        break;
      }
      {
# 104
      yy_more_flag = 1;
      }
    } else {
      {
# 107
      yylval.string = (char *)malloc((unsigned int )(yyleng + 1));
# 108
      s = yytext + 1;
# 109
      d = yylval.string;
      }
# 111
      while ((*s)) {
# 112
        if ((int )(*s) == 34) {
# 112
          if ((int )(*(s - 1)) == 92) {
            {
# 113
            d --;
# 113
            (*d) = (*s);
            }
          } else {
            {
# 115
            (*d) = (*s);
            }
          }
        } else {
          {
# 115
          (*d) = (*s);
          }
        }
        {
# 116
        d ++;
# 116
        s ++;
        }
      }
      {
# 118
      d --;
# 118
      (*d) = (char )0;
      }
# 120
      return (259);
    }
# 123
    break;
    case 55: 
    {
# 124
    lineno = lineno + 1;
    }
# 125
    break;
    case 56: 
    {

    }
# 126
    return ((int )(*(yytext + 0)));
# 127
    break;
    case 57: 
    {
# 128
    fwrite((void const   */* __restrict  */)((void const   *)yytext),
           (unsigned int )yyleng, 1U, (FILE */* __restrict  */)yyout);
    }
# 129
    break;
    case 59: 
    {

    }
    case 60: 
    {

    }
# 1110 "lex.yy.c"
    return (0);
    case 58: 
    {
# 1115
    yy_amount_of_matched_text = (yy_cp - yytext) - 1;
# 1118
    (*yy_cp) = yy_hold_char;
    }
# 1121
    if (yy_current_buffer->yy_buffer_status == 0) {
      {
# 1132
      yy_n_chars = yy_current_buffer->yy_n_chars;
# 1133
      yy_current_buffer->yy_input_file = yyin;
# 1134
      yy_current_buffer->yy_buffer_status = 1;
      }
    }
# 1144
    if ((unsigned int )yy_c_buf_p <=
        (unsigned int )(yy_current_buffer->yy_ch_buf + yy_n_chars)) {
      {
# 1148
      yy_c_buf_p = yytext + yy_amount_of_matched_text;
# 1150
      yy_current_state = yy_get_previous_state();
# 1161
      yy_next_state = yy_try_NUL_trans(yy_current_state);
# 1163
      yy_bp = yytext + yy_more_len;
      }
# 1165
      if (yy_next_state) {
        {
# 1168
        yy_c_buf_p ++;
# 1168
        yy_cp = yy_c_buf_p;
# 1169
        yy_current_state = yy_next_state;
        }
        goto yy_match;
      } else {
        {
# 1175
        yy_cp = yy_c_buf_p;
        }
        goto yy_find_action;
      }
    } else {
      {
# 1180
      tmp = yy_get_next_buffer();
      }
# 1180
      switch (tmp) {
      case 1: 
      {
# 1184
      yy_did_buffer_switch_on_eof = 0;
# 1197
      yy_c_buf_p = yytext + yy_more_len;
# 1199
      yy_act = (58 + (yy_start - 1) / 2) + 1;
      }
      goto do_action;
# 1208
      break;
      case 0: 
      {
# 1212
      yy_c_buf_p = yytext + yy_amount_of_matched_text;
# 1215
      yy_current_state = yy_get_previous_state();
# 1217
      yy_cp = yy_c_buf_p;
# 1218
      yy_bp = yytext + yy_more_len;
      }
      goto yy_match;
      case 2: 
      {
# 1222
      yy_c_buf_p = yy_current_buffer->yy_ch_buf + yy_n_chars;
# 1225
      yy_current_state = yy_get_previous_state();
# 1227
      yy_cp = yy_c_buf_p;
# 1228
      yy_bp = yytext + yy_more_len;
      }
      goto yy_find_action;
      }
    }
# 1231
    break;
    default: 
    {
# 1235
    yy_fatal_error((char const   *)"fatal flex scanner internal error--no action found");
    }
    }
  }
# 1239
  return (0);
}
}
# 1250
static int yy_get_next_buffer(void) 
{ register char *dest ;
  register char *source ;
  register int number_to_move ;
  register int i ;
  int ret_val ;
  char *tmp ;
  char *tmp___0 ;
  int num_to_read ;
  YY_BUFFER_STATE b ;
  int yy_c_buf_p_offset ;
  int new_size ;
  int c ;
  int n ;
  int tmp___2 ;
  int tmp___3 ;
  int *tmp___4 ;
  int *tmp___5 ;
  int *tmp___6 ;
  int tmp___7 ;

  {
  {
# 1252
  dest = yy_current_buffer->yy_ch_buf;
# 1253
  source = yytext;
  }
# 1257
  if ((unsigned int )yy_c_buf_p > (unsigned int )(yy_current_buffer->yy_ch_buf +
                                                  (yy_n_chars + 1))) {
    {
# 1258
    yy_fatal_error((char const   *)"fatal flex scanner internal error--end of buffer missed");
    }
  }
# 1261
  if (yy_current_buffer->yy_fill_buffer == 0) {
# 1263
    if ((yy_c_buf_p - yytext) - yy_more_len == 1) {
# 1268
      return (1);
    } else {
# 1276
      return (2);
    }
  }
  {
# 1283
  number_to_move = (yy_c_buf_p - yytext) - 1;
# 1285
  i = 0;
  }
# 1285
  while (i < number_to_move) {
    {
# 1286
    tmp = dest;
# 1286
    dest ++;
# 1286
    tmp___0 = source;
# 1286
    source ++;
# 1286
    (*tmp) = (*tmp___0);
# 1285
    i ++;
    }
  }
# 1288
  if (yy_current_buffer->yy_buffer_status == 2) {
    {
# 1292
    yy_n_chars = 0;
# 1292
    yy_current_buffer->yy_n_chars = yy_n_chars;
    }
  } else {
    {
# 1296
    num_to_read = (int )((yy_current_buffer->yy_buf_size -
                          (unsigned int )number_to_move) - 1U);
    }
# 1299
    while (num_to_read <= 0) {
      {
# 1307
      b = yy_current_buffer;
# 1309
      yy_c_buf_p_offset = yy_c_buf_p - b->yy_ch_buf;
      }
# 1312
      if (b->yy_is_our_buffer) {
        {
# 1314
        new_size = (int )(b->yy_buf_size * 2U);
        }
# 1316
        if (new_size <= 0) {
          {
# 1317
          b->yy_buf_size += b->yy_buf_size / 8U;
          }
        } else {
          {
# 1319
          b->yy_buf_size *= 2U;
          }
        }
        {
# 1321
        b->yy_ch_buf = (char *)yy_flex_realloc((void *)b->yy_ch_buf,
                                               b->yy_buf_size + 2U);
        }
      } else {
        {
# 1328
        b->yy_ch_buf = (char *)0;
        }
      }
# 1330
      if (! b->yy_ch_buf) {
        {
# 1331
        yy_fatal_error((char const   *)"fatal error - scanner input buffer overflow");
        }
      }
      {
# 1334
      yy_c_buf_p = b->yy_ch_buf + yy_c_buf_p_offset;
# 1336
      num_to_read = (int )((yy_current_buffer->yy_buf_size -
                            (unsigned int )number_to_move) - 1U);
      }
    }
# 1341
    if (num_to_read > 8192) {
      {
# 1342
      num_to_read = 8192;
      }
    }
# 1345
    if (yy_current_buffer->yy_is_interactive) {
      {
# 1345
      c = (int )'*';
# 1345
      n = 0;
      }
# 1345
      while (1) {
# 1345
        if (n < num_to_read) {
          {
# 1345
          c = _IO_getc(yyin);
          }
# 1345
          if (c != -1) {
# 1345
            if (! (c != 10)) {
# 1345
              break;
            }
          } else {
# 1345
            break;
          }
        } else {
# 1345
          break;
        }
        {
# 1345
        (*((yy_current_buffer->yy_ch_buf + number_to_move) + n)) = (char )c;
# 1345
        n ++;
        }
      }
# 1345
      if (c == 10) {
        {
# 1345
        tmp___2 = n;
# 1345
        n ++;
# 1345
        (*((yy_current_buffer->yy_ch_buf + number_to_move) + tmp___2)) = (char )c;
        }
      }
# 1345
      if (c == -1) {
        {
# 1345
        tmp___3 = ferror(yyin);
        }
# 1345
        if (tmp___3) {
          {
# 1345
          yy_fatal_error((char const   *)"input in flex scanner failed");
          }
        }
      }
      {
# 1345
      yy_n_chars = n;
      }
    } else {
      {
# 1345
      tmp___4 = __errno_location();
# 1345
      (*tmp___4) = 0;
      }
# 1345
      while (1) {
        {
# 1345
        yy_n_chars = (int )fread((void */* __restrict  */)((void *)(yy_current_buffer->yy_ch_buf +
                                                                    number_to_move)),
                                 1U, (unsigned int )num_to_read,
                                 (FILE */* __restrict  */)yyin);
        }
# 1345
        if (yy_n_chars == 0) {
          {
# 1345
          tmp___7 = ferror(yyin);
          }
# 1345
          if (! tmp___7) {
# 1345
            break;
          }
        } else {
# 1345
          break;
        }
        {
# 1345
        tmp___5 = __errno_location();
        }
# 1345
        if ((*tmp___5) != 4) {
          {
# 1345
          yy_fatal_error((char const   *)"input in flex scanner failed");
          }
# 1345
          break;
        }
        {
# 1345
        tmp___6 = __errno_location();
# 1345
        (*tmp___6) = 0;
# 1345
        clearerr(yyin);
        }
      }
    }
    {
# 1348
    yy_current_buffer->yy_n_chars = yy_n_chars;
    }
  }
# 1351
  if (yy_n_chars == 0) {
# 1353
    if (number_to_move == yy_more_len) {
      {
# 1355
      ret_val = 1;
# 1356
      yyrestart(yyin);
      }
    } else {
      {
# 1361
      ret_val = 2;
# 1362
      yy_current_buffer->yy_buffer_status = 2;
      }
    }
  } else {
    {
# 1368
    ret_val = 0;
    }
  }
  {
# 1370
  yy_n_chars += number_to_move;
# 1371
  (*(yy_current_buffer->yy_ch_buf + yy_n_chars)) = (char )0;
# 1372
  (*(yy_current_buffer->yy_ch_buf + (yy_n_chars + 1))) = (char )0;
# 1374
  yytext = yy_current_buffer->yy_ch_buf + 0;
  }
# 1376
  return (ret_val);
}
}
# 1382
static yy_state_type yy_get_previous_state(void) 
{ register yy_state_type yy_current_state ;
  register char *yy_cp ;
  register YY_CHAR yy_c ;
  int tmp ;

  {
  {
# 1387
  yy_current_state = yy_start;
# 1389
  yy_cp = yytext + yy_more_len;
  }
# 1389
  while ((unsigned int )yy_cp < (unsigned int )yy_c_buf_p) {
# 1391
    if ((*yy_cp)) {
      {
# 1391
      tmp = yy_ec[(unsigned int )((unsigned char )(*yy_cp))];
      }
    } else {
      {
# 1391
      tmp = 1;
      }
    }
    {
# 1391
    yy_c = (unsigned char )tmp;
    }
# 1392
    if (yy_accept[yy_current_state]) {
      {
# 1394
      yy_last_accepting_state = yy_current_state;
# 1395
      yy_last_accepting_cpos = yy_cp;
      }
    }
# 1397
    while ((int const   )yy_chk[(int const   )yy_base[yy_current_state] +
                                (int const   )yy_c] != yy_current_state) {
      {
# 1399
      yy_current_state = (int )yy_def[yy_current_state];
      }
# 1400
      if (yy_current_state >= 285) {
        {
# 1401
        yy_c = (unsigned char )yy_meta[(unsigned int )yy_c];
        }
      }
    }
    {
# 1403
    yy_current_state = (int )yy_nxt[(unsigned int )yy_base[yy_current_state] +
                                    (unsigned int )yy_c];
# 1389
    yy_cp ++;
    }
  }
# 1406
  return (yy_current_state);
}
}
# 1417
static yy_state_type yy_try_NUL_trans(yy_state_type yy_current_state ) 
{ register int yy_is_jam ;
  register char *yy_cp ;
  register YY_CHAR yy_c ;
  int tmp ;

  {
  {
# 1424
  yy_cp = yy_c_buf_p;
# 1426
  yy_c = (unsigned char )1;
  }
# 1427
  if (yy_accept[yy_current_state]) {
    {
# 1429
    yy_last_accepting_state = yy_current_state;
# 1430
    yy_last_accepting_cpos = yy_cp;
    }
  }
# 1432
  while ((int const   )yy_chk[(int const   )yy_base[yy_current_state] +
                              (int const   )yy_c] != yy_current_state) {
    {
# 1434
    yy_current_state = (int )yy_def[yy_current_state];
    }
# 1435
    if (yy_current_state >= 285) {
      {
# 1436
      yy_c = (unsigned char )yy_meta[(unsigned int )yy_c];
      }
    }
  }
  {
# 1438
  yy_current_state = (int )yy_nxt[(unsigned int )yy_base[yy_current_state] +
                                  (unsigned int )yy_c];
# 1439
  yy_is_jam = yy_current_state == 284;
  }
# 1441
  if (yy_is_jam) {
    {
# 1441
    tmp = 0;
    }
  } else {
    {
# 1441
    tmp = yy_current_state;
    }
  }
# 1441
  return (tmp);
}
}
# 1564
void yyrestart(FILE *input_file ) 
{ 

  {
# 1570
  if (! yy_current_buffer) {
    {
# 1571
    yy_current_buffer = yy_create_buffer(yyin, 16384);
    }
  }
  {
# 1573
  yy_init_buffer(yy_current_buffer, input_file);
# 1574
  yy_load_buffer_state();
  }
# 1575
  return;
}
}
# 1579
void yy_switch_to_buffer(YY_BUFFER_STATE new_buffer ) 
{ 

  {
# 1585
  if ((unsigned int )yy_current_buffer == (unsigned int )new_buffer) {
# 1586
    return;
  }
# 1588
  if (yy_current_buffer) {
    {
# 1591
    (*yy_c_buf_p) = yy_hold_char;
# 1592
    yy_current_buffer->yy_buf_pos = yy_c_buf_p;
# 1593
    yy_current_buffer->yy_n_chars = yy_n_chars;
    }
  }
  {
# 1596
  yy_current_buffer = new_buffer;
# 1597
  yy_load_buffer_state();
# 1604
  yy_did_buffer_switch_on_eof = 1;
  }
# 1605
  return;
}
}
# 1609
void yy_load_buffer_state(void) 
{ 

  {
  {
# 1614
  yy_n_chars = yy_current_buffer->yy_n_chars;
# 1615
  yy_c_buf_p = yy_current_buffer->yy_buf_pos;
# 1615
  yytext = yy_c_buf_p;
# 1616
  yyin = yy_current_buffer->yy_input_file;
# 1617
  yy_hold_char = (*yy_c_buf_p);
  }
# 1618
  return;
}
}
# 1622
YY_BUFFER_STATE yy_create_buffer(FILE *file , int size ) 
{ YY_BUFFER_STATE b ;

  {
  {
# 1631
  b = (YY_BUFFER_STATE )yy_flex_alloc(sizeof(struct yy_buffer_state ));
  }
# 1632
  if (! b) {
    {
# 1633
    yy_fatal_error((char const   *)"out of dynamic memory in yy_create_buffer()");
    }
  }
  {
# 1635
  b->yy_buf_size = (unsigned int )size;
# 1640
  b->yy_ch_buf = (char *)yy_flex_alloc(b->yy_buf_size + 2U);
  }
# 1641
  if (! b->yy_ch_buf) {
    {
# 1642
    yy_fatal_error((char const   *)"out of dynamic memory in yy_create_buffer()");
    }
  }
  {
# 1644
  b->yy_is_our_buffer = 1;
# 1646
  yy_init_buffer(b, file);
  }
# 1648
  return (b);
}
}
# 1653
void yy_delete_buffer(YY_BUFFER_STATE b ) 
{ 

  {
# 1659
  if (! b) {
# 1660
    return;
  }
# 1662
  if ((unsigned int )b == (unsigned int )yy_current_buffer) {
    {
# 1663
    yy_current_buffer = (struct yy_buffer_state *)0;
    }
  }
# 1665
  if (b->yy_is_our_buffer) {
    {
# 1666
    yy_flex_free((void *)b->yy_ch_buf);
    }
  }
  {
# 1668
  yy_flex_free((void *)b);
  }
# 1669
  return;
}
}
# 1683
void yy_init_buffer(YY_BUFFER_STATE b , FILE *file ) 
{ int tmp___1 ;
  int tmp___2 ;

  {
  {
# 1692
  yy_flush_buffer(b);
# 1694
  b->yy_input_file = file;
# 1695
  b->yy_fill_buffer = 1;
  }
# 1703
  if (file) {
    {
# 1703
    tmp___1 = fileno(file);
# 1703
    tmp___2 = isatty(tmp___1);
# 1703
    b->yy_is_interactive = tmp___2 > 0;
    }
  } else {
    {
# 1703
    b->yy_is_interactive = 0;
    }
  }
# 1706
  return;
}
}
# 1710
void yy_flush_buffer(YY_BUFFER_STATE b ) 
{ 

  {
# 1717
  if (! b) {
# 1718
    return;
  }
  {
# 1720
  b->yy_n_chars = 0;
# 1726
  (*(b->yy_ch_buf + 0)) = (char )0;
# 1727
  (*(b->yy_ch_buf + 1)) = (char )0;
# 1729
  b->yy_buf_pos = b->yy_ch_buf + 0;
# 1731
  b->yy_at_bol = 1;
# 1732
  b->yy_buffer_status = 0;
  }
# 1734
  if ((unsigned int )b == (unsigned int )yy_current_buffer) {
    {
# 1735
    yy_load_buffer_state();
    }
  }
# 1736
  return;
}
}
# 1741
YY_BUFFER_STATE yy_scan_buffer(char *base , yy_size_t size ) 
{ YY_BUFFER_STATE b ;

  {
# 1750
  if (size < 2U) {
# 1754
    return ((struct yy_buffer_state *)0);
  } else {
# 1750
    if ((int )(*(base + (size - 2U))) != 0) {
# 1754
      return ((struct yy_buffer_state *)0);
    } else {
# 1750
      if ((int )(*(base + (size - 1U))) != 0) {
# 1754
        return ((struct yy_buffer_state *)0);
      }
    }
  }
  {
# 1756
  b = (YY_BUFFER_STATE )yy_flex_alloc(sizeof(struct yy_buffer_state ));
  }
# 1757
  if (! b) {
    {
# 1758
    yy_fatal_error((char const   *)"out of dynamic memory in yy_scan_buffer()");
    }
  }
  {
# 1760
  b->yy_buf_size = size - 2U;
# 1761
  b->yy_ch_buf = base;
# 1761
  b->yy_buf_pos = b->yy_ch_buf;
# 1762
  b->yy_is_our_buffer = 0;
# 1763
  b->yy_input_file = (FILE *)0;
# 1764
  b->yy_n_chars = (int )b->yy_buf_size;
# 1765
  b->yy_is_interactive = 0;
# 1766
  b->yy_at_bol = 1;
# 1767
  b->yy_fill_buffer = 0;
# 1768
  b->yy_buffer_status = 0;
# 1770
  yy_switch_to_buffer(b);
  }
# 1772
  return (b);
}
}
# 1779
YY_BUFFER_STATE yy_scan_string(char const   *yy_str ) 
{ int len ;
  YY_BUFFER_STATE tmp ;

  {
  {
# 1786
  len = 0;
  }
# 1786
  while ((*(yy_str + len))) {
    {
# 1786
    len ++;
    }
  }
  {
# 1789
  tmp = yy_scan_bytes(yy_str, len);
  }
# 1789
  return (tmp);
}
}
# 1796
YY_BUFFER_STATE yy_scan_bytes(char const   *bytes , int len ) 
{ YY_BUFFER_STATE b ;
  char *buf ;
  yy_size_t n ;
  int i ;

  {
  {
# 1809
  n = (unsigned int )(len + 2);
# 1810
  buf = (char *)yy_flex_alloc(n);
  }
# 1811
  if (! buf) {
    {
# 1812
    yy_fatal_error((char const   *)"out of dynamic memory in yy_scan_bytes()");
    }
  }
  {
# 1814
  i = 0;
  }
# 1814
  while (i < len) {
    {
# 1815
    (*(buf + i)) = (*(bytes + i));
# 1814
    i ++;
    }
  }
  {
# 1817
  (*(buf + (len + 1))) = (char )0;
# 1817
  (*(buf + len)) = (*(buf + (len + 1)));
# 1819
  b = yy_scan_buffer(buf, n);
  }
# 1820
  if (! b) {
    {
# 1821
    yy_fatal_error((char const   *)"bad buffer in yy_scan_bytes()");
    }
  }
  {
# 1826
  b->yy_is_our_buffer = 1;
  }
# 1828
  return (b);
}
}
# 1890
static void yy_fatal_error(char const   *msg ) 
{ FILE * __restrict  tmp ;

  {
  {
# 1896
  tmp = (FILE */* __restrict  */)get_stderr();
  {
# 105 "spec.work"
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
# 1896 "lex.yy.c"
  fprintf(tmp, (char const   */* __restrict  */)((char const   *)"%s\n"), msg);
# 1897
  exit(2);
  {
# 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
# 1897 "lex.yy.c"
  return;
}
}
# 1954
static void *yy_flex_alloc(yy_size_t size ) 
{ void *tmp ;

  {
  {
# 1960
  tmp = malloc(size);
  }
# 1960
  return (tmp);
}
}
# 1964
static void *yy_flex_realloc(void *ptr , yy_size_t size ) 
{ void *tmp ;

  {
  {
# 1978
  tmp = realloc((void *)((char *)ptr), size);
  }
# 1978
  return (tmp);
}
}
# 1982
static void yy_flex_free(void *ptr ) 
{ 

  {
  {
# 1988
  free(ptr);
  }
# 1989
  return;
}
}
# 24 "common.c"
int _xstrcmp(char const   *s1 , char const   *s2 , char const   *file ,
             int line ) 
{ int tmp ;

  {
# 26
  if (s1) {
# 26
    if (s2) {
      {
# 27
      tmp = strcmp(s1, s2);
      }
# 27
      return (tmp);
    } else {
      {
# 30
      error("!!! an unexpected situation occured, please send us this: [%s, %s:%d]\n",
            "xstrcmp", file, line);
      }
# 32
      return (1);
    }
  } else {
    {
# 30
    error("!!! an unexpected situation occured, please send us this: [%s, %s:%d]\n",
          "xstrcmp", file, line);
    }
# 32
    return (1);
  }
}
}
# 36
int _xstrncmp(char const   *s1 , char const   *s2 , size_t n ,
              char const   *file , int line ) 
{ int tmp ;

  {
# 38
  if (s1) {
# 38
    if (s2) {
      {
# 39
      tmp = strncmp(s1, s2, n);
      }
# 39
      return (tmp);
    } else {
      {
# 42
      error("!!! an unexpected situation occured, please send us this: [%s, %s:%d]\n",
            "xstrncmp", file, line);
      }
# 44
      return (1);
    }
  } else {
    {
# 42
    error("!!! an unexpected situation occured, please send us this: [%s, %s:%d]\n",
          "xstrncmp", file, line);
    }
# 44
    return (1);
  }
}
}
# 48
int _xstrcasecmp(char const   *s1 , char const   *s2 , char const   *file ,
                 int line ) 
{ int tmp ;

  {
# 50
  if (s1) {
# 50
    if (s2) {
      {
# 51
      tmp = strcasecmp(s1, s2);
      }
# 51
      return (tmp);
    } else {
      {
# 54
      error("!!! an unexpected situation occured, please send us this: [%s, %s:%d]\n",
            "xstrcasecmp", file, line);
      }
# 56
      return (1);
    }
  } else {
    {
# 54
    error("!!! an unexpected situation occured, please send us this: [%s, %s:%d]\n",
          "xstrcasecmp", file, line);
    }
# 56
    return (1);
  }
}
}
# 60
int _xstrncasecmp(char const   *s1 , char const   *s2 , size_t n ,
                  char const   *file , int line ) 
{ int tmp ;

  {
# 62
  if (s1) {
# 62
    if (s2) {
      {
# 63
      tmp = strncasecmp(s1, s2, n);
      }
# 63
      return (tmp);
    } else {
      {
# 66
      error("!!! an unexpected situation occured, please send us this: [%s, %s:%d]\n",
            "xstrncasecmp", file, line);
      }
# 68
      return (1);
    }
  } else {
    {
# 66
    error("!!! an unexpected situation occured, please send us this: [%s, %s:%d]\n",
          "xstrncasecmp", file, line);
    }
# 68
    return (1);
  }
}
}
# 72
char *_xstrcpy(char *dest , char const   *src , char const   *file , int line ) 
{ char *tmp ;

  {
# 74
  if (dest) {
# 74
    if (src) {
      {
# 75
      tmp = strcpy((char */* __restrict  */)dest,
                   (char const   */* __restrict  */)src);
      }
# 75
      return (tmp);
    } else {
      {
# 78
      error("!!! an unexpected situation occured, please send us this: [%s, %s:%d]\n",
            "xstrcpy", file, line);
      }
# 80
      return ((char *)0);
    }
  } else {
    {
# 78
    error("!!! an unexpected situation occured, please send us this: [%s, %s:%d]\n",
          "xstrcpy", file, line);
    }
# 80
    return ((char *)0);
  }
}
}
# 84
char *_xstrncpy(char *dest , char const   *src , size_t n , char const   *file ,
                int line ) 
{ char *tmp ;

  {
# 86
  if (dest) {
# 86
    if (src) {
      {
# 87
      tmp = strncpy((char */* __restrict  */)dest,
                    (char const   */* __restrict  */)src, n);
      }
# 87
      return (tmp);
    } else {
      {
# 90
      error("!!! an unexpected situation occured, please send us this: [%s, %s:%d]\n",
            "xstrncpy", file, line);
      }
# 92
      return ((char *)0);
    }
  } else {
    {
# 90
    error("!!! an unexpected situation occured, please send us this: [%s, %s:%d]\n",
          "xstrncpy", file, line);
    }
# 92
    return ((char *)0);
  }
}
}
# 96
void *xmalloc(size_t size ) 
{ void *ret ;
  void *tmp ;

  {
  {
# 98
  tmp = malloc(size);
# 98
  ret = tmp;
  }
# 99
  if (! ret) {
    {
# 100
    error("out of memory, terminating!\n");
# 101
    escape();
    }
  }
# 103
  return (ret);
}
}
# 106
void *xcalloc(size_t nmemb , size_t size ) 
{ void *ret ;
  void *tmp ;

  {
  {
# 108
  tmp = calloc(nmemb, size);
# 108
  ret = tmp;
  }
# 110
  if (! ret) {
    {
# 112
    error("out of memory, terminating!\n");
# 113
    escape();
    }
  }
# 116
  return (ret);
}
}
# 119
void xfree(void *ptr ) 
{ 

  {
# 121
  if (ptr) {
    {
# 122
    free(ptr);
    }
  }
# 123
  return;
}
}
# 125
void *xrealloc(void *ptr , size_t size ) 
{ void *ret ;
  void *tmp ;

  {
  {
# 127
  tmp = realloc(ptr, size);
# 127
  ret = tmp;
  }
# 128
  if (! ret) {
# 128
    if (size) {
      {
# 129
      error("out of memory, terminating!\n");
# 130
      escape();
      }
    }
  }
# 132
  return (ret);
}
}
void __initialize__(void) 
{ 

  {
# 254 "/users/rupak/ccured/include/string_wrappers.h"
  saved_str = (char const   *)((void *)0);
# 39 "irc.c"
  highest_socket = 0;
# 31 "muh.c"
  messagelog = (FILE *)((void *)0);
# 86
  listensocket = 0;
# 87
  forwardmsg = (char *)((void *)0);
# 30 "parser.y"
  lineno = 1;
# 32
  logtype = 0;
# 203 "lexer.c"
  yy_current_buffer = (struct yy_buffer_state *)0;
# 221
  yy_c_buf_p = (char *)0;
# 222
  yy_init = 1;
# 223
  yy_start = 0;
# 270
  yyin = (FILE *)0;
# 270
  yyout = (FILE *)0;
# 525
  yy_more_flag = 0;
# 526
  yy_more_len = 0;
}
}
