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
# 57
int _EXIT  ;
# 59
void exit(int status ) 
{ 

  {
# 60
  _EXIT = 1;
  _L: 
  goto _L;
}
}
void __assert_fail(char const   *__assertion , char const   *__file ,
                          unsigned int __line , char const   *__function ) {
  _EXIT = 1;
  _LL: goto _LL;
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
# 161
typedef long __blksize_t;
# 166
typedef long __blkcnt_t;
# 180
typedef int __ssize_t;
# 189
typedef unsigned int __socklen_t;
# 46 "/users/rupak/ccured/include/gcc_3.2/stdio.h"
typedef struct _IO_FILE FILE;
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
# 100 "/usr/include/sys/types.h"
typedef __pid_t pid_t;
# 110
typedef __ssize_t ssize_t;
# 76 "/users/rupak/ccured/include/gcc_3.2/time.h"
typedef __time_t time_t;
# 28 "/usr/include/bits/sigset.h"
struct __anonstruct___sigset_t_12 {
   unsigned long __val[(int )(1024U / (8U * sizeof(unsigned long )))] ;
};
# 28
typedef struct __anonstruct___sigset_t_12 __sigset_t;
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
# 55 "/usr/include/sys/select.h"
typedef long __fd_mask;
# 67
struct __anonstruct_fd_set_13 {
   __fd_mask __fds_bits[(int )(1024U / (8U * sizeof(__fd_mask )))] ;
};
# 67
typedef struct __anonstruct_fd_set_13 fd_set;
# 83 "/usr/include/bits/sched.h"
struct __sched_param {
   int __sched_priority ;
};
# 41 "/usr/include/bits/pthreadtypes.h"
struct __pthread_attr_s {
   int __detachstate ;
   int __schedpolicy ;
   struct __sched_param __schedparam ;
   int __inheritsched ;
   int __scope ;
   size_t __guardsize ;
   int __stackaddr_set ;
   void *__stackaddr ;
   size_t __stacksize ;
};
# 41
typedef struct __pthread_attr_s pthread_attr_t;
# 150
typedef unsigned long pthread_t;
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
# 77 "pcre/pcre.h"
typedef void pcre;
# 78
typedef void pcre_extra;
# 107 "pcrs.h"
struct __anonstruct_pcrs_substitute_18 {
   char *text ;
   int backrefs ;
   int block_offset[33] ;
   size_t block_length[33] ;
   int backref[33] ;
   int backref_count[35] ;
};
# 107
typedef struct __anonstruct_pcrs_substitute_18 pcrs_substitute;
# 124
struct __anonstruct_pcrs_match_19 {
   int submatches ;
   int submatch_offset[35] ;
   size_t submatch_length[35] ;
};
# 124
typedef struct __anonstruct_pcrs_match_19 pcrs_match;
# 133
struct PCRS_JOB {
   pcre *pattern ;
   pcre_extra *hints ;
   int options ;
   int flags ;
   pcrs_substitute *substitute ;
   struct PCRS_JOB *next ;
};
# 133
typedef struct PCRS_JOB pcrs_job;
# 62 "pcre/pcreposix.h"
struct __anonstruct_regex_t_21 {
   void *re_pcre ;
   size_t re_nsub ;
   size_t re_erroffset ;
};
# 62
typedef struct __anonstruct_regex_t_21 regex_t;
# 70
typedef int regoff_t;
# 72
struct __anonstruct_regmatch_t_22 {
   regoff_t rm_so ;
   regoff_t rm_eo ;
};
# 72
typedef struct __anonstruct_regmatch_t_22 regmatch_t;
# 540 "project.h"
typedef int jb_socket;
# 557
typedef int jb_err;
# 641
struct list_entry {
   char *str ;
   struct list_entry *next ;
};
# 658
struct list {
   struct list_entry *first ;
   struct list_entry *last ;
};
# 671
struct map_entry {
   char const   *name ;
   char const   *value ;
   struct map_entry *next ;
};
# 686
struct map {
   struct map_entry *first ;
   struct map_entry *last ;
};
# 703
struct http_request {
   char *cmd ;
   char *ocmd ;
   char *gpc ;
   char *url ;
   char *ver ;
   int status ;
   char *host ;
   int port ;
   char *path ;
   char *hostport ;
   int ssl ;
   char *host_ip_addr_str ;
   char *dbuffer ;
   char **dvec ;
   int dcount ;
};
# 730
struct http_response {
   char *status ;
   struct list headers[1] ;
   char *head ;
   size_t head_length ;
   char *body ;
   size_t content_length ;
   int is_static ;
};
# 745
struct url_spec {
   char *spec ;
   char *dbuffer ;
   char **dvec ;
   int dcount ;
   int unanchored ;
   int port ;
   char *path ;
   int pathlen ;
   regex_t *preg ;
};
# 790
struct iob {
   char *buf ;
   char *cur ;
   char *eod ;
   size_t size ;
};
# 897
struct current_action_spec {
   unsigned long flags ;
   char *string[6] ;
   struct list multi[3][1] ;
};
# 919
struct action_spec {
   unsigned long mask ;
   unsigned long add ;
   char *string[6] ;
   struct list multi_remove[3][1] ;
   int multi_remove_all[3] ;
   struct list multi_add[3][1] ;
};
# 948
struct url_actions {
   struct url_spec url[1] ;
   struct action_spec action[1] ;
   struct url_actions *next ;
};
# 1021
struct client_state {
   struct configuration_spec *config ;
   struct current_action_spec action[1] ;
   jb_socket cfd ;
   jb_socket sfd ;
   unsigned short flags ;
   char *ip_addr_str ;
   long ip_addr_long ;
   char *my_ip_addr_str ;
   char *my_hostname ;
   struct http_request http[1] ;
   struct iob iob[1] ;
   struct list headers[1] ;
   struct list cookie_list[1] ;
   unsigned short content_type ;
   char *x_forwarded ;
   struct file_list *actions_list[10] ;
   struct file_list *rlist ;
   size_t content_length ;
   struct file_list *tlist ;
   struct client_state *next ;
};
# 1095
typedef jb_err (*add_header_func_ptr)(struct client_state * );
# 1106
struct parsers {
   char *str ;
   size_t len ;
   jb_err (*parser)(struct client_state * , char ** ) ;
};
# 1122
struct cgi_dispatcher {
   char const   * const  name ;
   jb_err (* const  handler)(struct client_state *csp ,
                             struct http_response *rsp ,
                             struct map  const  *parameters ) ;
   char const   * const  description ;
   int harmless ;
};
# 1141
struct file_list {
   void *f ;
   void (*unloader)(void * ) ;
   int active ;
   time_t lastmodified ;
   char *filename ;
   struct file_list *next ;
};
# 1191
struct block_spec {
   struct url_spec url[1] ;
   int reject ;
   struct block_spec *next ;
};
# 1209
struct forward_spec {
   struct url_spec url[1] ;
   int type ;
   char *gateway_host ;
   int gateway_port ;
   char *forward_host ;
   int forward_port ;
   struct forward_spec *next ;
};
# 1246
struct re_filterfile_spec {
   char *name ;
   char *description ;
   struct list patterns[1] ;
   pcrs_job *joblist ;
   struct re_filterfile_spec *next ;
};
# 1264
struct access_control_addr {
   unsigned long addr ;
   unsigned long mask ;
   unsigned long port ;
};
# 1276
struct access_control_list {
   struct access_control_addr src[1] ;
   struct access_control_addr dst[1] ;
   short action ;
   struct access_control_list *next ;
};
# 1304
struct configuration_spec {
   int debug ;
   int multi_threaded ;
   unsigned int feature_flags ;
   char const   *logfile ;
   char const   *confdir ;
   char const   *logdir ;
   char const   *actions_file[10] ;
   char const   *actions_file_short[10] ;
   char *admin_address ;
   char *proxy_info_url ;
   char *usermanual ;
   char const   *re_filterfile ;
   char const   *jarfile ;
   FILE *jar ;
   char const   *haddr ;
   int hport ;
   size_t buffer_limit ;
   char const   *trustfile ;
   struct list trust_info[1] ;
   struct url_spec *trust_list[64] ;
   struct access_control_list *acl ;
   struct forward_spec *forward ;
   char *proxy_args ;
   struct file_list *config_file_list ;
   int (*loaders[8])(struct client_state * ) ;
   int need_bind ;
};
# 108 "actions.h"
struct action_alias {
   char const   *name ;
   struct action_spec action[1] ;
   struct action_alias *next ;
};
# 239 "actions.c"
struct action_name {
   char const   *name ;
   unsigned long mask ;
   unsigned long add ;
   int takes_value ;
   int index ;
};
# 36 "/usr/include/bits/stat.h"
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
# 323 "cgiedit.c"
struct __anonstruct_setting_25 {
   char *name ;
   char *svalue ;
   int ivalue ;
};
# 323
union __anonunion_data_24 {
   struct action_spec action[1] ;
   struct __anonstruct_setting_25 setting ;
};
# 323
struct file_line {
   struct file_line *next ;
   char *raw ;
   char *prefix ;
   char *unprocessed ;
   int type ;
   union __anonunion_data_24 data ;
};
# 418
struct editable_file {
   struct file_line *lines ;
   char const   *filename ;
   char const   *identifier ;
   char const   *version_str ;
   unsigned int version ;
   int newline ;
   struct file_line *parse_error ;
   char const   *parse_error_text ;
};
# 76 "deanimate.h"
struct binbuffer {
   char *buffer ;
   size_t offset ;
   size_t size ;
};
# 247 "/users/rupak/ccured/include/gcc_3.2/unistd.h"
typedef __socklen_t socklen_t;
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
# 29 "/usr/include/bits/sockaddr.h"
typedef unsigned short sa_family_t;
# 145 "/usr/include/bits/socket.h"
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
# 216 "/usr/include/netinet/in.h"
struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[(int )(((sizeof(struct sockaddr ) -
                                   sizeof(unsigned short )) - sizeof(in_port_t )) -
                                 sizeof(struct in_addr ))] ;
};
# 167 "gateway.c"
struct socks_op {
   unsigned char vn ;
   unsigned char cd ;
   unsigned char dstport[2] ;
   unsigned char dstip[4] ;
   unsigned char userid ;
};
# 177
struct socks_reply {
   unsigned char vn ;
   unsigned char cd ;
   unsigned char dstport[2] ;
   unsigned char dstip[4] ;
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
# 73 "/users/rupak/ccured/include/gcc_3.2/signal.h"
typedef void (*__sighandler_t)(int  );
# 25 "/users/rupak/ccured/include/gcc_3.2/bits/sigaction.h"
struct sigaction {
   void (*sa_handler)(int  ) ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
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
# 43 "/users/rupak/ccured/include/gcc_3.2/grp.h"
struct group {
   char *gr_name ;
   char *gr_passwd ;
   __gid_t gr_gid ;
   char **gr_mem ;
};
# 121 "pcre/internal.h"
typedef int BOOL;
# 289
typedef unsigned char uschar;
# 294
struct real_pcre {
   unsigned long magic_number ;
   size_t size ;
   unsigned char const   *tables ;
   unsigned long options ;
   uschar top_bracket ;
   uschar top_backref ;
   uschar first_char ;
   uschar req_char ;
   uschar code[1] ;
};
# 294
typedef struct real_pcre real_pcre;
# 308
struct real_pcre_extra {
   uschar options ;
   uschar start_bits[32] ;
};
# 308
typedef struct real_pcre_extra real_pcre_extra;
# 317
struct compile_data {
   uschar const   *lcc ;
   uschar const   *fcc ;
   uschar const   *cbits ;
   uschar const   *ctypes ;
};
# 317
typedef struct compile_data compile_data;
# 327
struct match_data {
   int errorcode ;
   int *offset_vector ;
   int offset_end ;
   int offset_max ;
   uschar const   *lcc ;
   uschar const   *ctypes ;
   BOOL offset_overflow ;
   BOOL notbol ;
   BOOL noteol ;
   BOOL utf8 ;
   BOOL endonly ;
   BOOL notempty ;
   uschar const   *start_pattern ;
   uschar const   *start_subject ;
   uschar const   *end_subject ;
   uschar const   *start_match ;
   uschar const   *end_match_ptr ;
   int end_offset_top ;
};
# 327
typedef struct match_data match_data;
# 163 "pcre/pcre.c"
struct eptrblock {
   struct eptrblock *prev ;
   uschar const   *saved_eptr ;
};
# 163
typedef struct eptrblock eptrblock;
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
# 1 "actions.c"
char const   actions_rcs[56]   = 
# 1
  {'$', 'I', 'd', ':', ' ', 'a', 'c', 't', 'i', 'o', 'n', 's', '.', 'c', ',',
   'v', ' ', '1', '.', '3', '2', '.', '2', '.', '4', ' ', '2', '0', '0', '3',
   '/', '1', '2', '/', '0', '3', ' ', '1', '0', ':', '3', '3', ':', '1', '1',
   ' ', 'o', 'e', 's', ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 432 "/usr/include/libio.h"
extern int _IO_getc(_IO_FILE *__fp ) ;
# 171 "/users/rupak/ccured/include/ccured_GNUCC.patch"
extern FILE *get_stderr(void) ;
# 202 "/usr/include/stdio.h"
extern int fclose(FILE *__stream ) ;
# 204
extern int fflush(FILE *__stream ) ;
# 221
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes ) ;
# 276
extern void setbuf(FILE * __restrict  __stream , char * __restrict  __buf ) ;
# 297
extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
# 300
extern int printf(char const   * __restrict  __format  , ...) ;
# 302
extern int sprintf(char * __restrict  __s , char const   * __restrict  __format 
                   , ...) ;
# 319
extern int snprintf(char * __restrict  __s , size_t __maxlen ,
                    char const   * __restrict  __format  , ...) ;
# 358
extern int sscanf(char const   * __restrict  __s ,
                  char const   * __restrict  __format  , ...) ;
# 442
extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;
# 479
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
# 487
extern int ungetc(int __c , FILE *__stream ) ;
# 594
extern void perror(char const   *__s ) ;
# 264 "/users/rupak/ccured/include/ccured_GNUCC.patch"
extern void __ccured_va_start(__ccured_va_list  , unsigned long  ) ;
# 265
extern void *__ccured_va_arg(__ccured_va_list  , unsigned int  , int  ) ;
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
# 38 "/users/rupak/ccured/include/gcc_3.2/string.h"
extern void *memcpy(void * __restrict  __dest ,
                    void const   * __restrict  __src , size_t __n ) ;
# 42
extern void *memmove(void *__dest , void const   *__src , size_t __n ) ;
# 58
extern void *memset(void *__s , int __c , size_t __n ) ;
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
# 183
extern char *strpbrk(char const   *__s , char const   *__accept )  __attribute__((__pure__)) ;
# 336 "/users/rupak/ccured/include/ccured_GNUCC.patch"
extern char * __attribute__((__rostring__,
__nullterm__)) strstr(char const   * __attribute__((__rostring__,
                      __nullterm__)) __haystack ,
                      char const   * __attribute__((__rostring__,
                      __nullterm__)) __needle ) ;
# 230 "/usr/include/string.h"
extern size_t strlen(char const   *__s )  __attribute__((__pure__)) ;
# 243
extern char *strerror(int __errnum ) ;
# 287
extern int strcasecmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__)) ;
# 291
extern int strncasecmp(char const   *__s1 , char const   *__s2 , size_t __n )  __attribute__((__pure__)) ;
# 110 "/users/rupak/ccured/include/gcc_3.2/malloc.h"
extern void *malloc(size_t __size )  __attribute__((__malloc__)) ;
# 539 "/users/rupak/ccured/include/ccured_GNUCC.patch"
extern void *realloc(void *__ptr , size_t __size ) ;
# 123 "/usr/include/malloc.h"
extern void free(void *__ptr ) ;
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
# 138 "/users/rupak/ccured/include/string_wrappers.h"
char *strrchr_wrapper(char const   *s , int chr ) 
{ char *result ;
  char *tmp ;
  char *tmp___0 ;

  {
  {
# 141
  tmp = __stringof(s);
# 141
  result = strrchr((char const   *)tmp, chr);
# 142
  tmp___0 = (char *)__mkptr((void */* __attribute__((__safe__)) */)((void *)result),
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
# 144 "/users/rupak/ccured/include/gcc_3.2/stdlib.h"
extern int atoi(char const   *__nptr )  __attribute__((__pure__)) ;
# 48 "/users/rupak/ccured/include/time_wrappers.h"
extern time_t time(time_t *t ) ;
# 106 "/usr/include/sys/select.h"
extern int select(int __nfds , fd_set * __restrict  __readfds ,
                  fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds ,
                  struct timeval * __restrict  __timeout ) ;
# 612 "/usr/include/stdlib.h"
extern void exit(int __status )  __attribute__((__noreturn__)) ;
# 637
extern int putenv(char *__string ) ;
# 742
extern int abs(int __x )  __attribute__((__const__)) ;
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
# 254 "/users/rupak/ccured/include/string_wrappers.h"
static char const   *saved_str   = (char const   *)((void *)0);
# 68 "/usr/include/assert.h"
extern void __assert_fail(char const   *__assertion , char const   *__file ,
                          unsigned int __line , char const   *__function )  __attribute__((__noreturn__)) ;
# 197 "/users/rupak/ccured/include/gcc_3.2/time.h"
extern size_t strftime(char * __restrict  __s , size_t __maxsize ,
                       char const   * __restrict  __format ,
                       struct tm  const  * __restrict  __tp ) ;
# 239
extern struct tm *gmtime_r(time_t const   * __restrict  __timer ,
                           struct tm * __restrict  __tp ) ;
# 244
extern struct tm *localtime_r(time_t const   * __restrict  __timer ,
                              struct tm * __restrict  __tp ) ;
# 84 "pcre/pcre.h"
void *(*pcre_malloc)(size_t  ) ;
# 85
void (*pcre_free)(void * ) ;
# 91
pcre *pcre_compile(char const   *pattern , int options ,
                   char const   **errorptr , int *erroroffset ,
                   unsigned char const   *tables ) ;
# 94
int pcre_exec(pcre const   *external_re , pcre_extra const   *external_extra ,
              char const   *subject , int length , int start_offset ,
              int options , int *offsets , int offsetcount ) ;
# 100
int pcre_info(pcre const   *external_re , int *optptr , int *first_char ) ;
# 101
int pcre_fullinfo(pcre const   *external_re , pcre_extra const   *study_data ,
                  int what , void *where ) ;
# 103
pcre_extra *pcre_study(pcre const   *external_re , int options ,
                       char const   **errorptr ) ;
# 148 "pcrs.h"
pcrs_job *pcrs_compile_command(char const   *command , int *errptr ) ;
# 149
pcrs_job *pcrs_compile(char const   *pattern , char const   *substitute ,
                       char const   *options , int *errptr ) ;
# 150
int pcrs_execute(pcrs_job *job , char *subject , size_t subject_length ,
                 char **result , size_t *result_length ) ;
# 154
pcrs_job *pcrs_free_job(pcrs_job *job ) ;
# 155
void pcrs_free_joblist(pcrs_job *joblist ) ;
# 79 "pcre/pcreposix.h"
int regcomp(regex_t *preg , char const   *pattern , int cflags ) ;
# 80
int regexec(regex_t *preg , char const   *string , size_t nmatch ,
            regmatch_t *pmatch , int eflags ) ;
# 81
size_t regerror(int errcode , regex_t const   *preg , char *errbuf ,
                size_t errbuf_size ) ;
# 82
void regfree(regex_t *preg ) ;
# 108 "jcc.h"
int urls_read ;
# 109
int urls_rejected ;
# 112
struct client_state clients[1]  ;
# 113
struct file_list files[1]  ;
# 116
char const   *pidfile ;
# 118
int no_daemon ;
# 140
extern char const   jcc_rcs[53] ;
# 141
char const   jcc_h_rcs[63] ;
# 121 "list.h"
void destroy_list(struct list *the_list ) ;
# 123
jb_err enlist(struct list *the_list , char const   *str ) ;
# 124
jb_err enlist_unique(struct list *the_list , char const   *str ,
                     size_t num_significant_chars ) ;
# 125
jb_err enlist_unique_header(struct list *the_list , char const   *name ,
                            char const   *value ) ;
# 126
jb_err enlist_first(struct list *the_list , char const   *str ) ;
# 127
jb_err list_append_list_unique(struct list *dest , struct list  const  *src ) ;
# 128
jb_err list_duplicate(struct list *dest , struct list  const  *src ) ;
# 130
int list_remove_item(struct list *the_list , char const   *str ) ;
# 131
int list_remove_list(struct list *dest , struct list  const  *src ) ;
# 132
void list_remove_all(struct list *the_list ) ;
# 134
int list_is_empty(struct list  const  *the_list ) ;
# 136
char *list_to_text(struct list  const  *the_list ) ;
# 148
struct map *new_map(void) ;
# 149
void free_map(struct map *the_map ) ;
# 151
jb_err map(struct map *the_map , char const   *name , int name_needs_copying ,
           char const   *value , int value_needs_copying ) ;
# 154
jb_err unmap(struct map *the_map , char const   *name ) ;
# 156
char const   *lookup(struct map  const  *the_map , char const   *name ) ;
# 160
extern char const   list_rcs[53] ;
# 161
char const   list_h_rcs[53] ;
# 116 "actions.h"
jb_err get_actions(char *line , struct action_alias *alias_list ,
                   struct action_spec *cur_action ) ;
# 119
void free_alias_list(struct action_alias *alias_list ) ;
# 121
void init_action(struct action_spec *dest ) ;
# 122
void free_action(struct action_spec *src ) ;
# 123
jb_err merge_actions(struct action_spec *dest , struct action_spec  const  *src ) ;
# 125
jb_err copy_action(struct action_spec *dest , struct action_spec  const  *src ) ;
# 127
char *actions_to_text(struct action_spec *action ) ;
# 128
char *actions_to_html(struct client_state *csp , struct action_spec *action ) ;
# 130
void init_current_action(struct current_action_spec *dest ) ;
# 131
void free_current_action(struct current_action_spec *src ) ;
# 132
jb_err merge_current_action(struct current_action_spec *dest ,
                            struct action_spec  const  *src ) ;
# 134
char *current_action_to_html(struct client_state *csp ,
                             struct current_action_spec *action ) ;
# 137
jb_err get_action_token(char **line , char **name , char **value ) ;
# 138
void unload_actions_file(void *file_data ) ;
# 139
int load_actions_file(struct client_state *csp ) ;
# 148
char const   actions_h_rcs[52] ;
# 149 "miscutil.h"
char const   *basedir ;
# 150
void *zalloc(size_t size ) ;
# 153
void write_pid_file(void) ;
# 156
unsigned int hash_string(char const   *s ) ;
# 158
char *safe_strerror(int err ) ;
# 160
int strcmpic(char const   *s1 , char const   *s2 ) ;
# 161
int strncmpic(char const   *s1 , char const   *s2 , size_t n ) ;
# 164
jb_err string_append(char **target_string , char const   *text_to_append ) ;
# 165
jb_err string_join(char **target_string , char *text_to_append ) ;
# 167
char *string_toupper(char const   *string ) ;
# 168
char *chomp(char *string ) ;
# 169
int simplematch(char *pattern , char *text ) ;
# 171
char *bindup(char const   *string , size_t len ) ;
# 173
char *make_path(char const   *dir , char const   *file ) ;
# 184
extern char const   miscutil_rcs[57] ;
# 185
char const   miscutil_h_rcs[53] ;
# 165 "errlog.h"
void init_error_log(char const   *prog_name , char const   *logfname ,
                    int debuglevel ) ;
# 166
void log_error(int loglevel , char *fmt  , ...) ;
# 169
extern char const   errlog_rcs[66] ;
# 170
char const   errlog_h_rcs[55] ;
# 171 "loaders.h"
void sweep(void) ;
# 172
char *read_config_line(char *buf , size_t buflen , FILE *fp ,
                       unsigned long *linenum ) ;
# 173
int check_file_changed(struct file_list  const  *current ,
                       char const   *filename , struct file_list **newfl ) ;
# 177
jb_err edit_read_line(FILE *fp , char **raw_out , char **prefix_out ,
                      char **data_out , int *newline ,
                      unsigned long *line_number ) ;
# 184
jb_err simple_read_line(FILE *fp , char **dest , int *newline ) ;
# 206
int load_re_filterfile(struct client_state *csp ) ;
# 209
int load_trustfile(struct client_state *csp ) ;
# 220
void add_loader(int (*loader)(struct client_state * ) ,
                struct configuration_spec *config ) ;
# 222
int run_loader(struct client_state *csp ) ;
# 225
extern char const   loaders_rcs[56] ;
# 226
char const   loaders_h_rcs[52] ;
# 64 "encode.h"
char *html_encode(char const   *s ) ;
# 65
char *cookie_encode(char const   *s ) ;
# 66
char *url_encode(char const   *s ) ;
# 67
char *url_decode(char const   *s ) ;
# 69
char *html_encode_and_free_original(char *s ) ;
# 72
extern char const   encode_rcs[50] ;
# 73
char const   encode_h_rcs[50] ;
# 71 "urlmatch.h"
void free_http_request(struct http_request *http ) ;
# 72
jb_err parse_http_request(char const   *req , struct http_request *http ,
                          struct client_state *csp ) ;
# 75
jb_err parse_http_url(char const   *url , struct http_request *http ,
                      struct client_state *csp ) ;
# 79
int url_match(struct url_spec  const  *pattern ,
              struct http_request  const  *url ) ;
# 82
jb_err create_url_spec(struct url_spec *url , char const   *buf ) ;
# 83
void free_url_spec(struct url_spec *url ) ;
# 87
extern char const   urlmatch_rcs[57] ;
# 88
char const   urlmatch_h_rcs[52] ;
# 180 "cgi.h"
struct http_response *dispatch_cgi(struct client_state *csp ) ;
# 183
struct http_response *error_response(struct client_state *csp ,
                                     char const   *templatename , int sys_err ) ;
# 190
struct http_response *alloc_http_response(void) ;
# 191
void free_http_response(struct http_response *rsp ) ;
# 193
struct http_response *finish_http_response(struct http_response *rsp ) ;
# 195
struct map *default_exports(struct client_state  const  *csp ,
                            char const   *caller ) ;
# 197
jb_err map_block_killer(struct map *exports , char const   *name ) ;
# 198
jb_err map_block_keep(struct map *exports , char const   *name ) ;
# 199
jb_err map_conditional(struct map *exports , char const   *name ,
                       int choose_first ) ;
# 201
jb_err template_load(struct client_state *csp , char **template_ptr ,
                     char const   *templatename , int recursive ) ;
# 203
jb_err template_fill(char **template_ptr , struct map  const  *exports ) ;
# 204
jb_err template_fill_for_cgi(struct client_state *csp ,
                             char const   *templatename , struct map *exports ,
                             struct http_response *rsp ) ;
# 209
void cgi_init_error_messages(void) ;
# 210
struct http_response *cgi_error_memory(void) ;
# 211
jb_err cgi_redirect(struct http_response *rsp , char const   *target ) ;
# 213
jb_err cgi_error_no_template(struct client_state *csp ,
                             struct http_response *rsp ,
                             char const   *template_name ) ;
# 216
jb_err cgi_error_bad_param(struct client_state *csp , struct http_response *rsp ) ;
# 218
jb_err cgi_error_unknown(struct client_state *csp , struct http_response *rsp ,
                         jb_err error_to_report ) ;
# 222
jb_err get_number_param(struct client_state *csp ,
                        struct map  const  *parameters , char *name ,
                        unsigned int *pvalue ) ;
# 226
jb_err get_string_param(struct map  const  *parameters ,
                        char const   *param_name , char const   **pparam ) ;
# 229
char get_char_param(struct map  const  *parameters , char const   *param_name ) ;
# 235
void get_http_time(int time_offset , char *buf ) ;
# 236
char *add_help_link(char const   *item , struct configuration_spec *config ) ;
# 237
char *make_menu(char const   *self ) ;
# 243
char const   image_pattern_data[65] ;
# 244
unsigned int image_pattern_length ;
# 245
char const   image_blank_data[44] ;
# 246
unsigned int image_blank_length ;
# 249
extern char const   cgi_rcs[53] ;
# 250
char const   cgi_h_rcs[52] ;
# 63 "ssplit.h"
int ssplit(char *str , char const   *delim , char **vec , int vec_len ,
           int dont_save_empty_fields , int ignore_leading ) ;
# 67
extern char const   ssplit_rcs[50] ;
# 68
char const   ssplit_h_rcs[50] ;
# 216 "actions.c"
char const   actions_h_rcs[52]   = 
# 216
  {'$', 'I', 'd', ':', ' ', 'a', 'c', 't', 'i', 'o', 'n', 's', '.', 'h', ',',
   'v', ' ', '1', '.', '1', '2', ' ', '2', '0', '0', '2', '/', '0', '5', '/',
   '0', '6', ' ', '0', '7', ':', '5', '6', ':', '5', '0', ' ', 'o', 'e', 's',
   ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 251
static struct action_name  const  action_names[79]   = 
# 251
  {{(char const   *)"+add-header", ~ 0UL, 0UL, 3, 0},
   {(char const   *)"-add-header", ~ 0UL, 0UL, 4, 0},
   {(char const   *)"+block", ~ 0UL, 1UL, 0, 0},
   {(char const   *)"-block", ~ 1UL, 0UL, 0, 0},
   {(char const   *)"+crunch-incoming-cookies", ~ 0UL, 8192UL, 0, 0},
   {(char const   *)"-crunch-incoming-cookies", ~ 8192UL, 0UL, 0, 0},
   {(char const   *)"+crunch-outgoing-cookies", ~ 0UL, 4096UL, 0, 0},
   {(char const   *)"-crunch-outgoing-cookies", ~ 4096UL, 0UL, 0, 0},
   {(char const   *)"+deanimate-gifs", ~ 0UL, 2UL, 1, 0},
   {(char const   *)"-deanimate-gifs", ~ 2UL, 0UL, 2, 0},
   {(char const   *)"+downgrade-http-version", ~ 0UL, 4UL, 0, 0},
   {(char const   *)"-downgrade-http-version", ~ 4UL, 0UL, 0, 0},
   {(char const   *)"+fast-redirects", ~ 0UL, 8UL, 0, 0},
   {(char const   *)"-fast-redirects", ~ 8UL, 0UL, 0, 0},
   {(char const   *)"+filter", ~ 0UL, 0UL, 3, 2},
   {(char const   *)"-filter", ~ 0UL, 0UL, 4, 2},
   {(char const   *)"+handle-as-image", ~ 0UL, 256UL, 0, 0},
   {(char const   *)"-handle-as-image", ~ 256UL, 0UL, 0, 0},
   {(char const   *)"+hide-forwarded-for-headers", ~ 0UL, 16UL, 0, 0},
   {(char const   *)"-hide-forwarded-for-headers", ~ 16UL, 0UL, 0, 0},
   {(char const   *)"+hide-from-header", ~ 0UL, 32UL, 1, 1},
   {(char const   *)"-hide-from-header", ~ 32UL, 0UL, 2, 1},
   {(char const   *)"+hide-referrer", ~ 0UL, 64UL, 1, 3},
   {(char const   *)"-hide-referrer", ~ 64UL, 0UL, 2, 3},
   {(char const   *)"+hide-user-agent", ~ 0UL, 128UL, 1, 4},
   {(char const   *)"-hide-user-agent", ~ 128UL, 0UL, 2, 4},
   {(char const   *)"+kill-popups", ~ 0UL, 16384UL, 0, 0},
   {(char const   *)"-kill-popups", ~ 16384UL, 0UL, 0, 0},
   {(char const   *)"+limit-connect", ~ 0UL, 65536UL, 1, 5},
   {(char const   *)"-limit-connect", ~ 65536UL, 0UL, 2, 5},
   {(char const   *)"+prevent-compression", ~ 0UL, 1024UL, 0, 0},
   {(char const   *)"-prevent-compression", ~ 1024UL, 0UL, 0, 0},
   {(char const   *)"+send-vanilla-wafer", ~ 0UL, 32768UL, 0, 0},
   {(char const   *)"-send-vanilla-wafer", ~ 32768UL, 0UL, 0, 0},
   {(char const   *)"+send-wafer", ~ 0UL, 0UL, 3, 1},
   {(char const   *)"-send-wafer", ~ 0UL, 0UL, 4, 1},
   {(char const   *)"+session-cookies-only", ~ 0UL, 2048UL, 0, 0},
   {(char const   *)"-session-cookies-only", ~ 2048UL, 0UL, 0, 0},
   {(char const   *)"+set-image-blocker", ~ 0UL, 512UL, 1, 2},
   {(char const   *)"-set-image-blocker", ~ 512UL, 0UL, 2, 2},
   {(char const   *)"+kill-popup", ~ 0UL, 16384UL, 0, 0},
   {(char const   *)"-kill-popup", ~ 16384UL, 0UL, 0, 0},
   {(char const   *)"+hide-referer", ~ 0UL, 64UL, 1, 3},
   {(char const   *)"-hide-referer", ~ 64UL, 0UL, 2, 3},
   {(char const   *)"+prevent-keeping-cookies", ~ 0UL, 2048UL, 0, 0},
   {(char const   *)"-prevent-keeping-cookies", ~ 2048UL, 0UL, 0, 0},
   {(char const   *)"+no-cookie-read", ~ 0UL, 4096UL, 0, 0},
   {(char const   *)"-no-cookie-read", ~ 4096UL, 0UL, 0, 0},
   {(char const   *)"+no-cookie-set", ~ 0UL, 8192UL, 0, 0},
   {(char const   *)"-no-cookie-set", ~ 8192UL, 0UL, 0, 0},
   {(char const   *)"+prevent-reading-cookies", ~ 0UL, 4096UL, 0, 0},
   {(char const   *)"-prevent-reading-cookies", ~ 4096UL, 0UL, 0, 0},
   {(char const   *)"+prevent-setting-cookies", ~ 0UL, 8192UL, 0, 0},
   {(char const   *)"-prevent-setting-cookies", ~ 8192UL, 0UL, 0, 0},
   {(char const   *)"+downgrade", ~ 0UL, 4UL, 0, 0},
   {(char const   *)"-downgrade", ~ 4UL, 0UL, 0, 0},
   {(char const   *)"+hide-forwarded", ~ 0UL, 16UL, 0, 0},
   {(char const   *)"-hide-forwarded", ~ 16UL, 0UL, 0, 0},
   {(char const   *)"+hide-from", ~ 0UL, 32UL, 1, 1},
   {(char const   *)"-hide-from", ~ 32UL, 0UL, 2, 1},
   {(char const   *)"+image", ~ 0UL, 256UL, 0, 0},
   {(char const   *)"-image", ~ 256UL, 0UL, 0, 0},
   {(char const   *)"+image-blocker", ~ 0UL, 512UL, 1, 2},
   {(char const   *)"-image-blocker", ~ 512UL, 0UL, 2, 2},
   {(char const   *)"+no-compression", ~ 0UL, 1024UL, 0, 0},
   {(char const   *)"-no-compression", ~ 1024UL, 0UL, 0, 0},
   {(char const   *)"+no-cookies-keep", ~ 0UL, 2048UL, 0, 0},
   {(char const   *)"-no-cookies-keep", ~ 2048UL, 0UL, 0, 0},
   {(char const   *)"+no-cookies-read", ~ 0UL, 4096UL, 0, 0},
   {(char const   *)"-no-cookies-read", ~ 4096UL, 0UL, 0, 0},
   {(char const   *)"+no-cookies-set", ~ 0UL, 8192UL, 0, 0},
   {(char const   *)"-no-cookies-set", ~ 8192UL, 0UL, 0, 0},
   {(char const   *)"+no-popups", ~ 0UL, 16384UL, 0, 0},
   {(char const   *)"-no-popups", ~ 16384UL, 0UL, 0, 0},
   {(char const   *)"+vanilla-wafer", ~ 0UL, 32768UL, 0, 0},
   {(char const   *)"-vanilla-wafer", ~ 32768UL, 0UL, 0, 0},
   {(char const   *)"+wafer", ~ 0UL, 0UL, 3, 1},
   {(char const   *)"-wafer", ~ 0UL, 0UL, 4, 1},
   {(char const   *)((void *)0), 0UL, 0UL, 0, 0}};
# 281
static int load_one_actions_file(struct client_state *csp , int fileid ) ;
# 298
jb_err merge_actions(struct action_spec *dest , struct action_spec  const  *src ) 
{ int i ;
  jb_err err ;
  char *str ;

  {
  {
# 304
  dest->mask &= src->mask;
# 305
  dest->add &= src->mask;
# 306
  dest->add |= src->add;
# 308
  i = 0;
  }
# 308
  while (i < 6) {
    {
# 310
    str = src->string[i];
    }
# 311
    if (str) {
# 313
      if (dest->string[i]) {
        {
# 313
        free((void *)dest->string[i]);
# 313
        dest->string[i] = (char *)((void *)0);
        }
      }
      {
# 314
      dest->string[i] = strdup((char const   *)str);
      }
# 315
      if ((unsigned int )((void *)0) == (unsigned int )dest->string[i]) {
# 317
        return (1);
      }
    }
    {
# 308
    i ++;
    }
  }
  {
# 322
  i = 0;
  }
# 322
  while (i < 3) {
# 324
    if (src->multi_remove_all[i]) {
      {
# 327
      list_remove_all(dest->multi_remove[i]);
# 328
      dest->multi_remove_all[i] = 1;
# 330
      err = list_duplicate(dest->multi_add[i],
                           (struct list  const  *)(src->multi_add[i]));
      }
    } else {
# 332
      if (dest->multi_remove_all[i]) {
        {
# 338
        list_remove_list(dest->multi_add[i],
                         (struct list  const  *)(src->multi_remove[i]));
# 339
        err = list_append_list_unique(dest->multi_add[i],
                                      (struct list  const  *)(src->multi_add[i]));
        }
      } else {
        {
# 344
        list_remove_list(dest->multi_add[i],
                         (struct list  const  *)(src->multi_remove[i]));
# 345
        err = list_append_list_unique(dest->multi_remove[i],
                                      (struct list  const  *)(src->multi_remove[i]));
        }
# 346
        if (! err) {
          {
# 346
          err = list_append_list_unique(dest->multi_add[i],
                                        (struct list  const  *)(src->multi_add[i]));
          }
        }
      }
    }
# 349
    if (err) {
# 351
      return (err);
    }
    {
# 322
    i ++;
    }
  }
# 355
  return (0);
}
}
# 373
jb_err copy_action(struct action_spec *dest , struct action_spec  const  *src ) 
{ int i ;
  jb_err err ;
  char *str ;

  {
  {
# 377
  err = 0;
# 379
  free_action(dest);
# 380
  memset((void *)dest, (int )'\0', sizeof((*dest)));
# 382
  dest->mask = src->mask;
# 383
  dest->add = src->add;
# 385
  i = 0;
  }
# 385
  while (i < 6) {
    {
# 387
    str = src->string[i];
    }
# 388
    if (str) {
      {
# 390
      str = strdup((char const   *)str);
      }
# 391
      if (! str) {
# 393
        return (1);
      }
      {
# 395
      dest->string[i] = str;
      }
    }
    {
# 385
    i ++;
    }
  }
  {
# 399
  i = 0;
  }
# 399
  while (i < 3) {
    {
# 401
    dest->multi_remove_all[i] = src->multi_remove_all[i];
# 402
    err = list_duplicate(dest->multi_remove[i],
                         (struct list  const  *)(src->multi_remove[i]));
    }
# 403
    if (err) {
# 405
      return (err);
    }
    {
# 407
    err = list_duplicate(dest->multi_add[i],
                         (struct list  const  *)(src->multi_add[i]));
    }
# 408
    if (err) {
# 410
      return (err);
    }
    {
# 399
    i ++;
    }
  }
# 413
  return (err);
}
}
# 431
void free_action(struct action_spec *src ) 
{ int i ;

  {
# 435
  if ((unsigned int )src == (unsigned int )((void *)0)) {
# 437
    return;
  }
  {
# 440
  i = 0;
  }
# 440
  while (i < 6) {
# 442
    if (src->string[i]) {
      {
# 442
      free((void *)src->string[i]);
# 442
      src->string[i] = (char *)((void *)0);
      }
    }
    {
# 440
    i ++;
    }
  }
  {
# 445
  i = 0;
  }
# 445
  while (i < 3) {
    {
# 447
    destroy_list(src->multi_remove[i]);
# 448
    destroy_list(src->multi_add[i]);
# 445
    i ++;
    }
  }
  {
# 451
  memset((void *)src, (int )'\0', sizeof((*src)));
  }
# 452
  return;
}
}
# 482
jb_err get_action_token(char **line , char **name , char **value ) 
{ char *str ;
  char ch ;

  {
  {
# 484
  str = (*line);
# 488
  (*line) = (char *)((void *)0);
# 489
  (*name) = (char *)((void *)0);
# 490
  (*value) = (char *)((void *)0);
  }
# 493
  while (1) {
# 493
    if (! ((int )(*str) == 32)) {
# 493
      if (! ((int )(*str) == 9)) {
# 493
        break;
      }
    }
    {
# 495
    str ++;
    }
  }
# 498
  if ((int )(*str) == 0) {
# 500
    return (0);
  }
# 503
  if ((int )(*str) == 123) {
# 506
    return (4);
  }
  {
# 509
  (*name) = str;
  }
# 512
  while (1) {
    {
# 512
    ch = (*str);
    }
# 512
    if ((int )ch != 0) {
# 512
      if ((int )ch != 32) {
# 512
        if ((int )ch != 9) {
# 512
          if (! ((int )ch != 123)) {
# 512
            break;
          }
        } else {
# 512
          break;
        }
      } else {
# 512
        break;
      }
    } else {
# 512
      break;
    }
# 515
    if ((int )ch == 125) {
# 518
      return (4);
    }
    {
# 520
    str ++;
    }
  }
  {
# 522
  (*str) = '\0';
  }
# 524
  if ((int )ch != 123) {
# 527
    if ((int )ch == 0) {
      {
# 530
      (*line) = str;
      }
    } else {
      {
# 535
      (*line) = str + 1;
      }
    }
# 537
    return (0);
  }
  {
# 540
  str ++;
# 541
  (*value) = str;
# 543
  str = strchr((char const   *)str, (int )'}');
  }
# 544
  if ((unsigned int )str == (unsigned int )((void *)0)) {
    {
# 547
    (*value) = (char *)((void *)0);
    }
# 548
    return (4);
  }
  {
# 552
  (*str) = '\0';
# 553
  (*line) = str + 1;
# 555
  chomp((*value));
  }
# 557
  return (0);
}
}
# 579
jb_err get_actions(char *line , struct action_alias *alias_list ,
                   struct action_spec *cur_action ) 
{ jb_err err ;
  char *option ;
  char *value ;
  struct action_name  const  *action ;
  int tmp ;
  struct list *remove_p ;
  struct list *add_p ;
  struct list *remove_p___0 ;
  struct list *add_p___0 ;
  struct action_alias  const  *alias ;
  int tmp___0 ;

  {
  {
# 584
  init_action(cur_action);
# 585
  cur_action->mask = ~ 0UL;
  }
# 587
  while (line) {
    {
# 589
    option = (char *)((void *)0);
# 590
    value = (char *)((void *)0);
# 592
    err = get_action_token(& line, & option, & value);
    }
# 593
    if (err) {
# 595
      return (err);
    }
# 598
    if (option) {
      {
# 603
      action = action_names;
      }
# 605
      while (1) {
# 605
        if ((unsigned int )action->name != (unsigned int )((void *)0)) {
          {
# 605
          tmp = strcmpic(action->name, (char const   *)option);
          }
# 605
          if (! (0 != tmp)) {
# 605
            break;
          }
        } else {
# 605
          break;
        }
        {
# 607
        action ++;
        }
      }
# 609
      if ((unsigned int )action->name != (unsigned int )((void *)0)) {
        {
# 612
        cur_action->mask &= action->mask;
# 613
        cur_action->add &= action->mask;
# 614
        cur_action->add |= action->add;
        }
# 616
        switch (action->takes_value) {
        case 0: 
        {

        }
# 620
        break;
        case 1: 
        {

        }
# 625
        if ((unsigned int )value == (unsigned int )((void *)0)) {
# 627
          return (4);
        } else {
# 625
          if ((int )(*value) == 0) {
# 627
            return (4);
          }
        }
# 630
        if (cur_action->string[action->index]) {
          {
# 630
          free((void *)cur_action->string[action->index]);
# 630
          cur_action->string[action->index] = (char *)((void *)0);
          }
        }
        {
# 631
        cur_action->string[action->index] = strdup((char const   *)value);
        }
# 632
        if ((unsigned int )((void *)0) ==
            (unsigned int )cur_action->string[action->index]) {
# 634
          return (1);
        }
# 636
        break;
        case 2: 
        {

        }
# 642
        if (cur_action->string[action->index]) {
          {
# 642
          free((void *)cur_action->string[action->index]);
# 642
          cur_action->string[action->index] = (char *)((void *)0);
          }
        }
# 643
        break;
        case 3: 
        {
# 649
        remove_p = cur_action->multi_remove[action->index];
# 650
        add_p = cur_action->multi_add[action->index];
        }
# 652
        if ((unsigned int )value == (unsigned int )((void *)0)) {
# 654
          return (4);
        } else {
# 652
          if ((int )(*value) == 0) {
# 654
            return (4);
          }
        }
        {
# 657
        list_remove_item(remove_p, (char const   *)value);
# 658
        err = enlist_unique(add_p, (char const   *)value, 0U);
        }
# 659
        if (err) {
# 661
          return (err);
        }
# 663
        break;
        case 4: 
        {
# 669
        remove_p___0 = cur_action->multi_remove[action->index];
# 670
        add_p___0 = cur_action->multi_add[action->index];
        }
# 672
        if ((unsigned int )value == (unsigned int )((void *)0)) {
          {
# 680
          list_remove_all(remove_p___0);
# 681
          list_remove_all(add_p___0);
# 682
          cur_action->multi_remove_all[action->index] = 1;
          }
        } else {
# 672
          if ((int )(*value) == 0) {
            {
# 680
            list_remove_all(remove_p___0);
# 681
            list_remove_all(add_p___0);
# 682
            cur_action->multi_remove_all[action->index] = 1;
            }
          } else {
# 672
            if ((int )(*value) == 42) {
# 672
              if ((int )(*(value + 1)) == 0) {
                {
# 680
                list_remove_all(remove_p___0);
# 681
                list_remove_all(add_p___0);
# 682
                cur_action->multi_remove_all[action->index] = 1;
                }
              } else {
                goto _L;
              }
            } else {
              _L: 
# 688
              if (! cur_action->multi_remove_all[action->index]) {
                {
# 691
                err = enlist_unique(remove_p___0, (char const   *)value, 0U);
                }
# 692
                if (err) {
# 694
                  return (err);
                }
              }
              {
# 697
              list_remove_item(add_p___0, (char const   *)value);
              }
            }
          }
        }
# 699
        break;
        default: 
        {
# 703
        __assert_fail((char const   *)"0", (char const   *)"actions.c", 703U,
                      (char const   *)"get_actions");
        }
# 704
        return (4);
        }
      } else {
        {
# 710
        alias = (struct action_alias  const  *)alias_list;
        }
# 712
        while (1) {
# 712
          if ((unsigned int )alias != (unsigned int )((void *)0)) {
            {
# 712
            tmp___0 = strcmpic(alias->name, (char const   *)option);
            }
# 712
            if (! (0 != tmp___0)) {
# 712
              break;
            }
          } else {
# 712
            break;
          }
          {
# 714
          alias = (struct action_alias  const  *)alias->next;
          }
        }
# 716
        if ((unsigned int )alias != (unsigned int )((void *)0)) {
          {
# 719
          merge_actions(cur_action,
                        (struct action_spec  const  *)(alias->action));
          }
        } else {
# 724
          return (4);
        }
      }
    }
  }
# 730
  return (0);
}
}
# 746
void init_current_action(struct current_action_spec *dest ) 
{ 

  {
  {
# 748
  memset((void *)dest, (int )'\0', sizeof((*dest)));
# 750
  dest->flags = 0UL;
  }
# 751
  return;
}
}
# 766
void init_action(struct action_spec *dest ) 
{ 

  {
  {
# 768
  memset((void *)dest, (int )'\0', sizeof((*dest)));
  }
# 769
  return;
}
}
# 794
jb_err merge_current_action(struct current_action_spec *dest ,
                            struct action_spec  const  *src ) 
{ int i ;
  jb_err err ;
  char *str ;

  {
  {
# 798
  err = 0;
# 800
  dest->flags &= src->mask;
# 801
  dest->flags |= src->add;
# 803
  i = 0;
  }
# 803
  while (i < 6) {
    {
# 805
    str = src->string[i];
    }
# 806
    if (str) {
      {
# 808
      str = strdup((char const   *)str);
      }
# 809
      if (! str) {
# 811
        return (1);
      }
# 813
      if (dest->string[i]) {
        {
# 813
        free((void *)dest->string[i]);
# 813
        dest->string[i] = (char *)((void *)0);
        }
      }
      {
# 814
      dest->string[i] = str;
      }
    }
    {
# 803
    i ++;
    }
  }
  {
# 818
  i = 0;
  }
# 818
  while (i < 3) {
# 820
    if (src->multi_remove_all[i]) {
      {
# 823
      err = list_duplicate(dest->multi[i],
                           (struct list  const  *)(src->multi_add[i]));
      }
# 824
      if (err) {
# 826
        return (err);
      }
    } else {
      {
# 831
      list_remove_list(dest->multi[i],
                       (struct list  const  *)(src->multi_remove[i]));
# 832
      err = list_append_list_unique(dest->multi[i],
                                    (struct list  const  *)(src->multi_add[i]));
      }
# 833
      if (err) {
# 835
        return (err);
      }
    }
    {
# 818
    i ++;
    }
  }
# 839
  return (err);
}
}
# 856
void free_current_action(struct current_action_spec *src ) 
{ int i ;

  {
  {
# 860
  i = 0;
  }
# 860
  while (i < 6) {
# 862
    if (src->string[i]) {
      {
# 862
      free((void *)src->string[i]);
# 862
      src->string[i] = (char *)((void *)0);
      }
    }
    {
# 860
    i ++;
    }
  }
  {
# 865
  i = 0;
  }
# 865
  while (i < 3) {
    {
# 867
    destroy_list(src->multi[i]);
# 865
    i ++;
    }
  }
  {
# 870
  memset((void *)src, (int )'\0', sizeof((*src)));
  }
# 871
  return;
}
}
# 874
static struct file_list *current_actions_file[10]   = 
# 874
  {(struct file_list *)((void *)0), (struct file_list *)((void *)0),
   (struct file_list *)((void *)0), (struct file_list *)((void *)0),
   (struct file_list *)((void *)0), (struct file_list *)((void *)0),
   (struct file_list *)((void *)0), (struct file_list *)((void *)0),
   (struct file_list *)((void *)0), (struct file_list *)((void *)0)};
# 922
void unload_actions_file(void *file_data ) 
{ struct url_actions *next ;
  struct url_actions *cur ;

  {
  {
# 925
  cur = (struct url_actions *)file_data;
  }
# 926
  while ((unsigned int )cur != (unsigned int )((void *)0)) {
    {
# 928
    next = cur->next;
# 929
    free_url_spec(cur->url);
# 930
    free_action(cur->action);
    }
# 931
    if (cur) {
      {
# 931
      free((void *)cur);
# 931
      cur = (struct url_actions *)((void *)0);
      }
    }
    {
# 932
    cur = next;
    }
  }
# 935
  return;
}
}
# 950
void free_alias_list(struct action_alias *alias_list ) 
{ struct action_alias *next ;

  {
# 952
  while ((unsigned int )alias_list != (unsigned int )((void *)0)) {
    {
# 954
    next = alias_list->next;
# 955
    alias_list->next = (struct action_alias *)((void *)0);
    }
# 956
    if (alias_list->name) {
      {
# 956
      free((void *)alias_list->name);
# 956
      alias_list->name = (char const   *)((void *)0);
      }
    }
    {
# 957
    free_action(alias_list->action);
# 958
    free((void *)alias_list);
# 959
    alias_list = next;
    }
  }
# 961
  return;
}
}
# 977
int load_actions_file(struct client_state *csp ) 
{ int i ;
  int result ;

  {
  {
# 982
  i = 0;
  }
# 982
  while (i < 10) {
# 984
    if ((csp->config)->actions_file[i]) {
      {
# 986
      result = load_one_actions_file(csp, i);
      }
# 987
      if (result) {
# 989
        return (result);
      }
    } else {
# 992
      if (current_actions_file[i]) {
        {
# 994
        (current_actions_file[i])->unloader = & unload_actions_file;
# 995
        current_actions_file[i] = (struct file_list *)((void *)0);
        }
      }
    }
    {
# 982
    i ++;
    }
  }
# 999
  return (0);
}
}
# 1016
static int load_one_actions_file(struct client_state *csp , int fileid ) 
{ int mode ;
  FILE *fp ;
  struct url_actions *last_perm ;
  struct url_actions *perm ;
  char buf[5000] ;
  struct file_list *fs ;
  struct action_spec *cur_action ;
  int cur_action_used ;
  struct action_alias *alias_list ;
  unsigned long linenum ;
  int tmp ;
  int len ;
  int tmp___1 ;
  char *start ;
  char *end ;
  char *tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  char actions_buf[5000] ;
  char *end___0 ;
  size_t tmp___8 ;
  jb_err tmp___9 ;
  char *version_string ;
  char *fields[3] ;
  int num_fields ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  char actions_buf___0[5000] ;
  struct action_alias *new_alias ;
  char *start___0 ;
  char *tmp___15 ;
  char *end___1 ;
  jb_err tmp___16 ;
  jb_err tmp___17 ;
  char *tmp___18 ;

  {
  {
# 1030
  mode = 1;
# 1037
  cur_action = (struct action_spec *)((void *)0);
# 1038
  cur_action_used = 0;
# 1039
  alias_list = (struct action_alias *)((void *)0);
# 1040
  linenum = 0UL;
# 1042
  tmp = check_file_changed((struct file_list  const  *)current_actions_file[fileid],
                           (csp->config)->actions_file[fileid], & fs);
  }
# 1042
  if (! tmp) {
    {
# 1045
    csp->actions_list[fileid] = current_actions_file[fileid];
    }
# 1046
    return (0);
  }
# 1048
  if (! fs) {
    {
# 1050
    log_error(16384, "can\'t load actions file \'%s\': error finding file: %E",
              (csp->config)->actions_file[fileid]);
    }
# 1052
    return (1);
  }
  {
# 1055
  last_perm = (struct url_actions *)zalloc(sizeof((*last_perm)));
# 1055
  fs->f = (void *)last_perm;
  }
# 1056
  if ((unsigned int )last_perm == (unsigned int )((void *)0)) {
    {
# 1058
    log_error(16384, "can\'t load actions file \'%s\': out of memory!",
              (csp->config)->actions_file[fileid]);
    }
# 1060
    return (1);
  }
  {
# 1063
  fp = fopen((char const   */* __restrict  */)(csp->config)->actions_file[fileid],
             (char const   */* __restrict  */)((char const   *)"r"));
  {
# 17 "spec.work"
    fp->__BLAST_FLAG = 1;
  {

  }
  }

  }
# 1063 "actions.c"
  if ((unsigned int )fp == (unsigned int )((void *)0)) {
    {
# 1065
    log_error(16384, "can\'t load actions file \'%s\': error opening file: %E",
              (csp->config)->actions_file[fileid]);
    }
# 1067
    return (1);
  }
# 1070
  while (1) {
    {
# 1070
    tmp___18 = read_config_line(buf, sizeof(buf), fp, & linenum);
    }
# 1070
    if (! ((unsigned int )tmp___18 != (unsigned int )((void *)0))) {
# 1070
      break;
    }
# 1072
    if ((int )buf[0] == 123) {
# 1075
      if ((int )buf[1] == 123) {
        {
# 1078
        tmp___1 = (int )strlen((char const   *)(buf));
# 1078
        len = tmp___1;
# 1079
        start = buf + 2;
# 1080
        end = (buf + len) - 1;
        }
# 1081
        if (len < 5) {
          {

          {
# 96 "spec.work"
          if (fp->__BLAST_FLAG == 1) {
# 97
            fp->__BLAST_FLAG = 0;
          } else {
# 98
            __error__();
          }
          {

          }
          }
# 1084 "actions.c"
          fclose(fp);
# 1085
          log_error(16384,
                    "can\'t load actions file \'%s\': invalid line (%lu): %s",
                    (csp->config)->actions_file[fileid], linenum, buf);
          }
# 1088
          return (1);
        } else {
          {
# 1081
          tmp___2 = end;
# 1081
          end --;
          }
# 1081
          if ((int )(*tmp___2) != 125) {
            {

            {
# 96 "spec.work"
            if (fp->__BLAST_FLAG == 1) {
# 97
              fp->__BLAST_FLAG = 0;
            } else {
# 98
              __error__();
            }
            {

            }
            }
# 1084 "actions.c"
            fclose(fp);
# 1085
            log_error(16384,
                      "can\'t load actions file \'%s\': invalid line (%lu): %s",
                      (csp->config)->actions_file[fileid], linenum, buf);
            }
# 1088
            return (1);
          } else {
            {
# 1081
            tmp___3 = end;
# 1081
            end --;
            }
# 1081
            if ((int )(*tmp___3) != 125) {
              {

              {
# 96 "spec.work"
              if (fp->__BLAST_FLAG == 1) {
# 97
                fp->__BLAST_FLAG = 0;
              } else {
# 98
                __error__();
              }
              {

              }
              }
# 1084 "actions.c"
              fclose(fp);
# 1085
              log_error(16384,
                        "can\'t load actions file \'%s\': invalid line (%lu): %s",
                        (csp->config)->actions_file[fileid], linenum, buf);
              }
# 1088
              return (1);
            }
          }
        }
        {
# 1092
        (*(end + 1)) = '\0';
# 1093
        chomp(start);
        }
# 1095
        if ((int )(*start) == 0) {
          {

          {
# 96 "spec.work"
          if (fp->__BLAST_FLAG == 1) {
# 97
            fp->__BLAST_FLAG = 0;
          } else {
# 98
            __error__();
          }
          {

          }
          }
# 1098 "actions.c"
          fclose(fp);
# 1099
          log_error(16384,
                    "can\'t load actions file \'%s\': invalid line (%lu): {{ }}",
                    (csp->config)->actions_file[fileid], linenum);
          }
# 1102
          return (1);
        }
        {
# 1122
        tmp___6 = strcmpic((char const   *)start, (char const   *)"settings");
        }
# 1122
        if (0 == tmp___6) {
# 1125
          if (mode >= 2) {
            {

            {
# 96 "spec.work"
            if (fp->__BLAST_FLAG == 1) {
# 97
              fp->__BLAST_FLAG = 0;
            } else {
# 98
              __error__();
            }
            {

            }
            }
# 1130 "actions.c"
            fclose(fp);
# 1131
            log_error(16384,
                      "can\'t load actions file \'%s\': line %lu: {{settings}} must only appear once, and it must be before anything else.",
                      (csp->config)->actions_file[fileid], linenum);
            }
          }
          {
# 1135
          mode = 2;
          }
        } else {
          {
# 1137
          tmp___5 = strcmpic((char const   *)start,
                             (char const   *)"description");
          }
# 1137
          if (0 == tmp___5) {
# 1140
            if (mode >= 3) {
              {

              {
# 96 "spec.work"
              if (fp->__BLAST_FLAG == 1) {
# 97
                fp->__BLAST_FLAG = 0;
              } else {
# 98
                __error__();
              }
              {

              }
              }
# 1144 "actions.c"
              fclose(fp);
# 1145
              log_error(16384,
                        "can\'t load actions file \'%s\': line %lu: {{description}} must only appear once, and only a {{settings}} block may be above it.",
                        (csp->config)->actions_file[fileid], linenum);
              }
            }
            {
# 1149
            mode = 3;
            }
          } else {
            {
# 1151
            tmp___4 = strcmpic((char const   *)start, (char const   *)"alias");
            }
# 1151
            if (0 == tmp___4) {
# 1154
              if (mode >= 4) {
                {

                {
# 96 "spec.work"
                if (fp->__BLAST_FLAG == 1) {
# 97
                  fp->__BLAST_FLAG = 0;
                } else {
# 98
                  __error__();
                }
                {

                }
                }
# 1166 "actions.c"
                fclose(fp);
# 1167
                log_error(16384,
                          "can\'t load actions file \'%s\': line %lu: {{alias}} must only appear once, and it must be before all actions.",
                          (csp->config)->actions_file[fileid], linenum);
                }
              }
              {
# 1171
              mode = 4;
              }
            } else {
              {

              {
# 96 "spec.work"
              if (fp->__BLAST_FLAG == 1) {
# 97
                fp->__BLAST_FLAG = 0;
              } else {
# 98
                __error__();
              }
              {

              }
              }
# 1176 "actions.c"
              fclose(fp);
# 1177
              log_error(16384,
                        "can\'t load actions file \'%s\': invalid line (%lu): {{%s}}",
                        (csp->config)->actions_file[fileid], linenum, start);
              }
# 1180
              return (1);
            }
          }
        }
      } else {
        {
# 1191
        mode = 5;
        }
# 1194
        if (cur_action) {
# 1196
          if (! cur_action_used) {
            {
# 1198
            free_action(cur_action);
# 1199
            free((void *)cur_action);
            }
          }
          {
# 1201
          cur_action = (struct action_spec *)((void *)0);
          }
        }
        {
# 1203
        cur_action_used = 0;
# 1204
        cur_action = (struct action_spec *)zalloc(sizeof((*cur_action)));
        }
# 1205
        if ((unsigned int )cur_action == (unsigned int )((void *)0)) {
          {

          {
# 96 "spec.work"
          if (fp->__BLAST_FLAG == 1) {
# 97
            fp->__BLAST_FLAG = 0;
          } else {
# 98
            __error__();
          }
          {

          }
          }
# 1207 "actions.c"
          fclose(fp);
# 1208
          log_error(16384, "can\'t load actions file \'%s\': out of memory",
                    (csp->config)->actions_file[fileid]);
          }
# 1211
          return (1);
        }
        {
# 1213
        init_action(cur_action);
# 1216
        strcpy((char */* __restrict  */)(actions_buf),
               (char const   */* __restrict  */)((char const   *)(buf + 1)));
# 1219
        tmp___8 = strlen((char const   *)(actions_buf));
# 1219
        end___0 = (actions_buf + tmp___8) - 1;
        }
# 1220
        if ((int )(*end___0) != 125) {
          {

          {
# 96 "spec.work"
          if (fp->__BLAST_FLAG == 1) {
# 97
            fp->__BLAST_FLAG = 0;
          } else {
# 98
            __error__();
          }
          {

          }
          }
# 1223 "actions.c"
          fclose(fp);
# 1224
          log_error(16384,
                    "can\'t load actions file \'%s\': invalid line (%lu): %s",
                    (csp->config)->actions_file[fileid], linenum, buf);
          }
# 1227
          return (1);
        }
        {
# 1229
        (*end___0) = '\0';
# 1232
        chomp(actions_buf);
# 1234
        tmp___9 = get_actions(actions_buf, alias_list, cur_action);
        }
# 1234
        if (tmp___9) {
          {

          {
# 96 "spec.work"
          if (fp->__BLAST_FLAG == 1) {
# 97
            fp->__BLAST_FLAG = 0;
          } else {
# 98
            __error__();
          }
          {

          }
          }
# 1237 "actions.c"
          fclose(fp);
# 1238
          log_error(16384,
                    "can\'t load actions file \'%s\': invalid line (%lu): %s",
                    (csp->config)->actions_file[fileid], linenum, buf);
          }
# 1241
          return (1);
        }
      }
    } else {
# 1245
      if (mode == 2) {
        {
# 1253
        tmp___14 = strncmp((char const   *)(buf),
                           (char const   *)"for-privoxy-version=", 20U);
        }
# 1253
        if (! tmp___14) {
          {
# 1258
          version_string = strdup((char const   *)(buf + 20));
          }
# 1258
          if ((unsigned int )version_string == (unsigned int )((void *)0)) {
            {

            {
# 96 "spec.work"
            if (fp->__BLAST_FLAG == 1) {
# 97
              fp->__BLAST_FLAG = 0;
            } else {
# 98
              __error__();
            }
            {

            }
            }
# 1260 "actions.c"
            fclose(fp);
# 1261
            log_error(16384, "can\'t load actions file \'%s\': out of memory!",
                      (csp->config)->actions_file[fileid]);
            }
# 1264
            return (1);
          }
          {
# 1267
          num_fields = ssplit(version_string, (char const   *)".", fields, 3, 1,
                              0);
          }
# 1269
          if (num_fields < 1) {
            {
# 1271
            log_error(8192,
                      "While loading actions file \'%s\': invalid line (%lu): %s",
                      (csp->config)->actions_file[fileid], linenum, buf);
            }
          } else {
            {
# 1269
            tmp___13 = atoi((char const   *)fields[0]);
            }
# 1269
            if (tmp___13 == 0) {
              {
# 1271
              log_error(8192,
                        "While loading actions file \'%s\': invalid line (%lu): %s",
                        (csp->config)->actions_file[fileid], linenum, buf);
              }
            } else {
              {
# 1275
              tmp___10 = atoi((char const   *)fields[0]);
              }
# 1275
              if (tmp___10 > 3) {
                {

                {
# 96 "spec.work"
                if (fp->__BLAST_FLAG == 1) {
# 97
                  fp->__BLAST_FLAG = 0;
                } else {
# 98
                  __error__();
                }
                {

                }
                }
# 1279 "actions.c"
                fclose(fp);
# 1280
                log_error(16384,
                          "Actions file \'%s\', line %lu requires newer Privoxy version: %s",
                          (csp->config)->actions_file[fileid], linenum, buf);
                }
# 1283
                return (1);
              } else {
# 1275
                if (num_fields > 1) {
                  {
# 1275
                  tmp___11 = atoi((char const   *)fields[1]);
                  }
# 1275
                  if (tmp___11 > 0) {
                    {

                    {
# 96 "spec.work"
                    if (fp->__BLAST_FLAG == 1) {
# 97
                      fp->__BLAST_FLAG = 0;
                    } else {
# 98
                      __error__();
                    }
                    {

                    }
                    }
# 1279 "actions.c"
                    fclose(fp);
# 1280
                    log_error(16384,
                              "Actions file \'%s\', line %lu requires newer Privoxy version: %s",
                              (csp->config)->actions_file[fileid], linenum, buf);
                    }
# 1283
                    return (1);
                  } else {
                    goto _L;
                  }
                } else {
                  _L: 
# 1275
                  if (num_fields > 2) {
                    {
# 1275
                    tmp___12 = atoi((char const   *)fields[2]);
                    }
# 1275
                    if (tmp___12 > 3) {
                      {

                      {
# 96 "spec.work"
                      if (fp->__BLAST_FLAG == 1) {
# 97
                        fp->__BLAST_FLAG = 0;
                      } else {
# 98
                        __error__();
                      }
                      {

                      }
                      }
# 1279 "actions.c"
                      fclose(fp);
# 1280
                      log_error(16384,
                                "Actions file \'%s\', line %lu requires newer Privoxy version: %s",
                                (csp->config)->actions_file[fileid], linenum,
                                buf);
                      }
# 1283
                      return (1);
                    }
                  }
                }
              }
            }
          }
          {
# 1285
          free((void *)version_string);
          }
        }
      } else {
# 1288
        if (! (mode == 3)) {
# 1295
          if (mode == 4) {
            {
# 1303
            tmp___15 = strchr((char const   *)(buf), (int )'=');
# 1303
            start___0 = tmp___15;
# 1304
            end___1 = start___0;
            }
# 1306
            if ((unsigned int )start___0 == (unsigned int )((void *)0)) {
              {
# 1308
              log_error(16384,
                        "can\'t load actions file \'%s\': invalid alias line (%lu): %s",
                        (csp->config)->actions_file[fileid], linenum, buf);
              }
# 1311
              return (1);
            } else {
# 1306
              if ((unsigned int )start___0 == (unsigned int )(buf)) {
                {
# 1308
                log_error(16384,
                          "can\'t load actions file \'%s\': invalid alias line (%lu): %s",
                          (csp->config)->actions_file[fileid], linenum, buf);
                }
# 1311
                return (1);
              }
            }
            {
# 1314
            new_alias = (struct action_alias *)zalloc(sizeof((*new_alias)));
            }
# 1314
            if ((unsigned int )new_alias == (unsigned int )((void *)0)) {
              {

              {
# 96 "spec.work"
              if (fp->__BLAST_FLAG == 1) {
# 97
                fp->__BLAST_FLAG = 0;
              } else {
# 98
                __error__();
              }
              {

              }
              }
# 1316 "actions.c"
              fclose(fp);
# 1317
              log_error(16384,
                        "can\'t load actions file \'%s\': out of memory!",
                        (csp->config)->actions_file[fileid]);
              }
# 1320
              return (1);
            }
            {
# 1324
            end___1 --;
            }
# 1325
            while (1) {
# 1325
              if (! ((int )(*end___1) == 32)) {
# 1325
                if (! ((int )(*end___1) == 9)) {
# 1325
                  break;
                }
              }
              {
# 1331
              end___1 --;
              }
            }
            {
# 1333
            (*(end___1 + 1)) = '\0';
# 1336
            start___0 ++;
            }
# 1337
            while (1) {
# 1337
              if (! ((int )(*start___0) == 32)) {
# 1337
                if (! ((int )(*start___0) == 9)) {
# 1337
                  break;
                }
              }
              {
# 1339
              start___0 ++;
              }
            }
# 1341
            if ((int )(*start___0) == 0) {
              {
# 1343
              log_error(16384,
                        "can\'t load actions file \'%s\': invalid alias line (%lu): %s",
                        (csp->config)->actions_file[fileid], linenum, buf);
              }
# 1346
              return (1);
            }
            {
# 1349
            new_alias->name = (char const   *)strdup((char const   *)(buf));
            }
# 1349
            if ((unsigned int )new_alias->name == (unsigned int )((void *)0)) {
              {

              {
# 96 "spec.work"
              if (fp->__BLAST_FLAG == 1) {
# 97
                fp->__BLAST_FLAG = 0;
              } else {
# 98
                __error__();
              }
              {

              }
              }
# 1351 "actions.c"
              fclose(fp);
# 1352
              log_error(16384,
                        "can\'t load actions file \'%s\': out of memory!",
                        (csp->config)->actions_file[fileid]);
              }
# 1355
              return (1);
            }
            {
# 1358
            strcpy((char */* __restrict  */)(actions_buf___0),
                   (char const   */* __restrict  */)((char const   *)start___0));
# 1360
            tmp___16 = get_actions(actions_buf___0, alias_list,
                                   new_alias->action);
            }
# 1360
            if (tmp___16) {
              {

              {
# 96 "spec.work"
              if (fp->__BLAST_FLAG == 1) {
# 97
                fp->__BLAST_FLAG = 0;
              } else {
# 98
                __error__();
              }
              {

              }
              }
# 1363 "actions.c"
              fclose(fp);
# 1364
              log_error(16384,
                        "can\'t load actions file \'%s\': invalid alias line (%lu): %s = %s",
                        (csp->config)->actions_file[fileid], linenum, buf,
                        start___0);
              }
# 1367
              return (1);
            }
            {
# 1371
            new_alias->next = alias_list;
# 1372
            alias_list = new_alias;
            }
          } else {
# 1374
            if (mode == 5) {
              {
# 1379
              perm = (struct url_actions *)zalloc(sizeof((*perm)));
              }
# 1379
              if ((unsigned int )perm == (unsigned int )((void *)0)) {
                {

                {
# 96 "spec.work"
                if (fp->__BLAST_FLAG == 1) {
# 97
                  fp->__BLAST_FLAG = 0;
                } else {
# 98
                  __error__();
                }
                {

                }
                }
# 1381 "actions.c"
                fclose(fp);
# 1382
                log_error(16384,
                          "can\'t load actions file \'%s\': out of memory!",
                          (csp->config)->actions_file[fileid]);
                }
# 1385
                return (1);
              }
              {
# 1389
              copy_action(perm->action, (struct action_spec  const  *)cur_action);
# 1392
              tmp___17 = create_url_spec(perm->url, (char const   *)(buf));
              }
# 1392
              if (tmp___17) {
                {

                {
# 96 "spec.work"
                if (fp->__BLAST_FLAG == 1) {
# 97
                  fp->__BLAST_FLAG = 0;
                } else {
# 98
                  __error__();
                }
                {

                }
                }
# 1394 "actions.c"
                fclose(fp);
# 1395
                log_error(16384,
                          "can\'t load actions file \'%s\': line %lu: cannot create URL pattern from: %s",
                          (csp->config)->actions_file[fileid], linenum, buf);
                }
# 1398
                return (1);
              }
              {
# 1402
              last_perm->next = perm;
# 1403
              last_perm = perm;
              }
            } else {
# 1405
              if (mode == 1) {
                {

                {
# 96 "spec.work"
                if (fp->__BLAST_FLAG == 1) {
# 97
                  fp->__BLAST_FLAG = 0;
                } else {
# 98
                  __error__();
                }
                {

                }
                }
# 1408 "actions.c"
                fclose(fp);
# 1409
                log_error(16384,
                          "can\'t load actions file \'%s\': first needed line (%lu) is invalid: %s",
                          (csp->config)->actions_file[fileid], linenum, buf);
                }
# 1412
                return (1);
              } else {
                {

                {
# 96 "spec.work"
                if (fp->__BLAST_FLAG == 1) {
# 97
                  fp->__BLAST_FLAG = 0;
                } else {
# 98
                  __error__();
                }
                {

                }
                }
# 1417 "actions.c"
                fclose(fp);
# 1418
                log_error(16384,
                          "can\'t load actions file \'%s\': INTERNAL ERROR - mode = %d",
                          (csp->config)->actions_file[fileid], mode);
                }
# 1421
                return (1);
              }
            }
          }
        }
      }
    }
  }
  {

  {
# 96 "spec.work"
  if (fp->__BLAST_FLAG == 1) {
# 97
    fp->__BLAST_FLAG = 0;
  } else {
# 98
    __error__();
  }
  {

  }
  }
# 1425 "actions.c"
  fclose(fp);
# 1427
  free_action(cur_action);
  }
# 1428
  if (cur_action) {
    {
# 1428
    free((void *)cur_action);
# 1428
    cur_action = (struct action_spec *)((void *)0);
    }
  }
  {
# 1430
  free_alias_list(alias_list);
  }
# 1433
  if (current_actions_file[fileid]) {
    {
# 1435
    (current_actions_file[fileid])->unloader = & unload_actions_file;
    }
  }
  {
# 1438
  fs->next = files[0].next;
# 1439
  files[0].next = fs;
# 1440
  current_actions_file[fileid] = fs;
# 1442
  csp->actions_list[fileid] = fs;
  }
# 1444
  return (0);
}
}
# 1464
char *actions_to_text(struct action_spec *action ) 
{ unsigned int mask ;
  unsigned int add ;
  char *result ;
  char *tmp ;
  struct list_entry *lst ;

  {
  {
# 1466
  mask = (unsigned int )action->mask;
# 1467
  add = (unsigned int )action->add;
# 1468
  tmp = strdup((char const   *)"");
# 1468
  result = tmp;
# 1472
  mask |= add;
  }
# 112 "actionlist.h"
  if (action->multi_remove_all[0]) {
    {
# 112
    string_append(& result, (char const   *)" -add-header \\\n");
    }
  } else {
    {
# 112
    lst = action->multi_remove[0][0].first;
    }
# 112
    while (lst) {
      {
# 112
      string_append(& result, (char const   *)" -add-header{");
# 112
      string_append(& result, (char const   *)lst->str);
# 112
      string_append(& result, (char const   *)"} \\\n");
# 112
      lst = lst->next;
      }
    }
  }
  {
# 112
  lst = action->multi_add[0][0].first;
  }
# 112
  while (lst) {
    {
# 112
    string_append(& result, (char const   *)" +add-header{");
# 112
    string_append(& result, (char const   *)lst->str);
# 112
    string_append(& result, (char const   *)"} \\\n");
# 112
    lst = lst->next;
    }
  }
# 113
  if ((unsigned long )mask & 1UL) {
# 113
    if ((unsigned long )add & 1UL) {
      {
# 113
      string_append(& result, (char const   *)" +block \\\n");
      }
    }
  } else {
    {
# 113
    string_append(& result, (char const   *)" -block \\\n");
    }
  }
# 114
  if ((unsigned long )mask & 8192UL) {
# 114
    if ((unsigned long )add & 8192UL) {
      {
# 114
      string_append(& result, (char const   *)" +crunch-incoming-cookies \\\n");
      }
    }
  } else {
    {
# 114
    string_append(& result, (char const   *)" -crunch-incoming-cookies \\\n");
    }
  }
# 115
  if ((unsigned long )mask & 4096UL) {
# 115
    if ((unsigned long )add & 4096UL) {
      {
# 115
      string_append(& result, (char const   *)" +crunch-outgoing-cookies \\\n");
      }
    }
  } else {
    {
# 115
    string_append(& result, (char const   *)" -crunch-outgoing-cookies \\\n");
    }
  }
# 116
  if ((unsigned long )mask & 2UL) {
# 116
    if ((unsigned long )add & 2UL) {
      {
# 116
      string_append(& result, (char const   *)" +deanimate-gifs{");
# 116
      string_append(& result, (char const   *)action->string[0]);
# 116
      string_append(& result, (char const   *)"} \\\n");
      }
    }
  } else {
    {
# 116
    string_append(& result, (char const   *)" -deanimate-gifs \\\n");
    }
  }
# 119
  if ((unsigned long )mask & 4UL) {
# 119
    if ((unsigned long )add & 4UL) {
      {
# 119
      string_append(& result, (char const   *)" +downgrade-http-version \\\n");
      }
    }
  } else {
    {
# 119
    string_append(& result, (char const   *)" -downgrade-http-version \\\n");
    }
  }
# 120
  if ((unsigned long )mask & 8UL) {
# 120
    if ((unsigned long )add & 8UL) {
      {
# 120
      string_append(& result, (char const   *)" +fast-redirects \\\n");
      }
    }
  } else {
    {
# 120
    string_append(& result, (char const   *)" -fast-redirects \\\n");
    }
  }
# 121
  if (action->multi_remove_all[2]) {
    {
# 121
    string_append(& result, (char const   *)" -filter \\\n");
    }
  } else {
    {
# 121
    lst = action->multi_remove[2][0].first;
    }
# 121
    while (lst) {
      {
# 121
      string_append(& result, (char const   *)" -filter{");
# 121
      string_append(& result, (char const   *)lst->str);
# 121
      string_append(& result, (char const   *)"} \\\n");
# 121
      lst = lst->next;
      }
    }
  }
  {
# 121
  lst = action->multi_add[2][0].first;
  }
# 121
  while (lst) {
    {
# 121
    string_append(& result, (char const   *)" +filter{");
# 121
    string_append(& result, (char const   *)lst->str);
# 121
    string_append(& result, (char const   *)"} \\\n");
# 121
    lst = lst->next;
    }
  }
# 122
  if ((unsigned long )mask & 256UL) {
# 122
    if ((unsigned long )add & 256UL) {
      {
# 122
      string_append(& result, (char const   *)" +handle-as-image \\\n");
      }
    }
  } else {
    {
# 122
    string_append(& result, (char const   *)" -handle-as-image \\\n");
    }
  }
# 123
  if ((unsigned long )mask & 16UL) {
# 123
    if ((unsigned long )add & 16UL) {
      {
# 123
      string_append(& result,
                    (char const   *)" +hide-forwarded-for-headers \\\n");
      }
    }
  } else {
    {
# 123
    string_append(& result, (char const   *)" -hide-forwarded-for-headers \\\n");
    }
  }
# 124
  if ((unsigned long )mask & 32UL) {
# 124
    if ((unsigned long )add & 32UL) {
      {
# 124
      string_append(& result, (char const   *)" +hide-from-header{");
# 124
      string_append(& result, (char const   *)action->string[1]);
# 124
      string_append(& result, (char const   *)"} \\\n");
      }
    }
  } else {
    {
# 124
    string_append(& result, (char const   *)" -hide-from-header \\\n");
    }
  }
# 127
  if ((unsigned long )mask & 64UL) {
# 127
    if ((unsigned long )add & 64UL) {
      {
# 127
      string_append(& result, (char const   *)" +hide-referrer{");
# 127
      string_append(& result, (char const   *)action->string[3]);
# 127
      string_append(& result, (char const   *)"} \\\n");
      }
    }
  } else {
    {
# 127
    string_append(& result, (char const   *)" -hide-referrer \\\n");
    }
  }
# 131
  if ((unsigned long )mask & 128UL) {
# 131
    if ((unsigned long )add & 128UL) {
      {
# 131
      string_append(& result, (char const   *)" +hide-user-agent{");
# 131
      string_append(& result, (char const   *)action->string[4]);
# 131
      string_append(& result, (char const   *)"} \\\n");
      }
    }
  } else {
    {
# 131
    string_append(& result, (char const   *)" -hide-user-agent \\\n");
    }
  }
# 133
  if ((unsigned long )mask & 16384UL) {
# 133
    if ((unsigned long )add & 16384UL) {
      {
# 133
      string_append(& result, (char const   *)" +kill-popups \\\n");
      }
    }
  } else {
    {
# 133
    string_append(& result, (char const   *)" -kill-popups \\\n");
    }
  }
# 134
  if ((unsigned long )mask & 65536UL) {
# 134
    if ((unsigned long )add & 65536UL) {
      {
# 134
      string_append(& result, (char const   *)" +limit-connect{");
# 134
      string_append(& result, (char const   *)action->string[5]);
# 134
      string_append(& result, (char const   *)"} \\\n");
      }
    }
  } else {
    {
# 134
    string_append(& result, (char const   *)" -limit-connect \\\n");
    }
  }
# 136
  if ((unsigned long )mask & 1024UL) {
# 136
    if ((unsigned long )add & 1024UL) {
      {
# 136
      string_append(& result, (char const   *)" +prevent-compression \\\n");
      }
    }
  } else {
    {
# 136
    string_append(& result, (char const   *)" -prevent-compression \\\n");
    }
  }
# 137
  if ((unsigned long )mask & 32768UL) {
# 137
    if ((unsigned long )add & 32768UL) {
      {
# 137
      string_append(& result, (char const   *)" +send-vanilla-wafer \\\n");
      }
    }
  } else {
    {
# 137
    string_append(& result, (char const   *)" -send-vanilla-wafer \\\n");
    }
  }
# 138
  if (action->multi_remove_all[1]) {
    {
# 138
    string_append(& result, (char const   *)" -send-wafer \\\n");
    }
  } else {
    {
# 138
    lst = action->multi_remove[1][0].first;
    }
# 138
    while (lst) {
      {
# 138
      string_append(& result, (char const   *)" -send-wafer{");
# 138
      string_append(& result, (char const   *)lst->str);
# 138
      string_append(& result, (char const   *)"} \\\n");
# 138
      lst = lst->next;
      }
    }
  }
  {
# 138
  lst = action->multi_add[1][0].first;
  }
# 138
  while (lst) {
    {
# 138
    string_append(& result, (char const   *)" +send-wafer{");
# 138
    string_append(& result, (char const   *)lst->str);
# 138
    string_append(& result, (char const   *)"} \\\n");
# 138
    lst = lst->next;
    }
  }
# 139
  if ((unsigned long )mask & 2048UL) {
# 139
    if ((unsigned long )add & 2048UL) {
      {
# 139
      string_append(& result, (char const   *)" +session-cookies-only \\\n");
      }
    }
  } else {
    {
# 139
    string_append(& result, (char const   *)" -session-cookies-only \\\n");
    }
  }
# 140
  if ((unsigned long )mask & 512UL) {
# 140
    if ((unsigned long )add & 512UL) {
      {
# 140
      string_append(& result, (char const   *)" +set-image-blocker{");
# 140
      string_append(& result, (char const   *)action->string[2]);
# 140
      string_append(& result, (char const   *)"} \\\n");
      }
    }
  } else {
    {
# 140
    string_append(& result, (char const   *)" -set-image-blocker \\\n");
    }
  }
# 1531 "actions.c"
  return (result);
}
}
# 1552
char *actions_to_html(struct client_state *csp , struct action_spec *action ) 
{ unsigned int mask ;
  unsigned int add ;
  char *result ;
  char *tmp ;
  struct list_entry *lst ;
  char *tmp___0 ;
  char *tmp___1 ;
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
  char *tmp___14 ;
  char *tmp___15 ;
  char *tmp___16 ;
  char *tmp___17 ;
  char *tmp___18 ;
  char *tmp___19 ;
  char *tmp___20 ;
  char *tmp___21 ;
  char *tmp___22 ;
  char *tmp___23 ;
  char *tmp___24 ;
  char *tmp___25 ;
  char *tmp___26 ;
  char *tmp___27 ;
  char *tmp___28 ;
  char *tmp___29 ;
  char *tmp___30 ;
  char *tmp___31 ;
  char *tmp___32 ;
  char *tmp___33 ;
  char *tmp___34 ;
  char *tmp___35 ;
  char *tmp___36 ;
  char *tmp___37 ;
  char *tmp___38 ;
  char *tmp___39 ;
  char *tmp___40 ;
  char *tmp___41 ;
  char *tmp___42 ;
  char *tmp___43 ;
  char *tmp___44 ;
  char *tmp___45 ;
  char *tmp___46 ;
  char *tmp___47 ;
  char *tmp___48 ;
  char *tmp___49 ;
  char *tmp___50 ;
  char *tmp___51 ;
  char *tmp___52 ;
  char *tmp___53 ;
  char *tmp___54 ;
  char *s ;

  {
  {
# 1555
  mask = (unsigned int )action->mask;
# 1556
  add = (unsigned int )action->add;
# 1557
  tmp = strdup((char const   *)"");
# 1557
  result = tmp;
# 1561
  mask |= add;
  }
# 112 "actionlist.h"
  if (action->multi_remove_all[0]) {
    {
# 112
    string_append(& result, (char const   *)"\n<br>-");
# 112
    tmp___0 = add_help_link((char const   *)"add-header", csp->config);
# 112
    string_join(& result, tmp___0);
    }
  } else {
    {
# 112
    lst = action->multi_remove[0][0].first;
    }
# 112
    while (lst) {
      {
# 112
      string_append(& result, (char const   *)"\n<br>-");
# 112
      tmp___1 = add_help_link((char const   *)"add-header", csp->config);
# 112
      string_join(& result, tmp___1);
# 112
      string_append(& result, (char const   *)"{");
# 112
      tmp___2 = html_encode((char const   *)lst->str);
# 112
      string_join(& result, tmp___2);
# 112
      string_append(& result, (char const   *)"}");
# 112
      lst = lst->next;
      }
    }
  }
  {
# 112
  lst = action->multi_add[0][0].first;
  }
# 112
  while (lst) {
    {
# 112
    string_append(& result, (char const   *)"\n<br>+");
# 112
    tmp___3 = add_help_link((char const   *)"add-header", csp->config);
# 112
    string_join(& result, tmp___3);
# 112
    string_append(& result, (char const   *)"{");
# 112
    tmp___4 = html_encode((char const   *)lst->str);
# 112
    string_join(& result, tmp___4);
# 112
    string_append(& result, (char const   *)"}");
# 112
    lst = lst->next;
    }
  }
# 113
  if ((unsigned long )mask & 1UL) {
# 113
    if ((unsigned long )add & 1UL) {
      {
# 113
      string_append(& result, (char const   *)"\n<br>+");
# 113
      tmp___6 = add_help_link((char const   *)"block", csp->config);
# 113
      string_join(& result, tmp___6);
      }
    }
  } else {
    {
# 113
    string_append(& result, (char const   *)"\n<br>-");
# 113
    tmp___5 = add_help_link((char const   *)"block", csp->config);
# 113
    string_join(& result, tmp___5);
    }
  }
# 114
  if ((unsigned long )mask & 8192UL) {
# 114
    if ((unsigned long )add & 8192UL) {
      {
# 114
      string_append(& result, (char const   *)"\n<br>+");
# 114
      tmp___8 = add_help_link((char const   *)"crunch-incoming-cookies",
                              csp->config);
# 114
      string_join(& result, tmp___8);
      }
    }
  } else {
    {
# 114
    string_append(& result, (char const   *)"\n<br>-");
# 114
    tmp___7 = add_help_link((char const   *)"crunch-incoming-cookies",
                            csp->config);
# 114
    string_join(& result, tmp___7);
    }
  }
# 115
  if ((unsigned long )mask & 4096UL) {
# 115
    if ((unsigned long )add & 4096UL) {
      {
# 115
      string_append(& result, (char const   *)"\n<br>+");
# 115
      tmp___10 = add_help_link((char const   *)"crunch-outgoing-cookies",
                               csp->config);
# 115
      string_join(& result, tmp___10);
      }
    }
  } else {
    {
# 115
    string_append(& result, (char const   *)"\n<br>-");
# 115
    tmp___9 = add_help_link((char const   *)"crunch-outgoing-cookies",
                            csp->config);
# 115
    string_join(& result, tmp___9);
    }
  }
# 116
  if ((unsigned long )mask & 2UL) {
# 116
    if ((unsigned long )add & 2UL) {
      {
# 116
      string_append(& result, (char const   *)"\n<br>+");
# 116
      tmp___12 = add_help_link((char const   *)"deanimate-gifs", csp->config);
# 116
      string_join(& result, tmp___12);
# 116
      string_append(& result, (char const   *)"{");
# 116
      tmp___13 = html_encode((char const   *)action->string[0]);
# 116
      string_join(& result, tmp___13);
# 116
      string_append(& result, (char const   *)"}");
      }
    }
  } else {
    {
# 116
    string_append(& result, (char const   *)"\n<br>-");
# 116
    tmp___11 = add_help_link((char const   *)"deanimate-gifs", csp->config);
# 116
    string_join(& result, tmp___11);
    }
  }
# 119
  if ((unsigned long )mask & 4UL) {
# 119
    if ((unsigned long )add & 4UL) {
      {
# 119
      string_append(& result, (char const   *)"\n<br>+");
# 119
      tmp___15 = add_help_link((char const   *)"downgrade-http-version",
                               csp->config);
# 119
      string_join(& result, tmp___15);
      }
    }
  } else {
    {
# 119
    string_append(& result, (char const   *)"\n<br>-");
# 119
    tmp___14 = add_help_link((char const   *)"downgrade-http-version",
                             csp->config);
# 119
    string_join(& result, tmp___14);
    }
  }
# 120
  if ((unsigned long )mask & 8UL) {
# 120
    if ((unsigned long )add & 8UL) {
      {
# 120
      string_append(& result, (char const   *)"\n<br>+");
# 120
      tmp___17 = add_help_link((char const   *)"fast-redirects", csp->config);
# 120
      string_join(& result, tmp___17);
      }
    }
  } else {
    {
# 120
    string_append(& result, (char const   *)"\n<br>-");
# 120
    tmp___16 = add_help_link((char const   *)"fast-redirects", csp->config);
# 120
    string_join(& result, tmp___16);
    }
  }
# 121
  if (action->multi_remove_all[2]) {
    {
# 121
    string_append(& result, (char const   *)"\n<br>-");
# 121
    tmp___18 = add_help_link((char const   *)"filter", csp->config);
# 121
    string_join(& result, tmp___18);
    }
  } else {
    {
# 121
    lst = action->multi_remove[2][0].first;
    }
# 121
    while (lst) {
      {
# 121
      string_append(& result, (char const   *)"\n<br>-");
# 121
      tmp___19 = add_help_link((char const   *)"filter", csp->config);
# 121
      string_join(& result, tmp___19);
# 121
      string_append(& result, (char const   *)"{");
# 121
      tmp___20 = html_encode((char const   *)lst->str);
# 121
      string_join(& result, tmp___20);
# 121
      string_append(& result, (char const   *)"}");
# 121
      lst = lst->next;
      }
    }
  }
  {
# 121
  lst = action->multi_add[2][0].first;
  }
# 121
  while (lst) {
    {
# 121
    string_append(& result, (char const   *)"\n<br>+");
# 121
    tmp___21 = add_help_link((char const   *)"filter", csp->config);
# 121
    string_join(& result, tmp___21);
# 121
    string_append(& result, (char const   *)"{");
# 121
    tmp___22 = html_encode((char const   *)lst->str);
# 121
    string_join(& result, tmp___22);
# 121
    string_append(& result, (char const   *)"}");
# 121
    lst = lst->next;
    }
  }
# 122
  if ((unsigned long )mask & 256UL) {
# 122
    if ((unsigned long )add & 256UL) {
      {
# 122
      string_append(& result, (char const   *)"\n<br>+");
# 122
      tmp___24 = add_help_link((char const   *)"handle-as-image", csp->config);
# 122
      string_join(& result, tmp___24);
      }
    }
  } else {
    {
# 122
    string_append(& result, (char const   *)"\n<br>-");
# 122
    tmp___23 = add_help_link((char const   *)"handle-as-image", csp->config);
# 122
    string_join(& result, tmp___23);
    }
  }
# 123
  if ((unsigned long )mask & 16UL) {
# 123
    if ((unsigned long )add & 16UL) {
      {
# 123
      string_append(& result, (char const   *)"\n<br>+");
# 123
      tmp___26 = add_help_link((char const   *)"hide-forwarded-for-headers",
                               csp->config);
# 123
      string_join(& result, tmp___26);
      }
    }
  } else {
    {
# 123
    string_append(& result, (char const   *)"\n<br>-");
# 123
    tmp___25 = add_help_link((char const   *)"hide-forwarded-for-headers",
                             csp->config);
# 123
    string_join(& result, tmp___25);
    }
  }
# 124
  if ((unsigned long )mask & 32UL) {
# 124
    if ((unsigned long )add & 32UL) {
      {
# 124
      string_append(& result, (char const   *)"\n<br>+");
# 124
      tmp___28 = add_help_link((char const   *)"hide-from-header", csp->config);
# 124
      string_join(& result, tmp___28);
# 124
      string_append(& result, (char const   *)"{");
# 124
      tmp___29 = html_encode((char const   *)action->string[1]);
# 124
      string_join(& result, tmp___29);
# 124
      string_append(& result, (char const   *)"}");
      }
    }
  } else {
    {
# 124
    string_append(& result, (char const   *)"\n<br>-");
# 124
    tmp___27 = add_help_link((char const   *)"hide-from-header", csp->config);
# 124
    string_join(& result, tmp___27);
    }
  }
# 127
  if ((unsigned long )mask & 64UL) {
# 127
    if ((unsigned long )add & 64UL) {
      {
# 127
      string_append(& result, (char const   *)"\n<br>+");
# 127
      tmp___31 = add_help_link((char const   *)"hide-referrer", csp->config);
# 127
      string_join(& result, tmp___31);
# 127
      string_append(& result, (char const   *)"{");
# 127
      tmp___32 = html_encode((char const   *)action->string[3]);
# 127
      string_join(& result, tmp___32);
# 127
      string_append(& result, (char const   *)"}");
      }
    }
  } else {
    {
# 127
    string_append(& result, (char const   *)"\n<br>-");
# 127
    tmp___30 = add_help_link((char const   *)"hide-referrer", csp->config);
# 127
    string_join(& result, tmp___30);
    }
  }
# 131
  if ((unsigned long )mask & 128UL) {
# 131
    if ((unsigned long )add & 128UL) {
      {
# 131
      string_append(& result, (char const   *)"\n<br>+");
# 131
      tmp___34 = add_help_link((char const   *)"hide-user-agent", csp->config);
# 131
      string_join(& result, tmp___34);
# 131
      string_append(& result, (char const   *)"{");
# 131
      tmp___35 = html_encode((char const   *)action->string[4]);
# 131
      string_join(& result, tmp___35);
# 131
      string_append(& result, (char const   *)"}");
      }
    }
  } else {
    {
# 131
    string_append(& result, (char const   *)"\n<br>-");
# 131
    tmp___33 = add_help_link((char const   *)"hide-user-agent", csp->config);
# 131
    string_join(& result, tmp___33);
    }
  }
# 133
  if ((unsigned long )mask & 16384UL) {
# 133
    if ((unsigned long )add & 16384UL) {
      {
# 133
      string_append(& result, (char const   *)"\n<br>+");
# 133
      tmp___37 = add_help_link((char const   *)"kill-popups", csp->config);
# 133
      string_join(& result, tmp___37);
      }
    }
  } else {
    {
# 133
    string_append(& result, (char const   *)"\n<br>-");
# 133
    tmp___36 = add_help_link((char const   *)"kill-popups", csp->config);
# 133
    string_join(& result, tmp___36);
    }
  }
# 134
  if ((unsigned long )mask & 65536UL) {
# 134
    if ((unsigned long )add & 65536UL) {
      {
# 134
      string_append(& result, (char const   *)"\n<br>+");
# 134
      tmp___39 = add_help_link((char const   *)"limit-connect", csp->config);
# 134
      string_join(& result, tmp___39);
# 134
      string_append(& result, (char const   *)"{");
# 134
      tmp___40 = html_encode((char const   *)action->string[5]);
# 134
      string_join(& result, tmp___40);
# 134
      string_append(& result, (char const   *)"}");
      }
    }
  } else {
    {
# 134
    string_append(& result, (char const   *)"\n<br>-");
# 134
    tmp___38 = add_help_link((char const   *)"limit-connect", csp->config);
# 134
    string_join(& result, tmp___38);
    }
  }
# 136
  if ((unsigned long )mask & 1024UL) {
# 136
    if ((unsigned long )add & 1024UL) {
      {
# 136
      string_append(& result, (char const   *)"\n<br>+");
# 136
      tmp___42 = add_help_link((char const   *)"prevent-compression",
                               csp->config);
# 136
      string_join(& result, tmp___42);
      }
    }
  } else {
    {
# 136
    string_append(& result, (char const   *)"\n<br>-");
# 136
    tmp___41 = add_help_link((char const   *)"prevent-compression", csp->config);
# 136
    string_join(& result, tmp___41);
    }
  }
# 137
  if ((unsigned long )mask & 32768UL) {
# 137
    if ((unsigned long )add & 32768UL) {
      {
# 137
      string_append(& result, (char const   *)"\n<br>+");
# 137
      tmp___44 = add_help_link((char const   *)"send-vanilla-wafer", csp->config);
# 137
      string_join(& result, tmp___44);
      }
    }
  } else {
    {
# 137
    string_append(& result, (char const   *)"\n<br>-");
# 137
    tmp___43 = add_help_link((char const   *)"send-vanilla-wafer", csp->config);
# 137
    string_join(& result, tmp___43);
    }
  }
# 138
  if (action->multi_remove_all[1]) {
    {
# 138
    string_append(& result, (char const   *)"\n<br>-");
# 138
    tmp___45 = add_help_link((char const   *)"send-wafer", csp->config);
# 138
    string_join(& result, tmp___45);
    }
  } else {
    {
# 138
    lst = action->multi_remove[1][0].first;
    }
# 138
    while (lst) {
      {
# 138
      string_append(& result, (char const   *)"\n<br>-");
# 138
      tmp___46 = add_help_link((char const   *)"send-wafer", csp->config);
# 138
      string_join(& result, tmp___46);
# 138
      string_append(& result, (char const   *)"{");
# 138
      tmp___47 = html_encode((char const   *)lst->str);
# 138
      string_join(& result, tmp___47);
# 138
      string_append(& result, (char const   *)"}");
# 138
      lst = lst->next;
      }
    }
  }
  {
# 138
  lst = action->multi_add[1][0].first;
  }
# 138
  while (lst) {
    {
# 138
    string_append(& result, (char const   *)"\n<br>+");
# 138
    tmp___48 = add_help_link((char const   *)"send-wafer", csp->config);
# 138
    string_join(& result, tmp___48);
# 138
    string_append(& result, (char const   *)"{");
# 138
    tmp___49 = html_encode((char const   *)lst->str);
# 138
    string_join(& result, tmp___49);
# 138
    string_append(& result, (char const   *)"}");
# 138
    lst = lst->next;
    }
  }
# 139
  if ((unsigned long )mask & 2048UL) {
# 139
    if ((unsigned long )add & 2048UL) {
      {
# 139
      string_append(& result, (char const   *)"\n<br>+");
# 139
      tmp___51 = add_help_link((char const   *)"session-cookies-only",
                               csp->config);
# 139
      string_join(& result, tmp___51);
      }
    }
  } else {
    {
# 139
    string_append(& result, (char const   *)"\n<br>-");
# 139
    tmp___50 = add_help_link((char const   *)"session-cookies-only", csp->config);
# 139
    string_join(& result, tmp___50);
    }
  }
# 140
  if ((unsigned long )mask & 512UL) {
# 140
    if ((unsigned long )add & 512UL) {
      {
# 140
      string_append(& result, (char const   *)"\n<br>+");
# 140
      tmp___53 = add_help_link((char const   *)"set-image-blocker", csp->config);
# 140
      string_join(& result, tmp___53);
# 140
      string_append(& result, (char const   *)"{");
# 140
      tmp___54 = html_encode((char const   *)action->string[2]);
# 140
      string_join(& result, tmp___54);
# 140
      string_append(& result, (char const   *)"}");
      }
    }
  } else {
    {
# 140
    string_append(& result, (char const   *)"\n<br>-");
# 140
    tmp___52 = add_help_link((char const   *)"set-image-blocker", csp->config);
# 140
    string_join(& result, tmp___52);
    }
  }
# 1631 "actions.c"
  if (result) {
# 1631
    if ((*result)) {
      {
# 1633
      s = result;
# 1634
      result = strdup((char const   *)(result + 5));
# 1635
      free((void *)s);
      }
    }
  }
# 1638
  return (result);
}
}
# 1658
char *current_action_to_html(struct client_state *csp ,
                             struct current_action_spec *action ) 
{ unsigned long flags ;
  char *result ;
  char *tmp ;
  struct list_entry *lst ;
  char *tmp___0 ;
  char *tmp___1 ;
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
  char *tmp___14 ;
  char *tmp___15 ;
  char *tmp___16 ;
  char *tmp___17 ;
  char *tmp___18 ;
  char *tmp___19 ;
  char *tmp___20 ;
  char *tmp___21 ;
  char *tmp___22 ;
  char *tmp___23 ;
  char *tmp___24 ;
  char *tmp___25 ;
  char *tmp___26 ;
  char *tmp___27 ;
  char *tmp___28 ;
  char *tmp___29 ;
  char *tmp___30 ;
  char *tmp___31 ;
  char *tmp___32 ;
  char *tmp___33 ;
  char *tmp___34 ;
  char *tmp___35 ;
  char *tmp___36 ;
  char *tmp___37 ;
  char *tmp___38 ;
  char *tmp___39 ;
  char *tmp___40 ;
  char *tmp___41 ;
  char *tmp___42 ;
  char *tmp___43 ;
  char *tmp___44 ;
  char *tmp___45 ;
  char *tmp___46 ;
  char *tmp___47 ;
  char *tmp___48 ;

  {
  {
# 1661
  flags = action->flags;
# 1662
  tmp = strdup((char const   *)"");
# 1662
  result = tmp;
# 112 "actionlist.h"
  lst = action->multi[0][0].first;
  }
# 112
  if ((unsigned int )lst == (unsigned int )((void *)0)) {
    {
# 112
    string_append(& result, (char const   *)"\n<br>-");
# 112
    tmp___0 = add_help_link((char const   *)"add-header", csp->config);
# 112
    string_join(& result, tmp___0);
    }
  } else {
# 112
    while (lst) {
      {
# 112
      string_append(& result, (char const   *)"\n<br>+");
# 112
      tmp___1 = add_help_link((char const   *)"add-header", csp->config);
# 112
      string_join(& result, tmp___1);
# 112
      string_append(& result, (char const   *)"{");
# 112
      tmp___2 = html_encode((char const   *)lst->str);
# 112
      string_join(& result, tmp___2);
# 112
      string_append(& result, (char const   *)"}");
# 112
      lst = lst->next;
      }
    }
  }
# 113
  if (flags & 1UL) {
    {
# 113
    string_append(& result, (char const   *)"\n<br>+");
# 113
    tmp___3 = add_help_link((char const   *)"block", csp->config);
# 113
    string_join(& result, tmp___3);
    }
  } else {
    {
# 113
    string_append(& result, (char const   *)"\n<br>-");
# 113
    tmp___4 = add_help_link((char const   *)"block", csp->config);
# 113
    string_join(& result, tmp___4);
    }
  }
# 114
  if (flags & 8192UL) {
    {
# 114
    string_append(& result, (char const   *)"\n<br>+");
# 114
    tmp___5 = add_help_link((char const   *)"crunch-incoming-cookies",
                            csp->config);
# 114
    string_join(& result, tmp___5);
    }
  } else {
    {
# 114
    string_append(& result, (char const   *)"\n<br>-");
# 114
    tmp___6 = add_help_link((char const   *)"crunch-incoming-cookies",
                            csp->config);
# 114
    string_join(& result, tmp___6);
    }
  }
# 115
  if (flags & 4096UL) {
    {
# 115
    string_append(& result, (char const   *)"\n<br>+");
# 115
    tmp___7 = add_help_link((char const   *)"crunch-outgoing-cookies",
                            csp->config);
# 115
    string_join(& result, tmp___7);
    }
  } else {
    {
# 115
    string_append(& result, (char const   *)"\n<br>-");
# 115
    tmp___8 = add_help_link((char const   *)"crunch-outgoing-cookies",
                            csp->config);
# 115
    string_join(& result, tmp___8);
    }
  }
# 116
  if (flags & 2UL) {
    {
# 116
    string_append(& result, (char const   *)"\n<br>+");
# 116
    tmp___9 = add_help_link((char const   *)"deanimate-gifs", csp->config);
# 116
    string_join(& result, tmp___9);
# 116
    string_append(& result, (char const   *)"{");
# 116
    tmp___10 = html_encode((char const   *)action->string[0]);
# 116
    string_join(& result, tmp___10);
# 116
    string_append(& result, (char const   *)"}");
    }
  } else {
    {
# 116
    string_append(& result, (char const   *)"\n<br>-");
# 116
    tmp___11 = add_help_link((char const   *)"deanimate-gifs", csp->config);
# 116
    string_join(& result, tmp___11);
    }
  }
# 119
  if (flags & 4UL) {
    {
# 119
    string_append(& result, (char const   *)"\n<br>+");
# 119
    tmp___12 = add_help_link((char const   *)"downgrade-http-version",
                             csp->config);
# 119
    string_join(& result, tmp___12);
    }
  } else {
    {
# 119
    string_append(& result, (char const   *)"\n<br>-");
# 119
    tmp___13 = add_help_link((char const   *)"downgrade-http-version",
                             csp->config);
# 119
    string_join(& result, tmp___13);
    }
  }
# 120
  if (flags & 8UL) {
    {
# 120
    string_append(& result, (char const   *)"\n<br>+");
# 120
    tmp___14 = add_help_link((char const   *)"fast-redirects", csp->config);
# 120
    string_join(& result, tmp___14);
    }
  } else {
    {
# 120
    string_append(& result, (char const   *)"\n<br>-");
# 120
    tmp___15 = add_help_link((char const   *)"fast-redirects", csp->config);
# 120
    string_join(& result, tmp___15);
    }
  }
  {
# 121
  lst = action->multi[2][0].first;
  }
# 121
  if ((unsigned int )lst == (unsigned int )((void *)0)) {
    {
# 121
    string_append(& result, (char const   *)"\n<br>-");
# 121
    tmp___16 = add_help_link((char const   *)"filter", csp->config);
# 121
    string_join(& result, tmp___16);
    }
  } else {
# 121
    while (lst) {
      {
# 121
      string_append(& result, (char const   *)"\n<br>+");
# 121
      tmp___17 = add_help_link((char const   *)"filter", csp->config);
# 121
      string_join(& result, tmp___17);
# 121
      string_append(& result, (char const   *)"{");
# 121
      tmp___18 = html_encode((char const   *)lst->str);
# 121
      string_join(& result, tmp___18);
# 121
      string_append(& result, (char const   *)"}");
# 121
      lst = lst->next;
      }
    }
  }
# 122
  if (flags & 256UL) {
    {
# 122
    string_append(& result, (char const   *)"\n<br>+");
# 122
    tmp___19 = add_help_link((char const   *)"handle-as-image", csp->config);
# 122
    string_join(& result, tmp___19);
    }
  } else {
    {
# 122
    string_append(& result, (char const   *)"\n<br>-");
# 122
    tmp___20 = add_help_link((char const   *)"handle-as-image", csp->config);
# 122
    string_join(& result, tmp___20);
    }
  }
# 123
  if (flags & 16UL) {
    {
# 123
    string_append(& result, (char const   *)"\n<br>+");
# 123
    tmp___21 = add_help_link((char const   *)"hide-forwarded-for-headers",
                             csp->config);
# 123
    string_join(& result, tmp___21);
    }
  } else {
    {
# 123
    string_append(& result, (char const   *)"\n<br>-");
# 123
    tmp___22 = add_help_link((char const   *)"hide-forwarded-for-headers",
                             csp->config);
# 123
    string_join(& result, tmp___22);
    }
  }
# 124
  if (flags & 32UL) {
    {
# 124
    string_append(& result, (char const   *)"\n<br>+");
# 124
    tmp___23 = add_help_link((char const   *)"hide-from-header", csp->config);
# 124
    string_join(& result, tmp___23);
# 124
    string_append(& result, (char const   *)"{");
# 124
    tmp___24 = html_encode((char const   *)action->string[1]);
# 124
    string_join(& result, tmp___24);
# 124
    string_append(& result, (char const   *)"}");
    }
  } else {
    {
# 124
    string_append(& result, (char const   *)"\n<br>-");
# 124
    tmp___25 = add_help_link((char const   *)"hide-from-header", csp->config);
# 124
    string_join(& result, tmp___25);
    }
  }
# 127
  if (flags & 64UL) {
    {
# 127
    string_append(& result, (char const   *)"\n<br>+");
# 127
    tmp___26 = add_help_link((char const   *)"hide-referrer", csp->config);
# 127
    string_join(& result, tmp___26);
# 127
    string_append(& result, (char const   *)"{");
# 127
    tmp___27 = html_encode((char const   *)action->string[3]);
# 127
    string_join(& result, tmp___27);
# 127
    string_append(& result, (char const   *)"}");
    }
  } else {
    {
# 127
    string_append(& result, (char const   *)"\n<br>-");
# 127
    tmp___28 = add_help_link((char const   *)"hide-referrer", csp->config);
# 127
    string_join(& result, tmp___28);
    }
  }
# 131
  if (flags & 128UL) {
    {
# 131
    string_append(& result, (char const   *)"\n<br>+");
# 131
    tmp___29 = add_help_link((char const   *)"hide-user-agent", csp->config);
# 131
    string_join(& result, tmp___29);
# 131
    string_append(& result, (char const   *)"{");
# 131
    tmp___30 = html_encode((char const   *)action->string[4]);
# 131
    string_join(& result, tmp___30);
# 131
    string_append(& result, (char const   *)"}");
    }
  } else {
    {
# 131
    string_append(& result, (char const   *)"\n<br>-");
# 131
    tmp___31 = add_help_link((char const   *)"hide-user-agent", csp->config);
# 131
    string_join(& result, tmp___31);
    }
  }
# 133
  if (flags & 16384UL) {
    {
# 133
    string_append(& result, (char const   *)"\n<br>+");
# 133
    tmp___32 = add_help_link((char const   *)"kill-popups", csp->config);
# 133
    string_join(& result, tmp___32);
    }
  } else {
    {
# 133
    string_append(& result, (char const   *)"\n<br>-");
# 133
    tmp___33 = add_help_link((char const   *)"kill-popups", csp->config);
# 133
    string_join(& result, tmp___33);
    }
  }
# 134
  if (flags & 65536UL) {
    {
# 134
    string_append(& result, (char const   *)"\n<br>+");
# 134
    tmp___34 = add_help_link((char const   *)"limit-connect", csp->config);
# 134
    string_join(& result, tmp___34);
# 134
    string_append(& result, (char const   *)"{");
# 134
    tmp___35 = html_encode((char const   *)action->string[5]);
# 134
    string_join(& result, tmp___35);
# 134
    string_append(& result, (char const   *)"}");
    }
  } else {
    {
# 134
    string_append(& result, (char const   *)"\n<br>-");
# 134
    tmp___36 = add_help_link((char const   *)"limit-connect", csp->config);
# 134
    string_join(& result, tmp___36);
    }
  }
# 136
  if (flags & 1024UL) {
    {
# 136
    string_append(& result, (char const   *)"\n<br>+");
# 136
    tmp___37 = add_help_link((char const   *)"prevent-compression", csp->config);
# 136
    string_join(& result, tmp___37);
    }
  } else {
    {
# 136
    string_append(& result, (char const   *)"\n<br>-");
# 136
    tmp___38 = add_help_link((char const   *)"prevent-compression", csp->config);
# 136
    string_join(& result, tmp___38);
    }
  }
# 137
  if (flags & 32768UL) {
    {
# 137
    string_append(& result, (char const   *)"\n<br>+");
# 137
    tmp___39 = add_help_link((char const   *)"send-vanilla-wafer", csp->config);
# 137
    string_join(& result, tmp___39);
    }
  } else {
    {
# 137
    string_append(& result, (char const   *)"\n<br>-");
# 137
    tmp___40 = add_help_link((char const   *)"send-vanilla-wafer", csp->config);
# 137
    string_join(& result, tmp___40);
    }
  }
  {
# 138
  lst = action->multi[1][0].first;
  }
# 138
  if ((unsigned int )lst == (unsigned int )((void *)0)) {
    {
# 138
    string_append(& result, (char const   *)"\n<br>-");
# 138
    tmp___41 = add_help_link((char const   *)"send-wafer", csp->config);
# 138
    string_join(& result, tmp___41);
    }
  } else {
# 138
    while (lst) {
      {
# 138
      string_append(& result, (char const   *)"\n<br>+");
# 138
      tmp___42 = add_help_link((char const   *)"send-wafer", csp->config);
# 138
      string_join(& result, tmp___42);
# 138
      string_append(& result, (char const   *)"{");
# 138
      tmp___43 = html_encode((char const   *)lst->str);
# 138
      string_join(& result, tmp___43);
# 138
      string_append(& result, (char const   *)"}");
# 138
      lst = lst->next;
      }
    }
  }
# 139
  if (flags & 2048UL) {
    {
# 139
    string_append(& result, (char const   *)"\n<br>+");
# 139
    tmp___44 = add_help_link((char const   *)"session-cookies-only", csp->config);
# 139
    string_join(& result, tmp___44);
    }
  } else {
    {
# 139
    string_append(& result, (char const   *)"\n<br>-");
# 139
    tmp___45 = add_help_link((char const   *)"session-cookies-only", csp->config);
# 139
    string_join(& result, tmp___45);
    }
  }
# 140
  if (flags & 512UL) {
    {
# 140
    string_append(& result, (char const   *)"\n<br>+");
# 140
    tmp___46 = add_help_link((char const   *)"set-image-blocker", csp->config);
# 140
    string_join(& result, tmp___46);
# 140
    string_append(& result, (char const   *)"{");
# 140
    tmp___47 = html_encode((char const   *)action->string[2]);
# 140
    string_join(& result, tmp___47);
# 140
    string_append(& result, (char const   *)"}");
    }
  } else {
    {
# 140
    string_append(& result, (char const   *)"\n<br>-");
# 140
    tmp___48 = add_help_link((char const   *)"set-image-blocker", csp->config);
# 140
    string_join(& result, tmp___48);
    }
  }
# 1721 "actions.c"
  return (result);
}
}
# 1 "cgi.c"
__asm__("booo - error in global cgi_rcs (cgi.c:1)");
# 72 "/users/rupak/ccured/include/ccured_GNUCC.patch"
extern int _get__ctype_b(int  ) ;
# 116 "/usr/include/ctype.h"
extern int tolower(int __c ) ;
# 119
extern int toupper(int __c ) ;
# 101 "cgisimple.h"
jb_err cgi_default(struct client_state *csp , struct http_response *rsp ,
                   struct map  const  *parameters ) ;
# 104
jb_err cgi_error_404(struct client_state *csp , struct http_response *rsp ,
                     struct map  const  *parameters ) ;
# 107
jb_err cgi_robots_txt(struct client_state *csp , struct http_response *rsp ,
                      struct map  const  *parameters ) ;
# 110
jb_err cgi_send_banner(struct client_state *csp , struct http_response *rsp ,
                       struct map  const  *parameters ) ;
# 113
jb_err cgi_show_status(struct client_state *csp , struct http_response *rsp ,
                       struct map  const  *parameters ) ;
# 116
jb_err cgi_show_url_info(struct client_state *csp , struct http_response *rsp ,
                         struct map  const  *parameters ) ;
# 119
jb_err cgi_show_version(struct client_state *csp , struct http_response *rsp ,
                        struct map  const  *parameters ) ;
# 122
jb_err cgi_show_request(struct client_state *csp , struct http_response *rsp ,
                        struct map  const  *parameters ) ;
# 125
jb_err cgi_transparent_image(struct client_state *csp ,
                             struct http_response *rsp ,
                             struct map  const  *parameters ) ;
# 128
jb_err cgi_send_stylesheet(struct client_state *csp ,
                           struct http_response *rsp ,
                           struct map  const  *parameters ) ;
# 139
extern char const   cgisimple_rcs[58] ;
# 140
extern char const   cgisimple_h_rcs[54] ;
# 101 "cgiedit.h"
jb_err cgi_edit_actions(struct client_state *csp , struct http_response *rsp ,
                        struct map  const  *parameters ) ;
# 104
jb_err cgi_edit_actions_for_url(struct client_state *csp ,
                                struct http_response *rsp ,
                                struct map  const  *parameters ) ;
# 107
jb_err cgi_edit_actions_list(struct client_state *csp ,
                             struct http_response *rsp ,
                             struct map  const  *parameters ) ;
# 110
jb_err cgi_edit_actions_submit(struct client_state *csp ,
                               struct http_response *rsp ,
                               struct map  const  *parameters ) ;
# 113
jb_err cgi_edit_actions_url(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ) ;
# 116
jb_err cgi_edit_actions_url_form(struct client_state *csp ,
                                 struct http_response *rsp ,
                                 struct map  const  *parameters ) ;
# 119
jb_err cgi_edit_actions_add_url(struct client_state *csp ,
                                struct http_response *rsp ,
                                struct map  const  *parameters ) ;
# 122
jb_err cgi_edit_actions_add_url_form(struct client_state *csp ,
                                     struct http_response *rsp ,
                                     struct map  const  *parameters ) ;
# 125
jb_err cgi_edit_actions_remove_url(struct client_state *csp ,
                                   struct http_response *rsp ,
                                   struct map  const  *parameters ) ;
# 128
jb_err cgi_edit_actions_remove_url_form(struct client_state *csp ,
                                        struct http_response *rsp ,
                                        struct map  const  *parameters ) ;
# 131
jb_err cgi_edit_actions_section_remove(struct client_state *csp ,
                                       struct http_response *rsp ,
                                       struct map  const  *parameters ) ;
# 134
jb_err cgi_edit_actions_section_add(struct client_state *csp ,
                                    struct http_response *rsp ,
                                    struct map  const  *parameters ) ;
# 137
jb_err cgi_edit_actions_section_swap(struct client_state *csp ,
                                     struct http_response *rsp ,
                                     struct map  const  *parameters ) ;
# 140
jb_err cgi_toggle(struct client_state *csp , struct http_response *rsp ,
                  struct map  const  *parameters ) ;
# 143
jb_err cgi_error_disabled(struct client_state *csp , struct http_response *rsp ) ;
# 149
extern char const   cgiedit_rcs[56] ;
# 150
char const   cgiedit_h_rcs[55] ;
# 159 "loadcfg.h"
int global_toggle_state ;
# 162
char const   *configfile ;
# 170
int Argc ;
# 171
char const   **Argv ;
# 175
struct configuration_spec *load_config(void) ;
# 182
extern char const   loadcfg_rcs[56] ;
# 183
char const   loadcfg_h_rcs[56] ;
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
# 163 "/users/rupak/ccured/include/gcc_3.2/pthread.h"
extern int pthread_create(pthread_t * __restrict  __threadp ,
                          pthread_attr_t const   * __restrict  __attr ,
                          void *(*__start_routine)(void * ) ,
                          void * __restrict  __arg ) ;
# 169
extern pthread_t pthread_self(void) ;
# 195
extern int pthread_attr_init(pthread_attr_t *__attr ) ;
# 198
extern int pthread_attr_destroy(pthread_attr_t *__attr ) ;
# 201
extern int pthread_attr_setdetachstate(pthread_attr_t *__attr ,
                                       int __detachstate ) ;
# 483 "cgi.c"
char const   cgi_h_rcs[52]   = 
# 483
  {'$', 'I', 'd', ':', ' ', 'c', 'g', 'i', '.', 'h', ',', 'v', ' ', '1', '.',
   '2', '9', '.', '2', '.', '1', ' ', '2', '0', '0', '3', '/', '1', '2', '/',
   '1', '7', ' ', '1', '6', ':', '3', '3', ':', '2', '8', ' ', 'o', 'e', 's',
   ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 490
static struct cgi_dispatcher  const  cgi_dispatchers[33]   = 
# 490
  {{(char const   */* const  */)((char const   *)""),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_default),
    (char const   */* const  */)((char const   *)"Privoxy main page"), 1},
   {(char const   */* const  */)((char const   *)"show-status"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_show_status),
    (char const   */* const  */)((char const   *)"View & change the current configuration"),
    1},
   {(char const   */* const  */)((char const   *)"show-version"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_show_version),
    (char const   */* const  */)((char const   *)"View the source code version numbers"),
    1},
   {(char const   */* const  */)((char const   *)"show-request"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_show_request),
    (char const   */* const  */)((char const   *)"View the request headers."), 1},
   {(char const   */* const  */)((char const   *)"show-url-info"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_show_url_info),
    (char const   */* const  */)((char const   *)"Look up which actions apply to a URL and why"),
    1},
   {(char const   */* const  */)((char const   *)"toggle"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_toggle),
    (char const   */* const  */)((char const   *)"Toggle Privoxy on or off"), 0},
   {(char const   */* const  */)((char const   *)"edit-actions"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"eaa"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_add_url_form),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"eau"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_url_form),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"ear"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_remove_url_form),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"eal"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_list),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"eafu"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_for_url),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"eas"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_submit),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"easa"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_section_add),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"easr"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_section_remove),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"eass"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_section_swap),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"edit-actions-for-url"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_for_url),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"edit-actions-list"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_list),
    (char const   */* const  */)((char const   *)((void *)0)), 1},
   {(char const   */* const  */)((char const   *)"edit-actions-submit"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_submit),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"edit-actions-url"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_url),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"edit-actions-url-form"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_url_form),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"edit-actions-add-url"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_add_url),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"edit-actions-add-url-form"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_add_url_form),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"edit-actions-remove-url"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_remove_url),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"edit-actions-remove-url-form"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_remove_url_form),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"edit-actions-section-add"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_section_add),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"edit-actions-section-remove"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_section_remove),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"edit-actions-section-swap"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_edit_actions_section_swap),
    (char const   */* const  */)((char const   *)((void *)0)), 0},
   {(char const   */* const  */)((char const   *)"robots.txt"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_robots_txt),
    (char const   */* const  */)((char const   *)((void *)0)), 1},
   {(char const   */* const  */)((char const   *)"send-banner"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_send_banner),
    (char const   */* const  */)((char const   *)((void *)0)), 1},
   {(char const   */* const  */)((char const   *)"send-stylesheet"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_send_stylesheet),
    (char const   */* const  */)((char const   *)((void *)0)), 1},
   {(char const   */* const  */)((char const   *)"t"),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_transparent_image),
    (char const   */* const  */)((char const   *)((void *)0)), 1},
   {(char const   */* const  */)((char const   *)((void *)0)),
    (jb_err (*/* const  */)(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ))(& cgi_error_404),
    (char const   */* const  */)((char const   *)((void *)0)), 1}};
# 649
char const   image_pattern_data[65]   = 
# 649
  {'G', 'I', 'F', '8', '9', 'a', '\004', '\0', '\004', '\0', '\200', '\0', '\0',
   '\310', '\310', '\310', '\377', '\377', '\377', '!', '\376', '\016', 'I',
   ' ', 'w', 'a', 's', ' ', 'a', ' ', 'b', 'a', 'n', 'n', 'e', 'r', '\0', '!',
   '\371', '\004', '\001', '\n', '\0', '\001', '\0', ',', '\0', '\0', '\0',
   '\0', '\004', '\0', '\004', '\0', '\0', '\002', '\005', 'D', '|', 'g',
   '\270', '\005', '\0', ';', '\0'};
# 659
char const   image_blank_data[44]   = 
# 659
  {'G', 'I', 'F', '8', '9', 'a', '\001', '\0', '\001', '\0', '\200', '\0', '\0',
   '\377', '\377', '\377', '\0', '\0', '\0', '!', '\371', '\004', '\001', '\0',
   '\0', '\0', '\0', ',', '\0', '\0', '\0', '\0', '\001', '\0', '\001', '\0',
   '\0', '\002', '\002', 'D', '\001', '\0', ';', '\0'};
# 665
unsigned int image_pattern_length   = sizeof(image_pattern_data) - 1U;
# 666
unsigned int image_blank_length   = sizeof(image_blank_data) - 1U;
# 669
static struct http_response cgi_error_memory_response[1]  ;
# 671
static struct http_response *dispatch_known_cgi(struct client_state *csp ,
                                                char const   *path ) ;
# 673
static struct map *parse_cgi_parameters(char *argstring ) ;
# 693
struct http_response *dispatch_cgi(struct client_state *csp ) 
{ char const   *host ;
  char const   *path ;
  size_t tmp ;
  int tmp___0 ;
  int tmp___1 ;
  size_t tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  struct http_response *tmp___6 ;

  {
  {
# 695
  host = (char const   *)csp->http[0].host;
# 696
  path = (char const   *)csp->http[0].path;
# 705
  tmp___4 = strcmpic(host, (char const   *)"p.p");
  }
# 705
  if (0 == tmp___4) {
    goto _L___1;
  } else {
    {
# 705
    tmp___5 = strcmpic(host, (char const   *)"p.p.");
    }
# 705
    if (0 == tmp___5) {
      _L___1: 
# 705
      if ((int const   )(*(path + 0)) == 47) {
        {
# 710
        path ++;
        }
      } else {
        goto _L___0;
      }
    } else {
      _L___0: 
      {
# 713
      tmp___0 = strcmpic(host, (char const   *)"config.privoxy.org");
      }
# 713
      if (0 == tmp___0) {
        goto _L;
      } else {
        {
# 713
        tmp___1 = strcmpic(host, (char const   *)"config.privoxy.org.");
        }
# 713
        if (0 == tmp___1) {
          _L: 
          {
# 713
          tmp___2 = strlen((char const   *)"");
# 713
          tmp___3 = strncmpic(path, (char const   *)"", tmp___2);
          }
# 713
          if (0 == tmp___3) {
            {
# 718
            tmp = strlen((char const   *)"");
# 718
            path += tmp;
            }
# 719
            if ((int const   )(*path) == 47) {
              {
# 722
              path ++;
              }
            } else {
# 724
              if ((int const   )(*path) != 0) {
# 730
                return ((struct http_response *)((void *)0));
              }
            }
          } else {
# 736
            return ((struct http_response *)((void *)0));
          }
        } else {
# 736
          return ((struct http_response *)((void *)0));
        }
      }
    }
  }
  {
# 743
  tmp___6 = dispatch_known_cgi(csp, path);
  }
# 743
  return (tmp___6);
}
}
# 766
char *grep_cgi_referrer(struct client_state *csp ) 
{ struct list_entry *p ;
  int tmp ;

  {
  {
# 770
  p = csp->headers[0].first;
  }
# 770
  while ((unsigned int )p != (unsigned int )((void *)0)) {
# 772
    if ((unsigned int )p->str == (unsigned int )((void *)0)) {
      goto __Cont;
    }
    {
# 773
    tmp = strncmpic((char const   *)p->str, (char const   *)"Referer: ", 9U);
    }
# 773
    if (tmp == 0) {
# 775
      return (p->str + 9);
    }
    __Cont: 
    {
# 770
    p = p->next;
    }
  }
# 778
  return ((char *)((void *)0));
}
}
# 803
static struct http_response *dispatch_known_cgi(struct client_state *csp ,
                                                char const   *path ) 
{ struct cgi_dispatcher  const  *d ;
  struct map *param_list ;
  struct http_response *rsp ;
  char *query_args_start ;
  char *path_copy ;
  char *referrer ;
  jb_err err ;
  struct http_response *tmp ;
  char *tmp___0 ;
  struct http_response *tmp___1 ;
  struct http_response *tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  struct http_response *tmp___5 ;
  struct http_response *tmp___6 ;
  int tmp___7 ;

  {
  {
# 814
  path_copy = strdup(path);
  }
# 814
  if ((unsigned int )((void *)0) == (unsigned int )path_copy) {
    {
# 816
    tmp = cgi_error_memory();
    }
# 816
    return (tmp);
  }
  {
# 819
  query_args_start = path_copy;
  }
# 820
  while (1) {
# 820
    if ((*query_args_start)) {
# 820
      if (! ((int )(*query_args_start) != 63)) {
# 820
        break;
      }
    } else {
# 820
      break;
    }
    {
# 822
    query_args_start ++;
    }
  }
# 824
  if ((int )(*query_args_start) == 63) {
    {
# 826
    tmp___0 = query_args_start;
# 826
    query_args_start ++;
# 826
    (*tmp___0) = '\0';
    }
  }
  {
# 829
  param_list = parse_cgi_parameters(query_args_start);
  }
# 829
  if ((unsigned int )((void *)0) == (unsigned int )param_list) {
    {
# 831
    free((void *)path_copy);
# 832
    tmp___1 = cgi_error_memory();
    }
# 832
    return (tmp___1);
  }
  {
# 842
  rsp = alloc_http_response();
  }
# 842
  if ((unsigned int )((void *)0) == (unsigned int )rsp) {
    {
# 844
    free((void *)path_copy);
# 845
    free_map(param_list);
# 846
    tmp___2 = cgi_error_memory();
    }
# 846
    return (tmp___2);
  }
  {
# 849
  log_error(1, "%s%s cgi call", csp->http[0].hostport, csp->http[0].path);
# 850
  log_error(512, "%s - - [%T] \"%s\" 200 3", csp->ip_addr_str, csp->http[0].cmd);
# 856
  d = cgi_dispatchers;
  }
# 857
  while (1) {
# 859
    if ((unsigned int )d->name == (unsigned int )((void *)0)) {
      goto _L___0;
    } else {
      {
# 859
      tmp___7 = strcmp((char const   *)path_copy, (char const   *)d->name);
      }
# 859
      if (tmp___7 == 0) {
        _L___0: 
# 865
        if (d->harmless) {
          {
# 870
          err = ((*(d->handler)))(csp, rsp, (struct map  const  *)param_list);
          }
        } else {
          {
# 865
          referrer = grep_cgi_referrer(csp);
          }
# 865
          if ((unsigned int )((void *)0) != (unsigned int )referrer) {
            {
# 865
            tmp___4 = strncmp((char const   *)referrer,
                              (char const   *)"http://config.privoxy.org/", 26U);
            }
# 865
            if (0 == tmp___4) {
              {
# 870
              err = ((*(d->handler)))(csp, rsp, (struct map  const  *)param_list);
              }
            } else {
              goto _L;
            }
          } else {
            _L: 
            {
# 878
            tmp___3 = strcmp((char const   *)path_copy, (char const   *)"toggle");
            }
# 878
            if (0 == tmp___3) {
              {
# 880
              unmap(param_list, (char const   *)"set");
# 881
              err = ((*(d->handler)))(csp, rsp, (struct map  const  *)param_list);
              }
            } else {
              {
# 885
              err = cgi_error_disabled(csp, rsp);
              }
            }
          }
        }
        {
# 889
        free((void *)path_copy);
# 890
        free_map(param_list);
        }
# 892
        if (err == 2) {
          {
# 894
          err = cgi_error_bad_param(csp, rsp);
          }
        }
# 896
        if (err) {
# 896
          if (err != 1) {
            {
# 899
            log_error(8192,
                      "Unexpected CGI error %d in top-level handler.  Please file a bug report!",
                      err);
# 900
            err = cgi_error_unknown(csp, rsp, err);
            }
          }
        }
# 902
        if (err) {
          {
# 910
          free_http_response(rsp);
# 911
          tmp___6 = cgi_error_memory();
          }
# 911
          return (tmp___6);
        } else {
          {
# 905
          tmp___5 = finish_http_response(rsp);
          }
# 905
          return (tmp___5);
        }
      }
    }
    {
# 914
    d ++;
    }
  }
# 916
  return ((struct http_response *)0);
}
}
# 932
static struct map *parse_cgi_parameters(char *argstring ) 
{ char *p ;
  char *vector[5000] ;
  int pairs ;
  int i ;
  struct map *cgi_params ;
  char const   *tmp ;
  char const   *tmp___0 ;
  jb_err tmp___1 ;

  {
  {
# 939
  cgi_params = new_map();
  }
# 939
  if ((unsigned int )((void *)0) == (unsigned int )cgi_params) {
# 941
    return ((struct map *)((void *)0));
  }
  {
# 949
  p = strchr((char const   *)argstring, (int )'#');
  }
# 949
  if ((unsigned int )((void *)0) != (unsigned int )p) {
    {
# 951
    (*p) = '\0';
    }
  }
  {
# 954
  pairs = ssplit(argstring, (char const   *)"&", vector,
                 (int )(sizeof(vector) / sizeof(vector[0])), 1, 1);
# 956
  i = 0;
  }
# 956
  while (i < pairs) {
    {
# 958
    p = strchr((char const   *)vector[i], (int )'=');
    }
# 958
    if ((unsigned int )((void *)0) != (unsigned int )p) {
# 958
      if ((int )(*(p + 1)) != 0) {
        {
# 960
        (*p) = '\0';
# 961
        p ++;
# 961
        tmp = (char const   *)url_decode((char const   *)p);
# 961
        tmp___0 = (char const   *)url_decode((char const   *)vector[i]);
# 961
        tmp___1 = map(cgi_params, tmp___0, 0, tmp, 0);
        }
# 961
        if (tmp___1) {
          {
# 963
          free_map(cgi_params);
          }
# 964
          return ((struct map *)((void *)0));
        }
      }
    }
    {
# 956
    i ++;
    }
  }
# 969
  return (cgi_params);
}
}
# 988
char get_char_param(struct map  const  *parameters , char const   *param_name ) 
{ char ch ;
  char const   *tmp ;

  {
# 993
  if (! parameters) {
    {
# 993
    __assert_fail((char const   *)"parameters", (char const   *)"cgi.c", 993U,
                  (char const   *)"get_char_param");
    }
  }
# 994
  if (! param_name) {
    {
# 994
    __assert_fail((char const   *)"param_name", (char const   *)"cgi.c", 994U,
                  (char const   *)"get_char_param");
    }
  }
  {
# 996
  tmp = lookup(parameters, param_name);
# 996
  ch = (*tmp);
  }
# 997
  if ((int )ch >= 97) {
# 997
    if ((int )ch <= 122) {
      {
# 999
      ch = (char )(((int )ch - 97) + 65);
      }
    }
  }
# 1002
  return (ch);
}
}
# 1028
jb_err get_string_param(struct map  const  *parameters ,
                        char const   *param_name , char const   **pparam ) 
{ char const   *param ;
  char const   *s ;
  char ch ;
  size_t tmp ;
  char const   *tmp___0 ;

  {
# 1036
  if (! parameters) {
    {
# 1036
    __assert_fail((char const   *)"parameters", (char const   *)"cgi.c", 1036U,
                  (char const   *)"get_string_param");
    }
  }
# 1037
  if (! param_name) {
    {
# 1037
    __assert_fail((char const   *)"param_name", (char const   *)"cgi.c", 1037U,
                  (char const   *)"get_string_param");
    }
  }
# 1038
  if (! pparam) {
    {
# 1038
    __assert_fail((char const   *)"pparam", (char const   *)"cgi.c", 1038U,
                  (char const   *)"get_string_param");
    }
  }
  {
# 1040
  (*pparam) = (char const   *)((void *)0);
# 1042
  param = lookup(parameters, param_name);
  }
# 1043
  if (! (*param)) {
# 1045
    return (0);
  }
  {
# 1048
  tmp = strlen(param);
  }
# 1048
  if (tmp >= 500U) {
# 1057
    return (2);
  }
  {
# 1061
  s = param;
  }
# 1062
  while (1) {
    {
# 1062
    tmp___0 = s;
# 1062
    s ++;
# 1062
    ch = (*tmp___0);
    }
# 1062
    if (! ((int )ch != 0)) {
# 1062
      break;
    }
# 1064
    if ((int )((unsigned char )ch) < 32) {
# 1068
      return (2);
    } else {
# 1064
      if ((int )ch == 125) {
# 1068
        return (2);
      }
    }
  }
  {
# 1073
  (*pparam) = param;
  }
# 1075
  return (0);
}
}
# 1099
jb_err get_number_param(struct client_state *csp ,
                        struct map  const  *parameters , char *name ,
                        unsigned int *pvalue ) 
{ char const   *param ;
  char ch ;
  unsigned int value ;
  char const   *tmp ;

  {
# 1108
  if (! csp) {
    {
# 1108
    __assert_fail((char const   *)"csp", (char const   *)"cgi.c", 1108U,
                  (char const   *)"get_number_param");
    }
  }
# 1109
  if (! parameters) {
    {
# 1109
    __assert_fail((char const   *)"parameters", (char const   *)"cgi.c", 1109U,
                  (char const   *)"get_number_param");
    }
  }
# 1110
  if (! name) {
    {
# 1110
    __assert_fail((char const   *)"name", (char const   *)"cgi.c", 1110U,
                  (char const   *)"get_number_param");
    }
  }
# 1111
  if (! pvalue) {
    {
# 1111
    __assert_fail((char const   *)"pvalue", (char const   *)"cgi.c", 1111U,
                  (char const   *)"get_number_param");
    }
  }
  {
# 1113
  (*pvalue) = 0U;
# 1115
  param = lookup(parameters, (char const   *)name);
  }
# 1116
  if (! (*param)) {
# 1118
    return (2);
  }
  {
# 1123
  value = 0U;
  }
# 1124
  while (1) {
    {
# 1124
    tmp = param;
# 1124
    param ++;
# 1124
    ch = (*tmp);
    }
# 1124
    if (! ((int )ch != 0)) {
# 1124
      break;
    }
# 1126
    if ((int )ch < 48) {
# 1128
      return (2);
    } else {
# 1126
      if ((int )ch > 57) {
# 1128
        return (2);
      }
    }
    {
# 1131
    ch = (char )((int )ch - 48);
    }
# 1140
    if (value > (4294967295U - (unsigned int )ch) / 10U) {
# 1142
      return (2);
    }
    {
# 1145
    value = value * 10U + (unsigned int )ch;
    }
  }
  {
# 1149
  (*pvalue) = value;
  }
# 1151
  return (0);
}
}
# 1172
struct http_response *error_response(struct client_state *csp ,
                                     char const   *templatename , int sys_err ) 
{ jb_err err ;
  struct http_response *rsp ;
  struct map *exports ;
  struct map *tmp ;
  struct http_response *tmp___0 ;
  struct http_response *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  char *tmp___5 ;
  char const   *tmp___6 ;
  char const   *tmp___7 ;
  char const   *tmp___8 ;
  char const   *tmp___9 ;
  struct http_response *tmp___10 ;
  struct http_response *tmp___11 ;
  struct http_response *tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  struct http_response *tmp___15 ;
  struct http_response *tmp___16 ;

  {
  {
# 1178
  tmp = default_exports((struct client_state  const  *)csp,
                        (char const   *)((void *)0));
# 1178
  exports = tmp;
  }
# 1179
  if ((unsigned int )exports == (unsigned int )((void *)0)) {
    {
# 1181
    tmp___0 = cgi_error_memory();
    }
# 1181
    return (tmp___0);
  }
  {
# 1184
  rsp = alloc_http_response();
  }
# 1184
  if ((unsigned int )((void *)0) == (unsigned int )rsp) {
    {
# 1186
    free_map(exports);
# 1187
    tmp___1 = cgi_error_memory();
    }
# 1187
    return (tmp___1);
  }
  {
# 1190
  tmp___2 = (char const   *)html_encode((char const   *)csp->http[0].host);
# 1190
  err = map(exports, (char const   *)"host", 1, tmp___2, 0);
  }
# 1191
  if (! err) {
    {
# 1191
    tmp___3 = (char const   *)html_encode((char const   *)csp->http[0].hostport);
# 1191
    err = map(exports, (char const   *)"hostport", 1, tmp___3, 0);
    }
  }
# 1192
  if (! err) {
    {
# 1192
    tmp___4 = (char const   *)html_encode((char const   *)csp->http[0].path);
# 1192
    err = map(exports, (char const   *)"path", 1, tmp___4, 0);
    }
  }
# 1193
  if (! err) {
    {
# 1193
    tmp___5 = safe_strerror(sys_err);
# 1193
    tmp___6 = (char const   *)html_encode_and_free_original(tmp___5);
# 1193
    err = map(exports, (char const   *)"error", 1, tmp___6, 0);
    }
  }
# 1194
  if (! err) {
# 1194
    if (csp->http[0].ssl) {
      {
# 1194
      tmp___7 = (char const   *)"https://";
      }
    } else {
      {
# 1194
      tmp___7 = (char const   *)"http://";
      }
    }
    {
# 1194
    err = map(exports, (char const   *)"protocol", 1, tmp___7, 1);
    }
  }
# 1195
  if (! err) {
    {
# 1197
    tmp___8 = (char const   *)html_encode((char const   *)csp->http[0].host_ip_addr_str);
# 1197
    err = map(exports, (char const   *)"host-ip", 1, tmp___8, 0);
    }
# 1198
    if (err) {
      {
# 1201
      tmp___9 = (char const   *)html_encode((char const   *)csp->http[0].host);
# 1201
      err = map(exports, (char const   *)"host-ip", 1, tmp___9, 0);
      }
    }
  }
# 1206
  if (err) {
    {
# 1208
    free_map(exports);
# 1209
    free_http_response(rsp);
# 1210
    tmp___10 = cgi_error_memory();
    }
# 1210
    return (tmp___10);
  }
  {
# 1213
  tmp___14 = strcmp(templatename, (char const   *)"no-such-domain");
  }
# 1213
  if (tmp___14) {
    {
# 1223
    tmp___13 = strcmp(templatename, (char const   *)"connect-failed");
    }
# 1223
    if (! tmp___13) {
      {
# 1225
      rsp->status = strdup((char const   *)"503 Connect failed");
      }
# 1226
      if ((unsigned int )rsp->status == (unsigned int )((void *)0)) {
        {
# 1228
        free_map(exports);
# 1229
        free_http_response(rsp);
# 1230
        tmp___12 = cgi_error_memory();
        }
# 1230
        return (tmp___12);
      }
    }
  } else {
    {
# 1215
    rsp->status = strdup((char const   *)"404 No such domain");
    }
# 1216
    if ((unsigned int )rsp->status == (unsigned int )((void *)0)) {
      {
# 1218
      free_map(exports);
# 1219
      free_http_response(rsp);
# 1220
      tmp___11 = cgi_error_memory();
      }
# 1220
      return (tmp___11);
    }
  }
  {
# 1234
  err = template_fill_for_cgi(csp, templatename, exports, rsp);
  }
# 1235
  if (err) {
    {
# 1237
    free_http_response(rsp);
# 1238
    tmp___15 = cgi_error_memory();
    }
# 1238
    return (tmp___15);
  }
  {
# 1241
  tmp___16 = finish_http_response(rsp);
  }
# 1241
  return (tmp___16);
}
}
# 1257
void cgi_init_error_messages(void) 
{ 

  {
  {
# 1259
  memset((void *)(cgi_error_memory_response), (int )'\0',
         sizeof(cgi_error_memory_response[0]));
# 1260
  cgi_error_memory_response[0].head = "HTTP/1.0 500 Internal Privoxy Error\r\nContent-Type: text/html\r\n\r\n";
# 1264
  cgi_error_memory_response[0].body = "<html>\r\n<head><title>500 Internal Privoxy Error</title></head>\r\n<body>\r\n<h1>500 Internal Privoxy Error</h1>\r\n<p>Privoxy <b>ran out of memory</b> while processing your request.</p>\r\n<p>Please contact your proxy administrator, or try again later</p>\r\n</body>\r\n</html>\r\n";
# 1274
  cgi_error_memory_response[0].head_length = strlen((char const   *)cgi_error_memory_response[0].head);
# 1276
  cgi_error_memory_response[0].content_length = strlen((char const   *)cgi_error_memory_response[0].body);
  }
# 1278
  return;
}
}
# 1294
struct http_response *cgi_error_memory(void) 
{ 

  {
# 1297
  if (! cgi_error_memory_response[0].head) {
    {
# 1297
    __assert_fail((char const   *)"cgi_error_memory_response->head",
                  (char const   *)"cgi.c", 1297U,
                  (char const   *)"cgi_error_memory");
    }
  }
# 1299
  return (cgi_error_memory_response);
}
}
# 1326
static char const   status[27]   = 
# 1326
  {'5', '0', '0', ' ', 'I', 'n', 't', 'e', 'r', 'n', 'a', 'l', ' ', 'P', 'r',
   'i', 'v', 'o', 'x', 'y', ' ', 'E', 'r', 'r', 'o', 'r', '\0'};
# 1328
static char const   body_prefix[219]   = 
# 1328
  {'<', 'h', 't', 'm', 'l', '>', '\r', '\n', '<', 'h', 'e', 'a', 'd', '>', '<',
   't', 'i', 't', 'l', 'e', '>', '5', '0', '0', ' ', 'I', 'n', 't', 'e', 'r',
   'n', 'a', 'l', ' ', 'P', 'r', 'i', 'v', 'o', 'x', 'y', ' ', 'E', 'r', 'r',
   'o', 'r', '<', '/', 't', 'i', 't', 'l', 'e', '>', '<', '/', 'h', 'e', 'a',
   'd', '>', '\r', '\n', '<', 'b', 'o', 'd', 'y', '>', '\r', '\n', '<', 'h',
   '1', '>', '5', '0', '0', ' ', 'I', 'n', 't', 'e', 'r', 'n', 'a', 'l', ' ',
   'P', 'r', 'i', 'v', 'o', 'x', 'y', ' ', 'E', 'r', 'r', 'o', 'r', '<', '/',
   'h', '1', '>', '\r', '\n', '<', 'p', '>', 'P', 'r', 'i', 'v', 'o', 'x', 'y',
   ' ', 'e', 'n', 'c', 'o', 'u', 'n', 't', 'e', 'r', 'e', 'd', ' ', 'a', 'n',
   ' ', 'e', 'r', 'r', 'o', 'r', ' ', 'w', 'h', 'i', 'l', 'e', ' ', 'p', 'r',
   'o', 'c', 'e', 's', 's', 'i', 'n', 'g', ' ', 'y', 'o', 'u', 'r', ' ', 'r',
   'e', 'q', 'u', 'e', 's', 't', ':', '<', '/', 'p', '>', '\r', '\n', '<', 'p',
   '>', '<', 'b', '>', 'C', 'o', 'u', 'l', 'd', ' ', 'n', 'o', 't', ' ', 'l',
   'o', 'a', 'd', ' ', 't', 'e', 'm', 'p', 'l', 'a', 't', 'e', ' ', 'f', 'i',
   'l', 'e', ' ', '<', 'c', 'o', 'd', 'e', '>', '\0'};
# 1335
static char const   body_suffix[454]   = 
# 1335
  {'<', '/', 'c', 'o', 'd', 'e', '>', ' ', 'o', 'r', ' ', 'o', 'n', 'e', ' ',
   'o', 'f', ' ', 'i', 't', '\'', 's', ' ', 'i', 'n', 'c', 'l', 'u', 'd', 'e',
   'd', ' ', 'c', 'o', 'm', 'p', 'o', 'n', 'e', 'n', 't', 's', '.', '<', '/',
   'b', '>', '<', '/', 'p', '>', '\r', '\n', '<', 'p', '>', 'P', 'l', 'e', 'a',
   's', 'e', ' ', 'c', 'o', 'n', 't', 'a', 'c', 't', ' ', 'y', 'o', 'u', 'r',
   ' ', 'p', 'r', 'o', 'x', 'y', ' ', 'a', 'd', 'm', 'i', 'n', 'i', 's', 't',
   'r', 'a', 't', 'o', 'r', '.', '<', '/', 'p', '>', '\r', '\n', '<', 'p', '>',
   'I', 'f', ' ', 'y', 'o', 'u', ' ', 'a', 'r', 'e', ' ', 't', 'h', 'e', ' ',
   'p', 'r', 'o', 'x', 'y', ' ', 'a', 'd', 'm', 'i', 'n', 'i', 's', 't', 'r',
   'a', 't', 'o', 'r', ',', ' ', 'p', 'l', 'e', 'a', 's', 'e', ' ', 'p', 'u',
   't', ' ', 't', 'h', 'e', ' ', 'r', 'e', 'q', 'u', 'i', 'r', 'e', 'd', ' ',
   'f', 'i', 'l', 'e', '(', 's', ')', 'i', 'n', ' ', 't', 'h', 'e', ' ', '<',
   'c', 'o', 'd', 'e', '>', '<', 'i', '>', '(', 'c', 'o', 'n', 'f', 'd', 'i',
   'r', ')', '<', '/', 'i', '>', '/', 't', 'e', 'm', 'p', 'l', 'a', 't', 'e',
   's', '<', '/', 'c', 'o', 'd', 'e', '>', ' ', 'd', 'i', 'r', 'e', 'c', 't',
   'o', 'r', 'y', '.', ' ', ' ', 'T', 'h', 'e', ' ', 'l', 'o', 'c', 'a', 't',
   'i', 'o', 'n', ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', '<', 'c', 'o', 'd',
   'e', '>', '<', 'i', '>', '(', 'c', 'o', 'n', 'f', 'd', 'i', 'r', ')', '<',
   '/', 'i', '>', '<', '/', 'c', 'o', 'd', 'e', '>', ' ', 'd', 'i', 'r', 'e',
   'c', 't', 'o', 'r', 'y', ' ', 'i', 's', ' ', 's', 'p', 'e', 'c', 'i', 'f',
   'i', 'e', 'd', ' ', 'i', 'n', ' ', 't', 'h', 'e', ' ', 'm', 'a', 'i', 'n',
   ' ', 'P', 'r', 'i', 'v', 'o', 'x', 'y', ' ', '<', 'c', 'o', 'd', 'e', '>',
   'c', 'o', 'n', 'f', 'i', 'g', '<', '/', 'c', 'o', 'd', 'e', '>', ' ', 'f',
   'i', 'l', 'e', '.', ' ', ' ', '(', 'I', 't', '\'', 's', ' ', 't', 'y', 'p',
   'i', 'c', 'a', 'l', 'l', 'y', ' ', 't', 'h', 'e', ' ', 'P', 'r', 'i', 'v',
   'o', 'x', 'y', ' ', 'i', 'n', 's', 't', 'a', 'l', 'l', ' ', 'd', 'i', 'r',
   'e', 'c', 't', 'o', 'r', 'y', ',', ' ', 'o', 'r', ' ', '<', 'c', 'o', 'd',
   'e', '>', '/', 'e', 't', 'c', '/', 'p', 'r', 'i', 'v', 'o', 'x', 'y', '/',
   '<', '/', 'c', 'o', 'd', 'e', '>', ')', '.', '<', '/', 'p', '>', '\r', '\n',
   '<', '/', 'b', 'o', 'd', 'y', '>', '\r', '\n', '<', '/', 'h', 't', 'm', 'l',
   '>', '\r', '\n', '\0'};
# 1322
jb_err cgi_error_no_template(struct client_state *csp ,
                             struct http_response *rsp ,
                             char const   *template_name ) 
{ size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;

  {
# 1350
  if (! csp) {
    {
# 1350
    __assert_fail((char const   *)"csp", (char const   *)"cgi.c", 1350U,
                  (char const   *)"cgi_error_no_template");
    }
  }
# 1351
  if (! rsp) {
    {
# 1351
    __assert_fail((char const   *)"rsp", (char const   *)"cgi.c", 1351U,
                  (char const   *)"cgi_error_no_template");
    }
  }
# 1352
  if (! template_name) {
    {
# 1352
    __assert_fail((char const   *)"template_name", (char const   *)"cgi.c",
                  1352U, (char const   *)"cgi_error_no_template");
    }
  }
# 1355
  if (rsp->status) {
    {
# 1355
    free((void *)rsp->status);
# 1355
    rsp->status = (char *)((void *)0);
    }
  }
# 1356
  if (rsp->head) {
    {
# 1356
    free((void *)rsp->head);
# 1356
    rsp->head = (char *)((void *)0);
    }
  }
# 1357
  if (rsp->body) {
    {
# 1357
    free((void *)rsp->body);
# 1357
    rsp->body = (char *)((void *)0);
    }
  }
  {
# 1358
  rsp->content_length = 0U;
# 1359
  rsp->head_length = 0U;
# 1360
  rsp->is_static = 0;
# 1362
  tmp = strlen(body_prefix);
# 1362
  tmp___0 = strlen(template_name);
# 1362
  tmp___1 = strlen(body_suffix);
# 1362
  rsp->body = (char *)malloc(((tmp + tmp___0) + tmp___1) + 1U);
  }
# 1363
  if ((unsigned int )rsp->body == (unsigned int )((void *)0)) {
# 1365
    return (1);
  }
  {
# 1367
  strcpy((char */* __restrict  */)rsp->body,
         (char const   */* __restrict  */)(body_prefix));
# 1368
  strcat((char */* __restrict  */)rsp->body,
         (char const   */* __restrict  */)template_name);
# 1369
  strcat((char */* __restrict  */)rsp->body,
         (char const   */* __restrict  */)(body_suffix));
# 1371
  rsp->status = strdup(status);
  }
# 1372
  if ((unsigned int )rsp->body == (unsigned int )((void *)0)) {
# 1374
    return (1);
  }
# 1377
  return (0);
}
}
# 1409
static char const   status___0[27]   = 
# 1409
  {'5', '0', '0', ' ', 'I', 'n', 't', 'e', 'r', 'n', 'a', 'l', ' ', 'P', 'r',
   'i', 'v', 'o', 'x', 'y', ' ', 'E', 'r', 'r', 'o', 'r', '\0'};
# 1411
static char const   body_prefix___0[211]   = 
# 1411
  {'<', 'h', 't', 'm', 'l', '>', '\r', '\n', '<', 'h', 'e', 'a', 'd', '>', '<',
   't', 'i', 't', 'l', 'e', '>', '5', '0', '0', ' ', 'I', 'n', 't', 'e', 'r',
   'n', 'a', 'l', ' ', 'P', 'r', 'i', 'v', 'o', 'x', 'y', ' ', 'E', 'r', 'r',
   'o', 'r', '<', '/', 't', 'i', 't', 'l', 'e', '>', '<', '/', 'h', 'e', 'a',
   'd', '>', '\r', '\n', '<', 'b', 'o', 'd', 'y', '>', '\r', '\n', '<', 'h',
   '1', '>', '5', '0', '0', ' ', 'I', 'n', 't', 'e', 'r', 'n', 'a', 'l', ' ',
   'P', 'r', 'i', 'v', 'o', 'x', 'y', ' ', 'E', 'r', 'r', 'o', 'r', '<', '/',
   'h', '1', '>', '\r', '\n', '<', 'p', '>', 'P', 'r', 'i', 'v', 'o', 'x', 'y',
   ' ', 'e', 'n', 'c', 'o', 'u', 'n', 't', 'e', 'r', 'e', 'd', ' ', 'a', 'n',
   ' ', 'e', 'r', 'r', 'o', 'r', ' ', 'w', 'h', 'i', 'l', 'e', ' ', 'p', 'r',
   'o', 'c', 'e', 's', 's', 'i', 'n', 'g', ' ', 'y', 'o', 'u', 'r', ' ', 'r',
   'e', 'q', 'u', 'e', 's', 't', ':', '<', '/', 'p', '>', '\r', '\n', '<', 'p',
   '>', '<', 'b', '>', 'U', 'n', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
   'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', ' ', 'e', 'r', 'r', 'o', 'r', ':',
   ' ', '\0'};
# 1418
static char const   body_suffix___0[136]   = 
# 1418
  {'<', '/', 'b', '>', '<', '/', 'p', '>', '\r', '\n', '<', 'p', '>', 'P', 'l',
   'e', 'a', 's', 'e', ' ', '<', 'a', ' ', 'h', 'r', 'e', 'f', '=', '\"', 'h',
   't', 't', 'p', ':', '/', '/', 's', 'o', 'u', 'r', 'c', 'e', 'f', 'o', 'r',
   'g', 'e', '.', 'n', 'e', 't', '/', 't', 'r', 'a', 'c', 'k', 'e', 'r', '/',
   '?', 'g', 'r', 'o', 'u', 'p', '_', 'i', 'd', '=', '1', '1', '1', '1', '8',
   '&', 'a', 't', 'i', 'd', '=', '1', '1', '1', '1', '1', '8', '\"', '>', 'f',
   'i', 'l', 'e', ' ', 'a', ' ', 'b', 'u', 'g', ' ', 'r', 'e', 'p', 'o', 'r',
   't', '<', '/', 'a', '>', '.', '<', '/', 'p', '>', '\r', '\n', '<', '/', 'b',
   'o', 'd', 'y', '>', '\r', '\n', '<', '/', 'h', 't', 'm', 'l', '>', '\r',
   '\n', '\0'};
# 1405
jb_err cgi_error_unknown(struct client_state *csp , struct http_response *rsp ,
                         jb_err error_to_report ) 
{ char errnumbuf[30] ;
  size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;

  {
# 1426
  if (! csp) {
    {
# 1426
    __assert_fail((char const   *)"csp", (char const   *)"cgi.c", 1426U,
                  (char const   *)"cgi_error_unknown");
    }
  }
# 1427
  if (! rsp) {
    {
# 1427
    __assert_fail((char const   *)"rsp", (char const   *)"cgi.c", 1427U,
                  (char const   *)"cgi_error_unknown");
    }
  }
# 1430
  if (rsp->status) {
    {
# 1430
    free((void *)rsp->status);
# 1430
    rsp->status = (char *)((void *)0);
    }
  }
# 1431
  if (rsp->head) {
    {
# 1431
    free((void *)rsp->head);
# 1431
    rsp->head = (char *)((void *)0);
    }
  }
# 1432
  if (rsp->body) {
    {
# 1432
    free((void *)rsp->body);
# 1432
    rsp->body = (char *)((void *)0);
    }
  }
  {
# 1433
  rsp->content_length = 0U;
# 1434
  rsp->head_length = 0U;
# 1435
  rsp->is_static = 0;
# 1437
  sprintf((char */* __restrict  */)(errnumbuf),
          (char const   */* __restrict  */)((char const   *)"%d"),
          error_to_report);
# 1439
  tmp = strlen(body_prefix___0);
# 1439
  tmp___0 = strlen((char const   *)(errnumbuf));
# 1439
  tmp___1 = strlen(body_suffix___0);
# 1439
  rsp->body = (char *)malloc(((tmp + tmp___0) + tmp___1) + 1U);
  }
# 1440
  if ((unsigned int )rsp->body == (unsigned int )((void *)0)) {
# 1442
    return (1);
  }
  {
# 1444
  strcpy((char */* __restrict  */)rsp->body,
         (char const   */* __restrict  */)(body_prefix___0));
# 1445
  strcat((char */* __restrict  */)rsp->body,
         (char const   */* __restrict  */)((char const   *)(errnumbuf)));
# 1446
  strcat((char */* __restrict  */)rsp->body,
         (char const   */* __restrict  */)(body_suffix___0));
# 1448
  rsp->status = strdup(status___0);
  }
# 1449
  if ((unsigned int )rsp->body == (unsigned int )((void *)0)) {
# 1451
    return (1);
  }
# 1454
  return (0);
}
}
# 1475
jb_err cgi_error_bad_param(struct client_state *csp , struct http_response *rsp ) 
{ struct map *exports ;
  jb_err tmp ;

  {
# 1480
  if (! csp) {
    {
# 1480
    __assert_fail((char const   *)"csp", (char const   *)"cgi.c", 1480U,
                  (char const   *)"cgi_error_bad_param");
    }
  }
# 1481
  if (! rsp) {
    {
# 1481
    __assert_fail((char const   *)"rsp", (char const   *)"cgi.c", 1481U,
                  (char const   *)"cgi_error_bad_param");
    }
  }
  {
# 1483
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)((void *)0));
  }
# 1483
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
# 1485
    return (1);
  }
  {
# 1488
  tmp = template_fill_for_cgi(csp, (char const   *)"cgi-error-bad-param",
                              exports, rsp);
  }
# 1488
  return (tmp);
}
}
# 1509
jb_err cgi_redirect(struct http_response *rsp , char const   *target ) 
{ jb_err err ;

  {
# 1513
  if (! rsp) {
    {
# 1513
    __assert_fail((char const   *)"rsp", (char const   *)"cgi.c", 1513U,
                  (char const   *)"cgi_redirect");
    }
  }
# 1514
  if (! target) {
    {
# 1514
    __assert_fail((char const   *)"target", (char const   *)"cgi.c", 1514U,
                  (char const   *)"cgi_redirect");
    }
  }
  {
# 1516
  err = enlist_unique_header(rsp->headers, (char const   *)"Location", target);
# 1518
  rsp->status = strdup((char const   *)"302 Local Redirect from Privoxy");
  }
# 1519
  if ((unsigned int )rsp->status == (unsigned int )((void *)0)) {
# 1521
    return (1);
  }
# 1524
  return (err);
}
}
# 1550
char *add_help_link(char const   *item , struct configuration_spec *config ) 
{ char *result ;
  char *tmp ;

  {
# 1555
  if (! item) {
# 1555
    return ((char *)((void *)0));
  }
  {
# 1557
  result = strdup((char const   *)"<a href=\"");
# 1558
  string_append(& result, (char const   *)config->usermanual);
# 1559
  string_append(& result, (char const   *)"actions-file.html#");
# 1560
  tmp = string_toupper(item);
# 1560
  string_join(& result, tmp);
# 1561
  string_append(& result, (char const   *)"\">");
# 1562
  string_append(& result, item);
# 1563
  string_append(& result, (char const   *)"</a> ");
  }
# 1565
  return (result);
}
}
# 1588
static char const   day_names[7][4]   = {{'S', 'u', 'n', '\0'},
                                         {'M', 'o', 'n', '\0'},
                                         {'T', 'u', 'e', '\0'},
                                         {'W', 'e', 'd', '\0'},
                                         {'T', 'h', 'u', '\0'},
                                         {'F', 'r', 'i', '\0'},
                                         {'S', 'a', 't', '\0'}};
# 1590
static char const   month_names[12][4]   = 
# 1590
  {{'J', 'a', 'n', '\0'}, {'F', 'e', 'b', '\0'}, {'M', 'a', 'r', '\0'},
   {'A', 'p', 'r', '\0'}, {'M', 'a', 'y', '\0'}, {'J', 'u', 'n', '\0'},
   {'J', 'u', 'l', '\0'}, {'A', 'u', 'g', '\0'}, {'S', 'e', 'p', '\0'},
   {'O', 'c', 't', '\0'}, {'N', 'o', 'v', '\0'}, {'D', 'e', 'c', '\0'}};
# 1586
void get_http_time(int time_offset , char *buf ) 
{ struct tm *t ;
  time_t current_time ;
  struct tm dummy ;

  {
# 1606
  if (! buf) {
    {
# 1606
    __assert_fail((char const   *)"buf", (char const   *)"cgi.c", 1606U,
                  (char const   *)"get_http_time");
    }
  }
  {
# 1608
  time(& current_time);
# 1610
  current_time += (long )time_offset;
# 1619
  t = gmtime_r((time_t const   */* __restrict  */)((time_t const   *)(& current_time)),
               (struct tm */* __restrict  */)(& dummy));
# 1626
  snprintf((char */* __restrict  */)buf, 30U,
           (char const   */* __restrict  */)((char const   *)"%s, %02d %s %4d %02d:%02d:%02d GMT"),
           day_names[t->tm_wday], t->tm_mday, month_names[t->tm_mon],
           t->tm_year + 1900, t->tm_hour, t->tm_min, t->tm_sec);
  }
# 1637
  return;
}
}
# 1654
struct http_response *finish_http_response(struct http_response *rsp ) 
{ char buf[5000] ;
  jb_err err ;
  char const   *tmp ;
  struct http_response *tmp___1 ;

  {
# 1662
  if ((unsigned int )rsp == (unsigned int )(cgi_error_memory_response)) {
# 1664
    return (rsp);
  }
# 1670
  if (rsp->status) {
    {
# 1670
    tmp = (char const   *)rsp->status;
    }
  } else {
    {
# 1670
    tmp = (char const   *)"200 OK";
    }
  }
  {
# 1670
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"HTTP/1.0 %s"), tmp);
# 1671
  err = enlist_first(rsp->headers, (char const   *)(buf));
  }
# 1676
  if (rsp->content_length == 0U) {
# 1678
    if (rsp->body) {
      {
# 1678
      rsp->content_length = strlen((char const   *)rsp->body);
      }
    } else {
      {
# 1678
      rsp->content_length = 0U;
      }
    }
  }
# 1680
  if (! err) {
    {
# 1682
    sprintf((char */* __restrict  */)(buf),
            (char const   */* __restrict  */)((char const   *)"Content-Length: %d"),
            (int )rsp->content_length);
# 1683
    err = enlist(rsp->headers, (char const   *)(buf));
    }
  }
# 1697
  if (! err) {
    {
# 1697
    err = enlist_unique(rsp->headers, (char const   *)"Content-Type: text/html",
                        13U);
    }
  }
# 1699
  if (rsp->is_static) {
# 1706
    if (! err) {
      {
# 1708
      get_http_time(0, buf);
# 1709
      err = enlist_unique_header(rsp->headers, (char const   *)"Date",
                                 (char const   *)(buf));
      }
    }
# 1713
    if (! err) {
      {
# 1713
      err = enlist_unique_header(rsp->headers, (char const   *)"Last-Modified",
                                 (char const   *)"Sat, 17 Jun 2000 12:00:00 GMT");
      }
    }
# 1715
    if (! err) {
      {
# 1717
      get_http_time(600, buf);
# 1718
      err = enlist_unique_header(rsp->headers, (char const   *)"Expires",
                                 (char const   *)(buf));
      }
    }
  } else {
# 1728
    if (! err) {
      {
# 1728
      err = enlist_unique_header(rsp->headers, (char const   *)"Cache-Control",
                                 (char const   *)"no-cache");
      }
    }
    {
# 1730
    get_http_time(0, buf);
    }
# 1731
    if (! err) {
      {
# 1731
      err = enlist_unique_header(rsp->headers, (char const   *)"Date",
                                 (char const   *)(buf));
      }
    }
# 1732
    if (! err) {
      {
# 1732
      err = enlist_unique_header(rsp->headers, (char const   *)"Last-Modified",
                                 (char const   *)(buf));
      }
    }
# 1733
    if (! err) {
      {
# 1733
      err = enlist_unique_header(rsp->headers, (char const   *)"Expires",
                                 (char const   *)"Sat, 17 Jun 2000 12:00:00 GMT");
      }
    }
  }
# 1740
  if (err) {
    {
# 1742
    free_http_response(rsp);
# 1743
    tmp___1 = cgi_error_memory();
    }
# 1743
    return (tmp___1);
  } else {
    {
# 1740
    rsp->head = list_to_text((struct list  const  *)(rsp->headers));
    }
# 1740
    if ((unsigned int )((void *)0) == (unsigned int )rsp->head) {
      {
# 1742
      free_http_response(rsp);
# 1743
      tmp___1 = cgi_error_memory();
      }
# 1743
      return (tmp___1);
    }
  }
  {
# 1745
  rsp->head_length = strlen((char const   *)rsp->head);
  }
# 1747
  return (rsp);
}
}
# 1763
struct http_response *alloc_http_response(void) 
{ struct http_response *tmp ;

  {
  {
# 1765
  tmp = (struct http_response *)zalloc(sizeof(struct http_response ));
  }
# 1765
  return (tmp);
}
}
# 1783
void free_http_response(struct http_response *rsp ) 
{ 

  {
# 1788
  if (rsp) {
# 1788
    if ((unsigned int )rsp != (unsigned int )(cgi_error_memory_response)) {
# 1790
      if (rsp->status) {
        {
# 1790
        free((void *)rsp->status);
# 1790
        rsp->status = (char *)((void *)0);
        }
      }
# 1791
      if (rsp->head) {
        {
# 1791
        free((void *)rsp->head);
# 1791
        rsp->head = (char *)((void *)0);
        }
      }
# 1792
      if (rsp->body) {
        {
# 1792
        free((void *)rsp->body);
# 1792
        rsp->body = (char *)((void *)0);
        }
      }
      {
# 1793
      destroy_list(rsp->headers);
# 1794
      free((void *)rsp);
      }
    }
  }
# 1797
  return;
}
}
# 1822
jb_err template_load(struct client_state *csp , char **template_ptr ,
                     char const   *templatename , int recursive ) 
{ jb_err err ;
  char *templates_dir_path ;
  char *full_path ;
  char *file_buffer ;
  char *included_module ;
  char const   *p ;
  FILE *fp ;
  char buf[5000] ;
  char const   *tmp ;
  jb_err tmp___0 ;
  int tmp___1 ;
  jb_err tmp___2 ;
  char *tmp___3 ;

  {
# 1834
  if (! csp) {
    {
# 1834
    __assert_fail((char const   *)"csp", (char const   *)"cgi.c", 1834U,
                  (char const   *)"template_load");
    }
  }
# 1835
  if (! template_ptr) {
    {
# 1835
    __assert_fail((char const   *)"template_ptr", (char const   *)"cgi.c",
                  1835U, (char const   *)"template_load");
    }
  }
# 1836
  if (! templatename) {
    {
# 1836
    __assert_fail((char const   *)"templatename", (char const   *)"cgi.c",
                  1836U, (char const   *)"template_load");
    }
  }
  {
# 1838
  (*template_ptr) = (char *)((void *)0);
# 1841
  p = templatename;
  }
# 1841
  while ((int const   )(*p) != 0) {
# 1843
    if ((int const   )(*p) < 97) {
      goto _L___1;
    } else {
# 1843
      if ((int const   )(*p) > 122) {
        _L___1: 
# 1843
        if ((int const   )(*p) < 65) {
          goto _L___0;
        } else {
# 1843
          if ((int const   )(*p) > 90) {
            _L___0: 
# 1843
            if ((int const   )(*p) < 48) {
              goto _L;
            } else {
# 1843
              if ((int const   )(*p) > 57) {
                _L: 
# 1843
                if ((int const   )(*p) != 45) {
# 1843
                  if ((int const   )(*p) != 46) {
# 1850
                    return (3);
                  }
                }
              }
            }
          }
        }
      }
    }
    {
# 1841
    p ++;
    }
  }
  {
# 1856
  templates_dir_path = make_path((csp->config)->confdir,
                                 (char const   *)"templates");
  }
# 1857
  if ((unsigned int )templates_dir_path == (unsigned int )((void *)0)) {
# 1859
    return (1);
  }
  {
# 1862
  full_path = make_path((char const   *)templates_dir_path, templatename);
# 1863
  free((void *)templates_dir_path);
  }
# 1864
  if ((unsigned int )full_path == (unsigned int )((void *)0)) {
# 1866
    return (1);
  }
  {
# 1871
  file_buffer = strdup((char const   *)"");
  }
# 1872
  if ((unsigned int )file_buffer == (unsigned int )((void *)0)) {
    {
# 1874
    free((void *)full_path);
    }
# 1875
    return (1);
  }
  {
# 1880
  fp = fopen((char const   */* __restrict  */)((char const   *)full_path),
             (char const   */* __restrict  */)((char const   *)"r"));
  {
# 17 "spec.work"
    fp->__BLAST_FLAG = 1;
  {

  }
  }

  }
# 1880 "cgi.c"
  if ((unsigned int )((void *)0) == (unsigned int )fp) {
    {
# 1882
    log_error(8192, "Cannot open template file %s: %E", full_path);
# 1883
    free((void *)full_path);
# 1884
    free((void *)file_buffer);
    }
# 1885
    return (3);
  }
  {
# 1887
  free((void *)full_path);
  }
# 1896
  while (1) {
    {

    {
# 32 "spec.work"
    if (! (fp->__BLAST_FLAG == 1)) {
# 34
      __error__();
    }
    {

    }
    }
# 1896 "cgi.c"
    tmp___3 = fgets((char */* __restrict  */)(buf), 5000,
                    (FILE */* __restrict  */)fp);
    }
# 1896
    if (! tmp___3) {
# 1896
      break;
    }
# 1898
    if (! recursive) {
      {
# 1898
      tmp___1 = strncmp((char const   *)(buf), (char const   *)"#include ", 9U);
      }
# 1898
      if (! tmp___1) {
        {
# 1900
        tmp = (char const   *)chomp(buf + 9);
# 1900
        err = template_load(csp, & included_module, tmp, 1);
        }
# 1900
        if (0 != err) {
          {
# 1902
          free((void *)file_buffer);
          {
# 96 "spec.work"
          if (fp->__BLAST_FLAG == 1) {
# 97
            fp->__BLAST_FLAG = 0;
          } else {
# 98
            __error__();
          }
          {

          }
          }
# 1903 "cgi.c"
          fclose(fp);
          }
# 1904
          return (err);
        }
        {
# 1907
        tmp___0 = string_join(& file_buffer, included_module);
        }
# 1907
        if (tmp___0) {
          {

          {
# 96 "spec.work"
          if (fp->__BLAST_FLAG == 1) {
# 97
            fp->__BLAST_FLAG = 0;
          } else {
# 98
            __error__();
          }
          {

          }
          }
# 1909 "cgi.c"
          fclose(fp);
          }
# 1910
          return (1);
        }
# 1913
        continue;
      }
    }
# 1917
    if ((int )buf[0] == 35) {
# 1919
      continue;
    }
    {
# 1922
    tmp___2 = string_append(& file_buffer, (char const   *)(buf));
    }
# 1922
    if (tmp___2) {
      {

      {
# 96 "spec.work"
      if (fp->__BLAST_FLAG == 1) {
# 97
        fp->__BLAST_FLAG = 0;
      } else {
# 98
        __error__();
      }
      {

      }
      }
# 1924 "cgi.c"
      fclose(fp);
      }
# 1925
      return (1);
    }
  }
  {

  {
# 96 "spec.work"
  if (fp->__BLAST_FLAG == 1) {
# 97
    fp->__BLAST_FLAG = 0;
  } else {
# 98
    __error__();
  }
  {

  }
  }
# 1928 "cgi.c"
  fclose(fp);
# 1930
  (*template_ptr) = file_buffer;
  }
# 1932
  return (0);
}
}
# 1959
jb_err template_fill(char **template_ptr , struct map  const  *exports ) 
{ struct map_entry *m ;
  pcrs_job *job ;
  char buf[5000] ;
  char *tmp_out_buffer ;
  char *file_buffer ;
  size_t size ;
  int error ;
  char const   *flags ;
  size_t tmp ;

  {
# 1970
  if (! template_ptr) {
    {
# 1970
    __assert_fail((char const   *)"template_ptr", (char const   *)"cgi.c",
                  1970U, (char const   *)"template_fill");
    }
  }
# 1971
  if (! (*template_ptr)) {
    {
# 1971
    __assert_fail((char const   *)"*template_ptr", (char const   *)"cgi.c",
                  1971U, (char const   *)"template_fill");
    }
  }
# 1972
  if (! exports) {
    {
# 1972
    __assert_fail((char const   *)"exports", (char const   *)"cgi.c", 1972U,
                  (char const   *)"template_fill");
    }
  }
  {
# 1974
  file_buffer = (*template_ptr);
# 1975
  tmp = strlen((char const   *)file_buffer);
# 1975
  size = tmp + 1U;
# 1980
  m = exports->first;
  }
# 1980
  while ((unsigned int )m != (unsigned int )((void *)0)) {
# 1982
    if ((int const   )(*(m->name)) == 36) {
      {
# 1989
      snprintf((char */* __restrict  */)(buf), 5000U,
               (char const   */* __restrict  */)((char const   *)"%s"),
               m->name + 1);
# 1990
      flags = (char const   *)"sigU";
      }
    } else {
      {
# 1999
      flags = (char const   *)"sigTU";
# 2002
      snprintf((char */* __restrict  */)(buf), 5000U,
               (char const   */* __restrict  */)((char const   *)"@%s@"),
               m->name);
      }
    }
    {
# 2006
    log_error(2048, "Substituting: s/%s/%s/%s", buf, m->value, flags);
# 2009
    job = pcrs_compile((char const   *)(buf), m->value, flags, & error);
    }
# 2010
    if ((unsigned int )job == (unsigned int )((void *)0)) {
# 2012
      if (error == -10) {
        {
# 2014
        free((void *)file_buffer);
# 2015
        (*template_ptr) = (char *)((void *)0);
        }
# 2016
        return (1);
      } else {
        {
# 2020
        log_error(8192, "Error compiling template fill job %s: %d", m->name,
                  error);
        }
      }
    } else {
      {
# 2026
      pcrs_execute(job, file_buffer, size, & tmp_out_buffer, & size);
# 2027
      free((void *)file_buffer);
# 2028
      pcrs_free_job(job);
      }
# 2029
      if ((unsigned int )((void *)0) == (unsigned int )tmp_out_buffer) {
        {
# 2031
        (*template_ptr) = (char *)((void *)0);
        }
# 2032
        return (1);
      }
      {
# 2034
      file_buffer = tmp_out_buffer;
      }
    }
    {
# 1980
    m = m->next;
    }
  }
  {
# 2041
  (*template_ptr) = file_buffer;
  }
# 2042
  return (0);
}
}
# 2066
jb_err template_fill_for_cgi(struct client_state *csp ,
                             char const   *templatename , struct map *exports ,
                             struct http_response *rsp ) 
{ jb_err err ;
  jb_err tmp ;

  {
# 2073
  if (! csp) {
    {
# 2073
    __assert_fail((char const   *)"csp", (char const   *)"cgi.c", 2073U,
                  (char const   *)"template_fill_for_cgi");
    }
  }
# 2074
  if (! templatename) {
    {
# 2074
    __assert_fail((char const   *)"templatename", (char const   *)"cgi.c",
                  2074U, (char const   *)"template_fill_for_cgi");
    }
  }
# 2075
  if (! exports) {
    {
# 2075
    __assert_fail((char const   *)"exports", (char const   *)"cgi.c", 2075U,
                  (char const   *)"template_fill_for_cgi");
    }
  }
# 2076
  if (! rsp) {
    {
# 2076
    __assert_fail((char const   *)"rsp", (char const   *)"cgi.c", 2076U,
                  (char const   *)"template_fill_for_cgi");
    }
  }
  {
# 2078
  err = template_load(csp, & rsp->body, templatename, 0);
  }
# 2079
  if (err == 3) {
    {
# 2081
    free_map(exports);
# 2082
    tmp = cgi_error_no_template(csp, rsp, templatename);
    }
# 2082
    return (tmp);
  } else {
# 2084
    if (err) {
      {
# 2086
      free_map(exports);
      }
# 2087
      return (err);
    }
  }
  {
# 2089
  err = template_fill(& rsp->body, (struct map  const  *)exports);
# 2090
  free_map(exports);
  }
# 2091
  return (err);
}
}
# 2110
struct map *default_exports(struct client_state  const  *csp ,
                            char const   *caller ) 
{ char buf[20] ;
  jb_err err ;
  struct map *exports ;
  int local_help_exists ;
  char const   *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  char const   *tmp___5 ;
  char const   *tmp___6 ;
  int tmp___7 ;
  char const   *tmp___8 ;
  char const   *tmp___9 ;

  {
  {
# 2115
  local_help_exists = 0;
  }
# 2117
  if (! csp) {
    {
# 2117
    __assert_fail((char const   *)"csp", (char const   *)"cgi.c", 2117U,
                  (char const   *)"default_exports");
    }
  }
  {
# 2119
  exports = new_map();
  }
# 2120
  if ((unsigned int )exports == (unsigned int )((void *)0)) {
# 2122
    return ((struct map *)((void *)0));
  }
  {
# 2125
  tmp = (char const   *)html_encode((char const   *)"3.0.3");
# 2125
  err = map(exports, (char const   *)"version", 1, tmp, 0);
  }
# 2126
  if (! err) {
# 2126
    if (csp->my_ip_addr_str) {
      {
# 2126
      tmp___0 = (char const   *)csp->my_ip_addr_str;
      }
    } else {
      {
# 2126
      tmp___0 = (char const   *)"unknown";
      }
    }
    {
# 2126
    tmp___1 = (char const   *)html_encode(tmp___0);
# 2126
    err = map(exports, (char const   *)"my-ip-address", 1, tmp___1, 0);
    }
  }
# 2127
  if (! err) {
# 2127
    if (csp->my_hostname) {
      {
# 2127
      tmp___2 = (char const   *)csp->my_hostname;
      }
    } else {
      {
# 2127
      tmp___2 = (char const   *)"unknown";
      }
    }
    {
# 2127
    tmp___3 = (char const   *)html_encode(tmp___2);
# 2127
    err = map(exports, (char const   *)"my-hostname", 1, tmp___3, 0);
    }
  }
# 2128
  if (! err) {
    {
# 2128
    tmp___4 = (char const   *)html_encode((char const   *)"http://www.privoxy.org/");
# 2128
    err = map(exports, (char const   *)"homepage", 1, tmp___4, 0);
    }
  }
# 2129
  if (! err) {
    {
# 2129
    tmp___5 = (char const   *)html_encode((char const   *)"http://config.privoxy.org/");
# 2129
    err = map(exports, (char const   *)"default-cgi", 1, tmp___5, 0);
    }
  }
# 2130
  if (! err) {
    {
# 2130
    tmp___6 = (char const   *)make_menu(caller);
# 2130
    err = map(exports, (char const   *)"menu", 1, tmp___6, 0);
    }
  }
# 2131
  if (! err) {
    {
# 2131
    err = map(exports, (char const   *)"code-status", 1,
              (char const   *)"stable", 1);
    }
  }
# 2132
  if (! err) {
    {
# 2132
    err = map(exports, (char const   *)"user-manual", 1,
              (char const   *)(csp->config)->usermanual, 1);
    }
  }
# 2133
  if (! err) {
    {
# 2133
    err = map(exports, (char const   *)"actions-help-prefix", 1,
              (char const   *)"actions-file.html#", 1);
    }
  }
# 2135
  if (! err) {
    {
# 2135
    err = map_conditional(exports, (char const   *)"enabled-display",
                          global_toggle_state);
    }
  }
  {
# 2140
  snprintf((char */* __restrict  */)(buf), 20U,
           (char const   */* __restrict  */)((char const   *)"%d"),
           (csp->config)->hport);
  }
# 2141
  if (! err) {
    {
# 2141
    err = map(exports, (char const   *)"my-port", 1, (char const   *)(buf), 1);
    }
  }
  {
# 2143
  tmp___7 = strcmp((char const   *)"stable", (char const   *)"stable");
  }
# 2143
  if (! tmp___7) {
# 2145
    if (! err) {
      {
# 2145
      err = map_block_killer(exports, (char const   *)"unstable");
      }
    }
  }
# 2148
  if ((unsigned int )(csp->config)->admin_address != (unsigned int )((void *)0)) {
# 2150
    if (! err) {
      {
# 2150
      tmp___8 = (char const   *)html_encode((char const   *)(csp->config)->admin_address);
# 2150
      err = map(exports, (char const   *)"admin-address", 1, tmp___8, 0);
      }
    }
    {
# 2151
    local_help_exists = 1;
    }
  } else {
# 2155
    if (! err) {
      {
# 2155
      err = map_block_killer(exports, (char const   *)"have-adminaddr-info");
      }
    }
  }
# 2158
  if ((unsigned int )(csp->config)->proxy_info_url != (unsigned int )((void *)0)) {
# 2160
    if (! err) {
      {
# 2160
      tmp___9 = (char const   *)html_encode((char const   *)(csp->config)->proxy_info_url);
# 2160
      err = map(exports, (char const   *)"proxy-info-url", 1, tmp___9, 0);
      }
    }
    {
# 2161
    local_help_exists = 1;
    }
  } else {
# 2165
    if (! err) {
      {
# 2165
      err = map_block_killer(exports, (char const   *)"have-proxy-info");
      }
    }
  }
# 2168
  if (local_help_exists == 0) {
# 2170
    if (! err) {
      {
# 2170
      err = map_block_killer(exports, (char const   *)"have-help-info");
      }
    }
  }
# 2173
  if (err) {
    {
# 2175
    free_map(exports);
    }
# 2176
    return ((struct map *)((void *)0));
  }
# 2179
  return (exports);
}
}
# 2201
jb_err map_block_killer(struct map *exports , char const   *name ) 
{ char buf[1000] ;
  size_t tmp ;
  jb_err tmp___0 ;

  {
# 2205
  if (! exports) {
    {
# 2205
    __assert_fail((char const   *)"exports", (char const   *)"cgi.c", 2205U,
                  (char const   *)"map_block_killer");
    }
  }
# 2206
  if (! name) {
    {
# 2206
    __assert_fail((char const   *)"name", (char const   *)"cgi.c", 2206U,
                  (char const   *)"map_block_killer");
    }
  }
  {
# 2207
  tmp = strlen(name);
  }
# 2207
  if (! (tmp < 490U)) {
    {
# 2207
    __assert_fail((char const   *)"strlen(name) < 490", (char const   *)"cgi.c",
                  2207U, (char const   *)"map_block_killer");
    }
  }
  {
# 2209
  snprintf((char */* __restrict  */)(buf), 1000U,
           (char const   */* __restrict  */)((char const   *)"if-%s-start.*if-%s-end"),
           name, name);
# 2210
  tmp___0 = map(exports, (char const   *)(buf), 1, (char const   *)"", 1);
  }
# 2210
  return (tmp___0);
}
}
# 2230
jb_err map_block_keep(struct map *exports , char const   *name ) 
{ jb_err err ;
  char buf[500] ;
  size_t tmp ;
  jb_err tmp___0 ;

  {
# 2235
  if (! exports) {
    {
# 2235
    __assert_fail((char const   *)"exports", (char const   *)"cgi.c", 2235U,
                  (char const   *)"map_block_keep");
    }
  }
# 2236
  if (! name) {
    {
# 2236
    __assert_fail((char const   *)"name", (char const   *)"cgi.c", 2236U,
                  (char const   *)"map_block_keep");
    }
  }
  {
# 2237
  tmp = strlen(name);
  }
# 2237
  if (! (tmp < 490U)) {
    {
# 2237
    __assert_fail((char const   *)"strlen(name) < 490", (char const   *)"cgi.c",
                  2237U, (char const   *)"map_block_keep");
    }
  }
  {
# 2239
  snprintf((char */* __restrict  */)(buf), 500U,
           (char const   */* __restrict  */)((char const   *)"if-%s-start"),
           name);
# 2240
  err = map(exports, (char const   *)(buf), 1, (char const   *)"", 1);
  }
# 2242
  if (err) {
# 2244
    return (err);
  }
  {
# 2247
  snprintf((char */* __restrict  */)(buf), 500U,
           (char const   */* __restrict  */)((char const   *)"if-%s-end"), name);
# 2248
  tmp___0 = map(exports, (char const   *)(buf), 1, (char const   *)"", 1);
  }
# 2248
  return (tmp___0);
}
}
# 2277
jb_err map_conditional(struct map *exports , char const   *name ,
                       int choose_first ) 
{ char buf[1000] ;
  jb_err err ;
  size_t tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  jb_err tmp___2 ;

  {
# 2282
  if (! exports) {
    {
# 2282
    __assert_fail((char const   *)"exports", (char const   *)"cgi.c", 2282U,
                  (char const   *)"map_conditional");
    }
  }
# 2283
  if (! name) {
    {
# 2283
    __assert_fail((char const   *)"name", (char const   *)"cgi.c", 2283U,
                  (char const   *)"map_conditional");
    }
  }
  {
# 2284
  tmp = strlen(name);
  }
# 2284
  if (! (tmp < 480U)) {
    {
# 2284
    __assert_fail((char const   *)"strlen(name) < 480", (char const   *)"cgi.c",
                  2284U, (char const   *)"map_conditional");
    }
  }
# 2286
  if (choose_first) {
    {
# 2286
    tmp___0 = (char const   *)"else-not-%s@.*@endif-%s";
    }
  } else {
    {
# 2286
    tmp___0 = (char const   *)"if-%s-then@.*@else-not-%s";
    }
  }
  {
# 2286
  snprintf((char */* __restrict  */)(buf), 1000U,
           (char const   */* __restrict  */)tmp___0, name, name);
# 2291
  err = map(exports, (char const   *)(buf), 1, (char const   *)"", 1);
  }
# 2292
  if (err) {
# 2294
    return (err);
  }
# 2297
  if (choose_first) {
    {
# 2297
    tmp___1 = (char const   *)"if-%s-then";
    }
  } else {
    {
# 2297
    tmp___1 = (char const   *)"endif-%s";
    }
  }
  {
# 2297
  snprintf((char */* __restrict  */)(buf), 1000U,
           (char const   */* __restrict  */)tmp___1, name);
# 2298
  tmp___2 = map(exports, (char const   *)(buf), 1, (char const   *)"", 1);
  }
# 2298
  return (tmp___2);
}
}
# 2315
char *make_menu(char const   *self ) 
{ struct cgi_dispatcher  const  *d ;
  char *result ;
  char *tmp ;
  int tmp___0 ;

  {
  {
# 2318
  tmp = strdup((char const   *)"");
# 2318
  result = tmp;
  }
# 2320
  if ((unsigned int )self == (unsigned int )((void *)0)) {
    {
# 2322
    self = (char const   *)"NO-SUCH-CGI!";
    }
  }
  {
# 2326
  d = cgi_dispatchers;
  }
# 2326
  while (d->name) {
# 2328
    if (d->description) {
      {
# 2328
      tmp___0 = strcmp((char const   *)d->name, self);
      }
# 2328
      if (tmp___0) {
        {
# 2330
        string_append(& result,
                      (char const   *)"<li><a href=\"http://config.privoxy.org/");
# 2331
        string_append(& result, (char const   *)d->name);
# 2332
        string_append(& result, (char const   *)"\">");
# 2333
        string_append(& result, (char const   *)d->description);
# 2334
        string_append(& result, (char const   *)"</a></li>");
        }
      }
    }
    {
# 2326
    d ++;
    }
  }
# 2338
  return (result);
}
}
# 2354
char *dump_map(struct map  const  *the_map ) 
{ struct map_entry *cur_entry ;
  char *ret ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  {
# 2357
  tmp = strdup((char const   *)"");
# 2357
  ret = tmp;
# 2359
  string_append(& ret, (char const   *)"<table>\n");
# 2361
  cur_entry = the_map->first;
  }
# 2361
  while (1) {
# 2361
    if ((unsigned int )cur_entry != (unsigned int )((void *)0)) {
# 2361
      if (! ((unsigned int )ret != (unsigned int )((void *)0))) {
# 2361
        break;
      }
    } else {
# 2361
      break;
    }
    {
# 2365
    string_append(& ret, (char const   *)"<tr><td><b>");
# 2366
    tmp___0 = html_encode(cur_entry->name);
# 2366
    string_join(& ret, tmp___0);
# 2367
    string_append(& ret, (char const   *)"</b></td><td>");
# 2368
    tmp___1 = html_encode(cur_entry->value);
# 2368
    string_join(& ret, tmp___1);
# 2369
    string_append(& ret, (char const   *)"</td></tr>\n");
# 2361
    cur_entry = cur_entry->next;
    }
  }
  {
# 2372
  string_append(& ret, (char const   *)"</table>\n");
  }
# 2373
  return (ret);
}
}
# 1 "cgiedit.c"
__asm__("booo - error in global cgiedit_rcs (cgiedit.c:1)");
# 320 "/users/rupak/ccured/include/gcc_3.2/sys/stat.h"
extern int __xstat(int __ver , char const   *__filename ,
                   struct stat *__stat_buf ) ;
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
# 315 "cgiedit.c"
char const   cgiedit_h_rcs[55]   = 
# 315
  {'$', 'I', 'd', ':', ' ', 'c', 'g', 'i', 'e', 'd', 'i', 't', '.', 'h', ',',
   'v', ' ', '1', '.', '7', '.', '2', '.', '1', ' ', '2', '0', '0', '2', '/',
   '1', '1', '/', '2', '8', ' ', '1', '8', ':', '1', '5', ':', '1', '7', ' ',
   'o', 'e', 's', ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 443
jb_err edit_read_file(struct client_state *csp ,
                      struct map  const  *parameters , int require_version ,
                      char const   *suffix , struct editable_file **pfile ) ;
# 448
jb_err edit_write_file(struct editable_file *file ) ;
# 449
void edit_free_file(struct editable_file *file ) ;
# 452
jb_err edit_parse_actions_file(struct editable_file *file ) ;
# 453
jb_err edit_read_actions_file(struct client_state *csp ,
                              struct http_response *rsp ,
                              struct map  const  *parameters ,
                              int require_version ,
                              struct editable_file **pfile ) ;
# 460
jb_err cgi_error_modified(struct client_state *csp , struct http_response *rsp ,
                          char const   *filename ) ;
# 463
jb_err cgi_error_parse(struct client_state *csp , struct http_response *rsp ,
                       struct editable_file *file ) ;
# 466
jb_err cgi_error_file(struct client_state *csp , struct http_response *rsp ,
                      char const   *filename ) ;
# 469
jb_err cgi_error_file_read_only(struct client_state *csp ,
                                struct http_response *rsp ,
                                char const   *filename ) ;
# 476
static jb_err edit_read_file_lines(FILE *fp , struct file_line **pfile ,
                                   int *newline ) ;
# 477
static void edit_free_file_lines(struct file_line *first_line ) ;
# 480
static int match_actions_file_header_line(char const   *line ,
                                          char const   *name ) ;
# 481
static jb_err split_line_on_equals(char const   *line , char **pname ,
                                   char **pvalue ) ;
# 484
static jb_err get_file_name_param(struct client_state *csp ,
                                  struct map  const  *parameters ,
                                  char const   *param_name ,
                                  char const   *suffix , char **pfilename ,
                                  char const   **pparam ) ;
# 491
static jb_err get_url_spec_param(struct client_state *csp ,
                                 struct map  const  *parameters ,
                                 char const   *name , char **pvalue ) ;
# 498
static jb_err map_radio(struct map *exports , char const   *optionname ,
                        char const   *values , int value ) ;
# 502
static jb_err actions_to_radio(struct map *exports ,
                               struct action_spec  const  *action ) ;
# 504
static jb_err actions_from_radio(struct map  const  *parameters ,
                                 struct action_spec *action ) ;
# 508
static jb_err map_copy_parameter_html(struct map *out , struct map  const  *in ,
                                      char const   *name ) ;
# 518
static char *section_target(unsigned int sectionid ) ;
# 535
static char *section_target(unsigned int sectionid ) 
{ char buf[30] ;
  char *tmp ;

  {
  {
# 539
  snprintf((char */* __restrict  */)(buf), 30U,
           (char const   */* __restrict  */)((char const   *)"#l%d"), sectionid);
# 540
  tmp = strdup((char const   *)(buf));
  }
# 540
  return (tmp);
}
}
# 563
static jb_err map_copy_parameter_html(struct map *out , struct map  const  *in ,
                                      char const   *name ) 
{ char const   *value ;
  jb_err err ;
  char const   *tmp ;

  {
# 570
  if (! out) {
    {
# 570
    __assert_fail((char const   *)"out", (char const   *)"cgiedit.c", 570U,
                  (char const   *)"map_copy_parameter_html");
    }
  }
# 571
  if (! in) {
    {
# 571
    __assert_fail((char const   *)"in", (char const   *)"cgiedit.c", 571U,
                  (char const   *)"map_copy_parameter_html");
    }
  }
# 572
  if (! name) {
    {
# 572
    __assert_fail((char const   *)"name", (char const   *)"cgiedit.c", 572U,
                  (char const   *)"map_copy_parameter_html");
    }
  }
  {
# 574
  value = lookup(in, name);
# 575
  tmp = (char const   *)html_encode(value);
# 575
  err = map(out, name, 1, tmp, 0);
  }
# 577
  if (err) {
# 580
    return (err);
  } else {
# 582
    if ((int const   )(*value) == 0) {
# 584
      return (2);
    } else {
# 588
      return (0);
    }
  }
}
}
# 665
jb_err cgi_edit_actions_url_form(struct client_state *csp ,
                                 struct http_response *rsp ,
                                 struct map  const  *parameters ) 
{ struct map *exports ;
  unsigned int patternid ;
  struct editable_file *file ;
  struct file_line *cur_line ;
  unsigned int line_number ;
  unsigned int section_start_line_number ;
  jb_err err ;
  jb_err tmp ;
  int tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  jb_err tmp___5 ;

  {
  {
# 674
  section_start_line_number = 0U;
  }
# 677
  if (! csp) {
    {
# 677
    __assert_fail((char const   *)"csp", (char const   *)"cgiedit.c", 677U,
                  (char const   *)"cgi_edit_actions_url_form");
    }
  }
# 678
  if (! rsp) {
    {
# 678
    __assert_fail((char const   *)"rsp", (char const   *)"cgiedit.c", 678U,
                  (char const   *)"cgi_edit_actions_url_form");
    }
  }
# 679
  if (! parameters) {
    {
# 679
    __assert_fail((char const   *)"parameters", (char const   *)"cgiedit.c",
                  679U, (char const   *)"cgi_edit_actions_url_form");
    }
  }
# 681
  if (0U == ((csp->config)->feature_flags & 1U)) {
    {
# 683
    tmp = cgi_error_disabled(csp, rsp);
    }
# 683
    return (tmp);
  }
  {
# 686
  err = get_number_param(csp, parameters, "p", & patternid);
  }
# 687
  if (err) {
# 689
    return (err);
  }
  {
# 692
  err = edit_read_actions_file(csp, rsp, parameters, 1, & file);
  }
# 693
  if (err) {
# 696
    if (err == 3) {
      {
# 696
      tmp___0 = 0;
      }
    } else {
      {
# 696
      tmp___0 = err;
      }
    }
# 696
    return (tmp___0);
  }
  {
# 699
  cur_line = file->lines;
# 701
  line_number = 1U;
  }
# 701
  while (1) {
# 701
    if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 701
      if (! (line_number < patternid)) {
# 701
        break;
      }
    } else {
# 701
      break;
    }
# 703
    if (cur_line->type == 5) {
      {
# 705
      section_start_line_number = line_number;
      }
    }
    {
# 707
    cur_line = cur_line->next;
# 701
    line_number ++;
    }
  }
# 710
  if ((unsigned int )cur_line == (unsigned int )((void *)0)) {
    {
# 716
    edit_free_file(file);
    }
# 717
    return (2);
  } else {
# 710
    if (line_number != patternid) {
      {
# 716
      edit_free_file(file);
      }
# 717
      return (2);
    } else {
# 710
      if (patternid < 1U) {
        {
# 716
        edit_free_file(file);
        }
# 717
        return (2);
      } else {
# 710
        if (cur_line->type != 6) {
          {
# 716
          edit_free_file(file);
          }
# 717
          return (2);
        }
      }
    }
  }
  {
# 720
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)((void *)0));
  }
# 720
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
    {
# 722
    edit_free_file(file);
    }
# 723
    return (1);
  }
  {
# 726
  err = map(exports, (char const   *)"f", 1, file->identifier, 1);
  }
# 727
  if (! err) {
    {
# 727
    err = map(exports, (char const   *)"v", 1, file->version_str, 1);
    }
  }
# 728
  if (! err) {
    {
# 728
    tmp___1 = lookup(parameters, (char const   *)"p");
# 728
    tmp___2 = (char const   *)url_encode(tmp___1);
# 728
    err = map(exports, (char const   *)"p", 1, tmp___2, 0);
    }
  }
# 729
  if (! err) {
    {
# 729
    tmp___3 = (char const   *)html_encode((char const   *)cur_line->unprocessed);
# 729
    err = map(exports, (char const   *)"u", 1, tmp___3, 0);
    }
  }
# 730
  if (! err) {
    {
# 730
    tmp___4 = (char const   *)section_target(section_start_line_number);
# 730
    err = map(exports, (char const   *)"jumptarget", 1, tmp___4, 0);
    }
  }
  {
# 732
  edit_free_file(file);
  }
# 734
  if (err) {
    {
# 736
    free_map(exports);
    }
# 737
    return (err);
  }
  {
# 740
  tmp___5 = template_fill_for_cgi(csp, (char const   *)"edit-actions-url-form",
                                  exports, rsp);
  }
# 740
  return (tmp___5);
}
}
# 767
jb_err cgi_edit_actions_add_url_form(struct client_state *csp ,
                                     struct http_response *rsp ,
                                     struct map  const  *parameters ) 
{ struct map *exports ;
  jb_err err ;
  jb_err tmp ;
  jb_err tmp___0 ;

  {
# 774
  if (! csp) {
    {
# 774
    __assert_fail((char const   *)"csp", (char const   *)"cgiedit.c", 774U,
                  (char const   *)"cgi_edit_actions_add_url_form");
    }
  }
# 775
  if (! rsp) {
    {
# 775
    __assert_fail((char const   *)"rsp", (char const   *)"cgiedit.c", 775U,
                  (char const   *)"cgi_edit_actions_add_url_form");
    }
  }
# 776
  if (! parameters) {
    {
# 776
    __assert_fail((char const   *)"parameters", (char const   *)"cgiedit.c",
                  776U, (char const   *)"cgi_edit_actions_add_url_form");
    }
  }
# 778
  if (0U == ((csp->config)->feature_flags & 1U)) {
    {
# 780
    tmp = cgi_error_disabled(csp, rsp);
    }
# 780
    return (tmp);
  }
  {
# 783
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)((void *)0));
  }
# 783
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
# 785
    return (1);
  }
  {
# 788
  err = map_copy_parameter_html(exports, parameters, (char const   *)"f");
  }
# 789
  if (! err) {
    {
# 789
    err = map_copy_parameter_html(exports, parameters, (char const   *)"v");
    }
  }
# 790
  if (! err) {
    {
# 790
    err = map_copy_parameter_html(exports, parameters, (char const   *)"s");
    }
  }
# 792
  if (err) {
    {
# 794
    free_map(exports);
    }
# 795
    return (err);
  }
  {
# 798
  tmp___0 = template_fill_for_cgi(csp,
                                  (char const   *)"edit-actions-add-url-form",
                                  exports, rsp);
  }
# 798
  return (tmp___0);
}
}
# 825
jb_err cgi_edit_actions_remove_url_form(struct client_state *csp ,
                                        struct http_response *rsp ,
                                        struct map  const  *parameters ) 
{ struct map *exports ;
  unsigned int patternid ;
  struct editable_file *file ;
  struct file_line *cur_line ;
  unsigned int line_number ;
  unsigned int section_start_line_number ;
  jb_err err ;
  jb_err tmp ;
  int tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  jb_err tmp___5 ;

  {
  {
# 834
  section_start_line_number = 0U;
  }
# 837
  if (! csp) {
    {
# 837
    __assert_fail((char const   *)"csp", (char const   *)"cgiedit.c", 837U,
                  (char const   *)"cgi_edit_actions_remove_url_form");
    }
  }
# 838
  if (! rsp) {
    {
# 838
    __assert_fail((char const   *)"rsp", (char const   *)"cgiedit.c", 838U,
                  (char const   *)"cgi_edit_actions_remove_url_form");
    }
  }
# 839
  if (! parameters) {
    {
# 839
    __assert_fail((char const   *)"parameters", (char const   *)"cgiedit.c",
                  839U, (char const   *)"cgi_edit_actions_remove_url_form");
    }
  }
# 841
  if (0U == ((csp->config)->feature_flags & 1U)) {
    {
# 843
    tmp = cgi_error_disabled(csp, rsp);
    }
# 843
    return (tmp);
  }
  {
# 846
  err = get_number_param(csp, parameters, "p", & patternid);
  }
# 847
  if (err) {
# 849
    return (err);
  }
  {
# 852
  err = edit_read_actions_file(csp, rsp, parameters, 1, & file);
  }
# 853
  if (err) {
# 856
    if (err == 3) {
      {
# 856
      tmp___0 = 0;
      }
    } else {
      {
# 856
      tmp___0 = err;
      }
    }
# 856
    return (tmp___0);
  }
  {
# 859
  cur_line = file->lines;
# 861
  line_number = 1U;
  }
# 861
  while (1) {
# 861
    if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 861
      if (! (line_number < patternid)) {
# 861
        break;
      }
    } else {
# 861
      break;
    }
# 863
    if (cur_line->type == 5) {
      {
# 865
      section_start_line_number = line_number;
      }
    }
    {
# 867
    cur_line = cur_line->next;
# 861
    line_number ++;
    }
  }
# 870
  if ((unsigned int )cur_line == (unsigned int )((void *)0)) {
    {
# 876
    edit_free_file(file);
    }
# 877
    return (2);
  } else {
# 870
    if (line_number != patternid) {
      {
# 876
      edit_free_file(file);
      }
# 877
      return (2);
    } else {
# 870
      if (patternid < 1U) {
        {
# 876
        edit_free_file(file);
        }
# 877
        return (2);
      } else {
# 870
        if (cur_line->type != 6) {
          {
# 876
          edit_free_file(file);
          }
# 877
          return (2);
        }
      }
    }
  }
  {
# 880
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)((void *)0));
  }
# 880
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
    {
# 882
    edit_free_file(file);
    }
# 883
    return (1);
  }
  {
# 886
  err = map(exports, (char const   *)"f", 1, file->identifier, 1);
  }
# 887
  if (! err) {
    {
# 887
    err = map(exports, (char const   *)"v", 1, file->version_str, 1);
    }
  }
# 888
  if (! err) {
    {
# 888
    tmp___1 = lookup(parameters, (char const   *)"p");
# 888
    tmp___2 = (char const   *)url_encode(tmp___1);
# 888
    err = map(exports, (char const   *)"p", 1, tmp___2, 0);
    }
  }
# 889
  if (! err) {
    {
# 889
    tmp___3 = (char const   *)html_encode((char const   *)cur_line->unprocessed);
# 889
    err = map(exports, (char const   *)"u", 1, tmp___3, 0);
    }
  }
# 890
  if (! err) {
    {
# 890
    tmp___4 = (char const   *)section_target(section_start_line_number);
# 890
    err = map(exports, (char const   *)"jumptarget", 1, tmp___4, 0);
    }
  }
  {
# 892
  edit_free_file(file);
  }
# 894
  if (err) {
    {
# 896
    free_map(exports);
    }
# 897
    return (err);
  }
  {
# 900
  tmp___5 = template_fill_for_cgi(csp,
                                  (char const   *)"edit-actions-remove-url-form",
                                  exports, rsp);
  }
# 900
  return (tmp___5);
}
}
# 918
jb_err edit_write_file(struct editable_file *file ) 
{ FILE *fp ;
  struct file_line *cur_line ;
  struct stat statbuf[1] ;
  char version_buf[22] ;
  int tmp ;
  int tmp___0 ;
  int numhash ;
  int len ;
  char *src ;
  char *dest ;
  char *str ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  char *tmp___6 ;
  char const   *tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;

  {
# 928
  if (! file) {
    {
# 928
    __assert_fail((char const   *)"file", (char const   *)"cgiedit.c", 928U,
                  (char const   *)"edit_write_file");
    }
  }
# 929
  if (! file->filename) {
    {
# 929
    __assert_fail((char const   *)"file->filename", (char const   *)"cgiedit.c",
                  929U, (char const   *)"edit_write_file");
    }
  }
  {
# 931
  fp = fopen((char const   */* __restrict  */)file->filename,
             (char const   */* __restrict  */)((char const   *)"wb"));
  {
# 17 "spec.work"
    fp->__BLAST_FLAG = 1;
  {

  }
  }

  }
# 931 "cgiedit.c"
  if ((unsigned int )((void *)0) == (unsigned int )fp) {
# 933
    return (3);
  }
  {
# 936
  cur_line = file->lines;
  }
# 937
  while ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 939
    if (cur_line->raw) {
      {
# 941
      tmp = fputs((char const   */* __restrict  */)((char const   *)cur_line->raw),
                  (FILE */* __restrict  */)fp);
      }
# 941
      if (tmp < 0) {
        {

        {
# 96 "spec.work"
        if (fp->__BLAST_FLAG == 1) {
# 97
          fp->__BLAST_FLAG = 0;
        } else {
# 98
          __error__();
        }
        {

        }
        }
# 943 "cgiedit.c"
        fclose(fp);
        }
# 944
        return (3);
      }
    } else {
# 949
      if (cur_line->prefix) {
        {
# 951
        tmp___0 = fputs((char const   */* __restrict  */)((char const   *)cur_line->prefix),
                        (FILE */* __restrict  */)fp);
        }
# 951
        if (tmp___0 < 0) {
          {

          {
# 96 "spec.work"
          if (fp->__BLAST_FLAG == 1) {
# 97
            fp->__BLAST_FLAG = 0;
          } else {
# 98
            __error__();
          }
          {

          }
          }
# 953 "cgiedit.c"
          fclose(fp);
          }
# 954
          return (3);
        }
      }
# 957
      if (cur_line->unprocessed) {
        {
# 960
        tmp___6 = strchr((char const   *)cur_line->unprocessed, (int )'#');
        }
# 960
        if ((unsigned int )((void *)0) != (unsigned int )tmp___6) {
          {
# 963
          numhash = 0;
# 970
          src = cur_line->unprocessed;
          }
# 971
          while (1) {
            {
# 971
            src = strchr((char const   *)src, (int )'#');
            }
# 971
            if (! ((unsigned int )((void *)0) != (unsigned int )src)) {
# 971
              break;
            }
            {
# 973
            numhash ++;
# 974
            src ++;
            }
          }
# 976
          if (! (numhash > 0)) {
            {
# 976
            __assert_fail((char const   *)"numhash > 0",
                          (char const   *)"cgiedit.c", 976U,
                          (char const   *)"edit_write_file");
            }
          }
          {
# 979
          len = (int )strlen((char const   *)cur_line->unprocessed);
# 980
          str = (char *)malloc(((unsigned int )len + 1U) +
                               (unsigned int )numhash);
          }
# 980
          if ((unsigned int )((void *)0) == (unsigned int )str) {
            {

            {
# 96 "spec.work"
            if (fp->__BLAST_FLAG == 1) {
# 97
              fp->__BLAST_FLAG = 0;
            } else {
# 98
              __error__();
            }
            {

            }
            }
# 983 "cgiedit.c"
            fclose(fp);
            }
# 984
            return (1);
          }
          {
# 988
          src = cur_line->unprocessed + len;
# 989
          dest = (str + len) + numhash;
          }
# 990
          while (len >= 0) {
            {
# 992
            tmp___2 = dest;
# 992
            dest --;
# 992
            tmp___3 = src;
# 992
            src --;
# 992
            (*tmp___2) = (*tmp___3);
            }
# 992
            if ((int )(*tmp___2) == 35) {
              {
# 994
              tmp___1 = dest;
# 994
              dest --;
# 994
              (*tmp___1) = '\\';
# 995
              numhash --;
              }
# 996
              if (! (numhash >= 0)) {
                {
# 996
                __assert_fail((char const   *)"numhash >= 0",
                              (char const   *)"cgiedit.c", 996U,
                              (char const   *)"edit_write_file");
                }
              }
            }
            {
# 990
            len --;
            }
          }
# 999
          if (! (numhash == 0)) {
            {
# 999
            __assert_fail((char const   *)"numhash == 0",
                          (char const   *)"cgiedit.c", 999U,
                          (char const   *)"edit_write_file");
            }
          }
# 1000
          if (! ((unsigned int )(src + 1) ==
                 (unsigned int )cur_line->unprocessed)) {
            {
# 1000
            __assert_fail((char const   *)"src + 1 == cur_line->unprocessed",
                          (char const   *)"cgiedit.c", 1000U,
                          (char const   *)"edit_write_file");
            }
          }
# 1001
          if (! ((unsigned int )(dest + 1) == (unsigned int )str)) {
            {
# 1001
            __assert_fail((char const   *)"dest + 1 == str",
                          (char const   *)"cgiedit.c", 1001U,
                          (char const   *)"edit_write_file");
            }
          }
          {
# 1003
          tmp___4 = fputs((char const   */* __restrict  */)((char const   *)str),
                          (FILE */* __restrict  */)fp);
          }
# 1003
          if (tmp___4 < 0) {
            {
# 1005
            free((void *)str);
            {
# 96 "spec.work"
            if (fp->__BLAST_FLAG == 1) {
# 97
              fp->__BLAST_FLAG = 0;
            } else {
# 98
              __error__();
            }
            {

            }
            }
# 1006 "cgiedit.c"
            fclose(fp);
            }
# 1007
            return (3);
          }
          {
# 1010
          free((void *)str);
          }
        } else {
          {
# 1015
          tmp___5 = fputs((char const   */* __restrict  */)((char const   *)cur_line->unprocessed),
                          (FILE */* __restrict  */)fp);
          }
# 1015
          if (tmp___5 < 0) {
            {

            {
# 96 "spec.work"
            if (fp->__BLAST_FLAG == 1) {
# 97
              fp->__BLAST_FLAG = 0;
            } else {
# 98
              __error__();
            }
            {

            }
            }
# 1017 "cgiedit.c"
            fclose(fp);
            }
# 1018
            return (3);
          }
        }
# 1021
        if (file->newline == 2) {
          {
# 1021
          tmp___8 = (char const   *)"\r\n";
          }
        } else {
# 1021
          if (file->newline == 3) {
            {
# 1021
            tmp___8 = (char const   *)"\r";
            }
          } else {
            {
# 1021
            tmp___8 = (char const   *)"\n";
            }
          }
        }
        {
# 1021
        tmp___9 = fputs((char const   */* __restrict  */)tmp___8,
                        (FILE */* __restrict  */)fp);
        }
# 1021
        if (tmp___9 < 0) {
          {

          {
# 96 "spec.work"
          if (fp->__BLAST_FLAG == 1) {
# 97
            fp->__BLAST_FLAG = 0;
          } else {
# 98
            __error__();
          }
          {

          }
          }
# 1023 "cgiedit.c"
          fclose(fp);
          }
# 1024
          return (3);
        }
      } else {
        {
# 1030
        __assert_fail((char const   *)"0", (char const   *)"cgiedit.c", 1030U,
                      (char const   *)"edit_write_file");
        }
      }
    }
    {
# 1033
    cur_line = cur_line->next;
    }
  }
  {

  {
# 96 "spec.work"
  if (fp->__BLAST_FLAG == 1) {
# 97
    fp->__BLAST_FLAG = 0;
  } else {
# 98
    __error__();
  }
  {

  }
  }
# 1036 "cgiedit.c"
  fclose(fp);
# 1042
  tmp___10 = stat__extinline(file->filename, statbuf);
  }
# 1042
  if (tmp___10 < 0) {
# 1045
    return (3);
  }
  {
# 1047
  file->version = (unsigned int )statbuf[0].st_mtim.tv_sec;
  }
# 1050
  if (file->version_str) {
    {
# 1050
    free((void *)file->version_str);
# 1050
    file->version_str = (char const   *)((void *)0);
    }
  }
  {
# 1051
  snprintf((char */* __restrict  */)(version_buf), 22U,
           (char const   */* __restrict  */)((char const   *)"%u"),
           file->version);
# 1052
  version_buf[21] = '\0';
# 1053
  file->version_str = (char const   *)strdup((char const   *)(version_buf));
  }
# 1054
  if ((unsigned int )(version_buf) == (unsigned int )((void *)0)) {
# 1056
    return (1);
  }
# 1059
  return (0);
}
}
# 1075
void edit_free_file(struct editable_file *file ) 
{ 

  {
# 1077
  if (! file) {
# 1080
    return;
  }
  {
# 1083
  edit_free_file_lines(file->lines);
  }
# 1084
  if (file->filename) {
    {
# 1084
    free((void *)file->filename);
# 1084
    file->filename = (char const   *)((void *)0);
    }
  }
# 1085
  if (file->identifier) {
    {
# 1085
    free((void *)file->identifier);
# 1085
    file->identifier = (char const   *)((void *)0);
    }
  }
# 1086
  if (file->version_str) {
    {
# 1086
    free((void *)file->version_str);
# 1086
    file->version_str = (char const   *)((void *)0);
    }
  }
  {
# 1087
  file->version = 0U;
# 1088
  file->parse_error_text = (char const   *)((void *)0);
# 1089
  file->parse_error = (struct file_line *)((void *)0);
# 1091
  free((void *)file);
  }
# 1092
  return;
}
}
# 1107
static void edit_free_file_lines(struct file_line *first_line ) 
{ struct file_line *next_line ;

  {
# 1111
  while ((unsigned int )first_line != (unsigned int )((void *)0)) {
    {
# 1113
    next_line = first_line->next;
# 1114
    first_line->next = (struct file_line *)((void *)0);
    }
# 1115
    if (first_line->raw) {
      {
# 1115
      free((void *)first_line->raw);
# 1115
      first_line->raw = (char *)((void *)0);
      }
    }
# 1116
    if (first_line->prefix) {
      {
# 1116
      free((void *)first_line->prefix);
# 1116
      first_line->prefix = (char *)((void *)0);
      }
    }
# 1117
    if (first_line->unprocessed) {
      {
# 1117
      free((void *)first_line->unprocessed);
# 1117
      first_line->unprocessed = (char *)((void *)0);
      }
    }
# 1118
    switch (first_line->type) {
    case 0: 
    {

    }
    case 1: 
    {

    }
    case 2: 
    {

    }
    case 3: 
    {

    }
    case 7: 
    {

    }
    case 9: 
    {

    }
    case 10: 
    {

    }
    case 4: 
    {

    }
    case 6: 
    {

    }
# 1130
    break;
    case 5: 
    {
# 1133
    free_action(first_line->data.action);
    }
# 1134
    break;
    case 8: 
    {

    }
# 1137
    if (first_line->data.setting.name) {
      {
# 1137
      free((void *)first_line->data.setting.name);
# 1137
      first_line->data.setting.name = (char *)((void *)0);
      }
    }
# 1138
    if (first_line->data.setting.svalue) {
      {
# 1138
      free((void *)first_line->data.setting.svalue);
# 1138
      first_line->data.setting.svalue = (char *)((void *)0);
      }
    }
# 1139
    break;
    default: 
    {
# 1142
    __assert_fail((char const   *)"0", (char const   *)"cgiedit.c", 1142U,
                  (char const   *)"edit_free_file_lines");
    }
# 1143
    break;
    }
    {
# 1145
    first_line->type = 0;
# 1146
    free((void *)first_line);
# 1147
    first_line = next_line;
    }
  }
# 1149
  return;
}
}
# 1165
static int match_actions_file_header_line(char const   *line ,
                                          char const   *name ) 
{ size_t len ;
  int tmp ;

  {
# 1169
  if (! line) {
    {
# 1169
    __assert_fail((char const   *)"line", (char const   *)"cgiedit.c", 1169U,
                  (char const   *)"match_actions_file_header_line");
    }
  }
# 1170
  if (! name) {
    {
# 1170
    __assert_fail((char const   *)"name", (char const   *)"cgiedit.c", 1170U,
                  (char const   *)"match_actions_file_header_line");
    }
  }
# 1173
  if ((int const   )(*(line + 0)) != 123) {
# 1175
    return (1);
  } else {
# 1173
    if ((int const   )(*(line + 1)) != 123) {
# 1175
      return (1);
    }
  }
  {
# 1177
  line += 2;
  }
# 1180
  while (1) {
# 1180
    if (! ((int const   )(*line) == 32)) {
# 1180
      if (! ((int const   )(*line) == 9)) {
# 1180
        break;
      }
    }
    {
# 1182
    line ++;
    }
  }
  {
# 1186
  len = strlen(name);
# 1187
  tmp = strncmpic(line, name, len);
  }
# 1187
  if (0 != tmp) {
# 1189
    return (1);
  }
  {
# 1191
  line += len;
  }
# 1194
  while (1) {
# 1194
    if (! ((int const   )(*line) == 32)) {
# 1194
      if (! ((int const   )(*line) == 9)) {
# 1194
        break;
      }
    }
    {
# 1196
    line ++;
    }
  }
# 1200
  if ((int const   )(*(line + 0)) != 125) {
# 1202
    return (1);
  } else {
# 1200
    if ((int const   )(*(line + 1)) != 125) {
# 1202
      return (1);
    } else {
# 1200
      if ((int const   )(*(line + 2)) != 0) {
# 1202
        return (1);
      }
    }
  }
# 1206
  return (0);
}
}
# 1229
static jb_err split_line_on_equals(char const   *line , char **pname ,
                                   char **pvalue ) 
{ char const   *name_end ;
  char const   *value_start ;
  size_t name_len ;

  {
# 1235
  if (! line) {
    {
# 1235
    __assert_fail((char const   *)"line", (char const   *)"cgiedit.c", 1235U,
                  (char const   *)"split_line_on_equals");
    }
  }
# 1236
  if (! pname) {
    {
# 1236
    __assert_fail((char const   *)"pname", (char const   *)"cgiedit.c", 1236U,
                  (char const   *)"split_line_on_equals");
    }
  }
# 1237
  if (! pvalue) {
    {
# 1237
    __assert_fail((char const   *)"pvalue", (char const   *)"cgiedit.c", 1237U,
                  (char const   *)"split_line_on_equals");
    }
  }
# 1238
  if (! ((int const   )(*line) != 32)) {
    {
# 1238
    __assert_fail((char const   *)"*line != \' \'", (char const   *)"cgiedit.c",
                  1238U, (char const   *)"split_line_on_equals");
    }
  }
# 1239
  if (! ((int const   )(*line) != 9)) {
    {
# 1239
    __assert_fail((char const   *)"*line != \'\\t\'",
                  (char const   *)"cgiedit.c", 1239U,
                  (char const   *)"split_line_on_equals");
    }
  }
  {
# 1241
  (*pname) = (char *)((void *)0);
# 1242
  (*pvalue) = (char *)((void *)0);
# 1244
  value_start = (char const   *)strchr(line, (int )'=');
  }
# 1245
  if ((unsigned int )value_start == (unsigned int )((void *)0)) {
# 1247
    return (4);
  } else {
# 1245
    if ((unsigned int )value_start == (unsigned int )line) {
# 1247
      return (4);
    }
  }
  {
# 1250
  name_end = value_start - 1;
  }
# 1253
  while (1) {
# 1253
    if (! ((int const   )(*name_end) == 32)) {
# 1253
      if (! ((int const   )(*name_end) == 9)) {
# 1253
        break;
      }
    }
    {
# 1259
    name_end --;
    }
  }
  {
# 1262
  name_len = (unsigned int )((name_end - line) + 1);
# 1263
  (*pname) = (char *)malloc(name_len + 1U);
  }
# 1263
  if ((unsigned int )((void *)0) == (unsigned int )(*pname)) {
# 1265
    return (1);
  }
  {
# 1267
  strncpy((char */* __restrict  */)(*pname),
          (char const   */* __restrict  */)line, name_len);
# 1268
  (*((*pname) + name_len)) = '\0';
# 1271
  value_start ++;
  }
# 1272
  while (1) {
# 1272
    if (! ((int const   )(*value_start) == 32)) {
# 1272
      if (! ((int const   )(*value_start) == 9)) {
# 1272
        break;
      }
    }
    {
# 1274
    value_start ++;
    }
  }
  {
# 1277
  (*pvalue) = strdup(value_start);
  }
# 1277
  if ((unsigned int )((void *)0) == (unsigned int )(*pvalue)) {
    {
# 1279
    free((void *)(*pname));
# 1280
    (*pname) = (char *)((void *)0);
    }
# 1281
    return (1);
  }
# 1284
  return (0);
}
}
# 1310
jb_err edit_parse_actions_file(struct editable_file *file ) 
{ struct file_line *cur_line ;
  size_t len ;
  char const   *text ;
  char *name ;
  char *value ;
  struct action_alias *alias_list ;
  jb_err err ;
  int tmp ;
  int tmp___0 ;
  struct action_alias *new_alias ;
  int tmp___1 ;
  size_t tmp___2 ;

  {
  {
# 1317
  alias_list = (struct action_alias *)((void *)0);
# 1318
  err = 0;
# 1325
  cur_line = file->lines;
  }
# 1336
  while (1) {
# 1336
    if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 1336
      if (! ((int )(*(cur_line->unprocessed + 0)) == 0)) {
# 1336
        break;
      }
    } else {
# 1336
      break;
    }
    {
# 1340
    cur_line->type = 2;
# 1341
    cur_line = cur_line->next;
    }
  }
# 1344
  if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 1344
    if ((int )(*(cur_line->unprocessed + 0)) != 123) {
      {
# 1348
      file->parse_error = cur_line;
# 1349
      file->parse_error_text = (char const   *)"First (non-comment) line of the file must contain a header.";
      }
# 1350
      return (4);
    }
  }
# 1353
  if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
    {
# 1353
    tmp = match_actions_file_header_line((char const   *)cur_line->unprocessed,
                                         (char const   *)"settings");
    }
# 1353
    if (0 == tmp) {
      {
# 1356
      cur_line->type = 7;
# 1358
      cur_line = cur_line->next;
      }
# 1359
      while (1) {
# 1359
        if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 1359
          if (! ((int )(*(cur_line->unprocessed + 0)) != 123)) {
# 1359
            break;
          }
        } else {
# 1359
          break;
        }
# 1361
        if ((*(cur_line->unprocessed + 0))) {
          {
# 1363
          cur_line->type = 8;
# 1365
          err = split_line_on_equals((char const   *)cur_line->unprocessed,
                                     & cur_line->data.setting.name,
                                     & cur_line->data.setting.svalue);
          }
# 1368
          if (err == 1) {
# 1370
            return (err);
          } else {
# 1372
            if (err != 0) {
              {
# 1375
              file->parse_error = cur_line;
# 1376
              file->parse_error_text = (char const   *)"Expected a name=value pair on this {{description}} line, but couldn\'t find one.";
              }
# 1377
              return (4);
            }
          }
        } else {
          {
# 1382
          cur_line->type = 2;
          }
        }
        {
# 1384
        cur_line = cur_line->next;
        }
      }
    }
  }
# 1388
  if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
    {
# 1388
    tmp___0 = match_actions_file_header_line((char const   *)cur_line->unprocessed,
                                             (char const   *)"description");
    }
# 1388
    if (0 == tmp___0) {
      {
# 1391
      cur_line->type = 9;
# 1393
      cur_line = cur_line->next;
      }
# 1394
      while (1) {
# 1394
        if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 1394
          if (! ((int )(*(cur_line->unprocessed + 0)) != 123)) {
# 1394
            break;
          }
        } else {
# 1394
          break;
        }
# 1396
        if ((*(cur_line->unprocessed + 0))) {
          {
# 1398
          cur_line->type = 10;
          }
        } else {
          {
# 1402
          cur_line->type = 2;
          }
        }
        {
# 1404
        cur_line = cur_line->next;
        }
      }
    }
  }
# 1408
  if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
    {
# 1408
    tmp___1 = match_actions_file_header_line((char const   *)cur_line->unprocessed,
                                             (char const   *)"alias");
    }
# 1408
    if (0 == tmp___1) {
      {
# 1411
      cur_line->type = 3;
# 1413
      cur_line = cur_line->next;
      }
# 1414
      while (1) {
# 1414
        if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 1414
          if (! ((int )(*(cur_line->unprocessed + 0)) != 123)) {
# 1414
            break;
          }
        } else {
# 1414
          break;
        }
# 1416
        if ((*(cur_line->unprocessed + 0))) {
          {
# 1421
          cur_line->type = 4;
# 1423
          err = split_line_on_equals((char const   *)cur_line->unprocessed,
                                     & name, & value);
          }
# 1424
          if (err == 1) {
# 1426
            return (err);
          } else {
# 1428
            if (err != 0) {
              {
# 1431
              file->parse_error = cur_line;
# 1432
              file->parse_error_text = (char const   *)"Expected a name=value pair on this {{alias}} line, but couldn\'t find one.";
              }
# 1433
              return (4);
            }
          }
          {
# 1436
          new_alias = (struct action_alias *)zalloc(sizeof((*new_alias)));
          }
# 1436
          if ((unsigned int )new_alias == (unsigned int )((void *)0)) {
            {
# 1439
            free((void *)name);
# 1440
            free((void *)value);
# 1441
            free_alias_list(alias_list);
            }
# 1442
            return (1);
          }
          {
# 1445
          err = get_actions(value, alias_list, new_alias->action);
          }
# 1446
          if (err) {
            {
# 1449
            free((void *)name);
# 1450
            free((void *)value);
# 1451
            free((void *)new_alias);
# 1452
            free_alias_list(alias_list);
            }
# 1453
            if (err == 1) {
# 1455
              return (err);
            } else {
              {
# 1460
              file->parse_error = cur_line;
# 1461
              file->parse_error_text = (char const   *)"This alias does not specify a valid set of actions.";
              }
# 1462
              return (4);
            }
          }
          {
# 1466
          free((void *)value);
# 1468
          new_alias->name = (char const   *)name;
# 1471
          new_alias->next = alias_list;
# 1472
          alias_list = new_alias;
          }
        } else {
          {
# 1476
          cur_line->type = 2;
          }
        }
        {
# 1478
        cur_line = cur_line->next;
        }
      }
    }
  }
# 1483
  while ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 1486
    if (! ((int )(*(cur_line->unprocessed + 0)) == 123)) {
      {
# 1486
      __assert_fail((char const   *)"cur_line->unprocessed[0] == \'{\'",
                    (char const   *)"cgiedit.c", 1486U,
                    (char const   *)"edit_parse_actions_file");
      }
    }
    {
# 1487
    text = (char const   *)(cur_line->unprocessed + 1);
# 1488
    tmp___2 = strlen(text);
# 1488
    len = tmp___2 - 1U;
    }
# 1489
    if ((int const   )(*(text + len)) != 125) {
      {
# 1492
      free_alias_list(alias_list);
# 1493
      file->parse_error = cur_line;
# 1494
      file->parse_error_text = (char const   *)"Headers starting with \'{\' must have a closing bracket (\'}\').  Headers starting with two brackets (\'{{\') must close with two brackets (\'}}\').";
      }
# 1497
      return (4);
    }
# 1500
    if ((int const   )(*(text + 0)) == 123) {
      {
# 1503
      free_alias_list(alias_list);
# 1504
      file->parse_error = cur_line;
# 1505
      file->parse_error_text = (char const   *)"Unknown or unexpected two-bracket header.  Please remember that the system (two-bracket) headers must appear in the order {{settings}}, {{description}}, {{alias}}, and must appear before any actions (one-bracket) headers.  Also note that system headers may not be repeated.";
      }
# 1510
      return (4);
    }
# 1513
    while (1) {
# 1513
      if (! ((int const   )(*text) == 32)) {
# 1513
        if (! ((int const   )(*text) == 9)) {
# 1513
          break;
        }
      }
      {
# 1515
      text ++;
# 1516
      len --;
      }
    }
# 1518
    while (1) {
# 1518
      if (len > 0U) {
# 1518
        if (! ((int const   )(*(text + (len - 1U))) == 32)) {
# 1518
          if (! ((int const   )(*(text + (len - 1U))) == 9)) {
# 1518
            break;
          }
        }
      } else {
# 1518
        break;
      }
      {
# 1522
      len --;
      }
    }
    {
# 1525
    cur_line->type = 5;
# 1528
    value = (char *)malloc(len + 1U);
    }
# 1528
    if ((unsigned int )((void *)0) == (unsigned int )value) {
      {
# 1531
      free_alias_list(alias_list);
      }
# 1532
      return (1);
    }
    {
# 1534
    strncpy((char */* __restrict  */)value,
            (char const   */* __restrict  */)text, len);
# 1535
    (*(value + len)) = '\0';
# 1538
    err = get_actions(value, alias_list, cur_line->data.action);
    }
# 1539
    if (err) {
      {
# 1542
      free((void *)value);
# 1543
      free_alias_list(alias_list);
      }
# 1544
      if (err == 1) {
# 1546
        return (err);
      } else {
        {
# 1551
        file->parse_error = cur_line;
# 1552
        file->parse_error_text = (char const   *)"This header does not specify a valid set of actions.";
        }
# 1553
        return (4);
      }
    }
    {
# 1558
    free((void *)value);
# 1561
    cur_line = cur_line->next;
    }
# 1564
    while (1) {
# 1564
      if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 1564
        if (! ((int )(*(cur_line->unprocessed + 0)) != 123)) {
# 1564
          break;
        }
      } else {
# 1564
        break;
      }
# 1566
      if ((*(cur_line->unprocessed + 0))) {
        {
# 1570
        cur_line->type = 6;
        }
      } else {
        {
# 1574
        cur_line->type = 2;
        }
      }
      {
# 1576
      cur_line = cur_line->next;
      }
    }
  }
  {
# 1580
  free_alias_list(alias_list);
  }
# 1582
  return (0);
}
}
# 1604
static jb_err edit_read_file_lines(FILE *fp , struct file_line **pfile ,
                                   int *newline ) 
{ struct file_line *first_line ;
  struct file_line *cur_line ;
  struct file_line *prev_line ;
  jb_err rval ;
  int tmp ;

  {
# 1611
  if (! fp) {
    {
# 1611
    __assert_fail((char const   *)"fp", (char const   *)"cgiedit.c", 1611U,
                  (char const   *)"edit_read_file_lines");
    }
  }
# 1612
  if (! pfile) {
    {
# 1612
    __assert_fail((char const   *)"pfile", (char const   *)"cgiedit.c", 1612U,
                  (char const   *)"edit_read_file_lines");
    }
  }
  {
# 1614
  (*pfile) = (struct file_line *)((void *)0);
# 1616
  first_line = (struct file_line *)zalloc(sizeof(struct file_line ));
# 1616
  cur_line = first_line;
  }
# 1617
  if ((unsigned int )cur_line == (unsigned int )((void *)0)) {
# 1619
    return (1);
  }
  {
# 1622
  cur_line->type = 1;
# 1624
  rval = edit_read_line(fp, & cur_line->raw, & cur_line->prefix,
                        & cur_line->unprocessed, newline,
                        (unsigned long *)((void *)0));
  }
# 1625
  if (rval) {
    {
# 1629
    free((void *)cur_line);
    }
# 1630
    if (rval == 3) {
      {
# 1630
      tmp = 0;
      }
    } else {
      {
# 1630
      tmp = rval;
      }
    }
# 1630
    return (tmp);
  }
# 1633
  while (1) {
    {
# 1635
    prev_line = cur_line;
# 1636
    prev_line->next = (struct file_line *)zalloc(sizeof(struct file_line ));
# 1636
    cur_line = prev_line->next;
    }
# 1637
    if ((unsigned int )cur_line == (unsigned int )((void *)0)) {
      {
# 1640
      edit_free_file_lines(first_line);
      }
# 1641
      return (1);
    }
    {
# 1644
    cur_line->type = 1;
# 1646
    rval = edit_read_line(fp, & cur_line->raw, & cur_line->prefix,
                          & cur_line->unprocessed, newline,
                          (unsigned long *)((void *)0));
    }
# 1647
    if (rval != 0) {
# 1647
      if (rval != 3) {
        {
# 1650
        edit_free_file_lines(first_line);
        }
# 1651
        return (1);
      }
    }
# 1633
    if (! (rval != 3)) {
# 1633
      break;
    }
  }
  {
# 1660
  prev_line->next = (struct file_line *)((void *)0);
# 1661
  free((void *)cur_line);
# 1663
  (*pfile) = first_line;
  }
# 1664
  return (0);
}
}
# 1702
jb_err edit_read_file(struct client_state *csp ,
                      struct map  const  *parameters , int require_version ,
                      char const   *suffix , struct editable_file **pfile ) 
{ struct file_line *lines ;
  FILE *fp ;
  jb_err err ;
  char *filename ;
  char const   *identifier ;
  struct editable_file *file ;
  unsigned int version ;
  struct stat statbuf[1] ;
  char version_buf[22] ;
  int newline ;
  int tmp ;
  unsigned int specified_version ;

  {
  {
# 1714
  version = 0U;
# 1717
  newline = 0;
  }
# 1719
  if (! csp) {
    {
# 1719
    __assert_fail((char const   *)"csp", (char const   *)"cgiedit.c", 1719U,
                  (char const   *)"edit_read_file");
    }
  }
# 1720
  if (! parameters) {
    {
# 1720
    __assert_fail((char const   *)"parameters", (char const   *)"cgiedit.c",
                  1720U, (char const   *)"edit_read_file");
    }
  }
# 1721
  if (! pfile) {
    {
# 1721
    __assert_fail((char const   *)"pfile", (char const   *)"cgiedit.c", 1721U,
                  (char const   *)"edit_read_file");
    }
  }
  {
# 1723
  (*pfile) = (struct editable_file *)((void *)0);
# 1725
  err = get_file_name_param(csp, parameters, (char const   *)"f", suffix,
                            & filename, & identifier);
  }
# 1727
  if (err) {
# 1729
    return (err);
  }
  {
# 1732
  tmp = stat__extinline((char const   *)filename, statbuf);
  }
# 1732
  if (tmp < 0) {
    {
# 1735
    free((void *)filename);
    }
# 1736
    return (3);
  }
  {
# 1738
  version = (unsigned int )statbuf[0].st_mtim.tv_sec;
  }
# 1740
  if (require_version) {
    {
# 1743
    err = get_number_param(csp, parameters, "v", & specified_version);
    }
# 1744
    if (err) {
      {
# 1746
      free((void *)filename);
      }
# 1747
      return (err);
    }
# 1750
    if (version != specified_version) {
# 1752
      return (5);
    }
  }
  {
# 1756
  fp = fopen((char const   */* __restrict  */)((char const   *)filename),
             (char const   */* __restrict  */)((char const   *)"rb"));
  {
# 17 "spec.work"
    fp->__BLAST_FLAG = 1;
  {

  }
  }

  }
# 1756 "cgiedit.c"
  if ((unsigned int )((void *)0) == (unsigned int )fp) {
    {
# 1758
    free((void *)filename);
    }
# 1759
    return (3);
  }
  {
# 1762
  err = edit_read_file_lines(fp, & lines, & newline);
  {
# 96 "spec.work"
  if (fp->__BLAST_FLAG == 1) {
# 97
    fp->__BLAST_FLAG = 0;
  } else {
# 98
    __error__();
  }
  {

  }
  }
# 1764 "cgiedit.c"
  fclose(fp);
  }
# 1766
  if (err) {
    {
# 1768
    free((void *)filename);
    }
# 1769
    return (err);
  }
  {
# 1772
  file = (struct editable_file *)zalloc(sizeof((*file)));
  }
# 1773
  if (err) {
    {
# 1775
    free((void *)filename);
# 1776
    edit_free_file_lines(lines);
    }
# 1777
    return (err);
  }
  {
# 1780
  file->lines = lines;
# 1781
  file->newline = newline;
# 1782
  file->filename = (char const   *)filename;
# 1783
  file->version = version;
# 1784
  file->identifier = (char const   *)url_encode(identifier);
  }
# 1786
  if ((unsigned int )file->identifier == (unsigned int )((void *)0)) {
    {
# 1788
    edit_free_file(file);
    }
# 1789
    return (1);
  }
# 1793
  if (file->version_str) {
    {
# 1793
    free((void *)file->version_str);
# 1793
    file->version_str = (char const   *)((void *)0);
    }
  }
  {
# 1794
  snprintf((char */* __restrict  */)(version_buf), 22U,
           (char const   */* __restrict  */)((char const   *)"%u"),
           file->version);
# 1795
  version_buf[21] = '\0';
# 1796
  file->version_str = (char const   *)strdup((char const   *)(version_buf));
  }
# 1797
  if ((unsigned int )(version_buf) == (unsigned int )((void *)0)) {
    {
# 1799
    edit_free_file(file);
    }
# 1800
    return (1);
  }
  {
# 1803
  (*pfile) = file;
  }
# 1804
  return (0);
}
}
# 1846
jb_err edit_read_actions_file(struct client_state *csp ,
                              struct http_response *rsp ,
                              struct map  const  *parameters ,
                              int require_version ,
                              struct editable_file **pfile ) 
{ jb_err err ;
  struct editable_file *file ;
  char const   *tmp ;
  char const   *tmp___0 ;

  {
# 1855
  if (! csp) {
    {
# 1855
    __assert_fail((char const   *)"csp", (char const   *)"cgiedit.c", 1855U,
                  (char const   *)"edit_read_actions_file");
    }
  }
# 1856
  if (! parameters) {
    {
# 1856
    __assert_fail((char const   *)"parameters", (char const   *)"cgiedit.c",
                  1856U, (char const   *)"edit_read_actions_file");
    }
  }
# 1857
  if (! pfile) {
    {
# 1857
    __assert_fail((char const   *)"pfile", (char const   *)"cgiedit.c", 1857U,
                  (char const   *)"edit_read_actions_file");
    }
  }
  {
# 1859
  (*pfile) = (struct editable_file *)((void *)0);
# 1861
  err = edit_read_file(csp, parameters, require_version,
                       (char const   *)".action", & file);
  }
# 1862
  if (err) {
# 1865
    if (err == 3) {
      {
# 1867
      tmp = lookup(parameters, (char const   *)"f");
# 1867
      err = cgi_error_file(csp, rsp, tmp);
      }
    } else {
# 1869
      if (err == 5) {
        {
# 1871
        tmp___0 = lookup(parameters, (char const   *)"f");
# 1871
        err = cgi_error_modified(csp, rsp, tmp___0);
        }
      }
    }
# 1873
    if (err == 0) {
      {
# 1879
      err = 3;
      }
    }
# 1881
    return (err);
  }
  {
# 1884
  err = edit_parse_actions_file(file);
  }
# 1885
  if (err) {
# 1887
    if (err == 4) {
      {
# 1889
      err = cgi_error_parse(csp, rsp, file);
      }
# 1890
      if (err == 0) {
        {
# 1896
        err = 3;
        }
      }
    }
    {
# 1899
    edit_free_file(file);
    }
# 1900
    return (err);
  }
  {
# 1903
  (*pfile) = file;
  }
# 1904
  return (0);
}
}
# 1946
static jb_err get_file_name_param(struct client_state *csp ,
                                  struct map  const  *parameters ,
                                  char const   *param_name ,
                                  char const   *suffix , char **pfilename ,
                                  char const   **pparam ) 
{ char const   *param ;
  char const   *s ;
  char *name ;
  char *fullpath ;
  char ch ;
  int len ;
  char const   *tmp ;
  size_t tmp___0 ;

  {
# 1960
  if (! csp) {
    {
# 1960
    __assert_fail((char const   *)"csp", (char const   *)"cgiedit.c", 1960U,
                  (char const   *)"get_file_name_param");
    }
  }
# 1961
  if (! parameters) {
    {
# 1961
    __assert_fail((char const   *)"parameters", (char const   *)"cgiedit.c",
                  1961U, (char const   *)"get_file_name_param");
    }
  }
# 1962
  if (! suffix) {
    {
# 1962
    __assert_fail((char const   *)"suffix", (char const   *)"cgiedit.c", 1962U,
                  (char const   *)"get_file_name_param");
    }
  }
# 1963
  if (! pfilename) {
    {
# 1963
    __assert_fail((char const   *)"pfilename", (char const   *)"cgiedit.c",
                  1963U, (char const   *)"get_file_name_param");
    }
  }
# 1964
  if (! pparam) {
    {
# 1964
    __assert_fail((char const   *)"pparam", (char const   *)"cgiedit.c", 1964U,
                  (char const   *)"get_file_name_param");
    }
  }
  {
# 1966
  (*pfilename) = (char *)((void *)0);
# 1967
  (*pparam) = (char const   *)((void *)0);
# 1969
  param = lookup(parameters, param_name);
  }
# 1970
  if (! (*param)) {
# 1972
    return (2);
  }
  {
# 1975
  (*pparam) = param;
# 1977
  len = (int )strlen(param);
  }
# 1978
  if (len >= 4096) {
# 1981
    return (2);
  }
  {
# 1985
  s = param;
  }
# 1986
  while (1) {
    {
# 1986
    tmp = s;
# 1986
    s ++;
# 1986
    ch = (*tmp);
    }
# 1986
    if (! ((int )ch != 0)) {
# 1986
      break;
    }
# 1988
    if ((int )ch < 65) {
      goto _L___1;
    } else {
# 1988
      if ((int )ch > 90) {
        _L___1: 
# 1988
        if ((int )ch < 97) {
          goto _L___0;
        } else {
# 1988
          if ((int )ch > 122) {
            _L___0: 
# 1988
            if ((int )ch < 48) {
              goto _L;
            } else {
# 1988
              if ((int )ch > 57) {
                _L: 
# 1988
                if ((int )ch != 45) {
# 1988
                  if ((int )ch != 95) {
# 1995
                    return (2);
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
# 2000
  tmp___0 = strlen(suffix);
# 2000
  name = (char *)malloc(((unsigned int )len + tmp___0) + 1U);
  }
# 2001
  if ((unsigned int )name == (unsigned int )((void *)0)) {
# 2003
    return (1);
  }
  {
# 2005
  strcpy((char */* __restrict  */)name, (char const   */* __restrict  */)param);
# 2006
  strcpy((char */* __restrict  */)(name + len),
         (char const   */* __restrict  */)suffix);
# 2009
  fullpath = make_path((csp->config)->confdir, (char const   *)name);
# 2010
  free((void *)name);
  }
# 2012
  if ((unsigned int )fullpath == (unsigned int )((void *)0)) {
# 2014
    return (1);
  }
  {
# 2018
  (*pfilename) = fullpath;
  }
# 2020
  return (0);
}
}
# 2045
static jb_err get_url_spec_param(struct client_state *csp ,
                                 struct map  const  *parameters ,
                                 char const   *name , char **pvalue ) 
{ char const   *orig_param ;
  char *param ;
  char *s ;
  struct url_spec compiled[1] ;
  jb_err err ;
  int tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  size_t tmp___2 ;

  {
# 2056
  if (! csp) {
    {
# 2056
    __assert_fail((char const   *)"csp", (char const   *)"cgiedit.c", 2056U,
                  (char const   *)"get_url_spec_param");
    }
  }
# 2057
  if (! parameters) {
    {
# 2057
    __assert_fail((char const   *)"parameters", (char const   *)"cgiedit.c",
                  2057U, (char const   *)"get_url_spec_param");
    }
  }
# 2058
  if (! name) {
    {
# 2058
    __assert_fail((char const   *)"name", (char const   *)"cgiedit.c", 2058U,
                  (char const   *)"get_url_spec_param");
    }
  }
# 2059
  if (! pvalue) {
    {
# 2059
    __assert_fail((char const   *)"pvalue", (char const   *)"cgiedit.c", 2059U,
                  (char const   *)"get_url_spec_param");
    }
  }
  {
# 2061
  (*pvalue) = (char *)((void *)0);
# 2063
  orig_param = lookup(parameters, name);
  }
# 2064
  if (! (*orig_param)) {
# 2066
    return (2);
  }
  {
# 2070
  param = strdup(orig_param);
  }
# 2071
  if ((unsigned int )param == (unsigned int )((void *)0)) {
# 2073
    return (1);
  }
  {
# 2075
  chomp(param);
  }
# 2078
  if ((int )(*(param + 0)) == 0) {
    {
# 2080
    free((void *)param);
    }
# 2081
    return (2);
  } else {
# 2078
    if ((int )(*(param + 0)) == 123) {
      {
# 2080
      free((void *)param);
      }
# 2081
      return (2);
    }
  }
  {
# 2085
  s = param;
  }
# 2085
  while ((int )(*s) != 0) {
# 2087
    if ((int )(*s) == 13) {
      {
# 2089
      free((void *)param);
      }
# 2090
      return (2);
    } else {
# 2087
      if ((int )(*s) == 10) {
        {
# 2089
        free((void *)param);
        }
# 2090
        return (2);
      }
    }
    {
# 2085
    s ++;
    }
  }
  {
# 2095
  s = strdup((char const   *)param);
  }
# 2096
  if ((unsigned int )s == (unsigned int )((void *)0)) {
    {
# 2098
    free((void *)param);
    }
# 2099
    return (1);
  }
  {
# 2101
  err = create_url_spec(compiled, (char const   *)s);
# 2102
  free((void *)s);
  }
# 2103
  if (err) {
    {
# 2105
    free((void *)param);
    }
# 2106
    if (err == 1) {
      {
# 2106
      tmp = 1;
      }
    } else {
      {
# 2106
      tmp = 2;
      }
    }
# 2106
    return (tmp);
  }
  {
# 2108
  free_url_spec(compiled);
# 2110
  tmp___2 = strlen((char const   *)param);
  }
# 2110
  if ((int )(*(param + (tmp___2 - 1U))) == 92) {
    {
# 2117
    tmp___0 = strchr((char const   *)param, (int )'/');
    }
# 2117
    if ((unsigned int )tmp___0 == (unsigned int )((void *)0)) {
      {
# 2119
      err = string_append(& param, (char const   *)"/");
      }
    } else {
      {
# 2123
      err = string_append(& param, (char const   *)"(?:)");
      }
    }
# 2125
    if (err) {
# 2127
      return (err);
    }
    {
# 2131
    s = strdup((char const   *)param);
    }
# 2132
    if ((unsigned int )s == (unsigned int )((void *)0)) {
      {
# 2134
      free((void *)param);
      }
# 2135
      return (1);
    }
    {
# 2137
    err = create_url_spec(compiled, (char const   *)s);
# 2138
    free((void *)s);
    }
# 2139
    if (err) {
      {
# 2141
      free((void *)param);
      }
# 2142
      if (err == 1) {
        {
# 2142
        tmp___1 = 1;
        }
      } else {
        {
# 2142
        tmp___1 = 2;
        }
      }
# 2142
      return (tmp___1);
    }
    {
# 2144
    free_url_spec(compiled);
    }
  }
  {
# 2147
  (*pvalue) = param;
  }
# 2148
  return (0);
}
}
# 2177
static jb_err map_radio(struct map *exports , char const   *optionname ,
                        char const   *values , int value ) 
{ size_t len ;
  char *buf ;
  char *p ;
  char c ;
  char *tmp ;
  jb_err tmp___0 ;
  char const   *tmp___1 ;
  jb_err tmp___2 ;

  {
# 2187
  if (! exports) {
    {
# 2187
    __assert_fail((char const   *)"exports", (char const   *)"cgiedit.c", 2187U,
                  (char const   *)"map_radio");
    }
  }
# 2188
  if (! optionname) {
    {
# 2188
    __assert_fail((char const   *)"optionname", (char const   *)"cgiedit.c",
                  2188U, (char const   *)"map_radio");
    }
  }
# 2189
  if (! values) {
    {
# 2189
    __assert_fail((char const   *)"values", (char const   *)"cgiedit.c", 2189U,
                  (char const   *)"map_radio");
    }
  }
  {
# 2191
  len = strlen(optionname);
# 2192
  buf = (char *)malloc(len + 3U);
  }
# 2193
  if ((unsigned int )buf == (unsigned int )((void *)0)) {
# 2195
    return (1);
  }
  {
# 2198
  strcpy((char */* __restrict  */)buf,
         (char const   */* __restrict  */)optionname);
# 2199
  p = buf + len;
# 2200
  tmp = p;
# 2200
  p ++;
# 2200
  (*tmp) = '-';
# 2201
  (*(p + 1)) = '\0';
  }
# 2203
  while (1) {
    {
# 2203
    tmp___1 = values;
# 2203
    values ++;
# 2203
    c = (*tmp___1);
    }
# 2203
    if (! ((int )c != 0)) {
# 2203
      break;
    }
# 2205
    if ((int )c != value) {
      {
# 2207
      (*p) = c;
# 2208
      tmp___0 = map(exports, (char const   *)buf, 1, (char const   *)"", 1);
      }
# 2208
      if (tmp___0) {
# 2210
        return (1);
      }
    }
  }
  {
# 2215
  (*p) = (char )value;
# 2216
  tmp___2 = map(exports, (char const   *)buf, 0, (char const   *)"checked", 1);
  }
# 2216
  return (tmp___2);
}
}
# 2238
jb_err cgi_error_modified(struct client_state *csp , struct http_response *rsp ,
                          char const   *filename ) 
{ struct map *exports ;
  jb_err err ;
  char const   *tmp ;
  jb_err tmp___0 ;

  {
# 2245
  if (! csp) {
    {
# 2245
    __assert_fail((char const   *)"csp", (char const   *)"cgiedit.c", 2245U,
                  (char const   *)"cgi_error_modified");
    }
  }
# 2246
  if (! rsp) {
    {
# 2246
    __assert_fail((char const   *)"rsp", (char const   *)"cgiedit.c", 2246U,
                  (char const   *)"cgi_error_modified");
    }
  }
# 2247
  if (! filename) {
    {
# 2247
    __assert_fail((char const   *)"filename", (char const   *)"cgiedit.c",
                  2247U, (char const   *)"cgi_error_modified");
    }
  }
  {
# 2249
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)((void *)0));
  }
# 2249
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
# 2251
    return (1);
  }
  {
# 2254
  tmp = (char const   *)html_encode(filename);
# 2254
  err = map(exports, (char const   *)"f", 1, tmp, 0);
  }
# 2255
  if (err) {
    {
# 2257
    free_map(exports);
    }
# 2258
    return (err);
  }
  {
# 2261
  tmp___0 = template_fill_for_cgi(csp, (char const   *)"cgi-error-modified",
                                  exports, rsp);
  }
# 2261
  return (tmp___0);
}
}
# 2283
jb_err cgi_error_parse(struct client_state *csp , struct http_response *rsp ,
                       struct editable_file *file ) 
{ struct map *exports ;
  jb_err err ;
  struct file_line *cur_line ;
  char const   *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  jb_err tmp___2 ;

  {
# 2291
  if (! csp) {
    {
# 2291
    __assert_fail((char const   *)"csp", (char const   *)"cgiedit.c", 2291U,
                  (char const   *)"cgi_error_parse");
    }
  }
# 2292
  if (! rsp) {
    {
# 2292
    __assert_fail((char const   *)"rsp", (char const   *)"cgiedit.c", 2292U,
                  (char const   *)"cgi_error_parse");
    }
  }
# 2293
  if (! file) {
    {
# 2293
    __assert_fail((char const   *)"file", (char const   *)"cgiedit.c", 2293U,
                  (char const   *)"cgi_error_parse");
    }
  }
  {
# 2295
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)((void *)0));
  }
# 2295
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
# 2297
    return (1);
  }
  {
# 2300
  err = map(exports, (char const   *)"f", 1, file->identifier, 1);
  }
# 2301
  if (! err) {
    {
# 2301
    tmp = (char const   *)html_encode(file->parse_error_text);
# 2301
    err = map(exports, (char const   *)"parse-error", 1, tmp, 0);
    }
  }
  {
# 2303
  cur_line = file->parse_error;
  }
# 2304
  if (! cur_line) {
    {
# 2304
    __assert_fail((char const   *)"cur_line", (char const   *)"cgiedit.c",
                  2304U, (char const   *)"cgi_error_parse");
    }
  }
# 2306
  if (! err) {
    {
# 2306
    tmp___0 = (char const   *)html_encode((char const   *)cur_line->raw);
# 2306
    err = map(exports, (char const   *)"line-raw", 1, tmp___0, 0);
    }
  }
# 2307
  if (! err) {
    {
# 2307
    tmp___1 = (char const   *)html_encode((char const   *)cur_line->unprocessed);
# 2307
    err = map(exports, (char const   *)"line-data", 1, tmp___1, 0);
    }
  }
# 2309
  if (err) {
    {
# 2311
    free_map(exports);
    }
# 2312
    return (err);
  }
  {
# 2315
  tmp___2 = template_fill_for_cgi(csp, (char const   *)"cgi-error-parse",
                                  exports, rsp);
  }
# 2315
  return (tmp___2);
}
}
# 2337
jb_err cgi_error_file(struct client_state *csp , struct http_response *rsp ,
                      char const   *filename ) 
{ struct map *exports ;
  jb_err err ;
  char const   *tmp ;
  jb_err tmp___0 ;

  {
# 2344
  if (! csp) {
    {
# 2344
    __assert_fail((char const   *)"csp", (char const   *)"cgiedit.c", 2344U,
                  (char const   *)"cgi_error_file");
    }
  }
# 2345
  if (! rsp) {
    {
# 2345
    __assert_fail((char const   *)"rsp", (char const   *)"cgiedit.c", 2345U,
                  (char const   *)"cgi_error_file");
    }
  }
# 2346
  if (! filename) {
    {
# 2346
    __assert_fail((char const   *)"filename", (char const   *)"cgiedit.c",
                  2346U, (char const   *)"cgi_error_file");
    }
  }
  {
# 2348
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)((void *)0));
  }
# 2348
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
# 2350
    return (1);
  }
  {
# 2353
  tmp = (char const   *)html_encode(filename);
# 2353
  err = map(exports, (char const   *)"f", 1, tmp, 0);
  }
# 2354
  if (err) {
    {
# 2356
    free_map(exports);
    }
# 2357
    return (err);
  }
  {
# 2360
  tmp___0 = template_fill_for_cgi(csp, (char const   *)"cgi-error-file",
                                  exports, rsp);
  }
# 2360
  return (tmp___0);
}
}
# 2382
jb_err cgi_error_file_read_only(struct client_state *csp ,
                                struct http_response *rsp ,
                                char const   *filename ) 
{ struct map *exports ;
  jb_err err ;
  char const   *tmp ;
  jb_err tmp___0 ;

  {
# 2389
  if (! csp) {
    {
# 2389
    __assert_fail((char const   *)"csp", (char const   *)"cgiedit.c", 2389U,
                  (char const   *)"cgi_error_file_read_only");
    }
  }
# 2390
  if (! rsp) {
    {
# 2390
    __assert_fail((char const   *)"rsp", (char const   *)"cgiedit.c", 2390U,
                  (char const   *)"cgi_error_file_read_only");
    }
  }
# 2391
  if (! filename) {
    {
# 2391
    __assert_fail((char const   *)"filename", (char const   *)"cgiedit.c",
                  2391U, (char const   *)"cgi_error_file_read_only");
    }
  }
  {
# 2393
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)((void *)0));
  }
# 2393
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
# 2395
    return (1);
  }
  {
# 2398
  tmp = (char const   *)html_encode(filename);
# 2398
  err = map(exports, (char const   *)"f", 1, tmp, 0);
  }
# 2399
  if (err) {
    {
# 2401
    free_map(exports);
    }
# 2402
    return (err);
  }
  {
# 2405
  tmp___0 = template_fill_for_cgi(csp,
                                  (char const   *)"cgi-error-file-read-only",
                                  exports, rsp);
  }
# 2405
  return (tmp___0);
}
}
# 2426
jb_err cgi_error_disabled(struct client_state *csp , struct http_response *rsp ) 
{ struct map *exports ;
  jb_err tmp ;

  {
# 2431
  if (! csp) {
    {
# 2431
    __assert_fail((char const   *)"csp", (char const   *)"cgiedit.c", 2431U,
                  (char const   *)"cgi_error_disabled");
    }
  }
# 2432
  if (! rsp) {
    {
# 2432
    __assert_fail((char const   *)"rsp", (char const   *)"cgiedit.c", 2432U,
                  (char const   *)"cgi_error_disabled");
    }
  }
  {
# 2434
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)((void *)0));
  }
# 2434
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
# 2436
    return (1);
  }
  {
# 2439
  tmp = template_fill_for_cgi(csp, (char const   *)"cgi-error-disabled",
                              exports, rsp);
  }
# 2439
  return (tmp);
}
}
# 2461
jb_err cgi_edit_actions(struct client_state *csp , struct http_response *rsp ,
                        struct map  const  *parameters ) 
{ jb_err tmp ;
  jb_err tmp___0 ;

  {
# 2466
  if (0U == ((csp->config)->feature_flags & 1U)) {
    {
# 2468
    tmp = cgi_error_disabled(csp, rsp);
    }
# 2468
    return (tmp);
  }
  {
# 2473
  tmp___0 = cgi_redirect(rsp,
                         (char const   *)"http://config.privoxy.org/edit-actions-list?f=default");
  }
# 2473
  return (tmp___0);
}
}
# 2500
jb_err cgi_edit_actions_list(struct client_state *csp ,
                             struct http_response *rsp ,
                             struct map  const  *parameters ) 
{ char *section_template ;
  char *url_template ;
  char *sections ;
  char *urls ;
  char buf[150] ;
  char *s ;
  struct map *exports ;
  struct map *section_exports ;
  struct map *url_exports ;
  struct editable_file *file ;
  struct file_line *cur_line ;
  unsigned int line_number ;
  unsigned int prev_section_line_number ;
  int i ;
  int url_1_2 ;
  struct file_list *fl ;
  struct url_actions *b ;
  char *buttons ;
  jb_err err ;
  jb_err tmp ;
  int tmp___0 ;
  jb_err tmp___1 ;
  int tmp___2 ;
  char const   *tmp___3 ;
  int tmp___4 ;
  char const   *tmp___5 ;
  int tmp___6 ;
  jb_err tmp___7 ;
  jb_err tmp___8 ;
  char const   *tmp___9 ;
  char const   *tmp___10 ;
  char const   *tmp___11 ;
  jb_err tmp___12 ;

  {
  {
# 2515
  line_number = 0U;
# 2516
  prev_section_line_number = 4294967295U;
# 2520
  buttons = (char *)((void *)0);
  }
# 2523
  if (0U == ((csp->config)->feature_flags & 1U)) {
    {
# 2525
    tmp = cgi_error_disabled(csp, rsp);
    }
# 2525
    return (tmp);
  }
  {
# 2528
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)((void *)0));
  }
# 2528
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
# 2530
    return (1);
  }
  {
# 2534
  err = edit_read_actions_file(csp, rsp, parameters, 0, & file);
  }
# 2535
  if (err) {
# 2538
    if (err == 3) {
      {
# 2538
      tmp___0 = 0;
      }
    } else {
      {
# 2538
      tmp___0 = err;
      }
    }
# 2538
    return (tmp___0);
  }
  {
# 2542
  cur_line = file->lines;
# 2543
  line_number = 1U;
  }
# 2544
  while (1) {
# 2544
    if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 2544
      if (! (cur_line->type != 5)) {
# 2544
        break;
      }
    } else {
# 2544
      break;
    }
    {
# 2546
    cur_line = cur_line->next;
# 2547
    line_number ++;
    }
  }
# 2557
  if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 2557
    if (cur_line->type == 5) {
# 2557
      if ((unsigned int )cur_line->next != (unsigned int )((void *)0)) {
# 2557
        if ((cur_line->next)->type == 6) {
          {
# 2557
          tmp___4 = strcmp((char const   *)(cur_line->next)->unprocessed,
                           (char const   *)"/");
          }
# 2557
          if (0 == tmp___4) {
# 2557
            if ((unsigned int )(cur_line->next)->next ==
                (unsigned int )((void *)0)) {
              goto _L___2;
            } else {
# 2557
              if (((cur_line->next)->next)->type != 6) {
                _L___2: 
                {
# 2572
                err = template_load(csp, & section_template,
                                    (char const   *)"edit-actions-list-button",
                                    0);
                }
# 2573
                if (err) {
                  {
# 2575
                  edit_free_file(file);
# 2576
                  free_map(exports);
                  }
# 2577
                  if (err == 3) {
                    {
# 2579
                    tmp___1 = cgi_error_no_template(csp, rsp,
                                                    (char const   *)"edit-actions-list-button");
                    }
# 2579
                    return (tmp___1);
                  }
# 2581
                  return (err);
                }
                {
# 2584
                err = template_fill(& section_template,
                                    (struct map  const  *)exports);
                }
# 2585
                if (err) {
                  {
# 2587
                  edit_free_file(file);
# 2588
                  free_map(exports);
                  }
# 2589
                  return (err);
                }
                {
# 2592
                buttons = strdup((char const   *)"");
# 2593
                i = 0;
                }
# 2593
                while (i < 10) {
                  {
# 2595
                  fl = csp->actions_list[i];
                  }
# 2595
                  if ((unsigned int )fl != (unsigned int )((void *)0)) {
                    {
# 2595
                    b = (struct url_actions *)fl->f;
                    }
# 2595
                    if ((unsigned int )b != (unsigned int )((void *)0)) {
                      {
# 2597
                      b = b->next;
                      }
# 2597
                      while ((unsigned int )((void *)0) != (unsigned int )b) {
                        {
# 2599
                        tmp___2 = strncmp((char const   *)b->url[0].spec,
                                          (char const   *)"standard.", 9U);
                        }
# 2599
                        if (! tmp___2) {
# 2599
                          if ((int )(*(b->url[0].spec + 9)) != 0) {
# 2601
                            if (err) {
                              goto _L;
                            } else {
                              {
# 2601
                              section_exports = new_map();
                              }
# 2601
                              if ((unsigned int )((void *)0) ==
                                  (unsigned int )section_exports) {
                                _L: 
# 2603
                                if (buttons) {
                                  {
# 2603
                                  free((void *)buttons);
# 2603
                                  buttons = (char *)((void *)0);
                                  }
                                }
                                {
# 2604
                                free((void *)section_template);
# 2605
                                edit_free_file(file);
# 2606
                                free_map(exports);
                                }
# 2607
                                return (1);
                              }
                            }
                            {
# 2610
                            err = map(section_exports,
                                      (char const   *)"button-name", 1,
                                      (char const   *)(b->url[0].spec + 9), 1);
                            }
# 2612
                            if (err) {
                              goto _L___0;
                            } else {
                              {
# 2612
                              s = strdup((char const   *)section_template);
                              }
# 2612
                              if ((unsigned int )((void *)0) == (unsigned int )s) {
                                _L___0: 
                                {
# 2614
                                free_map(section_exports);
                                }
# 2615
                                if (buttons) {
                                  {
# 2615
                                  free((void *)buttons);
# 2615
                                  buttons = (char *)((void *)0);
                                  }
                                }
                                {
# 2616
                                free((void *)section_template);
# 2617
                                edit_free_file(file);
# 2618
                                free_map(exports);
                                }
# 2619
                                return (1);
                              }
                            }
# 2622
                            if (! err) {
                              {
# 2622
                              err = template_fill(& s,
                                                  (struct map  const  *)section_exports);
                              }
                            }
                            {
# 2623
                            free_map(section_exports);
                            }
# 2624
                            if (! err) {
                              {
# 2624
                              err = string_join(& buttons, s);
                              }
                            }
                          }
                        }
                        {
# 2597
                        b = b->next;
                        }
                      }
                    }
                  }
                  {
# 2593
                  i ++;
                  }
                }
# 2629
                if (section_template) {
                  {
# 2629
                  free((void *)section_template);
# 2629
                  section_template = (char *)((void *)0);
                  }
                }
# 2630
                if (! err) {
                  {
# 2630
                  err = map(exports, (char const   *)"all-urls-buttons", 1,
                            (char const   *)buttons, 0);
                  }
                }
# 2636
                if (! err) {
                  {
# 2636
                  err = map_conditional(exports,
                                        (char const   *)"all-urls-present", 1);
                  }
                }
                {
# 2638
                snprintf((char */* __restrict  */)(buf), 150U,
                         (char const   */* __restrict  */)((char const   *)"%d"),
                         line_number);
                }
# 2639
                if (! err) {
                  {
# 2639
                  err = map(exports, (char const   *)"all-urls-s", 1,
                            (char const   *)(buf), 1);
                  }
                }
                {
# 2640
                snprintf((char */* __restrict  */)(buf), 150U,
                         (char const   */* __restrict  */)((char const   *)"%d"),
                         line_number + 2U);
                }
# 2641
                if (! err) {
                  {
# 2641
                  err = map(exports, (char const   *)"all-urls-s-next", 1,
                            (char const   *)(buf), 1);
                  }
                }
# 2642
                if (! err) {
                  {
# 2642
                  tmp___3 = (char const   *)actions_to_html(csp,
                                                            cur_line->data.action);
# 2642
                  err = map(exports, (char const   *)"all-urls-actions", 1,
                            tmp___3, 0);
                  }
                }
                {
# 2646
                cur_line = (cur_line->next)->next;
# 2647
                line_number += 2U;
                }
              } else {
                goto _L___6;
              }
            }
          } else {
            goto _L___6;
          }
        } else {
          goto _L___6;
        }
      } else {
        goto _L___6;
      }
    } else {
      goto _L___6;
    }
  } else {
    _L___6: 
# 2663
    if (! err) {
      {
# 2663
      err = map_conditional(exports, (char const   *)"all-urls-present", 0);
      }
    }
  }
# 2668
  if (! err) {
    {
# 2668
    err = map(exports, (char const   *)"f", 1, file->identifier, 1);
    }
  }
# 2669
  if (! err) {
    {
# 2669
    err = map(exports, (char const   *)"v", 1, file->version_str, 1);
    }
  }
# 2673
  if (! err) {
    {
# 2673
    tmp___5 = lookup(parameters, (char const   *)"f");
# 2673
    tmp___6 = strcmp((char const   *)"default", tmp___5);
# 2673
    err = map_conditional(exports, (char const   *)"default-action",
                          tmp___6 == 0);
    }
  }
# 2675
  if (err) {
    {
# 2677
    edit_free_file(file);
# 2678
    free_map(exports);
    }
# 2679
    return (err);
  }
  {
# 2686
  err = template_load(csp, & section_template,
                      (char const   *)"edit-actions-list-section", 0);
  }
# 2687
  if (err) {
    {
# 2689
    edit_free_file(file);
# 2690
    free_map(exports);
    }
# 2691
    if (err == 3) {
      {
# 2693
      tmp___7 = cgi_error_no_template(csp, rsp,
                                      (char const   *)"edit-actions-list-section");
      }
# 2693
      return (tmp___7);
    }
# 2695
    return (err);
  }
  {
# 2698
  err = template_load(csp, & url_template,
                      (char const   *)"edit-actions-list-url", 0);
  }
# 2699
  if (err) {
    {
# 2701
    free((void *)section_template);
# 2702
    edit_free_file(file);
# 2703
    free_map(exports);
    }
# 2704
    if (err == 3) {
      {
# 2706
      tmp___8 = cgi_error_no_template(csp, rsp,
                                      (char const   *)"edit-actions-list-url");
      }
# 2706
      return (tmp___8);
    }
# 2708
    return (err);
  }
  {
# 2711
  err = template_fill(& section_template, (struct map  const  *)exports);
  }
# 2712
  if (err) {
    {
# 2714
    free((void *)url_template);
# 2715
    edit_free_file(file);
# 2716
    free_map(exports);
# 2717
    free((void *)url_template);
    }
# 2718
    return (err);
  }
  {
# 2721
  err = template_fill(& url_template, (struct map  const  *)exports);
  }
# 2722
  if (err) {
    {
# 2724
    free((void *)section_template);
# 2725
    edit_free_file(file);
# 2726
    free_map(exports);
    }
# 2727
    return (err);
  }
  {
# 2730
  sections = strdup((char const   *)"");
  }
# 2730
  if ((unsigned int )((void *)0) == (unsigned int )sections) {
    {
# 2732
    free((void *)section_template);
# 2733
    free((void *)url_template);
# 2734
    edit_free_file(file);
# 2735
    free_map(exports);
    }
# 2736
    return (1);
  }
# 2739
  while (1) {
# 2739
    if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 2739
      if (! (cur_line->type == 5)) {
# 2739
        break;
      }
    } else {
# 2739
      break;
    }
    {
# 2741
    section_exports = new_map();
    }
# 2741
    if ((unsigned int )((void *)0) == (unsigned int )section_exports) {
      {
# 2743
      free((void *)sections);
# 2744
      free((void *)section_template);
# 2745
      free((void *)url_template);
# 2746
      edit_free_file(file);
# 2747
      free_map(exports);
      }
# 2748
      return (1);
    }
    {
# 2751
    snprintf((char */* __restrict  */)(buf), 150U,
             (char const   */* __restrict  */)((char const   *)"%d"),
             line_number);
# 2752
    err = map(section_exports, (char const   *)"s", 1, (char const   *)(buf), 1);
    }
# 2753
    if (! err) {
      {
# 2753
      tmp___9 = (char const   *)actions_to_html(csp, cur_line->data.action);
# 2753
      err = map(section_exports, (char const   *)"actions", 1, tmp___9, 0);
      }
    }
# 2756
    if (err) {
      _L___8: 
# 2765
      if (! err) {
        {
# 2765
        err = map_block_keep(section_exports, (char const   *)"empty-section");
        }
      }
    } else {
# 2756
      if ((unsigned int )cur_line->next != (unsigned int )((void *)0)) {
# 2756
        if ((cur_line->next)->type == 6) {
          {
# 2761
          err = map_block_killer(section_exports,
                                 (char const   *)"empty-section");
          }
        } else {
          goto _L___8;
        }
      } else {
        goto _L___8;
      }
    }
# 2768
    if (prev_section_line_number != 4294967295U) {
      {
# 2771
      snprintf((char */* __restrict  */)(buf), 150U,
               (char const   */* __restrict  */)((char const   *)"%d"),
               prev_section_line_number);
      }
# 2772
      if (! err) {
        {
# 2772
        err = map(section_exports, (char const   *)"s-prev", 1,
                  (char const   *)(buf), 1);
        }
      }
# 2773
      if (! err) {
        {
# 2773
        err = map_block_keep(section_exports, (char const   *)"s-prev-exists");
        }
      }
    } else {
# 2778
      if (! err) {
        {
# 2778
        err = map_block_killer(section_exports, (char const   *)"s-prev-exists");
        }
      }
    }
    {
# 2780
    prev_section_line_number = line_number;
    }
# 2782
    if (err) {
      {
# 2784
      free((void *)sections);
# 2785
      free((void *)section_template);
# 2786
      free((void *)url_template);
# 2787
      edit_free_file(file);
# 2788
      free_map(exports);
# 2789
      free_map(section_exports);
      }
# 2790
      return (err);
    }
    {
# 2795
    urls = strdup((char const   *)"");
    }
# 2795
    if ((unsigned int )((void *)0) == (unsigned int )urls) {
      {
# 2797
      free((void *)sections);
# 2798
      free((void *)section_template);
# 2799
      free((void *)url_template);
# 2800
      edit_free_file(file);
# 2801
      free_map(exports);
# 2802
      free_map(section_exports);
      }
# 2803
      return (1);
    }
    {
# 2806
    url_1_2 = 2;
# 2808
    cur_line = cur_line->next;
# 2809
    line_number ++;
    }
# 2811
    while (1) {
# 2811
      if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 2811
        if (! (cur_line->type == 6)) {
# 2811
          break;
        }
      } else {
# 2811
        break;
      }
      {
# 2813
      url_exports = new_map();
      }
# 2813
      if ((unsigned int )((void *)0) == (unsigned int )url_exports) {
        {
# 2815
        free((void *)urls);
# 2816
        free((void *)sections);
# 2817
        free((void *)section_template);
# 2818
        free((void *)url_template);
# 2819
        edit_free_file(file);
# 2820
        free_map(exports);
# 2821
        free_map(section_exports);
        }
# 2822
        return (1);
      }
      {
# 2825
      snprintf((char */* __restrict  */)(buf), 150U,
               (char const   */* __restrict  */)((char const   *)"%d"),
               line_number);
# 2826
      err = map(url_exports, (char const   *)"p", 1, (char const   *)(buf), 1);
# 2828
      snprintf((char */* __restrict  */)(buf), 150U,
               (char const   */* __restrict  */)((char const   *)"%d"), url_1_2);
      }
# 2829
      if (! err) {
        {
# 2829
        err = map(url_exports, (char const   *)"url-1-2", 1,
                  (char const   *)(buf), 1);
        }
      }
# 2831
      if (! err) {
        {
# 2831
        tmp___10 = (char const   *)html_encode((char const   *)cur_line->unprocessed);
# 2831
        err = map(url_exports, (char const   *)"url-html", 1, tmp___10, 0);
        }
      }
# 2833
      if (! err) {
        {
# 2833
        tmp___11 = (char const   *)url_encode((char const   *)cur_line->unprocessed);
# 2833
        err = map(url_exports, (char const   *)"url", 1, tmp___11, 0);
        }
      }
# 2836
      if (err) {
        {
# 2838
        free((void *)urls);
# 2839
        free((void *)sections);
# 2840
        free((void *)section_template);
# 2841
        free((void *)url_template);
# 2842
        edit_free_file(file);
# 2843
        free_map(exports);
# 2844
        free_map(section_exports);
# 2845
        free_map(url_exports);
        }
# 2846
        return (err);
      }
      {
# 2849
      s = strdup((char const   *)url_template);
      }
# 2849
      if ((unsigned int )((void *)0) == (unsigned int )s) {
        {
# 2851
        free((void *)urls);
# 2852
        free((void *)sections);
# 2853
        free((void *)section_template);
# 2854
        free((void *)url_template);
# 2855
        edit_free_file(file);
# 2856
        free_map(exports);
# 2857
        free_map(section_exports);
# 2858
        free_map(url_exports);
        }
# 2859
        return (1);
      }
      {
# 2862
      err = template_fill(& s, (struct map  const  *)section_exports);
      }
# 2863
      if (! err) {
        {
# 2863
        err = template_fill(& s, (struct map  const  *)url_exports);
        }
      }
# 2864
      if (! err) {
        {
# 2864
        err = string_append(& urls, (char const   *)s);
        }
      }
      {
# 2866
      free_map(url_exports);
      }
# 2867
      if (s) {
        {
# 2867
        free((void *)s);
# 2867
        s = (char *)((void *)0);
        }
      }
# 2869
      if (err) {
# 2871
        if (urls) {
          {
# 2871
          free((void *)urls);
# 2871
          urls = (char *)((void *)0);
          }
        }
        {
# 2872
        free((void *)sections);
# 2873
        free((void *)section_template);
# 2874
        free((void *)url_template);
# 2875
        edit_free_file(file);
# 2876
        free_map(exports);
# 2877
        free_map(section_exports);
        }
# 2878
        return (err);
      }
      {
# 2881
      url_1_2 = 3 - url_1_2;
# 2883
      cur_line = cur_line->next;
# 2884
      line_number ++;
      }
    }
    {
# 2887
    err = map(section_exports, (char const   *)"urls", 1, (char const   *)urls,
              0);
# 2891
    snprintf((char */* __restrict  */)(buf), 150U,
             (char const   */* __restrict  */)((char const   *)"%d"),
             line_number);
    }
# 2892
    if (! err) {
      {
# 2892
      err = map(section_exports, (char const   *)"s-next", 1,
                (char const   *)(buf), 1);
      }
    }
# 2894
    if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 2894
      if (cur_line->type == 5) {
# 2898
        if (! err) {
          {
# 2898
          err = map_block_keep(section_exports, (char const   *)"s-next-exists");
          }
        }
      } else {
        goto _L___9;
      }
    } else {
      _L___9: 
# 2903
      if (! err) {
        {
# 2903
        err = map_block_killer(section_exports, (char const   *)"s-next-exists");
        }
      }
    }
# 2906
    if (err) {
      {
# 2908
      free((void *)sections);
# 2909
      free((void *)section_template);
# 2910
      free((void *)url_template);
# 2911
      edit_free_file(file);
# 2912
      free_map(exports);
# 2913
      free_map(section_exports);
      }
# 2914
      return (err);
    }
    {
# 2917
    s = strdup((char const   *)section_template);
    }
# 2917
    if ((unsigned int )((void *)0) == (unsigned int )s) {
      {
# 2919
      free((void *)sections);
# 2920
      free((void *)section_template);
# 2921
      free((void *)url_template);
# 2922
      edit_free_file(file);
# 2923
      free_map(exports);
# 2924
      free_map(section_exports);
      }
# 2925
      return (1);
    }
    {
# 2928
    err = template_fill(& s, (struct map  const  *)section_exports);
    }
# 2929
    if (! err) {
      {
# 2929
      err = string_append(& sections, (char const   *)s);
      }
    }
# 2931
    if (s) {
      {
# 2931
      free((void *)s);
# 2931
      s = (char *)((void *)0);
      }
    }
    {
# 2932
    free_map(section_exports);
    }
# 2934
    if (err) {
# 2936
      if (sections) {
        {
# 2936
        free((void *)sections);
# 2936
        sections = (char *)((void *)0);
        }
      }
      {
# 2937
      free((void *)section_template);
# 2938
      free((void *)url_template);
# 2939
      edit_free_file(file);
# 2940
      free_map(exports);
      }
# 2941
      return (err);
    }
  }
  {
# 2945
  edit_free_file(file);
# 2946
  free((void *)section_template);
# 2947
  free((void *)url_template);
# 2949
  err = map(exports, (char const   *)"sections", 1, (char const   *)sections, 0);
  }
# 2950
  if (err) {
    {
# 2952
    free_map(exports);
    }
# 2953
    return (err);
  }
  {
# 2958
  tmp___12 = template_fill_for_cgi(csp, (char const   *)"edit-actions-list",
                                   exports, rsp);
  }
# 2958
  return (tmp___12);
}
}
# 2981
jb_err cgi_edit_actions_for_url(struct client_state *csp ,
                                struct http_response *rsp ,
                                struct map  const  *parameters ) 
{ struct map *exports ;
  unsigned int sectionid ;
  struct editable_file *file ;
  struct file_line *cur_line ;
  unsigned int line_number ;
  jb_err err ;
  struct file_list *filter_file ;
  struct re_filterfile_spec *filter_group ;
  jb_err tmp ;
  int tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char *result ;
  int index___0 ;
  char *filter_template ;
  jb_err tmp___3 ;
  char current_mode ;
  struct list_entry *filter_name ;
  char *this_line ;
  struct map *line_exports ;
  char number[20] ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  jb_err tmp___8 ;

  {
# 2994
  if (0U == ((csp->config)->feature_flags & 1U)) {
    {
# 2996
    tmp = cgi_error_disabled(csp, rsp);
    }
# 2996
    return (tmp);
  }
  {
# 2999
  err = get_number_param(csp, parameters, "s", & sectionid);
  }
# 3000
  if (err) {
# 3002
    return (err);
  }
  {
# 3005
  err = edit_read_actions_file(csp, rsp, parameters, 1, & file);
  }
# 3006
  if (err) {
# 3009
    if (err == 3) {
      {
# 3009
      tmp___0 = 0;
      }
    } else {
      {
# 3009
      tmp___0 = err;
      }
    }
# 3009
    return (tmp___0);
  }
  {
# 3012
  cur_line = file->lines;
# 3014
  line_number = 1U;
  }
# 3014
  while (1) {
# 3014
    if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 3014
      if (! (line_number < sectionid)) {
# 3014
        break;
      }
    } else {
# 3014
      break;
    }
    {
# 3016
    cur_line = cur_line->next;
# 3014
    line_number ++;
    }
  }
# 3019
  if ((unsigned int )cur_line == (unsigned int )((void *)0)) {
    {
# 3025
    edit_free_file(file);
    }
# 3026
    return (2);
  } else {
# 3019
    if (line_number != sectionid) {
      {
# 3025
      edit_free_file(file);
      }
# 3026
      return (2);
    } else {
# 3019
      if (sectionid < 1U) {
        {
# 3025
        edit_free_file(file);
        }
# 3026
        return (2);
      } else {
# 3019
        if (cur_line->type != 5) {
          {
# 3025
          edit_free_file(file);
          }
# 3026
          return (2);
        }
      }
    }
  }
  {
# 3029
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)((void *)0));
  }
# 3029
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
    {
# 3031
    edit_free_file(file);
    }
# 3032
    return (1);
  }
  {
# 3035
  err = map(exports, (char const   *)"f", 1, file->identifier, 1);
  }
# 3036
  if (! err) {
    {
# 3036
    err = map(exports, (char const   *)"v", 1, file->version_str, 1);
    }
  }
# 3037
  if (! err) {
    {
# 3037
    tmp___1 = lookup(parameters, (char const   *)"s");
# 3037
    tmp___2 = (char const   *)url_encode(tmp___1);
# 3037
    err = map(exports, (char const   *)"s", 1, tmp___2, 0);
    }
  }
# 3039
  if (! err) {
    {
# 3039
    err = actions_to_radio(exports,
                           (struct action_spec  const  *)(cur_line->data.action));
    }
  }
  {
# 3041
  filter_file = csp->rlist;
  }
# 3042
  if ((unsigned int )filter_file != (unsigned int )((void *)0)) {
    {
# 3042
    filter_group = (struct re_filterfile_spec *)filter_file->f;
    }
  } else {
    {
# 3042
    filter_group = (struct re_filterfile_spec *)((void *)0);
    }
  }
# 3044
  if (! err) {
    {
# 3044
    err = map_conditional(exports, (char const   *)"any-filters-defined",
                          (unsigned int )filter_group !=
                          (unsigned int )((void *)0));
    }
  }
# 3046
  if (err) {
    {
# 3048
    edit_free_file(file);
# 3049
    free_map(exports);
    }
# 3050
    return (err);
  }
# 3053
  if ((unsigned int )filter_group == (unsigned int )((void *)0)) {
    {
# 3055
    err = map(exports, (char const   *)"filter-params", 1, (char const   *)"", 1);
    }
  } else {
    {
# 3061
    index___0 = 0;
# 3064
    err = template_load(csp, & filter_template,
                        (char const   *)"edit-actions-for-url-filter", 0);
    }
# 3065
    if (err) {
      {
# 3067
      edit_free_file(file);
# 3068
      free_map(exports);
      }
# 3069
      if (err == 3) {
        {
# 3071
        tmp___3 = cgi_error_no_template(csp, rsp,
                                        (char const   *)"edit-actions-for-url-filter");
        }
# 3071
        return (tmp___3);
      }
# 3073
      return (err);
    }
    {
# 3076
    err = template_fill(& filter_template, (struct map  const  *)exports);
# 3078
    result = strdup((char const   *)"");
    }
# 3080
    while (1) {
# 3080
      if (err) {
# 3080
        break;
      } else {
# 3080
        if (! ((unsigned int )filter_group != (unsigned int )((void *)0))) {
# 3080
          break;
        }
      }
      {
# 3082
      current_mode = 'x';
# 3088
      filter_name = cur_line->data.action[0].multi_add[2][0].first;
      }
# 3089
      while (1) {
# 3089
        if ((unsigned int )filter_name != (unsigned int )((void *)0)) {
          {
# 3089
          tmp___4 = strcmp((char const   *)filter_group->name,
                           (char const   *)filter_name->str);
          }
# 3089
          if (! (0 != tmp___4)) {
# 3089
            break;
          }
        } else {
# 3089
          break;
        }
        {
# 3092
        filter_name = filter_name->next;
        }
      }
# 3095
      if ((unsigned int )filter_name != (unsigned int )((void *)0)) {
        {
# 3097
        current_mode = 'y';
        }
      } else {
        {
# 3101
        filter_name = cur_line->data.action[0].multi_remove[2][0].first;
        }
# 3102
        while (1) {
# 3102
          if ((unsigned int )filter_name != (unsigned int )((void *)0)) {
            {
# 3102
            tmp___5 = strcmp((char const   *)filter_group->name,
                             (char const   *)filter_name->str);
            }
# 3102
            if (! (0 != tmp___5)) {
# 3102
              break;
            }
          } else {
# 3102
            break;
          }
          {
# 3105
          filter_name = filter_name->next;
          }
        }
# 3107
        if ((unsigned int )filter_name != (unsigned int )((void *)0)) {
          {
# 3109
          current_mode = 'n';
          }
        }
      }
      {
# 3114
      tmp___6 = index___0;
# 3114
      index___0 ++;
# 3114
      snprintf((char */* __restrict  */)(number), sizeof(number),
               (char const   */* __restrict  */)((char const   *)"%x"), tmp___6);
# 3115
      number[sizeof(number) - 1U] = '\0';
# 3117
      line_exports = new_map();
      }
# 3118
      if ((unsigned int )line_exports == (unsigned int )((void *)0)) {
        {
# 3120
        err = 1;
        }
# 3121
        if (result) {
          {
# 3121
          free((void *)result);
# 3121
          result = (char *)((void *)0);
          }
        }
      } else {
# 3125
        if (! err) {
          {
# 3125
          err = map(line_exports, (char const   *)"index", 1,
                    (char const   *)(number), 1);
          }
        }
# 3126
        if (! err) {
          {
# 3126
          err = map(line_exports, (char const   *)"name", 1,
                    (char const   *)filter_group->name, 1);
          }
        }
# 3127
        if (! err) {
          {
# 3127
          err = map(line_exports, (char const   *)"description", 1,
                    (char const   *)filter_group->description, 1);
          }
        }
# 3128
        if (! err) {
          {
# 3128
          err = map_radio(line_exports, (char const   *)"this-filter",
                          (char const   *)"ynx", (int )current_mode);
          }
        }
        {
# 3130
        this_line = (char *)((void *)0);
        }
# 3131
        if (! err) {
          {
# 3133
          this_line = strdup((char const   *)filter_template);
          }
# 3134
          if ((unsigned int )this_line == (unsigned int )((void *)0)) {
            {
# 3134
            err = 1;
            }
          }
        }
# 3136
        if (! err) {
          {
# 3136
          err = template_fill(& this_line, (struct map  const  *)line_exports);
          }
        }
        {
# 3137
        string_join(& result, this_line);
# 3139
        free_map(line_exports);
        }
      }
      {
# 3080
      filter_group = filter_group->next;
      }
    }
# 3143
    if (filter_template) {
      {
# 3143
      free((void *)filter_template);
# 3143
      filter_template = (char *)((void *)0);
      }
    }
# 3145
    if (err) {
# 3151
      if (result) {
        {
# 3151
        free((void *)result);
# 3151
        result = (char *)((void *)0);
        }
      }
    } else {
      {
# 3147
      err = map(exports, (char const   *)"filter-params", 1,
                (char const   *)result, 0);
      }
    }
  }
# 3155
  if (! err) {
# 3155
    if (cur_line->data.action[0].multi_remove_all[2]) {
      {
# 3155
      tmp___7 = (int )'n';
      }
    } else {
      {
# 3155
      tmp___7 = (int )'x';
      }
    }
    {
# 3155
    err = map_radio(exports, (char const   *)"filter-all", (char const   *)"nx",
                    tmp___7);
    }
  }
  {
# 3158
  edit_free_file(file);
  }
# 3160
  if (err) {
    {
# 3162
    free_map(exports);
    }
# 3163
    return (err);
  }
  {
# 3166
  tmp___8 = template_fill_for_cgi(csp, (char const   *)"edit-actions-for-url",
                                  exports, rsp);
  }
# 3166
  return (tmp___8);
}
}
# 3189
jb_err cgi_edit_actions_submit(struct client_state *csp ,
                               struct http_response *rsp ,
                               struct map  const  *parameters ) 
{ unsigned int sectionid ;
  char *actiontext ;
  char *newtext ;
  size_t len ;
  struct editable_file *file ;
  struct file_line *cur_line ;
  unsigned int line_number ;
  char target[1024] ;
  jb_err err ;
  int index___0 ;
  char const   *action_set_name ;
  char ch ;
  struct file_list *fl ;
  struct url_actions *b ;
  jb_err tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  char key_value[30] ;
  char key_name[30] ;
  char const   *name ;
  char value ;
  time_t tmp___3 ;
  jb_err tmp___4 ;

  {
# 3208
  if (0U == ((csp->config)->feature_flags & 1U)) {
    {
# 3210
    tmp = cgi_error_disabled(csp, rsp);
    }
# 3210
    return (tmp);
  }
  {
# 3213
  err = get_number_param(csp, parameters, "s", & sectionid);
  }
# 3214
  if (err) {
# 3216
    return (err);
  }
  {
# 3219
  err = edit_read_actions_file(csp, rsp, parameters, 1, & file);
  }
# 3220
  if (err) {
# 3223
    if (err == 3) {
      {
# 3223
      tmp___0 = 0;
      }
    } else {
      {
# 3223
      tmp___0 = err;
      }
    }
# 3223
    return (tmp___0);
  }
  {
# 3226
  cur_line = file->lines;
# 3228
  line_number = 1U;
  }
# 3228
  while (1) {
# 3228
    if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 3228
      if (! (line_number < sectionid)) {
# 3228
        break;
      }
    } else {
# 3228
      break;
    }
    {
# 3230
    cur_line = cur_line->next;
# 3228
    line_number ++;
    }
  }
# 3233
  if ((unsigned int )cur_line == (unsigned int )((void *)0)) {
    {
# 3239
    edit_free_file(file);
    }
# 3240
    return (2);
  } else {
# 3233
    if (line_number != sectionid) {
      {
# 3239
      edit_free_file(file);
      }
# 3240
      return (2);
    } else {
# 3233
      if (sectionid < 1U) {
        {
# 3239
        edit_free_file(file);
        }
# 3240
        return (2);
      } else {
# 3233
        if (cur_line->type != 5) {
          {
# 3239
          edit_free_file(file);
          }
# 3240
          return (2);
        }
      }
    }
  }
  {
# 3243
  get_string_param(parameters, (char const   *)"p", & action_set_name);
  }
# 3244
  if ((unsigned int )action_set_name != (unsigned int )((void *)0)) {
    {
# 3246
    index___0 = 0;
    }
# 3246
    while (index___0 < 10) {
      {
# 3248
      fl = csp->actions_list[index___0];
      }
# 3248
      if ((unsigned int )fl != (unsigned int )((void *)0)) {
        {
# 3248
        b = (struct url_actions *)fl->f;
        }
# 3248
        if ((unsigned int )b != (unsigned int )((void *)0)) {
          {
# 3250
          b = b->next;
          }
# 3250
          while ((unsigned int )((void *)0) != (unsigned int )b) {
            {
# 3252
            tmp___1 = strncmp((char const   *)b->url[0].spec,
                              (char const   *)"standard.", 9U);
            }
# 3252
            if (! tmp___1) {
              {
# 3252
              tmp___2 = strcmp((char const   *)(b->url[0].spec + 9),
                               action_set_name);
              }
# 3252
              if (! tmp___2) {
                {
# 3254
                copy_action(cur_line->data.action,
                            (struct action_spec  const  *)(b->action));
                }
                goto found;
              }
            }
            {
# 3250
            b = b->next;
            }
          }
        }
      }
      {
# 3246
      index___0 ++;
      }
    }
    {
# 3260
    edit_free_file(file);
    }
# 3261
    return (2);
    found: 
    {

    }
  } else {
    {
# 3267
    err = actions_from_radio(parameters, cur_line->data.action);
    }
  }
# 3270
  if (err) {
    {
# 3273
    edit_free_file(file);
    }
# 3274
    return (err);
  }
  {
# 3277
  ch = get_char_param(parameters, (char const   *)"filter_all");
  }
# 3278
  if ((int )ch == 78) {
    {
# 3280
    list_remove_all(cur_line->data.action[0].multi_add[2]);
# 3281
    list_remove_all(cur_line->data.action[0].multi_remove[2]);
# 3282
    cur_line->data.action[0].multi_remove_all[2] = 1;
    }
  } else {
# 3284
    if ((int )ch == 88) {
      {
# 3286
      cur_line->data.action[0].multi_remove_all[2] = 0;
      }
    }
  }
  {
# 3289
  index___0 = 0;
  }
# 3289
  while (! err) {
    {
# 3297
    snprintf((char */* __restrict  */)(key_value), sizeof(key_value),
             (char const   */* __restrict  */)((char const   *)"filter_r%x"),
             index___0);
# 3298
    key_value[sizeof(key_value) - 1U] = '\0';
# 3299
    snprintf((char */* __restrict  */)(key_name), sizeof(key_name),
             (char const   */* __restrict  */)((char const   *)"filter_n%x"),
             index___0);
# 3300
    key_name[sizeof(key_name) - 1U] = '\0';
# 3302
    err = get_string_param(parameters, (char const   *)(key_name), & name);
    }
# 3303
    if (err) {
# 3303
      break;
    }
# 3305
    if ((unsigned int )name == (unsigned int )((void *)0)) {
# 3308
      break;
    }
    {
# 3311
    value = get_char_param(parameters, (char const   *)(key_value));
    }
# 3312
    if ((int )value == 89) {
      {
# 3314
      list_remove_item(cur_line->data.action[0].multi_add[2], name);
      }
# 3315
      if (! err) {
        {
# 3315
        err = enlist(cur_line->data.action[0].multi_add[2], name);
        }
      }
      {
# 3316
      list_remove_item(cur_line->data.action[0].multi_remove[2], name);
      }
    } else {
# 3318
      if ((int )value == 78) {
        {
# 3320
        list_remove_item(cur_line->data.action[0].multi_add[2], name);
        }
# 3321
        if (! cur_line->data.action[0].multi_remove_all[2]) {
          {
# 3323
          list_remove_item(cur_line->data.action[0].multi_remove[2], name);
          }
# 3324
          if (! err) {
            {
# 3324
            err = enlist(cur_line->data.action[0].multi_remove[2], name);
            }
          }
        }
      } else {
# 3327
        if ((int )value == 88) {
          {
# 3329
          list_remove_item(cur_line->data.action[0].multi_add[2], name);
# 3330
          list_remove_item(cur_line->data.action[0].multi_remove[2], name);
          }
        }
      }
    }
    {
# 3289
    index___0 ++;
    }
  }
# 3334
  if (err) {
    {
# 3337
    edit_free_file(file);
    }
# 3338
    return (err);
  }
  {
# 3341
  actiontext = actions_to_text(cur_line->data.action);
  }
# 3341
  if ((unsigned int )((void *)0) == (unsigned int )actiontext) {
    {
# 3344
    edit_free_file(file);
    }
# 3345
    return (1);
  }
  {
# 3348
  len = strlen((char const   *)actiontext);
  }
# 3349
  if (len == 0U) {
    {
# 3355
    len = 1U;
    }
  }
  {
# 3358
  newtext = (char *)malloc(len + 2U);
  }
# 3358
  if ((unsigned int )((void *)0) == (unsigned int )newtext) {
    {
# 3361
    free((void *)actiontext);
# 3362
    edit_free_file(file);
    }
# 3363
    return (1);
  }
  {
# 3365
  strcpy((char */* __restrict  */)newtext,
         (char const   */* __restrict  */)((char const   *)actiontext));
# 3366
  free((void *)actiontext);
# 3367
  (*(newtext + 0)) = '{';
# 3368
  (*(newtext + len)) = '}';
# 3369
  (*(newtext + (len + 1U))) = '\0';
  }
# 3371
  if (cur_line->raw) {
    {
# 3371
    free((void *)cur_line->raw);
# 3371
    cur_line->raw = (char *)((void *)0);
    }
  }
# 3372
  if (cur_line->unprocessed) {
    {
# 3372
    free((void *)cur_line->unprocessed);
# 3372
    cur_line->unprocessed = (char *)((void *)0);
    }
  }
  {
# 3373
  cur_line->unprocessed = newtext;
# 3375
  err = edit_write_file(file);
  }
# 3376
  if (err) {
# 3379
    if (err == 3) {
      {
# 3382
      err = cgi_error_file_read_only(csp, rsp, file->identifier);
      }
    }
    {
# 3384
    edit_free_file(file);
    }
# 3385
    return (err);
  }
  {
# 3388
  tmp___3 = time((time_t *)((void *)0));
# 3388
  snprintf((char */* __restrict  */)(target), 1024U,
           (char const   */* __restrict  */)((char const   *)"http://config.privoxy.org/edit-actions-list?foo=%lu&f=%s#l%d"),
           tmp___3, file->identifier, sectionid);
# 3391
  edit_free_file(file);
# 3393
  tmp___4 = cgi_redirect(rsp, (char const   *)(target));
  }
# 3393
  return (tmp___4);
}
}
# 3422
jb_err cgi_edit_actions_url(struct client_state *csp ,
                            struct http_response *rsp ,
                            struct map  const  *parameters ) 
{ unsigned int patternid ;
  char *new_pattern ;
  struct editable_file *file ;
  struct file_line *cur_line ;
  unsigned int line_number ;
  unsigned int section_start_line_number ;
  char target[1024] ;
  jb_err err ;
  jb_err tmp ;
  int tmp___0 ;
  time_t tmp___1 ;
  jb_err tmp___2 ;

  {
  {
# 3431
  section_start_line_number = 0U;
  }
# 3435
  if (! csp) {
    {
# 3435
    __assert_fail((char const   *)"csp", (char const   *)"cgiedit.c", 3435U,
                  (char const   *)"cgi_edit_actions_url");
    }
  }
# 3436
  if (! rsp) {
    {
# 3436
    __assert_fail((char const   *)"rsp", (char const   *)"cgiedit.c", 3436U,
                  (char const   *)"cgi_edit_actions_url");
    }
  }
# 3437
  if (! parameters) {
    {
# 3437
    __assert_fail((char const   *)"parameters", (char const   *)"cgiedit.c",
                  3437U, (char const   *)"cgi_edit_actions_url");
    }
  }
# 3439
  if (0U == ((csp->config)->feature_flags & 1U)) {
    {
# 3441
    tmp = cgi_error_disabled(csp, rsp);
    }
# 3441
    return (tmp);
  }
  {
# 3444
  err = get_number_param(csp, parameters, "p", & patternid);
  }
# 3445
  if (err) {
# 3447
    return (err);
  }
# 3449
  if (patternid < 1U) {
# 3451
    return (2);
  }
  {
# 3454
  err = get_url_spec_param(csp, parameters, (char const   *)"u", & new_pattern);
  }
# 3455
  if (err) {
# 3457
    return (err);
  }
  {
# 3460
  err = edit_read_actions_file(csp, rsp, parameters, 1, & file);
  }
# 3461
  if (err) {
    {
# 3464
    free((void *)new_pattern);
    }
# 3465
    if (err == 3) {
      {
# 3465
      tmp___0 = 0;
      }
    } else {
      {
# 3465
      tmp___0 = err;
      }
    }
# 3465
    return (tmp___0);
  }
  {
# 3468
  line_number = 1U;
# 3469
  cur_line = file->lines;
  }
# 3471
  while (1) {
# 3471
    if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 3471
      if (! (line_number < patternid)) {
# 3471
        break;
      }
    } else {
# 3471
      break;
    }
# 3473
    if (cur_line->type == 5) {
      {
# 3475
      section_start_line_number = line_number;
      }
    }
    {
# 3477
    cur_line = cur_line->next;
# 3478
    line_number ++;
    }
  }
# 3481
  if ((unsigned int )cur_line == (unsigned int )((void *)0)) {
    {
# 3485
    free((void *)new_pattern);
# 3486
    edit_free_file(file);
    }
# 3487
    return (2);
  } else {
# 3481
    if (cur_line->type != 6) {
      {
# 3485
      free((void *)new_pattern);
# 3486
      edit_free_file(file);
      }
# 3487
      return (2);
    }
  }
# 3492
  if (cur_line->raw) {
    {
# 3492
    free((void *)cur_line->raw);
# 3492
    cur_line->raw = (char *)((void *)0);
    }
  }
# 3493
  if (cur_line->unprocessed) {
    {
# 3493
    free((void *)cur_line->unprocessed);
# 3493
    cur_line->unprocessed = (char *)((void *)0);
    }
  }
  {
# 3494
  cur_line->unprocessed = new_pattern;
# 3496
  err = edit_write_file(file);
  }
# 3497
  if (err) {
# 3500
    if (err == 3) {
      {
# 3503
      err = cgi_error_file_read_only(csp, rsp, file->identifier);
      }
    }
    {
# 3505
    edit_free_file(file);
    }
# 3506
    return (err);
  }
  {
# 3509
  tmp___1 = time((time_t *)((void *)0));
# 3509
  snprintf((char */* __restrict  */)(target), 1024U,
           (char const   */* __restrict  */)((char const   *)"http://config.privoxy.org/edit-actions-list?foo=%lu&f=%s#l%d"),
           tmp___1, file->identifier, section_start_line_number);
# 3512
  edit_free_file(file);
# 3514
  tmp___2 = cgi_redirect(rsp, (char const   *)(target));
  }
# 3514
  return (tmp___2);
}
}
# 3542
jb_err cgi_edit_actions_add_url(struct client_state *csp ,
                                struct http_response *rsp ,
                                struct map  const  *parameters ) 
{ unsigned int sectionid ;
  char *new_pattern ;
  struct file_line *new_line ;
  struct editable_file *file ;
  struct file_line *cur_line ;
  unsigned int line_number ;
  char target[1024] ;
  jb_err err ;
  jb_err tmp ;
  int tmp___0 ;
  time_t tmp___2 ;
  jb_err tmp___3 ;

  {
# 3555
  if (0U == ((csp->config)->feature_flags & 1U)) {
    {
# 3557
    tmp = cgi_error_disabled(csp, rsp);
    }
# 3557
    return (tmp);
  }
  {
# 3560
  err = get_number_param(csp, parameters, "s", & sectionid);
  }
# 3561
  if (err) {
# 3563
    return (err);
  }
# 3565
  if (sectionid < 1U) {
# 3567
    return (2);
  }
  {
# 3570
  err = get_url_spec_param(csp, parameters, (char const   *)"u", & new_pattern);
  }
# 3571
  if (err) {
# 3573
    return (err);
  }
  {
# 3576
  err = edit_read_actions_file(csp, rsp, parameters, 1, & file);
  }
# 3577
  if (err) {
    {
# 3580
    free((void *)new_pattern);
    }
# 3581
    if (err == 3) {
      {
# 3581
      tmp___0 = 0;
      }
    } else {
      {
# 3581
      tmp___0 = err;
      }
    }
# 3581
    return (tmp___0);
  }
  {
# 3584
  line_number = 1U;
# 3585
  cur_line = file->lines;
  }
# 3587
  while (1) {
# 3587
    if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 3587
      if (! (line_number < sectionid)) {
# 3587
        break;
      }
    } else {
# 3587
      break;
    }
    {
# 3589
    cur_line = cur_line->next;
# 3590
    line_number ++;
    }
  }
# 3593
  if ((unsigned int )cur_line == (unsigned int )((void *)0)) {
    {
# 3597
    free((void *)new_pattern);
# 3598
    edit_free_file(file);
    }
# 3599
    return (2);
  } else {
# 3593
    if (cur_line->type != 5) {
      {
# 3597
      free((void *)new_pattern);
# 3598
      edit_free_file(file);
      }
# 3599
      return (2);
    }
  }
  {
# 3605
  new_line = (struct file_line *)zalloc(sizeof((*new_line)));
  }
# 3606
  if ((unsigned int )new_line == (unsigned int )((void *)0)) {
    {
# 3608
    free((void *)new_pattern);
# 3609
    edit_free_file(file);
    }
# 3610
    return (1);
  }
  {
# 3614
  new_line->raw = (char *)((void *)0);
# 3615
  new_line->prefix = (char *)((void *)0);
# 3616
  new_line->unprocessed = new_pattern;
# 3617
  new_line->type = 6;
# 3620
  new_line->next = cur_line->next;
# 3621
  cur_line->next = new_line;
# 3625
  err = edit_write_file(file);
  }
# 3626
  if (err) {
# 3629
    if (err == 3) {
      {
# 3632
      err = cgi_error_file_read_only(csp, rsp, file->identifier);
      }
    }
    {
# 3634
    edit_free_file(file);
    }
# 3635
    return (err);
  }
  {
# 3638
  tmp___2 = time((time_t *)((void *)0));
# 3638
  snprintf((char */* __restrict  */)(target), 1024U,
           (char const   */* __restrict  */)((char const   *)"http://config.privoxy.org/edit-actions-list?foo=%lu&f=%s#l%d"),
           tmp___2, file->identifier, sectionid);
# 3641
  edit_free_file(file);
# 3643
  tmp___3 = cgi_redirect(rsp, (char const   *)(target));
  }
# 3643
  return (tmp___3);
}
}
# 3670
jb_err cgi_edit_actions_remove_url(struct client_state *csp ,
                                   struct http_response *rsp ,
                                   struct map  const  *parameters ) 
{ unsigned int patternid ;
  struct editable_file *file ;
  struct file_line *cur_line ;
  struct file_line *prev_line ;
  unsigned int line_number ;
  unsigned int section_start_line_number ;
  char target[1024] ;
  jb_err err ;
  jb_err tmp ;
  int tmp___0 ;
  time_t tmp___1 ;
  jb_err tmp___2 ;

  {
  {
# 3679
  section_start_line_number = 0U;
  }
# 3683
  if (0U == ((csp->config)->feature_flags & 1U)) {
    {
# 3685
    tmp = cgi_error_disabled(csp, rsp);
    }
# 3685
    return (tmp);
  }
  {
# 3688
  err = get_number_param(csp, parameters, "p", & patternid);
  }
# 3689
  if (err) {
# 3691
    return (err);
  }
  {
# 3694
  err = edit_read_actions_file(csp, rsp, parameters, 1, & file);
  }
# 3695
  if (err) {
# 3698
    if (err == 3) {
      {
# 3698
      tmp___0 = 0;
      }
    } else {
      {
# 3698
      tmp___0 = err;
      }
    }
# 3698
    return (tmp___0);
  }
  {
# 3701
  line_number = 1U;
# 3702
  prev_line = (struct file_line *)((void *)0);
# 3703
  cur_line = file->lines;
  }
# 3705
  while (1) {
# 3705
    if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 3705
      if (! (line_number < patternid)) {
# 3705
        break;
      }
    } else {
# 3705
      break;
    }
# 3707
    if (cur_line->type == 5) {
      {
# 3709
      section_start_line_number = line_number;
      }
    }
    {
# 3711
    prev_line = cur_line;
# 3712
    cur_line = cur_line->next;
# 3713
    line_number ++;
    }
  }
# 3716
  if ((unsigned int )cur_line == (unsigned int )((void *)0)) {
    {
# 3721
    edit_free_file(file);
    }
# 3722
    return (2);
  } else {
# 3716
    if ((unsigned int )prev_line == (unsigned int )((void *)0)) {
      {
# 3721
      edit_free_file(file);
      }
# 3722
      return (2);
    } else {
# 3716
      if (cur_line->type != 6) {
        {
# 3721
        edit_free_file(file);
        }
# 3722
        return (2);
      }
    }
  }
  {
# 3730
  prev_line->next = cur_line->next;
# 3731
  cur_line->next = (struct file_line *)((void *)0);
# 3734
  edit_free_file_lines(cur_line);
# 3736
  err = edit_write_file(file);
  }
# 3737
  if (err) {
# 3740
    if (err == 3) {
      {
# 3743
      err = cgi_error_file_read_only(csp, rsp, file->identifier);
      }
    }
    {
# 3745
    edit_free_file(file);
    }
# 3746
    return (err);
  }
  {
# 3749
  tmp___1 = time((time_t *)((void *)0));
# 3749
  snprintf((char */* __restrict  */)(target), 1024U,
           (char const   */* __restrict  */)((char const   *)"http://config.privoxy.org/edit-actions-list?foo=%lu&f=%s#l%d"),
           tmp___1, file->identifier, section_start_line_number);
# 3752
  edit_free_file(file);
# 3754
  tmp___2 = cgi_redirect(rsp, (char const   *)(target));
  }
# 3754
  return (tmp___2);
}
}
# 3782
jb_err cgi_edit_actions_section_remove(struct client_state *csp ,
                                       struct http_response *rsp ,
                                       struct map  const  *parameters ) 
{ unsigned int sectionid ;
  struct editable_file *file ;
  struct file_line *cur_line ;
  struct file_line *prev_line ;
  unsigned int line_number ;
  char target[1024] ;
  jb_err err ;
  jb_err tmp ;
  int tmp___0 ;
  time_t tmp___1 ;
  jb_err tmp___2 ;

  {
# 3794
  if (0U == ((csp->config)->feature_flags & 1U)) {
    {
# 3796
    tmp = cgi_error_disabled(csp, rsp);
    }
# 3796
    return (tmp);
  }
  {
# 3799
  err = get_number_param(csp, parameters, "s", & sectionid);
  }
# 3800
  if (err) {
# 3802
    return (err);
  }
  {
# 3805
  err = edit_read_actions_file(csp, rsp, parameters, 1, & file);
  }
# 3806
  if (err) {
# 3809
    if (err == 3) {
      {
# 3809
      tmp___0 = 0;
      }
    } else {
      {
# 3809
      tmp___0 = err;
      }
    }
# 3809
    return (tmp___0);
  }
  {
# 3812
  line_number = 1U;
# 3813
  cur_line = file->lines;
# 3815
  prev_line = (struct file_line *)((void *)0);
  }
# 3816
  while (1) {
# 3816
    if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 3816
      if (! (line_number < sectionid)) {
# 3816
        break;
      }
    } else {
# 3816
      break;
    }
    {
# 3818
    prev_line = cur_line;
# 3819
    cur_line = cur_line->next;
# 3820
    line_number ++;
    }
  }
# 3823
  if ((unsigned int )cur_line == (unsigned int )((void *)0)) {
    {
# 3827
    edit_free_file(file);
    }
# 3828
    return (2);
  } else {
# 3823
    if (cur_line->type != 5) {
      {
# 3827
      edit_free_file(file);
      }
# 3828
      return (2);
    }
  }
# 3831
  if ((unsigned int )cur_line->next != (unsigned int )((void *)0)) {
# 3831
    if ((cur_line->next)->type == 6) {
      {
# 3835
      edit_free_file(file);
      }
# 3836
      return (2);
    }
  }
# 3844
  if ((unsigned int )prev_line == (unsigned int )((void *)0)) {
    {
# 3847
    file->lines = cur_line->next;
    }
  } else {
    {
# 3851
    prev_line->next = cur_line->next;
    }
  }
  {
# 3853
  cur_line->next = (struct file_line *)((void *)0);
# 3856
  edit_free_file_lines(cur_line);
# 3858
  err = edit_write_file(file);
  }
# 3859
  if (err) {
# 3862
    if (err == 3) {
      {
# 3865
      err = cgi_error_file_read_only(csp, rsp, file->identifier);
      }
    }
    {
# 3867
    edit_free_file(file);
    }
# 3868
    return (err);
  }
  {
# 3871
  tmp___1 = time((time_t *)((void *)0));
# 3871
  snprintf((char */* __restrict  */)(target), 1024U,
           (char const   */* __restrict  */)((char const   *)"http://config.privoxy.org/edit-actions-list?foo=%lu&f=%s"),
           tmp___1, file->identifier);
# 3874
  edit_free_file(file);
# 3876
  tmp___2 = cgi_redirect(rsp, (char const   *)(target));
  }
# 3876
  return (tmp___2);
}
}
# 3904
jb_err cgi_edit_actions_section_add(struct client_state *csp ,
                                    struct http_response *rsp ,
                                    struct map  const  *parameters ) 
{ unsigned int sectionid ;
  struct file_line *new_line ;
  char *new_text ;
  struct editable_file *file ;
  struct file_line *cur_line ;
  unsigned int line_number ;
  char target[1024] ;
  jb_err err ;
  jb_err tmp ;
  int tmp___0 ;
  time_t tmp___2 ;
  jb_err tmp___3 ;

  {
# 3917
  if (0U == ((csp->config)->feature_flags & 1U)) {
    {
# 3919
    tmp = cgi_error_disabled(csp, rsp);
    }
# 3919
    return (tmp);
  }
  {
# 3922
  err = get_number_param(csp, parameters, "s", & sectionid);
  }
# 3923
  if (err) {
# 3925
    return (err);
  }
  {
# 3928
  err = edit_read_actions_file(csp, rsp, parameters, 1, & file);
  }
# 3929
  if (err) {
# 3932
    if (err == 3) {
      {
# 3932
      tmp___0 = 0;
      }
    } else {
      {
# 3932
      tmp___0 = err;
      }
    }
# 3932
    return (tmp___0);
  }
  {
# 3935
  line_number = 1U;
# 3936
  cur_line = file->lines;
  }
# 3938
  if (sectionid <= 1U) {
# 3941
    if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 3941
      if (cur_line->type != 5) {
# 3946
        while (1) {
# 3946
          if ((unsigned int )cur_line->next != (unsigned int )((void *)0)) {
# 3946
            if (! ((cur_line->next)->type != 5)) {
# 3946
              break;
            }
          } else {
# 3946
            break;
          }
          {
# 3949
          cur_line = cur_line->next;
# 3950
          line_number ++;
          }
        }
      } else {
        {
# 3956
        cur_line = (struct file_line *)((void *)0);
        }
      }
    } else {
      {
# 3956
      cur_line = (struct file_line *)((void *)0);
      }
    }
  } else {
# 3962
    while (1) {
# 3962
      if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 3962
        if (! (line_number < sectionid)) {
# 3962
          break;
        }
      } else {
# 3962
        break;
      }
      {
# 3964
      cur_line = cur_line->next;
# 3965
      line_number ++;
      }
    }
# 3968
    if ((unsigned int )cur_line == (unsigned int )((void *)0)) {
      {
# 3972
      edit_free_file(file);
      }
# 3973
      return (2);
    } else {
# 3968
      if (cur_line->type != 5) {
        {
# 3972
        edit_free_file(file);
        }
# 3973
        return (2);
      }
    }
# 3977
    while (1) {
# 3977
      if ((unsigned int )cur_line->next != (unsigned int )((void *)0)) {
# 3977
        if (! ((cur_line->next)->type != 5)) {
# 3977
          break;
        }
      } else {
# 3977
        break;
      }
      {
# 3980
      cur_line = cur_line->next;
# 3981
      line_number ++;
      }
    }
  }
  {
# 3990
  new_text = strdup((char const   *)"{}");
  }
# 3991
  if ((unsigned int )((void *)0) == (unsigned int )new_text) {
    {
# 3993
    edit_free_file(file);
    }
# 3994
    return (1);
  }
  {
# 3998
  new_line = (struct file_line *)zalloc(sizeof((*new_line)));
  }
# 3999
  if ((unsigned int )new_line == (unsigned int )((void *)0)) {
    {
# 4001
    free((void *)new_text);
# 4002
    edit_free_file(file);
    }
# 4003
    return (1);
  }
  {
# 4007
  new_line->raw = (char *)((void *)0);
# 4008
  new_line->prefix = (char *)((void *)0);
# 4009
  new_line->unprocessed = new_text;
# 4010
  new_line->type = 5;
  }
# 4012
  if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
    {
# 4015
    new_line->next = cur_line->next;
# 4016
    cur_line->next = new_line;
    }
  } else {
    {
# 4021
    new_line->next = file->lines;
# 4022
    file->lines = new_line;
    }
  }
  {
# 4027
  err = edit_write_file(file);
  }
# 4028
  if (err) {
# 4031
    if (err == 3) {
      {
# 4034
      err = cgi_error_file_read_only(csp, rsp, file->identifier);
      }
    }
    {
# 4036
    edit_free_file(file);
    }
# 4037
    return (err);
  }
  {
# 4040
  tmp___2 = time((time_t *)((void *)0));
# 4040
  snprintf((char */* __restrict  */)(target), 1024U,
           (char const   */* __restrict  */)((char const   *)"http://config.privoxy.org/edit-actions-list?foo=%lu&f=%s"),
           tmp___2, file->identifier);
# 4043
  edit_free_file(file);
# 4045
  tmp___3 = cgi_redirect(rsp, (char const   *)(target));
  }
# 4045
  return (tmp___3);
}
}
# 4076
jb_err cgi_edit_actions_section_swap(struct client_state *csp ,
                                     struct http_response *rsp ,
                                     struct map  const  *parameters ) 
{ unsigned int section1 ;
  unsigned int section2 ;
  struct editable_file *file ;
  struct file_line *cur_line ;
  struct file_line *prev_line ;
  struct file_line *line_before_section1 ;
  struct file_line *line_start_section1 ;
  struct file_line *line_end_section1 ;
  struct file_line *line_after_section1 ;
  struct file_line *line_before_section2 ;
  struct file_line *line_start_section2 ;
  struct file_line *line_end_section2 ;
  struct file_line *line_after_section2 ;
  unsigned int line_number ;
  char target[1024] ;
  jb_err err ;
  jb_err tmp ;
  unsigned int temp ;
  int tmp___0 ;
  time_t tmp___1 ;
  jb_err tmp___2 ;

  {
# 4097
  if (0U == ((csp->config)->feature_flags & 1U)) {
    {
# 4099
    tmp = cgi_error_disabled(csp, rsp);
    }
# 4099
    return (tmp);
  }
  {
# 4102
  err = get_number_param(csp, parameters, "s1", & section1);
  }
# 4103
  if (! err) {
    {
# 4103
    err = get_number_param(csp, parameters, "s2", & section2);
    }
  }
# 4104
  if (err) {
# 4106
    return (err);
  }
# 4109
  if (section1 > section2) {
    {
# 4111
    temp = section2;
# 4112
    section2 = section1;
# 4113
    section1 = temp;
    }
  }
  {
# 4116
  err = edit_read_actions_file(csp, rsp, parameters, 1, & file);
  }
# 4117
  if (err) {
# 4120
    if (err == 3) {
      {
# 4120
      tmp___0 = 0;
      }
    } else {
      {
# 4120
      tmp___0 = err;
      }
    }
# 4120
    return (tmp___0);
  }
  {
# 4124
  line_number = 1U;
# 4125
  cur_line = file->lines;
# 4126
  prev_line = (struct file_line *)((void *)0);
  }
# 4129
  while (1) {
# 4129
    if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 4129
      if (! (line_number < section1)) {
# 4129
        break;
      }
    } else {
# 4129
      break;
    }
    {
# 4131
    prev_line = cur_line;
# 4132
    cur_line = cur_line->next;
# 4133
    line_number ++;
    }
  }
# 4136
  if ((unsigned int )cur_line == (unsigned int )((void *)0)) {
    {
# 4140
    edit_free_file(file);
    }
# 4141
    return (2);
  } else {
# 4136
    if (cur_line->type != 5) {
      {
# 4140
      edit_free_file(file);
      }
# 4141
      return (2);
    }
  }
# 4145
  if (section1 != section2) {
    {
# 4148
    line_before_section1 = prev_line;
# 4149
    line_start_section1 = cur_line;
    }
# 4150
    while (1) {
      {
# 4152
      prev_line = cur_line;
# 4153
      cur_line = cur_line->next;
# 4154
      line_number ++;
      }
# 4150
      if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 4150
        if (! (cur_line->type == 6)) {
# 4150
          break;
        }
      } else {
# 4150
        break;
      }
    }
    {
# 4157
    line_end_section1 = prev_line;
# 4158
    line_after_section1 = cur_line;
    }
# 4161
    while (1) {
# 4161
      if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 4161
        if (! (line_number < section2)) {
# 4161
          break;
        }
      } else {
# 4161
        break;
      }
      {
# 4163
      prev_line = cur_line;
# 4164
      cur_line = cur_line->next;
# 4165
      line_number ++;
      }
    }
# 4168
    if ((unsigned int )cur_line == (unsigned int )((void *)0)) {
      {
# 4172
      edit_free_file(file);
      }
# 4173
      return (2);
    } else {
# 4168
      if (cur_line->type != 5) {
        {
# 4172
        edit_free_file(file);
        }
# 4173
        return (2);
      }
    }
    {
# 4177
    line_before_section2 = prev_line;
# 4178
    line_start_section2 = cur_line;
    }
# 4179
    while (1) {
      {
# 4181
      prev_line = cur_line;
# 4182
      cur_line = cur_line->next;
# 4183
      line_number ++;
      }
# 4179
      if ((unsigned int )cur_line != (unsigned int )((void *)0)) {
# 4179
        if (! (cur_line->type == 6)) {
# 4179
          break;
        }
      } else {
# 4179
        break;
      }
    }
    {
# 4186
    line_end_section2 = prev_line;
# 4187
    line_after_section2 = cur_line;
    }
# 4192
    if ((unsigned int )line_before_section1 == (unsigned int )((void *)0)) {
      {
# 4194
      file->lines = line_start_section2;
      }
    } else {
      {
# 4198
      line_before_section1->next = line_start_section2;
      }
    }
# 4201
    if ((unsigned int )line_before_section2 == (unsigned int )line_end_section1) {
      {
# 4204
      line_end_section2->next = line_start_section1;
      }
    } else {
      {
# 4208
      line_end_section2->next = line_after_section1;
# 4209
      line_before_section2->next = line_start_section1;
      }
    }
    {
# 4213
    line_end_section1->next = line_after_section2;
# 4215
    err = edit_write_file(file);
    }
# 4216
    if (err) {
# 4219
      if (err == 3) {
        {
# 4222
        err = cgi_error_file_read_only(csp, rsp, file->identifier);
        }
      }
      {
# 4224
      edit_free_file(file);
      }
# 4225
      return (err);
    }
  }
  {
# 4229
  tmp___1 = time((time_t *)((void *)0));
# 4229
  snprintf((char */* __restrict  */)(target), 1024U,
           (char const   */* __restrict  */)((char const   *)"http://config.privoxy.org/edit-actions-list?foo=%lu&f=%s"),
           tmp___1, file->identifier);
# 4232
  edit_free_file(file);
# 4234
  tmp___2 = cgi_redirect(rsp, (char const   *)(target));
  }
# 4234
  return (tmp___2);
}
}
# 4259
jb_err cgi_toggle(struct client_state *csp , struct http_response *rsp ,
                  struct map  const  *parameters ) 
{ struct map *exports ;
  char mode ;
  char const   *template_name ;
  jb_err tmp ;
  char tmp___1 ;
  jb_err tmp___2 ;

  {
# 4267
  if (! csp) {
    {
# 4267
    __assert_fail((char const   *)"csp", (char const   *)"cgiedit.c", 4267U,
                  (char const   *)"cgi_toggle");
    }
  }
# 4268
  if (! rsp) {
    {
# 4268
    __assert_fail((char const   *)"rsp", (char const   *)"cgiedit.c", 4268U,
                  (char const   *)"cgi_toggle");
    }
  }
# 4269
  if (! parameters) {
    {
# 4269
    __assert_fail((char const   *)"parameters", (char const   *)"cgiedit.c",
                  4269U, (char const   *)"cgi_toggle");
    }
  }
# 4271
  if (0U == ((csp->config)->feature_flags & 2U)) {
    {
# 4273
    tmp = cgi_error_disabled(csp, rsp);
    }
# 4273
    return (tmp);
  }
  {
# 4276
  mode = get_char_param(parameters, (char const   *)"set");
  }
# 4278
  if ((int )mode == 69) {
    {
# 4281
    global_toggle_state = 1;
    }
  } else {
# 4283
    if ((int )mode == 68) {
      {
# 4286
      global_toggle_state = 0;
      }
    } else {
# 4288
      if ((int )mode == 84) {
        {
# 4291
        global_toggle_state = ! global_toggle_state != 0;
        }
      }
    }
  }
  {
# 4294
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)"toggle");
  }
# 4294
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
# 4296
    return (1);
  }
  {
# 4299
  tmp___1 = get_char_param(parameters, (char const   *)"mini");
  }
# 4299
  if (tmp___1) {
    {
# 4299
    template_name = (char const   *)"toggle-mini";
    }
  } else {
    {
# 4299
    template_name = (char const   *)"toggle";
    }
  }
  {
# 4303
  tmp___2 = template_fill_for_cgi(csp, template_name, exports, rsp);
  }
# 4303
  return (tmp___2);
}
}
# 4335
static void javascriptify(char *identifier ) 
{ char *p ;
  char *tmp ;

  {
  {
# 4337
  p = identifier;
  }
# 4338
  while (1) {
    {
# 4338
    p = strchr((char const   *)p, (int )'-');
    }
# 4338
    if (! ((unsigned int )((void *)0) != (unsigned int )p)) {
# 4338
      break;
    }
    {
# 4340
    tmp = p;
# 4340
    p ++;
# 4340
    (*tmp) = '_';
    }
  }
# 4342
  return;
}
}
# 4360
static jb_err actions_to_radio(struct map *exports ,
                               struct action_spec  const  *action ) 
{ unsigned int mask ;
  unsigned int add ;
  int mapped_param ;
  int checked ;
  char current_mode ;
  jb_err tmp ;
  jb_err tmp___0 ;
  jb_err tmp___1 ;
  jb_err tmp___2 ;
  jb_err tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  char const   *tmp___6 ;
  jb_err tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  char const   *tmp___10 ;
  jb_err tmp___11 ;
  jb_err tmp___12 ;
  jb_err tmp___13 ;
  jb_err tmp___14 ;
  jb_err tmp___15 ;
  jb_err tmp___16 ;
  jb_err tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  char const   *tmp___20 ;
  jb_err tmp___21 ;
  char const   *tmp___22 ;
  jb_err tmp___23 ;
  char const   *tmp___24 ;
  jb_err tmp___25 ;
  jb_err tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  char const   *tmp___29 ;
  jb_err tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  char const   *tmp___33 ;
  jb_err tmp___34 ;
  char const   *tmp___35 ;
  jb_err tmp___36 ;
  char const   *tmp___37 ;
  jb_err tmp___38 ;
  jb_err tmp___39 ;
  char const   *tmp___40 ;
  jb_err tmp___41 ;
  jb_err tmp___42 ;
  jb_err tmp___43 ;
  char const   *tmp___44 ;
  jb_err tmp___45 ;
  jb_err tmp___46 ;
  jb_err tmp___47 ;
  jb_err tmp___48 ;
  jb_err tmp___49 ;
  jb_err tmp___50 ;
  int tmp___51 ;
  int tmp___52 ;
  char const   *tmp___53 ;
  jb_err tmp___54 ;
  int tmp___55 ;
  int tmp___56 ;
  char const   *tmp___57 ;
  jb_err tmp___58 ;
  char const   *tmp___59 ;
  jb_err tmp___60 ;
  char const   *tmp___61 ;
  jb_err tmp___62 ;

  {
  {
# 4363
  mask = (unsigned int )action->mask;
# 4364
  add = (unsigned int )action->add;
  }
# 4369
  if (! exports) {
    {
# 4369
    __assert_fail((char const   *)"exports", (char const   *)"cgiedit.c", 4369U,
                  (char const   *)"actions_to_radio");
    }
  }
# 4370
  if (! action) {
    {
# 4370
    __assert_fail((char const   *)"action", (char const   *)"cgiedit.c", 4370U,
                  (char const   *)"actions_to_radio");
    }
  }
  {
# 4372
  mask = (unsigned int )action->mask;
# 4373
  add = (unsigned int )action->add;
# 4376
  mask |= add;
  }
# 112 "actionlist.h"
  if (action->multi_add[0][0].first) {
    {
# 112
    current_mode = 'y';
    }
  } else {
# 112
    if (action->multi_remove_all[0]) {
      {
# 112
      current_mode = 'n';
      }
    } else {
# 112
      if (action->multi_remove[0][0].first) {
        {
# 112
        current_mode = 'y';
        }
      } else {
        {
# 112
        current_mode = 'x';
        }
      }
    }
  }
  {
# 112
  tmp = map_radio(exports, (char const   *)"add-header", (char const   *)"ynx",
                  (int )current_mode);
  }
# 112
  if (tmp) {
# 112
    return (1);
  }
# 113
  if ((unsigned long )mask & 1UL) {
# 113
    if ((unsigned long )add & 1UL) {
      {
# 113
      current_mode = 'y';
      }
    } else {
      {
# 113
      current_mode = 'x';
      }
    }
  } else {
    {
# 113
    current_mode = 'n';
    }
  }
  {
# 113
  tmp___0 = map_radio(exports, (char const   *)"block", (char const   *)"ynx",
                      (int )current_mode);
  }
# 113
  if (tmp___0) {
# 113
    return (1);
  }
# 114
  if ((unsigned long )mask & 8192UL) {
# 114
    if ((unsigned long )add & 8192UL) {
      {
# 114
      current_mode = 'y';
      }
    } else {
      {
# 114
      current_mode = 'x';
      }
    }
  } else {
    {
# 114
    current_mode = 'n';
    }
  }
  {
# 114
  tmp___1 = map_radio(exports, (char const   *)"crunch-incoming-cookies",
                      (char const   *)"ynx", (int )current_mode);
  }
# 114
  if (tmp___1) {
# 114
    return (1);
  }
# 115
  if ((unsigned long )mask & 4096UL) {
# 115
    if ((unsigned long )add & 4096UL) {
      {
# 115
      current_mode = 'y';
      }
    } else {
      {
# 115
      current_mode = 'x';
      }
    }
  } else {
    {
# 115
    current_mode = 'n';
    }
  }
  {
# 115
  tmp___2 = map_radio(exports, (char const   *)"crunch-outgoing-cookies",
                      (char const   *)"ynx", (int )current_mode);
  }
# 115
  if (tmp___2) {
# 115
    return (1);
  }
# 116
  if ((unsigned long )mask & 2UL) {
# 116
    if ((unsigned long )add & 2UL) {
      {
# 116
      current_mode = 'y';
      }
    } else {
      {
# 116
      current_mode = 'x';
      }
    }
  } else {
    {
# 116
    current_mode = 'n';
    }
  }
  {
# 116
  tmp___3 = map_radio(exports, (char const   *)"deanimate-gifs",
                      (char const   *)"ynx", (int )current_mode);
  }
# 116
  if (tmp___3) {
# 116
    return (1);
  }
  {
# 116
  mapped_param = 0;
  }
# 117
  if ((unsigned long )add & 2UL) {
    {
# 117
    tmp___4 = strcmp((char const   *)action->string[0], (char const   *)"first");
    }
# 117
    if (tmp___4) {
      {
# 117
      tmp___5 = 0;
      }
    } else {
      {
# 117
      tmp___5 = 1;
      }
    }
    {
# 117
    checked = tmp___5;
    }
  } else {
    {
# 117
    checked = 0;
    }
  }
  {
# 117
  mapped_param |= checked;
  }
# 117
  if (checked) {
    {
# 117
    tmp___6 = (char const   *)"checked";
    }
  } else {
    {
# 117
    tmp___6 = (char const   *)"";
    }
  }
  {
# 117
  tmp___7 = map(exports, (char const   *)"deanimate-gifs-param-first", 1,
                tmp___6, 1);
  }
# 117
  if (tmp___7) {
# 117
    return (1);
  }
# 118
  if ((unsigned long )add & 2UL) {
    {
# 118
    tmp___8 = strcmp((char const   *)action->string[0], (char const   *)"last");
    }
# 118
    if (tmp___8) {
      {
# 118
      tmp___9 = 0;
      }
    } else {
      {
# 118
      tmp___9 = 1;
      }
    }
    {
# 118
    checked = tmp___9;
    }
  } else {
    {
# 118
    checked = 1;
    }
  }
  {
# 118
  mapped_param |= checked;
  }
# 118
  if (checked) {
    {
# 118
    tmp___10 = (char const   *)"checked";
    }
  } else {
    {
# 118
    tmp___10 = (char const   *)"";
    }
  }
  {
# 118
  tmp___11 = map(exports, (char const   *)"deanimate-gifs-param-last", 1,
                 tmp___10, 1);
  }
# 118
  if (tmp___11) {
# 118
    return (1);
  }
# 119
  if ((unsigned long )mask & 4UL) {
# 119
    if ((unsigned long )add & 4UL) {
      {
# 119
      current_mode = 'y';
      }
    } else {
      {
# 119
      current_mode = 'x';
      }
    }
  } else {
    {
# 119
    current_mode = 'n';
    }
  }
  {
# 119
  tmp___12 = map_radio(exports, (char const   *)"downgrade-http-version",
                       (char const   *)"ynx", (int )current_mode);
  }
# 119
  if (tmp___12) {
# 119
    return (1);
  }
# 120
  if ((unsigned long )mask & 8UL) {
# 120
    if ((unsigned long )add & 8UL) {
      {
# 120
      current_mode = 'y';
      }
    } else {
      {
# 120
      current_mode = 'x';
      }
    }
  } else {
    {
# 120
    current_mode = 'n';
    }
  }
  {
# 120
  tmp___13 = map_radio(exports, (char const   *)"fast-redirects",
                       (char const   *)"ynx", (int )current_mode);
  }
# 120
  if (tmp___13) {
# 120
    return (1);
  }
# 121
  if (action->multi_add[2][0].first) {
    {
# 121
    current_mode = 'y';
    }
  } else {
# 121
    if (action->multi_remove_all[2]) {
      {
# 121
      current_mode = 'n';
      }
    } else {
# 121
      if (action->multi_remove[2][0].first) {
        {
# 121
        current_mode = 'y';
        }
      } else {
        {
# 121
        current_mode = 'x';
        }
      }
    }
  }
  {
# 121
  tmp___14 = map_radio(exports, (char const   *)"filter", (char const   *)"ynx",
                       (int )current_mode);
  }
# 121
  if (tmp___14) {
# 121
    return (1);
  }
# 122
  if ((unsigned long )mask & 256UL) {
# 122
    if ((unsigned long )add & 256UL) {
      {
# 122
      current_mode = 'y';
      }
    } else {
      {
# 122
      current_mode = 'x';
      }
    }
  } else {
    {
# 122
    current_mode = 'n';
    }
  }
  {
# 122
  tmp___15 = map_radio(exports, (char const   *)"handle-as-image",
                       (char const   *)"ynx", (int )current_mode);
  }
# 122
  if (tmp___15) {
# 122
    return (1);
  }
# 123
  if ((unsigned long )mask & 16UL) {
# 123
    if ((unsigned long )add & 16UL) {
      {
# 123
      current_mode = 'y';
      }
    } else {
      {
# 123
      current_mode = 'x';
      }
    }
  } else {
    {
# 123
    current_mode = 'n';
    }
  }
  {
# 123
  tmp___16 = map_radio(exports, (char const   *)"hide-forwarded-for-headers",
                       (char const   *)"ynx", (int )current_mode);
  }
# 123
  if (tmp___16) {
# 123
    return (1);
  }
# 124
  if ((unsigned long )mask & 32UL) {
# 124
    if ((unsigned long )add & 32UL) {
      {
# 124
      current_mode = 'y';
      }
    } else {
      {
# 124
      current_mode = 'x';
      }
    }
  } else {
    {
# 124
    current_mode = 'n';
    }
  }
  {
# 124
  tmp___17 = map_radio(exports, (char const   *)"hide-from-header",
                       (char const   *)"ynx", (int )current_mode);
  }
# 124
  if (tmp___17) {
# 124
    return (1);
  }
  {
# 124
  mapped_param = 0;
  }
# 125
  if ((unsigned long )add & 32UL) {
    {
# 125
    tmp___18 = strcmp((char const   *)action->string[1], (char const   *)"block");
    }
# 125
    if (tmp___18) {
      {
# 125
      tmp___19 = 0;
      }
    } else {
      {
# 125
      tmp___19 = 1;
      }
    }
    {
# 125
    checked = tmp___19;
    }
  } else {
    {
# 125
    checked = 1;
    }
  }
  {
# 125
  mapped_param |= checked;
  }
# 125
  if (checked) {
    {
# 125
    tmp___20 = (char const   *)"checked";
    }
  } else {
    {
# 125
    tmp___20 = (char const   *)"";
    }
  }
  {
# 125
  tmp___21 = map(exports, (char const   *)"hide-from-header-param-block", 1,
                 tmp___20, 1);
  }
# 125
  if (tmp___21) {
# 125
    return (1);
  }
# 126
  if (mapped_param) {
    {
# 126
    tmp___22 = (char const   *)"";
    }
  } else {
    {
# 126
    tmp___22 = (char const   *)"checked";
    }
  }
  {
# 126
  tmp___23 = map(exports, (char const   *)"hide-from-header-param-custom", 1,
                 tmp___22, 1);
  }
# 126
  if (tmp___23) {
# 126
    return (1);
  }
# 126
  if ((unsigned long )add & 32UL) {
# 126
    if (mapped_param) {
      {
# 126
      tmp___24 = (char const   *)"spam_me_senseless@sittingduck.xyz";
      }
    } else {
      {
# 126
      tmp___24 = (char const   *)action->string[1];
      }
    }
  } else {
    {
# 126
    tmp___24 = (char const   *)"spam_me_senseless@sittingduck.xyz";
    }
  }
  {
# 126
  tmp___25 = map(exports, (char const   *)"hide-from-header-param", 1, tmp___24,
                 1);
  }
# 126
  if (tmp___25) {
# 126
    return (1);
  }
# 127
  if ((unsigned long )mask & 64UL) {
# 127
    if ((unsigned long )add & 64UL) {
      {
# 127
      current_mode = 'y';
      }
    } else {
      {
# 127
      current_mode = 'x';
      }
    }
  } else {
    {
# 127
    current_mode = 'n';
    }
  }
  {
# 127
  tmp___26 = map_radio(exports, (char const   *)"hide-referrer",
                       (char const   *)"ynx", (int )current_mode);
  }
# 127
  if (tmp___26) {
# 127
    return (1);
  }
  {
# 127
  mapped_param = 0;
  }
# 128
  if ((unsigned long )add & 64UL) {
    {
# 128
    tmp___27 = strcmp((char const   *)action->string[3], (char const   *)"forge");
    }
# 128
    if (tmp___27) {
      {
# 128
      tmp___28 = 0;
      }
    } else {
      {
# 128
      tmp___28 = 1;
      }
    }
    {
# 128
    checked = tmp___28;
    }
  } else {
    {
# 128
    checked = 1;
    }
  }
  {
# 128
  mapped_param |= checked;
  }
# 128
  if (checked) {
    {
# 128
    tmp___29 = (char const   *)"checked";
    }
  } else {
    {
# 128
    tmp___29 = (char const   *)"";
    }
  }
  {
# 128
  tmp___30 = map(exports, (char const   *)"hide-referrer-param-forge", 1,
                 tmp___29, 1);
  }
# 128
  if (tmp___30) {
# 128
    return (1);
  }
# 129
  if ((unsigned long )add & 64UL) {
    {
# 129
    tmp___31 = strcmp((char const   *)action->string[3], (char const   *)"block");
    }
# 129
    if (tmp___31) {
      {
# 129
      tmp___32 = 0;
      }
    } else {
      {
# 129
      tmp___32 = 1;
      }
    }
    {
# 129
    checked = tmp___32;
    }
  } else {
    {
# 129
    checked = 0;
    }
  }
  {
# 129
  mapped_param |= checked;
  }
# 129
  if (checked) {
    {
# 129
    tmp___33 = (char const   *)"checked";
    }
  } else {
    {
# 129
    tmp___33 = (char const   *)"";
    }
  }
  {
# 129
  tmp___34 = map(exports, (char const   *)"hide-referrer-param-block", 1,
                 tmp___33, 1);
  }
# 129
  if (tmp___34) {
# 129
    return (1);
  }
# 130
  if (mapped_param) {
    {
# 130
    tmp___35 = (char const   *)"";
    }
  } else {
    {
# 130
    tmp___35 = (char const   *)"checked";
    }
  }
  {
# 130
  tmp___36 = map(exports, (char const   *)"hide-referrer-param-custom", 1,
                 tmp___35, 1);
  }
# 130
  if (tmp___36) {
# 130
    return (1);
  }
# 130
  if ((unsigned long )add & 64UL) {
# 130
    if (mapped_param) {
      {
# 130
      tmp___37 = (char const   *)"http://www.google.com/";
      }
    } else {
      {
# 130
      tmp___37 = (char const   *)action->string[3];
      }
    }
  } else {
    {
# 130
    tmp___37 = (char const   *)"http://www.google.com/";
    }
  }
  {
# 130
  tmp___38 = map(exports, (char const   *)"hide-referrer-param", 1, tmp___37, 1);
  }
# 130
  if (tmp___38) {
# 130
    return (1);
  }
# 131
  if ((unsigned long )mask & 128UL) {
# 131
    if ((unsigned long )add & 128UL) {
      {
# 131
      current_mode = 'y';
      }
    } else {
      {
# 131
      current_mode = 'x';
      }
    }
  } else {
    {
# 131
    current_mode = 'n';
    }
  }
  {
# 131
  tmp___39 = map_radio(exports, (char const   *)"hide-user-agent",
                       (char const   *)"ynx", (int )current_mode);
  }
# 131
  if (tmp___39) {
# 131
    return (1);
  }
  {
# 131
  mapped_param = 0;
  }
# 132
  if ((unsigned long )add & 128UL) {
    {
# 132
    tmp___40 = (char const   *)action->string[4];
    }
  } else {
    {
# 132
    tmp___40 = (char const   *)"Privoxy/3.0 (Anonymous)";
    }
  }
  {
# 132
  tmp___41 = map(exports, (char const   *)"hide-user-agent-param", 1, tmp___40,
                 1);
  }
# 132
  if (tmp___41) {
# 132
    return (1);
  }
# 133
  if ((unsigned long )mask & 16384UL) {
# 133
    if ((unsigned long )add & 16384UL) {
      {
# 133
      current_mode = 'y';
      }
    } else {
      {
# 133
      current_mode = 'x';
      }
    }
  } else {
    {
# 133
    current_mode = 'n';
    }
  }
  {
# 133
  tmp___42 = map_radio(exports, (char const   *)"kill-popups",
                       (char const   *)"ynx", (int )current_mode);
  }
# 133
  if (tmp___42) {
# 133
    return (1);
  }
# 134
  if ((unsigned long )mask & 65536UL) {
# 134
    if ((unsigned long )add & 65536UL) {
      {
# 134
      current_mode = 'y';
      }
    } else {
      {
# 134
      current_mode = 'x';
      }
    }
  } else {
    {
# 134
    current_mode = 'n';
    }
  }
  {
# 134
  tmp___43 = map_radio(exports, (char const   *)"limit-connect",
                       (char const   *)"ynx", (int )current_mode);
  }
# 134
  if (tmp___43) {
# 134
    return (1);
  }
  {
# 134
  mapped_param = 0;
  }
# 135
  if ((unsigned long )add & 65536UL) {
    {
# 135
    tmp___44 = (char const   *)action->string[5];
    }
  } else {
    {
# 135
    tmp___44 = (char const   *)"443";
    }
  }
  {
# 135
  tmp___45 = map(exports, (char const   *)"limit-connect-param", 1, tmp___44, 1);
  }
# 135
  if (tmp___45) {
# 135
    return (1);
  }
# 136
  if ((unsigned long )mask & 1024UL) {
# 136
    if ((unsigned long )add & 1024UL) {
      {
# 136
      current_mode = 'y';
      }
    } else {
      {
# 136
      current_mode = 'x';
      }
    }
  } else {
    {
# 136
    current_mode = 'n';
    }
  }
  {
# 136
  tmp___46 = map_radio(exports, (char const   *)"prevent-compression",
                       (char const   *)"ynx", (int )current_mode);
  }
# 136
  if (tmp___46) {
# 136
    return (1);
  }
# 137
  if ((unsigned long )mask & 32768UL) {
# 137
    if ((unsigned long )add & 32768UL) {
      {
# 137
      current_mode = 'y';
      }
    } else {
      {
# 137
      current_mode = 'x';
      }
    }
  } else {
    {
# 137
    current_mode = 'n';
    }
  }
  {
# 137
  tmp___47 = map_radio(exports, (char const   *)"send-vanilla-wafer",
                       (char const   *)"ynx", (int )current_mode);
  }
# 137
  if (tmp___47) {
# 137
    return (1);
  }
# 138
  if (action->multi_add[1][0].first) {
    {
# 138
    current_mode = 'y';
    }
  } else {
# 138
    if (action->multi_remove_all[1]) {
      {
# 138
      current_mode = 'n';
      }
    } else {
# 138
      if (action->multi_remove[1][0].first) {
        {
# 138
        current_mode = 'y';
        }
      } else {
        {
# 138
        current_mode = 'x';
        }
      }
    }
  }
  {
# 138
  tmp___48 = map_radio(exports, (char const   *)"send-wafer",
                       (char const   *)"ynx", (int )current_mode);
  }
# 138
  if (tmp___48) {
# 138
    return (1);
  }
# 139
  if ((unsigned long )mask & 2048UL) {
# 139
    if ((unsigned long )add & 2048UL) {
      {
# 139
      current_mode = 'y';
      }
    } else {
      {
# 139
      current_mode = 'x';
      }
    }
  } else {
    {
# 139
    current_mode = 'n';
    }
  }
  {
# 139
  tmp___49 = map_radio(exports, (char const   *)"session-cookies-only",
                       (char const   *)"ynx", (int )current_mode);
  }
# 139
  if (tmp___49) {
# 139
    return (1);
  }
# 140
  if ((unsigned long )mask & 512UL) {
# 140
    if ((unsigned long )add & 512UL) {
      {
# 140
      current_mode = 'y';
      }
    } else {
      {
# 140
      current_mode = 'x';
      }
    }
  } else {
    {
# 140
    current_mode = 'n';
    }
  }
  {
# 140
  tmp___50 = map_radio(exports, (char const   *)"set-image-blocker",
                       (char const   *)"ynx", (int )current_mode);
  }
# 140
  if (tmp___50) {
# 140
    return (1);
  }
  {
# 140
  mapped_param = 0;
  }
# 141
  if ((unsigned long )add & 512UL) {
    {
# 141
    tmp___51 = strcmp((char const   *)action->string[2],
                      (char const   *)"pattern");
    }
# 141
    if (tmp___51) {
      {
# 141
      tmp___52 = 0;
      }
    } else {
      {
# 141
      tmp___52 = 1;
      }
    }
    {
# 141
    checked = tmp___52;
    }
  } else {
    {
# 141
    checked = 1;
    }
  }
  {
# 141
  mapped_param |= checked;
  }
# 141
  if (checked) {
    {
# 141
    tmp___53 = (char const   *)"checked";
    }
  } else {
    {
# 141
    tmp___53 = (char const   *)"";
    }
  }
  {
# 141
  tmp___54 = map(exports, (char const   *)"set-image-blocker-param-pattern", 1,
                 tmp___53, 1);
  }
# 141
  if (tmp___54) {
# 141
    return (1);
  }
# 142
  if ((unsigned long )add & 512UL) {
    {
# 142
    tmp___55 = strcmp((char const   *)action->string[2], (char const   *)"blank");
    }
# 142
    if (tmp___55) {
      {
# 142
      tmp___56 = 0;
      }
    } else {
      {
# 142
      tmp___56 = 1;
      }
    }
    {
# 142
    checked = tmp___56;
    }
  } else {
    {
# 142
    checked = 0;
    }
  }
  {
# 142
  mapped_param |= checked;
  }
# 142
  if (checked) {
    {
# 142
    tmp___57 = (char const   *)"checked";
    }
  } else {
    {
# 142
    tmp___57 = (char const   *)"";
    }
  }
  {
# 142
  tmp___58 = map(exports, (char const   *)"set-image-blocker-param-blank", 1,
                 tmp___57, 1);
  }
# 142
  if (tmp___58) {
# 142
    return (1);
  }
# 143
  if (mapped_param) {
    {
# 143
    tmp___59 = (char const   *)"";
    }
  } else {
    {
# 143
    tmp___59 = (char const   *)"checked";
    }
  }
  {
# 143
  tmp___60 = map(exports, (char const   *)"set-image-blocker-param-custom", 1,
                 tmp___59, 1);
  }
# 143
  if (tmp___60) {
# 143
    return (1);
  }
# 143
  if ((unsigned long )add & 512UL) {
# 143
    if (mapped_param) {
      {
# 143
      tmp___61 = (char const   *)"http://config.privoxy.org/show-banner?type=pattern";
      }
    } else {
      {
# 143
      tmp___61 = (char const   *)action->string[2];
      }
    }
  } else {
    {
# 143
    tmp___61 = (char const   *)"http://config.privoxy.org/show-banner?type=pattern";
    }
  }
  {
# 143
  tmp___62 = map(exports, (char const   *)"set-image-blocker-param", 1,
                 tmp___61, 1);
  }
# 143
  if (tmp___62) {
# 143
    return (1);
  }
# 4470 "cgiedit.c"
  return (0);
}
}
# 112 "actionlist.h"
static int first_time   = 1;
# 112
static char *js_name_arr  ;
# 113
static int first_time___0   = 1;
# 113
static char *js_name_arr___0  ;
# 114
static int first_time___1   = 1;
# 114
static char *js_name_arr___1  ;
# 115
static int first_time___2   = 1;
# 115
static char *js_name_arr___2  ;
# 116
static int first_time___3   = 1;
# 116
static char *js_name_arr___3  ;
# 116
static int first_time___4   = 1;
# 116
static char *js_name_arr___4  ;
# 116
static int first_time___5   = 1;
# 116
static char *js_name_arr___5  ;
# 119
static int first_time___6   = 1;
# 119
static char *js_name_arr___6  ;
# 120
static int first_time___7   = 1;
# 120
static char *js_name_arr___7  ;
# 121
static int first_time___8   = 1;
# 121
static char *js_name_arr___8  ;
# 122
static int first_time___9   = 1;
# 122
static char *js_name_arr___9  ;
# 123
static int first_time___10   = 1;
# 123
static char *js_name_arr___10  ;
# 124
static int first_time___11   = 1;
# 124
static char *js_name_arr___11  ;
# 124
static int first_time___12   = 1;
# 124
static char *js_name_arr___12  ;
# 124
static int first_time___13   = 1;
# 124
static char *js_name_arr___13  ;
# 127
static int first_time___14   = 1;
# 127
static char *js_name_arr___14  ;
# 127
static int first_time___15   = 1;
# 127
static char *js_name_arr___15  ;
# 127
static int first_time___16   = 1;
# 127
static char *js_name_arr___16  ;
# 131
static int first_time___17   = 1;
# 131
static char *js_name_arr___17  ;
# 131
static int first_time___18   = 1;
# 131
static char *js_name_arr___18  ;
# 131
static int first_time___19   = 1;
# 131
static char *js_name_arr___19  ;
# 133
static int first_time___20   = 1;
# 133
static char *js_name_arr___20  ;
# 134
static int first_time___21   = 1;
# 134
static char *js_name_arr___21  ;
# 134
static int first_time___22   = 1;
# 134
static char *js_name_arr___22  ;
# 134
static int first_time___23   = 1;
# 134
static char *js_name_arr___23  ;
# 136
static int first_time___24   = 1;
# 136
static char *js_name_arr___24  ;
# 137
static int first_time___25   = 1;
# 137
static char *js_name_arr___25  ;
# 138
static int first_time___26   = 1;
# 138
static char *js_name_arr___26  ;
# 139
static int first_time___27   = 1;
# 139
static char *js_name_arr___27  ;
# 140
static int first_time___28   = 1;
# 140
static char *js_name_arr___28  ;
# 140
static int first_time___29   = 1;
# 140
static char *js_name_arr___29  ;
# 140
static int first_time___30   = 1;
# 140
static char *js_name_arr___30  ;
# 4491 "cgiedit.c"
static jb_err actions_from_radio(struct map  const  *parameters ,
                                 struct action_spec *action ) 
{ char const   *param ;
  char *param_dup ;
  char ch ;
  char const   *js_name ;
  jb_err err ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;

  {
  {
# 4498
  err = 0;
  }
# 4500
  if (! parameters) {
    {
# 4500
    __assert_fail((char const   *)"parameters", (char const   *)"cgiedit.c",
                  4500U, (char const   *)"actions_from_radio");
    }
  }
# 4501
  if (! action) {
    {
# 4501
    __assert_fail((char const   *)"action", (char const   *)"cgiedit.c", 4501U,
                  (char const   *)"actions_from_radio");
    }
  }
# 112 "actionlist.h"
  if (first_time) {
    {
# 112
    js_name_arr = strdup((char const   *)"add-header");
# 112
    javascriptify(js_name_arr);
    }
  }
  {
# 112
  js_name = (char const   *)js_name_arr;
# 112
  first_time = 0;
# 112
  ch = get_char_param(parameters, js_name);
  }
# 112
  if (! ((int )ch == 89)) {
# 112
    if ((int )ch == 78) {
      {
# 112
      list_remove_all(action->multi_add[0]);
# 112
      list_remove_all(action->multi_remove[0]);
# 112
      action->multi_remove_all[0] = 1;
      }
    } else {
# 112
      if ((int )ch == 88) {
        {
# 112
        list_remove_all(action->multi_add[0]);
# 112
        list_remove_all(action->multi_remove[0]);
# 112
        action->multi_remove_all[0] = 0;
        }
      }
    }
  }
# 113
  if (first_time___0) {
    {
# 113
    js_name_arr___0 = strdup((char const   *)"block");
# 113
    javascriptify(js_name_arr___0);
    }
  }
  {
# 113
  js_name = (char const   *)js_name_arr___0;
# 113
  first_time___0 = 0;
# 113
  ch = get_char_param(parameters, js_name);
  }
# 113
  if ((int )ch == 89) {
    {
# 113
    action->add = action->add | 1UL;
# 113
    action->mask = action->mask | 1UL;
    }
  } else {
# 113
    if ((int )ch == 78) {
      {
# 113
      action->add = action->add & 4294967294UL;
# 113
      action->mask = action->mask & 4294967294UL;
      }
    } else {
# 113
      if ((int )ch == 88) {
        {
# 113
        action->add = action->add & 4294967294UL;
# 113
        action->mask = action->mask | 1UL;
        }
      }
    }
  }
# 114
  if (first_time___1) {
    {
# 114
    js_name_arr___1 = strdup((char const   *)"crunch-incoming-cookies");
# 114
    javascriptify(js_name_arr___1);
    }
  }
  {
# 114
  js_name = (char const   *)js_name_arr___1;
# 114
  first_time___1 = 0;
# 114
  ch = get_char_param(parameters, js_name);
  }
# 114
  if ((int )ch == 89) {
    {
# 114
    action->add = action->add | 8192UL;
# 114
    action->mask = action->mask | 8192UL;
    }
  } else {
# 114
    if ((int )ch == 78) {
      {
# 114
      action->add = action->add & 4294959103UL;
# 114
      action->mask = action->mask & 4294959103UL;
      }
    } else {
# 114
      if ((int )ch == 88) {
        {
# 114
        action->add = action->add & 4294959103UL;
# 114
        action->mask = action->mask | 8192UL;
        }
      }
    }
  }
# 115
  if (first_time___2) {
    {
# 115
    js_name_arr___2 = strdup((char const   *)"crunch-outgoing-cookies");
# 115
    javascriptify(js_name_arr___2);
    }
  }
  {
# 115
  js_name = (char const   *)js_name_arr___2;
# 115
  first_time___2 = 0;
# 115
  ch = get_char_param(parameters, js_name);
  }
# 115
  if ((int )ch == 89) {
    {
# 115
    action->add = action->add | 4096UL;
# 115
    action->mask = action->mask | 4096UL;
    }
  } else {
# 115
    if ((int )ch == 78) {
      {
# 115
      action->add = action->add & 4294963199UL;
# 115
      action->mask = action->mask & 4294963199UL;
      }
    } else {
# 115
      if ((int )ch == 88) {
        {
# 115
        action->add = action->add & 4294963199UL;
# 115
        action->mask = action->mask | 4096UL;
        }
      }
    }
  }
# 116
  if (first_time___3) {
    {
# 116
    js_name_arr___3 = strdup((char const   *)"deanimate-gifs");
# 116
    javascriptify(js_name_arr___3);
    }
  }
  {
# 116
  js_name = (char const   *)js_name_arr___3;
# 116
  first_time___3 = 0;
# 116
  ch = get_char_param(parameters, js_name);
  }
# 116
  if ((int )ch == 89) {
    {
# 116
    param = (char const   *)((void *)0);
    }
# 116
    if (first_time___4) {
      {
# 116
      js_name_arr___4 = strdup((char const   *)"deanimate-gifs-mode");
# 116
      javascriptify(js_name_arr___4);
      }
    }
    {
# 116
    js_name = (char const   *)js_name_arr___4;
# 116
    first_time___4 = 0;
    }
# 116
    if (! err) {
      {
# 116
      err = get_string_param(parameters, js_name, & param);
      }
    }
# 116
    if ((unsigned int )param == (unsigned int )((void *)0)) {
      goto _L;
    } else {
      {
# 116
      tmp = strcmp(param, (char const   *)"CUSTOM");
      }
# 116
      if (0 == tmp) {
        _L: 
# 116
        if (first_time___5) {
          {
# 116
          js_name_arr___5 = strdup((char const   *)"deanimate-gifs-param");
# 116
          javascriptify(js_name_arr___5);
          }
        }
        {
# 116
        js_name = (char const   *)js_name_arr___5;
# 116
        first_time___5 = 0;
        }
# 116
        if (! err) {
          {
# 116
          err = get_string_param(parameters, js_name, & param);
          }
        }
      }
    }
# 116
    if ((unsigned int )param != (unsigned int )((void *)0)) {
      {
# 116
      param_dup = strdup(param);
      }
# 116
      if ((unsigned int )((void *)0) == (unsigned int )param_dup) {
# 116
        return (1);
      }
# 116
      if (action->string[0]) {
        {
# 116
        free((void *)action->string[0]);
# 116
        action->string[0] = (char *)((void *)0);
        }
      }
      {
# 116
      action->add = action->add | 2UL;
# 116
      action->mask = action->mask | 2UL;
# 116
      action->string[0] = param_dup;
      }
    }
  } else {
# 116
    if ((int )ch == 78) {
# 116
      if (action->add & 2UL) {
# 116
        if (action->string[0]) {
          {
# 116
          free((void *)action->string[0]);
# 116
          action->string[0] = (char *)((void *)0);
          }
        }
      }
      {
# 116
      action->add = action->add & 4294967293UL;
# 116
      action->mask = action->mask & 4294967293UL;
      }
    } else {
# 116
      if ((int )ch == 88) {
# 116
        if (action->add & 2UL) {
# 116
          if (action->string[0]) {
            {
# 116
            free((void *)action->string[0]);
# 116
            action->string[0] = (char *)((void *)0);
            }
          }
        }
        {
# 116
        action->add = action->add & 4294967293UL;
# 116
        action->mask = action->mask | 2UL;
        }
      }
    }
  }
# 119
  if (first_time___6) {
    {
# 119
    js_name_arr___6 = strdup((char const   *)"downgrade-http-version");
# 119
    javascriptify(js_name_arr___6);
    }
  }
  {
# 119
  js_name = (char const   *)js_name_arr___6;
# 119
  first_time___6 = 0;
# 119
  ch = get_char_param(parameters, js_name);
  }
# 119
  if ((int )ch == 89) {
    {
# 119
    action->add = action->add | 4UL;
# 119
    action->mask = action->mask | 4UL;
    }
  } else {
# 119
    if ((int )ch == 78) {
      {
# 119
      action->add = action->add & 4294967291UL;
# 119
      action->mask = action->mask & 4294967291UL;
      }
    } else {
# 119
      if ((int )ch == 88) {
        {
# 119
        action->add = action->add & 4294967291UL;
# 119
        action->mask = action->mask | 4UL;
        }
      }
    }
  }
# 120
  if (first_time___7) {
    {
# 120
    js_name_arr___7 = strdup((char const   *)"fast-redirects");
# 120
    javascriptify(js_name_arr___7);
    }
  }
  {
# 120
  js_name = (char const   *)js_name_arr___7;
# 120
  first_time___7 = 0;
# 120
  ch = get_char_param(parameters, js_name);
  }
# 120
  if ((int )ch == 89) {
    {
# 120
    action->add = action->add | 8UL;
# 120
    action->mask = action->mask | 8UL;
    }
  } else {
# 120
    if ((int )ch == 78) {
      {
# 120
      action->add = action->add & 4294967287UL;
# 120
      action->mask = action->mask & 4294967287UL;
      }
    } else {
# 120
      if ((int )ch == 88) {
        {
# 120
        action->add = action->add & 4294967287UL;
# 120
        action->mask = action->mask | 8UL;
        }
      }
    }
  }
# 121
  if (first_time___8) {
    {
# 121
    js_name_arr___8 = strdup((char const   *)"filter");
# 121
    javascriptify(js_name_arr___8);
    }
  }
  {
# 121
  js_name = (char const   *)js_name_arr___8;
# 121
  first_time___8 = 0;
# 121
  ch = get_char_param(parameters, js_name);
  }
# 121
  if (! ((int )ch == 89)) {
# 121
    if ((int )ch == 78) {
      {
# 121
      list_remove_all(action->multi_add[2]);
# 121
      list_remove_all(action->multi_remove[2]);
# 121
      action->multi_remove_all[2] = 1;
      }
    } else {
# 121
      if ((int )ch == 88) {
        {
# 121
        list_remove_all(action->multi_add[2]);
# 121
        list_remove_all(action->multi_remove[2]);
# 121
        action->multi_remove_all[2] = 0;
        }
      }
    }
  }
# 122
  if (first_time___9) {
    {
# 122
    js_name_arr___9 = strdup((char const   *)"handle-as-image");
# 122
    javascriptify(js_name_arr___9);
    }
  }
  {
# 122
  js_name = (char const   *)js_name_arr___9;
# 122
  first_time___9 = 0;
# 122
  ch = get_char_param(parameters, js_name);
  }
# 122
  if ((int )ch == 89) {
    {
# 122
    action->add = action->add | 256UL;
# 122
    action->mask = action->mask | 256UL;
    }
  } else {
# 122
    if ((int )ch == 78) {
      {
# 122
      action->add = action->add & 4294967039UL;
# 122
      action->mask = action->mask & 4294967039UL;
      }
    } else {
# 122
      if ((int )ch == 88) {
        {
# 122
        action->add = action->add & 4294967039UL;
# 122
        action->mask = action->mask | 256UL;
        }
      }
    }
  }
# 123
  if (first_time___10) {
    {
# 123
    js_name_arr___10 = strdup((char const   *)"hide-forwarded-for-headers");
# 123
    javascriptify(js_name_arr___10);
    }
  }
  {
# 123
  js_name = (char const   *)js_name_arr___10;
# 123
  first_time___10 = 0;
# 123
  ch = get_char_param(parameters, js_name);
  }
# 123
  if ((int )ch == 89) {
    {
# 123
    action->add = action->add | 16UL;
# 123
    action->mask = action->mask | 16UL;
    }
  } else {
# 123
    if ((int )ch == 78) {
      {
# 123
      action->add = action->add & 4294967279UL;
# 123
      action->mask = action->mask & 4294967279UL;
      }
    } else {
# 123
      if ((int )ch == 88) {
        {
# 123
        action->add = action->add & 4294967279UL;
# 123
        action->mask = action->mask | 16UL;
        }
      }
    }
  }
# 124
  if (first_time___11) {
    {
# 124
    js_name_arr___11 = strdup((char const   *)"hide-from-header");
# 124
    javascriptify(js_name_arr___11);
    }
  }
  {
# 124
  js_name = (char const   *)js_name_arr___11;
# 124
  first_time___11 = 0;
# 124
  ch = get_char_param(parameters, js_name);
  }
# 124
  if ((int )ch == 89) {
    {
# 124
    param = (char const   *)((void *)0);
    }
# 124
    if (first_time___12) {
      {
# 124
      js_name_arr___12 = strdup((char const   *)"hide-from-header-mode");
# 124
      javascriptify(js_name_arr___12);
      }
    }
    {
# 124
    js_name = (char const   *)js_name_arr___12;
# 124
    first_time___12 = 0;
    }
# 124
    if (! err) {
      {
# 124
      err = get_string_param(parameters, js_name, & param);
      }
    }
# 124
    if ((unsigned int )param == (unsigned int )((void *)0)) {
      goto _L___0;
    } else {
      {
# 124
      tmp___0 = strcmp(param, (char const   *)"CUSTOM");
      }
# 124
      if (0 == tmp___0) {
        _L___0: 
# 124
        if (first_time___13) {
          {
# 124
          js_name_arr___13 = strdup((char const   *)"hide-from-header-param");
# 124
          javascriptify(js_name_arr___13);
          }
        }
        {
# 124
        js_name = (char const   *)js_name_arr___13;
# 124
        first_time___13 = 0;
        }
# 124
        if (! err) {
          {
# 124
          err = get_string_param(parameters, js_name, & param);
          }
        }
      }
    }
# 124
    if ((unsigned int )param != (unsigned int )((void *)0)) {
      {
# 124
      param_dup = strdup(param);
      }
# 124
      if ((unsigned int )((void *)0) == (unsigned int )param_dup) {
# 124
        return (1);
      }
# 124
      if (action->string[1]) {
        {
# 124
        free((void *)action->string[1]);
# 124
        action->string[1] = (char *)((void *)0);
        }
      }
      {
# 124
      action->add = action->add | 32UL;
# 124
      action->mask = action->mask | 32UL;
# 124
      action->string[1] = param_dup;
      }
    }
  } else {
# 124
    if ((int )ch == 78) {
# 124
      if (action->add & 32UL) {
# 124
        if (action->string[1]) {
          {
# 124
          free((void *)action->string[1]);
# 124
          action->string[1] = (char *)((void *)0);
          }
        }
      }
      {
# 124
      action->add = action->add & 4294967263UL;
# 124
      action->mask = action->mask & 4294967263UL;
      }
    } else {
# 124
      if ((int )ch == 88) {
# 124
        if (action->add & 32UL) {
# 124
          if (action->string[1]) {
            {
# 124
            free((void *)action->string[1]);
# 124
            action->string[1] = (char *)((void *)0);
            }
          }
        }
        {
# 124
        action->add = action->add & 4294967263UL;
# 124
        action->mask = action->mask | 32UL;
        }
      }
    }
  }
# 127
  if (first_time___14) {
    {
# 127
    js_name_arr___14 = strdup((char const   *)"hide-referrer");
# 127
    javascriptify(js_name_arr___14);
    }
  }
  {
# 127
  js_name = (char const   *)js_name_arr___14;
# 127
  first_time___14 = 0;
# 127
  ch = get_char_param(parameters, js_name);
  }
# 127
  if ((int )ch == 89) {
    {
# 127
    param = (char const   *)((void *)0);
    }
# 127
    if (first_time___15) {
      {
# 127
      js_name_arr___15 = strdup((char const   *)"hide-referrer-mode");
# 127
      javascriptify(js_name_arr___15);
      }
    }
    {
# 127
    js_name = (char const   *)js_name_arr___15;
# 127
    first_time___15 = 0;
    }
# 127
    if (! err) {
      {
# 127
      err = get_string_param(parameters, js_name, & param);
      }
    }
# 127
    if ((unsigned int )param == (unsigned int )((void *)0)) {
      goto _L___1;
    } else {
      {
# 127
      tmp___1 = strcmp(param, (char const   *)"CUSTOM");
      }
# 127
      if (0 == tmp___1) {
        _L___1: 
# 127
        if (first_time___16) {
          {
# 127
          js_name_arr___16 = strdup((char const   *)"hide-referrer-param");
# 127
          javascriptify(js_name_arr___16);
          }
        }
        {
# 127
        js_name = (char const   *)js_name_arr___16;
# 127
        first_time___16 = 0;
        }
# 127
        if (! err) {
          {
# 127
          err = get_string_param(parameters, js_name, & param);
          }
        }
      }
    }
# 127
    if ((unsigned int )param != (unsigned int )((void *)0)) {
      {
# 127
      param_dup = strdup(param);
      }
# 127
      if ((unsigned int )((void *)0) == (unsigned int )param_dup) {
# 127
        return (1);
      }
# 127
      if (action->string[3]) {
        {
# 127
        free((void *)action->string[3]);
# 127
        action->string[3] = (char *)((void *)0);
        }
      }
      {
# 127
      action->add = action->add | 64UL;
# 127
      action->mask = action->mask | 64UL;
# 127
      action->string[3] = param_dup;
      }
    }
  } else {
# 127
    if ((int )ch == 78) {
# 127
      if (action->add & 64UL) {
# 127
        if (action->string[3]) {
          {
# 127
          free((void *)action->string[3]);
# 127
          action->string[3] = (char *)((void *)0);
          }
        }
      }
      {
# 127
      action->add = action->add & 4294967231UL;
# 127
      action->mask = action->mask & 4294967231UL;
      }
    } else {
# 127
      if ((int )ch == 88) {
# 127
        if (action->add & 64UL) {
# 127
          if (action->string[3]) {
            {
# 127
            free((void *)action->string[3]);
# 127
            action->string[3] = (char *)((void *)0);
            }
          }
        }
        {
# 127
        action->add = action->add & 4294967231UL;
# 127
        action->mask = action->mask | 64UL;
        }
      }
    }
  }
# 131
  if (first_time___17) {
    {
# 131
    js_name_arr___17 = strdup((char const   *)"hide-user-agent");
# 131
    javascriptify(js_name_arr___17);
    }
  }
  {
# 131
  js_name = (char const   *)js_name_arr___17;
# 131
  first_time___17 = 0;
# 131
  ch = get_char_param(parameters, js_name);
  }
# 131
  if ((int )ch == 89) {
    {
# 131
    param = (char const   *)((void *)0);
    }
# 131
    if (first_time___18) {
      {
# 131
      js_name_arr___18 = strdup((char const   *)"hide-user-agent-mode");
# 131
      javascriptify(js_name_arr___18);
      }
    }
    {
# 131
    js_name = (char const   *)js_name_arr___18;
# 131
    first_time___18 = 0;
    }
# 131
    if (! err) {
      {
# 131
      err = get_string_param(parameters, js_name, & param);
      }
    }
# 131
    if ((unsigned int )param == (unsigned int )((void *)0)) {
      goto _L___2;
    } else {
      {
# 131
      tmp___2 = strcmp(param, (char const   *)"CUSTOM");
      }
# 131
      if (0 == tmp___2) {
        _L___2: 
# 131
        if (first_time___19) {
          {
# 131
          js_name_arr___19 = strdup((char const   *)"hide-user-agent-param");
# 131
          javascriptify(js_name_arr___19);
          }
        }
        {
# 131
        js_name = (char const   *)js_name_arr___19;
# 131
        first_time___19 = 0;
        }
# 131
        if (! err) {
          {
# 131
          err = get_string_param(parameters, js_name, & param);
          }
        }
      }
    }
# 131
    if ((unsigned int )param != (unsigned int )((void *)0)) {
      {
# 131
      param_dup = strdup(param);
      }
# 131
      if ((unsigned int )((void *)0) == (unsigned int )param_dup) {
# 131
        return (1);
      }
# 131
      if (action->string[4]) {
        {
# 131
        free((void *)action->string[4]);
# 131
        action->string[4] = (char *)((void *)0);
        }
      }
      {
# 131
      action->add = action->add | 128UL;
# 131
      action->mask = action->mask | 128UL;
# 131
      action->string[4] = param_dup;
      }
    }
  } else {
# 131
    if ((int )ch == 78) {
# 131
      if (action->add & 128UL) {
# 131
        if (action->string[4]) {
          {
# 131
          free((void *)action->string[4]);
# 131
          action->string[4] = (char *)((void *)0);
          }
        }
      }
      {
# 131
      action->add = action->add & 4294967167UL;
# 131
      action->mask = action->mask & 4294967167UL;
      }
    } else {
# 131
      if ((int )ch == 88) {
# 131
        if (action->add & 128UL) {
# 131
          if (action->string[4]) {
            {
# 131
            free((void *)action->string[4]);
# 131
            action->string[4] = (char *)((void *)0);
            }
          }
        }
        {
# 131
        action->add = action->add & 4294967167UL;
# 131
        action->mask = action->mask | 128UL;
        }
      }
    }
  }
# 133
  if (first_time___20) {
    {
# 133
    js_name_arr___20 = strdup((char const   *)"kill-popups");
# 133
    javascriptify(js_name_arr___20);
    }
  }
  {
# 133
  js_name = (char const   *)js_name_arr___20;
# 133
  first_time___20 = 0;
# 133
  ch = get_char_param(parameters, js_name);
  }
# 133
  if ((int )ch == 89) {
    {
# 133
    action->add = action->add | 16384UL;
# 133
    action->mask = action->mask | 16384UL;
    }
  } else {
# 133
    if ((int )ch == 78) {
      {
# 133
      action->add = action->add & 4294950911UL;
# 133
      action->mask = action->mask & 4294950911UL;
      }
    } else {
# 133
      if ((int )ch == 88) {
        {
# 133
        action->add = action->add & 4294950911UL;
# 133
        action->mask = action->mask | 16384UL;
        }
      }
    }
  }
# 134
  if (first_time___21) {
    {
# 134
    js_name_arr___21 = strdup((char const   *)"limit-connect");
# 134
    javascriptify(js_name_arr___21);
    }
  }
  {
# 134
  js_name = (char const   *)js_name_arr___21;
# 134
  first_time___21 = 0;
# 134
  ch = get_char_param(parameters, js_name);
  }
# 134
  if ((int )ch == 89) {
    {
# 134
    param = (char const   *)((void *)0);
    }
# 134
    if (first_time___22) {
      {
# 134
      js_name_arr___22 = strdup((char const   *)"limit-connect-mode");
# 134
      javascriptify(js_name_arr___22);
      }
    }
    {
# 134
    js_name = (char const   *)js_name_arr___22;
# 134
    first_time___22 = 0;
    }
# 134
    if (! err) {
      {
# 134
      err = get_string_param(parameters, js_name, & param);
      }
    }
# 134
    if ((unsigned int )param == (unsigned int )((void *)0)) {
      goto _L___3;
    } else {
      {
# 134
      tmp___3 = strcmp(param, (char const   *)"CUSTOM");
      }
# 134
      if (0 == tmp___3) {
        _L___3: 
# 134
        if (first_time___23) {
          {
# 134
          js_name_arr___23 = strdup((char const   *)"limit-connect-param");
# 134
          javascriptify(js_name_arr___23);
          }
        }
        {
# 134
        js_name = (char const   *)js_name_arr___23;
# 134
        first_time___23 = 0;
        }
# 134
        if (! err) {
          {
# 134
          err = get_string_param(parameters, js_name, & param);
          }
        }
      }
    }
# 134
    if ((unsigned int )param != (unsigned int )((void *)0)) {
      {
# 134
      param_dup = strdup(param);
      }
# 134
      if ((unsigned int )((void *)0) == (unsigned int )param_dup) {
# 134
        return (1);
      }
# 134
      if (action->string[5]) {
        {
# 134
        free((void *)action->string[5]);
# 134
        action->string[5] = (char *)((void *)0);
        }
      }
      {
# 134
      action->add = action->add | 65536UL;
# 134
      action->mask = action->mask | 65536UL;
# 134
      action->string[5] = param_dup;
      }
    }
  } else {
# 134
    if ((int )ch == 78) {
# 134
      if (action->add & 65536UL) {
# 134
        if (action->string[5]) {
          {
# 134
          free((void *)action->string[5]);
# 134
          action->string[5] = (char *)((void *)0);
          }
        }
      }
      {
# 134
      action->add = action->add & 4294901759UL;
# 134
      action->mask = action->mask & 4294901759UL;
      }
    } else {
# 134
      if ((int )ch == 88) {
# 134
        if (action->add & 65536UL) {
# 134
          if (action->string[5]) {
            {
# 134
            free((void *)action->string[5]);
# 134
            action->string[5] = (char *)((void *)0);
            }
          }
        }
        {
# 134
        action->add = action->add & 4294901759UL;
# 134
        action->mask = action->mask | 65536UL;
        }
      }
    }
  }
# 136
  if (first_time___24) {
    {
# 136
    js_name_arr___24 = strdup((char const   *)"prevent-compression");
# 136
    javascriptify(js_name_arr___24);
    }
  }
  {
# 136
  js_name = (char const   *)js_name_arr___24;
# 136
  first_time___24 = 0;
# 136
  ch = get_char_param(parameters, js_name);
  }
# 136
  if ((int )ch == 89) {
    {
# 136
    action->add = action->add | 1024UL;
# 136
    action->mask = action->mask | 1024UL;
    }
  } else {
# 136
    if ((int )ch == 78) {
      {
# 136
      action->add = action->add & 4294966271UL;
# 136
      action->mask = action->mask & 4294966271UL;
      }
    } else {
# 136
      if ((int )ch == 88) {
        {
# 136
        action->add = action->add & 4294966271UL;
# 136
        action->mask = action->mask | 1024UL;
        }
      }
    }
  }
# 137
  if (first_time___25) {
    {
# 137
    js_name_arr___25 = strdup((char const   *)"send-vanilla-wafer");
# 137
    javascriptify(js_name_arr___25);
    }
  }
  {
# 137
  js_name = (char const   *)js_name_arr___25;
# 137
  first_time___25 = 0;
# 137
  ch = get_char_param(parameters, js_name);
  }
# 137
  if ((int )ch == 89) {
    {
# 137
    action->add = action->add | 32768UL;
# 137
    action->mask = action->mask | 32768UL;
    }
  } else {
# 137
    if ((int )ch == 78) {
      {
# 137
      action->add = action->add & 4294934527UL;
# 137
      action->mask = action->mask & 4294934527UL;
      }
    } else {
# 137
      if ((int )ch == 88) {
        {
# 137
        action->add = action->add & 4294934527UL;
# 137
        action->mask = action->mask | 32768UL;
        }
      }
    }
  }
# 138
  if (first_time___26) {
    {
# 138
    js_name_arr___26 = strdup((char const   *)"send-wafer");
# 138
    javascriptify(js_name_arr___26);
    }
  }
  {
# 138
  js_name = (char const   *)js_name_arr___26;
# 138
  first_time___26 = 0;
# 138
  ch = get_char_param(parameters, js_name);
  }
# 138
  if (! ((int )ch == 89)) {
# 138
    if ((int )ch == 78) {
      {
# 138
      list_remove_all(action->multi_add[1]);
# 138
      list_remove_all(action->multi_remove[1]);
# 138
      action->multi_remove_all[1] = 1;
      }
    } else {
# 138
      if ((int )ch == 88) {
        {
# 138
        list_remove_all(action->multi_add[1]);
# 138
        list_remove_all(action->multi_remove[1]);
# 138
        action->multi_remove_all[1] = 0;
        }
      }
    }
  }
# 139
  if (first_time___27) {
    {
# 139
    js_name_arr___27 = strdup((char const   *)"session-cookies-only");
# 139
    javascriptify(js_name_arr___27);
    }
  }
  {
# 139
  js_name = (char const   *)js_name_arr___27;
# 139
  first_time___27 = 0;
# 139
  ch = get_char_param(parameters, js_name);
  }
# 139
  if ((int )ch == 89) {
    {
# 139
    action->add = action->add | 2048UL;
# 139
    action->mask = action->mask | 2048UL;
    }
  } else {
# 139
    if ((int )ch == 78) {
      {
# 139
      action->add = action->add & 4294965247UL;
# 139
      action->mask = action->mask & 4294965247UL;
      }
    } else {
# 139
      if ((int )ch == 88) {
        {
# 139
        action->add = action->add & 4294965247UL;
# 139
        action->mask = action->mask | 2048UL;
        }
      }
    }
  }
# 140
  if (first_time___28) {
    {
# 140
    js_name_arr___28 = strdup((char const   *)"set-image-blocker");
# 140
    javascriptify(js_name_arr___28);
    }
  }
  {
# 140
  js_name = (char const   *)js_name_arr___28;
# 140
  first_time___28 = 0;
# 140
  ch = get_char_param(parameters, js_name);
  }
# 140
  if ((int )ch == 89) {
    {
# 140
    param = (char const   *)((void *)0);
    }
# 140
    if (first_time___29) {
      {
# 140
      js_name_arr___29 = strdup((char const   *)"set-image-blocker-mode");
# 140
      javascriptify(js_name_arr___29);
      }
    }
    {
# 140
    js_name = (char const   *)js_name_arr___29;
# 140
    first_time___29 = 0;
    }
# 140
    if (! err) {
      {
# 140
      err = get_string_param(parameters, js_name, & param);
      }
    }
# 140
    if ((unsigned int )param == (unsigned int )((void *)0)) {
      goto _L___4;
    } else {
      {
# 140
      tmp___4 = strcmp(param, (char const   *)"CUSTOM");
      }
# 140
      if (0 == tmp___4) {
        _L___4: 
# 140
        if (first_time___30) {
          {
# 140
          js_name_arr___30 = strdup((char const   *)"set-image-blocker-param");
# 140
          javascriptify(js_name_arr___30);
          }
        }
        {
# 140
        js_name = (char const   *)js_name_arr___30;
# 140
        first_time___30 = 0;
        }
# 140
        if (! err) {
          {
# 140
          err = get_string_param(parameters, js_name, & param);
          }
        }
      }
    }
# 140
    if ((unsigned int )param != (unsigned int )((void *)0)) {
      {
# 140
      param_dup = strdup(param);
      }
# 140
      if ((unsigned int )((void *)0) == (unsigned int )param_dup) {
# 140
        return (1);
      }
# 140
      if (action->string[2]) {
        {
# 140
        free((void *)action->string[2]);
# 140
        action->string[2] = (char *)((void *)0);
        }
      }
      {
# 140
      action->add = action->add | 512UL;
# 140
      action->mask = action->mask | 512UL;
# 140
      action->string[2] = param_dup;
      }
    }
  } else {
# 140
    if ((int )ch == 78) {
# 140
      if (action->add & 512UL) {
# 140
        if (action->string[2]) {
          {
# 140
          free((void *)action->string[2]);
# 140
          action->string[2] = (char *)((void *)0);
          }
        }
      }
      {
# 140
      action->add = action->add & 4294966783UL;
# 140
      action->mask = action->mask & 4294966783UL;
      }
    } else {
# 140
      if ((int )ch == 88) {
# 140
        if (action->add & 512UL) {
# 140
          if (action->string[2]) {
            {
# 140
            free((void *)action->string[2]);
# 140
            action->string[2] = (char *)((void *)0);
            }
          }
        }
        {
# 140
        action->add = action->add & 4294966783UL;
# 140
        action->mask = action->mask | 512UL;
        }
      }
    }
  }
# 4618 "cgiedit.c"
  return (err);
}
}
# 1 "cgisimple.c"
__asm__("booo - error in global cgisimple_rcs (cgisimple.c:1)");
# 223 "filters.h"
int block_acl(struct access_control_addr *dst , struct client_state *csp ) ;
# 224
int acl_addr(char *aspec , struct access_control_addr *aca ) ;
# 226
int match_portlist(char const   *portlist , int port ) ;
# 231
struct http_response *block_url(struct client_state *csp ) ;
# 232
struct http_response *redirect_url(struct client_state *csp ) ;
# 234
struct http_response *trust_url(struct client_state *csp ) ;
# 241
int is_untrusted_url(struct client_state *csp ) ;
# 244
int is_imageurl(struct client_state *csp ) ;
# 250
void url_actions(struct http_request *http , struct client_state *csp ) ;
# 252
void apply_url_actions(struct current_action_spec *action ,
                       struct http_request *http , struct url_actions *b ) ;
# 258
struct forward_spec  const  *forward_url(struct http_request *http ,
                                         struct client_state *csp ) ;
# 263
char *pcrs_filter_response(struct client_state *csp ) ;
# 264
char *gif_deanimate_response(struct client_state *csp ) ;
# 265
int remove_chunked_transfer_coding(char *buffer , size_t size ) ;
# 270
struct http_response *direct_response(struct client_state *csp ) ;
# 283
extern char const   filters_rcs[56] ;
# 284
char const   filters_h_rcs[56] ;
# 189 "parsers.h"
struct parsers  const  client_patterns[14] ;
# 190
struct parsers  const  server_patterns[10] ;
# 192
add_header_func_ptr const   add_client_headers[6] ;
# 193
add_header_func_ptr const   add_server_headers[2] ;
# 195
int flush_socket(jb_socket fd , struct client_state *csp ) ;
# 196
jb_err add_to_iob(struct client_state *csp , char *buf , int n ) ;
# 197
char *get_header(struct client_state *csp ) ;
# 198
char *get_header_value(struct list  const  *header_list ,
                       char const   *header_name ) ;
# 199
char *sed(struct parsers  const  *pats ,
          add_header_func_ptr const   *more_headers , struct client_state *csp ) ;
# 201
jb_err crumble(struct client_state *csp , char **header ) ;
# 202
jb_err client_referrer(struct client_state *csp , char **header ) ;
# 203
jb_err client_uagent(struct client_state *csp , char **header ) ;
# 204
jb_err client_ua(struct client_state *csp , char **header ) ;
# 205
jb_err client_from(struct client_state *csp , char **header ) ;
# 206
jb_err client_send_cookie(struct client_state *csp , char **header ) ;
# 207
jb_err client_x_forwarded(struct client_state *csp , char **header ) ;
# 208
jb_err client_accept_encoding(struct client_state *csp , char **header ) ;
# 209
jb_err client_te(struct client_state *csp , char **header ) ;
# 210
jb_err client_max_forwards(struct client_state *csp , char **header ) ;
# 211
jb_err client_host(struct client_state *csp , char **header ) ;
# 214
jb_err client_host_adder(struct client_state *csp ) ;
# 215
jb_err client_cookie_adder(struct client_state *csp ) ;
# 216
jb_err client_xtra_adder(struct client_state *csp ) ;
# 218
jb_err client_x_forwarded_adder(struct client_state *csp ) ;
# 220
jb_err connection_close_adder(struct client_state *csp ) ;
# 222
jb_err server_set_cookie(struct client_state *csp , char **header ) ;
# 223
jb_err server_content_type(struct client_state *csp , char **header ) ;
# 224
jb_err server_content_length(struct client_state *csp , char **header ) ;
# 225
jb_err server_content_md5(struct client_state *csp , char **header ) ;
# 226
jb_err server_content_encoding(struct client_state *csp , char **header ) ;
# 227
jb_err server_transfer_coding(struct client_state *csp , char **header ) ;
# 228
jb_err server_http(struct client_state *csp , char **header ) ;
# 231
int strclean(char const   *string , char const   *substring ) ;
# 235
extern char const   parsers_rcs[56] ;
# 236
char const   parsers_h_rcs[56] ;
# 228 "cgisimple.c"
__asm__("booo - error in global cgisimple_h_rcs (cgisimple.c:228)");
# 231
static char *show_rcs(void) ;
# 232
static jb_err show_defines(struct map *exports ) ;
# 254
jb_err cgi_default(struct client_state *csp , struct http_response *rsp ,
                   struct map  const  *parameters ) 
{ struct map *exports ;
  jb_err tmp ;

  {
# 260
  if (! csp) {
    {
# 260
    __assert_fail((char const   *)"csp", (char const   *)"cgisimple.c", 260U,
                  (char const   *)"cgi_default");
    }
  }
# 261
  if (! rsp) {
    {
# 261
    __assert_fail((char const   *)"rsp", (char const   *)"cgisimple.c", 261U,
                  (char const   *)"cgi_default");
    }
  }
  {
# 263
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)"");
  }
# 263
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
# 265
    return (1);
  }
  {
# 268
  tmp = template_fill_for_cgi(csp, (char const   *)"default", exports, rsp);
  }
# 268
  return (tmp);
}
}
# 290
jb_err cgi_error_404(struct client_state *csp , struct http_response *rsp ,
                     struct map  const  *parameters ) 
{ struct map *exports ;
  jb_err tmp ;

  {
# 296
  if (! csp) {
    {
# 296
    __assert_fail((char const   *)"csp", (char const   *)"cgisimple.c", 296U,
                  (char const   *)"cgi_error_404");
    }
  }
# 297
  if (! rsp) {
    {
# 297
    __assert_fail((char const   *)"rsp", (char const   *)"cgisimple.c", 297U,
                  (char const   *)"cgi_error_404");
    }
  }
# 298
  if (! parameters) {
    {
# 298
    __assert_fail((char const   *)"parameters", (char const   *)"cgisimple.c",
                  298U, (char const   *)"cgi_error_404");
    }
  }
  {
# 300
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)((void *)0));
  }
# 300
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
# 302
    return (1);
  }
  {
# 305
  rsp->status = strdup((char const   *)"404 Privoxy configuration page not found");
  }
# 306
  if ((unsigned int )rsp->status == (unsigned int )((void *)0)) {
    {
# 308
    free_map(exports);
    }
# 309
    return (1);
  }
  {
# 312
  tmp = template_fill_for_cgi(csp, (char const   *)"cgi-error-404", exports, rsp);
  }
# 312
  return (tmp);
}
}
# 376
jb_err cgi_show_request(struct client_state *csp , struct http_response *rsp ,
                        struct map  const  *parameters ) 
{ char *p ;
  struct map *exports ;
  char const   *tmp ;
  jb_err tmp___0 ;
  char *tmp___1 ;
  char const   *tmp___2 ;
  jb_err tmp___3 ;
  jb_err tmp___4 ;

  {
# 383
  if (! csp) {
    {
# 383
    __assert_fail((char const   *)"csp", (char const   *)"cgisimple.c", 383U,
                  (char const   *)"cgi_show_request");
    }
  }
# 384
  if (! rsp) {
    {
# 384
    __assert_fail((char const   *)"rsp", (char const   *)"cgisimple.c", 384U,
                  (char const   *)"cgi_show_request");
    }
  }
# 385
  if (! parameters) {
    {
# 385
    __assert_fail((char const   *)"parameters", (char const   *)"cgisimple.c",
                  385U, (char const   *)"cgi_show_request");
    }
  }
  {
# 387
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)"show-request");
  }
# 387
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
# 389
    return (1);
  }
  {
# 395
  p = csp->iob[0].buf;
  }
# 395
  while ((unsigned int )p < (unsigned int )csp->iob[0].eod) {
# 397
    if ((int )(*p) == 0) {
      {
# 397
      (*p) = '\n';
      }
    }
    {
# 395
    p ++;
    }
  }
  {
# 405
  tmp = (char const   *)html_encode((char const   *)csp->iob[0].buf);
# 405
  tmp___0 = map(exports, (char const   *)"client-request", 1, tmp, 0);
  }
# 405
  if (tmp___0) {
    {
# 407
    free_map(exports);
    }
# 408
    return (1);
  }
  {
# 411
  tmp___1 = sed(client_patterns, add_client_headers, csp);
# 411
  tmp___2 = (char const   *)html_encode_and_free_original(tmp___1);
# 411
  tmp___3 = map(exports, (char const   *)"processed-request", 1, tmp___2, 0);
  }
# 411
  if (tmp___3) {
    {
# 414
    free_map(exports);
    }
# 415
    return (1);
  }
  {
# 418
  tmp___4 = template_fill_for_cgi(csp, (char const   *)"show-request", exports,
                                  rsp);
  }
# 418
  return (tmp___4);
}
}
# 464
static char const   prefix1[44]   = 
# 464
  {'h', 't', 't', 'p', ':', '/', '/', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'p',
   'r', 'i', 'v', 'o', 'x', 'y', '.', 'o', 'r', 'g', '/', 's', 'e', 'n', 'd',
   '-', 'b', 'a', 'n', 'n', 'e', 'r', '?', 't', 'y', 'p', 'e', '=', '\0'};
# 465
static char const   prefix2[29]   = 
# 465
  {'h', 't', 't', 'p', ':', '/', '/', 'p', '.', 'p', '/', 's', 'e', 'n', 'd',
   '-', 'b', 'a', 'n', 'n', 'e', 'r', '?', 't', 'y', 'p', 'e', '=', '\0'};
# 444
jb_err cgi_send_banner(struct client_state *csp , struct http_response *rsp ,
                       struct map  const  *parameters ) 
{ char imagetype ;
  char const   *tmp ;
  char const   *p ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  jb_err tmp___4 ;
  jb_err tmp___5 ;

  {
  {
# 448
  tmp = lookup(parameters, (char const   *)"type");
# 448
  imagetype = (*(tmp + 0));
  }
# 454
  if ((int )imagetype == 97) {
    {
# 459
    imagetype = 'p';
    }
# 462
    if ((csp->action[0].flags & 512UL) != 0UL) {
      {
# 466
      p = (char const   *)csp->action[0].string[2];
      }
# 468
      if (! ((unsigned int )p == (unsigned int )((void *)0))) {
        {
# 472
        tmp___3 = strcmpic(p, (char const   *)"blank");
        }
# 472
        if (0 == tmp___3) {
          {
# 474
          imagetype = 'b';
          }
        } else {
          {
# 476
          tmp___2 = strcmpic(p, (char const   *)"pattern");
          }
# 476
          if (0 == tmp___2) {
            {
# 478
            imagetype = 'p';
            }
          } else {
            {
# 485
            tmp___1 = strncmpic(p, prefix1, sizeof(prefix1) - 1U);
            }
# 485
            if (0 == tmp___1) {
              {
# 487
              imagetype = (*(p + (sizeof(prefix1) - 1U)));
              }
            } else {
              {
# 489
              tmp___0 = strncmpic(p, prefix2, sizeof(prefix2) - 1U);
              }
# 489
              if (0 == tmp___0) {
                {
# 491
                imagetype = (*(p + (sizeof(prefix2) - 1U)));
                }
              } else {
                {
# 500
                imagetype = 'r';
                }
              }
            }
          }
        }
      }
    }
  }
# 512
  if ((int )imagetype == 114) {
    {
# 514
    rsp->status = strdup((char const   *)"302 Local Redirect from Privoxy");
    }
# 515
    if ((unsigned int )rsp->status == (unsigned int )((void *)0)) {
# 517
      return (1);
    }
    {
# 519
    tmp___4 = enlist_unique_header(rsp->headers, (char const   *)"Location",
                                   (char const   *)csp->action[0].string[2]);
    }
# 519
    if (tmp___4) {
# 522
      return (1);
    }
  } else {
# 527
    if ((int )imagetype == 98) {
      {
# 529
      rsp->body = bindup(image_blank_data, image_blank_length);
# 530
      rsp->content_length = image_blank_length;
      }
    } else {
# 527
      if ((int )imagetype == 116) {
        {
# 529
        rsp->body = bindup(image_blank_data, image_blank_length);
# 530
        rsp->content_length = image_blank_length;
        }
      } else {
        {
# 534
        rsp->body = bindup(image_pattern_data, image_pattern_length);
# 535
        rsp->content_length = image_pattern_length;
        }
      }
    }
# 538
    if ((unsigned int )rsp->body == (unsigned int )((void *)0)) {
# 540
      return (1);
    }
    {
# 542
    tmp___5 = enlist(rsp->headers, (char const   *)"Content-Type: image/gif");
    }
# 542
    if (tmp___5) {
# 544
      return (1);
    }
    {
# 547
    rsp->is_static = 1;
    }
  }
# 550
  return (0);
}
}
# 572
jb_err cgi_transparent_image(struct client_state *csp ,
                             struct http_response *rsp ,
                             struct map  const  *parameters ) 
{ jb_err tmp ;

  {
  {
# 576
  rsp->body = bindup(image_blank_data, image_blank_length);
# 577
  rsp->content_length = image_blank_length;
  }
# 579
  if ((unsigned int )rsp->body == (unsigned int )((void *)0)) {
# 581
    return (1);
  }
  {
# 584
  tmp = enlist(rsp->headers, (char const   *)"Content-Type: image/gif");
  }
# 584
  if (tmp) {
# 586
    return (1);
  }
  {
# 589
  rsp->is_static = 1;
  }
# 591
  return (0);
}
}
# 614
jb_err cgi_send_stylesheet(struct client_state *csp ,
                           struct http_response *rsp ,
                           struct map  const  *parameters ) 
{ jb_err err ;
  jb_err tmp ;

  {
# 620
  if (! csp) {
    {
# 620
    __assert_fail((char const   *)"csp", (char const   *)"cgisimple.c", 620U,
                  (char const   *)"cgi_send_stylesheet");
    }
  }
# 621
  if (! rsp) {
    {
# 621
    __assert_fail((char const   *)"rsp", (char const   *)"cgisimple.c", 621U,
                  (char const   *)"cgi_send_stylesheet");
    }
  }
  {
# 623
  err = template_load(csp, & rsp->body, (char const   *)"cgi-style.css", 0);
  }
# 625
  if (err == 3) {
    {
# 630
    log_error(8192, "Could not find cgi-style.css template");
    }
  } else {
# 632
    if (err) {
# 634
      return (err);
    }
  }
  {
# 637
  tmp = enlist(rsp->headers, (char const   *)"Content-Type: text/css");
  }
# 637
  if (tmp) {
# 639
    return (1);
  }
# 642
  return (0);
}
}
# 665
jb_err cgi_show_version(struct client_state *csp , struct http_response *rsp ,
                        struct map  const  *parameters ) 
{ struct map *exports ;
  char const   *tmp ;
  jb_err tmp___0 ;
  jb_err tmp___1 ;

  {
# 671
  if (! csp) {
    {
# 671
    __assert_fail((char const   *)"csp", (char const   *)"cgisimple.c", 671U,
                  (char const   *)"cgi_show_version");
    }
  }
# 672
  if (! rsp) {
    {
# 672
    __assert_fail((char const   *)"rsp", (char const   *)"cgisimple.c", 672U,
                  (char const   *)"cgi_show_version");
    }
  }
# 673
  if (! parameters) {
    {
# 673
    __assert_fail((char const   *)"parameters", (char const   *)"cgisimple.c",
                  673U, (char const   *)"cgi_show_version");
    }
  }
  {
# 675
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)"show-version");
  }
# 675
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
# 677
    return (1);
  }
  {
# 680
  tmp = (char const   *)show_rcs();
# 680
  tmp___0 = map(exports, (char const   *)"sourceversions", 1, tmp, 0);
  }
# 680
  if (tmp___0) {
    {
# 682
    free_map(exports);
    }
# 683
    return (1);
  }
  {
# 686
  tmp___1 = template_fill_for_cgi(csp, (char const   *)"show-version", exports,
                                  rsp);
  }
# 686
  return (tmp___1);
}
}
# 714
jb_err cgi_show_status(struct client_state *csp , struct http_response *rsp ,
                       struct map  const  *parameters ) 
{ char *s ;
  unsigned int i ;
  int j ;
  FILE *fp ;
  char buf[5000] ;
  char const   *filename ;
  char *file_description ;
  float perc_rej ;
  int local_urls_read ;
  int local_urls_rejected ;
  struct file_list *fl ;
  struct url_actions *b ;
  jb_err err ;
  struct map *exports ;
  char const   *tmp ;
  jb_err tmp___0 ;
  jb_err tmp___1 ;
  char const   *tmp___2 ;
  jb_err tmp___3 ;
  jb_err tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  jb_err tmp___7 ;
  jb_err tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char * __attribute__((__rostring__, __nullterm__)) tmp___11 ;
  char const   *tmp___12 ;
  char const   *tmp___13 ;
  jb_err tmp___14 ;

  {
  {
# 718
  s = (char *)((void *)0);
# 724
  filename = (char const   *)((void *)0);
# 725
  file_description = (char *)((void *)0);
# 733
  err = 0;
  }
# 737
  if (! csp) {
    {
# 737
    __assert_fail((char const   *)"csp", (char const   *)"cgisimple.c", 737U,
                  (char const   *)"cgi_show_status");
    }
  }
# 738
  if (! rsp) {
    {
# 738
    __assert_fail((char const   *)"rsp", (char const   *)"cgisimple.c", 738U,
                  (char const   *)"cgi_show_status");
    }
  }
# 739
  if (! parameters) {
    {
# 739
    __assert_fail((char const   *)"parameters", (char const   *)"cgisimple.c",
                  739U, (char const   *)"cgi_show_status");
    }
  }
  {
# 741
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)"show-status");
  }
# 741
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
# 743
    return (1);
  }
  {
# 746
  tmp = lookup(parameters, (char const   *)"file");
  }
# 746
  switch ((int )(*tmp)) {
  case 97: 
  {
# 749
  tmp___0 = get_number_param(csp, parameters, "index", & i);
  }
# 749
  if (! tmp___0) {
# 749
    if (i < 10U) {
# 749
      if (csp->actions_list[i]) {
        {
# 751
        filename = (char const   *)(csp->actions_list[i])->filename;
# 752
        file_description = "Actions File";
        }
      }
    }
  }
# 754
  break;
  case 102: 
  {

  }
# 757
  if (csp->rlist) {
    {
# 759
    filename = (char const   *)(csp->rlist)->filename;
# 760
    file_description = "Filter File";
    }
  }
# 762
  break;
  case 116: 
  {

  }
# 766
  if (csp->tlist) {
    {
# 768
    filename = (char const   *)(csp->tlist)->filename;
# 769
    file_description = "Trust File";
    }
  }
# 771
  break;
  }
# 775
  if ((unsigned int )((void *)0) != (unsigned int )filename) {
    {
# 777
    tmp___1 = map(exports, (char const   *)"file-description", 1,
                  (char const   *)file_description, 1);
    }
# 777
    if (tmp___1) {
      {
# 780
      free_map(exports);
      }
# 781
      return (1);
    } else {
      {
# 777
      tmp___2 = (char const   *)html_encode(filename);
# 777
      tmp___3 = map(exports, (char const   *)"filepath", 1, tmp___2, 0);
      }
# 777
      if (tmp___3) {
        {
# 780
        free_map(exports);
        }
# 781
        return (1);
      }
    }
    {
# 784
    fp = fopen((char const   */* __restrict  */)filename,
               (char const   */* __restrict  */)((char const   *)"r"));
    {
# 17 "spec.work"
      fp->__BLAST_FLAG = 1;
    {

    }
    }

    }
# 784 "cgisimple.c"
    if ((unsigned int )fp == (unsigned int )((void *)0)) {
      {
# 786
      tmp___4 = map(exports, (char const   *)"content", 1,
                    (char const   *)"<h1>ERROR OPENING FILE!</h1>", 1);
      }
# 786
      if (tmp___4) {
        {
# 788
        free_map(exports);
        }
# 789
        return (1);
      }
    } else {
      {
# 794
      s = strdup((char const   *)"");
      }
# 795
      while (1) {
# 795
        if ((unsigned int )s != (unsigned int )((void *)0)) {
          {

          {
# 32 "spec.work"
          if (! (fp->__BLAST_FLAG == 1)) {
# 34
            __error__();
          }
          {

          }
          }
# 795 "cgisimple.c"
          tmp___6 = fgets((char */* __restrict  */)(buf), (int )sizeof(buf),
                          (FILE */* __restrict  */)fp);
          }
# 795
          if (! tmp___6) {
# 795
            break;
          }
        } else {
# 795
          break;
        }
        {
# 797
        tmp___5 = html_encode((char const   *)(buf));
# 797
        string_join(& s, tmp___5);
        }
      }
      {

      {
# 96 "spec.work"
      if (fp->__BLAST_FLAG == 1) {
# 97
        fp->__BLAST_FLAG = 0;
      } else {
# 98
        __error__();
      }
      {

      }
      }
# 799 "cgisimple.c"
      fclose(fp);
# 801
      tmp___7 = map(exports, (char const   *)"contents", 1, (char const   *)s, 0);
      }
# 801
      if (tmp___7) {
        {
# 803
        free_map(exports);
        }
# 804
        return (1);
      }
    }
    {
# 808
    tmp___8 = template_fill_for_cgi(csp, (char const   *)"show-status-file",
                                    exports, rsp);
    }
# 808
    return (tmp___8);
  }
  {
# 811
  s = strdup((char const   *)"");
# 812
  j = 0;
  }
# 812
  while (1) {
# 812
    if ((unsigned int )s != (unsigned int )((void *)0)) {
# 812
      if (! (j < Argc)) {
# 812
        break;
      }
    } else {
# 812
      break;
    }
# 814
    if (! err) {
      {
# 814
      tmp___9 = html_encode((*(Argv + j)));
# 814
      err = string_join(& s, tmp___9);
      }
    }
# 815
    if (! err) {
      {
# 815
      err = string_append(& s, (char const   *)" ");
      }
    }
    {
# 812
    j ++;
    }
  }
# 817
  if (! err) {
    {
# 817
    err = map(exports, (char const   *)"invocation", 1, (char const   *)s, 0);
    }
  }
# 819
  if (! err) {
    {
# 819
    err = map(exports, (char const   *)"options", 1,
              (char const   *)(csp->config)->proxy_args, 1);
    }
  }
# 820
  if (! err) {
    {
# 820
    err = show_defines(exports);
    }
  }
# 822
  if (err) {
    {
# 824
    free_map(exports);
    }
# 825
    return (1);
  }
  {
# 829
  local_urls_read = urls_read;
# 830
  local_urls_rejected = urls_rejected;
  }
# 842
  if (local_urls_read == 0) {
# 844
    if (! err) {
      {
# 844
      err = map_block_killer(exports, (char const   *)"have-stats");
      }
    }
  } else {
# 848
    if (! err) {
      {
# 848
      err = map_block_killer(exports, (char const   *)"have-no-stats");
      }
    }
    {
# 850
    perc_rej = ((float )local_urls_rejected * 100.0F) / (float )local_urls_read;
# 853
    sprintf((char */* __restrict  */)(buf),
            (char const   */* __restrict  */)((char const   *)"%d"),
            local_urls_read);
    }
# 854
    if (! err) {
      {
# 854
      err = map(exports, (char const   *)"requests-received", 1,
                (char const   *)(buf), 1);
      }
    }
    {
# 856
    sprintf((char */* __restrict  */)(buf),
            (char const   */* __restrict  */)((char const   *)"%d"),
            local_urls_rejected);
    }
# 857
    if (! err) {
      {
# 857
      err = map(exports, (char const   *)"requests-blocked", 1,
                (char const   *)(buf), 1);
      }
    }
    {
# 859
    sprintf((char */* __restrict  */)(buf),
            (char const   */* __restrict  */)((char const   *)"%6.2f"), perc_rej);
    }
# 860
    if (! err) {
      {
# 860
      err = map(exports, (char const   *)"percent-blocked", 1,
                (char const   *)(buf), 1);
      }
    }
  }
  {
# 873
  s = strdup((char const   *)"");
# 874
  i = 0U;
  }
# 874
  while (i < 10U) {
    {
# 876
    fl = csp->actions_list[i];
    }
# 876
    if ((unsigned int )fl != (unsigned int )((void *)0)) {
      {
# 876
      b = (struct url_actions *)fl->f;
      }
# 876
      if ((unsigned int )b != (unsigned int )((void *)0)) {
# 878
        if (! err) {
          {
# 878
          err = string_append(& s, (char const   *)"<tr><td>");
          }
        }
# 879
        if (! err) {
          {
# 879
          tmp___10 = html_encode((char const   *)(csp->actions_list[i])->filename);
# 879
          err = string_join(& s, tmp___10);
          }
        }
        {
# 880
        snprintf((char */* __restrict  */)(buf), 100U,
                 (char const   */* __restrict  */)((char const   *)"</td><td class=\"buttons\"><a href=\"/show-status?file=actions&index=%d\">View</a>"),
                 i);
        }
# 881
        if (! err) {
          {
# 881
          err = string_append(& s, (char const   *)(buf));
          }
        }
        {
# 884
        tmp___11 = strstr((char const   */* __attribute__((__rostring__,
                          __nullterm__)) */)((char const   *)(csp->actions_list[i])->filename),
                          (char const   */* __attribute__((__rostring__,
                          __nullterm__)) */)((char const   *)"standard.action"));
        }
# 884
        if ((unsigned int )((void *)0) == (unsigned int )tmp___11) {
# 884
          if ((unsigned int )((void *)0) !=
              (unsigned int )(csp->config)->actions_file_short[i]) {
            {
# 886
            snprintf((char */* __restrict  */)(buf), 100U,
                     (char const   */* __restrict  */)((char const   *)"&nbsp;&nbsp;<a href=\"/edit-actions-list?f=%s\">Edit</a>"),
                     (csp->config)->actions_file_short[i]);
            }
# 887
            if (! err) {
              {
# 887
              err = string_append(& s, (char const   *)(buf));
              }
            }
          }
        }
# 891
        if (! err) {
          {
# 891
          err = string_append(& s, (char const   *)"</td></tr>\n");
          }
        }
      }
    }
    {
# 874
    i ++;
    }
  }
# 894
  if ((int )(*s) != 0) {
# 896
    if (! err) {
      {
# 896
      err = map(exports, (char const   *)"actions-filenames", 1,
                (char const   *)s, 0);
      }
    }
  } else {
# 900
    if (! err) {
      {
# 900
      err = map(exports, (char const   *)"actions-filenames", 1,
                (char const   *)"<tr><td>None specified</td></tr>", 1);
      }
    }
  }
# 903
  if (csp->rlist) {
# 905
    if (! err) {
      {
# 905
      tmp___12 = (char const   *)html_encode((char const   *)(csp->rlist)->filename);
# 905
      err = map(exports, (char const   *)"re-filter-filename", 1, tmp___12, 0);
      }
    }
  } else {
# 909
    if (! err) {
      {
# 909
      err = map(exports, (char const   *)"re-filter-filename", 1,
                (char const   *)"None specified", 1);
      }
    }
# 910
    if (! err) {
      {
# 910
      err = map_block_killer(exports, (char const   *)"have-filterfile");
      }
    }
  }
# 914
  if (csp->tlist) {
# 916
    if (! err) {
      {
# 916
      tmp___13 = (char const   *)html_encode((char const   *)(csp->tlist)->filename);
# 916
      err = map(exports, (char const   *)"trust-filename", 1, tmp___13, 0);
      }
    }
  } else {
# 920
    if (! err) {
      {
# 920
      err = map(exports, (char const   *)"trust-filename", 1,
                (char const   *)"None specified", 1);
      }
    }
# 921
    if (! err) {
      {
# 921
      err = map_block_killer(exports, (char const   *)"have-trustfile");
      }
    }
  }
# 927
  if (err) {
    {
# 929
    free_map(exports);
    }
# 930
    return (1);
  }
  {
# 933
  tmp___14 = template_fill_for_cgi(csp, (char const   *)"show-status", exports,
                                   rsp);
  }
# 933
  return (tmp___14);
}
}
# 960
jb_err cgi_show_url_info(struct client_state *csp , struct http_response *rsp ,
                         struct map  const  *parameters ) 
{ char *url_param ;
  struct map *exports ;
  char buf[150] ;
  char const   *tmp ;
  char *url_param_prefixed ;
  size_t tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  jb_err tmp___4 ;
  jb_err tmp___5 ;
  jb_err err ;
  char *matches ;
  char *s ;
  int hits ;
  struct file_list *fl ;
  struct url_actions *b ;
  struct http_request url_to_query[1] ;
  struct current_action_spec action[1] ;
  int i ;
  char const   *tmp___6 ;
  jb_err tmp___7 ;
  char const   *tmp___8 ;
  jb_err tmp___9 ;
  char const   *tmp___10 ;
  jb_err tmp___11 ;
  jb_err tmp___12 ;
  int tmp___13 ;
  char *tmp___14 ;
  char *tmp___15 ;
  char *tmp___16 ;
  char *tmp___17 ;
  jb_err tmp___18 ;
  int tmp___19 ;
  jb_err tmp___20 ;
  jb_err tmp___21 ;
  jb_err tmp___22 ;

  {
# 968
  if (! csp) {
    {
# 968
    __assert_fail((char const   *)"csp", (char const   *)"cgisimple.c", 968U,
                  (char const   *)"cgi_show_url_info");
    }
  }
# 969
  if (! rsp) {
    {
# 969
    __assert_fail((char const   *)"rsp", (char const   *)"cgisimple.c", 969U,
                  (char const   *)"cgi_show_url_info");
    }
  }
# 970
  if (! parameters) {
    {
# 970
    __assert_fail((char const   *)"parameters", (char const   *)"cgisimple.c",
                  970U, (char const   *)"cgi_show_url_info");
    }
  }
  {
# 972
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)"show-url-info");
  }
# 972
  if ((unsigned int )((void *)0) == (unsigned int )exports) {
# 974
    return (1);
  }
  {
# 980
  tmp = lookup(parameters, (char const   *)"url");
# 980
  url_param = strdup(tmp);
  }
# 981
  if ((unsigned int )url_param == (unsigned int )((void *)0)) {
    {
# 983
    free_map(exports);
    }
# 984
    return (1);
  }
  {
# 986
  chomp(url_param);
# 998
  tmp___3 = strncmp((char const   *)url_param, (char const   *)"http://", 7U);
  }
# 998
  if (0 == tmp___3) {
# 1000
    if ((int )(*(url_param + 7)) == 0) {
      {
# 1006
      (*(url_param + 0)) = '\0';
      }
    }
  } else {
    {
# 1009
    tmp___2 = strncmp((char const   *)url_param, (char const   *)"https://", 8U);
    }
# 1009
    if (0 == tmp___2) {
# 1011
      if ((int )(*(url_param + 8)) == 0) {
        {
# 1017
        (*(url_param + 0)) = '\0';
        }
      }
    } else {
# 1020
      if ((int )(*(url_param + 0)) != 0) {
        {
# 1025
        tmp___0 = strlen((char const   *)url_param);
# 1025
        tmp___1 = (char *)malloc(8U + tmp___0);
# 1025
        url_param_prefixed = tmp___1;
        }
# 1026
        if ((unsigned int )((void *)0) == (unsigned int )url_param_prefixed) {
          {
# 1028
          free((void *)url_param);
# 1029
          free_map(exports);
          }
# 1030
          return (1);
        }
        {
# 1032
        strcpy((char */* __restrict  */)url_param_prefixed,
               (char const   */* __restrict  */)((char const   *)"http://"));
# 1033
        strcpy((char */* __restrict  */)(url_param_prefixed + 7),
               (char const   */* __restrict  */)((char const   *)url_param));
# 1034
        free((void *)url_param);
# 1035
        url_param = url_param_prefixed;
        }
      }
    }
  }
# 1039
  if ((int )(*(url_param + 0)) == 0) {
    {
# 1042
    free((void *)url_param);
# 1043
    tmp___4 = map_block_killer(exports, (char const   *)"url-given");
    }
# 1043
    if (tmp___4) {
      {
# 1046
      free_map(exports);
      }
# 1047
      return (1);
    } else {
      {
# 1043
      tmp___5 = map(exports, (char const   *)"url", 1, (char const   *)"", 1);
      }
# 1043
      if (tmp___5) {
        {
# 1046
        free_map(exports);
        }
# 1047
        return (1);
      }
    }
  } else {
    {
# 1056
    hits = 0;
# 1063
    tmp___6 = (char const   *)html_encode((char const   *)url_param);
# 1063
    tmp___7 = map(exports, (char const   *)"url", 1, tmp___6, 0);
    }
# 1063
    if (tmp___7) {
      {
# 1065
      free((void *)url_param);
# 1066
      free_map(exports);
      }
# 1067
      return (1);
    }
    {
# 1070
    init_current_action(action);
# 1072
    tmp___8 = (char const   *)current_action_to_html(csp, action);
# 1072
    tmp___9 = map(exports, (char const   *)"default", 1, tmp___8, 0);
    }
# 1072
    if (tmp___9) {
      {
# 1074
      free_current_action(action);
# 1075
      free((void *)url_param);
# 1076
      free_map(exports);
      }
# 1077
      return (1);
    }
    {
# 1080
    err = parse_http_url((char const   *)url_param, url_to_query, csp);
# 1082
    free((void *)url_param);
    }
# 1084
    if (err == 1) {
      {
# 1086
      free_http_request(url_to_query);
# 1087
      free_current_action(action);
# 1088
      free_map(exports);
      }
# 1089
      return (1);
    } else {
# 1091
      if (err) {
        {
# 1095
        err = map(exports, (char const   *)"matches", 1,
                  (char const   *)"<b>[Invalid URL specified!]</b>", 1);
        }
# 1096
        if (! err) {
          {
# 1096
          tmp___10 = lookup((struct map  const  *)exports,
                            (char const   *)"default");
# 1096
          err = map(exports, (char const   *)"final", 1, tmp___10, 1);
          }
        }
        {
# 1098
        free_current_action(action);
# 1099
        free_http_request(url_to_query);
        }
# 1101
        if (err) {
          {
# 1103
          free_map(exports);
          }
# 1104
          return (1);
        }
        {
# 1107
        tmp___11 = template_fill_for_cgi(csp, (char const   *)"show-url-info",
                                         exports, rsp);
        }
# 1107
        return (tmp___11);
      }
    }
# 1113
    if (! url_to_query[0].ssl) {
      {
# 1115
      tmp___12 = map_block_killer(exports, (char const   *)"https");
      }
# 1115
      if (tmp___12) {
        {
# 1117
        free_current_action(action);
# 1118
        free_map(exports);
# 1119
        free_http_request(url_to_query);
        }
# 1120
        return (1);
      }
    }
    {
# 1124
    matches = strdup((char const   *)"<table class=\"transparent\">");
# 1126
    i = 0;
    }
# 1126
    while (i < 10) {
# 1128
      if ((unsigned int )((void *)0) ==
          (unsigned int )(csp->config)->actions_file_short[i]) {
        goto __Cont;
      } else {
        {
# 1128
        tmp___13 = strcmp((csp->config)->actions_file_short[i],
                          (char const   *)"standard");
        }
# 1128
        if (! tmp___13) {
          goto __Cont;
        }
      }
      {
# 1131
      b = (struct url_actions *)((void *)0);
# 1132
      hits = 1;
# 1133
      fl = csp->actions_list[i];
      }
# 1133
      if ((unsigned int )fl != (unsigned int )((void *)0)) {
        {
# 1135
        b = (struct url_actions *)fl->f;
        }
# 1135
        if ((unsigned int )b != (unsigned int )((void *)0)) {
          {
# 1138
          string_append(& matches, (char const   *)"<tr><th>In file: ");
# 1139
          tmp___14 = html_encode((csp->config)->actions_file_short[i]);
# 1139
          string_join(& matches, tmp___14);
# 1140
          snprintf((char */* __restrict  */)(buf), 150U,
                   (char const   */* __restrict  */)((char const   *)".action <a class=\"cmd\" href=\"/show-status?file=actions&index=%d\">"),
                   i);
# 1141
          string_append(& matches, (char const   *)(buf));
# 1142
          string_append(& matches,
                        (char const   *)"View</a> <a class=\"cmd\" href=\"/edit-actions-list?f=");
# 1143
          tmp___15 = html_encode((csp->config)->actions_file_short[i]);
# 1143
          string_join(& matches, tmp___15);
# 1144
          string_append(& matches, (char const   *)"\">Edit</a></th></tr>\n");
# 1146
          hits = 0;
# 1147
          b = b->next;
          }
        }
      }
# 1151
      while (1) {
# 1151
        if ((unsigned int )b != (unsigned int )((void *)0)) {
# 1151
          if (! ((unsigned int )matches != (unsigned int )((void *)0))) {
# 1151
            break;
          }
        } else {
# 1151
          break;
        }
        {
# 1153
        tmp___19 = url_match((struct url_spec  const  *)(b->url),
                             (struct http_request  const  *)(url_to_query));
        }
# 1153
        if (tmp___19) {
          {
# 1155
          string_append(& matches, (char const   *)"<tr><td>{");
# 1156
          tmp___16 = actions_to_html(csp, b->action);
# 1156
          string_join(& matches, tmp___16);
# 1157
          string_append(& matches, (char const   *)" }</b><br>\n<code>");
# 1158
          tmp___17 = html_encode((char const   *)b->url[0].spec);
# 1158
          string_join(& matches, tmp___17);
# 1159
          string_append(& matches, (char const   *)"</code></td></tr>\n");
# 1161
          tmp___18 = merge_current_action(action,
                                          (struct action_spec  const  *)(b->action));
          }
# 1161
          if (tmp___18) {
# 1163
            if (matches) {
              {
# 1163
              free((void *)matches);
# 1163
              matches = (char *)((void *)0);
              }
            }
            {
# 1164
            free_http_request(url_to_query);
# 1165
            free_current_action(action);
# 1166
            free_map(exports);
            }
# 1167
            return (1);
          }
          {
# 1169
          hits ++;
          }
        }
        {
# 1151
        b = b->next;
        }
      }
# 1173
      if (! hits) {
        {
# 1175
        string_append(& matches,
                      (char const   *)"<tr><td>(no matches in this file)</td></tr>\n");
        }
      }
      __Cont: 
      {
# 1126
      i ++;
      }
    }
    {
# 1178
    string_append(& matches, (char const   *)"</table>\n");
# 1180
    free_http_request(url_to_query);
    }
# 1182
    if ((unsigned int )matches == (unsigned int )((void *)0)) {
      {
# 1184
      free_current_action(action);
# 1185
      free_map(exports);
      }
# 1186
      return (1);
    }
    {
# 1189
    tmp___20 = map(exports, (char const   *)"matches", 1,
                   (char const   *)matches, 0);
    }
# 1189
    if (tmp___20) {
      {
# 1191
      free_current_action(action);
# 1192
      free_map(exports);
      }
# 1193
      return (1);
    }
    {
# 1196
    s = current_action_to_html(csp, action);
# 1198
    free_current_action(action);
# 1200
    tmp___21 = map(exports, (char const   *)"final", 1, (char const   *)s, 0);
    }
# 1200
    if (tmp___21) {
      {
# 1202
      free_map(exports);
      }
# 1203
      return (1);
    }
  }
  {
# 1207
  tmp___22 = template_fill_for_cgi(csp, (char const   *)"show-url-info",
                                   exports, rsp);
  }
# 1207
  return (tmp___22);
}
}
# 1228
jb_err cgi_robots_txt(struct client_state *csp , struct http_response *rsp ,
                      struct map  const  *parameters ) 
{ char buf[100] ;
  jb_err err ;
  int tmp ;

  {
  {
# 1235
  rsp->body = strdup((char const   *)"# This is the Privoxy control interface.\n# It isn\'t very useful to index it, and you\'re likely to break stuff.\n# So go away!\n\nUser-agent: *\nDisallow: /\n\n");
  }
# 1243
  if ((unsigned int )rsp->body == (unsigned int )((void *)0)) {
# 1245
    return (1);
  }
  {
# 1248
  err = enlist_unique(rsp->headers, (char const   *)"Content-Type: text/plain",
                      13U);
# 1250
  rsp->is_static = 1;
# 1252
  get_http_time(604800, buf);
  }
# 1253
  if (! err) {
    {
# 1253
    err = enlist_unique_header(rsp->headers, (char const   *)"Expires",
                               (char const   *)(buf));
    }
  }
# 1255
  if (err) {
    {
# 1255
    tmp = 1;
    }
  } else {
    {
# 1255
    tmp = 0;
    }
  }
# 1255
  return (tmp);
}
}
# 1273
static jb_err show_defines(struct map *exports ) 
{ jb_err err ;

  {
  {
# 1275
  err = 0;
  }
# 1278
  if (! err) {
    {
# 1278
    err = map_conditional(exports, (char const   *)"FEATURE_ACL", 1);
    }
  }
# 1284
  if (! err) {
    {
# 1284
    err = map_conditional(exports, (char const   *)"FEATURE_CGI_EDIT_ACTIONS", 1);
    }
  }
# 1290
  if (! err) {
    {
# 1290
    err = map_conditional(exports, (char const   *)"FEATURE_COOKIE_JAR", 1);
    }
  }
# 1296
  if (! err) {
    {
# 1296
    err = map_conditional(exports, (char const   *)"FEATURE_FAST_REDIRECTS", 1);
    }
  }
# 1302
  if (! err) {
    {
# 1302
    err = map_conditional(exports, (char const   *)"FEATURE_FORCE_LOAD", 1);
    }
  }
# 1303
  if (! err) {
    {
# 1303
    err = map(exports, (char const   *)"FORCE_PREFIX", 1,
              (char const   *)"/PRIVOXY-FORCE", 1);
    }
  }
# 1310
  if (! err) {
    {
# 1310
    err = map_conditional(exports, (char const   *)"FEATURE_IMAGE_BLOCKING", 1);
    }
  }
# 1318
  if (! err) {
    {
# 1318
    err = map_conditional(exports, (char const   *)"FEATURE_IMAGE_DETECT_MSIE",
                          0);
    }
  }
# 1322
  if (! err) {
    {
# 1322
    err = map_conditional(exports, (char const   *)"FEATURE_KILL_POPUPS", 1);
    }
  }
# 1330
  if (! err) {
    {
# 1330
    err = map_conditional(exports, (char const   *)"FEATURE_NO_GIFS", 0);
    }
  }
# 1334
  if (! err) {
    {
# 1334
    err = map_conditional(exports, (char const   *)"FEATURE_PTHREAD", 1);
    }
  }
# 1340
  if (! err) {
    {
# 1340
    err = map_conditional(exports, (char const   *)"FEATURE_STATISTICS", 1);
    }
  }
# 1346
  if (! err) {
    {
# 1346
    err = map_conditional(exports, (char const   *)"FEATURE_TOGGLE", 1);
    }
  }
# 1352
  if (! err) {
    {
# 1352
    err = map_conditional(exports, (char const   *)"FEATURE_TRUST", 1);
    }
  }
# 1358
  if (! err) {
    {
# 1358
    err = map_conditional(exports, (char const   *)"STATIC_PCRE", 1);
    }
  }
# 1364
  if (! err) {
    {
# 1364
    err = map_conditional(exports, (char const   *)"STATIC_PCRS", 1);
    }
  }
# 1369
  return (err);
}
}
# 1419
char const   deanimate_h_rcs[53] ;
# 1420
extern char const   deanimate_rcs[61] ;
# 1427
char const   gateway_h_rcs[51] ;
# 1428
extern char const   gateway_rcs[59] ;
# 1429
char const   jbsockets_h_rcs[60] ;
# 1430
extern char const   jbsockets_rcs[58] ;
# 1434
char const   killpopup_h_rcs[53] ;
# 1435
extern char const   killpopup_rcs[54] ;
# 1447
char const   pcrs_rcs[53] ;
# 1448
char const   pcrs_h_rcs[49] ;
# 1449
char const   project_h_rcs[56] ;
# 1384
static char *show_rcs(void) 
{ char *result ;
  char *tmp ;
  char buf[5000] ;

  {
  {
# 1386
  tmp = strdup((char const   *)"");
# 1386
  result = tmp;
# 1402
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          actions_h_rcs);
# 1402
  string_append(& result, (char const   *)(buf));
# 1403
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), actions_rcs);
# 1403
  string_append(& result, (char const   *)(buf));
# 1408
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), cgi_h_rcs);
# 1408
  string_append(& result, (char const   *)(buf));
# 1409
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), cgi_rcs);
# 1409
  string_append(& result, (char const   *)(buf));
# 1411
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          cgiedit_h_rcs);
# 1411
  string_append(& result, (char const   *)(buf));
# 1412
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), cgiedit_rcs);
# 1412
  string_append(& result, (char const   *)(buf));
# 1414
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          cgisimple_h_rcs);
# 1414
  string_append(& result, (char const   *)(buf));
# 1415
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          cgisimple_rcs);
# 1415
  string_append(& result, (char const   *)(buf));
# 1419
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          deanimate_h_rcs);
# 1419
  string_append(& result, (char const   *)(buf));
# 1420
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          deanimate_rcs);
# 1420
  string_append(& result, (char const   *)(buf));
# 1421
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          encode_h_rcs);
# 1421
  string_append(& result, (char const   *)(buf));
# 1422
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), encode_rcs);
# 1422
  string_append(& result, (char const   *)(buf));
# 1423
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          errlog_h_rcs);
# 1423
  string_append(& result, (char const   *)(buf));
# 1424
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), errlog_rcs);
# 1424
  string_append(& result, (char const   *)(buf));
# 1425
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          filters_h_rcs);
# 1425
  string_append(& result, (char const   *)(buf));
# 1426
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), filters_rcs);
# 1426
  string_append(& result, (char const   *)(buf));
# 1427
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          gateway_h_rcs);
# 1427
  string_append(& result, (char const   *)(buf));
# 1428
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), gateway_rcs);
# 1428
  string_append(& result, (char const   *)(buf));
# 1429
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          jbsockets_h_rcs);
# 1429
  string_append(& result, (char const   *)(buf));
# 1430
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          jbsockets_rcs);
# 1430
  string_append(& result, (char const   *)(buf));
# 1431
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), jcc_h_rcs);
# 1431
  string_append(& result, (char const   *)(buf));
# 1432
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), jcc_rcs);
# 1432
  string_append(& result, (char const   *)(buf));
# 1434
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          killpopup_h_rcs);
# 1434
  string_append(& result, (char const   *)(buf));
# 1435
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          killpopup_rcs);
# 1435
  string_append(& result, (char const   *)(buf));
# 1437
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), list_h_rcs);
# 1437
  string_append(& result, (char const   *)(buf));
# 1438
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), list_rcs);
# 1438
  string_append(& result, (char const   *)(buf));
# 1439
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          loadcfg_h_rcs);
# 1439
  string_append(& result, (char const   *)(buf));
# 1440
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), loadcfg_rcs);
# 1440
  string_append(& result, (char const   *)(buf));
# 1441
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          loaders_h_rcs);
# 1441
  string_append(& result, (char const   *)(buf));
# 1442
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), loaders_rcs);
# 1442
  string_append(& result, (char const   *)(buf));
# 1443
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          miscutil_h_rcs);
# 1443
  string_append(& result, (char const   *)(buf));
# 1444
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          miscutil_rcs);
# 1444
  string_append(& result, (char const   *)(buf));
# 1445
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          parsers_h_rcs);
# 1445
  string_append(& result, (char const   *)(buf));
# 1446
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), parsers_rcs);
# 1446
  string_append(& result, (char const   *)(buf));
# 1447
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), pcrs_rcs);
# 1447
  string_append(& result, (char const   *)(buf));
# 1448
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), pcrs_h_rcs);
# 1448
  string_append(& result, (char const   *)(buf));
# 1449
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          project_h_rcs);
# 1449
  string_append(& result, (char const   *)(buf));
# 1450
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          ssplit_h_rcs);
# 1450
  string_append(& result, (char const   *)(buf));
# 1451
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"), ssplit_rcs);
# 1451
  string_append(& result, (char const   *)(buf));
# 1452
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          urlmatch_h_rcs);
# 1452
  string_append(& result, (char const   *)(buf));
# 1453
  sprintf((char */* __restrict  */)(buf),
          (char const   */* __restrict  */)((char const   *)"%s\n"),
          urlmatch_rcs);
# 1453
  string_append(& result, (char const   *)(buf));
  }
# 1468
  return (result);
}
}
# 1 "deanimate.c"
__asm__("booo - error in global deanimate_rcs (deanimate.c:1)");
# 60 "/users/rupak/ccured/include/gcc_3.2/fcntl.h"
extern int fcntl(int __fd , int __cmd  , ...) ;
# 74 "/users/rupak/ccured/include/io_wrappers.h"
extern int unlink(char const   *__name ) ;
# 86 "deanimate.h"
int gif_deanimate(struct binbuffer *src , struct binbuffer *dst ,
                  int get_first_image ) ;
# 87
void buf_free(struct binbuffer *buf ) ;
# 90 "deanimate.c"
char const   deanimate_h_rcs[53]   = 
# 90
  {'$', 'I', 'd', ':', ' ', 'd', 'e', 'a', 'n', 'i', 'm', 'a', 't', 'e', '.',
   'h', ',', 'v', ' ', '1', '.', '8', ' ', '2', '0', '0', '2', '/', '0', '3',
   '/', '2', '6', ' ', '2', '2', ':', '2', '9', ':', '5', '4', ' ', 's', 'w',
   'a', ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 104
void buf_free(struct binbuffer *buf ) 
{ 

  {
# 106
  if ((unsigned int )buf == (unsigned int )((void *)0)) {
# 106
    return;
  }
# 108
  if ((unsigned int )buf->buffer != (unsigned int )((void *)0)) {
    {
# 110
    free((void *)buf->buffer);
    }
  }
  {
# 113
  free((void *)buf);
  }
# 115
  return;
}
}
# 135
int buf_extend(struct binbuffer *buf , size_t length ) 
{ char *newbuf ;

  {
# 139
  if (buf->offset + length > buf->size) {
    {
# 141
    buf->size = ((buf->size + length) + 1023U) & 4294966272U;
# 142
    newbuf = (char *)realloc((void *)buf->buffer, buf->size);
    }
# 144
    if ((unsigned int )newbuf == (unsigned int )((void *)0)) {
# 146
      if (buf->buffer) {
        {
# 146
        free((void *)buf->buffer);
# 146
        buf->buffer = (char *)((void *)0);
        }
      }
# 147
      return (1);
    } else {
      {
# 151
      buf->buffer = newbuf;
      }
# 152
      return (0);
    }
  }
# 155
  return (0);
}
}
# 176
int buf_copy(struct binbuffer *src , struct binbuffer *dst , size_t length ) 
{ int tmp ;

  {
# 182
  if (src->offset + length > src->size) {
# 184
    return (1);
  }
  {
# 190
  tmp = buf_extend(dst, length);
  }
# 190
  if (tmp) {
# 192
    return (1);
  }
  {
# 199
  memcpy((void */* __restrict  */)((void *)(dst->buffer + dst->offset)),
         (void const   */* __restrict  */)((void const   *)(src->buffer +
                                                            src->offset)),
         length);
# 200
  src->offset += length;
# 201
  dst->offset += length;
  }
# 203
  return (0);
}
}
# 222
unsigned char buf_getbyte(struct binbuffer *src , size_t offset ) 
{ 

  {
# 224
  if (src->offset + offset < src->size) {
# 226
    return ((unsigned char )(*((src->buffer + src->offset) + offset)));
  } else {
# 230
    return ((unsigned char )'\0');
  }
}
}
# 251
int gif_skip_data_block(struct binbuffer *buf ) 
{ unsigned char c ;

  {
# 260
  while (1) {
    {
# 260
    c = buf_getbyte(buf, 0U);
    }
# 260
    if (! ((int )c != 0)) {
# 260
      break;
    }
    {
# 262
    buf->offset += (unsigned int )((int )c + 1);
    }
# 262
    if (buf->offset >= buf->size - 1U) {
# 264
      return (1);
    }
  }
  {
# 267
  buf->offset ++;
  }
# 269
  return (0);
}
}
# 290
int gif_extract_image(struct binbuffer *src , struct binbuffer *dst ) 
{ unsigned char c ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  {
# 297
  c = buf_getbyte(src, 9U);
# 298
  tmp = buf_copy(src, dst, 10U);
  }
# 298
  if (tmp) {
# 300
    return (1);
  }
# 306
  if ((int )c & 128) {
    {
# 308
    tmp___0 = buf_copy(src, dst, 3U * (unsigned int )(1 << (((int )c & 7) + 1)));
    }
# 308
    if (tmp___0) {
# 310
      return (1);
    }
  }
  {
# 313
  tmp___1 = buf_copy(src, dst, 1U);
  }
# 313
  if (tmp___1) {
# 313
    return (1);
  }
# 318
  while (1) {
    {
# 318
    c = buf_getbyte(src, 0U);
    }
# 318
    if (! ((int )c != 0)) {
# 318
      break;
    }
    {
# 320
    tmp___2 = buf_copy(src, dst, 1U + (unsigned int )c);
    }
# 320
    if (tmp___2) {
# 320
      return (1);
    }
  }
  {
# 322
  tmp___3 = buf_copy(src, dst, 1U);
  }
# 322
  if (tmp___3) {
# 322
    return (1);
  }
  {
# 327
  dst->buffer = (char *)realloc((void *)dst->buffer, dst->offset);
  }
# 327
  if ((unsigned int )((void *)0) == (unsigned int )dst->buffer) {
# 327
    return (1);
  }
  {
# 328
  dst->size = dst->offset;
# 329
  dst->offset = 0U;
  }
# 331
  return (0);
}
}
# 355
int gif_deanimate(struct binbuffer *src , struct binbuffer *dst ,
                  int get_first_image ) 
{ unsigned char c ;
  struct binbuffer *image ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  unsigned char tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  size_t tmp___15 ;

  {
# 360
  if ((unsigned int )((void *)0) == (unsigned int )src) {
# 362
    return (1);
  } else {
# 360
    if ((unsigned int )((void *)0) == (unsigned int )dst) {
# 362
      return (1);
    }
  }
  {
# 365
  c = buf_getbyte(src, 10U);
# 370
  tmp___0 = strncmp((char const   *)src->buffer, (char const   *)"GIF89a", 6U);
  }
# 370
  if (tmp___0) {
    {
# 370
    tmp___1 = strncmp((char const   *)src->buffer, (char const   *)"GIF87a", 6U);
    }
# 370
    if (tmp___1) {
# 372
      return (1);
    } else {
      goto _L;
    }
  } else {
    _L: 
    {
# 376
    tmp = buf_copy(src, dst, 13U);
    }
# 376
    if (tmp) {
# 378
      return (1);
    }
  }
# 385
  if ((int )c & 128) {
    {
# 387
    tmp___2 = buf_copy(src, dst, 3U * (unsigned int )(1 << (((int )c & 7) + 1)));
    }
# 387
    if (tmp___2) {
# 389
      return (1);
    }
  }
  {
# 396
  image = (struct binbuffer *)zalloc(sizeof((*image)));
  }
# 396
  if ((unsigned int )((void *)0) == (unsigned int )image) {
# 398
    return (1);
  }
# 405
  while (src->offset < src->size) {
    {
# 407
    tmp___4 = (int )buf_getbyte(src, 0U);
    }
# 407
    switch (tmp___4) {
    case 59: 
    {

    }
    goto write;
    case 44: 
    {
# 419
    image->offset = 0U;
# 420
    tmp___5 = gif_extract_image(src, image);
    }
# 420
    if (tmp___5) {
      goto failed;
    }
# 421
    if (get_first_image) {
      goto write;
    }
# 422
    continue;
    case 33: 
    {
# 428
    tmp___6 = (int )buf_getbyte(src, 1U);
    }
# 428
    switch (tmp___6) {
    case 249: 
    {
# 435
    image->offset = 0U;
# 436
    tmp___7 = buf_copy(src, image, 8U);
    }
# 436
    if (tmp___7) {
      goto failed;
    } else {
      {
# 436
      tmp___8 = buf_getbyte(src, 0U);
      }
# 436
      if ((int )tmp___8 != 44) {
        goto failed;
      }
    }
    {
# 437
    tmp___9 = gif_extract_image(src, image);
    }
# 437
    if (tmp___9) {
      goto failed;
    }
# 438
    if (get_first_image) {
      goto write;
    }
# 439
    continue;
    case 255: 
    {
# 445
    src->offset += 14U;
    }
# 445
    if (src->offset >= src->size) {
      goto failed;
    } else {
      {
# 445
      tmp___10 = gif_skip_data_block(src);
      }
# 445
      if (tmp___10) {
        goto failed;
      }
    }
# 446
    continue;
    case 254: 
    {
# 452
    src->offset += 2U;
    }
# 452
    if (src->offset >= src->size) {
      goto failed;
    } else {
      {
# 452
      tmp___11 = gif_skip_data_block(src);
      }
# 452
      if (tmp___11) {
        goto failed;
      }
    }
# 453
    continue;
    case 1: 
    {
# 459
    src->offset += 15U;
    }
# 459
    if (src->offset >= src->size) {
      goto failed;
    } else {
      {
# 459
      tmp___12 = gif_skip_data_block(src);
      }
# 459
      if (tmp___12) {
        goto failed;
      }
    }
# 460
    continue;
    default: 
    {

    }
    goto failed;
    }
    default: 
    {

    }
    goto failed;
    }
  }
  failed: 
  {
# 486
  buf_free(image);
  }
# 487
  return (1);
  write: 
  {
# 494
  tmp___13 = buf_copy(image, dst, image->size);
  }
# 494
  if (tmp___13) {
    goto failed;
  }
  {
# 495
  tmp___14 = buf_extend(dst, 1U);
  }
# 495
  if (tmp___14) {
    goto failed;
  }
  {
# 496
  tmp___15 = dst->offset;
# 496
  dst->offset ++;
# 496
  (*(dst->buffer + tmp___15)) = (char )59;
# 497
  buf_free(image);
  }
# 498
  return (0);
}
}
# 1 "encode.c"
__asm__("booo - error in global encode_rcs (encode.c:1)");
# 75
char const   encode_h_rcs[50]   = 
# 75
  {'$', 'I', 'd', ':', ' ', 'e', 'n', 'c', 'o', 'd', 'e', '.', 'h', ',', 'v',
   ' ', '1', '.', '5', ' ', '2', '0', '0', '2', '/', '0', '3', '/', '2', '6',
   ' ', '2', '2', ':', '2', '9', ':', '5', '4', ' ', 's', 'w', 'a', ' ', 'E',
   'x', 'p', ' ', '$', '\0'};
# 78
static char const   * const  url_code_map[256]   = 
# 78
  {(char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)"%01"),
   (char const   */* const  */)((char const   *)"%02"),
   (char const   */* const  */)((char const   *)"%03"),
   (char const   */* const  */)((char const   *)"%04"),
   (char const   */* const  */)((char const   *)"%05"),
   (char const   */* const  */)((char const   *)"%06"),
   (char const   */* const  */)((char const   *)"%07"),
   (char const   */* const  */)((char const   *)"%08"),
   (char const   */* const  */)((char const   *)"%09"),
   (char const   */* const  */)((char const   *)"%0A"),
   (char const   */* const  */)((char const   *)"%0B"),
   (char const   */* const  */)((char const   *)"%0C"),
   (char const   */* const  */)((char const   *)"%0D"),
   (char const   */* const  */)((char const   *)"%0E"),
   (char const   */* const  */)((char const   *)"%0F"),
   (char const   */* const  */)((char const   *)"%10"),
   (char const   */* const  */)((char const   *)"%11"),
   (char const   */* const  */)((char const   *)"%12"),
   (char const   */* const  */)((char const   *)"%13"),
   (char const   */* const  */)((char const   *)"%14"),
   (char const   */* const  */)((char const   *)"%15"),
   (char const   */* const  */)((char const   *)"%16"),
   (char const   */* const  */)((char const   *)"%17"),
   (char const   */* const  */)((char const   *)"%18"),
   (char const   */* const  */)((char const   *)"%19"),
   (char const   */* const  */)((char const   *)"%1A"),
   (char const   */* const  */)((char const   *)"%1B"),
   (char const   */* const  */)((char const   *)"%1C"),
   (char const   */* const  */)((char const   *)"%1D"),
   (char const   */* const  */)((char const   *)"%1E"),
   (char const   */* const  */)((char const   *)"%1F"),
   (char const   */* const  */)((char const   *)"+"),
   (char const   */* const  */)((char const   *)"%21"),
   (char const   */* const  */)((char const   *)"%22"),
   (char const   */* const  */)((char const   *)"%23"),
   (char const   */* const  */)((char const   *)"%24"),
   (char const   */* const  */)((char const   *)"%25"),
   (char const   */* const  */)((char const   *)"%26"),
   (char const   */* const  */)((char const   *)"%27"),
   (char const   */* const  */)((char const   *)"%28"),
   (char const   */* const  */)((char const   *)"%29"),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)"%2B"),
   (char const   */* const  */)((char const   *)"%2C"),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)"%2F"),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)"%3A"),
   (char const   */* const  */)((char const   *)"%3B"),
   (char const   */* const  */)((char const   *)"%3C"),
   (char const   */* const  */)((char const   *)"%3D"),
   (char const   */* const  */)((char const   *)"%3E"),
   (char const   */* const  */)((char const   *)"%3F"),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)"%5B"),
   (char const   */* const  */)((char const   *)"%5C"),
   (char const   */* const  */)((char const   *)"%5D"),
   (char const   */* const  */)((char const   *)"%5E"),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)"%60"),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)"%7B"),
   (char const   */* const  */)((char const   *)"%7C"),
   (char const   */* const  */)((char const   *)"%7D"),
   (char const   */* const  */)((char const   *)"%7E"),
   (char const   */* const  */)((char const   *)"%7F"),
   (char const   */* const  */)((char const   *)"%80"),
   (char const   */* const  */)((char const   *)"%81"),
   (char const   */* const  */)((char const   *)"%82"),
   (char const   */* const  */)((char const   *)"%83"),
   (char const   */* const  */)((char const   *)"%84"),
   (char const   */* const  */)((char const   *)"%85"),
   (char const   */* const  */)((char const   *)"%86"),
   (char const   */* const  */)((char const   *)"%87"),
   (char const   */* const  */)((char const   *)"%88"),
   (char const   */* const  */)((char const   *)"%89"),
   (char const   */* const  */)((char const   *)"%8A"),
   (char const   */* const  */)((char const   *)"%8B"),
   (char const   */* const  */)((char const   *)"%8C"),
   (char const   */* const  */)((char const   *)"%8D"),
   (char const   */* const  */)((char const   *)"%8E"),
   (char const   */* const  */)((char const   *)"%8F"),
   (char const   */* const  */)((char const   *)"%90"),
   (char const   */* const  */)((char const   *)"%91"),
   (char const   */* const  */)((char const   *)"%92"),
   (char const   */* const  */)((char const   *)"%93"),
   (char const   */* const  */)((char const   *)"%94"),
   (char const   */* const  */)((char const   *)"%95"),
   (char const   */* const  */)((char const   *)"%96"),
   (char const   */* const  */)((char const   *)"%97"),
   (char const   */* const  */)((char const   *)"%98"),
   (char const   */* const  */)((char const   *)"%99"),
   (char const   */* const  */)((char const   *)"%9A"),
   (char const   */* const  */)((char const   *)"%9B"),
   (char const   */* const  */)((char const   *)"%9C"),
   (char const   */* const  */)((char const   *)"%9D"),
   (char const   */* const  */)((char const   *)"%9E"),
   (char const   */* const  */)((char const   *)"%9F"),
   (char const   */* const  */)((char const   *)"%A0"),
   (char const   */* const  */)((char const   *)"%A1"),
   (char const   */* const  */)((char const   *)"%A2"),
   (char const   */* const  */)((char const   *)"%A3"),
   (char const   */* const  */)((char const   *)"%A4"),
   (char const   */* const  */)((char const   *)"%A5"),
   (char const   */* const  */)((char const   *)"%A6"),
   (char const   */* const  */)((char const   *)"%A7"),
   (char const   */* const  */)((char const   *)"%A8"),
   (char const   */* const  */)((char const   *)"%A9"),
   (char const   */* const  */)((char const   *)"%AA"),
   (char const   */* const  */)((char const   *)"%AB"),
   (char const   */* const  */)((char const   *)"%AC"),
   (char const   */* const  */)((char const   *)"%AD"),
   (char const   */* const  */)((char const   *)"%AE"),
   (char const   */* const  */)((char const   *)"%AF"),
   (char const   */* const  */)((char const   *)"%B0"),
   (char const   */* const  */)((char const   *)"%B1"),
   (char const   */* const  */)((char const   *)"%B2"),
   (char const   */* const  */)((char const   *)"%B3"),
   (char const   */* const  */)((char const   *)"%B4"),
   (char const   */* const  */)((char const   *)"%B5"),
   (char const   */* const  */)((char const   *)"%B6"),
   (char const   */* const  */)((char const   *)"%B7"),
   (char const   */* const  */)((char const   *)"%B8"),
   (char const   */* const  */)((char const   *)"%B9"),
   (char const   */* const  */)((char const   *)"%BA"),
   (char const   */* const  */)((char const   *)"%BB"),
   (char const   */* const  */)((char const   *)"%BC"),
   (char const   */* const  */)((char const   *)"%BD"),
   (char const   */* const  */)((char const   *)"%BE"),
   (char const   */* const  */)((char const   *)"%BF"),
   (char const   */* const  */)((char const   *)"%C0"),
   (char const   */* const  */)((char const   *)"%C1"),
   (char const   */* const  */)((char const   *)"%C2"),
   (char const   */* const  */)((char const   *)"%C3"),
   (char const   */* const  */)((char const   *)"%C4"),
   (char const   */* const  */)((char const   *)"%C5"),
   (char const   */* const  */)((char const   *)"%C6"),
   (char const   */* const  */)((char const   *)"%C7"),
   (char const   */* const  */)((char const   *)"%C8"),
   (char const   */* const  */)((char const   *)"%C9"),
   (char const   */* const  */)((char const   *)"%CA"),
   (char const   */* const  */)((char const   *)"%CB"),
   (char const   */* const  */)((char const   *)"%CC"),
   (char const   */* const  */)((char const   *)"%CD"),
   (char const   */* const  */)((char const   *)"%CE"),
   (char const   */* const  */)((char const   *)"%CF"),
   (char const   */* const  */)((char const   *)"%D0"),
   (char const   */* const  */)((char const   *)"%D1"),
   (char const   */* const  */)((char const   *)"%D2"),
   (char const   */* const  */)((char const   *)"%D3"),
   (char const   */* const  */)((char const   *)"%D4"),
   (char const   */* const  */)((char const   *)"%D5"),
   (char const   */* const  */)((char const   *)"%D6"),
   (char const   */* const  */)((char const   *)"%D7"),
   (char const   */* const  */)((char const   *)"%D8"),
   (char const   */* const  */)((char const   *)"%D9"),
   (char const   */* const  */)((char const   *)"%DA"),
   (char const   */* const  */)((char const   *)"%DB"),
   (char const   */* const  */)((char const   *)"%DC"),
   (char const   */* const  */)((char const   *)"%DD"),
   (char const   */* const  */)((char const   *)"%DE"),
   (char const   */* const  */)((char const   *)"%DF"),
   (char const   */* const  */)((char const   *)"%E0"),
   (char const   */* const  */)((char const   *)"%E1"),
   (char const   */* const  */)((char const   *)"%E2"),
   (char const   */* const  */)((char const   *)"%E3"),
   (char const   */* const  */)((char const   *)"%E4"),
   (char const   */* const  */)((char const   *)"%E5"),
   (char const   */* const  */)((char const   *)"%E6"),
   (char const   */* const  */)((char const   *)"%E7"),
   (char const   */* const  */)((char const   *)"%E8"),
   (char const   */* const  */)((char const   *)"%E9"),
   (char const   */* const  */)((char const   *)"%EA"),
   (char const   */* const  */)((char const   *)"%EB"),
   (char const   */* const  */)((char const   *)"%EC"),
   (char const   */* const  */)((char const   *)"%ED"),
   (char const   */* const  */)((char const   *)"%EE"),
   (char const   */* const  */)((char const   *)"%EF"),
   (char const   */* const  */)((char const   *)"%F0"),
   (char const   */* const  */)((char const   *)"%F1"),
   (char const   */* const  */)((char const   *)"%F2"),
   (char const   */* const  */)((char const   *)"%F3"),
   (char const   */* const  */)((char const   *)"%F4"),
   (char const   */* const  */)((char const   *)"%F5"),
   (char const   */* const  */)((char const   *)"%F6"),
   (char const   */* const  */)((char const   *)"%F7"),
   (char const   */* const  */)((char const   *)"%F8"),
   (char const   */* const  */)((char const   *)"%F9"),
   (char const   */* const  */)((char const   *)"%FA"),
   (char const   */* const  */)((char const   *)"%FB"),
   (char const   */* const  */)((char const   *)"%FC"),
   (char const   */* const  */)((char const   *)"%FD"),
   (char const   */* const  */)((char const   *)"%FE"),
   (char const   */* const  */)((char const   *)"%FF")};
# 108
static char const   * const  html_code_map[256]   = 
# 108
  {(char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)"&quot;"),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)"&amp;"),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)"&lt;"),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)"&gt;"),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0))};
# 138
static char const   * const  cookie_code_map[256]   = 
# 138
  {(char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)"+"),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)"%2C"),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)"%3B"),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0)),
   (char const   */* const  */)((char const   *)((void *)0))};
# 185
char *html_encode(char const   *s ) 
{ char *buf ;
  size_t tmp ;
  char c ;
  char *p ;
  char const   *replace_with ;
  size_t tmp___1 ;
  char *tmp___2 ;
  char const   *tmp___3 ;

  {
# 189
  if ((unsigned int )s == (unsigned int )((void *)0)) {
# 191
    return ((char *)((void *)0));
  }
  {
# 195
  tmp = strlen(s);
# 195
  buf = (char *)malloc(tmp * 6U + 1U);
  }
# 197
  if (buf) {
    {
# 200
    p = buf;
    }
# 201
    while (1) {
      {
# 201
      tmp___3 = s;
# 201
      s ++;
# 201
      c = (*tmp___3);
      }
# 201
      if (! ((int )c != 0)) {
# 201
        break;
      }
      {
# 203
      replace_with = (char const   *)html_code_map[(unsigned char )c];
      }
# 204
      if ((unsigned int )replace_with != (unsigned int )((void *)0)) {
        {
# 206
        strcpy((char */* __restrict  */)p,
               (char const   */* __restrict  */)replace_with);
# 207
        tmp___1 = strlen(replace_with);
# 207
        p += tmp___1;
        }
      } else {
        {
# 211
        tmp___2 = p;
# 211
        p ++;
# 211
        (*tmp___2) = c;
        }
      }
    }
    {
# 215
    (*p) = '\0';
    }
  }
# 218
  return (buf);
}
}
# 240
char *html_encode_and_free_original(char *s ) 
{ char *result ;

  {
# 244
  if ((unsigned int )s == (unsigned int )((void *)0)) {
# 246
    return ((char *)((void *)0));
  }
  {
# 249
  result = html_encode((char const   *)s);
# 250
  free((void *)s);
  }
# 252
  return (result);
}
}
# 272
char *cookie_encode(char const   *s ) 
{ char *buf ;
  size_t tmp ;
  char c ;
  char *p ;
  char const   *replace_with ;
  size_t tmp___1 ;
  char *tmp___2 ;
  char const   *tmp___3 ;

  {
# 276
  if ((unsigned int )s == (unsigned int )((void *)0)) {
# 278
    return ((char *)((void *)0));
  }
  {
# 282
  tmp = strlen(s);
# 282
  buf = (char *)malloc(tmp * 3U + 1U);
  }
# 284
  if (buf) {
    {
# 287
    p = buf;
    }
# 288
    while (1) {
      {
# 288
      tmp___3 = s;
# 288
      s ++;
# 288
      c = (*tmp___3);
      }
# 288
      if (! ((int )c != 0)) {
# 288
        break;
      }
      {
# 290
      replace_with = (char const   *)cookie_code_map[(unsigned char )c];
      }
# 291
      if ((unsigned int )replace_with != (unsigned int )((void *)0)) {
        {
# 293
        strcpy((char */* __restrict  */)p,
               (char const   */* __restrict  */)replace_with);
# 294
        tmp___1 = strlen(replace_with);
# 294
        p += tmp___1;
        }
      } else {
        {
# 298
        tmp___2 = p;
# 298
        p ++;
# 298
        (*tmp___2) = c;
        }
      }
    }
    {
# 302
    (*p) = '\0';
    }
  }
# 305
  return (buf);
}
}
# 324
char *url_encode(char const   *s ) 
{ char *buf ;
  size_t tmp ;
  char c ;
  char *p ;
  char const   *replace_with ;
  size_t tmp___1 ;
  char *tmp___2 ;
  char const   *tmp___3 ;

  {
# 328
  if ((unsigned int )s == (unsigned int )((void *)0)) {
# 330
    return ((char *)((void *)0));
  }
  {
# 334
  tmp = strlen(s);
# 334
  buf = (char *)malloc(tmp * 3U + 1U);
  }
# 336
  if (buf) {
    {
# 339
    p = buf;
    }
# 340
    while (1) {
      {
# 340
      tmp___3 = s;
# 340
      s ++;
# 340
      c = (*tmp___3);
      }
# 340
      if (! ((int )c != 0)) {
# 340
        break;
      }
      {
# 342
      replace_with = (char const   *)url_code_map[(unsigned char )c];
      }
# 343
      if ((unsigned int )replace_with != (unsigned int )((void *)0)) {
        {
# 345
        strcpy((char */* __restrict  */)p,
               (char const   */* __restrict  */)replace_with);
# 346
        tmp___1 = strlen(replace_with);
# 346
        p += tmp___1;
        }
      } else {
        {
# 350
        tmp___2 = p;
# 350
        p ++;
# 350
        (*tmp___2) = c;
        }
      }
    }
    {
# 354
    (*p) = '\0';
    }
  }
# 358
  return (buf);
}
}
# 374
static int xdtoi(int d ) 
{ 

  {
# 376
  if (d >= 48) {
# 376
    if (d <= 57) {
# 378
      return (d - 48);
    } else {
      goto _L___0;
    }
  } else {
    _L___0: 
# 380
    if (d >= 97) {
# 380
      if (d <= 102) {
# 382
        return ((d - 97) + 10);
      } else {
        goto _L;
      }
    } else {
      _L: 
# 384
      if (d >= 65) {
# 384
        if (d <= 70) {
# 386
          return ((d - 65) + 10);
        } else {
# 390
          return (-1);
        }
      } else {
# 390
        return (-1);
      }
    }
  }
}
}
# 408
static int xtoi(char const   *s ) 
{ int d1 ;
  int d2 ;

  {
  {
# 412
  d1 = xdtoi((int )(*s));
  }
# 413
  if (d1 >= 0) {
    {
# 415
    d2 = xdtoi((int )(*(s + 1)));
    }
# 416
    if (d2 >= 0) {
# 418
      return ((d1 << 4) + d2);
    }
  }
# 422
  return (0);
}
}
# 440
char *url_decode(char const   *s ) 
{ char *buf ;
  size_t tmp ;
  char *tmp___0 ;
  char *q ;
  char *tmp___1 ;
  char *tmp___2 ;
  char const   *tmp___3 ;
  char *tmp___4 ;
  char const   *tmp___5 ;

  {
  {
# 442
  tmp = strlen(s);
# 442
  tmp___0 = (char *)malloc(tmp + 1U);
# 442
  buf = tmp___0;
# 443
  q = buf;
  }
# 445
  if (buf) {
# 447
    while ((*s)) {
# 449
      switch ((int )(*s)) {
      case 43: 
      {
# 452
      s ++;
# 453
      tmp___1 = q;
# 453
      q ++;
# 453
      (*tmp___1) = ' ';
      }
# 454
      break;
      case 37: 
      {
# 457
      (*q) = (char )xtoi(s + 1);
      }
# 457
      if ((int )(*q) != 0) {
        {
# 459
        s += 3;
# 460
        q ++;
        }
      } else {
        {
# 465
        tmp___2 = q;
# 465
        q ++;
# 465
        tmp___3 = s;
# 465
        s ++;
# 465
        (*tmp___2) = (*tmp___3);
        }
      }
# 467
      break;
      default: 
      {
# 470
      tmp___4 = q;
# 470
      q ++;
# 470
      tmp___5 = s;
# 470
      s ++;
# 470
      (*tmp___4) = (*tmp___5);
      }
# 471
      break;
      }
    }
    {
# 474
    (*q) = '\0';
    }
  }
# 477
  return (buf);
}
}
# 1 "errlog.c"
__asm__("booo - error in global errlog_rcs (errlog.c:1)");
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
# 423
extern char *getcwd(char *__buf , size_t __size ) ;
# 518
extern __pid_t getpid(void) ;
# 580
extern __pid_t setsid(void) ;
# 613
extern int setuid(__uid_t __uid ) ;
# 630
extern int setgid(__gid_t __gid ) ;
# 665
extern __pid_t fork(void) ;
# 813
extern int chroot(char const   *__path ) ;
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
# 38 "/usr/include/bits/errno.h"
extern int *__errno_location(void)  __attribute__((__const__)) ;
# 270 "errlog.c"
char const   errlog_h_rcs[55]   = 
# 270
  {'$', 'I', 'd', ':', ' ', 'e', 'r', 'r', 'l', 'o', 'g', '.', 'h', ',', 'v',
   ' ', '1', '.', '1', '3', '.', '2', '.', '1', ' ', '2', '0', '0', '2', '/',
   '0', '8', '/', '0', '5', ' ', '1', '7', ':', '5', '7', ':', '0', '6', ' ',
   'o', 'e', 's', ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 281
static FILE *logfp   = (FILE *)((void *)0);
# 284
static int debug   = 28672;
# 287
static void fatal_error(char const   *error_message ) ;
# 309
static void fatal_error(char const   *error_message ) 
{ FILE * __restrict  tmp ;

  {
  {
# 319
  tmp = (FILE */* __restrict  */)get_stderr();
  {
# 105 "spec.work"
  tmp->__BLAST_FLAG = 1;
  {

  }
  }

  {
# 48
  if (! (tmp->__BLAST_FLAG == 1)) {
# 50
    __error__();
  }
  {

  }
  }
# 319 "errlog.c"
  fputs((char const   */* __restrict  */)error_message, tmp);
# 323
  unlink(pidfile);
# 326
  exit(1);
  {
# 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
# 326 "errlog.c"
  return;
}
}
# 345
void init_error_log(char const   *prog_name , char const   *logfname ,
                    int debuglevel ) 
{ FILE *fp ;
  char const   *tmp ;
  FILE *tmp___0 ;

  {
  {
# 352
  debug = debuglevel | 16384;
  }
# 354
  if ((unsigned int )logfp != (unsigned int )((void *)0)) {
    {
# 354
    tmp___0 = get_stderr();
    {
# 105 "spec.work"
    tmp___0->__BLAST_FLAG = 1;
    {

    }
    }

    }
# 354 "errlog.c"
    if ((unsigned int )logfp != (unsigned int )tmp___0) {
# 356
      if (logfname) {
        {
# 356
        tmp = logfname;
        }
      } else {
        {
# 356
        tmp = (char const   *)"none";
        }
      }
      {
# 356
      log_error(4096, "(Re-)Open logfile %s", tmp);
      {
# 96 "spec.work"
      if (logfp->__BLAST_FLAG == 1) {
# 97
        logfp->__BLAST_FLAG = 0;
      } else {
# 98
        __error__();
      }
      {

      }
      }
# 357 "errlog.c"
      fclose(logfp);
      }
    }
  }
  {
# 359
  logfp = get_stderr();
  {
# 105 "spec.work"
  logfp->__BLAST_FLAG = 1;
  {

  }
  }

  }
# 362 "errlog.c"
  if (logfname) {
    {
# 364
    fp = fopen((char const   */* __restrict  */)logfname,
               (char const   */* __restrict  */)((char const   *)"a"));
    {
# 17 "spec.work"
      fp->__BLAST_FLAG = 1;
    {

    }
    }

    }
# 364 "errlog.c"
    if ((unsigned int )((void *)0) == (unsigned int )fp) {
      {
# 366
      log_error(16384, "init_error_log(): can\'t open logfile: %s", logfname);
      }
    }
    {
# 370
    setbuf((FILE */* __restrict  */)fp,
           (char */* __restrict  */)((char *)((void *)0)));
# 372
    logfp = fp;
    }
  }
  {
# 375
  log_error(4096, "Privoxy version 3.0.3");
  }
# 376
  if ((unsigned int )prog_name != (unsigned int )((void *)0)) {
    {
# 378
    log_error(4096, "Program name: %s", prog_name);
    }
  }
# 383
  return;
}
}
# 404
static char *outbuf_save   = (char *)((void *)0);
# 796
static char const   warning[27]   = 
# 796
  {'.', '.', '.', ' ', '[', 't', 'o', 'o', ' ', 'l', 'o', 'n', 'g', ',', ' ',
   't', 'r', 'u', 'n', 'c', 'a', 't', 'e', 'd', ']', '\n', '\0'};
# 400
void log_error(int loglevel , char *fmt  , ...) 
{ __ccured_va_list ap ;
  char *outbuf ;
  char *src ;
  int outc ;
  long this_thread ;
  time_t now ;
  struct tm tm_now ;
  struct tm *tmp___1 ;
  size_t tmp___2 ;
  unsigned long tmp___3 ;
  char tempbuf[5000] ;
  char *sval ;
  int ival ;
  unsigned int uval ;
  long lval ;
  unsigned long ulval ;
  int oldoutc ;
  char ch ;
  char *tmp___4 ;
  int tmp___5 ;
  char *tmp___6 ;
  int tmp___7 ;
  void *tmp___8 ;
  int tmp___9 ;
  void *tmp___10 ;
  int tmp___11 ;
  char *tmp___12 ;
  void *tmp___13 ;
  int tmp___14 ;
  void *tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  void *tmp___18 ;
  void *tmp___19 ;
  size_t tmp___20 ;
  void *tmp___21 ;
  void *tmp___22 ;
  int *tmp___23 ;
  size_t tmp___24 ;
  time_t now___0 ;
  struct tm *tm_now___0 ;
  struct tm gmt ;
  struct tm dummy ;
  int days ;
  int hrs ;
  int mins ;
  struct tm *tmp___25 ;
  int tmp___27 ;
  int tmp___28 ;
  size_t tmp___29 ;
  size_t tmp___30 ;
  int tmp___31 ;

  {
  {
# 403
  outbuf = (char *)((void *)0);
# 405
  src = fmt;
# 406
  outc = 0;
# 407
  this_thread = 1L;
  }
# 426
  if ((loglevel & debug) == 0) {
# 428
    return;
  }
  {
# 433
  this_thread = (long )pthread_self();
  }
# 451
  if (! outbuf_save) {
    {
# 453
    outbuf = (char *)malloc(5000U);
# 453
    outbuf_save = outbuf;
    }
# 454
    if (! outbuf) {
      {
# 454
      __assert_fail((char const   *)"outbuf", (char const   *)"errlog.c", 454U,
                    (char const   *)"log_error");
      }
    }
  }
  {
# 456
  outbuf = outbuf_save;
# 467
  time(& now);
# 469
  tmp___1 = localtime_r((time_t const   */* __restrict  */)((time_t const   *)(& now)),
                        (struct tm */* __restrict  */)(& tm_now));
# 469
  tm_now = (*tmp___1);
# 477
  strftime((char */* __restrict  */)outbuf, 4994U,
           (char const   */* __restrict  */)((char const   *)"%b %d %H:%M:%S "),
           (struct tm  const  */* __restrict  */)((struct tm  const  *)(& tm_now)));
# 478
  tmp___2 = strlen((char const   *)outbuf);
# 478
  outbuf += tmp___2;
  }
# 480
  switch (loglevel) {
  case 8192: 
  {
# 483
  outc = sprintf((char */* __restrict  */)outbuf,
                 (char const   */* __restrict  */)((char const   *)"Privoxy(%05ld) Error: "),
                 this_thread);
  }
# 484
  break;
  case 16384: 
  {
# 486
  outc = sprintf((char */* __restrict  */)outbuf,
                 (char const   */* __restrict  */)((char const   *)"Privoxy(%05ld) Fatal error: "),
                 this_thread);
  }
# 487
  break;
  case 1: 
  {
# 489
  outc = sprintf((char */* __restrict  */)outbuf,
                 (char const   */* __restrict  */)((char const   *)"Privoxy(%05ld) Request: "),
                 this_thread);
  }
# 490
  break;
  case 2: 
  {
# 492
  outc = sprintf((char */* __restrict  */)outbuf,
                 (char const   */* __restrict  */)((char const   *)"Privoxy(%05ld) Connect: "),
                 this_thread);
  }
# 493
  break;
  case 16: 
  {
# 495
  outc = sprintf((char */* __restrict  */)outbuf,
                 (char const   */* __restrict  */)((char const   *)"Privoxy(%05ld) Writing: "),
                 this_thread);
  }
# 496
  break;
  case 8: 
  {
# 498
  outc = sprintf((char */* __restrict  */)outbuf,
                 (char const   */* __restrict  */)((char const   *)"Privoxy(%05ld) Header: "),
                 this_thread);
  }
# 499
  break;
  case 4096: 
  {
# 501
  outc = sprintf((char */* __restrict  */)outbuf,
                 (char const   */* __restrict  */)((char const   *)"Privoxy(%05ld) Info: "),
                 this_thread);
  }
# 502
  break;
  case 64: 
  {
# 504
  outc = sprintf((char */* __restrict  */)outbuf,
                 (char const   */* __restrict  */)((char const   *)"Privoxy(%05ld) Re-Filter: "),
                 this_thread);
  }
# 505
  break;
  case 32: 
  {
# 508
  outc = sprintf((char */* __restrict  */)outbuf,
                 (char const   */* __restrict  */)((char const   *)"Privoxy(%05ld) Force: "),
                 this_thread);
  }
# 509
  break;
  case 128: 
  {
# 513
  outc = sprintf((char */* __restrict  */)outbuf,
                 (char const   */* __restrict  */)((char const   *)"Privoxy(%05ld) Redirect: "),
                 this_thread);
  }
# 514
  break;
  case 256: 
  {
# 517
  outc = sprintf((char */* __restrict  */)outbuf,
                 (char const   */* __restrict  */)((char const   *)"Privoxy(%05ld) Gif-Deanimate: "),
                 this_thread);
  }
# 518
  break;
  case 512: 
  {
# 520
  outbuf = outbuf_save;
# 521
  outc = 0;
# 522
  (*(outbuf + 0)) = '\0';
  }
# 523
  break;
  case 1024: 
  {
# 526
  outc = sprintf((char */* __restrict  */)outbuf,
                 (char const   */* __restrict  */)((char const   *)"Privoxy(%05ld) Kill-Popups: "),
                 this_thread);
  }
# 527
  break;
  case 2048: 
  {
# 530
  outc = sprintf((char */* __restrict  */)outbuf,
                 (char const   */* __restrict  */)((char const   *)"Privoxy(%05ld) CGI: "),
                 this_thread);
  }
# 531
  break;
  default: 
  {
# 533
  outc = sprintf((char */* __restrict  */)outbuf,
                 (char const   */* __restrict  */)((char const   *)"Privoxy(%05ld) UNKNOWN LOG TYPE(%d): "),
                 this_thread, loglevel);
  }
# 534
  break;
  }
  {
# 538
  tmp___3 = (unsigned long )GCC_STDARG_START();
# 538
  __ccured_va_start(ap, tmp___3);
  }
# 541
  while (1) {
# 541
    if ((*src)) {
# 541
      if (! (outc < 4998)) {
# 541
        break;
      }
    } else {
# 541
      break;
    }
    {
# 544
    sval = (char *)((void *)0);
# 552
    tmp___4 = src;
# 552
    src ++;
# 552
    ch = (*tmp___4);
    }
# 553
    if ((int )ch != 37) {
      {
# 555
      tmp___5 = outc;
# 555
      outc ++;
# 555
      (*(outbuf + tmp___5)) = ch;
      }
# 556
      continue;
    }
    {
# 559
    tmp___6 = src;
# 559
    src ++;
# 559
    ch = (*tmp___6);
    }
# 560
    switch ((int )ch) {
    case 37: 
    {
# 562
    tmp___7 = outc;
# 562
    outc ++;
# 562
    (*(outbuf + tmp___7)) = '%';
    }
# 563
    break;
    case 100: 
    {
# 565
    tmp___8 = __ccured_va_arg(ap, sizeof(int ), -1);
# 565
    ival = (*((int *)tmp___8));
# 566
    oldoutc = outc;
# 567
    tmp___9 = sprintf((char */* __restrict  */)(tempbuf),
                      (char const   */* __restrict  */)((char const   *)"%d"),
                      ival);
# 567
    outc += tmp___9;
    }
# 568
    if (outc < 4999) {
      {
# 570
      strcpy((char */* __restrict  */)(outbuf + oldoutc),
             (char const   */* __restrict  */)((char const   *)(tempbuf)));
      }
    } else {
      {
# 574
      (*(outbuf + oldoutc)) = '\0';
      }
    }
# 576
    break;
    case 117: 
    {
# 578
    tmp___10 = __ccured_va_arg(ap, sizeof(unsigned int ), -1);
# 578
    uval = (*((unsigned int *)tmp___10));
# 579
    oldoutc = outc;
# 580
    tmp___11 = sprintf((char */* __restrict  */)(tempbuf),
                       (char const   */* __restrict  */)((char const   *)"%u"),
                       uval);
# 580
    outc += tmp___11;
    }
# 581
    if (outc < 4999) {
      {
# 583
      strcpy((char */* __restrict  */)(outbuf + oldoutc),
             (char const   */* __restrict  */)((char const   *)(tempbuf)));
      }
    } else {
      {
# 587
      (*(outbuf + oldoutc)) = '\0';
      }
    }
# 589
    break;
    case 108: 
    {
# 592
    tmp___12 = src;
# 592
    src ++;
# 592
    ch = (*tmp___12);
    }
# 593
    if ((int )ch == 100) {
      {
# 595
      tmp___13 = __ccured_va_arg(ap, sizeof(long ), -1);
# 595
      lval = (*((long *)tmp___13));
# 596
      oldoutc = outc;
# 597
      tmp___14 = sprintf((char */* __restrict  */)(tempbuf),
                         (char const   */* __restrict  */)((char const   *)"%ld"),
                         lval);
# 597
      outc += tmp___14;
      }
    } else {
# 599
      if ((int )ch == 117) {
        {
# 601
        tmp___15 = __ccured_va_arg(ap, sizeof(unsigned long ), -1);
# 601
        ulval = (*((unsigned long *)tmp___15));
# 602
        oldoutc = outc;
# 603
        tmp___16 = sprintf((char */* __restrict  */)(tempbuf),
                           (char const   */* __restrict  */)((char const   *)"%lu"),
                           ulval);
# 603
        outc += tmp___16;
        }
      } else {
        {
# 608
        sprintf((char */* __restrict  */)outbuf,
                (char const   */* __restrict  */)((char const   *)"Privoxy(%ld) Error: log_error(): Bad format string:\nFormat = \"%s\"\nExiting."),
                this_thread, fmt);
        }
# 612
        if (! logfp) {
          {
# 614
          logfp = get_stderr();
          {
# 105 "spec.work"
          logfp->__BLAST_FLAG = 1;
          {

          }
          }

          }
        }
        {

        {
# 48
        if (! (logfp->__BLAST_FLAG == 1)) {
# 50
          __error__();
        }
        {

        }
        }
# 616 "errlog.c"
        fputs((char const   */* __restrict  */)((char const   *)outbuf),
              (FILE */* __restrict  */)logfp);
# 618
        fatal_error((char const   *)outbuf);
        }
# 620
        break;
      }
    }
# 622
    if (outc < 4999) {
      {
# 624
      strcpy((char */* __restrict  */)(outbuf + oldoutc),
             (char const   */* __restrict  */)((char const   *)(tempbuf)));
      }
    } else {
      {
# 628
      (*(outbuf + oldoutc)) = '\0';
      }
    }
# 630
    break;
    case 99: 
    {
# 636
    tmp___17 = outc;
# 636
    outc ++;
# 636
    tmp___18 = __ccured_va_arg(ap, sizeof(int ), -1);
# 636
    (*(outbuf + tmp___17)) = (char )(*((int *)tmp___18));
    }
# 637
    break;
    case 115: 
    {
# 639
    tmp___19 = __ccured_va_arg(ap, sizeof(char *), -1);
# 639
    sval = (*((char **)tmp___19));
    }
# 640
    if ((unsigned int )sval == (unsigned int )((void *)0)) {
      {
# 642
      sval = "[null]";
      }
    }
    {
# 644
    oldoutc = outc;
# 645
    tmp___20 = strlen((char const   *)sval);
# 645
    outc = (int )((unsigned int )outc + tmp___20);
    }
# 646
    if (outc < 4999) {
      {
# 648
      strcpy((char */* __restrict  */)(outbuf + oldoutc),
             (char const   */* __restrict  */)((char const   *)sval));
      }
    } else {
      {
# 652
      (*(outbuf + oldoutc)) = '\0';
      }
    }
# 654
    break;
    case 78: 
    {
# 659
    tmp___21 = __ccured_va_arg(ap, sizeof(int ), -1);
# 659
    ival = (*((int *)tmp___21));
# 660
    tmp___22 = __ccured_va_arg(ap, sizeof(char *), -1);
# 660
    sval = (*((char **)tmp___22));
    }
# 661
    if ((unsigned int )sval == (unsigned int )((void *)0)) {
      {
# 663
      sval = "[null]";
      }
    }
# 665
    if (ival < 0) {
      {
# 667
      ival = 0;
      }
    }
    {
# 669
    oldoutc = outc;
# 670
    outc += ival;
    }
# 671
    if (outc < 4999) {
      {
# 673
      memcpy((void */* __restrict  */)((void *)(outbuf + oldoutc)),
             (void const   */* __restrict  */)((void const   *)sval),
             (unsigned int )ival);
      }
    } else {
      {
# 677
      (*(outbuf + oldoutc)) = '\0';
      }
    }
# 679
    break;
    case 69: 
    {
# 695
    tmp___23 = __errno_location();
# 695
    ival = (*tmp___23);
# 697
    sval = strerror(ival);
    }
# 701
    if ((unsigned int )sval == (unsigned int )((void *)0)) {
      {
# 703
      sprintf((char */* __restrict  */)(tempbuf),
              (char const   */* __restrict  */)((char const   *)"(errno = %d)"),
              ival);
# 704
      sval = tempbuf;
      }
    }
    {
# 707
    oldoutc = outc;
# 708
    tmp___24 = strlen((char const   *)sval);
# 708
    outc = (int )((unsigned int )outc + tmp___24);
    }
# 709
    if (outc < 4999) {
      {
# 711
      strcpy((char */* __restrict  */)(outbuf + oldoutc),
             (char const   */* __restrict  */)((char const   *)sval));
      }
    } else {
      {
# 715
      (*(outbuf + oldoutc)) = '\0';
      }
    }
# 717
    break;
    case 84: 
    {
# 734
    time(& now___0);
# 736
    tmp___25 = gmtime_r((time_t const   */* __restrict  */)((time_t const   *)(& now___0)),
                        (struct tm */* __restrict  */)(& gmt));
# 736
    gmt = (*tmp___25);
# 745
    tm_now___0 = localtime_r((time_t const   */* __restrict  */)((time_t const   *)(& now___0)),
                             (struct tm */* __restrict  */)(& dummy));
# 753
    days = tm_now___0->tm_yday - gmt.tm_yday;
    }
# 754
    if (days < -1) {
      {
# 754
      tmp___27 = 24;
      }
    } else {
# 754
      if (1 < days) {
        {
# 754
        tmp___27 = -24;
        }
      } else {
        {
# 754
        tmp___27 = days * 24;
        }
      }
    }
    {
# 754
    hrs = (tmp___27 + tm_now___0->tm_hour) - gmt.tm_hour;
# 755
    mins = (hrs * 60 + tm_now___0->tm_min) - gmt.tm_min;
# 756
    strftime((char */* __restrict  */)(tempbuf), 4994U,
             (char const   */* __restrict  */)((char const   *)"%d/%b/%Y:%H:%M:%S "),
             (struct tm  const  */* __restrict  */)((struct tm  const  *)tm_now___0));
# 757
    tmp___28 = abs(mins);
# 757
    tmp___29 = strlen((char const   *)(tempbuf));
# 757
    sprintf((char */* __restrict  */)(tempbuf + tmp___29),
            (char const   */* __restrict  */)((char const   *)"%+03d%02d"),
            mins / 60, tmp___28 % 60);
# 759
    oldoutc = outc;
# 760
    tmp___30 = strlen((char const   *)(tempbuf));
# 760
    outc = (int )((unsigned int )outc + tmp___30);
    }
# 761
    if (outc < 4999) {
      {
# 763
      strcpy((char */* __restrict  */)(outbuf + oldoutc),
             (char const   */* __restrict  */)((char const   *)(tempbuf)));
      }
    } else {
      {
# 767
      (*(outbuf + oldoutc)) = '\0';
      }
    }
# 769
    break;
    default: 
    {
# 771
    sprintf((char */* __restrict  */)outbuf,
            (char const   */* __restrict  */)((char const   *)"Privoxy(%ld) Error: log_error(): Bad format string:\nFormat = \"%s\"\nExiting."),
            this_thread, fmt);
    }
# 775
    if (! logfp) {
      {
# 777
      logfp = get_stderr();
      {
# 105 "spec.work"
      logfp->__BLAST_FLAG = 1;
      {

      }
      }

      }
    }
    {

    {
# 48
    if (! (logfp->__BLAST_FLAG == 1)) {
# 50
      __error__();
    }
    {

    }
    }
# 779 "errlog.c"
    fputs((char const   */* __restrict  */)((char const   *)outbuf_save),
          (FILE */* __restrict  */)logfp);
# 781
    fatal_error((char const   *)outbuf_save);
    }
# 783
    break;
    }
  }
  {
# 790
  __ccured_va_end(ap);
  }
# 792
  if (outc >= 4998) {
# 798
    if (outc < 5000) {
      {
# 801
      (*(outbuf + outc)) = '\0';
      }
    }
    {
# 805
    (*(outbuf + (5000U - sizeof(warning)))) = '\0';
# 808
    strcat((char */* __restrict  */)outbuf,
           (char const   */* __restrict  */)(warning));
    }
  } else {
    {
# 813
    tmp___31 = outc;
# 813
    outc ++;
# 813
    (*(outbuf + tmp___31)) = '\n';
# 814
    (*(outbuf + outc)) = '\0';
    }
  }
# 820
  if (! logfp) {
    {
# 822
    logfp = get_stderr();
    {
# 105 "spec.work"
    logfp->__BLAST_FLAG = 1;
    {

    }
    }

    }
  }
  {

  {
# 48
  if (! (logfp->__BLAST_FLAG == 1)) {
# 50
    __error__();
  }
  {

  }
  }
# 825 "errlog.c"
  fputs((char const   */* __restrict  */)((char const   *)outbuf_save),
        (FILE */* __restrict  */)logfp);
  }
# 827
  if (loglevel == 16384) {
    {
# 829
    fatal_error((char const   *)outbuf_save);
    }
  }
# 827
  return;
}
}
# 1 "filters.c"
__asm__("booo - error in global filters_rcs (filters.c:1)");
# 105 "jbsockets.h"
jb_socket connect_to(char const   *host , int portnum ,
                     struct client_state *csp ) ;
# 109
int write_socket(jb_socket fd , char const   *buf , size_t len ) ;
# 111
int read_socket(jb_socket fd , char *buf , int len ) ;
# 112
void close_socket(jb_socket fd ) ;
# 114
int bind_port(char const   *hostnam , int portnum , jb_socket *pfd ) ;
# 115
int accept_connection(struct client_state *csp , jb_socket fd ) ;
# 117
unsigned long resolve_hostname_to_ip(char const   *host ) ;
# 462 "filters.c"
char const   filters_h_rcs[56]   = 
# 462
  {'$', 'I', 'd', ':', ' ', 'f', 'i', 'l', 't', 'e', 'r', 's', '.', 'h', ',',
   'v', ' ', '1', '.', '2', '0', '.', '2', '.', '1', ' ', '2', '0', '0', '2',
   '/', '0', '9', '/', '2', '5', ' ', '1', '4', ':', '5', '1', ':', '5', '1',
   ' ', 'o', 'e', 's', ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 491
int block_acl(struct access_control_addr *dst , struct client_state *csp ) 
{ struct access_control_list *acl ;

  {
  {
# 493
  acl = (csp->config)->acl;
  }
# 496
  if ((unsigned int )acl == (unsigned int )((void *)0)) {
# 498
    return (0);
  }
# 502
  while ((unsigned int )acl != (unsigned int )((void *)0)) {
# 504
    if (((unsigned long )csp->ip_addr_long & acl->src[0].mask) ==
        acl->src[0].addr) {
# 506
      if ((unsigned int )dst == (unsigned int )((void *)0)) {
# 509
        if ((int )acl->action == 1) {
# 511
          return (0);
        }
      } else {
# 514
        if ((dst->addr & acl->dst[0].mask) == acl->dst[0].addr) {
# 514
          if (dst->port == acl->dst[0].port) {
            goto _L;
          } else {
# 514
            if (acl->dst[0].port == 0UL) {
              _L: 
# 517
              if ((int )acl->action == 1) {
# 519
                return (0);
              } else {
# 523
                return (1);
              }
            }
          }
        }
      }
    }
    {
# 527
    acl = acl->next;
    }
  }
# 530
  return (1);
}
}
# 548
int acl_addr(char *aspec , struct access_control_addr *aca ) 
{ int i ;
  int masklength ;
  int port ;
  char *p ;
  char *tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  register unsigned int __v ;
  register unsigned int __x ;
  unsigned int tmp___3 ;
  int tmp___4 ;

  {
  {
# 553
  masklength = 32;
# 554
  port = 0;
# 556
  p = strchr((char const   *)aspec, (int )'/');
  }
# 556
  if ((unsigned int )p != (unsigned int )((void *)0)) {
    {
# 558
    tmp = p;
# 558
    p ++;
# 558
    (*tmp) = '\0';
# 560
    tmp___0 = _get__ctype_b((int )((unsigned char )(*p)));
    }
# 560
    if ((tmp___0 & 2048) == 0) {
# 562
      return (-1);
    }
    {
# 564
    masklength = atoi((char const   *)p);
    }
  }
# 567
  if (masklength < 0) {
# 569
    return (-1);
  } else {
# 567
    if (masklength > 32) {
# 569
      return (-1);
    }
  }
  {
# 572
  p = strchr((char const   *)aspec, (int )':');
  }
# 572
  if ((unsigned int )p != (unsigned int )((void *)0)) {
    {
# 574
    tmp___1 = p;
# 574
    p ++;
# 574
    (*tmp___1) = '\0';
# 576
    tmp___2 = _get__ctype_b((int )((unsigned char )(*p)));
    }
# 576
    if ((tmp___2 & 2048) == 0) {
# 578
      return (-1);
    }
    {
# 580
    port = atoi((char const   *)p);
    }
  }
  {
# 583
  aca->port = (unsigned long )port;
# 585
  tmp___3 = (unsigned int )resolve_hostname_to_ip((char const   *)aspec);
# 585
  __x = tmp___3;
# 585
  tmp___4 = __builtin_constant_p((int )__x);
  }
# 585
  if (tmp___4) {
    {
# 585
    __v = ((((__x & 4278190080U) >> 24) | ((__x & 16711680U) >> 8)) |
           ((__x & 65280U) << 8)) | ((__x & 255U) << 24);
    }
  } else {
    {
# 585
    __asm__  ("rorw $8, %w0;"
              "rorl $16, %0;"
              "rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
    }
  }
  {
# 585
  aca->addr = (unsigned long )__v;
  }
# 587
  if (aca->addr == 4294967295UL) {
# 589
    return (-1);
  }
  {
# 593
  aca->mask = 0UL;
# 594
  i = 1;
  }
# 594
  while (i <= masklength) {
    {
# 596
    aca->mask = aca->mask | (unsigned long )(1 << (32 - i));
# 594
    i ++;
    }
  }
  {
# 602
  aca->addr = aca->addr & aca->mask;
  }
# 604
  return (0);
}
}
# 625
int match_portlist(char const   *portlist , int port ) 
{ char *min ;
  char *max ;
  char *next ;
  char *portlist_copy ;
  char *tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  int tmp___5 ;
  int tmp___6 ;
  char *tmp___7 ;

  {
  {
# 629
  portlist_copy = strdup(portlist);
# 629
  next = portlist_copy;
# 629
  min = next;
# 634
  next = strchr((char const   *)portlist_copy, (int )',');
  }
# 634
  if ((unsigned int )((void *)0) != (unsigned int )next) {
    {
# 636
    tmp = next;
# 636
    next ++;
# 636
    (*tmp) = '\0';
    }
  }
# 642
  while (min) {
    {
# 644
    max = strchr((char const   *)min, (int )'-');
    }
# 644
    if ((unsigned int )((void *)0) == (unsigned int )max) {
      {
# 649
      tmp___0 = atoi((char const   *)min);
      }
# 649
      if (port == tmp___0) {
        {
# 651
        free((void *)portlist_copy);
        }
# 652
        return (1);
      }
    } else {
      {
# 661
      tmp___1 = max;
# 661
      max ++;
# 661
      (*tmp___1) = '\0';
# 662
      tmp___2 = atoi((char const   *)min);
      }
# 662
      if (port >= tmp___2) {
        {
# 662
        tmp___6 = atoi((char const   *)max);
        }
# 662
        if (tmp___6) {
          {
# 662
          tmp___5 = atoi((char const   *)max);
          }
        } else {
          {
# 662
          tmp___5 = 65535;
          }
        }
# 662
        if (port <= tmp___5) {
          {
# 664
          free((void *)portlist_copy);
          }
# 665
          return (1);
        }
      }
    }
    {
# 673
    min = next;
    }
# 678
    if ((unsigned int )((void *)0) != (unsigned int )next) {
      {
# 678
      next = strchr((char const   *)next, (int )',');
      }
# 678
      if ((unsigned int )((void *)0) != (unsigned int )next) {
        {
# 680
        tmp___7 = next;
# 680
        next ++;
# 680
        (*tmp___7) = '\0';
        }
      }
    }
  }
  {
# 684
  free((void *)portlist_copy);
  }
# 685
  return (0);
}
}
# 702
struct http_response *block_url(struct client_state *csp ) 
{ char *p ;
  struct http_response *rsp ;
  struct http_response *tmp ;
  struct http_response *tmp___0 ;
  struct http_response *tmp___1 ;
  jb_err tmp___2 ;
  struct http_response *tmp___3 ;
  struct http_response *tmp___4 ;
  jb_err tmp___5 ;
  struct http_response *tmp___6 ;
  struct http_response *tmp___7 ;
  jb_err tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  jb_err err ;
  struct map *exports ;
  int tmp___11 ;
  char * __attribute__((__rostring__, __nullterm__)) tmp___12 ;
  char * __attribute__((__rostring__, __nullterm__)) tmp___13 ;
  char * __attribute__((__rostring__, __nullterm__)) tmp___14 ;
  struct http_response *tmp___15 ;
  struct http_response *tmp___16 ;
  char const   *tmp___17 ;
  char const   *tmp___18 ;
  char const   *tmp___19 ;
  char const   *tmp___20 ;
  struct http_response *tmp___21 ;
  struct http_response *tmp___22 ;
  int tmp___23 ;
  struct http_response *tmp___24 ;

  {
# 712
  if ((csp->action[0].flags & 1UL) == 0UL) {
# 714
    return ((struct http_response *)((void *)0));
  }
  {
# 720
  rsp = alloc_http_response();
  }
# 720
  if ((unsigned int )((void *)0) == (unsigned int )rsp) {
    {
# 722
    tmp = cgi_error_memory();
    }
# 722
    return (tmp);
  }
# 730
  if ((csp->action[0].flags & 512UL) != 0UL) {
    {
# 730
    tmp___23 = is_imageurl(csp);
    }
# 730
    if (tmp___23) {
      {
# 734
      p = csp->action[0].string[2];
      }
# 739
      if ((unsigned int )p == (unsigned int )((void *)0)) {
        goto _L;
      } else {
        {
# 739
        tmp___10 = strcmpic((char const   *)p, (char const   *)"pattern");
        }
# 739
        if (0 == tmp___10) {
          _L: 
          {
# 741
          rsp->body = bindup(image_pattern_data, image_pattern_length);
          }
# 742
          if ((unsigned int )rsp->body == (unsigned int )((void *)0)) {
            {
# 744
            free_http_response(rsp);
# 745
            tmp___0 = cgi_error_memory();
            }
# 745
            return (tmp___0);
          }
          {
# 747
          rsp->content_length = image_pattern_length;
# 749
          tmp___2 = enlist_unique_header(rsp->headers,
                                         (char const   *)"Content-Type",
                                         (char const   *)"image/gif");
          }
# 749
          if (tmp___2) {
            {
# 751
            free_http_response(rsp);
# 752
            tmp___1 = cgi_error_memory();
            }
# 752
            return (tmp___1);
          }
        } else {
          {
# 756
          tmp___9 = strcmpic((char const   *)p, (char const   *)"blank");
          }
# 756
          if (0 == tmp___9) {
            {
# 758
            rsp->body = bindup(image_blank_data, image_blank_length);
            }
# 759
            if ((unsigned int )rsp->body == (unsigned int )((void *)0)) {
              {
# 761
              free_http_response(rsp);
# 762
              tmp___3 = cgi_error_memory();
              }
# 762
              return (tmp___3);
            }
            {
# 764
            rsp->content_length = image_blank_length;
# 766
            tmp___5 = enlist_unique_header(rsp->headers,
                                           (char const   *)"Content-Type",
                                           (char const   *)"image/gif");
            }
# 766
            if (tmp___5) {
              {
# 768
              free_http_response(rsp);
# 769
              tmp___4 = cgi_error_memory();
              }
# 769
              return (tmp___4);
            }
          } else {
            {
# 775
            rsp->status = strdup((char const   *)"302 Local Redirect from Privoxy");
            }
# 776
            if ((unsigned int )rsp->status == (unsigned int )((void *)0)) {
              {
# 778
              free_http_response(rsp);
# 779
              tmp___6 = cgi_error_memory();
              }
# 779
              return (tmp___6);
            }
            {
# 782
            tmp___8 = enlist_unique_header(rsp->headers,
                                           (char const   *)"Location",
                                           (char const   *)p);
            }
# 782
            if (tmp___8) {
              {
# 784
              free_http_response(rsp);
# 785
              tmp___7 = cgi_error_memory();
              }
# 785
              return (tmp___7);
            }
          }
        }
      }
    } else {
      goto _L___0;
    }
  } else {
    _L___0: 
    {
# 830
    p = get_header_value((struct list  const  *)(csp->headers),
                         (char const   *)"User-Agent:");
    }
# 830
    if ((unsigned int )((void *)0) != (unsigned int )p) {
      {
# 830
      tmp___11 = strncmpic((char const   *)p, (char const   *)"mozilla", 7U);
      }
# 830
      if (tmp___11) {
        {
# 840
        rsp->status = strdup((char const   *)"404 Request for blocked URL");
        }
      } else {
        {
# 830
        tmp___12 = strstr((char const   */* __attribute__((__rostring__,
                          __nullterm__)) */)((char const   *)p),
                          (char const   */* __attribute__((__rostring__,
                          __nullterm__)) */)((char const   *)"Gecko"));
        }
# 830
        if (tmp___12) {
          {
# 840
          rsp->status = strdup((char const   *)"404 Request for blocked URL");
          }
        } else {
          {
# 830
          tmp___13 = strstr((char const   */* __attribute__((__rostring__,
                            __nullterm__)) */)((char const   *)p),
                            (char const   */* __attribute__((__rostring__,
                            __nullterm__)) */)((char const   *)"compatible"));
          }
# 830
          if (tmp___13) {
            {
# 840
            rsp->status = strdup((char const   *)"404 Request for blocked URL");
            }
          } else {
            {
# 830
            tmp___14 = strstr((char const   */* __attribute__((__rostring__,
                              __nullterm__)) */)((char const   *)p),
                              (char const   */* __attribute__((__rostring__,
                              __nullterm__)) */)((char const   *)"Opera"));
            }
# 830
            if (tmp___14) {
              {
# 840
              rsp->status = strdup((char const   *)"404 Request for blocked URL");
              }
            } else {
              {
# 836
              rsp->status = strdup((char const   *)"200 Request for blocked URL");
              }
            }
          }
        }
      }
    } else {
      {
# 840
      rsp->status = strdup((char const   *)"404 Request for blocked URL");
      }
    }
# 843
    if ((unsigned int )rsp->status == (unsigned int )((void *)0)) {
      {
# 845
      free_http_response(rsp);
# 846
      tmp___15 = cgi_error_memory();
      }
# 846
      return (tmp___15);
    }
    {
# 849
    exports = default_exports((struct client_state  const  *)csp,
                              (char const   *)((void *)0));
    }
# 850
    if ((unsigned int )exports == (unsigned int )((void *)0)) {
      {
# 852
      free_http_response(rsp);
# 853
      tmp___16 = cgi_error_memory();
      }
# 853
      return (tmp___16);
    }
    {
# 857
    err = map(exports, (char const   *)"force-prefix", 1,
              (char const   *)"/PRIVOXY-FORCE", 1);
    }
# 858
    if (csp->http[0].ssl != 0) {
      {
# 861
      err = map_block_killer(exports, (char const   *)"force-support");
      }
    }
# 864
    if (! err) {
# 864
      if (csp->http[0].ssl) {
        {
# 864
        tmp___17 = (char const   *)"https://";
        }
      } else {
        {
# 864
        tmp___17 = (char const   *)"http://";
        }
      }
      {
# 864
      err = map(exports, (char const   *)"protocol", 1, tmp___17, 1);
      }
    }
# 865
    if (! err) {
      {
# 865
      tmp___18 = (char const   *)html_encode((char const   *)csp->http[0].hostport);
# 865
      err = map(exports, (char const   *)"hostport", 1, tmp___18, 0);
      }
    }
# 866
    if (! err) {
      {
# 866
      tmp___19 = (char const   *)html_encode((char const   *)csp->http[0].path);
# 866
      err = map(exports, (char const   *)"path", 1, tmp___19, 0);
      }
    }
# 867
    if (! err) {
      {
# 867
      tmp___20 = (char const   *)url_encode((char const   *)csp->http[0].path);
# 867
      err = map(exports, (char const   *)"path-ue", 1, tmp___20, 0);
      }
    }
# 869
    if (err) {
      {
# 871
      free_map(exports);
# 872
      free_http_response(rsp);
# 873
      tmp___21 = cgi_error_memory();
      }
# 873
      return (tmp___21);
    }
    {
# 876
    err = template_fill_for_cgi(csp, (char const   *)"blocked", exports, rsp);
    }
# 877
    if (err) {
      {
# 879
      free_http_response(rsp);
# 880
      tmp___22 = cgi_error_memory();
      }
# 880
      return (tmp___22);
    }
  }
  {
# 884
  tmp___24 = finish_http_response(rsp);
  }
# 884
  return (tmp___24);
}
}
# 903
struct http_response *trust_url(struct client_state *csp ) 
{ struct http_response *rsp ;
  struct map *exports ;
  char buf[5000] ;
  char *p ;
  struct url_spec **tl ;
  struct url_spec *t ;
  jb_err err ;
  int tmp ;
  struct http_response *tmp___0 ;
  struct http_response *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  struct http_response *tmp___4 ;
  struct http_response *tmp___5 ;
  struct list_entry *l ;
  struct http_response *tmp___6 ;
  struct http_response *tmp___7 ;
  struct http_response *tmp___8 ;
  struct http_response *tmp___9 ;

  {
  {
# 916
  tmp = is_untrusted_url(csp);
  }
# 916
  if (! tmp) {
# 918
    return ((struct http_response *)((void *)0));
  }
  {
# 924
  rsp = alloc_http_response();
  }
# 924
  if ((unsigned int )((void *)0) == (unsigned int )rsp) {
    {
# 926
    tmp___0 = cgi_error_memory();
    }
# 926
    return (tmp___0);
  }
  {
# 929
  exports = default_exports((struct client_state  const  *)csp,
                            (char const   *)((void *)0));
  }
# 930
  if ((unsigned int )exports == (unsigned int )((void *)0)) {
    {
# 932
    free_http_response(rsp);
# 933
    tmp___1 = cgi_error_memory();
    }
# 933
    return (tmp___1);
  }
  {
# 939
  err = map(exports, (char const   *)"hostport", 1,
            (char const   *)csp->http[0].hostport, 1);
  }
# 940
  if (! err) {
# 940
    if (csp->http[0].ssl) {
      {
# 940
      tmp___2 = (char const   *)"https://";
      }
    } else {
      {
# 940
      tmp___2 = (char const   *)"http://";
      }
    }
    {
# 940
    err = map(exports, (char const   *)"protocol", 1, tmp___2, 1);
    }
  }
# 941
  if (! err) {
    {
# 941
    err = map(exports, (char const   *)"path", 1,
              (char const   *)csp->http[0].path, 1);
    }
  }
  {
# 943
  p = get_header_value((struct list  const  *)(csp->headers),
                       (char const   *)"Referer:");
  }
# 943
  if ((unsigned int )((void *)0) != (unsigned int )p) {
# 945
    if (! err) {
      {
# 945
      tmp___3 = (char const   *)html_encode((char const   *)p);
# 945
      err = map(exports, (char const   *)"referrer", 1, tmp___3, 0);
      }
    }
  } else {
# 949
    if (! err) {
      {
# 949
      err = map(exports, (char const   *)"referrer", 1,
                (char const   *)"unknown", 1);
      }
    }
  }
# 952
  if (err) {
    {
# 954
    free_map(exports);
# 955
    free_http_response(rsp);
# 956
    tmp___4 = cgi_error_memory();
    }
# 956
    return (tmp___4);
  }
  {
# 962
  p = strdup((char const   *)"");
# 963
  tl = (csp->config)->trust_list;
  }
# 963
  while (1) {
    {
# 963
    t = (*tl);
    }
# 963
    if (! ((unsigned int )t != (unsigned int )((void *)0))) {
# 963
      break;
    }
    {
# 965
    sprintf((char */* __restrict  */)(buf),
            (char const   */* __restrict  */)((char const   *)"<li>%s</li>\n"),
            t->spec);
# 966
    string_append(& p, (char const   *)(buf));
# 963
    tl ++;
    }
  }
  {
# 968
  err = map(exports, (char const   *)"trusted-referrers", 1, (char const   *)p,
            0);
  }
# 970
  if (err) {
    {
# 972
    free_map(exports);
# 973
    free_http_response(rsp);
# 974
    tmp___5 = cgi_error_memory();
    }
# 974
    return (tmp___5);
  }
# 980
  if ((csp->config)->trust_info[0].first) {
    {
# 984
    p = strdup((char const   *)"");
# 985
    l = (csp->config)->trust_info[0].first;
    }
# 985
    while (l) {
      {
# 987
      sprintf((char */* __restrict  */)(buf),
              (char const   */* __restrict  */)((char const   *)"<li> <a href=\"%s\">%s</a><br>\n"),
              l->str, l->str);
# 988
      string_append(& p, (char const   *)(buf));
# 985
      l = l->next;
      }
    }
    {
# 990
    err = map(exports, (char const   *)"trust-info", 1, (char const   *)p, 0);
    }
  } else {
    {
# 994
    err = map_block_killer(exports, (char const   *)"have-trust-info");
    }
  }
# 997
  if (err) {
    {
# 999
    free_map(exports);
# 1000
    free_http_response(rsp);
# 1001
    tmp___6 = cgi_error_memory();
    }
# 1001
    return (tmp___6);
  }
  {
# 1008
  err = map(exports, (char const   *)"force-prefix", 1,
            (char const   *)"/PRIVOXY-FORCE", 1);
  }
# 1013
  if (err) {
    {
# 1015
    free_map(exports);
# 1016
    free_http_response(rsp);
# 1017
    tmp___7 = cgi_error_memory();
    }
# 1017
    return (tmp___7);
  }
  {
# 1023
  err = template_fill_for_cgi(csp, (char const   *)"untrusted", exports, rsp);
  }
# 1024
  if (err) {
    {
# 1026
    free_http_response(rsp);
# 1027
    tmp___8 = cgi_error_memory();
    }
# 1027
    return (tmp___8);
  }
  {
# 1030
  tmp___9 = finish_http_response(rsp);
  }
# 1030
  return (tmp___9);
}
}
# 1049
struct http_response *redirect_url(struct client_state *csp ) 
{ char *p ;
  char *q ;
  struct http_response *rsp ;
  char *tmp ;
  struct http_response *tmp___0 ;
  struct http_response *tmp___1 ;
  jb_err tmp___2 ;
  struct http_response *tmp___3 ;

  {
  {
# 1054
  q = csp->http[0].path;
# 1054
  p = q;
# 1055
  log_error(128, "checking path for redirects: %s", p);
  }
# 1060
  while (1) {
    {
# 1060
    p = (char *)strstr((char const   */* __attribute__((__rostring__,
                       __nullterm__)) */)((char const   *)p),
                       (char const   */* __attribute__((__rostring__,
                       __nullterm__)) */)((char const   *)"http://"));
    }
# 1060
    if (! ((unsigned int )p != (unsigned int )((void *)0))) {
# 1060
      break;
    }
    {
# 1062
    tmp = p;
# 1062
    p ++;
# 1062
    q = tmp;
    }
  }
# 1068
  if ((unsigned int )q != (unsigned int )csp->http[0].path) {
    {
# 1070
    log_error(128, "redirecting to: %s", q);
# 1072
    rsp = alloc_http_response();
    }
# 1072
    if ((unsigned int )((void *)0) == (unsigned int )rsp) {
      {
# 1074
      tmp___0 = cgi_error_memory();
      }
# 1074
      return (tmp___0);
    }
    {
# 1077
    tmp___2 = enlist_unique_header(rsp->headers, (char const   *)"Location",
                                   (char const   *)q);
    }
# 1077
    if (tmp___2) {
      {
# 1080
      free_http_response(rsp);
# 1081
      tmp___1 = cgi_error_memory();
      }
# 1081
      return (tmp___1);
    } else {
      {
# 1077
      rsp->status = strdup((char const   *)"302 Local Redirect from Privoxy");
      }
# 1077
      if ((unsigned int )((void *)0) == (unsigned int )rsp->status) {
        {
# 1080
        free_http_response(rsp);
# 1081
        tmp___1 = cgi_error_memory();
        }
# 1081
        return (tmp___1);
      }
    }
    {
# 1084
    tmp___3 = finish_http_response(rsp);
    }
# 1084
    return (tmp___3);
  } else {
# 1088
    return ((struct http_response *)((void *)0));
  }
}
}
# 1113
int is_imageurl(struct client_state *csp ) 
{ 

  {
# 1136
  return ((csp->action[0].flags & 256UL) != 0UL);
}
}
# 1160
int is_untrusted_url(struct client_state *csp ) 
{ struct file_list *fl ;
  struct block_spec *b ;
  struct url_spec **trusted_url ;
  struct http_request rhttp[1] ;
  char const   *referer ;
  jb_err err ;
  int tmp ;
  FILE *fp ;
  char *path ;
  char *path_end ;
  char *new_entry ;
  char *tmp___0 ;
  int path_len ;
  int tmp___1 ;

  {
  {
# 1172
  fl = csp->tlist;
  }
# 1172
  if ((unsigned int )fl == (unsigned int )((void *)0)) {
# 1174
    return (0);
  } else {
    {
# 1172
    b = (struct block_spec *)fl->f;
    }
# 1172
    if ((unsigned int )b == (unsigned int )((void *)0)) {
# 1174
      return (0);
    }
  }
  {
# 1177
  memset((void *)(rhttp), (int )'\0', sizeof(rhttp[0]));
# 1182
  b = b->next;
  }
# 1182
  while (b) {
    {
# 1184
    tmp = url_match((struct url_spec  const  *)(b->url),
                    (struct http_request  const  *)(csp->http));
    }
# 1184
    if (tmp) {
# 1186
      return (b->reject);
    }
    {
# 1182
    b = b->next;
    }
  }
  {
# 1190
  referer = (char const   *)get_header_value((struct list  const  *)(csp->headers),
                                             (char const   *)"Referer:");
  }
# 1190
  if ((unsigned int )((void *)0) == (unsigned int )referer) {
# 1193
    return (1);
  }
  {
# 1200
  err = parse_http_url(referer, rhttp, csp);
  }
# 1201
  if (err) {
# 1203
    return (1);
  }
  {
# 1206
  trusted_url = (csp->config)->trust_list;
  }
# 1206
  while ((unsigned int )(*trusted_url) != (unsigned int )((void *)0)) {
    {
# 1208
    tmp___1 = url_match((struct url_spec  const  *)(*trusted_url),
                        (struct http_request  const  *)(rhttp));
    }
# 1208
    if (tmp___1) {
      {
# 1217
      fp = fopen((char const   */* __restrict  */)(csp->config)->trustfile,
                 (char const   */* __restrict  */)((char const   *)"a"));
      {
# 17 "spec.work"
        fp->__BLAST_FLAG = 1;
      {

      }
      }

      }
# 1217 "filters.c"
      if ((unsigned int )((void *)0) != (unsigned int )fp) {
        {
# 1221
        tmp___0 = strdup((char const   *)"~");
# 1221
        new_entry = tmp___0;
# 1223
        string_append(& new_entry, (char const   *)csp->http[0].hostport);
# 1225
        path = csp->http[0].path;
        }
# 1226
        if ((int )(*(path + 0)) == 47) {
# 1226
          if ((int )(*(path + 1)) == 126) {
            {
# 1226
            path_end = strchr((char const   *)(path + 2), (int )'/');
            }
# 1226
            if ((unsigned int )path_end != (unsigned int )((void *)0)) {
              {
# 1233
              path_len = path_end - path;
# 1234
              path = strdup((char const   *)path);
              }
# 1235
              if ((unsigned int )path != (unsigned int )((void *)0)) {
                {
# 1237
                path_end = path + path_len;
# 1238
                (*(path_end + 1)) = '\0';
                }
              }
              {
# 1240
              string_join(& new_entry, path);
              }
            }
          }
        }
# 1243
        if ((unsigned int )new_entry != (unsigned int )((void *)0)) {
          {

          {
# 64 "spec.work"
          if (! (fp->__BLAST_FLAG == 1)) {
# 66
            __error__();
          }
          {

          }
          }
# 1245 "filters.c"
          fprintf((FILE */* __restrict  */)fp,
                  (char const   */* __restrict  */)((char const   *)"%s\n"),
                  new_entry);
# 1246
          free((void *)new_entry);
          }
        } else {
          {
# 1251
          log_error(8192, "Out of memory adding pattern to trust file");
          }
        }
        {

        {
# 96 "spec.work"
        if (fp->__BLAST_FLAG == 1) {
# 97
          fp->__BLAST_FLAG = 0;
        } else {
# 98
          __error__();
        }
        {

        }
        }
# 1254 "filters.c"
        fclose(fp);
        }
      }
# 1256
      return (0);
    }
    {
# 1206
    trusted_url ++;
    }
  }
# 1259
  return (1);
}
}
# 1281
char *pcrs_filter_response(struct client_state *csp ) 
{ int hits ;
  size_t size ;
  char *old ;
  char *new ;
  pcrs_job *job ;
  struct file_list *fl ;
  struct re_filterfile_spec *b ;
  struct list_entry *filtername ;
  int current_hits ;
  int tmp ;
  int tmp___0 ;

  {
  {
# 1283
  hits = 0;
# 1286
  old = csp->iob[0].cur;
# 1286
  new = (char *)((void *)0);
  }
# 1296
  if ((unsigned int )csp->iob[0].cur >= (unsigned int )csp->iob[0].eod) {
# 1298
    return ((char *)((void *)0));
  }
  {
# 1300
  size = (unsigned int )(csp->iob[0].eod - csp->iob[0].cur);
# 1302
  fl = csp->rlist;
  }
# 1302
  if ((unsigned int )((void *)0) == (unsigned int )fl) {
    {
# 1304
    log_error(8192, "Unable to get current state of regexp filtering.");
    }
# 1305
    return ((char *)((void *)0));
  } else {
# 1302
    if ((unsigned int )((void *)0) == (unsigned int )fl->f) {
      {
# 1304
      log_error(8192, "Unable to get current state of regexp filtering.");
      }
# 1305
      return ((char *)((void *)0));
    }
  }
# 1312
  if ((int )csp->flags & 2) {
    {
# 1314
    log_error(64, "Need to de-chunk first");
# 1315
    size = (size_t )remove_chunked_transfer_coding(csp->iob[0].cur, size);
    }
# 1315
    if (0U == size) {
# 1317
      return ((char *)((void *)0));
    }
    {
# 1319
    csp->iob[0].eod = csp->iob[0].cur + size;
# 1320
    csp->flags = (unsigned short )((int )csp->flags | 8);
    }
  }
  {
# 1328
  b = (struct re_filterfile_spec *)fl->f;
  }
# 1328
  while (b) {
    {
# 1330
    filtername = csp->action[0].multi[2][0].first;
    }
# 1330
    while (filtername) {
      {
# 1333
      tmp___0 = strcmp((char const   *)b->name, (char const   *)filtername->str);
      }
# 1333
      if (tmp___0 == 0) {
        {
# 1335
        current_hits = 0;
        }
# 1337
        if ((unsigned int )((void *)0) == (unsigned int )b->joblist) {
          {
# 1339
          log_error(64, "Filter %s has empty joblist. Nothing to do.", b->name);
          }
          goto __Cont;
        }
        {
# 1343
        log_error(64, "re_filtering %s%s (size %d) with filter %s...",
                  csp->http[0].hostport, csp->http[0].path, size, b->name);
# 1347
        job = b->joblist;
        }
# 1347
        while ((unsigned int )((void *)0) != (unsigned int )job) {
          {
# 1349
          tmp = pcrs_execute(job, old, size, & new, & size);
# 1349
          current_hits += tmp;
          }
# 1350
          if ((unsigned int )old != (unsigned int )csp->iob[0].cur) {
            {
# 1350
            free((void *)old);
            }
          }
          {
# 1351
          old = new;
# 1347
          job = job->next;
          }
        }
        {
# 1354
        log_error(64, " ...produced %d hits (new size %d).", current_hits, size);
# 1355
        hits += current_hits;
        }
      }
      __Cont: 
      {
# 1330
      filtername = filtername->next;
      }
    }
    {
# 1328
    b = b->next;
    }
  }
# 1364
  if (! hits) {
    {
# 1366
    free((void *)new);
    }
# 1367
    return ((char *)((void *)0));
  }
  {
# 1370
  csp->flags = (unsigned short )((int )csp->flags | 8);
# 1371
  csp->content_length = size;
  }
# 1372
  if (csp->iob[0].buf) {
    {
# 1372
    free((void *)csp->iob[0].buf);
    }
  }
  {
# 1372
  memset((void *)(csp->iob), (int )'\0', sizeof(csp->iob));
  }
# 1374
  return (new);
}
}
# 1394
char *gif_deanimate_response(struct client_state *csp ) 
{ struct binbuffer *in ;
  struct binbuffer *out ;
  char *p ;
  size_t size ;
  int tmp___1 ;
  int tmp___2 ;

  {
  {
# 1398
  size = (unsigned int )(csp->iob[0].eod - csp->iob[0].cur);
  }
# 1404
  if ((int )csp->flags & 2) {
    {
# 1406
    log_error(256, "Need to de-chunk first");
# 1407
    size = (size_t )remove_chunked_transfer_coding(csp->iob[0].cur, size);
    }
# 1407
    if (0U == size) {
# 1409
      return ((char *)((void *)0));
    }
    {
# 1411
    csp->iob[0].eod = csp->iob[0].cur + size;
# 1412
    csp->flags = (unsigned short )((int )csp->flags | 8);
    }
  }
  {
# 1415
  in = (struct binbuffer *)zalloc(sizeof((*in)));
  }
# 1415
  if ((unsigned int )((void *)0) == (unsigned int )in) {
    {
# 1418
    log_error(256, "failed! (no mem)");
    }
# 1419
    return ((char *)((void *)0));
  } else {
    {
# 1415
    out = (struct binbuffer *)zalloc(sizeof((*out)));
    }
# 1415
    if ((unsigned int )((void *)0) == (unsigned int )out) {
      {
# 1418
      log_error(256, "failed! (no mem)");
      }
# 1419
      return ((char *)((void *)0));
    }
  }
  {
# 1422
  in->buffer = csp->iob[0].cur;
# 1423
  in->size = size;
# 1425
  tmp___1 = strncmp((char const   *)"last",
                    (char const   *)csp->action[0].string[0], 4U);
# 1425
  tmp___2 = gif_deanimate(in, out, tmp___1);
  }
# 1425
  if (tmp___2) {
    {
# 1427
    log_error(256, "failed! (gif parsing)");
# 1428
    free((void *)in);
# 1429
    buf_free(out);
    }
# 1430
    return ((char *)((void *)0));
  } else {
# 1434
    if ((unsigned int )((int )size) == out->offset) {
      {
# 1436
      log_error(256, "GIF not changed.");
      }
    } else {
      {
# 1440
      log_error(256, "Success! GIF shrunk from %d bytes to %d.", size,
                out->offset);
      }
    }
    {
# 1442
    csp->content_length = out->offset;
# 1443
    csp->flags = (unsigned short )((int )csp->flags | 8);
# 1444
    p = out->buffer;
# 1445
    free((void *)in);
# 1446
    free((void *)out);
    }
# 1447
    return (p);
  }
}
}
# 1469
int remove_chunked_transfer_coding(char *buffer , size_t size ) 
{ size_t newsize ;
  unsigned int chunksize ;
  char *from_p ;
  char *to_p ;
  int tmp ;
  int tmp___0 ;

  {
  {
# 1471
  newsize = (unsigned int )0;
# 1472
  chunksize = 0U;
  }
# 1475
  if (! buffer) {
    {
# 1475
    __assert_fail((char const   *)"buffer", (char const   *)"filters.c", 1475U,
                  (char const   *)"remove_chunked_transfer_coding");
    }
  }
  {
# 1476
  to_p = buffer;
# 1476
  from_p = to_p;
# 1478
  tmp = sscanf((char const   */* __restrict  */)((char const   *)buffer),
               (char const   */* __restrict  */)((char const   *)"%x"),
               & chunksize);
  }
# 1478
  if (tmp != 1) {
    {
# 1480
    log_error(8192,
              "Invalid first chunksize while stripping \"chunked\" transfer coding");
    }
# 1481
    return (0);
  }
# 1484
  while (chunksize > 0U) {
    {
# 1486
    from_p = (char *)strstr((char const   */* __attribute__((__rostring__,
                            __nullterm__)) */)((char const   *)from_p),
                            (char const   */* __attribute__((__rostring__,
                            __nullterm__)) */)((char const   *)"\r\n"));
    }
# 1486
    if ((unsigned int )((void *)0) == (unsigned int )from_p) {
      {
# 1488
      log_error(8192, "Parse error while stripping \"chunked\" transfer coding");
      }
# 1489
      return (0);
    }
    {
# 1492
    newsize += chunksize;
    }
# 1492
    if (newsize >= size) {
      {
# 1494
      log_error(8192, "Chunksize exceeds buffer in  \"chunked\" transfer coding");
      }
# 1495
      return (0);
    }
    {
# 1497
    from_p += 2;
# 1499
    memmove((void *)to_p, (void const   *)from_p, chunksize);
# 1500
    to_p = buffer + newsize;
# 1501
    from_p += chunksize + 2U;
# 1503
    tmp___0 = sscanf((char const   */* __restrict  */)((char const   *)from_p),
                     (char const   */* __restrict  */)((char const   *)"%x"),
                     & chunksize);
    }
# 1503
    if (tmp___0 != 1) {
      {
# 1505
      log_error(8192, "Parse error while stripping \"chunked\" transfer coding");
      }
# 1506
      return (0);
    }
  }
  {
# 1511
  log_error(64, "De-chunking successful. Shrunk from %d to %d\n", size, newsize);
  }
# 1512
  return ((int )newsize);
}
}
# 1530
void url_actions(struct http_request *http , struct client_state *csp ) 
{ struct file_list *fl ;
  struct url_actions *b ;
  int i ;

  {
  {
# 1537
  init_current_action(csp->action);
# 1539
  i = 0;
  }
# 1539
  while (i < 10) {
    {
# 1541
    fl = csp->actions_list[i];
    }
# 1541
    if ((unsigned int )fl == (unsigned int )((void *)0)) {
# 1543
      return;
    } else {
      {
# 1541
      b = (struct url_actions *)fl->f;
      }
# 1541
      if ((unsigned int )b == (unsigned int )((void *)0)) {
# 1543
        return;
      }
    }
    {
# 1546
    apply_url_actions(csp->action, http, b);
# 1539
    i ++;
    }
  }
# 1549
  return;
}
}
# 1567
void apply_url_actions(struct current_action_spec *action ,
                       struct http_request *http , struct url_actions *b ) 
{ int tmp ;

  {
# 1571
  if ((unsigned int )b == (unsigned int )((void *)0)) {
# 1574
    return;
  }
  {
# 1577
  b = b->next;
  }
# 1577
  while ((unsigned int )((void *)0) != (unsigned int )b) {
    {
# 1579
    tmp = url_match((struct url_spec  const  *)(b->url),
                    (struct http_request  const  *)http);
    }
# 1579
    if (tmp) {
      {
# 1581
      merge_current_action(action, (struct action_spec  const  *)(b->action));
      }
    }
    {
# 1577
    b = b->next;
    }
  }
# 1584
  return;
}
}
# 1603
static struct forward_spec  const  fwd_default[1]   = {{{{(char *)((void *)0),
                                                          (char *)((void *)0),
                                                          (char **)((void *)0),
                                                          0, 0, 0,
                                                          (char *)((void *)0),
                                                          0,
                                                          (regex_t *)((void *)0)}},
                                                        0, (char *)((void *)0),
                                                        0, (char *)((void *)0),
                                                        0,
                                                        (struct forward_spec *)((void *)0)}};
# 1600
struct forward_spec  const  *forward_url(struct http_request *http ,
                                         struct client_state *csp ) 
{ struct forward_spec *fwd ;
  int tmp ;

  {
  {
# 1604
  fwd = (csp->config)->forward;
  }
# 1606
  if ((unsigned int )fwd == (unsigned int )((void *)0)) {
# 1608
    return (fwd_default);
  }
# 1611
  while ((unsigned int )fwd != (unsigned int )((void *)0)) {
    {
# 1613
    tmp = url_match((struct url_spec  const  *)(fwd->url),
                    (struct http_request  const  *)http);
    }
# 1613
    if (tmp) {
# 1615
      return ((struct forward_spec  const  *)fwd);
    }
    {
# 1617
    fwd = fwd->next;
    }
  }
# 1620
  return (fwd_default);
}
}
# 1641
struct http_response *direct_response(struct client_state *csp ) 
{ struct http_response *rsp ;
  struct list_entry *p ;
  struct http_response *tmp ;
  struct http_response *tmp___0 ;
  struct http_response *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  {
# 1646
  tmp___4 = strcmpic((char const   *)csp->http[0].gpc, (char const   *)"trace");
  }
# 1646
  if (0 == tmp___4) {
    goto _L;
  } else {
    {
# 1646
    tmp___5 = strcmpic((char const   *)csp->http[0].gpc,
                       (char const   *)"options");
    }
# 1646
    if (0 == tmp___5) {
      _L: 
      {
# 1649
      p = csp->headers[0].first;
      }
# 1649
      while ((unsigned int )p != (unsigned int )((void *)0)) {
        {
# 1651
        tmp___2 = strncmp((char const   *)"Max-Forwards:",
                          (char const   *)p->str, 13U);
        }
# 1651
        if (! tmp___2) {
# 1651
          if ((int )(*(p->str + 13)) != 0) {
            {
# 1651
            tmp___3 = atoi((char const   *)(p->str + 13));
            }
# 1651
            if (tmp___3 == 0) {
              {
# 1658
              log_error(8,
                        "Found Max-Forwards:0 in OPTIONS or TRACE request -- Returning 501");
# 1661
              rsp = alloc_http_response();
              }
# 1661
              if ((unsigned int )((void *)0) == (unsigned int )rsp) {
                {
# 1663
                tmp = cgi_error_memory();
                }
# 1663
                return (tmp);
              }
              {
# 1666
              rsp->status = strdup((char const   *)"501 Not Implemented");
              }
# 1666
              if ((unsigned int )((void *)0) == (unsigned int )rsp->status) {
                {
# 1668
                free_http_response(rsp);
# 1669
                tmp___0 = cgi_error_memory();
                }
# 1669
                return (tmp___0);
              }
              {
# 1672
              rsp->is_static = 1;
# 1673
              tmp___1 = finish_http_response(rsp);
              }
# 1673
              return (tmp___1);
            }
          }
        }
        {
# 1649
        p = p->next;
        }
      }
    }
  }
# 1677
  return ((struct http_response *)((void *)0));
}
}
# 1 "gateway.c"
__asm__("booo - error in global gateway_rcs (gateway.c:1)");
# 99 "gateway.h"
jb_socket forwarded_connect(struct forward_spec  const  *fwd ,
                            struct http_request *http ,
                            struct client_state *csp ) ;
# 153 "gateway.c"
char const   gateway_h_rcs[51]   = 
# 153
  {'$', 'I', 'd', ':', ' ', 'g', 'a', 't', 'e', 'w', 'a', 'y', '.', 'h', ',',
   'v', ' ', '1', '.', '7', ' ', '2', '0', '0', '2', '/', '0', '3', '/', '2',
   '6', ' ', '2', '2', ':', '2', '9', ':', '5', '4', ' ', 's', 'w', 'a', ' ',
   'E', 'x', 'p', ' ', '$', '\0'};
# 155
static jb_socket socks4_connect(struct forward_spec  const  *fwd ,
                                char const   *target_host , int target_port ,
                                struct client_state *csp ) ;
# 184
static char const   socks_userid[10]   = 
# 184
  {'a', 'n', 'o', 'n', 'y', 'm', 'o', 'u', 's', '\0'};
# 202
jb_socket forwarded_connect(struct forward_spec  const  *fwd ,
                            struct http_request *http ,
                            struct client_state *csp ) 
{ char const   *dest_host ;
  int dest_port ;
  jb_socket tmp ;
  jb_socket tmp___0 ;
  int *tmp___1 ;

  {
# 210
  if (fwd->forward_host) {
    {
# 213
    dest_host = (char const   *)fwd->forward_host;
# 214
    dest_port = fwd->forward_port;
    }
  } else {
    {
# 219
    dest_host = (char const   *)http->host;
# 220
    dest_port = http->port;
    }
  }
# 224
  switch (fwd->type) {
  case 0: 
  {
# 227
  tmp = connect_to(dest_host, dest_port, csp);
  }
# 227
  return (tmp);
  case 40: 
  {

  }
  case 41: 
  {
# 231
  tmp___0 = socks4_connect(fwd, dest_host, dest_port, csp);
  }
# 231
  return (tmp___0);
  default: 
  {
# 235
  log_error(16384, "SOCKS4 impossible internal error - bad SOCKS type.");
# 236
  tmp___1 = __errno_location();
# 236
  (*tmp___1) = 22;
  }
# 237
  return (-1);
  }
# 237
  return (0);
}
}
# 261
static jb_socket socks4_connect(struct forward_spec  const  *fwd ,
                                char const   *target_host , int target_port ,
                                struct client_state *csp ) 
{ int web_server_addr ;
  char cbuf[5000] ;
  char sbuf[5000] ;
  struct socks_op *c ;
  struct socks_reply *s ;
  size_t n ;
  size_t csiz ;
  jb_socket sfd ;
  int err ;
  char *errstr ;
  int *tmp ;
  register unsigned int __v ;
  register unsigned int __x ;
  unsigned int tmp___0 ;
  int tmp___1 ;
  size_t tmp___2 ;
  int *tmp___3 ;
  int *tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int *tmp___7 ;
  int *tmp___8 ;
  int *tmp___9 ;
  int *tmp___10 ;

  {
  {
# 269
  c = (struct socks_op *)(cbuf);
# 270
  s = (struct socks_reply *)(sbuf);
# 274
  err = 0;
  }
# 277
  if ((unsigned int )fwd->gateway_host == (unsigned int )((void *)0)) {
    {
# 279
    log_error(2, "socks4_connect: NULL gateway host specified");
# 280
    err = 1;
    }
  } else {
# 277
    if ((int )(*(fwd->gateway_host)) == 0) {
      {
# 279
      log_error(2, "socks4_connect: NULL gateway host specified");
# 280
      err = 1;
      }
    }
  }
# 283
  if (fwd->gateway_port <= 0) {
    {
# 285
    log_error(2, "socks4_connect: invalid gateway port specified");
# 286
    err = 1;
    }
  }
# 289
  if (err) {
    {
# 291
    tmp = __errno_location();
# 291
    (*tmp) = 22;
    }
# 292
    return (-1);
  }
  {
# 297
  strcpy((char */* __restrict  */)((char *)(& c->userid)),
         (char const   */* __restrict  */)(socks_userid));
# 299
  csiz = (sizeof((*c)) + sizeof(socks_userid)) - 1U;
  }
# 301
  switch (fwd->type) {
  case 40: 
  {
# 304
  tmp___0 = (unsigned int )resolve_hostname_to_ip(target_host);
# 304
  __x = tmp___0;
# 304
  tmp___1 = __builtin_constant_p((int )__x);
  }
# 304
  if (tmp___1) {
    {
# 304
    __v = ((((__x & 4278190080U) >> 24) | ((__x & 16711680U) >> 8)) |
           ((__x & 65280U) << 8)) | ((__x & 255U) << 24);
    }
  } else {
    {
# 304
    __asm__  ("rorw $8, %w0;"
              "rorl $16, %0;"
              "rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
    }
  }
  {
# 304
  web_server_addr = (int )__v;
  }
# 305
  if ((unsigned int )web_server_addr == 4294967295U) {
    {
# 307
    log_error(2, "socks4_connect: could not resolve target host %s", target_host);
    }
# 308
    return (-1);
  }
# 310
  break;
  case 41: 
  {
# 312
  web_server_addr = 1;
# 313
  tmp___2 = strlen(target_host);
# 313
  n = (csiz + tmp___2) + 1U;
  }
# 314
  if (n > sizeof(cbuf)) {
    {
# 316
    tmp___3 = __errno_location();
# 316
    (*tmp___3) = 22;
    }
# 317
    return (-1);
  }
  {
# 319
  strcpy((char */* __restrict  */)(cbuf + csiz),
         (char const   */* __restrict  */)target_host);
# 320
  csiz = n;
  }
# 321
  break;
  default: 
  {
# 324
  log_error(16384, "SOCKS4 impossible internal error - bad SOCKS type.");
# 325
  tmp___4 = __errno_location();
# 325
  (*tmp___4) = 22;
  }
# 326
  return (-1);
  }
  {
# 329
  c->vn = (unsigned char )4;
# 330
  c->cd = (unsigned char )1;
# 331
  c->dstport[0] = (unsigned char )((target_port >> 8) & 255);
# 332
  c->dstport[1] = (unsigned char )(target_port & 255);
# 333
  c->dstip[0] = (unsigned char )((web_server_addr >> 24) & 255);
# 334
  c->dstip[1] = (unsigned char )((web_server_addr >> 16) & 255);
# 335
  c->dstip[2] = (unsigned char )((web_server_addr >> 8) & 255);
# 336
  c->dstip[3] = (unsigned char )(web_server_addr & 255);
# 339
  sfd = connect_to((char const   *)fwd->gateway_host, fwd->gateway_port, csp);
  }
# 341
  if (sfd == -1) {
# 343
    return (-1);
  }
  {
# 346
  tmp___5 = write_socket(sfd, (char const   *)((char *)c), csiz);
  }
# 346
  if (tmp___5) {
    {
# 348
    log_error(2, "SOCKS4 negotiation write failed...");
# 349
    close_socket(sfd);
    }
# 350
    return (-1);
  }
  {
# 353
  tmp___6 = read_socket(sfd, sbuf, (int )sizeof(sbuf));
  }
# 353
  if ((unsigned int )tmp___6 != sizeof((*s))) {
    {
# 355
    log_error(2, "SOCKS4 negotiation read failed...");
# 356
    close_socket(sfd);
    }
# 357
    return (-1);
  }
# 360
  switch ((int )s->cd) {
  case 90: 
  {

  }
# 363
  return (sfd);
# 364
  break;
  case 91: 
  {
# 366
  errstr = "SOCKS request rejected or failed";
# 367
  tmp___7 = __errno_location();
# 367
  (*tmp___7) = 22;
  }
# 368
  break;
  case 92: 
  {
# 370
  errstr = "SOCKS request rejected because SOCKS server cannot connect to identd on the client";
# 372
  tmp___8 = __errno_location();
# 372
  (*tmp___8) = 13;
  }
# 373
  break;
  case 93: 
  {
# 375
  errstr = "SOCKS request rejected because the client program and identd report different user-ids";
# 378
  tmp___9 = __errno_location();
# 378
  (*tmp___9) = 13;
  }
# 379
  break;
  default: 
  {
# 381
  errstr = cbuf;
# 382
  tmp___10 = __errno_location();
# 382
  (*tmp___10) = 2;
# 383
  sprintf((char */* __restrict  */)errstr,
          (char const   */* __restrict  */)((char const   *)"SOCKS request rejected for reason code %d\n"),
          s->cd);
  }
  }
  {
# 387
  log_error(2, "socks4_connect: %s ...", errstr);
# 389
  close_socket(sfd);
  }
# 390
  return (-1);
}
}
# 1 "jbsockets.c"
__asm__("booo - error in global jbsockets_rcs (jbsockets.c:1)");
# 141 "/users/rupak/ccured/include/gcc_3.2/netdb.h"
extern int gethostbyaddr_r(void const   * __restrict  __addr ,
                           __socklen_t __len , int __type ,
                           struct hostent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct hostent ** __restrict  __result ,
                           int * __restrict  __h_errnop ) ;
# 148
extern int gethostbyname_r(char const   * __restrict  __name ,
                           struct hostent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct hostent ** __restrict  __result ,
                           int * __restrict  __h_errnop ) ;
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
# 100 "/usr/include/sys/socket.h"
extern int socket(int __domain , int __type , int __protocol ) ;
# 110
extern int bind(int __fd , void const   *__addr , socklen_t __len ) ;
# 114
extern int getsockname(int __fd , void * __restrict  __addr ,
                       socklen_t * __restrict  __len ) ;
# 121
extern int connect(int __fd , void const   *__addr , socklen_t __len ) ;
# 175
extern int setsockopt(int __fd , int __level , int __optname ,
                      void const   *__optval , socklen_t __optlen ) ;
# 182
extern int listen(int __fd , int __n ) ;
# 189
extern int accept(int __fd , void * __restrict  __addr ,
                  socklen_t * __restrict  __addr_len ) ;
# 35 "/users/rupak/ccured/include/gcc_3.2/arpa/inet.h"
extern in_addr_t inet_addr(char const   *__cp ) ;
# 54
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
# 262 "jbsockets.c"
char const   jbsockets_h_rcs[60]   = 
# 262
  {'$', 'I', 'd', ':', ' ', 'j', 'b', 's', 'o', 'c', 'k', 'e', 't', 's', '.',
   'h', ',', 'v', ' ', '1', '.', '9', '.', '2', '.', '1', ' ', '2', '0', '0',
   '2', '/', '0', '5', '/', '2', '6', ' ', '2', '3', ':', '4', '1', ':', '2',
   '7', ' ', 'j', 'o', 'e', 'r', 'g', 's', ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 282
jb_socket connect_to(char const   *host , int portnum ,
                     struct client_state *csp ) 
{ struct sockaddr_in inaddr ;
  jb_socket fd ;
  int addr ;
  fd_set wfds ;
  struct timeval tv[1] ;
  int flags ;
  struct access_control_addr dst[1] ;
  register unsigned int __v ;
  register unsigned int __x ;
  int tmp ;
  int *tmp___0 ;
  int tmp___1 ;
  char const   *tmp___2 ;
  register unsigned short __v___0 ;
  register unsigned short __x___0 ;
  int tmp___3 ;
  register unsigned int __v___1 ;
  register unsigned int __x___1 ;
  int tmp___4 ;
  int mi ;
  int *tmp___5 ;
  int *tmp___6 ;
  int tmp___7 ;
  unsigned int __i ;
  fd_set *__arr ;
  int tmp___8 ;

  {
  {
# 297
  memset((void *)((char *)(& inaddr)), 0, sizeof(inaddr));
# 299
  addr = (int )resolve_hostname_to_ip(host);
  }
# 299
  if ((unsigned int )addr == 4294967295U) {
    {
# 301
    csp->http[0].host_ip_addr_str = strdup((char const   *)"unknown");
    }
# 302
    return (-1);
  }
  {
# 306
  __x = (unsigned int )((unsigned long )addr);
# 306
  tmp = __builtin_constant_p((int )__x);
  }
# 306
  if (tmp) {
    {
# 306
    __v = ((((__x & 4278190080U) >> 24) | ((__x & 16711680U) >> 8)) |
           ((__x & 65280U) << 8)) | ((__x & 255U) << 24);
    }
  } else {
    {
# 306
    __asm__  ("rorw $8, %w0;"
              "rorl $16, %0;"
              "rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
    }
  }
  {
# 306
  dst[0].addr = (unsigned long )__v;
# 307
  dst[0].port = (unsigned long )portnum;
# 309
  tmp___1 = block_acl(dst, csp);
  }
# 309
  if (tmp___1) {
    {
# 314
    tmp___0 = __errno_location();
# 314
    (*tmp___0) = 1;
    }
# 316
    return (-1);
  }
  {
# 320
  inaddr.sin_addr.s_addr = (unsigned int )addr;
# 321
  inaddr.sin_family = (unsigned short )2;
# 322
  tmp___2 = (char const   *)inet_ntoa(inaddr.sin_addr);
# 322
  csp->http[0].host_ip_addr_str = strdup(tmp___2);
  }
# 325
  if (sizeof(inaddr.sin_port) == sizeof(short )) {
    {
# 328
    __x___0 = (unsigned short )portnum;
# 328
    tmp___3 = __builtin_constant_p((int )__x___0);
    }
# 328
    if (tmp___3) {
      {
# 328
      __v___0 = (unsigned short )((((int )__x___0 >> 8) & 255) |
                                  (((int )__x___0 & 255) << 8));
      }
    } else {
      {
# 328
      __asm__  ("rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
      }
    }
    {
# 328
    inaddr.sin_port = __v___0;
    }
  } else {
    {
# 333
    __x___1 = (unsigned int )((unsigned long )portnum);
# 333
    tmp___4 = __builtin_constant_p((int )__x___1);
    }
# 333
    if (tmp___4) {
      {
# 333
      __v___1 = ((((__x___1 & 4278190080U) >> 24) | ((__x___1 & 16711680U) >> 8)) |
                 ((__x___1 & 65280U) << 8)) | ((__x___1 & 255U) << 24);
      }
    } else {
      {
# 333
      __asm__  ("rorw $8, %w0;"
                "rorl $16, %0;"
                "rorw $8, %w0": "=r" (__v___1): "0" (__x___1): "cc");
      }
    }
    {
# 333
    inaddr.sin_port = (unsigned short )__v___1;
    }
  }
  {
# 340
  fd = socket((int )inaddr.sin_family, 1, 0);
  }
# 340
  if (fd < 0) {
# 343
    return (-1);
  }
  {
# 348
  mi = 1;
# 349
  setsockopt(fd, 6, 1, (void const   *)((char *)(& mi)), sizeof(int ));
# 354
  flags = fcntl(fd, 3, 0);
  }
# 354
  if (flags != -1) {
    {
# 356
    flags |= 2048;
# 357
    fcntl(fd, 4, flags);
    }
  }
# 361
  while (1) {
    {
# 361
    tmp___7 = connect(fd, (void const   *)((struct sockaddr *)(& inaddr)),
                      sizeof(inaddr));
    }
# 361
    if (! (tmp___7 == -1)) {
# 361
      break;
    }
    {
# 368
    tmp___5 = __errno_location();
    }
# 368
    if ((*tmp___5) == 115) {
# 371
      break;
    }
    {
# 377
    tmp___6 = __errno_location();
    }
# 377
    if ((*tmp___6) != 4) {
      {
# 380
      close_socket(fd);
      }
# 381
      return (-1);
    }
  }
# 386
  if (flags != -1) {
    {
# 388
    flags &= -2049;
# 389
    fcntl(fd, 4, flags);
    }
  }
# 394
  while (1) {
    {
# 394
    __arr = & wfds;
# 394
    __i = 0U;
    }
# 394
    while (__i < sizeof(fd_set ) / sizeof(__fd_mask )) {
      {
# 394
      __arr->__fds_bits[__i] = 0L;
# 394
      __i ++;
      }
    }
# 394
    break;
  }
  {
# 395
  wfds.__fds_bits[(unsigned int )fd / (8U * sizeof(__fd_mask ))] = wfds.__fds_bits[(unsigned int )fd /
                                                                                   (8U *
                                                                                    sizeof(__fd_mask ))] |
                                                                   (1L <<
                                                                    (unsigned int )fd %
                                                                    (8U *
                                                                     sizeof(__fd_mask )));
# 397
  tv[0].tv_sec = 30L;
# 398
  tv[0].tv_usec = 0L;
# 401
  tmp___8 = select(fd + 1, (fd_set */* __restrict  */)((fd_set *)((void *)0)),
                   (fd_set */* __restrict  */)(& wfds),
                   (fd_set */* __restrict  */)((fd_set *)((void *)0)),
                   (struct timeval */* __restrict  */)(tv));
  }
# 401
  if (tmp___8 <= 0) {
    {
# 403
    close_socket(fd);
    }
# 404
    return (-1);
  }
# 406
  return (fd);
}
}
# 429
int write_socket(jb_socket fd , char const   *buf , size_t len ) 
{ ssize_t tmp ;

  {
# 432
  if (len == 0U) {
# 434
    return (0);
  }
# 437
  if (len < 0U) {
# 439
    return (1);
  }
  {
# 442
  log_error(16, "%N", len, buf);
# 470
  tmp = write(fd, (void const   *)buf, len);
  }
# 470
  return ((unsigned int )tmp != len);
}
}
# 501
int read_socket(jb_socket fd , char *buf , int len ) 
{ int tmp ;

  {
# 503
  if (len <= 0) {
# 505
    return (0);
  }
  {
# 513
  tmp = read(fd, (void *)buf, (unsigned int )len);
  }
# 513
  return (tmp);
}
}
# 530
void close_socket(jb_socket fd ) 
{ 

  {
  {
# 539
  close(fd);
  }
# 542
  return;
}
}
# 562
int bind_port(char const   *hostnam , int portnum , jb_socket *pfd ) 
{ struct sockaddr_in inaddr ;
  jb_socket fd ;
  int one ;
  register unsigned short __v ;
  register unsigned short __x ;
  int tmp ;
  register unsigned int __v___0 ;
  register unsigned int __x___0 ;
  int tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;
  int *tmp___3 ;
  int tmp___4 ;

  {
  {
# 567
  one = 1;
# 570
  (*pfd) = -1;
# 572
  memset((void *)((char *)(& inaddr)), (int )'\0', sizeof(inaddr));
# 574
  inaddr.sin_family = (unsigned short )2;
# 575
  inaddr.sin_addr.s_addr = (in_addr_t )resolve_hostname_to_ip(hostnam);
  }
# 577
  if (inaddr.sin_addr.s_addr == 4294967295U) {
# 579
    return (-2);
  }
# 583
  if (sizeof(inaddr.sin_port) == sizeof(short )) {
    {
# 586
    __x = (unsigned short )portnum;
# 586
    tmp = __builtin_constant_p((int )__x);
    }
# 586
    if (tmp) {
      {
# 586
      __v = (unsigned short )((((int )__x >> 8) & 255) |
                              (((int )__x & 255) << 8));
      }
    } else {
      {
# 586
      __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
      }
    }
    {
# 586
    inaddr.sin_port = __v;
    }
  } else {
    {
# 591
    __x___0 = (unsigned int )((unsigned long )portnum);
# 591
    tmp___0 = __builtin_constant_p((int )__x___0);
    }
# 591
    if (tmp___0) {
      {
# 591
      __v___0 = ((((__x___0 & 4278190080U) >> 24) | ((__x___0 & 16711680U) >> 8)) |
                 ((__x___0 & 65280U) << 8)) | ((__x___0 & 255U) << 24);
      }
    } else {
      {
# 591
      __asm__  ("rorw $8, %w0;"
                "rorl $16, %0;"
                "rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
      }
    }
    {
# 591
    inaddr.sin_port = (unsigned short )__v___0;
    }
  }
  {
# 595
  fd = socket(2, 1, 0);
  }
# 600
  if (fd < 0) {
# 603
    return (-1);
  }
  {
# 619
  setsockopt(fd, 1, 2, (void const   *)((char *)(& one)), sizeof(one));
# 622
  tmp___2 = bind(fd, (void const   *)((struct sockaddr *)(& inaddr)),
                 sizeof(inaddr));
  }
# 622
  if (tmp___2 < 0) {
    {
# 628
    tmp___1 = __errno_location();
    }
# 628
    if ((*tmp___1) == 98) {
      {
# 631
      close_socket(fd);
      }
# 632
      return (-3);
    } else {
      {
# 636
      close_socket(fd);
      }
# 637
      return (-1);
    }
  }
# 641
  while (1) {
    {
# 641
    tmp___4 = listen(fd, 5);
    }
# 641
    if (! (tmp___4 == -1)) {
# 641
      break;
    }
    {
# 643
    tmp___3 = __errno_location();
    }
# 643
    if ((*tmp___3) != 4) {
# 645
      return (-1);
    }
  }
  {
# 649
  (*pfd) = fd;
  }
# 650
  return (0);
}
}
# 671
int accept_connection(struct client_state *csp , jb_socket fd ) 
{ struct sockaddr_in client ;
  struct sockaddr_in server ;
  struct hostent *host ;
  jb_socket afd ;
  socklen_t c_length ;
  socklen_t s_length ;
  struct hostent result ;
  char hbuf[1024] ;
  int thd_err ;
  int *tmp ;
  char const   *tmp___0 ;
  int tmp___1 ;
  char const   *tmp___2 ;
  register unsigned int __v ;
  register unsigned int __x ;
  int tmp___3 ;

  {
  {
# 674
  host = (struct hostent *)((void *)0);
# 692
  s_length = sizeof(client);
# 692
  c_length = s_length;
  }
# 701
  while (1) {
    {
# 703
    afd = accept(fd,
                 (void */* __restrict  */)((void *)((struct sockaddr *)(& client))),
                 (socklen_t */* __restrict  */)(& c_length));
    }
# 701
    if (afd < 1) {
      {
# 701
      tmp = __errno_location();
      }
# 701
      if (! ((*tmp) == 4)) {
# 701
        break;
      }
    } else {
# 701
      break;
    }
  }
# 705
  if (afd < 0) {
# 707
    return (0);
  }
  {
# 715
  tmp___1 = getsockname(afd,
                        (void */* __restrict  */)((void *)((struct sockaddr *)(& server))),
                        (socklen_t */* __restrict  */)(& s_length));
  }
# 715
  if (! tmp___1) {
    {
# 717
    tmp___0 = (char const   *)inet_ntoa(server.sin_addr);
# 717
    csp->my_ip_addr_str = strdup(tmp___0);
# 719
    gethostbyaddr_r((void const   */* __restrict  */)((void const   *)((char const   *)(& server.sin_addr))),
                    sizeof(server.sin_addr), 2,
                    (struct hostent */* __restrict  */)(& result),
                    (char */* __restrict  */)(hbuf), 1024U,
                    (struct hostent **/* __restrict  */)(& host),
                    (int */* __restrict  */)(& thd_err));
    }
# 747
    if ((unsigned int )host == (unsigned int )((void *)0)) {
      {
# 749
      log_error(8192, "Unable to get my own hostname: %E\n");
      }
    } else {
      {
# 753
      csp->my_hostname = strdup((char const   *)host->h_name);
      }
    }
  }
  {
# 757
  csp->cfd = afd;
# 758
  tmp___2 = (char const   *)inet_ntoa(client.sin_addr);
# 758
  csp->ip_addr_str = strdup(tmp___2);
# 759
  __x = client.sin_addr.s_addr;
# 759
  tmp___3 = __builtin_constant_p((int )__x);
  }
# 759
  if (tmp___3) {
    {
# 759
    __v = ((((__x & 4278190080U) >> 24) | ((__x & 16711680U) >> 8)) |
           ((__x & 65280U) << 8)) | ((__x & 255U) << 24);
    }
  } else {
    {
# 759
    __asm__  ("rorw $8, %w0;"
              "rorl $16, %0;"
              "rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
    }
  }
  {
# 759
  csp->ip_addr_long = (long )__v;
  }
# 761
  return (1);
}
}
# 779
unsigned long resolve_hostname_to_ip(char const   *host ) 
{ struct sockaddr_in inaddr ;
  struct hostent *hostp ;
  struct hostent result ;
  char hbuf[1024] ;
  int thd_err ;
  int *tmp ;
  int *tmp___0 ;

  {
# 793
  if ((unsigned int )host == (unsigned int )((void *)0)) {
# 795
    return (0UL);
  } else {
# 793
    if ((int const   )(*host) == 0) {
# 795
      return (0UL);
    }
  }
  {
# 798
  memset((void *)((char *)(& inaddr)), 0, sizeof(inaddr));
# 800
  inaddr.sin_addr.s_addr = inet_addr(host);
  }
# 800
  if (inaddr.sin_addr.s_addr == 4294967295U) {
    {
# 803
    gethostbyname_r((char const   */* __restrict  */)host,
                    (struct hostent */* __restrict  */)(& result),
                    (char */* __restrict  */)(hbuf), 1024U,
                    (struct hostent **/* __restrict  */)(& hostp),
                    (int */* __restrict  */)(& thd_err));
    }
# 830
    if ((unsigned int )hostp == (unsigned int )((void *)0)) {
      {
# 832
      tmp = __errno_location();
# 832
      (*tmp) = 22;
# 833
      log_error(8192, "could not resolve hostname %s", host);
      }
# 834
      return (4294967295UL);
    } else {
# 830
      if ((unsigned int )(*(hostp->h_addr_list + 0)) ==
          (unsigned int )((void *)0)) {
        {
# 832
        tmp = __errno_location();
# 832
        (*tmp) = 22;
# 833
        log_error(8192, "could not resolve hostname %s", host);
        }
# 834
        return (4294967295UL);
      }
    }
# 836
    if (hostp->h_addrtype != 2) {
      {
# 841
      tmp___0 = __errno_location();
# 841
      (*tmp___0) = 91;
# 843
      log_error(8192, "hostname %s resolves to unknown address type.", host);
      }
# 844
      return (4294967295UL);
    }
    {
# 846
    memcpy((void */* __restrict  */)((void *)((char *)(& inaddr.sin_addr))),
           (void const   */* __restrict  */)((void const   *)(*(hostp->h_addr_list +
                                                                0))),
           sizeof(inaddr.sin_addr));
    }
  }
# 852
  return ((unsigned long )inaddr.sin_addr.s_addr);
}
}
# 1 "jcc.c"
__asm__("booo - error in global jcc_rcs (jcc.c:1)");
# 90 "/users/rupak/ccured/include/gcc_3.2/signal.h"
extern __sighandler_t signal(int __sig , void (*__handler)(int  ) ) ;
# 80 "/users/rupak/ccured/include/signal_wrappers.h"
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
# 129 "/usr/include/sys/wait.h"
extern __pid_t waitpid(__pid_t __pid , int *__stat_loc , int __options ) ;
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
# 84 "/users/rupak/ccured/include/gcc_3.2/grp.h"
extern struct group *getgrnam(char const   *__name ) ;
# 13 "/users/rupak/ccured/include/grp_wrappers.h"
extern void __deepcopy_group_from_compat(struct group *fat ,
                                         struct group  __attribute__((__compat__)) *compat ) 
{ 

  {
  {
# 15
  fat->gr_name = __mkptr_string((char */* __attribute__((__safe__)) */)compat->gr_name);
# 16
  fat->gr_passwd = __mkptr_string((char */* __attribute__((__safe__)) */)compat->gr_passwd);
# 18
  fat->gr_mem = __deepcopy_stringarray_from_compat((char * __attribute__((__safe__)) */* __attribute__((__safe__)) */)((char * __attribute__((__safe__)) *)compat->gr_mem));
  }
# 19
  return;
}
}
# 21
static struct group my_group_result  ;
# 1460 "project.h"
static char const   CSUCCEED___8[67]   = 
# 1460
  {'H', 'T', 'T', 'P', '/', '1', '.', '0', ' ', '2', '0', '0', ' ', 'C', 'o',
   'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', ' ', 'e', 's', 't', 'a', 'b', 'l',
   'i', 's', 'h', 'e', 'd', '\n', 'P', 'r', 'o', 'x', 'y', '-', 'A', 'g', 'e',
   'n', 't', ':', ' ', 'P', 'r', 'i', 'v', 'o', 'x', 'y', '/', '3', '.', '0',
   '.', '3', '\r', '\n', '\r', '\n', '\0'};
# 1464
static char const   CHEADER___8[54]   = 
# 1464
  {'H', 'T', 'T', 'P', '/', '1', '.', '0', ' ', '4', '0', '0', ' ', 'I', 'n',
   'v', 'a', 'l', 'i', 'd', ' ', 'h', 'e', 'a', 'd', 'e', 'r', ' ', 'r', 'e',
   'c', 'e', 'i', 'v', 'e', 'd', ' ', 'f', 'r', 'o', 'm', ' ', 'b', 'r', 'o',
   'w', 's', 'e', 'r', '\r', '\n', '\r', '\n', '\0'};
# 1467
static char const   CFORBIDDEN___8[126]   = 
# 1467
  {'H', 'T', 'T', 'P', '/', '1', '.', '0', ' ', '4', '0', '3', ' ', 'C', 'o',
   'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', ' ', 'n', 'o', 't', ' ', 'a', 'l',
   'l', 'o', 'w', 'a', 'b', 'l', 'e', '\r', '\n', 'X', '-', 'H', 'i', 'n', 't',
   ':', ' ', 'I', 'f', ' ', 'y', 'o', 'u', ' ', 'r', 'e', 'a', 'd', ' ', 't',
   'h', 'i', 's', ' ', 'm', 'e', 's', 's', 'a', 'g', 'e', ' ', 'i', 'n', 't',
   'e', 'r', 'a', 'c', 't', 'i', 'v', 'e', 'l', 'y', ',', ' ', 't', 'h', 'e',
   'n', ' ', 'y', 'o', 'u', ' ', 'k', 'n', 'o', 'w', ' ', 'w', 'h', 'y', ' ',
   't', 'h', 'i', 's', ' ', 'h', 'a', 'p', 'p', 'e', 'n', 's', ' ', ',', '-',
   ')', '\r', '\n', '\r', '\n', '\0'};
# 88 "killpopup.h"
void filter_popups(char *buff , struct client_state *csp ) ;
# 680 "jcc.c"
char const   jcc_h_rcs[63]   = 
# 680
  {'$', 'I', 'd', ':', ' ', 'j', 'c', 'c', '.', 'h', ',', 'v', ' ', '1', '.',
   '1', '2', '.', '2', '.', '1', ' ', '2', '0', '0', '3', '/', '0', '3', '/',
   '0', '7', ' ', '0', '3', ':', '4', '1', ':', '0', '5', ' ', 'd', 'a', 'v',
   'i', 'd', '_', '_', 's', 'c', 'h', 'm', 'i', 'd', 't', ' ', 'E', 'x', 'p',
   ' ', '$', '\0'};
# 681
char const   project_h_rcs[56]   = 
# 681
  {'$', 'I', 'd', ':', ' ', 'p', 'r', 'o', 'j', 'e', 'c', 't', '.', 'h', ',',
   'v', ' ', '1', '.', '7', '2', '.', '2', '.', '5', ' ', '2', '0', '0', '4',
   '/', '0', '1', '/', '3', '0', ' ', '1', '5', ':', '2', '9', ':', '2', '9',
   ' ', 'o', 'e', 's', ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 683
int no_daemon   = 0;
# 688
int urls_read   = 0;
# 689
int urls_rejected   = 0;
# 696
static void listen_loop(void) ;
# 697
static void chat(struct client_state *csp ) ;
# 701
static void serve(struct client_state *csp ) ;
# 727
char const   *basedir   = (char const   *)((void *)0);
# 728
char const   *pidfile   = (char const   *)((void *)0);
# 729
int received_hup_signal   = 0;
# 733
static char const   VANILLA_WAFER[361]   = 
# 733
  {'N', 'O', 'T', 'I', 'C', 'E', '=', 'T', 'O', '_', 'W', 'H', 'O', 'M', '_',
   'I', 'T', '_', 'M', 'A', 'Y', '_', 'C', 'O', 'N', 'C', 'E', 'R', 'N', '_',
   'D', 'o', '_', 'n', 'o', 't', '_', 's', 'e', 'n', 'd', '_', 'm', 'e', '_',
   'a', 'n', 'y', '_', 'c', 'o', 'p', 'y', 'r', 'i', 'g', 'h', 't', 'e', 'd',
   '_', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 't', 'i', 'o', 'n', '_', 'o', 't',
   'h', 'e', 'r', '_', 't', 'h', 'a', 'n', '_', 't', 'h', 'e', '_', 'd', 'o',
   'c', 'u', 'm', 'e', 'n', 't', '_', 't', 'h', 'a', 't', '_', 'I', '_', 'a',
   'm', '_', 'r', 'e', 'q', 'u', 'e', 's', 't', 'i', 'n', 'g', '_', 'o', 'r',
   '_', 'a', 'n', 'y', '_', 'o', 'f', '_', 'i', 't', 's', '_', 'n', 'e', 'c',
   'e', 's', 's', 'a', 'r', 'y', '_', 'c', 'o', 'm', 'p', 'o', 'n', 'e', 'n',
   't', 's', '.', '_', 'I', 'n', '_', 'p', 'a', 'r', 't', 'i', 'c', 'u', 'l',
   'a', 'r', '_', 'd', 'o', '_', 'n', 'o', 't', '_', 's', 'e', 'n', 'd', '_',
   'm', 'e', '_', 'a', 'n', 'y', '_', 'c', 'o', 'o', 'k', 'i', 'e', 's', '_',
   't', 'h', 'a', 't', '_', 'a', 'r', 'e', '_', 's', 'u', 'b', 'j', 'e', 'c',
   't', '_', 't', 'o', '_', 'a', '_', 'c', 'l', 'a', 'i', 'm', '_', 'o', 'f',
   '_', 'c', 'o', 'p', 'y', 'r', 'i', 'g', 'h', 't', '_', 'b', 'y', '_', 'a',
   'n', 'y', 'b', 'o', 'd', 'y', '.', '_', 'T', 'a', 'k', 'e', '_', 'n', 'o',
   't', 'i', 'c', 'e', '_', 't', 'h', 'a', 't', '_', 'I', '_', 'r', 'e', 'f',
   'u', 's', 'e', '_', 't', 'o', '_', 'b', 'e', '_', 'b', 'o', 'u', 'n', 'd',
   '_', 'b', 'y', '_', 'a', 'n', 'y', '_', 'l', 'i', 'c', 'e', 'n', 's', 'e',
   '_', 'c', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n', '_', '(', 'c', 'o', 'p',
   'y', 'r', 'i', 'g', 'h', 't', '_', 'o', 'r', '_', 'o', 't', 'h', 'e', 'r',
   'w', 'i', 's', 'e', ')', '_', 'a', 'p', 'p', 'l', 'y', 'i', 'n', 'g', '_',
   't', 'o', '_', 'a', 'n', 'y', '_', 'c', 'o', 'o', 'k', 'i', 'e', '.', '_',
   '\0'};
# 759
static void sig_handler(int the_signal ) 
{ 

  {
# 761
  switch (the_signal) {
  case 6: 
  {

  }
  case 15: 
  {

  }
  case 2: 
  {
# 766
  log_error(4096, "exiting by signal %d .. bye", the_signal);
# 768
  unlink(pidfile);
# 770
  exit(the_signal);
  {
# 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
# 771 "jcc.c"
  break;
  case 1: 
  {
# 774
  received_hup_signal = 1;
  }
# 775
  break;
  default: 
  {
# 782
  log_error(16384, "sig_handler: exiting on unexpected signal %d", the_signal);
  }
  }
# 784
  return;
}
}
# 811
static void chat(struct client_state *csp ) 
{ char buf[5000] ;
  char *hdr ;
  char *p ;
  char *req ;
  fd_set rfds ;
  int n ;
  jb_socket maxfd ;
  int server_body ;
  int ms_iis5_hack ;
  int byte_count ;
  struct forward_spec  const  *fwd ;
  struct http_request *http ;
  int len ;
  int block_popups ;
  int block_popups_now ;
  int pcrs_filter ;
  int gif_deanimate___0 ;
  char *(*content_filter)() ;
  struct http_response *rsp ;
  jb_err tmp ;
  char * __attribute__((__rostring__, __nullterm__)) tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  jb_err tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int *tmp___11 ;
  int *tmp___12 ;
  int *tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int *tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  size_t tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  unsigned int __i ;
  fd_set *__arr ;
  int tmp___23 ;
  int *tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  size_t tmp___27 ;
  int tmp___28 ;
  char *tmp___29 ;
  int tmp___30 ;
  size_t hdrlen ;
  int flushed ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  jb_err tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  jb_err tmp___39 ;
  size_t tmp___40 ;
  int tmp___41 ;

  {
  {
# 840
  ms_iis5_hack = 0;
# 841
  byte_count = 0;
# 847
  block_popups_now = 0;
# 854
  content_filter = (char *(*)())((void *)0);
# 859
  http = csp->http;
  }
# 866
  while (1) {
    {
# 868
    len = read_socket(csp->cfd, buf, (int )sizeof(buf));
    }
# 870
    if (len <= 0) {
# 870
      break;
    }
    {
# 876
    tmp = add_to_iob(csp, buf, len);
    }
# 876
    if (tmp) {
# 878
      return;
    }
    {
# 881
    req = get_header(csp);
    }
# 883
    if ((unsigned int )req == (unsigned int )((void *)0)) {
# 885
      break;
    }
# 888
    if ((int )(*req) == 0) {
      goto __Cont;
    }
    {
# 898
    tmp___0 = strstr((char const   */* __attribute__((__rostring__,
                     __nullterm__)) */)((char const   *)req),
                     (char const   */* __attribute__((__rostring__,
                     __nullterm__)) */)((char const   *)"/PRIVOXY-FORCE"));
    }
# 898
    if (tmp___0) {
      {
# 900
      strclean((char const   *)req, (char const   *)"/PRIVOXY-FORCE");
# 901
      log_error(32, "Enforcing request \"%s\".\n", req);
# 902
      csp->flags = (unsigned short )((int )csp->flags | 4);
      }
    }
    {
# 907
    parse_http_request((char const   *)req, http, csp);
    }
# 908
    if (req) {
      {
# 908
      free((void *)req);
# 908
      req = (char *)((void *)0);
      }
    }
# 909
    break;
    __Cont: 
    {

    }
  }
# 912
  if ((unsigned int )http->cmd == (unsigned int )((void *)0)) {
    {
# 914
    strcpy((char */* __restrict  */)(buf),
           (char const   */* __restrict  */)(CHEADER___8));
# 915
    tmp___1 = strlen((char const   *)(buf));
# 915
    write_socket(csp->cfd, (char const   *)(buf), tmp___1);
# 917
    log_error(512, "%s - - [%T] \" \" 400 0", csp->ip_addr_str);
# 919
    free_http_request(http);
    }
# 920
    return;
  }
  {
# 925
  fwd = forward_url(http, csp);
  }
# 925
  if ((unsigned int )fwd == (unsigned int )((void *)0)) {
    {
# 927
    log_error(16384, "gateway spec is NULL!?!?  This can\'t happen!");
    }
  }
# 971
  if ((int )csp->flags & 32) {
    {
# 979
    url_actions(http, csp);
    }
  } else {
    {
# 974
    init_current_action(csp->action);
    }
  }
# 988
  if (http->ssl) {
# 990
    if (csp->action[0].flags & 65536UL) {
      _L___0: 
# 990
      if (csp->action[0].flags & 65536UL) {
        {
# 990
        tmp___3 = match_portlist((char const   *)csp->action[0].string[5],
                                 csp->http[0].port);
        }
# 990
        if (! tmp___3) {
          _L: 
          {
# 994
          strcpy((char */* __restrict  */)(buf),
                 (char const   */* __restrict  */)(CFORBIDDEN___8));
# 995
          tmp___2 = strlen((char const   *)(buf));
# 995
          write_socket(csp->cfd, (char const   *)(buf), tmp___2);
# 997
          log_error(2, "Denying suspicious CONNECT request from %s",
                    csp->ip_addr_str);
# 998
          log_error(512, "%s - - [%T] \" \" 403 0", csp->ip_addr_str);
          }
# 1000
          return;
        }
      }
    } else {
# 990
      if (csp->http[0].port != 443) {
        goto _L;
      } else {
        goto _L___0;
      }
    }
  }
# 1009
  if (http->ssl == 0) {
    {
# 1009
    tmp___4 = strcmpic((char const   *)http->ver, (char const   *)"HTTP/1.1");
    }
# 1009
    if (! tmp___4) {
# 1009
      if (csp->action[0].flags & 4UL) {
# 1013
        if (http->ver) {
          {
# 1013
          free((void *)http->ver);
# 1013
          http->ver = (char *)((void *)0);
          }
        }
        {
# 1014
        http->ver = strdup((char const   *)"HTTP/1.0");
        }
# 1016
        if ((unsigned int )http->ver == (unsigned int )((void *)0)) {
          {
# 1018
          log_error(16384, "Out of memory downgrading HTTP version");
          }
        }
      }
    }
  }
  {
# 1025
  http->ocmd = strdup((char const   *)http->cmd);
  }
# 1027
  if ((unsigned int )http->ocmd == (unsigned int )((void *)0)) {
    {
# 1029
    log_error(16384, "Out of memory copying HTTP request line");
    }
  }
# 1036
  if (http->ssl == 0) {
# 1038
    if (http->cmd) {
      {
# 1038
      free((void *)http->cmd);
# 1038
      http->cmd = (char *)((void *)0);
      }
    }
    {
# 1040
    http->cmd = strdup((char const   *)http->gpc);
# 1041
    string_append(& http->cmd, (char const   *)" ");
    }
# 1043
    if (fwd->forward_host) {
      {
# 1045
      string_append(& http->cmd, (char const   *)http->url);
      }
    } else {
      {
# 1049
      string_append(& http->cmd, (char const   *)http->path);
      }
    }
    {
# 1051
    string_append(& http->cmd, (char const   *)" ");
# 1052
    string_append(& http->cmd, (char const   *)http->ver);
    }
# 1054
    if ((unsigned int )http->cmd == (unsigned int )((void *)0)) {
      {
# 1056
      log_error(16384, "Out of memory writing HTTP command");
      }
    }
    {
# 1058
    log_error(8, "New HTTP Request-Line: %s", http->cmd);
    }
  }
  {
# 1060
  enlist(csp->headers, (char const   *)http->cmd);
# 1067
  tmp___5 = list_is_empty((struct list  const  *)(csp->action[0].multi[1]));
  }
# 1067
  if (tmp___5) {
# 1067
    if ((csp->action[0].flags & 32768UL) != 0UL) {
      {
# 1070
      enlist(csp->action[0].multi[1], VANILLA_WAFER);
      }
    }
  }
  {
# 1075
  block_popups = (csp->action[0].flags & 16384UL) != 0UL;
  }
# 1078
  if ((unsigned int )csp->rlist != (unsigned int )((void *)0)) {
    {
# 1078
    tmp___6 = list_is_empty((struct list  const  *)(csp->action[0].multi[2]));
    }
# 1078
    if (tmp___6) {
      {
# 1078
      tmp___7 = 0;
      }
    } else {
      {
# 1078
      tmp___7 = 1;
      }
    }
  } else {
    {
# 1078
    tmp___7 = 0;
    }
  }
  {
# 1078
  pcrs_filter = tmp___7;
# 1081
  gif_deanimate___0 = (csp->action[0].flags & 2UL) != 0UL;
  }
# 1085
  while (1) {
    {
# 1087
    p = get_header(csp);
    }
# 1087
    if ((unsigned int )p != (unsigned int )((void *)0)) {
# 1087
      if ((int )(*p) == 0) {
        {
# 1089
        len = read_socket(csp->cfd, buf, (int )sizeof(buf));
        }
# 1090
        if (len <= 0) {
          {
# 1092
          log_error(8192, "read from client failed: %E");
          }
# 1093
          return;
        }
        {
# 1100
        tmp___8 = add_to_iob(csp, buf, len);
        }
# 1100
        if (tmp___8) {
# 1102
          return;
        }
        goto __Cont___0;
      }
    }
# 1107
    if ((unsigned int )p == (unsigned int )((void *)0)) {
# 1107
      break;
    }
    {
# 1109
    enlist(csp->headers, (char const   *)p);
    }
# 1110
    if (p) {
      {
# 1110
      free((void *)p);
# 1110
      p = (char *)((void *)0);
      }
    }
    __Cont___0: 
    {

    }
  }
  {
# 1118
  rsp = direct_response(csp);
  }
# 1118
  if ((unsigned int )((void *)0) != (unsigned int )rsp) {
    goto _L___2;
  } else {
    {
# 1118
    rsp = dispatch_cgi(csp);
    }
# 1118
    if ((unsigned int )((void *)0) != (unsigned int )rsp) {
      goto _L___2;
    } else {
# 1118
      if ((int )csp->flags & 32) {
# 1118
        if (! ((int )csp->flags & 4)) {
          {
# 1118
          rsp = block_url(csp);
          }
# 1118
          if ((unsigned int )((void *)0) != (unsigned int )rsp) {
            goto _L___2;
          } else {
            {
# 1118
            rsp = trust_url(csp);
            }
# 1118
            if ((unsigned int )((void *)0) != (unsigned int )rsp) {
              goto _L___2;
            } else {
# 1118
              if ((csp->action[0].flags & 8UL) != 0UL) {
                {
# 1118
                rsp = redirect_url(csp);
                }
# 1118
                if ((unsigned int )((void *)0) != (unsigned int )rsp) {
                  _L___2: 
                  {
# 1145
                  tmp___9 = write_socket(csp->cfd, (char const   *)rsp->head,
                                         rsp->head_length);
                  }
# 1145
                  if (tmp___9) {
                    {
# 1148
                    log_error(8192, "write to: %s failed: %E", http->host);
                    }
                  } else {
                    {
# 1145
                    tmp___10 = write_socket(csp->cfd, (char const   *)rsp->body,
                                            rsp->content_length);
                    }
# 1145
                    if (tmp___10) {
                      {
# 1148
                      log_error(8192, "write to: %s failed: %E", http->host);
                      }
                    }
                  }
                  {
# 1153
                  csp->flags = (unsigned short )((int )csp->flags | 16);
# 1157
                  log_error(1, "%s%s crunch!", http->hostport, http->path);
# 1158
                  log_error(512, "%s - - [%T] \"%s\" 200 3", csp->ip_addr_str,
                            http->ocmd);
# 1161
                  free_http_response(rsp);
                  }
# 1162
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
# 1165
  hdr = sed(client_patterns, add_client_headers, csp);
  }
# 1166
  if ((unsigned int )hdr == (unsigned int )((void *)0)) {
    {
# 1169
    log_error(16384, "Out of memory parsing client header");
    }
  }
  {
# 1172
  list_remove_all(csp->headers);
# 1174
  log_error(1, "%s%s", http->hostport, http->path);
  }
# 1176
  if (fwd->forward_host) {
    {
# 1178
    log_error(2, "via %s:%d to: %s", fwd->forward_host, fwd->forward_port,
              http->hostport);
    }
  } else {
    {
# 1183
    log_error(2, "to %s", http->hostport);
    }
  }
  {
# 1188
  csp->sfd = forwarded_connect(fwd, http, csp);
  }
# 1190
  if (csp->sfd == -1) {
    {
# 1192
    log_error(2, "connect to: %s failed: %E", http->hostport);
# 1195
    tmp___13 = __errno_location();
    }
# 1195
    if ((*tmp___13) == 22) {
      {
# 1197
      tmp___11 = __errno_location();
# 1197
      rsp = error_response(csp, (char const   *)"no-such-domain", (*tmp___11));
# 1199
      log_error(512, "%s - - [%T] \"%s\" 404 0", csp->ip_addr_str, http->ocmd);
      }
    } else {
      {
# 1204
      tmp___12 = __errno_location();
# 1204
      rsp = error_response(csp, (char const   *)"connect-failed", (*tmp___12));
# 1206
      log_error(512, "%s - - [%T] \"%s\" 503 0", csp->ip_addr_str, http->ocmd);
      }
    }
# 1212
    if (rsp) {
      {
# 1214
      tmp___14 = write_socket(csp->cfd, (char const   *)rsp->head,
                              rsp->head_length);
      }
# 1214
      if (tmp___14) {
        {
# 1217
        log_error(8192, "write to: %s failed: %E", http->host);
        }
      } else {
        {
# 1214
        tmp___15 = write_socket(csp->cfd, (char const   *)rsp->body,
                                rsp->content_length);
        }
# 1214
        if (tmp___15) {
          {
# 1217
          log_error(8192, "write to: %s failed: %E", http->host);
          }
        }
      }
    }
    {
# 1221
    free_http_response(rsp);
    }
# 1222
    if (hdr) {
      {
# 1222
      free((void *)hdr);
# 1222
      hdr = (char *)((void *)0);
      }
    }
# 1223
    return;
  }
  {
# 1226
  log_error(2, "OK");
  }
# 1228
  if (fwd->forward_host) {
    goto _L___4;
  } else {
# 1228
    if (http->ssl == 0) {
      _L___4: 
      {
# 1234
      tmp___19 = strlen((char const   *)hdr);
# 1234
      tmp___20 = write_socket(csp->sfd, (char const   *)hdr, tmp___19);
      }
# 1234
      if (tmp___20) {
        goto _L___3;
      } else {
        {
# 1234
        tmp___21 = flush_socket(csp->sfd, csp);
        }
# 1234
        if (tmp___21 < 0) {
          _L___3: 
          {
# 1237
          log_error(2, "write header to: %s failed: %E", http->hostport);
# 1240
          log_error(512, "%s - - [%T] \"%s\" 503 0", csp->ip_addr_str,
                    http->ocmd);
# 1243
          tmp___16 = __errno_location();
# 1243
          rsp = error_response(csp, (char const   *)"connect-failed",
                               (*tmp___16));
          }
# 1245
          if (rsp) {
            {
# 1247
            tmp___17 = write_socket(csp->cfd, (char const   *)rsp->head,
                                    rsp->head_length);
            }
# 1247
            if (tmp___17) {
              {
# 1250
              log_error(8192, "write to: %s failed: %E", http->host);
              }
            } else {
              {
# 1247
              tmp___18 = write_socket(csp->cfd, (char const   *)rsp->body,
                                      rsp->content_length);
              }
# 1247
              if (tmp___18) {
                {
# 1250
                log_error(8192, "write to: %s failed: %E", http->host);
                }
              }
            }
          }
          {
# 1254
          free_http_response(rsp);
          }
# 1255
          if (hdr) {
            {
# 1255
            free((void *)hdr);
# 1255
            hdr = (char *)((void *)0);
            }
          }
# 1256
          return;
        }
      }
    } else {
      {
# 1266
      log_error(512, "%s - - [%T] \"%s\" 200 2\n", csp->ip_addr_str, http->ocmd);
# 1269
      tmp___22 = write_socket(csp->cfd, CSUCCEED___8, sizeof(CSUCCEED___8) - 1U);
      }
# 1269
      if (tmp___22) {
# 1271
        if (hdr) {
          {
# 1271
          free((void *)hdr);
# 1271
          hdr = (char *)((void *)0);
          }
        }
# 1272
        return;
      }
# 1274
      if (csp->iob[0].buf) {
        {
# 1274
        free((void *)csp->iob[0].buf);
        }
      }
      {
# 1274
      memset((void *)(csp->iob), (int )'\0', sizeof(csp->iob));
      }
    }
  }
# 1278
  if (hdr) {
    {
# 1278
    free((void *)hdr);
# 1278
    hdr = (char *)((void *)0);
    }
  }
# 1280
  if (csp->cfd > csp->sfd) {
    {
# 1280
    maxfd = csp->cfd;
    }
  } else {
    {
# 1280
    maxfd = csp->sfd;
    }
  }
  {
# 1286
  server_body = 0;
  }
# 1288
  while (1) {
# 1297
    while (1) {
      {
# 1297
      __arr = & rfds;
# 1297
      __i = 0U;
      }
# 1297
      while (__i < sizeof(fd_set ) / sizeof(__fd_mask )) {
        {
# 1297
        __arr->__fds_bits[__i] = 0L;
# 1297
        __i ++;
        }
      }
# 1297
      break;
    }
    {
# 1299
    rfds.__fds_bits[(unsigned int )csp->cfd / (8U * sizeof(__fd_mask ))] = rfds.__fds_bits[(unsigned int )csp->cfd /
                                                                                           (8U *
                                                                                            sizeof(__fd_mask ))] |
                                                                           (1L <<
                                                                            (unsigned int )csp->cfd %
                                                                            (8U *
                                                                             sizeof(__fd_mask )));
# 1300
    rfds.__fds_bits[(unsigned int )csp->sfd / (8U * sizeof(__fd_mask ))] = rfds.__fds_bits[(unsigned int )csp->sfd /
                                                                                           (8U *
                                                                                            sizeof(__fd_mask ))] |
                                                                           (1L <<
                                                                            (unsigned int )csp->sfd %
                                                                            (8U *
                                                                             sizeof(__fd_mask )));
# 1302
    n = select(maxfd + 1, (fd_set */* __restrict  */)(& rfds),
               (fd_set */* __restrict  */)((fd_set *)((void *)0)),
               (fd_set */* __restrict  */)((fd_set *)((void *)0)),
               (struct timeval */* __restrict  */)((struct timeval *)((void *)0)));
    }
# 1304
    if (n < 0) {
      {
# 1306
      log_error(8192, "select() failed!: %E");
      }
# 1307
      return;
    }
# 1314
    if (rfds.__fds_bits[(unsigned int )csp->cfd / (8U * sizeof(__fd_mask ))] &
        (1L << (unsigned int )csp->cfd % (8U * sizeof(__fd_mask )))) {
      {
# 1316
      len = read_socket(csp->cfd, buf, (int )sizeof(buf));
      }
# 1318
      if (len <= 0) {
# 1320
        break;
      }
      {
# 1323
      tmp___23 = write_socket(csp->sfd, (char const   *)(buf),
                              (unsigned int )len);
      }
# 1323
      if (tmp___23) {
        {
# 1325
        log_error(8192, "write to: %s failed: %E", http->host);
        }
# 1326
        return;
      }
      goto __Cont___1;
    }
# 1338
    if (rfds.__fds_bits[(unsigned int )csp->sfd / (8U * sizeof(__fd_mask ))] &
        (1L << (unsigned int )csp->sfd % (8U * sizeof(__fd_mask )))) {
      {

# 1340 "jcc.c"
      fflush((FILE *)0);
# 1341
      len = read_socket(csp->sfd, buf, (int )(sizeof(buf) - 1U));
      }
# 1343
      if (len < 0) {
        {
# 1345
        log_error(8192, "read from: %s failed: %E", http->host);
# 1347
        log_error(512, "%s - - [%T] \"%s\" 503 0", csp->ip_addr_str, http->ocmd);
# 1350
        tmp___24 = __errno_location();
# 1350
        rsp = error_response(csp, (char const   *)"connect-failed", (*tmp___24));
        }
# 1352
        if (rsp) {
          {
# 1354
          tmp___25 = write_socket(csp->cfd, (char const   *)rsp->head,
                                  rsp->head_length);
          }
# 1354
          if (tmp___25) {
            {
# 1357
            log_error(8192, "write to: %s failed: %E", http->host);
            }
          } else {
            {
# 1354
            tmp___26 = write_socket(csp->cfd, (char const   *)rsp->body,
                                    rsp->content_length);
            }
# 1354
            if (tmp___26) {
              {
# 1357
              log_error(8192, "write to: %s failed: %E", http->host);
              }
            }
          }
        }
        {
# 1361
        free_http_response(rsp);
        }
# 1362
        return;
      }
      {
# 1368
      buf[len] = '\0';
      }
# 1372
      if (block_popups_now) {
        {
# 1374
        filter_popups(buf, csp);
        }
      }
# 1396
      if (len == 0) {
# 1399
        if (server_body) {
          goto _L___6;
        } else {
# 1399
          if (http->ssl) {
            _L___6: 
# 1406
            if (content_filter) {
              {
# 1413
              p = ((*content_filter))(csp);
              }
# 1413
              if ((unsigned int )((void *)0) == (unsigned int )p) {
                {
# 1415
                csp->content_length = (unsigned int )(csp->iob[0].eod -
                                                      csp->iob[0].cur);
                }
              }
              {
# 1418
              hdr = sed(server_patterns, add_server_headers, csp);
              }
# 1419
              if ((unsigned int )hdr == (unsigned int )((void *)0)) {
                {
# 1422
                log_error(16384, "Out of memory parsing server header");
                }
              }
              {
# 1425
              tmp___27 = strlen((char const   *)hdr);
# 1425
              tmp___28 = write_socket(csp->cfd, (char const   *)hdr, tmp___27);
              }
# 1425
              if (tmp___28) {
                goto _L___5;
              } else {
# 1425
                if ((unsigned int )p != (unsigned int )((void *)0)) {
                  {
# 1425
                  tmp___29 = p;
                  }
                } else {
                  {
# 1425
                  tmp___29 = csp->iob[0].cur;
                  }
                }
                {
# 1425
                tmp___30 = write_socket(csp->cfd, (char const   *)tmp___29,
                                        csp->content_length);
                }
# 1425
                if (tmp___30) {
                  _L___5: 
                  {
# 1428
                  log_error(8192, "write modified content to client failed: %E");
                  }
# 1429
                  if (hdr) {
                    {
# 1429
                    free((void *)hdr);
# 1429
                    hdr = (char *)((void *)0);
                    }
                  }
# 1430
                  if (p) {
                    {
# 1430
                    free((void *)p);
# 1430
                    p = (char *)((void *)0);
                    }
                  }
# 1431
                  return;
                }
              }
# 1434
              if (hdr) {
                {
# 1434
                free((void *)hdr);
# 1434
                hdr = (char *)((void *)0);
                }
              }
# 1435
              if (p) {
                {
# 1435
                free((void *)p);
# 1435
                p = (char *)((void *)0);
                }
              }
            }
# 1438
            break;
          }
        }
        {
# 1445
        len = sprintf((char */* __restrict  */)(buf),
                      (char const   */* __restrict  */)((char const   *)"\r\n"));
# 1452
        ms_iis5_hack = 1;
        }
      }
# 1461
      if (server_body) {
        goto _L___9;
      } else {
# 1461
        if (http->ssl) {
          _L___9: 
# 1463
          if (content_filter) {
            {
# 1470
            tmp___35 = add_to_iob(csp, buf, len);
            }
# 1470
            if (tmp___35) {
              {
# 1475
              log_error(8192,
                        "Flushing header and buffers. Stepping back from filtering.");
# 1477
              hdr = sed(server_patterns, add_server_headers, csp);
              }
# 1478
              if ((unsigned int )hdr == (unsigned int )((void *)0)) {
                {
# 1484
                log_error(8192, "Out of memory while trying to flush.");
# 1485
                rsp = cgi_error_memory();
# 1487
                tmp___31 = write_socket(csp->cfd, (char const   *)rsp->head,
                                        rsp->head_length);
                }
# 1487
                if (tmp___31) {
                  {
# 1490
                  log_error(8192, "write to: %s failed: %E", http->host);
                  }
                } else {
                  {
# 1487
                  tmp___32 = write_socket(csp->cfd, (char const   *)rsp->body,
                                          rsp->content_length);
                  }
# 1487
                  if (tmp___32) {
                    {
# 1490
                    log_error(8192, "write to: %s failed: %E", http->host);
                    }
                  }
                }
# 1492
                return;
              }
              {
# 1495
              hdrlen = strlen((char const   *)hdr);
# 1497
              tmp___33 = write_socket(csp->cfd, (char const   *)hdr, hdrlen);
              }
# 1497
              if (tmp___33) {
                goto _L___7;
              } else {
                {
# 1497
                flushed = flush_socket(csp->cfd, csp);
                }
# 1497
                if (flushed < 0) {
                  goto _L___7;
                } else {
                  {
# 1497
                  tmp___34 = write_socket(csp->cfd, (char const   *)(buf),
                                          (unsigned int )len);
                  }
# 1497
                  if (tmp___34) {
                    _L___7: 
                    {
# 1501
                    log_error(2, "Flush header and buffers to client failed: %E");
                    }
# 1503
                    if (hdr) {
                      {
# 1503
                      free((void *)hdr);
# 1503
                      hdr = (char *)((void *)0);
                      }
                    }
# 1504
                    return;
                  }
                }
              }
              {
# 1507
              byte_count = (int )((unsigned int )byte_count +
                                  ((hdrlen + (unsigned int )flushed) +
                                   (unsigned int )len));
              }
# 1508
              if (hdr) {
                {
# 1508
                free((void *)hdr);
# 1508
                hdr = (char *)((void *)0);
                }
              }
              {
# 1509
              content_filter = (char *(*)())((void *)0);
# 1510
              server_body = 1;
              }
            }
          } else {
            {
# 1516
            tmp___36 = write_socket(csp->cfd, (char const   *)(buf),
                                    (unsigned int )len);
            }
# 1516
            if (tmp___36) {
              {
# 1518
              log_error(8192, "write to client failed: %E");
              }
# 1519
              return;
            }
          }
          {
# 1522
          byte_count += len;
          }
          goto __Cont___1;
        } else {
          {
# 1537
          tmp___39 = add_to_iob(csp, buf, len);
          }
# 1537
          if (tmp___39) {
            {
# 1539
            log_error(8192,
                      "Out of memory while looking for end of server headers.");
# 1540
            rsp = cgi_error_memory();
# 1542
            tmp___37 = write_socket(csp->cfd, (char const   *)rsp->head,
                                    rsp->head_length);
            }
# 1542
            if (tmp___37) {
              {
# 1545
              log_error(8192, "write to: %s failed: %E", http->host);
              }
            } else {
              {
# 1542
              tmp___38 = write_socket(csp->cfd, (char const   *)rsp->body,
                                      rsp->content_length);
              }
# 1542
              if (tmp___38) {
                {
# 1545
                log_error(8192, "write to: %s failed: %E", http->host);
                }
              }
            }
# 1547
            return;
          }
# 1552
          while (1) {
            {
# 1552
            p = get_header(csp);
            }
# 1552
            if (! ((unsigned int )p != (unsigned int )((void *)0))) {
# 1552
              break;
            }
# 1554
            if ((int )(*p) == 0) {
# 1557
              break;
            }
            {
# 1559
            enlist(csp->headers, (char const   *)p);
            }
# 1560
            if (p) {
              {
# 1560
              free((void *)p);
# 1560
              p = (char *)((void *)0);
              }
            }
          }
# 1569
          if (p) {
# 1571
            if (ms_iis5_hack) {
# 1579
              break;
            } else {
              goto __Cont___1;
            }
          }
          {
# 1596
          hdr = sed(server_patterns, add_server_headers, csp);
          }
# 1597
          if ((unsigned int )hdr == (unsigned int )((void *)0)) {
            {
# 1600
            log_error(16384, "Out of memory parsing server header");
            }
          }
# 1606
          if ((int )csp->content_type & 1) {
# 1606
            if (! http->ssl) {
# 1606
              if (block_popups) {
                {
# 1610
                block_popups_now = 1;
# 1615
                filter_popups(csp->iob[0].cur, csp);
                }
              }
            }
          }
# 1622
          if ((int )csp->content_type & 1) {
# 1622
            if (! http->ssl) {
# 1622
              if (pcrs_filter) {
                {
# 1626
                content_filter = (char *(*)())(& pcrs_filter_response);
                }
              }
            }
          }
# 1631
          if ((int )csp->content_type & 2) {
# 1631
            if (! http->ssl) {
# 1631
              if (gif_deanimate___0) {
                {
# 1635
                content_filter = (char *(*)())(& gif_deanimate_response);
                }
              }
            }
          }
# 1641
          if (! content_filter) {
            {
# 1648
            tmp___40 = strlen((char const   *)hdr);
# 1648
            tmp___41 = write_socket(csp->cfd, (char const   *)hdr, tmp___40);
            }
# 1648
            if (tmp___41) {
              goto _L___8;
            } else {
              {
# 1648
              len = flush_socket(csp->cfd, csp);
              }
# 1648
              if (len < 0) {
                _L___8: 
                {
# 1651
                log_error(2, "write header to client failed: %E");
                }
# 1657
                if (hdr) {
                  {
# 1657
                  free((void *)hdr);
# 1657
                  hdr = (char *)((void *)0);
                  }
                }
# 1658
                return;
              }
            }
            {
# 1661
            byte_count += len;
            }
          }
# 1666
          if (hdr) {
            {
# 1666
            free((void *)hdr);
# 1666
            hdr = (char *)((void *)0);
            }
          }
          {
# 1667
          server_body = 1;
          }
# 1674
          if (ms_iis5_hack) {
# 1676
            break;
          }
        }
      }
      goto __Cont___1;
    }
# 1682
    return;
    __Cont___1: 
    {

    }
  }
  {
# 1685
  log_error(512, "%s - - [%T] \"%s\" 200 %d", csp->ip_addr_str, http->ocmd,
            byte_count);
  }
# 1687
  return;
}
}
# 1706
static void serve(struct client_state *csp ) 
{ 

  {
  {
# 1709
  chat(csp);
# 1710
  close_socket(csp->cfd);
  }
# 1712
  if (csp->sfd != -1) {
    {
# 1714
    close_socket(csp->sfd);
    }
  }
  {
# 1717
  csp->flags = (unsigned short )((int )csp->flags & -2);
  }
# 1719
  return;
}
}
# 1755
void usage(char const   *myname ) 
{ 

  {
  {
# 1757
  printf((char const   */* __restrict  */)((char const   *)"Privoxy version 3.0.3 (http://www.privoxy.org/)\nUsage: %s [--help] [--version] [--no-daemon] [--pidfile pidfile] [--user user[.group]] [configfile]\nAborting.\n"),
         myname);
# 1765
  exit(2);
  {
# 129 "spec.work"
  while (1) {

  }
  {

  }
  }

  }
# 1765 "jcc.c"
  return;
}
}
# 1796
int main(int argc , char const   **argv ) 
{ int argc_pos ;
  struct passwd *pw ;
  struct group *grp ;
  char *p ;
  int do_chroot ;
  char *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  char *abs_file ;
  char cwd[1024] ;
  char *tmp___6 ;
  size_t tmp___7 ;
  size_t tmp___8 ;
  int idx ;
  int catched_signals[5] ;
  int ignored_signals[2] ;
  void (*tmp___9)(int  ) ;
  void (*tmp___10)(int  ) ;
  pid_t pid ;
  int status___1 ;
  pid_t wpid ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  char putenv_dummy[64] ;
  int tmp___16 ;
  int tmp___17 ;

  {
  __initialize__();
  {
# 1799
  argc_pos = 0;
# 1801
  pw = (struct passwd *)((void *)0);
# 1802
  grp = (struct group *)((void *)0);
# 1804
  do_chroot = 0;
# 1807
  Argc = argc;
# 1808
  Argv = argv;
# 1810
  configfile = (char const   *)"config";
  }
# 1821
  while (1) {
    {
# 1821
    argc_pos ++;
    }
# 1821
    if (! (argc_pos < argc)) {
# 1821
      break;
    }
    {
# 1823
    tmp___5 = strcmp((*(argv + argc_pos)), (char const   *)"--help");
    }
# 1823
    if (tmp___5 == 0) {
      {
# 1825
      usage((*(argv + 0)));
      }
    } else {
      {
# 1828
      tmp___4 = strcmp((*(argv + argc_pos)), (char const   *)"--version");
      }
# 1828
      if (tmp___4 == 0) {
        {
# 1830
        printf((char const   */* __restrict  */)((char const   *)"Privoxy version 3.0.3 (http://www.privoxy.org/)\n"));
# 1831
        exit(0);
        {
# 129 "spec.work"
        while (1) {

        }
        {

        }
        }

        }
      } else {
        {
# 1836 "jcc.c"
        tmp___3 = strcmp((*(argv + argc_pos)), (char const   *)"--no-daemon");
        }
# 1836
        if (tmp___3 == 0) {
          {
# 1838
          no_daemon = 1;
          }
        } else {
          {
# 1841
          tmp___2 = strcmp((*(argv + argc_pos)), (char const   *)"--pidfile");
          }
# 1841
          if (tmp___2 == 0) {
            {
# 1843
            argc_pos ++;
            }
# 1843
            if (argc_pos == argc) {
              {
# 1843
              usage((*(argv + 0)));
              }
            }
            {
# 1844
            pidfile = (char const   *)strdup((*(argv + argc_pos)));
            }
          } else {
            {
# 1847
            tmp___1 = strcmp((*(argv + argc_pos)), (char const   *)"--user");
            }
# 1847
            if (tmp___1 == 0) {
              {
# 1849
              argc_pos ++;
              }
# 1849
              if (argc_pos == argc) {
                {
# 1849
                usage((*(argv + argc_pos)));
                }
              }
              {
# 1851
              p = strchr((*(argv + argc_pos)), (int )'.');
              }
# 1851
              if ((unsigned int )((void *)0) != (unsigned int )p) {
# 1851
                if ((int )(*(p + 1)) != 48) {
                  {
# 1853
                  tmp = p;
# 1853
                  p ++;
# 1853
                  (*tmp) = '\0';
# 1854
                  grp = getgrnam((char const   *)p);
                  }
# 1854
                  if ((unsigned int )((void *)0) == (unsigned int )grp) {
                    {
# 1856
                    log_error(16384, "Group %s not found.", p);
                    }
                  }
                }
              }
              {
# 1860
              pw = getpwnam((*(argv + argc_pos)));
              }
# 1860
              if ((unsigned int )((void *)0) == (unsigned int )pw) {
                {
# 1862
                log_error(16384, "User %s not found.", (*(argv + argc_pos)));
                }
              }
# 1865
              if ((unsigned int )p != (unsigned int )((void *)0)) {
                {
# 1865
                p --;
# 1865
                (*p) = '\0';
                }
              }
            } else {
              {
# 1868
              tmp___0 = strcmp((*(argv + argc_pos)), (char const   *)"--chroot");
              }
# 1868
              if (tmp___0 == 0) {
                {
# 1870
                do_chroot = 1;
                }
              } else {
                {
# 1877
                configfile = (*(argv + argc_pos));
                }
              }
            }
          }
        }
      }
    }
  }
# 1883
  if ((int const   )(*configfile) != 47) {
    {
# 1888
    tmp___6 = getcwd(cwd, sizeof(cwd));
    }
# 1888
    if (! tmp___6) {
      {
# 1890
      perror((char const   *)"get working dir failed");
# 1891
      exit(1);
      {
# 129 "spec.work"
      while (1) {

      }
      {

      }
      }

      }
    }
    {
# 1894 "jcc.c"
    basedir = (char const   *)strdup((char const   *)(cwd));
    }
# 1894
    if (basedir) {
      {
# 1894
      tmp___7 = strlen(basedir);
# 1894
      tmp___8 = strlen(configfile);
# 1894
      abs_file = (char *)malloc((tmp___7 + tmp___8) + 5U);
      }
# 1894
      if (! abs_file) {
        {
# 1897
        perror((char const   *)"malloc failed");
# 1898
        exit(1);
        {
# 129 "spec.work"
        while (1) {

        }
        {

        }
        }

        }
      }
    } else {
      {
# 1897 "jcc.c"
      perror((char const   *)"malloc failed");
# 1898
      exit(1);
      {
# 129 "spec.work"
      while (1) {

      }
      {

      }
      }

      }
    }
    {
# 1900 "jcc.c"
    strcpy((char */* __restrict  */)abs_file,
           (char const   */* __restrict  */)basedir);
# 1901
    strcat((char */* __restrict  */)abs_file,
           (char const   */* __restrict  */)((char const   *)"/"));
# 1902
    strcat((char */* __restrict  */)abs_file,
           (char const   */* __restrict  */)configfile);
# 1903
    configfile = (char const   *)abs_file;
    }
  }
  {
# 1908
  files[0].next = (struct file_list *)((void *)0);
# 1909
  clients[0].next = (struct client_state *)((void *)0);
# 1937
  catched_signals[0] = 6;
# 1937
  catched_signals[1] = 15;
# 1937
  catched_signals[2] = 2;
# 1937
  catched_signals[3] = 1;
# 1937
  catched_signals[4] = 0;
# 1938
  ignored_signals[0] = 13;
# 1938
  ignored_signals[1] = 0;
# 1940
  idx = 0;
  }
# 1940
  while (catched_signals[idx] != 0) {
    {
# 1942
    tmp___9 = signal(catched_signals[idx], & sig_handler);
    }
# 1942
    if ((unsigned int )tmp___9 == (unsigned int )((void (*)(int  ))-1)) {
      {
# 1944
      log_error(16384, "Can\'t set signal-handler for signal %d: %E",
                catched_signals[idx]);
      }
    }
    {
# 1940
    idx ++;
    }
  }
  {
# 1948
  idx = 0;
  }
# 1948
  while (ignored_signals[idx] != 0) {
    {
# 1950
    tmp___10 = signal(ignored_signals[idx], (void (*)(int  ))1);
    }
# 1950
    if ((unsigned int )tmp___10 == (unsigned int )((void (*)(int  ))-1)) {
      {
# 1952
      log_error(16384, "Can\'t set ignore-handler for signal %d: %E",
                ignored_signals[idx]);
      }
    }
    {
# 1948
    idx ++;
    }
  }
  {
# 1969
  cgi_init_error_messages();
# 1978
  pid = 0;
  }
# 1983
  if (! no_daemon) {
    {
# 1985
    pid = fork();
    }
# 1987
    if (pid < 0) {
      {
# 1989
      perror((char const   *)"fork");
# 1990
      exit(3);
      {
# 129 "spec.work"
      while (1) {

      }
      {

      }
      }

      }
    } else {
# 1992 "jcc.c"
      if (pid != 0) {
        {
# 2000
        sleep(1U);
# 2001
        wpid = waitpid(pid, & status___1, 1);
        }
# 2002
        if (wpid != 0) {
          {
# 2004
          exit(1);
          {
# 129 "spec.work"
          while (1) {

          }
          {

          }
          }

          }
        }
        {
# 2006 "jcc.c"
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
# 2011 "jcc.c"
    setsid();
# 2032
    close(0);
# 2033
    close(1);
# 2034
    chdir((char const   *)"/");
    }
  }
  {
# 2042
  write_pid_file();
  }
# 2044
  if ((unsigned int )((void *)0) != (unsigned int )pw) {
# 2046
    if ((unsigned int )((void *)0) != (unsigned int )grp) {
      {
# 2046
      tmp___11 = setgid(grp->gr_gid);
      }
# 2046
      if (tmp___11) {
        {
# 2048
        log_error(16384, "Cannot setgid(): Insufficient permissions.");
        }
      } else {
        goto _L;
      }
    } else {
      _L: 
      {
# 2046
      tmp___12 = setgid(pw->pw_gid);
      }
# 2046
      if (tmp___12) {
        {
# 2048
        log_error(16384, "Cannot setgid(): Insufficient permissions.");
        }
      }
    }
# 2050
    if (do_chroot) {
# 2052
      if (! pw->pw_dir) {
        {
# 2054
        log_error(16384, "Home directory for %s undefined", pw->pw_name);
        }
      }
      {
# 2056
      tmp___13 = chroot((char const   *)pw->pw_dir);
      }
# 2056
      if (tmp___13 < 0) {
        {
# 2058
        log_error(16384, "Cannot chroot to %s", pw->pw_dir);
        }
      }
      {
# 2060
      tmp___14 = chdir((char const   *)"/");
      }
# 2060
      if (tmp___14) {
        {
# 2062
        log_error(16384, "Cannot chdir /");
        }
      }
    }
    {
# 2065
    tmp___15 = setuid(pw->pw_uid);
    }
# 2065
    if (tmp___15) {
      {
# 2067
      log_error(16384, "Cannot setuid(): Insufficient permissions.");
      }
    }
# 2069
    if (do_chroot) {
      {
# 2073
      strcpy((char */* __restrict  */)(putenv_dummy),
             (char const   */* __restrict  */)((char const   *)"HOME=/"));
# 2074
      tmp___16 = putenv(putenv_dummy);
      }
# 2074
      if (tmp___16 != 0) {
        {
# 2076
        log_error(16384, "Cannot putenv(): HOME");
        }
      }
      {
# 2079
      snprintf((char */* __restrict  */)(putenv_dummy), 64U,
               (char const   */* __restrict  */)((char const   *)"USER=%s"),
               pw->pw_name);
# 2080
      tmp___17 = putenv(putenv_dummy);
      }
# 2080
      if (tmp___17 != 0) {
        {
# 2082
        log_error(16384, "Cannot putenv(): USER");
        }
      }
    }
  } else {
# 2086
    if (do_chroot) {
      {
# 2088
      log_error(16384, "Cannot chroot without --user argument.");
      }
    }
  }
  {
# 2093
  listen_loop();
  }
# 2096
  return (-1);
}
}
# 2115
static jb_socket bind_port_helper(struct configuration_spec *config ) 
{ int result ;
  jb_socket bfd ;
  char const   *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;

  {
# 2120
  if ((unsigned int )config->haddr != (unsigned int )((void *)0)) {
# 2120
    if ((int const   )(*(config->haddr + 0)) == 49) {
# 2120
      if ((int const   )(*(config->haddr + 1)) == 50) {
# 2120
        if ((int const   )(*(config->haddr + 2)) == 55) {
# 2120
          if ((int const   )(*(config->haddr + 3)) == 46) {
            {
# 2126
            log_error(4096, "Listening on port %d for local connections only",
                      config->hport);
            }
          } else {
            goto _L___2;
          }
        } else {
          goto _L___2;
        }
      } else {
        goto _L___2;
      }
    } else {
      goto _L___2;
    }
  } else {
    _L___2: 
# 2129
    if ((unsigned int )config->haddr == (unsigned int )((void *)0)) {
      {
# 2131
      log_error(4096, "Listening on port %d on all IP addresses", config->hport);
      }
    } else {
      {
# 2136
      log_error(4096, "Listening on port %d on IP address %s", config->hport,
                config->haddr);
      }
    }
  }
  {
# 2140
  result = bind_port(config->haddr, config->hport, & bfd);
  }
# 2142
  if (result < 0) {
# 2144
    switch (result) {
    case -3: 
    {

    }
# 2147
    if ((unsigned int )((void *)0) != (unsigned int )config->haddr) {
      {
# 2147
      tmp = config->haddr;
      }
    } else {
      {
# 2147
      tmp = (char const   *)"INADDR_ANY";
      }
    }
    {
# 2147
    log_error(16384,
              "can\'t bind to %s:%d: There may be another Privoxy or some other proxy running on port %d",
              tmp, config->hport, config->hport);
    }
    case -2: 
    {

    }
# 2154
    if ((unsigned int )((void *)0) != (unsigned int )config->haddr) {
      {
# 2154
      tmp___0 = config->haddr;
      }
    } else {
      {
# 2154
      tmp___0 = (char const   *)"INADDR_ANY";
      }
    }
    {
# 2154
    log_error(16384, "can\'t bind to %s:%d: The hostname is not resolvable",
              tmp___0, config->hport);
    }
    default: 
    {

    }
# 2159
    if ((unsigned int )((void *)0) != (unsigned int )config->haddr) {
      {
# 2159
      tmp___1 = config->haddr;
      }
    } else {
      {
# 2159
      tmp___1 = (char const   *)"INADDR_ANY";
      }
    }
    {
# 2159
    log_error(16384, "can\'t bind to %s:%d: because %E", tmp___1, config->hport);
    }
    }
# 2164
    return (-1);
  }
  {
# 2167
  config->need_bind = 0;
  }
# 2169
  return (bfd);
}
}
# 2184
static void listen_loop(void) 
{ struct client_state *csp ;
  jb_socket bfd ;
  struct configuration_spec *config ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int child_id ;
  pthread_t the_thread ;
  pthread_attr_t attrs ;
  int *tmp___3 ;
  int *tmp___5 ;
  char buf[5000] ;
  int *tmp___6 ;
  size_t tmp___7 ;

  {
  {
# 2186
  csp = (struct client_state *)((void *)0);
# 2190
  config = load_config();
# 2192
  bfd = bind_port_helper(config);
  }
# 2197
  while (1) {
    {
# 2210
    sweep();
    }
# 2216
    if (received_hup_signal) {
      {
# 2218
      init_error_log((*(Argv + 0)), config->logfile, config->debug);
# 2219
      received_hup_signal = 0;
      }
    }
    {
# 2240
    csp = (struct client_state *)zalloc(sizeof((*csp)));
    }
# 2240
    if ((unsigned int )((void *)0) == (unsigned int )csp) {
      {
# 2242
      log_error(16384, "malloc(%d) for csp failed: %E", sizeof((*csp)));
      }
      goto __Cont;
    }
    {
# 2246
    csp->flags = (unsigned short )((int )csp->flags | 1);
# 2247
    csp->sfd = -1;
# 2249
    config = load_config();
# 2249
    csp->config = config;
    }
# 2251
    if (config->need_bind) {
      {
# 2266
      close_socket(bfd);
# 2268
      bfd = bind_port_helper(config);
      }
    }
    {
# 2271
    log_error(2, "accept connection ... ");
# 2273
    tmp___0 = accept_connection(csp, bfd);
    }
# 2273
    if (tmp___0) {
      {
# 2288
      log_error(2, "OK");
      }
    } else {
      {
# 2275
      log_error(2, "accept failed: %E");
      }
# 2283
      if (csp) {
        {
# 2283
        free((void *)csp);
# 2283
        csp = (struct client_state *)((void *)0);
        }
      }
      goto __Cont;
    }
# 2292
    if (global_toggle_state) {
      {
# 2294
      csp->flags = (unsigned short )((int )csp->flags | 32);
      }
    }
    {
# 2298
    tmp___1 = run_loader(csp);
    }
# 2298
    if (tmp___1) {
      {
# 2300
      log_error(16384, "a loader failed - must exit");
      }
    }
    {
# 2305
    tmp___2 = block_acl((struct access_control_addr *)((void *)0), csp);
    }
# 2305
    if (tmp___2) {
      {
# 2307
      log_error(2, "Connection dropped due to ACL");
# 2308
      close_socket(csp->cfd);
      }
# 2309
      if (csp) {
        {
# 2309
        free((void *)csp);
# 2309
        csp = (struct client_state *)((void *)0);
        }
      }
      goto __Cont;
    }
    {
# 2315
    csp->next = clients[0].next;
# 2316
    clients[0].next = csp;
    }
# 2318
    if (config->multi_threaded) {
      {
# 2332
      pthread_attr_init(& attrs);
# 2333
      pthread_attr_setdetachstate(& attrs, 1);
# 2334
      tmp___3 = __errno_location();
# 2334
      (*tmp___3) = pthread_create((pthread_t */* __restrict  */)(& the_thread),
                                  (pthread_attr_t const   */* __restrict  */)((pthread_attr_t const   *)(& attrs)),
                                  (void *(*)(void * ))((void *)(& serve)),
                                  (void */* __restrict  */)((void *)csp));
# 2336
      tmp___5 = __errno_location();
      }
# 2336
      if ((*tmp___5)) {
        {
# 2336
        child_id = -1;
        }
      } else {
        {
# 2336
        child_id = 0;
        }
      }
      {
# 2337
      pthread_attr_destroy(& attrs);
      }
# 2471
      if (child_id < 0) {
        {
# 2475
        log_error(8192, "can\'t fork: %E");
# 2477
        tmp___6 = __errno_location();
# 2477
        sprintf((char */* __restrict  */)(buf),
                (char const   */* __restrict  */)((char const   *)"Privoxy: can\'t fork: errno = %d"),
                (*tmp___6));
# 2479
        tmp___7 = strlen((char const   *)(buf));
# 2479
        write_socket(csp->cfd, (char const   *)(buf), tmp___7);
# 2480
        close_socket(csp->cfd);
# 2481
        csp->flags = (unsigned short )((int )csp->flags & -2);
# 2482
        sleep(5U);
        }
        goto __Cont;
      }
    } else {
      {
# 2488
      serve(csp);
      }
    }
    __Cont: 
    {

    }
  }
# 2543
  return;
}
}
# 1 "killpopup.c"
__asm__("booo - error in global killpopup_rcs (killpopup.c:1)");
# 127
char const   killpopup_h_rcs[53]   = 
# 127
  {'$', 'I', 'd', ':', ' ', 'k', 'i', 'l', 'l', 'p', 'o', 'p', 'u', 'p', '.',
   'h', ',', 'v', ' ', '1', '.', '8', ' ', '2', '0', '0', '2', '/', '0', '3',
   '/', '2', '6', ' ', '2', '2', ':', '2', '9', ':', '5', '5', ' ', 's', 'w',
   'a', ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 147
void filter_popups(char *buff , struct client_state *csp ) 
{ char *start_p ;
  char *close_p ;
  char *p ;

  {
  {
# 149
  start_p = (char *)((void *)0);
# 150
  close_p = (char *)((void *)0);
# 151
  p = (char *)((void *)0);
  }
# 157
  while (1) {
    {
# 157
    start_p = (char *)strstr((char const   */* __attribute__((__rostring__,
                             __nullterm__)) */)((char const   *)buff),
                             (char const   */* __attribute__((__rostring__,
                             __nullterm__)) */)((char const   *)"window.open("));
    }
# 157
    if (! ((unsigned int )start_p != (unsigned int )((void *)0))) {
# 157
      break;
    }
# 159
    if (start_p) {
      {
# 161
      strncpy((char */* __restrict  */)start_p,
              (char const   */* __restrict  */)((char const   *)"1;\'\'.concat("),
              12U);
# 162
      log_error(1024, "Blocked popup window open");
# 163
      csp->flags = (unsigned short )((int )csp->flags | 8);
      }
    }
  }
# 170
  while (1) {
    {
# 170
    start_p = (char *)strstr((char const   */* __attribute__((__rostring__,
                             __nullterm__)) */)((char const   *)buff),
                             (char const   */* __attribute__((__rostring__,
                             __nullterm__)) */)((char const   *)".resizeTo("));
    }
# 170
    if (! ((unsigned int )start_p != (unsigned int )((void *)0))) {
# 170
      break;
    }
# 172
    if (start_p) {
      {
# 174
      strncpy((char */* __restrict  */)start_p,
              (char const   */* __restrict  */)((char const   *)".scrollTo("),
              10U);
# 175
      log_error(1024, "Blocked popup window resize");
# 176
      csp->flags = (unsigned short )((int )csp->flags | 8);
      }
    }
  }
  {
# 183
  start_p = (char *)strstr((char const   */* __attribute__((__rostring__,
                           __nullterm__)) */)((char const   *)buff),
                           (char const   */* __attribute__((__rostring__,
                           __nullterm__)) */)((char const   *)"<body"));
  }
# 184
  if (! start_p) {
    {
# 184
    start_p = (char *)strstr((char const   */* __attribute__((__rostring__,
                             __nullterm__)) */)((char const   *)buff),
                             (char const   */* __attribute__((__rostring__,
                             __nullterm__)) */)((char const   *)"<BODY"));
    }
  }
# 185
  if (! start_p) {
    {
# 185
    start_p = (char *)strstr((char const   */* __attribute__((__rostring__,
                             __nullterm__)) */)((char const   *)buff),
                             (char const   */* __attribute__((__rostring__,
                             __nullterm__)) */)((char const   *)"<Body"));
    }
  }
# 186
  if (! start_p) {
    {
# 186
    start_p = (char *)strstr((char const   */* __attribute__((__rostring__,
                             __nullterm__)) */)((char const   *)buff),
                             (char const   */* __attribute__((__rostring__,
                             __nullterm__)) */)((char const   *)"<BOdy"));
    }
  }
# 187
  if (start_p) {
    {
# 189
    close_p = strchr((char const   *)start_p, (int )'>');
    }
# 190
    if (close_p) {
      {
# 193
      p = (char *)strstr((char const   */* __attribute__((__rostring__,
                         __nullterm__)) */)((char const   *)start_p),
                         (char const   */* __attribute__((__rostring__,
                         __nullterm__)) */)((char const   *)"onUnload"));
      }
# 194
      if (p) {
        {
# 196
        strncpy((char */* __restrict  */)p,
                (char const   */* __restrict  */)((char const   *)"_nU_"), 4U);
# 197
        csp->flags = (unsigned short )((int )csp->flags | 8);
        }
      }
      {
# 199
      p = (char *)strstr((char const   */* __attribute__((__rostring__,
                         __nullterm__)) */)((char const   *)start_p),
                         (char const   */* __attribute__((__rostring__,
                         __nullterm__)) */)((char const   *)"onExit"));
      }
# 200
      if (p) {
        {
# 202
        strncpy((char */* __restrict  */)p,
                (char const   */* __restrict  */)((char const   *)"_nE_"), 4U);
# 203
        csp->flags = (unsigned short )((int )csp->flags | 8);
        }
      }
    }
  }
# 208
  return;
}
}
# 1 "list.c"
__asm__("booo - error in global list_rcs (list.c:1)");
# 142
char const   list_h_rcs[53]   = 
# 142
  {'$', 'I', 'd', ':', ' ', 'l', 'i', 's', 't', '.', 'h', ',', 'v', ' ', '1',
   '.', '1', '2', '.', '2', '.', '1', ' ', '2', '0', '0', '2', '/', '1', '1',
   '/', '2', '8', ' ', '1', '8', ':', '1', '4', ':', '5', '4', ' ', 'o', 'e',
   's', ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 145
static int list_is_valid(struct list  const  *the_list ) ;
# 167
void init_list(struct list *the_list ) 
{ 

  {
  {
# 169
  memset((void *)the_list, (int )'\0', sizeof((*the_list)));
  }
# 170
  return;
}
}
# 195
void destroy_list(struct list *the_list ) 
{ struct list_entry *cur_entry ;
  struct list_entry *next_entry ;

  {
# 199
  if (! the_list) {
    {
# 199
    __assert_fail((char const   *)"the_list", (char const   *)"list.c", 199U,
                  (char const   *)"destroy_list");
    }
  }
  {
# 201
  cur_entry = the_list->first;
  }
# 201
  while (cur_entry) {
    {
# 203
    next_entry = cur_entry->next;
    }
# 204
    if (cur_entry->str) {
      {
# 204
      free((void *)cur_entry->str);
# 204
      cur_entry->str = (char *)((void *)0);
      }
    }
    {
# 205
    free((void *)cur_entry);
# 201
    cur_entry = next_entry;
    }
  }
  {
# 208
  the_list->first = (struct list_entry *)((void *)0);
# 209
  the_list->last = (struct list_entry *)((void *)0);
  }
# 210
  return;
}
}
# 230
static int list_is_valid(struct list  const  *the_list ) 
{ struct list_entry  const  *cur_entry ;
  struct list_entry  const  *last_entry ;
  int length ;

  {
  {
# 238
  last_entry = (struct list_entry  const  *)((void *)0);
# 239
  length = 0;
  }
# 241
  if (! the_list) {
    {
# 241
    __assert_fail((char const   *)"the_list", (char const   *)"list.c", 241U,
                  (char const   *)"list_is_valid");
    }
  }
  {
# 243
  cur_entry = (struct list_entry  const  *)the_list->first;
  }
# 243
  while (cur_entry) {
    {
# 245
    last_entry = cur_entry;
    }
# 247
    if (cur_entry->str) {
      {
# 253
      strlen((char const   *)cur_entry->str);
      }
    }
# 259
    if (length != 0) {
# 259
      if ((unsigned int )cur_entry == (unsigned int )the_list->first) {
# 261
        return (0);
      }
    }
    {
# 267
    length ++;
    }
# 267
    if (length > 1000) {
# 269
      return (0);
    }
# 276
    if ((unsigned int )the_list->last == (unsigned int )cur_entry) {
# 276
      if ((unsigned int )cur_entry->next != (unsigned int )((void *)0)) {
# 279
        return (0);
      }
    }
    {
# 243
    cur_entry = (struct list_entry  const  *)cur_entry->next;
    }
  }
# 283
  return ((unsigned int )the_list->last == (unsigned int )last_entry);
}
}
# 304
jb_err enlist(struct list *the_list , char const   *str ) 
{ struct list_entry *cur ;
  int tmp ;
  int tmp___1 ;

  {
# 308
  if (! the_list) {
    {
# 308
    __assert_fail((char const   *)"the_list", (char const   *)"list.c", 308U,
                  (char const   *)"enlist");
    }
  }
  {
# 309
  tmp = list_is_valid((struct list  const  *)the_list);
  }
# 309
  if (! tmp) {
    {
# 309
    __assert_fail((char const   *)"list_is_valid(the_list)",
                  (char const   *)"list.c", 309U, (char const   *)"enlist");
    }
  }
  {
# 311
  cur = (struct list_entry *)zalloc(sizeof((*cur)));
  }
# 311
  if ((unsigned int )((void *)0) == (unsigned int )cur) {
# 313
    return (1);
  }
# 316
  if (str) {
    {
# 318
    cur->str = strdup(str);
    }
# 318
    if ((unsigned int )((void *)0) == (unsigned int )cur->str) {
      {
# 320
      free((void *)cur);
      }
# 321
      return (1);
    }
  }
# 328
  if (the_list->last) {
    {
# 330
    (the_list->last)->next = cur;
# 331
    the_list->last = cur;
    }
  } else {
    {
# 335
    the_list->first = cur;
# 336
    the_list->last = cur;
    }
  }
  {
# 339
  tmp___1 = list_is_valid((struct list  const  *)the_list);
  }
# 339
  if (! tmp___1) {
    {
# 339
    __assert_fail((char const   *)"list_is_valid(the_list)",
                  (char const   *)"list.c", 339U, (char const   *)"enlist");
    }
  }
# 340
  return (0);
}
}
# 360
jb_err enlist_first(struct list *the_list , char const   *str ) 
{ struct list_entry *cur ;
  int tmp ;
  int tmp___1 ;

  {
# 364
  if (! the_list) {
    {
# 364
    __assert_fail((char const   *)"the_list", (char const   *)"list.c", 364U,
                  (char const   *)"enlist_first");
    }
  }
  {
# 365
  tmp = list_is_valid((struct list  const  *)the_list);
  }
# 365
  if (! tmp) {
    {
# 365
    __assert_fail((char const   *)"list_is_valid(the_list)",
                  (char const   *)"list.c", 365U, (char const   *)"enlist_first");
    }
  }
  {
# 367
  cur = (struct list_entry *)zalloc(sizeof((*cur)));
  }
# 367
  if ((unsigned int )((void *)0) == (unsigned int )cur) {
# 369
    return (1);
  }
# 372
  if (str) {
    {
# 374
    cur->str = strdup(str);
    }
# 374
    if ((unsigned int )((void *)0) == (unsigned int )cur->str) {
      {
# 376
      free((void *)cur);
      }
# 377
      return (1);
    }
  }
  {
# 382
  cur->next = the_list->first;
# 384
  the_list->first = cur;
  }
# 385
  if ((unsigned int )the_list->last == (unsigned int )((void *)0)) {
    {
# 387
    the_list->last = cur;
    }
  }
  {
# 390
  tmp___1 = list_is_valid((struct list  const  *)the_list);
  }
# 390
  if (! tmp___1) {
    {
# 390
    __assert_fail((char const   *)"list_is_valid(the_list)",
                  (char const   *)"list.c", 390U, (char const   *)"enlist_first");
    }
  }
# 391
  return (0);
}
}
# 417
jb_err enlist_unique(struct list *the_list , char const   *str ,
                     size_t num_significant_chars ) 
{ struct list_entry *cur_entry ;
  int tmp ;
  size_t tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  jb_err tmp___3 ;

  {
# 422
  if (! the_list) {
    {
# 422
    __assert_fail((char const   *)"the_list", (char const   *)"list.c", 422U,
                  (char const   *)"enlist_unique");
    }
  }
  {
# 423
  tmp = list_is_valid((struct list  const  *)the_list);
  }
# 423
  if (! tmp) {
    {
# 423
    __assert_fail((char const   *)"list_is_valid(the_list)",
                  (char const   *)"list.c", 423U,
                  (char const   *)"enlist_unique");
    }
  }
# 424
  if (! str) {
    {
# 424
    __assert_fail((char const   *)"str", (char const   *)"list.c", 424U,
                  (char const   *)"enlist_unique");
    }
  }
# 425
  if (! (num_significant_chars >= 0U)) {
    {
# 425
    __assert_fail((char const   *)"num_significant_chars >= 0",
                  (char const   *)"list.c", 425U,
                  (char const   *)"enlist_unique");
    }
  }
  {
# 426
  tmp___0 = strlen(str);
  }
# 426
  if (! (num_significant_chars <= tmp___0)) {
    {
# 426
    __assert_fail((char const   *)"num_significant_chars <= strlen(str)",
                  (char const   *)"list.c", 426U,
                  (char const   *)"enlist_unique");
    }
  }
# 428
  if (num_significant_chars > 0U) {
    {
# 430
    cur_entry = the_list->first;
    }
# 430
    while ((unsigned int )cur_entry != (unsigned int )((void *)0)) {
# 432
      if ((unsigned int )cur_entry->str != (unsigned int )((void *)0)) {
        {
# 432
        tmp___1 = strncmp(str, (char const   *)cur_entry->str,
                          num_significant_chars);
        }
# 432
        if (0 == tmp___1) {
# 436
          return (0);
        }
      }
      {
# 430
      cur_entry = cur_entry->next;
      }
    }
  } else {
    {
# 443
    cur_entry = the_list->first;
    }
# 443
    while ((unsigned int )cur_entry != (unsigned int )((void *)0)) {
# 445
      if ((unsigned int )cur_entry->str != (unsigned int )((void *)0)) {
        {
# 445
        tmp___2 = strcmp(str, (char const   *)cur_entry->str);
        }
# 445
        if (0 == tmp___2) {
# 448
          return (0);
        }
      }
      {
# 443
      cur_entry = cur_entry->next;
      }
    }
  }
  {
# 453
  tmp___3 = enlist(the_list, str);
  }
# 453
  return (tmp___3);
}
}
# 477
jb_err enlist_unique_header(struct list *the_list , char const   *name ,
                            char const   *value ) 
{ size_t length ;
  jb_err result ;
  char *str ;
  int tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  int tmp___3 ;

  {
# 484
  if (! the_list) {
    {
# 484
    __assert_fail((char const   *)"the_list", (char const   *)"list.c", 484U,
                  (char const   *)"enlist_unique_header");
    }
  }
  {
# 485
  tmp = list_is_valid((struct list  const  *)the_list);
  }
# 485
  if (! tmp) {
    {
# 485
    __assert_fail((char const   *)"list_is_valid(the_list)",
                  (char const   *)"list.c", 485U,
                  (char const   *)"enlist_unique_header");
    }
  }
# 486
  if (! name) {
    {
# 486
    __assert_fail((char const   *)"name", (char const   *)"list.c", 486U,
                  (char const   *)"enlist_unique_header");
    }
  }
# 487
  if (! value) {
    {
# 487
    __assert_fail((char const   *)"value", (char const   *)"list.c", 487U,
                  (char const   *)"enlist_unique_header");
    }
  }
  {
# 489
  tmp___0 = strlen(name);
# 489
  length = tmp___0 + 2U;
# 490
  tmp___1 = strlen(value);
# 490
  str = (char *)malloc((length + tmp___1) + 1U);
  }
# 490
  if ((unsigned int )((void *)0) == (unsigned int )str) {
# 492
    return (1);
  }
  {
# 494
  strcpy((char */* __restrict  */)str, (char const   */* __restrict  */)name);
# 495
  (*(str + (length - 2U))) = ':';
# 496
  (*(str + (length - 1U))) = ' ';
# 497
  strcpy((char */* __restrict  */)(str + length),
         (char const   */* __restrict  */)value);
# 499
  result = enlist_unique(the_list, (char const   *)str, length);
# 501
  free((void *)str);
# 503
  tmp___3 = list_is_valid((struct list  const  *)the_list);
  }
# 503
  if (! tmp___3) {
    {
# 503
    __assert_fail((char const   *)"list_is_valid(the_list)",
                  (char const   *)"list.c", 503U,
                  (char const   *)"enlist_unique_header");
    }
  }
# 505
  return (result);
}
}
# 526
void list_remove_all(struct list *the_list ) 
{ struct list_entry *cur_entry ;
  struct list_entry *next_entry ;
  int tmp ;
  int tmp___0 ;

  {
# 531
  if (! the_list) {
    {
# 531
    __assert_fail((char const   *)"the_list", (char const   *)"list.c", 531U,
                  (char const   *)"list_remove_all");
    }
  }
  {
# 532
  tmp = list_is_valid((struct list  const  *)the_list);
  }
# 532
  if (! tmp) {
    {
# 532
    __assert_fail((char const   *)"list_is_valid(the_list)",
                  (char const   *)"list.c", 532U,
                  (char const   *)"list_remove_all");
    }
  }
  {
# 534
  cur_entry = the_list->first;
  }
# 534
  while (cur_entry) {
    {
# 536
    next_entry = cur_entry->next;
    }
# 537
    if (cur_entry->str) {
      {
# 537
      free((void *)cur_entry->str);
# 537
      cur_entry->str = (char *)((void *)0);
      }
    }
    {
# 538
    free((void *)cur_entry);
# 534
    cur_entry = next_entry;
    }
  }
  {
# 541
  the_list->last = (struct list_entry *)((void *)0);
# 541
  the_list->first = the_list->last;
# 543
  tmp___0 = list_is_valid((struct list  const  *)the_list);
  }
# 543
  if (! tmp___0) {
    {
# 543
    __assert_fail((char const   *)"list_is_valid(the_list)",
                  (char const   *)"list.c", 543U,
                  (char const   *)"list_remove_all");
    }
  }
# 544
  return;
}
}
# 562
char *list_to_text(struct list  const  *the_list ) 
{ struct list_entry *cur_entry ;
  char *ret ;
  char *s ;
  size_t size ;
  int tmp ;
  size_t tmp___0 ;
  size_t tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;

  {
  {
# 565
  ret = (char *)((void *)0);
# 567
  size = (unsigned int )2;
  }
# 569
  if (! the_list) {
    {
# 569
    __assert_fail((char const   *)"the_list", (char const   *)"list.c", 569U,
                  (char const   *)"list_to_text");
    }
  }
  {
# 570
  tmp = list_is_valid(the_list);
  }
# 570
  if (! tmp) {
    {
# 570
    __assert_fail((char const   *)"list_is_valid(the_list)",
                  (char const   *)"list.c", 570U, (char const   *)"list_to_text");
    }
  }
  {
# 572
  cur_entry = the_list->first;
  }
# 572
  while (cur_entry) {
# 574
    if (cur_entry->str) {
      {
# 576
      tmp___0 = strlen((char const   *)cur_entry->str);
# 576
      size += tmp___0 + 2U;
      }
    }
    {
# 572
    cur_entry = cur_entry->next;
    }
  }
  {
# 580
  ret = (char *)malloc(size + 1U);
  }
# 580
  if ((unsigned int )ret == (unsigned int )((void *)0)) {
# 582
    return ((char *)((void *)0));
  }
  {
# 585
  (*(ret + size)) = '\0';
# 587
  s = ret;
# 589
  cur_entry = the_list->first;
  }
# 589
  while (cur_entry) {
# 591
    if (cur_entry->str) {
      {
# 593
      strcpy((char */* __restrict  */)s,
             (char const   */* __restrict  */)((char const   *)cur_entry->str));
# 594
      tmp___2 = strlen((char const   *)s);
# 594
      s += tmp___2;
# 595
      tmp___3 = s;
# 595
      s ++;
# 595
      (*tmp___3) = '\r';
# 595
      tmp___4 = s;
# 595
      s ++;
# 595
      (*tmp___4) = '\n';
      }
    }
    {
# 589
    cur_entry = cur_entry->next;
    }
  }
  {
# 598
  tmp___5 = s;
# 598
  s ++;
# 598
  (*tmp___5) = '\r';
# 598
  tmp___6 = s;
# 598
  s ++;
# 598
  (*tmp___6) = '\n';
  }
# 600
  return (ret);
}
}
# 617
int list_remove_item(struct list *the_list , char const   *str ) 
{ struct list_entry *prev ;
  struct list_entry *cur ;
  struct list_entry *next ;
  int count ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
# 619
  prev = (struct list_entry *)((void *)0);
# 622
  count = 0;
  }
# 624
  if (! the_list) {
    {
# 624
    __assert_fail((char const   *)"the_list", (char const   *)"list.c", 624U,
                  (char const   *)"list_remove_item");
    }
  }
  {
# 625
  tmp = list_is_valid((struct list  const  *)the_list);
  }
# 625
  if (! tmp) {
    {
# 625
    __assert_fail((char const   *)"list_is_valid(the_list)",
                  (char const   *)"list.c", 625U,
                  (char const   *)"list_remove_item");
    }
  }
# 626
  if (! str) {
    {
# 626
    __assert_fail((char const   *)"str", (char const   *)"list.c", 626U,
                  (char const   *)"list_remove_item");
    }
  }
  {
# 628
  cur = the_list->first;
  }
# 630
  while ((unsigned int )cur != (unsigned int )((void *)0)) {
    {
# 632
    next = cur->next;
    }
# 634
    if ((unsigned int )cur->str != (unsigned int )((void *)0)) {
      {
# 634
      tmp___0 = strcmp(str, (char const   *)cur->str);
      }
# 634
      if (0 == tmp___0) {
        {
# 636
        count ++;
        }
# 638
        if ((unsigned int )prev != (unsigned int )((void *)0)) {
          {
# 640
          prev->next = next;
          }
        } else {
          {
# 644
          the_list->first = next;
          }
        }
        {
# 646
        free((void *)cur->str);
# 647
        free((void *)cur);
        }
      } else {
        {
# 651
        prev = cur;
        }
      }
    } else {
      {
# 651
      prev = cur;
      }
    }
    {
# 653
    cur = next;
    }
  }
  {
# 656
  the_list->last = prev;
# 658
  tmp___1 = list_is_valid((struct list  const  *)the_list);
  }
# 658
  if (! tmp___1) {
    {
# 658
    __assert_fail((char const   *)"list_is_valid(the_list)",
                  (char const   *)"list.c", 658U,
                  (char const   *)"list_remove_item");
    }
  }
# 660
  return (count);
}
}
# 679
int list_remove_list(struct list *dest , struct list  const  *src ) 
{ struct list_entry *cur ;
  int count ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  {
# 682
  count = 0;
  }
# 684
  if (! src) {
    {
# 684
    __assert_fail((char const   *)"src", (char const   *)"list.c", 684U,
                  (char const   *)"list_remove_list");
    }
  }
# 685
  if (! dest) {
    {
# 685
    __assert_fail((char const   *)"dest", (char const   *)"list.c", 685U,
                  (char const   *)"list_remove_list");
    }
  }
  {
# 686
  tmp = list_is_valid(src);
  }
# 686
  if (! tmp) {
    {
# 686
    __assert_fail((char const   *)"list_is_valid(src)",
                  (char const   *)"list.c", 686U,
                  (char const   *)"list_remove_list");
    }
  }
  {
# 687
  tmp___0 = list_is_valid((struct list  const  *)dest);
  }
# 687
  if (! tmp___0) {
    {
# 687
    __assert_fail((char const   *)"list_is_valid(dest)",
                  (char const   *)"list.c", 687U,
                  (char const   *)"list_remove_list");
    }
  }
  {
# 689
  cur = src->first;
  }
# 689
  while ((unsigned int )cur != (unsigned int )((void *)0)) {
# 691
    if ((unsigned int )cur->str != (unsigned int )((void *)0)) {
      {
# 693
      tmp___1 = list_remove_item(dest, (char const   *)cur->str);
# 693
      count += tmp___1;
      }
    }
    {
# 689
    cur = cur->next;
    }
  }
  {
# 697
  tmp___2 = list_is_valid(src);
  }
# 697
  if (! tmp___2) {
    {
# 697
    __assert_fail((char const   *)"list_is_valid(src)",
                  (char const   *)"list.c", 697U,
                  (char const   *)"list_remove_list");
    }
  }
  {
# 698
  tmp___3 = list_is_valid((struct list  const  *)dest);
  }
# 698
  if (! tmp___3) {
    {
# 698
    __assert_fail((char const   *)"list_is_valid(dest)",
                  (char const   *)"list.c", 698U,
                  (char const   *)"list_remove_list");
    }
  }
# 700
  return (count);
}
}
# 720
jb_err list_duplicate(struct list *dest , struct list  const  *src ) 
{ struct list_entry *cur_src ;
  struct list_entry *cur_dest ;
  int tmp ;
  int tmp___0 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;

  {
# 725
  if (! src) {
    {
# 725
    __assert_fail((char const   *)"src", (char const   *)"list.c", 725U,
                  (char const   *)"list_duplicate");
    }
  }
# 726
  if (! dest) {
    {
# 726
    __assert_fail((char const   *)"dest", (char const   *)"list.c", 726U,
                  (char const   *)"list_duplicate");
    }
  }
  {
# 727
  tmp = list_is_valid(src);
  }
# 727
  if (! tmp) {
    {
# 727
    __assert_fail((char const   *)"list_is_valid(src)",
                  (char const   *)"list.c", 727U,
                  (char const   *)"list_duplicate");
    }
  }
  {
# 728
  tmp___0 = list_is_valid((struct list  const  *)dest);
  }
# 728
  if (! tmp___0) {
    {
# 728
    __assert_fail((char const   *)"list_is_valid(dest)",
                  (char const   *)"list.c", 728U,
                  (char const   *)"list_duplicate");
    }
  }
  {
# 730
  list_remove_all(dest);
# 733
  cur_src = src->first;
  }
# 734
  if (cur_src) {
    {
# 736
    dest->first = (struct list_entry *)zalloc(sizeof((*cur_dest)));
# 736
    cur_dest = dest->first;
    }
# 737
    if ((unsigned int )cur_dest == (unsigned int )((void *)0)) {
      {
# 739
      destroy_list(dest);
# 741
      tmp___2 = list_is_valid(src);
      }
# 741
      if (! tmp___2) {
        {
# 741
        __assert_fail((char const   *)"list_is_valid(src)",
                      (char const   *)"list.c", 741U,
                      (char const   *)"list_duplicate");
        }
      }
      {
# 742
      tmp___3 = list_is_valid((struct list  const  *)dest);
      }
# 742
      if (! tmp___3) {
        {
# 742
        __assert_fail((char const   *)"list_is_valid(dest)",
                      (char const   *)"list.c", 742U,
                      (char const   *)"list_duplicate");
        }
      }
# 744
      return (1);
    }
# 747
    if (cur_src->str) {
      {
# 749
      cur_dest->str = strdup((char const   *)cur_src->str);
      }
# 750
      if ((unsigned int )cur_dest->str == (unsigned int )((void *)0)) {
        {
# 752
        destroy_list(dest);
# 754
        tmp___4 = list_is_valid(src);
        }
# 754
        if (! tmp___4) {
          {
# 754
          __assert_fail((char const   *)"list_is_valid(src)",
                        (char const   *)"list.c", 754U,
                        (char const   *)"list_duplicate");
          }
        }
        {
# 755
        tmp___5 = list_is_valid((struct list  const  *)dest);
        }
# 755
        if (! tmp___5) {
          {
# 755
          __assert_fail((char const   *)"list_is_valid(dest)",
                        (char const   *)"list.c", 755U,
                        (char const   *)"list_duplicate");
          }
        }
# 757
        return (1);
      }
    }
    {
# 763
    cur_src = cur_src->next;
    }
# 763
    while (cur_src) {
      {
# 765
      cur_dest->next = (struct list_entry *)zalloc(sizeof((*cur_dest)));
# 765
      cur_dest = cur_dest->next;
      }
# 766
      if ((unsigned int )cur_dest == (unsigned int )((void *)0)) {
        {
# 768
        destroy_list(dest);
# 770
        tmp___7 = list_is_valid(src);
        }
# 770
        if (! tmp___7) {
          {
# 770
          __assert_fail((char const   *)"list_is_valid(src)",
                        (char const   *)"list.c", 770U,
                        (char const   *)"list_duplicate");
          }
        }
        {
# 771
        tmp___8 = list_is_valid((struct list  const  *)dest);
        }
# 771
        if (! tmp___8) {
          {
# 771
          __assert_fail((char const   *)"list_is_valid(dest)",
                        (char const   *)"list.c", 771U,
                        (char const   *)"list_duplicate");
          }
        }
# 773
        return (1);
      }
# 775
      if (cur_src->str) {
        {
# 777
        cur_dest->str = strdup((char const   *)cur_src->str);
        }
# 778
        if ((unsigned int )cur_dest->str == (unsigned int )((void *)0)) {
          {
# 780
          destroy_list(dest);
# 782
          tmp___9 = list_is_valid(src);
          }
# 782
          if (! tmp___9) {
            {
# 782
            __assert_fail((char const   *)"list_is_valid(src)",
                          (char const   *)"list.c", 782U,
                          (char const   *)"list_duplicate");
            }
          }
          {
# 783
          tmp___10 = list_is_valid((struct list  const  *)dest);
          }
# 783
          if (! tmp___10) {
            {
# 783
            __assert_fail((char const   *)"list_is_valid(dest)",
                          (char const   *)"list.c", 783U,
                          (char const   *)"list_duplicate");
            }
          }
# 785
          return (1);
        }
      }
      {
# 763
      cur_src = cur_src->next;
      }
    }
    {
# 791
    dest->last = cur_dest;
    }
  }
  {
# 794
  tmp___11 = list_is_valid(src);
  }
# 794
  if (! tmp___11) {
    {
# 794
    __assert_fail((char const   *)"list_is_valid(src)",
                  (char const   *)"list.c", 794U,
                  (char const   *)"list_duplicate");
    }
  }
  {
# 795
  tmp___12 = list_is_valid((struct list  const  *)dest);
  }
# 795
  if (! tmp___12) {
    {
# 795
    __assert_fail((char const   *)"list_is_valid(dest)",
                  (char const   *)"list.c", 795U,
                  (char const   *)"list_duplicate");
    }
  }
# 797
  return (0);
}
}
# 818
jb_err list_append_list_unique(struct list *dest , struct list  const  *src ) 
{ struct list_entry *cur ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  jb_err tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
# 822
  if (! src) {
    {
# 822
    __assert_fail((char const   *)"src", (char const   *)"list.c", 822U,
                  (char const   *)"list_append_list_unique");
    }
  }
# 823
  if (! dest) {
    {
# 823
    __assert_fail((char const   *)"dest", (char const   *)"list.c", 823U,
                  (char const   *)"list_append_list_unique");
    }
  }
  {
# 824
  tmp = list_is_valid(src);
  }
# 824
  if (! tmp) {
    {
# 824
    __assert_fail((char const   *)"list_is_valid(src)",
                  (char const   *)"list.c", 824U,
                  (char const   *)"list_append_list_unique");
    }
  }
  {
# 825
  tmp___0 = list_is_valid((struct list  const  *)dest);
  }
# 825
  if (! tmp___0) {
    {
# 825
    __assert_fail((char const   *)"list_is_valid(dest)",
                  (char const   *)"list.c", 825U,
                  (char const   *)"list_append_list_unique");
    }
  }
  {
# 827
  cur = src->first;
  }
# 827
  while (cur) {
# 829
    if (cur->str) {
      {
# 831
      tmp___3 = enlist_unique(dest, (char const   *)cur->str, 0U);
      }
# 831
      if (tmp___3) {
        {
# 833
        tmp___1 = list_is_valid(src);
        }
# 833
        if (! tmp___1) {
          {
# 833
          __assert_fail((char const   *)"list_is_valid(src)",
                        (char const   *)"list.c", 833U,
                        (char const   *)"list_append_list_unique");
          }
        }
        {
# 834
        tmp___2 = list_is_valid((struct list  const  *)dest);
        }
# 834
        if (! tmp___2) {
          {
# 834
          __assert_fail((char const   *)"list_is_valid(dest)",
                        (char const   *)"list.c", 834U,
                        (char const   *)"list_append_list_unique");
          }
        }
# 836
        return (1);
      }
    }
    {
# 827
    cur = cur->next;
    }
  }
  {
# 841
  tmp___4 = list_is_valid(src);
  }
# 841
  if (! tmp___4) {
    {
# 841
    __assert_fail((char const   *)"list_is_valid(src)",
                  (char const   *)"list.c", 841U,
                  (char const   *)"list_append_list_unique");
    }
  }
  {
# 842
  tmp___5 = list_is_valid((struct list  const  *)dest);
  }
# 842
  if (! tmp___5) {
    {
# 842
    __assert_fail((char const   *)"list_is_valid(dest)",
                  (char const   *)"list.c", 842U,
                  (char const   *)"list_append_list_unique");
    }
  }
# 844
  return (0);
}
}
# 860
int list_is_empty(struct list  const  *the_list ) 
{ int tmp ;

  {
# 862
  if (! the_list) {
    {
# 862
    __assert_fail((char const   *)"the_list", (char const   *)"list.c", 862U,
                  (char const   *)"list_is_empty");
    }
  }
  {
# 863
  tmp = list_is_valid(the_list);
  }
# 863
  if (! tmp) {
    {
# 863
    __assert_fail((char const   *)"list_is_valid(the_list)",
                  (char const   *)"list.c", 863U,
                  (char const   *)"list_is_empty");
    }
  }
# 865
  return ((unsigned int )the_list->first == (unsigned int )((void *)0));
}
}
# 880
struct map *new_map(void) 
{ struct map *tmp ;

  {
  {
# 882
  tmp = (struct map *)zalloc(sizeof(struct map ));
  }
# 882
  return (tmp);
}
}
# 899
void free_map(struct map *the_map ) 
{ struct map_entry *cur_entry ;
  struct map_entry *next_entry ;

  {
# 904
  if ((unsigned int )the_map == (unsigned int )((void *)0)) {
# 906
    return;
  }
  {
# 909
  cur_entry = the_map->first;
  }
# 909
  while ((unsigned int )cur_entry != (unsigned int )((void *)0)) {
# 911
    if (cur_entry->name) {
      {
# 911
      free((void *)cur_entry->name);
# 911
      cur_entry->name = (char const   *)((void *)0);
      }
    }
# 912
    if (cur_entry->value) {
      {
# 912
      free((void *)cur_entry->value);
# 912
      cur_entry->value = (char const   *)((void *)0);
      }
    }
    {
# 914
    next_entry = cur_entry->next;
# 915
    free((void *)cur_entry);
# 909
    cur_entry = next_entry;
    }
  }
  {
# 918
  the_map->last = (struct map_entry *)((void *)0);
# 918
  the_map->first = the_map->last;
# 920
  free((void *)the_map);
  }
# 921
  return;
}
}
# 967
jb_err map(struct map *the_map , char const   *name , int name_needs_copying ,
           char const   *value , int value_needs_copying ) 
{ struct map_entry *new_entry ;

  {
# 973
  if (! the_map) {
    {
# 973
    __assert_fail((char const   *)"the_map", (char const   *)"list.c", 973U,
                  (char const   *)"map");
    }
  }
# 975
  if ((unsigned int )((void *)0) == (unsigned int )value) {
    goto _L;
  } else {
# 975
    if ((unsigned int )((void *)0) == (unsigned int )name) {
      goto _L;
    } else {
      {
# 975
      new_entry = (struct map_entry *)zalloc(sizeof((*new_entry)));
      }
# 975
      if ((unsigned int )((void *)0) == (unsigned int )new_entry) {
        _L: 
# 979
        if ((unsigned int )name != (unsigned int )((void *)0)) {
# 979
          if (! name_needs_copying) {
            {
# 981
            free((void *)((char *)name));
            }
          }
        }
# 983
        if ((unsigned int )value != (unsigned int )((void *)0)) {
# 983
          if (! value_needs_copying) {
            {
# 985
            free((void *)((char *)value));
            }
          }
        }
# 987
        return (1);
      }
    }
  }
# 990
  if (name_needs_copying) {
    {
# 992
    name = (char const   *)strdup(name);
    }
# 992
    if ((unsigned int )((void *)0) == (unsigned int )name) {
      {
# 994
      free((void *)new_entry);
      }
# 995
      if (! value_needs_copying) {
        {
# 997
        free((void *)((char *)value));
        }
      }
# 999
      return (1);
    }
  }
# 1003
  if (value_needs_copying) {
    {
# 1005
    value = (char const   *)strdup(value);
    }
# 1005
    if ((unsigned int )((void *)0) == (unsigned int )value) {
      {
# 1007
      free((void *)((char *)name));
# 1008
      free((void *)new_entry);
      }
# 1009
      return (1);
    }
  }
  {
# 1013
  new_entry->name = name;
# 1014
  new_entry->value = value;
  }
# 1017
  if (the_map->last) {
    {
# 1019
    (the_map->last)->next = new_entry;
# 1020
    the_map->last = new_entry;
    }
  } else {
    {
# 1024
    the_map->first = new_entry;
# 1025
    the_map->last = new_entry;
    }
  }
# 1028
  return (0);
}
}
# 1046
jb_err unmap(struct map *the_map , char const   *name ) 
{ struct map_entry *cur_entry ;
  struct map_entry *last_entry ;
  int tmp ;

  {
# 1050
  if (! the_map) {
    {
# 1050
    __assert_fail((char const   *)"the_map", (char const   *)"list.c", 1050U,
                  (char const   *)"unmap");
    }
  }
# 1051
  if (! name) {
    {
# 1051
    __assert_fail((char const   *)"name", (char const   *)"list.c", 1051U,
                  (char const   *)"unmap");
    }
  }
  {
# 1053
  last_entry = the_map->first;
# 1055
  cur_entry = the_map->first;
  }
# 1055
  while ((unsigned int )cur_entry != (unsigned int )((void *)0)) {
    {
# 1057
    tmp = strcmp(name, cur_entry->name);
    }
# 1057
    if (tmp) {
      {
# 1090
      last_entry = cur_entry;
      }
    } else {
# 1062
      if ((unsigned int )cur_entry == (unsigned int )the_map->first) {
        {
# 1064
        the_map->first = cur_entry->next;
        }
      } else {
        {
# 1068
        last_entry->next = cur_entry->next;
        }
      }
# 1074
      if ((unsigned int )cur_entry == (unsigned int )the_map->last) {
        {
# 1076
        the_map->last = last_entry;
        }
      }
# 1082
      if (cur_entry->name) {
        {
# 1082
        free((void *)cur_entry->name);
# 1082
        cur_entry->name = (char const   *)((void *)0);
        }
      }
# 1083
      if (cur_entry->value) {
        {
# 1083
        free((void *)cur_entry->value);
# 1083
        cur_entry->value = (char const   *)((void *)0);
        }
      }
# 1084
      if (cur_entry) {
        {
# 1084
        free((void *)cur_entry);
# 1084
        cur_entry = (struct map_entry *)((void *)0);
        }
      }
      {
# 1086
      cur_entry = last_entry;
      }
    }
    {
# 1055
    cur_entry = cur_entry->next;
    }
  }
# 1093
  return (0);
}
}
# 1114
char const   *lookup(struct map  const  *the_map , char const   *name ) 
{ struct map_entry  const  *cur_entry ;
  int tmp ;

  {
# 1118
  if (! the_map) {
    {
# 1118
    __assert_fail((char const   *)"the_map", (char const   *)"list.c", 1118U,
                  (char const   *)"lookup");
    }
  }
# 1119
  if (! name) {
    {
# 1119
    __assert_fail((char const   *)"name", (char const   *)"list.c", 1119U,
                  (char const   *)"lookup");
    }
  }
  {
# 1121
  cur_entry = (struct map_entry  const  *)the_map->first;
  }
# 1121
  while ((unsigned int )cur_entry != (unsigned int )((void *)0)) {
    {
# 1123
    tmp = strcmp(name, cur_entry->name);
    }
# 1123
    if (! tmp) {
# 1125
      return (cur_entry->value);
    }
    {
# 1121
    cur_entry = (struct map_entry  const  *)cur_entry->next;
    }
  }
# 1128
  return ((char const   *)"");
}
}
# 1 "loadcfg.c"
__asm__("booo - error in global loadcfg_rcs (loadcfg.c:1)");
# 376
char const   loadcfg_h_rcs[56]   = 
# 376
  {'$', 'I', 'd', ':', ' ', 'l', 'o', 'a', 'd', 'c', 'f', 'g', '.', 'h', ',',
   'v', ' ', '1', '.', '1', '1', '.', '2', '.', '1', ' ', '2', '0', '0', '3',
   '/', '0', '3', '/', '1', '1', ' ', '1', '1', ':', '5', '3', ':', '5', '9',
   ' ', 'o', 'e', 's', ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 391
int global_toggle_state   = 1;
# 395
char const   *configfile   = (char const   *)((void *)0);
# 401
int Argc   = 0;
# 402
char const   **Argv   = (char const   **)((void *)0);
# 404
static struct file_list *current_configfile   = (struct file_list *)((void *)0);
# 455
static void savearg(char *command , char *argument ,
                    struct configuration_spec *config ) ;
# 469
void unload_configfile(void *data ) 
{ struct configuration_spec *config ;
  struct forward_spec *cur_fwd ;
  int i ;
  struct access_control_list *cur_acl ;
  struct access_control_list *next_acl ;
  struct forward_spec *next_fwd ;

  {
  {
# 471
  config = (struct configuration_spec *)data;
# 472
  cur_fwd = config->forward;
# 476
  cur_acl = config->acl;
  }
# 478
  while ((unsigned int )cur_acl != (unsigned int )((void *)0)) {
    {
# 480
    next_acl = cur_acl->next;
# 481
    free((void *)cur_acl);
# 482
    cur_acl = next_acl;
    }
  }
  {
# 484
  config->acl = (struct access_control_list *)((void *)0);
  }
# 487
  while ((unsigned int )cur_fwd != (unsigned int )((void *)0)) {
    {
# 489
    next_fwd = cur_fwd->next;
# 490
    free_url_spec(cur_fwd->url);
    }
# 492
    if (cur_fwd->gateway_host) {
      {
# 492
      free((void *)cur_fwd->gateway_host);
# 492
      cur_fwd->gateway_host = (char *)((void *)0);
      }
    }
# 493
    if (cur_fwd->forward_host) {
      {
# 493
      free((void *)cur_fwd->forward_host);
# 493
      cur_fwd->forward_host = (char *)((void *)0);
      }
    }
    {
# 494
    free((void *)cur_fwd);
# 495
    cur_fwd = next_fwd;
    }
  }
  {
# 497
  config->forward = (struct forward_spec *)((void *)0);
  }
# 500
  if ((unsigned int )((void *)0) != (unsigned int )config->jar) {
    {

    {
# 96 "spec.work"
    if ((config->jar)->__BLAST_FLAG == 1) {
# 97
      (config->jar)->__BLAST_FLAG = 0;
    } else {
# 98
      __error__();
    }
    {

    }
    }
# 502 "loadcfg.c"
    fclose(config->jar);
# 503
    config->jar = (FILE *)((void *)0);
    }
  }
# 507
  if (config->confdir) {
    {
# 507
    free((void *)config->confdir);
# 507
    config->confdir = (char const   *)((void *)0);
    }
  }
# 508
  if (config->logdir) {
    {
# 508
    free((void *)config->logdir);
# 508
    config->logdir = (char const   *)((void *)0);
    }
  }
# 510
  if (config->haddr) {
    {
# 510
    free((void *)config->haddr);
# 510
    config->haddr = (char const   *)((void *)0);
    }
  }
# 511
  if (config->logfile) {
    {
# 511
    free((void *)config->logfile);
# 511
    config->logfile = (char const   *)((void *)0);
    }
  }
  {
# 513
  i = 0;
  }
# 513
  while (i < 10) {
# 515
    if (config->actions_file_short[i]) {
      {
# 515
      free((void *)config->actions_file_short[i]);
# 515
      config->actions_file_short[i] = (char const   *)((void *)0);
      }
    }
# 516
    if (config->actions_file[i]) {
      {
# 516
      free((void *)config->actions_file[i]);
# 516
      config->actions_file[i] = (char const   *)((void *)0);
      }
    }
    {
# 513
    i ++;
    }
  }
# 519
  if (config->admin_address) {
    {
# 519
    free((void *)config->admin_address);
# 519
    config->admin_address = (char *)((void *)0);
    }
  }
# 520
  if (config->proxy_info_url) {
    {
# 520
    free((void *)config->proxy_info_url);
# 520
    config->proxy_info_url = (char *)((void *)0);
    }
  }
# 521
  if (config->proxy_args) {
    {
# 521
    free((void *)config->proxy_args);
# 521
    config->proxy_args = (char *)((void *)0);
    }
  }
# 522
  if (config->usermanual) {
    {
# 522
    free((void *)config->usermanual);
# 522
    config->usermanual = (char *)((void *)0);
    }
  }
# 525
  if (config->jarfile) {
    {
# 525
    free((void *)config->jarfile);
# 525
    config->jarfile = (char const   *)((void *)0);
    }
  }
# 529
  if (config->trustfile) {
    {
# 529
    free((void *)config->trustfile);
# 529
    config->trustfile = (char const   *)((void *)0);
    }
  }
  {
# 530
  list_remove_all(config->trust_info);
  }
# 533
  if (config->re_filterfile) {
    {
# 533
    free((void *)config->re_filterfile);
# 533
    config->re_filterfile = (char const   *)((void *)0);
    }
  }
# 534
  if (config) {
    {
# 534
    free((void *)config);
# 534
    config = (struct configuration_spec *)((void *)0);
    }
  }
# 535
  return;
}
}
# 573
struct configuration_spec *load_config(void) 
{ char buf[5000] ;
  char *p ;
  char *q ;
  FILE *configfp ;
  struct configuration_spec *config ;
  struct client_state *fake_csp ;
  struct file_list *fs ;
  unsigned long linenum ;
  int i ;
  int tmp ;
  char cmd[5000] ;
  char arg[5000] ;
  char tmp___1[5000] ;
  struct access_control_list *cur_acl ;
  struct forward_spec *cur_fwd ;
  int vec_count ;
  char *vec[3] ;
  char *tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  size_t tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  jb_err tmp___14 ;
  char *tmp___15 ;
  int tmp___16 ;
  jb_err tmp___17 ;
  char *tmp___18 ;
  int tmp___19 ;
  char *tmp___20 ;
  int tmp___21 ;
  jb_err tmp___22 ;
  char *tmp___23 ;
  char *tmp___24 ;
  int tmp___25 ;
  int tmp___28 ;
  int tmp___29 ;
  unsigned int tmp___30 ;
  char *tmp___31 ;
  char *tmp___32 ;
  int tmp___34 ;
  struct configuration_spec *oldcfg ;
  int tmp___35 ;

  {
  {
# 577
  configfp = (FILE *)((void *)0);
# 578
  config = (struct configuration_spec *)((void *)0);
# 581
  linenum = 0UL;
# 584
  tmp = check_file_changed((struct file_list  const  *)current_configfile,
                           configfile, & fs);
  }
# 584
  if (! tmp) {
# 587
    return ((struct configuration_spec *)current_configfile->f);
  }
# 589
  if (! fs) {
    {
# 591
    log_error(16384, "can\'t check configuration file \'%s\':  %E", configfile);
    }
  }
  {
# 595
  log_error(4096, "loading configuration file \'%s\':", configfile);
# 598
  global_toggle_state = 1;
# 601
  config = (struct configuration_spec *)zalloc(sizeof((*config)));
# 601
  fs->f = (void *)config;
  }
# 603
  if ((unsigned int )config == (unsigned int )((void *)0)) {
# 605
    if (fs->filename) {
      {
# 605
      free((void *)fs->filename);
# 605
      fs->filename = (char *)((void *)0);
      }
    }
# 606
    if (fs) {
      {
# 606
      free((void *)fs);
# 606
      fs = (struct file_list *)((void *)0);
      }
    }
    {
# 607
    log_error(16384, "can\'t allocate memory for configuration");
    }
  }
  {
# 620
  config->config_file_list = fs;
# 625
  config->multi_threaded = 1;
# 626
  config->hport = 8118;
# 627
  config->buffer_limit = 4194304U;
# 628
  config->usermanual = strdup((char const   *)"http://www.privoxy.org/3.0.3/user-manual/");
# 629
  config->proxy_args = strdup((char const   *)"");
# 631
  configfp = fopen((char const   */* __restrict  */)configfile,
                   (char const   */* __restrict  */)((char const   *)"r"));
  {
# 17 "spec.work"
    configfp->__BLAST_FLAG = 1;
  {

  }
  }

  }
# 631 "loadcfg.c"
  if ((unsigned int )configfp == (unsigned int )((void *)0)) {
    {
# 633
    log_error(16384, "can\'t open configuration file \'%s\':  %E", configfile);
    }
  }
# 638
  while (1) {
    {
# 638
    tmp___31 = read_config_line(buf, sizeof(buf), configfp, & linenum);
    }
# 638
    if (! ((unsigned int )tmp___31 != (unsigned int )((void *)0))) {
# 638
      break;
    }
    {
# 650
    strcpy((char */* __restrict  */)(tmp___1),
           (char const   */* __restrict  */)((char const   *)(buf)));
# 653
    p = buf;
# 654
    q = cmd;
    }
# 655
    while (1) {
# 655
      if ((*p)) {
# 655
        if ((int )(*p) != 32) {
# 655
          if (! ((int )(*p) != 9)) {
# 655
            break;
          }
        } else {
# 655
          break;
        }
      } else {
# 655
        break;
      }
      {
# 657
      tmp___2 = q;
# 657
      q ++;
# 657
      tmp___3 = p;
# 657
      p ++;
# 657
      (*tmp___2) = (*tmp___3);
      }
    }
    {
# 659
    (*q) = '\0';
    }
# 662
    while (1) {
# 662
      if ((*p)) {
# 662
        if (! ((int )(*p) == 32)) {
# 662
          if (! ((int )(*p) == 9)) {
# 662
            break;
          }
        }
      } else {
# 662
        break;
      }
      {
# 664
      p ++;
      }
    }
    {
# 668
    strcpy((char */* __restrict  */)(arg),
           (char const   */* __restrict  */)((char const   *)p));
    }
# 671
    if ((int )cmd[0] == 0) {
# 673
      continue;
    }
    {
# 677
    p = cmd;
    }
# 677
    while ((*p)) {
      {
# 679
      tmp___4 = _get__ctype_b((int )((unsigned char )(*p)));
      }
# 679
      if (tmp___4 & 256) {
        {
# 681
        (*p) = (char )tolower((int )((unsigned char )(*p)));
        }
      }
      {
# 677
      p ++;
      }
    }
    {
# 686
    savearg(cmd, arg, config);
# 689
    tmp___5 = (int )hash_string((char const   *)(cmd));
    }
# 689
    switch (tmp___5) {
    case 1196306641UL: 
    {
# 696
    i = 0;
    }
# 697
    while (1) {
# 697
      if (i < 10) {
# 697
        if (! ((unsigned int )((void *)0) !=
               (unsigned int )config->actions_file[i])) {
# 697
          break;
        }
      } else {
# 697
        break;
      }
      {
# 699
      i ++;
      }
    }
# 702
    if (i >= 10) {
      {
# 704
      log_error(16384,
                "Too many \'actionsfile\' directives in config file - limit is %d.\n(You can increase this limit by changing MAX_ACTION_FILES in project.h and recompiling).",
                10);
      }
    }
    {
# 708
    config->actions_file_short[i] = (char const   *)strdup((char const   *)(arg));
# 709
    tmp___6 = strlen((char const   *)(arg));
# 709
    p = (char *)malloc(tmp___6 + sizeof(".action"));
    }
# 710
    if ((unsigned int )p == (unsigned int )((void *)0)) {
      {
# 712
      log_error(16384, "Out of memory");
      }
    }
    {
# 714
    strcpy((char */* __restrict  */)p,
           (char const   */* __restrict  */)((char const   *)(arg)));
# 715
    strcat((char */* __restrict  */)p,
           (char const   */* __restrict  */)((char const   *)".action"));
# 716
    config->actions_file[i] = (char const   *)make_path(config->confdir,
                                                        (char const   *)p);
# 717
    free((void *)p);
    }
# 718
    continue;
    case 4112573064UL: 
    {

    }
# 724
    if (config->admin_address) {
      {
# 724
      free((void *)config->admin_address);
# 724
      config->admin_address = (char *)((void *)0);
      }
    }
    {
# 725
    config->admin_address = strdup((char const   *)(arg));
    }
# 726
    continue;
    case 1881726070UL: 
    {
# 732
    tmp___7 = atoi((char const   *)(arg));
# 732
    config->buffer_limit = 1024U * (unsigned int )tmp___7;
    }
# 733
    continue;
    case 1978389UL: 
    {

    }
# 739
    if (config->confdir) {
      {
# 739
      free((void *)config->confdir);
# 739
      config->confdir = (char const   *)((void *)0);
      }
    }
    {
# 740
    config->confdir = (char const   *)make_path((char const   *)((void *)0),
                                                (char const   *)(arg));
    }
# 741
    continue;
    case 78263UL: 
    {
# 748
    tmp___8 = atoi((char const   *)(arg));
# 748
    config->debug = config->debug | tmp___8;
    }
# 749
    continue;
    case 1227333715UL: 
    {
# 756
    vec_count = ssplit(arg, (char const   *)" \t", vec,
                       (int )(sizeof(vec) / sizeof(vec[0])), 1, 1);
    }
# 758
    if (vec_count != 1) {
# 758
      if (vec_count != 2) {
        {
# 760
        log_error(8192,
                  "Wrong number of parameters for deny-access directive in configuration file.");
# 762
        string_append(& config->proxy_args,
                      (char const   *)"<br>\nWARNING: Wrong number of parameters for deny-access directive in configuration file.<br><br>\n");
        }
# 765
        continue;
      }
    }
    {
# 769
    cur_acl = (struct access_control_list *)zalloc(sizeof((*cur_acl)));
    }
# 771
    if ((unsigned int )cur_acl == (unsigned int )((void *)0)) {
      {
# 773
      log_error(16384, "can\'t allocate memory for configuration");
      }
# 775
      continue;
    }
    {
# 777
    cur_acl->action = (short )2;
# 779
    tmp___10 = acl_addr(vec[0], cur_acl->src);
    }
# 779
    if (tmp___10 < 0) {
      {
# 781
      log_error(8192,
                "Invalid source IP for deny-access directive in configuration file: \"%s\"",
                vec[0]);
# 783
      string_append(& config->proxy_args,
                    (char const   *)"<br>\nWARNING: Invalid source IP for deny-access directive in configuration file: \"");
# 786
      string_append(& config->proxy_args, (char const   *)vec[0]);
# 788
      string_append(& config->proxy_args, (char const   *)"\"<br><br>\n");
      }
# 790
      if (cur_acl) {
        {
# 790
        free((void *)cur_acl);
# 790
        cur_acl = (struct access_control_list *)((void *)0);
        }
      }
# 791
      continue;
    }
# 793
    if (vec_count == 2) {
      {
# 795
      tmp___11 = acl_addr(vec[1], cur_acl->dst);
      }
# 795
      if (tmp___11 < 0) {
        {
# 797
        log_error(8192,
                  "Invalid destination IP for deny-access directive in configuration file: \"%s\"",
                  vec[0]);
# 799
        string_append(& config->proxy_args,
                      (char const   *)"<br>\nWARNING: Invalid destination IP for deny-access directive in configuration file: \"");
# 802
        string_append(& config->proxy_args, (char const   *)vec[0]);
# 804
        string_append(& config->proxy_args, (char const   *)"\"<br><br>\n");
        }
# 806
        if (cur_acl) {
          {
# 806
          free((void *)cur_acl);
# 806
          cur_acl = (struct access_control_list *)((void *)0);
          }
        }
# 807
        continue;
      }
    }
    {
# 820
    cur_acl->next = config->acl;
# 821
    config->acl = cur_acl;
    }
# 823
    continue;
    case 2517097536UL: 
    {

    }
# 831
    if ((int )arg[0] != 0) {
      {
# 831
      tmp___12 = atoi((char const   *)(arg));
      }
# 831
      if (0 != tmp___12) {
        {
# 833
        config->feature_flags = config->feature_flags | 1U;
        }
      } else {
        {
# 837
        config->feature_flags = config->feature_flags & 4294967294U;
        }
      }
    } else {
      {
# 837
      config->feature_flags = config->feature_flags & 4294967294U;
      }
    }
# 839
    continue;
    case 2979744683UL: 
    {

    }
# 847
    if ((int )arg[0] != 0) {
      {
# 847
      tmp___13 = atoi((char const   *)(arg));
      }
# 847
      if (0 != tmp___13) {
        {
# 849
        config->feature_flags = config->feature_flags | 2U;
        }
      } else {
        {
# 853
        config->feature_flags = config->feature_flags & 4294967293U;
        }
      }
    } else {
      {
# 853
      config->feature_flags = config->feature_flags & 4294967293U;
      }
    }
# 855
    continue;
    case 250887266UL: 
    {

    }
# 863
    if (config->re_filterfile) {
      {
# 865
      log_error(8192,
                "Ignoring extraneous directive \'filterfile %s\' in line %lu in configuration file (%s).",
                arg, linenum, configfile);
# 867
      string_append(& config->proxy_args,
                    (char const   *)" <b><font color=\"red\">WARNING: extraneous directive, ignored</font></b>");
      }
# 869
      continue;
    }
    {
# 871
    config->re_filterfile = (char const   *)make_path(config->confdir,
                                                      (char const   *)(arg));
    }
# 872
    continue;
    case 2029845UL: 
    {
# 878
    vec_count = ssplit(arg, (char const   *)" \t", vec,
                       (int )(sizeof(vec) / sizeof(vec[0])), 1, 1);
    }
# 880
    if (vec_count != 2) {
      {
# 882
      log_error(8192,
                "Wrong number of parameters for forward directive in configuration file.");
# 884
      string_append(& config->proxy_args,
                    (char const   *)"<br>\nWARNING: Wrong number of parameters for forward directive in configuration file.");
      }
# 887
      continue;
    }
    {
# 891
    cur_fwd = (struct forward_spec *)zalloc(sizeof((*cur_fwd)));
    }
# 892
    if ((unsigned int )cur_fwd == (unsigned int )((void *)0)) {
      {
# 894
      log_error(16384, "can\'t allocate memory for configuration");
      }
# 896
      continue;
    }
    {
# 899
    cur_fwd->type = 0;
# 902
    tmp___14 = create_url_spec(cur_fwd->url, (char const   *)vec[0]);
    }
# 902
    if (tmp___14) {
      {
# 904
      log_error(8192,
                "Bad URL specifier for forward directive in configuration file.");
# 906
      string_append(& config->proxy_args,
                    (char const   *)"<br>\nWARNING: Bad URL specifier for forward directive in configuration file.");
      }
# 909
      continue;
    }
    {
# 913
    p = vec[1];
# 915
    tmp___16 = strcmp((char const   *)p, (char const   *)".");
    }
# 915
    if (tmp___16 != 0) {
      {
# 917
      cur_fwd->forward_host = strdup((char const   *)p);
# 919
      p = strchr((char const   *)cur_fwd->forward_host, (int )':');
      }
# 919
      if ((unsigned int )((void *)0) != (unsigned int )p) {
        {
# 921
        tmp___15 = p;
# 921
        p ++;
# 921
        (*tmp___15) = '\0';
# 922
        cur_fwd->forward_port = atoi((char const   *)p);
        }
      }
# 925
      if (cur_fwd->forward_port <= 0) {
        {
# 927
        cur_fwd->forward_port = 8000;
        }
      }
    }
    {
# 932
    cur_fwd->next = config->forward;
# 933
    config->forward = cur_fwd;
    }
# 935
    continue;
    case 3963965521UL: 
    {
# 941
    vec_count = ssplit(arg, (char const   *)" \t", vec,
                       (int )(sizeof(vec) / sizeof(vec[0])), 1, 1);
    }
# 943
    if (vec_count != 3) {
      {
# 945
      log_error(8192,
                "Wrong number of parameters for forward-socks4 directive in configuration file.");
# 947
      string_append(& config->proxy_args,
                    (char const   *)"<br>\nWARNING: Wrong number of parameters for forward-socks4 directive in configuration file.");
      }
# 950
      continue;
    }
    {
# 954
    cur_fwd = (struct forward_spec *)zalloc(sizeof((*cur_fwd)));
    }
# 955
    if ((unsigned int )cur_fwd == (unsigned int )((void *)0)) {
      {
# 957
      log_error(16384, "can\'t allocate memory for configuration");
      }
# 959
      continue;
    }
    {
# 962
    cur_fwd->type = 40;
# 965
    tmp___17 = create_url_spec(cur_fwd->url, (char const   *)vec[0]);
    }
# 965
    if (tmp___17) {
      {
# 967
      log_error(8192,
                "Bad URL specifier for forward-socks4 directive in configuration file.");
# 969
      string_append(& config->proxy_args,
                    (char const   *)"<br>\nWARNING: Bad URL specifier for forward-socks4 directive in configuration file.");
      }
# 972
      continue;
    }
    {
# 976
    p = vec[1];
# 978
    tmp___19 = strcmp((char const   *)p, (char const   *)".");
    }
# 978
    if (tmp___19 != 0) {
      {
# 980
      cur_fwd->gateway_host = strdup((char const   *)p);
# 982
      p = strchr((char const   *)cur_fwd->gateway_host, (int )':');
      }
# 982
      if ((unsigned int )((void *)0) != (unsigned int )p) {
        {
# 984
        tmp___18 = p;
# 984
        p ++;
# 984
        (*tmp___18) = '\0';
# 985
        cur_fwd->gateway_port = atoi((char const   *)p);
        }
      }
# 987
      if (cur_fwd->gateway_port <= 0) {
        {
# 989
        cur_fwd->gateway_port = 1080;
        }
      }
    }
    {
# 994
    p = vec[2];
# 996
    tmp___21 = strcmp((char const   *)p, (char const   *)".");
    }
# 996
    if (tmp___21 != 0) {
      {
# 998
      cur_fwd->forward_host = strdup((char const   *)p);
# 1000
      p = strchr((char const   *)cur_fwd->forward_host, (int )':');
      }
# 1000
      if ((unsigned int )((void *)0) != (unsigned int )p) {
        {
# 1002
        tmp___20 = p;
# 1002
        p ++;
# 1002
        (*tmp___20) = '\0';
# 1003
        cur_fwd->forward_port = atoi((char const   *)p);
        }
      }
# 1006
      if (cur_fwd->forward_port <= 0) {
        {
# 1008
        cur_fwd->forward_port = 8000;
        }
      }
    }
    {
# 1013
    cur_fwd->next = config->forward;
# 1014
    config->forward = cur_fwd;
    }
# 1016
    continue;
    case 2639958518UL: 
    {
# 1022
    vec_count = ssplit(arg, (char const   *)" \t", vec,
                       (int )(sizeof(vec) / sizeof(vec[0])), 1, 1);
    }
# 1024
    if (vec_count != 3) {
      {
# 1026
      log_error(8192,
                "Wrong number of parameters for forward-socks4a directive in configuration file.");
# 1028
      string_append(& config->proxy_args,
                    (char const   *)"<br>\nWARNING: Wrong number of parameters for forward-socks4a directive in configuration file.");
      }
# 1031
      continue;
    }
    {
# 1035
    cur_fwd = (struct forward_spec *)zalloc(sizeof((*cur_fwd)));
    }
# 1036
    if ((unsigned int )cur_fwd == (unsigned int )((void *)0)) {
      {
# 1038
      log_error(16384, "can\'t allocate memory for configuration");
      }
# 1040
      continue;
    }
    {
# 1043
    cur_fwd->type = 41;
# 1046
    tmp___22 = create_url_spec(cur_fwd->url, (char const   *)vec[0]);
    }
# 1046
    if (tmp___22) {
      {
# 1048
      log_error(8192,
                "Bad URL specifier for forward-socks4a directive in configuration file.");
# 1050
      string_append(& config->proxy_args,
                    (char const   *)"<br>\nWARNING: Bad URL specifier for forward-socks4a directive in configuration file.");
      }
# 1053
      continue;
    }
    {
# 1057
    p = vec[1];
# 1059
    cur_fwd->gateway_host = strdup((char const   *)p);
# 1061
    p = strchr((char const   *)cur_fwd->gateway_host, (int )':');
    }
# 1061
    if ((unsigned int )((void *)0) != (unsigned int )p) {
      {
# 1063
      tmp___23 = p;
# 1063
      p ++;
# 1063
      (*tmp___23) = '\0';
# 1064
      cur_fwd->gateway_port = atoi((char const   *)p);
      }
    }
# 1066
    if (cur_fwd->gateway_port <= 0) {
      {
# 1068
      cur_fwd->gateway_port = 1080;
      }
    }
    {
# 1072
    p = vec[2];
# 1074
    tmp___25 = strcmp((char const   *)p, (char const   *)".");
    }
# 1074
    if (tmp___25 != 0) {
      {
# 1076
      cur_fwd->forward_host = strdup((char const   *)p);
# 1078
      p = strchr((char const   *)cur_fwd->forward_host, (int )':');
      }
# 1078
      if ((unsigned int )((void *)0) != (unsigned int )p) {
        {
# 1080
        tmp___24 = p;
# 1080
        p ++;
# 1080
        (*tmp___24) = '\0';
# 1081
        cur_fwd->forward_port = atoi((char const   *)p);
        }
      }
# 1084
      if (cur_fwd->forward_port <= 0) {
        {
# 1086
        cur_fwd->forward_port = 8000;
        }
      }
    }
    {
# 1091
    cur_fwd->next = config->forward;
# 1092
    config->forward = cur_fwd;
    }
# 1094
    continue;
    case 2046641UL: 
    {

    }
# 1102
    if (config->jarfile) {
      {
# 1102
      free((void *)config->jarfile);
# 1102
      config->jarfile = (char const   *)((void *)0);
      }
    }
    {
# 1103
    config->jarfile = (char const   *)make_path(config->logdir,
                                                (char const   *)(arg));
    }
# 1104
    continue;
    case 1255650842UL: 
    {

    }
# 1111
    if (config->haddr) {
      {
# 1111
      free((void *)config->haddr);
# 1111
      config->haddr = (char const   *)((void *)0);
      }
    }
    {
# 1112
    config->haddr = (char const   *)strdup((char const   *)(arg));
    }
# 1113
    continue;
    case 422889UL: 
    {

    }
# 1119
    if (config->logdir) {
      {
# 1119
      free((void *)config->logdir);
# 1119
      config->logdir = (char const   *)((void *)0);
      }
    }
    {
# 1120
    config->logdir = (char const   *)make_path((char const   *)((void *)0),
                                               (char const   *)(arg));
    }
# 1121
    continue;
    case 2114766UL: 
    {

    }
# 1128
    if (config->logfile) {
      {
# 1128
      free((void *)config->logfile);
# 1128
      config->logfile = (char const   *)((void *)0);
      }
    }
# 1129
    if (no_daemon) {
      {
# 1129
      config->logfile = (char const   *)((void *)0);
      }
    } else {
      {
# 1129
      config->logfile = (char const   *)make_path(config->logdir,
                                                  (char const   *)(arg));
      }
    }
# 1130
    continue;
    case 3587953268UL: 
    {
# 1137
    vec_count = ssplit(arg, (char const   *)" \t", vec,
                       (int )(sizeof(vec) / sizeof(vec[0])), 1, 1);
    }
# 1139
    if (vec_count != 1) {
# 1139
      if (vec_count != 2) {
        {
# 1141
        log_error(8192,
                  "Wrong number of parameters for permit-access directive in configuration file.");
# 1143
        string_append(& config->proxy_args,
                      (char const   *)"<br>\nWARNING: Wrong number of parameters for permit-access directive in configuration file.<br><br>\n");
        }
# 1147
        continue;
      }
    }
    {
# 1151
    cur_acl = (struct access_control_list *)zalloc(sizeof((*cur_acl)));
    }
# 1153
    if ((unsigned int )cur_acl == (unsigned int )((void *)0)) {
      {
# 1155
      log_error(16384, "can\'t allocate memory for configuration");
      }
# 1157
      continue;
    }
    {
# 1159
    cur_acl->action = (short )1;
# 1161
    tmp___28 = acl_addr(vec[0], cur_acl->src);
    }
# 1161
    if (tmp___28 < 0) {
      {
# 1163
      log_error(8192,
                "Invalid source IP for permit-access directive in configuration file: \"%s\"",
                vec[0]);
# 1165
      string_append(& config->proxy_args,
                    (char const   *)"<br>\nWARNING: Invalid source IP for permit-access directive in configuration file: \"");
# 1168
      string_append(& config->proxy_args, (char const   *)vec[0]);
# 1170
      string_append(& config->proxy_args, (char const   *)"\"<br><br>\n");
      }
# 1172
      if (cur_acl) {
        {
# 1172
        free((void *)cur_acl);
# 1172
        cur_acl = (struct access_control_list *)((void *)0);
        }
      }
# 1173
      continue;
    }
# 1175
    if (vec_count == 2) {
      {
# 1177
      tmp___29 = acl_addr(vec[1], cur_acl->dst);
      }
# 1177
      if (tmp___29 < 0) {
        {
# 1179
        log_error(8192,
                  "Invalid destination IP for permit-access directive in configuration file: \"%s\"",
                  vec[0]);
# 1182
        string_append(& config->proxy_args,
                      (char const   *)"<br>\nWARNING: Invalid destination IP for permit-access directive in configuration file: \"");
# 1185
        string_append(& config->proxy_args, (char const   *)vec[0]);
# 1187
        string_append(& config->proxy_args, (char const   *)"\"<br><br>\n");
        }
# 1189
        if (cur_acl) {
          {
# 1189
          free((void *)cur_acl);
# 1189
          cur_acl = (struct access_control_list *)((void *)0);
          }
        }
# 1190
        continue;
      }
    }
    {
# 1203
    cur_acl->next = config->acl;
# 1204
    config->acl = cur_acl;
    }
# 1206
    continue;
    case 3903079059UL: 
    {

    }
# 1213
    if (config->proxy_info_url) {
      {
# 1213
      free((void *)config->proxy_info_url);
# 1213
      config->proxy_info_url = (char *)((void *)0);
      }
    }
    {
# 1214
    config->proxy_info_url = strdup((char const   *)(arg));
    }
# 1215
    continue;
    case 4250084780UL: 
    {
# 1221
    config->multi_threaded = 0;
    }
# 1222
    continue;
    case 447966UL: 
    {
# 1229
    global_toggle_state = atoi((char const   *)(arg));
    }
# 1230
    continue;
    case 430331967UL: 
    {
# 1238
    enlist(config->trust_info, (char const   *)(arg));
    }
# 1239
    continue;
    case 56494766UL: 
    {

    }
# 1248
    if (config->trustfile) {
      {
# 1248
      free((void *)config->trustfile);
# 1248
      config->trustfile = (char const   *)((void *)0);
      }
    }
    {
# 1249
    config->trustfile = (char const   *)make_path(config->confdir,
                                                  (char const   *)(arg));
    }
# 1250
    continue;
    case 1416668518UL: 
    {

    }
# 1257
    if (config->usermanual) {
      {
# 1257
      free((void *)config->usermanual);
# 1257
      config->usermanual = (char *)((void *)0);
      }
    }
    {
# 1258
    config->usermanual = strdup((char const   *)(arg));
    }
# 1259
    continue;
    case 2048809870UL: 
    {

    }
    case 1817904738UL: 
    {

    }
    case 3651284693UL: 
    {

    }
    case 2918070425UL: 
    {

    }
    case 2866730124UL: 
    {

    }
    case 2866731014UL: 
    {

    }
    case 4032101240UL: 
    {

    }
    case 2868344173UL: 
    {

    }
    case 2291744899UL: 
    {

    }
    case 215410365UL: 
    {

    }
# 1387
    continue;
    default: 
    {
# 1397
    tmp___30 = hash_string((char const   *)(cmd));
# 1397
    log_error(8192,
              "Ignoring unrecognized directive \'%s\' (%luul) in line %lu in configuration file (%s).",
              buf, tmp___30, linenum, configfile);
# 1399
    string_append(& config->proxy_args,
                  (char const   *)" <b><font color=\"red\">WARNING: unrecognized directive, ignored</font></b>");
    }
# 1401
    continue;
    }
  }
  {

  {
# 96 "spec.work"
  if (configfp->__BLAST_FLAG == 1) {
# 97
    configfp->__BLAST_FLAG = 0;
  } else {
# 98
    __error__();
  }
  {

  }
  }
# 1407 "loadcfg.c"
  fclose(configfp);
  }
# 1409
  if ((unsigned int )((void *)0) == (unsigned int )config->proxy_args) {
    {
# 1411
    log_error(16384,
              "Out of memory loading config - insufficient memory for config->proxy_args");
    }
  }
  {
# 1414
  init_error_log((*(Argv + 0)), config->logfile, config->debug);
  }
# 1416
  if (config->actions_file[0]) {
    {
# 1418
    add_loader(& load_actions_file, config);
    }
  }
# 1421
  if (config->re_filterfile) {
    {
# 1423
    add_loader(& load_re_filterfile, config);
    }
  }
# 1427
  if (config->trustfile) {
    {
# 1429
    add_loader(& load_trustfile, config);
    }
  }
# 1434
  if ((unsigned int )((void *)0) != (unsigned int )config->jarfile) {
    {
# 1436
    config->jar = fopen((char const   */* __restrict  */)config->jarfile,
                        (char const   */* __restrict  */)((char const   *)"a"));
    {
# 17 "spec.work"
      (config->jar)->__BLAST_FLAG = 1;
    {

    }
    }

    }
# 1436 "loadcfg.c"
    if ((unsigned int )((void *)0) == (unsigned int )config->jar) {
      {
# 1438
      log_error(16384, "can\'t open jarfile \'%s\': %E", config->jarfile);
      }
    }
    {
# 1441
    setbuf((FILE */* __restrict  */)config->jar,
           (char */* __restrict  */)((char *)((void *)0)));
    }
  }
# 1445
  if ((unsigned int )((void *)0) == (unsigned int )config->haddr) {
    {
# 1447
    config->haddr = (char const   *)strdup((char const   *)"127.0.0.1");
    }
  }
# 1450
  if ((unsigned int )((void *)0) != (unsigned int )config->haddr) {
    {
# 1452
    p = strchr(config->haddr, (int )':');
    }
# 1452
    if ((unsigned int )((void *)0) != (unsigned int )p) {
      {
# 1454
      tmp___32 = p;
# 1454
      p ++;
# 1454
      (*tmp___32) = '\0';
      }
# 1455
      if ((*p)) {
        {
# 1457
        config->hport = atoi((char const   *)p);
        }
      }
    }
# 1461
    if (config->hport <= 0) {
      {
# 1463
      p --;
# 1463
      (*p) = ':';
# 1464
      log_error(16384, "invalid bind port spec %s", config->haddr);
      }
    }
# 1467
    if ((int const   )(*(config->haddr)) == 0) {
      {
# 1469
      config->haddr = (char const   *)((void *)0);
      }
    }
  }
  {
# 1478
  fake_csp = (struct client_state *)zalloc(sizeof((*fake_csp)));
# 1479
  fake_csp->config = config;
# 1481
  tmp___34 = run_loader(fake_csp);
  }
# 1481
  if (tmp___34) {
# 1483
    if (fake_csp) {
      {
# 1483
      free((void *)fake_csp);
# 1483
      fake_csp = (struct client_state *)((void *)0);
      }
    }
    {
# 1484
    log_error(16384, "A loader failed while loading config file. Exiting.");
    }
  }
# 1487
  if (fake_csp) {
    {
# 1487
    free((void *)fake_csp);
# 1487
    fake_csp = (struct client_state *)((void *)0);
    }
  }
  {
# 1505
  config->need_bind = 1;
  }
# 1507
  if (current_configfile) {
    {
# 1509
    oldcfg = (struct configuration_spec *)current_configfile->f;
# 1517
    config->need_bind = 0;
    }
# 1518
    if (config->hport != oldcfg->hport) {
      {
# 1520
      config->need_bind = 1;
      }
    } else {
# 1522
      if ((unsigned int )config->haddr == (unsigned int )((void *)0)) {
# 1524
        if ((unsigned int )oldcfg->haddr != (unsigned int )((void *)0)) {
          {
# 1526
          config->need_bind = 1;
          }
        }
      } else {
# 1529
        if ((unsigned int )oldcfg->haddr == (unsigned int )((void *)0)) {
          {
# 1531
          config->need_bind = 1;
          }
        } else {
          {
# 1533
          tmp___35 = strcmp(config->haddr, oldcfg->haddr);
          }
# 1533
          if (0 != tmp___35) {
            {
# 1535
            config->need_bind = 1;
            }
          }
        }
      }
    }
    {
# 1538
    current_configfile->unloader = & unload_configfile;
    }
  }
  {
# 1541
  fs->next = files[0].next;
# 1542
  files[0].next = fs;
# 1544
  current_configfile = fs;
  }
# 1546
  return (config);
}
}
# 1568
static void savearg(char *command , char *argument ,
                    struct configuration_spec *config ) 
{ char *buf ;
  char *s ;
  char *tmp ;
  int tmp___0 ;

  {
# 1573
  if (! command) {
    {
# 1573
    __assert_fail((char const   *)"command", (char const   *)"loadcfg.c", 1573U,
                  (char const   *)"savearg");
    }
  }
# 1574
  if (! (*command)) {
    {
# 1574
    __assert_fail((char const   *)"*command", (char const   *)"loadcfg.c",
                  1574U, (char const   *)"savearg");
    }
  }
# 1575
  if (! argument) {
    {
# 1575
    __assert_fail((char const   *)"argument", (char const   *)"loadcfg.c",
                  1575U, (char const   *)"savearg");
    }
  }
  {
# 1581
  buf = strdup((char const   *)"\n<br><a href=\"");
# 1582
  string_append(& buf, (char const   *)config->usermanual);
# 1583
  string_append(& buf, (char const   *)"config.html#");
# 1584
  tmp = string_toupper((char const   *)command);
# 1584
  string_join(& buf, tmp);
# 1585
  string_append(& buf, (char const   *)"\">");
# 1586
  string_append(& buf, (char const   *)command);
# 1587
  string_append(& buf, (char const   *)"</a> ");
  }
# 1589
  if ((unsigned int )((void *)0) == (unsigned int )buf) {
# 1591
    if (config->proxy_args) {
      {
# 1591
      free((void *)config->proxy_args);
# 1591
      config->proxy_args = (char *)((void *)0);
      }
    }
# 1592
    return;
  }
# 1595
  if ((unsigned int )((void *)0) != (unsigned int )argument) {
# 1595
    if (0 != (int )(*argument)) {
      {
# 1597
      s = html_encode((char const   *)argument);
      }
# 1598
      if ((unsigned int )((void *)0) == (unsigned int )s) {
# 1600
        if (buf) {
          {
# 1600
          free((void *)buf);
# 1600
          buf = (char *)((void *)0);
          }
        }
# 1601
        if (config->proxy_args) {
          {
# 1601
          free((void *)config->proxy_args);
# 1601
          config->proxy_args = (char *)((void *)0);
          }
        }
# 1602
        return;
      }
      {
# 1605
      tmp___0 = strncmpic((char const   *)argument, (char const   *)"http://",
                          7U);
      }
# 1605
      if (tmp___0 == 0) {
        {
# 1607
        string_append(& buf, (char const   *)"<a href=\"");
# 1608
        string_append(& buf, (char const   *)s);
# 1609
        string_append(& buf, (char const   *)"\">");
# 1610
        string_join(& buf, s);
# 1611
        string_append(& buf, (char const   *)"</a>");
        }
      } else {
        {
# 1615
        string_join(& buf, s);
        }
      }
    }
  }
  {
# 1619
  string_join(& config->proxy_args, buf);
  }
# 1620
  return;
}
}
# 1 "loaders.c"
__asm__("booo - error in global loaders_rcs (loaders.c:1)");
# 321
char const   loaders_h_rcs[52]   = 
# 321
  {'$', 'I', 'd', ':', ' ', 'l', 'o', 'a', 'd', 'e', 'r', 's', '.', 'h', ',',
   'v', ' ', '1', '.', '1', '9', ' ', '2', '0', '0', '2', '/', '0', '3', '/',
   '2', '6', ' ', '2', '2', ':', '2', '9', ':', '5', '5', ' ', 's', 'w', 'a',
   ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 329
static struct file_list *current_trustfile   = (struct file_list *)((void *)0);
# 332
static struct file_list *current_re_filterfile   = (struct file_list *)((void *)0);
# 360
void sweep(void) 
{ struct file_list *fl ;
  struct file_list *nfl ;
  struct client_state *csp ;
  struct client_state *last_active ;
  int i ;

  {
  {
# 367
  fl = files[0].next;
  }
# 367
  while ((unsigned int )((void *)0) != (unsigned int )fl) {
    {
# 369
    fl->active = 0;
# 367
    fl = fl->next;
    }
  }
  {
# 372
  last_active = clients;
# 373
  csp = clients[0].next;
  }
# 375
  while ((unsigned int )((void *)0) != (unsigned int )csp) {
# 377
    if ((int )csp->flags & 1) {
      {
# 386
      ((csp->config)->config_file_list)->active = 1;
# 391
      i = 0;
      }
# 391
      while (i < 10) {
# 393
        if (csp->actions_list[i]) {
          {
# 395
          (csp->actions_list[i])->active = 1;
          }
        }
        {
# 391
        i ++;
        }
      }
# 402
      if (csp->rlist) {
        {
# 404
        (csp->rlist)->active = 1;
        }
      }
# 411
      if (csp->tlist) {
        {
# 413
        (csp->tlist)->active = 1;
        }
      }
      {
# 417
      last_active = csp;
# 418
      csp = csp->next;
      }
    } else {
      {
# 426
      last_active->next = csp->next;
      }
# 428
      if (csp->ip_addr_str) {
        {
# 428
        free((void *)csp->ip_addr_str);
# 428
        csp->ip_addr_str = (char *)((void *)0);
        }
      }
# 429
      if (csp->my_ip_addr_str) {
        {
# 429
        free((void *)csp->my_ip_addr_str);
# 429
        csp->my_ip_addr_str = (char *)((void *)0);
        }
      }
# 430
      if (csp->my_hostname) {
        {
# 430
        free((void *)csp->my_hostname);
# 430
        csp->my_hostname = (char *)((void *)0);
        }
      }
# 431
      if (csp->x_forwarded) {
        {
# 431
        free((void *)csp->x_forwarded);
# 431
        csp->x_forwarded = (char *)((void *)0);
        }
      }
# 432
      if (csp->iob[0].buf) {
        {
# 432
        free((void *)csp->iob[0].buf);
# 432
        csp->iob[0].buf = (char *)((void *)0);
        }
      }
      {
# 434
      free_http_request(csp->http);
# 436
      destroy_list(csp->headers);
# 437
      destroy_list(csp->cookie_list);
# 439
      free_current_action(csp->action);
# 442
      urls_read = urls_read + 1;
      }
# 443
      if ((int )csp->flags & 16) {
        {
# 445
        urls_rejected = urls_rejected + 1;
        }
      }
# 449
      if (csp) {
        {
# 449
        free((void *)csp);
# 449
        csp = (struct client_state *)((void *)0);
        }
      }
      {
# 451
      csp = last_active->next;
      }
    }
  }
  {
# 455
  nfl = files;
# 456
  fl = files[0].next;
  }
# 458
  while ((unsigned int )fl != (unsigned int )((void *)0)) {
# 460
    if (0 == fl->active) {
# 460
      if ((unsigned int )((void *)0) != (unsigned int )fl->unloader) {
        {
# 462
        nfl->next = fl->next;
# 464
        ((*(fl->unloader)))(fl->f);
        }
# 466
        if (fl->filename) {
          {
# 466
          free((void *)fl->filename);
# 466
          fl->filename = (char *)((void *)0);
          }
        }
# 467
        if (fl) {
          {
# 467
          free((void *)fl);
# 467
          fl = (struct file_list *)((void *)0);
          }
        }
        {
# 469
        fl = nfl->next;
        }
      } else {
        {
# 473
        nfl = fl;
# 474
        fl = fl->next;
        }
      }
    } else {
      {
# 473
      nfl = fl;
# 474
      fl = fl->next;
      }
    }
  }
# 478
  return;
}
}
# 507
int check_file_changed(struct file_list  const  *current ,
                       char const   *filename , struct file_list **newfl ) 
{ struct file_list *fs ;
  struct stat statbuf[1] ;
  int tmp ;
  int tmp___0 ;

  {
  {
# 514
  (*newfl) = (struct file_list *)((void *)0);
# 516
  tmp = stat__extinline(filename, statbuf);
  }
# 516
  if (tmp < 0) {
# 519
    return (1);
  }
# 522
  if (current) {
# 522
    if (current->lastmodified == statbuf[0].st_mtim.tv_sec) {
      {
# 522
      tmp___0 = strcmp((char const   *)current->filename, filename);
      }
# 522
      if (0 == tmp___0) {
# 526
        return (0);
      }
    }
  }
  {
# 529
  fs = (struct file_list *)zalloc(sizeof(struct file_list ));
  }
# 530
  if ((unsigned int )fs == (unsigned int )((void *)0)) {
# 533
    return (1);
  }
  {
# 537
  fs->filename = strdup(filename);
# 538
  fs->lastmodified = statbuf[0].st_mtim.tv_sec;
  }
# 540
  if ((unsigned int )fs->filename == (unsigned int )((void *)0)) {
# 543
    if (fs) {
      {
# 543
      free((void *)fs);
# 543
      fs = (struct file_list *)((void *)0);
      }
    }
# 544
    return (1);
  }
  {
# 546
  (*newfl) = fs;
  }
# 547
  return (1);
}
}
# 579
jb_err simple_read_line(FILE *fp , char **dest , int *newline ) 
{ size_t len ;
  size_t buflen ;
  char *buf ;
  char *p ;
  int ch ;
  int realnewline ;
  char *tmp ;

  {
  {
# 581
  len = (unsigned int )0;
# 582
  buflen = (unsigned int )5000;
# 586
  realnewline = 0;
# 588
  buf = (char *)malloc(buflen);
  }
# 588
  if ((unsigned int )((void *)0) == (unsigned int )buf) {
# 590
    return (1);
  }
  {
# 593
  p = buf;
  }
# 602
  while (1) {
    {
# 604
    ch = _IO_getc(fp);
    }
# 605
    if (ch == -1) {
# 607
      if (len > 0U) {
        {
# 609
        (*p) = '\0';
# 610
        (*dest) = buf;
        }
# 611
        return (0);
      } else {
        {
# 615
        free((void *)buf);
# 616
        (*dest) = (char *)((void *)0);
        }
# 617
        return (3);
      }
    } else {
# 620
      if (ch == 13) {
        {
# 622
        ch = _IO_getc(fp);
        }
# 623
        if (ch == 10) {
# 625
          if ((*newline) == 0) {
            {
# 627
            (*newline) = 2;
            }
          }
        } else {
# 632
          if (ch != -1) {
            {
# 634
            ungetc(ch, fp);
            }
          }
# 636
          if ((*newline) == 0) {
            {
# 638
            (*newline) = 3;
            }
          }
        }
        {
# 641
        (*p) = '\0';
# 642
        (*dest) = buf;
        }
# 643
        if ((*newline) == 0) {
          {
# 645
          (*newline) = realnewline;
          }
        }
# 647
        return (0);
      } else {
# 649
        if (ch == 10) {
          {
# 651
          (*p) = '\0';
# 652
          (*dest) = buf;
          }
# 653
          if ((*newline) == 0) {
            {
# 655
            (*newline) = 1;
            }
          }
# 657
          return (0);
        } else {
# 659
          if (ch == 0) {
            {
# 661
            (*p) = '\0';
# 662
            (*dest) = buf;
            }
# 663
            return (0);
          }
        }
      }
    }
    {
# 666
    tmp = p;
# 666
    p ++;
# 666
    (*tmp) = (char )ch;
# 668
    len ++;
    }
# 668
    if (len >= buflen) {
      {
# 670
      buflen += 5000U;
# 671
      p = (char *)realloc((void *)buf, buflen);
      }
# 671
      if ((unsigned int )((void *)0) == (unsigned int )p) {
        {
# 673
        free((void *)buf);
        }
# 674
        return (1);
      }
      {
# 676
      buf = p;
# 677
      p = buf + len;
      }
    }
  }
# 680
  return (0);
}
}
# 728
jb_err edit_read_line(FILE *fp , char **raw_out , char **prefix_out ,
                      char **data_out , int *newline ,
                      unsigned long *line_number ) 
{ char *p ;
  char *linebuf ;
  char *linestart ;
  int contflag ;
  int is_empty ;
  char *raw ;
  char *prefix ;
  char *data ;
  int scrapnewline ;
  jb_err rval ;
  char const   *tmp___0 ;
  jb_err tmp___1 ;
  size_t tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  char *q ;
  char const   *tmp___6 ;
  jb_err tmp___7 ;
  jb_err tmp___8 ;
  int tmp___9 ;

  {
  {
# 738
  contflag = 0;
# 739
  is_empty = 1;
# 740
  raw = (char *)((void *)0);
# 741
  prefix = (char *)((void *)0);
# 742
  data = (char *)((void *)0);
# 744
  rval = 0;
  }
# 746
  if (! fp) {
    {
# 746
    __assert_fail((char const   *)"fp", (char const   *)"loaders.c", 746U,
                  (char const   *)"edit_read_line");
    }
  }
# 747
  if (! raw_out) {
# 747
    if (! data_out) {
      {
# 747
      __assert_fail((char const   *)"raw_out || data_out",
                    (char const   *)"loaders.c", 747U,
                    (char const   *)"edit_read_line");
      }
    }
  }
# 748
  if (! ((unsigned int )newline == (unsigned int )((void *)0))) {
# 748
    if (! ((*newline) == 0)) {
# 748
      if (! ((*newline) == 1)) {
# 748
        if (! ((*newline) == 2)) {
# 748
          if (! ((*newline) == 3)) {
            {
# 748
            __assert_fail((char const   *)"newline == ((void *)0) || *newline == 0 || *newline == 1 || *newline == 2 || *newline == 3",
                          (char const   *)"loaders.c", 752U,
                          (char const   *)"edit_read_line");
            }
          }
        }
      }
    }
  }
# 754
  if ((unsigned int )newline == (unsigned int )((void *)0)) {
    {
# 756
    scrapnewline = 0;
# 757
    newline = & scrapnewline;
    }
  }
# 761
  if (raw_out) {
    {
# 763
    (*raw_out) = (char *)((void *)0);
    }
  }
# 765
  if (prefix_out) {
    {
# 767
    (*prefix_out) = (char *)((void *)0);
    }
  }
# 769
  if (data_out) {
    {
# 771
    (*data_out) = (char *)((void *)0);
    }
  }
# 776
  if (raw_out) {
    {
# 778
    raw = (char *)malloc(1U);
    }
# 778
    if ((unsigned int )raw == (unsigned int )((void *)0)) {
# 780
      return (1);
    }
    {
# 782
    (*raw) = '\0';
    }
  }
# 784
  if (prefix_out) {
    {
# 786
    prefix = (char *)malloc(1U);
    }
# 786
    if ((unsigned int )prefix == (unsigned int )((void *)0)) {
# 788
      if (raw) {
        {
# 788
        free((void *)raw);
# 788
        raw = (char *)((void *)0);
        }
      }
# 789
      return (1);
    }
    {
# 791
    (*prefix) = '\0';
    }
  }
# 793
  if (data_out) {
    {
# 795
    data = (char *)malloc(1U);
    }
# 795
    if ((unsigned int )data == (unsigned int )((void *)0)) {
# 797
      if (raw) {
        {
# 797
        free((void *)raw);
# 797
        raw = (char *)((void *)0);
        }
      }
# 798
      if (prefix) {
        {
# 798
        free((void *)prefix);
# 798
        prefix = (char *)((void *)0);
        }
      }
# 799
      return (1);
    }
    {
# 801
    (*data) = '\0';
    }
  }
# 806
  while (1) {
# 806
    if (contflag) {
      goto _L___0;
    } else {
# 806
      if (is_empty) {
        _L___0: 
        {
# 806
        rval = simple_read_line(fp, & linebuf, newline);
        }
# 806
        if (! (0 == rval)) {
# 806
          break;
        }
      } else {
# 806
        break;
      }
    }
# 809
    if (line_number) {
      {
# 811
      (*line_number) ++;
      }
    }
# 813
    if (raw) {
      {
# 815
      string_append(& raw, (char const   *)linebuf);
      }
# 816
      if ((*newline) == 2) {
        {
# 816
        tmp___0 = (char const   *)"\r\n";
        }
      } else {
# 816
        if ((*newline) == 3) {
          {
# 816
          tmp___0 = (char const   *)"\r";
          }
        } else {
          {
# 816
          tmp___0 = (char const   *)"\n";
          }
        }
      }
      {
# 816
      tmp___1 = string_append(& raw, tmp___0);
      }
# 816
      if (tmp___1) {
# 818
        if (prefix) {
          {
# 818
          free((void *)prefix);
# 818
          prefix = (char *)((void *)0);
          }
        }
# 819
        if (data) {
          {
# 819
          free((void *)data);
# 819
          data = (char *)((void *)0);
          }
        }
        {
# 820
        free((void *)linebuf);
        }
# 821
        return (1);
      }
    }
    {
# 826
    tmp___2 = strlen((char const   *)linebuf);
# 826
    p = (linebuf + tmp___2) - 1;
    }
# 827
    if ((int )(*linebuf) != 0) {
# 827
      if ((int )(*p) == 92) {
        {
# 827
        tmp___3 = 1;
        }
      } else {
        {
# 827
        tmp___3 = 0;
        }
      }
    } else {
      {
# 827
      tmp___3 = 0;
      }
    }
    {
# 827
    contflag = tmp___3;
    }
# 828
    if (contflag) {
      {
# 830
      (*p) = '\0';
      }
    }
    {
# 834
    linestart = linebuf;
    }
# 835
    if ((int )(*data) == 0) {
# 838
      while (1) {
# 838
        if ((*linestart)) {
          {
# 838
          tmp___4 = _get__ctype_b((int )((unsigned char )(*linestart)));
          }
# 838
          if (! (tmp___4 & 8192)) {
# 838
            break;
          }
        } else {
# 838
          break;
        }
        {
# 840
        linestart ++;
        }
      }
    }
    {
# 845
    p = linestart;
    }
# 846
    while (1) {
      {
# 846
      p = strchr((char const   *)p, (int )'#');
      }
# 846
      if (! ((unsigned int )p != (unsigned int )((void *)0))) {
# 846
        break;
      }
# 849
      if ((unsigned int )p != (unsigned int )linebuf) {
# 849
        if ((int )(*(p - 1)) == 92) {
          {
# 852
          q = p - 1;
          }
# 853
          while (1) {
            {
# 853
            (*q) = (*(q + 1));
            }
# 853
            if (! ((int )(*q) != 0)) {
# 853
              break;
            }
            {
# 855
            q ++;
            }
          }
        } else {
          goto _L;
        }
      } else {
        _L: 
# 862
        if ((unsigned int )p == (unsigned int )linestart) {
          {
# 868
          linestart = linebuf;
# 869
          p = linestart;
          }
        }
# 871
        if (prefix) {
          {
# 873
          string_append(& prefix, (char const   *)p);
          }
# 874
          if ((*newline) == 2) {
            {
# 874
            tmp___6 = (char const   *)"\r\n";
            }
          } else {
# 874
            if ((*newline) == 3) {
              {
# 874
              tmp___6 = (char const   *)"\r";
              }
            } else {
              {
# 874
              tmp___6 = (char const   *)"\n";
              }
            }
          }
          {
# 874
          tmp___7 = string_append(& prefix, tmp___6);
          }
# 874
          if (tmp___7) {
# 876
            if (raw) {
              {
# 876
              free((void *)raw);
# 876
              raw = (char *)((void *)0);
              }
            }
# 877
            if (data) {
              {
# 877
              free((void *)data);
# 877
              data = (char *)((void *)0);
              }
            }
            {
# 878
            free((void *)linebuf);
            }
# 879
            return (1);
          }
        }
        {
# 884
        (*p) = '\0';
        }
      }
    }
# 889
    if ((*linestart)) {
      {
# 891
      is_empty = 0;
      }
# 892
      if (data) {
        {
# 894
        tmp___8 = string_append(& data, (char const   *)linestart);
        }
# 894
        if (tmp___8) {
# 896
          if (raw) {
            {
# 896
            free((void *)raw);
# 896
            raw = (char *)((void *)0);
            }
          }
# 897
          if (prefix) {
            {
# 897
            free((void *)prefix);
# 897
            prefix = (char *)((void *)0);
            }
          }
          {
# 898
          free((void *)linebuf);
          }
# 899
          return (1);
        }
      }
    }
    {
# 904
    free((void *)linebuf);
    }
  }
# 908
  if (rval != 0) {
# 908
    if (rval != 3) {
# 910
      if (raw) {
        {
# 910
        free((void *)raw);
# 910
        raw = (char *)((void *)0);
        }
      }
# 911
      if (prefix) {
        {
# 911
        free((void *)prefix);
# 911
        prefix = (char *)((void *)0);
        }
      }
# 912
      if (data) {
        {
# 912
        free((void *)data);
# 912
        data = (char *)((void *)0);
        }
      }
# 913
      return (rval);
    }
  }
# 916
  if (raw) {
    {
# 916
    tmp___9 = (int )(*raw) == 0;
    }
  } else {
    {
# 916
    tmp___9 = is_empty;
    }
  }
# 916
  if (tmp___9) {
# 922
    if (raw) {
      {
# 922
      free((void *)raw);
# 922
      raw = (char *)((void *)0);
      }
    }
# 923
    if (prefix) {
      {
# 923
      free((void *)prefix);
# 923
      prefix = (char *)((void *)0);
      }
    }
# 924
    if (data) {
      {
# 924
      free((void *)data);
# 924
      data = (char *)((void *)0);
      }
    }
# 926
    return (3);
  } else {
    {
# 933
    chomp(data);
    }
# 935
    if (raw_out) {
      {
# 937
      (*raw_out) = raw;
      }
    } else {
# 941
      if (raw) {
        {
# 941
        free((void *)raw);
# 941
        raw = (char *)((void *)0);
        }
      }
    }
# 943
    if (prefix_out) {
      {
# 945
      (*prefix_out) = prefix;
      }
    } else {
# 949
      if (prefix) {
        {
# 949
        free((void *)prefix);
# 949
        prefix = (char *)((void *)0);
        }
      }
    }
# 951
    if (data_out) {
      {
# 953
      (*data_out) = data;
      }
    } else {
# 957
      if (data) {
        {
# 957
        free((void *)data);
# 957
        data = (char *)((void *)0);
        }
      }
    }
# 959
    return (0);
  }
}
}
# 982
char *read_config_line(char *buf , size_t buflen , FILE *fp ,
                       unsigned long *linenum ) 
{ jb_err err ;
  char *buf2 ;
  size_t tmp ;

  {
  {
# 985
  buf2 = (char *)((void *)0);
# 986
  err = edit_read_line(fp, (char **)((void *)0), (char **)((void *)0), & buf2,
                       (int *)((void *)0), linenum);
  }
# 987
  if (err) {
# 989
    if (err == 1) {
      {
# 991
      log_error(16384, "Out of memory loading a config file");
      }
    }
# 993
    return ((char *)((void *)0));
  } else {
# 997
    if (! buf2) {
      {
# 997
      __assert_fail((char const   *)"buf2", (char const   *)"loaders.c", 997U,
                    (char const   *)"read_config_line");
      }
    }
    {
# 998
    tmp = strlen((char const   *)buf2);
    }
# 998
    if (! (tmp + 1U < buflen)) {
      {
# 998
      __assert_fail((char const   *)"strlen(buf2) + 1U < buflen",
                    (char const   *)"loaders.c", 998U,
                    (char const   *)"read_config_line");
      }
    }
    {
# 999
    strncpy((char */* __restrict  */)buf,
            (char const   */* __restrict  */)((char const   *)buf2), buflen - 1U);
# 1000
    free((void *)buf2);
# 1001
    (*(buf + (buflen - 1U))) = '\0';
    }
# 1002
    return (buf);
  }
}
}
# 1020
static void unload_trustfile(void *f ) 
{ struct block_spec *cur ;
  struct block_spec *next ;

  {
  {
# 1022
  cur = (struct block_spec *)f;
  }
# 1025
  while ((unsigned int )cur != (unsigned int )((void *)0)) {
    {
# 1027
    next = cur->next;
# 1029
    free_url_spec(cur->url);
# 1030
    free((void *)cur);
# 1032
    cur = next;
    }
  }
# 1035
  return;
}
}
# 1074
int load_trustfile(struct client_state *csp ) 
{ FILE *fp ;
  struct block_spec *b ;
  struct block_spec *bl ;
  struct url_spec **tl ;
  char buf[5000] ;
  char *p ;
  char *q ;
  int reject ;
  int trusted ;
  struct file_list *fs ;
  unsigned long linenum ;
  int tmp ;
  char *tmp___1 ;
  char *tmp___2 ;
  jb_err tmp___3 ;
  struct url_spec **tmp___4 ;
  char *tmp___5 ;

  {
  {
# 1084
  linenum = 0UL;
# 1086
  tmp = check_file_changed((struct file_list  const  *)current_trustfile,
                           (csp->config)->trustfile, & fs);
  }
# 1086
  if (! tmp) {
# 1089
    if (csp) {
      {
# 1091
      csp->tlist = current_trustfile;
      }
    }
# 1093
    return (0);
  }
# 1095
  if (! fs) {
    goto load_trustfile_error;
  }
  {
# 1100
  bl = (struct block_spec *)zalloc(sizeof((*bl)));
# 1100
  fs->f = (void *)bl;
  }
# 1101
  if ((unsigned int )bl == (unsigned int )((void *)0)) {
    goto load_trustfile_error;
  }
  {
# 1106
  fp = fopen((char const   */* __restrict  */)(csp->config)->trustfile,
             (char const   */* __restrict  */)((char const   *)"r"));
  {
# 17 "spec.work"
    fp->__BLAST_FLAG = 1;
  {

  }
  }

  }
# 1106 "loaders.c"
  if ((unsigned int )fp == (unsigned int )((void *)0)) {
    goto load_trustfile_error;
  }
  {
# 1111
  tl = (csp->config)->trust_list;
  }
# 1113
  while (1) {
    {
# 1113
    tmp___5 = read_config_line(buf, sizeof(buf), fp, & linenum);
    }
# 1113
    if (! ((unsigned int )tmp___5 != (unsigned int )((void *)0))) {
# 1113
      break;
    }
    {
# 1115
    trusted = 0;
# 1116
    reject = 1;
    }
# 1118
    if ((int )buf[0] == 43) {
      {
# 1120
      trusted = 1;
# 1121
      buf[0] = '~';
      }
    }
# 1124
    if ((int )buf[0] == 126) {
      {
# 1126
      reject = 0;
# 1127
      p = buf;
# 1128
      q = p + 1;
      }
# 1129
      while (1) {
        {
# 1129
        tmp___1 = p;
# 1129
        p ++;
# 1129
        tmp___2 = q;
# 1129
        q ++;
# 1129
        (*tmp___1) = (*tmp___2);
        }
# 1129
        if (! ((int )(*tmp___1) != 0)) {
# 1129
          break;
        }
      }
    }
# 1136
    if ((int )buf[0] == 0) {
# 1138
      continue;
    }
    {
# 1142
    b = (struct block_spec *)zalloc(sizeof((*b)));
    }
# 1142
    if ((unsigned int )b == (unsigned int )((void *)0)) {
      {

      {
# 96 "spec.work"
      if (fp->__BLAST_FLAG == 1) {
# 97
        fp->__BLAST_FLAG = 0;
      } else {
# 98
        __error__();
      }
      {

      }
      }
# 1144 "loaders.c"
      fclose(fp);
      }
      goto load_trustfile_error;
    }
    {
# 1149
    b->next = bl->next;
# 1150
    bl->next = b;
# 1152
    b->reject = reject;
# 1155
    tmp___3 = create_url_spec(b->url, (char const   *)(buf));
    }
# 1155
    if (tmp___3) {
      {

      {
# 96 "spec.work"
      if (fp->__BLAST_FLAG == 1) {
# 97
        fp->__BLAST_FLAG = 0;
      } else {
# 98
        __error__();
      }
      {

      }
      }
# 1157 "loaders.c"
      fclose(fp);
      }
      goto load_trustfile_error;
    }
# 1164
    if (trusted) {
      {
# 1166
      tmp___4 = tl;
# 1166
      tl ++;
# 1166
      (*tmp___4) = b->url;
      }
    }
  }
  {
# 1171
  (*tl) = (struct url_spec *)((void *)0);
  {
# 96 "spec.work"
  if (fp->__BLAST_FLAG == 1) {
# 97
    fp->__BLAST_FLAG = 0;
  } else {
# 98
    __error__();
  }
  {

  }
  }
# 1173 "loaders.c"
  fclose(fp);
  }
# 1176
  if (current_trustfile) {
    {
# 1178
    current_trustfile->unloader = & unload_trustfile;
    }
  }
  {
# 1181
  fs->next = files[0].next;
# 1182
  files[0].next = fs;
# 1183
  current_trustfile = fs;
  }
# 1185
  if (csp) {
    {
# 1187
    csp->tlist = fs;
    }
  }
# 1190
  return (0);
  load_trustfile_error: 
  {
# 1193
  log_error(16384, "can\'t load trustfile \'%s\': %E", (csp->config)->trustfile);
  }
# 1195
  return (-1);
}
}
# 1214
static void unload_re_filterfile(void *f ) 
{ struct re_filterfile_spec *a ;
  struct re_filterfile_spec *b ;

  {
  {
# 1216
  b = (struct re_filterfile_spec *)f;
  }
# 1218
  while ((unsigned int )b != (unsigned int )((void *)0)) {
    {
# 1220
    a = b->next;
# 1222
    destroy_list(b->patterns);
# 1223
    pcrs_free_joblist(b->joblist);
    }
# 1224
    if (b->name) {
      {
# 1224
      free((void *)b->name);
# 1224
      b->name = (char *)((void *)0);
      }
    }
# 1225
    if (b->description) {
      {
# 1225
      free((void *)b->description);
# 1225
      b->description = (char *)((void *)0);
      }
    }
# 1226
    if (b) {
      {
# 1226
      free((void *)b);
# 1226
      b = (struct re_filterfile_spec *)((void *)0);
      }
    }
    {
# 1228
    b = a;
    }
  }
# 1231
  return;
}
}
# 1274
int load_re_filterfile(struct client_state *csp ) 
{ FILE *fp ;
  struct re_filterfile_spec *new_bl ;
  struct re_filterfile_spec *bl ;
  struct file_list *fs ;
  char buf[5000] ;
  int error ;
  unsigned long linenum ;
  pcrs_job *dummy ;
  pcrs_job *lastjob ;
  int tmp ;
  char *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  int tmp___4 ;
  char *tmp___5 ;

  {
  {
# 1278
  bl = (struct re_filterfile_spec *)((void *)0);
# 1283
  linenum = 0UL;
# 1284
  lastjob = (pcrs_job *)((void *)0);
# 1289
  tmp = check_file_changed((struct file_list  const  *)current_re_filterfile,
                           (csp->config)->re_filterfile, & fs);
  }
# 1289
  if (! tmp) {
# 1291
    if (csp) {
      {
# 1293
      csp->rlist = current_re_filterfile;
      }
    }
# 1295
    return (0);
  }
# 1297
  if (! fs) {
    goto load_re_filterfile_error;
  }
  {
# 1305
  fp = fopen((char const   */* __restrict  */)(csp->config)->re_filterfile,
             (char const   */* __restrict  */)((char const   *)"r"));
  {
# 17 "spec.work"
    fp->__BLAST_FLAG = 1;
  {

  }
  }

  }
# 1305 "loaders.c"
  if ((unsigned int )fp == (unsigned int )((void *)0)) {
    goto load_re_filterfile_error;
  }
# 1313
  while (1) {
    {
# 1313
    tmp___5 = read_config_line(buf, sizeof(buf), fp, & linenum);
    }
# 1313
    if (! ((unsigned int )tmp___5 != (unsigned int )((void *)0))) {
# 1313
      break;
    }
    {
# 1319
    tmp___4 = strncmp((char const   *)(buf), (char const   *)"FILTER:", 7U);
    }
# 1319
    if (tmp___4 == 0) {
      {
# 1321
      new_bl = (struct re_filterfile_spec *)zalloc(sizeof((*bl)));
      }
# 1322
      if ((unsigned int )new_bl == (unsigned int )((void *)0)) {
        goto load_re_filterfile_error;
      }
      {
# 1327
      new_bl->name = chomp(buf + 7);
# 1329
      new_bl->description = strpbrk((char const   *)new_bl->name,
                                    (char const   *)" \t");
      }
# 1329
      if ((unsigned int )((void *)0) != (unsigned int )new_bl->description) {
        {
# 1331
        tmp___1 = new_bl->description;
# 1331
        new_bl->description = new_bl->description + 1;
# 1331
        (*tmp___1) = '\0';
# 1332
        tmp___2 = (char const   *)chomp(new_bl->description);
# 1332
        new_bl->description = strdup(tmp___2);
        }
      } else {
        {
# 1336
        new_bl->description = strdup((char const   *)"No description available for this filter");
        }
      }
      {
# 1339
      tmp___3 = (char const   *)chomp(new_bl->name);
# 1339
      new_bl->name = strdup(tmp___3);
      }
# 1346
      if ((unsigned int )fs->f == (unsigned int )((void *)0)) {
        {
# 1348
        fs->f = (void *)new_bl;
        }
      } else {
        {
# 1352
        bl->next = new_bl;
        }
      }
      {
# 1354
      bl = new_bl;
# 1356
      log_error(64, "Reading in filter \"%s\" (\"%s\")", bl->name,
                bl->description);
      }
# 1358
      continue;
    }
# 1365
    if ((unsigned int )bl != (unsigned int )((void *)0)) {
      {
# 1367
      enlist(bl->patterns, (char const   *)(buf));
# 1369
      dummy = pcrs_compile_command((char const   *)(buf), & error);
      }
# 1369
      if ((unsigned int )dummy == (unsigned int )((void *)0)) {
        {
# 1371
        log_error(8192,
                  "Adding re_filter job %s to filter %s failed with error %d.",
                  buf, bl->name, error);
        }
# 1373
        continue;
      } else {
# 1377
        if ((unsigned int )bl->joblist == (unsigned int )((void *)0)) {
          {
# 1379
          bl->joblist = dummy;
          }
        } else {
          {
# 1383
          lastjob->next = dummy;
          }
        }
        {
# 1385
        lastjob = dummy;
# 1386
        log_error(64, "Adding re_filter job %s to filter %s succeeded.", buf,
                  bl->name);
        }
      }
    } else {
      {
# 1391
      log_error(8192, "Ignoring job %s outside filter block in %s, line %d",
                buf, (csp->config)->re_filterfile, linenum);
      }
    }
  }
  {

  {
# 96 "spec.work"
  if (fp->__BLAST_FLAG == 1) {
# 97
    fp->__BLAST_FLAG = 0;
  } else {
# 98
    __error__();
  }
  {

  }
  }
# 1395 "loaders.c"
  fclose(fp);
  }
# 1400
  if ((unsigned int )((void *)0) != (unsigned int )current_re_filterfile) {
    {
# 1402
    current_re_filterfile->unloader = & unload_re_filterfile;
    }
  }
  {
# 1408
  fs->next = files[0].next;
# 1409
  files[0].next = fs;
# 1410
  current_re_filterfile = fs;
  }
# 1412
  if (csp) {
    {
# 1414
    csp->rlist = fs;
    }
  }
# 1417
  return (0);
  load_re_filterfile_error: 
  {
# 1420
  log_error(16384, "can\'t load re_filterfile \'%s\': %E",
            (csp->config)->re_filterfile);
  }
# 1422
  return (-1);
}
}
# 1442
void add_loader(int (*loader)(struct client_state * ) ,
                struct configuration_spec *config ) 
{ int i ;

  {
  {
# 1447
  i = 0;
  }
# 1447
  while (i < 8) {
# 1449
    if ((unsigned int )config->loaders[i] == (unsigned int )((void *)0)) {
      {
# 1451
      config->loaders[i] = loader;
      }
# 1452
      break;
    }
    {
# 1447
    i ++;
    }
  }
# 1456
  return;
}
}
# 1476
int run_loader(struct client_state *csp ) 
{ int ret ;
  int i ;
  int tmp ;

  {
  {
# 1478
  ret = 0;
# 1481
  i = 0;
  }
# 1481
  while (i < 8) {
# 1483
    if ((unsigned int )(csp->config)->loaders[i] == (unsigned int )((void *)0)) {
# 1485
      break;
    }
    {
# 1487
    tmp = ((*((csp->config)->loaders[i])))(csp);
# 1487
    ret |= tmp;
# 1481
    i ++;
    }
  }
# 1489
  return (ret);
}
}
# 1 "miscutil.c"
__asm__("booo - error in global miscutil_rcs (miscutil.c:1)");
# 237
char const   miscutil_h_rcs[53]   = 
# 237
  {'$', 'I', 'd', ':', ' ', 'm', 'i', 's', 'c', 'u', 't', 'i', 'l', '.', 'h',
   ',', 'v', ' ', '1', '.', '2', '1', ' ', '2', '0', '0', '2', '/', '0', '4',
   '/', '2', '6', ' ', '1', '2', ':', '5', '5', ':', '3', '8', ' ', 'o', 'e',
   's', ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 252
void *zalloc(size_t size ) 
{ void *ret ;
  void *tmp ;

  {
  {
# 256
  tmp = malloc(size);
# 256
  ret = tmp;
  }
# 256
  if ((unsigned int )ret != (unsigned int )((void *)0)) {
    {
# 258
    memset(ret, 0, size);
    }
  }
# 261
  return (ret);
}
}
# 278
void write_pid_file(void) 
{ FILE *fp ;
  __pid_t tmp ;

  {
# 286
  if ((unsigned int )pidfile == (unsigned int )((void *)0)) {
# 286
    return;
  }
  {
# 288
  fp = fopen((char const   */* __restrict  */)pidfile,
             (char const   */* __restrict  */)((char const   *)"w"));
  {
# 17 "spec.work"
    fp->__BLAST_FLAG = 1;
  {

  }
  }

  }
# 288 "miscutil.c"
  if ((unsigned int )fp == (unsigned int )((void *)0)) {
    {
# 290
    log_error(4096, "can\'t open pidfile \'%s\': %E", pidfile);
    }
  } else {
    {
# 294
    tmp = getpid();
    {
# 64 "spec.work"
    if (! (fp->__BLAST_FLAG == 1)) {
# 66
      __error__();
    }
    {

    }
    }
# 294 "miscutil.c"
    fprintf((FILE */* __restrict  */)fp,
            (char const   */* __restrict  */)((char const   *)"%u\n"),
            (unsigned int )tmp);
    {
# 96 "spec.work"
    if (fp->__BLAST_FLAG == 1) {
# 97
      fp->__BLAST_FLAG = 0;
    } else {
# 98
      __error__();
    }
    {

    }
    }
# 295 "miscutil.c"
    fclose(fp);
    }
  }
# 297
  return;
}
}
# 317
unsigned int hash_string(char const   *s ) 
{ unsigned int h ;

  {
  {
# 319
  h = 0U;
  }
# 321
  while ((*s)) {
    {
# 323
    h = 5U * h + (unsigned int )(*s);
# 321
    s ++;
    }
  }
# 326
  return (h);
}
}
# 379
char *safe_strerror(int err ) 
{ char *s ;
  char buf[5000] ;
  char *tmp ;

  {
  {
# 381
  s = (char *)((void *)0);
# 386
  s = strerror(err);
  }
# 389
  if ((unsigned int )s == (unsigned int )((void *)0)) {
    {
# 391
    sprintf((char */* __restrict  */)(buf),
            (char const   */* __restrict  */)((char const   *)"(errno = %d)"),
            err);
# 392
    s = buf;
    }
  }
  {
# 395
  tmp = strdup((char const   *)s);
  }
# 395
  return (tmp);
}
}
# 413
int strcmpic(char const   *s1 , char const   *s2 ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
# 415
  if (! s1) {
    {
# 415
    s1 = (char const   *)"";
    }
  }
# 416
  if (! s2) {
    {
# 416
    s2 = (char const   *)"";
    }
  }
# 418
  while (1) {
# 418
    if ((*s1)) {
# 418
      if (! (*s2)) {
# 418
        break;
      }
    } else {
# 418
      break;
    }
# 420
    if ((int const   )(*s1) != (int const   )(*s2)) {
      {
# 420
      tmp = tolower((int )((unsigned char )(*s1)));
# 420
      tmp___0 = tolower((int )((unsigned char )(*s2)));
      }
# 420
      if (tmp != tmp___0) {
# 422
        break;
      }
    }
    {
# 424
    s1 ++;
# 424
    s2 ++;
    }
  }
  {
# 426
  tmp___1 = tolower((int )((unsigned char )(*s1)));
# 426
  tmp___2 = tolower((int )((unsigned char )(*s2)));
  }
# 426
  return (tmp___1 - tmp___2);
}
}
# 445
int strncmpic(char const   *s1 , char const   *s2 , size_t n ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
# 447
  if (n <= 0U) {
# 447
    return (0);
  }
# 448
  if (! s1) {
    {
# 448
    s1 = (char const   *)"";
    }
  }
# 449
  if (! s2) {
    {
# 449
    s2 = (char const   *)"";
    }
  }
# 451
  while (1) {
# 451
    if ((*s1)) {
# 451
      if (! (*s2)) {
# 451
        break;
      }
    } else {
# 451
      break;
    }
# 453
    if ((int const   )(*s1) != (int const   )(*s2)) {
      {
# 453
      tmp = tolower((int )((unsigned char )(*s1)));
# 453
      tmp___0 = tolower((int )((unsigned char )(*s2)));
      }
# 453
      if (tmp != tmp___0) {
# 455
        break;
      }
    }
    {
# 458
    n --;
    }
# 458
    if (n <= 0U) {
# 458
      break;
    }
    {
# 460
    s1 ++;
# 460
    s2 ++;
    }
  }
  {
# 462
  tmp___1 = tolower((int )((unsigned char )(*s1)));
# 462
  tmp___2 = tolower((int )((unsigned char )(*s2)));
  }
# 462
  return (tmp___1 - tmp___2);
}
}
# 480
char *chomp(char *string ) 
{ char *p ;
  char *q ;
  char *r ;
  size_t tmp ;
  int tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;

  {
  {
# 487
  tmp = strlen((char const   *)string);
# 487
  p = string + tmp;
  }
# 488
  while (1) {
# 488
    if ((unsigned int )p > (unsigned int )string) {
      {
# 488
      tmp___0 = _get__ctype_b((int )((unsigned char )(*(p - 1))));
      }
# 488
      if (! (tmp___0 & 8192)) {
# 488
        break;
      }
    } else {
# 488
      break;
    }
    {
# 490
    p --;
    }
  }
  {
# 492
  (*p) = '\0';
# 497
  r = string;
# 497
  q = r;
  }
# 498
  while (1) {
# 498
    if ((*q)) {
      {
# 498
      tmp___1 = _get__ctype_b((int )((unsigned char )(*q)));
      }
# 498
      if (! (tmp___1 & 8192)) {
# 498
        break;
      }
    } else {
# 498
      break;
    }
    {
# 500
    q ++;
    }
  }
# 506
  if ((unsigned int )q != (unsigned int )string) {
# 508
    while ((unsigned int )q <= (unsigned int )p) {
      {
# 510
      tmp___2 = r;
# 510
      r ++;
# 510
      tmp___3 = q;
# 510
      q ++;
# 510
      (*tmp___2) = (*tmp___3);
      }
    }
  }
# 514
  return (string);
}
}
# 538
char *strsav(char *old , char const   *text_to_append ) 
{ size_t old_len ;
  size_t new_len ;
  char *p ;
  size_t tmp ;

  {
  {
# 540
  new_len = (unsigned int )0;
  }
# 543
  if ((unsigned int )text_to_append == (unsigned int )((void *)0)) {
# 545
    return (old);
  } else {
# 543
    if ((int const   )(*text_to_append) == 0) {
# 545
      return (old);
    }
  }
# 548
  if ((unsigned int )((void *)0) == (unsigned int )old) {
    {
# 550
    p = strdup(text_to_append);
    }
# 550
    if ((unsigned int )p == (unsigned int )((void *)0)) {
      {
# 552
      log_error(16384, "strdup() failed!");
      }
    }
# 555
    return (p);
  }
  {
# 558
  old_len = strlen((char const   *)old);
# 559
  tmp = strlen(text_to_append);
# 559
  new_len = (old_len + tmp) + 1U;
# 561
  p = (char *)realloc((void *)old, new_len);
  }
# 561
  if ((unsigned int )p == (unsigned int )((void *)0)) {
    {
# 563
    log_error(16384, "realloc(%d) bytes failed!", new_len);
    }
  }
  {
# 567
  strcpy((char */* __restrict  */)(p + old_len),
         (char const   */* __restrict  */)text_to_append);
  }
# 568
  return (p);
}
}
# 620
jb_err string_append(char **target_string , char const   *text_to_append ) 
{ size_t old_len ;
  char *new_string ;
  size_t tmp ;

  {
# 625
  if (! target_string) {
    {
# 625
    __assert_fail((char const   *)"target_string", (char const   *)"miscutil.c",
                  625U, (char const   *)"string_append");
    }
  }
# 626
  if (! text_to_append) {
    {
# 626
    __assert_fail((char const   *)"text_to_append",
                  (char const   *)"miscutil.c", 626U,
                  (char const   *)"string_append");
    }
  }
# 628
  if ((unsigned int )(*target_string) == (unsigned int )((void *)0)) {
# 630
    return (1);
  }
# 633
  if ((int const   )(*text_to_append) == 0) {
# 635
    return (0);
  }
  {
# 638
  old_len = strlen((char const   *)(*target_string));
# 640
  tmp = strlen(text_to_append);
# 640
  new_string = (char *)realloc((void *)(*target_string), (tmp + old_len) + 1U);
  }
# 640
  if ((unsigned int )((void *)0) == (unsigned int )new_string) {
    {
# 643
    free((void *)(*target_string));
# 645
    (*target_string) = (char *)((void *)0);
    }
# 646
    return (1);
  }
  {
# 649
  strcpy((char */* __restrict  */)(new_string + old_len),
         (char const   */* __restrict  */)text_to_append);
# 651
  (*target_string) = new_string;
  }
# 652
  return (0);
}
}
# 689
jb_err string_join(char **target_string , char *text_to_append ) 
{ jb_err err ;

  {
# 693
  if (! target_string) {
    {
# 693
    __assert_fail((char const   *)"target_string", (char const   *)"miscutil.c",
                  693U, (char const   *)"string_join");
    }
  }
# 695
  if ((unsigned int )text_to_append == (unsigned int )((void *)0)) {
# 697
    if ((*target_string)) {
      {
# 697
      free((void *)(*target_string));
# 697
      (*target_string) = (char *)((void *)0);
      }
    }
# 698
    return (1);
  }
  {
# 701
  err = string_append(target_string, (char const   *)text_to_append);
# 703
  free((void *)text_to_append);
  }
# 705
  return (err);
}
}
# 723
char *string_toupper(char const   *string ) 
{ char *result ;
  char *p ;
  char const   *q ;
  size_t tmp ;
  char *tmp___1 ;
  char const   *tmp___2 ;

  {
# 728
  if (string) {
    {
# 728
    tmp = strlen(string);
# 728
    result = (char *)zalloc(tmp + 1U);
    }
# 728
    if ((unsigned int )result == (unsigned int )((void *)0)) {
# 730
      return ((char *)((void *)0));
    }
  } else {
# 730
    return ((char *)((void *)0));
  }
  {
# 733
  q = string;
# 734
  p = result;
  }
# 736
  while ((int const   )(*q) != 0) {
    {
# 738
    tmp___1 = p;
# 738
    p ++;
# 738
    tmp___2 = q;
# 738
    q ++;
# 738
    (*tmp___1) = (char )toupper((int )(*tmp___2));
    }
  }
# 741
  return (result);
}
}
# 762
int simplematch(char *pattern , char *text ) 
{ unsigned char *pat ;
  unsigned char *txt ;
  unsigned char *fallback ;
  int wildcard ;
  unsigned char lastchar ;
  unsigned int i ;
  unsigned char charmap[32] ;

  {
  {
# 764
  pat = (unsigned char *)pattern;
# 765
  txt = (unsigned char *)text;
# 766
  fallback = pat;
# 767
  wildcard = 0;
# 769
  lastchar = (unsigned char )'a';
  }
# 773
  while ((*txt)) {
# 777
    if ((int )(*pat) == 0) {
# 779
      if (wildcard) {
        {
# 781
        pat = fallback;
        }
      } else {
# 785
        return (1);
      }
    }
# 790
    if ((int )(*pat) == 42) {
      {
# 794
      pat ++;
      }
# 794
      if ((int )(*pat) == 0) {
# 796
        return (0);
      }
      {
# 800
      wildcard = 1;
# 801
      fallback = pat;
      }
    }
# 805
    if ((int )(*pat) == 91) {
      {
# 807
      memset((void *)(charmap), (int )'\0', sizeof(charmap));
      }
# 809
      while (1) {
        {
# 809
        pat ++;
        }
# 809
        if (! ((int )(*pat) != 93)) {
# 809
          break;
        }
# 811
        if ((*pat)) {
# 815
          if ((int )(*pat) == 45) {
            {
# 817
            pat ++;
            }
# 817
            if ((int )(*pat) == 93) {
# 819
              return (1);
            } else {
# 817
              if ((int )(*pat) == 0) {
# 819
                return (1);
              }
            }
            {
# 821
            i = (unsigned int )lastchar;
            }
# 821
            while (i <= (unsigned int )(*pat)) {
              {
# 823
              charmap[i / 8U] = (unsigned char )((int )charmap[i / 8U] |
                                                 (1 << i % 8U));
# 821
              i ++;
              }
            }
          } else {
            {
# 828
            charmap[(int )(*pat) / 8] = (unsigned char )((int )charmap[(int )(*pat) /
                                                                       8] |
                                                         (1 << (int )(*pat) % 8));
# 829
            lastchar = (*pat);
            }
          }
        } else {
# 813
          return (1);
        }
      }
    }
# 838
    if ((int )(*pat) == (int )(*txt)) {
      {
# 845
      pat ++;
      }
    } else {
# 838
      if ((int )(*pat) == 63) {
        {
# 845
        pat ++;
        }
      } else {
# 838
        if ((int )(*pat) == 93) {
# 838
          if ((int )charmap[(int )(*txt) / 8] & (1 << (int )(*txt) % 8)) {
            {
# 845
            pat ++;
            }
          } else {
            goto _L;
          }
        } else {
          _L: 
# 847
          if (wildcard) {
# 854
            if ((unsigned int )pat != (unsigned int )fallback) {
              {
# 859
              pat = fallback;
              }
            }
          } else {
# 852
            return (1);
          }
        }
      }
    }
    {
# 861
    txt ++;
    }
  }
# 865
  if ((int )(*pat) == 42) {
    {
# 865
    pat ++;
    }
  }
# 868
  return ((int )(*pat));
}
}
# 887
char *bindup(char const   *string , size_t len ) 
{ char *duplicate ;

  {
  {
# 891
  duplicate = (char *)malloc(len);
  }
# 891
  if ((unsigned int )((void *)0) == (unsigned int )duplicate) {
# 893
    return ((char *)((void *)0));
  } else {
    {
# 897
    memcpy((void */* __restrict  */)((void *)duplicate),
           (void const   */* __restrict  */)((void const   *)string), len);
    }
  }
# 900
  return (duplicate);
}
}
# 925
char *make_path(char const   *dir , char const   *file ) 
{ char *tmp ;
  char *path ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;

  {
# 959
  if ((unsigned int )file == (unsigned int )((void *)0)) {
# 961
    return ((char *)((void *)0));
  } else {
# 959
    if ((int const   )(*file) == 0) {
# 961
      return ((char *)((void *)0));
    }
  }
# 964
  if ((unsigned int )dir == (unsigned int )((void *)0)) {
    {
# 972
    tmp = strdup(file);
    }
# 972
    return (tmp);
  } else {
# 964
    if ((int const   )(*dir) == 0) {
      {
# 972
      tmp = strdup(file);
      }
# 972
      return (tmp);
    } else {
# 964
      if ((int const   )(*file) == 47) {
        {
# 972
        tmp = strdup(file);
        }
# 972
        return (tmp);
      } else {
# 979
        if ((int const   )(*dir) != 47) {
# 979
          if (basedir) {
# 979
            if ((*basedir)) {
              {
# 981
              tmp___0 = strlen(basedir);
# 981
              tmp___1 = strlen(dir);
# 981
              tmp___2 = strlen(file);
# 981
              path = (char *)malloc(((tmp___0 + tmp___1) + tmp___2) + 3U);
              }
# 982
              if (! path) {
                {
# 982
                log_error(16384, "malloc failed!");
                }
              }
              {
# 983
              strcpy((char */* __restrict  */)path,
                     (char const   */* __restrict  */)basedir);
# 984
              strcat((char */* __restrict  */)path,
                     (char const   */* __restrict  */)((char const   *)"/"));
# 985
              strcat((char */* __restrict  */)path,
                     (char const   */* __restrict  */)dir);
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
# 989
          tmp___3 = strlen(dir);
# 989
          tmp___4 = strlen(file);
# 989
          path = (char *)malloc((tmp___3 + tmp___4) + 2U);
          }
# 990
          if (! path) {
            {
# 990
            log_error(16384, "malloc failed!");
            }
          }
          {
# 991
          strcpy((char */* __restrict  */)path,
                 (char const   */* __restrict  */)dir);
          }
        }
        {
# 1007
        tmp___5 = strlen((char const   *)path);
        }
# 1007
        if ((int )(*(path + (tmp___5 - 1U))) != 47) {
          {
# 1009
          strcat((char */* __restrict  */)path,
                 (char const   */* __restrict  */)((char const   *)"/"));
          }
        }
        {
# 1012
        strcat((char */* __restrict  */)path,
               (char const   */* __restrict  */)file);
        }
# 1014
        return (path);
      }
    }
  }
}
}
# 1 "parsers.c"
__asm__("booo - error in global parsers_rcs (parsers.c:1)");
# 455
char const   parsers_h_rcs[56]   = 
# 455
  {'$', 'I', 'd', ':', ' ', 'p', 'a', 'r', 's', 'e', 'r', 's', '.', 'h', ',',
   'v', ' ', '1', '.', '2', '6', '.', '2', '.', '1', ' ', '2', '0', '0', '2',
   '/', '0', '9', '/', '2', '5', ' ', '1', '4', ':', '5', '2', ':', '4', '6',
   ' ', 'o', 'e', 's', ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 471
struct parsers  const  client_patterns[14]   = 
# 471
  {{"referer:", (unsigned int )8, & client_referrer},
   {"user-agent:", (unsigned int )11, & client_uagent},
   {"ua-", (unsigned int )3, & client_ua},
   {"from:", (unsigned int )5, & client_from},
   {"cookie:", (unsigned int )7, & client_send_cookie},
   {"x-forwarded-for:", (unsigned int )16, & client_x_forwarded},
   {"Accept-Encoding:", (unsigned int )16, & client_accept_encoding},
   {"TE:", (unsigned int )3, & client_te},
   {"Host:", (unsigned int )5, & client_host},
   {"Keep-Alive:", (unsigned int )11, & crumble},
   {"connection:", (unsigned int )11, & crumble},
   {"proxy-connection:", (unsigned int )17, & crumble},
   {"max-forwards:", (unsigned int )13, & client_max_forwards},
   {(char *)((void *)0), (unsigned int )0,
    (jb_err (*)(struct client_state * , char ** ))((void *)0)}};
# 490
struct parsers  const  server_patterns[10]   = 
# 490
  {{"HTTP", (unsigned int )4, & server_http},
   {"set-cookie:", (unsigned int )11, & server_set_cookie},
   {"connection:", (unsigned int )11, & crumble},
   {"Content-Type:", (unsigned int )13, & server_content_type},
   {"Content-Length:", (unsigned int )15, & server_content_length},
   {"Content-MD5:", (unsigned int )12, & server_content_md5},
   {"Content-Encoding:", (unsigned int )17, & server_content_encoding},
   {"Transfer-Encoding:", (unsigned int )18, & server_transfer_coding},
   {"Keep-Alive:", (unsigned int )11, & crumble},
   {(char *)((void *)0), (unsigned int )0,
    (jb_err (*)(struct client_state * , char ** ))((void *)0)}};
# 504
add_header_func_ptr const   add_client_headers[6]   = {(add_header_func_ptr const   )(& client_host_adder),
                                                       (add_header_func_ptr const   )(& client_cookie_adder),
                                                       (add_header_func_ptr const   )(& client_x_forwarded_adder),
                                                       (add_header_func_ptr const   )(& client_xtra_adder),
                                                       (add_header_func_ptr const   )(& connection_close_adder),
                                                       (add_header_func_ptr const   )((jb_err (*)(struct client_state * ))((void *)0))};
# 515
add_header_func_ptr const   add_server_headers[2]   = {(add_header_func_ptr const   )(& connection_close_adder),
                                                       (add_header_func_ptr const   )((jb_err (*)(struct client_state * ))((void *)0))};
# 539
int flush_socket(jb_socket fd , struct client_state *csp ) 
{ struct iob *iob ;
  int len ;
  int tmp ;

  {
  {
# 541
  iob = csp->iob;
# 542
  len = iob->eod - iob->cur;
  }
# 544
  if (len <= 0) {
# 546
    return (0);
  }
  {
# 549
  tmp = write_socket(fd, (char const   *)iob->cur, (unsigned int )len);
  }
# 549
  if (tmp) {
# 551
    return (-1);
  }
  {
# 553
  iob->cur = iob->buf;
# 553
  iob->eod = iob->cur;
  }
# 554
  return (len);
}
}
# 575
jb_err add_to_iob(struct client_state *csp , char *buf , int n ) 
{ struct iob *iob ;
  size_t used ;
  size_t offset ;
  size_t need ;
  size_t want ;
  char *p ;

  {
  {
# 577
  iob = csp->iob;
  }
# 581
  if (n <= 0) {
# 581
    return (0);
  }
  {
# 583
  used = (unsigned int )(iob->eod - iob->buf);
# 584
  offset = (unsigned int )(iob->cur - iob->buf);
# 585
  need = (used + (unsigned int )n) + 1U;
  }
# 591
  if (need > (csp->config)->buffer_limit) {
    {
# 593
    log_error(8192, "Buffer limit reached while extending the buffer (iob)");
    }
# 594
    return (1);
  }
# 597
  if (need > iob->size) {
# 599
    if (csp->iob[0].size) {
      {
# 599
      want = csp->iob[0].size;
      }
    } else {
      {
# 599
      want = 512U;
      }
    }
# 599
    while (want <= need) {
      {
# 599
      want *= 2U;
      }
    }
# 601
    if (want <= (csp->config)->buffer_limit) {
      {
# 601
      p = (char *)realloc((void *)iob->buf, want);
      }
# 601
      if ((unsigned int )((void *)0) != (unsigned int )p) {
        {
# 603
        iob->size = want;
        }
      } else {
        goto _L;
      }
    } else {
      _L: 
      {
# 605
      p = (char *)realloc((void *)iob->buf, need);
      }
# 605
      if ((unsigned int )((void *)0) != (unsigned int )p) {
        {
# 607
        iob->size = need;
        }
      } else {
        {
# 611
        log_error(8192, "Extending the buffer (iob) failed: %E");
        }
# 612
        return (1);
      }
    }
    {
# 616
    iob->cur = p + offset;
# 617
    iob->eod = p + used;
# 618
    iob->buf = p;
    }
  }
  {
# 622
  memcpy((void */* __restrict  */)((void *)iob->eod),
         (void const   */* __restrict  */)((void const   *)buf),
         (unsigned int )n);
# 625
  iob->eod = iob->eod + n;
# 628
  (*(iob->eod)) = '\0';
  }
# 630
  return (0);
}
}
# 652
char *get_header(struct client_state *csp ) 
{ struct iob *iob ;
  char *p ;
  char *q ;
  char *ret ;

  {
  {
# 656
  iob = csp->iob;
  }
# 658
  if ((unsigned int )iob->cur == (unsigned int )((void *)0)) {
# 661
    return ("");
  } else {
    {
# 658
    p = strchr((char const   *)iob->cur, (int )'\n');
    }
# 658
    if ((unsigned int )p == (unsigned int )((void *)0)) {
# 661
      return ("");
    }
  }
  {
# 664
  (*p) = '\0';
# 666
  ret = strdup((char const   *)iob->cur);
  }
# 667
  if ((unsigned int )ret == (unsigned int )((void *)0)) {
    {
# 670
    log_error(16384, "Out of memory in get_header()");
    }
  }
  {
# 673
  iob->cur = p + 1;
# 675
  q = strchr((char const   *)ret, (int )'\r');
  }
# 675
  if ((unsigned int )q != (unsigned int )((void *)0)) {
    {
# 675
    (*q) = '\0';
    }
  }
# 678
  if ((int )(*ret) == 0) {
# 680
    if (ret) {
      {
# 680
      free((void *)ret);
# 680
      ret = (char *)((void *)0);
      }
    }
# 681
    return ((char *)((void *)0));
  }
# 684
  return (ret);
}
}
# 706
char *get_header_value(struct list  const  *header_list ,
                       char const   *header_name ) 
{ struct list_entry *cur_entry ;
  char *ret ;
  size_t length ;
  int tmp ;
  int tmp___0 ;

  {
  {
# 709
  ret = (char *)((void *)0);
# 710
  length = (unsigned int )0;
  }
# 712
  if (! header_list) {
    {
# 712
    __assert_fail((char const   *)"header_list", (char const   *)"parsers.c",
                  712U, (char const   *)"get_header_value");
    }
  }
# 713
  if (! header_name) {
    {
# 713
    __assert_fail((char const   *)"header_name", (char const   *)"parsers.c",
                  713U, (char const   *)"get_header_value");
    }
  }
  {
# 714
  length = strlen(header_name);
# 716
  cur_entry = header_list->first;
  }
# 716
  while (cur_entry) {
# 718
    if (cur_entry->str) {
      {
# 720
      tmp___0 = strncmpic((char const   *)cur_entry->str, header_name, length);
      }
# 720
      if (! tmp___0) {
        {
# 725
        ret = cur_entry->str + length;
        }
# 726
        while (1) {
# 726
          if ((*ret)) {
            {
# 726
            tmp = _get__ctype_b((int )((unsigned char )(*ret)));
            }
# 726
            if (! (tmp & 8192)) {
# 726
              break;
            }
          } else {
# 726
            break;
          }
          {
# 726
          ret ++;
          }
        }
# 727
        return (ret);
      }
    }
    {
# 716
    cur_entry = cur_entry->next;
    }
  }
# 735
  return ((char *)((void *)0));
}
}
# 761
char *sed(struct parsers  const  *pats ,
          add_header_func_ptr const   *more_headers , struct client_state *csp ) 
{ struct list_entry *p ;
  struct parsers  const  *v ;
  add_header_func_ptr const   *f ;
  jb_err err ;
  int tmp ;
  char *tmp___0 ;

  {
  {
# 768
  err = 0;
# 770
  v = pats;
  }
# 770
  while (1) {
# 770
    if (err == 0) {
# 770
      if (! ((unsigned int )v->str != (unsigned int )((void *)0))) {
# 770
        break;
      }
    } else {
# 770
      break;
    }
    {
# 772
    p = csp->headers[0].first;
    }
# 772
    while (1) {
# 772
      if (err == 0) {
# 772
        if (! ((unsigned int )p != (unsigned int )((void *)0))) {
# 772
          break;
        }
      } else {
# 772
        break;
      }
# 775
      if ((unsigned int )p->str == (unsigned int )((void *)0)) {
        goto __Cont;
      }
# 777
      if ((unsigned int )v == (unsigned int )pats) {
        {
# 777
        log_error(8, "scan: %s", p->str);
        }
      }
      {
# 779
      tmp = strncmpic((char const   *)p->str, (char const   *)v->str, v->len);
      }
# 779
      if (tmp == 0) {
        {
# 781
        err = ((*(v->parser)))(csp, & p->str);
        }
      }
      __Cont: 
      {
# 772
      p = p->next;
      }
    }
    {
# 770
    v ++;
    }
  }
  {
# 787
  f = more_headers;
  }
# 787
  while (1) {
# 787
    if (err == 0) {
# 787
      if (! (*f)) {
# 787
        break;
      }
    } else {
# 787
      break;
    }
    {
# 789
    err = ((*((*f))))(csp);
# 787
    f ++;
    }
  }
# 792
  if (err != 0) {
# 794
    return ((char *)((void *)0));
  }
  {
# 797
  tmp___0 = list_to_text((struct list  const  *)(csp->headers));
  }
# 797
  return (tmp___0);
}
}
# 821
jb_err crumble(struct client_state *csp , char **header ) 
{ 

  {
  {
# 823
  log_error(8, "crunch!");
  }
# 824
  if ((*header)) {
    {
# 824
    free((void *)(*header));
# 824
    (*header) = (char *)((void *)0);
    }
  }
# 825
  return (0);
}
}
# 851
jb_err server_content_type(struct client_state *csp , char **header ) 
{ char * __attribute__((__rostring__, __nullterm__)) tmp ;
  char * __attribute__((__rostring__, __nullterm__)) tmp___0 ;
  char * __attribute__((__rostring__, __nullterm__)) tmp___1 ;
  char * __attribute__((__rostring__, __nullterm__)) tmp___2 ;

  {
# 853
  if ((int )csp->content_type != 4) {
    {
# 855
    tmp___0 = strstr((char const   */* __attribute__((__rostring__,
                     __nullterm__)) */)((char const   *)(*header)),
                     (char const   */* __attribute__((__rostring__,
                     __nullterm__)) */)((char const   *)" text/"));
    }
# 855
    if (tmp___0) {
      {
# 855
      tmp___1 = strstr((char const   */* __attribute__((__rostring__,
                       __nullterm__)) */)((char const   *)(*header)),
                       (char const   */* __attribute__((__rostring__,
                       __nullterm__)) */)((char const   *)"plain"));
      }
# 855
      if (tmp___1) {
        goto _L;
      } else {
        {
# 857
        csp->content_type = (unsigned short )1;
        }
      }
    } else {
      _L: 
      {
# 855
      tmp___2 = strstr((char const   */* __attribute__((__rostring__,
                       __nullterm__)) */)((char const   *)(*header)),
                       (char const   */* __attribute__((__rostring__,
                       __nullterm__)) */)((char const   *)"application/x-javascript"));
      }
# 855
      if (tmp___2) {
        {
# 857
        csp->content_type = (unsigned short )1;
        }
      } else {
        {
# 858
        tmp = strstr((char const   */* __attribute__((__rostring__,
                     __nullterm__)) */)((char const   *)(*header)),
                     (char const   */* __attribute__((__rostring__,
                     __nullterm__)) */)((char const   *)" image/gif"));
        }
# 858
        if (tmp) {
          {
# 859
          csp->content_type = (unsigned short )2;
          }
        } else {
          {
# 861
          csp->content_type = (unsigned short )0;
          }
        }
      }
    }
  }
# 864
  return (0);
}
}
# 888
jb_err server_transfer_coding(struct client_state *csp , char **header ) 
{ char * __attribute__((__rostring__, __nullterm__)) tmp ;
  char * __attribute__((__rostring__, __nullterm__)) tmp___0 ;
  char * __attribute__((__rostring__, __nullterm__)) tmp___1 ;
  int tmp___2 ;
  char * __attribute__((__rostring__, __nullterm__)) tmp___3 ;

  {
  {
# 893
  tmp = strstr((char const   */* __attribute__((__rostring__,
               __nullterm__)) */)((char const   *)(*header)),
               (char const   */* __attribute__((__rostring__,
               __nullterm__)) */)((char const   *)"gzip"));
  }
# 893
  if (tmp) {
    {
# 895
    csp->content_type = (unsigned short )4;
    }
  } else {
    {
# 893
    tmp___0 = strstr((char const   */* __attribute__((__rostring__,
                     __nullterm__)) */)((char const   *)(*header)),
                     (char const   */* __attribute__((__rostring__,
                     __nullterm__)) */)((char const   *)"compress"));
    }
# 893
    if (tmp___0) {
      {
# 895
      csp->content_type = (unsigned short )4;
      }
    } else {
      {
# 893
      tmp___1 = strstr((char const   */* __attribute__((__rostring__,
                       __nullterm__)) */)((char const   *)(*header)),
                       (char const   */* __attribute__((__rostring__,
                       __nullterm__)) */)((char const   *)"deflate"));
      }
# 893
      if (tmp___1) {
        {
# 895
        csp->content_type = (unsigned short )4;
        }
      }
    }
  }
  {
# 901
  tmp___3 = strstr((char const   */* __attribute__((__rostring__,
                   __nullterm__)) */)((char const   *)(*header)),
                   (char const   */* __attribute__((__rostring__,
                   __nullterm__)) */)((char const   *)"chunked"));
  }
# 901
  if (tmp___3) {
    {
# 903
    csp->flags = (unsigned short )((int )csp->flags | 2);
    }
# 909
    if ((int )csp->flags & 8) {
# 911
      if ((*header)) {
        {
# 911
        free((void *)(*header));
# 911
        (*header) = (char *)((void *)0);
        }
      }
      {
# 912
      (*header) = strdup((char const   *)"Transfer-Encoding: identity");
      }
# 913
      if ((unsigned int )header == (unsigned int )((void *)0)) {
        {
# 913
        tmp___2 = 1;
        }
      } else {
        {
# 913
        tmp___2 = 0;
        }
      }
# 913
      return (tmp___2);
    }
  }
# 917
  return (0);
}
}
# 938
jb_err server_content_encoding(struct client_state *csp , char **header ) 
{ char * __attribute__((__rostring__, __nullterm__)) tmp ;
  char * __attribute__((__rostring__, __nullterm__)) tmp___0 ;
  char * __attribute__((__rostring__, __nullterm__)) tmp___1 ;

  {
  {
# 943
  tmp = strstr((char const   */* __attribute__((__rostring__,
               __nullterm__)) */)((char const   *)(*header)),
               (char const   */* __attribute__((__rostring__,
               __nullterm__)) */)((char const   *)"gzip"));
  }
# 943
  if (tmp) {
    {
# 945
    csp->content_type = (unsigned short )4;
    }
  } else {
    {
# 943
    tmp___0 = strstr((char const   */* __attribute__((__rostring__,
                     __nullterm__)) */)((char const   *)(*header)),
                     (char const   */* __attribute__((__rostring__,
                     __nullterm__)) */)((char const   *)"compress"));
    }
# 943
    if (tmp___0) {
      {
# 945
      csp->content_type = (unsigned short )4;
      }
    } else {
      {
# 943
      tmp___1 = strstr((char const   */* __attribute__((__rostring__,
                       __nullterm__)) */)((char const   *)(*header)),
                       (char const   */* __attribute__((__rostring__,
                       __nullterm__)) */)((char const   *)"deflate"));
      }
# 943
      if (tmp___1) {
        {
# 945
        csp->content_type = (unsigned short )4;
        }
      }
    }
  }
# 948
  return (0);
}
}
# 971
jb_err server_content_length(struct client_state *csp , char **header ) 
{ 

  {
# 973
  if (csp->content_length != 0U) {
# 975
    if ((*header)) {
      {
# 975
      free((void *)(*header));
# 975
      (*header) = (char *)((void *)0);
      }
    }
    {
# 976
    (*header) = (char *)zalloc(100U);
    }
# 977
    if ((unsigned int )(*header) == (unsigned int )((void *)0)) {
# 979
      return (1);
    }
    {
# 982
    sprintf((char */* __restrict  */)(*header),
            (char const   */* __restrict  */)((char const   *)"Content-Length: %d"),
            (int )csp->content_length);
# 984
    log_error(8, "Adjust Content-Length to %d", (int )csp->content_length);
    }
  }
# 987
  return (0);
}
}
# 1009
jb_err server_content_md5(struct client_state *csp , char **header ) 
{ 

  {
# 1011
  if ((int )csp->flags & 8) {
    {
# 1013
    log_error(8, "Crunching Content-MD5");
    }
# 1014
    if ((*header)) {
      {
# 1014
      free((void *)(*header));
# 1014
      (*header) = (char *)((void *)0);
      }
    }
  }
# 1017
  return (0);
}
}
# 1040
jb_err client_accept_encoding(struct client_state *csp , char **header ) 
{ 

  {
# 1042
  if ((csp->action[0].flags & 1024UL) != 0UL) {
    {
# 1044
    log_error(8, "Suppressed offer to compress content");
    }
# 1046
    if ((*header)) {
      {
# 1046
      free((void *)(*header));
# 1046
      (*header) = (char *)((void *)0);
      }
    }
  }
# 1063
  return (0);
}
}
# 1085
jb_err client_te(struct client_state *csp , char **header ) 
{ 

  {
# 1087
  if ((csp->action[0].flags & 1024UL) != 0UL) {
# 1089
    if ((*header)) {
      {
# 1089
      free((void *)(*header));
# 1089
      (*header) = (char *)((void *)0);
      }
    }
    {
# 1090
    log_error(8, "Suppressed offer to compress transfer");
    }
  }
# 1093
  return (0);
}
}
# 1114
jb_err client_referrer(struct client_state *csp , char **header ) 
{ char const   *newval ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  {
# 1123
  strclean((char const   *)(*header), (char const   *)"/PRIVOXY-FORCE");
  }
# 1129
  if ((csp->action[0].flags & 64UL) == 0UL) {
# 1131
    return (0);
  }
# 1134
  if ((*header)) {
    {
# 1134
    free((void *)(*header));
# 1134
    (*header) = (char *)((void *)0);
    }
  }
  {
# 1136
  newval = (char const   *)csp->action[0].string[3];
  }
# 1138
  if ((unsigned int )newval == (unsigned int )((void *)0)) {
    {
# 1143
    log_error(8, "crunch!");
    }
# 1144
    return (0);
  } else {
    {
# 1138
    tmp___3 = strcmpic(newval, (char const   *)"block");
    }
# 1138
    if (0 == tmp___3) {
      {
# 1143
      log_error(8, "crunch!");
      }
# 1144
      return (0);
    } else {
      {
# 1146
      tmp___2 = strncmpic(newval, (char const   *)"http://", 7U);
      }
# 1146
      if (0 == tmp___2) {
        {
# 1151
        log_error(8, "modified");
# 1153
        (*header) = strdup((char const   *)"Referer: ");
# 1154
        string_append(header, newval);
        }
# 1156
        if ((unsigned int )(*header) == (unsigned int )((void *)0)) {
          {
# 1156
          tmp = 1;
          }
        } else {
          {
# 1156
          tmp = 0;
          }
        }
# 1156
        return (tmp);
      } else {
        {
# 1164
        tmp___0 = strcmpic(newval, (char const   *)"forge");
        }
# 1164
        if (0 != tmp___0) {
          {
# 1169
          log_error(8192, "Bad parameter: +referer{%s}", newval);
          }
        }
        {
# 1172
        (*header) = strdup((char const   *)"Referer: http://");
# 1173
        string_append(header, (char const   *)csp->http[0].hostport);
# 1174
        string_append(header, (char const   *)"/");
# 1175
        log_error(8, "crunch+forge to %s", (*header));
        }
# 1177
        if ((unsigned int )(*header) == (unsigned int )((void *)0)) {
          {
# 1177
          tmp___1 = 1;
          }
        } else {
          {
# 1177
          tmp___1 = 0;
          }
        }
# 1177
        return (tmp___1);
      }
    }
  }
}
}
# 1201
jb_err client_uagent(struct client_state *csp , char **header ) 
{ char const   *newval ;
  int tmp ;

  {
# 1205
  if ((csp->action[0].flags & 128UL) == 0UL) {
# 1207
    return (0);
  }
  {
# 1210
  newval = (char const   *)csp->action[0].string[4];
  }
# 1211
  if ((unsigned int )newval == (unsigned int )((void *)0)) {
# 1213
    return (0);
  }
  {
# 1216
  log_error(8, "modified");
  }
# 1218
  if ((*header)) {
    {
# 1218
    free((void *)(*header));
# 1218
    (*header) = (char *)((void *)0);
    }
  }
  {
# 1219
  (*header) = strdup((char const   *)"User-Agent: ");
# 1220
  string_append(header, newval);
  }
# 1222
  if ((unsigned int )(*header) == (unsigned int )((void *)0)) {
    {
# 1222
    tmp = 1;
    }
  } else {
    {
# 1222
    tmp = 0;
    }
  }
# 1222
  return (tmp);
}
}
# 1243
jb_err client_ua(struct client_state *csp , char **header ) 
{ 

  {
# 1245
  if ((csp->action[0].flags & 128UL) != 0UL) {
    {
# 1247
    log_error(8, "crunch!");
    }
# 1248
    if ((*header)) {
      {
# 1248
      free((void *)(*header));
# 1248
      (*header) = (char *)((void *)0);
      }
    }
  }
# 1251
  return (0);
}
}
# 1273
jb_err client_from(struct client_state *csp , char **header ) 
{ char const   *newval ;
  int tmp ;
  int tmp___0 ;

  {
# 1277
  if ((csp->action[0].flags & 32UL) == 0UL) {
# 1279
    return (0);
  }
# 1282
  if ((*header)) {
    {
# 1282
    free((void *)(*header));
# 1282
    (*header) = (char *)((void *)0);
    }
  }
  {
# 1284
  newval = (char const   *)csp->action[0].string[1];
  }
# 1289
  if ((unsigned int )newval == (unsigned int )((void *)0)) {
    {
# 1291
    log_error(8, "crunch!");
    }
# 1292
    return (0);
  } else {
    {
# 1289
    tmp = strcmpic(newval, (char const   *)"block");
    }
# 1289
    if (0 == tmp) {
      {
# 1291
      log_error(8, "crunch!");
      }
# 1292
      return (0);
    }
  }
  {
# 1295
  log_error(8, " modified");
# 1297
  (*header) = strdup((char const   *)"From: ");
# 1298
  string_append(header, newval);
  }
# 1300
  if ((unsigned int )(*header) == (unsigned int )((void *)0)) {
    {
# 1300
    tmp___0 = 1;
    }
  } else {
    {
# 1300
    tmp___0 = 0;
    }
  }
# 1300
  return (tmp___0);
}
}
# 1323
jb_err client_send_cookie(struct client_state *csp , char **header ) 
{ jb_err result ;

  {
  {
# 1325
  result = 0;
  }
# 1327
  if ((csp->action[0].flags & 4096UL) == 0UL) {
    {
# 1330
    result = enlist(csp->cookie_list, (char const   *)((*header) + 8));
    }
  } else {
    {
# 1334
    log_error(8, "Crunched outgoing cookie -- yum!");
    }
  }
# 1341
  if ((*header)) {
    {
# 1341
    free((void *)(*header));
# 1341
    (*header) = (char *)((void *)0);
    }
  }
# 1343
  return (result);
}
}
# 1365
jb_err client_x_forwarded(struct client_state *csp , char **header ) 
{ 

  {
# 1367
  if ((csp->action[0].flags & 16UL) == 0UL) {
# 1370
    if (csp->x_forwarded) {
      {
# 1370
      free((void *)csp->x_forwarded);
# 1370
      csp->x_forwarded = (char *)((void *)0);
      }
    }
    {
# 1371
    csp->x_forwarded = (*header);
# 1377
    (*header) = (char *)((void *)0);
    }
  } else {
# 1381
    if ((*header)) {
      {
# 1381
      free((void *)(*header));
# 1381
      (*header) = (char *)((void *)0);
      }
    }
    {
# 1382
    log_error(8, " crunch!");
    }
  }
# 1385
  return (0);
}
}
# 1407
jb_err client_max_forwards(struct client_state *csp , char **header ) 
{ unsigned int max_forwards ;
  unsigned int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  {
# 1411
  tmp___1 = strcmpic((char const   *)csp->http[0].gpc, (char const   *)"trace");
  }
# 1411
  if (0 == tmp___1) {
    goto _L;
  } else {
    {
# 1411
    tmp___2 = strcmpic((char const   *)csp->http[0].gpc,
                       (char const   *)"options");
    }
# 1411
    if (0 == tmp___2) {
      _L: 
      {
# 1414
      tmp___0 = sscanf((char const   */* __restrict  */)((char const   *)(*header)),
                       (char const   */* __restrict  */)((char const   *)"Max-Forwards: %u"),
                       & max_forwards);
      }
# 1414
      if (1 == tmp___0) {
        {
# 1416
        tmp = max_forwards;
# 1416
        max_forwards --;
        }
# 1416
        if (tmp >= 1U) {
          {
# 1418
          sprintf((char */* __restrict  */)(*header),
                  (char const   */* __restrict  */)((char const   *)"Max-Forwards: %u"),
                  max_forwards);
# 1419
          log_error(8, "Max forwards of %s request now %d", csp->http[0].gpc,
                    max_forwards);
          }
        } else {
          {
# 1423
          log_error(8192, "Non-intercepted %s request with Max-Forwards zero!",
                    csp->http[0].gpc);
          }
        }
      }
    }
  }
# 1428
  return (0);
}
}
# 1454
jb_err client_host(struct client_state *csp , char **header ) 
{ char *p ;
  char *q ;
  char *tmp ;

  {
# 1463
  if ((int )(*((*header) + 1)) == 79) {
    {
# 1465
    log_error(8, "Killed all-caps Host header line: %s", (*header));
    }
# 1466
    if ((*header)) {
      {
# 1466
      free((void *)(*header));
# 1466
      (*header) = (char *)((void *)0);
      }
    }
# 1467
    return (0);
  }
# 1470
  if (csp->http[0].hostport) {
# 1470
    if ((int )(*(csp->http[0].hostport)) == 42) {
      goto _L;
    } else {
# 1470
      if ((int )(*(csp->http[0].hostport)) == 32) {
        goto _L;
      } else {
# 1470
        if ((int )(*(csp->http[0].hostport)) == 0) {
          _L: 
          {
# 1474
          p = strdup((char const   *)((*header) + 6));
          }
# 1474
          if ((unsigned int )((void *)0) == (unsigned int )p) {
# 1476
            return (1);
          }
          {
# 1478
          chomp(p);
# 1479
          q = strdup((char const   *)p);
          }
# 1479
          if ((unsigned int )((void *)0) == (unsigned int )q) {
# 1481
            if (p) {
              {
# 1481
              free((void *)p);
# 1481
              p = (char *)((void *)0);
              }
            }
# 1482
            return (1);
          }
# 1485
          if (csp->http[0].hostport) {
            {
# 1485
            free((void *)csp->http[0].hostport);
# 1485
            csp->http[0].hostport = (char *)((void *)0);
            }
          }
          {
# 1486
          csp->http[0].hostport = p;
          }
# 1487
          if (csp->http[0].host) {
            {
# 1487
            free((void *)csp->http[0].host);
# 1487
            csp->http[0].host = (char *)((void *)0);
            }
          }
          {
# 1488
          csp->http[0].host = q;
# 1489
          q = strchr((char const   *)csp->http[0].host, (int )':');
          }
# 1490
          if ((unsigned int )q != (unsigned int )((void *)0)) {
            {
# 1493
            tmp = q;
# 1493
            q ++;
# 1493
            (*tmp) = '\0';
# 1494
            csp->http[0].port = atoi((char const   *)q);
            }
          } else {
# 1498
            if (csp->http[0].ssl) {
              {
# 1498
              csp->http[0].port = 443;
              }
            } else {
              {
# 1498
              csp->http[0].port = 80;
              }
            }
          }
          {
# 1501
          log_error(8, "New host and port from Host field: %s = %s:%d",
                    csp->http[0].hostport, csp->http[0].host, csp->http[0].port);
          }
        }
      }
    }
  } else {
    goto _L;
  }
# 1505
  return (0);
}
}
# 1525
jb_err client_host_adder(struct client_state *csp ) 
{ char *p ;
  jb_err err ;

  {
# 1530
  if (csp->http[0].hostport) {
# 1530
    if (! (*(csp->http[0].hostport))) {
# 1532
      return (0);
    }
  } else {
# 1532
    return (0);
  }
  {
# 1538
  p = strchr((char const   *)csp->http[0].hostport, (int )'@');
  }
# 1538
  if ((unsigned int )p != (unsigned int )((void *)0)) {
    {
# 1540
    p ++;
    }
  } else {
    {
# 1544
    p = csp->http[0].hostport;
    }
  }
  {
# 1547
  log_error(8, "addh-unique: Host: %s", p);
# 1548
  err = enlist_unique_header(csp->headers, (char const   *)"Host",
                             (char const   *)p);
  }
# 1549
  return (err);
}
}
# 1567
jb_err client_cookie_adder(struct client_state *csp ) 
{ struct list_entry *lst ;
  char *tmp ;
  struct list_entry *list1 ;
  struct list_entry *list2 ;
  int first_cookie ;
  jb_err err ;
  char *tmp___0 ;

  {
  {
# 1571
  list1 = csp->cookie_list[0].first;
# 1572
  list2 = csp->action[0].multi[1][0].first;
# 1573
  first_cookie = 1;
  }
# 1576
  if ((unsigned int )list1 == (unsigned int )((void *)0)) {
# 1576
    if ((unsigned int )list2 == (unsigned int )((void *)0)) {
# 1579
      return (0);
    }
  }
  {
# 1582
  tmp = strdup((char const   *)"Cookie: ");
# 1584
  lst = list1;
  }
# 1584
  while (lst) {
# 1586
    if (first_cookie) {
      {
# 1588
      first_cookie = 0;
      }
    } else {
      {
# 1592
      string_append(& tmp, (char const   *)"; ");
      }
    }
    {
# 1594
    string_append(& tmp, (char const   *)lst->str);
# 1584
    lst = lst->next;
    }
  }
  {
# 1597
  lst = list2;
  }
# 1597
  while (lst) {
# 1599
    if (first_cookie) {
      {
# 1601
      first_cookie = 0;
      }
    } else {
      {
# 1605
      string_append(& tmp, (char const   *)"; ");
      }
    }
    {
# 1607
    tmp___0 = cookie_encode((char const   *)lst->str);
# 1607
    string_join(& tmp, tmp___0);
# 1597
    lst = lst->next;
    }
  }
# 1610
  if ((unsigned int )tmp == (unsigned int )((void *)0)) {
# 1612
    return (1);
  }
  {
# 1615
  log_error(8, "addh: %s", tmp);
# 1616
  err = enlist(csp->headers, (char const   *)tmp);
# 1617
  free((void *)tmp);
  }
# 1618
  return (err);
}
}
# 1638
jb_err client_accept_encoding_adder(struct client_state *csp ) 
{ jb_err tmp ;
  int tmp___0 ;

  {
# 1640
  if ((csp->action[0].flags & 1024UL) != 0UL) {
    {
# 1640
    tmp___0 = strcmpic((char const   *)csp->http[0].ver,
                       (char const   *)"HTTP/1.1");
    }
# 1640
    if (! tmp___0) {
      {
# 1643
      tmp = enlist_unique(csp->headers,
                          (char const   *)"Accept-Encoding: identity;q=1.0, *;q=0",
                          16U);
      }
# 1643
      return (tmp);
    }
  }
# 1646
  return (0);
}
}
# 1663
jb_err client_xtra_adder(struct client_state *csp ) 
{ struct list_entry *lst ;
  jb_err err ;

  {
  {
# 1668
  lst = csp->action[0].multi[0][0].first;
  }
# 1668
  while (lst) {
    {
# 1671
    log_error(8, "addh: %s", lst->str);
# 1672
    err = enlist(csp->headers, (char const   *)lst->str);
    }
# 1673
    if (err) {
# 1675
      return (err);
    }
    {
# 1668
    lst = lst->next;
    }
  }
# 1680
  return (0);
}
}
# 1697
jb_err client_x_forwarded_adder(struct client_state *csp ) 
{ char *p ;
  jb_err err ;

  {
  {
# 1699
  p = (char *)((void *)0);
  }
# 1702
  if ((csp->action[0].flags & 16UL) != 0UL) {
# 1704
    return (0);
  }
# 1707
  if (csp->x_forwarded) {
    {
# 1709
    p = strdup((char const   *)csp->x_forwarded);
# 1710
    string_append(& p, (char const   *)", ");
    }
  } else {
    {
# 1714
    p = strdup((char const   *)"X-Forwarded-For: ");
    }
  }
  {
# 1716
  string_append(& p, (char const   *)csp->ip_addr_str);
  }
# 1718
  if ((unsigned int )p == (unsigned int )((void *)0)) {
# 1720
    return (1);
  }
  {
# 1723
  log_error(8, "addh: %s", p);
# 1724
  err = enlist(csp->headers, (char const   *)p);
# 1725
  free((void *)p);
  }
# 1727
  return (err);
}
}
# 1747
jb_err connection_close_adder(struct client_state *csp ) 
{ jb_err tmp ;

  {
  {
# 1749
  tmp = enlist(csp->headers, (char const   *)"Connection: close");
  }
# 1749
  return (tmp);
}
}
# 1774
jb_err server_http(struct client_state *csp , char **header ) 
{ 

  {
  {
# 1776
  sscanf((char const   */* __restrict  */)((char const   *)(*header)),
         (char const   */* __restrict  */)((char const   *)"HTTP/%*d.%*d %d"),
         & csp->http[0].status);
  }
# 1777
  if (csp->http[0].status == 206) {
    {
# 1779
    csp->content_type = (unsigned short )4;
    }
  }
# 1782
  if ((csp->action[0].flags & 4UL) != 0UL) {
    {
# 1784
    (*((*header) + 7)) = '0';
# 1785
    log_error(8, "Downgraded answer to HTTP/1.0");
    }
  }
# 1788
  return (0);
}
}
# 1811
jb_err server_set_cookie(struct client_state *csp , char **header ) 
{ char tempbuf[5000] ;
  time_t now ;
  struct tm tm_now ;
  struct tm *tmp ;
  jb_err tmp___0 ;
  int changed ;
  char *cur_tag ;
  int tmp___1 ;
  char *next_tag ;
  char *tmp___2 ;
  int tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  int tmp___6 ;

  {
# 1814
  if ((csp->config)->jar) {
    {
# 1825
    time(& now);
# 1827
    tmp = localtime_r((time_t const   */* __restrict  */)((time_t const   *)(& now)),
                      (struct tm */* __restrict  */)(& tm_now));
# 1827
    tm_now = (*tmp);
# 1835
    strftime((char */* __restrict  */)(tempbuf), 4994U,
             (char const   */* __restrict  */)((char const   *)"%b %d %H:%M:%S "),
             (struct tm  const  */* __restrict  */)((struct tm  const  *)(& tm_now)));
    {
# 80 "spec.work"
    if (! (((csp->config)->jar)->__BLAST_FLAG == 1)) {
# 82
      __error__();
    }
    {

    }
    }
# 1838 "parsers.c"
    fprintf((FILE */* __restrict  */)(csp->config)->jar,
            (char const   */* __restrict  */)((char const   *)"%s %s\t%s\n"),
            tempbuf, csp->http[0].host, (*header) + 12);
    }
  }
# 1842
  if ((csp->action[0].flags & 8192UL) != 0UL) {
    {
# 1844
    log_error(8, "Crunched incoming cookie -- yum!");
# 1845
    tmp___0 = crumble(csp, header);
    }
# 1845
    return (tmp___0);
  } else {
# 1847
    if ((csp->action[0].flags & 2048UL) != 0UL) {
      {
# 1850
      changed = 0;
# 1856
      cur_tag = (*header) + 11;
      }
# 1859
      while (1) {
# 1859
        if ((*cur_tag)) {
          {
# 1859
          tmp___1 = _get__ctype_b((int )((unsigned char )(*cur_tag)));
          }
# 1859
          if (! (tmp___1 & 8192)) {
# 1859
            break;
          }
        } else {
# 1859
          break;
        }
        {
# 1861
        cur_tag ++;
        }
      }
# 1865
      while ((*cur_tag)) {
        {
# 1868
        tmp___2 = strchr((char const   *)cur_tag, (int )';');
# 1868
        next_tag = tmp___2;
        }
# 1869
        if ((unsigned int )next_tag != (unsigned int )((void *)0)) {
          {
# 1872
          next_tag ++;
          }
# 1875
          while (1) {
# 1875
            if ((*next_tag)) {
              {
# 1875
              tmp___3 = _get__ctype_b((int )((unsigned char )(*next_tag)));
              }
# 1875
              if (! (tmp___3 & 8192)) {
# 1875
                break;
              }
            } else {
# 1875
              break;
            }
            {
# 1877
            next_tag ++;
            }
          }
        } else {
          {
# 1883
          tmp___4 = strlen((char const   *)cur_tag);
# 1883
          next_tag = cur_tag + tmp___4;
          }
        }
        {
# 1887
        tmp___6 = strncmpic((char const   *)cur_tag, (char const   *)"expires=",
                            8U);
        }
# 1887
        if (tmp___6 == 0) {
          {
# 1894
          tmp___5 = strlen((char const   *)next_tag);
# 1894
          memmove((void *)cur_tag, (void const   *)next_tag, tmp___5 + 1U);
# 1897
          changed = 1;
          }
        } else {
          {
# 1906
          cur_tag = next_tag;
          }
        }
      }
# 1910
      if (changed) {
        {
# 1912
        log_error(8, "Changed cookie to a temporary one.");
        }
      }
    }
  }
# 1916
  return (0);
}
}
# 1935
int strclean(char const   *string , char const   *substring ) 
{ int hits ;
  int len ;
  int tmp ;
  char *pos ;
  char *p ;
  char *tmp___0 ;

  {
  {
# 1937
  hits = 0;
# 1937
  tmp = (int )strlen(substring);
# 1937
  len = tmp;
  }
# 1940
  while (1) {
    {
# 1940
    pos = (char *)strstr((char const   */* __attribute__((__rostring__,
                         __nullterm__)) */)string,
                         (char const   */* __attribute__((__rostring__,
                         __nullterm__)) */)substring);
    }
# 1940
    if (! ((unsigned int )pos != (unsigned int )((void *)0))) {
# 1940
      break;
    }
    {
# 1942
    p = pos + len;
    }
# 1943
    while (1) {
      {
# 1945
      (*(p - len)) = (*p);
# 1943
      tmp___0 = p;
# 1943
      p ++;
      }
# 1943
      if (! ((int )(*tmp___0) != 0)) {
# 1943
        break;
      }
    }
    {
# 1949
    hits ++;
    }
  }
# 1952
  return (hits);
}
}
# 1 "ssplit.c"
__asm__("booo - error in global ssplit_rcs (ssplit.c:1)");
# 68
char const   ssplit_h_rcs[50]   = 
# 68
  {'$', 'I', 'd', ':', ' ', 's', 's', 'p', 'l', 'i', 't', '.', 'h', ',', 'v',
   ' ', '1', '.', '5', ' ', '2', '0', '0', '2', '/', '0', '3', '/', '2', '6',
   ' ', '2', '2', ':', '2', '9', ':', '5', '5', ' ', 's', 'w', 'a', ' ', 'E',
   'x', 'p', ' ', '$', '\0'};
# 101
int ssplit(char *str , char const   *delim , char **vec , int vec_len ,
           int dont_save_empty_fields , int ignore_leading ) 
{ unsigned char is_delim[256] ;
  unsigned char char_type ;
  int vec_count ;
  char const   *tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;

  {
  {
# 106
  vec_count = 0;
  }
# 108
  if (! str) {
# 110
    return (-1);
  }
  {
# 116
  memset((void *)(is_delim), (int )'\0', sizeof(is_delim));
  }
# 118
  if (! delim) {
    {
# 120
    delim = (char const   *)" \t";
    }
  }
# 123
  while ((*delim)) {
    {
# 125
    tmp = delim;
# 125
    delim ++;
# 125
    is_delim[(unsigned int )((unsigned char )(*tmp))] = (unsigned char )1;
    }
  }
  {
# 128
  is_delim[(unsigned int )((unsigned char )'\0')] = (unsigned char )2;
# 129
  is_delim[(unsigned int )((unsigned char )'\n')] = (unsigned char )2;
  }
# 134
  if (ignore_leading) {
# 137
    while ((int )is_delim[(unsigned int )((unsigned char )(*str))] == 1) {
      {
# 139
      str ++;
      }
    }
  }
# 145
  if (dont_save_empty_fields) {
# 145
    if ((int )is_delim[(unsigned int )((unsigned char )(*str))] == 0) {
      _L: 
# 153
      if (vec_count >= vec_len) {
# 155
        return (-1);
      }
      {
# 157
      tmp___0 = vec_count;
# 157
      vec_count ++;
# 157
      (*(vec + tmp___0)) = str;
      }
    }
  } else {
    goto _L;
  }
# 160
  while (1) {
    {
# 160
    char_type = is_delim[(unsigned int )((unsigned char )(*str))];
    }
# 160
    if (! ((int )char_type != 2)) {
# 160
      break;
    }
# 162
    if ((int )char_type == 1) {
      {
# 167
      tmp___1 = str;
# 167
      str ++;
# 167
      (*tmp___1) = '\0';
      }
# 170
      if (dont_save_empty_fields) {
# 170
        if ((int )is_delim[(unsigned int )((unsigned char )(*str))] == 0) {
          _L___0: 
# 178
          if (vec_count >= vec_len) {
# 180
            return (-1);
          }
          {
# 182
          tmp___2 = vec_count;
# 182
          vec_count ++;
# 182
          (*(vec + tmp___2)) = str;
          }
        }
      } else {
        goto _L___0;
      }
    } else {
      {
# 187
      str ++;
      }
    }
  }
  {
# 190
  (*str) = '\0';
  }
# 203
  return (vec_count);
}
}
# 1 "urlmatch.c"
__asm__("booo - error in global urlmatch_rcs (urlmatch.c:1)");
# 137
char const   urlmatch_h_rcs[52]   = 
# 137
  {'$', 'I', 'd', ':', ' ', 'u', 'r', 'l', 'm', 'a', 't', 'c', 'h', '.', 'h',
   ',', 'v', ' ', '1', '.', '3', ' ', '2', '0', '0', '2', '/', '0', '3', '/',
   '2', '6', ' ', '2', '2', ':', '2', '9', ':', '5', '5', ' ', 's', 'w', 'a',
   ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 152
void free_http_request(struct http_request *http ) 
{ 

  {
# 154
  if (! http) {
    {
# 154
    __assert_fail((char const   *)"http", (char const   *)"urlmatch.c", 154U,
                  (char const   *)"free_http_request");
    }
  }
# 156
  if (http->cmd) {
    {
# 156
    free((void *)http->cmd);
# 156
    http->cmd = (char *)((void *)0);
    }
  }
# 157
  if (http->ocmd) {
    {
# 157
    free((void *)http->ocmd);
# 157
    http->ocmd = (char *)((void *)0);
    }
  }
# 158
  if (http->gpc) {
    {
# 158
    free((void *)http->gpc);
# 158
    http->gpc = (char *)((void *)0);
    }
  }
# 159
  if (http->host) {
    {
# 159
    free((void *)http->host);
# 159
    http->host = (char *)((void *)0);
    }
  }
# 160
  if (http->url) {
    {
# 160
    free((void *)http->url);
# 160
    http->url = (char *)((void *)0);
    }
  }
# 161
  if (http->hostport) {
    {
# 161
    free((void *)http->hostport);
# 161
    http->hostport = (char *)((void *)0);
    }
  }
# 162
  if (http->path) {
    {
# 162
    free((void *)http->path);
# 162
    http->path = (char *)((void *)0);
    }
  }
# 163
  if (http->ver) {
    {
# 163
    free((void *)http->ver);
# 163
    http->ver = (char *)((void *)0);
    }
  }
# 164
  if (http->host_ip_addr_str) {
    {
# 164
    free((void *)http->host_ip_addr_str);
# 164
    http->host_ip_addr_str = (char *)((void *)0);
    }
  }
# 165
  if (http->dbuffer) {
    {
# 165
    free((void *)http->dbuffer);
# 165
    http->dbuffer = (char *)((void *)0);
    }
  }
# 166
  if (http->dvec) {
    {
# 166
    free((void *)http->dvec);
# 166
    http->dvec = (char **)((void *)0);
    }
  }
  {
# 167
  http->dcount = 0;
  }
# 168
  return;
}
}
# 192
jb_err parse_http_url(char const   *url , struct http_request *http ,
                      struct client_state *csp ) 
{ char *buf ;
  char *url_noproto ;
  char *url_path ;
  int tmp ;
  int tmp___0 ;
  char const   *tmp___1 ;
  char *buf___0 ;
  char *host ;
  char *port ;
  char *tmp___2 ;
  char *vec[5000] ;
  size_t size ;
  char *p ;

  {
  {
# 199
  memset((void *)http, (int )'\0', sizeof((*http)));
# 205
  http->url = strdup(url);
  }
# 206
  if ((unsigned int )http->url == (unsigned int )((void *)0)) {
# 208
    return (1);
  }
# 215
  if ((int )(*(http->url)) == 42) {
    {
# 217
    http->path = strdup((char const   *)"*");
    }
# 217
    if ((unsigned int )((void *)0) == (unsigned int )http->path) {
# 220
      return (1);
    } else {
      {
# 217
      http->hostport = strdup((char const   *)"");
      }
# 217
      if ((unsigned int )((void *)0) == (unsigned int )http->hostport) {
# 220
        return (1);
      }
    }
# 222
    if ((int )(*(http->url + 1)) != 0) {
# 224
      return (4);
    }
# 226
    return (0);
  }
  {
# 238
  buf = strdup(url);
  }
# 239
  if ((unsigned int )buf == (unsigned int )((void *)0)) {
# 241
    return (1);
  }
  {
# 245
  url_noproto = buf;
# 246
  tmp___0 = strncmpic((char const   *)url_noproto, (char const   *)"http://", 7U);
  }
# 246
  if (tmp___0 == 0) {
    {
# 248
    url_noproto += 7;
# 249
    http->ssl = 0;
    }
  } else {
    {
# 251
    tmp = strncmpic((char const   *)url_noproto, (char const   *)"https://", 8U);
    }
# 251
    if (tmp == 0) {
      {
# 253
      url_noproto += 8;
# 254
      http->ssl = 1;
      }
    } else {
      {
# 258
      http->ssl = 0;
      }
    }
  }
  {
# 261
  url_path = strchr((char const   *)url_noproto, (int )'/');
  }
# 262
  if ((unsigned int )url_path != (unsigned int )((void *)0)) {
# 272
    if (http->ssl) {
      {
# 272
      tmp___1 = (char const   *)"/";
      }
    } else {
      {
# 272
      tmp___1 = (char const   *)url_path;
      }
    }
    {
# 272
    http->path = strdup(tmp___1);
# 273
    (*url_path) = '\0';
# 274
    http->hostport = strdup((char const   *)url_noproto);
    }
  } else {
    {
# 282
    http->path = strdup((char const   *)"/");
# 283
    http->hostport = strdup((char const   *)url_noproto);
    }
  }
# 286
  if (buf) {
    {
# 286
    free((void *)buf);
# 286
    buf = (char *)((void *)0);
    }
  }
# 288
  if ((unsigned int )http->path == (unsigned int )((void *)0)) {
# 291
    return (1);
  } else {
# 288
    if ((unsigned int )http->hostport == (unsigned int )((void *)0)) {
# 291
      return (1);
    }
  }
  {
# 304
  buf___0 = strdup((char const   *)http->hostport);
  }
# 305
  if ((unsigned int )buf___0 == (unsigned int )((void *)0)) {
# 307
    return (1);
  }
  {
# 311
  host = strchr((char const   *)buf___0, (int )'@');
  }
# 312
  if ((unsigned int )host != (unsigned int )((void *)0)) {
    {
# 315
    host ++;
    }
  } else {
    {
# 320
    host = buf___0;
    }
  }
  {
# 324
  port = strchr((char const   *)host, (int )':');
  }
# 325
  if ((unsigned int )port != (unsigned int )((void *)0)) {
    {
# 329
    tmp___2 = port;
# 329
    port ++;
# 329
    (*tmp___2) = '\0';
# 330
    http->port = atoi((char const   *)port);
    }
  } else {
# 335
    if (http->ssl) {
      {
# 335
      http->port = 443;
      }
    } else {
      {
# 335
      http->port = 80;
      }
    }
  }
  {
# 338
  http->host = strdup((char const   *)host);
# 340
  free((void *)buf___0);
  }
# 342
  if ((unsigned int )http->host == (unsigned int )((void *)0)) {
# 344
    return (1);
  }
  {
# 357
  http->dbuffer = strdup((char const   *)http->host);
  }
# 358
  if ((unsigned int )((void *)0) == (unsigned int )http->dbuffer) {
# 360
    return (1);
  }
  {
# 364
  p = http->dbuffer;
  }
# 364
  while ((*p)) {
    {
# 366
    (*p) = (char )tolower((int )((unsigned char )(*p)));
# 364
    p ++;
    }
  }
  {
# 370
  http->dcount = ssplit(http->dbuffer, (char const   *)".", vec,
                        (int )(sizeof(vec) / sizeof(vec[0])), 1, 1);
  }
# 372
  if (http->dcount <= 0) {
# 378
    return (4);
  }
  {
# 382
  size = (unsigned int )http->dcount * sizeof((*(http->dvec)));
# 384
  http->dvec = (char **)malloc(size);
  }
# 385
  if ((unsigned int )((void *)0) == (unsigned int )http->dvec) {
# 387
    return (1);
  }
  {
# 390
  memcpy((void */* __restrict  */)((void *)http->dvec),
         (void const   */* __restrict  */)((void const   *)(vec)), size);
  }
# 393
  return (0);
}
}
# 416
jb_err parse_http_request(char const   *req , struct http_request *http ,
                          struct client_state *csp ) 
{ char *buf ;
  char *v[10] ;
  int n ;
  jb_err err ;
  int is_connect ;
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

  {
  {
# 424
  is_connect = 0;
# 426
  memset((void *)http, (int )'\0', sizeof((*http)));
# 428
  buf = strdup(req);
  }
# 429
  if ((unsigned int )buf == (unsigned int )((void *)0)) {
# 431
    return (1);
  }
  {
# 434
  n = ssplit(buf, (char const   *)" \r\n", v, (int )(sizeof(v) / sizeof(v[0])),
             1, 1);
  }
# 435
  if (n != 3) {
    {
# 437
    free((void *)buf);
    }
# 438
    return (4);
  }
  {
# 442
  tmp___22 = strcmpic((char const   *)v[0], (char const   *)"connect");
  }
# 442
  if (tmp___22 == 0) {
    {
# 445
    is_connect = 1;
    }
  } else {
    {
# 448
    tmp = strcmpic((char const   *)v[0], (char const   *)"get");
    }
# 448
    if (0 == tmp) {
      {
# 485
      is_connect = 0;
      }
    } else {
      {
# 448
      tmp___0 = strcmpic((char const   *)v[0], (char const   *)"head");
      }
# 448
      if (0 == tmp___0) {
        {
# 485
        is_connect = 0;
        }
      } else {
        {
# 448
        tmp___1 = strcmpic((char const   *)v[0], (char const   *)"post");
        }
# 448
        if (0 == tmp___1) {
          {
# 485
          is_connect = 0;
          }
        } else {
          {
# 448
          tmp___2 = strcmpic((char const   *)v[0], (char const   *)"put");
          }
# 448
          if (0 == tmp___2) {
            {
# 485
            is_connect = 0;
            }
          } else {
            {
# 448
            tmp___3 = strcmpic((char const   *)v[0], (char const   *)"delete");
            }
# 448
            if (0 == tmp___3) {
              {
# 485
              is_connect = 0;
              }
            } else {
              {
# 448
              tmp___4 = strcmpic((char const   *)v[0], (char const   *)"options");
              }
# 448
              if (0 == tmp___4) {
                {
# 485
                is_connect = 0;
                }
              } else {
                {
# 448
                tmp___5 = strcmpic((char const   *)v[0], (char const   *)"trace");
                }
# 448
                if (0 == tmp___5) {
                  {
# 485
                  is_connect = 0;
                  }
                } else {
                  {
# 448
                  tmp___6 = strcmpic((char const   *)v[0],
                                     (char const   *)"propfind");
                  }
# 448
                  if (0 == tmp___6) {
                    {
# 485
                    is_connect = 0;
                    }
                  } else {
                    {
# 448
                    tmp___7 = strcmpic((char const   *)v[0],
                                       (char const   *)"proppatch");
                    }
# 448
                    if (0 == tmp___7) {
                      {
# 485
                      is_connect = 0;
                      }
                    } else {
                      {
# 448
                      tmp___8 = strcmpic((char const   *)v[0],
                                         (char const   *)"move");
                      }
# 448
                      if (0 == tmp___8) {
                        {
# 485
                        is_connect = 0;
                        }
                      } else {
                        {
# 448
                        tmp___9 = strcmpic((char const   *)v[0],
                                           (char const   *)"copy");
                        }
# 448
                        if (0 == tmp___9) {
                          {
# 485
                          is_connect = 0;
                          }
                        } else {
                          {
# 448
                          tmp___10 = strcmpic((char const   *)v[0],
                                              (char const   *)"mkcol");
                          }
# 448
                          if (0 == tmp___10) {
                            {
# 485
                            is_connect = 0;
                            }
                          } else {
                            {
# 448
                            tmp___11 = strcmpic((char const   *)v[0],
                                                (char const   *)"lock");
                            }
# 448
                            if (0 == tmp___11) {
                              {
# 485
                              is_connect = 0;
                              }
                            } else {
                              {
# 448
                              tmp___12 = strcmpic((char const   *)v[0],
                                                  (char const   *)"unlock");
                              }
# 448
                              if (0 == tmp___12) {
                                {
# 485
                                is_connect = 0;
                                }
                              } else {
                                {
# 448
                                tmp___13 = strcmpic((char const   *)v[0],
                                                    (char const   *)"bcopy");
                                }
# 448
                                if (0 == tmp___13) {
                                  {
# 485
                                  is_connect = 0;
                                  }
                                } else {
                                  {
# 448
                                  tmp___14 = strcmpic((char const   *)v[0],
                                                      (char const   *)"bmove");
                                  }
# 448
                                  if (0 == tmp___14) {
                                    {
# 485
                                    is_connect = 0;
                                    }
                                  } else {
                                    {
# 448
                                    tmp___15 = strcmpic((char const   *)v[0],
                                                        (char const   *)"bdelete");
                                    }
# 448
                                    if (0 == tmp___15) {
                                      {
# 485
                                      is_connect = 0;
                                      }
                                    } else {
                                      {
# 448
                                      tmp___16 = strcmpic((char const   *)v[0],
                                                          (char const   *)"bpropfind");
                                      }
# 448
                                      if (0 == tmp___16) {
                                        {
# 485
                                        is_connect = 0;
                                        }
                                      } else {
                                        {
# 448
                                        tmp___17 = strcmpic((char const   *)v[0],
                                                            (char const   *)"bproppatch");
                                        }
# 448
                                        if (0 == tmp___17) {
                                          {
# 485
                                          is_connect = 0;
                                          }
                                        } else {
                                          {
# 448
                                          tmp___18 = strcmpic((char const   *)v[0],
                                                              (char const   *)"subscribe");
                                          }
# 448
                                          if (0 == tmp___18) {
                                            {
# 485
                                            is_connect = 0;
                                            }
                                          } else {
                                            {
# 448
                                            tmp___19 = strcmpic((char const   *)v[0],
                                                                (char const   *)"unsubscribe");
                                            }
# 448
                                            if (0 == tmp___19) {
                                              {
# 485
                                              is_connect = 0;
                                              }
                                            } else {
                                              {
# 448
                                              tmp___20 = strcmpic((char const   *)v[0],
                                                                  (char const   *)"notify");
                                              }
# 448
                                              if (0 == tmp___20) {
                                                {
# 485
                                                is_connect = 0;
                                                }
                                              } else {
                                                {
# 448
                                                tmp___21 = strcmpic((char const   *)v[0],
                                                                    (char const   *)"poll");
                                                }
# 448
                                                if (0 == tmp___21) {
                                                  {
# 485
                                                  is_connect = 0;
                                                  }
                                                } else {
                                                  {
# 490
                                                  free((void *)buf);
                                                  }
# 491
                                                  return (4);
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
    }
  }
  {
# 494
  err = parse_http_url((char const   *)v[1], http, csp);
  }
# 495
  if (err) {
    {
# 497
    free((void *)buf);
    }
# 498
    return (err);
  }
  {
# 504
  http->ssl = is_connect;
# 505
  http->cmd = strdup(req);
# 506
  http->gpc = strdup((char const   *)v[0]);
# 507
  http->ver = strdup((char const   *)v[2]);
  }
# 509
  if ((unsigned int )http->cmd == (unsigned int )((void *)0)) {
    {
# 513
    free((void *)buf);
    }
# 514
    return (1);
  } else {
# 509
    if ((unsigned int )http->gpc == (unsigned int )((void *)0)) {
      {
# 513
      free((void *)buf);
      }
# 514
      return (1);
    } else {
# 509
      if ((unsigned int )http->ver == (unsigned int )((void *)0)) {
        {
# 513
        free((void *)buf);
        }
# 514
        return (1);
      }
    }
  }
  {
# 517
  free((void *)buf);
  }
# 518
  return (0);
}
}
# 542
static int simple_domaincmp(char **pv , char **fv , int len ) 
{ int n ;
  int tmp ;

  {
  {
# 546
  n = 0;
  }
# 546
  while (n < len) {
    {
# 548
    tmp = simplematch((*(pv + n)), (*(fv + n)));
    }
# 548
    if (tmp) {
# 550
      return (1);
    }
    {
# 546
    n ++;
    }
  }
# 554
  return (0);
}
}
# 576
static int domain_match(struct url_spec  const  *pattern ,
                        struct http_request  const  *fqdn ) 
{ char **pv ;
  char **fv ;
  int plen ;
  int flen ;
  int unanchored ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int n ;
  int maxn ;
  int tmp___2 ;

  {
  {
# 580
  unanchored = pattern->unanchored & 3;
# 582
  plen = pattern->dcount;
# 583
  flen = fqdn->dcount;
  }
# 585
  if (flen < plen) {
# 588
    return (1);
  }
  {
# 591
  pv = pattern->dvec;
# 592
  fv = fqdn->dvec;
  }
# 594
  if (unanchored == 1) {
    {
# 602
    fv += flen - plen;
# 603
    tmp = simple_domaincmp(pv, fv, plen);
    }
# 603
    return (tmp);
  } else {
# 605
    if (unanchored == 0) {
# 608
      if (flen != plen) {
# 610
        return (1);
      }
      {
# 612
      tmp___0 = simple_domaincmp(pv, fv, plen);
      }
# 612
      return (tmp___0);
    } else {
# 614
      if (unanchored == 2) {
        {
# 617
        tmp___1 = simple_domaincmp(pv, fv, plen);
        }
# 617
        return (tmp___1);
      } else {
        {
# 623
        maxn = flen - plen;
# 624
        n = 0;
        }
# 624
        while (n <= maxn) {
          {
# 626
          tmp___2 = simple_domaincmp(pv, fv, plen);
          }
# 626
          if (! tmp___2) {
# 628
            return (0);
          }
          {
# 634
          fv ++;
# 624
          n ++;
          }
        }
# 636
        return (1);
      }
    }
  }
}
}
# 665
jb_err create_url_spec(struct url_spec *url , char const   *buf ) 
{ char *p ;
  int errcode ;
  char rebuf[5000] ;
  size_t errlen ;
  size_t tmp ;
  char *tmp___0 ;
  char *v[150] ;
  size_t size ;
  size_t tmp___1 ;

  {
# 669
  if (! url) {
    {
# 669
    __assert_fail((char const   *)"url", (char const   *)"urlmatch.c", 669U,
                  (char const   *)"create_url_spec");
    }
  }
# 670
  if (! buf) {
    {
# 670
    __assert_fail((char const   *)"buf", (char const   *)"urlmatch.c", 670U,
                  (char const   *)"create_url_spec");
    }
  }
  {
# 675
  memset((void *)url, (int )'\0', sizeof((*url)));
# 680
  url->spec = strdup(buf);
  }
# 680
  if ((unsigned int )url->spec == (unsigned int )((void *)0)) {
# 682
    return (1);
  }
  {
# 685
  p = strchr(buf, (int )'/');
  }
# 685
  if ((unsigned int )p != (unsigned int )((void *)0)) {
    {
# 687
    url->path = strdup((char const   *)p);
    }
# 687
    if ((unsigned int )((void *)0) == (unsigned int )url->path) {
# 689
      if (url->spec) {
        {
# 689
        free((void *)url->spec);
# 689
        url->spec = (char *)((void *)0);
        }
      }
# 690
      return (1);
    }
    {
# 692
    url->pathlen = (int )strlen((char const   *)url->path);
# 693
    (*p) = '\0';
    }
  } else {
    {
# 697
    url->path = (char *)((void *)0);
# 698
    url->pathlen = 0;
    }
  }
# 700
  if (url->path) {
    {
# 705
    url->preg = (regex_t *)zalloc(sizeof((*(url->preg))));
    }
# 705
    if ((unsigned int )((void *)0) == (unsigned int )url->preg) {
# 707
      if (url->spec) {
        {
# 707
        free((void *)url->spec);
# 707
        url->spec = (char *)((void *)0);
        }
      }
# 708
      if (url->path) {
        {
# 708
        free((void *)url->path);
# 708
        url->path = (char *)((void *)0);
        }
      }
# 709
      return (1);
    }
    {
# 712
    sprintf((char */* __restrict  */)(rebuf),
            (char const   */* __restrict  */)((char const   *)"^(%s)"),
            url->path);
# 714
    errcode = regcomp(url->preg, (char const   *)(rebuf), 1);
    }
# 716
    if (errcode) {
      {
# 718
      tmp = regerror(errcode, (regex_t const   *)url->preg, rebuf, sizeof(rebuf));
# 718
      errlen = tmp;
      }
# 721
      if (errlen > sizeof(rebuf) - 1U) {
        {
# 723
        errlen = sizeof(rebuf) - 1U;
        }
      }
      {
# 725
      rebuf[errlen] = '\0';
# 727
      log_error(8192, "error compiling %s: %s", url->spec, rebuf);
      }
# 730
      if (url->spec) {
        {
# 730
        free((void *)url->spec);
# 730
        url->spec = (char *)((void *)0);
        }
      }
# 731
      if (url->path) {
        {
# 731
        free((void *)url->path);
# 731
        url->path = (char *)((void *)0);
        }
      }
      {
# 732
      regfree(url->preg);
      }
# 733
      if (url->preg) {
        {
# 733
        free((void *)url->preg);
# 733
        url->preg = (regex_t *)((void *)0);
        }
      }
# 735
      return (4);
    }
  }
  {
# 738
  p = strchr(buf, (int )':');
  }
# 738
  if ((unsigned int )p == (unsigned int )((void *)0)) {
    {
# 740
    url->port = 0;
    }
  } else {
    {
# 744
    tmp___0 = p;
# 744
    p ++;
# 744
    (*tmp___0) = '\0';
# 745
    url->port = atoi((char const   *)p);
    }
  }
# 748
  if ((int const   )(*(buf + 0)) != 0) {
    {
# 756
    tmp___1 = strlen(buf);
    }
# 756
    if ((int const   )(*(buf + (tmp___1 - 1U))) == 46) {
      {
# 758
      url->unanchored = url->unanchored | 2;
      }
    }
# 760
    if ((int const   )(*(buf + 0)) == 46) {
      {
# 762
      url->unanchored = url->unanchored | 1;
      }
    }
    {
# 768
    url->dbuffer = strdup(buf);
    }
# 769
    if ((unsigned int )((void *)0) == (unsigned int )url->dbuffer) {
# 771
      if (url->spec) {
        {
# 771
        free((void *)url->spec);
# 771
        url->spec = (char *)((void *)0);
        }
      }
# 772
      if (url->path) {
        {
# 772
        free((void *)url->path);
# 772
        url->path = (char *)((void *)0);
        }
      }
      {
# 773
      regfree(url->preg);
      }
# 774
      if (url->preg) {
        {
# 774
        free((void *)url->preg);
# 774
        url->preg = (regex_t *)((void *)0);
        }
      }
# 775
      return (1);
    }
    {
# 781
    p = url->dbuffer;
    }
# 781
    while ((*p)) {
      {
# 783
      (*p) = (char )tolower((int )((unsigned char )(*p)));
# 781
      p ++;
      }
    }
    {
# 789
    url->dcount = ssplit(url->dbuffer, (char const   *)".", v,
                         (int )(sizeof(v) / sizeof(v[0])), 1, 1);
    }
# 791
    if (url->dcount < 0) {
# 793
      if (url->spec) {
        {
# 793
        free((void *)url->spec);
# 793
        url->spec = (char *)((void *)0);
        }
      }
# 794
      if (url->path) {
        {
# 794
        free((void *)url->path);
# 794
        url->path = (char *)((void *)0);
        }
      }
      {
# 795
      regfree(url->preg);
      }
# 796
      if (url->preg) {
        {
# 796
        free((void *)url->preg);
# 796
        url->preg = (regex_t *)((void *)0);
        }
      }
# 797
      if (url->dbuffer) {
        {
# 797
        free((void *)url->dbuffer);
# 797
        url->dbuffer = (char *)((void *)0);
        }
      }
      {
# 798
      url->dcount = 0;
      }
# 799
      return (1);
    } else {
# 801
      if (url->dcount != 0) {
        {
# 807
        size = (unsigned int )url->dcount * sizeof((*(url->dvec)));
# 809
        url->dvec = (char **)malloc(size);
        }
# 810
        if ((unsigned int )((void *)0) == (unsigned int )url->dvec) {
# 812
          if (url->spec) {
            {
# 812
            free((void *)url->spec);
# 812
            url->spec = (char *)((void *)0);
            }
          }
# 813
          if (url->path) {
            {
# 813
            free((void *)url->path);
# 813
            url->path = (char *)((void *)0);
            }
          }
          {
# 814
          regfree(url->preg);
          }
# 815
          if (url->preg) {
            {
# 815
            free((void *)url->preg);
# 815
            url->preg = (regex_t *)((void *)0);
            }
          }
# 816
          if (url->dbuffer) {
            {
# 816
            free((void *)url->dbuffer);
# 816
            url->dbuffer = (char *)((void *)0);
            }
          }
          {
# 817
          url->dcount = 0;
          }
# 818
          return (1);
        }
        {
# 821
        memcpy((void */* __restrict  */)((void *)url->dvec),
               (void const   */* __restrict  */)((void const   *)(v)), size);
        }
      }
    }
  }
# 830
  return (0);
}
}
# 848
void free_url_spec(struct url_spec *url ) 
{ 

  {
# 850
  if ((unsigned int )url == (unsigned int )((void *)0)) {
# 850
    return;
  }
# 852
  if (url->spec) {
    {
# 852
    free((void *)url->spec);
# 852
    url->spec = (char *)((void *)0);
    }
  }
# 853
  if (url->dbuffer) {
    {
# 853
    free((void *)url->dbuffer);
# 853
    url->dbuffer = (char *)((void *)0);
    }
  }
# 854
  if (url->dvec) {
    {
# 854
    free((void *)url->dvec);
# 854
    url->dvec = (char **)((void *)0);
    }
  }
# 855
  if (url->path) {
    {
# 855
    free((void *)url->path);
# 855
    url->path = (char *)((void *)0);
    }
  }
# 856
  if (url->preg) {
    {
# 858
    regfree(url->preg);
    }
# 859
    if (url->preg) {
      {
# 859
      free((void *)url->preg);
# 859
      url->preg = (regex_t *)((void *)0);
      }
    }
  }
# 861
  return;
}
}
# 877
int url_match(struct url_spec  const  *pattern ,
              struct http_request  const  *url ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
# 880
  if (pattern->port == 0) {
    goto _L___0;
  } else {
# 880
    if (pattern->port == url->port) {
      _L___0: 
# 880
      if ((unsigned int )pattern->dbuffer == (unsigned int )((void *)0)) {
        goto _L;
      } else {
        {
# 880
        tmp = domain_match(pattern, url);
        }
# 880
        if (tmp == 0) {
          _L: 
# 880
          if ((unsigned int )pattern->path == (unsigned int )((void *)0)) {
            {
# 880
            tmp___1 = 1;
            }
          } else {
            {
# 880
            tmp___0 = regexec(pattern->preg, (char const   *)url->path, 0U,
                              (regmatch_t *)((void *)0), 0);
            }
# 880
            if (tmp___0 == 0) {
              {
# 880
              tmp___1 = 1;
              }
            } else {
              {
# 880
              tmp___1 = 0;
              }
            }
          }
        } else {
          {
# 880
          tmp___1 = 0;
          }
        }
      }
    } else {
      {
# 880
      tmp___1 = 0;
      }
    }
  }
# 880
  return (tmp___1);
}
}
# 1 "pcrs.c"
char const   pcrs_rcs[53]   = 
# 1
  {'$', 'I', 'd', ':', ' ', 'p', 'c', 'r', 's', '.', 'c', ',', 'v', ' ', '1',
   '.', '1', '9', '.', '2', '.', '3', ' ', '2', '0', '0', '3', '/', '1', '2',
   '/', '0', '4', ' ', '1', '2', ':', '3', '2', ':', '4', '5', ' ', 'o', 'e',
   's', ' ', 'E', 'x', 'p', ' ', '$', '\0'};
# 155
char const   pcrs_h_rcs[49]   = 
# 155
  {'$', 'I', 'd', ':', ' ', 'p', 'c', 'r', 's', '.', 'h', ',', 'v', ' ', '1',
   '.', '1', '1', ' ', '2', '0', '0', '2', '/', '0', '3', '/', '0', '8', ' ',
   '1', '4', ':', '1', '8', ':', '2', '3', ' ', 'o', 'e', 's', ' ', 'E', 'x',
   'p', ' ', '$', '\0'};
# 161
static int pcrs_parse_perl_options(char const   *optstring , int *flags ) ;
# 162
static pcrs_substitute *pcrs_compile_replacement(char const   *replacement ,
                                                 int trivialflag ,
                                                 int capturecount , int *errptr ) ;
# 177
char const   *pcrs_strerror(int error ) 
{ 

  {
# 179
  if (error < 0) {
# 181
    switch (error) {
    case -6: 
    {

    }
# 184
    return ((char const   *)"(pcre:) No memory");
    case -2: 
    {

    }
# 187
    return ((char const   *)"(pcre:) NULL code or subject or ovector");
    case -3: 
    {

    }
# 188
    return ((char const   *)"(pcre:) Unrecognized option bit");
    case -4: 
    {

    }
# 189
    return ((char const   *)"(pcre:) Bad magic number in code");
    case -5: 
    {

    }
# 190
    return ((char const   *)"(pcre:) Bad node in pattern");
    case -7: 
    {

    }
# 193
    return ((char const   *)"(pcre:) Fire in power supply");
    case -1: 
    {

    }
# 194
    return ((char const   *)"(pcre:) Water in power supply");
    case -10: 
    {

    }
# 197
    return ((char const   *)"(pcrs:) No memory");
    case -11: 
    {

    }
# 198
    return ((char const   *)"(pcrs:) Syntax error while parsing command");
    case -12: 
    {

    }
# 199
    return ((char const   *)"(pcrs:) PCRE error while studying the pattern");
    case -13: 
    {

    }
# 200
    return ((char const   *)"(pcrs:) Bad job - NULL job, pattern or substitute");
    case -14: 
    {

    }
# 201
    return ((char const   *)"(pcrs:) Backreference out of range");
    default: 
    {

    }
# 204
    return ((char const   *)"Unknown error");
    }
  }
# 208
  return ((char const   *)"(pcrs:) Everything\'s just fine. Thanks for asking.");
}
}
# 232
static int pcrs_parse_perl_options(char const   *optstring , int *flags ) 
{ size_t i ;
  int rc ;
  size_t tmp ;

  {
  {
# 235
  rc = 0;
# 236
  (*flags) = 0;
  }
# 238
  if ((unsigned int )((void *)0) == (unsigned int )optstring) {
# 238
    return (0);
  }
  {
# 240
  i = 0U;
  }
# 240
  while (1) {
    {
# 240
    tmp = strlen(optstring);
    }
# 240
    if (! (i < tmp)) {
# 240
      break;
    }
# 242
    switch ((int )(*(optstring + i))) {
    case 101: 
    {

    }
# 244
    break;
    case 103: 
    {
# 245
    (*flags) |= 1;
    }
# 245
    break;
    case 105: 
    {
# 246
    rc |= 1;
    }
# 246
    break;
    case 109: 
    {
# 247
    rc |= 2;
    }
# 247
    break;
    case 111: 
    {

    }
# 248
    break;
    case 115: 
    {
# 249
    rc |= 4;
    }
# 249
    break;
    case 120: 
    {
# 250
    rc |= 8;
    }
# 250
    break;
    case 85: 
    {
# 251
    rc |= 512;
    }
# 251
    break;
    case 84: 
    {
# 252
    (*flags) |= 2;
    }
# 252
    break;
    default: 
    {

    }
# 253
    break;
    }
    {
# 240
    i ++;
    }
  }
# 256
  return (rc);
}
}
# 285
static pcrs_substitute *pcrs_compile_replacement(char const   *replacement ,
                                                 int trivialflag ,
                                                 int capturecount , int *errptr ) 
{ int i ;
  int k ;
  int l ;
  int quoted ;
  size_t length ;
  char *text ;
  pcrs_substitute *r ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  char *tmp___10 ;
  char *symbol ;
  char symbols[5] ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;

  {
  {
# 292
  quoted = 0;
# 292
  l = quoted;
# 292
  k = l;
# 292
  i = k;
  }
# 297
  if ((unsigned int )((void *)0) == (unsigned int )replacement) {
    {
# 299
    replacement = (char const   *)"";
    }
  }
  {
# 305
  r = (pcrs_substitute *)malloc(sizeof(pcrs_substitute ));
  }
# 305
  if ((unsigned int )((void *)0) == (unsigned int )r) {
    {
# 307
    (*errptr) = -10;
    }
# 308
    return ((pcrs_substitute *)((void *)0));
  }
  {
# 310
  memset((void *)r, (int )'\0', sizeof(pcrs_substitute ));
# 312
  length = strlen(replacement);
# 314
  text = (char *)malloc(length + 1U);
  }
# 314
  if ((unsigned int )((void *)0) == (unsigned int )text) {
    {
# 316
    free((void *)r);
# 317
    (*errptr) = -10;
    }
# 318
    return ((pcrs_substitute *)((void *)0));
  }
  {
# 320
  memset((void *)text, (int )'\0', length + 1U);
  }
# 326
  if (trivialflag) {
    {
# 328
    text = strncpy((char */* __restrict  */)text,
                   (char const   */* __restrict  */)replacement, length + 1U);
# 329
    k = (int )length;
    }
  } else {
# 337
    while (i < (int )length) {
# 340
      if ((int const   )(*(replacement + i)) == 92) {
# 342
        if (quoted) {
          {
# 344
          tmp___1 = k;
# 344
          k ++;
# 344
          tmp___2 = i;
# 344
          i ++;
# 344
          (*(text + tmp___1)) = (*(replacement + tmp___2));
# 345
          quoted = 0;
          }
        } else {
# 349
          if ((*(replacement + (i + 1)))) {
            {
# 349
            tmp___10 = strchr((char const   *)"tnrfae0",
                              (int )(*(replacement + (i + 1))));
            }
# 349
            if (tmp___10) {
              {
# 351
              i ++;
              }
# 351
              switch ((int )(*(replacement + i))) {
              case 116: 
              {
# 354
              tmp___3 = k;
# 354
              k ++;
# 354
              (*(text + tmp___3)) = '\t';
              }
# 355
              break;
              case 110: 
              {
# 357
              tmp___4 = k;
# 357
              k ++;
# 357
              (*(text + tmp___4)) = '\n';
              }
# 358
              break;
              case 114: 
              {
# 360
              tmp___5 = k;
# 360
              k ++;
# 360
              (*(text + tmp___5)) = '\r';
              }
# 361
              break;
              case 102: 
              {
# 363
              tmp___6 = k;
# 363
              k ++;
# 363
              (*(text + tmp___6)) = '\014';
              }
# 364
              break;
              case 97: 
              {
# 366
              tmp___7 = k;
# 366
              k ++;
# 366
              (*(text + tmp___7)) = (char )7;
              }
# 367
              break;
              case 101: 
              {
# 369
              tmp___8 = k;
# 369
              k ++;
# 369
              (*(text + tmp___8)) = (char )27;
              }
# 370
              break;
              case 48: 
              {
# 372
              tmp___9 = k;
# 372
              k ++;
# 372
              (*(text + tmp___9)) = '\0';
              }
# 373
              break;
              }
              {
# 375
              i ++;
              }
            } else {
              {
# 379
              quoted = 1;
# 380
              i ++;
              }
            }
          } else {
            {
# 379
            quoted = 1;
# 380
            i ++;
            }
          }
        }
# 383
        continue;
      }
# 387
      if ((int const   )(*(replacement + i)) == 36) {
# 387
        if (! quoted) {
# 387
          if (i < (int )(length - 1U)) {
            {
# 389
            symbols[0] = '\'';
# 389
            symbols[1] = '`';
# 389
            symbols[2] = '+';
# 389
            symbols[3] = '&';
# 389
            symbols[4] = '\0';
# 390
            r->block_length[l] = (unsigned int )(k - r->block_offset[l]);
# 393
            tmp___12 = _get__ctype_b((int )(*(replacement + (i + 1))));
            }
# 393
            if (tmp___12 & 2048) {
# 395
              while (1) {
# 395
                if (i < (int )length) {
                  {
# 395
                  i ++;
# 395
                  tmp___11 = _get__ctype_b((int )(*(replacement + i)));
                  }
# 395
                  if (! (tmp___11 & 2048)) {
# 395
                    break;
                  }
                } else {
# 395
                  break;
                }
                {
# 397
                r->backref[l] = (r->backref[l] * 10 + (int )(*(replacement + i))) -
                                48;
                }
              }
# 399
              if (r->backref[l] > capturecount) {
                {
# 401
                (*errptr) = -14;
                }
              }
            } else {
              {
# 406
              symbol = strchr((char const   *)(symbols),
                              (int )(*(replacement + (i + 1))));
              }
# 406
              if ((unsigned int )((void *)0) != (unsigned int )symbol) {
# 409
                if (symbol - symbols == 2) {
                  {
# 411
                  r->backref[l] = capturecount;
                  }
                } else {
# 413
                  if (symbol - symbols == 3) {
                    {
# 415
                    r->backref[l] = 0;
                    }
                  } else {
                    {
# 419
                    r->backref[l] = 34 - (symbol - symbols);
                    }
                  }
                }
                {
# 421
                i += 2;
                }
              } else {
                goto plainchar;
              }
            }
# 431
            if (r->backref[l] < 35) {
              {
# 433
              r->backref_count[r->backref[l]] = r->backref_count[r->backref[l]] +
                                                1;
# 434
              l ++;
# 434
              r->block_offset[l] = k;
              }
            } else {
              {
# 438
              (*errptr) = -14;
              }
            }
# 440
            continue;
          }
        }
      }
      plainchar: 
      {
# 445
      tmp___13 = k;
# 445
      k ++;
# 445
      tmp___14 = i;
# 445
      i ++;
# 445
      (*(text + tmp___13)) = (*(replacement + tmp___14));
# 446
      quoted = 0;
      }
    }
  }
  {
# 453
  r->text = text;
# 454
  r->backrefs = l;
# 455
  r->block_length[l] = (unsigned int )(k - r->block_offset[l]);
  }
# 457
  return (r);
}
}
# 476
pcrs_job *pcrs_free_job(pcrs_job *job ) 
{ pcrs_job *next ;

  {
# 480
  if ((unsigned int )job == (unsigned int )((void *)0)) {
# 482
    return ((pcrs_job *)((void *)0));
  } else {
    {
# 486
    next = job->next;
    }
# 487
    if ((unsigned int )job->pattern != (unsigned int )((void *)0)) {
      {
# 487
      free(job->pattern);
      }
    }
# 488
    if ((unsigned int )job->hints != (unsigned int )((void *)0)) {
      {
# 488
      free(job->hints);
      }
    }
# 489
    if ((unsigned int )job->substitute != (unsigned int )((void *)0)) {
# 491
      if ((unsigned int )(job->substitute)->text != (unsigned int )((void *)0)) {
        {
# 491
        free((void *)(job->substitute)->text);
        }
      }
      {
# 492
      free((void *)job->substitute);
      }
    }
    {
# 494
    free((void *)job);
    }
  }
# 496
  return (next);
}
}
# 515
void pcrs_free_joblist(pcrs_job *joblist ) 
{ 

  {
# 517
  while (1) {
    {
# 517
    joblist = pcrs_free_job(joblist);
    }
# 517
    if (! ((unsigned int )((void *)0) != (unsigned int )joblist)) {
# 517
      break;
    }
  }
# 519
  return;
}
}
# 543
pcrs_job *pcrs_compile_command(char const   *command , int *errptr ) 
{ int i ;
  int k ;
  int l ;
  int quoted ;
  size_t limit ;
  char delimiter ;
  char *tokens[4] ;
  pcrs_job *newjob ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
# 545
  quoted = 0;
# 551
  l = 0;
# 551
  k = l;
# 551
  i = k;
# 556
  limit = strlen(command);
  }
# 557
  if (limit < 4U) {
    {
# 559
    (*errptr) = -11;
    }
# 560
    return ((pcrs_job *)((void *)0));
  } else {
    {
# 564
    delimiter = (*(command + 1));
    }
  }
  {
# 567
  tokens[l] = (char *)malloc(limit + 1U);
# 569
  i = 0;
  }
# 569
  while (i <= (int )limit) {
# 572
    if ((int const   )(*(command + i)) == (int const   )delimiter) {
# 572
      if (quoted) {
        goto _L;
      } else {
# 574
        if (l == 3) {
          {
# 576
          l = -1;
          }
# 577
          break;
        }
        {
# 579
        tmp___0 = k;
# 579
        k ++;
# 579
        (*(tokens[0] + tmp___0)) = '\0';
# 580
        l ++;
# 580
        tokens[l] = tokens[0] + k;
        }
        goto __Cont;
      }
    } else {
      _L: 
# 584
      if ((int const   )(*(command + i)) == 92) {
# 584
        if (quoted) {
          {
# 591
          quoted = 0;
          }
        } else {
          {
# 586
          quoted = 1;
          }
# 587
          if ((int const   )(*(command + (i + 1))) == (int const   )delimiter) {
            goto __Cont;
          }
        }
      } else {
        {
# 591
        quoted = 0;
        }
      }
    }
    {
# 593
    tmp___1 = k;
# 593
    k ++;
# 593
    (*(tokens[0] + tmp___1)) = (*(command + i));
    }
    __Cont: 
    {
# 569
    i ++;
    }
  }
# 599
  if (l != 3) {
    {
# 601
    (*errptr) = -11;
# 602
    free((void *)tokens[0]);
    }
# 603
    return ((pcrs_job *)((void *)0));
  }
  {
# 606
  newjob = pcrs_compile((char const   *)tokens[1], (char const   *)tokens[2],
                        (char const   *)tokens[3], errptr);
# 607
  free((void *)tokens[0]);
  }
# 608
  return (newjob);
}
}
# 632
pcrs_job *pcrs_compile(char const   *pattern , char const   *substitute ,
                       char const   *options , int *errptr ) 
{ pcrs_job *newjob ;
  int flags ;
  int capturecount ;
  char const   *error ;

  {
  {
# 639
  (*errptr) = 0;
  }
# 644
  if ((unsigned int )pattern == (unsigned int )((void *)0)) {
    {
# 644
    pattern = (char const   *)"";
    }
  }
# 645
  if ((unsigned int )substitute == (unsigned int )((void *)0)) {
    {
# 645
    substitute = (char const   *)"";
    }
  }
  {
# 651
  newjob = (pcrs_job *)malloc(sizeof(pcrs_job ));
  }
# 651
  if ((unsigned int )((void *)0) == (unsigned int )newjob) {
    {
# 653
    (*errptr) = -10;
    }
# 654
    return ((pcrs_job *)((void *)0));
  }
  {
# 656
  memset((void *)newjob, (int )'\0', sizeof(pcrs_job ));
# 662
  newjob->options = pcrs_parse_perl_options(options, & flags);
# 663
  newjob->flags = flags;
# 669
  newjob->pattern = pcre_compile(pattern, newjob->options, & error, errptr,
                                 (unsigned char const   *)((void *)0));
  }
# 670
  if ((unsigned int )newjob->pattern == (unsigned int )((void *)0)) {
    {
# 672
    pcrs_free_job(newjob);
    }
# 673
    return ((pcrs_job *)((void *)0));
  }
  {
# 681
  newjob->hints = pcre_study((pcre const   *)newjob->pattern, 0, & error);
  }
# 682
  if ((unsigned int )error != (unsigned int )((void *)0)) {
    {
# 684
    (*errptr) = -12;
# 685
    pcrs_free_job(newjob);
    }
# 686
    return ((pcrs_job *)((void *)0));
  }
  {
# 694
  (*errptr) = pcre_fullinfo((pcre const   *)newjob->pattern,
                            (pcre_extra const   *)newjob->hints, 2,
                            (void *)(& capturecount));
  }
# 694
  if (0 > (*errptr)) {
    {
# 696
    pcrs_free_job(newjob);
    }
# 697
    return ((pcrs_job *)((void *)0));
  }
  {
# 704
  newjob->substitute = pcrs_compile_replacement(substitute, newjob->flags & 2,
                                                capturecount, errptr);
  }
# 704
  if ((unsigned int )((void *)0) == (unsigned int )newjob->substitute) {
    {
# 706
    pcrs_free_job(newjob);
    }
# 707
    return ((pcrs_job *)((void *)0));
  }
# 710
  return (newjob);
}
}
# 744
int pcrs_execute_list(pcrs_job *joblist , char *subject ,
                      size_t subject_length , char **result ,
                      size_t *result_length ) 
{ pcrs_job *job ;
  char *old ;
  char *new ;
  int hits ;
  int total_hits ;

  {
  {
# 750
  old = subject;
# 751
  (*result_length) = subject_length;
# 752
  total_hits = 0;
# 752
  hits = total_hits;
# 754
  job = joblist;
  }
# 754
  while ((unsigned int )job != (unsigned int )((void *)0)) {
    {
# 756
    hits = pcrs_execute(job, old, (*result_length), & new, result_length);
    }
# 758
    if ((unsigned int )old != (unsigned int )subject) {
      {
# 758
      free((void *)old);
      }
    }
# 760
    if (hits < 0) {
# 762
      return (hits);
    } else {
      {
# 766
      total_hits += hits;
# 767
      old = new;
      }
    }
    {
# 754
    job = job->next;
    }
  }
  {
# 771
  (*result) = new;
  }
# 772
  return (total_hits);
}
}
# 804
int pcrs_execute(pcrs_job *job , char *subject , size_t subject_length ,
                 char **result , size_t *result_length ) 
{ int offsets[99] ;
  int offset ;
  int i ;
  int k ;
  int matches_found ;
  int submatches ;
  int max_matches ;
  size_t newsize ;
  pcrs_match *matches ;
  pcrs_match *dummy ;
  char *result_offset ;
  size_t tmp___0 ;

  {
  {
# 806
  max_matches = 40;
# 816
  k = 0;
# 816
  i = k;
# 816
  offset = i;
  }
# 821
  if ((unsigned int )job == (unsigned int )((void *)0)) {
    {
# 823
    (*result) = (char *)((void *)0);
    }
# 824
    return (-13);
  } else {
# 821
    if ((unsigned int )job->pattern == (unsigned int )((void *)0)) {
      {
# 823
      (*result) = (char *)((void *)0);
      }
# 824
      return (-13);
    } else {
# 821
      if ((unsigned int )job->substitute == (unsigned int )((void *)0)) {
        {
# 823
        (*result) = (char *)((void *)0);
        }
# 824
        return (-13);
      }
    }
  }
  {
# 827
  matches = (pcrs_match *)malloc((unsigned int )max_matches *
                                 sizeof(pcrs_match ));
  }
# 827
  if ((unsigned int )((void *)0) == (unsigned int )matches) {
    {
# 829
    (*result) = (char *)((void *)0);
    }
# 830
    return (-10);
  }
  {
# 832
  memset((void *)matches, (int )'\0', (unsigned int )max_matches *
                                      sizeof(pcrs_match ));
# 839
  newsize = subject_length;
  }
# 841
  while (1) {
    {
# 841
    submatches = pcre_exec((pcre const   *)job->pattern,
                           (pcre_extra const   *)job->hints,
                           (char const   *)subject, (int )subject_length,
                           offset, 0, offsets, 99);
    }
# 841
    if (! (submatches > 0)) {
# 841
      break;
    }
    {
# 843
    job->flags = job->flags | 4;
# 844
    (matches + i)->submatches = submatches;
# 846
    k = 0;
    }
# 846
    while (k < submatches) {
      {
# 848
      (matches + i)->submatch_offset[k] = offsets[2 * k];
# 851
      (matches + i)->submatch_length[k] = (unsigned int )(offsets[2 * k + 1] -
                                                          offsets[2 * k]);
# 854
      newsize += (matches + i)->submatch_length[k] *
                 (unsigned int )(job->substitute)->backref_count[k];
# 846
      k ++;
      }
    }
    {
# 857
    tmp___0 = strlen((char const   *)(job->substitute)->text);
# 857
    newsize += tmp___0 - (matches + i)->submatch_length[0];
# 860
    (matches + i)->submatch_offset[33] = 0;
# 861
    (matches + i)->submatch_length[33] = (unsigned int )offsets[0];
# 862
    newsize += (unsigned int )(offsets[0] * (job->substitute)->backref_count[33]);
# 865
    (matches + i)->submatch_offset[34] = offsets[1];
# 866
    (matches + i)->submatch_length[34] = (subject_length -
                                          (unsigned int )offsets[1]) - 1U;
# 867
    newsize += (subject_length - (unsigned int )offsets[1]) *
               (unsigned int )(job->substitute)->backref_count[34];
# 870
    i ++;
    }
# 870
    if (i >= max_matches) {
      {
# 872
      max_matches = (int )((double )max_matches * 1.6);
# 873
      dummy = (pcrs_match *)realloc((void *)matches,
                                    (unsigned int )max_matches *
                                    sizeof(pcrs_match ));
      }
# 873
      if ((unsigned int )((void *)0) == (unsigned int )dummy) {
        {
# 875
        free((void *)matches);
# 876
        (*result) = (char *)((void *)0);
        }
# 877
        return (-10);
      }
      {
# 879
      matches = dummy;
      }
    }
# 883
    if (! (job->flags & 1)) {
# 883
      break;
    }
# 886
    if (offsets[1] == offset) {
# 887
      if ((unsigned int )offset < subject_length) {
        {
# 888
        offset ++;
        }
      } else {
# 890
        break;
      }
    } else {
      {
# 893
      offset = offsets[1];
      }
    }
  }
# 896
  if (submatches < -1) {
    {
# 898
    free((void *)matches);
    }
# 899
    return (submatches);
  }
  {
# 901
  matches_found = i;
# 908
  (*result) = (char *)malloc(newsize + 1U);
  }
# 908
  if ((unsigned int )(*result) == (unsigned int )((void *)0)) {
    {
# 910
    free((void *)matches);
    }
# 911
    return (-10);
  } else {
    {
# 915
    (*((*result) + newsize)) = '\0';
    }
  }
  {
# 922
  offset = 0;
# 923
  result_offset = (*result);
# 925
  i = 0;
  }
# 925
  while (i < matches_found) {
    {
# 928
    memcpy((void */* __restrict  */)((void *)result_offset),
           (void const   */* __restrict  */)((void const   *)(subject + offset)),
           (unsigned int )(matches + i)->submatch_offset[0] -
           (unsigned int )offset);
# 929
    result_offset += (matches + i)->submatch_offset[0] - offset;
# 932
    k = 0;
    }
# 932
    while (k <= (job->substitute)->backrefs) {
      {
# 935
      memcpy((void */* __restrict  */)((void *)result_offset),
             (void const   */* __restrict  */)((void const   *)((job->substitute)->text +
                                                                (job->substitute)->block_offset[k])),
             (job->substitute)->block_length[k]);
# 936
      result_offset += (job->substitute)->block_length[k];
      }
# 939
      if (k != (job->substitute)->backrefs) {
# 939
        if ((job->substitute)->backref[k] < 35) {
# 939
          if ((job->substitute)->backref[k] < (matches + i)->submatches) {
# 939
            if ((matches + i)->submatch_length[(job->substitute)->backref[k]] >
                0U) {
              {
# 948
              memcpy((void */* __restrict  */)((void *)result_offset),
                     (void const   */* __restrict  */)((void const   *)(subject +
                                                                        (matches +
                                                                         i)->submatch_offset[(job->substitute)->backref[k]])),
                     (matches + i)->submatch_length[(job->substitute)->backref[k]]);
# 953
              result_offset += (matches + i)->submatch_length[(job->substitute)->backref[k]];
              }
            }
          }
        }
      }
      {
# 932
      k ++;
      }
    }
    {
# 956
    offset = (int )((unsigned int )(matches + i)->submatch_offset[0] +
                    (matches + i)->submatch_length[0]);
# 925
    i ++;
    }
  }
  {
# 960
  memcpy((void */* __restrict  */)((void *)result_offset),
         (void const   */* __restrict  */)((void const   *)(subject + offset)),
         subject_length - (unsigned int )offset);
# 962
  (*result_length) = newsize;
# 963
  free((void *)matches);
  }
# 964
  return (matches_found);
}
}
# 74 "pcre/get.c"
int pcre_copy_substring(char const   *subject , int *ovector , int stringcount ,
                        int stringnumber , char *buffer , int size ) 
{ int yield ;

  {
# 79
  if (stringnumber < 0) {
# 80
    return (-7);
  } else {
# 79
    if (stringnumber >= stringcount) {
# 80
      return (-7);
    }
  }
  {
# 81
  stringnumber *= 2;
# 82
  yield = (*(ovector + (stringnumber + 1))) - (*(ovector + stringnumber));
  }
# 83
  if (size < yield + 1) {
# 83
    return (-6);
  }
  {
# 84
  memcpy((void */* __restrict  */)((void *)buffer),
         (void const   */* __restrict  */)((void const   *)(subject +
                                                            (*(ovector +
                                                               stringnumber)))),
         (unsigned int )yield);
# 85
  (*(buffer + yield)) = (char )0;
  }
# 86
  return (yield);
}
}
# 112
int pcre_get_substring_list(char const   *subject , int *ovector ,
                            int stringcount , char const   ***listptr ) 
{ int i ;
  int size ;
  int double_count ;
  char **stringlist ;
  char *p ;
  int len ;
  char **tmp___0 ;
  char *tmp___1 ;

  {
  {
# 117
  size = (int )sizeof(char *);
# 118
  double_count = stringcount * 2;
# 122
  i = 0;
  }
# 122
  while (i < double_count) {
    {
# 123
    size = (int )((unsigned int )size +
                  (((sizeof(char *) + (unsigned int )(*(ovector + (i + 1)))) -
                    (unsigned int )(*(ovector + i))) + 1U));
# 122
    i += 2;
    }
  }
  {
# 125
  stringlist = (char **)((*pcre_malloc))((unsigned int )size);
  }
# 126
  if ((unsigned int )stringlist == (unsigned int )((void *)0)) {
# 126
    return (-6);
  }
  {
# 128
  (*listptr) = (char const   **)stringlist;
# 129
  p = (char *)((stringlist + stringcount) + 1);
# 131
  i = 0;
  }
# 131
  while (i < double_count) {
    {
# 133
    len = (*(ovector + (i + 1))) - (*(ovector + i));
# 134
    memcpy((void */* __restrict  */)((void *)p),
           (void const   */* __restrict  */)((void const   *)(subject +
                                                              (*(ovector + i)))),
           (unsigned int )len);
# 135
    tmp___0 = stringlist;
# 135
    stringlist ++;
# 135
    (*tmp___0) = p;
# 136
    p += len;
# 137
    tmp___1 = p;
# 137
    p ++;
# 137
    (*tmp___1) = (char )0;
# 131
    i += 2;
    }
  }
  {
# 140
  (*stringlist) = (char *)((void *)0);
  }
# 141
  return (0);
}
}
# 157
void pcre_free_substring_list(char const   **pointer ) 
{ 

  {
  {
# 160
  ((*pcre_free))((void *)pointer);
  }
# 161
  return;
}
}
# 190
int pcre_get_substring(char const   *subject , int *ovector , int stringcount ,
                       int stringnumber , char const   **stringptr ) 
{ int yield ;
  char *substring ;

  {
# 196
  if (stringnumber < 0) {
# 197
    return (-7);
  } else {
# 196
    if (stringnumber >= stringcount) {
# 197
      return (-7);
    }
  }
  {
# 198
  stringnumber *= 2;
# 199
  yield = (*(ovector + (stringnumber + 1))) - (*(ovector + stringnumber));
# 200
  substring = (char *)((*pcre_malloc))((unsigned int )(yield + 1));
  }
# 201
  if ((unsigned int )substring == (unsigned int )((void *)0)) {
# 201
    return (-6);
  }
  {
# 202
  memcpy((void */* __restrict  */)((void *)substring),
         (void const   */* __restrict  */)((void const   *)(subject +
                                                            (*(ovector +
                                                               stringnumber)))),
         (unsigned int )yield);
# 203
  (*(substring + yield)) = (char )0;
# 204
  (*stringptr) = (char const   *)substring;
  }
# 205
  return (yield);
}
}
# 221
void pcre_free_substring(char const   *pointer ) 
{ 

  {
  {
# 224
  ((*pcre_free))((void *)pointer);
  }
# 225
  return;
}
}
# 61 "pcre/maketables.c"
unsigned char const   *pcre_maketables(void) 
{ unsigned char *yield ;
  unsigned char *p ;
  int i ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;
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
  int x ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  char *tmp___20 ;
  unsigned char *tmp___21 ;

  {
  {
# 68
  yield = (unsigned char *)((*pcre_malloc))(1088U);
  }
# 73
  if ((unsigned int )yield == (unsigned int )((void *)0)) {
# 73
    return ((unsigned char const   *)((void *)0));
  }
  {
# 74
  p = yield;
# 78
  i = 0;
  }
# 78
  while (i < 256) {
    {
# 78
    tmp___0 = p;
# 78
    p ++;
# 78
    (*tmp___0) = (unsigned char )tolower(i);
# 78
    i ++;
    }
  }
  {
# 82
  i = 0;
  }
# 82
  while (i < 256) {
    {
# 82
    tmp___1 = p;
# 82
    p ++;
# 82
    tmp___5 = _get__ctype_b(i);
    }
# 82
    if (tmp___5 & 512) {
      {
# 82
      (*tmp___1) = (unsigned char )toupper(i);
      }
    } else {
      {
# 82
      (*tmp___1) = (unsigned char )tolower(i);
      }
    }
    {
# 82
    i ++;
    }
  }
  {
# 87
  memset((void *)p, 0, 320U);
# 88
  i = 0;
  }
# 88
  while (i < 256) {
    {
# 90
    tmp___6 = _get__ctype_b(i);
    }
# 90
    if (tmp___6 & 2048) {
      {
# 92
      (*(p + (64 + i / 8))) = (unsigned char )((int )(*(p + (64 + i / 8))) |
                                               (1 << (i & 7)));
# 93
      (*(p + (160 + i / 8))) = (unsigned char )((int )(*(p + (160 + i / 8))) |
                                                (1 << (i & 7)));
      }
    }
    {
# 95
    tmp___7 = _get__ctype_b(i);
    }
# 95
    if (tmp___7 & 256) {
      {
# 97
      (*(p + (96 + i / 8))) = (unsigned char )((int )(*(p + (96 + i / 8))) |
                                               (1 << (i & 7)));
# 98
      (*(p + (160 + i / 8))) = (unsigned char )((int )(*(p + (160 + i / 8))) |
                                                (1 << (i & 7)));
      }
    }
    {
# 100
    tmp___8 = _get__ctype_b(i);
    }
# 100
    if (tmp___8 & 512) {
      {
# 102
      (*(p + (128 + i / 8))) = (unsigned char )((int )(*(p + (128 + i / 8))) |
                                                (1 << (i & 7)));
# 103
      (*(p + (160 + i / 8))) = (unsigned char )((int )(*(p + (160 + i / 8))) |
                                                (1 << (i & 7)));
      }
    }
# 105
    if (i == 95) {
      {
# 105
      (*(p + (160 + i / 8))) = (unsigned char )((int )(*(p + (160 + i / 8))) |
                                                (1 << (i & 7)));
      }
    }
    {
# 106
    tmp___9 = _get__ctype_b(i);
    }
# 106
    if (tmp___9 & 8192) {
      {
# 106
      (*(p + i / 8)) = (unsigned char )((int )(*(p + i / 8)) | (1 << (i & 7)));
      }
    }
    {
# 107
    tmp___10 = _get__ctype_b(i);
    }
# 107
    if (tmp___10 & 4096) {
      {
# 107
      (*(p + (32 + i / 8))) = (unsigned char )((int )(*(p + (32 + i / 8))) |
                                               (1 << (i & 7)));
      }
    }
    {
# 108
    tmp___11 = _get__ctype_b(i);
    }
# 108
    if (tmp___11 & 32768) {
      {
# 108
      (*(p + (192 + i / 8))) = (unsigned char )((int )(*(p + (192 + i / 8))) |
                                                (1 << (i & 7)));
      }
    }
    {
# 109
    tmp___12 = _get__ctype_b(i);
    }
# 109
    if (tmp___12 & 16384) {
      {
# 109
      (*(p + (224 + i / 8))) = (unsigned char )((int )(*(p + (224 + i / 8))) |
                                                (1 << (i & 7)));
      }
    }
    {
# 110
    tmp___13 = _get__ctype_b(i);
    }
# 110
    if (tmp___13 & 4) {
      {
# 110
      (*(p + (256 + i / 8))) = (unsigned char )((int )(*(p + (256 + i / 8))) |
                                                (1 << (i & 7)));
      }
    }
    {
# 111
    tmp___14 = _get__ctype_b(i);
    }
# 111
    if (tmp___14 & 2) {
      {
# 111
      (*(p + (288 + i / 8))) = (unsigned char )((int )(*(p + (288 + i / 8))) |
                                                (1 << (i & 7)));
      }
    }
    {
# 88
    i ++;
    }
  }
  {
# 113
  p += 320;
# 117
  i = 0;
  }
# 117
  while (i < 256) {
    {
# 119
    x = 0;
# 120
    tmp___15 = _get__ctype_b(i);
    }
# 120
    if (tmp___15 & 8192) {
      {
# 120
      x ++;
      }
    }
    {
# 121
    tmp___16 = _get__ctype_b(i);
    }
# 121
    if (tmp___16 & 1024) {
      {
# 121
      x += 2;
      }
    }
    {
# 122
    tmp___17 = _get__ctype_b(i);
    }
# 122
    if (tmp___17 & 2048) {
      {
# 122
      x += 4;
      }
    }
    {
# 123
    tmp___18 = _get__ctype_b(i);
    }
# 123
    if (tmp___18 & 4096) {
      {
# 123
      x += 8;
      }
    }
    {
# 124
    tmp___19 = _get__ctype_b(i);
    }
# 124
    if (tmp___19 & 8) {
      {
# 124
      x += 16;
      }
    } else {
# 124
      if (i == 95) {
        {
# 124
        x += 16;
        }
      }
    }
    {
# 125
    tmp___20 = strchr((char const   *)"*+?{^.$|()[", i);
    }
# 125
    if ((unsigned int )tmp___20 != (unsigned int )((char *)0)) {
      {
# 125
      x += 128;
      }
    }
    {
# 126
    tmp___21 = p;
# 126
    p ++;
# 126
    (*tmp___21) = (unsigned char )x;
# 117
    i ++;
    }
  }
# 129
  return ((unsigned char const   *)yield);
}
}
# 59 "pcre/study.c"
static void set_bit(uschar *start_bits , int c , BOOL caseless ,
                    compile_data *cd ) 
{ 

  {
  {
# 62
  (*(start_bits + c / 8)) = (unsigned char )((int )(*(start_bits + c / 8)) |
                                             (1 << (c & 7)));
  }
# 63
  if (caseless) {
# 63
    if (((int )(*(cd->ctypes + c)) & 2) != 0) {
      {
# 64
      (*(start_bits + (int )(*(cd->fcc + c)) / 8)) = (unsigned char )((int )(*(start_bits +
                                                                               (int )(*(cd->fcc +
                                                                                        c)) /
                                                                               8)) |
                                                                      (1 <<
                                                                       ((int )(*(cd->fcc +
                                                                                 c)) &
                                                                        7)));
      }
    }
  }
# 65
  return;
}
}
# 86
static BOOL set_start_bits(uschar const   *code , uschar *start_bits ,
                           BOOL caseless , compile_data *cd ) 
{ register int c ;
  int volatile   dummy ;
  uschar const   *tcode ;
  BOOL try_next ;
  BOOL tmp ;
  BOOL tmp___0 ;

  {
# 100
  while (1) {
    {
# 102
    tcode = code + 3;
# 103
    try_next = 1;
    }
# 105
    while (try_next) {
      {
# 107
      try_next = 0;
      }
# 112
      if ((int )(*tcode) >= 70) {
        goto _L;
      } else {
# 112
        if ((int )(*tcode) == 60) {
          _L: 
          {
# 114
          tmp = set_start_bits(tcode, start_bits, caseless, cd);
          }
# 114
          if (! tmp) {
# 115
            return (0);
          }
        } else {
# 118
          switch ((int )(*tcode)) {
          default: 
          {

          }
# 121
          return (0);
          case 61: 
          {

          }
          case 62: 
          {

          }
          case 63: 
          {
# 128
          try_next = 1;
          }
# 129
          while (1) {
            {
# 129
            tcode += ((int )(*(tcode + 1)) << 8) + (int )(*(tcode + 2));
            }
# 129
            if (! ((int )(*tcode) == 56)) {
# 129
              break;
            }
          }
          {
# 130
          tcode += 3;
          }
# 131
          break;
          case 12: 
          {
# 136
          caseless = ((int )(*(tcode + 1)) & 1) != 0;
# 137
          tcode += 2;
# 138
          try_next = 1;
          }
# 139
          break;
          case 68: 
          {

          }
          case 69: 
          {
# 145
          tcode ++;
# 145
          tmp___0 = set_start_bits(tcode, start_bits, caseless, cd);
          }
# 145
          if (! tmp___0) {
# 146
            return (0);
          }
          {
# 147
          dummy = 1;
          }
# 148
          while (1) {
            {
# 148
            tcode += ((int )(*(tcode + 1)) << 8) + (int )(*(tcode + 2));
            }
# 148
            if (! ((int )(*tcode) == 56)) {
# 148
              break;
            }
          }
          {
# 149
          tcode += 3;
# 150
          try_next = 1;
          }
# 151
          break;
          case 18: 
          {

          }
          case 19: 
          {

          }
          case 22: 
          {

          }
          case 23: 
          {
# 159
          set_bit(start_bits, (int )(*(tcode + 1)), caseless, cd);
# 160
          tcode += 2;
# 161
          try_next = 1;
          }
# 162
          break;
          case 24: 
          {

          }
          case 25: 
          {
# 168
          set_bit(start_bits, (int )(*(tcode + 3)), caseless, cd);
# 169
          tcode += 4;
# 170
          try_next = 1;
          }
# 171
          break;
          case 26: 
          {
# 176
          tcode ++;
          }
          case 16: 
          {
# 179
          tcode ++;
          }
          case 20: 
          {

          }
          case 21: 
          {
# 183
          set_bit(start_bits, (int )(*(tcode + 1)), caseless, cd);
          }
# 184
          break;
          case 4: 
          {
# 189
          c = 0;
          }
# 189
          while (c < 32) {
            {
# 190
            (*(start_bits + c)) = (unsigned char )((int )(*(start_bits + c)) |
                                                   ~ ((int )(*(cd->cbits +
                                                               (c + 64)))));
# 189
            c ++;
            }
          }
# 191
          break;
          case 5: 
          {
# 194
          c = 0;
          }
# 194
          while (c < 32) {
            {
# 195
            (*(start_bits + c)) = (unsigned char )((int )(*(start_bits + c)) |
                                                   (int )(*(cd->cbits + (c + 64))));
# 194
            c ++;
            }
          }
# 196
          break;
          case 6: 
          {
# 199
          c = 0;
          }
# 199
          while (c < 32) {
            {
# 200
            (*(start_bits + c)) = (unsigned char )((int )(*(start_bits + c)) |
                                                   ~ ((int )(*(cd->cbits + c))));
# 199
            c ++;
            }
          }
# 201
          break;
          case 7: 
          {
# 204
          c = 0;
          }
# 204
          while (c < 32) {
            {
# 205
            (*(start_bits + c)) = (unsigned char )((int )(*(start_bits + c)) |
                                                   (int )(*(cd->cbits + c)));
# 204
            c ++;
            }
          }
# 206
          break;
          case 8: 
          {
# 209
          c = 0;
          }
# 209
          while (c < 32) {
            {
# 210
            (*(start_bits + c)) = (unsigned char )((int )(*(start_bits + c)) |
                                                   ~ ((int )(*(cd->cbits +
                                                               (c + 160)))));
# 209
            c ++;
            }
          }
# 211
          break;
          case 9: 
          {
# 214
          c = 0;
          }
# 214
          while (c < 32) {
            {
# 215
            (*(start_bits + c)) = (unsigned char )((int )(*(start_bits + c)) |
                                                   (int )(*(cd->cbits +
                                                            (c + 160))));
# 214
            c ++;
            }
          }
# 216
          break;
          case 38: 
          {

          }
          case 39: 
          {
# 223
          tcode ++;
# 224
          try_next = 1;
          }
# 225
          break;
          case 44: 
          {
# 228
          tcode += 3;
# 229
          try_next = 1;
          }
# 230
          break;
          case 42: 
          {

          }
          case 43: 
          {
# 237
          tcode += 2;
          }
          case 36: 
          {

          }
          case 37: 
          {

          }
          case 40: 
          {

          }
          case 41: 
          {

          }
# 243
          switch ((int )(*(tcode + 1))) {
          case 4: 
          {
# 246
          c = 0;
          }
# 246
          while (c < 32) {
            {
# 247
            (*(start_bits + c)) = (unsigned char )((int )(*(start_bits + c)) |
                                                   ~ ((int )(*(cd->cbits +
                                                               (c + 64)))));
# 246
            c ++;
            }
          }
# 248
          break;
          case 5: 
          {
# 251
          c = 0;
          }
# 251
          while (c < 32) {
            {
# 252
            (*(start_bits + c)) = (unsigned char )((int )(*(start_bits + c)) |
                                                   (int )(*(cd->cbits + (c + 64))));
# 251
            c ++;
            }
          }
# 253
          break;
          case 6: 
          {
# 256
          c = 0;
          }
# 256
          while (c < 32) {
            {
# 257
            (*(start_bits + c)) = (unsigned char )((int )(*(start_bits + c)) |
                                                   ~ ((int )(*(cd->cbits + c))));
# 256
            c ++;
            }
          }
# 258
          break;
          case 7: 
          {
# 261
          c = 0;
          }
# 261
          while (c < 32) {
            {
# 262
            (*(start_bits + c)) = (unsigned char )((int )(*(start_bits + c)) |
                                                   (int )(*(cd->cbits + c)));
# 261
            c ++;
            }
          }
# 263
          break;
          case 8: 
          {
# 266
          c = 0;
          }
# 266
          while (c < 32) {
            {
# 267
            (*(start_bits + c)) = (unsigned char )((int )(*(start_bits + c)) |
                                                   ~ ((int )(*(cd->cbits +
                                                               (c + 160)))));
# 266
            c ++;
            }
          }
# 268
          break;
          case 9: 
          {
# 271
          c = 0;
          }
# 271
          while (c < 32) {
            {
# 272
            (*(start_bits + c)) = (unsigned char )((int )(*(start_bits + c)) |
                                                   (int )(*(cd->cbits +
                                                            (c + 160))));
# 271
            c ++;
            }
          }
# 273
          break;
          }
          {
# 276
          tcode += 2;
# 277
          try_next = 1;
          }
# 278
          break;
          case 53: 
          {
# 285
          tcode ++;
# 286
          c = 0;
          }
# 286
          while (c < 32) {
            {
# 286
            (*(start_bits + c)) = (unsigned char )((int )(*(start_bits + c)) |
                                                   (int )(*(tcode + c)));
# 286
            c ++;
            }
          }
          {
# 287
          tcode += 32;
          }
# 288
          switch ((int )(*tcode)) {
          case 45: 
          {

          }
          case 46: 
          {

          }
          case 49: 
          {

          }
          case 50: 
          {
# 294
          tcode ++;
# 295
          try_next = 1;
          }
# 296
          break;
          case 51: 
          {

          }
          case 52: 
          {

          }
# 300
          if (((int )(*(tcode + 1)) << 8) + (int )(*(tcode + 2)) == 0) {
            {
# 302
            tcode += 5;
# 303
            try_next = 1;
            }
          }
# 305
          break;
          }
# 308
          break;
          }
        }
      }
    }
    {
# 313
    code += ((int )(*(code + 1)) << 8) + (int )(*(code + 2));
    }
# 100
    if (! ((int )(*code) == 56)) {
# 100
      break;
    }
  }
# 316
  return (1);
}
}
# 339
pcre_extra *pcre_study(pcre const   *external_re , int options ,
                       char const   **errorptr ) 
{ uschar start_bits[32] ;
  real_pcre_extra *extra ;
  real_pcre const   *re ;
  compile_data compile_block ;
  BOOL tmp ;

  {
  {
# 344
  re = (real_pcre const   *)external_re;
# 347
  (*errorptr) = (char const   *)((void *)0);
  }
# 349
  if ((unsigned int )re == (unsigned int )((void *)0)) {
    {
# 351
    (*errorptr) = (char const   *)"argument is not a compiled regular expression";
    }
# 352
    return ((void *)0);
  } else {
# 349
    if (re->magic_number != 1346589253UL) {
      {
# 351
      (*errorptr) = (char const   *)"argument is not a compiled regular expression";
      }
# 352
      return ((void *)0);
    }
  }
# 355
  if ((options & -1) != 0) {
    {
# 357
    (*errorptr) = (char const   *)"unknown or incorrect option bit(s) set";
    }
# 358
    return ((void *)0);
  }
# 365
  if ((re->options & 1342177296UL) != 0UL) {
# 366
    return ((void *)0);
  }
  {
# 370
  compile_block.lcc = re->tables + 0;
# 371
  compile_block.fcc = re->tables + 256;
# 372
  compile_block.cbits = re->tables + 512;
# 373
  compile_block.ctypes = re->tables + 832;
# 377
  memset((void *)(start_bits), 0, 32U * sizeof(uschar ));
# 378
  tmp = set_start_bits((uschar const   *)(re->code), start_bits,
                       (re->options & 1UL) != 0UL, & compile_block);
  }
# 378
  if (! tmp) {
# 379
    return ((void *)0);
  }
  {
# 383
  extra = (real_pcre_extra *)((*pcre_malloc))(sizeof(real_pcre_extra ));
  }
# 385
  if ((unsigned int )extra == (unsigned int )((void *)0)) {
    {
# 387
    (*errorptr) = (char const   *)"failed to get memory";
    }
# 388
    return ((void *)0);
  }
  {
# 391
  extra->options = (unsigned char )1;
# 392
  memcpy((void */* __restrict  */)((void *)(extra->start_bits)),
         (void const   */* __restrict  */)((void const   *)(start_bits)),
         sizeof(start_bits));
  }
# 394
  return ((pcre_extra *)extra);
}
}
# 81 "pcre/pcre.c"
static char const   rep_min[6]   = {(char const   )0, (char const   )0,
                                    (char const   )1, (char const   )1,
                                    (char const   )0, (char const   )0};
# 82
static char const   rep_max[6]   = {(char const   )0, (char const   )0,
                                    (char const   )0, (char const   )0,
                                    (char const   )1, (char const   )1};
# 107
static short const   escapes[75]   = 
# 107
  {(short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )':',
   (short const   )';', (short const   )'<', (short const   )'=',
   (short const   )'>', (short const   )'?', (short const   )'@',
   (short const   )-1, (short const   )-2, (short const   )0,
   (short const   )-4, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )-6,
   (short const   )0, (short const   )0, (short const   )0, (short const   )-8,
   (short const   )0, (short const   )0, (short const   )-10,
   (short const   )'[', (short const   )'\\', (short const   )']',
   (short const   )'^', (short const   )'_', (short const   )'`',
   (short const   )7, (short const   )-3, (short const   )0, (short const   )-5,
   (short const   )27, (short const   )'\014', (short const   )0,
   (short const   )0, (short const   )0, (short const   )0, (short const   )0,
   (short const   )0, (short const   )0, (short const   )'\n',
   (short const   )0, (short const   )0, (short const   )0,
   (short const   )'\r', (short const   )-7, (short const   )'\t',
   (short const   )0, (short const   )0, (short const   )-9, (short const   )0,
   (short const   )0, (short const   )-11};
# 124
static char const   *posix_names[13]   = 
# 124
  {(char const   *)"alpha", (char const   *)"lower", (char const   *)"upper",
   (char const   *)"alnum", (char const   *)"ascii", (char const   *)"cntrl",
   (char const   *)"digit", (char const   *)"graph", (char const   *)"print",
   (char const   *)"punct", (char const   *)"space", (char const   *)"word",
   (char const   *)"xdigit"};
# 129
static uschar const   posix_name_lengths[14]   = 
# 129
  {(uschar const   )((unsigned char )5), (uschar const   )((unsigned char )5),
   (uschar const   )((unsigned char )5), (uschar const   )((unsigned char )5),
   (uschar const   )((unsigned char )5), (uschar const   )((unsigned char )5),
   (uschar const   )((unsigned char )5), (uschar const   )((unsigned char )5),
   (uschar const   )((unsigned char )5), (uschar const   )((unsigned char )5),
   (uschar const   )((unsigned char )5), (uschar const   )((unsigned char )4),
   (uschar const   )((unsigned char )6), (uschar const   )((unsigned char )0)};
# 135
static int const   posix_class_maps[39]   = 
# 135
  {128, 96, -1, 128, -1, -1, 96, -1, -1, 64, 128, 96, 224, 288, -1, 288, -1, -1,
   64, -1, -1, 192, -1, -1, 224, -1, -1, 256, -1, -1, 0, -1, -1, 160, -1, -1,
   32, -1, -1};
# 154
static BOOL compile_regex(int options , int optchanged , int *brackets ,
                          uschar **codeptr , uschar const   **ptrptr ,
                          char const   **errorptr , BOOL lookbehind ,
                          int condref , int *reqchar , int *countlits ,
                          compile_data *cd ) ;
# 184
void *(*pcre_malloc)(size_t  )   = & malloc;
# 185
void (*pcre_free)(void * )   = & free;
# 13 "pcre/chartables.c"
static unsigned char pcre_default_tables[1088]   = 
# 13
  {(unsigned char )0, (unsigned char )1, (unsigned char )2, (unsigned char )3,
   (unsigned char )4, (unsigned char )5, (unsigned char )6, (unsigned char )7,
   (unsigned char )8, (unsigned char )9, (unsigned char )10, (unsigned char )11,
   (unsigned char )12, (unsigned char )13, (unsigned char )14,
   (unsigned char )15, (unsigned char )16, (unsigned char )17,
   (unsigned char )18, (unsigned char )19, (unsigned char )20,
   (unsigned char )21, (unsigned char )22, (unsigned char )23,
   (unsigned char )24, (unsigned char )25, (unsigned char )26,
   (unsigned char )27, (unsigned char )28, (unsigned char )29,
   (unsigned char )30, (unsigned char )31, (unsigned char )32,
   (unsigned char )33, (unsigned char )34, (unsigned char )35,
   (unsigned char )36, (unsigned char )37, (unsigned char )38,
   (unsigned char )39, (unsigned char )40, (unsigned char )41,
   (unsigned char )42, (unsigned char )43, (unsigned char )44,
   (unsigned char )45, (unsigned char )46, (unsigned char )47,
   (unsigned char )48, (unsigned char )49, (unsigned char )50,
   (unsigned char )51, (unsigned char )52, (unsigned char )53,
   (unsigned char )54, (unsigned char )55, (unsigned char )56,
   (unsigned char )57, (unsigned char )58, (unsigned char )59,
   (unsigned char )60, (unsigned char )61, (unsigned char )62,
   (unsigned char )63, (unsigned char )64, (unsigned char )97,
   (unsigned char )98, (unsigned char )99, (unsigned char )100,
   (unsigned char )101, (unsigned char )102, (unsigned char )103,
   (unsigned char )104, (unsigned char )105, (unsigned char )106,
   (unsigned char )107, (unsigned char )108, (unsigned char )109,
   (unsigned char )110, (unsigned char )111, (unsigned char )112,
   (unsigned char )113, (unsigned char )114, (unsigned char )115,
   (unsigned char )116, (unsigned char )117, (unsigned char )118,
   (unsigned char )119, (unsigned char )120, (unsigned char )121,
   (unsigned char )122, (unsigned char )91, (unsigned char )92,
   (unsigned char )93, (unsigned char )94, (unsigned char )95,
   (unsigned char )96, (unsigned char )97, (unsigned char )98,
   (unsigned char )99, (unsigned char )100, (unsigned char )101,
   (unsigned char )102, (unsigned char )103, (unsigned char )104,
   (unsigned char )105, (unsigned char )106, (unsigned char )107,
   (unsigned char )108, (unsigned char )109, (unsigned char )110,
   (unsigned char )111, (unsigned char )112, (unsigned char )113,
   (unsigned char )114, (unsigned char )115, (unsigned char )116,
   (unsigned char )117, (unsigned char )118, (unsigned char )119,
   (unsigned char )120, (unsigned char )121, (unsigned char )122,
   (unsigned char )123, (unsigned char )124, (unsigned char )125,
   (unsigned char )126, (unsigned char )127, (unsigned char )128,
   (unsigned char )129, (unsigned char )130, (unsigned char )131,
   (unsigned char )132, (unsigned char )133, (unsigned char )134,
   (unsigned char )135, (unsigned char )136, (unsigned char )137,
   (unsigned char )138, (unsigned char )139, (unsigned char )140,
   (unsigned char )141, (unsigned char )142, (unsigned char )143,
   (unsigned char )144, (unsigned char )145, (unsigned char )146,
   (unsigned char )147, (unsigned char )148, (unsigned char )149,
   (unsigned char )150, (unsigned char )151, (unsigned char )152,
   (unsigned char )153, (unsigned char )154, (unsigned char )155,
   (unsigned char )156, (unsigned char )157, (unsigned char )158,
   (unsigned char )159, (unsigned char )160, (unsigned char )161,
   (unsigned char )162, (unsigned char )163, (unsigned char )164,
   (unsigned char )165, (unsigned char )166, (unsigned char )167,
   (unsigned char )168, (unsigned char )169, (unsigned char )170,
   (unsigned char )171, (unsigned char )172, (unsigned char )173,
   (unsigned char )174, (unsigned char )175, (unsigned char )176,
   (unsigned char )177, (unsigned char )178, (unsigned char )179,
   (unsigned char )180, (unsigned char )181, (unsigned char )182,
   (unsigned char )183, (unsigned char )184, (unsigned char )185,
   (unsigned char )186, (unsigned char )187, (unsigned char )188,
   (unsigned char )189, (unsigned char )190, (unsigned char )191,
   (unsigned char )192, (unsigned char )193, (unsigned char )194,
   (unsigned char )195, (unsigned char )196, (unsigned char )197,
   (unsigned char )198, (unsigned char )199, (unsigned char )200,
   (unsigned char )201, (unsigned char )202, (unsigned char )203,
   (unsigned char )204, (unsigned char )205, (unsigned char )206,
   (unsigned char )207, (unsigned char )208, (unsigned char )209,
   (unsigned char )210, (unsigned char )211, (unsigned char )212,
   (unsigned char )213, (unsigned char )214, (unsigned char )215,
   (unsigned char )216, (unsigned char )217, (unsigned char )218,
   (unsigned char )219, (unsigned char )220, (unsigned char )221,
   (unsigned char )222, (unsigned char )223, (unsigned char )224,
   (unsigned char )225, (unsigned char )226, (unsigned char )227,
   (unsigned char )228, (unsigned char )229, (unsigned char )230,
   (unsigned char )231, (unsigned char )232, (unsigned char )233,
   (unsigned char )234, (unsigned char )235, (unsigned char )236,
   (unsigned char )237, (unsigned char )238, (unsigned char )239,
   (unsigned char )240, (unsigned char )241, (unsigned char )242,
   (unsigned char )243, (unsigned char )244, (unsigned char )245,
   (unsigned char )246, (unsigned char )247, (unsigned char )248,
   (unsigned char )249, (unsigned char )250, (unsigned char )251,
   (unsigned char )252, (unsigned char )253, (unsigned char )254,
   (unsigned char )255, (unsigned char )0, (unsigned char )1, (unsigned char )2,
   (unsigned char )3, (unsigned char )4, (unsigned char )5, (unsigned char )6,
   (unsigned char )7, (unsigned char )8, (unsigned char )9, (unsigned char )10,
   (unsigned char )11, (unsigned char )12, (unsigned char )13,
   (unsigned char )14, (unsigned char )15, (unsigned char )16,
   (unsigned char )17, (unsigned char )18, (unsigned char )19,
   (unsigned char )20, (unsigned char )21, (unsigned char )22,
   (unsigned char )23, (unsigned char )24, (unsigned char )25,
   (unsigned char )26, (unsigned char )27, (unsigned char )28,
   (unsigned char )29, (unsigned char )30, (unsigned char )31,
   (unsigned char )32, (unsigned char )33, (unsigned char )34,
   (unsigned char )35, (unsigned char )36, (unsigned char )37,
   (unsigned char )38, (unsigned char )39, (unsigned char )40,
   (unsigned char )41, (unsigned char )42, (unsigned char )43,
   (unsigned char )44, (unsigned char )45, (unsigned char )46,
   (unsigned char )47, (unsigned char )48, (unsigned char )49,
   (unsigned char )50, (unsigned char )51, (unsigned char )52,
   (unsigned char )53, (unsigned char )54, (unsigned char )55,
   (unsigned char )56, (unsigned char )57, (unsigned char )58,
   (unsigned char )59, (unsigned char )60, (unsigned char )61,
   (unsigned char )62, (unsigned char )63, (unsigned char )64,
   (unsigned char )97, (unsigned char )98, (unsigned char )99,
   (unsigned char )100, (unsigned char )101, (unsigned char )102,
   (unsigned char )103, (unsigned char )104, (unsigned char )105,
   (unsigned char )106, (unsigned char )107, (unsigned char )108,
   (unsigned char )109, (unsigned char )110, (unsigned char )111,
   (unsigned char )112, (unsigned char )113, (unsigned char )114,
   (unsigned char )115, (unsigned char )116, (unsigned char )117,
   (unsigned char )118, (unsigned char )119, (unsigned char )120,
   (unsigned char )121, (unsigned char )122, (unsigned char )91,
   (unsigned char )92, (unsigned char )93, (unsigned char )94,
   (unsigned char )95, (unsigned char )96, (unsigned char )65,
   (unsigned char )66, (unsigned char )67, (unsigned char )68,
   (unsigned char )69, (unsigned char )70, (unsigned char )71,
   (unsigned char )72, (unsigned char )73, (unsigned char )74,
   (unsigned char )75, (unsigned char )76, (unsigned char )77,
   (unsigned char )78, (unsigned char )79, (unsigned char )80,
   (unsigned char )81, (unsigned char )82, (unsigned char )83,
   (unsigned char )84, (unsigned char )85, (unsigned char )86,
   (unsigned char )87, (unsigned char )88, (unsigned char )89,
   (unsigned char )90, (unsigned char )123, (unsigned char )124,
   (unsigned char )125, (unsigned char )126, (unsigned char )127,
   (unsigned char )128, (unsigned char )129, (unsigned char )130,
   (unsigned char )131, (unsigned char )132, (unsigned char )133,
   (unsigned char )134, (unsigned char )135, (unsigned char )136,
   (unsigned char )137, (unsigned char )138, (unsigned char )139,
   (unsigned char )140, (unsigned char )141, (unsigned char )142,
   (unsigned char )143, (unsigned char )144, (unsigned char )145,
   (unsigned char )146, (unsigned char )147, (unsigned char )148,
   (unsigned char )149, (unsigned char )150, (unsigned char )151,
   (unsigned char )152, (unsigned char )153, (unsigned char )154,
   (unsigned char )155, (unsigned char )156, (unsigned char )157,
   (unsigned char )158, (unsigned char )159, (unsigned char )160,
   (unsigned char )161, (unsigned char )162, (unsigned char )163,
   (unsigned char )164, (unsigned char )165, (unsigned char )166,
   (unsigned char )167, (unsigned char )168, (unsigned char )169,
   (unsigned char )170, (unsigned char )171, (unsigned char )172,
   (unsigned char )173, (unsigned char )174, (unsigned char )175,
   (unsigned char )176, (unsigned char )177, (unsigned char )178,
   (unsigned char )179, (unsigned char )180, (unsigned char )181,
   (unsigned char )182, (unsigned char )183, (unsigned char )184,
   (unsigned char )185, (unsigned char )186, (unsigned char )187,
   (unsigned char )188, (unsigned char )189, (unsigned char )190,
   (unsigned char )191, (unsigned char )192, (unsigned char )193,
   (unsigned char )194, (unsigned char )195, (unsigned char )196,
   (unsigned char )197, (unsigned char )198, (unsigned char )199,
   (unsigned char )200, (unsigned char )201, (unsigned char )202,
   (unsigned char )203, (unsigned char )204, (unsigned char )205,
   (unsigned char )206, (unsigned char )207, (unsigned char )208,
   (unsigned char )209, (unsigned char )210, (unsigned char )211,
   (unsigned char )212, (unsigned char )213, (unsigned char )214,
   (unsigned char )215, (unsigned char )216, (unsigned char )217,
   (unsigned char )218, (unsigned char )219, (unsigned char )220,
   (unsigned char )221, (unsigned char )222, (unsigned char )223,
   (unsigned char )224, (unsigned char )225, (unsigned char )226,
   (unsigned char )227, (unsigned char )228, (unsigned char )229,
   (unsigned char )230, (unsigned char )231, (unsigned char )232,
   (unsigned char )233, (unsigned char )234, (unsigned char )235,
   (unsigned char )236, (unsigned char )237, (unsigned char )238,
   (unsigned char )239, (unsigned char )240, (unsigned char )241,
   (unsigned char )242, (unsigned char )243, (unsigned char )244,
   (unsigned char )245, (unsigned char )246, (unsigned char )247,
   (unsigned char )248, (unsigned char )249, (unsigned char )250,
   (unsigned char )251, (unsigned char )252, (unsigned char )253,
   (unsigned char )254, (unsigned char )255, (unsigned char )0,
   (unsigned char )62, (unsigned char )0, (unsigned char )0, (unsigned char )1,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )255, (unsigned char )3,
   (unsigned char )126, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )126, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )255, (unsigned char )3,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )254, (unsigned char )255, (unsigned char )255,
   (unsigned char )7, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )254, (unsigned char )255,
   (unsigned char )255, (unsigned char )7, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )255, (unsigned char )3, (unsigned char )254,
   (unsigned char )255, (unsigned char )255, (unsigned char )135,
   (unsigned char )254, (unsigned char )255, (unsigned char )255,
   (unsigned char )7, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )254, (unsigned char )255,
   (unsigned char )255, (unsigned char )255, (unsigned char )255,
   (unsigned char )255, (unsigned char )255, (unsigned char )255,
   (unsigned char )255, (unsigned char )255, (unsigned char )255,
   (unsigned char )127, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )255, (unsigned char )255,
   (unsigned char )255, (unsigned char )255, (unsigned char )255,
   (unsigned char )255, (unsigned char )255, (unsigned char )255,
   (unsigned char )255, (unsigned char )255, (unsigned char )255,
   (unsigned char )127, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )254, (unsigned char )255,
   (unsigned char )0, (unsigned char )252, (unsigned char )1, (unsigned char )0,
   (unsigned char )0, (unsigned char )248, (unsigned char )1, (unsigned char )0,
   (unsigned char )0, (unsigned char )120, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )255,
   (unsigned char )255, (unsigned char )255, (unsigned char )255,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )128,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )128, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )1, (unsigned char )1, (unsigned char )1,
   (unsigned char )1, (unsigned char )1, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )1, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )128, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )128, (unsigned char )128, (unsigned char )128,
   (unsigned char )128, (unsigned char )0, (unsigned char )0,
   (unsigned char )128, (unsigned char )0, (unsigned char )28,
   (unsigned char )28, (unsigned char )28, (unsigned char )28,
   (unsigned char )28, (unsigned char )28, (unsigned char )28,
   (unsigned char )28, (unsigned char )28, (unsigned char )28,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )128, (unsigned char )0,
   (unsigned char )26, (unsigned char )26, (unsigned char )26,
   (unsigned char )26, (unsigned char )26, (unsigned char )26,
   (unsigned char )18, (unsigned char )18, (unsigned char )18,
   (unsigned char )18, (unsigned char )18, (unsigned char )18,
   (unsigned char )18, (unsigned char )18, (unsigned char )18,
   (unsigned char )18, (unsigned char )18, (unsigned char )18,
   (unsigned char )18, (unsigned char )18, (unsigned char )18,
   (unsigned char )18, (unsigned char )18, (unsigned char )18,
   (unsigned char )18, (unsigned char )18, (unsigned char )128,
   (unsigned char )0, (unsigned char )0, (unsigned char )128,
   (unsigned char )16, (unsigned char )0, (unsigned char )26,
   (unsigned char )26, (unsigned char )26, (unsigned char )26,
   (unsigned char )26, (unsigned char )26, (unsigned char )18,
   (unsigned char )18, (unsigned char )18, (unsigned char )18,
   (unsigned char )18, (unsigned char )18, (unsigned char )18,
   (unsigned char )18, (unsigned char )18, (unsigned char )18,
   (unsigned char )18, (unsigned char )18, (unsigned char )18,
   (unsigned char )18, (unsigned char )18, (unsigned char )18,
   (unsigned char )18, (unsigned char )18, (unsigned char )18,
   (unsigned char )18, (unsigned char )128, (unsigned char )128,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0, (unsigned char )0,
   (unsigned char )0, (unsigned char )0, (unsigned char )0};
# 329 "pcre/pcre.c"
char const   *pcre_version(void) 
{ 

  {
# 332
  return ((char const   *)"3.4 22-Aug-2000");
}
}
# 360
int pcre_info(pcre const   *external_re , int *optptr , int *first_char ) 
{ real_pcre const   *re ;

  {
  {
# 363
  re = (real_pcre const   *)external_re;
  }
# 364
  if ((unsigned int )re == (unsigned int )((void *)0)) {
# 364
    return (-2);
  }
# 365
  if (re->magic_number != 1346589253UL) {
# 365
    return (-4);
  }
# 366
  if ((unsigned int )optptr != (unsigned int )((void *)0)) {
    {
# 366
    (*optptr) = (int )(re->options & 2687UL);
    }
  }
# 367
  if ((unsigned int )first_char != (unsigned int )((void *)0)) {
# 368
    if ((re->options & 1073741824UL) != 0UL) {
      {
# 368
      (*first_char) = (int )re->first_char;
      }
    } else {
# 368
      if ((re->options & 268435456UL) != 0UL) {
        {
# 368
        (*first_char) = -1;
        }
      } else {
        {
# 368
        (*first_char) = -2;
        }
      }
    }
  }
# 370
  return ((int )re->top_bracket);
}
}
# 391
int pcre_fullinfo(pcre const   *external_re , pcre_extra const   *study_data ,
                  int what , void *where ) 
{ real_pcre const   *re ;
  real_pcre_extra const   *study ;

  {
  {
# 395
  re = (real_pcre const   *)external_re;
# 396
  study = (real_pcre_extra const   *)study_data;
  }
# 398
  if ((unsigned int )re == (unsigned int )((void *)0)) {
# 398
    return (-2);
  } else {
# 398
    if ((unsigned int )where == (unsigned int )((void *)0)) {
# 398
      return (-2);
    }
  }
# 399
  if (re->magic_number != 1346589253UL) {
# 399
    return (-4);
  }
# 401
  switch (what) {
  case 0: 
  {
# 404
  (*((unsigned long *)where)) = re->options & 2687UL;
  }
# 405
  break;
  case 1: 
  {
# 408
  (*((size_t *)where)) = re->size;
  }
# 409
  break;
  case 2: 
  {
# 412
  (*((int *)where)) = (int )re->top_bracket;
  }
# 413
  break;
  case 3: 
  {
# 416
  (*((int *)where)) = (int )re->top_backref;
  }
# 417
  break;
  case 4: 
  {

  }
# 420
  if ((re->options & 1073741824UL) != 0UL) {
    {
# 420
    (*((int *)where)) = (int )re->first_char;
    }
  } else {
# 420
    if ((re->options & 268435456UL) != 0UL) {
      {
# 420
      (*((int *)where)) = -1;
      }
    } else {
      {
# 420
      (*((int *)where)) = -2;
      }
    }
  }
# 423
  break;
  case 5: 
  {

  }
# 426
  if ((unsigned int )study != (unsigned int )((void *)0)) {
# 426
    if (((int )study->options & 1) != 0) {
      {
# 426
      (*((uschar const   **)where)) = (uschar const   *)(study->start_bits);
      }
    } else {
      {
# 426
      (*((uschar const   **)where)) = (uschar const   *)((void *)0);
      }
    }
  } else {
    {
# 426
    (*((uschar const   **)where)) = (uschar const   *)((void *)0);
    }
  }
# 429
  break;
  case 6: 
  {

  }
# 432
  if ((re->options & 536870912UL) != 0UL) {
    {
# 432
    (*((int *)where)) = (int )re->req_char;
    }
  } else {
    {
# 432
    (*((int *)where)) = -1;
    }
  }
# 434
  break;
  default: 
  {

  }
# 436
  return (-3);
  }
# 439
  return (0);
}
}
# 497
static int check_escape(uschar const   **ptrptr , char const   **errorptr ,
                        int bracount , int options , BOOL isclass ,
                        compile_data *cd ) 
{ uschar const   *ptr ;
  int c ;
  int i ;
  uschar const   *oldptr ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
# 501
  ptr = (*ptrptr);
# 506
  ptr ++;
# 506
  c = (int )(*ptr);
  }
# 507
  if (c == 0) {
    {
# 507
    (*errorptr) = (char const   *)"\\ at end of pattern";
    }
  } else {
# 511
    if (! (c < 48)) {
# 511
      if (! (c > 122)) {
        {
# 516
        i = (int )escapes[c - 48];
        }
# 516
        if (i != 0) {
          {
# 516
          c = i;
          }
        } else {
# 523
          switch (c) {
          case 49: 
          {

          }
          case 50: 
          {

          }
          case 51: 
          {

          }
          case 52: 
          {

          }
          case 53: 
          {

          }
          case 54: 
          {

          }
          case 55: 
          {

          }
          case 56: 
          {

          }
          case 57: 
          {

          }
# 540
          if (! isclass) {
            {
# 542
            oldptr = ptr;
# 543
            c -= 48;
            }
# 544
            while (((int )(*(cd->ctypes + (int )(*(ptr + 1)))) & 4) != 0) {
              {
# 545
              ptr ++;
# 545
              c = (c * 10 + (int )(*ptr)) - 48;
              }
            }
# 546
            if (c < 10) {
              {
# 548
              c = - (12 + c);
              }
# 549
              break;
            } else {
# 546
              if (c <= bracount) {
                {
# 548
                c = - (12 + c);
                }
# 549
                break;
              }
            }
            {
# 551
            ptr = oldptr;
            }
          }
          {
# 558
          c = (int )(*ptr);
          }
# 558
          if (c >= 56) {
            {
# 560
            ptr --;
# 561
            c = 0;
            }
# 562
            break;
          }
          case 48: 
          {
# 569
          c -= 48;
          }
# 570
          while (1) {
            {
# 570
            tmp = i;
# 570
            i ++;
            }
# 570
            if (tmp < 2) {
# 570
              if (((int )(*(cd->ctypes + (int )(*(ptr + 1)))) & 4) != 0) {
# 570
                if ((int )(*(ptr + 1)) != 56) {
# 570
                  if (! ((int )(*(ptr + 1)) != 57)) {
# 570
                    break;
                  }
                } else {
# 570
                  break;
                }
              } else {
# 570
                break;
              }
            } else {
# 570
              break;
            }
            {
# 572
            ptr ++;
# 572
            c = (c * 8 + (int )(*ptr)) - 48;
            }
          }
          {
# 573
          c &= 255;
          }
# 574
          break;
          case 120: 
          {
# 606
          c = 0;
          }
# 607
          while (1) {
            {
# 607
            tmp___1 = i;
# 607
            i ++;
            }
# 607
            if (tmp___1 < 2) {
# 607
              if (! (((int )(*(cd->ctypes + (int )(*(ptr + 1)))) & 8) != 0)) {
# 607
                break;
              }
            } else {
# 607
              break;
            }
            {
# 609
            ptr ++;
            }
# 610
            if (((int )(*(cd->ctypes + (int )(*ptr))) & 4) != 0) {
              {
# 610
              tmp___0 = (int )'0';
              }
            } else {
              {
# 610
              tmp___0 = (int )'W';
              }
            }
            {
# 610
            c = (c * 16 + (int )(*(cd->lcc + (int )(*ptr)))) - tmp___0;
            }
          }
# 613
          break;
          case 99: 
          {
# 618
          ptr ++;
# 618
          c = (int )(*ptr);
          }
# 619
          if (c == 0) {
            {
# 621
            (*errorptr) = (char const   *)"\\c at end of pattern";
            }
# 622
            return (0);
          }
# 627
          if (c >= 97) {
# 627
            if (c <= 122) {
              {
# 627
              c = (int )(*(cd->fcc + c));
              }
            }
          }
          {
# 628
          c ^= 64;
          }
# 629
          break;
          default: 
          {

          }
# 638
          if ((options & 64) != 0) {
# 638
            switch (c) {
            default: 
            {
# 641
            (*errorptr) = (char const   *)"unrecognized character follows \\";
            }
# 642
            break;
            }
          }
# 644
          break;
          }
        }
      }
    }
  }
  {
# 648
  (*ptrptr) = ptr;
  }
# 649
  return (c);
}
}
# 670
static BOOL is_counted_repeat(uschar const   *p , compile_data *cd ) 
{ uschar const   *tmp ;
  uschar const   *tmp___0 ;
  uschar const   *tmp___1 ;

  {
  {
# 673
  tmp = p;
# 673
  p ++;
  }
# 673
  if (((int )(*(cd->ctypes + (int )(*tmp))) & 4) == 0) {
# 673
    return (0);
  }
# 674
  while (((int )(*(cd->ctypes + (int )(*p))) & 4) != 0) {
    {
# 674
    p ++;
    }
  }
# 675
  if ((int )(*p) == 125) {
# 675
    return (1);
  }
  {
# 677
  tmp___0 = p;
# 677
  p ++;
  }
# 677
  if ((int )(*tmp___0) != 44) {
# 677
    return (0);
  }
# 678
  if ((int )(*p) == 125) {
# 678
    return (1);
  }
  {
# 680
  tmp___1 = p;
# 680
  p ++;
  }
# 680
  if (((int )(*(cd->ctypes + (int )(*tmp___1))) & 4) == 0) {
# 680
    return (0);
  }
# 681
  while (((int )(*(cd->ctypes + (int )(*p))) & 4) != 0) {
    {
# 681
    p ++;
    }
  }
# 682
  return ((int )(*p) == 125);
}
}
# 707
static uschar const   *read_repeat_counts(uschar const   *p , int *minp ,
                                          int *maxp , char const   **errorptr ,
                                          compile_data *cd ) 
{ int min ;
  int max ;
  uschar const   *tmp ;
  uschar const   *tmp___0 ;

  {
  {
# 711
  min = 0;
# 712
  max = -1;
  }
# 714
  while (((int )(*(cd->ctypes + (int )(*p))) & 4) != 0) {
    {
# 714
    tmp = p;
# 714
    p ++;
# 714
    min = (min * 10 + (int )(*tmp)) - 48;
    }
  }
# 716
  if ((int )(*p) == 125) {
    {
# 716
    max = min;
    }
  } else {
    {
# 718
    p ++;
    }
# 718
    if ((int )(*p) != 125) {
      {
# 720
      max = 0;
      }
# 721
      while (((int )(*(cd->ctypes + (int )(*p))) & 4) != 0) {
        {
# 721
        tmp___0 = p;
# 721
        p ++;
# 721
        max = (max * 10 + (int )(*tmp___0)) - 48;
        }
      }
# 722
      if (max < min) {
        {
# 724
        (*errorptr) = (char const   *)"numbers out of order in {} quantifier";
        }
# 725
        return (p);
      }
    }
  }
# 733
  if (min > 65535) {
    {
# 734
    (*errorptr) = (char const   *)"number too big in {} quantifier";
    }
  } else {
# 733
    if (max > 65535) {
      {
# 734
      (*errorptr) = (char const   *)"number too big in {} quantifier";
      }
    } else {
      {
# 737
      (*minp) = min;
# 738
      (*maxp) = max;
      }
    }
  }
# 740
  return (p);
}
}
# 759
static int find_fixedlength(uschar *code , int options ) 
{ int length ;
  register int branchlength ;
  register uschar *cc ;
  int d ;
  register int op ;
  int tmp ;

  {
  {
# 762
  length = -1;
# 764
  branchlength = 0;
# 765
  cc = code + 3;
  }
# 770
  while (1) {
    {
# 773
    op = (int )(*cc);
    }
# 774
    if (op >= 70) {
      {
# 774
      op = 70;
      }
    }
# 776
    switch (op) {
    case 70: 
    {

    }
    case 65: 
    {

    }
    case 66: 
    {
# 781
    d = find_fixedlength(cc, options);
    }
# 782
    if (d < 0) {
# 782
      return (-1);
    }
    {
# 783
    branchlength += d;
    }
# 784
    while (1) {
      {
# 784
      cc += ((int )(*(cc + 1)) << 8) + (int )(*(cc + 2));
      }
# 784
      if (! ((int )(*cc) == 56)) {
# 784
        break;
      }
    }
    {
# 785
    cc += 3;
    }
# 786
    break;
    case 56: 
    {

    }
    case 57: 
    {

    }
    case 58: 
    {

    }
    case 59: 
    {

    }
    case 0: 
    {

    }
# 797
    if (length < 0) {
      {
# 797
      length = branchlength;
      }
    } else {
# 798
      if (length != branchlength) {
# 798
        return (-1);
      }
    }
# 799
    if ((int )(*cc) != 56) {
# 799
      return (length);
    }
    {
# 800
    cc += 3;
# 801
    branchlength = 0;
    }
# 802
    break;
    case 60: 
    {

    }
    case 61: 
    {

    }
    case 62: 
    {

    }
    case 63: 
    {

    }
# 810
    while (1) {
      {
# 810
      cc += ((int )(*(cc + 1)) << 8) + (int )(*(cc + 2));
      }
# 810
      if (! ((int )(*cc) == 56)) {
# 810
        break;
      }
    }
    {
# 811
    cc += 3;
    }
# 812
    break;
    case 64: 
    {
# 817
    cc ++;
    }
    case 67: 
    {

    }
    case 12: 
    {
# 822
    cc ++;
    }
    case 1: 
    {

    }
    case 11: 
    {

    }
    case 10: 
    {

    }
    case 13: 
    {

    }
    case 14: 
    {

    }
    case 2: 
    {

    }
    case 3: 
    {
# 832
    cc ++;
    }
# 833
    break;
    case 16: 
    {
# 841
    cc ++;
# 841
    branchlength += (int )(*cc);
# 846
    cc += (int )(*cc) + 1;
    }
# 847
    break;
    case 26: 
    {

    }
    case 44: 
    {
# 853
    branchlength += ((int )(*(cc + 1)) << 8) + (int )(*(cc + 2));
# 854
    cc += 4;
    }
# 855
    break;
    case 4: 
    {

    }
    case 5: 
    {

    }
    case 6: 
    {

    }
    case 7: 
    {

    }
    case 8: 
    {

    }
    case 9: 
    {

    }
    case 15: 
    {
# 866
    branchlength ++;
# 867
    cc ++;
    }
# 868
    break;
    case 53: 
    {

    }
# 874
    if ((int )(*cc) == 54) {
      {
# 874
      tmp = 2;
      }
    } else {
      {
# 874
      tmp = 33;
      }
    }
    {
# 874
    cc += tmp;
    }
# 876
    switch ((int )(*cc)) {
    case 45: 
    {

    }
    case 46: 
    {

    }
    case 49: 
    {

    }
    case 50: 
    {

    }
# 882
    return (-1);
    case 51: 
    {

    }
    case 52: 
    {

    }
# 886
    if (((int )(*(cc + 1)) << 8) + (int )(*(cc + 2)) !=
        ((int )(*(cc + 3)) << 8) + (int )(*(cc + 4))) {
# 886
      return (-1);
    }
    {
# 887
    branchlength += ((int )(*(cc + 1)) << 8) + (int )(*(cc + 2));
# 888
    cc += 5;
    }
# 889
    break;
    default: 
    {
# 892
    branchlength ++;
    }
    }
# 894
    break;
    default: 
    {

    }
# 899
    return (-1);
    }
  }
# 903
  return (0);
}
}
# 925
static BOOL check_posix_syntax(uschar const   *ptr , uschar const   **endptr ,
                               compile_data *cd ) 
{ int terminator ;

  {
  {
# 929
  ptr ++;
# 929
  terminator = (int )(*ptr);
# 930
  ptr ++;
  }
# 930
  if ((int )(*ptr) == 94) {
    {
# 930
    ptr ++;
    }
  }
# 931
  while (((int )(*(cd->ctypes + (int )(*ptr))) & 2) != 0) {
    {
# 931
    ptr ++;
    }
  }
# 932
  if ((int )(*ptr) == terminator) {
# 932
    if ((int )(*(ptr + 1)) == 93) {
      {
# 934
      (*endptr) = ptr;
      }
# 935
      return (1);
    }
  }
# 937
  return (0);
}
}
# 957
static int check_posix_name(uschar const   *ptr , int len ) 
{ register int yield ;
  int tmp ;

  {
  {
# 960
  yield = 0;
  }
# 961
  while ((int )posix_name_lengths[yield] != 0) {
# 963
    if (len == (int )posix_name_lengths[yield]) {
      {
# 963
      tmp = strncmp((char const   *)ptr, posix_names[yield], (unsigned int )len);
      }
# 963
      if (tmp == 0) {
# 964
        return (yield);
      }
    }
    {
# 965
    yield ++;
    }
  }
# 967
  return (-1);
}
}
# 994
static BOOL compile_branch(int options , int *brackets , uschar **codeptr ,
                           uschar const   **ptrptr , char const   **errorptr ,
                           int *optchanged , int *reqchar , int *countlits ,
                           compile_data *cd ) 
{ int repeat_type ;
  int op_type ;
  int repeat_min ;
  int repeat_max ;
  int bravalue ;
  int length ;
  int greedy_default ;
  int greedy_non_default ;
  int prevreqchar ;
  int condcount ;
  int subcountlits ;
  register int c ;
  register uschar *code ;
  uschar *tempcode ;
  uschar const   *ptr ;
  uschar const   *tempptr ;
  uschar *previous ;
  uschar class[32] ;
  BOOL negate_class ;
  int class_charcount ;
  int class_lastchar ;
  int newoptions ;
  int condref ;
  int subreqchar ;
  uschar *tmp ;
  uschar *tmp___0 ;
  uschar *tmp___1 ;
  uschar *tmp___2 ;
  BOOL local_negate ;
  int posix_class ;
  int i ;
  register uschar const   *cbits ;
  int taboffset ;
  BOOL tmp___3 ;
  register uschar const   *cbits___0 ;
  int d ;
  uschar const   *oldptr ;
  int uc ;
  uschar *tmp___4 ;
  uschar *tmp___5 ;
  BOOL tmp___6 ;
  int len ;
  uschar *tmp___7 ;
  uschar *tmp___8 ;
  uschar *tmp___9 ;
  uschar *tmp___10 ;
  uschar *tmp___11 ;
  uschar *tmp___12 ;
  uschar *tmp___13 ;
  uschar *tmp___14 ;
  uschar *tmp___15 ;
  uschar *tmp___16 ;
  uschar *tmp___17 ;
  uschar *tmp___18 ;
  uschar *tmp___19 ;
  uschar *tmp___20 ;
  uschar *tmp___21 ;
  uschar *tmp___22 ;
  uschar *tmp___23 ;
  uschar *tmp___24 ;
  uschar *tmp___25 ;
  uschar *tmp___26 ;
  uschar *tmp___27 ;
  uschar *tmp___28 ;
  uschar *tmp___29 ;
  uschar *tmp___30 ;
  register int i___0 ;
  int ketoffset ;
  int len___0 ;
  uschar *bralink ;
  register uschar *ket ;
  uschar *tmp___31 ;
  int offset ;
  uschar *tmp___32 ;
  uschar *tmp___33 ;
  uschar *tmp___34 ;
  uschar *tmp___35 ;
  uschar *tmp___36 ;
  int offset___0 ;
  uschar *tmp___37 ;
  uschar *tmp___38 ;
  uschar *tmp___39 ;
  int oldlinkoffset ;
  int offset___1 ;
  uschar *bra ;
  uschar *tmp___40 ;
  uschar *tmp___41 ;
  uschar *tmp___42 ;
  int set ;
  int unset ;
  int *optset ;
  uschar *tmp___43 ;
  uschar const   *tmp___44 ;
  uschar *tmp___45 ;
  uschar *tmp___46 ;
  int tmp___47 ;
  int tmp___48 ;
  BOOL tmp___49 ;
  uschar *tc ;
  uschar *tmp___50 ;
  uschar *tmp___51 ;
  uschar *tmp___52 ;
  uschar *tmp___53 ;

  {
  {
# 1004
  condcount = 0;
# 1005
  subcountlits = 0;
# 1007
  code = (*codeptr);
# 1009
  ptr = (*ptrptr);
# 1011
  previous = (uschar *)((void *)0);
# 1016
  greedy_default = (options & 512) != 0;
# 1017
  greedy_non_default = greedy_default ^ 1;
# 1021
  prevreqchar = -1;
# 1021
  (*reqchar) = prevreqchar;
# 1022
  (*countlits) = 0;
  }
# 1026
  while (1) {
    {
# 1035
    c = (int )(*ptr);
    }
# 1036
    if ((options & 8) != 0) {
# 1038
      if (((int )(*(cd->ctypes + c)) & 1) != 0) {
        goto __Cont;
      }
# 1039
      if (c == 35) {
# 1043
        while (1) {
          {
# 1043
          ptr ++;
# 1043
          c = (int )(*ptr);
          }
# 1043
          if (c != 0) {
# 1043
            if (! (c != 10)) {
# 1043
              break;
            }
          } else {
# 1043
            break;
          }
        }
        goto __Cont;
      }
    }
# 1048
    switch (c) {
    case 0: 
    {

    }
    case 124: 
    {

    }
    case 41: 
    {
# 1055
    (*codeptr) = code;
# 1056
    (*ptrptr) = ptr;
    }
# 1057
    return (1);
    case 94: 
    {
# 1062
    previous = (uschar *)((void *)0);
# 1063
    tmp = code;
# 1063
    code ++;
# 1063
    (*tmp) = (unsigned char )13;
    }
# 1064
    break;
    case 36: 
    {
# 1067
    previous = (uschar *)((void *)0);
# 1068
    tmp___0 = code;
# 1068
    code ++;
# 1068
    (*tmp___0) = (unsigned char )14;
    }
# 1069
    break;
    case 46: 
    {
# 1072
    previous = code;
# 1073
    tmp___1 = code;
# 1073
    code ++;
# 1073
    (*tmp___1) = (unsigned char )15;
    }
# 1074
    break;
    case 91: 
    {
# 1082
    previous = code;
# 1083
    tmp___2 = code;
# 1083
    code ++;
# 1083
    (*tmp___2) = (unsigned char )53;
# 1087
    ptr ++;
# 1087
    c = (int )(*ptr);
    }
# 1087
    if (c == 94) {
      {
# 1089
      negate_class = 1;
# 1090
      ptr ++;
# 1090
      c = (int )(*ptr);
      }
    } else {
      {
# 1092
      negate_class = 0;
      }
    }
    {
# 1097
    class_charcount = 0;
# 1098
    class_lastchar = -1;
# 1105
    memset((void *)(class), 0, 32U * sizeof(uschar ));
    }
# 1110
    while (1) {
# 1112
      if (c == 0) {
        {
# 1114
        (*errorptr) = (char const   *)"missing terminating ] for character class";
        }
        goto FAILED;
      }
# 1124
      if (c == 91) {
# 1124
        if ((int )(*(ptr + 1)) == 58) {
          goto _L;
        } else {
# 1124
          if ((int )(*(ptr + 1)) == 46) {
            goto _L;
          } else {
# 1124
            if ((int )(*(ptr + 1)) == 61) {
              _L: 
              {
# 1124
              tmp___3 = check_posix_syntax(ptr, & tempptr, cd);
              }
# 1124
              if (tmp___3) {
                {
# 1128
                local_negate = 0;
# 1130
                cbits = cd->cbits;
                }
# 1132
                if ((int )(*(ptr + 1)) != 58) {
                  {
# 1134
                  (*errorptr) = (char const   *)"POSIX collating elements are not supported";
                  }
                  goto FAILED;
                }
                {
# 1138
                ptr += 2;
                }
# 1139
                if ((int )(*ptr) == 94) {
                  {
# 1141
                  local_negate = 1;
# 1142
                  ptr ++;
                  }
                }
                {
# 1145
                posix_class = check_posix_name(ptr, tempptr - ptr);
                }
# 1146
                if (posix_class < 0) {
                  {
# 1148
                  (*errorptr) = (char const   *)"unknown POSIX class name";
                  }
                  goto FAILED;
                }
# 1156
                if ((options & 1) != 0) {
# 1156
                  if (posix_class <= 2) {
                    {
# 1157
                    posix_class = 0;
                    }
                  }
                }
                {
# 1162
                posix_class *= 3;
# 1163
                i = 0;
                }
# 1163
                while (i < 3) {
                  {
# 1165
                  taboffset = posix_class_maps[posix_class + i];
                  }
# 1166
                  if (taboffset < 0) {
# 1166
                    break;
                  }
# 1167
                  if (local_negate) {
                    {
# 1168
                    c = 0;
                    }
# 1168
                    while (c < 32) {
                      {
# 1168
                      class[c] = (unsigned char )((int )class[c] |
                                                  ~ ((int )(*(cbits +
                                                              (c + taboffset)))));
# 1168
                      c ++;
                      }
                    }
                  } else {
                    {
# 1170
                    c = 0;
                    }
# 1170
                    while (c < 32) {
                      {
# 1170
                      class[c] = (unsigned char )((int )class[c] |
                                                  (int )(*(cbits +
                                                           (c + taboffset))));
# 1170
                      c ++;
                      }
                    }
                  }
                  {
# 1163
                  i ++;
                  }
                }
                {
# 1173
                ptr = tempptr + 1;
# 1174
                class_charcount = 10;
                }
                goto __Cont___0;
              }
            }
          }
        }
      }
# 1186
      if (c == 92) {
        {
# 1188
        c = check_escape(& ptr, errorptr, (*brackets), options, 1, cd);
        }
# 1189
        if (- c == 3) {
          {
# 1189
          c = (int )'\b';
          }
        } else {
# 1190
          if (c < 0) {
            {
# 1192
            cbits___0 = cd->cbits;
# 1193
            class_charcount = 10;
            }
# 1194
            switch (- c) {
            case 5: 
            {
# 1197
            c = 0;
            }
# 1197
            while (c < 32) {
              {
# 1197
              class[c] = (unsigned char )((int )class[c] |
                                          (int )(*(cbits___0 + (c + 64))));
# 1197
              c ++;
              }
            }
            goto __Cont___0;
            case 4: 
            {
# 1201
            c = 0;
            }
# 1201
            while (c < 32) {
              {
# 1201
              class[c] = (unsigned char )((int )class[c] |
                                          ~ ((int )(*(cbits___0 + (c + 64)))));
# 1201
              c ++;
              }
            }
            goto __Cont___0;
            case 9: 
            {
# 1205
            c = 0;
            }
# 1205
            while (c < 32) {
              {
# 1205
              class[c] = (unsigned char )((int )class[c] |
                                          (int )(*(cbits___0 + (c + 160))));
# 1205
              c ++;
              }
            }
            goto __Cont___0;
            case 8: 
            {
# 1209
            c = 0;
            }
# 1209
            while (c < 32) {
              {
# 1209
              class[c] = (unsigned char )((int )class[c] |
                                          ~ ((int )(*(cbits___0 + (c + 160)))));
# 1209
              c ++;
              }
            }
            goto __Cont___0;
            case 7: 
            {
# 1213
            c = 0;
            }
# 1213
            while (c < 32) {
              {
# 1213
              class[c] = (unsigned char )((int )class[c] |
                                          (int )(*(cbits___0 + c)));
# 1213
              c ++;
              }
            }
            goto __Cont___0;
            case 6: 
            {
# 1217
            c = 0;
            }
# 1217
            while (c < 32) {
              {
# 1217
              class[c] = (unsigned char )((int )class[c] |
                                          ~ ((int )(*(cbits___0 + c))));
# 1217
              c ++;
              }
            }
            goto __Cont___0;
            default: 
            {
# 1221
            (*errorptr) = (char const   *)"invalid escape sequence in character class";
            }
            goto FAILED;
            }
          }
        }
      }
# 1242
      if ((int )(*(ptr + 1)) == 45) {
# 1242
        if ((int )(*(ptr + 2)) != 93) {
          {
# 1245
          ptr += 2;
# 1246
          d = (int )(*ptr);
          }
# 1248
          if (d == 0) {
            {
# 1250
            (*errorptr) = (char const   *)"missing terminating ] for character class";
            }
            goto FAILED;
          }
# 1258
          if (d == 92) {
            {
# 1260
            oldptr = ptr;
# 1261
            d = check_escape(& ptr, errorptr, (*brackets), options, 1, cd);
            }
# 1272
            if (d < 0) {
# 1274
              if (d == -3) {
                {
# 1274
                d = (int )'\b';
                }
              } else {
                {
# 1276
                ptr = oldptr - 2;
                }
                goto SINGLE_CHARACTER;
              }
            }
          }
# 1282
          if (d < c) {
            {
# 1284
            (*errorptr) = (char const   *)"range out of order in character class";
            }
            goto FAILED;
          }
# 1288
          while (c <= d) {
            {
# 1290
            class[c / 8] = (unsigned char )((int )class[c / 8] | (1 << (c & 7)));
            }
# 1291
            if ((options & 1) != 0) {
              {
# 1293
              uc = (int )(*(cd->fcc + c));
# 1294
              class[uc / 8] = (unsigned char )((int )class[uc / 8] |
                                               (1 << (uc & 7)));
              }
            }
            {
# 1296
            class_charcount ++;
# 1297
            class_lastchar = c;
# 1288
            c ++;
            }
          }
          goto __Cont___0;
        }
      }
      SINGLE_CHARACTER: 
      {
# 1307
      class[c / 8] = (unsigned char )((int )class[c / 8] | (1 << (c & 7)));
      }
# 1308
      if ((options & 1) != 0) {
        {
# 1310
        c = (int )(*(cd->fcc + c));
# 1311
        class[c / 8] = (unsigned char )((int )class[c / 8] | (1 << (c & 7)));
        }
      }
      {
# 1313
      class_charcount ++;
# 1314
      class_lastchar = c;
      }
      __Cont___0: 
      {
# 1110
      ptr ++;
# 1110
      c = (int )(*ptr);
      }
# 1110
      if (! (c != 93)) {
# 1110
        break;
      }
    }
# 1327
    if (class_charcount == 1) {
# 1327
      if (class_lastchar >= 0) {
# 1329
        if (negate_class) {
          {
# 1331
          (*(code + -1)) = (unsigned char )17;
          }
        } else {
          {
# 1335
          (*(code + -1)) = (unsigned char )16;
# 1336
          tmp___4 = code;
# 1336
          code ++;
# 1336
          (*tmp___4) = (unsigned char )1;
          }
        }
        {
# 1338
        tmp___5 = code;
# 1338
        code ++;
# 1338
        (*tmp___5) = (unsigned char )class_lastchar;
        }
      } else {
        goto _L___0;
      }
    } else {
      _L___0: 
# 1346
      if (negate_class) {
        {
# 1347
        c = 0;
        }
# 1347
        while (c < 32) {
          {
# 1347
          (*(code + c)) = (unsigned char )(~ ((int )class[c]));
# 1347
          c ++;
          }
        }
      } else {
        {
# 1349
        memcpy((void */* __restrict  */)((void *)code),
               (void const   */* __restrict  */)((void const   *)(class)), 32U);
        }
      }
      {
# 1350
      code += 32;
      }
    }
# 1352
    break;
    case 123: 
    {
# 1357
    tmp___6 = is_counted_repeat(ptr + 1, cd);
    }
# 1357
    if (! tmp___6) {
      goto NORMAL_CHAR;
    }
    {
# 1358
    ptr = read_repeat_counts(ptr + 1, & repeat_min, & repeat_max, errorptr, cd);
    }
# 1359
    if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
      goto FAILED;
    }
    goto REPEAT;
    case 42: 
    {
# 1363
    repeat_min = 0;
# 1364
    repeat_max = -1;
    }
    goto REPEAT;
    case 43: 
    {
# 1368
    repeat_min = 1;
# 1369
    repeat_max = -1;
    }
    goto REPEAT;
    case 63: 
    {
# 1373
    repeat_min = 0;
# 1374
    repeat_max = 1;
    }
    REPEAT: 
# 1377
    if ((unsigned int )previous == (unsigned int )((void *)0)) {
      {
# 1379
      (*errorptr) = (char const   *)"nothing to repeat";
      }
      goto FAILED;
    }
# 1387
    if ((int )(*(ptr + 1)) == 63) {
      {
# 1388
      repeat_type = greedy_non_default;
# 1388
      ptr ++;
      }
    } else {
      {
# 1389
      repeat_type = greedy_default;
      }
    }
# 1397
    if ((int )(*previous) == 16) {
      {
# 1399
      len = (int )(*(previous + 1));
      }
# 1401
      if (repeat_min == 0) {
        {
# 1401
        (*reqchar) = prevreqchar;
        }
      }
      {
# 1402
      (*countlits) += repeat_min - 1;
      }
# 1404
      if (len == 1) {
        {
# 1406
        c = (int )(*(previous + 2));
# 1407
        code = previous;
        }
      } else {
        {
# 1411
        c = (int )(*(previous + (len + 1)));
# 1412
        (*(previous + 1)) = (unsigned char )((int )(*(previous + 1)) - 1);
# 1413
        code --;
        }
      }
      {
# 1415
      op_type = 0;
      }
      goto OUTPUT_SINGLE_REPEAT;
    } else {
# 1423
      if ((int )(*previous) == 17) {
        {
# 1425
        op_type = 9;
# 1426
        c = (int )(*(previous + 1));
# 1427
        code = previous;
        }
        goto OUTPUT_SINGLE_REPEAT;
      } else {
# 1435
        if ((int )(*previous) < 10) {
          goto _L___7;
        } else {
# 1435
          if ((int )(*previous) == 15) {
            _L___7: 
            {
# 1437
            op_type = 18;
# 1438
            c = (int )(*previous);
# 1439
            code = previous;
            }
            OUTPUT_SINGLE_REPEAT: 
# 1446
            if (repeat_max == 0) {
              goto END_REPEAT;
            }
            {
# 1450
            repeat_type += op_type;
            }
# 1455
            if (repeat_min == 0) {
# 1457
              if (repeat_max == -1) {
                {
# 1457
                tmp___7 = code;
# 1457
                code ++;
# 1457
                (*tmp___7) = (unsigned char )(18 + repeat_type);
                }
              } else {
# 1458
                if (repeat_max == 1) {
                  {
# 1458
                  tmp___8 = code;
# 1458
                  code ++;
# 1458
                  (*tmp___8) = (unsigned char )(22 + repeat_type);
                  }
                } else {
                  {
# 1461
                  tmp___9 = code;
# 1461
                  code ++;
# 1461
                  (*tmp___9) = (unsigned char )(24 + repeat_type);
# 1462
                  tmp___10 = code;
# 1462
                  code ++;
# 1462
                  (*tmp___10) = (unsigned char )(repeat_max >> 8);
# 1463
                  tmp___11 = code;
# 1463
                  code ++;
# 1463
                  (*tmp___11) = (unsigned char )(repeat_max & 255);
                  }
                }
              }
            } else {
# 1469
              if (repeat_min == 1) {
# 1469
                if (repeat_max == -1) {
                  {
# 1470
                  tmp___12 = code;
# 1470
                  code ++;
# 1470
                  (*tmp___12) = (unsigned char )(20 + repeat_type);
                  }
                } else {
                  goto _L___1;
                }
              } else {
                _L___1: 
# 1477
                if (repeat_min != 1) {
                  {
# 1479
                  tmp___13 = code;
# 1479
                  code ++;
# 1479
                  (*tmp___13) = (unsigned char )(26 + op_type);
# 1480
                  tmp___14 = code;
# 1480
                  code ++;
# 1480
                  (*tmp___14) = (unsigned char )(repeat_min >> 8);
# 1481
                  tmp___15 = code;
# 1481
                  code ++;
# 1481
                  (*tmp___15) = (unsigned char )(repeat_min & 255);
                  }
                } else {
# 1491
                  if ((int )(*previous) == 16) {
# 1493
                    if ((unsigned int )code == (unsigned int )previous) {
                      {
# 1493
                      code += 2;
                      }
                    } else {
                      {
# 1493
                      (*(previous + 1)) = (unsigned char )((int )(*(previous + 1)) +
                                                           1);
                      }
                    }
                  } else {
# 1499
                    if ((int )(*previous) == 17) {
                      {
# 1499
                      code ++;
                      }
                    }
                  }
                }
# 1503
                if (repeat_max < 0) {
                  {
# 1505
                  tmp___16 = code;
# 1505
                  code ++;
# 1505
                  (*tmp___16) = (unsigned char )c;
# 1506
                  tmp___17 = code;
# 1506
                  code ++;
# 1506
                  (*tmp___17) = (unsigned char )(18 + repeat_type);
                  }
                } else {
# 1511
                  if (repeat_max != repeat_min) {
                    {
# 1513
                    tmp___18 = code;
# 1513
                    code ++;
# 1513
                    (*tmp___18) = (unsigned char )c;
# 1514
                    repeat_max -= repeat_min;
# 1515
                    tmp___19 = code;
# 1515
                    code ++;
# 1515
                    (*tmp___19) = (unsigned char )(24 + repeat_type);
# 1516
                    tmp___20 = code;
# 1516
                    code ++;
# 1516
                    (*tmp___20) = (unsigned char )(repeat_max >> 8);
# 1517
                    tmp___21 = code;
# 1517
                    code ++;
# 1517
                    (*tmp___21) = (unsigned char )(repeat_max & 255);
                    }
                  }
                }
              }
            }
            {
# 1523
            tmp___22 = code;
# 1523
            code ++;
# 1523
            (*tmp___22) = (unsigned char )c;
            }
          } else {
# 1529
            if ((int )(*previous) == 53) {
              goto _L___6;
            } else {
# 1529
              if ((int )(*previous) == 54) {
                _L___6: 
# 1531
                if (repeat_max == 0) {
                  {
# 1533
                  code = previous;
                  }
                  goto END_REPEAT;
                }
# 1536
                if (repeat_min == 0) {
# 1536
                  if (repeat_max == -1) {
                    {
# 1537
                    tmp___23 = code;
# 1537
                    code ++;
# 1537
                    (*tmp___23) = (unsigned char )(45 + repeat_type);
                    }
                  } else {
                    goto _L___4;
                  }
                } else {
                  _L___4: 
# 1538
                  if (repeat_min == 1) {
# 1538
                    if (repeat_max == -1) {
                      {
# 1539
                      tmp___24 = code;
# 1539
                      code ++;
# 1539
                      (*tmp___24) = (unsigned char )(47 + repeat_type);
                      }
                    } else {
                      goto _L___3;
                    }
                  } else {
                    _L___3: 
# 1540
                    if (repeat_min == 0) {
# 1540
                      if (repeat_max == 1) {
                        {
# 1541
                        tmp___25 = code;
# 1541
                        code ++;
# 1541
                        (*tmp___25) = (unsigned char )(49 + repeat_type);
                        }
                      } else {
                        goto _L___2;
                      }
                    } else {
                      _L___2: 
                      {
# 1544
                      tmp___26 = code;
# 1544
                      code ++;
# 1544
                      (*tmp___26) = (unsigned char )(51 + repeat_type);
# 1545
                      tmp___27 = code;
# 1545
                      code ++;
# 1545
                      (*tmp___27) = (unsigned char )(repeat_min >> 8);
# 1546
                      tmp___28 = code;
# 1546
                      code ++;
# 1546
                      (*tmp___28) = (unsigned char )(repeat_min & 255);
                      }
# 1547
                      if (repeat_max == -1) {
                        {
# 1547
                        repeat_max = 0;
                        }
                      }
                      {
# 1548
                      tmp___29 = code;
# 1548
                      code ++;
# 1548
                      (*tmp___29) = (unsigned char )(repeat_max >> 8);
# 1549
                      tmp___30 = code;
# 1549
                      code ++;
# 1549
                      (*tmp___30) = (unsigned char )(repeat_max & 255);
                      }
                    }
                  }
                }
              } else {
# 1556
                if ((int )(*previous) >= 70) {
                  goto _L___5;
                } else {
# 1556
                  if ((int )(*previous) == 65) {
                    goto _L___5;
                  } else {
# 1556
                    if ((int )(*previous) == 66) {
                      _L___5: 
                      {
# 1560
                      ketoffset = 0;
# 1561
                      len___0 = code - previous;
# 1562
                      bralink = (uschar *)((void *)0);
                      }
# 1570
                      if (repeat_max == -1) {
                        {
# 1572
                        ket = previous;
                        }
# 1573
                        while (1) {
                          {
# 1573
                          ket += ((int )(*(ket + 1)) << 8) + (int )(*(ket + 2));
                          }
# 1573
                          if (! ((int )(*ket) != 57)) {
# 1573
                            break;
                          }
                        }
                        {
# 1574
                        ketoffset = code - ket;
                        }
                      }
# 1584
                      if (repeat_min == 0) {
# 1589
                        if (subcountlits > 0) {
                          {
# 1591
                          (*reqchar) = prevreqchar;
# 1592
                          (*countlits) -= subcountlits;
                          }
                        }
# 1598
                        if (repeat_max == 0) {
                          {
# 1600
                          code = previous;
                          }
                          goto END_REPEAT;
                        }
# 1607
                        if (repeat_max <= 1) {
                          {
# 1609
                          memmove((void *)(previous + 1),
                                  (void const   *)previous,
                                  (unsigned int )len___0);
# 1610
                          code ++;
# 1611
                          tmp___31 = previous;
# 1611
                          previous ++;
# 1611
                          (*tmp___31) = (unsigned char )(68 + repeat_type);
                          }
                        } else {
                          {
# 1624
                          memmove((void *)(previous + 4),
                                  (void const   *)previous,
                                  (unsigned int )len___0);
# 1625
                          code += 4;
# 1626
                          tmp___32 = previous;
# 1626
                          previous ++;
# 1626
                          (*tmp___32) = (unsigned char )(68 + repeat_type);
# 1627
                          tmp___33 = previous;
# 1627
                          previous ++;
# 1627
                          (*tmp___33) = (unsigned char )70;
                          }
# 1632
                          if ((unsigned int )bralink ==
                              (unsigned int )((void *)0)) {
                            {
# 1632
                            offset = 0;
                            }
                          } else {
                            {
# 1632
                            offset = previous - bralink;
                            }
                          }
                          {
# 1633
                          bralink = previous;
# 1634
                          tmp___34 = previous;
# 1634
                          previous ++;
# 1634
                          (*tmp___34) = (unsigned char )(offset >> 8);
# 1635
                          tmp___35 = previous;
# 1635
                          previous ++;
# 1635
                          (*tmp___35) = (unsigned char )(offset & 255);
                          }
                        }
                        {
# 1638
                        repeat_max --;
                        }
                      } else {
                        {
# 1647
                        i___0 = 1;
                        }
# 1647
                        while (i___0 < repeat_min) {
                          {
# 1649
                          memcpy((void */* __restrict  */)((void *)code),
                                 (void const   */* __restrict  */)((void const   *)previous),
                                 (unsigned int )len___0);
# 1650
                          code += len___0;
# 1647
                          i___0 ++;
                          }
                        }
# 1652
                        if (repeat_max > 0) {
                          {
# 1652
                          repeat_max -= repeat_min;
                          }
                        }
                      }
# 1661
                      if (repeat_max >= 0) {
                        {
# 1663
                        i___0 = repeat_max - 1;
                        }
# 1663
                        while (i___0 >= 0) {
                          {
# 1665
                          tmp___36 = code;
# 1665
                          code ++;
# 1665
                          (*tmp___36) = (unsigned char )(68 + repeat_type);
                          }
# 1670
                          if (i___0 != 0) {
                            {
# 1673
                            tmp___37 = code;
# 1673
                            code ++;
# 1673
                            (*tmp___37) = (unsigned char )70;
                            }
# 1674
                            if ((unsigned int )bralink ==
                                (unsigned int )((void *)0)) {
                              {
# 1674
                              offset___0 = 0;
                              }
                            } else {
                              {
# 1674
                              offset___0 = code - bralink;
                              }
                            }
                            {
# 1675
                            bralink = code;
# 1676
                            tmp___38 = code;
# 1676
                            code ++;
# 1676
                            (*tmp___38) = (unsigned char )(offset___0 >> 8);
# 1677
                            tmp___39 = code;
# 1677
                            code ++;
# 1677
                            (*tmp___39) = (unsigned char )(offset___0 & 255);
                            }
                          }
                          {
# 1680
                          memcpy((void */* __restrict  */)((void *)code),
                                 (void const   */* __restrict  */)((void const   *)previous),
                                 (unsigned int )len___0);
# 1681
                          code += len___0;
# 1663
                          i___0 --;
                          }
                        }
# 1687
                        while ((unsigned int )bralink !=
                               (unsigned int )((void *)0)) {
                          {
# 1690
                          offset___1 = (code - bralink) + 1;
# 1691
                          bra = code - offset___1;
# 1692
                          oldlinkoffset = ((int )(*(bra + 1)) << 8) +
                                          (int )(*(bra + 2));
                          }
# 1693
                          if (oldlinkoffset == 0) {
                            {
# 1693
                            bralink = (uschar *)((void *)0);
                            }
                          } else {
                            {
# 1693
                            bralink = bralink - oldlinkoffset;
                            }
                          }
                          {
# 1694
                          tmp___40 = code;
# 1694
                          code ++;
# 1694
                          (*tmp___40) = (unsigned char )57;
# 1695
                          tmp___41 = code;
# 1695
                          code ++;
# 1695
                          (*(bra + 1)) = (unsigned char )(offset___1 >> 8);
# 1695
                          (*tmp___41) = (*(bra + 1));
# 1696
                          tmp___42 = code;
# 1696
                          code ++;
# 1696
                          (*(bra + 2)) = (unsigned char )(offset___1 & 255);
# 1696
                          (*tmp___42) = (*(bra + 2));
                          }
                        }
                      } else {
                        {
# 1705
                        (*(code + - ketoffset)) = (unsigned char )(58 +
                                                                   repeat_type);
                        }
                      }
                    } else {
                      {
# 1712
                      (*errorptr) = (char const   *)"internal error: unexpected repeat";
                      }
                      goto FAILED;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    END_REPEAT: 
    {
# 1719
    previous = (uschar *)((void *)0);
    }
# 1720
    break;
    case 40: 
    {
# 1731
    newoptions = options;
# 1732
    condref = -1;
# 1734
    ptr ++;
    }
# 1734
    if ((int )(*ptr) == 63) {
      {
# 1739
      ptr ++;
      }
# 1739
      switch ((int )(*ptr)) {
      case 35: 
      {
# 1742
      ptr ++;
      }
# 1743
      while ((int )(*ptr) != 41) {
        {
# 1743
        ptr ++;
        }
      }
      goto __Cont;
      case 58: 
      {
# 1747
      bravalue = 70;
# 1748
      ptr ++;
      }
# 1749
      break;
      case 40: 
      {
# 1752
      bravalue = 66;
# 1753
      ptr ++;
      }
# 1753
      if (((int )(*(cd->ctypes + (int )(*ptr))) & 4) != 0) {
        {
# 1755
        condref = (int )(*ptr) - 48;
        }
# 1756
        while (1) {
          {
# 1756
          ptr ++;
          }
# 1756
          if (! ((int )(*ptr) != 41)) {
# 1756
            break;
          }
          {
# 1756
          condref = (condref * 10 + (int )(*ptr)) - 48;
          }
        }
# 1757
        if (condref == 0) {
          {
# 1759
          (*errorptr) = (char const   *)"invalid condition (?(0)";
          }
          goto FAILED;
        }
        {
# 1762
        ptr ++;
        }
      } else {
        {
# 1764
        ptr --;
        }
      }
# 1765
      break;
      case 61: 
      {
# 1768
      bravalue = 60;
# 1769
      ptr ++;
      }
# 1770
      break;
      case 33: 
      {
# 1773
      bravalue = 61;
# 1774
      ptr ++;
      }
# 1775
      break;
      case 60: 
      {
# 1778
      ptr ++;
      }
# 1778
      switch ((int )(*ptr)) {
      case 61: 
      {
# 1781
      bravalue = 62;
# 1782
      ptr ++;
      }
# 1783
      break;
      case 33: 
      {
# 1786
      bravalue = 63;
# 1787
      ptr ++;
      }
# 1788
      break;
      default: 
      {
# 1791
      (*errorptr) = (char const   *)"unrecognized character after (?<";
      }
      goto FAILED;
      }
# 1794
      break;
      case 62: 
      {
# 1797
      bravalue = 65;
# 1798
      ptr ++;
      }
# 1799
      break;
      case 82: 
      {
# 1802
      tmp___43 = code;
# 1802
      code ++;
# 1802
      (*tmp___43) = (unsigned char )55;
# 1803
      ptr ++;
      }
      goto __Cont;
      default: 
      {
# 1807
      unset = 0;
# 1807
      set = unset;
# 1808
      optset = & set;
      }
# 1810
      while (1) {
# 1810
        if ((int )(*ptr) != 41) {
# 1810
          if (! ((int )(*ptr) != 58)) {
# 1810
            break;
          }
        } else {
# 1810
          break;
        }
        {
# 1812
        tmp___44 = ptr;
# 1812
        ptr ++;
        }
# 1812
        switch ((int )(*tmp___44)) {
        case 45: 
        {
# 1814
        optset = & unset;
        }
# 1814
        break;
        case 105: 
        {
# 1816
        (*optset) |= 1;
        }
# 1816
        break;
        case 109: 
        {
# 1817
        (*optset) |= 2;
        }
# 1817
        break;
        case 115: 
        {
# 1818
        (*optset) |= 4;
        }
# 1818
        break;
        case 120: 
        {
# 1819
        (*optset) |= 8;
        }
# 1819
        break;
        case 85: 
        {
# 1820
        (*optset) |= 512;
        }
# 1820
        break;
        case 88: 
        {
# 1821
        (*optset) |= 64;
        }
# 1821
        break;
        default: 
        {
# 1824
        (*errorptr) = (char const   *)"unrecognized character after (?";
        }
        goto FAILED;
        }
      }
      {
# 1831
      newoptions = (options | set) & ~ unset;
      }
# 1842
      if ((int )(*ptr) == 41) {
# 1844
        if ((options & 134217728) != 0) {
# 1844
          if ((options & 7) != (newoptions & 7)) {
            {
# 1847
            tmp___45 = code;
# 1847
            code ++;
# 1847
            (*tmp___45) = (unsigned char )12;
# 1848
            tmp___46 = code;
# 1848
            code ++;
# 1848
            (*optchanged) = newoptions & 7;
# 1848
            (*tmp___46) = (unsigned char )(*optchanged);
            }
          }
        }
        {
# 1850
        options = newoptions;
# 1851
        previous = (uschar *)((void *)0);
        }
        goto __Cont;
      }
      {
# 1860
      bravalue = 70;
# 1861
      ptr ++;
      }
      }
    } else {
      {
# 1869
      (*brackets) ++;
      }
# 1869
      if ((*brackets) > 99) {
        {
# 1871
        (*errorptr) = (char const   *)"too many capturing parenthesized sub-patterns";
        }
        goto FAILED;
      }
      {
# 1874
      bravalue = 70 + (*brackets);
      }
    }
# 1882
    if (bravalue >= 65) {
      {
# 1882
      previous = code;
      }
    } else {
      {
# 1882
      previous = (uschar *)((void *)0);
      }
    }
    {
# 1883
    (*code) = (unsigned char )bravalue;
# 1884
    tempcode = code;
    }
# 1886
    if (bravalue == 62) {
      {
# 1886
      tmp___47 = 1;
      }
    } else {
# 1886
      if (bravalue == 63) {
        {
# 1886
        tmp___47 = 1;
        }
      } else {
        {
# 1886
        tmp___47 = 0;
        }
      }
    }
# 1886
    if ((options & 7) != (newoptions & 7)) {
      {
# 1886
      tmp___48 = newoptions & 7;
      }
    } else {
      {
# 1886
      tmp___48 = -1;
      }
    }
    {
# 1886
    tmp___49 = compile_regex(options | 134217728, tmp___48, brackets,
                             & tempcode, & ptr, errorptr, tmp___47, condref,
                             & subreqchar, & subcountlits, cd);
    }
# 1886
    if (! tmp___49) {
      goto FAILED;
    }
# 1910
    if (bravalue == 66) {
      {
# 1912
      tc = code;
# 1913
      condcount = 0;
      }
# 1915
      while (1) {
        {
# 1916
        condcount ++;
# 1917
        tc += ((int )(*(tc + 1)) << 8) | (int )(*(tc + 2));
        }
# 1915
        if (! ((int )(*tc) != 57)) {
# 1915
          break;
        }
      }
# 1921
      if (condcount > 2) {
        {
# 1923
        (*errorptr) = (char const   *)"conditional group contains more than two branches";
        }
        goto FAILED;
      }
    }
# 1936
    if (subreqchar > 0) {
# 1936
      if (bravalue >= 70) {
        goto _L___8;
      } else {
# 1936
        if (bravalue == 65) {
          goto _L___8;
        } else {
# 1936
          if (bravalue == 60) {
            goto _L___8;
          } else {
# 1936
            if (bravalue == 66) {
# 1936
              if (condcount == 2) {
                _L___8: 
                {
# 1940
                prevreqchar = (*reqchar);
# 1941
                (*reqchar) = subreqchar;
                }
# 1942
                if (bravalue != 60) {
                  {
# 1942
                  (*countlits) += subcountlits;
                  }
                }
              }
            }
          }
        }
      }
    }
    {
# 1947
    code = tempcode;
    }
# 1951
    if ((int )(*ptr) != 41) {
      {
# 1953
      (*errorptr) = (char const   *)"missing )";
      }
      goto FAILED;
    }
# 1956
    break;
    case 92: 
    {
# 1963
    tempptr = ptr;
# 1964
    c = check_escape(& ptr, errorptr, (*brackets), options, 0, cd);
    }
# 1973
    if (c < 0) {
# 1975
      if (- c >= 12) {
        {
# 1977
        previous = code;
# 1978
        tmp___50 = code;
# 1978
        code ++;
# 1978
        (*tmp___50) = (unsigned char )54;
# 1979
        tmp___51 = code;
# 1979
        code ++;
# 1979
        (*tmp___51) = (unsigned char )(- c - 12);
        }
      } else {
# 1983
        if (- c > 3) {
# 1983
          if (- c < 10) {
            {
# 1983
            previous = code;
            }
          } else {
            {
# 1983
            previous = (uschar *)((void *)0);
            }
          }
        } else {
          {
# 1983
          previous = (uschar *)((void *)0);
          }
        }
        {
# 1984
        tmp___52 = code;
# 1984
        code ++;
# 1984
        (*tmp___52) = (unsigned char )(- c);
        }
      }
      goto __Cont;
    }
    {
# 1991
    ptr = tempptr;
# 1992
    c = (int )'\\';
    }
    NORMAL_CHAR: 
    default: 
    {
# 2000
    previous = code;
# 2001
    (*code) = (unsigned char )16;
# 2002
    code += 2;
# 2003
    length = 0;
    }
# 2005
    while (1) {
# 2007
      if ((options & 8) != 0) {
# 2009
        if (((int )(*(cd->ctypes + c)) & 1) != 0) {
          goto __Cont___1;
        }
# 2010
        if (c == 35) {
# 2014
          while (1) {
            {
# 2014
            ptr ++;
# 2014
            c = (int )(*ptr);
            }
# 2014
            if (c != 0) {
# 2014
              if (! (c != 10)) {
# 2014
                break;
              }
            } else {
# 2014
              break;
            }
          }
# 2015
          if (c == 0) {
# 2015
            break;
          }
          goto __Cont___1;
        }
      }
# 2024
      if (c == 92) {
        {
# 2026
        tempptr = ptr;
# 2027
        c = check_escape(& ptr, errorptr, (*brackets), options, 0, cd);
        }
# 2028
        if (c < 0) {
          {
# 2028
          ptr = tempptr;
          }
# 2028
          break;
        }
      }
      {
# 2047
      tmp___53 = code;
# 2047
      code ++;
# 2047
      (*tmp___53) = (unsigned char )c;
# 2048
      length ++;
      }
      __Cont___1: 
# 2005
      if (length < 255) {
        {
# 2005
        ptr ++;
# 2005
        c = (int )(*ptr);
        }
# 2005
        if (! (((int )(*(cd->ctypes + c)) & 128) == 0)) {
# 2005
          break;
        }
      } else {
# 2005
        break;
      }
    }
# 2057
    if (length > 1) {
      {
# 2057
      prevreqchar = (int )(*(code + -2));
      }
    } else {
      {
# 2057
      prevreqchar = (*reqchar);
      }
    }
    {
# 2058
    (*reqchar) = (int )(*(code + -1));
# 2059
    (*countlits) += length;
# 2064
    (*(previous + 1)) = (unsigned char )length;
    }
# 2065
    if (length < 255) {
      {
# 2065
      ptr --;
      }
    }
# 2066
    break;
    }
    __Cont: 
    {
# 1026
    ptr ++;
    }
  }
  FAILED: 
  {
# 2075
  (*ptrptr) = ptr;
  }
# 2076
  return (0);
}
}
# 2111
static BOOL compile_regex(int options , int optchanged , int *brackets ,
                          uschar **codeptr , uschar const   **ptrptr ,
                          char const   **errorptr , BOOL lookbehind ,
                          int condref , int *reqchar , int *countlits ,
                          compile_data *cd ) 
{ uschar const   *ptr ;
  uschar *code ;
  uschar *last_branch ;
  uschar *start_bracket ;
  uschar *reverse_count ;
  int oldoptions ;
  int branchreqchar ;
  int branchcountlits ;
  uschar *tmp ;
  uschar *tmp___0 ;
  int length ;
  uschar *tmp___1 ;
  uschar *tmp___2 ;
  uschar *tmp___3 ;
  uschar *tmp___4 ;
  uschar *tmp___5 ;
  BOOL tmp___6 ;
  uschar *tmp___7 ;
  uschar *tmp___8 ;
  uschar *tmp___9 ;
  uschar *tmp___10 ;
  uschar *tmp___11 ;

  {
  {
# 2116
  ptr = (*ptrptr);
# 2117
  code = (*codeptr);
# 2118
  last_branch = code;
# 2119
  start_bracket = code;
# 2120
  reverse_count = (uschar *)((void *)0);
# 2121
  oldoptions = options & 7;
# 2124
  (*reqchar) = -1;
# 2125
  (*countlits) = 2147483647;
# 2126
  code += 3;
  }
# 2131
  if (condref >= 0) {
    {
# 2133
    tmp = code;
# 2133
    code ++;
# 2133
    (*tmp) = (unsigned char )67;
# 2134
    tmp___0 = code;
# 2134
    code ++;
# 2134
    (*tmp___0) = (unsigned char )condref;
    }
  }
# 2139
  while (1) {
# 2145
    if (optchanged >= 0) {
      {
# 2147
      tmp___1 = code;
# 2147
      code ++;
# 2147
      (*tmp___1) = (unsigned char )12;
# 2148
      tmp___2 = code;
# 2148
      code ++;
# 2148
      (*tmp___2) = (unsigned char )optchanged;
# 2149
      options = (options & -8) | optchanged;
      }
    }
# 2154
    if (lookbehind) {
      {
# 2156
      tmp___3 = code;
# 2156
      code ++;
# 2156
      (*tmp___3) = (unsigned char )64;
# 2157
      reverse_count = code;
# 2158
      tmp___4 = code;
# 2158
      code ++;
# 2158
      (*tmp___4) = (unsigned char )0;
# 2159
      tmp___5 = code;
# 2159
      code ++;
# 2159
      (*tmp___5) = (unsigned char )0;
      }
    }
    {
# 2164
    tmp___6 = compile_branch(options, brackets, & code, & ptr, errorptr,
                             & optchanged, & branchreqchar, & branchcountlits,
                             cd);
    }
# 2164
    if (! tmp___6) {
      {
# 2167
      (*ptrptr) = ptr;
      }
# 2168
      return (0);
    }
    {
# 2173
    length = code - last_branch;
# 2174
    (*(last_branch + 1)) = (unsigned char )(length >> 8);
# 2175
    (*(last_branch + 2)) = (unsigned char )(length & 255);
    }
# 2181
    if ((*reqchar) != -2) {
# 2183
      if (branchreqchar >= 0) {
# 2185
        if ((*reqchar) == -1) {
          {
# 2185
          (*reqchar) = branchreqchar;
          }
        } else {
# 2186
          if ((*reqchar) != branchreqchar) {
            {
# 2186
            (*reqchar) = -2;
            }
          }
        }
      } else {
        {
# 2188
        (*reqchar) = -2;
        }
      }
    }
# 2193
    if (branchcountlits < (*countlits)) {
      {
# 2193
      (*countlits) = branchcountlits;
      }
    }
# 2200
    if (lookbehind) {
      {
# 2202
      (*code) = (unsigned char )0;
# 2203
      length = find_fixedlength(last_branch, options);
      }
# 2205
      if (length < 0) {
        {
# 2207
        (*errorptr) = (char const   *)"lookbehind assertion is not fixed length";
# 2208
        (*ptrptr) = ptr;
        }
# 2209
        return (0);
      }
      {
# 2211
      (*(reverse_count + 0)) = (unsigned char )(length >> 8);
# 2212
      (*(reverse_count + 1)) = (unsigned char )(length & 255);
      }
    }
# 2220
    if ((int )(*ptr) != 124) {
      {
# 2222
      length = code - start_bracket;
# 2223
      tmp___7 = code;
# 2223
      code ++;
# 2223
      (*tmp___7) = (unsigned char )57;
# 2224
      tmp___8 = code;
# 2224
      code ++;
# 2224
      (*tmp___8) = (unsigned char )(length >> 8);
# 2225
      tmp___9 = code;
# 2225
      code ++;
# 2225
      (*tmp___9) = (unsigned char )(length & 255);
      }
# 2226
      if (optchanged >= 0) {
        {
# 2228
        tmp___10 = code;
# 2228
        code ++;
# 2228
        (*tmp___10) = (unsigned char )12;
# 2229
        tmp___11 = code;
# 2229
        code ++;
# 2229
        (*tmp___11) = (unsigned char )oldoptions;
        }
      }
      {
# 2231
      (*codeptr) = code;
# 2232
      (*ptrptr) = ptr;
      }
# 2233
      return (1);
    }
    {
# 2238
    (*code) = (unsigned char )56;
# 2239
    last_branch = code;
# 2240
    code += 3;
# 2241
    ptr ++;
    }
  }
# 2244
  return (0);
}
}
# 2269
static uschar const   *first_significant_code(uschar const   *code ,
                                              int *options , int optbit ,
                                              BOOL optstop ) 
{ 

  {
# 2273
  while (1) {
# 2275
    switch ((int )(*code)) {
    case 12: 
    {

    }
# 2278
    if (optbit > 0) {
# 2278
      if (((int )(*(code + 1)) & optbit) != ((*options) & optbit)) {
# 2280
        if (optstop) {
# 2280
          return (code);
        }
        {
# 2281
        (*options) = (int )(*(code + 1));
        }
      }
    }
    {
# 2283
    code += 2;
    }
# 2284
    break;
    case 67: 
    {
# 2287
    code += 2;
    }
# 2288
    break;
    case 3: 
    {

    }
    case 2: 
    {
# 2292
    code ++;
    }
# 2293
    break;
    case 61: 
    {

    }
    case 62: 
    {

    }
    case 63: 
    {

    }
# 2298
    while (1) {
      {
# 2298
      code += ((int )(*(code + 1)) << 8) + (int )(*(code + 2));
      }
# 2298
      if (! ((int )(*code) == 56)) {
# 2298
        break;
      }
    }
    {
# 2299
    code += 3;
    }
# 2300
    break;
    default: 
    {

    }
# 2303
    return (code);
    }
  }
# 2307
  return ((uschar const   *)0);
}
}
# 2333
static BOOL is_anchored(uschar const   *code , int *options ) 
{ uschar const   *scode ;
  uschar const   *tmp ;
  register int op ;
  BOOL tmp___0 ;

  {
# 2336
  while (1) {
    {
# 2337
    tmp = first_significant_code(code + 3, options, 2, 0);
# 2337
    scode = tmp;
# 2339
    op = (int )(*scode);
    }
# 2340
    if (op >= 70) {
      goto _L___1;
    } else {
# 2340
      if (op == 60) {
        goto _L___1;
      } else {
# 2340
        if (op == 65) {
          goto _L___1;
        } else {
# 2340
          if (op == 66) {
            _L___1: 
            {
# 2341
            tmp___0 = is_anchored(scode, options);
            }
# 2341
            if (! tmp___0) {
# 2341
              return (0);
            }
          } else {
# 2342
            if (op == 36) {
              goto _L___0;
            } else {
# 2342
              if (op == 37) {
                _L___0: 
# 2342
                if (((*options) & 4) != 0) {
# 2344
                  if ((int )(*(scode + 1)) != 15) {
# 2344
                    return (0);
                  }
                } else {
                  goto _L;
                }
              } else {
                _L: 
# 2345
                if (op != 1) {
# 2345
                  if (((*options) & 2) != 0) {
# 2347
                    return (0);
                  } else {
# 2345
                    if (op != 13) {
# 2347
                      return (0);
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
# 2348
    code += ((int )(*(code + 1)) << 8) + (int )(*(code + 2));
    }
# 2336
    if (! ((int )(*code) == 56)) {
# 2336
      break;
    }
  }
# 2351
  return (1);
}
}
# 2369
static BOOL is_startline(uschar const   *code ) 
{ uschar const   *scode ;
  uschar const   *tmp ;
  register int op ;
  BOOL tmp___0 ;

  {
# 2372
  while (1) {
    {
# 2373
    tmp = first_significant_code(code + 3, (int *)((void *)0), 0, 0);
# 2373
    scode = tmp;
# 2374
    op = (int )(*scode);
    }
# 2375
    if (op >= 70) {
      goto _L___0;
    } else {
# 2375
      if (op == 60) {
        goto _L___0;
      } else {
# 2375
        if (op == 65) {
          goto _L___0;
        } else {
# 2375
          if (op == 66) {
            _L___0: 
            {
# 2376
            tmp___0 = is_startline(scode);
            }
# 2376
            if (! tmp___0) {
# 2376
              return (0);
            }
          } else {
# 2377
            if (op == 36) {
              goto _L;
            } else {
# 2377
              if (op == 37) {
                _L: 
# 2378
                if ((int )(*(scode + 1)) != 15) {
# 2378
                  return (0);
                }
              } else {
# 2379
                if (op != 13) {
# 2379
                  return (0);
                }
              }
            }
          }
        }
      }
    }
    {
# 2380
    code += ((int )(*(code + 1)) << 8) + (int )(*(code + 2));
    }
# 2372
    if (! ((int )(*code) == 56)) {
# 2372
      break;
    }
  }
# 2383
  return (1);
}
}
# 2405
static int find_firstchar(uschar const   *code , int *options ) 
{ register int c ;
  int d ;
  uschar const   *scode ;
  uschar const   *tmp ;
  register int op ;

  {
  {
# 2408
  c = -1;
  }
# 2409
  while (1) {
    {
# 2411
    tmp = first_significant_code(code + 3, options, 1, 1);
# 2411
    scode = tmp;
# 2413
    op = (int )(*scode);
    }
# 2415
    if (op >= 70) {
      {
# 2415
      op = 70;
      }
    }
# 2417
    switch (op) {
    default: 
    {

    }
# 2420
    return (-1);
    case 70: 
    {

    }
    case 60: 
    {

    }
    case 65: 
    {

    }
    case 66: 
    {
# 2426
    d = find_firstchar(scode, options);
    }
# 2426
    if (d < 0) {
# 2426
      return (-1);
    }
# 2427
    if (c < 0) {
      {
# 2427
      c = d;
      }
    } else {
# 2427
      if (c != d) {
# 2427
        return (-1);
      }
    }
# 2428
    break;
    case 26: 
    {
# 2431
    scode ++;
    }
    case 16: 
    {
# 2434
    scode ++;
    }
    case 20: 
    {

    }
    case 21: 
    {

    }
# 2438
    if (c < 0) {
      {
# 2438
      c = (int )(*(scode + 1));
      }
    } else {
# 2438
      if (c != (int )(*(scode + 1))) {
# 2438
        return (-1);
      }
    }
# 2439
    break;
    }
    {
# 2442
    code += ((int )(*(code + 1)) << 8) + (int )(*(code + 2));
    }
# 2409
    if (! ((int )(*code) == 56)) {
# 2409
      break;
    }
  }
# 2445
  return (c);
}
}
# 2470
pcre *pcre_compile(char const   *pattern , int options ,
                   char const   **errorptr , int *erroroffset ,
                   unsigned char const   *tables ) 
{ real_pcre *re ;
  int length ;
  int runlength ;
  int c ;
  int reqchar ;
  int countlits ;
  int bracount ;
  int top_backref ;
  int branch_extra ;
  int branch_newextra ;
  unsigned int brastackptr ;
  size_t size ;
  uschar *code ;
  uschar const   *ptr ;
  compile_data compile_block ;
  int brastack[200] ;
  uschar bralenstack[200] ;
  int min ;
  int max ;
  int class_charcount ;
  uschar const   *save_ptr ;
  int refnum ;
  BOOL tmp ;
  BOOL tmp___0 ;
  int ch ;
  int tmp___1 ;
  BOOL tmp___2 ;
  int set ;
  int unset ;
  int *optset ;
  unsigned int tmp___3 ;
  int minval ;
  int maxval ;
  int duplength ;
  BOOL tmp___4 ;
  uschar const   *saveptr ;
  uschar *tmp___6 ;
  int temp_options ;
  int ch___0 ;
  int tmp___7 ;
  BOOL tmp___8 ;
  BOOL tmp___9 ;

  {
  {
# 2475
  length = 3;
# 2478
  bracount = 0;
# 2479
  top_backref = 0;
# 2480
  branch_extra = 0;
# 2482
  brastackptr = 0U;
  }
# 2497
  if ((options & 2048) != 0) {
    {
# 2499
    (*errorptr) = (char const   *)"this version of PCRE is not compiled with PCRE_UTF8 support";
    }
# 2500
    return ((void *)0);
  }
# 2507
  if ((unsigned int )errorptr == (unsigned int )((void *)0)) {
# 2507
    return ((void *)0);
  }
  {
# 2508
  (*errorptr) = (char const   *)((void *)0);
  }
# 2512
  if ((unsigned int )erroroffset == (unsigned int )((void *)0)) {
    {
# 2514
    (*errorptr) = (char const   *)"erroffset passed as NULL";
    }
# 2515
    return ((void *)0);
  }
  {
# 2517
  (*erroroffset) = 0;
  }
# 2519
  if ((options & -2688) != 0) {
    {
# 2521
    (*errorptr) = (char const   *)"unknown option bit(s) set";
    }
# 2522
    return ((void *)0);
  }
# 2527
  if ((unsigned int )tables == (unsigned int )((void *)0)) {
    {
# 2527
    tables = (unsigned char const   *)(pcre_default_tables);
    }
  }
  {
# 2528
  compile_block.lcc = tables + 0;
# 2529
  compile_block.fcc = tables + 256;
# 2530
  compile_block.cbits = tables + 512;
# 2531
  compile_block.ctypes = tables + 832;
# 2545
  ptr = (uschar const   *)(pattern - 1);
  }
# 2546
  while (1) {
    {
# 2546
    ptr ++;
# 2546
    c = (int )(*ptr);
    }
# 2546
    if (! (c != 0)) {
# 2546
      break;
    }
# 2551
    if ((options & 8) != 0) {
# 2553
      if (((int )(*(compile_block.ctypes + c)) & 1) != 0) {
# 2553
        continue;
      }
# 2554
      if (c == 35) {
# 2558
        while (1) {
          {
# 2558
          ptr ++;
# 2558
          c = (int )(*ptr);
          }
# 2558
          if (c != 0) {
# 2558
            if (! (c != 10)) {
# 2558
              break;
            }
          } else {
# 2558
            break;
          }
        }
# 2559
        continue;
      }
    }
# 2563
    switch (c) {
    case 92: 
    {
# 2572
    save_ptr = ptr;
# 2573
    c = check_escape(& ptr, errorptr, bracount, options, 0, & compile_block);
    }
# 2574
    if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
      goto PCRE_ERROR_RETURN;
    }
# 2575
    if (c >= 0) {
      {
# 2577
      ptr = save_ptr;
# 2578
      c = (int )'\\';
      }
      goto NORMAL_CHAR;
    }
    {
# 2582
    length ++;
    }
# 2588
    if (c <= -12) {
      {
# 2590
      refnum = - c - 12;
      }
# 2591
      if (refnum > top_backref) {
        {
# 2591
        top_backref = refnum;
        }
      }
      {
# 2592
      length ++;
      }
# 2593
      if ((int )(*(ptr + 1)) == 123) {
        {
# 2593
        tmp = is_counted_repeat(ptr + 2, & compile_block);
        }
# 2593
        if (tmp) {
          {
# 2595
          ptr = read_repeat_counts(ptr + 2, & min, & max, errorptr,
                                   & compile_block);
          }
# 2596
          if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
            goto PCRE_ERROR_RETURN;
          }
# 2597
          if (min == 0) {
# 2597
            if (max == 1) {
              {
# 2599
              length ++;
              }
            } else {
# 2597
              if (max == -1) {
                {
# 2599
                length ++;
                }
              } else {
                goto _L;
              }
            }
          } else {
            _L: 
# 2597
            if (min == 1) {
# 2597
              if (max == -1) {
                {
# 2599
                length ++;
                }
              } else {
                {
# 2600
                length += 5;
                }
              }
            } else {
              {
# 2600
              length += 5;
              }
            }
          }
# 2601
          if ((int )(*(ptr + 1)) == 63) {
            {
# 2601
            ptr ++;
            }
          }
        }
      }
    }
# 2604
    continue;
    case 94: 
    {

    }
    case 46: 
    {

    }
    case 36: 
    {

    }
    case 42: 
    {

    }
    case 43: 
    {

    }
    case 63: 
    {
# 2612
    length ++;
    }
# 2613
    continue;
    case 123: 
    {
# 2619
    tmp___0 = is_counted_repeat(ptr + 1, & compile_block);
    }
# 2619
    if (! tmp___0) {
      goto NORMAL_CHAR;
    }
    {
# 2620
    ptr = read_repeat_counts(ptr + 1, & min, & max, errorptr, & compile_block);
    }
# 2621
    if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
      goto PCRE_ERROR_RETURN;
    }
# 2622
    if (min == 0) {
# 2622
      if (max == 1) {
        {
# 2624
        length ++;
        }
      } else {
# 2622
        if (max == -1) {
          {
# 2624
          length ++;
          }
        } else {
          goto _L___1;
        }
      }
    } else {
      _L___1: 
# 2622
      if (min == 1) {
# 2622
        if (max == -1) {
          {
# 2624
          length ++;
          }
        } else {
          goto _L___0;
        }
      } else {
        _L___0: 
        {
# 2627
        length --;
        }
# 2628
        if (min == 1) {
          {
# 2628
          length ++;
          }
        } else {
# 2628
          if (min > 0) {
            {
# 2628
            length += 4;
            }
          }
        }
# 2629
        if (max > 0) {
          {
# 2629
          length += 4;
          }
        } else {
          {
# 2629
          length += 2;
          }
        }
      }
    }
# 2631
    if ((int )(*(ptr + 1)) == 63) {
      {
# 2631
      ptr ++;
      }
    }
# 2632
    continue;
    case 124: 
    {
# 2640
    length += 3 + branch_extra;
    }
# 2641
    continue;
    case 91: 
    {
# 2649
    class_charcount = 0;
# 2650
    ptr ++;
    }
# 2650
    if ((int )(*ptr) == 94) {
      {
# 2650
      ptr ++;
      }
    }
# 2651
    while (1) {
# 2653
      if ((int )(*ptr) == 92) {
        {
# 2655
        tmp___1 = check_escape(& ptr, errorptr, bracount, options, 1,
                               & compile_block);
# 2655
        ch = tmp___1;
        }
# 2657
        if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
          goto PCRE_ERROR_RETURN;
        }
# 2658
        if (- ch == 3) {
          {
# 2658
          class_charcount ++;
          }
        } else {
          {
# 2658
          class_charcount = 10;
          }
        }
      } else {
        {
# 2660
        class_charcount ++;
        }
      }
      {
# 2661
      ptr ++;
      }
# 2651
      if ((int )(*ptr) != 0) {
# 2651
        if (! ((int )(*ptr) != 93)) {
# 2651
          break;
        }
      } else {
# 2651
        break;
      }
    }
# 2667
    if (class_charcount == 1) {
      {
# 2667
      length += 3;
      }
    } else {
      {
# 2669
      length += 33;
      }
# 2673
      if ((int )(*ptr) != 0) {
# 2673
        if ((int )(*(ptr + 1)) == 123) {
          {
# 2673
          tmp___2 = is_counted_repeat(ptr + 2, & compile_block);
          }
# 2673
          if (tmp___2) {
            {
# 2675
            ptr = read_repeat_counts(ptr + 2, & min, & max, errorptr,
                                     & compile_block);
            }
# 2676
            if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
              goto PCRE_ERROR_RETURN;
            }
# 2677
            if (min == 0) {
# 2677
              if (max == 1) {
                {
# 2679
                length ++;
                }
              } else {
# 2677
                if (max == -1) {
                  {
# 2679
                  length ++;
                  }
                } else {
                  goto _L___2;
                }
              }
            } else {
              _L___2: 
# 2677
              if (min == 1) {
# 2677
                if (max == -1) {
                  {
# 2679
                  length ++;
                  }
                } else {
                  {
# 2680
                  length += 5;
                  }
                }
              } else {
                {
# 2680
                length += 5;
                }
              }
            }
# 2681
            if ((int )(*(ptr + 1)) == 63) {
              {
# 2681
              ptr ++;
              }
            }
          }
        }
      }
    }
# 2684
    continue;
    case 40: 
    {
# 2689
    branch_newextra = 0;
    }
# 2693
    if ((int )(*(ptr + 1)) == 63) {
      {
# 2698
      c = (int )(*(ptr + 2));
      }
# 2698
      switch (c) {
      case 35: 
      {
# 2702
      ptr += 3;
      }
# 2703
      while (1) {
# 2703
        if ((int )(*ptr) != 0) {
# 2703
          if (! ((int )(*ptr) != 41)) {
# 2703
            break;
          }
        } else {
# 2703
          break;
        }
        {
# 2703
        ptr ++;
        }
      }
# 2704
      if ((int )(*ptr) == 0) {
        {
# 2706
        (*errorptr) = (char const   *)"missing ) after comment";
        }
        goto PCRE_ERROR_RETURN;
      }
# 2709
      continue;
      case 58: 
      {

      }
      case 61: 
      {

      }
      case 33: 
      {

      }
      case 62: 
      {
# 2720
      ptr += 2;
      }
# 2721
      break;
      case 82: 
      {

      }
# 2727
      if ((int )(*(ptr + 3)) != 41) {
        {
# 2729
        (*errorptr) = (char const   *)"(?p must be followed by )";
        }
        goto PCRE_ERROR_RETURN;
      }
      {
# 2732
      ptr += 3;
# 2733
      length ++;
      }
# 2734
      break;
      case 60: 
      {

      }
# 2739
      if ((int )(*(ptr + 3)) == 61) {
        {
# 2741
        ptr += 3;
# 2742
        branch_newextra = 3;
# 2743
        length += 3;
        }
# 2744
        break;
      } else {
# 2739
        if ((int )(*(ptr + 3)) == 33) {
          {
# 2741
          ptr += 3;
# 2742
          branch_newextra = 3;
# 2743
          length += 3;
          }
# 2744
          break;
        }
      }
      {
# 2746
      (*errorptr) = (char const   *)"unrecognized character after (?<";
      }
      goto PCRE_ERROR_RETURN;
      case 40: 
      {

      }
# 2754
      if (((int )(*(compile_block.ctypes + (int )(*(ptr + 3)))) & 4) != 0) {
        {
# 2756
        ptr += 4;
# 2757
        length += 2;
        }
# 2758
        while (((int )(*(compile_block.ctypes + (int )(*ptr))) & 4) != 0) {
          {
# 2758
          ptr ++;
          }
        }
# 2759
        if ((int )(*ptr) != 41) {
          {
# 2761
          (*errorptr) = (char const   *)"malformed number after (?(";
          }
          goto PCRE_ERROR_RETURN;
        }
      } else {
        {
# 2767
        ptr ++;
        }
# 2768
        if ((int )(*(ptr + 2)) != 63) {
          {
# 2771
          ptr += 2;
# 2772
          (*errorptr) = (char const   *)"assertion expected after (?(";
          }
          goto PCRE_ERROR_RETURN;
        } else {
# 2768
          if ((int )(*(ptr + 3)) != 61) {
# 2768
            if ((int )(*(ptr + 3)) != 33) {
# 2768
              if ((int )(*(ptr + 3)) != 60) {
                {
# 2771
                ptr += 2;
# 2772
                (*errorptr) = (char const   *)"assertion expected after (?(";
                }
                goto PCRE_ERROR_RETURN;
              }
            }
          }
        }
      }
# 2776
      break;
      default: 
      {
# 2784
      unset = 0;
# 2784
      set = unset;
# 2785
      optset = & set;
# 2786
      ptr += 2;
      }
# 2788
      while (1) {
        {
# 2790
        c = (int )(*ptr);
        }
# 2791
        switch (c) {
        case 105: 
        {
# 2794
        (*optset) |= 1;
        }
        goto __Cont;
        case 109: 
        {
# 2798
        (*optset) |= 2;
        }
        goto __Cont;
        case 115: 
        {
# 2802
        (*optset) |= 4;
        }
        goto __Cont;
        case 120: 
        {
# 2806
        (*optset) |= 8;
        }
        goto __Cont;
        case 88: 
        {
# 2810
        (*optset) |= 64;
        }
        goto __Cont;
        case 85: 
        {
# 2814
        (*optset) |= 512;
        }
        goto __Cont;
        case 45: 
        {
# 2818
        optset = & unset;
        }
        goto __Cont;
        case 41: 
        {

        }
# 2827
        if (brastackptr == 0U) {
          {
# 2829
          options = (options | set) & ~ unset;
# 2830
          unset = 0;
# 2830
          set = unset;
          }
        }
        case 58: 
        {

        }
# 2848
        if (((set | unset) & 7) != 0) {
          {
# 2850
          length += 4;
# 2851
          branch_newextra = 2;
          }
# 2852
          if (((set | unset) & 1) != 0) {
            {
# 2852
            options |= 67108864;
            }
          }
        }
        goto END_OPTIONS;
        default: 
        {
# 2859
        (*errorptr) = (char const   *)"unrecognized character after (?";
        }
        goto PCRE_ERROR_RETURN;
        }
        __Cont: 
        {
# 2788
        ptr ++;
        }
      }
      END_OPTIONS: 
# 2871
      if (c == 41) {
# 2873
        if (branch_newextra == 2) {
# 2873
          if (branch_extra == 0) {
            {
# 2874
            branch_extra += branch_newextra;
            }
          } else {
# 2873
            if (branch_extra == 3) {
              {
# 2874
              branch_extra += branch_newextra;
              }
            }
          }
        }
# 2875
        continue;
      }
      }
    } else {
      {
# 2886
      bracount ++;
      }
    }
# 2894
    if (brastackptr >= sizeof(brastack) / sizeof(int )) {
      {
# 2896
      (*errorptr) = (char const   *)"too many sets of parentheses";
      }
      goto PCRE_ERROR_RETURN;
    }
    {
# 2900
    bralenstack[brastackptr] = (unsigned char )branch_extra;
# 2901
    branch_extra = branch_newextra;
# 2903
    tmp___3 = brastackptr;
# 2903
    brastackptr ++;
# 2903
    brastack[tmp___3] = length;
# 2904
    length += 3;
    }
# 2905
    continue;
    case 41: 
    {
# 2914
    length += 3;
# 2916
    minval = 1;
# 2917
    maxval = 1;
    }
# 2920
    if (brastackptr > 0U) {
      {
# 2922
      brastackptr --;
# 2922
      duplength = length - brastack[brastackptr];
# 2923
      branch_extra = (int )bralenstack[brastackptr];
      }
    } else {
      {
# 2925
      duplength = 0;
      }
    }
    {
# 2930
    c = (int )(*(ptr + 1));
    }
# 2930
    if (c == 123) {
      {
# 2930
      tmp___4 = is_counted_repeat(ptr + 2, & compile_block);
      }
# 2930
      if (tmp___4) {
        {
# 2932
        ptr = read_repeat_counts(ptr + 2, & minval, & maxval, errorptr,
                                 & compile_block);
        }
# 2934
        if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
          goto PCRE_ERROR_RETURN;
        }
      } else {
        goto _L___3;
      }
    } else {
      _L___3: 
# 2936
      if (c == 42) {
        {
# 2936
        minval = 0;
# 2936
        maxval = -1;
# 2936
        ptr ++;
        }
      } else {
# 2937
        if (c == 43) {
          {
# 2937
          maxval = -1;
# 2937
          ptr ++;
          }
        } else {
# 2938
          if (c == 63) {
            {
# 2938
            minval = 0;
# 2938
            ptr ++;
            }
          }
        }
      }
    }
# 2945
    if (minval == 0) {
      {
# 2947
      length ++;
      }
# 2948
      if (maxval > 0) {
        {
# 2948
        length += (maxval - 1) * (duplength + 7);
        }
      }
    } else {
      {
# 2959
      length += (minval - 1) * duplength;
      }
# 2960
      if (maxval > minval) {
        {
# 2961
        length += (maxval - minval) * (duplength + 7) - 6;
        }
      }
    }
# 2964
    continue;
    NORMAL_CHAR: 
    default: 
    {
# 2973
    length += 2;
# 2974
    runlength = 0;
    }
# 2975
    while (1) {
# 2977
      if ((options & 8) != 0) {
# 2979
        if (((int )(*(compile_block.ctypes + c)) & 1) != 0) {
          goto __Cont___0;
        }
# 2980
        if (c == 35) {
# 2984
          while (1) {
            {
# 2984
            ptr ++;
# 2984
            c = (int )(*ptr);
            }
# 2984
            if (c != 0) {
# 2984
              if (! (c != 10)) {
# 2984
                break;
              }
            } else {
# 2984
              break;
            }
          }
          goto __Cont___0;
        }
      }
# 2992
      if (c == 92) {
        {
# 2994
        saveptr = ptr;
# 2995
        c = check_escape(& ptr, errorptr, bracount, options, 0, & compile_block);
        }
# 2997
        if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
          goto PCRE_ERROR_RETURN;
        }
# 2998
        if (c < 0) {
          {
# 2998
          ptr = saveptr;
          }
# 2998
          break;
        }
      }
      {
# 3013
      runlength ++;
      }
      __Cont___0: 
# 2975
      if (runlength < 255) {
        {
# 2975
        ptr ++;
# 2975
        c = (int )(*ptr);
        }
# 2975
        if (! (((int )(*(compile_block.ctypes + c)) & 128) == 0)) {
# 2975
          break;
        }
      } else {
# 2975
        break;
      }
    }
    {
# 3021
    ptr --;
# 3022
    length += runlength;
    }
# 3023
    continue;
    }
  }
  {
# 3027
  length += 4;
  }
# 3029
  if (length > 65539) {
    {
# 3031
    (*errorptr) = (char const   *)"regular expression too large";
    }
# 3032
    return ((void *)0);
  }
  {
# 3041
  size = (unsigned int )length + (unsigned int )(& ((real_pcre *)0)->code[0]);
# 3042
  re = (real_pcre *)((*pcre_malloc))(size);
  }
# 3044
  if ((unsigned int )re == (unsigned int )((void *)0)) {
    {
# 3046
    (*errorptr) = (char const   *)"failed to get memory";
    }
# 3047
    return ((void *)0);
  }
  {
# 3052
  re->magic_number = 1346589253UL;
# 3053
  re->size = size;
# 3054
  re->options = (unsigned long )options;
# 3055
  re->tables = tables;
# 3061
  ptr = (uschar const   *)pattern;
# 3062
  code = re->code;
# 3063
  (*code) = (unsigned char )70;
# 3064
  bracount = 0;
# 3065
  compile_regex(options, -1, & bracount, & code, & ptr, errorptr, 0, -1,
                & reqchar, & countlits, & compile_block);
# 3067
  re->top_bracket = (unsigned char )bracount;
# 3068
  re->top_backref = (unsigned char )top_backref;
  }
# 3072
  if ((unsigned int )(*errorptr) == (unsigned int )((void *)0)) {
# 3072
    if ((int )(*ptr) != 0) {
      {
# 3072
      (*errorptr) = (char const   *)"unmatched parentheses";
      }
    }
  }
  {
# 3077
  tmp___6 = code;
# 3077
  code ++;
# 3077
  (*tmp___6) = (unsigned char )0;
  }
# 3080
  if (code - re->code > length) {
    {
# 3080
    (*errorptr) = (char const   *)"internal error: code overflow";
    }
  }
# 3086
  if (top_backref > (int )re->top_bracket) {
    {
# 3086
    (*errorptr) = (char const   *)"back reference to non-existent subpattern";
    }
  }
# 3090
  if ((unsigned int )(*errorptr) != (unsigned int )((void *)0)) {
    {
# 3092
    ((*pcre_free))((void *)re);
    }
    PCRE_ERROR_RETURN: 
    {
# 3094
    (*erroroffset) = ptr - (uschar const   *)pattern;
    }
# 3095
    return ((void *)0);
  }
# 3108
  if ((options & 16) == 0) {
    {
# 3110
    temp_options = options;
# 3111
    tmp___9 = is_anchored((uschar const   *)(re->code), & temp_options);
    }
# 3111
    if (tmp___9) {
      {
# 3112
      re->options = re->options | 16UL;
      }
    } else {
      {
# 3115
      tmp___7 = find_firstchar((uschar const   *)(re->code), & temp_options);
# 3115
      ch___0 = tmp___7;
      }
# 3116
      if (ch___0 >= 0) {
        {
# 3118
        re->first_char = (unsigned char )ch___0;
# 3119
        re->options = re->options | 1073741824UL;
        }
      } else {
        {
# 3121
        tmp___8 = is_startline((uschar const   *)(re->code));
        }
# 3121
        if (tmp___8) {
          {
# 3122
          re->options = re->options | 268435456UL;
          }
        }
      }
    }
  }
# 3129
  if (reqchar >= 0) {
# 3129
    if (countlits > 1) {
      {
# 3131
      re->req_char = (unsigned char )reqchar;
# 3132
      re->options = re->options | 536870912UL;
      }
    } else {
# 3129
      if ((re->options & 1073741824UL) == 0UL) {
        {
# 3131
        re->req_char = (unsigned char )reqchar;
# 3132
        re->options = re->options | 536870912UL;
        }
      }
    }
  }
# 3377
  return ((pcre *)re);
}
}
# 3399
static BOOL match_ref(int offset , uschar const   *eptr , int length ,
                      match_data *md , unsigned long ims ) 
{ uschar const   *p ;
  uschar const   *tmp ;
  uschar const   *tmp___0 ;
  int tmp___1 ;
  uschar const   *tmp___2 ;
  uschar const   *tmp___3 ;
  int tmp___4 ;

  {
  {
# 3403
  p = md->start_subject + (*(md->offset_vector + offset));
  }
# 3420
  if (length > md->end_subject - eptr) {
# 3420
    return (0);
  }
# 3424
  if ((ims & 1UL) != 0UL) {
# 3426
    while (1) {
      {
# 3426
      tmp___1 = length;
# 3426
      length --;
      }
# 3426
      if (! (tmp___1 > 0)) {
# 3426
        break;
      }
      {
# 3427
      tmp = p;
# 3427
      p ++;
# 3427
      tmp___0 = eptr;
# 3427
      eptr ++;
      }
# 3427
      if ((int )(*(md->lcc + (int )(*tmp))) !=
          (int )(*(md->lcc + (int )(*tmp___0)))) {
# 3427
        return (0);
      }
    }
  } else {
# 3430
    while (1) {
      {
# 3430
      tmp___4 = length;
# 3430
      length --;
      }
# 3430
      if (! (tmp___4 > 0)) {
# 3430
        break;
      }
      {
# 3430
      tmp___2 = p;
# 3430
      p ++;
# 3430
      tmp___3 = eptr;
# 3430
      eptr ++;
      }
# 3430
      if ((int )(*tmp___2) != (int )(*tmp___3)) {
# 3430
        return (0);
      }
    }
  }
# 3432
  return (1);
}
}
# 3461
static BOOL match(uschar const   *eptr , uschar const   *ecode ,
                  int offset_top , match_data *md , unsigned long ims ,
                  eptrblock *eptrb , int flags ) 
{ unsigned long original_ims ;
  eptrblock newptrb ;
  int op ;
  int min ;
  int max ;
  int ctype ;
  register int i ;
  register int c ;
  BOOL minimize ;
  int number ;
  int offset ;
  int save_offset1 ;
  int save_offset2 ;
  int save_offset3 ;
  BOOL tmp ;
  BOOL tmp___0 ;
  int offset___0 ;
  int tmp___1 ;
  BOOL tmp___2 ;
  BOOL tmp___3 ;
  BOOL tmp___4 ;
  BOOL tmp___5 ;
  BOOL tmp___6 ;
  BOOL rc ;
  int *save ;
  int stacksave[15] ;
  uschar const   *prev ;
  uschar const   *saved_eptr ;
  BOOL tmp___8 ;
  BOOL tmp___9 ;
  BOOL tmp___10 ;
  BOOL tmp___11 ;
  BOOL tmp___12 ;
  uschar const   *next ;
  BOOL tmp___13 ;
  uschar const   *next___0 ;
  BOOL tmp___14 ;
  uschar const   *prev___0 ;
  uschar const   *saved_eptr___0 ;
  int number___0 ;
  int offset___1 ;
  BOOL tmp___15 ;
  BOOL tmp___16 ;
  BOOL tmp___17 ;
  BOOL tmp___18 ;
  BOOL prev_is_word ;
  int tmp___19 ;
  BOOL cur_is_word ;
  int tmp___20 ;
  int tmp___22 ;
  uschar const   *tmp___23 ;
  uschar const   *tmp___24 ;
  uschar const   *tmp___25 ;
  uschar const   *tmp___26 ;
  uschar const   *tmp___27 ;
  uschar const   *tmp___28 ;
  uschar const   *tmp___29 ;
  uschar const   *tmp___30 ;
  int length ;
  int offset___2 ;
  uschar const   *tmp___31 ;
  BOOL tmp___32 ;
  BOOL tmp___33 ;
  BOOL tmp___34 ;
  BOOL tmp___35 ;
  uschar const   *pp ;
  BOOL tmp___36 ;
  BOOL tmp___37 ;
  uschar const   *data ;
  uschar const   *tmp___38 ;
  uschar const   *tmp___39 ;
  BOOL tmp___40 ;
  uschar const   *tmp___41 ;
  uschar const   *pp___0 ;
  int len ;
  uschar const   *tmp___42 ;
  BOOL tmp___43 ;
  register int length___0 ;
  uschar const   *tmp___44 ;
  uschar const   *tmp___45 ;
  int tmp___46 ;
  uschar const   *tmp___47 ;
  uschar const   *tmp___48 ;
  int tmp___49 ;
  uschar const   *tmp___50 ;
  uschar const   *tmp___51 ;
  uschar const   *tmp___52 ;
  BOOL tmp___53 ;
  uschar const   *tmp___54 ;
  uschar const   *pp___1 ;
  uschar const   *tmp___55 ;
  BOOL tmp___56 ;
  uschar const   *tmp___57 ;
  BOOL tmp___58 ;
  uschar const   *tmp___59 ;
  uschar const   *pp___2 ;
  uschar const   *tmp___60 ;
  BOOL tmp___61 ;
  uschar const   *tmp___62 ;
  uschar const   *tmp___63 ;
  uschar const   *tmp___64 ;
  uschar const   *tmp___65 ;
  uschar const   *tmp___66 ;
  uschar const   *tmp___67 ;
  uschar const   *tmp___68 ;
  BOOL tmp___69 ;
  uschar const   *tmp___70 ;
  uschar const   *pp___3 ;
  uschar const   *tmp___71 ;
  BOOL tmp___72 ;
  uschar const   *tmp___73 ;
  BOOL tmp___74 ;
  uschar const   *tmp___75 ;
  uschar const   *pp___4 ;
  uschar const   *tmp___76 ;
  BOOL tmp___77 ;
  uschar const   *tmp___78 ;
  uschar const   *tmp___79 ;
  uschar const   *tmp___80 ;
  uschar const   *tmp___81 ;
  uschar const   *tmp___82 ;
  uschar const   *tmp___83 ;
  uschar const   *tmp___84 ;
  uschar const   *tmp___85 ;
  uschar const   *tmp___86 ;
  BOOL tmp___87 ;
  uschar const   *tmp___88 ;
  uschar const   *pp___5 ;
  uschar const   *tmp___89 ;
  BOOL tmp___90 ;
/*
  {
  {
# 3466
  original_ims = ims;
  }
# 3474
  if ((flags & 2) != 0) {
    {
# 3476
    newptrb.prev = eptrb;
# 3477
    newptrb.saved_eptr = eptr;
# 3478
    eptrb = & newptrb;
    }
  }
# 3483
  while (1) {
    {
# 3485
    op = (int )(*ecode);
# 3489
    minimize = 0;
    }
# 3505
    if (op > 70) {
      {
# 3507
      number = op - 70;
# 3508
      offset = number << 1;
      }
# 3516
      if (offset < md->offset_max) {
        {
# 3518
        save_offset1 = (*(md->offset_vector + offset));
# 3519
        save_offset2 = (*(md->offset_vector + (offset + 1)));
# 3520
        save_offset3 = (*(md->offset_vector + (md->offset_end - number)));
# 3523
        (*(md->offset_vector + (md->offset_end - number))) = eptr -
                                                             md->start_subject;
        }
# 3525
        while (1) {
          {
# 3527
          tmp = match(eptr, ecode + 3, offset_top, md, ims, eptrb, 2);
          }
# 3527
          if (tmp) {
# 3528
            return (1);
          }
          {
# 3529
          ecode += ((int )(*(ecode + 1)) << 8) + (int )(*(ecode + 2));
          }
# 3525
          if (! ((int )(*ecode) == 56)) {
# 3525
            break;
          }
        }
        {
# 3535
        (*(md->offset_vector + offset)) = save_offset1;
# 3536
        (*(md->offset_vector + (offset + 1))) = save_offset2;
# 3537
        (*(md->offset_vector + (md->offset_end - number))) = save_offset3;
        }
# 3538
        return (0);
      } else {
        {
# 3543
        op = 70;
        }
      }
    }
# 3548
    switch (op) {
    case 70: 
    {

    }
# 3552
    while (1) {
      {
# 3554
      tmp___0 = match(eptr, ecode + 3, offset_top, md, ims, eptrb, 2);
      }
# 3554
      if (tmp___0) {
# 3555
        return (1);
      }
      {
# 3556
      ecode += ((int )(*(ecode + 1)) << 8) + (int )(*(ecode + 2));
      }
# 3552
      if (! ((int )(*ecode) == 56)) {
# 3552
        break;
      }
    }
# 3560
    return (0);
    case 66: 
    {

    }
# 3568
    if ((int )(*(ecode + 3)) == 67) {
      {
# 3570
      offset___0 = (int )(*(ecode + 4)) << 1;
      }
# 3571
      if (offset___0 < offset_top) {
# 3571
        if ((*(md->offset_vector + offset___0)) >= 0) {
          {
# 3571
          tmp___1 = 5;
          }
        } else {
          {
# 3571
          tmp___1 = (3 + ((int )(*(ecode + 1)) << 8)) + (int )(*(ecode + 2));
          }
        }
      } else {
        {
# 3571
        tmp___1 = (3 + ((int )(*(ecode + 1)) << 8)) + (int )(*(ecode + 2));
        }
      }
      {
# 3571
      tmp___2 = match(eptr, ecode + tmp___1, offset_top, md, ims, eptrb, 2);
      }
# 3571
      return (tmp___2);
    } else {
      {
# 3582
      tmp___3 = match(eptr, ecode + 3, offset_top, md, ims,
                      (eptrblock *)((void *)0), 3);
      }
# 3582
      if (tmp___3) {
        {
# 3585
        ecode += (3 + ((int )(*(ecode + 4)) << 8)) + (int )(*(ecode + 5));
        }
# 3586
        while ((int )(*ecode) == 56) {
          {
# 3586
          ecode += ((int )(*(ecode + 1)) << 8) + (int )(*(ecode + 2));
          }
        }
      } else {
        {
# 3588
        ecode += ((int )(*(ecode + 1)) << 8) + (int )(*(ecode + 2));
        }
      }
      {
# 3589
      tmp___4 = match(eptr, ecode + 3, offset_top, md, ims, eptrb, 2);
      }
# 3589
      return (tmp___4);
    }
    case 67: 
    {
# 3596
    ecode += 2;
    }
# 3597
    break;
    case 0: 
    {

    }
# 3603
    if (md->notempty) {
# 3603
      if ((unsigned int )eptr == (unsigned int )md->start_match) {
# 3603
        return (0);
      }
    }
    {
# 3604
    md->end_match_ptr = eptr;
# 3605
    md->end_offset_top = offset_top;
    }
# 3606
    return (1);
    case 12: 
    {
# 3611
    ims = (unsigned long )(*(ecode + 1));
# 3612
    ecode += 2;
    }
# 3614
    break;
    case 60: 
    {

    }
    case 62: 
    {

    }
# 3624
    while (1) {
      {
# 3626
      tmp___5 = match(eptr, ecode + 3, offset_top, md, ims,
                      (eptrblock *)((void *)0), 2);
      }
# 3626
      if (tmp___5) {
# 3626
        break;
      }
      {
# 3627
      ecode += ((int )(*(ecode + 1)) << 8) + (int )(*(ecode + 2));
      }
# 3624
      if (! ((int )(*ecode) == 56)) {
# 3624
        break;
      }
    }
# 3630
    if ((int )(*ecode) == 57) {
# 3630
      return (0);
    }
# 3634
    if ((flags & 1) != 0) {
# 3634
      return (1);
    }
# 3639
    while (1) {
      {
# 3639
      ecode += ((int )(*(ecode + 1)) << 8) + (int )(*(ecode + 2));
      }
# 3639
      if (! ((int )(*ecode) == 56)) {
# 3639
        break;
      }
    }
    {
# 3640
    ecode += 3;
# 3641
    offset_top = md->end_offset_top;
    }
    goto __Cont;
    case 61: 
    {

    }
    case 63: 
    {

    }
# 3648
    while (1) {
      {
# 3650
      tmp___6 = match(eptr, ecode + 3, offset_top, md, ims,
                      (eptrblock *)((void *)0), 2);
      }
# 3650
      if (tmp___6) {
# 3651
        return (0);
      }
      {
# 3652
      ecode += ((int )(*(ecode + 1)) << 8) + (int )(*(ecode + 2));
      }
# 3648
      if (! ((int )(*ecode) == 56)) {
# 3648
        break;
      }
    }
# 3656
    if ((flags & 1) != 0) {
# 3656
      return (1);
    }
    {
# 3658
    ecode += 3;
    }
    goto __Cont;
    case 64: 
    {
# 3675
    eptr -= ((int )(*(ecode + 1)) << 8) + (int )(*(ecode + 2));
    }
# 3678
    if ((unsigned int )eptr < (unsigned int )md->start_subject) {
# 3678
      return (0);
    }
    {
# 3679
    ecode += 3;
    }
# 3680
    break;
    case 55: 
    {
# 3700
    c = md->offset_max;
    }
# 3702
    if (c < 16) {
      {
# 3702
      save = stacksave;
      }
    } else {
      {
# 3704
      save = (int *)((*pcre_malloc))((unsigned int )(c + 1) * sizeof(int ));
      }
# 3705
      if ((unsigned int )save == (unsigned int )((void *)0)) {
        {
# 3707
        save = stacksave;
# 3708
        c = 15;
        }
      }
    }
    {
# 3712
    i = 1;
    }
# 3712
    while (i <= c) {
      {
# 3713
      (*(save + i)) = (*(md->offset_vector + (md->offset_end - i)));
# 3712
      i ++;
      }
    }
    {
# 3714
    rc = match(eptr, md->start_pattern, offset_top, md, ims, eptrb, 2);
# 3716
    i = 1;
    }
# 3716
    while (i <= c) {
      {
# 3717
      (*(md->offset_vector + (md->offset_end - i))) = (*(save + i));
# 3716
      i ++;
      }
    }
# 3718
    if ((unsigned int )save != (unsigned int )(stacksave)) {
      {
# 3718
      ((*pcre_free))((void *)save);
      }
    }
# 3719
    if (! rc) {
# 3719
      return (0);
    }
    {
# 3725
    offset_top = md->end_offset_top;
# 3726
    eptr = md->end_match_ptr;
# 3727
    ecode ++;
    }
# 3729
    break;
    case 65: 
    {
# 3740
    prev = ecode;
# 3741
    saved_eptr = eptr;
    }
# 3743
    while (1) {
      {
# 3745
      tmp___8 = match(eptr, ecode + 3, offset_top, md, ims, eptrb, 2);
      }
# 3745
      if (tmp___8) {
# 3746
        break;
      }
      {
# 3747
      ecode += ((int )(*(ecode + 1)) << 8) + (int )(*(ecode + 2));
      }
# 3743
      if (! ((int )(*ecode) == 56)) {
# 3743
        break;
      }
    }
# 3753
    if ((int )(*ecode) != 65) {
# 3753
      if ((int )(*ecode) != 56) {
# 3753
        return (0);
      }
    }
# 3758
    while (1) {
      {
# 3758
      ecode += ((int )(*(ecode + 1)) << 8) + (int )(*(ecode + 2));
      }
# 3758
      if (! ((int )(*ecode) == 56)) {
# 3758
        break;
      }
    }
    {
# 3760
    offset_top = md->end_offset_top;
# 3761
    eptr = md->end_match_ptr;
    }
# 3769
    if ((int )(*ecode) == 57) {
      {
# 3771
      ecode += 3;
      }
# 3772
      break;
    } else {
# 3769
      if ((unsigned int )eptr == (unsigned int )saved_eptr) {
        {
# 3771
        ecode += 3;
        }
# 3772
        break;
      }
    }
# 3780
    if ((int )(*(ecode + 3)) == 12) {
      {
# 3782
      ims = (ims & 4294967288UL) | (unsigned long )(*(ecode + 4));
      }
    }
# 3786
    if ((int )(*ecode) == 59) {
      {
# 3788
      tmp___9 = match(eptr, ecode + 3, offset_top, md, ims, eptrb, 0);
      }
# 3788
      if (tmp___9) {
# 3790
        return (1);
      } else {
        {
# 3788
        tmp___10 = match(eptr, prev, offset_top, md, ims, eptrb, 2);
        }
# 3788
        if (tmp___10) {
# 3790
          return (1);
        }
      }
    } else {
      {
# 3794
      tmp___11 = match(eptr, prev, offset_top, md, ims, eptrb, 2);
      }
# 3794
      if (tmp___11) {
# 3795
        return (1);
      } else {
        {
# 3794
        tmp___12 = match(eptr, ecode + 3, offset_top, md, ims, eptrb, 0);
        }
# 3794
        if (tmp___12) {
# 3795
          return (1);
        }
      }
    }
# 3798
    return (0);
    case 56: 
    {

    }
# 3804
    while (1) {
      {
# 3804
      ecode += ((int )(*(ecode + 1)) << 8) + (int )(*(ecode + 2));
      }
# 3804
      if (! ((int )(*ecode) == 56)) {
# 3804
        break;
      }
    }
# 3805
    break;
    case 68: 
    {
# 3815
    next = ecode + 1;
# 3816
    tmp___13 = match(eptr, next, offset_top, md, ims, eptrb, 2);
    }
# 3816
    if (tmp___13) {
# 3817
      return (1);
    }
# 3818
    while (1) {
      {
# 3818
      next += ((int )(*(next + 1)) << 8) + (int )(*(next + 2));
      }
# 3818
      if (! ((int )(*next) == 56)) {
# 3818
        break;
      }
    }
    {
# 3819
    ecode = next + 3;
    }
# 3821
    break;
    case 69: 
    {
# 3825
    next___0 = ecode + 1;
    }
# 3826
    while (1) {
      {
# 3826
      next___0 += ((int )(*(next___0 + 1)) << 8) + (int )(*(next___0 + 2));
      }
# 3826
      if (! ((int )(*next___0) == 56)) {
# 3826
        break;
      }
    }
    {
# 3827
    tmp___14 = match(eptr, next___0 + 3, offset_top, md, ims, eptrb, 2);
    }
# 3827
    if (tmp___14) {
# 3828
      return (1);
    }
    {
# 3829
    ecode ++;
    }
# 3831
    break;
    case 57: 
    {

    }
    case 59: 
    {

    }
    case 58: 
    {
# 3842
    prev___0 = (ecode - ((int )(*(ecode + 1)) << 8)) - (int )(*(ecode + 2));
# 3843
    saved_eptr___0 = eptrb->saved_eptr;
# 3845
    eptrb = eptrb->prev;
    }
# 3847
    if ((int )(*prev___0) == 60) {
      {
# 3851
      md->end_match_ptr = eptr;
# 3852
      md->end_offset_top = offset_top;
      }
# 3853
      return (1);
    } else {
# 3847
      if ((int )(*prev___0) == 61) {
        {
# 3851
        md->end_match_ptr = eptr;
# 3852
        md->end_offset_top = offset_top;
        }
# 3853
        return (1);
      } else {
# 3847
        if ((int )(*prev___0) == 62) {
          {
# 3851
          md->end_match_ptr = eptr;
# 3852
          md->end_offset_top = offset_top;
          }
# 3853
          return (1);
        } else {
# 3847
          if ((int )(*prev___0) == 63) {
            {
# 3851
            md->end_match_ptr = eptr;
# 3852
            md->end_offset_top = offset_top;
            }
# 3853
            return (1);
          } else {
# 3847
            if ((int )(*prev___0) == 65) {
              {
# 3851
              md->end_match_ptr = eptr;
# 3852
              md->end_offset_top = offset_top;
              }
# 3853
              return (1);
            }
          }
        }
      }
    }
# 3860
    if ((int )(*prev___0) != 66) {
      {
# 3862
      number___0 = (int )(*prev___0) - 70;
# 3863
      offset___1 = number___0 << 1;
      }
# 3870
      if (number___0 > 0) {
# 3872
        if (offset___1 >= md->offset_max) {
          {
# 3872
          md->offset_overflow = 1;
          }
        } else {
          {
# 3874
          (*(md->offset_vector + offset___1)) = (*(md->offset_vector +
                                                   (md->offset_end - number___0)));
# 3876
          (*(md->offset_vector + (offset___1 + 1))) = eptr - md->start_subject;
          }
# 3877
          if (offset_top <= offset___1) {
            {
# 3877
            offset_top = offset___1 + 2;
            }
          }
        }
      }
    }
    {
# 3885
    ims = original_ims;
    }
# 3894
    if ((int )(*ecode) == 57) {
      {
# 3896
      ecode += 3;
      }
# 3897
      break;
    } else {
# 3894
      if ((unsigned int )eptr == (unsigned int )saved_eptr___0) {
        {
# 3896
        ecode += 3;
        }
# 3897
        break;
      }
    }
# 3903
    if ((int )(*ecode) == 59) {
      {
# 3905
      tmp___15 = match(eptr, ecode + 3, offset_top, md, ims, eptrb, 0);
      }
# 3905
      if (tmp___15) {
# 3907
        return (1);
      } else {
        {
# 3905
        tmp___16 = match(eptr, prev___0, offset_top, md, ims, eptrb, 2);
        }
# 3905
        if (tmp___16) {
# 3907
          return (1);
        }
      }
    } else {
      {
# 3911
      tmp___17 = match(eptr, prev___0, offset_top, md, ims, eptrb, 2);
      }
# 3911
      if (tmp___17) {
# 3912
        return (1);
      } else {
        {
# 3911
        tmp___18 = match(eptr, ecode + 3, offset_top, md, ims, eptrb, 0);
        }
# 3911
        if (tmp___18) {
# 3912
          return (1);
        }
      }
    }
# 3915
    return (0);
    case 13: 
    {

    }
# 3920
    if (md->notbol) {
# 3920
      if ((unsigned int )eptr == (unsigned int )md->start_subject) {
# 3920
        return (0);
      }
    }
# 3921
    if ((ims & 2UL) != 0UL) {
# 3923
      if ((unsigned int )eptr != (unsigned int )md->start_subject) {
# 3923
        if ((int )(*(eptr + -1)) != 10) {
# 3923
          return (0);
        }
      }
      {
# 3924
      ecode ++;
      }
# 3925
      break;
    }
    case 1: 
    {

    }
# 3932
    if ((unsigned int )eptr != (unsigned int )md->start_subject) {
# 3932
      return (0);
    }
    {
# 3933
    ecode ++;
    }
# 3934
    break;
    case 14: 
    {

    }
# 3940
    if ((ims & 2UL) != 0UL) {
# 3942
      if ((unsigned int )eptr < (unsigned int )md->end_subject) {
# 3942
        if ((int )(*eptr) != 10) {
# 3942
          return (0);
        }
      } else {
# 3943
        if (md->noteol) {
# 3943
          return (0);
        }
      }
      {
# 3944
      ecode ++;
      }
# 3945
      break;
    } else {
# 3949
      if (md->noteol) {
# 3949
        return (0);
      }
# 3950
      if (! md->endonly) {
# 3952
        if ((unsigned int )eptr < (unsigned int )(md->end_subject - 1)) {
# 3953
          return (0);
        } else {
# 3952
          if ((unsigned int )eptr == (unsigned int )(md->end_subject - 1)) {
# 3952
            if ((int )(*eptr) != 10) {
# 3953
              return (0);
            }
          }
        }
        {
# 3955
        ecode ++;
        }
# 3956
        break;
      }
    }
    case 11: 
    {

    }
# 3964
    if ((unsigned int )eptr < (unsigned int )md->end_subject) {
# 3964
      return (0);
    }
    {
# 3965
    ecode ++;
    }
# 3966
    break;
    case 10: 
    {

    }
# 3971
    if ((unsigned int )eptr < (unsigned int )(md->end_subject - 1)) {
# 3972
      return (0);
    } else {
# 3971
      if ((unsigned int )eptr == (unsigned int )(md->end_subject - 1)) {
# 3971
        if ((int )(*eptr) != 10) {
# 3972
          return (0);
        }
      }
    }
    {
# 3973
    ecode ++;
    }
# 3974
    break;
    case 2: 
    {

    }
    case 3: 
    {

    }
# 3981
    if ((unsigned int )eptr != (unsigned int )md->start_subject) {
# 3981
      if (((int )(*(md->ctypes + (int )(*(eptr + -1)))) & 16) != 0) {
        {
# 3981
        tmp___19 = 1;
        }
      } else {
        {
# 3981
        tmp___19 = 0;
        }
      }
    } else {
      {
# 3981
      tmp___19 = 0;
      }
    }
    {
# 3981
    prev_is_word = tmp___19;
    }
# 3983
    if ((unsigned int )eptr < (unsigned int )md->end_subject) {
# 3983
      if (((int )(*(md->ctypes + (int )(*eptr))) & 16) != 0) {
        {
# 3983
        tmp___20 = 1;
        }
      } else {
        {
# 3983
        tmp___20 = 0;
        }
      }
    } else {
      {
# 3983
      tmp___20 = 0;
      }
    }
    {
# 3983
    cur_is_word = tmp___20;
# 3985
    tmp___23 = ecode;
# 3985
    ecode ++;
    }
# 3985
    if ((int )(*tmp___23) == 3) {
      {
# 3985
      tmp___22 = cur_is_word == prev_is_word;
      }
    } else {
      {
# 3985
      tmp___22 = cur_is_word != prev_is_word;
      }
    }
# 3985
    if (tmp___22) {
# 3987
      return (0);
    }
# 3989
    break;
    case 15: 
    {

    }
# 3994
    if ((ims & 4UL) == 0UL) {
# 3994
      if ((unsigned int )eptr < (unsigned int )md->end_subject) {
# 3994
        if ((int )(*eptr) == 10) {
# 3995
          return (0);
        }
      }
    }
    {
# 3996
    tmp___24 = eptr;
# 3996
    eptr ++;
    }
# 3996
    if ((unsigned int )tmp___24 >= (unsigned int )md->end_subject) {
# 3996
      return (0);
    }
    {
# 4001
    ecode ++;
    }
# 4002
    break;
    case 4: 
    {

    }
# 4005
    if ((unsigned int )eptr >= (unsigned int )md->end_subject) {
# 4007
      return (0);
    } else {
      {
# 4005
      tmp___25 = eptr;
# 4005
      eptr ++;
      }
# 4005
      if (((int )(*(md->ctypes + (int )(*tmp___25))) & 4) != 0) {
# 4007
        return (0);
      }
    }
    {
# 4008
    ecode ++;
    }
# 4009
    break;
    case 5: 
    {

    }
# 4012
    if ((unsigned int )eptr >= (unsigned int )md->end_subject) {
# 4014
      return (0);
    } else {
      {
# 4012
      tmp___26 = eptr;
# 4012
      eptr ++;
      }
# 4012
      if (((int )(*(md->ctypes + (int )(*tmp___26))) & 4) == 0) {
# 4014
        return (0);
      }
    }
    {
# 4015
    ecode ++;
    }
# 4016
    break;
    case 6: 
    {

    }
# 4019
    if ((unsigned int )eptr >= (unsigned int )md->end_subject) {
# 4021
      return (0);
    } else {
      {
# 4019
      tmp___27 = eptr;
# 4019
      eptr ++;
      }
# 4019
      if (((int )(*(md->ctypes + (int )(*tmp___27))) & 1) != 0) {
# 4021
        return (0);
      }
    }
    {
# 4022
    ecode ++;
    }
# 4023
    break;
    case 7: 
    {

    }
# 4026
    if ((unsigned int )eptr >= (unsigned int )md->end_subject) {
# 4028
      return (0);
    } else {
      {
# 4026
      tmp___28 = eptr;
# 4026
      eptr ++;
      }
# 4026
      if (((int )(*(md->ctypes + (int )(*tmp___28))) & 1) == 0) {
# 4028
        return (0);
      }
    }
    {
# 4029
    ecode ++;
    }
# 4030
    break;
    case 8: 
    {

    }
# 4033
    if ((unsigned int )eptr >= (unsigned int )md->end_subject) {
# 4035
      return (0);
    } else {
      {
# 4033
      tmp___29 = eptr;
# 4033
      eptr ++;
      }
# 4033
      if (((int )(*(md->ctypes + (int )(*tmp___29))) & 16) != 0) {
# 4035
        return (0);
      }
    }
    {
# 4036
    ecode ++;
    }
# 4037
    break;
    case 9: 
    {

    }
# 4040
    if ((unsigned int )eptr >= (unsigned int )md->end_subject) {
# 4042
      return (0);
    } else {
      {
# 4040
      tmp___30 = eptr;
# 4040
      eptr ++;
      }
# 4040
      if (((int )(*(md->ctypes + (int )(*tmp___30))) & 16) == 0) {
# 4042
        return (0);
      }
    }
    {
# 4043
    ecode ++;
    }
# 4044
    break;
    case 54: 
    {
# 4057
    offset___2 = (int )(*(ecode + 1)) << 1;
# 4058
    ecode += 2;
    }
# 4065
    if (offset___2 >= offset_top) {
      {
# 4065
      length = (md->end_subject - eptr) + 1;
      }
    } else {
# 4065
      if ((*(md->offset_vector + offset___2)) < 0) {
        {
# 4065
        length = (md->end_subject - eptr) + 1;
        }
      } else {
        {
# 4065
        length = (*(md->offset_vector + (offset___2 + 1))) -
                 (*(md->offset_vector + offset___2));
        }
      }
    }
# 4071
    switch ((int )(*ecode)) {
    case 45: 
    {

    }
    case 46: 
    {

    }
    case 47: 
    {

    }
    case 48: 
    {

    }
    case 49: 
    {

    }
    case 50: 
    {
# 4079
    tmp___31 = ecode;
# 4079
    ecode ++;
# 4079
    c = (int )(*tmp___31) - 45;
# 4080
    minimize = (c & 1) != 0;
# 4081
    min = (int )rep_min[c];
# 4082
    max = (int )rep_max[c];
    }
# 4083
    if (max == 0) {
      {
# 4083
      max = 2147483647;
      }
    }
# 4084
    break;
    case 51: 
    {

    }
    case 52: 
    {
# 4088
    minimize = (int )(*ecode) == 52;
# 4089
    min = ((int )(*(ecode + 1)) << 8) + (int )(*(ecode + 2));
# 4090
    max = ((int )(*(ecode + 3)) << 8) + (int )(*(ecode + 4));
    }
# 4091
    if (max == 0) {
      {
# 4091
      max = 2147483647;
      }
    }
    {
# 4092
    ecode += 5;
    }
# 4093
    break;
    {