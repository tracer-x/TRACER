typedef unsigned int __uid_t;
typedef unsigned int size_t;
typedef int __ssize_t;
typedef long __time_t;
typedef __time_t time_t;
typedef unsigned char bitstr_t;
typedef __uid_t uid_t;
typedef __ssize_t ssize_t;
typedef long long __off64_t;

struct env_t {
   char *e_val ;
   struct env_t *e_next ;
};
typedef struct env_t env_t;
struct cl_t;
struct cf_t {
   struct cf_t *cf_next ;
   struct cl_t *cf_line_base ;
   char *cf_user ;
   struct env_t *cf_env_base ;
   int cf_running ;
   signed char cf_tzdiff ;
};
typedef struct cf_t cf_t;


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
typedef struct cl_t cl_t;
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

struct list_t;
struct list_t {
   char *str ;
   struct list_t *next ;
};
typedef struct list_t list_t;

typedef unsigned long __ino_t;
typedef long __off_t;
typedef unsigned int __gid_t;
typedef __gid_t gid_t;

struct dirent {
   __ino_t d_ino ;
   __off_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
struct __dirstream;
typedef struct __dirstream DIR;

struct passwd {
   char *pw_name ;
   char *pw_passwd ;
   __uid_t pw_uid ;
   __gid_t pw_gid ;
   char *pw_gecos ;
   char *pw_dir ;
   char *pw_shell ;
};

struct job_t {
   struct cl_t *j_line ;
   struct job_t *j_next ;
};
typedef int __pid_t;
typedef __pid_t pid_t;
struct exe_t {
   struct cl_t *e_line ;
   pid_t e_ctrl_pid ;
   pid_t e_job_pid ;
};
typedef struct job_t job_t;
struct exe_t *exe_array  ;

struct fcrondyn_cl {
   struct fcrondyn_cl *fcl_next ;
   int fcl_sock_fd ;
   char *fcl_user ;
   time_t fcl_idle_since ;
   int fcl_cmd_len ;
   long *fcl_cmd ;
};

struct lavg_t {
   struct cl_t *l_line ;
   time_t l_until ;
};
typedef struct lavg_t lavg_t;

struct _IO_FILE;
typedef struct _IO_FILE FILE;
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

typedef unsigned long long __dev_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long __blksize_t;
typedef long __blkcnt_t;

struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};

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

typedef struct fcrondyn_cl fcrondyn_cl;
short exe_num  ;
char debug_opt ;
struct cl_t **serial_array  ;
short serial_array_size  ;
short serial_array_index  ;
short serial_num  ;
struct job_t *queue_base  ;
struct cf_t *file_base  ;
char err_job_nfound_str[29]  ; 
time_t now  ;
long first_sleep ;
char *fcrontabs ;
short serial_running  ;
struct lavg_t *lavg_array  ;
short lavg_num  ;
short lavg_serial_running  ;
char err_all_nallowed_str[39]  ; 
char err_invalid_user_str[47]  ; 
char err_others_nallowed_str[48]  ; 
unsigned long next_id  ;

//////////////////////////////////////////////////////////////////////////////
// EXTERNAL FUNCTIONS
//////////////////////////////////////////////////////////////////////////////
/* int _IO_getc(_IO_FILE *__fp ) {} */
/* void add_serial_job(struct cl_t *line , int info_fd ) {} */
/* void set_next_exe_notrun(struct cl_t *line , char context ) {} */
/* void save_file(struct cf_t *arg_file ) {} */
/* size_t strcspn(char const   *__s , char const   *__reject ) {} */
/* size_t strlen(char const   *__s ) {} */
/* void mail_notrun(struct cl_t *line , char context , struct tm *since ) {} */
/* void add_lavg_job(struct cl_t *line , int info_fd ) {} */
/* void set_next_exe(struct cl_t *line , char option , int info_fd ) {} */
/* void *calloc(size_t __nmemb , size_t __size ) { } */
/* int closedir(DIR *__dirp ) { } */
/* void Debug(char *fmt  , ...) { } */
/* void die(char *fmt  , ...) { } */
/* void die_e(char *fmt  , ...) { } */
/* int *__errno_location(void) { } */
/* void error(char *fmt  , ...) { } */
/* void error_e(char *fmt  , ...) { } */
/* void explain(char *fmt  , ...) { } */
/* void free(void *__ptr ) { } */
/* int getloadavg(double *result , int n ) { } */
/* int get_nb_mdays(int year , int mon ) { } */
/* struct passwd *getpwnam(char const   *__name ) { } */
/* struct passwd *getpwuid(__uid_t __uid ) { } */
/* void goto_non_matching(cl_t *line , struct tm *ftime , char option ) { } */
/* void insert_nextexe(struct cl_t *line ) { } */
/* struct tm *localtime(time_t const   *__timer ) { } */
/* void *memcpy(void * __dest , void const   * __src , */
/*                     size_t __n ) { } */
/* time_t mktime(struct tm *__tp ) { } */
/* DIR *opendir(char const   *__name ) { } */
/* void print_fields(int fd , unsigned char *details ) { } */
/* void print_line(int fd , struct cl_t *line , unsigned char *details , pid_t pid , */
/*                 int index___0 , time_t until ) { } */
/* int rand(void) { } */
/* ssize_t send(int __fd , void const   *__buf , size_t __n , int __flags ) { } */
/* void set_wday(struct tm *date ) { } */
/* void send_msg_fd_debug(int fd , char *fmt  , ...) { } */
/* void send_msg_fd(int fd , char *fmt  , ...) { } */
/* int remove(char const   *__filename ) { } */
/* struct dirent *readdir(DIR *__dirp ) { } */
/* void warn(char *fmt  , ...) { } */
/* void warn_e(char *fmt  , ...) { } */
/* int strncmp(char const   *__s1 , char const   *__s2 , size_t __n ) { } */
/* char *strdup2(char const   *str ) { } */
/* int strcmp(char const   *__s1 , char const   *__s2 ) { } */
/* char *strchr(char const   *__s , int __c ) { } */
/* int (   snprintf)(char * __s , size_t __maxlen , */
/*                                                char const   * __format  */
/*                                                , ...) { } */
/* extern void bzero(void *__s , size_t __n ) ; */
/* int fstat__extinline(int __fd , struct stat *__statbuf ) { } */
/* int read_strn(int fd , char **str , short size ) { } */
/* int read_type(int fd , short *type , short *size ) { } */
/* FILE * fopen(char * file_name, char * mode){} */
/* int fileno(FILE * f){} */
/* int ferror(FILE * f){} */
/* void fclose(FILE * f){} */
/* int read(int a, void * b, unsigned int  c){} */

extern int _IO_getc(_IO_FILE *__fp );
extern void add_serial_job(struct cl_t *line , int info_fd );
extern void set_next_exe_notrun(struct cl_t *line , char context );
extern void save_file(struct cf_t *arg_file );
extern size_t strcspn(char const   *__s , char const   *__reject );
extern size_t strlen(char const   *__s );
extern void mail_notrun(struct cl_t *line , char context , struct tm *since );
extern void add_lavg_job(struct cl_t *line , int info_fd );
extern void set_next_exe(struct cl_t *line , char option , int info_fd );
extern void *calloc(size_t __nmemb , size_t __size );
extern int closedir(DIR *__dirp );
extern void Debug(char *fmt  , ...); 
extern void die(char *fmt  , ...);
extern void die_e(char *fmt  , ...);
extern int *__errno_location(void);
extern void error(char *fmt  , ...);
extern void error_e(char *fmt  , ...);
extern void explain(char *fmt  , ...);
extern void free(void *__ptr );
extern int getloadavg(double *result , int n );
extern int get_nb_mdays(int year , int mon );
extern struct passwd *getpwnam(char const   *__name );
extern struct passwd *getpwuid(__uid_t __uid );
extern void goto_non_matching(cl_t *line , struct tm *ftime , char option );
extern void insert_nextexe(struct cl_t *line );
extern struct tm *localtime(time_t const   *__timer );
extern void *memcpy(void * __dest , void const * __src, size_t __n );
extern time_t mktime(struct tm *__tp );
extern DIR *opendir(char const   *__name );
extern void print_fields(int fd , unsigned char *details );
extern void print_line(int fd , struct cl_t *line , unsigned char *details , pid_t pid ,
		       int index___0 , time_t until );
extern int rand(void);
extern ssize_t send(int __fd , void const   *__buf , size_t __n , int __flags );
extern void set_wday(struct tm *date );
extern void send_msg_fd_debug(int fd , char *fmt  , ...);
extern void send_msg_fd(int fd , char *fmt  , ...);
extern int remove(char const   *__filename );
extern struct dirent *readdir(DIR *__dirp );
extern void warn(char *fmt  , ...);
extern void warn_e(char *fmt  , ...);
extern int strncmp(char const   *__s1 , char const   *__s2 , size_t __n );
extern char *strdup2(char const   *str );
extern int strcmp(char const   *__s1 , char const   *__s2 );
extern char *strchr(char const   *__s , int __c );
extern int (snprintf)(char * __s , size_t __maxlen, char const   * __format , ...);
extern void bzero(void *__s , size_t __n ) ;
extern int fstat__extinline(int __fd , struct stat *__statbuf );
extern int read_strn(int fd , char **str , short size );
extern int read_type(int fd , short *type , short *size );
extern FILE * fopen(char * file_name, char * mode);
extern int fileno(FILE * f);
extern int ferror(FILE * f);
extern void fclose(FILE * f);
extern int read(int a, void * b, unsigned int  c);

int __INF;

void delete_file(char const   *user_name ) 
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
  prev_file = (cf_t *)((void *)0);
  env = (env_t *)((void *)0);
  cur_env = (env_t *)((void *)0);
  j = (struct job_t *)((void *)0);
  s_a = (struct cl_t **)((void *)0);
  file = file_base;
  while ((unsigned int )file != (unsigned int )((void *)0)) {  /// LOOP level 1
    tmp = strcmp(user_name, (char const   *)file->cf_user);
    if (tmp != 0) {
      prev_file = file;
      file = file->cf_next;
      continue;
    }
    i = 0;
    while (i < (int )exe_num) {                                /// LOOP level 2
      if ((unsigned int )(exe_array + i)->e_line != (unsigned int )((void *)0)) {
        if ((unsigned int )((exe_array + i)->e_line)->cl_file == (unsigned int )file) {
          if ((int )((exe_array + i)->e_line)->cl_option[0] & 32) {
            //goto _L___0;
          } else {
            if ((int )((exe_array + i)->e_line)->cl_option[0] & 64) {
              _L___0:  
              if (! ((int )((exe_array + i)->e_line)->cl_option[0] & 2)) {
                serial_running = (short )((int )serial_running - 1);
              } else {
                //goto _L;
              }
            } else {
              _L:  
              if ((int )((exe_array + i)->e_line)->cl_option[0] & 32) {
                if ((int )((exe_array + i)->e_line)->cl_option[0] & 2) {
                  lavg_serial_running = (short )((int )lavg_serial_running - 1);
                }
              }
            }
          }
          (exe_array + i)->e_line = (struct cl_t *)((void *)0);
        }
      }
      i ++;
    }
    i = 0;
    while (i < (int )lavg_num) {                                    /// LOOP level 2
      if ((unsigned int )((lavg_array + i)->l_line)->cl_file == (unsigned int )file) {
        if (debug_opt) {
          Debug((char *)"removing %s from lavg queue", ((lavg_array + i)->l_line)->cl_shell);
        }
        ((lavg_array + i)->l_line)->cl_numexe = (unsigned char )((int )((lavg_array +
                                                                         i)->l_line)->cl_numexe -
                                                                 1);
        lavg_num = (short )((int )lavg_num - 1);
        if (i < lavg_num) {
          (*(lavg_array + i)) = (*(lavg_array + lavg_num));
          (lavg_array + lavg_num)->l_line = (struct cl_t *)((void *)0);
        } else {
          (lavg_array + i)->l_line = (struct cl_t *)((void *)0);
        }
      } else {
        i ++;
      }
    }
    i = 0;
    while (i < (int )serial_array_size) {                       /// LOOP level 2
      if ((unsigned int )(*(serial_array + i)) != (unsigned int )((void *)0)) {
        if ((unsigned int )((*(serial_array + i)))->cl_file == (unsigned int )file) {
          if (! s_a) {
            s_a = (struct cl_t **)calloc((unsigned int )serial_array_size, sizeof(cl_t *));
          }
          if (debug_opt) {
            Debug((char *)"removing %s from serial queue", ((*(serial_array + i)))->cl_shell);
          }
          serial_num = (short )((int )serial_num - 1);
          ((*(serial_array + i)))->cl_numexe = (unsigned char )((int )((*(serial_array +
                                                                          i)))->cl_numexe -
                                                                1);
          (*(serial_array + i)) = (struct cl_t *)((void *)0);
        }
      }
      i ++;
    }
    if (! s_a) {
      //goto end_of_serial_recomputing;
    }
    k = (int )serial_array_index + (int )serial_num;
    if (k >= (int )serial_array_size) {
      k -= (int )serial_array_size;
    }
    k = 0;
    i = k;
    while (i < (int )serial_array_size) {                                 /// LOOP level 2
      if ((int )serial_array_index + i < (int )serial_array_size) {
        (*(s_a + k)) = (*(serial_array + ((int )serial_array_index + i)));
        if ((unsigned int )(*(s_a + k)) != (unsigned int )((void *)0)) {
          k ++;
        }
      } else {
        (*(s_a + k)) = (*(serial_array + (((int )serial_array_index + i) - (int )serial_array_size)));
        if ((unsigned int )(*(s_a + k)) != (unsigned int )((void *)0)) {
          k ++;
        }
      }
      i ++;
    }
    free((void *)serial_array);
    serial_array = s_a;
    serial_array_index = 0;
    end_of_serial_recomputing: 
    cur_line = file->cf_line_base;
    while (__INF) {
      // while (1) {                                                         /// LOOP level 2  
      line = cur_line;
      if (! ((unsigned int )line != (unsigned int )((void *)0))) {
        break;
      }
      cur_line = line->cl_next;
      prev_j = (struct job_t *)((void *)0);
      j = queue_base;
      while ((unsigned int )j != (unsigned int )((void *)0)) {          /// LOOP level 3
        if ((unsigned int )j->j_line == (unsigned int )line) {
          if ((unsigned int )prev_j != (unsigned int )((void *)0)) {
            prev_j->j_next = j->j_next;
          } else {
            queue_base = j->j_next;
          }
          free((void *)j);
          break;
        } else {
          prev_j = j;
        }
        j = j->j_next;
      }
      free((void *)line->cl_shell);
      free((void *)line->cl_runas);
      free((void *)line->cl_mailto);
      free((void *)line);
    }
    break;
  }
  if ((unsigned int )file == (unsigned int )((void *)0)) {
    return;
  }
  if ((unsigned int )prev_file == (unsigned int )((void *)0)) {
    file_base = file->cf_next;
  } else {
    prev_file->cf_next = file->cf_next;
  }
  cur_env = file->cf_env_base;
  while (__INF) {
      //  while (1) {                                                      /// LOOP level 1
    env = cur_env;
    if (! ((unsigned int )env != (unsigned int )((void *)0))) {
      break;
    }
    cur_env = env->e_next;
    free((void *)env->e_val);
    free((void *)env);
  }
  free((void *)file->cf_user);
  free((void *)file);
  return;
  }
}

int add_line_to_file(cl_t *cl , cf_t *cf , uid_t runas , char *runas_str , time_t t_save ) 
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
  slept = now - t_save;
  if ((unsigned int )cl->cl_shell == (unsigned int )((void *)0)) {
    //goto _L;
  } else {
    if ((unsigned int )cl->cl_runas == (unsigned int )((void *)0)) {
      //goto _L;
    } else {
      if ((unsigned int )cl->cl_mailto == (unsigned int )((void *)0)) {
        _L:  
        error((char *)"Line is not valid (empty shell, runas or mailto field) : ignored");
        bzero((void *)cl, sizeof(cl));
        if (cl->cl_shell) {
          free((void *)cl->cl_shell);
        }
        if (cl->cl_runas) {
          free((void *)cl->cl_runas);
        }
        if (cl->cl_mailto) {
          free((void *)cl->cl_mailto);
        }
        return (1);
      }
    }
  }
  if (runas != 0) {
    tmp = strcmp((char const   *)cl->cl_runas, (char const   *)runas_str);
    if (tmp != 0) {
      warn((char *)"warning: runas(%s) is not owner (%s): overridden.", cl->cl_runas,
           runas_str);
    }
    free((void *)cl->cl_runas);
    cl->cl_runas = strdup2((char const   *)runas_str);
  }
  cl->cl_file = cf;
  if (cl->cl_mailto) {
    if ((int )(*(cl->cl_mailto)) == 45) {
      error((char *)"mailto field \'%s\' is not valid : set to owner %s.", cl->cl_mailto,
            (cl->cl_file)->cf_user);
      free((void *)cl->cl_mailto);
      cl->cl_mailto = strdup2((char const   *)(cl->cl_file)->cf_user);
    } else {
      tmp___0 = strcspn((char const   *)cl->cl_mailto, " \t\n");
      tmp___1 = strlen((char const   *)cl->cl_mailto);
      if (tmp___0 != tmp___1) {
        error((char *)"mailto field \'%s\' is not valid : set to owner %s.", cl->cl_mailto,
              (cl->cl_file)->cf_user);
        free((void *)cl->cl_mailto);
        cl->cl_mailto = strdup2((char const   *)(cl->cl_file)->cf_user);
      }
    }
  }
  if ((int )cl->cl_numexe > 0) {
    cl->cl_numexe = 0;
    if ((int )cl->cl_option[0] & 2) {
      if (! (! ((int )cl->cl_option[2] & 16))) {
        add_lavg_job(cl, -1);
      }
    } else {
      if ((int )cl->cl_option[0] & 32) {
        add_serial_job(cl, -1);
      } else {
        if ((int )cl->cl_option[0] & 64) {
          add_serial_job(cl, -1);
        } else {
          warn((char *)"job %s did not finish : running it again.", cl->cl_shell);
          cl->cl_option[0] = (unsigned char )((int )cl->cl_option[0] | 64);
          add_serial_job(cl, -1);
        }
      }
    }
  }
  if (! ((int )cl->cl_option[0] & 1)) {
    if (cl->cl_nextexe <= now) {
      if (cl->cl_nextexe == 0) {
        set_next_exe(cl, 1, -1);
      } else {
        if ((int )cl->cl_runfreq == 1) {
          if ((int )cl->cl_option[2] & 32) {
            set_next_exe_notrun(cl, 2);
          } else {
            //goto _L___3;
          }
        } else {
          _L___3:  
          if ((int )cl->cl_option[0] & 16) {
            if (t_save != 0) {
              if ((int )cl->cl_runfreq != 1) {
                if ((int )cl->cl_remain > 0) {
                  cl->cl_remain = (unsigned short )((int )cl->cl_remain - 1);
                  if (cl->cl_remain > 0) {
                    if (debug_opt) {
                      Debug((char *)"    cl_remain: %d", cl->cl_remain);
                    }
                  } else {
                    //goto _L___0;
                  }
                } else {
                  _L___0:  
                  cl->cl_remain = cl->cl_runfreq;
                  if (debug_opt) {
                    Debug((char *)"   boot-run %s", cl->cl_shell);
                  }
                  if (! ((int )cl->cl_option[0] & 2)) {
                    cl->cl_option[0] = (unsigned char )((int )cl->cl_option[0] | 64);
                    add_serial_job(cl, -1);
                  } else {
                    add_lavg_job(cl, -1);
                  }
                }
                set_next_exe(cl, 0, -1);
              } else {
                //goto _L___2;
              }
            } else {
              //goto _L___2;
            }
          } else {
            _L___2:  
            if ((int )cl->cl_option[2] & 32) {
              tmp___2 = localtime((time_t const   *)(& cl->cl_nextexe));
              since2 = tmp___2;
              memcpy((void *)(& since), (void const   *)since2,
                     sizeof(since));
              set_next_exe(cl, 1, -1);
              mail_notrun(cl, 2, & since);
            } else {
              set_next_exe(cl, 1, -1);
            }
          }
        }
      }
    } else {
      insert_nextexe(cl);
    }
  } else {
    if ((int )cl->cl_option[3] & 1) {
      cl->cl_nextexe = now + cl->cl_first;
    } else {
      cl->cl_nextexe = cl->cl_nextexe + slept;
    }
    if (cl->cl_timefreq < 10) {
      error((char *)"Invalid timefreq for %s: set to 1 day", cl->cl_shell);
      cl->cl_timefreq = 86400;
    }
    insert_nextexe(cl);
  }
  if (debug_opt) {
    ftime = localtime((time_t const   *)(& cl->cl_nextexe));
    if (debug_opt) {
      Debug((char *)"  cmd %s next exec %d/%d/%d wday:%d %02d:%02d:%02d", cl->cl_shell,
            ftime->tm_mon + 1, ftime->tm_mday, ftime->tm_year + 1900, ftime->tm_wday,
            ftime->tm_hour, ftime->tm_min, ftime->tm_sec);
    }
  }
  tmp___3 = next_id;
  next_id = next_id + 1;
  cl->cl_id = (long )tmp___3;
  if ((unsigned long )cl->cl_id >= 4294967294) {
    next_id = 0;
  }
  cl->cl_next = cf->cf_line_base;
  cf->cf_line_base = cl;
  return (0);
}
}

int read_file(char const   *file_name , cf_t *cf ) 
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
  ff = (FILE *)((void *)0);
  cl = (cl_t *)((void *)0);
  env = (env_t *)((void *)0);
  bufi = 0;
  t_save = (time_t )0;
  runas = (uid_t )0;
  runas_str = (char *)((void *)0);
  pass = (struct passwd *)((void *)0);
  type = 0;
  size = 0;
  ff = fopen((char const   *)file_name, (char const   *)"r");
  if ((unsigned int )ff == (unsigned int )((void *)0)) {
    warn_e((char *)"Could not read %s (may have just been removed)", file_name);
    //goto err;
  }
  tmp = fileno(ff);
  rc = fstat__extinline(tmp, & file_stat);
  if (rc != 0) {
    error_e((char *)"Could not stat %s", file_name);
    //goto err;
  }
  tmp___0 = strncmp(file_name, "new.", 4);
  if (tmp___0 == 0) {
    if (file_stat.st_uid == 0) {
      runas = 0;
    } else {
      runas = file_stat.st_uid;
      pass = getpwuid(file_stat.st_uid);
      if ((unsigned int )pass == (unsigned int )((void *)0)) {
        error_e((char *)"Could not getpwuid(%d)", file_stat.st_uid);
        //goto err;
      }
      runas_str = strdup2((char const   *)pass->pw_name);
    }
    cf->cf_user = strdup2(file_name + 4);
  } else {
    if (! cf->cf_user) {
      cf->cf_user = strdup2(file_name);
    }
    if (file_stat.st_uid == 0) {
      runas = 0;
    } else {
      error((char *)"Non-new file %s owned by someone else than root", file_name);
      //goto err;
    }
  }
  if (debug_opt) {
    Debug((char *)"User %s Entry", file_name);
  }
  bzero((void *)(buf), sizeof(buf));
  tmp___1 = fileno(ff);
  tmp___2 = read_type(tmp___1, & type, & size);
  if (tmp___2 != 0) {
    error((char *)"File %s is not valid: ignored.", file_name);
    error((char *)"This file may have been generated by an old version of fcron.");
    error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
    //goto err;
  } else {
    if ((int )type != 1) {
      error((char *)"File %s is not valid: ignored.", file_name);
      error((char *)"This file may have been generated by an old version of fcron.");
      error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
      //goto err;
    } else {
      tmp___3 = fileno(ff);
      tmp___4 = read(tmp___3, (void *)(& bufi), (unsigned int )size);
      if (tmp___4 < (ssize_t )size) {
        error((char *)"File %s is not valid: ignored.", file_name);
        error((char *)"This file may have been generated by an old version of fcron.");
        error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
        //goto err;
      } else {
        if (bufi != 100) {
          error((char *)"File %s is not valid: ignored.", file_name);
          error((char *)"This file may have been generated by an old version of fcron.");
          error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
          //goto err;
        }
      }
    }
  }
  tmp___5 = fileno(ff);
  tmp___6 = read_type(tmp___5, & type, & size);
  if (tmp___6 != 0) {
    error((char *)"Invalid binary fcrontab (no USER field)");
    //goto err;
  } else {
    if ((int )type != 2) {
      error((char *)"Invalid binary fcrontab (no USER field)");
      //goto err;
    }
  }
  free((void *)cf->cf_user);
  tmp___7 = fileno(ff);
  tmp___8 = read_strn(tmp___7, & cf->cf_user, size);
  if (tmp___8 != 0) {
    error((char *)"Cannot read user\'s name : file ignored");
    //goto err;
  }
  if (runas != 0) {
    free((void *)cf->cf_user);
    cf->cf_user = runas_str;
  }
  tmp___9 = fileno(ff);
  tmp___10 = read_type(tmp___9, & type, & size);
  if (tmp___10 != 0) {
    error((char *)"could not get time and date of saving");
    //goto err;
  } else {
    if ((int )type != 3) {
      error((char *)"could not get time and date of saving");
      //goto err;
    } else {
      tmp___11 = fileno(ff);
      tmp___12 = read(tmp___11, (void *)(& t_save), (unsigned int )size);
      if (tmp___12 < (ssize_t )size) {
        error((char *)"could not get time and date of saving");
        //goto err;
      }
    }
  }
  cl = (cl_t *)calloc(1, sizeof(cl_t ));
  if ((unsigned int )cl == (unsigned int )((void *)0)) {
    die_e((char *)"Could not calloc.");
  }
  while (__INF) {
      //  while (1) {                    /// LOOP
    tmp___55 = fileno(ff);
    tmp___56 = read_type(tmp___55, & type, & size);
    if (! (tmp___56 == 0)) {
      break;
    }
    switch ((int )type) {
    case 1000: 
    env = (env_t *)calloc(1, sizeof(env_t ));
    if ((unsigned int )env == (unsigned int )((void *)0)) {
      die_e((char *)"Could not calloc.");
    }
    tmp___13 = fileno(ff);
    tmp___14 = read_strn(tmp___13, & env->e_val, size);
    if (tmp___14 != 0) {
      error_e((char *)"Error while reading env var");
      //goto err;
    }
    if (debug_opt) {
      Debug((char *)"  Env: \"%s\"", env->e_val);
    }
    env->e_next = cf->cf_env_base;
    cf->cf_env_base = env;
    break;
    case 4: 
    tmp___15 = fileno(ff);
    tmp___16 = read(tmp___15, (void *)(& bufi), (unsigned int )size);
    if (tmp___16 < (ssize_t )size) {
      error_e((char *)"Error while reading tzdiff field");
      //goto err;
    }
    cf->cf_tzdiff = (signed char )bufi;
    break;
    case 2001: 
    tmp___17 = fileno(ff);
    tmp___18 = read_strn(tmp___17, & cl->cl_shell, size);
    if (tmp___18 != 0) {
      error_e((char *)"Error while reading shell field");
      //goto err;
    }
    break;
    case 2006: 
    tmp___19 = fileno(ff);
    tmp___20 = read_strn(tmp___19, & cl->cl_runas, size);
    if (tmp___20 != 0) {
      error_e((char *)"Error while reading runas field");
      //goto err;
    }
    break;
    case 2007: 
    tmp___21 = fileno(ff);
    tmp___22 = read_strn(tmp___21, & cl->cl_mailto, size);
    if (tmp___22 != 0) {
      error_e((char *)"Error while reading mailto field");
      //goto err;
    }
    break;
    case 2008: 
    tmp___23 = fileno(ff);
    tmp___24 = read(tmp___23, (void *)(& bufi), (unsigned int )size);
    if (tmp___24 < (ssize_t )size) {
      error_e((char *)"Error while reading nextexe field");
      //goto err;
    }
    cl->cl_nextexe = bufi;
    break;
    case 2018: 
    tmp___25 = fileno(ff);
    tmp___26 = read(tmp___25, (void *)(& bufi), (unsigned int )size);
    if (tmp___26 < (ssize_t )size) {
      error_e((char *)"Error while reading first field");
      //goto err;
    }
    cl->cl_first = bufi;
    break;
    case 2017: ;
    if ((int )size < 4) {

    }
    tmp___27 = fileno(ff);
    tmp___28 = read(tmp___27, (void *)(& cl->cl_option), (unsigned int )size);
    if (tmp___28 < (ssize_t )size) {
      error_e((char *)"Error while reading option field");
      //goto err;
    }
    break;
    case 2002: 
    tmp___29 = fileno(ff);
    tmp___30 = read(tmp___29, (void *)(& cl->cl_numexe), (unsigned int )size);
    if (tmp___30 < (ssize_t )size) {
      error_e((char *)"Error while reading numexe field");
      //goto err;
    }
    break;
    case 2003: 
    tmp___31 = fileno(ff);
    tmp___32 = read(tmp___31, (void *)(& cl->cl_lavg), (unsigned int )size);
    if (tmp___32 < (ssize_t )size) {
      error_e((char *)"Error while reading lavg field");
      //goto err;
    }
    break;
    case 2004: 
    tmp___33 = fileno(ff);
    tmp___34 = read(tmp___33, (void *)(& bufi), (unsigned int )size);
    if (tmp___34 < (ssize_t )size) {
      error_e((char *)"Error while reading until field");
      //goto err;
    }
    cl->cl_until = bufi;
    break;
    case 2005: 
    tmp___35 = fileno(ff);
    tmp___36 = read(tmp___35, (void *)(& cl->cl_nice), (unsigned int )size);
    if (tmp___36 < (ssize_t )size) {
      error_e((char *)"Error while reading nice field");
      //goto err;
    }
    break;
    case 2011: 
    tmp___37 = fileno(ff);
    tmp___38 = read(tmp___37, (void *)(& bufi), (unsigned int )size);
    if (tmp___38 < (ssize_t )size) {
      error_e((char *)"Error while reading runfreq field");
      //goto err;
    }
    cl->cl_runfreq = (unsigned short )bufi;
    break;
    case 2009: 
    tmp___39 = fileno(ff);
    tmp___40 = read(tmp___39, (void *)(& bufi), (unsigned int )size);
    if (tmp___40 < (ssize_t )size) {
      error_e((char *)"Error while reading remain field");
      //goto err;
    }
    cl->cl_remain = (unsigned short )bufi;
    break;
    case 2010: 
    tmp___41 = fileno(ff);
    tmp___42 = read(tmp___41, (void *)(& bufi), (unsigned int )size);
    if (tmp___42 < (ssize_t )size) {
      error_e((char *)"Error while reading timefreq field");
      //goto err;
    }
    cl->cl_timefreq = bufi;
    break;
    case 2012: 
    tmp___43 = fileno(ff);
    tmp___44 = read(tmp___43, (void *)(& cl->cl_mins), (unsigned int )size);
    if (tmp___44 < (ssize_t )size) {
      error_e((char *)"Error while reading mins field");
      //goto err;
    }
    break;
    case 2013: 
    tmp___45 = fileno(ff);
    tmp___46 = read(tmp___45, (void *)(& cl->cl_hrs), (unsigned int )size);
    if (tmp___46 < (ssize_t )size) {
      error_e((char *)"Error while reading hrs field");
      //goto err;
    }
    break;
    case 2014: 
    tmp___47 = fileno(ff);
    tmp___48 = read(tmp___47, (void *)(& cl->cl_days), (unsigned int )size);
    if (tmp___48 < (ssize_t )size) {
      error_e((char *)"Error while reading days field");
      //goto err;
    }
    break;
    case 2015: 
    tmp___49 = fileno(ff);
    tmp___50 = read(tmp___49, (void *)(& cl->cl_mons), (unsigned int )size);
    if (tmp___50 < (ssize_t )size) {
      error_e((char *)"Error while reading mons field");
      //goto err;
    }
    break;
    case 2016: 
    tmp___51 = fileno(ff);
    tmp___52 = read(tmp___51, (void *)(& cl->cl_dow), (unsigned int )size);
    if (tmp___52 < (ssize_t )size) {
      error_e((char *)"Error while reading dow field");
      //goto err;
    }
    break;
    case 2000: 
    tmp___53 = add_line_to_file(cl, cf, runas, runas_str, t_save);
    if (tmp___53 == 0) {
      cl = (cl_t *)calloc(1, sizeof(cl_t ));
      if ((unsigned int )cl == (unsigned int )((void *)0)) {
        die_e((char *)"Could not calloc.");
      }
    }
    break;
    default: 
    error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name,
          type);
    i = 0;
    while (i < (int )size) {         /// LOOP
      tmp___54 = _IO_getc(ff);
      if (tmp___54 == -1) {
        //goto err;
      }
      i ++;
    }
    }
  }
  free((void *)cl);
  tmp___57 = ferror(ff);
  if (tmp___57 != 0) {
    error((char *)"file %s is truncated : you should reinstall it with fcrontab",
          file_name);
  }
  fclose(ff);
  return (0);
  err: 
  if ((unsigned int )ff != (unsigned int )((void *)0)) {
    fclose(ff);
  }
  if ((unsigned int )cl != (unsigned int )((void *)0)) {
    if ((unsigned int )cl->cl_next == (unsigned int )((void *)0)) {
      if (cl->cl_shell) {
        free((void *)cl->cl_shell);
      }
      if (cl->cl_runas) {
        free((void *)cl->cl_runas);
      }
      if (cl->cl_mailto) {
        free((void *)cl->cl_mailto);
      }
      free((void *)cl);
    }
  }
  if ((unsigned int )cl != (unsigned int )((void *)0)) {
    cf->cf_next = file_base;
    file_base = cf;
    delete_file((char const   *)cf->cf_user);
  } else {
    if ((unsigned int )cf->cf_user != (unsigned int )((void *)0)) {
      free((void *)cf->cf_user);
    }
  }
  return (-1);
}
}


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
  cur_f = (cf_t *)((void *)0);
  user = (char *)((void *)0);
  tmp___7 = strchr((char const   *)file_name, '.');
  if ((unsigned int )tmp___7 != (unsigned int )((void *)0)) {
    prev = (cf_t *)((void *)0);
    user = file_name + 4;
    cur_f = file_base;
    while (cur_f) {
      tmp = strcmp((char const   *)user, (char const   *)cur_f->cf_user);
      if (tmp == 0) {
        break;
      }
      prev = cur_f;
      cur_f = cur_f->cf_next;
    }
    if ((unsigned int )cur_f != (unsigned int )((void *)0)) {
      old = (cf_t *)((void *)0);
      old_l = (cl_t *)((void *)0);
      new_l = (cl_t *)((void *)0);
      size = (size_t )18;
      old = cur_f;
      cur_f = (cf_t *)calloc(1, sizeof(cf_t ));
      if ((unsigned int )cur_f == (unsigned int )((void *)0)) {
        die_e((char *)"Could not calloc.");
      }
      tmp___0 = read_file((char const   *)file_name, cur_f);
      if (tmp___0 != 0) {
        return;
      }
      if ((unsigned int )prev != (unsigned int )((void *)0)) {
        prev->cf_next = old->cf_next;
        old->cf_next = file_base;
        file_base = old;
      }
      new_l = cur_f->cf_line_base;
      while (new_l) {   // LOOP level 1 
        old_l = old->cf_line_base;
        while (old_l) { // LOOP level 2
          tmp___1 = strcmp((char const   *)new_l->cl_shell, (char const   *)old_l->cl_shell);
          if (tmp___1 == 0) {
            if ((int )new_l->cl_option[0] & 1) {
              if (new_l->cl_timefreq == old_l->cl_timefreq) {
                //goto _L;
              } else {
                //goto _L___0;
              }
            } else {
              _L___0:  
              if (! ((int )new_l->cl_option[0] & 1)) {
                tmp___2 = memcmp((void const   *)(& new_l->cl_mins), (void const   *)(& old_l->cl_mins),
                                 size);
                if (tmp___2 == 0) {
                  if (((int )new_l->cl_option[0] & 8) == ((int )old_l->cl_option[0] &
                                                          8)) {
                    _L:  
                    if ((int )new_l->cl_runfreq == (int )old_l->cl_runfreq) {
                      new_l->cl_remain = old_l->cl_remain;
                    }
                    if ((int )(new_l->cl_file)->cf_tzdiff != (int )(old_l->cl_file)->cf_tzdiff) {
                      if ((old_l->cl_nextexe - (time_t )(old_l->cl_file)->cf_tzdiff) +
                          (time_t )(new_l->cl_file)->cf_tzdiff > now) {
                        new_l->cl_nextexe = (old_l->cl_nextexe - (time_t )(old_l->cl_file)->cf_tzdiff) +
                                            (time_t )(new_l->cl_file)->cf_tzdiff;
                      } else {
                        new_l->cl_nextexe = old_l->cl_nextexe;
                      }
                    } else {
                      new_l->cl_nextexe = old_l->cl_nextexe;
                    }
                    insert_nextexe(new_l);
                    if (debug_opt) {
                      ftime = localtime((time_t const   *)(& new_l->cl_nextexe));
                      if (debug_opt) {
                        Debug((char *)"  from last conf: %s next exec %d/%d/%d wday:%d %02d:%02d",
                              new_l->cl_shell, ftime->tm_mon + 1, ftime->tm_mday,
                              ftime->tm_year + 1900, ftime->tm_wday, ftime->tm_hour,
                              ftime->tm_min);
                      }
                    }
                    break;
                  }
                }
              }
            }
          }
          old_l = old_l->cl_next;
        }
        new_l = new_l->cl_next;
      }
      delete_file((char const   *)user);
      cur_f->cf_next = file_base;
      file_base = cur_f;
      save_file(cur_f);
      tmp___3 = remove((char const   *)file_name);
      if (tmp___3 != 0) {
        error_e((char *)"could not remove %s", file_name);
      }
    } else {
      cur_f = (cf_t *)calloc(1, sizeof(cf_t ));
      if ((unsigned int )cur_f == (unsigned int )((void *)0)) {
        die_e((char *)"Could not calloc.");
      }
      tmp___4 = read_file((char const   *)file_name, cur_f);
      if (tmp___4 != 0) {
        return;
      }
      cur_f->cf_next = file_base;
      file_base = cur_f;
      save_file(cur_f);
      tmp___5 = remove((char const   *)file_name);
      if (tmp___5 != 0) {
        error_e((char *)"could not remove %s", file_name);
      }
    }
  } else {
    cur_f = (cf_t *)calloc(1, sizeof(cf_t ));
    if ((unsigned int )cur_f == (unsigned int )((void *)0)) {
      die_e((char *)"Could not calloc.");
    }
    tmp___6 = read_file((char const   *)file_name, cur_f);
    if (tmp___6 != 0) {
      return;
    }
    cur_f->cf_next = file_base;
    file_base = cur_f;
  }
  return;
}
}

void synchronize_dir(char const   *dir_name ) 
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
  rm_list = (list_t *)((void *)0);
  new_list = (list_t *)((void *)0);
  file_list = (list_t *)((void *)0);
  list_cur = (list_t *)((void *)0);
  tmp = strcmp(dir_name, ".");
  if (tmp == 0) {
    explain((char *)"updating configuration from %s", fcrontabs);
  } else {
    explain((char *)"updating configuration from %s", dir_name);
  }
  dir = opendir(".");
  if (dir) {
    while (__INF) {
      // while (1) {  // LOOP level 1
      den = readdir(dir);
      if (! den) {
        break;
      }
      tmp___2 = strncmp((char const   *)(den->d_name), "rm.", 3);
      if (tmp___2 == 0) {
        list_cur = (list_t *)calloc(1, sizeof(list_t ));
        if ((unsigned int )list_cur == (unsigned int )((void *)0)) {
          die_e((char *)"Could not calloc.");
        }
        list_cur->str = strdup2((char const   *)(den->d_name));
        list_cur->next = rm_list;
        rm_list = list_cur;
      } else {
        tmp___1 = strncmp((char const   *)(den->d_name), "new.", 4);
        if (tmp___1 == 0) {
          list_cur = (list_t *)calloc(1, sizeof(list_t ));
          if ((unsigned int )list_cur == (unsigned int )((void *)0)) {
            die_e((char *)"Could not calloc.");
          }
          list_cur->str = strdup2((char const   *)(den->d_name));
          list_cur->next = new_list;
          new_list = list_cur;
        } else {
          tmp___0 = strchr((char const   *)(den->d_name), '.');
          if ((unsigned int )tmp___0 != (unsigned int )((void *)0)) {
            continue;
          } else {
            if ((unsigned int )file_base == (unsigned int )((void *)0)) {
              list_cur = (list_t *)calloc(1, sizeof(list_t ));
              if ((unsigned int )list_cur == (unsigned int )((void *)0)) {
                die_e((char *)"Could not calloc.");
              }
              list_cur->str = strdup2((char const   *)(den->d_name));
              list_cur->next = file_list;
              file_list = list_cur;
            }
          }
        }
      }
    }
    closedir(dir);
  } else {
    die((char *)"Unable to open current dir!");
  }
  list_cur = rm_list;
  while (list_cur) {  // LOOP LEVEL 1
    explain((char *)"removing file %s", list_cur->str + 3);
    delete_file((char const   *)(list_cur->str + 3));
    tmp___3 = remove((char const   *)(list_cur->str + 3));
    if (tmp___3 != 0) {
      tmp___4 = __errno_location();
      if ((*tmp___4) != 2) {
        error_e((char *)"Could not remove %s", list_cur->str + 3);
      }
    }
    tmp___5 = remove((char const   *)list_cur->str);
    if (tmp___5 != 0) {
      tmp___6 = __errno_location();
      if ((*tmp___6) != 2) {
        error_e((char *)"Could not remove %s", list_cur->str);
      }
    }
    list_cur = list_cur->next;
  }
  list_cur = file_list;
  while (list_cur) { // LOOP LEVEL 1
    tmp___7 = getpwnam((char const   *)list_cur->str);
    if (tmp___7) {
      explain((char *)"adding file %s", list_cur->str);
      synchronize_file(list_cur->str);
    } else {
      tmp___8 = strcmp((char const   *)list_cur->str, "systab");
      if (tmp___8 == 0) {
        explain((char *)"adding file %s", list_cur->str);
        synchronize_file(list_cur->str);
      } else {
        error((char *)"ignoring file \"%s\" : not in passwd file.", list_cur->str);
      }
    }
    list_cur = list_cur->next;
  }
  list_cur = new_list;
  while (list_cur) { // LOOP LEVEL 1
    tmp___9 = getpwnam((char const   *)(list_cur->str + 4));
    if (tmp___9) {
      explain((char *)"adding new file %s", list_cur->str + 4);
      synchronize_file(list_cur->str);
    } else {
      tmp___10 = strcmp((char const   *)(list_cur->str + 4), "systab");
      if (tmp___10 == 0) {
        explain((char *)"adding new file %s", list_cur->str + 4);
        synchronize_file(list_cur->str);
      } else {
        error((char *)"ignoring file %s : not in passwd file.", list_cur->str + 4);
      }
    }
    list_cur = list_cur->next;
  }
  l = (list_t *)((void *)0);
  next = (list_t *)((void *)0);
  next = rm_list;
  while (__INF) {
      //while (1) { // LOOP LEVEL 1
    l = next;
    if (! ((unsigned int )l != (unsigned int )((void *)0))) {
      break;
    }
    next = l->next;
    free((void *)l->str);
    free((void *)l);
  }
  next = new_list;
  while (__INF) {
      //while (1) { // LOOP LEVEL 1
    l = next;
    if (! ((unsigned int )l != (unsigned int )((void *)0))) {
      break;
    }
    next = l->next;
    free((void *)l->str);
    free((void *)l);
  }
  next = file_list;
  while (__INF) {
  //while (1) { // LOOP LEVEL 1
    l = next;
    if (! ((unsigned int )l != (unsigned int )((void *)0))) {
      break;
    }
    next = l->next;
    free((void *)l->str);
    free((void *)l);
  }
  return;
}
}

// For simplicity, we make found a global variable.
int found;

void cmd_ls(struct fcrondyn_cl *client , long *cmd , int fd , int is_root ) 
{ //int found ;
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
    found = 0;
    if ((*(cmd + 1)) == -1) {
      tmp = 1;
    } else {
      tmp = 0;
    }
    all = tmp;
    user = (char *)((void *)0);
    i = 0;
    while (i < 1) { // loop level 1
      fields[i] = 0;
      i ++;
    }
    switch ((int )(*(cmd + 0))) {
    case 105: 
      fields[0] = (unsigned char )((int )fields[0] | 8);
      fields[0] = (unsigned char )((int )fields[0] | 2);
      fields[0] = (unsigned char )((int )fields[0] | 1);
      fields[0] = (unsigned char )((int )fields[0] | 64);
      print_fields(fd, fields);
      j = queue_base;
      while ((unsigned int )j != (unsigned int )((void *)0)) {  // loop level 1
	if ((*(cmd + 1)) == (j->j_line)->cl_id) {
	  tmp___0 = strcmp((char const   *)client->fcl_user, 
                           (char const   *)((j->j_line)->cl_file)->cf_user);
	  if (tmp___0 == 0) {
	    print_line(fd, j->j_line, fields, 0, 0, 0);
	  } else {
	    if (is_root) {
	      print_line(fd, j->j_line, fields, 0, 0, 0);
	    } else {
	      send(fd, (void const   *)(err_job_nfound_str), sizeof(err_job_nfound_str),
		   0);
	    }
	  }
	  found = 1;
	  break;
	}
	j = j->j_next;
      }
      break;
    case 101: ;
    case 102: ;
    case 103: ;
    case 104: ;
      if ((*(cmd + 0)) == 102) {
	lavg[0] = (double )0;
	lavg[1] = (double )0;
	lavg[2] = (double )0;
	getloadavg(lavg, 3);
	i = snprintf((char *)(lavg_str), sizeof(lavg_str), 
                     (char const   *)"Current load average : %.1f, %.1f, %.1f\n",
		     lavg[0], lavg[1], lavg[2]);
	send(fd, (void const   *)(lavg_str), (unsigned int )i, 0);
	fields[0] = (unsigned char )((int )fields[0] | 16);
      } else {
	fields[0] = (unsigned char )((int )fields[0] | 8);
      }
      if ((*(cmd + 0)) == 103) {
	fields[0] = (unsigned char )((int )fields[0] | 32);
      }
      if ((*(cmd + 0)) == 104) {
	fields[0] = (unsigned char )((int )fields[0] | 4);
      }
      if (all) {
	if (! is_root) {
	  warn((char *)"User %s tried to list *all* jobs.", client->fcl_user);
	  send(fd, (void const   *)(err_all_nallowed_str), sizeof(err_all_nallowed_str),
	       0);
	  send(fd, (void const   *)"\000\000", sizeof("\000\000"), 0);
	  return;
	}
      }
      if (all) {
	fields[0] = (unsigned char )((int )fields[0] | 1);
      }
      print_fields(fd, fields);
      if (! all) {
	if ((*(cmd + 1)) == -100) {
	  user = (char *)"systab";
	} else {
	  pass = getpwuid((unsigned int )(*(cmd + 1)));
	  if ((unsigned int )pass == (unsigned int )((void *)0)) {
	    warn_e((char *)"Unable to find passwd entry for %ld", (*(cmd + 1)));
	    send(fd, (void const   *)(err_invalid_user_str), sizeof(err_invalid_user_str),
		 0);
	    send(fd, (void const   *)"\000\000", sizeof("\000\000"), 0);
	    return;
	  }
	  if (! is_root) {
	    tmp___1 = strcmp((char const   *)pass->pw_name, (char const   *)client->fcl_user);
	    if (tmp___1 != 0) {
	      warn_e((char *)"%s is not allowed to see %s\'s jobs. %ld", client->fcl_user,
		     pass->pw_name);
	      send(fd, (void const   *)(err_others_nallowed_str), sizeof(err_others_nallowed_str),
		   0);
	      send(fd, (void const   *)"\000\000", sizeof("\000\000"), 0);
	      return;
	    }
	  }
	  user = pass->pw_name;
	}
      }
      switch ((int )(*(cmd + 0))) {
      case 101: 
	j = queue_base;
	while ((unsigned int )j != (unsigned int )((void *)0)) { // loop level 1
	  if (all) {
	    print_line(fd, j->j_line, fields, 0, 0, 0);
	    found = 1;
	  } else {
	    tmp___2 = strcmp((char const   *)user, (char const   *)((j->j_line)->cl_file)->cf_user);
	    if (tmp___2 == 0) {
	      print_line(fd, j->j_line, fields, 0, 0, 0);
	      found = 1;
	    }
	  }
	  j = j->j_next;
	}
	break;
      case 104: 
	i = 0;
	while (i < (int )exe_num) {                              // loop level 1
	  if ((unsigned int )(exe_array + i)->e_line == (unsigned int )((void *)0)) {
	    if (is_root) {
	      send_msg_fd(fd, (char *)"job no more in an fcrontab: pid %d", (exe_array +
									     i)->e_job_pid);
	      found = 1;
	    }
	  } else {
	    if (all) {
	      print_line(fd, (exe_array + i)->e_line, fields, (exe_array + i)->e_job_pid,
			 0, 0);
	      found = 1;
	    } else {
	      tmp___3 = strcmp((char const   *)user, 
                               (char const   *)(((exe_array + i)->e_line)->cl_file)->cf_user);
	      if (tmp___3 == 0) {
		print_line(fd, (exe_array + i)->e_line, fields, (exe_array + i)->e_job_pid,
			   0, 0);
		found = 1;
	      }
	    }
	  }
	  i ++;
	}
	break;
      case 102: 
	i = 0;
	while (i < (int )lavg_num) {                              // loop level 1
	  if (all) {
	    print_line(fd, (lavg_array + i)->l_line, fields, 0, 0, (lavg_array + i)->l_until);
	    found = 1;
	  } else {
	    tmp___4 = strcmp((char const   *)user, 
                      (char const   *)(((lavg_array + i)->l_line)->cl_file)->cf_user);
	    if (tmp___4 == 0) {
	      print_line(fd, (lavg_array + i)->l_line, fields, 0, 0, (lavg_array + i)->l_until);
	      found = 1;
	    }
	  }
	  i ++;
	}
	break;
      case 103: 
	i = (int )serial_array_index;
	j___0 = 0;
	while (j___0 < (int )serial_num) {                         // loop level 1
	  if (all) {
	    print_line(fd, (*(serial_array + i)), fields, 0, j___0, 0);
	    found = 1;
	  } else {
	    tmp___5 = strcmp((char const   *)user, (char const   *)(((*(serial_array + i)))->cl_file)->cf_user);
	    if (tmp___5 == 0) {
	      print_line(fd, (*(serial_array + i)), fields, 0, j___0, 0);
	      found = 1;
	    }
	  }
	  i ++;
	  if (i >= (int )serial_array_size) {
	    i -= (int )serial_array_size;
	  }
	  j___0 ++;
	}
	break;
      }
      break;
    }
    if (! found) {
      send(fd, (void const   *)(err_job_nfound_str), sizeof(err_job_nfound_str), 0);
    }
    send(fd, (void const   *)"\000\000", sizeof("\000\000"), 0);
    return;
  }
}

void main() {

	delete_file(0);
 	add_line_to_file(0,0,0,0,0); 
 	read_file(0,0); 
 	synchronize_file(0); 
 	synchronize_dir(0); 
 	cmd_ls(0,0,0,0); 
        _SLICE(found);
}
