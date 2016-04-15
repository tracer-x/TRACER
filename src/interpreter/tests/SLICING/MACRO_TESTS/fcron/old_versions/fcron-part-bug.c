typedef unsigned int size_t;
typedef int __ssize_t;
typedef long __time_t;
typedef __time_t time_t;
typedef unsigned char bitstr_t;

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
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;

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


extern void *calloc(size_t __nmemb , size_t __size ) ;
extern int closedir(DIR *__dirp ) ;
extern void Debug(char *fmt  , ...) ;
extern void die(char *fmt  , ...) ;
extern void die_e(char *fmt  , ...) ;
extern int *__errno_location(void) ;
extern void error(char *fmt  , ...) ;
extern void error_e(char *fmt  , ...) ;
extern void explain(char *fmt  , ...) ;
extern void free(void *__ptr ) ;
extern int getloadavg(double *result , int n ) ;
extern int get_nb_mdays(int year , int mon ) ;
extern struct passwd *getpwnam(char const   *__name ) ;
extern struct passwd *getpwuid(__uid_t __uid ) ;
extern void goto_non_matching(cl_t *line , struct tm *ftime , char option ) ;
extern void insert_nextexe(struct cl_t *line ) ;
extern struct tm *localtime(time_t const   *__timer ) ;
extern void *memcpy(void * __dest , void const   * __src ,
                    size_t __n ) ;
extern time_t mktime(struct tm *__tp ) ;
extern DIR *opendir(char const   *__name ) ;
extern void print_fields(int fd , unsigned char *details ) ;
extern void print_line(int fd , struct cl_t *line , unsigned char *details , pid_t pid ,
                int index___0 , time_t until ) ;
extern int rand(void) ;
extern int send(int, int, int, int);
extern void set_wday(struct tm *date ) ;
extern void send_msg_fd_debug(int fd , char *fmt  , ...) ;
extern void send_msg_fd(int fd , char *fmt  , ...) ;
extern int remove(char const   *__filename ) ;
extern struct dirent *readdir(DIR *__dirp ) ;
extern void warn(char *fmt  , ...) ;
extern void warn_e(char *fmt  , ...) ;
extern void synchronize_file(char *file_name ) ;
extern int strncmp(char const   *__s1 , char const   *__s2 , size_t __n ) ;
extern char *strdup2(char const   *str ) ;
extern int strcmp(char const   *__s1 , char const   *__s2 ) ;
extern char *strchr(char const   *__s , int __c ) ;
extern int (   snprintf)(char * __s , size_t __maxlen ,
                                               char const   * __format 
                                               , ...) ;


//int main() { return 0; }
void main(cl_t *line , char option , int info_fd ) 
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
  if ((int )option & 4) {
    basetime = line->cl_nextexe;
  } else {
    basetime = now;
  }
  if (! ((int )line->cl_option[0] & 1)) {
    nextexe = (time_t )0;
    has_changed = 0;
    year_limit = 10;
    basetime_tz = basetime - (time_t )((int )(line->cl_file)->cf_tzdiff * 3600);
    ft = localtime((time_t const   *)(& basetime_tz));
    memcpy((void *)(& ftime), (void const   *)ft,sizeof(struct tm ));
    if (first_sleep > 0) {
      ftime.tm_min = ftime.tm_min + 1;
      ftime.tm_sec = 0;
    } else {
      if ((int )option == 0) {
        ftime.tm_min = ftime.tm_min + 1;
        ftime.tm_sec = 0;
      } else {
        if ((int )line->cl_runfreq != 1) {
          ftime.tm_min = ftime.tm_min + 1;
          ftime.tm_sec = 0;
        }
      }
    }
    if ((int )line->cl_runfreq == 1) {
      if ((int )option != 1) {
        if ((int )option != 2) {
          goto_non_matching(line, & ftime, 0);
        }
      }
    }
    i = ftime.tm_mon;
    while (1) {
      if (((int )line->cl_mons[i >> 3] & (1 << (i & 7))) == 0) {
        if (! (i < 12)) {
          break;
        }
      } else {
        break;
      }
      i ++;
    }
    if (i >= 12) {
      ftime.tm_year = ftime.tm_year + 1;
      year_limit = (short )((int )year_limit - 1);
      if (year_limit <= 0) {
        error((char *)"Can\'t found a matching date for %s in the next %d years. Maybe this line is corrupted : consider reinstalling the fcrontab.",
              line->cl_shell, 10);
      }
      if ((int )has_changed < 3) {
        has_changed = 3;
        ftime.tm_mon = 0;
        ftime.tm_mday = 1;
        ftime.tm_hour = 0;
        ftime.tm_min = 0;
      } else {
        ftime.tm_mon = 0;
      }
    }
    if (ftime.tm_mon != i) {
      ftime.tm_mon = i;
      if ((int )has_changed < 2) {
        has_changed = 2;
        ftime.tm_mday = 1;
        ftime.tm_hour = 0;
        ftime.tm_min = 0;
      }
    }
    max = get_nb_mdays(ftime.tm_year + 1900, ftime.tm_mon);
    if (! ((int )line->cl_option[0] & 8)) {
      i = ftime.tm_mday;
      while (1) {
        if (((int )line->cl_days[i >> 3] & (1 << (i & 7))) == 0) {
          if (! (i <= max)) {
            break;
          }
        } else {
          break;
        }
        i ++;
      }
      if (i > max) {
        ftime.tm_mon = ftime.tm_mon + 1;
        if ((int )has_changed < 2) {
          has_changed = 2;
          ftime.tm_mday = 1;
          ftime.tm_hour = 0;
          ftime.tm_min = 0;
        } else {
          ftime.tm_mday = 1;
        }
      }
      if (ftime.tm_mday != i) {
        ftime.tm_mday = i;
        if ((int )has_changed < 1) {
          has_changed = 1;
          ftime.tm_hour = 0;
          ftime.tm_min = 0;
        }
      }
      set_wday(& ftime);
      if (((int )line->cl_dow[ftime.tm_wday >> 3] & (1 << (ftime.tm_wday & 7))) ==
          0) {
        ftime.tm_mday = ftime.tm_mday + 1;
        ftime.tm_hour = 0;
        ftime.tm_min = 0;
      }
    } else {
      set_wday(& ftime);
      j = ftime.tm_wday;
      i = ftime.tm_mday;
      while (1) {
        if (((int )line->cl_days[i >> 3] & (1 << (i & 7))) == 0) {
          if (! (((int )line->cl_dow[j >> 3] & (1 << (j & 7))) == 0)) {
            break;
          }
        } else {
          break;
        }
        if (i > max) {
          ftime.tm_mon = ftime.tm_mon + 1;
          if ((int )has_changed < 2) {
            has_changed = 2;
            ftime.tm_mday = 1;
            ftime.tm_hour = 0;
            ftime.tm_min = 0;
          } else {
            ftime.tm_mday = 1;
          }
        }
        if (j >= 7) {
          j -= 7;
        }
        i ++;
        j ++;
      }
      if (ftime.tm_mday != i) {
        ftime.tm_mday = i;
        if ((int )has_changed < 1) {
          has_changed = 1;
          ftime.tm_hour = 0;
          ftime.tm_min = 0;
        }
      }
    }
    i = ftime.tm_hour;
    while (1) {
      if (((int )line->cl_hrs[i >> 3] & (1 << (i & 7))) == 0) {
        if (! (i < 24)) {
          break;
        }
      } else {
        break;
      }
      i ++;
    }
    if (i >= 24) {
      ftime.tm_mday = ftime.tm_mday + 1;
      if ((int )has_changed < 1) {
        has_changed = 1;
        ftime.tm_hour = 0;
        ftime.tm_min = 0;
      } else {
        ftime.tm_hour = 0;
      }
    }
    if (ftime.tm_hour != i) {
      ftime.tm_hour = i;
      ftime.tm_min = 0;
    }
    i = ftime.tm_min;
    while (1) {
      if (((int )line->cl_mins[i >> 3] & (1 << (i & 7))) == 0) {
        if (! (i < 60)) {
          break;
        }
      } else {
        break;
      }
      i ++;
    }
    if (i >= 60) {
      ftime.tm_hour = ftime.tm_hour + 1;
      ftime.tm_min = 0;
    }
    ftime.tm_min = i;
    nextexe = mktime(& ftime);
    if ((int )line->cl_option[2] & 128) {
      if (debug_opt) {
        Debug((char *)"   cmd: %s begin int exec %d/%d/%d wday:%d %02d:%02d (tzdiff=%d)",
              line->cl_shell, ftime.tm_mon + 1, ftime.tm_mday, ftime.tm_year + 1900,
              ftime.tm_wday, ftime.tm_hour, ftime.tm_min, (line->cl_file)->cf_tzdiff);
      }
      memcpy((void *)(& intend), (void const   *)(& ftime),
             sizeof(intend));
      goto_non_matching(line, & intend, 1);
      intend_int = mktime(& intend);
      i = (int )(intend_int - nextexe);
      if (i > 0) {
        tmp___1 = rand();
        tmp___0 = (long )(((float )i * (float )tmp___1) / (float )2147483647);
	//Non-linear constraint
/*         tmp___0 = (long )(((float )i * (float )tmp___1) / (float )2147483647); */
      } else {
        tmp___0 = 0;
      }
      nextexe += tmp___0;
    }
    line->cl_nextexe = nextexe + (time_t )((int )(line->cl_file)->cf_tzdiff * 3600);
    if ((int )option != 1) {
      if ((int )line->cl_option[2] & 128) {
        //ft = localtime((time_t const   *)( nextexe));
	ft = localtime((time_t const   *)(& nextexe)); 
        memcpy((void *)(& ftime), (void const   *)ft,
               sizeof(ftime));
      }
    }
  }
  }
  _SLICE(ftime);
} // end main


/* EVERYTHING ELSE COMMENTED FROM BELOW
      send_msg_fd_debug(info_fd, (char *)"   cmd: %s next exec %d/%d/%d wday:%d %02d:%02d (tzdiff=%d w/ sys time)",
                        line->cl_shell, ftime.tm_mon + 1, ftime.tm_mday, ftime.tm_year +
                                                                         1900, ftime.tm_wday,
                        ftime.tm_hour, ftime.tm_min, (line->cl_file)->cf_tzdiff);
    }
    if (line->cl_nextexe <= now) {
      error((char *)"BUG ??? Fcron thinks the next exe time of %s is %ld, hence before now (%ld). To avoid infinite loop, nextexe will be set at now+5s.");
      line->cl_nextexe = now + 5;
    }
  } else {
    line->cl_nextexe = basetime + line->cl_timefreq;
    ft = localtime((time_t const   *)(& line->cl_nextexe));
    memcpy((void *)(& ftime), (void const   *)ft,
           sizeof(struct tm ));
    send_msg_fd_debug(info_fd, (char *)"   cmd: %s next exec %d/%d/%d wday:%d %02d:%02d (system time)",
                      line->cl_shell, ftime.tm_mon + 1, ftime.tm_mday, ftime.tm_year +
                                                                       1900, ftime.tm_wday,
                      ftime.tm_hour, ftime.tm_min);
  }
  insert_nextexe(line);
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
    while (1) {
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
  while (list_cur) {
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
  while (list_cur) {
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
  while (list_cur) {
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
  while (1) {
    l = next;
    if (! ((unsigned int )l != (unsigned int )((void *)0))) {
      break;
    }
    next = l->next;
    free((void *)l->str);
    free((void *)l);
  }
  next = new_list;
  while (1) {
    l = next;
    if (! ((unsigned int )l != (unsigned int )((void *)0))) {
      break;
    }
    next = l->next;
    free((void *)l->str);
    free((void *)l);
  }
  next = file_list;
  while (1) {
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
  while ((unsigned int )file != (unsigned int )((void *)0)) {
    tmp = strcmp(user_name, (char const   *)file->cf_user);
    if (tmp != 0) {
      prev_file = file;
      file = file->cf_next;
      continue;
    }
    i = 0;
    while (i < (int )exe_num) {
      if ((unsigned int )(exe_array + i)->e_line != (unsigned int )((void *)0)) {
        if ((unsigned int )((exe_array + i)->e_line)->cl_file == (unsigned int )file) {
          if ((int )((exe_array + i)->e_line)->cl_option[0] & 32) {
          } else {
            if ((int )((exe_array + i)->e_line)->cl_option[0] & 64) {
              if (! ((int )((exe_array + i)->e_line)->cl_option[0] & 2)) {
                serial_running = (short )((int )serial_running - 1);
              } else {
              }
            } else {
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
    while (i < (int )lavg_num) {
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
    while (i < (int )serial_array_size) {
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
    }
    k = (int )serial_array_index + (int )serial_num;
    if (k >= (int )serial_array_size) {
      k -= (int )serial_array_size;
    }
    k = 0;
    i = k;
    while (i < (int )serial_array_size) {
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
    cur_line = file->cf_line_base;
    while (1) {
      line = cur_line;
      if (! ((unsigned int )line != (unsigned int )((void *)0))) {
        break;
      }
      cur_line = line->cl_next;
      prev_j = (struct job_t *)((void *)0);
      j = queue_base;
      while ((unsigned int )j != (unsigned int )((void *)0)) {
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
  while (1) {
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
  found = 0;
  if ((*(cmd + 1)) == -1) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  all = tmp;
  user = (char *)((void *)0);
  i = 0;
  while (i < 1) {
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
  while ((unsigned int )j != (unsigned int )((void *)0)) {
    if ((*(cmd + 1)) == (j->j_line)->cl_id) {
      tmp___0 = strcmp((char const   *)client->fcl_user, (char const   *)((j->j_line)->cl_file)->cf_user);
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
    i = snprintf((char *)(lavg_str), sizeof(lavg_str), (char const   *)"Current load average : %.1f, %.1f, %.1f\n",
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
  while ((unsigned int )j != (unsigned int )((void *)0)) {
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
  while (i < (int )exe_num) {
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
        tmp___3 = strcmp((char const   *)user, (char const   *)(((exe_array + i)->e_line)->cl_file)->cf_user);
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
  while (i < (int )lavg_num) {
    if (all) {
      print_line(fd, (lavg_array + i)->l_line, fields, 0, 0, (lavg_array + i)->l_until);
      found = 1;
    } else {
      tmp___4 = strcmp((char const   *)user, (char const   *)(((lavg_array + i)->l_line)->cl_file)->cf_user);
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
  while (j___0 < (int )serial_num) {
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
*/
