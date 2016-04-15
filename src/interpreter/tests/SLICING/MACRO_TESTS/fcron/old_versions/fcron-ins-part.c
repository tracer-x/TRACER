// Checked:
// - No non-linear operations
// - No goto's, continues

// -----------------------------
// GLOBAL VARIABLES
// -----------------------------


struct _IO_marker;
typedef long __off_t;
typedef long long __off64_t;
typedef void _IO_lock_t;
typedef unsigned int size_t;
typedef unsigned long long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned char bitstr_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef int __pid_t;
typedef unsigned int __id_t;
typedef long __time_t;
typedef long __suseconds_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef int __ssize_t;
typedef unsigned int __socklen_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __uid_t uid_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __time_t time_t;

struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
typedef struct timespec timespec;

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
   char _unused2[(int )(15 * sizeof(int ) - 2 * sizeof(void *))] ;
};
typedef struct _IO_FILE FILE;

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
typedef struct stat stat;

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
typedef struct tm tm;

struct env_t {
   char *e_val ;
   struct env_t *e_next ;
};
typedef struct env_t env_t;

struct cf_t {
   struct cf_t *cf_next ;
   struct cl_t *cf_line_base ;
   char *cf_user ;
   struct env_t *cf_env_base ;
   int cf_running ;
   signed char cf_tzdiff ;
};
typedef struct cf_t cf_t;

struct passwd {
   char *pw_name ;
   char *pw_passwd ;
   __uid_t pw_uid ;
   __gid_t pw_gid ;
   char *pw_gecos ;
   char *pw_dir ;
   char *pw_shell ;
};
typedef struct passwd passwd;

struct exe_t {
   struct cl_t *e_line ;
   pid_t e_ctrl_pid ;
   pid_t e_job_pid ;
};


struct cf_t *file_base  ;
char foreground   ;
char debug_opt ;
char *fcronconf ;
char *pidfile ;
char *sendmail ;
char *fifofile ;
char *editor ;
char *shell ;
char *fcronallow ;
char *fcrondeny ;
char *fcrontabs ;

// -----------------------------
// EXTERN/STUB FUNCTIONS
// -----------------------------

extern int get_nb_mdays(int year , int mon );
extern void Debug(char *fmt  , ...);
extern void init_conf(void);
extern void die_e(char *fmt  , ...);
extern void error_e(char *fmt  , ...);
extern int fstat__extinline(int __fd , struct stat *__statbuf );
extern void __error__(void);
extern void warn_e(char *fmt  , ...);
extern char *strdup2(char const   *str );
extern void sig_dfl(void); 
extern int change_user(struct cl_t *cl );
extern FILE *create_mail(struct cl_t *line , char *subject );
extern int add_line_to_file(cl_t *cl , cf_t *cf , uid_t runas , char *runas_str , time_t t_save );
extern int read_strn(int fd , char **str , short size );
extern int read_type(int fd , short *type , short *size );
extern void set_wday(struct tm *date );
extern void xcloselog(void);
extern FILE *get_stdout(void);
extern FILE *get_stderr(void);
extern void explain(char *fmt  , ...);
extern void end_job(cl_t *line , int status , FILE *mailf , short mailpos );
extern void *memcpy(void * __dest , void const   * __src , size_t __n );
extern void bzero(void *__s , size_t __n );
extern void *calloc(size_t __nmemb , size_t __size );
extern void free(void *__ptr );
extern int execl(char const   *__path , char const   *__arg  , ...);
extern int execlp(char const   *__file , char const   *__arg  , ...);


void goto_non_matching(cl_t *line , struct tm *ftime , char option ) 
{ struct tm next_period ;
  int max ;
  int tmp ;
  struct tm ftime_initial ;
  int to_add ;
  int tmp___0 ;
  int to_add___0 ;
  int tmp___1 ;
  short year_limit ;
  char ignore_mins ;
  int tmp___2 ;
  char ignore_hrs ;
  int tmp___3 ;
  char ignore_days ;
  int tmp___4 ;
  char ignore_mons ;
  int tmp___5 ;
  char ignore_dow ;
  int tmp___6 ;
  int tmp___7 ;
  char const   *tmp___8 ;

  {
  if ((int )line->cl_option[2] & 4) {
    {
    tmp = get_nb_mdays(ftime->tm_year, ftime->tm_mon);
    max = tmp;
    }
    if ((int )option == 1) {
      {
      memcpy((void *)((void *)(& ftime_initial)),
             (void const   *)((void const   *)ftime),
             sizeof(ftime_initial));
      }
    }
    if ((int )line->cl_option[2] & 8) {
      if ((int )line->cl_option[1] & 32) {
        return;
      } else {
        if ((int )line->cl_option[1] & 64) {
          if (ftime->tm_min >= 30) {
            {
            ftime->tm_hour = ftime->tm_hour + 1;
            }
          }
          {
          ftime->tm_min = 30;
          }
        } else {
          {
          ftime->tm_min = 0;
          }
          if ((int )line->cl_option[1] & 128) {
            if (ftime->tm_hour >= 12) {
              {
              ftime->tm_mday = ftime->tm_mday + 1;
              }
            }
            {
            ftime->tm_hour = 12;
            }
          } else {
            {
            ftime->tm_hour = 0;
            }
            if ((int )line->cl_option[2] & 2) {
              if (ftime->tm_wday >= 4) {
                {
                tmp___0 = 11 - ftime->tm_wday;
                }
              } else {
                {
                tmp___0 = 4 - ftime->tm_wday;
                }
              }
              {
              to_add = tmp___0;
              }
              if (ftime->tm_mday + to_add > max) {
                {
                ftime->tm_mon = ftime->tm_mon + 1;
                ftime->tm_mday = (ftime->tm_mday + to_add) - max;
                }
              } else {
                {
                ftime->tm_mday = ftime->tm_mday + to_add;
                }
              }
            } else {
              if ((int )line->cl_option[2] & 1) {
                if (ftime->tm_mday >= 15) {
                  {
                  ftime->tm_mon = ftime->tm_mon + 1;
                  }
                }
                {
                ftime->tm_mday = 15;
                }
              }
            }
          }
        }
      }
    } else {
      if ((int )line->cl_option[1] & 32) {
        return;
      } else {
        {
        ftime->tm_min = 0;
        }
        if ((int )line->cl_option[1] & 64) {
          {
          ftime->tm_hour = ftime->tm_hour + 1;
          }
        } else {
          {
          ftime->tm_hour = 0;
          }
          if ((int )line->cl_option[1] & 128) {
            {
            ftime->tm_mday = ftime->tm_mday + 1;
            }
          } else {
            if ((int )line->cl_option[2] & 2) {
              if (ftime->tm_wday == 0) {
                {
                tmp___1 = 1;
                }
              } else {
                {
                tmp___1 = 8 - ftime->tm_wday;
                }
              }
              {
              to_add___0 = tmp___1;
              }
              if (ftime->tm_mday + to_add___0 > max) {
                {
                ftime->tm_mday = (ftime->tm_mday + to_add___0) - max;
                ftime->tm_mon = ftime->tm_mon + 1;
                }
              } else {
                {
                ftime->tm_mday = ftime->tm_mday + to_add___0;
                }
              }
            } else {
              {
              ftime->tm_mday = 1;
              }
              if ((int )line->cl_option[2] & 1) {
                {
                ftime->tm_mon = ftime->tm_mon + 1;
                }
              }
            }
          }
        }
      }
    }
    if (ftime->tm_min >= 60) {
      {
      ftime->tm_min = 0;
      ftime->tm_hour = ftime->tm_hour + 1;
      }
    }
    if (ftime->tm_hour >= 24) {
      {
      ftime->tm_hour = 0;
      ftime->tm_mday = ftime->tm_mday + 1;
      }
    }
    {
    max = get_nb_mdays(ftime->tm_year + 1900, ftime->tm_mon);
    }
    if (ftime->tm_mday > max) {
      {
      ftime->tm_mday = 1;
      ftime->tm_mon = ftime->tm_mon + 1;
      }
    }
    if (ftime->tm_mon >= 12) {
      {
      ftime->tm_mon = 0;
      ftime->tm_year = ftime->tm_year + 1;
      }
    }
    if ((int )option != 1) {
      if (debug_opt) {
        {
        set_wday(ftime);
        }
      }
      if (debug_opt) {
        {
        Debug("   %s beginning of next period %d/%d/%d wday:%d %02d:%02d (tzdiff=%d)",
              line->cl_shell, ftime->tm_mon + 1, ftime->tm_mday,
              ftime->tm_year + 1900, ftime->tm_wday, ftime->tm_hour,
              ftime->tm_min, (line->cl_file)->cf_tzdiff);
        }
      }
      return;
    } else {
      {
      memcpy((void *)((void *)(& next_period)),
             (void const   *)((void const   *)ftime),
             sizeof(next_period));
      memcpy((void *)((void *)ftime),
             (void const   *)((void const   *)(& ftime_initial)),
             sizeof(ftime_initial));
      }
    }
  }
  {
  year_limit = (short )10;
  }
  if ((int )line->cl_option[1] & 32) {
    {
    tmp___2 = 1;
    }
  } else {
    {
    tmp___2 = 0;
    }
  }
  {
  ignore_mins = (char )tmp___2;
  }
  if ((int )line->cl_option[1] & 64) {
    {
    tmp___3 = 1;
    }
  } else {
    {
    tmp___3 = 0;
    }
  }
  {
  ignore_hrs = (char )tmp___3;
  }
  if ((int )line->cl_option[1] & 128) {
    {
    tmp___4 = 1;
    }
  } else {
    {
    tmp___4 = 0;
    }
  }
  {
  ignore_days = (char )tmp___4;
  }
  if ((int )line->cl_option[2] & 1) {
    {
    tmp___5 = 1;
    }
  } else {
    {
    tmp___5 = 0;
    }
  }
  {
  ignore_mons = (char )tmp___5;
  }
  if ((int )line->cl_option[2] & 2) {
    {
    tmp___6 = 1;
    }
  } else {
    {
    tmp___6 = 0;
    }
  }
  {
  ignore_dow = (char )tmp___6;
  }
  if ((int )option == 1) {
    {
    ignore_dow = (char )0;
    ignore_mons = ignore_dow;
    ignore_days = ignore_mons;
    ignore_hrs = ignore_days;
    ignore_mins = ignore_hrs;
    }
  }
  if (debug_opt) {
    {
    Debug("   ignore: %d %d %d %d %d", ignore_mins, ignore_hrs, ignore_days,
          ignore_mons, ignore_dow);
    }
  }
  while (1) {
    if ((int )ignore_mins == 1) {
      //goto _L___5;
    } else {
      if ((int )line->cl_mins[ftime->tm_min >> 3] & (1 << (ftime->tm_min & 7))) {
        _L___5: 
        if ((int )ignore_hrs == 1) {
          //goto _L___4;
        } else {
          if ((int )line->cl_hrs[ftime->tm_hour >> 3] &
              (1 << (ftime->tm_hour & 7))) {
            _L___4: 
            if ((int )line->cl_option[0] & 8) {
              _L___2: 
              if ((int )line->cl_option[0] & 8) {
                if ((int )ignore_days == 1) {
                  //goto _L___0;
                } else {
                  if ((int )line->cl_days[ftime->tm_mday >> 3] &
                      (1 << (ftime->tm_mday & 7))) {
                    //goto _L___0;
                  } else {
                    if ((int )ignore_dow == 1) {
                      //goto _L___0;
                    } else {
                      if ((int )line->cl_dow[ftime->tm_wday >> 3] &
                          (1 << (ftime->tm_wday & 7))) {
                        _L___0: 
                        if (! ((int )ignore_mons == 1)) {
                          if (! ((int )line->cl_mons[ftime->tm_mon >> 3] &
                                 (1 << (ftime->tm_mon & 7)))) {
                            break;
                          }
                        }
                      } else {
                        break;
                      }
                    }
                  }
                }
              } else {
                break;
              }
            } else {
              if ((int )ignore_days == 1) {
                //goto _L___3;
              } else {
                if ((int )line->cl_days[ftime->tm_mday >> 3] &
                    (1 << (ftime->tm_mday & 7))) {
                  _L___3: 
                  if ((int )ignore_dow == 1) {
                    //goto _L___0;
                  } else {
                    if ((int )line->cl_dow[ftime->tm_wday >> 3] &
                        (1 << (ftime->tm_wday & 7))) {
                      //goto _L___0;
                    } else {
                      //goto _L___2;
                    }
                  }
                } else {
                  //goto _L___2;
                }
              }
            }
          } else { break; }
        }
      } else {
        break;
      }
    }
    if (ignore_mins) {
      {
      ftime->tm_min = 60;
      }
    } else {
      while (1) {
        {
        ftime->tm_min = ftime->tm_min + 1;
        }
        if ((int )line->cl_mins[ftime->tm_min >> 3] & (1 << (ftime->tm_min & 7))) {
          if (! (ftime->tm_min < 60)) {
            break;
          }
        } else {
          break;
        }
      }
    }
    if (ftime->tm_min >= 60) {
      {
      ftime->tm_min = 0;
      }
      if (ignore_hrs) {
        if (ignore_mins) {
          {
          ftime->tm_hour = 24;
          }
        } else {
          {
          ftime->tm_hour = ftime->tm_hour + 1;
          }
        }
      } else {
        {
        ftime->tm_hour = ftime->tm_hour + 1;
        }
      }
      if (ftime->tm_hour >= 24) {
        {
        ftime->tm_hour = 0;
        }
        if (ignore_days) {
          if (ignore_hrs) {
            if (ignore_mins) {
              if (ignore_dow) {
                {
                ftime->tm_mday = 32;
                }
              } else {
                {
                ftime->tm_mday = ftime->tm_mday + 1;
                }
              }
            } else {
              {
              ftime->tm_mday = ftime->tm_mday + 1;
              }
            }
          } else {
            {
            ftime->tm_mday = ftime->tm_mday + 1;
            }
          }
        } else {
          {
          ftime->tm_mday = ftime->tm_mday + 1;
          }
        }
        {
        tmp___7 = get_nb_mdays(ftime->tm_year + 1900, ftime->tm_mon);
        }
        if (ftime->tm_mday > tmp___7) {
          {
          ftime->tm_mday = 1;
          }
          if (ignore_mons) {
            if (ignore_days) {
              if (ignore_dow) {
                if (ignore_hrs) {
                  if (ignore_mins) {
                    {
                    ftime->tm_mon = 12;
                    }
                  } else {
                    {
                    ftime->tm_mon = ftime->tm_mon + 1;
                    }
                  }
                } else {
                  {
                  ftime->tm_mon = ftime->tm_mon + 1;
                  }
                }
              } else {
                {
                ftime->tm_mon = ftime->tm_mon + 1;
                }
              }
            } else {
              {
              ftime->tm_mon = ftime->tm_mon + 1;
              }
            }
          } else {
            {
            ftime->tm_mon = ftime->tm_mon + 1;
            }
          }
          if (ftime->tm_mon >= 12) {
            {
            ftime->tm_mon = 0;
            ftime->tm_year = ftime->tm_year + 1;
            year_limit = (short )((int )year_limit - 1);
            }
            if ((int )year_limit <= 0) {
              {
              error("Can\'t found a non matching date for %s in the next %d years. Maybe this line is corrupted : consider reinstalling the fcrontab",
                    line->cl_shell, 10);
              }
              return;
            }
          }
        }
        {
        set_wday(ftime);
        }
      }
    }
    if ((int )option == 1) {
      if ((int )line->cl_option[2] & 4) {
        if (ftime->tm_year <= next_period.tm_year) {
          if (ftime->tm_mon <= next_period.tm_mon) {
            if (ftime->tm_mday <= next_period.tm_mday) {
              if (ftime->tm_hour <= next_period.tm_hour) {
                if (ftime->tm_min <= next_period.tm_min) {
                  {
                  memcpy((void *)((void *)ftime),
                         (void const   *)((void const   *)(& next_period)),
                         sizeof(next_period));
                  }
                  break;
                }
              }
            }
          }
        }
      }
    }
  }
  if ((int )option == 1) {
    {
    ftime->tm_min = ftime->tm_min - 1;
    }
    if (ftime->tm_min < 0) {
      {
      ftime->tm_min = 59;
      ftime->tm_hour = ftime->tm_hour - 1;
      }
      if (ftime->tm_hour < 0) {
        {
        ftime->tm_hour = 23;
        ftime->tm_mday = ftime->tm_mday - 1;
        }
        if (ftime->tm_mday < 1) {
          {
          ftime->tm_mon = ftime->tm_mon - 1;
          }
          if (ftime->tm_mon < 0) {
            {
            ftime->tm_mon = 11;
            ftime->tm_year = ftime->tm_year - 1;
            }
          }
          {
          ftime->tm_mday = get_nb_mdays(ftime->tm_year + 1900, ftime->tm_mon);
          }
        }
      }
    }
  }
  if (debug_opt) {
    if ((int )option == 0) {
      {
      tmp___8 = (char const   *)"first non matching";
      }
    } else {
      {
      tmp___8 = (char const   *)"end of interval";
      }
    }
    {
    Debug("   %s %s %d/%d/%d wday:%d %02d:%02d (tzdiff=%d)", line->cl_shell,
          tmp___8, ftime->tm_mon + 1, ftime->tm_mday, ftime->tm_year + 1900,
          ftime->tm_wday, ftime->tm_hour, ftime->tm_min,
          (line->cl_file)->cf_tzdiff);
    }
  }
  return;
}
}

////////////////////////////////////////////////////////////////
FILE *f ;                             // Global variable for now
////////////////////////////////////////////////////////////////
void read_conf(void) 
{ 
  // FILE *f ; 
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
  f = (FILE *)((void *)0);
  ptr1 = (char *)((void *)0);
  ptr2 = (char *)((void *)0);
  namesize = (short )0;
  err_on_enoent = (char )0;
  }
  if ((unsigned int )fcronconf != (unsigned int )((void *)0)) {
    {
    err_on_enoent = (char )1;
    }
  }
  {
  init_conf();
  f = fopen((char const   *)((char const   *)fcronconf),
            (char const   *)((char const   *)"r"));
  {
  if (f != (FILE *)0) {
    f->__BLAST_FLAG = 1;
  }
  {

  }
  }

  }
  if ((unsigned int )f == (unsigned int )((void *)0)) {
    {
    tmp = __errno_location();
    }
    if ((*tmp) == 2) {
      if (err_on_enoent) {
        {
        die_e("Could not read %s", fcronconf);
        }
      } else {
        return;
      }
    } else {
      {
      error_e("Could not read %s : config file ignored", fcronconf);
      }
      return;
    }
  }
  {
  tmp___0 = fileno(f);
  tmp___1 = fstat__extinline(tmp___0, & st);
  }
  if (tmp___1 != 0) {
    {
    error("Conf file (%s) must be owned by root and (no more than) 644 : ignored",
          fcronconf);
    {
    if (f->__BLAST_FLAG == 1) {
      f->__BLAST_FLAG = 0;
    } else {
      __error__();
    }
    {

    }
    }
    fclose(f);
    }
    return;
  } else {
    if (st.st_uid != 0) {
      {
      error("Conf file (%s) must be owned by root and (no more than) 644 : ignored",
            fcronconf);
      {
      if (f->__BLAST_FLAG == 1) {
        f->__BLAST_FLAG = 0;
      } else {
        __error__();
      }
      {

      }
      }
      fclose(f);
      }
      return;
    } else {
      if (st.st_mode & 16) {
        {
        error("Conf file (%s) must be owned by root and (no more than) 644 : ignored",
              fcronconf);
        {
        if (f->__BLAST_FLAG == 1) {
          f->__BLAST_FLAG = 0;
        } else {
          __error__();
        }
        {

        }
        }
        fclose(f);
        }
        return;
      } else {
        if (st.st_mode & 2) {
          {
          error("Conf file (%s) must be owned by root and (no more than) 644 : ignored",
                fcronconf);
          {
          if (f->__BLAST_FLAG == 1) {
            f->__BLAST_FLAG = 0;
          } else {
            __error__();
          }
          {

          }
          }
          fclose(f);
          }
          return;
        }
      }
    }
  }
  while (1) {
    {

    {
    if (! (f->__BLAST_FLAG == 1)) {
      __error__();
    }
    {

    }
    }
    ptr1 = fgets((char *)(buf), (int )sizeof(buf),
                 (FILE *)f);
    }
    if (! ((unsigned int )ptr1 != (unsigned int )((void *)0))) {
      break;
    }
    while (1) {
      if (! ((int )(*ptr1) == 32)) {
        if (! ((int )(*ptr1) == 9)) {
          break;
        }
      }
      {
      ptr1 ++;
      }
    }
    if ((int )(*ptr1) == 35) {
      //continue;
    } else {
      if ((int )(*ptr1) == 10) {
        //continue;
      } else {
        if ((int )(*ptr1) == 0) {
          //continue;
        }
      }
    }
    {
    remove_blanks(ptr1);
    namesize = (short )get_word(& ptr1);
    }
    if ((int )namesize == 0) {
      {
      error("Zero-length var name at line %s : line ignored", buf);
      }
    }
    {
    ptr2 = ptr1 + (int )namesize;
    }
    while (1) {
      {
      tmp___2 = _get__ctype_b((int )(*ptr2));
      }
      if (! (tmp___2 & 8192)) {
        break;
      }
      {
      ptr2 ++;
      }
    }
    if ((int )(*ptr2) == 61) {
      {
      ptr2 ++;
      }
    }
    while (1) {
      {
      tmp___3 = _get__ctype_b((int )(*ptr2));
      }
      if (! (tmp___3 & 8192)) {
        break;
      }
      {
      ptr2 ++;
      }
    }
    {
    tmp___11 = strncmp((char const   *)ptr1, (char const   *)"fcrontabs",
                       (unsigned int )namesize);
    }
    if (tmp___11 == 0) {
      {
      fcrontabs = strdup2((char const   *)ptr2);
      }
    } else {
      {
      tmp___10 = strncmp((char const   *)ptr1, (char const   *)"pidfile",
                         (unsigned int )namesize);
      }
      if (tmp___10 == 0) {
        {
        pidfile = strdup2((char const   *)ptr2);
        }
      } else {
        {
        tmp___9 = strncmp((char const   *)ptr1, (char const   *)"fifofile",
                          (unsigned int )namesize);
        }
        if (tmp___9 == 0) {
          {
          fifofile = strdup2((char const   *)ptr2);
          }
        } else {
          {
          tmp___8 = strncmp((char const   *)ptr1, (char const   *)"fcronallow",
                            (unsigned int )namesize);
          }
          if (tmp___8 == 0) {
            {
            fcronallow = strdup2((char const   *)ptr2);
            }
          } else {
            {
            tmp___7 = strncmp((char const   *)ptr1, (char const   *)"fcrondeny",
                              (unsigned int )namesize);
            }
            if (tmp___7 == 0) {
              {
              fcrondeny = strdup2((char const   *)ptr2);
              }
            } else {
              {
              tmp___6 = strncmp((char const   *)ptr1, (char const   *)"shell",
                                (unsigned int )namesize);
              }
              if (tmp___6 == 0) {
                {
                shell = strdup2((char const   *)ptr2);
                }
              } else {
                {
                tmp___5 = strncmp((char const   *)ptr1,
                                  (char const   *)"sendmail",
                                  (unsigned int )namesize);
                }
                if (tmp___5 == 0) {
                  {
                  sendmail = strdup2((char const   *)ptr2);
                  }
                } else {
                  {
                  tmp___4 = strncmp((char const   *)ptr1,
                                    (char const   *)"editor",
                                    (unsigned int )namesize);
                  }
                  if (tmp___4 == 0) {
                    {
                    editor = strdup2((char const   *)ptr2);
                    }
                  } else {
                    {
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
  if (debug_opt) {
    if (debug_opt) {
      {
      Debug("  fcronconf=%s", fcronconf);
      }
    }
  }
  {

  {
  if (f->__BLAST_FLAG == 1) {
    f->__BLAST_FLAG = 0;
  } else {
    __error__();
  }
  {

  }
  }
  fclose(f);
  }
  return;
}
}

////////////////////////////////////////////////////////////////
FILE *ff ;                            // Global variable for now
////////////////////////////////////////////////////////////////
int read_file(char const   *file_name , cf_t *cf ) 
{ // FILE *ff ;
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
  ff = (FILE *)((void *)0);
  cl = (cl_t *)((void *)0);
  env = (env_t *)((void *)0);
  bufi = 0;
  t_save = (long )0;
  runas = (unsigned int )0;
  runas_str = (char *)((void *)0);
  pass = (struct passwd *)((void *)0);
  type = (short )0;
  size = (short )0;
  ff = fopen((char const   *)file_name,
             (char const   *)((char const   *)"r"));
  {
  if (ff != (FILE *)0) {
    ff->__BLAST_FLAG = 1;
  }
  {

  }
  }

  }
  if ((unsigned int )ff == (unsigned int )((void *)0)) {
    {
    warn_e("Could not read %s (may have just been removed)", file_name);
    }
    //goto err;
  }
  {
  tmp = fileno(ff);
  rc = fstat__extinline(tmp, & file_stat);
  }
  if (rc != 0) {
    {
    error_e("Could not stat %s", file_name);
    }
    //goto err;
  }
  {
  tmp___0 = strncmp(file_name, (char const   *)"new.", 4);
  }
  if (tmp___0 == 0) {
    if (file_stat.st_uid == 0) {
      {
      runas = 0;
      }
    } else {
      {
      runas = file_stat.st_uid;
      pass = getpwuid(file_stat.st_uid);
      }
      if ((unsigned int )pass == (unsigned int )((void *)0)) {
        {
        error_e("Could not getpwuid(%d)", file_stat.st_uid);
        }
        //goto err;
      }
      {
      runas_str = strdup2((char const   *)pass->pw_name);
      }
    }
    {
    cf->cf_user = strdup2(file_name + 4);
    }
  } else {
    if (! cf->cf_user) {
      {
      cf->cf_user = strdup2(file_name);
      }
    }
    if (file_stat.st_uid == 0) {
      {
      runas = 0;
      }
    } else {
      {
      error("Non-new file %s owned by someone else than root", file_name);
      }
      //goto err;
    }
  }
  if (debug_opt) {
    {
    Debug("User %s Entry", file_name);
    }
  }
  {
  bzero((void *)(buf), sizeof(buf));
  tmp___1 = fileno(ff);
  tmp___2 = read_type(tmp___1, & type, & size);
  }
  if (tmp___2 != 0) {
    {
    error("File %s is not valid: ignored.", file_name);
    error("This file may have been generated by an old version of fcron.");
    error("In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
    }
    //goto err;
  } else {
    if ((int )type != 1) {
      {
      error("File %s is not valid: ignored.", file_name);
      error("This file may have been generated by an old version of fcron.");
      error("In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
      }
      //goto err;
    } else {
      {
      tmp___3 = fileno(ff);
      tmp___4 = read(tmp___3, (void *)(& bufi), (unsigned int )size);
      }
      if (tmp___4 < (int )size) {
        {
        error("File %s is not valid: ignored.", file_name);
        error("This file may have been generated by an old version of fcron.");
        error("In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
        }
        //goto err;
      } else {
        if (bufi != 100) {
          {
          error("File %s is not valid: ignored.", file_name);
          error("This file may have been generated by an old version of fcron.");
          error("In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
          }
          //goto err;
        }
      }
    }
  }
  {
  tmp___5 = fileno(ff);
  tmp___6 = read_type(tmp___5, & type, & size);
  }
  if (tmp___6 != 0) {
    {
    error("Invalid binary fcrontab (no USER field)");
    }
    //goto err;
  } else {
    if ((int )type != 2) {
      {
      error("Invalid binary fcrontab (no USER field)");
      }
      //goto err;
    }
  }
  {
  free((void *)cf->cf_user);
  tmp___7 = fileno(ff);
  tmp___8 = read_strn(tmp___7, & cf->cf_user, size);
  }
  if (tmp___8 != 0) {
    {
    error("Cannot read user\'s name : file ignored");
    }
    //goto err;
  }
  if (runas != 0) {
    {
    free((void *)cf->cf_user);
    cf->cf_user = runas_str;
    }
  }
  {
  tmp___9 = fileno(ff);
  tmp___10 = read_type(tmp___9, & type, & size);
  }
  if (tmp___10 != 0) {
    {
    error("could not get time and date of saving");
    }
    //goto err;
  } else {
    if ((int )type != 3) {
      {
      error("could not get time and date of saving");
      }
      //goto err;
    } else {
      {
      tmp___11 = fileno(ff);
      tmp___12 = read(tmp___11, (void *)(& t_save), (unsigned int )size);
      }
      if (tmp___12 < (int )size) {
        {
        error("could not get time and date of saving");
        }
        //goto err;
      }
    }
  }
  {
  cl = (cl_t *)calloc(1, sizeof(cl_t ));
  }
  if ((unsigned int )cl == (unsigned int )((void *)0)) {
    {
    die_e("Could not calloc.");
    }
  }
  while (1) {
    {
    tmp___55 = fileno(ff);
    tmp___56 = read_type(tmp___55, & type, & size);
    }
    if (! (tmp___56 == 0)) {
      break;
    }
    switch ((int )type) {
    case 1000: 
    {
    env = (env_t *)calloc(1, sizeof(env_t ));
    }
    if ((unsigned int )env == (unsigned int )((void *)0)) {
      {
      die_e("Could not calloc.");
      }
    }
    {
    tmp___13 = fileno(ff);
    tmp___14 = read_strn(tmp___13, & env->e_val, size);
    }
    if (tmp___14 != 0) {
      {
      error_e("Error while reading env var");
      }
      //goto err;
    }
    if (debug_opt) {
      {
      Debug("  Env: \"%s\"", env->e_val);
      }
    }
    {
    env->e_next = cf->cf_env_base;
    cf->cf_env_base = env;
    }
    break;
    case 4: 
    {
    tmp___15 = fileno(ff);
    tmp___16 = read(tmp___15, (void *)(& bufi), (unsigned int )size);
    }
    if (tmp___16 < (int )size) {
      {
      error_e("Error while reading tzdiff field");
      }
      //goto err;
    }
    {
    cf->cf_tzdiff = (signed char )bufi;
    }
    break;
    case 2001: 
    {
    tmp___17 = fileno(ff);
    tmp___18 = read_strn(tmp___17, & cl->cl_shell, size);
    }
    if (tmp___18 != 0) {
      {
      error_e("Error while reading shell field");
      }
      //goto err;
    }
    break;
    case 2006: 
    {
    tmp___19 = fileno(ff);
    tmp___20 = read_strn(tmp___19, & cl->cl_runas, size);
    }
    if (tmp___20 != 0) {
      {
      error_e("Error while reading runas field");
      }
      //goto err;
    }
    break;
    case 2007: 
    {
    tmp___21 = fileno(ff);
    tmp___22 = read_strn(tmp___21, & cl->cl_mailto, size);
    }
    if (tmp___22 != 0) {
      {
      error_e("Error while reading mailto field");
      }
      //goto err;
    }
    break;
    case 2008: 
    {
    tmp___23 = fileno(ff);
    tmp___24 = read(tmp___23, (void *)(& bufi), (unsigned int )size);
    }
    if (tmp___24 < (int )size) {
      {
      error_e("Error while reading nextexe field");
      }
      //goto err;
    }
    {
    cl->cl_nextexe = bufi;
    }
    break;
    case 2018: 
    {
    tmp___25 = fileno(ff);
    tmp___26 = read(tmp___25, (void *)(& bufi), (unsigned int )size);
    }
    if (tmp___26 < (int )size) {
      {
      error_e("Error while reading first field");
      }
      //goto err;
    }
    {
    cl->cl_first = bufi;
    }
    break;
    case 2017: 
    {

    }
    if ((int )size < 4) {

    }
    {
    tmp___27 = fileno(ff);
    tmp___28 = read(tmp___27, (void *)(& cl->cl_option), (unsigned int )size);
    }
    if (tmp___28 < (int )size) {
      {
      error_e("Error while reading option field");
      }
      //goto err;
    }
    break;
    case 2002: 
    {
    tmp___29 = fileno(ff);
    tmp___30 = read(tmp___29, (void *)(& cl->cl_numexe), (unsigned int )size);
    }
    if (tmp___30 < (int )size) {
      {
      error_e("Error while reading numexe field");
      }
      //goto err;
    }
    break;
    case 2003: 
    {
    tmp___31 = fileno(ff);
    tmp___32 = read(tmp___31, (void *)(& cl->cl_lavg), (unsigned int )size);
    }
    if (tmp___32 < (int )size) {
      {
      error_e("Error while reading lavg field");
      }
      //goto err;
    }
    break;
    case 2004: 
    {
    tmp___33 = fileno(ff);
    tmp___34 = read(tmp___33, (void *)(& bufi), (unsigned int )size);
    }
    if (tmp___34 < (int )size) {
      {
      error_e("Error while reading until field");
      }
      //goto err;
    }
    {
    cl->cl_until = bufi;
    }
    break;
    case 2005: 
    {
    tmp___35 = fileno(ff);
    tmp___36 = read(tmp___35, (void *)(& cl->cl_nice), (unsigned int )size);
    }
    if (tmp___36 < (int )size) {
      {
      error_e("Error while reading nice field");
      }
      //goto err;
    }
    break;
    case 2011: 
    {
    tmp___37 = fileno(ff);
    tmp___38 = read(tmp___37, (void *)(& bufi), (unsigned int )size);
    }
    if (tmp___38 < (int )size) {
      {
      error_e("Error while reading runfreq field");
      }
      //goto err;
    }
    {
    cl->cl_runfreq = (unsigned short )bufi;
    }
    break;
    case 2009: 
    {
    tmp___39 = fileno(ff);
    tmp___40 = read(tmp___39, (void *)(& bufi), (unsigned int )size);
    }
    if (tmp___40 < (int )size) {
      {
      error_e("Error while reading remain field");
      }
      //goto err;
    }
    {
    cl->cl_remain = (unsigned short )bufi;
    }
    break;
    case 2010: 
    {
    tmp___41 = fileno(ff);
    tmp___42 = read(tmp___41, (void *)(& bufi), (unsigned int )size);
    }
    if (tmp___42 < (int )size) {
      {
      error_e("Error while reading timefreq field");
      }
      //goto err;
    }
    {
    cl->cl_timefreq = bufi;
    }
    break;
    case 2012: 
    {
    tmp___43 = fileno(ff);
    tmp___44 = read(tmp___43, (void *)(& cl->cl_mins), (unsigned int )size);
    }
    if (tmp___44 < (int )size) {
      {
      error_e("Error while reading mins field");
      }
      //goto err;
    }
    break;
    case 2013: 
    {
    tmp___45 = fileno(ff);
    tmp___46 = read(tmp___45, (void *)(& cl->cl_hrs), (unsigned int )size);
    }
    if (tmp___46 < (int )size) {
      {
      error_e("Error while reading hrs field");
      }
      //goto err;
    }
    break;
    case 2014: 
    {
    tmp___47 = fileno(ff);
    tmp___48 = read(tmp___47, (void *)(& cl->cl_days), (unsigned int )size);
    }
    if (tmp___48 < (int )size) {
      {
      error_e("Error while reading days field");
      }
      //goto err;
    }
    break;
    case 2015: 
    {
    tmp___49 = fileno(ff);
    tmp___50 = read(tmp___49, (void *)(& cl->cl_mons), (unsigned int )size);
    }
    if (tmp___50 < (int )size) {
      {
      error_e("Error while reading mons field");
      }
      //goto err;
    }
    break;
    case 2016: 
    {
    tmp___51 = fileno(ff);
    tmp___52 = read(tmp___51, (void *)(& cl->cl_dow), (unsigned int )size);
    }
    if (tmp___52 < (int )size) {
      {
      error_e("Error while reading dow field");
      }
      //goto err;
    }
    break;
    case 2000: 
    {
    tmp___53 = add_line_to_file(cl, cf, runas, runas_str, t_save);
    }
    if (tmp___53 == 0) {
      {
      cl = (cl_t *)calloc(1, sizeof(cl_t ));
      }
      if ((unsigned int )cl == (unsigned int )((void *)0)) {
        {
        die_e("Could not calloc.");
        }
      }
    }
    break;
    default: 
    {
    error("Error while loading %s : unknown field type %d (ignored)", file_name,
          type);
    i = 0;
    }
    while (i < (int )size) {
      {
      tmp___54 = _IO_getc(ff);
      }
      if (tmp___54 == -1) {
        //goto err;
      }
      {
      i ++;
      }
    }
    }
  }
  {
  free((void *)cl);
  tmp___57 = ferror(ff);
  }
  if (tmp___57 != 0) {
    {
    error("file %s is truncated : you should reinstall it with fcrontab",
          file_name);
    }
  }
  {

  {
  if (ff->__BLAST_FLAG == 1) {
    ff->__BLAST_FLAG = 0;
  } else {
    __error__();
  }
  {

  }
  }
  fclose(ff);
  }
  return (0);
  err: 
  if ((unsigned int )ff != (unsigned int )((void *)0)) {
    {

    {
    if (ff->__BLAST_FLAG == 1) {
      ff->__BLAST_FLAG = 0;
    } else {
      __error__();
    }
    {

    }
    }
    fclose(ff);
    }
  }
  if ((unsigned int )cl != (unsigned int )((void *)0)) {
    if ((unsigned int )cl->cl_next == (unsigned int )((void *)0)) {
      if (cl->cl_shell) {
        {
        free((void *)cl->cl_shell);
        }
      }
      if (cl->cl_runas) {
        {
        free((void *)cl->cl_runas);
        }
      }
      if (cl->cl_mailto) {
        {
        free((void *)cl->cl_mailto);
        }
      }
      {
      free((void *)cl);
      }
    }
  }
  if ((unsigned int )cl != (unsigned int )((void *)0)) {
    {
    cf->cf_next = file_base;
    file_base = cf;
    delete_file((char const   *)cf->cf_user);
    }
  } else {
    if ((unsigned int )cf->cf_user != (unsigned int )((void *)0)) {
      {
      free((void *)cf->cf_user);
      }
    }
  }
  return (-1);
}
}
////////////////////////////////////////////////////////////////
FILE *mailf ;                         // Global variable for now
////////////////////////////////////////////////////////////////
void run_job(struct exe_t *exeent ) 
{ pid_t pid ;
  cl_t *line ;
  int pipe_pid_fd[2] ;
  int i ;
  int j ;
  int tmp ;
  char *curshell ;
  char *home ;
  env_t *env ;
  // FILE *mailf ;
  int status ;
  int to_stdout ;
  int tmp___0 ;
  int pipe_fd[2] ;
  short mailpos ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  FILE *tmp___8 ;
  FILE *tmp___9 ;
  FILE * tmp___10 ;
  FILE * tmp___11 ;
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

  {
  {
  line = exeent->e_line;
  i = 0;
  tmp = pipe(pipe_pid_fd);
  }
  if (tmp != 0) {
    {
    error_e("pipe(pipe_pid_fd) : setting job_pid to -1");
    exeent->e_job_pid = -1;
    }
  }
  {
  pid = fork();
  }
  switch (pid) {
  case 1234: 
  {
  error_e("Fork error : could not exec \"%s\"", line->cl_shell);
  }
  break;
  case 0: 
  {
  mailf = (FILE *)((void *)0);
  status = 0;
  }
  if (foreground) {
    if ((int )line->cl_option[3] & 2) {
      {
      tmp___0 = 1;
      }
    } else {
      {
      tmp___0 = 0;
      }
    }
  } else {
    {
    tmp___0 = 0;
    }
  }
  {
  to_stdout = tmp___0;
  mailpos = (short )0;
  }
  if (debug_opt) {
    if ((int )line->cl_option[3] & 2) {
      {
      tmp___1 = (char const   *)"stdout";
      }
    } else {
      {
      tmp___1 = (char const   *)"normal";
      }
    }
    if (foreground) {
      {
      tmp___2 = (char const   *)"running in foreground";
      }
    } else {
      {
      tmp___2 = (char const   *)"running in background";
      }
    }
    if (to_stdout) {
      {
      tmp___3 = (char const   *)"stdout";
      }
    } else {
      {
      tmp___3 = (char const   *)"file";
      }
    }
    {
    Debug("sent output to %s, %s, %s\n", tmp___3, tmp___2, tmp___1);
    }
  }
  if (! to_stdout) {
    if (! ((int )line->cl_option[0] & 128)) {
      {
      mailf = create_mail(line, (char *)((void *)0));
      mailpos = (short )ftell(mailf);
      tmp___4 = pipe(pipe_fd);
      }
      if (tmp___4 != 0) {
        {
        die_e("could not pipe()");
        }
      }
    }
  }
  {
  tmp___5 = change_user(line);
  }
  if (tmp___5 < 0) {
    return;
  }
  {
  sig_dfl();
  pid = fork();
  }
  switch (pid) {
  case 1234: 
  {
  error_e("Fork error : could not exec \"%s\"", line->cl_shell);
  }
  break;
  case 0: 
  {

  }
  if (! to_stdout) {
    if ((int )line->cl_option[0] & 128) {
      if (foreground) {
        {
        tmp___10 = (FILE *)get_stdout();
        {
        tmp___10->__BLAST_FLAG = 1;
        {

        }
        }
        freopen((char const   *)((char const   *)"/dev/null"),
                (char const   *)((char const   *)"w"), tmp___10);
        tmp___11 = (FILE *)get_stderr();
        {
        tmp___11->__BLAST_FLAG = 1;
        {

        }
        }
        freopen((char const   *)((char const   *)"/dev/null"),
                (char const   *)((char const   *)"w"), tmp___11);
        }
      }
    } else {
      {
      tmp___6 = dup2(pipe_fd[1], 1);
      }
      if (tmp___6 != 1) {
        {
        die_e("dup2() error");
        }
      } else {
        {
        tmp___7 = dup2(1, 2);
        }
        if (tmp___7 != 2) {
          {
          die_e("dup2() error");
          }
        }
      }
      {
      close(pipe_fd[0]);
      close(pipe_fd[1]);
      tmp___8 = get_stdout();
      {
      tmp___8->__BLAST_FLAG = 1;
      {

      }
      }
      setlinebuf(tmp___8);
      tmp___9 = get_stderr();
      {
      tmp___9->__BLAST_FLAG = 1;
      {

      }
      }
      setlinebuf(tmp___9);
      }
    }
  }
  {
  foreground = (char )1;
  }
  if ((int )line->cl_nice != 0) {
    {
    tmp___12 = __errno_location();
    (*tmp___12) = 0;
    tmp___13 = nice((int )line->cl_nice);
    }
    if (tmp___13 == -1) {
      {
      tmp___14 = __errno_location();
      }
      if ((*tmp___14) != 0) {
        {
        error_e("could not set nice value");
        }
      }
    }
  }
  {
  xcloselog();
  env = (line->cl_file)->cf_env_base;
  }
  while (env) {
    {
    tmp___15 = putenv(env->e_val);
    }
    if (tmp___15 != 0) {
      {
      error("could not putenv()");
      }
    }
    {
    env = env->e_next;
    }
  }
  {
  home = getenv((char const   *)"HOME");
  }
  if ((unsigned int )home != (unsigned int )((void *)0)) {
    {
    tmp___17 = chdir((char const   *)home);
    }
    if (tmp___17 != 0) {
      {
      error_e("Could not chdir to HOME dir \"%s\"", home);
      tmp___16 = chdir((char const   *)"/");
      }
      if (tmp___16 < 0) {
        {
        die_e("Could not chdir to HOME dir /");
        }
      }
    }
  }
  {
  curshell = getenv((char const   *)"SHELL");
  }
  if ((unsigned int )curshell == (unsigned int )((void *)0)) {
    {
    curshell = shell;
    }
  } else {
    {
    tmp___19 = access((char const   *)curshell, 1);
    }
    if (tmp___19 != 0) {
      {
      tmp___18 = __errno_location();
      }
      if ((*tmp___18) == 2) {
        {
        error("shell \"%s\" : no file or directory. SHELL set to %s", curshell,
              shell);
        }
      } else {
        {
        error_e("shell \"%s\" not valid : SHELL set to %s", curshell, shell);
        }
      }
      {
      curshell = shell;
      }
    }
  }
  {
  execl((char const   *)curshell, (char const   *)curshell, "-c",
        line->cl_shell, (void *)0);
  error_e("Can\'t find \"%s\". Trying a execlp(\"sh\",...)", curshell);
  execlp((char const   *)"sh", (char const   *)"sh", "-c", line->cl_shell,
         (void *)0);
  die_e("execl() \"%s -c %s\" error", curshell, line->cl_shell);
  }
  default: 
  {
  close(pipe_fd[1]);
  close(pipe_pid_fd[0]);
  tmp___20 = write(pipe_pid_fd[1], (void const   *)(& pid), sizeof(pid));
  }
  if (tmp___20 < 0) {
    {
    error_e("could not write child pid to pipe_pid_fd[1]");
    }
  }
  {
  close(pipe_pid_fd[1]);
  }
  if (! ((int )line->cl_option[2] & 64)) {
    {
    explain("Job %s started for user %s (pid %d)", line->cl_shell,
            (line->cl_file)->cf_user, pid);
    }
  }
  if (! to_stdout) {
    if (! ((int )line->cl_option[0] & 128)) {
      {
      tmp___21 = fdopen(pipe_fd[0], (char const   *)"r");
      {
      tmp___21->__BLAST_FLAG = 1;
      {

      }
      }
      pipef = tmp___21;
      }
      if ((unsigned int )pipef == (unsigned int )((void *)0)) {
        {
        die_e("Could not fdopen() pipe_fd[0]");
        }
      }
      {
      mailbuf[sizeof(mailbuf) - 1] = '\0';
      }
      while (1) {
        {

        {
        if (! (pipef->__BLAST_FLAG == 1)) {
          __error__();
        }
        {

        }
        }
        tmp___23 = fgets((char *)(mailbuf),
                         (int )sizeof(mailbuf), (FILE *)pipef);
        }
        if (! ((unsigned int )tmp___23 != (unsigned int )((void *)0))) {
          break;
        }
        {
        tmp___22 = fputs((char const   *)((char const   *)(mailbuf)),
                         (FILE *)mailf);
        }
        if (tmp___22 < 0) {
          {
          warn("fputs() failed to write to mail file for job %s (pid %d)",
               line->cl_shell, pid);
          }
        }
      }
      {

      {
      if (pipef->__BLAST_FLAG == 1) {
        pipef->__BLAST_FLAG = 0;
      } else {
        __error__();
      }
      {

      }
      }
      fclose(pipef);
      }
    }
  }
  while (1) {
    {
    pid = wait3((union wait *)(& status), 0, (struct rusage *)((void *)0));
    }
    if (! (pid > 0)) {
      break;
    }
    {
    end_job(line, status, mailf, mailpos);
    }
  }
  }
  default: 
  {
  close(pipe_pid_fd[1]);
  exeent->e_ctrl_pid = pid;
  (line->cl_file)->cf_running = (line->cl_file)->cf_running + 1;
  }
  while ((unsigned int )i < sizeof(pid_t )) {
    {
    j = read(pipe_pid_fd[0], (void *)((char *)(& exeent->e_job_pid) + i),
             sizeof(pid_t ));
    }
    if (j <= 0) {
      {
      tmp___24 = __errno_location();
      }
      if ((*tmp___24) != 4) {
        {
        error_e("Could not read job pid : setting it to -1");
        exeent->e_job_pid = -1;
        }
        break;
      }
    }
    {
    i += j;
    }
  }
  {
  close(pipe_pid_fd[0]);
  }
  }
  return;
}
}

void main() {
	goto_non_matching(0,0,0);
	read_conf(); 
	read_file(0,0);
	run_job(0);
	_SLICE(f,mailf,ff);
}

//////////////////////////////////////////////////////////////////////////////
// Pointer analysis ... 
// Switches on: [one-level-flow, field-insensitive]
//////////////////////////////////////////////////////////////////////////////

/*  points-to-set([&(&(line->cl_hrs)[(ftime->tm_hour >> 3)]), &(line->cl_option), &(&(line->cl_option)[1]), &(&(line->cl_option)[2]), &(line->cl_dow), &(&(line->cl_dow)[(ftime->tm_wday >> 3)]), &(line->cl_mins), &(line->cl_file), &(line->cl_mons), &(&(line->cl_mins)[(ftime->tm_min >> 3)]), &(&(line->cl_days)[(ftime->tm_mday >> 3)]), line, &(line->cl_hrs), &(&(line->cl_mons)[(ftime->tm_mon >> 3)]), &(line->cl_days), &(line->cl_shell)]) */
/*  points-to-set([next_period.tm_hour, next_period.tm_year, next_period.tm_min, next_period.tm_mday, next_period.tm_mon]) */
/*  points-to-set([&(line->cl_mins)[(ftime->tm_min >> 3)], ((int)&(line->cl_mins)[(ftime->tm_min >> 3)]), &(line->cl_file->cf_tzdiff), &(line->cl_option)[2], ((int)&(line->cl_option)[2]), &(line->cl_option)[1], ((int)&(line->cl_option)[1]), line->cl_option, ((int)line->cl_option), &(line->cl_days)[(ftime->tm_mday >> 3)], ((int)&(line->cl_days)[(ftime->tm_mday >> 3)]), &(line->cl_hrs)[(ftime->tm_hour >> 3)], ((int)&(line->cl_hrs)[(ftime->tm_hour >> 3)]), &(line->cl_mons)[(ftime->tm_mon >> 3)], ((int)&(line->cl_mons)[(ftime->tm_mon >> 3)]), line->cl_file, line->cl_shell, &(line->cl_dow)[(ftime->tm_wday >> 3)], ((int)&(line->cl_dow)[(ftime->tm_wday >> 3)])]) */
/*  points-to-set([&(&(line->cl_option)[2]), &(&(line->cl_option)[3]), &(line->cl_option), &(line->cl_file), &(line->cl_nice), &(line->cl_shell), line]) */
/*  points-to-set([&(st.st_mode), &(st.st_uid), &(st)]) */
/*  points-to-set([pipe_pid_fd, &(pipe_pid_fd)[1]]) */
/*  points-to-set([&(cl->cl_mailto), &(cl->cl_mins), &(cl->cl_runfreq), &(cl->cl_until), &(cl->cl_days), &(cl->cl_option), &(cl->cl_mons), &(cl->cl_lavg), &(cl->cl_dow), ((unsigned int)cl), cl, &(cl->cl_timefreq), &(cl->cl_nextexe), &(cl->cl_first), &(cl->cl_shell), &(cl->cl_remain), &(cl->cl_runas), &(cl->cl_nice), &(cl->cl_hrs), &(cl->cl_numexe)]) */
/*  points-to-set([cl->cl_until, cl->cl_first, cl->cl_nextexe, cl->cl_remain, cl->cl_timefreq, cl->cl_runfreq]) */
/*  points-to-set([&(next_period.tm_hour), &(next_period.tm_mon), &(next_period.tm_min), &(next_period.tm_year), &(next_period.tm_mday), &(next_period)]) */
/*  points-to-set([cf, &(cf->cf_env_base), &(cf->cf_tzdiff), &(cf->cf_user)]) */
/*  points-to-set([&(ff->__BLAST_FLAG), ((unsigned int)ff), ff]) */
/*  points-to-set([&(f->__BLAST_FLAG), f, ((unsigned int)f)]) */
/*  points-to-set([exeent->e_line, exeent->e_ctrl_pid, exeent->e_job_pid]) */
/*  points-to-set([&(tmp___10->__BLAST_FLAG), tmp___10]) */
/*  points-to-set([tmp___9, &(tmp___9->__BLAST_FLAG)]) */
/*  points-to-set([&(pipe_fd)[1], pipe_fd]) */
/*  points-to-set([&(ptr2[1]), ptr2]) */
/*  points-to-set([(line->cl_file->cf_running + 1), line->cl_file->cf_running, line->cl_file->cf_env_base, line->cl_file->cf_user]) */
/*  points-to-set([&(ptr1[((int)namesize)]), ptr1, ((unsigned int)ptr1), &(ptr1[1])]) */
/*  points-to-set([env->e_val, env->e_next]) */
/*  points-to-set([&(tmp___11->__BLAST_FLAG), tmp___11]) */
/*  points-to-set([&(file_stat.st_uid), &(file_stat)]) */
/*  points-to-set([((ptr(char))&(buf)), &(buf)]) */
/*  points-to-set([&(&(mailbuf)[(size(array(196, char)) - 1)]), ((ptr(char))&(mailbuf)), &(mailbuf)]) */
/*  points-to-set([((unsigned int)curshell), curshell]) */
/*  points-to-set([&(env->e_val), &(env->e_next), env]) */
/*  points-to-set([&(tmp___21->__BLAST_FLAG), tmp___21]) */
/*  points-to-set([&(tmp___8->__BLAST_FLAG), tmp___8]) */
/*  points-to-set([tmp___23, ((unsigned int)tmp___23)]) */
/*  points-to-set([&(&(pipe_fd)[1]), &(pipe_fd)]) */
/*  points-to-set([pipef, ((unsigned int)pipef), &(pipef->__BLAST_FLAG)]) */
/*  points-to-set([cf->cf_env_base, cf->cf_user, cf->cf_tzdiff]) */
/*  points-to-set([&(&(pipe_pid_fd)[1]), &(pipe_pid_fd)]) */
/*  points-to-set([st.st_uid, st.st_mode]) */
/*  points-to-set([ftime->tm_min, ftime->tm_wday, ftime->tm_mday, ftime->tm_mon, ftime->tm_hour, ftime->tm_year]) */
/*  points-to-set([&(line->cl_file->cf_running), line->cl_shell, line->cl_file, &(line->cl_file->cf_env_base), ((int)line->cl_nice), line->cl_nice, ((int)line->cl_option), line->cl_option, ((int)&(line->cl_option)[2]), &(line->cl_option)[2], &(line->cl_option)[3], ((int)&(line->cl_option)[3]), &(line->cl_file->cf_user)]) */
/*  points-to-set([tmp___21->__BLAST_FLAG, pipef->__BLAST_FLAG]) */
/*  points-to-set([&(file_name[4]), file_name]) */
/*  points-to-set([*ptr1, *ptr2]) */
/*  points-to-set([pass, ((unsigned int)pass), &(pass->pw_name)]) */
/*  points-to-set([&(exeent->e_job_pid), &(&(exeent->e_job_pid)[i]), &(exeent->e_ctrl_pid), &(exeent->e_line), exeent]) */
/*  points-to-set([env->e_next, env->e_val]) */
/*  points-to-set([&(env->e_next), &(env->e_val), ((unsigned int)env), env]) */
/*  points-to-set([&(ftime->tm_mday), &(ftime->tm_wday), &(ftime->tm_mon), ftime, &(ftime->tm_min), &(ftime->tm_year), &(ftime->tm_hour)]) */
/*  points-to-set([((ptr(void))&(buf)), &(buf)]) */
/*  points-to-set([fcronconf, ((unsigned int)fcronconf)]) */
/*  points-to-set([((unsigned int)home), home]) */
