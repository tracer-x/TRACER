


struct printf_arguments {
   int i ;
   double d ;
   char *s ;
   long long ll ;
};
typedef unsigned int size_t;
typedef long __off_t;
typedef long long __off64_t;
typedef long __time_t;
typedef long __suseconds_t;
typedef int __ssize_t;
typedef unsigned int __socklen_t;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct __ccured_va_list;
typedef struct __gnuc_va_list;
typedef void _IO_lock_t;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
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
   char _unused2[(int )(15 * sizeof(int ) - 2 * sizeof(void *))] ;
};
typedef struct _IO_FILE _IO_FILE;
struct scanf_format {
   int *p_int ;
   double *p_double ;
   long *p_long ;
   unsigned int *p_uint ;
   unsigned long *p_ulong ;
   char *p_char ;
   short *p_short ;
};
struct __ccured_va_list {
   int next ;
};
typedef struct __ccured_va_list *__ccured_va_list;
typedef __ssize_t ssize_t;
typedef __socklen_t socklen_t;
struct __ccured_execl_arguments {
   char *arg ;
};
typedef __time_t time_t;
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
typedef long __fd_mask;
struct __anonstruct_fd_set_16 {
   __fd_mask __fds_bits[(int )(1024 / (8 * sizeof(__fd_mask )))] ;
};
typedef struct __anonstruct_fd_set_16 fd_set;
struct iovec {
   void *iov_base ;
   size_t iov_len ;
};
struct iovec_SAFE {
   void *iov_base ;
   size_t iov_len ;
};
typedef unsigned short sa_family_t;
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
struct msghdr {
   void *msg_name ;
   socklen_t msg_namelen ;
   struct iovec *msg_iov ;
   size_t msg_iovlen ;
   void *msg_control ;
   size_t msg_controllen ;
   int msg_flags ;
};
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef uint16_t in_port_t;
typedef uint32_t in_addr_t;
struct in_addr {
   in_addr_t s_addr ;
};
struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[(int )(((sizeof(struct sockaddr ) - sizeof(unsigned short )) -
                                  sizeof(in_port_t )) - sizeof(struct in_addr ))] ;
};
struct hostent {
   char *h_name ;
   char **h_aliases ;
   int h_addrtype ;
   int h_length ;
   char **h_addr_list ;
};
struct servent {
   char *s_name ;
   char **s_aliases ;
   int s_port ;
   char *s_proto ;
};
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
void __ccuredInit(void) {}
void ccured_fail_str(char *str , char *file , int line , char *func ) {}
void ccured_fail(int msgId , char *file , int line , char *func ) {}
void *wrapperAlloc(unsigned int  x) {}
void wrapperFree(void * x) {}
char *wrapperStrdup(char * x) {}
unsigned int __ccured_mult_u32(unsigned int x , unsigned int y ) {}
void *__ptrof_nocheck(void *ptr ) {}
void *__endof(void *ptr ) {}
void *__ptrof(void *ptr ) {}
void *__ptrof_size(void *ptr , unsigned int size ) {}
void __verify_nul(char const   *ptr ) {}
int __strlen(char *ptr ) {}
int __strlen_n(char *ptr , int n ) {}
char *__stringof(char const   *ptr ) {}
char *__stringof_ornull(char const   *ptr ) {}
void __write_at_least(void *ptr , unsigned int n ) {}
void __read_at_least(void *ptr , unsigned int n ) {}
void __copytags(void *dest , void *src , unsigned int n ) {}
void *__mkptr(void *p , void *phome ) {}
void *__mkptr_size(void *p , unsigned int len ) {}
char *__mkptr_string(char *p ) {}
void *__align_seq(void *p , unsigned int size ) {}
void *__trusted_cast(void *p ) {}
void *__trusted_deepcast(void *p ) {}
char *__ccured_mangling_of(unsigned int  x) {}
int __ccured_has_empty_mangling(unsigned int  x) {}
void abort_deepcopy(char *errmsg ) {}
int _IO_getc(_IO_FILE *__fp ) {}
int _IO_putc(int __c , _IO_FILE *__fp ) {}
FILE *get_stdin(void) {}
FILE *get_stderr(void) {}
int fclose(FILE *__stream ) {}
int fflush(FILE *__stream ) {}
FILE *fopen(char const   *__filename , char const   *__modes ) {}
FILE *fdopen(int __fd , char const   *__modes ) {}
int fprintf(FILE *__stream , char const   *__format 
                   , ...) {}
int printf(char const   *__format  , ...) {}
int sprintf(char *__s , char const   *__format  , ...) {}
int fgetc(FILE *__stream ) {}
int fputc(int __c , FILE *__stream ) {}
char *fgets(char *__s , int __n , FILE *__stream ) {}
int vfprintf(FILE *__s , char const   *__format ,
                    int __arg ) {}
int vsnprintf(char *__s , size_t __maxlen ,
                                                char const   *__format ,
                                                int __arg ) {}
int fputs(char const   *__s , FILE *__stream ) {}
int puts(char const   *__s ) {}
size_t fread(void *__ptr , size_t __size , size_t __n , FILE *__stream ) {}
size_t fwrite(void const   *__ptr , size_t __size , size_t __n ,
                     FILE *__s ) {}
int fseek(FILE *__stream , long __off , int __whence ) {}
void clearerr(FILE *__stream ) {}
int ferror(FILE *__stream ) {}
void perror(char const   *__s ) {}
int fileno(FILE *__stream ) {}
FILE *__mkptr_file(FILE *f ) {}
FILE *__ptrof_file(FILE *f ) {}
void ccured_fscanf_string_len(FILE * x, char *format , char *buffer , long bufflen ) {}
static void ccured_fscanf_string_wrapper(FILE *f , char *format , char *buffer ) 
{ long bufflen ;
  int *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  FILE *tmp___2 ;

  {
  tmp = __endof((void *)buffer);
  bufflen = (long )tmp - (long )buffer;
  __verify_nul((char const   *)format);
  tmp___0 = (char *)__ptrof((void *)buffer);
  tmp___1 = (char *)__ptrof((void *)format);
  tmp___2 = (FILE *)__ptrof((void *)f);
  ccured_fscanf_string_len(tmp___2, tmp___1, tmp___0, bufflen);
  return;
}
}
static char *fgets_wrapper(char *buf___0 , int size , FILE *fp ) 
{ char *res ;
  FILE *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  __write_at_least((void *)buf___0, (unsigned int )size);
  tmp = __ptrof_file(fp);
  tmp___0 = (char *)__ptrof((void *)buf___0);
  res = fgets((char *)tmp___0, size, (FILE *)tmp);
  tmp___1 = (char *)__mkptr((void *)res, (void *)buf___0);
  return (tmp___1);
}
}
static FILE *fopen_wrapper(char const   *fname , char const   *mode ) 
{ char const   *tmp ;
  char const   *tmp___0 ;
  FILE *tmp___1 ;
  FILE *tmp___2 ;

  {
  tmp = __stringof(mode);
  tmp___0 = __stringof(fname);
  tmp___1 = fopen(tmp___0, tmp);
  tmp___2 = __mkptr_file(tmp___1);
  return (tmp___2);
}
}
static FILE *fdopen_wrapper(int filedes , char const   *mode ) 
{ char const   *tmp ;
  FILE *tmp___0 ;
  FILE *tmp___1 ;

  {
  tmp = __stringof(mode);
  tmp___0 = fdopen(filedes, tmp);
  tmp___1 = __mkptr_file(tmp___0);
  return (tmp___1);
}
}
static int fflush_wrapper(FILE *f ) 
{ FILE *tmp ;
  int tmp___0 ;

  {
  tmp = __ptrof_file(f);
  tmp___0 = fflush(tmp);
  return (tmp___0);
}
}
static int fclose_wrapper(FILE *f ) 
{ FILE *tmp ;
  int tmp___0 ;

  {
  tmp = __ptrof_file(f);
  tmp___0 = fclose(tmp);
  return (tmp___0);
}
}
static int _IO_putc_wrapper(int c , FILE *fl ) 
{ FILE *tmp ;
  int tmp___0 ;

  {
  tmp = __ptrof_file(fl);
  tmp___0 = _IO_putc(c, tmp);
  return (tmp___0);
}
}
static int _IO_getc_wrapper(FILE *fl ) 
{ FILE *tmp ;
  int tmp___0 ;

  {
  tmp = __ptrof_file(fl);
  tmp___0 = _IO_getc(tmp);
  return (tmp___0);
}
}
static int fputc_wrapper(int c , FILE *fl ) 
{ FILE *tmp ;
  int tmp___0 ;

  {
  tmp = __ptrof_file(fl);
  tmp___0 = fputc(c, tmp);
  return (tmp___0);
}
}
static int fputs_wrapper(char const   *s , FILE *fl ) 
{ FILE *tmp ;
  char const   *tmp___0 ;
  int tmp___1 ;

  {
  tmp = __ptrof_file(fl);
  tmp___0 = __stringof(s);
  tmp___1 = fputs(tmp___0, (FILE *)tmp);
  return (tmp___1);
}
}
static int fgetc_wrapper(FILE *fl ) 
{ FILE *tmp ;
  int tmp___0 ;

  {
  tmp = __ptrof_file(fl);
  tmp___0 = fgetc(tmp);
  return (tmp___0);
}
}
static int puts_wrapper(char *s ) 
{ char *tmp ;
  int tmp___0 ;

  {
  tmp = (char *)__ptrof((void *)s);
  tmp___0 = puts((char const   *)tmp);
  return (tmp___0);
}
}
static int fileno_wrapper(FILE *f ) 
{ FILE *tmp ;
  int tmp___0 ;

  {
  tmp = (FILE *)__ptrof((void *)f);
  tmp___0 = fileno(tmp);
  return (tmp___0);
}
}
static int ferror_wrapper(FILE *f ) 
{ FILE *tmp ;
  int tmp___0 ;

  {
  tmp = (FILE *)__ptrof((void *)f);
  tmp___0 = ferror(tmp);
  return (tmp___0);
}
}
static int fseek_wrapper(FILE *fp , long offset , int whence ) 
{ FILE *tmp ;
  int tmp___0 ;

  {
  tmp = __ptrof_file(fp);
  tmp___0 = fseek(tmp, offset, whence);
  return (tmp___0);
}
}
static void clearerr_wrapper(FILE *fp ) 
{ FILE *tmp ;

  {
  tmp = __ptrof_file(fp);
  clearerr(tmp);
  return;
}
}
static size_t fread_wrapper(char *buff , size_t size , size_t count , FILE *fl ) 
{ size_t requested ;
  size_t tmp ;
  size_t res ;
  FILE *tmp___0 ;
  void *tmp___1 ;

  {
  tmp = __ccured_mult_u32(size, count);
  requested = tmp;
  __write_at_least((void *)buff, requested);
  tmp___0 = __ptrof_file(fl);
  tmp___1 = __ptrof((void *)buff);
  res = fread(tmp___1, size, count, (FILE *)tmp___0);
  return (res);
}
}
static size_t fwrite_wrapper(char *buff , size_t size , size_t count , FILE *fl ) 
{ size_t requested ;
  size_t tmp ;
  size_t res ;
  FILE *tmp___0 ;
  void const   *tmp___1 ;

  {
  tmp = __ccured_mult_u32(size, count);
  requested = tmp;
  __write_at_least((void *)buff, requested);
  tmp___0 = __ptrof_file(fl);
  tmp___1 = __ptrof((void *)buff);
  res = fwrite(tmp___1, size, count, (FILE *)tmp___0);
  return (res);
}
}
static char *gets_wrapper(char *buffer ) 
{ char *res ;
  FILE *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;

  {
  tmp = get_stdin();
  tmp___0 = __endof((void *)buffer);
  tmp___1 = __ptrof_nocheck((void *)buffer);
  tmp___2 = fgets_wrapper(buffer, (int )((unsigned int )tmp___0 - (unsigned int )tmp___1),
                          tmp);
  res = tmp___2;
  if ((unsigned int )res != (unsigned int )((void *)0)) {
    tmp___3 = res;
    while (1) {
      if ((int )(*tmp___3) != 10) {
        if (! ((int )(*tmp___3) != 0)) {
          //break;
        }
      } else {
        //break;
      }
      tmp___3 ++;
    }
    (*tmp___3) = (char )'\000';
  }
  return (res);
}
}
void __ccured_va_start(__ccured_va_list  y, unsigned long  x) {}
void __ccured_va_end(__ccured_va_list  x) {}
int __ccured_vsnprintf(char *buffer , int size ,
                              char const   *format , __ccured_va_list args ) {}
static int vsnprintf_wrapper(char *buf___0 , size_t n , char const   *format ,
                                      __ccured_va_list ap ) 
{ char const   *tmp ;
  char *tmp___0 ;
  int tmp___1 ;

  {
  __write_at_least((void *)buf___0, n);
  tmp = __stringof(format);
  tmp___0 = (char *)__ptrof((void *)buf___0);
  tmp___1 = __ccured_vsnprintf(tmp___0, (int )n, tmp, ap);
  return (tmp___1);
}
}
static int vsprintf_wrapper(char *buf___0 , char const   *format , __ccured_va_list ap ) 
{ int n ;
  void *tmp ;
  int tmp___0 ;

  {
  tmp = __endof((void *)buf___0);
  n = (char *)tmp - buf___0;
  tmp___0 = vsnprintf_wrapper(buf___0, (unsigned int )n, format, ap);
  return (tmp___0);
}
}
int GCC_STDARG_START() {}
static int snprintf_wrapper(char *buf___0 , size_t n , char const   *format 
                                     , ...) 
{ __ccured_va_list ap ;
  int res ;
  unsigned long tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;

  {
  __write_at_least((void *)buf___0, n);
  tmp = GCC_STDARG_START();
  __ccured_va_start(ap, tmp);
  tmp___0 = __stringof(format);
  tmp___1 = (char *)__ptrof((void *)buf___0);
  res = __ccured_vsnprintf(tmp___1, (int )n, tmp___0, ap);
  __ccured_va_end(ap);
  return (res);
}
}
static int sprintf_wrapper(char *buf___0 , char const   *format  , ...) 
{ __ccured_va_list ap ;
  int res ;
  int size ;
  void *tmp ;
  void *tmp___0 ;
  unsigned long tmp___1 ;
  char const   *tmp___2 ;
  char *tmp___3 ;

  {
  tmp = __endof((void *)buf___0);
  tmp___0 = __ptrof_nocheck((void *)buf___0);
  size = (int )((unsigned int )tmp - (unsigned int )tmp___0);
  __write_at_least((void *)buf___0, (unsigned int )size);
  tmp___1 = GCC_STDARG_START();
  __ccured_va_start(ap, tmp___1);
  tmp___2 = __stringof(format);
  tmp___3 = (char *)__ptrof((void *)buf___0);
  res = __ccured_vsnprintf(tmp___3, size, tmp___2, ap);
  __ccured_va_end(ap);
  if (res < 0) {
    ccured_fail(3, (char *)"/users/rupak/ccured/include/stdio_wrappers.h", 358, (char *)"sprintf_wrapper");
  } else {
    if (res >= size) {
      ccured_fail(3, (char *)"/users/rupak/ccured/include/stdio_wrappers.h", 358,
                  (char *)"sprintf_wrapper");
    }
  }
  return (res);
}
}
void perror_wrapper(char const   *s ) 
{ char const   *tmp ;

  {
  tmp = __stringof(s);
  perror(tmp);
  return;
}
}
int close(int __fd ) {}
ssize_t read(int __fd , void *__buf , size_t __nbytes ) {}
ssize_t write(int __fd , void const   *__buf , size_t __n ) {}
int execve(char const   *__path , char * const  *__argv , char * const  *__envp ) {}
int execv(char const   *__path , char * const  *__argv ) {}
int execvp(char const   *__file , char * const  *__argv ) {}
char *ttyname(int __fd ) {}
char *getlogin(void) {}
char *optarg ;
int optind ;
int getopt(int ___argc , char const  *___argv , char const   *__shortopts ) {}
char *getusershell(void) {}
static char **__deepcopy_stringarray_from_compat(char **array_in ) 
{ int num_strings ;
  int i ;
  char *   *new_array ;
  char **p ;
  void *tmp ;
  char **tmp___0 ;
  void *tmp___1 ;
  int tmp___2 ;

  {
  num_strings = 0;
  if ((unsigned int )array_in == (unsigned int )((char **)0)) {
    return ((char **)0);
  }
  p = array_in;
  while ((unsigned int )(*p) != (unsigned int )((char *)0)) {
    p = (char **)__trusted_cast((void *)((unsigned long )p + (unsigned long )(1 * sizeof((*p)))));
    num_strings ++;
  }
  num_strings ++;
  tmp___2 = __ccured_has_empty_mangling(sizeof((*new_array)));
  if (tmp___2) {
    tmp = __trusted_deepcast((void *)array_in);
    tmp___0 = (char **)__mkptr_size(tmp, (unsigned int )num_strings * sizeof((*(new_array +
                                                                                0))));
    return (tmp___0);
  } else {
    tmp___1 = wrapperAlloc((unsigned int )num_strings * sizeof((*(new_array + 0))));
    new_array = (char *   *)((char **)tmp___1);
    i = 0;
    while (i < num_strings) {
      p = (char **)__trusted_cast((void *)((unsigned long )array_in + (unsigned long )((unsigned int )i *
                                          sizeof((*array_in)))));
      (*(new_array + i)) = __mkptr_string((*p));
      i ++;
    }
  }
  return ((char **)new_array);
}
}
static char **__deepcopy_stringarray_to_compat(char **array_in ) 
{ int num_strings ;
  void *tmp ;
  void *tmp___0 ;
  int i ;
  char * *new_array ;
  void *tmp___1 ;
  char **tmp___2 ;
  void *tmp___3 ;
  char * *p_new_array ;
  char * *tmp___4 ;
  int tmp___5 ;

  {
  tmp = __endof((void *)array_in);
  tmp___0 = __ptrof_nocheck((void *)array_in);
  num_strings = (int )(((unsigned int )tmp - (unsigned int )tmp___0) / sizeof((*array_in)));
  if ((unsigned int )array_in == (unsigned int )((char **)0)) {
    return ((char **)0);
  }
  tmp___5 = __ccured_has_empty_mangling(sizeof((*array_in)));
  if (tmp___5) {
    tmp___1 = __ptrof((void *)array_in);
    tmp___2 = (char **)__trusted_deepcast(tmp___1);
    return (tmp___2);
  } else {
    tmp___3 = wrapperAlloc((unsigned int )num_strings * sizeof((*new_array)));
    new_array = (char * *)((char **)tmp___3);
    i = 0;
    while (i < num_strings) {
      tmp___4 = (char * *)__trusted_cast((void *)((unsigned long )new_array +
                                                                                                            (unsigned long )((unsigned int )i *
                                                                                                                             sizeof((*new_array)))));
      p_new_array = tmp___4;
      if ((unsigned int )(*(array_in + i)) != (unsigned int )((void *)0)) {
        (*p_new_array) = __stringof((char const   *)(*(array_in + i)));
      } else {
        (*p_new_array) = (char *)((char *)0);
      }
      i ++;
    }
  }
  return ((char **)new_array);
}
}
void *malloc(size_t __size ) {}
void *realloc(void *__ptr , size_t __size ) {}
void free(void *__ptr ) {}
void *realloc_wrapper(void *b , int sz ) 
{ void *res ;
  void *tmp ;
  void *tmp___0 ;
  void *result ;

  {
  tmp = __ptrof(b);
  tmp___0 = realloc(tmp, (unsigned int )sz);
  res = tmp___0;
  result = b;
  result = __mkptr_size((void *)res, (unsigned int )sz);
  return (result);
}
}
void free_wrapper(void *x ) 
{ void *tmp ;

  {
  tmp = __ptrof(x);
  free(tmp);
  return;
}
}
static int execv_wrapper(char *path , char **argv ) 
{ int ret ;
  char **thinArgv ;
  void *e ;
  void *tmp ;
  char * const  *tmp___0 ;
  char const   *tmp___1 ;

  {
  tmp = __endof((void *)argv);
  e = tmp;
  __verify_nul((char const   *)path);
  thinArgv = __deepcopy_stringarray_to_compat(argv);
  tmp___0 = (char * const  *)__ptrof((void *)thinArgv);
  tmp___1 = (char const   *)__ptrof((void *)path);
  ret = execv(tmp___1, tmp___0);
  free_wrapper((void *)thinArgv);
  return (ret);
}
}
static int execvp_wrapper(char *path , char **argv ) 
{ int ret ;
  char **thinArgv ;
  void *e ;
  void *tmp ;
  char * const  *tmp___0 ;
  char const   *tmp___1 ;

  {
  tmp = __endof((void *)argv);
  e = tmp;
  __verify_nul((char const   *)path);
  thinArgv = __deepcopy_stringarray_to_compat(argv);
  tmp___0 = (char * const  *)__ptrof((void *)thinArgv);
  tmp___1 = (char const   *)__ptrof((void *)path);
  ret = execvp(tmp___1, tmp___0);
  free_wrapper((void *)thinArgv);
  return (ret);
}
}
static int execve_wrapper(char *path , char **argv , char **envp ) 
{ int ret ;
  char **thinArgv ;
  char **thinEnvp ;
  char * const  *tmp ;
  char * const  *tmp___0 ;
  char const   *tmp___1 ;

  {
  __verify_nul((char const   *)path);
  thinArgv = __deepcopy_stringarray_to_compat(argv);
  thinEnvp = __deepcopy_stringarray_to_compat(envp);
  tmp = (char * const  *)__ptrof((void *)thinEnvp);
  tmp___0 = (char * const  *)__ptrof((void *)thinArgv);
  tmp___1 = (char const   *)__ptrof((void *)path);
  ret = execve(tmp___1, tmp___0, tmp);
  free_wrapper((void *)thinArgv);
  free_wrapper((void *)thinEnvp);
  return (ret);
}
}
static char *getlogin_wrapper(void) 
{ char *tmp ;
  char *tmp___0 ;

  {
  tmp = getlogin();
  tmp___0 = __mkptr_string(tmp);
  return (tmp___0);
}
}
static char *ttyname_wrapper(int filedes ) 
{ char *tmp ;
  char *tmp___0 ;

  {
  tmp = ttyname(filedes);
  tmp___0 = __mkptr_string(tmp);
  return (tmp___0);
}
}
char *ccured_get_optarg(void) {}
static int getopt_wrapper(int argc , char **argv , char const   *optstring ) 
{ char **thinArgv ;
  int ret ;
  char const   *tmp ;
  char *tmp___0 ;

  {
  __read_at_least((void *)argv, (unsigned int )argc * sizeof((*argv)));
  if (optind > argc) {
    ccured_fail_str((char *)"you have to reset \'optind\' between sets of calls to getopt()",
                    (char *)"/users/rupak/ccured/include/unistd_wrappers.h", 148,
                    (char *)"getopt_wrapper");
  }
  thinArgv = __deepcopy_stringarray_to_compat(argv);
  __verify_nul(optstring);
  tmp = (char const   *)__ptrof((void *)optstring);
  ret = getopt(argc, (char * const  *)thinArgv, tmp);
  free_wrapper((void *)thinArgv);
  tmp___0 = ccured_get_optarg();
  optarg = __mkptr_string(tmp___0);
  return (ret);
}
}
static int read_wrapper(int fid , char *buff , unsigned int size ) 
{ void *tmp ;
  int tmp___0 ;

  {
  __write_at_least((void *)buff, size);
  tmp = __ptrof((void *)buff);
  tmp___0 = read(fid, tmp, size);
  return (tmp___0);
}
}
static int write_wrapper(int fid , char *buff , unsigned int size ) 
{ void *tmp ;
  void *tmp___0 ;
  void const   *tmp___1 ;
  int tmp___2 ;

  {
  tmp = __endof((void *)buff);
  tmp___0 = __ptrof_nocheck((void *)buff);
  if ((unsigned int )tmp - (unsigned int )tmp___0 < size) {
    ccured_fail(3, (char *)"/users/rupak/ccured/include/unistd_wrappers.h", 186, (char *)"write_wrapper");
  }
  tmp___1 = __ptrof((void *)buff);
  tmp___2 = write(fid, tmp___1, size);
  return (tmp___2);
}
}
static char *getusershell_wrapper(void) 
{ char *tmp ;
  char *tmp___0 ;

  {
  tmp = getusershell();
  tmp___0 = __mkptr_string(tmp);
  return (tmp___0);
}
}
void *memcpy(void *__dest , void const   *__src ,
                    size_t __n ) {}
void *memmove(void *__dest , void const   *__src , size_t __n ) {}
void *memset(void *__s , int __c , size_t __n ) {}
int memcmp(void const   *__s1 , void const   *__s2 , size_t __n ) {}
void *memchr(void const   *__s , int __c , size_t __n ) {}
char *strcpy(char *__dest , char const   *__src ) {}
char *strncpy(char *__dest , char const   *__src ,
                     size_t __n ) {}
char *strncat(char *__dest , char const   *__src ,
                     size_t __n ) {}
int strcmp(char const   *__s1 , char const   *__s2 ) {}
int strncmp(char const   *__s1 , char const   *__s2 , size_t __n ) {}
char *strchr(char const   *__s , int __c ) {}
char *strrchr(char const   *__s , int __c ) {}
char *strpbrk(char const   *__s , char const   *__accept ) {}
char *strstr(char const   *__haystack , char const   *__needle ) {}
char *strtok(char *__s , char const   *__delim ) {}
char *strtok_r(char *__s , char const   *__delim ,
                      char **__save_ptr ) {}
size_t strlen(char const   *__s ) {}
char *strerror(int __errnum ) {}
void bzero(void *__s , size_t __n ) {}
int strcasecmp(char const   *__s1 , char const   *__s2 ) {}
int strncasecmp(char const   *__s1 , char const   *__s2 , size_t __n ) {}
char *strsep(char **__stringp , char const   *__delim ) {}
static unsigned int strlen_wrapper(char const   *s ) 
{ unsigned int tmp ;

  {
  tmp = (unsigned int )__strlen((char *)s);
  return (tmp);
}
}
static void bzero_wrapper(char *buff , unsigned int size ) 
{ char *tmp ;

  {
  if (size > 0) {
    __write_at_least((void *)buff, size);
    tmp = (char *)__ptrof((void *)buff);
    bzero((void *)tmp, size);
  }
  return;
}
}
static char *strcpy_wrapper(char *dest , char const   *src ) 
{ char *result ;
  int len ;
  int tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;

  {
  tmp = __strlen((char *)src);
  len = tmp;
  __copytags((void *)dest, (void *)src, (unsigned int )len);
  tmp___0 = (char *)__ptrof((void *)src);
  tmp___1 = (char *)__ptrof((void *)dest);
  //result = strcpy((char *)tmp___0);
  tmp___2 = (char *)__mkptr((void *)result, (void *)dest);
  return (tmp___2);
}
}
static char *strncpy_wrapper(char *dest , char const   *src , int n ) 
{ char *result ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  __strlen_n((char *)src, n);
  __write_at_least((void *)dest, (unsigned int )n);
  tmp = (char *)__ptrof((void *)src);
  tmp___0 = (char *)__ptrof((void *)dest);
  //result = strncpy((char *)tmp,
  //                 (unsigned int )n);
  tmp___1 = (char *)__mkptr((void *)result, (void *)dest);
  return (tmp___1);
}
}
static char *strcat_wrapper(char *dest , char const   *src ) 
{ char *result ;
  int len ;
  int tmp ;
  char *deststart ;
  int tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;

  {
  tmp = __strlen((char *)src);
  len = tmp;
  tmp___0 = __strlen(dest);
  deststart = dest + tmp___0;
  __copytags((void *)deststart, (void *)src, (unsigned int )len);
  tmp___1 = (char *)__ptrof((void *)src);
  tmp___2 = (char *)__ptrof((void *)deststart);
  //result = strcpy((char *)tmp___1);
  tmp___3 = (char *)__mkptr((void *)result, (void *)dest);
  return (tmp___3);
}
}
static char *strncat_wrapper(char *dest , char const   *src , int n ) 
{ char *result ;
  int len ;
  int tmp ;
  char *deststart ;
  int tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;

  {
  tmp = __strlen_n((char *)src, n);
  len = tmp;
  tmp___0 = __strlen(dest);
  deststart = dest + tmp___0;
  __copytags((void *)deststart, (void *)src, (unsigned int )len);
  tmp___1 = (char *)__ptrof((void *)src);
  tmp___2 = (char *)__ptrof((void *)dest);
  //result = strncat((char *)tmp___1,
  //                 (unsigned int )n);
  tmp___3 = (char *)__mkptr((void *)result, (void *)dest);
  return (tmp___3);
}
}
static char *strchr_wrapper(char const   *s , int chr ) 
{ char *result ;
  char *tmp ;
  char *tmp___0 ;

  {
  tmp = __stringof(s);
  result = strchr((char const   *)tmp, chr);
  tmp___0 = (char *)__mkptr((void *)result, (void *)s);
  return (tmp___0);
}
}
char *strrchr_wrapper(char const   *s , int chr ) 
{ char *result ;
  char *tmp ;
  char *tmp___0 ;

  {
  tmp = __stringof(s);
  result = strrchr((char const   *)tmp, chr);
  tmp___0 = (char *)__mkptr((void *)result, (void *)s);
  return (tmp___0);
}
}
static char *strdup_wrapper(char const   *s ) 
{ int len ;
  int tmp ;
  char *result ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;

  {
  tmp = __strlen((char *)s);
  len = tmp;
  tmp___0 = (char *)malloc((unsigned int )(len + 1));
  result = tmp___0;
  if ((unsigned int )result == (unsigned int )((char *)0)) {
    return ((char *)0);
  }
  tmp___1 = (char *)__ptrof((void *)s);
  tmp___2 = (char *)__ptrof_nocheck((void *)result);
  //strcpy((char *)tmp___1);
  __copytags((void *)result, (void *)s, (unsigned int )len);
  return (result);
}
}
int strcasecmp_wrapper(char const   *s1 , char const   *s2 ) 
{ char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;

  {
  tmp = __stringof(s2);
  tmp___0 = __stringof(s1);
  tmp___1 = strcasecmp((char const   *)tmp___0, (char const   *)tmp);
  return (tmp___1);
}
}
static int strcmp_wrapper(char const   *s1 , char const   *s2 ) 
{ char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;

  {
  tmp = __stringof(s2);
  tmp___0 = __stringof(s1);
  tmp___1 = strcmp((char const   *)tmp___0, (char const   *)tmp);
  return (tmp___1);
}
}
int strncasecmp_wrapper(char const   *s1 , char const   *s2 , unsigned int n ) 
{ void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  int tmp___5 ;

  {
  tmp = __endof((void *)s1);
  tmp___0 = __ptrof_nocheck((void *)s1);
  if ((unsigned int )tmp - (unsigned int )tmp___0 < n) {
    __verify_nul(s1);
  }
  tmp___1 = __endof((void *)s2);
  tmp___2 = __ptrof_nocheck((void *)s2);
  if ((unsigned int )tmp___1 - (unsigned int )tmp___2 < n) {
    __verify_nul(s2);
  }
  tmp___3 = (char *)__ptrof((void *)s2);
  tmp___4 = (char *)__ptrof((void *)s1);
  tmp___5 = strncasecmp((char const   *)tmp___4, (char const   *)tmp___3, n);
  return (tmp___5);
}
}
static int strncmp_wrapper(char const   *s1 , char const   *s2 , unsigned int n ) 
{ void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  int tmp___5 ;

  {
  tmp = __endof((void *)s1);
  tmp___0 = __ptrof_nocheck((void *)s1);
  if ((unsigned int )tmp - (unsigned int )tmp___0 < n) {
    __verify_nul(s1);
  }
  tmp___1 = __endof((void *)s2);
  tmp___2 = __ptrof_nocheck((void *)s2);
  if ((unsigned int )tmp___1 - (unsigned int )tmp___2 < n) {
    __verify_nul(s2);
  }
  tmp___3 = (char *)__ptrof((void *)s2);
  tmp___4 = (char *)__ptrof((void *)s1);
  tmp___5 = strncmp((char const   *)tmp___4, (char const   *)tmp___3, n);
  return (tmp___5);
}
}
static char *strpbrk_wrapper(char const   *str , char const   *accept_arg ) 
{ char *res ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  tmp = __stringof(accept_arg);
  tmp___0 = __stringof(str);
  res = strpbrk((char const   *)tmp___0, (char const   *)tmp);
  tmp___1 = (char *)__mkptr((void *)res, (void *)str);
  return (tmp___1);
}
}
static char *strsep_wrapper(char **stringp , char const   *delim ) 
{ char *res ;
  char *tmp ;
  char *tmp___0 ;
  char const   *tmp___1 ;
  void *tmp___2 ;

  {
  if ((unsigned int )stringp == (unsigned int )((void *)0)) {
    return ((char *)0);
  } else {
    if ((unsigned int )(*stringp) == (unsigned int )((void *)0)) {
      return ((char *)0);
    } else {
      tmp___0 = __stringof((char const   *)(*stringp));
      tmp = tmp___0;
      tmp___1 = __stringof(delim);
      tmp___2 = (void *)strsep((& tmp),
                                                              tmp___1);
      res = (char *)__mkptr(tmp___2, (void *)(*stringp));
      (*stringp) = (char *)__mkptr((void *)tmp, (void *)(*stringp));
      return (res);
    }
  }
}
}
double atof(char const   *__nptr ) {}
int atoi(char const   *__nptr ) {}
long atol(char const   *__nptr ) {}
long strtol(char const   *__nptr , char **__endptr ,
                   int __base ) {}
unsigned long strtoul(char const   *__nptr , char **__endptr ,
                             int __base ) {}
time_t time(time_t *t ) {}
static time_t time_wrapper(time_t *timer ) 
{ time_t *tmp ;
  time_t tmp___0 ;

  {
  if ((unsigned int )timer != (unsigned int )((time_t *)0)) {
    __write_at_least((void *)timer, sizeof(time_t ));
  }
  tmp = (time_t *)__ptrof((void *)timer);
  tmp___0 = time(tmp);
  return (tmp___0);
}
}
char *ctime(time_t const   *timep ) {}
static char *ctime_wrapper(time_t const   *timer ) 
{ time_t *thinTimer ;
  time_t *tmp ;
  char *thinRet ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  tmp = (time_t *)__ptrof((void *)((time_t *)timer));
  thinTimer = tmp;
  tmp___0 = ctime((time_t const   *)thinTimer);
  thinRet = tmp___0;
  tmp___1 = __mkptr_string((char *)thinRet);
  return (tmp___1);
}
}
int select(int __nfds , fd_set *__readfds , fd_set *__writefds ,
                  fd_set *__exceptfds , struct timeval *__timeout ) {}
 void exit(int __status ) {}
char *getenv(char const   *__name ) {}
void *bsearch(void const   *__key , void const   *__base , size_t __nmemb ,
                     size_t __size , int (*__compar)(void const   * , void const   * ) ) {}
void qsort(void *__base , size_t __nmemb , size_t __size , int (*__compar)(void const   *left ,
                                                                                  void const   *right ) ) {}
static double atof_wrapper(char *str ) 
{ char *tmp ;
  double tmp___0 ;

  {
  __verify_nul((char const   *)str);
  tmp = (char *)__ptrof((void *)str);
  tmp___0 = atof((char const   *)tmp);
  return (tmp___0);
}
}
static int atoi_wrapper(char *str ) 
{ char *tmp ;
  int tmp___0 ;

  {
  __verify_nul((char const   *)str);
  tmp = (char *)__ptrof((void *)str);
  tmp___0 = atoi((char const   *)tmp);
  return (tmp___0);
}
}
static long atol_wrapper(char *str ) 
{ char *tmp ;
  long tmp___0 ;

  {
  __verify_nul((char const   *)str);
  tmp = (char *)__ptrof((void *)str);
  tmp___0 = atol((char const   *)tmp);
  return (tmp___0);
}
}
void qsort_zero_tags(void *base , size_t nelts , size_t size ) {}
static void *__qsort_base     ;
static int (*__qsort_compare)(void * , void * )  ;
static int __qsort_thunk(void *left , void *right ) 
{ void *fatleft ;
  void *tmp ;
  void *tmp___0 ;
  void *fatright ;
  void *tmp___1 ;
  void *tmp___2 ;
  int tmp___3 ;

  {
  tmp = __ptrof((void *)left);
  tmp___0 = __mkptr(tmp, __qsort_base);
  fatleft = tmp___0;
  tmp___1 = __ptrof((void *)right);
  tmp___2 = __mkptr(tmp___1, __qsort_base);
  fatright = tmp___2;
  tmp___3 = ((*__qsort_compare))(fatleft, fatright);
  return (tmp___3);
}
}
static void qsort_wrapper(void *base , size_t nmemb , size_t size , int (*compare)(void *left ,
                                                                                            void *right ) ) 
{ void *tmp ;
  void *tmp___0 ;
  unsigned int tmp___1 ;
  int (*tmp___2)(void * , void * ) ;
  void *tmp___3 ;

  {
  tmp = __endof(base);
  tmp___0 = __ptrof_nocheck(base);
  tmp___1 = __ccured_mult_u32(nmemb, size);
  if ((unsigned int )tmp - (unsigned int )tmp___0 < tmp___1) {
    ccured_fail(3, (char *)"/users/rupak/ccured/include/stdlib_wrappers.h", 179, (char *)"qsort_wrapper");
  }
  qsort_zero_tags(base, nmemb, size);
  __qsort_base = base;
  __qsort_compare = compare;
  tmp___2 = (int (*)(void * , void * ))__ptrof((void *)(& __qsort_thunk));
  tmp___3 = __ptrof(base);
  qsort(tmp___3, nmemb, size, (int (*)(void const   *left ,
                                       void const   *right ))tmp___2);
  __qsort_base = (void *)0;
  return;
}
}
static void *__bsearch_base     ;
static void *__bsearch_key     ;
static int (*__bsearch_compare)(void * , void * )  ;
static int __bsearch_thunk(void *key , void *element ) 
{ void *fatkey ;
  void *tmp ;
  void *tmp___0 ;
  void *fatelement ;
  void *tmp___1 ;
  void *tmp___2 ;
  int tmp___3 ;

  {
  tmp = __ptrof((void *)key);
  tmp___0 = __mkptr(tmp, __bsearch_key);
  fatkey = tmp___0;
  tmp___1 = __ptrof((void *)element);
  tmp___2 = __mkptr(tmp___1, __bsearch_base);
  fatelement = tmp___2;
  tmp___3 = ((*__bsearch_compare))(fatkey, fatelement);
  return (tmp___3);
}
}
static void *bsearch_wrapper(void *key , void *base , size_t nmemb , size_t size ,
                                      int (*compare)(void *left , void *right ) ) 
{ void *result ;
  void *tmp ;
  void *tmp___0 ;
  unsigned int tmp___1 ;
  int (*tmp___2)(void * , void * ) ;
  void const   *tmp___3 ;
  void const   *tmp___4 ;
  void *tmp___5 ;

  {
  tmp = __endof(base);
  tmp___0 = __ptrof_nocheck(base);
  tmp___1 = __ccured_mult_u32(nmemb, size);
  if ((unsigned int )tmp - (unsigned int )tmp___0 < tmp___1) {
    ccured_fail(3, (char *)"/users/rupak/ccured/include/stdlib_wrappers.h", 227, (char *)"bsearch_wrapper");
  }
  __bsearch_key = key;
  __bsearch_base = base;
  __bsearch_compare = compare;
  tmp___2 = (int (*)(void * , void * ))__ptrof((void *)(& __bsearch_thunk));
  tmp___3 = __ptrof(base);
  tmp___4 = __ptrof(key);
  result = bsearch(tmp___4, tmp___3, nmemb, size, (int (*)(void const   * , void const   * ))tmp___2);
  __bsearch_base = (void *)0;
  tmp___5 = __mkptr(result, base);
  return (tmp___5);
}
}
static long strtol_wrapper(char const   *str , char **endptr , int base ) 
{ char *ep ;
  long result ;
  char **tmp ;
  char const   *tmp___0 ;
  long tmp___1 ;

  {
  if ((unsigned int )endptr == (unsigned int )((void *)0)) {
    tmp = (char **)((void *)0);
  } else {
    tmp = & ep;
  }
  tmp___0 = (char const   *)__ptrof((void *)str);
  tmp___1 = strtol(tmp___0, (char **)tmp, base);
  result = tmp___1;
  if ((unsigned int )endptr != (unsigned int )((void *)0)) {
    (*endptr) = (char *)__mkptr((void *)ep, (void *)str);
  }
  return (result);
}
}
static char *getenv_wrapper(char *str ) 
{ char const   *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  __verify_nul((char const   *)str);
  tmp = (char const   *)__ptrof((void *)str);
  tmp___0 = getenv(tmp);
  tmp___1 = __mkptr_string(tmp___0);
  return (tmp___1);
}
}
static unsigned long strtoul_wrapper(char *nptr , char **endptr ,
                                              int __base ) 
{ char *tmp ;
  char *tmp___0 ;
  unsigned long val ;
  char const   *tmp___1 ;
  unsigned long tmp___2 ;
  char const   *tmp___3 ;
  unsigned long tmp___4 ;

  {
  if ((unsigned int )endptr != (unsigned int )((void *)0)) {
    tmp___0 = (char *)__ptrof((void *)(*endptr));
    tmp = tmp___0;
    tmp___1 = __stringof((char const   *)nptr);
    tmp___2 = strtoul(tmp___1, (char **)(& tmp), __base);
    val = tmp___2;
    (*endptr) = (char *)__mkptr((void *)tmp, (void *)(*endptr));
    return (val);
  } else {
    tmp___3 = __stringof((char const   *)nptr);
    tmp___4 = strtoul(tmp___3, (char **)0, __base);
    return (tmp___4);
  }
}
}
static char const   *saved_str     =    (char const   *)((void *)0);
static char *strtok_wrapper(char *str , char const   *delim ) 
{ char *res ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  if ((unsigned int )str != (unsigned int )((void *)0)) {
    __verify_nul((char const   *)((void *)str));
    saved_str = (char const   *)str;
  }
  tmp = __stringof((char const   *)((void *)delim));
  tmp___0 = (char *)__ptrof((void *)str);
  //res = strtok((char *)tmp);
  tmp___1 = (char *)__mkptr((void *)res, (void *)saved_str);
  return (tmp___1);
}
}
static char *strtok_r_wrapper(char *str , char const   *delim , char **ptrptr ) 
{ char *thin_ptrptr ;
  char *tmp ;
  char *res ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *base ;
  char *tmp___3 ;
  char *tmp___4 ;

  {
  if ((unsigned int )str != (unsigned int )((void *)0)) {
    __verify_nul((char const   *)str);
  }
  tmp = (char *)__ptrof((void *)(*ptrptr));
  thin_ptrptr = tmp;
  tmp___0 = __stringof(delim);
  tmp___1 = (char *)__ptrof((void *)str);
  tmp___2 = strtok_r(tmp___1, tmp___0, (char **)(& thin_ptrptr));
  res = tmp___2;
  if ((unsigned int )str == (unsigned int )((void *)0)) {
    tmp___3 = (*ptrptr);
  } else {
    tmp___3 = str;
  }
  base = tmp___3;
  (*ptrptr) = (char *)__mkptr((void *)thin_ptrptr,
                              (void *)base);
  tmp___4 = (char *)__mkptr((void *)res, (void *)base);
  return (tmp___4);
}
}
static int memcmp_wrapper(void const   *s1 , void const   *s2 , size_t n ) 
{ void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void const   *tmp___3 ;
  void const   *tmp___4 ;
  int tmp___5 ;

  {
  tmp = __endof((void *)s1);
  tmp___0 = __ptrof_nocheck((void *)s1);
  if ((unsigned int )tmp - (unsigned int )tmp___0 < n) {
    ccured_fail(3, (char *)"/users/rupak/ccured/include/string_wrappers.h", 324, (char *)"memcmp_wrapper");
  }
  tmp___1 = __endof((void *)s2);
  tmp___2 = __ptrof_nocheck((void *)s2);
  if ((unsigned int )tmp___1 - (unsigned int )tmp___2 < n) {
    ccured_fail(3, (char *)"/users/rupak/ccured/include/string_wrappers.h", 327, (char *)"memcmp_wrapper");
  }
  tmp___3 = __ptrof((void *)s2);
  tmp___4 = __ptrof((void *)s1);
  tmp___5 = memcmp(tmp___4, tmp___3, n);
  return (tmp___5);
}
}
static void *memset_wrapper(void *buffer , int c , size_t size ) 
{ void *tmp ;

  {
  __write_at_least(buffer, size);
  tmp = __ptrof(buffer);
  memset(tmp, c, size);
  return (buffer);
}
}
static void *memmove_wrapper(void *dest , void const   *src , size_t size ) 
{ void *tmp ;
  void *tmp___0 ;

  {
  if (size) {
    __copytags(dest, (void *)src, size);
    tmp = __ptrof((void *)src);
    tmp___0 = __ptrof(dest);
    memmove(tmp___0, (void const   *)tmp, size);
  }
  return (dest);
}
}
static void *memcpy_wrapper(void *dest , void const   *src , size_t size ) 
{ void const   *tmp ;
  void *tmp___0 ;

  {
  if (size) {
    __copytags(dest, (void *)src, size);
    tmp = __ptrof((void *)src);
    tmp___0 = __ptrof(dest);
    memcpy(tmp___0, (void const   *)tmp, size);
  }
  return (dest);
}
}
static char *strerror_wrapper(int errnum ) 
{ char *ret ;
  char *tmp ;
  char *tmp___0 ;

  {
  tmp = strerror(errnum);
  ret = tmp;
  tmp___0 = __mkptr_string((char *)ret);
  return (tmp___0);
}
}
static char *strstr_wrapper(char const   *__haystack , char const   *__needle ) 
{ char *res ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  tmp = __stringof(__needle);
  tmp___0 = __stringof(__haystack);
  res = strstr((char const   *)tmp___0,
               (char const   *)tmp);
  tmp___1 = (char *)__mkptr((void *)res, (void *)__haystack);
  return (tmp___1);
}
}
static void *memchr_wrapper(void const   *s , int c , size_t n ) 
{ void *result ;
  void const   *tmp ;
  void *tmp___0 ;

  {
  __read_at_least((void *)s, n);
  tmp = __ptrof((void *)s);
  result = memchr(tmp, c, n);
  tmp___0 = __mkptr((void *)result, (void *)s);
  return (tmp___0);
}
}
int make_conn(char *hostname , char **res_host ) ;
static char buf[1601]  ;
void DoFinger1(char *hostname , char *query ) 
{ int s ;
  int nread ;
  char *res_host ;
  int tmp ;
  size_t tmp___0 ;

  {
  s = make_conn(hostname, & res_host);
  if (s < 0) {
    return;
  }
  tmp = strcmp((char const   *)hostname, "localhost");
  if (tmp) {
    printf((char const   *)"[%s]\n", res_host);
  }
  tmp___0 = strlen((char const   *)query);
  write(s, (void const   *)query, tmp___0);
  while (1) {
    nread = read(s, (void *)(buf), sizeof(buf) - 1);
    if (! (nread > 0)) {
      //break;
    }
    buf[nread] = (char )'\000';
    printf((char const   *)"%s", buf);
  }
  close(s);
  return;
}
}
void Usage(char *progname ) 
{ 

  {
  printf((char const   *)"Usage: %s [-c file] [-h] [-V] [-d] [-t]\n",
         progname);
  printf((char const   *)"\t-h\tprint this screen and exit\n\t-V\tprint version number and exit\n\t-t\ttest modus: start in.fingerd locally\n");
  return;
}
}
int main(int argc , char **argv ) 
{ int flag ;
  char *progname ;
  int info ;
  char *hostname ;
  char *query ;
  size_t tmp ;
  char const   *tmp___0 ;

  {
  info = 0;
  progname = strrchr((char const   *)(*(argv + 0)), '/');
  if (! progname) {
    progname = (*(argv + 0));
  } else {
    progname ++;
  }
  while (1) {
    flag = getopt(argc, (char * const  *)argv, "lc:Vdght");
    if (! (flag != -1)) {
      //break;
    }
    switch (flag) {
    case 99: ;
    //break;
    case 108: 
    info = 1;
    //break;
    case 86: 
    printf((char const   *)"%s: %s Version %s\n", progname, "pfinger",
           "0.7.10");
    exit(0);
    case 100: ;
    //break;
    case 103: ;
    //break;
    case 116: ;
    //break;
    case 114: ;
    //break;
    case 104: ;
    default: 
    Usage(progname);
    exit(0);
    //break;
    }
  }
  if (optind < argc) {
    while (optind < argc) {
      hostname = strrchr((char const   *)(*(argv + optind)), '@');
      if (! hostname) {
        hostname = (char *)"localhost";
      } else {
        if (! (*hostname)) {
          hostname = (char *)"localhost";
        } else {
          (*hostname) = (char )'\000';
          hostname ++;
        }
      }
      tmp = strlen((char const   *)(*(argv + optind)));
      query = (char *)malloc(tmp + 10);
      if (query) {
        if (info) {
          tmp___0 = "/W ";
        } else {
          tmp___0 = "";
        }
        sprintf((char *)"%s%s\r\n",
                tmp___0, (*(argv + optind)));
        DoFinger1(hostname, query);
        free((void *)query);
      }
      optind ++;
    }
  } else {
    hostname = (char *)"localhost";
    DoFinger1(hostname, (char *)"\r\n");
  }
  return (0);
}
}
int true_readv(int fd , struct iovec_SAFE  const  *vec , int count ) {}
int true_writev(int filedes , struct iovec_SAFE  const  *vector , int count ) {}
static int readv_wrapper(int fd , struct iovec  const  *vec , int count ) 
{ int i ;
  struct iovec_SAFE *safevec ;
  struct iovec_SAFE *tmp ;
  int tmp___0 ;

  {
  tmp = (struct iovec_SAFE *)wrapperAlloc((unsigned int )count * sizeof((*safevec)));
  safevec = tmp;
  i = 0;
  while (i < count) {
    (safevec)->iov_base = __ptrof((vec)->iov_base);
    (safevec)->iov_len = (vec)->iov_len;
    __write_at_least((vec)->iov_base, (vec)->iov_len);
    i ++;
  }
  tmp___0 = true_readv(fd, (struct iovec_SAFE  const  *)safevec, count);
  return (tmp___0);
}
}
static int writev_wrapper(int fd , struct iovec  const  *vec , int count ) 
{ int i ;
  struct iovec_SAFE *safevec ;
  struct iovec_SAFE *tmp ;
  int tmp___0 ;

  {
  tmp = (struct iovec_SAFE *)wrapperAlloc((unsigned int )count * sizeof((*safevec)));
  safevec = tmp;
  i = 0;
  while (i < count) {
    (safevec)->iov_base = __ptrof((vec)->iov_base);
    (safevec)->iov_len = (vec)->iov_len;
    __read_at_least((vec)->iov_base, (vec)->iov_len);
    i ++;
  }
  tmp___0 = true_writev(fd, (struct iovec_SAFE  const  *)safevec, count);
  return (tmp___0);
}
}
int socket(int __domain , int __type , int __protocol ) {}
int bind(int __fd , void const   *__addr , socklen_t __len ) {}
int getsockname(int __fd , void *__addr , socklen_t *__len ) {}
int connect(int __fd , void const   *__addr , socklen_t __len ) {}
int getpeername(int __fd , void *__addr , socklen_t *__len ) {}
ssize_t send(int __fd , void const   *__buf , size_t __n , int __flags ) {}
ssize_t recv(int __fd , void *__buf , size_t __n , int __flags ) {}
ssize_t sendto(int __fd , void const   *__buf , size_t __n , int __flags ,
                      void const   *__addr , socklen_t __addr_len ) {}
ssize_t recvfrom(int __fd , void *__buf , size_t __n , int __flags ,
                        void *__addr , socklen_t *__addr_len ) {}
ssize_t sendmsg(int __fd , struct msghdr  const  *__message , int __flags ) {}
ssize_t recvmsg(int __fd , struct msghdr *__message , int __flags ) {}
int getsockopt(int __fd , int __level , int __optname , void *__optval ,
                     socklen_t *__optlen ) {}
int setsockopt(int __fd , int __level , int __optname , void const   *__optval ,
                      socklen_t __optlen ) {}
int accept(int __fd , void *__addr , socklen_t *__addr_len ) {}
static int setsockopt_wrapper(int s , int level , int optname , void const   *optval ,
                                       int optlen ) 
{ void const   *tmp ;
  int tmp___0 ;

  {
  __read_at_least((void *)optval, (unsigned int )optlen);
  tmp = __ptrof((void *)optval);
  tmp___0 = setsockopt(s, level, optname, tmp, (unsigned int )optlen);
  return (tmp___0);
}
}
static int getsockopt_wrapper(int s , int level , int optname , void *optval ,
                                       int *optlen ) 
{ socklen_t *tmp ;
  void *tmp___0 ;
  int tmp___1 ;

  {
  __write_at_least(optval, (unsigned int )(*optlen));
  tmp = (socklen_t *)__ptrof((void *)optlen);
  tmp___0 = __ptrof(optval);
  tmp___1 = getsockopt(s, level, optname, tmp___0, tmp);
  return (tmp___1);
}
}
static int bind_wrapper(int sockfd , void *my_addr , int addrlen ) 
{ void *tmp ;
  int tmp___0 ;

  {
  __read_at_least(my_addr, (unsigned int )addrlen);
  tmp = __ptrof(my_addr);
  tmp___0 = bind(sockfd, (void const   *)tmp, (unsigned int )addrlen);
  return (tmp___0);
}
}
static int connect_wrapper(int sockfd , void *my_addr , int addrlen ) 
{ void *tmp ;
  int tmp___0 ;

  {
  __read_at_least(my_addr, (unsigned int )addrlen);
  tmp = __ptrof(my_addr);
  tmp___0 = connect(sockfd, (void const   *)tmp, (unsigned int )addrlen);
  return (tmp___0);
}
}
static int accept_wrapper(int s , void *addr , int *addrlen ) 
{ int res ;
  socklen_t *tmp ;
  void *tmp___0 ;
  int tmp___1 ;

  {
  if ((unsigned int )addr != (unsigned int )((void *)0)) {
    if ((unsigned int )addrlen == (unsigned int )((void *)0)) {
      ccured_fail(15, (char *)"/users/rupak/ccured/include/socket_wrappers.h", 92,
                  (char *)"accept_wrapper");
    }
    __read_at_least(addr, (unsigned int )(*addrlen));
    tmp = (socklen_t *)__ptrof((void *)addrlen);
    tmp___0 = __ptrof(addr);
    res = accept(s, (void *)tmp___0, tmp);
    __write_at_least(addr, (unsigned int )(*addrlen));
    return (res);
  } else {
    //tmp___1 = accept(s, (void *)((int *)0));
    return (tmp___1);
  }
}
}
static int getpeername_wrapper(int s , void *name , int *namelen ) 
{ int res ;
  socklen_t *tmp ;
  void *tmp___0 ;

  {
  __read_at_least(name, (unsigned int )(*namelen));
  tmp = (socklen_t *)__ptrof((void *)namelen);
  tmp___0 = __ptrof(name);
  res = getpeername(s, (void *)tmp___0, tmp);
  __write_at_least(name, (unsigned int )(*namelen));
  return (res);
}
}
static int getsockname_wrapper(int s , void *name , int *namelen ) 
{ int res ;
  socklen_t *tmp ;
  void *tmp___0 ;

  {
  __read_at_least(name, (unsigned int )(*namelen));
  tmp = (socklen_t *)__ptrof((void *)namelen);
  tmp___0 = __ptrof(name);
  res = getsockname(s, (void *)tmp___0, tmp);
  __write_at_least(name, (unsigned int )(*namelen));
  return (res);
}
}
static int sendto_wrapper(int s , void const   *msg , size_t len , int flags ,
                                   void const   *to , socklen_t tolen ) 
{ void const   *tmp ;
  void const   *tmp___0 ;
  int tmp___1 ;

  {
  __read_at_least((void *)msg, len);
  __read_at_least((void *)to, tolen);
  tmp = __ptrof((void *)to);
  tmp___0 = __ptrof((void *)msg);
  tmp___1 = sendto(s, tmp___0, len, flags, tmp, tolen);
  return (tmp___1);
}
}
static int select_wrapper(int n , fd_set *readfds , fd_set *writefds , fd_set *exceptfds ,
                                   struct timeval *timeout ) 
{ void *tmp ;
  struct timeval *tmp___0 ;
  fd_set *tmp___1 ;
  fd_set *tmp___2 ;
  fd_set *tmp___3 ;
  int tmp___4 ;

  {
  tmp = __ptrof((void *)timeout);
  if (tmp) {
    __write_at_least((void *)timeout, sizeof(struct timeval ));
  }
  tmp___0 = (struct timeval *)__ptrof((void *)timeout);
  tmp___1 = (fd_set *)__ptrof((void *)exceptfds);
  tmp___2 = (fd_set *)__ptrof((void *)writefds);
  tmp___3 = (fd_set *)__ptrof((void *)readfds);
  tmp___4 = select(n, tmp___3, tmp___2, tmp___1, (struct timeval *)tmp___0);
  return (tmp___4);
}
}
static int recvfrom_wrapper(int s , void *buf___0 , size_t len , int flags ,
                                     void *from , socklen_t *fromlen ) 
{ socklen_t *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  int tmp___2 ;

  {
  __write_at_least(buf___0, len);
  tmp = (socklen_t *)__ptrof((void *)fromlen);
  tmp___0 = __ptrof(from);
  tmp___1 = __ptrof(buf___0);
  tmp___2 = recvfrom(s, tmp___1, len, flags, tmp___0, tmp);
  return (tmp___2);
}
}
static int recv_wrapper(int s , void *buf___0 , size_t len , int flags ) 
{ void *tmp ;
  int tmp___0 ;

  {
  __write_at_least(buf___0, len);
  tmp = __ptrof(buf___0);
  tmp___0 = recv(s, tmp, len, flags);
  return (tmp___0);
}
}
static int send_wrapper(int s , void const   *msg , size_t len , int flags ) 
{ void const   *tmp ;
  int tmp___0 ;

  {
  __read_at_least((void *)msg, len);
  tmp = __ptrof((void *)msg);
  tmp___0 = send(s, tmp, len, flags);
  return (tmp___0);
}
}
static void __deepcopy_iovec_to_compat(struct iovec *compat ,
                                                struct iovec *fat ) 
{ 

  {
  compat->iov_base = __ptrof_nocheck(fat->iov_base);
  return;
}
}
static void __deepcopy_msghdr_to_compat(struct msghdr *compat ,
                                                 struct msghdr *fat ) 
{ int len ;
  int v ;
  struct iovec *iptr ;
  struct iovec *tmp ;
  int tmp___0 ;

  {
  tmp___0 = __ccured_has_empty_mangling(sizeof((*(fat->msg_iov))));
  if (tmp___0) {
    compat->msg_iov = (struct iovec *)__ptrof((void *)fat->msg_iov);
  } else {
    len = (int )fat->msg_iovlen;
    compat->msg_iov = (struct iovec *)wrapperAlloc((unsigned int )len * sizeof((*(compat->msg_iov +
                                                                                  0))));
    v = 0;
    while (v < len) {
      tmp = (struct iovec *)__trusted_cast((void *)((unsigned long )compat->msg_iov +
                                                                                 (unsigned long )((unsigned int )v *
                                                                                                  sizeof((*(compat->msg_iov))))));
      iptr = tmp;
      __deepcopy_iovec_to_compat(iptr, fat->msg_iov + v);
      v ++;
    }
  }
  return;
}
}
static void __deepcopy_iovec_from_compat(struct iovec *fat , struct iovec *compat ) 
{ 

  {
  fat->iov_base = __mkptr_size((void *)compat->iov_base,
                               compat->iov_len);
  return;
}
}
static void __deepcopy_msghdr_from_compat(struct msghdr *fat , struct msghdr *compat ) 
{ int len ;
  int v ;
  struct iovec *iptr ;
  struct iovec *tmp ;
  int tmp___0 ;

  {
  fat->msg_name = __mkptr_size((void *)compat->msg_name,
                               compat->msg_namelen);
  fat->msg_control = __mkptr_size((void *)compat->msg_control,
                                  compat->msg_controllen);
  tmp___0 = __ccured_has_empty_mangling(sizeof((*(fat->msg_iov))));
  if (tmp___0) {
    fat->msg_iov = (struct iovec *)__mkptr_size((void *)compat->msg_iov,
                                                compat->msg_iovlen * sizeof((*(fat->msg_iov +
                                                                               0))));
  } else {
    len = (int )compat->msg_iovlen;
    fat->msg_iov = (struct iovec *)wrapperAlloc((unsigned int )len * sizeof((*(fat->msg_iov +
                                                                               0))));
    v = 0;
    while (v < len) {
      tmp = (struct iovec *)__trusted_cast((void *)((unsigned long )compat->msg_iov +
                                                                                 (unsigned long )((unsigned int )v *
                                                                                                  sizeof((*(compat->msg_iov))))));
      iptr = tmp;
      __deepcopy_iovec_from_compat(fat->msg_iov + v, iptr);
      v ++;
    }
  }
  return;
}
}
static int sendmsg_wrapper(int s , struct msghdr  const  *fat_msg , int flags ) 
{ struct msghdr lean_msg__area ;
  struct msghdr *lean_msg__ptrof ;
  struct msghdr *tmp ;
  struct msghdr *lean_msg ;
  struct msghdr *tmp___2 ;
  int tmp___4 ;
  int result ;
  int tmp___5 ;

  {
  tmp = (struct msghdr *)__ptrof_nocheck((void *)fat_msg);
  lean_msg__ptrof = tmp;
  if (lean_msg__ptrof) {
    tmp___4 = __ccured_has_empty_mangling(sizeof(struct msghdr ));
    if (tmp___4) {
      tmp___2 = (struct msghdr *)__trusted_cast((void *)lean_msg__ptrof);
    } else {
      __deepcopy_msghdr_to_compat(& lean_msg__area, lean_msg__ptrof);
      tmp___2 = & lean_msg__area;
    }
  } else {
    tmp___2 = (struct msghdr *)__trusted_cast((void *)lean_msg__ptrof);
  }
  lean_msg = tmp___2;
  tmp___5 = sendmsg(s, (struct msghdr  const  *)lean_msg, flags);
  result = tmp___5;
  if ((unsigned int )lean_msg->msg_iov != (unsigned int )fat_msg->msg_iov) {
    wrapperFree((void *)lean_msg->msg_iov);
  }
  return (result);
}
}
static int recvmsg_wrapper(int s , struct msghdr *fat_msg , int flags ) 
{ struct msghdr lean_msg__area ;
  struct msghdr *lean_msg__ptrof ;
  struct msghdr *tmp ;
  struct msghdr *lean_msg ;
  struct msghdr *tmp___2 ;
  int tmp___4 ;
  int result ;
  int tmp___5 ;

  {
  tmp = (struct msghdr *)__ptrof_nocheck((void *)fat_msg);
  lean_msg__ptrof = tmp;
  if (lean_msg__ptrof) {
    tmp___4 = __ccured_has_empty_mangling(sizeof(struct msghdr ));
    if (tmp___4) {
      tmp___2 = (struct msghdr *)__trusted_cast((void *)lean_msg__ptrof);
    } else {
      __deepcopy_msghdr_to_compat(& lean_msg__area, lean_msg__ptrof);
      tmp___2 = & lean_msg__area;
    }
  } else {
    tmp___2 = (struct msghdr *)__trusted_cast((void *)lean_msg__ptrof);
  }
  lean_msg = tmp___2;
  tmp___5 = recvmsg(s, (struct msghdr *)lean_msg, flags);
  result = tmp___5;
  if ((unsigned int )lean_msg != (unsigned int )fat_msg) {
    __deepcopy_msghdr_from_compat(fat_msg, lean_msg);
  }
  if ((unsigned int )lean_msg->msg_iov != (unsigned int )fat_msg->msg_iov) {
    wrapperFree((void *)lean_msg->msg_iov);
  }
  return (result);
}
}
struct hostent *gethostent(void) {}
struct hostent *gethostbyaddr(void const   *__addr , __socklen_t __len , int __type ) {}
struct hostent *gethostbyname(char const   *__name ) {}
int gethostent_r(struct hostent *__result_buf , char *__buf ,
                        size_t __buflen , struct hostent **__result ,
                        int *__h_errnop ) {}
int gethostbyaddr_r(void const   *__addr , __socklen_t __len ,
                           int __type , struct hostent *__result_buf ,
                           char *__buf , size_t __buflen , struct hostent **__result ,
                           int *__h_errnop ) {}
int gethostbyname_r(char const   *__name , struct hostent *__result_buf ,
                           char *__buf , size_t __buflen , struct hostent **__result ,
                           int *__h_errnop ) {}
struct servent *getservbyname(char const   *__name , char const   *__proto ) {}
struct servent *getservbyport(int __port , char const   *__proto ) {}
int getservbyname_r(char const   *__name , char const   *__proto ,
                           struct servent *__result_buf , char *__buf ,
                           size_t __buflen , struct servent **__result ) {}
char const   *gai_strerror(int __ecode ) {}
int getnameinfo(struct sockaddr  const  *__sa , socklen_t __salen ,
                       char *__host , socklen_t __hostlen , char *__serv ,
                       socklen_t __servlen , unsigned int __flags ) {}
static void __deepcopy_hostent_from_compat(struct hostent *fat , struct hostent *compat ) 
{ int num_addrs ;
  int i ;
  char **p ;

  {
  fat->h_name = __mkptr_string((char *)compat->h_name);
  fat->h_aliases = __deepcopy_stringarray_from_compat((char **)compat->h_aliases);
  p = (char **)compat->h_addr_list;
  num_addrs = 0;
  while ((unsigned int )(*p) != (unsigned int )((char *)0)) {
    p = (char **)__trusted_cast((void *)((unsigned long )p +
                                                                                                   (unsigned long )(1 *
                                                                                                                    sizeof((*p)))));
    num_addrs ++;
  }
  num_addrs ++;
  fat->h_addr_list = (char **)wrapperAlloc((unsigned int )num_addrs * sizeof((*(fat->h_addr_list +
                                                                                0))));
  i = 0;
  while (i < num_addrs) {
    p = (char **)__trusted_cast((void *)((unsigned long )compat->h_addr_list +
                                                                                                   (unsigned long )((unsigned int )i *
                                                                                                                    sizeof((*(compat->h_addr_list))))));
    (*(fat->h_addr_list + i)) = (char *)__mkptr_size((void *)(*p),
                                                     (unsigned int )compat->h_length);
    i ++;
  }
  return;
}
}
static struct hostent *gethostbyname_wrapper(char const   *name ) 
{ struct hostent *hcompat ;
  char const   *tmp ;
  struct hostent *src2 ;
  struct hostent *hres ;

  {
  __verify_nul(name);
  tmp = (char const   *)__ptrof((void *)name);
  hcompat = gethostbyname(tmp);
  src2 = hcompat;
  hres = (struct hostent *)0;
  if ((unsigned int )src2 != (unsigned int )((struct hostent *)0)) {
    hres = (struct hostent *)wrapperAlloc(sizeof((*hres)));
    __deepcopy_hostent_from_compat(hres, src2);
  }
  return (hres);
}
}
static struct hostent *gethostbyaddr_wrapper(char const   *addr , int len ,
                                                      int type ) 
{ struct hostent *hcompat ;
  void const   *tmp ;
  struct hostent *src2 ;
  struct hostent *hres ;

  {
  __read_at_least((void *)addr, (unsigned int )len);
  tmp = __ptrof((void *)addr);
  hcompat = gethostbyaddr(tmp, (unsigned int )len, type);
  src2 = hcompat;
  hres = (struct hostent *)0;
  if ((unsigned int )src2 != (unsigned int )((struct hostent *)0)) {
    hres = (struct hostent *)wrapperAlloc(sizeof((*hres)));
    __deepcopy_hostent_from_compat(hres, src2);
  }
  return (hres);
}
}
static struct hostent *gethostent_wrapper(void) 
{ struct hostent *hcompat ;
  struct hostent *tmp ;
  struct hostent *src2 ;
  struct hostent *hres ;

  {
  tmp = gethostent();
  hcompat = tmp;
  src2 = hcompat;
  hres = (struct hostent *)0;
  if ((unsigned int )src2 != (unsigned int )((struct hostent *)0)) {
    hres = (struct hostent *)wrapperAlloc(sizeof((*hres)));
    __deepcopy_hostent_from_compat(hres, src2);
  }
  return (hres);
}
}
static int gethostbyname_r_wrapper(char const   *__name , struct hostent *__result_buf ,
                                            char *__buf , size_t __buflen , struct hostent **__result ,
                                            int *__h_errnop ) 
{ struct hostent hlean ;
  struct hostent *result_lean ;
  int res ;
  char *scratch_space ;
  char *tmp ;
  int *tmp___0 ;
  char *tmp___1 ;
  char const   *tmp___2 ;

  {
  result_lean = & hlean;
  tmp = (char *)wrapperAlloc(__buflen);
  scratch_space = tmp;
  __verify_nul(__name);
  tmp___0 = (int *)__ptrof((void *)__h_errnop);
  tmp___1 = (char *)__ptrof((void *)scratch_space);
  tmp___2 = (char const   *)__ptrof((void *)__name);
  res = gethostbyname_r(tmp___2, (struct hostent *)(& hlean), tmp___1,
                        __buflen, (struct hostent **)(& result_lean),
                        tmp___0);
  if ((unsigned int )result_lean == (unsigned int )((void *)0)) {
    (*__result) = (struct hostent *)((void *)0);
  } else {
    (*__result) = __result_buf;
    if ((unsigned int )(& hlean) != (unsigned int )__result_buf) {
      __deepcopy_hostent_from_compat(__result_buf, & hlean);
    }
  }
  return (res);
}
}
static int gethostbyaddr_r_wrapper(void const   *__addr , socklen_t __len ,
                                            int __type , struct hostent *__result_buf ,
                                            char *__buf , size_t __buflen , struct hostent **__result ,
                                            int *__h_errnop ) 
{ struct hostent hlean ;
  struct hostent *result_lean ;
  int res ;
  char *scratch_space ;
  char *tmp ;
  int *tmp___0 ;
  char *tmp___1 ;
  void const   *tmp___2 ;

  {
  result_lean = & hlean;
  tmp = (char *)wrapperAlloc(__buflen);
  scratch_space = tmp;
  __read_at_least((void *)__addr, __len);
  tmp___0 = (int *)__ptrof((void *)__h_errnop);
  tmp___1 = (char *)__ptrof((void *)scratch_space);
  tmp___2 = __ptrof((void *)__addr);
  res = gethostbyaddr_r(tmp___2, __len, __type, (struct hostent *)(& hlean),
                        tmp___1, __buflen, (struct hostent **)(& result_lean),
                        tmp___0);
  if ((unsigned int )result_lean == (unsigned int )((void *)0)) {
    (*__result) = (struct hostent *)((void *)0);
  } else {
    (*__result) = __result_buf;
    if ((unsigned int )(& hlean) != (unsigned int )__result_buf) {
      __deepcopy_hostent_from_compat(__result_buf, & hlean);
    }
  }
  return (res);
}
}
static int gethostent_r_wrapper(struct hostent *__result_buf , char *__buf ,
                                         size_t __buflen , struct hostent **__result ,
                                         int *__h_errnop ) 
{ struct hostent hlean ;
  struct hostent *result_lean ;
  int res ;
  char *scratch_space ;
  char *tmp ;
  int *tmp___0 ;
  char *tmp___1 ;

  {
  result_lean = & hlean;
  tmp = (char *)wrapperAlloc(__buflen);
  scratch_space = tmp;
  tmp___0 = (int *)__ptrof((void *)__h_errnop);
  tmp___1 = (char *)__ptrof((void *)scratch_space);
  res = gethostent_r((struct hostent *)(& hlean), tmp___1, __buflen,
                     (struct hostent **)(& result_lean), tmp___0);
  if ((unsigned int )result_lean == (unsigned int )((void *)0)) {
    (*__result) = (struct hostent *)((void *)0);
  } else {
    (*__result) = __result_buf;
    if ((unsigned int )(& hlean) != (unsigned int )__result_buf) {
      __deepcopy_hostent_from_compat(__result_buf, & hlean);
    }
  }
  return (res);
}
}
static void __deepcopy_servent_from_compat(struct servent *fat , struct servent *compat ) 
{ 

  {
  fat->s_name = __mkptr_string((char *)compat->s_name);
  fat->s_proto = __mkptr_string((char *)compat->s_proto);
  fat->s_aliases = __deepcopy_stringarray_from_compat((char **)compat->s_aliases);
  return;
}
}
static struct servent *getservbyname_wrapper(char const   *name , char const   *proto ) 
{ struct servent *ssafe ;
  char const   *tmp ;
  char const   *tmp___0 ;
  struct servent *src2 ;
  struct servent *res ;

  {
  __verify_nul(name);
  __verify_nul(proto);
  tmp = (char const   *)__ptrof((void *)proto);
  tmp___0 = (char const   *)__ptrof((void *)name);
  ssafe = getservbyname(tmp___0, tmp);
  src2 = ssafe;
  res = (struct servent *)0;
  if ((unsigned int )src2 != (unsigned int )((struct servent *)0)) {
    res = (struct servent *)wrapperAlloc(sizeof((*res)));
    __deepcopy_servent_from_compat(res, src2);
  }
  return (res);
}
}
static int getservbyname_r_wrapper(char *__name , char *__proto , struct servent *__result_buf ,
                                            char *__buf , size_t __buflen , struct servent **__result ) 
{ struct servent ssafe ;
  struct servent *result_lean ;
  int res ;
  char *scratch_space ;
  char *tmp ;
  char *tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;

  {
  result_lean = & ssafe;
  tmp = (char *)wrapperAlloc(__buflen);
  scratch_space = tmp;
  __verify_nul((char const   *)__name);
  __verify_nul((char const   *)__proto);
  tmp___0 = (char *)__ptrof((void *)scratch_space);
  tmp___1 = (char const   *)__ptrof((void *)__proto);
  tmp___2 = (char const   *)__ptrof((void *)__name);
  res = getservbyname_r(tmp___2, tmp___1, (struct servent *)(& ssafe),
                        tmp___0, __buflen, (struct servent **)(& result_lean));
  if ((unsigned int )result_lean == (unsigned int )((void *)0)) {
    (*__result) = (struct servent *)((void *)0);
  } else {
    (*__result) = __result_buf;
    if ((unsigned int )(& ssafe) != (unsigned int )__result_buf) {
      __deepcopy_servent_from_compat(__result_buf, & ssafe);
    }
  }
  return (res);
}
}
static int getnameinfo_wrapper(struct sockaddr  const  *sa , int salen ,
                                        char *host , int hostlen , char *serv , int servlen ,
                                        int flags ) 
{ char *tmp ;
  char *tmp___0 ;
  struct sockaddr  const  *tmp___1 ;
  int tmp___2 ;

  {
  __read_at_least((void *)sa, (unsigned int )salen);
  if (host) {
    if (hostlen) {
      __write_at_least((void *)host, (unsigned int )hostlen);
    }
  }
  if (serv) {
    if (servlen) {
      __write_at_least((void *)serv, (unsigned int )servlen);
    }
  }
  tmp = (char *)__ptrof((void *)serv);
  tmp___0 = (char *)__ptrof((void *)host);
  tmp___1 = (struct sockaddr  const  *)__ptrof((void *)sa);
  tmp___2 = getnameinfo(tmp___1, (unsigned int )salen, tmp___0, (unsigned int )hostlen,
                        tmp, (unsigned int )servlen, (unsigned int )flags);
  return (tmp___2);
}
}
int true_getaddrinfo(char const   *node , char const   *service , struct libc_addrinfo  const  *hints ,
                            struct libc_addrinfo **res ) {}
void true_freeaddrinfo(struct libc_addrinfo *res ) {}
int getaddrinfo_wrapper(char const   *node , char const   *service , struct addrinfo  const  *hints ,
                        struct addrinfo **res ) 
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
  void *tmp___3 ;
  int tmp___4 ;
  void *tmp___6 ;

  {
  dest = (struct addrinfo *)((void *)0);
  libc_hints.ai_flags = hints->ai_flags;
  libc_hints.ai_family = hints->ai_family;
  libc_hints.ai_socktype = hints->ai_socktype;
  libc_hints.ai_protocol = hints->ai_protocol;
  libc_hints.ai_addrlen = hints->ai_addrlen;
  libc_hints.ai_addr = (struct sockaddr *)__ptrof((void *)hints->ai_addr);
  libc_hints.ai_canonname = (char *)__ptrof((void *)hints->ai_canonname);
  libc_hints.ai_next = (struct libc_addrinfo *)((void *)0);
  tmp = (char const   *)__ptrof((void *)service);
  tmp___0 = (char const   *)__ptrof((void *)node);
  ret = true_getaddrinfo(tmp___0, tmp, (struct libc_addrinfo  const  *)(& libc_hints),
                         & libc_res);
  if (ret != 0) {
    return (ret);
  }
  (*res) = (struct addrinfo *)((void *)0);
  source = libc_res;
  while ((unsigned int )source != (unsigned int )((void *)0)) {
    tmp___1 = (struct addrinfo *)wrapperAlloc(sizeof((*dest)));
    newNode = tmp___1;
    if (! dest) {
      (*res) = newNode;
    } else {
      dest->ai_next = newNode;
    }
    dest = newNode;
    dest->ai_flags = source->ai_flags;
    dest->ai_family = source->ai_family;
    dest->ai_socktype = source->ai_socktype;
    dest->ai_protocol = source->ai_protocol;
    dest->ai_addrlen = source->ai_addrlen;
    len = (int )source->ai_addrlen;
    dest->ai_addr = (struct sockaddr *)wrapperAlloc((unsigned int )len);
    tmp___3 = __ptrof((void *)dest->ai_addr);
    memcpy(tmp___3, source->ai_addr, len);
    if (source->ai_canonname) {
      tmp___4 = (int )strlen(source->ai_canonname);
      len = tmp___4 + 1;
      dest->ai_canonname = (char *)wrapperAlloc((unsigned int )len);
      tmp___6 = __ptrof((void *)dest->ai_canonname);
      memcpy(tmp___6, source->ai_canonname, len);
    } else {
      dest->ai_canonname = (char *)((void *)0);
    }
    dest->ai_next = (struct addrinfo *)((void *)0);
    source = source->ai_next;
  }
  true_freeaddrinfo(libc_res);
  return (ret);
}
}
void freeaddrinfo_wrapper(struct addrinfo *res ) 
{ struct addrinfo *next ;

  {
  while (res) {
    next = res->ai_next;
    free_wrapper((void *)res->ai_addr);
    if (res->ai_canonname) {
      free_wrapper((void *)res->ai_canonname);
    }
    free_wrapper((void *)res);
    res = next;
  }
  return;
}
}
char const   *gai_strerror_wrapper(int code ) 
{ char *tmp ;
  char const   *tmp___0 ;

  {
  tmp = gai_strerror(code);
  tmp___0 = __mkptr_string(tmp);
  return (tmp___0);
}
}
static struct servent *getservbyport_wrapper(int port , char const   *proto ) 
{ struct servent *lean_answer ;
  char const   *tmp ;

  {
  tmp = (char const   *)__ptrof((void *)proto);
  lean_answer = getservbyport(port, tmp);
  return ((struct servent *)((void *)0));
}
}
void closelog(void) {}
void openlog(char const   *__ident , int __option , int __facility ) {}
void (   syslog)(int __pri , char const   *__fmt  , ...) {}
void log_open(char *progName , int type ) ;
void log_close(void) ;
void log(int level , char *fmt  , ...) ;
int portnumber;
int make_conn(char *hostname , char **res_host ) 
{ int s ;
  struct sockaddr_in rem_addr ;
  struct hostent *h_ent ;
  register unsigned short __v ;
  register unsigned short __x ;
  int tmp ;
  int tmp___0 ;

  {
  h_ent = gethostbyname((char const   *)hostname);
  if (! h_ent) {
    return (-1);
  }
  if (res_host) {
    (*res_host) = h_ent->h_name;
  }
  rem_addr.sin_family = 2;
  __x = (unsigned short )portnumber;
  tmp = __builtin_constant_p((int )__x);
  if (tmp) {
    __v = (unsigned short )((((int )__x >> 8) & 255) | (((int )__x & 255) << 8));
  } else {
    __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
  }
  rem_addr.sin_port = __v;
  rem_addr.sin_addr = (*((struct in_addr *)(*(h_ent->h_addr_list + 0))));
  s = socket(2, 1, 0);
  if (s < 0) {
    log(3, (char *)"Could not create socket: %m");
    return (-1);
  }
  tmp___0 = connect(s, (void const   *)((struct sockaddr *)(& rem_addr)), sizeof(rem_addr));
  if (tmp___0 < 0) {
    log(3, (char *)"Connect to %s failed: %m", hostname);
    return (-1);
  }
  return (s);
}
}
static int _log_type;
static char *syslog_mem  ;
void log_open(char *progName , int type ) 
{ 

  {
  _log_type = type;
  if (_log_type == 1) {
    openlog((char const   *)progName, 1, 24);
    syslog_mem = (char *)malloc(160);
  }
  return;
}
}
void log_close(void) 
{ 

  {
  if (_log_type == 1) {
    closelog();
  }
  return;
}
}
void log(int level , char *fmt  , ...) 
{ __ccured_va_list arg ;
  unsigned long tmp ;
  FILE *tmp___0 ;
  FILE *tmp___1 ;
  FILE *tmp___2 ;
  FILE *tmp___3 ;
  FILE *tmp___4 ;
  FILE *tmp___5 ;

  {
  tmp = GCC_STDARG_START();
  __ccured_va_start(arg, tmp);
  if (_log_type == 1) {
    //vsnprintf((char *)fmt,
    //          arg);
    syslog(level, "%s", syslog_mem);
  } else {
    switch (level) {
    case 3: 
    tmp___0 = get_stderr();
    fprintf(tmp___0, (char const   *)"[ERROR]: ");
    //break;
    case 4: 
    tmp___1 = get_stderr();
    fprintf(tmp___1, (char const   *)"[WARNING]: ");
    //break;
    case 6: 
    tmp___2 = get_stderr();
    fprintf(tmp___2, (char const   *)"[INFO]: ");
    //break;
    case 7: 
    tmp___3 = get_stderr();
    fprintf(tmp___3, (char const   *)"[DEBUG]: ");
    //break;
    }
    tmp___4 = get_stderr();
    vfprintf(tmp___4, (char const   *)fmt, arg);
    tmp___5 = get_stderr();
    fprintf(tmp___5, (char const   *)"\n");
  }
  __ccured_va_end(arg);
  return;
}
}
