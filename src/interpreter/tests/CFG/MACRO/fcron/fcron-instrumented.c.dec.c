
typedef long __off_t;
typedef long long __off64_t;
typedef void _IO_lock_t;
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
char _unused2[(int )(15U * sizeof(int ) - 2U * sizeof(void *))] ;
};
typedef struct _IO_FILE FILE;
typedef unsigned int size_t;
typedef unsigned long long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
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
struct __anonstruct___sigset_t_2 {
unsigned long __val[(int )(1024U / (8U * sizeof(unsigned long )))] ;
};
typedef struct __anonstruct___sigset_t_2 __sigset_t;
struct timespec {
__time_t tv_sec ;
long tv_nsec ;
};
struct timeval {
__time_t tv_sec ;
__suseconds_t tv_usec ;
};
typedef long __fd_mask;
struct __anonstruct_fd_set_3 {
__fd_mask __fds_bits[(int )(1024U / (8U * sizeof(__fd_mask )))] ;
};
typedef struct __anonstruct_fd_set_3 fd_set;
typedef struct __ccured_va_list *__gnuc_va_list;
struct __ccured_va_list {
int next ;
};
typedef struct __ccured_va_list *__ccured_va_list;
struct option {
char *name ;
int has_arg ;
int *flag ;
int val ;
};
struct passwd {
char *pw_name ;
char *pw_passwd ;
__uid_t pw_uid ;
__gid_t pw_gid ;
char *pw_gecos ;
char *pw_dir ;
char *pw_shell ;
};
typedef void (*__sighandler_t)(int  );
struct sigaction {
void (*sa_handler)(int  ) ;
__sigset_t sa_mask ;
int sa_flags ;
void (*sa_restorer)(void) ;
};
struct _IO_marker {
struct _IO_marker *_next ;
struct _IO_FILE *_sbuf ;
int _pos ;
};
typedef struct _IO_FILE _IO_FILE;
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
typedef int __priority_which_t;
struct __anonstruct___wait_terminated_39 {
unsigned int __w_termsig : 7 ;
unsigned int __w_coredump : 1 ;
unsigned int __w_retcode : 8 ;
unsigned int  : 16 ;
};
struct __anonstruct___wait_stopped_40 {
unsigned int __w_stopval : 8 ;
unsigned int __w_stopsig : 8 ;
unsigned int  : 16 ;
};
union wait {
int w_status ;
struct __anonstruct___wait_terminated_39 __wait_terminated ;
struct __anonstruct___wait_stopped_40 __wait_stopped ;
};
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
char *tm_zone ;
};
typedef __socklen_t socklen_t;
typedef struct pam_handle pam_handle_t;
struct pam_message {
int msg_style ;
char *msg ;
};
struct pam_response {
char *resp ;
int resp_retcode ;
};
struct pam_conv {
int (*conv)(int num_msg , struct pam_message **msg , struct pam_response **resp , void *appdata_ptr ) ;
void *appdata_ptr ;
};
typedef unsigned char bitstr_t;
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
struct job_t {
struct cl_t *j_line ;
struct job_t *j_next ;
};
typedef struct job_t job_t;
struct lavg_t {
struct cl_t *l_line ;
time_t l_until ;
};
typedef struct lavg_t lavg_t;
struct exe_t {
struct cl_t *e_line ;
pid_t e_ctrl_pid ;
pid_t e_job_pid ;
};
struct dirent {
__ino_t d_ino ;
__off_t d_off ;
unsigned short d_reclen ;
unsigned char d_type ;
char d_name[256] ;
};
typedef struct __dirstream DIR;
struct group {
char *gr_name ;
char *gr_passwd ;
__gid_t gr_gid ;
char **gr_mem ;
};
struct spwd {
char *sp_namp ;
char *sp_pwdp ;
long sp_lstchg ;
long sp_min ;
long sp_max ;
long sp_warn ;
long sp_inact ;
long sp_expire ;
unsigned long sp_flag ;
};
struct timezone {
int tz_minuteswest ;
int tz_dsttime ;
};
typedef struct timezone *__timezone_ptr_t;
typedef unsigned short sa_family_t;
struct sockaddr {
sa_family_t sa_family ;
char sa_data[14] ;
};
struct sockaddr_un {
sa_family_t sun_family ;
char sun_path[108] ;
};
struct fcrondyn_cl {
struct fcrondyn_cl *fcl_next ;
int fcl_sock_fd ;
char *fcl_user ;
time_t fcl_idle_since ;
int fcl_cmd_len ;
long *fcl_cmd ;
};
typedef struct fcrondyn_cl fcrondyn_cl;
union __anonunion___u_47 {
int __in ;
int __i ;
};
union __anonunion___u_48 {
int __in ;
int __i ;
};
union __anonunion___u_49 {
int __in ;
int __i ;
};
union __anonunion___u_50 {
int __in ;
int __i ;
};
union __anonunion___u_51 {
int __in ;
int __i ;
};
union __anonunion___u_52 {
int __in ;
int __i ;
};
union __anonunion___u_53 {
int __in ;
int __i ;
};
union __anonunion___u_54 {
int __in ;
int __i ;
};
union __anonunion___u_55 {
int __in ;
int __i ;
};
union __anonunion___u_56 {
int __in ;
int __i ;
};
struct list_t {
char *str ;
struct list_t *next ;
};
typedef struct list_t list_t;
extern FILE *stderr ;
extern FILE *stdout ;
int EXIT  ;
int BLAST_error  ;
void __initialize__(void) ;
extern time_t time(time_t *__timer ) ;
extern int select(int __nfds , fd_set *__readfds , fd_set *__writefds , fd_set *__exceptfds , struct timeval *__timeout ) ;
extern int fcntl(int __fd , int __cmd  , ...) ;
extern int open(char *file , int flag  , ...) ;
extern void __ccured_va_start(__ccured_va_list  , unsigned long  ) ;
extern void __ccured_va_end(__ccured_va_list  ) ;
extern int unlink(char *__name ) ;
extern int GCC_STDARG_START() ;
extern int rename(char *__old , char *__new ) ;
extern int *__errno_location(void) ;
extern char *optarg ;
extern int optind ;
extern int getopt_long(int ___argc , char **___argv , char *__shortopts , struct option *__longopts , int *__longind ) ;
extern struct passwd *getpwuid(__uid_t __uid ) ;
extern struct passwd *getpwnam(char *__name ) ;
extern void *memcpy(void *__dest , void *__src , size_t __n ) ;
extern int memcmp(void *__s1 , void *__s2 , size_t __n ) ;
extern char *strcpy(char *__dest , char *__src ) ;
extern char *strncpy(char *__dest , char *__src , size_t __n ) ;
extern char *strcat(char *__dest , char *__src ) ;
extern char *strncat(char *__dest , char *__src , size_t __n ) ;
extern int strcmp(char *__s1 , char *__s2 ) ;
extern int strncmp(char *__s1 , char *__s2 , size_t __n ) ;
extern char *strchr(char *__s , int __c ) ;
extern char *strrchr(char *__s , int __c ) ;
extern size_t strcspn(char *__s , char *__reject ) ;
extern size_t strlen(char *__s ) ;
extern char *strerror(int __errnum ) ;
extern void bzero(void *__s , size_t __n ) ;
extern int strcasecmp(char *__s1 , char *__s2 ) ;
extern int strncasecmp(char *__s1 , char *__s2 , size_t __n ) ;
extern void *malloc(size_t __size ) ;
extern void *calloc(size_t __nmemb , size_t __size ) ;
extern void *realloc(void *__ptr , size_t __size ) ;
extern void free(void *__ptr ) ;
extern long strtol(char *__nptr , char **__endptr , int __base ) ;
extern int rand(void) ;
extern void srand(unsigned int __seed ) ;
extern char *getenv(char *__name ) ;
extern int putenv(char *__string ) ;
extern int setenv(char *__name , char *__value , int __replace ) ;
extern int mkstemp(char *__template ) ;
extern int getloadavg(double *result , int n ) ;
static void *q__qsort_base  ;
static int (*__qsort_compare)(void * , void * )  ;
static void *b__bsearch_base  ;
static void *b__bsearch_key  ;
static int (*__bsearch_compare)(void * , void * )  ;
static char *saved_str  ;
static struct passwd my_passwd_result  ;
extern __sighandler_t signal(int __sig , void (*__handler)(int  ) ) ;
extern int kill(__pid_t __pid , int __sig ) ;
extern int siginterrupt(int __sig , int __interrupt ) ;
extern int _IO_getc(_IO_FILE *__fp ) ;
extern int remove(char *__filename ) ;
extern int fclose(FILE *__stream ) ;
extern int fflush(FILE *__stream ) ;
extern FILE *fopen(char *__filename , char *__modes ) ;
extern FILE *freopen(char *__filename , char *__modes , FILE *__stream ) ;
extern FILE *fdopen(int __fd , char *__modes ) ;
extern void setlinebuf(FILE *__stream ) ;
extern int fprintf(FILE *__stream , char *__format  , ...) ;
extern int snprintf(char *__s , size_t __maxlen , char *__format  , ...) ;
extern int vsnprintf(char *__s , size_t __maxlen , char *__format , __gnuc_va_list __arg ) ;
extern int fscanf(FILE *__stream , char *__format  , ...) ;
extern char *fgets(char *__s , int __n , FILE *__stream ) ;
extern int fputs(char *__s , FILE *__stream ) ;
extern int fseek(FILE *__stream , long __off , int __whence ) ;
extern long ftell(FILE *__stream ) ;
extern void rewind(FILE *__stream ) ;
extern int ferror(FILE *__stream ) ;
extern void perror(char *__s ) ;
extern int fileno(FILE *__stream ) ;
extern int flock(int __fd , int __operation ) ;
extern int chmod(char *__file , __mode_t __mode ) ;
extern int fchmod(int __fd , __mode_t __mode ) ;
extern __mode_t umask(__mode_t __mask ) ;
extern int mkdir(char *__path , __mode_t __mode ) ;
extern int __fxstat(int __ver , int __fildes , struct stat *__stat_buf ) ;
extern int setpriority(__priority_which_t __which , id_t __who , int __prio ) ;
extern __pid_t wait3(union wait *__stat_loc , int __options , struct rusage *__usage ) ;
extern void closelog(void) ;
extern void openlog(char *__ident , int __option , int __facility ) ;
extern void syslog(int __pri , char *__fmt  , ...) ;
extern time_t mktime(struct tm *__tp ) ;
extern size_t strftime(char *__s , size_t __maxsize , char *__format , struct tm *__tp ) ;
extern struct tm *localtime(time_t *__timer ) ;
extern int access(char *__name , int __type ) ;
extern int close(int __fd ) ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
extern ssize_t write(int __fd , void *__buf , size_t __n ) ;
extern int pipe(int *__pipedes ) ;
extern int fchown(int __fd , __uid_t __owner , __gid_t __group ) ;
extern int chdir(char *__path ) ;
extern int dup2(int __fd , int __fd2 ) ;
extern int execl(char *__path , char *__arg  , ...) ;
extern int execlp(char *__file , char *__arg  , ...) ;
extern int nice(int __inc ) ;
extern __pid_t getpid(void) ;
extern __pid_t setsid(void) ;
extern __uid_t getuid(void) ;
extern int setuid(__uid_t __uid ) ;
extern int setgid(__gid_t __gid ) ;
extern __pid_t fork(void) ;
extern int gethostname(char *__name , size_t __len ) ;
extern int ftruncate(int __fd , __off_t __length ) ;
pam_handle_t *pamh  ;
struct pam_conv apamconv  ;
int write_file_to_disk(int fd , struct cf_t *file , time_t time_date ) ;
int save_file_safe(cf_t *file , char *final_path , char *prog_name___0 , uid_t own_uid , gid_t own_gid , time_t save_date ) ;
void xcloselog(void) ;
void explain(char *fmt  , ...) ;
void warn(char *fmt  , ...) ;
void warn_fd(int fd , char *fmt  , ...) ;
void warn_e(char *fmt  , ...) ;
void error(char *fmt  , ...) ;
void error_fd(int fd , char *fmt  , ...) ;
void error_e(char *fmt  , ...) ;
void die(char *fmt  , ...) ;
void die_e(char *fmt  , ...) ;
void error_pame(pam_handle_t *pamh___0 , int pamerrno , char *fmt  , ...) ;
void die_pame(pam_handle_t *pamh___0 , int pamerrno , char *fmt  , ...) ;
void Debug(char *fmt  , ...) ;
void send_msg_fd_debug(int fd , char *fmt  , ...) ;
void send_msg_fd(int fd , char *fmt  , ...) ;
char *fcronconf  ;
char *fcronallow  ;
char *fcrondeny  ;
char *fcrontabs  ;
char *pidfile  ;
char *fifofile  ;
char *editor  ;
char *shell  ;
char *sendmail  ;
int remove_blanks(char *str ) ;
char *strdup2(char *str ) ;
int get_word(char **str ) ;
int temp_file(char **name ) ;
void read_conf(void) ;
void free_conf(void) ;
extern DIR *opendir(char *__name ) ;
extern int closedir(DIR *__dirp ) ;
extern struct dirent *readdir(DIR *__dirp ) ;
extern struct group *getgrnam(char *__name ) ;
extern int initgroups(char *__user , __gid_t __group ) ;
static struct group my_group_result  ;
extern struct spwd *getspnam(char * ) ;
extern int ioctl(int __fd , unsigned long __request  , ...) ;
extern int gettimeofday(struct timeval *__tv , __timezone_ptr_t __tz ) ;
time_t now  ;
char debug_opt  ;
char foreground  ;
char dosyslog  ;
long first_sleep  ;
pid_t daemon_pid  ;
mode_t saved_umask  ;
char *prog_name  ;
struct cf_t *file_base  ;
struct job_t *queue_base  ;
unsigned long next_id  ;
struct cl_t **serial_array  ;
short serial_array_size  ;
short serial_array_index  ;
short serial_num  ;
short serial_running  ;
short serial_max_running  ;
short serial_queue_max  ;
short lavg_queue_max  ;
struct exe_t *exe_array  ;
short exe_array_size  ;
short exe_num  ;
struct lavg_t *lavg_array  ;
short lavg_array_size  ;
short lavg_num  ;
short lavg_serial_running  ;
void xexit(int exit_value ) ;
void test_jobs(void) ;
void wait_chld(void) ;
void wait_all(int *counter ) ;
time_t time_to_sleep(time_t lim ) ;
time_t check_lavg(time_t lim ) ;
extern void set_next_exe(struct cl_t *line , char option , int info_fd ) ;
void set_next_exe_notrun(struct cl_t *line , char context ) ;
void mail_notrun(struct cl_t *line , char context , struct tm *since ) ;
void insert_nextexe(struct cl_t *line ) ;
void run_normal_job(cl_t *line , int info_fd ) ;
void add_serial_job(struct cl_t *line , int info_fd ) ;
void add_lavg_job(struct cl_t *line , int info_fd ) ;
void run_serial_job(void) ;
void reload_all(char *dir_name ) ;
void synchronize_dir(char *dir_name ) ;
void delete_file(char *user_name ) ;
void save_file(struct cf_t *arg_file ) ;
int change_user(struct cl_t *cl ) ;
void run_job(struct exe_t *exeent ) ;
FILE *create_mail(struct cl_t *line , char *subject ) ;
void launch_mailer(struct cl_t *line , FILE *mailf ) ;
extern int socket(int __domain , int __type , int __protocol ) ;
extern int bind(int __fd , void *__addr , socklen_t __len ) ;
extern ssize_t send(int __fd , void *__buf , size_t __n , int __flags ) ;
extern ssize_t recv(int __fd , void *__buf , size_t __n , int __flags ) ;
extern int listen(int __fd , int __n ) ;
extern int accept(int __fd , void *__addr , socklen_t *__addr_len ) ;
extern int shutdown(int __fd , int __how ) ;
fd_set read_set  ;
int set_max_fd  ;
extern void init_socket(void) ;
void check_socket(int num ) ;
void close_socket(void) ;
void main_loop(void) ;
void check_signal(void) ;
void info(void) ;
void usage(void) ;
void print_schedule(void) ;
void sighup_handler(int x ) ;
void sigterm_handler(int x ) ;
void sigchild_handler(int x ) ;
void sigusr1_handler(int x ) ;
void sigusr2_handler(int x ) ;
int parseopt(int argc , char **argv ) ;
void get_lock(void) ;
void create_spooldir(char *dir ) ;
long save_time  ;
char once  ;
char *tmp_path  ;
char sig_conf  ;
char sig_chld  ;
char sig_debug  ;
time_t begin_sleep  ;
static struct option opt[14]  ;
void init_conf(void) ;
int write_buf_to_disk(int fd , char *write_buf , int *buf_used ) ;
int save_type(int fd , short type , char *write_buf , int *buf_used ) ;
int save_str(int fd , short type , char *str , char *write_buf , int *buf_used ) ;
int save_strn(int fd , short type , char *str , short size , char *write_buf , int *buf_used ) ;
int save_lint(int fd , short type , long value , char *write_buf , int *buf_used ) ;
int save_one_file(cf_t *file , char *filename , uid_t own_uid , gid_t own_gid , time_t save_date ) ;
static void xopenlog(void) ;
char *make_msg(char *append , char *fmt , __ccured_va_list args ) ;
void log_syslog_str(int priority , char *msg ) ;
void log_console_str(char *msg ) ;
void log_fd_str(int fd , char *msg ) ;
static void log_syslog(int priority , int fd , char *fmt , __ccured_va_list args ) ;
static void log_e(int priority , char *fmt , __ccured_va_list args ) ;
static void log_pame(int priority , pam_handle_t *pamh___0 , int pamerrno , char *fmt , __ccured_va_list args ) ;
static char truncated[13]  ;
static int log_open  ;
int is_leap_year(int year ) ;
int get_nb_mdays(int year , int mon ) ;
void set_wday(struct tm *date ) ;
extern void goto_non_matching(cl_t *line , struct tm *ftime , char option ) ;
void run_lavg_job(int i ) ;
void run_queue_job(cl_t *line ) ;
void resize_exe_array(void) ;
void sig_dfl(void) ;
void end_job(cl_t *line , int status , FILE *mailf , short mailpos ) ;
void die_mail_pame(cl_t *cl , int pamerrno , struct passwd *pas , char *str ) ;
int read_file(char *file_name , cf_t *cf ) ;
int add_line_to_file(cl_t *cl , cf_t *cf , uid_t runas , char *runas_str , time_t t_save ) ;
int read_strn(int fd , char **str , short size ) ;
int read_type(int fd , short *type , short *size ) ;
void synchronize_file(char *file_name ) ;
void remove_connection(struct fcrondyn_cl **client , struct fcrondyn_cl *prev_client ) ;
void exe_cmd(struct fcrondyn_cl *client ) ;
void auth_client(struct fcrondyn_cl *client ) ;
void cmd_ls(struct fcrondyn_cl *client , long *cmd , int fd , int is_root ) ;
void print_fields(int fd , unsigned char *details ) ;
void print_line(int fd , struct cl_t *line , unsigned char *details , pid_t pid , int index___0 , time_t until ) ;
void cmd_on_exeq(struct fcrondyn_cl *client , long *cmd , int fd , int is_root ) ;
void cmd_renice(struct fcrondyn_cl *client , long *cmd , int fd , int exe_index , int is_root ) ;
void cmd_send_signal(struct fcrondyn_cl *client , long *cmd , int fd , int exe_index ) ;
void cmd_run(struct fcrondyn_cl *client , long *cmd , int fd , int is_root ) ;
fcrondyn_cl *fcrondyn_cl_base  ;
int fcrondyn_cl_num  ;
fd_set master_set  ;
int listen_fd  ;
int auth_fail  ;
long auth_nofail_since  ;
char err_no_err_str[33]  ;
char err_unknown_str[57]  ;
char err_cmd_unknown_str[18]  ;
char err_job_nfound_str[29]  ;
char err_rjob_nfound_str[86]  ;
char err_invalid_user_str[47]  ;
char err_invalid_args_str[20]  ;
char err_job_nallowed_str[46]  ;
char err_all_nallowed_str[39]  ;
char err_others_nallowed_str[48]  ;
void exit(int status )
{
	EXIT = 1;
	/* END OF PATH at func_exit@p2#1 */
}

void BLAST_ERROR(void)
{
	BLAST_error = 0;
	/* END OF PATH at func_BLAST_ERROR@p2#1 */
}

void __initialize__(void)
{
	saved_str = (char *)((void *)0);
	debug_opt = (char)0;
	foreground = (char)0;
	first_sleep = 20L;
	save_time = 1800L;
	once = (char)0;
	dosyslog = (char)1;
	tmp_path = (char *)"";
	prog_name = (char *)((void *)0);
	sig_conf = (char)0;
	sig_chld = (char)0;
	sig_debug = (char)0;
	serial_max_running = (short)1;
	serial_queue_max = (short)30;
	lavg_queue_max = (short)30;
	pamh = (pam_handle_t *)((void *)0);
	fcronconf = (char *)((void *)0);
	fcrontabs = (char *)((void *)0);
	pidfile = (char *)((void *)0);
	fifofile = (char *)((void *)0);
	fcronallow = (char *)((void *)0);
	fcrondeny = (char *)((void *)0);
	shell = (char *)((void *)0);
	sendmail = (char *)((void *)0);
	editor = (char *)((void *)0);
	log_open = 0;
	fcrondyn_cl_num = 0;
	set_max_fd = 0;
	listen_fd = -1;
	auth_fail = 0;
	auth_nofail_since = 0L;
	/* END OF PATH at func___initialize__@p32#1 */
}

void *wrapperAlloc(unsigned int p )
{ void *x ;
	return (x);
	/* END OF PATH at func_wrapperAlloc@p2#1 */
}

void *__ptrof_nocheck(void *ptr )
{ void *x ;
	return (x);
	/* END OF PATH at func___ptrof_nocheck@p2#1 */
}

void *__endof(void *ptr )
{ void *x ;
	return (x);
	/* END OF PATH at func___endof@p2#1 */
}

void *__ptrof(void *ptr )
{ void *x ;
	return (x);
	/* END OF PATH at func___ptrof@p2#1 */
}

void __verify_nul(char *ptr )
{ int x ;
	/* END OF PATH at func___verify_nul@p2#1 */
}

char *__stringof(char *ptr )
{ char *x ;
	return (x);
	/* END OF PATH at func___stringof@p2#1 */
}

void *__mkptr(void *p , void *phome )
{ void *x ;
	return (x);
	/* END OF PATH at func___mkptr@p2#1 */
}

void *__mkptr_size(void *p , unsigned int len )
{ void *x ;
	return (x);
	/* END OF PATH at func___mkptr_size@p2#1 */
}

char *__mkptr_string(char *p )
{ char *x ;
	return (x);
	/* END OF PATH at func___mkptr_string@p2#1 */
}

void *__trusted_cast(void *p )
{ void *x ;
	return (x);
	/* END OF PATH at func___trusted_cast@p2#1 */
}

void *__trusted_deepcast(void *p )
{ void *x ;
	return (x);
	/* END OF PATH at func___trusted_deepcast@p2#1 */
}

int __ccured_has_empty_mangling(unsigned int p )
{ int x ;
	return (x);
	/* END OF PATH at func___ccured_has_empty_mangling@p2#1 */
}

int _get__ctype_b(int p )
{ int x ;
	return (x);
	/* END OF PATH at func__get__ctype_b@p2#1 */
}

void *realloc_wrapper(void *b , int sz )
{ void *res ;
void *tmp ;
void *tmp___0 ;
void *result ;
void *tmp___1 ;
	tmp___1 = __ptrof(b);
	tmp = tmp___1;
	tmp___0 = realloc(tmp, (unsigned int )sz);
	res = tmp___0;
	result = b;
	result = __mkptr_size(res, (unsigned int )sz);
	return (result);
	/* END OF PATH at func_realloc_wrapper@p12#1 */
}

void free_wrapper(void *x )
{ void *tmp ;
void *tmp___0 ;
	tmp___0 = __ptrof(x);
	tmp = tmp___0;
	free(tmp);
	/* END OF PATH at func_free_wrapper@p6#1 */
}

char *strrchr_wrapper(char *s , int chr )
{ char *result ;
char *tmp ;
char *tmp___0 ;
void *tmp___1 ;
	tmp = __stringof(s);
	result = strrchr(tmp, chr);
	tmp___1 = __mkptr((void *)result, (void *)s);
	tmp___0 = (char *)tmp___1;
	return (tmp___0);
	/* END OF PATH at func_strrchr_wrapper@p9#1 */
}

int strcasecmp_wrapper(char *s1 , char *s2 )
{ char *tmp ;
char *tmp___0 ;
int tmp___1 ;
	tmp = __stringof(s2);
	tmp___0 = __stringof(s1);
	tmp___1 = strcasecmp(tmp___0, tmp);
	return (tmp___1);
	/* END OF PATH at func_strcasecmp_wrapper@p7#1 */
}

int strncasecmp_wrapper(char *s1 , char *s2 , unsigned int n )
{ void *tmp ;
void *tmp___0 ;
void *tmp___1 ;
void *tmp___2 ;
char *tmp___3 ;
char *tmp___4 ;
int tmp___5 ;
void *tmp___6 ;
void *tmp___7 ;
	tmp = __endof((void *)s1);
	tmp___0 = __ptrof_nocheck((void *)s1);
	if(tmp - tmp___0 < n) {
		__verify_nul(s1);
L1:;
		tmp___1 = __endof((void *)s2);
		tmp___2 = __ptrof_nocheck((void *)s2);
		if(tmp___1 - tmp___2 < n) {
			__verify_nul(s2);
L2:;
			tmp___6 = __ptrof((void *)s2);
			tmp___3 = (char *)tmp___6;
			tmp___7 = __ptrof((void *)s1);
			tmp___4 = (char *)tmp___7;
			tmp___5 = strncasecmp(tmp___4, tmp___3, n);
			return (tmp___5);
			/* END OF PATH at func_strncasecmp_wrapper@p23#1 */
		}
		else {
			goto L2;
		}
	}
	else {
		goto L1;
	}
}

static void *__mkfat_sighandler(void *in )
{ void *tmp ;
void *tmp___0 ;
	if(in == 1) {
		tmp = __mkptr(in, (void *)0);
		return (tmp);
		/* END OF PATH at func___mkfat_sighandler@p5#1 */
	}
	else if(in < 1) {
L1:;
		tmp___0 = __mkptr_size(in, 1U);
		return (tmp___0);
		/* END OF PATH at func___mkfat_sighandler@p9#1 */
	}
	else {
		goto L1;
	}
}

FILE *get_stdin(void)
{ FILE *f ;
	return (f);
	/* END OF PATH at func_get_stdin@p2#1 */
}

FILE *get_stdout(void)
{ FILE *f ;
	return (f);
	/* END OF PATH at func_get_stdout@p2#1 */
}

FILE *get_stderr(void)
{ FILE *f ;
	return (f);
	/* END OF PATH at func_get_stderr@p2#1 */
}

void perror_wrapper(char *s )
{ char *tmp ;
char *tmp___0 ;
	tmp___0 = __stringof(s);
	tmp = tmp___0;
	perror(tmp);
	/* END OF PATH at func_perror_wrapper@p6#1 */
}

static int fstat__extinline(int fd , struct stat *statbuf )
{ int tmp ;
	tmp = __fxstat(3, fd, statbuf);
	return (tmp);
	/* END OF PATH at func_fstat__extinline@p3#1 */
}

char *pam_strerror(pam_handle_t *pamh , int errnum )
{ char *s ;
	return (s);
	/* END OF PATH at func_pam_strerror@p2#1 */
}

char **pam_getenvlist(pam_handle_t *pamh )
{ char **x ;
	return (x);
	/* END OF PATH at func_pam_getenvlist@p2#1 */
}

int pam_start(char *service_name , char *user , struct pam_conv *pam_conversation , pam_handle_t **pamh )
{ int x ;
	return (x);
	/* END OF PATH at func_pam_start@p2#1 */
}

int pam_end(pam_handle_t *pamh , int pam_status )
{ int x ;
	return (x);
	/* END OF PATH at func_pam_end@p2#1 */
}

int pam_authenticate(pam_handle_t *pamh , int flags )
{ int x ;
	return (x);
	/* END OF PATH at func_pam_authenticate@p2#1 */
}

int pam_setcred(pam_handle_t *pamh , int flags )
{ int x ;
	return (x);
	/* END OF PATH at func_pam_setcred@p2#1 */
}

int pam_acct_mgmt(pam_handle_t *pamh , int flags )
{ int x ;
	return (x);
	/* END OF PATH at func_pam_acct_mgmt@p2#1 */
}

int pam_open_session(pam_handle_t *pamh , int flags )
{ int x ;
	return (x);
	/* END OF PATH at func_pam_open_session@p2#1 */
}

int pam_close_session(pam_handle_t *pamh , int flags )
{ int x ;
	return (x);
	/* END OF PATH at func_pam_close_session@p2#1 */
}

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
	line = (cl_t *)((void *)0);
	env = (env_t *)((void *)0);
	write_buf_used = 0;
	tmp = save_lint(fd, (short)1, 100L, write_buf, & write_buf_used);
	if(tmp < 0) {
		error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
L1:;
		return (-1);
		/* END OF PATH at func_write_file_to_disk@p36#1 */
	}
	else if(tmp > 0) {
		error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
		goto L1;
	}
	else {
		tmp___0 = save_str(fd, (short)2, file->cf_user, write_buf, & write_buf_used);
		if(tmp___0 < 0) {
			error_e((char *)"Could not write str : file %s has not been saved.", file->cf_user);
L2:;
			return (-1);
			/* END OF PATH at func_write_file_to_disk@p41#1 */
		}
		else if(tmp___0 > 0) {
			error_e((char *)"Could not write str : file %s has not been saved.", file->cf_user);
			goto L2;
		}
		else {
			tmp___1 = save_lint(fd, (short)3, time_date, write_buf, & write_buf_used);
			if(tmp___1 < 0) {
				error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
L3:;
				return (-1);
				/* END OF PATH at func_write_file_to_disk@p46#1 */
			}
			else if(tmp___1 > 0) {
				error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
				goto L3;
			}
			else {
				if(file->cf_tzdiff < 0) {
					tmp___2 = save_lint(fd, (short)4, (long )file->cf_tzdiff, write_buf, & write_buf_used);
L4:;
					if(tmp___2 < 0) {
						error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
L5:;
						return (-1);
						/* END OF PATH at func_write_file_to_disk@p52#1 */
					}
					else if(tmp___2 > 0) {
						error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
						goto L5;
					}
					else {
L6:;
						env = file->cf_env_base;
L7:;
L8:;
						if(env == 0) {
L9:;
							line = file->cf_line_base;
L10:;
L11:;
							if(line == 0) {
L12:;
								tmp___23 = write_buf_to_disk(fd, write_buf, & write_buf_used);
								if(tmp___23 == -1) {
									return (-1);
									/* END OF PATH at func_write_file_to_disk@p179#1 */
								}
								else if(tmp___23 < -1) {
L13:;
									return (0);
									/* END OF PATH at func_write_file_to_disk@p181#1 */
								}
								else {
									goto L13;
								}
							}
							else if(line > 0) {
								tmp___4 = save_str(fd, (short)2001, line->cl_shell, write_buf, & write_buf_used);
L14:;
								if(tmp___4 < 0) {
									error_e((char *)"Could not write str : file %s has not been saved.", file->cf_user);
L15:;
									return (-1);
									/* END OF PATH at func_write_file_to_disk@p70#1 */
								}
								else if(tmp___4 > 0) {
									error_e((char *)"Could not write str : file %s has not been saved.", file->cf_user);
									goto L15;
								}
								else {
									tmp___5 = save_str(fd, (short)2006, line->cl_runas, write_buf, & write_buf_used);
									if(tmp___5 < 0) {
										error_e((char *)"Could not write str : file %s has not been saved.", file->cf_user);
L16:;
										return (-1);
										/* END OF PATH at func_write_file_to_disk@p75#1 */
									}
									else if(tmp___5 > 0) {
										error_e((char *)"Could not write str : file %s has not been saved.", file->cf_user);
										goto L16;
									}
									else {
										tmp___6 = save_str(fd, (short)2007, line->cl_mailto, write_buf, & write_buf_used);
										if(tmp___6 < 0) {
											error_e((char *)"Could not write str : file %s has not been saved.", file->cf_user);
L17:;
											return (-1);
											/* END OF PATH at func_write_file_to_disk@p80#1 */
										}
										else if(tmp___6 > 0) {
											error_e((char *)"Could not write str : file %s has not been saved.", file->cf_user);
											goto L17;
										}
										else {
											tmp___7 = save_strn(fd, (short)2017, (char *)(line->cl_option), (short)4, write_buf, & write_buf_used);
											if(tmp___7 < 0) {
												error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
L18:;
												return (-1);
												/* END OF PATH at func_write_file_to_disk@p85#1 */
											}
											else if(tmp___7 > 0) {
												error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
												goto L18;
											}
											else {
												if(line->cl_option[3] & 1 > 0) {
L19:;
													if(line->cl_option[0] & 1 > 0) {
														tmp___8 = save_lint(fd, (short)2018, line->cl_first, write_buf, & write_buf_used);
L20:;
														if(tmp___8 < 0) {
															error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
L21:;
															return (-1);
															/* END OF PATH at func_write_file_to_disk@p92#1 */
														}
														else if(tmp___8 > 0) {
															error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
															goto L21;
														}
														else {
L22:;
															if(line->cl_numexe > 0) {
																tmp___10 = save_strn(fd, (short)2002, (char *)(& line->cl_numexe), (short)1, write_buf, & write_buf_used);
L23:;
																if(tmp___10 < 0) {
																	error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
L24:;
																	return (-1);
																	/* END OF PATH at func_write_file_to_disk@p107#1 */
																}
																else if(tmp___10 > 0) {
																	error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
																	goto L24;
																}
																else {
L25:;
																	if(line->cl_option[0] & 2 > 0) {
																		tmp___11 = save_strn(fd, (short)2003, (char *)(line->cl_lavg), (short)3, write_buf, & write_buf_used);
L26:;
																		if(tmp___11 < 0) {
																			error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
L27:;
																			return (-1);
																			/* END OF PATH at func_write_file_to_disk@p113#1 */
																		}
																		else if(tmp___11 > 0) {
																			error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
																			goto L27;
																		}
																		else {
L28:;
																			if(line->cl_until > 0L) {
																				tmp___12 = save_lint(fd, (short)2004, line->cl_until, write_buf, & write_buf_used);
																				if(tmp___12 < 0) {
																					error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
L29:;
																					return (-1);
																					/* END OF PATH at func_write_file_to_disk@p119#1 */
																				}
																				else if(tmp___12 > 0) {
																					error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
																					goto L29;
																				}
																				else {
L30:;
																					if(line->cl_nice < 0) {
																						tmp___13 = save_strn(fd, (short)2005, & line->cl_nice, (short)1, write_buf, & write_buf_used);
L31:;
																						if(tmp___13 < 0) {
																							error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
L32:;
																							return (-1);
																							/* END OF PATH at func_write_file_to_disk@p125#1 */
																						}
																						else if(tmp___13 > 0) {
																							error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
																							goto L32;
																						}
																						else {
L33:;
																							if(line->cl_runfreq > 0) {
																								tmp___14 = save_lint(fd, (short)2011, (long )line->cl_runfreq, write_buf, & write_buf_used);
																								if(tmp___14 < 0) {
																									error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
L34:;
																									return (-1);
																									/* END OF PATH at func_write_file_to_disk@p131#1 */
																								}
																								else if(tmp___14 > 0) {
																									error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
																									goto L34;
																								}
																								else {
																									tmp___15 = save_lint(fd, (short)2009, (long )line->cl_remain, write_buf, & write_buf_used);
																									if(tmp___15 < 0) {
																										error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
L35:;
																										return (-1);
																										/* END OF PATH at func_write_file_to_disk@p136#1 */
																									}
																									else if(tmp___15 > 0) {
																										error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
																										goto L35;
																									}
																									else {
L36:;
																										if(line->cl_option[0] & 1 > 0) {
																											tmp___16 = save_lint(fd, (short)2010, line->cl_timefreq, write_buf, & write_buf_used);
L37:;
																											if(tmp___16 < 0) {
																												error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
L38:;
																												return (-1);
																												/* END OF PATH at func_write_file_to_disk@p142#1 */
																											}
																											else if(tmp___16 > 0) {
																												error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
																												goto L38;
																											}
																											else {
																												tmp___22 = save_type(fd, (short)2000, write_buf, & write_buf_used);
L39:;
																												if(tmp___22 < 0) {
																													error_e((char *)"Could not write type : file %s has not been saved.", file->cf_user);
L40:;
																													return (-1);
																													/* END OF PATH at func_write_file_to_disk@p173#1 */
																												}
																												else if(tmp___22 > 0) {
																													error_e((char *)"Could not write type : file %s has not been saved.", file->cf_user);
																													goto L40;
																												}
																												else {
																													line = line->cl_next;
																													goto L11;
																												}
																											}
																										}
																										else if(line->cl_option[0] & 1 < 0) {
																											tmp___16 = save_lint(fd, (short)2010, line->cl_timefreq, write_buf, & write_buf_used);
																											goto L37;
																										}
																										else {
																											tmp___17 = save_strn(fd, (short)2012, (char *)(line->cl_mins), (short)8, write_buf, & write_buf_used);
																											if(tmp___17 < 0) {
																												error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
L41:;
																												return (-1);
																												/* END OF PATH at func_write_file_to_disk@p148#1 */
																											}
																											else if(tmp___17 > 0) {
																												error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
																												goto L41;
																											}
																											else {
																												tmp___18 = save_strn(fd, (short)2013, (char *)(line->cl_hrs), (short)3, write_buf, & write_buf_used);
																												if(tmp___18 < 0) {
																													error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
L42:;
																													return (-1);
																													/* END OF PATH at func_write_file_to_disk@p153#1 */
																												}
																												else if(tmp___18 > 0) {
																													error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
																													goto L42;
																												}
																												else {
																													tmp___19 = save_strn(fd, (short)2014, (char *)(line->cl_days), (short)4, write_buf, & write_buf_used);
																													if(tmp___19 < 0) {
																														error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
L43:;
																														return (-1);
																														/* END OF PATH at func_write_file_to_disk@p158#1 */
																													}
																													else if(tmp___19 > 0) {
																														error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
																														goto L43;
																													}
																													else {
																														tmp___20 = save_strn(fd, (short)2015, (char *)(line->cl_mons), (short)2, write_buf, & write_buf_used);
																														if(tmp___20 < 0) {
																															error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
L44:;
																															return (-1);
																															/* END OF PATH at func_write_file_to_disk@p163#1 */
																														}
																														else if(tmp___20 > 0) {
																															error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
																															goto L44;
																														}
																														else {
																															tmp___21 = save_strn(fd, (short)2016, (char *)(line->cl_dow), (short)1, write_buf, & write_buf_used);
																															if(tmp___21 < 0) {
																																error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
L45:;
																																return (-1);
																																/* END OF PATH at func_write_file_to_disk@p168#1 */
																															}
																															else if(tmp___21 > 0) {
																																error_e((char *)"Could not write strn : file %s has not been saved.", file->cf_user);
																																goto L45;
																															}
																															else {
																																tmp___22 = save_type(fd, (short)2000, write_buf, & write_buf_used);
																																goto L39;
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																							else {
																								goto L36;
																							}
																						}
																					}
																					else if(line->cl_nice > 0) {
																						tmp___13 = save_strn(fd, (short)2005, & line->cl_nice, (short)1, write_buf, & write_buf_used);
																						goto L31;
																					}
																					else {
																						goto L33;
																					}
																				}
																			}
																			else {
																				goto L30;
																			}
																		}
																	}
																	else if(line->cl_option[0] & 2 < 0) {
																		tmp___11 = save_strn(fd, (short)2003, (char *)(line->cl_lavg), (short)3, write_buf, & write_buf_used);
																		goto L26;
																	}
																	else {
																		goto L28;
																	}
																}
															}
															else if(line->cl_numexe < 0) {
																tmp___10 = save_strn(fd, (short)2002, (char *)(& line->cl_numexe), (short)1, write_buf, & write_buf_used);
																goto L23;
															}
															else {
																goto L25;
															}
														}
													}
													else if(line->cl_option[0] & 1 < 0) {
														tmp___8 = save_lint(fd, (short)2018, line->cl_first, write_buf, & write_buf_used);
														goto L20;
													}
													else {
L46:;
														tmp___9 = save_lint(fd, (short)2008, line->cl_nextexe, write_buf, & write_buf_used);
														if(tmp___9 < 0) {
															error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
L47:;
															return (-1);
															/* END OF PATH at func_write_file_to_disk@p101#1 */
														}
														else if(tmp___9 > 0) {
															error_e((char *)"Could not write lint : file %s has not been saved.", file->cf_user);
															goto L47;
														}
														else {
															goto L22;
														}
													}
												}
												else if(line->cl_option[3] & 1 < 0) {
													goto L19;
												}
												else {
													goto L46;
												}
											}
										}
									}
								}
							}
							else {
								tmp___4 = save_str(fd, (short)2001, line->cl_shell, write_buf, & write_buf_used);
								goto L14;
							}
						}
						else if(env > 0) {
							tmp___3 = save_str(fd, (short)1000, env->e_val, write_buf, & write_buf_used);
L48:;
							if(tmp___3 < 0) {
								error_e((char *)"Could not write str : file %s has not been saved.", file->cf_user);
L49:;
								return (-1);
								/* END OF PATH at func_write_file_to_disk@p60#1 */
							}
							else if(tmp___3 > 0) {
								error_e((char *)"Could not write str : file %s has not been saved.", file->cf_user);
								goto L49;
							}
							else {
								env = env->e_next;
								goto L8;
							}
						}
						else {
							tmp___3 = save_str(fd, (short)1000, env->e_val, write_buf, & write_buf_used);
							goto L48;
						}
					}
				}
				else if(file->cf_tzdiff > 0) {
					tmp___2 = save_lint(fd, (short)4, (long )file->cf_tzdiff, write_buf, & write_buf_used);
					goto L4;
				}
				else {
					goto L6;
				}
			}
		}
	}
}

int save_file_safe(cf_t *file , char *final_path , char *prog_name___0 , uid_t own_uid , gid_t own_gid , time_t save_date )
{ char temp_path[516] ;
int final_path_len ;
int temp_path_index ;
char *tmp_str ;
int tmp ;
int tmp___0 ;
int tmp___1 ;
size_t tmp___2 ;
	tmp_str = (char *)".tmp";
	tmp___2 = strlen(final_path);
	final_path_len = (int )tmp___2;
	strncpy(temp_path, final_path, sizeof(temp_path) - sizeof(tmp_str));
	if(final_path_len > sizeof(temp_path) - sizeof(tmp_str)) {
		temp_path_index = (int )(sizeof(temp_path) - sizeof(tmp_str));
		strcpy(& temp_path[temp_path_index], (char *)".tmp");
		tmp___1 = save_one_file(file, temp_path, own_uid, own_gid, save_date);
L1:;
		if(tmp___1 == 0) {
			tmp___0 = rename(temp_path, final_path);
			if(tmp___0 < 0) {
				error_e((char *)"Cannot rename %s to %s", temp_path, final_path);
				error((char *)"%s will try to save the name to its definitive filename directly.", prog_name___0);
				error((char *)"If there is an error, root may consider to replace %s (which is a valid copy) by %s manually.", final_path, temp_path);
				tmp = save_one_file(file, final_path, own_uid, own_gid, save_date);
L2:;
				if(tmp == -1) {
					return (-1);
					/* END OF PATH at func_save_file_safe@p27#1 */
				}
				else if(tmp < -1) {
L3:;
					return (0);
					/* END OF PATH at func_save_file_safe@p33#1 */
				}
				else {
					goto L3;
				}
			}
			else if(tmp___0 > 0) {
				error_e((char *)"Cannot rename %s to %s", temp_path, final_path);
				error((char *)"%s will try to save the name to its definitive filename directly.", prog_name___0);
				error((char *)"If there is an error, root may consider to replace %s (which is a valid copy) by %s manually.", final_path, temp_path);
				tmp = save_one_file(file, final_path, own_uid, own_gid, save_date);
				goto L2;
			}
			else {
				goto L3;
			}
		}
		else if(tmp___1 < 0) {
			error((char *)"Since %s has not been able to save %s\'s file, it will keep the previous version (if any) of %s.", prog_name___0, final_path, final_path);
L4:;
			return (-1);
			/* END OF PATH at func_save_file_safe@p31#1 */
		}
		else {
			error((char *)"Since %s has not been able to save %s\'s file, it will keep the previous version (if any) of %s.", prog_name___0, final_path, final_path);
			goto L4;
		}
	}
	else {
		temp_path_index = final_path_len;
		strcpy(& temp_path[temp_path_index], (char *)".tmp");
		tmp___1 = save_one_file(file, temp_path, own_uid, own_gid, save_date);
		goto L1;
	}
}

void xcloselog(void)
{
	if(log_open > 0) {
L1:;
L2:;
		log_open = 0;
		/* END OF PATH at func_xcloselog@p4#1 */
	}
	else if(log_open < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

void explain(char *fmt  , ...)
{ __ccured_va_list args ;
unsigned long tmp ;
	log_syslog(5, -1, fmt, args);
	/* END OF PATH at func_explain@p4#1 */
}

void warn(char *fmt  , ...)
{ __ccured_va_list args ;
unsigned long tmp ;
	log_syslog(4, -1, fmt, args);
	/* END OF PATH at func_warn@p4#1 */
}

void warn_fd(int fd , char *fmt  , ...)
{ __ccured_va_list args ;
unsigned long tmp ;
	log_syslog(4, fd, fmt, args);
	/* END OF PATH at func_warn_fd@p4#1 */
}

void warn_e(char *fmt  , ...)
{ __ccured_va_list args ;
unsigned long tmp ;
	log_e(4, fmt, args);
	/* END OF PATH at func_warn_e@p4#1 */
}

void error(char *fmt  , ...)
{ __ccured_va_list args ;
unsigned long tmp ;
	log_syslog(3, -1, fmt, args);
	/* END OF PATH at func_error@p4#1 */
}

void error_fd(int fd , char *fmt  , ...)
{ __ccured_va_list args ;
unsigned long tmp ;
	log_syslog(3, fd, fmt, args);
	/* END OF PATH at func_error_fd@p4#1 */
}

void error_e(char *fmt  , ...)
{ __ccured_va_list args ;
unsigned long tmp ;
	log_e(3, fmt, args);
	/* END OF PATH at func_error_e@p4#1 */
}

void die(char *fmt  , ...)
{ __ccured_va_list args ;
unsigned long tmp ;
__pid_t tmp___0 ;
	log_syslog(3, -1, fmt, args);
	tmp___0 = getpid();
	if(tmp___0 == daemon_pid) {
		error((char *)"Aborted");
		exit(1);
L1:;
		/* END OF PATH at func_die@p9#1 */
	}
	else if(tmp___0 < daemon_pid) {
		exit(1);
		goto L1;
	}
	else {
		exit(1);
		goto L1;
	}
}

void die_e(char *fmt  , ...)
{ __ccured_va_list args ;
int err_no ;
int *tmp ;
unsigned long tmp___0 ;
__pid_t tmp___1 ;
	err_no = 0;
	tmp = __errno_location();
	err_no = *tmp;
	log_e(3, fmt, args);
	tmp___1 = getpid();
	if(tmp___1 == daemon_pid) {
		error((char *)"Aborted");
		exit(err_no);
L1:;
		/* END OF PATH at func_die_e@p14#1 */
	}
	else if(tmp___1 < daemon_pid) {
		exit(err_no);
		goto L1;
	}
	else {
		exit(err_no);
		goto L1;
	}
}

void error_pame(pam_handle_t *pamh___0 , int pamerrno , char *fmt  , ...)
{ __ccured_va_list args ;
unsigned long tmp ;
	xcloselog();
	log_pame(3, pamh___0, pamerrno, fmt, args);
	/* END OF PATH at func_error_pame@p5#1 */
}

void die_pame(pam_handle_t *pamh___0 , int pamerrno , char *fmt  , ...)
{ __ccured_va_list args ;
unsigned long tmp ;
__pid_t tmp___0 ;
	xcloselog();
	log_pame(3, pamh___0, pamerrno, fmt, args);
	pam_end(pamh___0, pamerrno);
	tmp___0 = getpid();
	if(tmp___0 == daemon_pid) {
		error((char *)"Aborted");
		exit(1);
L1:;
		/* END OF PATH at func_die_pame@p11#1 */
	}
	else if(tmp___0 < daemon_pid) {
		exit(1);
		goto L1;
	}
	else {
		exit(1);
		goto L1;
	}
}

void Debug(char *fmt  , ...)
{ __ccured_va_list args ;
unsigned long tmp ;
	log_syslog(7, -1, fmt, args);
	/* END OF PATH at func_Debug@p4#1 */
}

void send_msg_fd_debug(int fd , char *fmt  , ...)
{ char *msg ;
__ccured_va_list args ;
unsigned long tmp ;
	msg = make_msg((char *)((void *)0), fmt, args);
	if(msg == (0)) {
		/* END OF PATH at func_send_msg_fd_debug@p6#1 */
	}
	else if(msg < (0)) {
L1:;
		if(debug_opt > 0) {
			log_syslog_str(7, msg);
L2:;
			log_fd_str(fd, msg);
			free((void *)msg);
			/* END OF PATH at func_send_msg_fd_debug@p12#1 */
		}
		else if(debug_opt < 0) {
			log_syslog_str(7, msg);
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else {
		goto L1;
	}
}

void send_msg_fd(int fd , char *fmt  , ...)
{ char *msg ;
__ccured_va_list args ;
unsigned long tmp ;
	msg = make_msg((char *)((void *)0), fmt, args);
	if(msg == (0)) {
		/* END OF PATH at func_send_msg_fd@p6#1 */
	}
	else if(msg < (0)) {
L1:;
		log_fd_str(fd, msg);
		free((void *)msg);
		/* END OF PATH at func_send_msg_fd@p10#1 */
	}
	else {
		goto L1;
	}
}

int remove_blanks(char *str )
{ char *c ;
int tmp ;
	c = str;
L1:;
L2:;
	if(*c == 0) {
L3:;
L4:;
L5:;
		c = c - 1;
		if(c >= str) {
			tmp = _get__ctype_b((int )*c);
			if((tmp & 8192) == 0) {
L6:;
L7:;
				if(*c == 10) {
					*c = (char )'\000';
L8:;
					return (c - str);
					/* END OF PATH at func_remove_blanks@p23#1 */
				}
				else if(*c < 10) {
L9:;
					c = c + 1;
					*c = (char )'\000';
					goto L8;
				}
				else {
					goto L9;
				}
			}
			else if((tmp & 8192) > 0) {
L10:;
				goto L5;
			}
			else {
				goto L10;
			}
		}
		else {
			/* END OF PATH at func_remove_blanks@p8#3 */
		}
	}
	else if(*c > 0) {
L11:;
		c = c + 1;
		goto L2;
	}
	else {
		goto L11;
	}
}

char *strdup2(char *str )
{ char *ptr ;
size_t tmp ;
char *tmp___0 ;
void *tmp___1 ;
	tmp = strlen(str);
	tmp___1 = malloc(tmp + 1U);
	tmp___0 = (char *)tmp___1;
	ptr = tmp___0;
	if(ptr == 0) {
		die_e((char *)"Could not calloc");
L1:;
		strcpy(ptr, str);
		return (ptr);
		/* END OF PATH at func_strdup2@p12#1 */
	}
	else if(ptr > 0) {
		goto L1;
	}
	else {
		goto L1;
	}
}

int get_word(char **str )
{ char *ptr ;
int tmp ;
int tmp___0 ;
L1:;
L2:;
	if(*(*str) < 32) {
L3:;
		if(*(*str) < 9) {
L4:;
L5:;
			ptr = *str;
L6:;
L7:;
			tmp = _get__ctype_b((int )*ptr);
			if(tmp & 8 > 0) {
L8:;
L9:;
				if(*ptr < 61) {
L10:;
					tmp___0 = _get__ctype_b((int )*ptr);
					if(tmp___0 & 8192 > 0) {
L11:;
L12:;
L13:;
						return (ptr - *str);
						/* END OF PATH at func_get_word@p33#1 */
					}
					else if(tmp___0 & 8192 < 0) {
						goto L11;
					}
					else {
						ptr = ptr + 1;
						goto L7;
					}
				}
				else if(*ptr > 61) {
					goto L10;
				}
				else {
					/* END OF PATH at func_get_word@p12#4 */
				}
			}
			else if(tmp & 8 < 0) {
				goto L8;
			}
			else {
				if(*ptr == 95) {
					goto L9;
				}
				else if(*ptr < 95) {
L14:;
					if(*ptr == 45) {
						goto L9;
					}
					else if(*ptr < 45) {
L15:;
						/* END OF PATH at func_get_word@p12#5 */
					}
					else {
						goto L15;
					}
				}
				else {
					goto L14;
				}
			}
		}
		else if(*(*str) > 9) {
			goto L4;
		}
		else {
L16:;
			*str = *str + 1;
			goto L2;
		}
	}
	else if(*(*str) > 32) {
		goto L3;
	}
	else {
		goto L16;
	}
}

int temp_file(char **name )
{ int fd ;
char name_local[512] ;
int tmp ;
int tmp___0 ;
	name_local[0] = (char )'\000';
	strncpy(name_local, tmp_path, sizeof(name_local) - 1U);
	name_local[sizeof(name_local) - 1U] = (char )'\000';
	strcat(name_local, (char *)"fcr-XXXXXX");
	fd = mkstemp(name_local);
	if(fd == -1) {
		die_e((char *)"Can\'t find a unique temporary filename");
L1:;
		tmp = fchmod(fd, 384U);
		if(tmp < 0) {
			die_e((char *)"Can\'t fchmod temp file");
L2:;
			if(name == (0)) {
				tmp___0 = unlink(name_local);
				if(tmp___0 < 0) {
					die_e((char *)"Can\'t unlink temporary file %s", name_local);
L3:;
					fcntl(fd, 2, 1);
					if(name == (0)) {
L4:;
						return (fd);
						/* END OF PATH at func_temp_file@p22#1 */
					}
					else if(name < (0)) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(tmp___0 > 0) {
					die_e((char *)"Can\'t unlink temporary file %s", name_local);
					goto L3;
				}
				else {
					goto L3;
				}
			}
			else if(name < (0)) {
				fcntl(fd, 2, 1);
				if(name < (0)) {
					*name = strdup2(name_local);
					goto L4;
				}
				else if(name > (0)) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else {
				fcntl(fd, 2, 1);
				if(name > (0)) {
					*name = strdup2(name_local);
					goto L4;
				}
				else if(name < (0)) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
		}
		else if(tmp > 0) {
			die_e((char *)"Can\'t fchmod temp file");
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else if(fd < -1) {
		goto L1;
	}
	else {
		goto L1;
	}
}

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
int tmp___12 ;
	f = (FILE *)((void *)0);
	ptr1 = (char *)((void *)0);
	ptr2 = (char *)((void *)0);
	namesize = (short)0;
	err_on_enoent = (char)0;
	if(fcronconf < (0)) {
L1:;
		err_on_enoent = (char)1;
		init_conf();
		f = fopen(fcronconf, (char *)"r");
		if(f < (0)) {
L2:;
			f->BLAST_FLAG = 1;
			if(f < (0)) {
L3:;
				tmp___0 = fileno(f);
				tmp___1 = fstat__extinline(tmp___0, & st);
				if(tmp___1 < 0) {
L4:;
					if(f->BLAST_FLAG == 1) {
						f->BLAST_FLAG = 0;
L5:;
						fclose(f);
						/* END OF PATH at func_read_conf@p53#1 */
					}
					else if(f->BLAST_FLAG < 1) {
						BLAST_ERROR();
						goto L5;
					}
					else {
						BLAST_ERROR();
						goto L5;
					}
				}
				else if(tmp___1 > 0) {
					goto L4;
				}
				else {
					if(st.st_uid < 0U) {
L6:;
						if(f->BLAST_FLAG == 1) {
							f->BLAST_FLAG = 0;
L7:;
							fclose(f);
							/* END OF PATH at func_read_conf@p62#1 */
						}
						else if(f->BLAST_FLAG < 1) {
							BLAST_ERROR();
							goto L7;
						}
						else {
							BLAST_ERROR();
							goto L7;
						}
					}
					else if(st.st_uid > 0U) {
						goto L6;
					}
					else {
						if(st.st_mode & 16U > 0) {
L8:;
							if(f->BLAST_FLAG == 1) {
								f->BLAST_FLAG = 0;
L9:;
								fclose(f);
								/* END OF PATH at func_read_conf@p71#1 */
							}
							else if(f->BLAST_FLAG < 1) {
								BLAST_ERROR();
								goto L9;
							}
							else {
								BLAST_ERROR();
								goto L9;
							}
						}
						else if(st.st_mode & 16U < 0) {
							goto L8;
						}
						else {
							if(st.st_mode & 2U > 0) {
								error((char *)"Conf file (%s) must be owned by root and (no more than) 644 : ignored", fcronconf);
L10:;
								if(f->BLAST_FLAG == 1) {
									f->BLAST_FLAG = 0;
L11:;
									fclose(f);
									/* END OF PATH at func_read_conf@p81#1 */
								}
								else if(f->BLAST_FLAG < 1) {
									BLAST_ERROR();
									goto L11;
								}
								else {
									BLAST_ERROR();
									goto L11;
								}
							}
							else if(st.st_mode & 2U < 0) {
								error((char *)"Conf file (%s) must be owned by root and (no more than) 644 : ignored", fcronconf);
								goto L10;
							}
							else {
L12:;
L13:;
								if(f->BLAST_FLAG < 1) {
									BLAST_ERROR();
L14:;
									ptr1 = fgets(buf, (int )sizeof(buf), f);
									if(ptr1 == (0)) {
L15:;
										if(debug_opt > 0) {
											if(debug_opt > 0) {
												Debug((char *)"  fcronconf=%s", fcronconf);
L16:;
												if(f->BLAST_FLAG == 1) {
													f->BLAST_FLAG = 0;
L17:;
													fclose(f);
													/* END OF PATH at func_read_conf@p169#1 */
												}
												else if(f->BLAST_FLAG < 1) {
													BLAST_ERROR();
													goto L17;
												}
												else {
													BLAST_ERROR();
													goto L17;
												}
											}
											else if(debug_opt < 0) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(debug_opt < 0) {
											if(debug_opt < 0) {
												Debug((char *)"  fcronconf=%s", fcronconf);
												goto L16;
											}
											else if(debug_opt > 0) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else {
											goto L16;
										}
									}
									else if(ptr1 < (0)) {
L18:;
L19:;
										if(*ptr1 < 32) {
L20:;
											if(*ptr1 < 9) {
L21:;
L22:;
												if(*ptr1 == 35) {
													goto L13;
												}
												else if(*ptr1 < 35) {
L23:;
													if(*ptr1 == 10) {
														goto L13;
													}
													else if(*ptr1 < 10) {
L24:;
														if(*ptr1 == 0) {
															goto L13;
														}
														else if(*ptr1 < 0) {
															remove_blanks(ptr1);
															tmp___12 = get_word(& ptr1);
L25:;
															namesize = (short )tmp___12;
															if(namesize == 0) {
																error((char *)"Zero-length var name at line %s : line ignored", buf);
L26:;
																ptr2 = ptr1 + (int )namesize;
L27:;
L28:;
																tmp___2 = _get__ctype_b((int )*ptr2);
																if((tmp___2 & 8192) == 0) {
L29:;
																	if(*ptr2 == 61) {
																		ptr2 = ptr2 + 1;
L30:;
L31:;
																		tmp___3 = _get__ctype_b((int )*ptr2);
																		if((tmp___3 & 8192) == 0) {
L32:;
																			tmp___11 = strncmp(ptr1, (char *)"fcrontabs", (unsigned int )namesize);
																			if(tmp___11 == 0) {
																				fcrontabs = strdup2(ptr2);
																				goto L13;
																			}
																			else if(tmp___11 < 0) {
L33:;
																				tmp___10 = strncmp(ptr1, (char *)"pidfile", (unsigned int )namesize);
																				if(tmp___10 == 0) {
																					pidfile = strdup2(ptr2);
																					/* END OF PATH at func_read_conf@p159#2 */
																				}
																				else if(tmp___10 < 0) {
L34:;
																					tmp___9 = strncmp(ptr1, (char *)"fifofile", (unsigned int )namesize);
																					if(tmp___9 == 0) {
																						fifofile = strdup2(ptr2);
																						/* END OF PATH at func_read_conf@p159#3 */
																					}
																					else if(tmp___9 < 0) {
L35:;
																						tmp___8 = strncmp(ptr1, (char *)"fcronallow", (unsigned int )namesize);
																						if(tmp___8 == 0) {
																							fcronallow = strdup2(ptr2);
																							/* END OF PATH at func_read_conf@p159#4 */
																						}
																						else if(tmp___8 < 0) {
L36:;
																							tmp___7 = strncmp(ptr1, (char *)"fcrondeny", (unsigned int )namesize);
																							if(tmp___7 == 0) {
																								fcrondeny = strdup2(ptr2);
																								/* END OF PATH at func_read_conf@p159#5 */
																							}
																							else if(tmp___7 < 0) {
L37:;
																								tmp___6 = strncmp(ptr1, (char *)"shell", (unsigned int )namesize);
																								if(tmp___6 == 0) {
																									shell = strdup2(ptr2);
																									/* END OF PATH at func_read_conf@p159#6 */
																								}
																								else if(tmp___6 < 0) {
L38:;
																									tmp___5 = strncmp(ptr1, (char *)"sendmail", (unsigned int )namesize);
																									if(tmp___5 == 0) {
																										sendmail = strdup2(ptr2);
																										/* END OF PATH at func_read_conf@p159#7 */
																									}
																									else if(tmp___5 < 0) {
L39:;
																										tmp___4 = strncmp(ptr1, (char *)"editor", (unsigned int )namesize);
																										if(tmp___4 == 0) {
																											editor = strdup2(ptr2);
																											/* END OF PATH at func_read_conf@p159#8 */
																										}
																										else if(tmp___4 < 0) {
																											error((char *)"Unknown var name at line %s : line ignored", buf);
																											/* END OF PATH at func_read_conf@p159#9 */
																										}
																										else {
																											error((char *)"Unknown var name at line %s : line ignored", buf);
																											/* END OF PATH at func_read_conf@p159#10 */
																										}
																									}
																									else {
																										goto L39;
																									}
																								}
																								else {
																									goto L38;
																								}
																							}
																							else {
																								goto L37;
																							}
																						}
																						else {
																							goto L36;
																						}
																					}
																					else {
																						goto L35;
																					}
																				}
																				else {
																					goto L34;
																				}
																			}
																			else {
																				goto L33;
																			}
																		}
																		else if((tmp___3 & 8192) > 0) {
L40:;
																			ptr2 = ptr2 + 1;
																			goto L31;
																		}
																		else {
																			goto L40;
																		}
																	}
																	else if(*ptr2 < 61) {
																		goto L31;
																	}
																	else {
																		goto L31;
																	}
																}
																else if((tmp___2 & 8192) > 0) {
L41:;
																	ptr2 = ptr2 + 1;
																	goto L28;
																}
																else {
																	goto L41;
																}
															}
															else if(namesize < 0) {
																goto L26;
															}
															else {
																goto L26;
															}
														}
														else {
															remove_blanks(ptr1);
															tmp___12 = get_word(& ptr1);
															goto L25;
														}
													}
													else {
														goto L24;
													}
												}
												else {
													goto L23;
												}
											}
											else if(*ptr1 > 9) {
												goto L21;
											}
											else {
L42:;
												ptr1 = ptr1 + 1;
												goto L19;
											}
										}
										else if(*ptr1 > 32) {
											goto L20;
										}
										else {
											goto L42;
										}
									}
									else {
										goto L19;
									}
								}
								else if(f->BLAST_FLAG > 1) {
									BLAST_ERROR();
									goto L14;
								}
								else {
									goto L14;
								}
							}
						}
					}
				}
			}
			else if(f == (0)) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(f > (0)) {
L43:;
			f->BLAST_FLAG = 1;
			if(f > (0)) {
				goto L3;
			}
			else if(f == (0)) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			if(f == (0)) {
				tmp = __errno_location();
				if(*tmp == 2) {
					if(err_on_enoent > 0) {
						die_e((char *)"Could not read %s", fcronconf);
						goto L3;
					}
					else if(err_on_enoent < 0) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(*tmp < 2) {
					error_e((char *)"Could not read %s : config file ignored", fcronconf);
L44:;
					/* END OF PATH at func_read_conf@p43#1 */
				}
				else {
					error_e((char *)"Could not read %s : config file ignored", fcronconf);
					goto L44;
				}
			}
			else if(f < (0)) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
	}
	else if(fcronconf > (0)) {
		goto L1;
	}
	else {
		init_conf();
		f = fopen(fcronconf, (char *)"r");
		if(f < (0)) {
			goto L2;
		}
		else if(f > (0)) {
			goto L43;
		}
		else {
			if(f == (0)) {
				tmp = __errno_location();
				if(*tmp == 2) {
					if(err_on_enoent == 0) {
						/* END OF PATH at func_read_conf@p39#1 */
					}
					else if(err_on_enoent > 0) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(*tmp < 2) {
					error_e((char *)"Could not read %s : config file ignored", fcronconf);
					goto L44;
				}
				else {
					error_e((char *)"Could not read %s : config file ignored", fcronconf);
					goto L44;
				}
			}
			else if(f < (0)) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
	}
}

void free_conf(void)
{
	free((void *)fcronconf);
	free((void *)fcrontabs);
	free((void *)pidfile);
	free((void *)fifofile);
	free((void *)fcronallow);
	free((void *)fcrondeny);
	free((void *)shell);
	free((void *)sendmail);
	free((void *)editor);
	/* END OF PATH at func_free_conf@p10#1 */
}

char *crypt(char *key , char *salt )
{ char *x ;
	return (x);
	/* END OF PATH at func_crypt@p2#1 */
}

void xexit(int exit_value )
{ cf_t *f ;
	f = (cf_t *)((void *)0);
	now = time((time_t *)((void *)0));
	save_file((struct cf_t *)((void *)0));
	close_socket();
	f = file_base;
L1:;
L2:;
	if(f == (0)) {
L3:;
		delete_file(f->cf_user);
		f = file_base;
		remove(pidfile);
		free_conf();
		explain((char *)"Exiting with code %d", exit_value);
		exit(exit_value);
		/* END OF PATH at func_xexit@p22#1 */
	}
	else if(f < (0)) {
L4:;
		if(f->cf_running > 0) {
			if(debug_opt > 0) {
				Debug((char *)"waiting jobs for %s ...", f->cf_user);
				wait_all(& f->cf_running);
				save_file(f);
				goto L2;
			}
			else if(debug_opt < 0) {
				Debug((char *)"waiting jobs for %s ...", f->cf_user);
				wait_all(& f->cf_running);
				save_file(f);
				/* END OF PATH at func_xexit@p13#2 */
			}
			else {
				wait_all(& f->cf_running);
				save_file(f);
				/* END OF PATH at func_xexit@p13#3 */
			}
		}
		else {
			/* END OF PATH at func_xexit@p13#4 */
		}
	}
	else {
		goto L4;
	}
}

void test_jobs(void)
{ struct job_t *j ;
	if(debug_opt > 0) {
		Debug((char *)"Looking for jobs to execute ...");
L1:;
L2:;
		j = queue_base;
		if(j > 0) {
L3:;
			if((j->j_line)->cl_nextexe > now) {
L4:;
L5:;
L6:;
				/* END OF PATH at func_test_jobs@p29#1 */
			}
			else {
				if((j->j_line)->cl_remain > 0) {
					(j->j_line)->cl_remain = (unsigned short )((int )(j->j_line)->cl_remain - 1);
					if((j->j_line)->cl_remain > 0) {
						set_next_exe(j->j_line, (char)0, -1);
						if(debug_opt > 0) {
							Debug((char *)"    cl_remain: %d", (j->j_line)->cl_remain);
							goto L2;
						}
						else if(debug_opt < 0) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else {
L7:;
						(j->j_line)->cl_remain = (j->j_line)->cl_runfreq;
						if((j->j_line)->cl_option[0] & 2 > 0) {
							add_lavg_job(j->j_line, -1);
L8:;
L9:;
							set_next_exe(j->j_line, (char)0, -1);
							goto L2;
						}
						else if((j->j_line)->cl_option[0] & 2 < 0) {
							add_lavg_job(j->j_line, -1);
							goto L8;
						}
						else {
							if((j->j_line)->cl_option[0] & 32 > 0) {
								add_serial_job(j->j_line, -1);
L10:;
								goto L9;
							}
							else if((j->j_line)->cl_option[0] & 32 < 0) {
								add_serial_job(j->j_line, -1);
								goto L10;
							}
							else {
								run_normal_job(j->j_line, -1);
								goto L9;
							}
						}
					}
				}
				else {
					goto L7;
				}
			}
		}
		else if(j < 0) {
			goto L3;
		}
		else {
L11:;
			/* END OF PATH at func_test_jobs@p4#3 */
		}
	}
	else if(debug_opt < 0) {
		Debug((char *)"Looking for jobs to execute ...");
L12:;
		j = queue_base;
		if(j > 0) {
L13:;
			if((j->j_line)->cl_nextexe > now) {
				goto L4;
			}
			else {
				if((j->j_line)->cl_remain > 0) {
					(j->j_line)->cl_remain = (unsigned short )((int )(j->j_line)->cl_remain - 1);
					if((j->j_line)->cl_remain > 0) {
						set_next_exe(j->j_line, (char)0, -1);
						if(debug_opt < 0) {
							Debug((char *)"    cl_remain: %d", (j->j_line)->cl_remain);
							/* END OF PATH at func_test_jobs@p17#3 */
						}
						else if(debug_opt > 0) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else {
						goto L7;
					}
				}
				else {
					goto L7;
				}
			}
		}
		else if(j < 0) {
			goto L13;
		}
		else {
			goto L11;
		}
	}
	else {
L14:;
		j = queue_base;
		if(j > 0) {
L15:;
			if((j->j_line)->cl_nextexe > now) {
				goto L4;
			}
			else {
				if((j->j_line)->cl_remain > 0) {
					(j->j_line)->cl_remain = (unsigned short )((int )(j->j_line)->cl_remain - 1);
					if((j->j_line)->cl_remain > 0) {
						set_next_exe(j->j_line, (char)0, -1);
						if(debug_opt == 0) {
							/* END OF PATH at func_test_jobs@p17#5 */
						}
						else if(debug_opt > 0) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else {
						goto L7;
					}
				}
				else {
					goto L7;
				}
			}
		}
		else if(j < 0) {
			goto L15;
		}
		else {
			goto L11;
		}
	}
}

void wait_chld(void)
{ short i ;
int pid ;
cl_t *line ;
	i = (short)0;
	line = (cl_t *)((void *)0);
L1:;
L2:;
	pid = wait3((union wait *)((void *)0), 1, (struct rusage *)((void *)0));
	if(pid <= 0) {
L3:;
		/* END OF PATH at func_wait_chld@p50#1 */
	}
	else {
		i = (short)0;
L4:;
L5:;
		if(i >= exe_num) {
L6:;
L7:;
			goto L2;
		}
		else {
			if(pid == (exe_array + i)->e_ctrl_pid) {
				if((exe_array + i)->e_line == (0)) {
					if(debug_opt > 0) {
						Debug((char *)"job finished: pid %d", pid);
L8:;
L9:;
						exe_num = (short )((int )exe_num - 1);
						if(i < exe_num) {
							*(exe_array + (int )i) = *(exe_array + (int )exe_num);
							(exe_array + (int )exe_num)->e_line = (struct cl_t *)((void *)0);
L10:;
							goto L6;
						}
						else {
							(exe_array + (int )i)->e_line = (struct cl_t *)((void *)0);
							goto L10;
						}
					}
					else if(debug_opt < 0) {
						Debug((char *)"job finished: pid %d", pid);
						goto L8;
					}
					else {
						goto L8;
					}
				}
				else if((exe_array + i)->e_line < (0)) {
L11:;
					line = (exe_array + (int )i)->e_line;
					line->cl_numexe = (unsigned char )((int )line->cl_numexe - 1);
					(line->cl_file)->cf_running = (line->cl_file)->cf_running - 1;
					if(line->cl_option[0] & 64 > 0) {
L12:;
						line->cl_option[0] = (unsigned char )((int )line->cl_option[0] & -65);
						serial_running = (short )((int )serial_running - 1);
						if(serial_running < serial_max_running) {
							run_serial_job();
L13:;
							goto L9;
						}
						else {
							goto L13;
						}
					}
					else if(line->cl_option[0] & 64 < 0) {
						goto L12;
					}
					else {
						if(line->cl_option[0] & 32 > 0) {
L14:;
							if(line->cl_option[0] & 2 > 0) {
L15:;
L16:;
								if(line->cl_option[0] & 2 > 0) {
L17:;
									if(line->cl_option[0] & 32 > 0) {
L18:;
										lavg_serial_running = (short )((int )lavg_serial_running - 1);
										goto L9;
									}
									else if(line->cl_option[0] & 32 < 0) {
										goto L18;
									}
									else {
										goto L9;
									}
								}
								else if(line->cl_option[0] & 2 < 0) {
									goto L17;
								}
								else {
									goto L9;
								}
							}
							else if(line->cl_option[0] & 2 < 0) {
								goto L15;
							}
							else {
								serial_running = (short )((int )serial_running - 1);
								if(serial_running < serial_max_running) {
									run_serial_job();
L19:;
									goto L9;
								}
								else {
									goto L19;
								}
							}
						}
						else if(line->cl_option[0] & 32 < 0) {
							goto L14;
						}
						else {
							goto L16;
						}
					}
				}
				else {
					goto L11;
				}
			}
			else if(pid < (exe_array + i)->e_ctrl_pid) {
L20:;
				i = (short )((int )i + 1);
				goto L5;
			}
			else {
				goto L20;
			}
		}
	}
}

void wait_all(int *counter )
{ short i ;
int pid ;
	i = (short)0;
	if(debug_opt > 0) {
		Debug((char *)"Waiting for all jobs");
L1:;
L2:;
		if(*counter > 0) {
			pid = wait3((union wait *)((void *)0), 0, (struct rusage *)((void *)0));
			if(pid <= 0) {
L3:;
L4:;
L5:;
				/* END OF PATH at func_wait_all@p38#1 */
			}
			else {
				i = (short)0;
L6:;
L7:;
				if(i >= exe_num) {
L8:;
L9:;
					goto L2;
				}
				else {
					if(pid == (exe_array + i)->e_ctrl_pid) {
						if((exe_array + i)->e_line == (0)) {
							if(debug_opt > 0) {
								Debug((char *)"job finished: pid %d", pid);
L10:;
L11:;
								exe_num = (short )((int )exe_num - 1);
								if(i < exe_num) {
									*(exe_array + (int )i) = *(exe_array + (int )exe_num);
									(exe_array + (int )exe_num)->e_line = (struct cl_t *)((void *)0);
L12:;
									goto L8;
								}
								else {
									(exe_array + (int )i)->e_line = (struct cl_t *)((void *)0);
									goto L12;
								}
							}
							else if(debug_opt < 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if((exe_array + i)->e_line < (0)) {
L13:;
							if(debug_opt > 0) {
								Debug((char *)"job finished: %s", ((exe_array + (int )i)->e_line)->cl_shell);
L14:;
								((exe_array + (int )i)->e_line)->cl_numexe = (unsigned char )((int )((exe_array + (int )i)->e_line)->cl_numexe - 1);
								(((exe_array + (int )i)->e_line)->cl_file)->cf_running = (((exe_array + (int )i)->e_line)->cl_file)->cf_running - 1;
								if(((exe_array + i)->e_line)->cl_option[0] & 64 > 0) {
L15:;
									((exe_array + (int )i)->e_line)->cl_option[0] = (unsigned char )((int )((exe_array + (int )i)->e_line)->cl_option[0] & -65);
									goto L11;
								}
								else if(((exe_array + i)->e_line)->cl_option[0] & 64 < 0) {
									goto L15;
								}
								else {
									goto L11;
								}
							}
							else if(debug_opt < 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							goto L13;
						}
					}
					else if(pid < (exe_array + i)->e_ctrl_pid) {
L16:;
						i = (short )((int )i + 1);
						goto L7;
					}
					else {
						goto L16;
					}
				}
			}
		}
		else {
L17:;
			/* END OF PATH at func_wait_all@p6#3 */
		}
	}
	else if(debug_opt < 0) {
		Debug((char *)"Waiting for all jobs");
L18:;
		if(*counter > 0) {
			pid = wait3((union wait *)((void *)0), 0, (struct rusage *)((void *)0));
			if(pid <= 0) {
				goto L3;
			}
			else {
				i = (short)0;
L19:;
				if(i >= exe_num) {
					goto L8;
				}
				else {
					if(pid == (exe_array + i)->e_ctrl_pid) {
						if((exe_array + i)->e_line == (0)) {
							if(debug_opt < 0) {
								Debug((char *)"job finished: pid %d", pid);
								goto L10;
							}
							else if(debug_opt > 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if((exe_array + i)->e_line < (0)) {
L20:;
							if(debug_opt < 0) {
								Debug((char *)"job finished: %s", ((exe_array + (int )i)->e_line)->cl_shell);
								goto L14;
							}
							else if(debug_opt > 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							goto L20;
						}
					}
					else if(pid < (exe_array + i)->e_ctrl_pid) {
						goto L16;
					}
					else {
						goto L16;
					}
				}
			}
		}
		else {
			goto L17;
		}
	}
	else {
L21:;
		if(*counter > 0) {
			pid = wait3((union wait *)((void *)0), 0, (struct rusage *)((void *)0));
			if(pid <= 0) {
				goto L3;
			}
			else {
				i = (short)0;
L22:;
				if(i >= exe_num) {
					goto L8;
				}
				else {
					if(pid == (exe_array + i)->e_ctrl_pid) {
						if((exe_array + i)->e_line == (0)) {
							if(debug_opt == 0) {
								goto L10;
							}
							else if(debug_opt > 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if((exe_array + i)->e_line < (0)) {
L23:;
							if(debug_opt == 0) {
								goto L14;
							}
							else if(debug_opt > 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else {
							goto L23;
						}
					}
					else if(pid < (exe_array + i)->e_ctrl_pid) {
						goto L16;
					}
					else {
						goto L16;
					}
				}
			}
		}
		else {
			goto L17;
		}
	}
}

time_t time_to_sleep(time_t lim )
{ time_t tts ;
time_t ti ;
time_t tmp ;
	tts = lim;
	tmp = time((time_t *)((void *)0));
	ti = tmp;
	if(queue_base < (0)) {
L1:;
		if((queue_base->j_line)->cl_nextexe < lim) {
			tts = (queue_base->j_line)->cl_nextexe;
L2:;
			tts = tts - ti;
			if(tts < 0L) {
				tts = 0L;
L3:;
				return (tts);
				/* END OF PATH at func_time_to_sleep@p13#1 */
			}
			else {
				goto L3;
			}
		}
		else {
			goto L2;
		}
	}
	else if(queue_base > (0)) {
		goto L1;
	}
	else {
		goto L2;
	}
}

time_t check_lavg(time_t lim )
{ time_t tts ;
int i ;
double l_avg[3] ;
char *tmp ;
time_t tmp___0 ;
	tts = 0L;
	i = 0;
	l_avg[0] = (double )0;
	l_avg[1] = (double )0;
	l_avg[2] = (double )0;
L1:;
L2:;
	if(i >= lavg_num) {
L3:;
		tts = time_to_sleep(lim);
		if(lavg_num == 0) {
			return (tts);
			/* END OF PATH at func_check_lavg@p47#1 */
		}
		else if(lavg_num < 0) {
L4:;
			i = getloadavg(l_avg, 3);
			if(i < 3) {
L5:;
				if(debug_opt > 0) {
					Debug((char *)"got only %d lavg values", i);
					if(debug_opt > 0) {
						Debug((char *)"get_lavg: %lf, %lf, %lf", l_avg[0], l_avg[1], l_avg[2]);
L6:;
						l_avg[0] = l_avg[0] * (double )10;
						l_avg[1] = l_avg[1] * (double )10;
						l_avg[2] = l_avg[2] * (double )10;
						i = 0;
L7:;
L8:;
						if(i >= lavg_num) {
L9:;
							if(lavg_num == 0) {
								return (tts);
								/* END OF PATH at func_check_lavg@p111#1 */
							}
							else if(lavg_num < 0) {
L10:;
								if(30L < tts) {
									tmp___0 = 30L;
L11:;
									return (tmp___0);
									/* END OF PATH at func_check_lavg@p118#1 */
								}
								else {
									tmp___0 = tts;
									goto L11;
								}
							}
							else {
								goto L10;
							}
						}
						else {
							if(lavg_serial_running >= serial_max_running) {
								if(((lavg_array + i)->l_line)->cl_option[0] & 32 > 0) {
L12:;
									i = i + 1;
									goto L8;
								}
								else if(((lavg_array + i)->l_line)->cl_option[0] & 32 < 0) {
									goto L12;
								}
								else {
L13:;
									if(((lavg_array + i)->l_line)->cl_option[0] & 4 > 0) {
L14:;
										if(((lavg_array + i)->l_line)->cl_option[0] & 4 > 0) {
L15:;
											if(l_avg[0] < ((lavg_array + i)->l_line)->cl_lavg[0]) {
L16:;
												if(debug_opt > 0) {
L17:;
													if(((lavg_array + i)->l_line)->cl_option[0] & 4 > 0) {
L18:;
														tmp = (char *)"or";
														Debug((char *)"lavg %s %s %.0f:%d %.0f:%d %.0f:%d", ((lavg_array + i)->l_line)->cl_shell, tmp, l_avg[0], ((lavg_array + i)->l_line)->cl_lavg[0], l_avg[1], ((lavg_array + i)->l_line)->cl_lavg[1], l_avg[2], ((lavg_array + i)->l_line)->cl_lavg[2]);
														run_lavg_job(i);
L19:;
L20:;
L21:;
														goto L8;
													}
													else if(((lavg_array + i)->l_line)->cl_option[0] & 4 < 0) {
														goto L18;
													}
													else {
														tmp = (char *)"and";
														Debug((char *)"lavg %s %s %.0f:%d %.0f:%d %.0f:%d", ((lavg_array + i)->l_line)->cl_shell, tmp, l_avg[0], ((lavg_array + i)->l_line)->cl_lavg[0], l_avg[1], ((lavg_array + i)->l_line)->cl_lavg[1], l_avg[2], ((lavg_array + i)->l_line)->cl_lavg[2]);
														run_lavg_job(i);
														goto L19;
													}
												}
												else if(debug_opt < 0) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else {
												if(l_avg[1] < ((lavg_array + i)->l_line)->cl_lavg[1]) {
													goto L16;
												}
												else {
													if(l_avg[2] < ((lavg_array + i)->l_line)->cl_lavg[2]) {
														goto L16;
													}
													else {
L22:;
														i = i + 1;
														goto L20;
													}
												}
											}
										}
										else if(((lavg_array + i)->l_line)->cl_option[0] & 4 < 0) {
											goto L15;
										}
										else {
L23:;
											i = i + 1;
											goto L21;
										}
									}
									else if(((lavg_array + i)->l_line)->cl_option[0] & 4 < 0) {
										goto L14;
									}
									else {
										if(l_avg[0] < ((lavg_array + i)->l_line)->cl_lavg[0]) {
L24:;
											if(l_avg[1] < ((lavg_array + i)->l_line)->cl_lavg[1]) {
L25:;
												if(l_avg[2] < ((lavg_array + i)->l_line)->cl_lavg[2]) {
													goto L16;
												}
												else {
													if(((lavg_array + i)->l_line)->cl_lavg[2] == 0) {
														goto L16;
													}
													else if(((lavg_array + i)->l_line)->cl_lavg[2] < 0) {
L26:;
														goto L14;
													}
													else {
														goto L26;
													}
												}
											}
											else {
												if(((lavg_array + i)->l_line)->cl_lavg[1] == 0) {
													goto L25;
												}
												else if(((lavg_array + i)->l_line)->cl_lavg[1] < 0) {
L27:;
													goto L14;
												}
												else {
													goto L27;
												}
											}
										}
										else {
											if(((lavg_array + i)->l_line)->cl_lavg[0] == 0) {
												goto L24;
											}
											else if(((lavg_array + i)->l_line)->cl_lavg[0] < 0) {
L28:;
												goto L14;
											}
											else {
												goto L28;
											}
										}
									}
								}
							}
							else {
								goto L13;
							}
						}
					}
					else if(debug_opt < 0) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else if(debug_opt < 0) {
					Debug((char *)"got only %d lavg values", i);
					if(debug_opt < 0) {
						Debug((char *)"get_lavg: %lf, %lf, %lf", l_avg[0], l_avg[1], l_avg[2]);
L29:;
						l_avg[0] = l_avg[0] * (double )10;
						l_avg[1] = l_avg[1] * (double )10;
						l_avg[2] = l_avg[2] * (double )10;
						i = 0;
L30:;
						if(i >= lavg_num) {
L31:;
							if(lavg_num == 0) {
								return (tts);
								/* END OF PATH at func_check_lavg@p111#1 */
							}
							else if(lavg_num < 0) {
L32:;
								if(30L < tts) {
									tmp___0 = 30L;
L33:;
									return (tmp___0);
									/* END OF PATH at func_check_lavg@p118#1 */
								}
								else {
									tmp___0 = tts;
									goto L33;
								}
							}
							else {
								goto L32;
							}
						}
						else {
							if(lavg_serial_running >= serial_max_running) {
								if(((lavg_array + i)->l_line)->cl_option[0] & 32 > 0) {
									goto L12;
								}
								else if(((lavg_array + i)->l_line)->cl_option[0] & 32 < 0) {
									goto L12;
								}
								else {
L34:;
									if(((lavg_array + i)->l_line)->cl_option[0] & 4 > 0) {
L35:;
										if(((lavg_array + i)->l_line)->cl_option[0] & 4 > 0) {
L36:;
											if(l_avg[0] < ((lavg_array + i)->l_line)->cl_lavg[0]) {
L37:;
												if(debug_opt < 0) {
													goto L17;
												}
												else if(debug_opt > 0) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else {
												if(l_avg[1] < ((lavg_array + i)->l_line)->cl_lavg[1]) {
													goto L37;
												}
												else {
													if(l_avg[2] < ((lavg_array + i)->l_line)->cl_lavg[2]) {
														goto L37;
													}
													else {
														goto L22;
													}
												}
											}
										}
										else if(((lavg_array + i)->l_line)->cl_option[0] & 4 < 0) {
											goto L36;
										}
										else {
											goto L23;
										}
									}
									else if(((lavg_array + i)->l_line)->cl_option[0] & 4 < 0) {
										goto L35;
									}
									else {
										if(l_avg[0] < ((lavg_array + i)->l_line)->cl_lavg[0]) {
L38:;
											if(l_avg[1] < ((lavg_array + i)->l_line)->cl_lavg[1]) {
L39:;
												if(l_avg[2] < ((lavg_array + i)->l_line)->cl_lavg[2]) {
													goto L37;
												}
												else {
													if(((lavg_array + i)->l_line)->cl_lavg[2] == 0) {
														goto L37;
													}
													else if(((lavg_array + i)->l_line)->cl_lavg[2] < 0) {
L40:;
														goto L35;
													}
													else {
														goto L40;
													}
												}
											}
											else {
												if(((lavg_array + i)->l_line)->cl_lavg[1] == 0) {
													goto L39;
												}
												else if(((lavg_array + i)->l_line)->cl_lavg[1] < 0) {
L41:;
													goto L35;
												}
												else {
													goto L41;
												}
											}
										}
										else {
											if(((lavg_array + i)->l_line)->cl_lavg[0] == 0) {
												goto L38;
											}
											else if(((lavg_array + i)->l_line)->cl_lavg[0] < 0) {
L42:;
												goto L35;
											}
											else {
												goto L42;
											}
										}
									}
								}
							}
							else {
								goto L34;
							}
						}
					}
					else if(debug_opt > 0) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else {
					if(debug_opt == 0) {
L43:;
						l_avg[0] = l_avg[0] * (double )10;
						l_avg[1] = l_avg[1] * (double )10;
						l_avg[2] = l_avg[2] * (double )10;
						i = 0;
L44:;
						if(i >= lavg_num) {
							goto L31;
						}
						else {
							if(lavg_serial_running >= serial_max_running) {
								if(((lavg_array + i)->l_line)->cl_option[0] & 32 > 0) {
									goto L12;
								}
								else if(((lavg_array + i)->l_line)->cl_option[0] & 32 < 0) {
									goto L12;
								}
								else {
L45:;
									if(((lavg_array + i)->l_line)->cl_option[0] & 4 > 0) {
L46:;
										if(((lavg_array + i)->l_line)->cl_option[0] & 4 > 0) {
L47:;
											if(l_avg[0] < ((lavg_array + i)->l_line)->cl_lavg[0]) {
L48:;
												if(debug_opt == 0) {
													run_lavg_job(i);
													goto L19;
												}
												else if(debug_opt > 0) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else {
												if(l_avg[1] < ((lavg_array + i)->l_line)->cl_lavg[1]) {
													goto L48;
												}
												else {
													if(l_avg[2] < ((lavg_array + i)->l_line)->cl_lavg[2]) {
														goto L48;
													}
													else {
														goto L22;
													}
												}
											}
										}
										else if(((lavg_array + i)->l_line)->cl_option[0] & 4 < 0) {
											goto L47;
										}
										else {
											goto L23;
										}
									}
									else if(((lavg_array + i)->l_line)->cl_option[0] & 4 < 0) {
										goto L46;
									}
									else {
										if(l_avg[0] < ((lavg_array + i)->l_line)->cl_lavg[0]) {
L49:;
											if(l_avg[1] < ((lavg_array + i)->l_line)->cl_lavg[1]) {
L50:;
												if(l_avg[2] < ((lavg_array + i)->l_line)->cl_lavg[2]) {
													goto L48;
												}
												else {
													if(((lavg_array + i)->l_line)->cl_lavg[2] == 0) {
														goto L48;
													}
													else if(((lavg_array + i)->l_line)->cl_lavg[2] < 0) {
L51:;
														goto L46;
													}
													else {
														goto L51;
													}
												}
											}
											else {
												if(((lavg_array + i)->l_line)->cl_lavg[1] == 0) {
													goto L50;
												}
												else if(((lavg_array + i)->l_line)->cl_lavg[1] < 0) {
L52:;
													goto L46;
												}
												else {
													goto L52;
												}
											}
										}
										else {
											if(((lavg_array + i)->l_line)->cl_lavg[0] == 0) {
												goto L49;
											}
											else if(((lavg_array + i)->l_line)->cl_lavg[0] < 0) {
L53:;
												goto L46;
											}
											else {
												goto L53;
											}
										}
									}
								}
							}
							else {
								goto L45;
							}
						}
					}
					else if(debug_opt > 0) {
						/* FALSE PATH */ 
					}
					else {
						/* FALSE PATH */ 
					}
				}
			}
			else if(i > 3) {
				goto L5;
			}
			else {
				if(debug_opt > 0) {
					Debug((char *)"get_lavg: %lf, %lf, %lf", l_avg[0], l_avg[1], l_avg[2]);
					goto L6;
				}
				else if(debug_opt < 0) {
					Debug((char *)"get_lavg: %lf, %lf, %lf", l_avg[0], l_avg[1], l_avg[2]);
					goto L29;
				}
				else {
					goto L43;
				}
			}
		}
		else {
			goto L4;
		}
	}
	else {
		if(((lavg_array + i)->l_line)->cl_until > 0L) {
L54:;
			if((lavg_array + i)->l_until < now) {
				if(((lavg_array + i)->l_line)->cl_option[1] & 2 > 0) {
L55:;
					if(debug_opt > 0) {
						Debug((char *)"until %s %d", ((lavg_array + i)->l_line)->cl_shell, (lavg_array + i)->l_until);
						run_lavg_job(i);
L56:;
L57:;
L58:;
						goto L2;
					}
					else if(debug_opt < 0) {
						Debug((char *)"until %s %d", ((lavg_array + i)->l_line)->cl_shell, (lavg_array + i)->l_until);
						run_lavg_job(i);
						goto L56;
					}
					else {
						run_lavg_job(i);
						goto L56;
					}
				}
				else if(((lavg_array + i)->l_line)->cl_option[1] & 2 < 0) {
					goto L55;
				}
				else {
					if((((lavg_array + i)->l_line)->cl_option[2] & 64) == 0) {
						explain((char *)"Interval of execution exceeded : %s (not run)", ((lavg_array + i)->l_line)->cl_shell);
L59:;
						if(((lavg_array + i)->l_line)->cl_option[0] & 1 > 0) {
L60:;
							set_next_exe((lavg_array + i)->l_line, (char)2, -1);
L61:;
							((lavg_array + i)->l_line)->cl_numexe = (unsigned char )((int )((lavg_array + i)->l_line)->cl_numexe - 1);
							lavg_num = (short )((int )lavg_num - 1);
							if(i < lavg_num) {
								*(lavg_array + i) = *(lavg_array + (int )lavg_num);
								(lavg_array + (int )lavg_num)->l_line = (struct cl_t *)((void *)0);
								goto L57;
							}
							else {
								(lavg_array + i)->l_line = (struct cl_t *)((void *)0);
								goto L57;
							}
						}
						else if(((lavg_array + i)->l_line)->cl_option[0] & 1 < 0) {
							goto L60;
						}
						else {
							if(((lavg_array + i)->l_line)->cl_option[2] & 32 > 0) {
								set_next_exe_notrun((lavg_array + i)->l_line, (char)1);
L62:;
								goto L61;
							}
							else if(((lavg_array + i)->l_line)->cl_option[2] & 32 < 0) {
								set_next_exe_notrun((lavg_array + i)->l_line, (char)1);
								goto L62;
							}
							else {
								set_next_exe((lavg_array + i)->l_line, (char)2, -1);
								goto L61;
							}
						}
					}
					else if((((lavg_array + i)->l_line)->cl_option[2] & 64) > 0) {
						goto L59;
					}
					else {
						goto L59;
					}
				}
			}
			else {
				i = i + 1;
				goto L58;
			}
		}
		else {
			if(((lavg_array + i)->l_line)->cl_runfreq == 1) {
				goto L54;
			}
			else if(((lavg_array + i)->l_line)->cl_runfreq < 1) {
L63:;
				i = i + 1;
				/* END OF PATH at func_check_lavg@p43#2 */
			}
			else {
				goto L63;
			}
		}
	}
}

void set_next_exe_notrun(struct cl_t *line , char context )
{ time_t previous_period ;
time_t next_period ;
struct tm *ft ;
struct tm ftime ;
struct tm last_nextexe ;
char set_next_exe_opt ;
time_t tmp ;
	previous_period = 0L;
	next_period = 0L;
	ft = (struct tm *)((void *)0);
	set_next_exe_opt = (char)0;
	if(context == 2) {
		previous_period = line->cl_nextexe - (long )((int )(line->cl_file)->cf_tzdiff * 3600);
		set_next_exe_opt = (char)1;
L1:;
		ft = localtime(& previous_period);
		memcpy((void *)(& ftime), (void *)ft, sizeof(ftime));
		memcpy((void *)(& last_nextexe), (void *)ft, sizeof(last_nextexe));
		ftime.tm_sec = 0;
		goto_non_matching(line, & ftime, (char)0);
		tmp = mktime(& ftime);
		next_period = tmp + (long )((int )(line->cl_file)->cf_tzdiff * 3600);
		set_next_exe(line, set_next_exe_opt, -1);
		if(line->cl_nextexe >= next_period) {
			mail_notrun(line, context, & last_nextexe);
L2:;
			/* END OF PATH at func_set_next_exe_notrun@p28#1 */
		}
		else {
			goto L2;
		}
	}
	else if(context < 2) {
L3:;
		previous_period = now - (long )((int )(line->cl_file)->cf_tzdiff * 3600);
		set_next_exe_opt = (char)2;
		goto L1;
	}
	else {
		goto L3;
	}
}

void mail_notrun(struct cl_t *line , char context , struct tm *since )
{ int pid ;
FILE *mailf ;
struct tm *time2 ;
struct tm time___0 ;
int tmp ;
	pid = 0;
	mailf = (FILE *)0;
	time2 = (struct tm *)((void *)0);
	pid = fork();
	if(pid == 0-(1)) {
		error_e((char *)"Fork error : could not mail for not run %s", line->cl_shell);
		/* END OF PATH at func_mail_notrun@p14#1 */
	}
	else if(pid == 0) {
		if(context == 3) {
			time2 = localtime(& now);
			memcpy((void *)(& time___0), (void *)time2, sizeof(time___0));
			mailf = create_mail(line, (char *)"Non-execution of fcron job");
			if(context == 3) {
				fprintf(mailf, (char *)"Line %s couldn\'t be added to lavg or serial queue which is full ( %d/%d/%d wday:%d %02d:%02d ).\n", line->cl_shell, time___0.tm_mon + 1, time___0.tm_mday, time___0.tm_year + 1900, time___0.tm_wday, time___0.tm_hour, time___0.tm_min);
				if(mailf->BLAST_FLAG < 1) {
					BLAST_ERROR();
L1:;
					fprintf(mailf, (char *)"Consider using options lavgonce, until, strict, serialonce and/or fcron\'s option -m.\n");
					if(mailf->BLAST_FLAG < 1) {
						BLAST_ERROR();
L2:;
						fprintf(mailf, (char *)"Note that job %s has not run.\n", line->cl_shell);
L3:;
						tmp = change_user(line);
						if(tmp < 0) {
							/* END OF PATH at func_mail_notrun@p58#1 */
						}
						else {
							launch_mailer(line, mailf);
							error((char *)"mail_notrun : launch_mailer failed");
							/* END OF PATH at func_mail_notrun@p62#1 */
						}
					}
					else if(mailf->BLAST_FLAG > 1) {
						BLAST_ERROR();
						goto L2;
					}
					else {
						goto L2;
					}
				}
				else if(mailf->BLAST_FLAG > 1) {
					BLAST_ERROR();
					goto L1;
				}
				else {
					goto L1;
				}
			}
			else if(context == 2) {
				/* FALSE PATH */ 
			}
			else if(context == 1) {
				/* FALSE PATH */ 
			}
			else if(context < 1) {
				/* FALSE PATH */ 
			}
			else if(context > 1 && context < 2) {
				/* FALSE PATH */ 
			}
			else if(context > 2 && context < 3) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(context < 3) {
			time2 = localtime(& line->cl_nextexe);
			memcpy((void *)(& time___0), (void *)time2, sizeof(time___0));
			mailf = create_mail(line, (char *)"Non-execution of fcron job");
			if(context == 2) {
				fprintf(mailf, (char *)"Line %s has not run since and including %d/%d/%d wday:%d %02d:%02d\ndue to system\'s down state.\n", line->cl_shell, since->tm_mon + 1, since->tm_mday, since->tm_year + 1900, since->tm_wday, since->tm_hour, since->tm_min);
				fprintf(mailf, (char *)"It will be next executed at %d/%d/%d wday:%d %02d:%02d\n", time___0.tm_mon + 1, time___0.tm_mday, time___0.tm_year + 1900, time___0.tm_wday, time___0.tm_hour, time___0.tm_min);
				goto L3;
			}
			else if(context == 1) {
				fprintf(mailf, (char *)"Line %s has not run since and including %d/%d/%d wday:%d %02d:%02d\n", line->cl_shell, since->tm_mon + 1, since->tm_mday, since->tm_year + 1900, since->tm_wday, since->tm_hour, since->tm_min);
				if(mailf->BLAST_FLAG < 1) {
					BLAST_ERROR();
L4:;
					fprintf(mailf, (char *)"due to a too high system load average or too many lavg-serial jobs.\n");
					fprintf(mailf, (char *)"It will be next executed at %d/%d/%d wday:%d %02d:%02d\n", time___0.tm_mon + 1, time___0.tm_mday, time___0.tm_year + 1900, time___0.tm_wday, time___0.tm_hour, time___0.tm_min);
					goto L3;
				}
				else if(mailf->BLAST_FLAG > 1) {
					BLAST_ERROR();
					goto L4;
				}
				else {
					goto L4;
				}
			}
			else if(context < 1) {
				goto L3;
			}
			else if(context > 1 && context < 2) {
				goto L3;
			}
			else if(context > 2 && context < 3) {
				goto L3;
			}
			else if(context == 3) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else {
			time2 = localtime(& line->cl_nextexe);
			memcpy((void *)(& time___0), (void *)time2, sizeof(time___0));
			mailf = create_mail(line, (char *)"Non-execution of fcron job");
			if(context > 3) {
				goto L3;
			}
			else if(context == 2) {
				/* FALSE PATH */ 
			}
			else if(context == 1) {
				/* FALSE PATH */ 
			}
			else if(context == 3) {
				/* FALSE PATH */ 
			}
			else if(context < 1) {
				/* FALSE PATH */ 
			}
			else if(context > 1 && context < 2) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
	}
	else if(pid < 0) {
L5:;
		if(exe_num >= exe_array_size) {
			resize_exe_array();
L6:;
			(exe_array + (int )exe_num)->e_line = (struct cl_t *)((void *)0);
			(exe_array + (int )exe_num)->e_ctrl_pid = pid;
			exe_num = (short )((int )exe_num + 1);
			/* END OF PATH at func_mail_notrun@p24#1 */
		}
		else {
			goto L6;
		}
	}
	else if(pid > 0 && pid < 1) {
		goto L5;
	}
	else {
		goto L5;
	}
}

void insert_nextexe(struct cl_t *line )
{ struct job_t *newjob ;
struct job_t *j ;
struct job_t *jprev ;
struct job_t *old_entry ;
void *tmp ;
void *tmp___0 ;
	if(queue_base < (0)) {
L1:;
		jprev = (struct job_t *)((void *)0);
		old_entry = (struct job_t *)((void *)0);
		j = queue_base;
L2:;
L3:;
		if(j == (0)) {
L4:;
L5:;
			jprev = (struct job_t *)((void *)0);
			if(j == (0)) {
				j = queue_base;
L6:;
L7:;
				if(j < (0)) {
L8:;
					if(line->cl_nextexe < (j->j_line)->cl_nextexe) {
L9:;
L10:;
						if(old_entry == (0)) {
							tmp = calloc(1U, sizeof(job_t ));
							newjob = (struct job_t *)tmp;
							if(newjob == (0)) {
								die_e((char *)"Could not calloc.");
L11:;
								newjob->j_line = line;
L12:;
								newjob->j_next = j;
								if(jprev == (0)) {
									queue_base = newjob;
L13:;
L14:;
									/* END OF PATH at func_insert_nextexe@p62#1 */
								}
								else if(jprev < (0)) {
L15:;
									jprev->j_next = newjob;
									goto L13;
								}
								else {
									goto L15;
								}
							}
							else if(newjob < (0)) {
								goto L11;
							}
							else {
								goto L11;
							}
						}
						else if(old_entry < (0)) {
L16:;
							newjob = old_entry;
							goto L12;
						}
						else {
							goto L16;
						}
					}
					else {
						jprev = j;
						j = j->j_next;
						goto L7;
					}
				}
				else if(j > (0)) {
					goto L8;
				}
				else {
					/* END OF PATH at func_insert_nextexe@p32#3 */
				}
			}
			else if(j < (0)) {
L17:;
				if(line->cl_nextexe < (j->j_line)->cl_nextexe) {
					j = queue_base;
					goto L7;
				}
				else {
					goto L7;
				}
			}
			else {
				goto L17;
			}
		}
		else if(j < (0)) {
L18:;
			if(j->j_line == line) {
				old_entry = j;
				if(jprev < (0)) {
L19:;
					jprev->j_next = j->j_next;
					j = jprev;
L20:;
					goto L4;
				}
				else if(jprev > (0)) {
					goto L19;
				}
				else {
					queue_base = j->j_next;
					j = queue_base;
					goto L20;
				}
			}
			else if(j->j_line < line) {
L21:;
				jprev = j;
				j = j->j_next;
				goto L3;
			}
			else {
				goto L21;
			}
		}
		else {
			goto L18;
		}
	}
	else if(queue_base > (0)) {
		goto L1;
	}
	else {
		tmp___0 = calloc(1U, sizeof(job_t ));
		newjob = (struct job_t *)tmp___0;
		if(newjob == (0)) {
			die_e((char *)"Could not calloc.");
L22:;
			newjob->j_line = line;
			queue_base = newjob;
			goto L14;
		}
		else if(newjob < (0)) {
			goto L22;
		}
		else {
			goto L22;
		}
	}
}

void run_normal_job(cl_t *line , int info_fd )
{
	if(line->cl_numexe <= 0) {
		line->cl_numexe = (unsigned char )((int )line->cl_numexe + 1);
		run_queue_job(line);
		send_msg_fd(info_fd, (char *)"Job %s started.", line->cl_shell);
L1:;
		/* END OF PATH at func_run_normal_job@p15#1 */
	}
	else {
		if(line->cl_option[1] & 4 > 0) {
L2:;
			if(line->cl_numexe < 255) {
				line->cl_numexe = (unsigned char )((int )line->cl_numexe + 1);
				run_queue_job(line);
				send_msg_fd(info_fd, (char *)"Job %s started.", line->cl_shell);
L3:;
				goto L1;
			}
			else {
				warn_fd(info_fd, (char *)"    process already running: %s\'s %s", (line->cl_file)->cf_user, line->cl_shell);
				goto L3;
			}
		}
		else if(line->cl_option[1] & 4 < 0) {
			goto L2;
		}
		else {
			warn_fd(info_fd, (char *)"    process already running: %s\'s %s", (line->cl_file)->cf_user, line->cl_shell);
			goto L1;
		}
	}
}

void add_serial_job(struct cl_t *line , int info_fd )
{ short i ;
cl_t **ptr ;
short old_size ;
void *tmp ;
	if(line->cl_option[1] & 8 > 0) {
L1:;
		if(line->cl_option[1] & 8 > 0) {
L2:;
			if(line->cl_numexe > 0) {
				send_msg_fd_debug(info_fd, (char *)"already in serial queue %s", line->cl_shell);
				/* END OF PATH at func_add_serial_job@p10#1 */
			}
			else {
L3:;
				send_msg_fd_debug(info_fd, (char *)"inserting in serial queue %s", line->cl_shell);
				if(serial_num >= serial_array_size) {
					if(serial_num >= serial_queue_max) {
						error_fd(info_fd, (char *)"Could not add job : serial queue is full (%d jobs). Consider using option serialonce, fcron\'s option -m and/or -q : %s", serial_queue_max, line->cl_shell);
						if(line->cl_option[2] & 32 > 0) {
							mail_notrun(line, (char)3, (struct tm *)((void *)0));
L4:;
							/* END OF PATH at func_add_serial_job@p25#1 */
						}
						else if(line->cl_option[2] & 32 < 0) {
							mail_notrun(line, (char)3, (struct tm *)((void *)0));
							goto L4;
						}
						else {
							goto L4;
						}
					}
					else {
						ptr = (cl_t **)((void *)0);
						old_size = serial_array_size;
						if(debug_opt > 0) {
							Debug((char *)"Resizing serial_array");
L5:;
							serial_array_size = (short )((int )serial_array_size + 10);
							tmp = calloc((unsigned int )serial_array_size, sizeof(cl_t *));
							ptr = (cl_t **)tmp;
							if(ptr == (0)) {
								die_e((char *)"could not calloc serial_array");
L6:;
								memcpy((void *)(ptr + (int )serial_array_index), (void *)serial_array, sizeof(cl_t *) * (unsigned int )((int )old_size - (int )serial_array_index));
								memcpy((void *)ptr, (void *)(serial_array + ((int )old_size - (int )serial_array_index)), sizeof(cl_t *) * (unsigned int )serial_array_index);
								serial_array_index = (short)0;
								free((void *)serial_array);
								serial_array = ptr;
L7:;
								i = (short )((int )serial_array_index + (int )serial_num);
								if(i >= serial_array_size) {
									i = (short )((int )i - (int )serial_array_size);
L8:;
									*(serial_array + (int )i) = line;
									serial_num = (short )((int )serial_num + 1);
									line->cl_numexe = (unsigned char )((int )line->cl_numexe + 1);
									send_msg_fd_debug(info_fd, (char *)"serial num: %d size:%d index:%d curline:%d running:%d (%s)", serial_num, serial_array_size, serial_array_index, i, serial_running, line->cl_shell);
									/* END OF PATH at func_add_serial_job@p49#1 */
								}
								else {
									goto L8;
								}
							}
							else if(ptr < (0)) {
								goto L6;
							}
							else {
								goto L6;
							}
						}
						else if(debug_opt < 0) {
							Debug((char *)"Resizing serial_array");
							goto L5;
						}
						else {
							goto L5;
						}
					}
				}
				else {
					goto L7;
				}
			}
		}
		else if(line->cl_option[1] & 8 < 0) {
			goto L2;
		}
		else {
			goto L3;
		}
	}
	else if(line->cl_option[1] & 8 < 0) {
		goto L1;
	}
	else {
		if(line->cl_numexe >= 255) {
			send_msg_fd_debug(info_fd, (char *)"already in serial queue %s", line->cl_shell);
			/* END OF PATH at func_add_serial_job@p15#1 */
		}
		else {
			goto L1;
		}
	}
}

void add_lavg_job(struct cl_t *line , int info_fd )
{ struct lavg_t *ptr ;
short old_size ;
struct tm *ft ;
struct tm ftime ;
time_t begin_of_cur_int ;
time_t end_of_cur_int ;
time_t tmp ;
void *tmp___0 ;
	if(line->cl_option[1] & 16 > 0) {
L1:;
		if(line->cl_numexe >= 255) {
			send_msg_fd_debug(info_fd, (char *)"already in lavg queue %s", line->cl_shell);
			/* END OF PATH at func_add_lavg_job@p12#1 */
		}
		else {
L2:;
			if((line->cl_option[1] & 16) == 0) {
				if(line->cl_numexe > 0) {
					send_msg_fd_debug(info_fd, (char *)"already in lavg queue %s", line->cl_shell);
					/* END OF PATH at func_add_lavg_job@p21#1 */
				}
				else {
					send_msg_fd_debug(info_fd, (char *)"inserting in lavg queue %s", line->cl_shell);
L3:;
					if(lavg_num >= lavg_array_size) {
						if(lavg_num >= lavg_queue_max) {
							error_fd(info_fd, (char *)"Could not add job : lavg queue is full (%d jobs). Consider using options lavgonce, until, strict and/or fcron\'s option -q.", lavg_queue_max, line->cl_shell);
							if(line->cl_option[2] & 32 > 0) {
								mail_notrun(line, (char)3, (struct tm *)((void *)0));
L4:;
								/* END OF PATH at func_add_lavg_job@p29#1 */
							}
							else if(line->cl_option[2] & 32 < 0) {
								mail_notrun(line, (char)3, (struct tm *)((void *)0));
								goto L4;
							}
							else {
								goto L4;
							}
						}
						else {
							ptr = (struct lavg_t *)((void *)0);
							old_size = lavg_array_size;
							if(debug_opt > 0) {
								Debug((char *)"Resizing lavg_array");
L5:;
								lavg_array_size = (short )((int )lavg_array_size + 10);
								tmp___0 = calloc((unsigned int )lavg_array_size, sizeof(lavg_t ));
								ptr = (struct lavg_t *)tmp___0;
								if(ptr == (0)) {
									die_e((char *)"could not calloc lavg_array");
L6:;
									memcpy((void *)ptr, (void *)lavg_array, sizeof(lavg_t ) * (unsigned int )old_size);
									free((void *)lavg_array);
									lavg_array = ptr;
L7:;
									(lavg_array + (int )lavg_num)->l_line = line;
									line->cl_numexe = (unsigned char )((int )line->cl_numexe + 1);
									line->cl_option[1] = (unsigned char )((int )line->cl_option[1] | 2);
									if(line->cl_option[2] & 16 > 0) {
L8:;
										if(line->cl_until > 0L) {
											(lavg_array + (int )lavg_num)->l_until = now + line->cl_until;
L9:;
L10:;
											lavg_num = (short )((int )lavg_num + 1);
											/* END OF PATH at func_add_lavg_job@p74#1 */
										}
										else {
											(lavg_array + (int )lavg_num)->l_until = 0L;
											goto L9;
										}
									}
									else if(line->cl_option[2] & 16 < 0) {
										goto L8;
									}
									else {
										if(line->cl_runfreq == 1) {
											end_of_cur_int = 0L;
											begin_of_cur_int = line->cl_nextexe - (long )((int )(line->cl_file)->cf_tzdiff * 3600);
											ft = localtime(& begin_of_cur_int);
											memcpy((void *)(& ftime), (void *)ft, sizeof(struct tm ));
											goto_non_matching(line, & ftime, (char)1);
											tmp = mktime(& ftime);
											end_of_cur_int = tmp + (long )((int )(line->cl_file)->cf_tzdiff * 3600);
											if(line->cl_until > 0L) {
												if(line->cl_until + now < end_of_cur_int) {
													(lavg_array + (int )lavg_num)->l_until = line->cl_until + now;
L11:;
L12:;
													goto L10;
												}
												else {
													(lavg_array + (int )lavg_num)->l_until = end_of_cur_int;
													line->cl_option[1] = (unsigned char )((int )line->cl_option[1] & -3);
													goto L11;
												}
											}
											else {
												(lavg_array + (int )lavg_num)->l_until = end_of_cur_int;
												line->cl_option[1] = (unsigned char )((int )line->cl_option[1] & -3);
												goto L12;
											}
										}
										else if(line->cl_runfreq < 1) {
L13:;
											goto L8;
										}
										else {
											goto L13;
										}
									}
								}
								else if(ptr < (0)) {
									goto L6;
								}
								else {
									goto L6;
								}
							}
							else if(debug_opt < 0) {
								Debug((char *)"Resizing lavg_array");
								goto L5;
							}
							else {
								goto L5;
							}
						}
					}
					else {
						goto L7;
					}
				}
			}
			else if((line->cl_option[1] & 16) > 0) {
				send_msg_fd_debug(info_fd, (char *)"inserting in lavg queue %s", line->cl_shell);
				goto L3;
			}
			else {
				send_msg_fd_debug(info_fd, (char *)"inserting in lavg queue %s", line->cl_shell);
				goto L3;
			}
		}
	}
	else if(line->cl_option[1] & 16 < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

void run_serial_job(void)
{
	if(debug_opt > 0) {
		Debug((char *)"num: %d running:%d  index:%d", serial_num, serial_running, serial_array_index);
L1:;
		if(serial_num < 0) {
			run_queue_job(*(serial_array + (int )serial_array_index));
L2:;
			*(serial_array + (int )serial_array_index) = (struct cl_t *)((void *)0);
			serial_running = (short )((int )serial_running + 1);
			serial_array_index = (short )((int )serial_array_index + 1);
			if(serial_array_index >= serial_array_size) {
				serial_array_index = (short )((int )serial_array_index - (int )serial_array_size);
L3:;
				serial_num = (short )((int )serial_num - 1);
L4:;
				/* END OF PATH at func_run_serial_job@p11#1 */
			}
			else {
				goto L3;
			}
		}
		else if(serial_num > 0) {
			run_queue_job(*(serial_array + (int )serial_array_index));
			goto L2;
		}
		else {
			goto L4;
		}
	}
	else if(debug_opt < 0) {
		Debug((char *)"num: %d running:%d  index:%d", serial_num, serial_running, serial_array_index);
		goto L1;
	}
	else {
		goto L1;
	}
}

void reload_all(char *dir_name )
{ cf_t *f ;
	f = (cf_t *)((void *)0);
	explain((char *)"Removing current configuration from memory");
	f = file_base;
L1:;
L2:;
	if(f == (0)) {
L3:;
		synchronize_dir(dir_name);
		/* END OF PATH at func_reload_all@p14#1 */
	}
	else if(f < (0)) {
L4:;
		if(f->cf_running > 0) {
			wait_all(& f->cf_running);
			save_file(f);
			delete_file(f->cf_user);
L5:;
			f = file_base;
			goto L2;
		}
		else {
			save_file(f);
			delete_file(f->cf_user);
			goto L5;
		}
	}
	else {
		goto L4;
	}
}

void synchronize_dir(char *dir_name )
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
void *tmp___11 ;
void *tmp___12 ;
void *tmp___13 ;
	rm_list = (list_t *)((void *)0);
	new_list = (list_t *)((void *)0);
	file_list = (list_t *)((void *)0);
	list_cur = (list_t *)((void *)0);
	tmp = strcmp(dir_name, (char *)".");
	if(tmp == 0) {
		explain((char *)"updating configuration from %s", fcrontabs);
L1:;
		dir = opendir((char *)".");
		if(dir > 0) {
L2:;
L3:;
			den = readdir(dir);
			if(den == 0) {
L4:;
				closedir(dir);
L5:;
				list_cur = rm_list;
L6:;
L7:;
				if(list_cur == 0) {
L8:;
					list_cur = file_list;
L9:;
L10:;
					if(list_cur == 0) {
L11:;
						list_cur = new_list;
L12:;
L13:;
						if(list_cur == 0) {
L14:;
							l = (list_t *)((void *)0);
							next = (list_t *)((void *)0);
							next = rm_list;
L15:;
L16:;
							l = next;
							if(l == (0)) {
L17:;
								next = new_list;
L18:;
L19:;
								l = next;
								if(l == (0)) {
L20:;
									next = file_list;
L21:;
L22:;
									l = next;
									if(l == (0)) {
L23:;
										/* END OF PATH at func_synchronize_dir@p157#1 */
									}
									else if(l < (0)) {
L24:;
										next = l->next;
										free((void *)l->str);
										free((void *)l);
										goto L22;
									}
									else {
										goto L24;
									}
								}
								else if(l < (0)) {
L25:;
									next = l->next;
									free((void *)l->str);
									free((void *)l);
									goto L19;
								}
								else {
									goto L25;
								}
							}
							else if(l < (0)) {
L26:;
								next = l->next;
								free((void *)l->str);
								free((void *)l);
								goto L16;
							}
							else {
								goto L26;
							}
						}
						else if(list_cur > 0) {
L27:;
							tmp___9 = getpwnam(list_cur->str + 4);
							if(tmp___9 > 0) {
								explain((char *)"adding new file %s", list_cur->str + 4);
								synchronize_file(list_cur->str);
L28:;
L29:;
								list_cur = list_cur->next;
								goto L13;
							}
							else if(tmp___9 < 0) {
								explain((char *)"adding new file %s", list_cur->str + 4);
								synchronize_file(list_cur->str);
								goto L28;
							}
							else {
								tmp___10 = strcmp(list_cur->str + 4, (char *)"systab");
								if(tmp___10 == 0) {
									explain((char *)"adding new file %s", list_cur->str + 4);
									synchronize_file(list_cur->str);
									goto L29;
								}
								else if(tmp___10 < 0) {
									error((char *)"ignoring file %s : not in passwd file.", list_cur->str + 4);
									goto L29;
								}
								else {
									error((char *)"ignoring file %s : not in passwd file.", list_cur->str + 4);
									goto L29;
								}
							}
						}
						else {
							goto L27;
						}
					}
					else if(list_cur > 0) {
L30:;
						tmp___7 = getpwnam(list_cur->str);
						if(tmp___7 > 0) {
							explain((char *)"adding file %s", list_cur->str);
							synchronize_file(list_cur->str);
L31:;
L32:;
							list_cur = list_cur->next;
							goto L10;
						}
						else if(tmp___7 < 0) {
							explain((char *)"adding file %s", list_cur->str);
							synchronize_file(list_cur->str);
							goto L31;
						}
						else {
							tmp___8 = strcmp(list_cur->str, (char *)"systab");
							if(tmp___8 == 0) {
								explain((char *)"adding file %s", list_cur->str);
								synchronize_file(list_cur->str);
								goto L32;
							}
							else if(tmp___8 < 0) {
								error((char *)"ignoring file \"%s\" : not in passwd file.", list_cur->str);
								goto L32;
							}
							else {
								error((char *)"ignoring file \"%s\" : not in passwd file.", list_cur->str);
								goto L32;
							}
						}
					}
					else {
						goto L30;
					}
				}
				else if(list_cur > 0) {
					explain((char *)"removing file %s", list_cur->str + 3);
					delete_file(list_cur->str + 3);
L33:;
					tmp___3 = remove(list_cur->str + 3);
					if(tmp___3 < 0) {
L34:;
						tmp___4 = __errno_location();
						if(*tmp___4 < 2) {
							error_e((char *)"Could not remove %s", list_cur->str + 3);
L35:;
							tmp___5 = remove(list_cur->str);
							if(tmp___5 < 0) {
L36:;
								tmp___6 = __errno_location();
								if(*tmp___6 < 2) {
									error_e((char *)"Could not remove %s", list_cur->str);
L37:;
									list_cur = list_cur->next;
									goto L7;
								}
								else if(*tmp___6 > 2) {
									error_e((char *)"Could not remove %s", list_cur->str);
									goto L37;
								}
								else {
									goto L37;
								}
							}
							else if(tmp___5 > 0) {
								goto L36;
							}
							else {
								goto L37;
							}
						}
						else if(*tmp___4 > 2) {
							error_e((char *)"Could not remove %s", list_cur->str + 3);
							goto L35;
						}
						else {
							goto L35;
						}
					}
					else if(tmp___3 > 0) {
						goto L34;
					}
					else {
						goto L35;
					}
				}
				else {
					explain((char *)"removing file %s", list_cur->str + 3);
					delete_file(list_cur->str + 3);
					goto L33;
				}
			}
			else if(den > 0) {
L38:;
				tmp___2 = strncmp(den->d_name, (char *)"rm.", 3U);
				if(tmp___2 == 0) {
					tmp___11 = calloc(1U, sizeof(list_t ));
					list_cur = (list_t *)tmp___11;
					if(list_cur == (0)) {
						die_e((char *)"Could not calloc.");
						list_cur->str = strdup2(den->d_name);
L39:;
						list_cur->next = rm_list;
						rm_list = list_cur;
						goto L3;
					}
					else if(list_cur < (0)) {
						list_cur->str = strdup2(den->d_name);
						goto L39;
					}
					else {
						list_cur->str = strdup2(den->d_name);
						goto L39;
					}
				}
				else if(tmp___2 < 0) {
L40:;
					tmp___1 = strncmp(den->d_name, (char *)"new.", 4U);
					if(tmp___1 == 0) {
						tmp___12 = calloc(1U, sizeof(list_t ));
						list_cur = (list_t *)tmp___12;
						if(list_cur == (0)) {
							die_e((char *)"Could not calloc.");
							list_cur->str = strdup2(den->d_name);
L41:;
							list_cur->next = new_list;
							new_list = list_cur;
							/* END OF PATH at func_synchronize_dir@p71#2 */
						}
						else if(list_cur < (0)) {
							list_cur->str = strdup2(den->d_name);
							goto L41;
						}
						else {
							list_cur->str = strdup2(den->d_name);
							goto L41;
						}
					}
					else if(tmp___1 < 0) {
L42:;
						tmp___0 = strchr(den->d_name, '.');
						if(tmp___0 < (0)) {
							goto L3;
						}
						else if(tmp___0 > (0)) {
							/* END OF PATH at func_synchronize_dir@p61#2 */
						}
						else {
							if(file_base == (0)) {
								tmp___13 = calloc(1U, sizeof(list_t ));
								list_cur = (list_t *)tmp___13;
								if(list_cur == (0)) {
									die_e((char *)"Could not calloc.");
									list_cur->str = strdup2(den->d_name);
L43:;
									list_cur->next = file_list;
									file_list = list_cur;
									/* END OF PATH at func_synchronize_dir@p71#3 */
								}
								else if(list_cur < (0)) {
									list_cur->str = strdup2(den->d_name);
									goto L43;
								}
								else {
									list_cur->str = strdup2(den->d_name);
									goto L43;
								}
							}
							else if(file_base < (0)) {
								/* END OF PATH at func_synchronize_dir@p71#4 */
							}
							else {
								/* END OF PATH at func_synchronize_dir@p71#5 */
							}
						}
					}
					else {
						goto L42;
					}
				}
				else {
					goto L40;
				}
			}
			else {
				goto L38;
			}
		}
		else if(dir < 0) {
			goto L3;
		}
		else {
			die((char *)"Unable to open current dir!");
			goto L5;
		}
	}
	else if(tmp < 0) {
		explain((char *)"updating configuration from %s", dir_name);
		goto L1;
	}
	else {
		explain((char *)"updating configuration from %s", dir_name);
		goto L1;
	}
}

void delete_file(char *user_name )
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
void *tmp___0 ;
	prev_file = (cf_t *)((void *)0);
	env = (env_t *)((void *)0);
	cur_env = (env_t *)((void *)0);
	j = (struct job_t *)((void *)0);
	s_a = (struct cl_t **)((void *)0);
	file = file_base;
L1:;
L2:;
	if(file == (0)) {
L3:;
L4:;
		if(file == (0)) {
			/* END OF PATH at func_delete_file@p132#1 */
		}
		else if(file < (0)) {
L5:;
			if(prev_file == (0)) {
				file_base = file->cf_next;
L6:;
				cur_env = file->cf_env_base;
L7:;
L8:;
				env = cur_env;
				if(env == (0)) {
L9:;
					free((void *)file->cf_user);
					free((void *)file);
					/* END OF PATH at func_delete_file@p150#1 */
				}
				else if(env < (0)) {
L10:;
					cur_env = env->e_next;
					free((void *)env->e_val);
					free((void *)env);
					goto L8;
				}
				else {
					goto L10;
				}
			}
			else if(prev_file < (0)) {
L11:;
				prev_file->cf_next = file->cf_next;
				goto L6;
			}
			else {
				goto L11;
			}
		}
		else {
			goto L5;
		}
	}
	else if(file < (0)) {
L12:;
		tmp = strcmp(user_name, file->cf_user);
		if(tmp < 0) {
L13:;
			prev_file = file;
			file = file->cf_next;
			goto L2;
		}
		else if(tmp > 0) {
			goto L13;
		}
		else {
			i = 0;
L14:;
L15:;
			if(i >= exe_num) {
L16:;
				i = 0;
L17:;
L18:;
				if(i >= lavg_num) {
L19:;
					i = 0;
L20:;
L21:;
					if(i >= serial_array_size) {
L22:;
						if(s_a == 0) {
L23:;
							cur_line = file->cf_line_base;
L24:;
L25:;
							line = cur_line;
							if(line == (0)) {
L26:;
								goto L2;
							}
							else if(line < (0)) {
L27:;
								cur_line = line->cl_next;
								prev_j = (struct job_t *)((void *)0);
								j = queue_base;
L28:;
L29:;
								if(j == (0)) {
L30:;
L31:;
									free((void *)line->cl_shell);
									free((void *)line->cl_runas);
									free((void *)line->cl_mailto);
									free((void *)line);
									goto L25;
								}
								else if(j < (0)) {
L32:;
									if(j->j_line == line) {
										if(prev_j < (0)) {
L33:;
											prev_j->j_next = j->j_next;
L34:;
											free((void *)j);
											goto L30;
										}
										else if(prev_j > (0)) {
											goto L33;
										}
										else {
											queue_base = j->j_next;
											goto L34;
										}
									}
									else if(j->j_line < line) {
L35:;
										prev_j = j;
										j = j->j_next;
										goto L29;
									}
									else {
										goto L35;
									}
								}
								else {
									goto L32;
								}
							}
							else {
								goto L27;
							}
						}
						else if(s_a > 0) {
L36:;
							k = (int )serial_array_index + (int )serial_num;
							if(k >= serial_array_size) {
								k = k - (int )serial_array_size;
L37:;
								k = 0;
								i = k;
L38:;
L39:;
								if(i >= serial_array_size) {
L40:;
									free((void *)serial_array);
									serial_array = s_a;
									serial_array_index = (short)0;
									goto L23;
								}
								else {
									if(serial_array_index + i < serial_array_size) {
										*(s_a + k) = *(serial_array + ((int )serial_array_index + i));
										if(*(s_a + k) < (0)) {
L41:;
											k = k + 1;
L42:;
L43:;
											i = i + 1;
											goto L39;
										}
										else if(*(s_a + k) > (0)) {
											goto L41;
										}
										else {
											goto L42;
										}
									}
									else {
										*(s_a + k) = *(serial_array + (((int )serial_array_index + i) - (int )serial_array_size));
										if(*(s_a + k) < (0)) {
L44:;
											k = k + 1;
											goto L43;
										}
										else if(*(s_a + k) > (0)) {
											goto L44;
										}
										else {
											goto L43;
										}
									}
								}
							}
							else {
								goto L37;
							}
						}
						else {
							goto L36;
						}
					}
					else {
						if(*(serial_array + i) < (0)) {
L45:;
							if((*(serial_array + i))->cl_file == file) {
								if(s_a == 0) {
									tmp___0 = calloc((unsigned int )serial_array_size, sizeof(cl_t *));
									s_a = (struct cl_t **)tmp___0;
L46:;
									if(debug_opt > 0) {
										Debug((char *)"removing %s from serial queue", (*(serial_array + i))->cl_shell);
L47:;
										serial_num = (short )((int )serial_num - 1);
										(*(serial_array + i))->cl_numexe = (unsigned char )((int )(*(serial_array + i))->cl_numexe - 1);
										*(serial_array + i) = (struct cl_t *)((void *)0);
L48:;
										i = i + 1;
										goto L21;
									}
									else if(debug_opt < 0) {
										Debug((char *)"removing %s from serial queue", (*(serial_array + i))->cl_shell);
										goto L47;
									}
									else {
										goto L47;
									}
								}
								else if(s_a > 0) {
									goto L46;
								}
								else {
									goto L46;
								}
							}
							else if((*(serial_array + i))->cl_file < file) {
								goto L48;
							}
							else {
								goto L48;
							}
						}
						else if(*(serial_array + i) > (0)) {
							goto L45;
						}
						else {
							goto L48;
						}
					}
				}
				else {
					if(((lavg_array + i)->l_line)->cl_file == file) {
						if(debug_opt > 0) {
							Debug((char *)"removing %s from lavg queue", ((lavg_array + i)->l_line)->cl_shell);
L49:;
							((lavg_array + i)->l_line)->cl_numexe = (unsigned char )((int )((lavg_array + i)->l_line)->cl_numexe - 1);
							lavg_num = (short )((int )lavg_num - 1);
							if(i < lavg_num) {
								*(lavg_array + i) = *(lavg_array + (int )lavg_num);
								(lavg_array + (int )lavg_num)->l_line = (struct cl_t *)((void *)0);
L50:;
								goto L18;
							}
							else {
								(lavg_array + i)->l_line = (struct cl_t *)((void *)0);
								goto L50;
							}
						}
						else if(debug_opt < 0) {
							Debug((char *)"removing %s from lavg queue", ((lavg_array + i)->l_line)->cl_shell);
							goto L49;
						}
						else {
							goto L49;
						}
					}
					else if(((lavg_array + i)->l_line)->cl_file < file) {
L51:;
						i = i + 1;
						/* END OF PATH at func_delete_file@p63#2 */
					}
					else {
						goto L51;
					}
				}
			}
			else {
				if((exe_array + i)->e_line < (0)) {
L52:;
					if(((exe_array + i)->e_line)->cl_file == file) {
						if(((exe_array + i)->e_line)->cl_option[0] & 32 > 0) {
L53:;
L54:;
							if(((exe_array + i)->e_line)->cl_option[0] & 2 > 0) {
L55:;
L56:;
								if(((exe_array + i)->e_line)->cl_option[0] & 32 > 0) {
L57:;
									if(((exe_array + i)->e_line)->cl_option[0] & 2 > 0) {
L58:;
										lavg_serial_running = (short )((int )lavg_serial_running - 1);
L59:;
										(exe_array + i)->e_line = (struct cl_t *)((void *)0);
L60:;
										i = i + 1;
										goto L15;
									}
									else if(((exe_array + i)->e_line)->cl_option[0] & 2 < 0) {
										goto L58;
									}
									else {
										goto L59;
									}
								}
								else if(((exe_array + i)->e_line)->cl_option[0] & 32 < 0) {
									goto L57;
								}
								else {
									goto L59;
								}
							}
							else if(((exe_array + i)->e_line)->cl_option[0] & 2 < 0) {
								goto L55;
							}
							else {
								serial_running = (short )((int )serial_running - 1);
								goto L59;
							}
						}
						else if(((exe_array + i)->e_line)->cl_option[0] & 32 < 0) {
							goto L53;
						}
						else {
							if(((exe_array + i)->e_line)->cl_option[0] & 64 > 0) {
								goto L54;
							}
							else if(((exe_array + i)->e_line)->cl_option[0] & 64 < 0) {
								goto L54;
							}
							else {
								goto L56;
							}
						}
					}
					else if(((exe_array + i)->e_line)->cl_file < file) {
						goto L60;
					}
					else {
						goto L60;
					}
				}
				else if((exe_array + i)->e_line > (0)) {
					goto L52;
				}
				else {
					goto L60;
				}
			}
		}
	}
	else {
		goto L12;
	}
}

void save_file(struct cf_t *arg_file )
{ cf_t *file ;
cf_t *start_file ;
	file = (cf_t *)((void *)0);
	start_file = (cf_t *)((void *)0);
	if(arg_file < (0)) {
		start_file = arg_file;
		file = start_file;
L1:;
		if(file == 0) {
L2:;
L3:;
			/* END OF PATH at func_save_file@p19#1 */
		}
		else if(file > 0) {
L4:;
			if(debug_opt > 0) {
				Debug((char *)"Saving %s...", file->cf_user);
				save_file_safe(file, file->cf_user, (char *)"fcron", 0U, 0U, now);
L5:;
				if(arg_file < (0)) {
L6:;
					goto L2;
				}
				else if(arg_file > (0)) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(debug_opt < 0) {
				Debug((char *)"Saving %s...", file->cf_user);
				save_file_safe(file, file->cf_user, (char *)"fcron", 0U, 0U, now);
				goto L5;
			}
			else {
				save_file_safe(file, file->cf_user, (char *)"fcron", 0U, 0U, now);
				goto L5;
			}
		}
		else {
			goto L4;
		}
	}
	else if(arg_file > (0)) {
		start_file = arg_file;
		file = start_file;
L7:;
		if(file == 0) {
			goto L2;
		}
		else if(file > 0) {
L8:;
			if(debug_opt > 0) {
				Debug((char *)"Saving %s...", file->cf_user);
				save_file_safe(file, file->cf_user, (char *)"fcron", 0U, 0U, now);
L9:;
				if(arg_file > (0)) {
					goto L6;
				}
				else if(arg_file < (0)) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(debug_opt < 0) {
				Debug((char *)"Saving %s...", file->cf_user);
				save_file_safe(file, file->cf_user, (char *)"fcron", 0U, 0U, now);
				goto L9;
			}
			else {
				save_file_safe(file, file->cf_user, (char *)"fcron", 0U, 0U, now);
				goto L9;
			}
		}
		else {
			goto L8;
		}
	}
	else {
		start_file = file_base;
		file = start_file;
L10:;
L11:;
		if(file == 0) {
			goto L2;
		}
		else if(file > 0) {
L12:;
			if(debug_opt > 0) {
				Debug((char *)"Saving %s...", file->cf_user);
				save_file_safe(file, file->cf_user, (char *)"fcron", 0U, 0U, now);
L13:;
				if(arg_file == (0)) {
					file = file->cf_next;
					goto L11;
				}
				else if(arg_file < (0)) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(debug_opt < 0) {
				Debug((char *)"Saving %s...", file->cf_user);
				save_file_safe(file, file->cf_user, (char *)"fcron", 0U, 0U, now);
				goto L13;
			}
			else {
				save_file_safe(file, file->cf_user, (char *)"fcron", 0U, 0U, now);
				goto L13;
			}
		}
		else {
			goto L12;
		}
	}
}

int change_user(struct cl_t *cl )
{ struct passwd *pas ;
int retcode ;
char **env ;
int tmp___0 ;
int tmp___1 ;
int tmp___2 ;
int tmp___3 ;
char **tmp ;
	retcode = 0;
	umask(saved_umask);
	pas = getpwnam(cl->cl_runas);
	if(pas == (0)) {
		die((char *)"failed to get passwd fields for user \"%s\"", cl->cl_runas);
L1:;
		setenv((char *)"USER", pas->pw_name, 1);
		setenv((char *)"HOME", pas->pw_dir, 1);
		setenv((char *)"SHELL", pas->pw_shell, 1);
		retcode = pam_start((char *)"fcron", pas->pw_name, & apamconv, & pamh);
		if(retcode < 0) {
			die_pame(pamh, retcode, (char *)"Could not start PAM for %s", cl->cl_shell);
L2:;
			retcode = pam_authenticate(pamh, 32768);
			if(retcode < 0) {
				die_mail_pame(cl, retcode, pas, (char *)"Could not authenticate PAM user");
L3:;
				retcode = pam_acct_mgmt(pamh, 32768);
				if(retcode < 0) {
					die_mail_pame(cl, retcode, pas, (char *)"Could not init PAM account management");
L4:;
					retcode = pam_setcred(pamh, 32770);
					if(retcode < 0) {
						die_mail_pame(cl, retcode, pas, (char *)"Could not set PAM credentials");
L5:;
						retcode = pam_open_session(pamh, 32768);
						if(retcode < 0) {
							die_mail_pame(cl, retcode, pas, (char *)"Could not open PAM session");
L6:;
							tmp = pam_getenvlist(pamh);
							env = tmp;
L7:;
L8:;
							if(env > 0) {
L9:;
								if(*env == 0) {
L10:;
L11:;
									xcloselog();
									tmp___1 = initgroups(pas->pw_name, pas->pw_gid);
									if(tmp___1 < 0) {
										die_e((char *)"initgroups failed: %s", pas->pw_name);
L12:;
										tmp___2 = setgid(pas->pw_gid);
										if(tmp___2 < 0) {
											die((char *)"setgid failed: %s %d", pas->pw_name, pas->pw_gid);
L13:;
											tmp___3 = setuid(pas->pw_uid);
											if(tmp___3 < 0) {
												die((char *)"setuid failed: %s %d", pas->pw_name, pas->pw_uid);
L14:;
												return ((int )pas->pw_uid);
												/* END OF PATH at func_change_user@p56#1 */
											}
											else {
												goto L14;
											}
										}
										else {
											goto L13;
										}
									}
									else {
										goto L12;
									}
								}
								else if(*env > 0) {
L15:;
									tmp___0 = putenv(*env);
									if(tmp___0 > 0) {
										die_e((char *)"Could not copy PAM environment");
L16:;
										env = env + 1;
										goto L8;
									}
									else if(tmp___0 < 0) {
										die_e((char *)"Could not copy PAM environment");
										goto L16;
									}
									else {
										goto L16;
									}
								}
								else {
									goto L15;
								}
							}
							else if(env < 0) {
								goto L9;
							}
							else {
								/* END OF PATH at func_change_user@p34#3 */
							}
						}
						else if(retcode > 0) {
							die_mail_pame(cl, retcode, pas, (char *)"Could not open PAM session");
							goto L6;
						}
						else {
							goto L6;
						}
					}
					else if(retcode > 0) {
						die_mail_pame(cl, retcode, pas, (char *)"Could not set PAM credentials");
						goto L5;
					}
					else {
						goto L5;
					}
				}
				else if(retcode > 0) {
					die_mail_pame(cl, retcode, pas, (char *)"Could not init PAM account management");
					goto L4;
				}
				else {
					goto L4;
				}
			}
			else if(retcode > 0) {
				die_mail_pame(cl, retcode, pas, (char *)"Could not authenticate PAM user");
				goto L3;
			}
			else {
				goto L3;
			}
		}
		else if(retcode > 0) {
			die_pame(pamh, retcode, (char *)"Could not start PAM for %s", cl->cl_shell);
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else if(pas < (0)) {
		goto L1;
	}
	else {
		goto L1;
	}
}

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
FILE *mailf ;
int status ;
int to_stdout ;
int tmp___0 ;
int pipe_fd[2] ;
short mailpos ;
char *tmp___1 ;
char *tmp___2 ;
char *tmp___3 ;
int tmp___4 ;
int tmp___5 ;
int tmp___6 ;
int tmp___7 ;
FILE *tmp___8 ;
FILE *tmp___9 ;
FILE *tmp___10 ;
FILE *tmp___11 ;
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
long tmp___25 ;
FILE *tmp___26 ;
FILE *tmp___27 ;
	line = exeent->e_line;
	i = 0;
	tmp = pipe(pipe_pid_fd);
	if(tmp < 0) {
		error_e((char *)"pipe(pipe_pid_fd) : setting job_pid to -1");
L1:;
		exeent->e_job_pid = -1;
L2:;
		pid = fork();
		if(pid == 0-(1)) {
L3:;
			/* END OF PATH at func_run_job@p228#1 */
		}
		else if(pid == 0) {
			mailf = (FILE *)((void *)0);
			status = 0;
			if(foreground > 0) {
				if(line->cl_option[3] & 2 > 0) {
L4:;
					tmp___0 = 1;
					to_stdout = tmp___0;
					mailpos = (short)0;
					if(debug_opt > 0) {
L5:;
						if(line->cl_option[3] & 2 > 0) {
L6:;
							tmp___1 = (char *)"stdout";
L7:;
							if(foreground > 0) {
L8:;
								tmp___2 = (char *)"running in foreground";
								if(to_stdout > 0) {
									tmp___3 = (char *)"stdout";
L9:;
									if(to_stdout > 0) {
										tmp___5 = change_user(line);
										if(tmp___5 < 0) {
L10:;
											/* END OF PATH at func_run_job@p89#1 */
										}
										else {
											sig_dfl();
											pid = fork();
											if(pid == 0-(1)) {
L11:;
L12:;
L13:;
L14:;
												pid = wait3((union wait *)(& status), 0, (struct rusage *)((void *)0));
												if(pid <= 0) {
L15:;
L16:;
													close(pipe_pid_fd[1]);
													exeent->e_ctrl_pid = pid;
													(line->cl_file)->cf_running = (line->cl_file)->cf_running + 1;
L17:;
L18:;
													if(i >= sizeof(pid_t)) {
L19:;
L20:;
														close(pipe_pid_fd[0]);
														goto L3;
													}
													else {
														j = read(pipe_pid_fd[0], (void *)((char *)(& exeent->e_job_pid) + i), sizeof(pid_t ));
														if(j <= 0) {
															tmp___24 = __errno_location();
															if(*tmp___24 < 4) {
																error_e((char *)"Could not read job pid : setting it to -1");
L21:;
																exeent->e_job_pid = -1;
																goto L19;
															}
															else if(*tmp___24 > 4) {
																error_e((char *)"Could not read job pid : setting it to -1");
																goto L21;
															}
															else {
L22:;
																i = i + j;
																goto L18;
															}
														}
														else {
															goto L22;
														}
													}
												}
												else {
													end_job(line, status, mailf, mailpos);
													goto L14;
												}
											}
											else if(pid == 0) {
												if(to_stdout > 0) {
													foreground = (char)1;
													if(line->cl_nice < 0) {
L23:;
														tmp___12 = __errno_location();
														*tmp___12 = 0;
														tmp___13 = nice((int )line->cl_nice);
														if(tmp___13 == -1) {
															tmp___14 = __errno_location();
															if(*tmp___14 < 0) {
																error_e((char *)"could not set nice value");
																xcloselog();
L24:;
																env = (line->cl_file)->cf_env_base;
L25:;
L26:;
																if(env == 0) {
L27:;
																	home = getenv((char *)"HOME");
																	if(home < (0)) {
L28:;
																		tmp___17 = chdir(home);
																		if(tmp___17 < 0) {
																			error_e((char *)"Could not chdir to HOME dir \"%s\"", home);
L29:;
																			tmp___16 = chdir((char *)"/");
																			if(tmp___16 < 0) {
																				die_e((char *)"Could not chdir to HOME dir /");
L30:;
																				curshell = getenv((char *)"SHELL");
																				if(curshell == (0)) {
																					curshell = shell;
																					execl(curshell, curshell, "-c", line->cl_shell, (void *)0);
																					error_e((char *)"Can\'t find \"%s\". Trying a execlp(\"sh\",...)", curshell);
																					execlp((char *)"sh", (char *)"sh", "-c", line->cl_shell, (void *)0);
																					die_e((char *)"execl() \"%s -c %s\" error", curshell, line->cl_shell);
L31:;
																					close(pipe_fd[1]);
																					close(pipe_pid_fd[0]);
																					tmp___20 = write(pipe_pid_fd[1], (void *)(& pid), sizeof(pid));
																					if(tmp___20 < 0) {
																						error_e((char *)"could not write child pid to pipe_pid_fd[1]");
L32:;
																						close(pipe_pid_fd[1]);
																						if((line->cl_option[2] & 64) == 0) {
																							explain((char *)"Job %s started for user %s (pid %d)", line->cl_shell, (line->cl_file)->cf_user, pid);
L33:;
																							if(to_stdout > 0) {
L34:;
																								fclose(pipef);
																								goto L12;
																							}
																							else if(to_stdout == 0) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if((line->cl_option[2] & 64) > 0) {
																							goto L33;
																						}
																						else {
																							goto L33;
																						}
																					}
																					else {
																						goto L32;
																					}
																				}
																				else if(curshell < (0)) {
L35:;
																					tmp___19 = access(curshell, 1);
																					if(tmp___19 < 0) {
L36:;
																						tmp___18 = __errno_location();
																						if(*tmp___18 == 2) {
																							error((char *)"shell \"%s\" : no file or directory. SHELL set to %s", curshell, shell);
L37:;
																							curshell = shell;
																							execl(curshell, curshell, "-c", line->cl_shell, (void *)0);
																							error_e((char *)"Can\'t find \"%s\". Trying a execlp(\"sh\",...)", curshell);
																							execlp((char *)"sh", (char *)"sh", "-c", line->cl_shell, (void *)0);
																							die_e((char *)"execl() \"%s -c %s\" error", curshell, line->cl_shell);
																							goto L31;
																						}
																						else if(*tmp___18 < 2) {
																							error_e((char *)"shell \"%s\" not valid : SHELL set to %s", curshell, shell);
																							goto L37;
																						}
																						else {
																							error_e((char *)"shell \"%s\" not valid : SHELL set to %s", curshell, shell);
																							goto L37;
																						}
																					}
																					else if(tmp___19 > 0) {
																						goto L36;
																					}
																					else {
																						execl(curshell, curshell, "-c", line->cl_shell, (void *)0);
																						error_e((char *)"Can\'t find \"%s\". Trying a execlp(\"sh\",...)", curshell);
																						execlp((char *)"sh", (char *)"sh", "-c", line->cl_shell, (void *)0);
																						die_e((char *)"execl() \"%s -c %s\" error", curshell, line->cl_shell);
																						goto L31;
																					}
																				}
																				else {
																					goto L35;
																				}
																			}
																			else {
																				goto L30;
																			}
																		}
																		else if(tmp___17 > 0) {
																			error_e((char *)"Could not chdir to HOME dir \"%s\"", home);
																			goto L29;
																		}
																		else {
																			goto L30;
																		}
																	}
																	else if(home > (0)) {
																		goto L28;
																	}
																	else {
																		goto L30;
																	}
																}
																else if(env > 0) {
L38:;
																	tmp___15 = putenv(env->e_val);
																	if(tmp___15 < 0) {
																		error((char *)"could not putenv()");
L39:;
																		env = env->e_next;
																		goto L26;
																	}
																	else if(tmp___15 > 0) {
																		error((char *)"could not putenv()");
																		goto L39;
																	}
																	else {
																		goto L39;
																	}
																}
																else {
																	goto L38;
																}
															}
															else if(*tmp___14 > 0) {
																error_e((char *)"could not set nice value");
																xcloselog();
																goto L24;
															}
															else {
																xcloselog();
																goto L24;
															}
														}
														else if(tmp___13 < -1) {
															xcloselog();
															goto L24;
														}
														else {
															xcloselog();
															goto L24;
														}
													}
													else if(line->cl_nice > 0) {
														goto L23;
													}
													else {
														xcloselog();
														goto L24;
													}
												}
												else if(to_stdout == 0) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(pid < 0) {
												goto L31;
											}
											else if(pid > 0 && pid < 1) {
												goto L31;
											}
											else {
												goto L31;
											}
										}
									}
									else if(to_stdout == 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(to_stdout < 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(foreground < 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(line->cl_option[3] & 2 < 0) {
							goto L6;
						}
						else {
							tmp___1 = (char *)"normal";
							goto L7;
						}
					}
					else if(debug_opt < 0) {
						goto L5;
					}
					else {
						goto L9;
					}
				}
				else if(line->cl_option[3] & 2 < 0) {
					goto L4;
				}
				else {
					to_stdout = tmp___0;
					mailpos = (short)0;
					if(debug_opt > 0) {
L40:;
						if(line->cl_option[3] & 2 > 0) {
L41:;
							tmp___1 = (char *)"stdout";
L42:;
							if(foreground > 0) {
L43:;
								tmp___2 = (char *)"running in foreground";
L44:;
								if(to_stdout > 0) {
									tmp___3 = (char *)"stdout";
									if(to_stdout > 0) {
										tmp___5 = change_user(line);
L45:;
										if(tmp___5 < 0) {
											goto L10;
										}
										else {
											sig_dfl();
											pid = fork();
											if(pid == 0-(1)) {
												goto L11;
											}
											else if(pid == 0) {
												if(to_stdout > 0) {
													foreground = (char)1;
													if(line->cl_nice < 0) {
L46:;
														tmp___12 = __errno_location();
														*tmp___12 = 0;
														tmp___13 = nice((int )line->cl_nice);
														if(tmp___13 == -1) {
															tmp___14 = __errno_location();
															if(*tmp___14 < 0) {
																error_e((char *)"could not set nice value");
																xcloselog();
L47:;
																env = (line->cl_file)->cf_env_base;
L48:;
L49:;
																if(env == 0) {
L50:;
																	home = getenv((char *)"HOME");
																	if(home < (0)) {
L51:;
																		tmp___17 = chdir(home);
																		if(tmp___17 < 0) {
																			error_e((char *)"Could not chdir to HOME dir \"%s\"", home);
L52:;
																			tmp___16 = chdir((char *)"/");
																			if(tmp___16 < 0) {
																				die_e((char *)"Could not chdir to HOME dir /");
L53:;
																				curshell = getenv((char *)"SHELL");
																				if(curshell == (0)) {
																					curshell = shell;
																					execl(curshell, curshell, "-c", line->cl_shell, (void *)0);
																					error_e((char *)"Can\'t find \"%s\". Trying a execlp(\"sh\",...)", curshell);
																					execlp((char *)"sh", (char *)"sh", "-c", line->cl_shell, (void *)0);
																					die_e((char *)"execl() \"%s -c %s\" error", curshell, line->cl_shell);
L54:;
																					close(pipe_fd[1]);
																					close(pipe_pid_fd[0]);
																					tmp___20 = write(pipe_pid_fd[1], (void *)(& pid), sizeof(pid));
																					if(tmp___20 < 0) {
																						error_e((char *)"could not write child pid to pipe_pid_fd[1]");
L55:;
																						close(pipe_pid_fd[1]);
																						if((line->cl_option[2] & 64) == 0) {
																							explain((char *)"Job %s started for user %s (pid %d)", line->cl_shell, (line->cl_file)->cf_user, pid);
L56:;
																							if(to_stdout > 0) {
																								goto L34;
																							}
																							else if(to_stdout == 0) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if((line->cl_option[2] & 64) > 0) {
																							goto L56;
																						}
																						else {
																							goto L56;
																						}
																					}
																					else {
																						goto L55;
																					}
																				}
																				else if(curshell < (0)) {
L57:;
																					tmp___19 = access(curshell, 1);
																					if(tmp___19 < 0) {
L58:;
																						tmp___18 = __errno_location();
																						if(*tmp___18 == 2) {
																							error((char *)"shell \"%s\" : no file or directory. SHELL set to %s", curshell, shell);
L59:;
																							curshell = shell;
																							execl(curshell, curshell, "-c", line->cl_shell, (void *)0);
																							error_e((char *)"Can\'t find \"%s\". Trying a execlp(\"sh\",...)", curshell);
																							execlp((char *)"sh", (char *)"sh", "-c", line->cl_shell, (void *)0);
																							die_e((char *)"execl() \"%s -c %s\" error", curshell, line->cl_shell);
																							goto L54;
																						}
																						else if(*tmp___18 < 2) {
																							error_e((char *)"shell \"%s\" not valid : SHELL set to %s", curshell, shell);
																							goto L59;
																						}
																						else {
																							error_e((char *)"shell \"%s\" not valid : SHELL set to %s", curshell, shell);
																							goto L59;
																						}
																					}
																					else if(tmp___19 > 0) {
																						goto L58;
																					}
																					else {
																						execl(curshell, curshell, "-c", line->cl_shell, (void *)0);
																						error_e((char *)"Can\'t find \"%s\". Trying a execlp(\"sh\",...)", curshell);
																						execlp((char *)"sh", (char *)"sh", "-c", line->cl_shell, (void *)0);
																						die_e((char *)"execl() \"%s -c %s\" error", curshell, line->cl_shell);
																						goto L54;
																					}
																				}
																				else {
																					goto L57;
																				}
																			}
																			else {
																				goto L53;
																			}
																		}
																		else if(tmp___17 > 0) {
																			error_e((char *)"Could not chdir to HOME dir \"%s\"", home);
																			goto L52;
																		}
																		else {
																			goto L53;
																		}
																	}
																	else if(home > (0)) {
																		goto L51;
																	}
																	else {
																		goto L53;
																	}
																}
																else if(env > 0) {
L60:;
																	tmp___15 = putenv(env->e_val);
																	if(tmp___15 < 0) {
																		error((char *)"could not putenv()");
L61:;
																		env = env->e_next;
																		goto L49;
																	}
																	else if(tmp___15 > 0) {
																		error((char *)"could not putenv()");
																		goto L61;
																	}
																	else {
																		goto L61;
																	}
																}
																else {
																	goto L60;
																}
															}
															else if(*tmp___14 > 0) {
																error_e((char *)"could not set nice value");
																xcloselog();
																goto L47;
															}
															else {
																xcloselog();
																goto L47;
															}
														}
														else if(tmp___13 < -1) {
															xcloselog();
															goto L47;
														}
														else {
															xcloselog();
															goto L47;
														}
													}
													else if(line->cl_nice > 0) {
														goto L46;
													}
													else {
														xcloselog();
														goto L47;
													}
												}
												else if(to_stdout == 0) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(pid < 0) {
												goto L54;
											}
											else if(pid > 0 && pid < 1) {
												goto L54;
											}
											else {
												goto L54;
											}
										}
									}
									else if(to_stdout == 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(to_stdout < 0) {
									tmp___3 = (char *)"stdout";
									if(to_stdout < 0) {
										tmp___5 = change_user(line);
L62:;
										if(tmp___5 < 0) {
											goto L10;
										}
										else {
											sig_dfl();
											pid = fork();
											if(pid == 0-(1)) {
												goto L11;
											}
											else if(pid == 0) {
												if(to_stdout < 0) {
													foreground = (char)1;
													if(line->cl_nice < 0) {
L63:;
														tmp___12 = __errno_location();
														*tmp___12 = 0;
														tmp___13 = nice((int )line->cl_nice);
														if(tmp___13 == -1) {
															tmp___14 = __errno_location();
															if(*tmp___14 < 0) {
																error_e((char *)"could not set nice value");
																xcloselog();
L64:;
																env = (line->cl_file)->cf_env_base;
L65:;
L66:;
																if(env == 0) {
L67:;
																	home = getenv((char *)"HOME");
																	if(home < (0)) {
L68:;
																		tmp___17 = chdir(home);
																		if(tmp___17 < 0) {
																			error_e((char *)"Could not chdir to HOME dir \"%s\"", home);
L69:;
																			tmp___16 = chdir((char *)"/");
																			if(tmp___16 < 0) {
																				die_e((char *)"Could not chdir to HOME dir /");
L70:;
																				curshell = getenv((char *)"SHELL");
																				if(curshell == (0)) {
																					curshell = shell;
																					execl(curshell, curshell, "-c", line->cl_shell, (void *)0);
																					error_e((char *)"Can\'t find \"%s\". Trying a execlp(\"sh\",...)", curshell);
																					execlp((char *)"sh", (char *)"sh", "-c", line->cl_shell, (void *)0);
																					die_e((char *)"execl() \"%s -c %s\" error", curshell, line->cl_shell);
L71:;
																					close(pipe_fd[1]);
																					close(pipe_pid_fd[0]);
																					tmp___20 = write(pipe_pid_fd[1], (void *)(& pid), sizeof(pid));
																					if(tmp___20 < 0) {
																						error_e((char *)"could not write child pid to pipe_pid_fd[1]");
L72:;
																						close(pipe_pid_fd[1]);
																						if((line->cl_option[2] & 64) == 0) {
																							explain((char *)"Job %s started for user %s (pid %d)", line->cl_shell, (line->cl_file)->cf_user, pid);
L73:;
																							if(to_stdout < 0) {
																								goto L34;
																							}
																							else if(to_stdout == 0) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																						else if((line->cl_option[2] & 64) > 0) {
																							goto L73;
																						}
																						else {
																							goto L73;
																						}
																					}
																					else {
																						goto L72;
																					}
																				}
																				else if(curshell < (0)) {
L74:;
																					tmp___19 = access(curshell, 1);
																					if(tmp___19 < 0) {
L75:;
																						tmp___18 = __errno_location();
																						if(*tmp___18 == 2) {
																							error((char *)"shell \"%s\" : no file or directory. SHELL set to %s", curshell, shell);
L76:;
																							curshell = shell;
																							execl(curshell, curshell, "-c", line->cl_shell, (void *)0);
																							error_e((char *)"Can\'t find \"%s\". Trying a execlp(\"sh\",...)", curshell);
																							execlp((char *)"sh", (char *)"sh", "-c", line->cl_shell, (void *)0);
																							die_e((char *)"execl() \"%s -c %s\" error", curshell, line->cl_shell);
																							goto L71;
																						}
																						else if(*tmp___18 < 2) {
																							error_e((char *)"shell \"%s\" not valid : SHELL set to %s", curshell, shell);
																							goto L76;
																						}
																						else {
																							error_e((char *)"shell \"%s\" not valid : SHELL set to %s", curshell, shell);
																							goto L76;
																						}
																					}
																					else if(tmp___19 > 0) {
																						goto L75;
																					}
																					else {
																						execl(curshell, curshell, "-c", line->cl_shell, (void *)0);
																						error_e((char *)"Can\'t find \"%s\". Trying a execlp(\"sh\",...)", curshell);
																						execlp((char *)"sh", (char *)"sh", "-c", line->cl_shell, (void *)0);
																						die_e((char *)"execl() \"%s -c %s\" error", curshell, line->cl_shell);
																						goto L71;
																					}
																				}
																				else {
																					goto L74;
																				}
																			}
																			else {
																				goto L70;
																			}
																		}
																		else if(tmp___17 > 0) {
																			error_e((char *)"Could not chdir to HOME dir \"%s\"", home);
																			goto L69;
																		}
																		else {
																			goto L70;
																		}
																	}
																	else if(home > (0)) {
																		goto L68;
																	}
																	else {
																		goto L70;
																	}
																}
																else if(env > 0) {
L77:;
																	tmp___15 = putenv(env->e_val);
																	if(tmp___15 < 0) {
																		error((char *)"could not putenv()");
L78:;
																		env = env->e_next;
																		goto L66;
																	}
																	else if(tmp___15 > 0) {
																		error((char *)"could not putenv()");
																		goto L78;
																	}
																	else {
																		goto L78;
																	}
																}
																else {
																	goto L77;
																}
															}
															else if(*tmp___14 > 0) {
																error_e((char *)"could not set nice value");
																xcloselog();
																goto L64;
															}
															else {
																xcloselog();
																goto L64;
															}
														}
														else if(tmp___13 < -1) {
															xcloselog();
															goto L64;
														}
														else {
															xcloselog();
															goto L64;
														}
													}
													else if(line->cl_nice > 0) {
														goto L63;
													}
													else {
														xcloselog();
														goto L64;
													}
												}
												else if(to_stdout == 0) {
													/* FALSE PATH */ 
												}
												else {
													/* FALSE PATH */ 
												}
											}
											else if(pid < 0) {
												goto L71;
											}
											else if(pid > 0 && pid < 1) {
												goto L71;
											}
											else {
												goto L71;
											}
										}
									}
									else if(to_stdout == 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									tmp___3 = (char *)"file";
L79:;
									if(to_stdout == 0) {
L80:;
										if((line->cl_option[0] & 128) == 0) {
											mailf = create_mail(line, (char *)((void *)0));
											tmp___25 = ftell(mailf);
											mailpos = (short )tmp___25;
											tmp___4 = pipe(pipe_fd);
											if(tmp___4 < 0) {
												die_e((char *)"could not pipe()");
												tmp___5 = change_user(line);
L81:;
												if(tmp___5 < 0) {
													goto L10;
												}
												else {
													sig_dfl();
													pid = fork();
													if(pid == 0-(1)) {
														goto L11;
													}
													else if(pid == 0) {
														if(to_stdout == 0) {
															if(line->cl_option[0] & 128 > 0) {
L82:;
																if(foreground > 0) {
L83:;
																	tmp___26 = get_stdout();
																	tmp___10 = tmp___26;
																	tmp___10->BLAST_FLAG = 1;
																	freopen((char *)"/dev/null", (char *)"w", tmp___10);
																	tmp___27 = get_stderr();
																	tmp___11 = tmp___27;
																	tmp___11->BLAST_FLAG = 1;
																	freopen((char *)"/dev/null", (char *)"w", tmp___11);
L84:;
L85:;
																	foreground = (char)1;
																	if(line->cl_nice < 0) {
L86:;
																		tmp___12 = __errno_location();
																		*tmp___12 = 0;
																		tmp___13 = nice((int )line->cl_nice);
																		if(tmp___13 == -1) {
																			tmp___14 = __errno_location();
																			if(*tmp___14 < 0) {
																				error_e((char *)"could not set nice value");
																				xcloselog();
L87:;
																				env = (line->cl_file)->cf_env_base;
L88:;
L89:;
																				if(env == 0) {
L90:;
																					home = getenv((char *)"HOME");
																					if(home < (0)) {
L91:;
																						tmp___17 = chdir(home);
																						if(tmp___17 < 0) {
																							error_e((char *)"Could not chdir to HOME dir \"%s\"", home);
L92:;
																							tmp___16 = chdir((char *)"/");
																							if(tmp___16 < 0) {
																								die_e((char *)"Could not chdir to HOME dir /");
L93:;
																								curshell = getenv((char *)"SHELL");
																								if(curshell == (0)) {
																									curshell = shell;
																									execl(curshell, curshell, "-c", line->cl_shell, (void *)0);
																									error_e((char *)"Can\'t find \"%s\". Trying a execlp(\"sh\",...)", curshell);
																									execlp((char *)"sh", (char *)"sh", "-c", line->cl_shell, (void *)0);
																									die_e((char *)"execl() \"%s -c %s\" error", curshell, line->cl_shell);
L94:;
																									close(pipe_fd[1]);
																									close(pipe_pid_fd[0]);
																									tmp___20 = write(pipe_pid_fd[1], (void *)(& pid), sizeof(pid));
																									if(tmp___20 < 0) {
																										error_e((char *)"could not write child pid to pipe_pid_fd[1]");
L95:;
																										close(pipe_pid_fd[1]);
																										if((line->cl_option[2] & 64) == 0) {
																											explain((char *)"Job %s started for user %s (pid %d)", line->cl_shell, (line->cl_file)->cf_user, pid);
L96:;
																											if(to_stdout == 0) {
																												if((line->cl_option[0] & 128) == 0) {
																													tmp___21 = fdopen(pipe_fd[0], (char *)"r");
																													tmp___21->BLAST_FLAG = 1;
																													pipef = tmp___21;
																													if(pipef == (0)) {
																														die_e((char *)"Could not fdopen() pipe_fd[0]");
L97:;
																														mailbuf[sizeof(mailbuf) - 1U] = (char )'\000';
L98:;
L99:;
																														if(pipef->BLAST_FLAG < 1) {
																															BLAST_ERROR();
L100:;
L101:;
																															if(tmp___23 == (0)) {
																																goto L12;
																															}
																															else if(tmp___23 < (0)) {
L102:;
																																tmp___22 = fputs(mailbuf, mailf);
																																if(tmp___22 < 0) {
																																	warn((char *)"fputs() failed to write to mail file for job %s (pid %d)", line->cl_shell, pid);
L103:;
																																	if(pipef->BLAST_FLAG == 1) {
																																		pipef->BLAST_FLAG = 0;
																																		goto L34;
																																	}
																																	else if(pipef->BLAST_FLAG < 1) {
																																		BLAST_ERROR();
																																		goto L34;
																																	}
																																	else {
																																		BLAST_ERROR();
																																		goto L34;
																																	}
																																}
																																else {
																																	goto L103;
																																}
																															}
																															else {
																																goto L102;
																															}
																														}
																														else if(pipef->BLAST_FLAG > 1) {
																															BLAST_ERROR();
																															goto L100;
																														}
																														else {
																															tmp___23 = fgets(mailbuf, (int )sizeof(mailbuf), pipef);
																															goto L99;
																														}
																													}
																													else if(pipef < (0)) {
																														goto L97;
																													}
																													else {
																														goto L97;
																													}
																												}
																												else if((line->cl_option[0] & 128) > 0) {
																													goto L103;
																												}
																												else {
																													goto L103;
																												}
																											}
																											else if(to_stdout > 0) {
																												/* FALSE PATH */ 
																											}
																											else {
																												/* FALSE PATH */ 
																											}
																										}
																										else if((line->cl_option[2] & 64) > 0) {
																											goto L96;
																										}
																										else {
																											goto L96;
																										}
																									}
																									else {
																										goto L95;
																									}
																								}
																								else if(curshell < (0)) {
L104:;
																									tmp___19 = access(curshell, 1);
																									if(tmp___19 < 0) {
L105:;
																										tmp___18 = __errno_location();
																										if(*tmp___18 == 2) {
																											error((char *)"shell \"%s\" : no file or directory. SHELL set to %s", curshell, shell);
L106:;
																											curshell = shell;
																											execl(curshell, curshell, "-c", line->cl_shell, (void *)0);
																											error_e((char *)"Can\'t find \"%s\". Trying a execlp(\"sh\",...)", curshell);
																											execlp((char *)"sh", (char *)"sh", "-c", line->cl_shell, (void *)0);
																											die_e((char *)"execl() \"%s -c %s\" error", curshell, line->cl_shell);
																											goto L94;
																										}
																										else if(*tmp___18 < 2) {
																											error_e((char *)"shell \"%s\" not valid : SHELL set to %s", curshell, shell);
																											goto L106;
																										}
																										else {
																											error_e((char *)"shell \"%s\" not valid : SHELL set to %s", curshell, shell);
																											goto L106;
																										}
																									}
																									else if(tmp___19 > 0) {
																										goto L105;
																									}
																									else {
																										execl(curshell, curshell, "-c", line->cl_shell, (void *)0);
																										error_e((char *)"Can\'t find \"%s\". Trying a execlp(\"sh\",...)", curshell);
																										execlp((char *)"sh", (char *)"sh", "-c", line->cl_shell, (void *)0);
																										die_e((char *)"execl() \"%s -c %s\" error", curshell, line->cl_shell);
																										goto L94;
																									}
																								}
																								else {
																									goto L104;
																								}
																							}
																							else {
																								goto L93;
																							}
																						}
																						else if(tmp___17 > 0) {
																							error_e((char *)"Could not chdir to HOME dir \"%s\"", home);
																							goto L92;
																						}
																						else {
																							goto L93;
																						}
																					}
																					else if(home > (0)) {
																						goto L91;
																					}
																					else {
																						goto L93;
																					}
																				}
																				else if(env > 0) {
L107:;
																					tmp___15 = putenv(env->e_val);
																					if(tmp___15 < 0) {
																						error((char *)"could not putenv()");
L108:;
																						env = env->e_next;
																						goto L89;
																					}
																					else if(tmp___15 > 0) {
																						error((char *)"could not putenv()");
																						goto L108;
																					}
																					else {
																						goto L108;
																					}
																				}
																				else {
																					goto L107;
																				}
																			}
																			else if(*tmp___14 > 0) {
																				error_e((char *)"could not set nice value");
																				xcloselog();
																				goto L87;
																			}
																			else {
																				xcloselog();
																				goto L87;
																			}
																		}
																		else if(tmp___13 < -1) {
																			xcloselog();
																			goto L87;
																		}
																		else {
																			xcloselog();
																			goto L87;
																		}
																	}
																	else if(line->cl_nice > 0) {
																		goto L86;
																	}
																	else {
																		xcloselog();
																		goto L87;
																	}
																}
																else if(foreground < 0) {
																	goto L83;
																}
																else {
																	goto L84;
																}
															}
															else if(line->cl_option[0] & 128 < 0) {
																goto L82;
															}
															else {
																tmp___6 = dup2(pipe_fd[1], 1);
																if(tmp___6 < 1) {
																	die_e((char *)"dup2() error");
L109:;
L110:;
																	close(pipe_fd[0]);
																	close(pipe_fd[1]);
																	tmp___8 = get_stdout();
																	tmp___8->BLAST_FLAG = 1;
																	setlinebuf(tmp___8);
																	tmp___9 = get_stderr();
																	tmp___9->BLAST_FLAG = 1;
																	setlinebuf(tmp___9);
																	goto L85;
																}
																else if(tmp___6 > 1) {
																	die_e((char *)"dup2() error");
																	goto L109;
																}
																else {
																	tmp___7 = dup2(1, 2);
																	if(tmp___7 < 2) {
																		die_e((char *)"dup2() error");
																		goto L110;
																	}
																	else if(tmp___7 > 2) {
																		die_e((char *)"dup2() error");
																		goto L110;
																	}
																	else {
																		goto L110;
																	}
																}
															}
														}
														else if(to_stdout > 0) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else if(pid < 0) {
														goto L94;
													}
													else if(pid > 0 && pid < 1) {
														goto L94;
													}
													else {
														goto L94;
													}
												}
											}
											else if(tmp___4 > 0) {
												die_e((char *)"could not pipe()");
												tmp___5 = change_user(line);
												goto L81;
											}
											else {
												tmp___5 = change_user(line);
												goto L81;
											}
										}
										else if((line->cl_option[0] & 128) > 0) {
											tmp___5 = change_user(line);
											goto L81;
										}
										else {
											tmp___5 = change_user(line);
											goto L81;
										}
									}
									else if(to_stdout > 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
							}
							else if(foreground < 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(line->cl_option[3] & 2 < 0) {
							goto L41;
						}
						else {
							tmp___1 = (char *)"normal";
							goto L42;
						}
					}
					else if(debug_opt < 0) {
						goto L40;
					}
					else {
L111:;
						if(to_stdout == 0) {
							goto L80;
						}
						else if(to_stdout > 0) {
							tmp___5 = change_user(line);
							goto L45;
						}
						else {
							tmp___5 = change_user(line);
							goto L62;
						}
					}
				}
			}
			else if(foreground < 0) {
				if(line->cl_option[3] & 2 > 0) {
L112:;
					tmp___0 = 1;
					to_stdout = tmp___0;
					mailpos = (short)0;
					if(debug_opt > 0) {
L113:;
						if(line->cl_option[3] & 2 > 0) {
L114:;
							tmp___1 = (char *)"stdout";
L115:;
							if(foreground < 0) {
								goto L8;
							}
							else if(foreground > 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(line->cl_option[3] & 2 < 0) {
							goto L114;
						}
						else {
							tmp___1 = (char *)"normal";
							goto L115;
						}
					}
					else if(debug_opt < 0) {
						goto L113;
					}
					else {
						goto L9;
					}
				}
				else if(line->cl_option[3] & 2 < 0) {
					goto L112;
				}
				else {
					to_stdout = tmp___0;
					mailpos = (short)0;
					if(debug_opt > 0) {
L116:;
						if(line->cl_option[3] & 2 > 0) {
L117:;
							tmp___1 = (char *)"stdout";
L118:;
							if(foreground < 0) {
								goto L43;
							}
							else if(foreground > 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(line->cl_option[3] & 2 < 0) {
							goto L117;
						}
						else {
							tmp___1 = (char *)"normal";
							goto L118;
						}
					}
					else if(debug_opt < 0) {
						goto L116;
					}
					else {
						goto L111;
					}
				}
			}
			else {
				tmp___0 = 0;
				to_stdout = tmp___0;
				mailpos = (short)0;
				if(debug_opt > 0) {
L119:;
					if(line->cl_option[3] & 2 > 0) {
L120:;
						tmp___1 = (char *)"stdout";
L121:;
						if(foreground == 0) {
							tmp___2 = (char *)"running in background";
							goto L44;
						}
						else if(foreground > 0) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else if(line->cl_option[3] & 2 < 0) {
						goto L120;
					}
					else {
						tmp___1 = (char *)"normal";
						goto L121;
					}
				}
				else if(debug_opt < 0) {
					goto L119;
				}
				else {
					goto L79;
				}
			}
		}
		else if(pid < 0) {
			goto L16;
		}
		else if(pid > 0 && pid < 1) {
			goto L16;
		}
		else {
			goto L16;
		}
	}
	else if(tmp > 0) {
		error_e((char *)"pipe(pipe_pid_fd) : setting job_pid to -1");
		goto L1;
	}
	else {
		goto L2;
	}
}

FILE *create_mail(struct cl_t *line , char *subject )
{ int mailfd ;
int tmp ;
FILE *mailf ;
FILE *tmp___0 ;
char hostname[128] ;
char complete_adr ;
int i ;
int tmp___1 ;
char *tmp___2 ;
char *tmp___3 ;
	tmp = temp_file((char **)((void *)0));
	mailfd = tmp;
	tmp___0 = fdopen(mailfd, (char *)"r+");
	tmp___0->BLAST_FLAG = 1;
	mailf = tmp___0;
	complete_adr = (char)0;
	if(mailf == (0)) {
		die_e((char *)"Could not fdopen() mailfd");
L1:;
		if(mailf->BLAST_FLAG < 1) {
			BLAST_ERROR();
L2:;
			fprintf(mailf, (char *)"To: %s", line->cl_mailto);
			tmp___1 = gethostname(hostname, sizeof(hostname));
			if(tmp___1 < 0) {
				error_e((char *)"Could not get hostname");
L3:;
				hostname[0] = (char )'\000';
L4:;
				if(subject > 0) {
L5:;
					if(hostname[0] < 0) {
L6:;
						tmp___2 = hostname;
L7:;
						if(mailf->BLAST_FLAG < 1) {
							BLAST_ERROR();
L8:;
							fprintf(mailf, (char *)"\nSubject: fcron <%s@%s> %s: %s\n\n", (line->cl_file)->cf_user, tmp___2, subject, line->cl_shell);
L9:;
							return (mailf);
							/* END OF PATH at func_create_mail@p56#1 */
						}
						else if(mailf->BLAST_FLAG > 1) {
							BLAST_ERROR();
							goto L8;
						}
						else {
							goto L8;
						}
					}
					else if(hostname[0] > 0) {
						goto L6;
					}
					else {
						tmp___2 = (char *)"?";
						goto L7;
					}
				}
				else if(subject < 0) {
					goto L5;
				}
				else {
					if(hostname[0] < 0) {
L10:;
						tmp___3 = hostname;
L11:;
						if(mailf->BLAST_FLAG < 1) {
							BLAST_ERROR();
L12:;
							fprintf(mailf, (char *)"\nSubject: fcron <%s@%s> %s\n\n", (line->cl_file)->cf_user, tmp___3, line->cl_shell);
							goto L9;
						}
						else if(mailf->BLAST_FLAG > 1) {
							BLAST_ERROR();
							goto L12;
						}
						else {
							goto L12;
						}
					}
					else if(hostname[0] > 0) {
						goto L10;
					}
					else {
						tmp___3 = (char *)"?";
						goto L11;
					}
				}
			}
			else if(tmp___1 > 0) {
				error_e((char *)"Could not get hostname");
				goto L3;
			}
			else {
				hostname[127] = (char )'\000';
				i = 0;
L13:;
L14:;
				if(*(line->cl_mailto + i) == 0) {
L15:;
L16:;
					if(complete_adr == 0) {
						if(mailf->BLAST_FLAG < 1) {
							BLAST_ERROR();
L17:;
							fprintf(mailf, (char *)"@%s", hostname);
							goto L4;
						}
						else if(mailf->BLAST_FLAG > 1) {
							BLAST_ERROR();
							goto L17;
						}
						else {
							goto L17;
						}
					}
					else if(complete_adr > 0) {
						goto L4;
					}
					else {
						goto L4;
					}
				}
				else if(*(line->cl_mailto + i) < 0) {
L18:;
					if(*(line->cl_mailto + i) == 64) {
						complete_adr = (char)1;
						goto L15;
					}
					else if(*(line->cl_mailto + i) < 64) {
L19:;
						i = i + 1;
						goto L14;
					}
					else {
						goto L19;
					}
				}
				else {
					goto L18;
				}
			}
		}
		else if(mailf->BLAST_FLAG > 1) {
			BLAST_ERROR();
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else if(mailf < (0)) {
		goto L1;
	}
	else {
		goto L1;
	}
}

void launch_mailer(struct cl_t *line , FILE *mailf )
{ int tmp ;
int tmp___0 ;
int tmp___1 ;
int tmp___2 ;
	foreground = (char)0;
	tmp = fseek(mailf, 0L, 0);
	if(tmp < 0) {
		die_e((char *)"Can\'t fseek()");
L1:;
		tmp___0 = fileno(mailf);
		tmp___1 = dup2(tmp___0, 0);
		if(tmp___1 < 0) {
			die_e((char *)"Can\'t dup2(fileno(mailf))");
			xcloselog();
L2:;
			tmp___2 = chdir((char *)"/");
			if(tmp___2 < 0) {
				die_e((char *)"Could not chdir to /");
				execl(sendmail, sendmail, "-Ffcron", "-odi", line->cl_mailto, (void *)0);
				error_e((char *)"Can\'t find \"%s\". Trying a execlp(\"sendmail\")", sendmail);
				execlp((char *)"sendmail", (char *)"sendmail", "-Ffcron", "-odi", line->cl_mailto, (void *)0);
				die_e((char *)"Can\'t exec /usr/lib/sendmail");
L3:;
				/* END OF PATH at func_launch_mailer@p21#1 */
			}
			else {
				execl(sendmail, sendmail, "-Ffcron", "-odi", line->cl_mailto, (void *)0);
				error_e((char *)"Can\'t find \"%s\". Trying a execlp(\"sendmail\")", sendmail);
				execlp((char *)"sendmail", (char *)"sendmail", "-Ffcron", "-odi", line->cl_mailto, (void *)0);
				die_e((char *)"Can\'t exec /usr/lib/sendmail");
				goto L3;
			}
		}
		else if(tmp___1 > 0) {
			die_e((char *)"Can\'t dup2(fileno(mailf))");
			xcloselog();
			goto L2;
		}
		else {
			xcloselog();
			goto L2;
		}
	}
	else if(tmp > 0) {
		die_e((char *)"Can\'t fseek()");
		goto L1;
	}
	else {
		goto L1;
	}
}

void check_socket(int num )
{ int fd ;
int avoid_fd ;
int addr_len ;
struct sockaddr_un client_addr ;
long buf_int[20] ;
int read_len ;
struct fcrondyn_cl *client ;
struct fcrondyn_cl *prev_client ;
int tmp ;
int tmp___0 ;
int UNK1 ;
int UNK2 ;
void *tmp___1 ;
	fd = -1;
	avoid_fd = -1;
	addr_len = (int )sizeof(struct sockaddr_un );
	read_len = 0;
	client = (struct fcrondyn_cl *)((void *)0);
	prev_client = (struct fcrondyn_cl *)((void *)0);
	if(num <= 0) {
L1:;
		read_set = master_set;
		/* END OF PATH at func_check_socket@p91#1 */
	}
	else {
		if(UNK1 > 0) {
L2:;
			fd = accept(listen_fd, (void *)((struct sockaddr *)(& client_addr)), (socklen_t *)(& addr_len));
			if(fd < -1) {
L3:;
				fcntl(fd, 2, 1);
				tmp = fcntl(fd, 3);
				tmp___0 = fcntl(fd, 4, tmp | 2048);
				if(tmp___0 == -1) {
					error_e((char *)"Could not set fd attribute O_NONBLOCK : connection rejected.");
					shutdown(fd, 2);
					close(fd);
L4:;
					client = fcrondyn_cl_base;
L5:;
L6:;
					if(client == (0)) {
L7:;
						goto L1;
					}
					else if(client < (0)) {
L8:;
						if(UNK2 > 0) {
L9:;
							if(client->fcl_sock_fd == avoid_fd) {
L10:;
								if(client->fcl_user == (0)) {
									if(now - client->fcl_idle_since > 60L) {
										warn((char *)"Connection with no auth for more than %ds : closing it.", 60);
										remove_connection(& client, prev_client);
										goto L6;
									}
									else {
L11:;
										if(now - client->fcl_idle_since > 600L) {
											warn((char *)"Connection of %s is idle for more than %ds : closing it.", client->fcl_user, 600);
											remove_connection(& client, prev_client);
											/* END OF PATH at func_check_socket@p66#2 */
										}
										else {
											prev_client = client;
											client = client->fcl_next;
											/* END OF PATH at func_check_socket@p66#3 */
										}
									}
								}
								else if(client->fcl_user < (0)) {
									goto L11;
								}
								else {
									goto L11;
								}
							}
							else if(client->fcl_sock_fd < avoid_fd) {
L12:;
								read_len = recv(client->fcl_sock_fd, (void *)(buf_int), sizeof(buf_int), 0);
								if(read_len <= 0) {
									if(read_len == 0) {
										remove_connection(& client, prev_client);
L13:;
										goto L6;
									}
									else if(read_len < 0) {
										error_e((char *)"error recv() from sock fd %d", client->fcl_sock_fd);
										prev_client = client;
										client = client->fcl_next;
										goto L13;
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									client->fcl_cmd_len = read_len;
									client->fcl_cmd = buf_int;
									if(client->fcl_user == (0)) {
										auth_client(client);
L14:;
										prev_client = client;
										client = client->fcl_next;
										/* END OF PATH at func_check_socket@p87#2 */
									}
									else if(client->fcl_user < (0)) {
L15:;
										client->fcl_idle_since = now;
										exe_cmd(client);
										goto L14;
									}
									else {
										goto L15;
									}
								}
							}
							else {
								goto L12;
							}
						}
						else if(UNK2 < 0) {
							goto L9;
						}
						else {
							goto L10;
						}
					}
					else {
						goto L8;
					}
				}
				else if(tmp___0 < -1) {
L16:;
					tmp___1 = calloc(1U, sizeof(fcrondyn_cl ));
					client = (struct fcrondyn_cl *)tmp___1;
					if(client == (0)) {
						die_e((char *)"Could not calloc.");
L17:;
						client->fcl_sock_fd = fd;
						client->fcl_user = (char *)((void *)0);
						client->fcl_cmd = (long *)((void *)0);
						client->fcl_next = fcrondyn_cl_base;
						fcrondyn_cl_base = client;
						client->fcl_idle_since = now;
						avoid_fd = fd;
						if(fd > set_max_fd) {
							set_max_fd = fd;
L18:;
							fcrondyn_cl_num = fcrondyn_cl_num + 1;
							goto L4;
						}
						else {
							goto L18;
						}
					}
					else if(client < (0)) {
						goto L17;
					}
					else {
						goto L17;
					}
				}
				else {
					goto L16;
				}
			}
			else if(fd > -1) {
				goto L3;
			}
			else {
				goto L4;
			}
		}
		else if(UNK1 < 0) {
			goto L2;
		}
		else {
			goto L4;
		}
	}
}

void close_socket(void)
{ struct fcrondyn_cl *client ;
struct fcrondyn_cl *client_buf ;
	client_buf = (struct fcrondyn_cl *)((void *)0);
	if(listen_fd > 0) {
L1:;
		shutdown(listen_fd, 2);
		close(listen_fd);
		unlink(fifofile);
		client = fcrondyn_cl_base;
L2:;
L3:;
		if(client == (0)) {
L4:;
L5:;
			/* END OF PATH at func_close_socket@p19#1 */
		}
		else if(client < (0)) {
L6:;
			shutdown(client->fcl_sock_fd, 2);
			close(client->fcl_sock_fd);
			client_buf = client->fcl_next;
			free((void *)client);
			client = (struct fcrondyn_cl *)((void *)0);
			fcrondyn_cl_num = fcrondyn_cl_num - 1;
			client = client_buf;
			goto L3;
		}
		else {
			goto L6;
		}
	}
	else if(listen_fd < 0) {
		goto L1;
	}
	else {
		goto L5;
	}
}

void main_loop(void)
{ time_t save ;
time_t stime___0 ;
struct timeval tv ;
int retcode ;
int *tmp ;
int *tmp___0 ;
	retcode = 0;
	if(debug_opt > 0) {
		Debug((char *)"Entering main loop");
L1:;
		now = time((time_t *)((void *)0));
		synchronize_dir((char *)".");
		save = now + save_time;
		if(serial_num > 0) {
			stime___0 = first_sleep;
L2:;
			gettimeofday(& tv, (struct timezone *)((void *)0));
			if(stime___0 > 1L) {
				tv.tv_sec = stime___0 - 1L;
L3:;
				tv.tv_usec = 1000000L - tv.tv_usec;
				retcode = select(set_max_fd + 1, & read_set, (fd_set *)((void *)0), (fd_set *)((void *)0), & tv);
				if(retcode < 0) {
					tmp___0 = __errno_location();
					if(*tmp___0 < 4) {
L4:;
						tmp = __errno_location();
						die_e((char *)"select return %d", *tmp);
L5:;
						now = time((time_t *)((void *)0));
						check_signal();
						if(debug_opt > 0) {
							Debug((char *)"\n");
							test_jobs();
L6:;
L7:;
							if(serial_num > 0) {
								if(serial_running >= serial_max_running) {
L8:;
L9:;
									if(once > 0) {
										explain((char *)"Running with option once : exiting ... ");
										xexit(0);
L10:;
										if(save <= now) {
											save = now + save_time;
											save_file((struct cf_t *)((void *)0));
											check_socket(retcode);
											stime___0 = check_lavg(save);
L11:;
											if(debug_opt > 0) {
												Debug((char *)"next sleep time : %ld", stime___0);
												check_signal();
L12:;
												/* END OF PATH at func_main_loop@p62#1 */
											}
											else if(debug_opt < 0) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else {
											check_socket(retcode);
											stime___0 = check_lavg(save);
											goto L11;
										}
									}
									else if(once < 0) {
										explain((char *)"Running with option once : exiting ... ");
										xexit(0);
										goto L10;
									}
									else {
										goto L10;
									}
								}
								else {
									run_serial_job();
									goto L7;
								}
							}
							else {
								/* END OF PATH at func_main_loop@p41#3 */
							}
						}
						else if(debug_opt < 0) {
							Debug((char *)"\n");
							test_jobs();
L13:;
L14:;
							if(serial_num > 0) {
								if(serial_running >= serial_max_running) {
L15:;
L16:;
									if(once > 0) {
										explain((char *)"Running with option once : exiting ... ");
										xexit(0);
L17:;
										if(save <= now) {
											save = now + save_time;
											save_file((struct cf_t *)((void *)0));
											check_socket(retcode);
											stime___0 = check_lavg(save);
L18:;
											if(debug_opt < 0) {
												Debug((char *)"next sleep time : %ld", stime___0);
												check_signal();
												goto L12;
											}
											else if(debug_opt > 0) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else {
											check_socket(retcode);
											stime___0 = check_lavg(save);
											goto L18;
										}
									}
									else if(once < 0) {
										explain((char *)"Running with option once : exiting ... ");
										xexit(0);
										goto L17;
									}
									else {
										goto L17;
									}
								}
								else {
									run_serial_job();
									goto L14;
								}
							}
							else {
								/* END OF PATH at func_main_loop@p41#7 */
							}
						}
						else {
							test_jobs();
L19:;
L20:;
							if(serial_num > 0) {
								if(serial_running >= serial_max_running) {
L21:;
L22:;
									if(once > 0) {
										explain((char *)"Running with option once : exiting ... ");
										xexit(0);
L23:;
										if(save <= now) {
											save = now + save_time;
											save_file((struct cf_t *)((void *)0));
											check_socket(retcode);
											stime___0 = check_lavg(save);
L24:;
											if(debug_opt == 0) {
												check_signal();
												goto L12;
											}
											else if(debug_opt > 0) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else {
											check_socket(retcode);
											stime___0 = check_lavg(save);
											goto L24;
										}
									}
									else if(once < 0) {
										explain((char *)"Running with option once : exiting ... ");
										xexit(0);
										goto L23;
									}
									else {
										goto L23;
									}
								}
								else {
									run_serial_job();
									goto L20;
								}
							}
							else {
								/* END OF PATH at func_main_loop@p41#11 */
							}
						}
					}
					else if(*tmp___0 > 4) {
						goto L4;
					}
					else {
						goto L5;
					}
				}
				else {
					goto L5;
				}
			}
			else {
				tv.tv_sec = 0L;
				goto L3;
			}
		}
		else {
			if(once > 0) {
L25:;
				stime___0 = first_sleep;
				goto L2;
			}
			else if(once < 0) {
				goto L25;
			}
			else {
				stime___0 = time_to_sleep(save);
				if(stime___0 < first_sleep) {
					stime___0 = first_sleep;
					goto L2;
				}
				else {
					goto L2;
				}
			}
		}
	}
	else if(debug_opt < 0) {
		Debug((char *)"Entering main loop");
		goto L1;
	}
	else {
		goto L1;
	}
}

void check_signal(void)
{
	if(sig_chld > 0) {
		wait_chld();
		sig_chld = (char)0;
		signal(17, & sigchild_handler);
		siginterrupt(17, 0);
L1:;
		if(sig_conf > 0) {
			if(sig_conf == 1) {
				synchronize_dir((char *)".");
				sig_conf = (char)0;
				signal(1, & sighup_handler);
				siginterrupt(1, 0);
L2:;
				if(sig_debug > 0) {
					print_schedule();
					if(debug_opt > 0) {
						debug_opt = (char)0;
						explain((char *)"debug_opt = %d", debug_opt);
L3:;
						sig_debug = (char)0;
						signal(12, & sigusr2_handler);
						siginterrupt(12, 0);
L4:;
						/* END OF PATH at func_check_signal@p27#1 */
					}
					else {
						debug_opt = (char)1;
						explain((char *)"debug_opt = %d", debug_opt);
						goto L3;
					}
				}
				else {
					goto L4;
				}
			}
			else if(sig_conf < 1) {
				reload_all((char *)".");
L5:;
				sig_conf = (char)0;
				signal(10, & sigusr1_handler);
				siginterrupt(10, 0);
				goto L2;
			}
			else {
				reload_all((char *)".");
				goto L5;
			}
		}
		else {
			goto L2;
		}
	}
	else {
		goto L1;
	}
}

void info(void)
{ FILE *tmp ;
FILE *tmp___0 ;
	tmp___0 = get_stderr();
	tmp = tmp___0;
	tmp->BLAST_FLAG = 1;
	if(tmp->BLAST_FLAG < 1) {
		BLAST_ERROR();
		fprintf(tmp, (char *)"fcron 2.9.5 - periodic command scheduler\nCopyright 2000-2004 Thibault Godouet <fcron@free.fr>\nThis program is free software distributed WITHOUT ANY WARRANTY.\nSee the GNU General Public License for more details.\n");
		exit(0);
L1:;
		/* END OF PATH at func_info@p10#1 */
	}
	else if(tmp->BLAST_FLAG > 1) {
		BLAST_ERROR();
		fprintf(tmp, (char *)"fcron 2.9.5 - periodic command scheduler\nCopyright 2000-2004 Thibault Godouet <fcron@free.fr>\nThis program is free software distributed WITHOUT ANY WARRANTY.\nSee the GNU General Public License for more details.\n");
		exit(0);
		goto L1;
	}
	else {
		fprintf(tmp, (char *)"fcron 2.9.5 - periodic command scheduler\nCopyright 2000-2004 Thibault Godouet <fcron@free.fr>\nThis program is free software distributed WITHOUT ANY WARRANTY.\nSee the GNU General Public License for more details.\n");
		exit(0);
		goto L1;
	}
}

void usage(void)
{ FILE *tmp ;
FILE *tmp___0 ;
	tmp___0 = get_stderr();
	tmp = tmp___0;
	tmp->BLAST_FLAG = 1;
	if(tmp->BLAST_FLAG < 1) {
		BLAST_ERROR();
		fprintf(tmp, (char *)"\nfcron 2.9.5\n\nfcron [-d] [-f] [-b]\nfcron -h\n  -s t   --savetime t     Save fcrontabs on disk every t sec.\n  -l t   --firstsleep t   Sets the initial delay before any job is executed,\n                          default to %d seconds.\n  -m n   --maxserial n    Set to n the max number of running serial jobs.\n  -c f   --configfile f   Make fcron use config file f.\n  -n d   --newspooldir d  Create d as a new spool directory.\n  -f     --foreground     Stay in foreground.\n  -b     --background     Go to background.\n  -y     --nosyslog       Don\'t log to syslog at all.\n  -o     --once           Execute all jobs that need to be run, wait for them,\n                          then return. Sets firstsleep to 0.\n                          Especially useful with -f and -y.\n  -d     --debug          Set Debug mode.\n  -h     --help           Show this help message.\n  -V     --version        Display version & infos about fcron.\n", 20);
		exit(1);
L1:;
		/* END OF PATH at func_usage@p10#1 */
	}
	else if(tmp->BLAST_FLAG > 1) {
		BLAST_ERROR();
		fprintf(tmp, (char *)"\nfcron 2.9.5\n\nfcron [-d] [-f] [-b]\nfcron -h\n  -s t   --savetime t     Save fcrontabs on disk every t sec.\n  -l t   --firstsleep t   Sets the initial delay before any job is executed,\n                          default to %d seconds.\n  -m n   --maxserial n    Set to n the max number of running serial jobs.\n  -c f   --configfile f   Make fcron use config file f.\n  -n d   --newspooldir d  Create d as a new spool directory.\n  -f     --foreground     Stay in foreground.\n  -b     --background     Go to background.\n  -y     --nosyslog       Don\'t log to syslog at all.\n  -o     --once           Execute all jobs that need to be run, wait for them,\n                          then return. Sets firstsleep to 0.\n                          Especially useful with -f and -y.\n  -d     --debug          Set Debug mode.\n  -h     --help           Show this help message.\n  -V     --version        Display version & infos about fcron.\n", 20);
		exit(1);
		goto L1;
	}
	else {
		fprintf(tmp, (char *)"\nfcron 2.9.5\n\nfcron [-d] [-f] [-b]\nfcron -h\n  -s t   --savetime t     Save fcrontabs on disk every t sec.\n  -l t   --firstsleep t   Sets the initial delay before any job is executed,\n                          default to %d seconds.\n  -m n   --maxserial n    Set to n the max number of running serial jobs.\n  -c f   --configfile f   Make fcron use config file f.\n  -n d   --newspooldir d  Create d as a new spool directory.\n  -f     --foreground     Stay in foreground.\n  -b     --background     Go to background.\n  -y     --nosyslog       Don\'t log to syslog at all.\n  -o     --once           Execute all jobs that need to be run, wait for them,\n                          then return. Sets firstsleep to 0.\n                          Especially useful with -f and -y.\n  -d     --debug          Set Debug mode.\n  -h     --help           Show this help message.\n  -V     --version        Display version & infos about fcron.\n", 20);
		exit(1);
		goto L1;
	}
}

void print_schedule(void)
{ cf_t *cf ;
cl_t *cl ;
struct tm *ftime ;
	explain((char *)"Printing schedule ...");
	cf = file_base;
L1:;
L2:;
	if(cf == 0) {
L3:;
		explain((char *)"... end of printing schedule.");
		/* END OF PATH at func_print_schedule@p19#1 */
	}
	else if(cf > 0) {
		explain((char *)" File %s", cf->cf_user);
L4:;
		cl = cf->cf_line_base;
L5:;
L6:;
		if(cl == 0) {
L7:;
			cf = cf->cf_next;
			goto L2;
		}
		else if(cl > 0) {
L8:;
			ftime = localtime(& cl->cl_nextexe);
			explain((char *)"  cmd %s next exec %d/%d/%d wday:%d %02d:%02d", cl->cl_shell, ftime->tm_mon + 1, ftime->tm_mday, ftime->tm_year + 1900, ftime->tm_wday, ftime->tm_hour, ftime->tm_min);
			cl = cl->cl_next;
			goto L6;
		}
		else {
			goto L8;
		}
	}
	else {
		explain((char *)" File %s", cf->cf_user);
		goto L4;
	}
}

void sighup_handler(int x )
{
	sig_conf = (char)1;
	/* END OF PATH at func_sighup_handler@p2#1 */
}

void sigterm_handler(int x )
{
	if(debug_opt > 0) {
		Debug((char *)"");
		explain((char *)"SIGTERM signal received");
		xexit(0);
L1:;
		/* END OF PATH at func_sigterm_handler@p5#1 */
	}
	else if(debug_opt < 0) {
		Debug((char *)"");
		explain((char *)"SIGTERM signal received");
		xexit(0);
		goto L1;
	}
	else {
		explain((char *)"SIGTERM signal received");
		xexit(0);
		goto L1;
	}
}

void sigchild_handler(int x )
{
	sig_chld = (char)1;
	/* END OF PATH at func_sigchild_handler@p2#1 */
}

void sigusr1_handler(int x )
{
	sig_conf = (char)2;
	/* END OF PATH at func_sigusr1_handler@p2#1 */
}

void sigusr2_handler(int x )
{
	sig_debug = (char)1;
	/* END OF PATH at func_sigusr2_handler@p2#1 */
}

int parseopt(int argc , char **argv )
{ int c ;
int i ;
long tmp ;
long tmp___0 ;
L1:;
L2:;
	c = getopt_long(argc, argv, (char *)"dfbyhVos:l:m:c:n:q:", opt, (int *)((void *)0));
	if(c == -1) {
L3:;
		if(optind < argc) {
			i = optind;
L4:;
L5:;
			if(i > argc) {
L6:;
				usage();
L7:;
				return (0);
				/* END OF PATH at func_parseopt@p93#1 */
			}
			else {
				error((char *)"Unknown argument \"%s\"", *(argv + i));
				i = i + 1;
				goto L5;
			}
		}
		else {
			goto L7;
		}
	}
	else if(c < -1) {
		if((c) < 58) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
L8:;
L9:;
			goto L2;
		}
		else if((c) == 86) {
			/* FALSE PATH */ 
		}
		else if((c) == 104) {
			/* FALSE PATH */ 
		}
		else if((c) == 100) {
			/* FALSE PATH */ 
		}
		else if((c) == 102) {
			/* FALSE PATH */ 
		}
		else if((c) == 98) {
			/* FALSE PATH */ 
		}
		else if((c) == 121) {
			/* FALSE PATH */ 
		}
		else if((c) == 111) {
			/* FALSE PATH */ 
		}
		else if((c) == 115) {
			/* FALSE PATH */ 
		}
		else if((c) == 108) {
			/* FALSE PATH */ 
		}
		else if((c) == 109) {
			/* FALSE PATH */ 
		}
		else if((c) == 99) {
			/* FALSE PATH */ 
		}
		else if((c) == 110) {
			/* FALSE PATH */ 
		}
		else if((c) == 113) {
			/* FALSE PATH */ 
		}
		else if((c) == 58) {
			/* FALSE PATH */ 
		}
		else if((c) == 63) {
			/* FALSE PATH */ 
		}
		else if((c) > 58 && (c) < 63) {
			/* FALSE PATH */ 
		}
		else if((c) > 63 && (c) < 86) {
			/* FALSE PATH */ 
		}
		else if((c) > 86 && (c) < 98) {
			/* FALSE PATH */ 
		}
		else if((c) > 98 && (c) < 99) {
			/* FALSE PATH */ 
		}
		else if((c) > 99 && (c) < 100) {
			/* FALSE PATH */ 
		}
		else if((c) > 100 && (c) < 102) {
			/* FALSE PATH */ 
		}
		else if((c) > 102 && (c) < 104) {
			/* FALSE PATH */ 
		}
		else if((c) > 104 && (c) < 108) {
			/* FALSE PATH */ 
		}
		else if((c) > 108 && (c) < 109) {
			/* FALSE PATH */ 
		}
		else if((c) > 109 && (c) < 110) {
			/* FALSE PATH */ 
		}
		else if((c) > 110 && (c) < 111) {
			/* FALSE PATH */ 
		}
		else if((c) > 111 && (c) < 113) {
			/* FALSE PATH */ 
		}
		else if((c) > 113 && (c) < 115) {
			/* FALSE PATH */ 
		}
		else if((c) > 115 && (c) < 121) {
			/* FALSE PATH */ 
		}
		else {
			/* FALSE PATH */ 
		}
	}
	else {
		if((c) == 86) {
			info();
			goto L9;
		}
		else if((c) == 104) {
			usage();
			goto L9;
		}
		else if((c) == 100) {
			debug_opt = (char)1;
			goto L9;
		}
		else if((c) == 102) {
			foreground = (char)1;
			goto L9;
		}
		else if((c) == 98) {
			foreground = (char)0;
			goto L9;
		}
		else if((c) == 121) {
			dosyslog = (char)0;
			goto L9;
		}
		else if((c) == 111) {
			once = (char)1;
			first_sleep = 0L;
			goto L9;
		}
		else if((c) == 115) {
			save_time = strtol(optarg, (char **)((void *)0), 10);
			if(save_time < 60L) {
				die((char *)"Save time can only be set between 60 and %d.", 2147483647L);
L10:;
				goto L9;
			}
			else {
				if(save_time >= 2147483647L) {
					die((char *)"Save time can only be set between 60 and %d.", 2147483647L);
					goto L10;
				}
				else {
					goto L10;
				}
			}
		}
		else if((c) == 108) {
			first_sleep = strtol(optarg, (char **)((void *)0), 10);
			if(first_sleep < 0L) {
				die((char *)"First sleep can only be set between 0 and %d.", 2147483647L);
L11:;
				goto L9;
			}
			else {
				if(first_sleep >= 2147483647L) {
					die((char *)"First sleep can only be set between 0 and %d.", 2147483647L);
					goto L11;
				}
				else {
					goto L11;
				}
			}
		}
		else if((c) == 109) {
			tmp = strtol(optarg, (char **)((void *)0), 10);
			serial_max_running = (short )tmp;
			if(serial_max_running <= 0) {
				die((char *)"Max running can only be set between 1 and %d.", 32767);
L12:;
				goto L9;
			}
			else {
				if(serial_max_running >= 32767) {
					die((char *)"Max running can only be set between 1 and %d.", 32767);
					goto L12;
				}
				else {
					goto L12;
				}
			}
		}
		else if((c) == 99) {
			free((void *)fcronconf);
			fcronconf = strdup2(optarg);
			goto L9;
		}
		else if((c) == 110) {
			create_spooldir(optarg);
			goto L9;
		}
		else if((c) == 113) {
			tmp___0 = strtol(optarg, (char **)((void *)0), 10);
			serial_queue_max = (short )tmp___0;
			lavg_queue_max = serial_queue_max;
			if(lavg_queue_max < 5) {
				die((char *)"Queue length can only be set between 5 and %d.", 32767);
L13:;
				goto L9;
			}
			else {
				if(serial_queue_max >= 32767) {
					die((char *)"Queue length can only be set between 5 and %d.", 32767);
					goto L13;
				}
				else {
					goto L13;
				}
			}
		}
		else if((c) == 58) {
			error((char *)"(parseopt) Missing parameter");
			usage();
			usage();
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) == 63) {
			usage();
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) < 58) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) > 58 && (c) < 63) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) > 63 && (c) < 86) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) > 86 && (c) < 98) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) > 98 && (c) < 99) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) > 99 && (c) < 100) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) > 100 && (c) < 102) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) > 102 && (c) < 104) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) > 104 && (c) < 108) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) > 108 && (c) < 109) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) > 109 && (c) < 110) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) > 110 && (c) < 111) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) > 111 && (c) < 113) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) > 113 && (c) < 115) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else if((c) > 115 && (c) < 121) {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
		else {
			warn((char *)"(parseopt) Warning: getopt returned %c", c);
			goto L8;
		}
	}
}

void get_lock(void)
{ int otherpid ;
FILE *daemon_lockfp ;
int fd ;
int tmp ;
__off_t tmp___0 ;
int tmp___1 ;
	otherpid = 0;
	daemon_lockfp = (FILE *)((void *)0);
	fd = open(pidfile, 66, 420);
	if(fd == -1) {
		die_e((char *)"can\'t open or create %s", pidfile);
L1:;
		tmp = flock(fd, 6);
		if(tmp < 0) {
			fscanf(daemon_lockfp, (char *)"%d", & otherpid);
			die_e((char *)"can\'t lock %s, running daemon\'s pid may be %d", pidfile, otherpid);
L2:;
			fcntl(fd, 2, 1);
			rewind(daemon_lockfp);
			if(daemon_lockfp->BLAST_FLAG < 1) {
				BLAST_ERROR();
L3:;
				fprintf(daemon_lockfp, (char *)"%d\n", daemon_pid);
				if(daemon_lockfp->BLAST_FLAG < 1) {
					BLAST_ERROR();
L4:;
					fflush(daemon_lockfp);
					tmp___0 = ftell(daemon_lockfp);
					tmp___1 = fileno(daemon_lockfp);
					ftruncate(tmp___1, tmp___0);
					/* END OF PATH at func_get_lock@p32#1 */
				}
				else if(daemon_lockfp->BLAST_FLAG > 1) {
					BLAST_ERROR();
					goto L4;
				}
				else {
					goto L4;
				}
			}
			else if(daemon_lockfp->BLAST_FLAG > 1) {
				BLAST_ERROR();
				goto L3;
			}
			else {
				goto L3;
			}
		}
		else if(tmp > 0) {
			fscanf(daemon_lockfp, (char *)"%d", & otherpid);
			die_e((char *)"can\'t lock %s, running daemon\'s pid may be %d", pidfile, otherpid);
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else if(fd < -1) {
L5:;
		daemon_lockfp = fdopen(fd, (char *)"r+");
		daemon_lockfp->BLAST_FLAG = 1;
		if(daemon_lockfp == (0)) {
			die_e((char *)"can\'t open or create %s", pidfile);
			goto L1;
		}
		else if(daemon_lockfp < (0)) {
			goto L1;
		}
		else {
			goto L1;
		}
	}
	else {
		goto L5;
	}
}

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
	dir_fd = -1;
	pass = (struct passwd *)((void *)0);
	grp = (struct group *)((void *)0);
	tmp = mkdir(dir, 0U);
	if(tmp < 0) {
L1:;
		tmp___0 = __errno_location();
		if(*tmp___0 < 17) {
			die_e((char *)"Cannot create dir %s", dir);
L2:;
			dir_fd = open(dir, 0);
			if(dir_fd < 0) {
				die_e((char *)"Cannot open dir %s", dir);
L3:;
				tmp___1 = fstat__extinline(dir_fd, & st);
				if(tmp___1 < 0) {
					close(dir_fd);
					die_e((char *)"Cannot fstat %s", dir);
L4:;
					if((st.st_mode & 61440U) < 16384U) {
						close(dir_fd);
						die((char *)"%s exists and is not a directory", dir);
L5:;
						pass = getpwnam((char *)"fcron");
						if(pass == (0)) {
							die_e((char *)"Cannot getpwnam(%s)", "fcron");
L6:;
							grp = getgrnam((char *)"fcron");
							if(grp == (0)) {
								die_e((char *)"Cannot getgrnam(%s)", "fcron");
L7:;
								tmp___2 = fchown(dir_fd, pass->pw_uid, grp->gr_gid);
								if(tmp___2 < 0) {
									close(dir_fd);
									die_e((char *)"Cannot fchown dir %s to %s:%s", dir, "fcron", "fcron");
L8:;
									tmp___3 = fchmod(dir_fd, 504U);
									if(tmp___3 < 0) {
										close(dir_fd);
										die_e((char *)"Cannot change dir %s\'s mode to 770", dir);
										close(dir_fd);
										exit(0);
L9:;
										/* END OF PATH at func_create_spooldir@p44#1 */
									}
									else if(tmp___3 > 0) {
										close(dir_fd);
										die_e((char *)"Cannot change dir %s\'s mode to 770", dir);
										close(dir_fd);
										exit(0);
										goto L9;
									}
									else {
										close(dir_fd);
										exit(0);
										goto L9;
									}
								}
								else if(tmp___2 > 0) {
									close(dir_fd);
									die_e((char *)"Cannot fchown dir %s to %s:%s", dir, "fcron", "fcron");
									goto L8;
								}
								else {
									goto L8;
								}
							}
							else if(grp < (0)) {
								goto L7;
							}
							else {
								goto L7;
							}
						}
						else if(pass < (0)) {
							goto L6;
						}
						else {
							goto L6;
						}
					}
					else if((st.st_mode & 61440U) > 16384U) {
						close(dir_fd);
						die((char *)"%s exists and is not a directory", dir);
						goto L5;
					}
					else {
						goto L5;
					}
				}
				else if(tmp___1 > 0) {
					close(dir_fd);
					die_e((char *)"Cannot fstat %s", dir);
					goto L4;
				}
				else {
					goto L4;
				}
			}
			else {
				goto L3;
			}
		}
		else if(*tmp___0 > 17) {
			die_e((char *)"Cannot create dir %s", dir);
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else if(tmp > 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

int main(int argc , char **argv )
{ char *tmp ;
char *tmp___0 ;
uid_t daemon_uid ;
int tmp___1 ;
FILE *tmp___2 ;
int fd ;
pid_t pid ;
FILE *tmp___3 ;
FILE *tmp___4 ;
__pid_t tmp___5 ;
unsigned int tmp___6 ;
int slice_criteria ;
FILE *tmp___7 ;
FILE *tmp___8 ;
FILE *tmp___9 ;
void *tmp___10 ;
void *tmp___11 ;
void *tmp___12 ;
time_t tmp___13 ;
	;
	__initialize__();
	saved_umask = umask(18U);
	tmp___0 = strrchr(*(argv + 0), '/');
	if(tmp___0 == (0)) {
		prog_name = *(argv + 0);
L1:;
		daemon_uid = getuid();
		if(daemon_uid < 0U) {
			die((char *)"Fcron must be executed as root");
L2:;
			daemon_pid = getpid();
			parseopt(argc, argv);
			read_conf();
			tmp___1 = chdir(fcrontabs);
			if(tmp___1 < 0) {
				die_e((char *)"Could not change dir to %s", fcrontabs);
L3:;
				tmp___7 = get_stdin();
				tmp___2 = tmp___7;
				tmp___2->BLAST_FLAG = 1;
				freopen((char *)"/dev/null", (char *)"r", tmp___2);
				if(foreground == 0) {
					pid = fork();
					if(pid == 0-(1)) {
						die_e((char *)"fork");
L4:;
						daemon_pid = getpid();
						fd = open((char *)"/dev/tty", 2);
						if(fd >= 0) {
							ioctl(fd, 21538UL, 0);
							close(fd);
L5:;
							tmp___8 = get_stdout();
							tmp___3 = tmp___8;
							tmp___3->BLAST_FLAG = 1;
							freopen((char *)"/dev/null", (char *)"w", tmp___3);
							tmp___9 = get_stderr();
							tmp___4 = tmp___9;
							tmp___4->BLAST_FLAG = 1;
							freopen((char *)"/dev/null", (char *)"w", tmp___4);
							xcloselog();
							fd = 3;
L6:;
L7:;
							if(fd >= 250) {
L8:;
								tmp___5 = setsid();
								if(tmp___5 == -1) {
									error((char *)"Could not setsid()");
									get_lock();
									umask(54U);
									explain((char *)"%s[%d] 2.9.5 started", prog_name, daemon_pid);
L9:;
									signal(15, & sigterm_handler);
									signal(1, & sighup_handler);
									siginterrupt(1, 0);
									signal(17, & sigchild_handler);
									siginterrupt(17, 0);
									signal(10, & sigusr1_handler);
									siginterrupt(10, 0);
									signal(12, & sigusr2_handler);
									siginterrupt(12, 0);
									signal(13, (void (*)(int  ))1);
									next_id = 0UL;
									exe_num = (short)0;
									exe_array_size = (short)6;
									tmp___10 = calloc((unsigned int )exe_array_size, sizeof(struct exe_t ));
									exe_array = (struct exe_t *)tmp___10;
									if(exe_array == (0)) {
										die_e((char *)"could not calloc exe_array");
L10:;
										serial_running = (short)0;
										serial_array_index = (short)0;
										serial_num = (short)0;
										serial_array_size = (short)10;
										tmp___11 = calloc((unsigned int )serial_array_size, sizeof(cl_t *));
										serial_array = (struct cl_t **)tmp___11;
										if(serial_array == (0)) {
											die_e((char *)"could not calloc serial_array");
L11:;
											lavg_num = (short)0;
											lavg_serial_running = (short)0;
											lavg_array_size = (short)10;
											tmp___12 = calloc((unsigned int )lavg_array_size, sizeof(lavg_t ));
											lavg_array = (struct lavg_t *)tmp___12;
											if(lavg_array == (0)) {
												die_e((char *)"could not calloc lavg_array");
L12:;
												tmp___13 = time((time_t *)((void *)0));
												tmp___6 = (unsigned int )tmp___13;
												srand(tmp___6);
												main_loop();
												slice_criteria = BLAST_error;
												return (0);
												/* END OF PATH at func_main@p120#1 */
											}
											else if(lavg_array < (0)) {
												goto L12;
											}
											else {
												goto L12;
											}
										}
										else if(serial_array < (0)) {
											goto L11;
										}
										else {
											goto L11;
										}
									}
									else if(exe_array < (0)) {
										goto L10;
									}
									else {
										goto L10;
									}
								}
								else if(tmp___5 < -1) {
									get_lock();
									umask(54U);
									explain((char *)"%s[%d] 2.9.5 started", prog_name, daemon_pid);
									goto L9;
								}
								else {
									get_lock();
									umask(54U);
									explain((char *)"%s[%d] 2.9.5 started", prog_name, daemon_pid);
									goto L9;
								}
							}
							else {
								close(fd);
								fd = fd + 1;
								goto L7;
							}
						}
						else {
							goto L5;
						}
					}
					else if(pid == 0) {
						goto L4;
					}
					else if(pid < 0) {
						exit(0);
L13:;
						goto L4;
					}
					else if(pid > 0 && pid < 1) {
						exit(0);
						goto L13;
					}
					else {
						exit(0);
						goto L13;
					}
				}
				else if(foreground < 0) {
					get_lock();
					umask(54U);
					explain((char *)"%s[%d] 2.9.5 started", prog_name, daemon_pid);
					goto L9;
				}
				else {
					get_lock();
					umask(54U);
					explain((char *)"%s[%d] 2.9.5 started", prog_name, daemon_pid);
					goto L9;
				}
			}
			else if(tmp___1 > 0) {
				die_e((char *)"Could not change dir to %s", fcrontabs);
				goto L3;
			}
			else {
				goto L3;
			}
		}
		else if(daemon_uid > 0U) {
			die((char *)"Fcron must be executed as root");
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else if(tmp___0 < (0)) {
L14:;
		tmp = strrchr(*(argv + 0), '/');
		prog_name = tmp + 1;
		goto L1;
	}
	else {
		goto L14;
	}
}

void init_conf(void)
{
	if(fcronconf == (0)) {
		fcronconf = strdup2((char *)"/etc/fcron.conf");
		fcrontabs = strdup2((char *)"/var/spool/fcron");
		pidfile = strdup2((char *)"/var/run/fcron.pid");
		fifofile = strdup2((char *)"/var/run/fcron.fifo");
		fcronallow = strdup2((char *)"/etc/fcron.allow");
		fcrondeny = strdup2((char *)"/etc/fcron.deny");
		shell = strdup2((char *)"/bin/sh");
		sendmail = strdup2((char *)"/usr/lib/sendmail");
		editor = strdup2((char *)"/bin/vi");
L1:;
		/* END OF PATH at func_init_conf@p11#1 */
	}
	else if(fcronconf < (0)) {
		fcrontabs = strdup2((char *)"/var/spool/fcron");
		pidfile = strdup2((char *)"/var/run/fcron.pid");
		fifofile = strdup2((char *)"/var/run/fcron.fifo");
		fcronallow = strdup2((char *)"/etc/fcron.allow");
		fcrondeny = strdup2((char *)"/etc/fcron.deny");
		shell = strdup2((char *)"/bin/sh");
		sendmail = strdup2((char *)"/usr/lib/sendmail");
		editor = strdup2((char *)"/bin/vi");
		goto L1;
	}
	else {
		fcrontabs = strdup2((char *)"/var/spool/fcron");
		pidfile = strdup2((char *)"/var/run/fcron.pid");
		fifofile = strdup2((char *)"/var/run/fcron.fifo");
		fcronallow = strdup2((char *)"/etc/fcron.allow");
		fcrondeny = strdup2((char *)"/etc/fcron.deny");
		shell = strdup2((char *)"/bin/sh");
		sendmail = strdup2((char *)"/usr/lib/sendmail");
		editor = strdup2((char *)"/bin/vi");
		goto L1;
	}
}

int write_buf_to_disk(int fd , char *write_buf , int *buf_used )
{ ssize_t to_write ;
ssize_t written ;
ssize_t return_val ;
int num_retries ;
int tmp ;
	to_write = *buf_used;
	written = 0;
	num_retries = 0;
L1:;
L2:;
	if(written >= to_write) {
L3:;
		if(debug_opt > 0) {
			Debug((char *)"write_buf_to_disk() : written %d/%d, %d (re)try(ies)", written, to_write, num_retries);
L4:;
			if(written == to_write) {
				*buf_used = 0;
				return (0);
				/* END OF PATH at func_write_buf_to_disk@p28#1 */
			}
			else if(written > to_write) {
				error((char *)"write_buf_to_disk() : written %d bytes for %d requested.", written, to_write);
				return (-1);
				/* END OF PATH at func_write_buf_to_disk@p32#1 */
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(debug_opt < 0) {
			Debug((char *)"write_buf_to_disk() : written %d/%d, %d (re)try(ies)", written, to_write, num_retries);
			goto L4;
		}
		else {
			goto L4;
		}
	}
	else {
		tmp = num_retries;
		num_retries = num_retries + 1;
		if(tmp > to_write / 2) {
			error((char *)"too many retries (%d) to write buf to disk : giving up.", num_retries);
			return (-1);
			/* END OF PATH at func_write_buf_to_disk@p15#1 */
		}
		else {
			return_val = write(fd, (void *)(write_buf + written), (unsigned int )(to_write - written));
			if(return_val == -1) {
				error_e((char *)"could not write() buf to disk");
				return (-1);
				/* END OF PATH at func_write_buf_to_disk@p20#1 */
			}
			else if(return_val < -1) {
L5:;
				written = written + return_val;
				goto L2;
			}
			else {
				goto L5;
			}
		}
	}
}

int save_type(int fd , short type , char *write_buf , int *buf_used )
{ short size ;
int write_len ;
int tmp ;
	size = (short)0;
	write_len = (int )(sizeof(type) + sizeof(size));
	if(write_len > 1024 - *buf_used) {
		tmp = write_buf_to_disk(fd, write_buf, buf_used);
		if(tmp == -1) {
			return (-1);
			/* END OF PATH at func_save_type@p9#1 */
		}
		else if(tmp < -1) {
L1:;
			memcpy((void *)(write_buf + *buf_used), (void *)(& type), sizeof(type));
			*buf_used = (int )((unsigned int )*buf_used + sizeof(type));
			memcpy((void *)(write_buf + *buf_used), (void *)(& size), sizeof(size));
			*buf_used = (int )((unsigned int )*buf_used + sizeof(size));
			return (0);
			/* END OF PATH at func_save_type@p15#1 */
		}
		else {
			goto L1;
		}
	}
	else {
		goto L1;
	}
}

int save_str(int fd , short type , char *str , char *write_buf , int *buf_used )
{ short size ;
short tmp ;
int write_len ;
int tmp___0 ;
size_t tmp___1 ;
	tmp___1 = strlen(str);
	tmp = (short )tmp___1;
	size = tmp;
	write_len = (int )((sizeof(type) + sizeof(size)) + (unsigned int )size);
	if(write_len > 1024 - *buf_used) {
		tmp___0 = write_buf_to_disk(fd, write_buf, buf_used);
		if(tmp___0 == -1) {
			return (-1);
			/* END OF PATH at func_save_str@p13#1 */
		}
		else if(tmp___0 < -1) {
L1:;
			memcpy((void *)(write_buf + *buf_used), (void *)(& type), sizeof(type));
			*buf_used = (int )((unsigned int )*buf_used + sizeof(type));
			memcpy((void *)(write_buf + *buf_used), (void *)(& size), sizeof(size));
			*buf_used = (int )((unsigned int )*buf_used + sizeof(size));
			memcpy((void *)(write_buf + *buf_used), (void *)str, (unsigned int )size);
			*buf_used = *buf_used + (int )size;
			return (0);
			/* END OF PATH at func_save_str@p21#1 */
		}
		else {
			goto L1;
		}
	}
	else {
		goto L1;
	}
}

int save_strn(int fd , short type , char *str , short size , char *write_buf , int *buf_used )
{ int write_len ;
int tmp ;
	write_len = (int )((sizeof(type) + sizeof(size)) + (unsigned int )size);
	if(write_len > 1024 - *buf_used) {
		tmp = write_buf_to_disk(fd, write_buf, buf_used);
		if(tmp == -1) {
			return (-1);
			/* END OF PATH at func_save_strn@p7#1 */
		}
		else if(tmp < -1) {
L1:;
			memcpy((void *)(write_buf + *buf_used), (void *)(& type), sizeof(type));
			*buf_used = (int )((unsigned int )*buf_used + sizeof(type));
			memcpy((void *)(write_buf + *buf_used), (void *)(& size), sizeof(size));
			*buf_used = (int )((unsigned int )*buf_used + sizeof(size));
			memcpy((void *)(write_buf + *buf_used), (void *)str, (unsigned int )size);
			*buf_used = *buf_used + (int )size;
			return (0);
			/* END OF PATH at func_save_strn@p15#1 */
		}
		else {
			goto L1;
		}
	}
	else {
		goto L1;
	}
}

int save_lint(int fd , short type , long value , char *write_buf , int *buf_used )
{ short size ;
int write_len ;
int tmp ;
	size = (short )sizeof(value);
	write_len = (int )((sizeof(type) + sizeof(size)) + (unsigned int )size);
	if(write_len > 1024 - *buf_used) {
		tmp = write_buf_to_disk(fd, write_buf, buf_used);
		if(tmp == -1) {
			return (-1);
			/* END OF PATH at func_save_lint@p9#1 */
		}
		else if(tmp < -1) {
L1:;
			memcpy((void *)(write_buf + *buf_used), (void *)(& type), sizeof(type));
			*buf_used = (int )((unsigned int )*buf_used + sizeof(type));
			memcpy((void *)(write_buf + *buf_used), (void *)(& size), sizeof(size));
			*buf_used = (int )((unsigned int )*buf_used + sizeof(size));
			memcpy((void *)(write_buf + *buf_used), (void *)(& value), (unsigned int )size);
			*buf_used = *buf_used + (int )size;
			return (0);
			/* END OF PATH at func_save_lint@p17#1 */
		}
		else {
			goto L1;
		}
	}
	else {
		goto L1;
	}
}

int save_one_file(cf_t *file , char *filename , uid_t own_uid , gid_t own_gid , time_t save_date )
{ int fd ;
int tmp ;
int tmp___0 ;
	fd = open(filename, 4673, 384);
	if(fd == -1) {
		error_e((char *)"Could not open %s", filename);
		return (-1);
		/* END OF PATH at func_save_one_file@p7#1 */
	}
	else if(fd < -1) {
L1:;
		tmp = fchown(fd, own_uid, own_gid);
		if(tmp < 0) {
			error_e((char *)"Could not fchown %s to uid:%d gid:%d", filename, own_uid, own_gid);
L2:;
			close(fd);
			remove(filename);
			return (-1);
			/* END OF PATH at func_save_one_file@p14#1 */
		}
		else if(tmp > 0) {
			error_e((char *)"Could not fchown %s to uid:%d gid:%d", filename, own_uid, own_gid);
			goto L2;
		}
		else {
			tmp___0 = write_file_to_disk(fd, file, save_date);
			if(tmp___0 == -1) {
				close(fd);
				remove(filename);
				return (-1);
				/* END OF PATH at func_save_one_file@p20#1 */
			}
			else if(tmp___0 < -1) {
L3:;
				close(fd);
				return (0);
				/* END OF PATH at func_save_one_file@p23#1 */
			}
			else {
				goto L3;
			}
		}
	}
	else {
		goto L1;
	}
}

static void xopenlog(void)
{
	if(log_open == 0) {
		openlog(prog_name, 1, 72);
		log_open = 1;
L1:;
		/* END OF PATH at func_xopenlog@p4#1 */
	}
	else if(log_open > 0) {
		goto L1;
	}
	else {
		goto L1;
	}
}

char *make_msg(char *append , char *fmt , __ccured_va_list args )
{ int len ;
char *msg ;
size_t tmp ;
void *tmp___0 ;
	msg = (char *)((void *)0);
	tmp___0 = calloc(1U, 176U);
	msg = (char *)tmp___0;
	if(msg == (0)) {
		return ((char *)((void *)0));
		/* END OF PATH at func_make_msg@p9#1 */
	}
	else if(msg < (0)) {
L1:;
		len = vsnprintf(msg, 176U, fmt, args);
		if(append < (0)) {
L2:;
			strncat(msg, (char *)": ", (unsigned int )(175 - len));
			strncat(msg, append, (unsigned int )(175 - len));
			tmp = strlen(append);
			len = (int )((unsigned int )len + (2U + tmp));
L3:;
			if(len >= 175) {
				strcpy((msg + 174) - sizeof(truncated), truncated);
L4:;
				return (msg);
				/* END OF PATH at func_make_msg@p19#1 */
			}
			else {
				goto L4;
			}
		}
		else if(append > (0)) {
			goto L2;
		}
		else {
			goto L3;
		}
	}
	else {
		goto L1;
	}
}

void log_syslog_str(int priority , char *msg )
{
	if(dosyslog > 0) {
		xopenlog();
L1:;
		syslog(priority, (char *)"%s", msg);
L2:;
		/* END OF PATH at func_log_syslog_str@p4#1 */
	}
	else if(dosyslog < 0) {
		xopenlog();
		goto L1;
	}
	else {
		goto L2;
	}
}

void log_console_str(char *msg )
{ time_t t ;
time_t tmp ;
struct tm *ft ;
char date[30] ;
FILE *tmp___0 ;
FILE *tmp___1 ;
	if(foreground == 1) {
		tmp = time((time_t *)((void *)0));
		t = tmp;
		ft = localtime(& t);
		date[0] = (char )'\000';
		strftime(date, sizeof(date), (char *)"%H:%M:%S", ft);
		tmp___1 = get_stderr();
		tmp___0 = tmp___1;
		tmp___0->BLAST_FLAG = 1;
		if(tmp___0->BLAST_FLAG < 1) {
			BLAST_ERROR();
L1:;
			fprintf(tmp___0, (char *)"%s %s\n", date, msg);
L2:;
			/* END OF PATH at func_log_console_str@p20#1 */
		}
		else if(tmp___0->BLAST_FLAG > 1) {
			BLAST_ERROR();
			goto L1;
		}
		else {
			goto L1;
		}
	}
	else if(foreground < 1) {
		goto L2;
	}
	else {
		goto L2;
	}
}

void log_fd_str(int fd , char *msg )
{ size_t tmp ;
size_t tmp___0 ;
	if(fd >= 0) {
		tmp = strlen(msg);
		send(fd, (void *)msg, tmp, 0);
		tmp___0 = strlen((char *)"\n");
		send(fd, (void *)"\n", tmp___0, 0);
L1:;
		/* END OF PATH at func_log_fd_str@p8#1 */
	}
	else {
		goto L1;
	}
}

static void log_syslog(int priority , int fd , char *fmt , __ccured_va_list args )
{ char *msg ;
	msg = make_msg((char *)((void *)0), fmt, args);
	if(msg == (0)) {
		/* END OF PATH at func_log_syslog@p4#1 */
	}
	else if(msg < (0)) {
		log_syslog_str(priority, msg);
		log_console_str(msg);
L1:;
		log_fd_str(fd, msg);
		free((void *)msg);
		/* END OF PATH at func_log_syslog@p10#1 */
	}
	else {
		log_syslog_str(priority, msg);
		log_console_str(msg);
		goto L1;
	}
}

static void log_e(int priority , char *fmt , __ccured_va_list args )
{ int saved_errno ;
char *msg ;
int *tmp ;
char *tmp___0 ;
char *tmp___1 ;
	tmp = __errno_location();
	saved_errno = *tmp;
	tmp___1 = strerror(saved_errno);
	tmp___0 = tmp___1;
	msg = make_msg(tmp___0, fmt, args);
	if(msg == (0)) {
		/* END OF PATH at func_log_e@p12#1 */
	}
	else if(msg < (0)) {
		log_syslog_str(priority, msg);
		log_console_str(msg);
L1:;
		free((void *)msg);
		/* END OF PATH at func_log_e@p17#1 */
	}
	else {
		log_syslog_str(priority, msg);
		log_console_str(msg);
		goto L1;
	}
}

static void log_pame(int priority , pam_handle_t *pamh___0 , int pamerrno , char *fmt , __ccured_va_list args )
{ char *msg ;
char *tmp ;
	tmp = pam_strerror(pamh___0, pamerrno);
	msg = make_msg(tmp, fmt, args);
	if(msg == (0)) {
		/* END OF PATH at func_log_pame@p6#1 */
	}
	else if(msg < (0)) {
		log_syslog_str(priority, msg);
		log_console_str(msg);
		xcloselog();
L1:;
		free((void *)msg);
		/* END OF PATH at func_log_pame@p12#1 */
	}
	else {
		log_syslog_str(priority, msg);
		log_console_str(msg);
		xcloselog();
		goto L1;
	}
}

void explain_fd(int fd , char *fmt  , ...)
{ __ccured_va_list args ;
unsigned long tmp ;
	log_syslog(5, fd, fmt, args);
	/* END OF PATH at func_explain_fd@p4#1 */
}

void explain_e(char *fmt  , ...)
{ __ccured_va_list args ;
unsigned long tmp ;
	log_e(5, fmt, args);
	/* END OF PATH at func_explain_e@p4#1 */
}

int is_leap_year(int year )
{ int tmp ;
	if(year % 4 == 0) {
		if(year % 100 < 0) {
L1:;
			tmp = 1;
L2:;
L3:;
			return (tmp);
			/* END OF PATH at func_is_leap_year@p12#1 */
		}
		else if(year % 100 > 0) {
			goto L1;
		}
		else {
			if(year % 400 == 0) {
				tmp = 1;
				goto L2;
			}
			else if(year % 400 < 0) {
L4:;
				tmp = 0;
				goto L2;
			}
			else {
				goto L4;
			}
		}
	}
	else if(year % 4 < 0) {
L5:;
		tmp = 0;
		goto L3;
	}
	else {
		goto L5;
	}
}

int get_nb_mdays(int year , int mon )
{ int tmp ;
	if(mon == 1) {
		tmp = is_leap_year(year);
		if(tmp > 0) {
L1:;
			return (29);
			/* END OF PATH at func_get_nb_mdays@p5#1 */
		}
		else if(tmp < 0) {
			goto L1;
		}
		else {
			return (28);
			/* END OF PATH at func_get_nb_mdays@p8#1 */
		}
	}
	else if(mon < 1) {
		if(mon <= 6) {
L2:;
			if(mon % 2 == 0) {
				return (31);
				/* END OF PATH at func_get_nb_mdays@p13#1 */
			}
			else if(mon % 2 < 0) {
L3:;
				return (30);
				/* END OF PATH at func_get_nb_mdays@p16#1 */
			}
			else {
				goto L3;
			}
		}
		else {
			/* FALSE PATH */ 
		}
	}
	else {
		if(mon <= 6) {
			goto L2;
		}
		else {
			if(mon % 2 == 0) {
				return (30);
				/* END OF PATH at func_get_nb_mdays@p20#1 */
			}
			else if(mon % 2 < 0) {
L4:;
				return (31);
				/* END OF PATH at func_get_nb_mdays@p23#1 */
			}
			else {
				goto L4;
			}
		}
	}
}

void set_wday(struct tm *date )
{ long nod ;
int i ;
int tmp___0 ;
int tmp___1 ;
int tmp___2 ;
int UNK ;
	nod = 0L;
	i = date->tm_year - 1;
L1:;
L2:;
	if(i < 100) {
L3:;
		i = date->tm_mon - 1;
L4:;
L5:;
		if(i < 0) {
L6:;
			nod = nod + (long )(date->tm_mday - 1);
			date->tm_wday = UNK;
			if(date->tm_wday >= 7) {
				date->tm_wday = date->tm_wday - 7;
L7:;
				/* END OF PATH at func_set_wday@p30#1 */
			}
			else {
				goto L7;
			}
		}
		else {
			tmp___2 = get_nb_mdays(date->tm_year + 1900, i);
			nod = nod + (long )tmp___2;
			i = i - 1;
			goto L5;
		}
	}
	else {
		tmp___1 = is_leap_year(i + 1900);
		if(tmp___1 > 0) {
L8:;
			tmp___0 = 366;
L9:;
			nod = nod + (long )tmp___0;
			i = i - 1;
			goto L2;
		}
		else if(tmp___1 < 0) {
			goto L8;
		}
		else {
			tmp___0 = 365;
			goto L9;
		}
	}
}

void run_lavg_job(int i )
{
	run_queue_job((lavg_array + i)->l_line);
	if(((lavg_array + i)->l_line)->cl_option[0] & 32 > 0) {
L1:;
		lavg_serial_running = (short )((int )lavg_serial_running + 1);
L2:;
		lavg_num = (short )((int )lavg_num - 1);
		if(i < lavg_num) {
			*(lavg_array + i) = *(lavg_array + (int )lavg_num);
			(lavg_array + (int )lavg_num)->l_line = (struct cl_t *)((void *)0);
L3:;
			/* END OF PATH at func_run_lavg_job@p10#1 */
		}
		else {
			(lavg_array + i)->l_line = (struct cl_t *)((void *)0);
			goto L3;
		}
	}
	else if(((lavg_array + i)->l_line)->cl_option[0] & 32 < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

void run_queue_job(cl_t *line )
{ short tmp ;
	if(exe_num >= exe_array_size) {
		resize_exe_array();
L1:;
		(exe_array + (int )exe_num)->e_line = line;
		tmp = exe_num;
		exe_num = (short )((int )exe_num + 1);
		run_job(exe_array + (int )tmp);
		/* END OF PATH at func_run_queue_job@p8#1 */
	}
	else {
		goto L1;
	}
}

void resize_exe_array(void)
{ struct exe_t *ptr ;
short old_size ;
void *tmp ;
	ptr = (struct exe_t *)((void *)0);
	old_size = exe_array_size;
	if(debug_opt > 0) {
		Debug((char *)"Resizing exe_array");
L1:;
		exe_array_size = (short )((int )exe_array_size + 5);
		tmp = calloc((unsigned int )exe_array_size, sizeof(struct exe_t ));
		ptr = (struct exe_t *)tmp;
		if(ptr == (0)) {
			die_e((char *)"could not calloc exe_array");
L2:;
			memcpy((void *)ptr, (void *)exe_array, sizeof(struct exe_t ) * (unsigned int )old_size);
			free((void *)exe_array);
			exe_array = ptr;
			/* END OF PATH at func_resize_exe_array@p16#1 */
		}
		else if(ptr < (0)) {
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else if(debug_opt < 0) {
		Debug((char *)"Resizing exe_array");
		goto L1;
	}
	else {
		goto L1;
	}
}

void sig_dfl(void)
{
	signal(15, (void (*)(int  ))0);
	signal(17, (void (*)(int  ))0);
	signal(1, (void (*)(int  ))0);
	signal(10, (void (*)(int  ))0);
	signal(12, (void (*)(int  ))0);
	signal(13, (void (*)(int  ))0);
	/* END OF PATH at func_sig_dfl@p7#1 */
}

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
	if(mailf < (0)) {
		if(line->cl_option[1] & 1 > 0) {
L1:;
			mail_output = (char)1;
L2:;
			if(mail_output == 1) {
				m = (char *)" (mailing output)";
				u__u___7.__in = status;
				if((u__u___7.__i & 127) == 0) {
					u__u___8.__in = status;
					if((u__u___8.__i & 65280) >> 8 == 0) {
						if((line->cl_option[2] & 64) == 0) {
							explain((char *)"Job %s completed%s", line->cl_shell, m);
L3:;
L4:;
							pam_setcred(pamh, 32772);
							tmp___2 = pam_close_session(pamh, 32768);
							pam_end(pamh, tmp___2);
							if(mail_output == 1) {
								launch_mailer(line, mailf);
								die_e((char *)"Internal error: launch_mailer returned");
L5:;
								if(mailf < (0)) {
L6:;
									tmp___3 = fclose(mailf);
									if(tmp___3 < 0) {
										die_e((char *)"Can\'t close file mailf");
										exit(0);
L7:;
										/* END OF PATH at func_end_job@p104#1 */
									}
									else if(tmp___3 > 0) {
										die_e((char *)"Can\'t close file mailf");
										exit(0);
										goto L7;
									}
									else {
										exit(0);
										goto L7;
									}
								}
								else if(mailf > (0)) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(mail_output < 1) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if((line->cl_option[2] & 64) > 0) {
							goto L3;
						}
						else {
							goto L3;
						}
					}
					else if((u__u___8.__i & 65280) >> 8 < 0) {
L8:;
L9:;
						u__u___6.__in = status;
						if((u__u___6.__i & 127) == 0) {
							u__u___1.__in = status;
							warn((char *)"Job %s terminated (exit status: %d)%s", line->cl_shell, (u__u___1.__i & 65280) >> 8, m);
							if(mailf < (0)) {
								u__u___2.__in = status;
								if(mailf->BLAST_FLAG < 1) {
									BLAST_ERROR();
L10:;
									fprintf(mailf, (char *)"Job %s terminated (exit status: %d)%s", line->cl_shell, (u__u___2.__i & 65280) >> 8, m);
									goto L4;
								}
								else if(mailf->BLAST_FLAG > 1) {
									BLAST_ERROR();
									goto L10;
								}
								else {
									goto L10;
								}
							}
							else if(mailf > (0)) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if((u__u___6.__i & 127) < 0) {
L11:;
							u__u___5.__in = status;
							x__status = u__u___5.__i;
							if((x__status & 255) == 127) {
								tmp___1 = 0;
L12:;
								if(tmp___1 == 0) {
									error((char *)"Job %s terminated abnormally %s", line->cl_shell, m);
									if(mailf < (0)) {
										if(mailf->BLAST_FLAG < 1) {
											BLAST_ERROR();
L13:;
											fprintf(mailf, (char *)"Job %s terminated abnormally %s", line->cl_shell, m);
											goto L4;
										}
										else if(mailf->BLAST_FLAG > 1) {
											BLAST_ERROR();
											goto L13;
										}
										else {
											goto L13;
										}
									}
									else if(mailf > (0)) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(tmp___1 > 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if((x__status & 255) < 127) {
L14:;
								if((x__status & 127) == 0) {
									tmp___1 = 0;
									goto L12;
								}
								else if((x__status & 127) < 0) {
L15:;
									tmp___1 = 1;
									if(tmp___1 > 0) {
										u__u___3.__in = status;
										error((char *)"Job %s terminated due to signal %d%s", line->cl_shell, u__u___3.__i & 127, m);
										if(mailf < (0)) {
											u__u___4.__in = status;
											if(mailf->BLAST_FLAG < 1) {
												BLAST_ERROR();
L16:;
												fprintf(mailf, (char *)"Job %s terminated due to signal %d%s", line->cl_shell, u__u___4.__i & 127, m);
												goto L4;
											}
											else if(mailf->BLAST_FLAG > 1) {
												BLAST_ERROR();
												goto L16;
											}
											else {
												goto L16;
											}
										}
										else if(mailf > (0)) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(tmp___1 < 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									goto L15;
								}
							}
							else {
								goto L14;
							}
						}
						else {
							goto L11;
						}
					}
					else {
						goto L8;
					}
				}
				else if((u__u___7.__i & 127) < 0) {
					goto L9;
				}
				else {
					goto L9;
				}
			}
			else if(mail_output < 1) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(line->cl_option[1] & 1 < 0) {
			goto L1;
		}
		else {
			if(line->cl_option[0] & 128 > 0) {
L17:;
				mail_output = (char)0;
L18:;
				if(mail_output < 1) {
					m = (char *)"";
					u__u___7.__in = status;
					if((u__u___7.__i & 127) == 0) {
						u__u___8.__in = status;
						if((u__u___8.__i & 65280) >> 8 == 0) {
							if((line->cl_option[2] & 64) == 0) {
								explain((char *)"Job %s completed%s", line->cl_shell, m);
L19:;
L20:;
								pam_setcred(pamh, 32772);
								tmp___2 = pam_close_session(pamh, 32768);
								pam_end(pamh, tmp___2);
								if(mail_output < 1) {
									goto L5;
								}
								else if(mail_output == 1) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if((line->cl_option[2] & 64) > 0) {
								goto L19;
							}
							else {
								goto L19;
							}
						}
						else if((u__u___8.__i & 65280) >> 8 < 0) {
L21:;
L22:;
							u__u___6.__in = status;
							if((u__u___6.__i & 127) == 0) {
								u__u___1.__in = status;
								warn((char *)"Job %s terminated (exit status: %d)%s", line->cl_shell, (u__u___1.__i & 65280) >> 8, m);
								if(mailf < (0)) {
									u__u___2.__in = status;
									if(mailf->BLAST_FLAG < 1) {
										BLAST_ERROR();
L23:;
										fprintf(mailf, (char *)"Job %s terminated (exit status: %d)%s", line->cl_shell, (u__u___2.__i & 65280) >> 8, m);
										goto L20;
									}
									else if(mailf->BLAST_FLAG > 1) {
										BLAST_ERROR();
										goto L23;
									}
									else {
										goto L23;
									}
								}
								else if(mailf > (0)) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if((u__u___6.__i & 127) < 0) {
L24:;
								u__u___5.__in = status;
								x__status = u__u___5.__i;
								if((x__status & 255) == 127) {
									tmp___1 = 0;
L25:;
									if(tmp___1 == 0) {
										error((char *)"Job %s terminated abnormally %s", line->cl_shell, m);
										if(mailf < (0)) {
											if(mailf->BLAST_FLAG < 1) {
												BLAST_ERROR();
L26:;
												fprintf(mailf, (char *)"Job %s terminated abnormally %s", line->cl_shell, m);
												goto L20;
											}
											else if(mailf->BLAST_FLAG > 1) {
												BLAST_ERROR();
												goto L26;
											}
											else {
												goto L26;
											}
										}
										else if(mailf > (0)) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(tmp___1 > 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if((x__status & 255) < 127) {
L27:;
									if((x__status & 127) == 0) {
										tmp___1 = 0;
										goto L25;
									}
									else if((x__status & 127) < 0) {
L28:;
										tmp___1 = 1;
										if(tmp___1 > 0) {
											u__u___3.__in = status;
											error((char *)"Job %s terminated due to signal %d%s", line->cl_shell, u__u___3.__i & 127, m);
											if(mailf < (0)) {
												u__u___4.__in = status;
												if(mailf->BLAST_FLAG < 1) {
													BLAST_ERROR();
L29:;
													fprintf(mailf, (char *)"Job %s terminated due to signal %d%s", line->cl_shell, u__u___4.__i & 127, m);
													goto L20;
												}
												else if(mailf->BLAST_FLAG > 1) {
													BLAST_ERROR();
													goto L29;
												}
												else {
													goto L29;
												}
											}
											else if(mailf > (0)) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(tmp___1 < 0) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else {
										goto L28;
									}
								}
								else {
									goto L27;
								}
							}
							else {
								goto L24;
							}
						}
						else {
							goto L21;
						}
					}
					else if((u__u___7.__i & 127) < 0) {
						goto L22;
					}
					else {
						goto L22;
					}
				}
				else if(mail_output == 1) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(line->cl_option[0] & 128 < 0) {
				goto L17;
			}
			else {
				tmp = fseek(mailf, 0L, 2);
				if(tmp == 0) {
					tmp___0 = ftell(mailf);
					if(tmp___0 > mailpos) {
						mail_output = (char)1;
						goto L2;
					}
					else {
L30:;
						u__u.__in = status;
						if((u__u.__i & 127) == 0) {
							u__u___0.__in = status;
							if((u__u___0.__i & 65280) >> 8 == 0) {
								mail_output = (char)0;
								goto L18;
							}
							else if((u__u___0.__i & 65280) >> 8 < 0) {
L31:;
								mail_output = (char)1;
								goto L2;
							}
							else {
								goto L31;
							}
						}
						else if((u__u.__i & 127) < 0) {
L32:;
							mail_output = (char)1;
							goto L2;
						}
						else {
							goto L32;
						}
					}
				}
				else if(tmp < 0) {
					goto L30;
				}
				else {
					goto L30;
				}
			}
		}
	}
	else if(mailf > (0)) {
		if(line->cl_option[1] & 1 > 0) {
L33:;
			mail_output = (char)1;
L34:;
			if(mail_output == 1) {
				m = (char *)" (mailing output)";
				u__u___7.__in = status;
				if((u__u___7.__i & 127) == 0) {
					u__u___8.__in = status;
					if((u__u___8.__i & 65280) >> 8 == 0) {
						if((line->cl_option[2] & 64) == 0) {
							explain((char *)"Job %s completed%s", line->cl_shell, m);
L35:;
L36:;
							pam_setcred(pamh, 32772);
							tmp___2 = pam_close_session(pamh, 32768);
							pam_end(pamh, tmp___2);
							if(mail_output == 1) {
								launch_mailer(line, mailf);
								die_e((char *)"Internal error: launch_mailer returned");
L37:;
								if(mailf > (0)) {
									goto L6;
								}
								else if(mailf < (0)) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(mail_output < 1) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if((line->cl_option[2] & 64) > 0) {
							goto L35;
						}
						else {
							goto L35;
						}
					}
					else if((u__u___8.__i & 65280) >> 8 < 0) {
L38:;
L39:;
						u__u___6.__in = status;
						if((u__u___6.__i & 127) == 0) {
							u__u___1.__in = status;
							warn((char *)"Job %s terminated (exit status: %d)%s", line->cl_shell, (u__u___1.__i & 65280) >> 8, m);
							if(mailf > (0)) {
								u__u___2.__in = status;
								if(mailf->BLAST_FLAG < 1) {
									BLAST_ERROR();
L40:;
									fprintf(mailf, (char *)"Job %s terminated (exit status: %d)%s", line->cl_shell, (u__u___2.__i & 65280) >> 8, m);
									goto L36;
								}
								else if(mailf->BLAST_FLAG > 1) {
									BLAST_ERROR();
									goto L40;
								}
								else {
									goto L40;
								}
							}
							else if(mailf < (0)) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if((u__u___6.__i & 127) < 0) {
L41:;
							u__u___5.__in = status;
							x__status = u__u___5.__i;
							if((x__status & 255) == 127) {
								tmp___1 = 0;
L42:;
								if(tmp___1 == 0) {
									error((char *)"Job %s terminated abnormally %s", line->cl_shell, m);
									if(mailf > (0)) {
										if(mailf->BLAST_FLAG < 1) {
											BLAST_ERROR();
L43:;
											fprintf(mailf, (char *)"Job %s terminated abnormally %s", line->cl_shell, m);
											goto L36;
										}
										else if(mailf->BLAST_FLAG > 1) {
											BLAST_ERROR();
											goto L43;
										}
										else {
											goto L43;
										}
									}
									else if(mailf < (0)) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(tmp___1 > 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if((x__status & 255) < 127) {
L44:;
								if((x__status & 127) == 0) {
									tmp___1 = 0;
									goto L42;
								}
								else if((x__status & 127) < 0) {
L45:;
									tmp___1 = 1;
									if(tmp___1 > 0) {
										u__u___3.__in = status;
										error((char *)"Job %s terminated due to signal %d%s", line->cl_shell, u__u___3.__i & 127, m);
										if(mailf > (0)) {
											u__u___4.__in = status;
											if(mailf->BLAST_FLAG < 1) {
												BLAST_ERROR();
L46:;
												fprintf(mailf, (char *)"Job %s terminated due to signal %d%s", line->cl_shell, u__u___4.__i & 127, m);
												goto L36;
											}
											else if(mailf->BLAST_FLAG > 1) {
												BLAST_ERROR();
												goto L46;
											}
											else {
												goto L46;
											}
										}
										else if(mailf < (0)) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(tmp___1 < 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									goto L45;
								}
							}
							else {
								goto L44;
							}
						}
						else {
							goto L41;
						}
					}
					else {
						goto L38;
					}
				}
				else if((u__u___7.__i & 127) < 0) {
					goto L39;
				}
				else {
					goto L39;
				}
			}
			else if(mail_output < 1) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(line->cl_option[1] & 1 < 0) {
			goto L33;
		}
		else {
			if(line->cl_option[0] & 128 > 0) {
L47:;
				mail_output = (char)0;
L48:;
				if(mail_output < 1) {
					m = (char *)"";
					u__u___7.__in = status;
					if((u__u___7.__i & 127) == 0) {
						u__u___8.__in = status;
						if((u__u___8.__i & 65280) >> 8 == 0) {
							if((line->cl_option[2] & 64) == 0) {
								explain((char *)"Job %s completed%s", line->cl_shell, m);
L49:;
L50:;
								pam_setcred(pamh, 32772);
								tmp___2 = pam_close_session(pamh, 32768);
								pam_end(pamh, tmp___2);
								if(mail_output < 1) {
									goto L37;
								}
								else if(mail_output == 1) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if((line->cl_option[2] & 64) > 0) {
								goto L49;
							}
							else {
								goto L49;
							}
						}
						else if((u__u___8.__i & 65280) >> 8 < 0) {
L51:;
L52:;
							u__u___6.__in = status;
							if((u__u___6.__i & 127) == 0) {
								u__u___1.__in = status;
								warn((char *)"Job %s terminated (exit status: %d)%s", line->cl_shell, (u__u___1.__i & 65280) >> 8, m);
								if(mailf > (0)) {
									u__u___2.__in = status;
									if(mailf->BLAST_FLAG < 1) {
										BLAST_ERROR();
L53:;
										fprintf(mailf, (char *)"Job %s terminated (exit status: %d)%s", line->cl_shell, (u__u___2.__i & 65280) >> 8, m);
										goto L50;
									}
									else if(mailf->BLAST_FLAG > 1) {
										BLAST_ERROR();
										goto L53;
									}
									else {
										goto L53;
									}
								}
								else if(mailf < (0)) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if((u__u___6.__i & 127) < 0) {
L54:;
								u__u___5.__in = status;
								x__status = u__u___5.__i;
								if((x__status & 255) == 127) {
									tmp___1 = 0;
L55:;
									if(tmp___1 == 0) {
										error((char *)"Job %s terminated abnormally %s", line->cl_shell, m);
										if(mailf > (0)) {
											if(mailf->BLAST_FLAG < 1) {
												BLAST_ERROR();
L56:;
												fprintf(mailf, (char *)"Job %s terminated abnormally %s", line->cl_shell, m);
												goto L50;
											}
											else if(mailf->BLAST_FLAG > 1) {
												BLAST_ERROR();
												goto L56;
											}
											else {
												goto L56;
											}
										}
										else if(mailf < (0)) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(tmp___1 > 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if((x__status & 255) < 127) {
L57:;
									if((x__status & 127) == 0) {
										tmp___1 = 0;
										goto L55;
									}
									else if((x__status & 127) < 0) {
L58:;
										tmp___1 = 1;
										if(tmp___1 > 0) {
											u__u___3.__in = status;
											error((char *)"Job %s terminated due to signal %d%s", line->cl_shell, u__u___3.__i & 127, m);
											if(mailf > (0)) {
												u__u___4.__in = status;
												if(mailf->BLAST_FLAG < 1) {
													BLAST_ERROR();
L59:;
													fprintf(mailf, (char *)"Job %s terminated due to signal %d%s", line->cl_shell, u__u___4.__i & 127, m);
													goto L50;
												}
												else if(mailf->BLAST_FLAG > 1) {
													BLAST_ERROR();
													goto L59;
												}
												else {
													goto L59;
												}
											}
											else if(mailf < (0)) {
												/* FALSE PATH */ 
											}
											else {
												/* FALSE PATH */ 
											}
										}
										else if(tmp___1 < 0) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else {
										goto L58;
									}
								}
								else {
									goto L57;
								}
							}
							else {
								goto L54;
							}
						}
						else {
							goto L51;
						}
					}
					else if((u__u___7.__i & 127) < 0) {
						goto L52;
					}
					else {
						goto L52;
					}
				}
				else if(mail_output == 1) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(line->cl_option[0] & 128 < 0) {
				goto L47;
			}
			else {
				tmp = fseek(mailf, 0L, 2);
				if(tmp == 0) {
					tmp___0 = ftell(mailf);
					if(tmp___0 > mailpos) {
						mail_output = (char)1;
						goto L34;
					}
					else {
L60:;
						u__u.__in = status;
						if((u__u.__i & 127) == 0) {
							u__u___0.__in = status;
							if((u__u___0.__i & 65280) >> 8 == 0) {
								mail_output = (char)0;
								goto L48;
							}
							else if((u__u___0.__i & 65280) >> 8 < 0) {
L61:;
								mail_output = (char)1;
								goto L34;
							}
							else {
								goto L61;
							}
						}
						else if((u__u.__i & 127) < 0) {
L62:;
							mail_output = (char)1;
							goto L34;
						}
						else {
							goto L62;
						}
					}
				}
				else if(tmp < 0) {
					goto L60;
				}
				else {
					goto L60;
				}
			}
		}
	}
	else {
		mail_output = (char)0;
		if(mail_output < 1) {
			m = (char *)"";
			u__u___7.__in = status;
			if((u__u___7.__i & 127) == 0) {
				u__u___8.__in = status;
				if((u__u___8.__i & 65280) >> 8 == 0) {
					if((line->cl_option[2] & 64) == 0) {
						explain((char *)"Job %s completed%s", line->cl_shell, m);
L63:;
L64:;
						pam_setcred(pamh, 32772);
						tmp___2 = pam_close_session(pamh, 32768);
						pam_end(pamh, tmp___2);
						if(mail_output < 1) {
							if(mailf == (0)) {
								exit(0);
								goto L7;
							}
							else if(mailf < (0)) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(mail_output == 1) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else if((line->cl_option[2] & 64) > 0) {
						goto L63;
					}
					else {
						goto L63;
					}
				}
				else if((u__u___8.__i & 65280) >> 8 < 0) {
L65:;
L66:;
					u__u___6.__in = status;
					if((u__u___6.__i & 127) == 0) {
						u__u___1.__in = status;
						warn((char *)"Job %s terminated (exit status: %d)%s", line->cl_shell, (u__u___1.__i & 65280) >> 8, m);
						if(mailf == (0)) {
							goto L64;
						}
						else if(mailf < (0)) {
							/* FALSE PATH */ 
						}
						else {
							/* FALSE PATH */ 
						}
					}
					else if((u__u___6.__i & 127) < 0) {
L67:;
						u__u___5.__in = status;
						x__status = u__u___5.__i;
						if((x__status & 255) == 127) {
							tmp___1 = 0;
L68:;
							if(tmp___1 == 0) {
								error((char *)"Job %s terminated abnormally %s", line->cl_shell, m);
								if(mailf == (0)) {
									goto L64;
								}
								else if(mailf < (0)) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(tmp___1 > 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if((x__status & 255) < 127) {
L69:;
							if((x__status & 127) == 0) {
								tmp___1 = 0;
								goto L68;
							}
							else if((x__status & 127) < 0) {
L70:;
								tmp___1 = 1;
								if(tmp___1 > 0) {
									u__u___3.__in = status;
									error((char *)"Job %s terminated due to signal %d%s", line->cl_shell, u__u___3.__i & 127, m);
									if(mailf == (0)) {
										goto L64;
									}
									else if(mailf < (0)) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(tmp___1 < 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else {
								goto L70;
							}
						}
						else {
							goto L69;
						}
					}
					else {
						goto L67;
					}
				}
				else {
					goto L65;
				}
			}
			else if((u__u___7.__i & 127) < 0) {
				goto L66;
			}
			else {
				goto L66;
			}
		}
		else if(mail_output == 1) {
			/* FALSE PATH */ 
		}
		else {
			/* FALSE PATH */ 
		}
	}
}

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
	strncpy(buf, str, sizeof(buf) - 1U);
	tmp = strlen(buf);
	strncat(buf, (char *)" for \'%s\'", (sizeof(buf) - tmp) - 1U);
	buf[sizeof(buf) - 1U] = (char )'\000';
	if(cl->cl_option[0] & 128 > 0) {
		die_pame(pamh, pamerrno, buf, cl->cl_shell);
L1:;
L2:;
		/* END OF PATH at func_die_mail_pame@p44#1 */
	}
	else if(cl->cl_option[0] & 128 < 0) {
		die_pame(pamh, pamerrno, buf, cl->cl_shell);
		goto L1;
	}
	else {
		tmp___0 = create_mail(cl, (char *)"Could not run fcron job");
		mailf = tmp___0;
		tmp___1 = fileno(mailf);
		tmp___2 = dup2(tmp___1, 1);
		if(tmp___2 < 1) {
			die_e((char *)"dup2() error");
L3:;
L4:;
			foreground = (char)1;
			error_pame(pamh, pamerrno, buf, cl->cl_shell);
			error((char *)"Job \'%s\' has *not* run.", cl->cl_shell);
			foreground = (char)0;
			pam_end(pamh, pamerrno);
			tmp___4 = initgroups(pas->pw_name, pas->pw_gid);
			if(tmp___4 < 0) {
				die_e((char *)"initgroups failed: %s", pas->pw_name);
L5:;
				tmp___5 = setgid(pas->pw_gid);
				if(tmp___5 < 0) {
					die((char *)"setgid failed: %s %d", pas->pw_name, pas->pw_gid);
L6:;
					tmp___6 = setuid(pas->pw_uid);
					if(tmp___6 < 0) {
						die((char *)"setuid failed: %s %d", pas->pw_name, pas->pw_uid);
						launch_mailer(cl, mailf);
						goto L2;
					}
					else {
						launch_mailer(cl, mailf);
						goto L2;
					}
				}
				else {
					goto L6;
				}
			}
			else {
				goto L5;
			}
		}
		else if(tmp___2 > 1) {
			die_e((char *)"dup2() error");
			goto L3;
		}
		else {
			tmp___3 = dup2(1, 2);
			if(tmp___3 < 2) {
				die_e((char *)"dup2() error");
				goto L4;
			}
			else if(tmp___3 > 2) {
				die_e((char *)"dup2() error");
				goto L4;
			}
			else {
				goto L4;
			}
		}
	}
}

int read_file(char *file_name , cf_t *cf )
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
void *tmp___58 ;
void *tmp___59 ;
void *tmp___60 ;
	ff = (FILE *)((void *)0);
	cl = (cl_t *)((void *)0);
	env = (env_t *)((void *)0);
	bufi = 0L;
	t_save = 0L;
	runas = 0U;
	runas_str = (char *)((void *)0);
	pass = (struct passwd *)((void *)0);
	type = (short)0;
	size = (short)0;
	ff = fopen(file_name, (char *)"r");
	if(ff < (0)) {
		ff->BLAST_FLAG = 1;
		if(ff < (0)) {
			tmp = fileno(ff);
			rc = fstat__extinline(tmp, & file_stat);
			if(rc < 0) {
				error_e((char *)"Could not stat %s", file_name);
L1:;
L2:;
				if(ff < (0)) {
L3:;
					if(ff->BLAST_FLAG == 1) {
						ff->BLAST_FLAG = 0;
L4:;
						fclose(ff);
L5:;
						if(cl < (0)) {
L6:;
							if(cl->cl_next == (0)) {
								if(cl->cl_shell > 0) {
L7:;
									free((void *)cl->cl_shell);
L8:;
									if(cl->cl_runas > 0) {
L9:;
										free((void *)cl->cl_runas);
L10:;
										if(cl->cl_mailto > 0) {
L11:;
											free((void *)cl->cl_mailto);
L12:;
											free((void *)cl);
L13:;
											if(cl < (0)) {
L14:;
												cf->cf_next = file_base;
												file_base = cf;
												delete_file(cf->cf_user);
L15:;
												return (-1);
												/* END OF PATH at func_read_file@p412#1 */
											}
											else if(cl > (0)) {
												goto L14;
											}
											else {
												if(cf->cf_user < (0)) {
L16:;
													free((void *)cf->cf_user);
													goto L15;
												}
												else if(cf->cf_user > (0)) {
													goto L16;
												}
												else {
													goto L15;
												}
											}
										}
										else if(cl->cl_mailto < 0) {
											goto L11;
										}
										else {
											goto L12;
										}
									}
									else if(cl->cl_runas < 0) {
										goto L9;
									}
									else {
										goto L10;
									}
								}
								else if(cl->cl_shell < 0) {
									goto L7;
								}
								else {
									goto L8;
								}
							}
							else if(cl->cl_next < (0)) {
								goto L13;
							}
							else {
								goto L13;
							}
						}
						else if(cl > (0)) {
							goto L6;
						}
						else {
							goto L13;
						}
					}
					else if(ff->BLAST_FLAG < 1) {
						BLAST_ERROR();
						goto L4;
					}
					else {
						BLAST_ERROR();
						goto L4;
					}
				}
				else if(ff > (0)) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(rc > 0) {
				error_e((char *)"Could not stat %s", file_name);
				goto L1;
			}
			else {
				tmp___0 = strncmp(file_name, (char *)"new.", 4U);
				if(tmp___0 == 0) {
					if(file_stat.st_uid == 0U) {
						runas = 0U;
						cf->cf_user = strdup2(file_name + 4);
L17:;
						if(debug_opt > 0) {
							Debug((char *)"User %s Entry", file_name);
							bzero((void *)(buf), sizeof(buf));
							tmp___1 = fileno(ff);
							tmp___2 = read_type(tmp___1, & type, & size);
							if(tmp___2 < 0) {
								error((char *)"File %s is not valid: ignored.", file_name);
								error((char *)"This file may have been generated by an old version of fcron.");
								error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
L18:;
								goto L2;
							}
							else if(tmp___2 > 0) {
								error((char *)"File %s is not valid: ignored.", file_name);
								error((char *)"This file may have been generated by an old version of fcron.");
								error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
								goto L18;
							}
							else {
								if(type < 1) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
L19:;
									goto L2;
								}
								else if(type > 1) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L19;
								}
								else {
									tmp___3 = fileno(ff);
									tmp___4 = read(tmp___3, (void *)(& bufi), (unsigned int )size);
									if(tmp___4 < size) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
L20:;
										goto L2;
									}
									else {
										if(bufi < 100L) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
L21:;
											goto L2;
										}
										else if(bufi > 100L) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L21;
										}
										else {
											tmp___5 = fileno(ff);
											tmp___6 = read_type(tmp___5, & type, & size);
											if(tmp___6 < 0) {
												error((char *)"Invalid binary fcrontab (no USER field)");
L22:;
												goto L2;
											}
											else if(tmp___6 > 0) {
												error((char *)"Invalid binary fcrontab (no USER field)");
												goto L22;
											}
											else {
												if(type < 2) {
													error((char *)"Invalid binary fcrontab (no USER field)");
L23:;
													goto L2;
												}
												else if(type > 2) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L23;
												}
												else {
													free((void *)cf->cf_user);
													tmp___7 = fileno(ff);
													tmp___8 = read_strn(tmp___7, & cf->cf_user, size);
													if(tmp___8 < 0) {
														error((char *)"Cannot read user\'s name : file ignored");
L24:;
														goto L2;
													}
													else if(tmp___8 > 0) {
														error((char *)"Cannot read user\'s name : file ignored");
														goto L24;
													}
													else {
														if(runas == 0U) {
L25:;
															tmp___9 = fileno(ff);
															tmp___10 = read_type(tmp___9, & type, & size);
															if(tmp___10 < 0) {
																error((char *)"could not get time and date of saving");
L26:;
																goto L2;
															}
															else if(tmp___10 > 0) {
																error((char *)"could not get time and date of saving");
																goto L26;
															}
															else {
																if(type < 3) {
																	error((char *)"could not get time and date of saving");
L27:;
																	goto L2;
																}
																else if(type > 3) {
																	error((char *)"could not get time and date of saving");
																	goto L27;
																}
																else {
																	tmp___11 = fileno(ff);
																	tmp___12 = read(tmp___11, (void *)(& t_save), (unsigned int )size);
																	if(tmp___12 < size) {
																		error((char *)"could not get time and date of saving");
L28:;
																		goto L2;
																	}
																	else {
																		tmp___58 = calloc(1U, sizeof(cl_t ));
																		cl = (cl_t *)tmp___58;
																		if(cl == (0)) {
																			die_e((char *)"Could not calloc.");
L29:;
L30:;
																			tmp___55 = fileno(ff);
																			tmp___56 = read_type(tmp___55, & type, & size);
																			if(tmp___56 < 0) {
L31:;
L32:;
																				free((void *)cl);
																				tmp___57 = ferror(ff);
																				if(tmp___57 < 0) {
																					error((char *)"file %s is truncated : you should reinstall it with fcrontab", file_name);
L33:;
																					if(ff->BLAST_FLAG == 1) {
																						ff->BLAST_FLAG = 0;
L34:;
																						fclose(ff);
																						return (0);
																						/* END OF PATH at func_read_file@p386#1 */
																					}
																					else if(ff->BLAST_FLAG < 1) {
																						BLAST_ERROR();
																						goto L34;
																					}
																					else {
																						BLAST_ERROR();
																						goto L34;
																					}
																				}
																				else if(tmp___57 > 0) {
																					error((char *)"file %s is truncated : you should reinstall it with fcrontab", file_name);
																					goto L33;
																				}
																				else {
																					goto L33;
																				}
																			}
																			else if(tmp___56 > 0) {
																				goto L31;
																			}
																			else {
																				if(type == 1000) {
																					tmp___59 = calloc(1U, sizeof(env_t ));
																					env = (env_t *)tmp___59;
																					if(env == (0)) {
																						die_e((char *)"Could not calloc.");
L35:;
																						tmp___13 = fileno(ff);
																						tmp___14 = read_strn(tmp___13, & env->e_val, size);
																						if(tmp___14 < 0) {
																							error_e((char *)"Error while reading env var");
L36:;
																							goto L2;
																						}
																						else if(tmp___14 > 0) {
																							error_e((char *)"Error while reading env var");
																							goto L36;
																						}
																						else {
L37:;
																							if(debug_opt > 0) {
																								Debug((char *)"  Env: \"%s\"", env->e_val);
L38:;
																								env->e_next = cf->cf_env_base;
																								cf->cf_env_base = env;
L39:;
																								goto L30;
																							}
																							else if(debug_opt < 0) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																					}
																					else if(env < (0)) {
																						goto L35;
																					}
																					else {
																						goto L35;
																					}
																				}
																				else if(type == 4) {
L40:;
																					tmp___15 = fileno(ff);
																					tmp___16 = read(tmp___15, (void *)(& bufi), (unsigned int )size);
																					if(tmp___16 < size) {
																						error_e((char *)"Error while reading tzdiff field");
																						goto L2;
																					}
																					else {
L41:;
																						cf->cf_tzdiff = (signed char )bufi;
																						goto L39;
																					}
																				}
																				else if(type == 2001) {
L42:;
																					tmp___17 = fileno(ff);
																					tmp___18 = read_strn(tmp___17, & cl->cl_shell, size);
																					if(tmp___18 < 0) {
																						error_e((char *)"Error while reading shell field");
L43:;
																						goto L2;
																					}
																					else if(tmp___18 > 0) {
																						error_e((char *)"Error while reading shell field");
																						goto L43;
																					}
																					else {
L44:;
																						goto L39;
																					}
																				}
																				else if(type == 2006) {
L45:;
																					tmp___19 = fileno(ff);
																					tmp___20 = read_strn(tmp___19, & cl->cl_runas, size);
																					if(tmp___20 < 0) {
																						error_e((char *)"Error while reading runas field");
L46:;
																						goto L2;
																					}
																					else if(tmp___20 > 0) {
																						error_e((char *)"Error while reading runas field");
																						goto L46;
																					}
																					else {
L47:;
																						goto L39;
																					}
																				}
																				else if(type == 2007) {
L48:;
																					tmp___21 = fileno(ff);
																					tmp___22 = read_strn(tmp___21, & cl->cl_mailto, size);
																					if(tmp___22 < 0) {
																						error_e((char *)"Error while reading mailto field");
L49:;
																						goto L2;
																					}
																					else if(tmp___22 > 0) {
																						error_e((char *)"Error while reading mailto field");
																						goto L49;
																					}
																					else {
L50:;
																						goto L39;
																					}
																				}
																				else if(type == 2008) {
L51:;
																					tmp___23 = fileno(ff);
																					tmp___24 = read(tmp___23, (void *)(& bufi), (unsigned int )size);
																					if(tmp___24 < size) {
																						error_e((char *)"Error while reading nextexe field");
																						goto L2;
																					}
																					else {
L52:;
																						cl->cl_nextexe = bufi;
																						goto L39;
																					}
																				}
																				else if(type == 2018) {
L53:;
																					tmp___25 = fileno(ff);
																					tmp___26 = read(tmp___25, (void *)(& bufi), (unsigned int )size);
																					if(tmp___26 < size) {
																						error_e((char *)"Error while reading first field");
																						goto L2;
																					}
																					else {
L54:;
																						cl->cl_first = bufi;
																						goto L39;
																					}
																				}
																				else if(type == 2017) {
L55:;
																					tmp___27 = fileno(ff);
																					tmp___28 = read(tmp___27, (void *)(& cl->cl_option), (unsigned int )size);
																					if(tmp___28 < size) {
																						error_e((char *)"Error while reading option field");
																						goto L2;
																					}
																					else {
L56:;
																						goto L39;
																					}
																				}
																				else if(type == 2002) {
L57:;
																					tmp___29 = fileno(ff);
																					tmp___30 = read(tmp___29, (void *)(& cl->cl_numexe), (unsigned int )size);
																					if(tmp___30 < size) {
																						error_e((char *)"Error while reading numexe field");
																						goto L2;
																					}
																					else {
L58:;
																						goto L39;
																					}
																				}
																				else if(type == 2003) {
L59:;
																					tmp___31 = fileno(ff);
																					tmp___32 = read(tmp___31, (void *)(& cl->cl_lavg), (unsigned int )size);
																					if(tmp___32 < size) {
																						error_e((char *)"Error while reading lavg field");
																						goto L2;
																					}
																					else {
L60:;
																						goto L39;
																					}
																				}
																				else if(type == 2004) {
L61:;
																					tmp___33 = fileno(ff);
																					tmp___34 = read(tmp___33, (void *)(& bufi), (unsigned int )size);
																					if(tmp___34 < size) {
																						error_e((char *)"Error while reading until field");
																						goto L2;
																					}
																					else {
L62:;
																						cl->cl_until = bufi;
																						goto L39;
																					}
																				}
																				else if(type == 2005) {
L63:;
																					tmp___35 = fileno(ff);
																					tmp___36 = read(tmp___35, (void *)(& cl->cl_nice), (unsigned int )size);
																					if(tmp___36 < size) {
																						error_e((char *)"Error while reading nice field");
																						goto L2;
																					}
																					else {
L64:;
																						goto L39;
																					}
																				}
																				else if(type == 2011) {
L65:;
																					tmp___37 = fileno(ff);
																					tmp___38 = read(tmp___37, (void *)(& bufi), (unsigned int )size);
																					if(tmp___38 < size) {
																						error_e((char *)"Error while reading runfreq field");
																						goto L2;
																					}
																					else {
L66:;
																						cl->cl_runfreq = (unsigned short )bufi;
																						goto L39;
																					}
																				}
																				else if(type == 2009) {
L67:;
																					tmp___39 = fileno(ff);
																					tmp___40 = read(tmp___39, (void *)(& bufi), (unsigned int )size);
																					if(tmp___40 < size) {
																						error_e((char *)"Error while reading remain field");
																						goto L2;
																					}
																					else {
L68:;
																						cl->cl_remain = (unsigned short )bufi;
																						goto L39;
																					}
																				}
																				else if(type == 2010) {
L69:;
																					tmp___41 = fileno(ff);
																					tmp___42 = read(tmp___41, (void *)(& bufi), (unsigned int )size);
																					if(tmp___42 < size) {
																						error_e((char *)"Error while reading timefreq field");
																						goto L2;
																					}
																					else {
L70:;
																						cl->cl_timefreq = bufi;
																						goto L39;
																					}
																				}
																				else if(type == 2012) {
L71:;
																					tmp___43 = fileno(ff);
																					tmp___44 = read(tmp___43, (void *)(& cl->cl_mins), (unsigned int )size);
																					if(tmp___44 < size) {
																						error_e((char *)"Error while reading mins field");
																						goto L2;
																					}
																					else {
L72:;
																						goto L39;
																					}
																				}
																				else if(type == 2013) {
L73:;
																					tmp___45 = fileno(ff);
																					tmp___46 = read(tmp___45, (void *)(& cl->cl_hrs), (unsigned int )size);
																					if(tmp___46 < size) {
																						error_e((char *)"Error while reading hrs field");
																						goto L2;
																					}
																					else {
L74:;
																						goto L39;
																					}
																				}
																				else if(type == 2014) {
L75:;
																					tmp___47 = fileno(ff);
																					tmp___48 = read(tmp___47, (void *)(& cl->cl_days), (unsigned int )size);
																					if(tmp___48 < size) {
																						error_e((char *)"Error while reading days field");
																						goto L2;
																					}
																					else {
L76:;
																						goto L39;
																					}
																				}
																				else if(type == 2015) {
L77:;
																					tmp___49 = fileno(ff);
																					tmp___50 = read(tmp___49, (void *)(& cl->cl_mons), (unsigned int )size);
																					if(tmp___50 < size) {
																						error_e((char *)"Error while reading mons field");
																						goto L2;
																					}
																					else {
L78:;
																						goto L39;
																					}
																				}
																				else if(type == 2016) {
L79:;
																					tmp___51 = fileno(ff);
																					tmp___52 = read(tmp___51, (void *)(& cl->cl_dow), (unsigned int )size);
																					if(tmp___52 < size) {
																						error_e((char *)"Error while reading dow field");
																						goto L2;
																					}
																					else {
L80:;
																						goto L39;
																					}
																				}
																				else if(type == 2000) {
																					tmp___53 = add_line_to_file(cl, cf, runas, runas_str, t_save);
L81:;
																					if(tmp___53 == 0) {
																						tmp___60 = calloc(1U, sizeof(cl_t ));
																						cl = (cl_t *)tmp___60;
																						if(cl == (0)) {
																							die_e((char *)"Could not calloc.");
L82:;
																							goto L39;
																						}
																						else if(cl < (0)) {
																							goto L82;
																						}
																						else {
																							goto L82;
																						}
																					}
																					else if(tmp___53 < 0) {
																						goto L82;
																					}
																					else {
																						goto L82;
																					}
																				}
																				else if(type < 4) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
L83:;
																					i = 0;
L84:;
L85:;
																					if(i >= size) {
L86:;
																						goto L39;
																					}
																					else {
																						tmp___54 = _IO_getc(ff);
																						if(tmp___54 == -1) {
																							goto L2;
																						}
																						else if(tmp___54 < -1) {
L87:;
																							i = i + 1;
																							goto L85;
																						}
																						else {
																							goto L87;
																						}
																					}
																				}
																				else if(type > 4 && type < 1000) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 1000 && type < 2000) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2000 && type < 2001) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2001 && type < 2002) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2002 && type < 2003) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2003 && type < 2004) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2004 && type < 2005) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2005 && type < 2006) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2006 && type < 2007) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2007 && type < 2008) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2008 && type < 2009) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2009 && type < 2010) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2010 && type < 2011) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2011 && type < 2012) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2012 && type < 2013) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2013 && type < 2014) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2014 && type < 2015) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2015 && type < 2016) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2016 && type < 2017) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2017 && type < 2018) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																			}
																		}
																		else if(cl < (0)) {
																			goto L30;
																		}
																		else {
																			goto L30;
																		}
																	}
																}
															}
														}
														else if(runas < 0U) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
												}
											}
										}
									}
								}
							}
						}
						else if(debug_opt < 0) {
							Debug((char *)"User %s Entry", file_name);
							bzero((void *)(buf), sizeof(buf));
							tmp___1 = fileno(ff);
							tmp___2 = read_type(tmp___1, & type, & size);
							if(tmp___2 < 0) {
								error((char *)"File %s is not valid: ignored.", file_name);
								error((char *)"This file may have been generated by an old version of fcron.");
								error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
								goto L18;
							}
							else if(tmp___2 > 0) {
								error((char *)"File %s is not valid: ignored.", file_name);
								error((char *)"This file may have been generated by an old version of fcron.");
								error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
								goto L18;
							}
							else {
								if(type < 1) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L19;
								}
								else if(type > 1) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L19;
								}
								else {
									tmp___3 = fileno(ff);
									tmp___4 = read(tmp___3, (void *)(& bufi), (unsigned int )size);
									if(tmp___4 < size) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L20;
									}
									else {
										if(bufi < 100L) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L21;
										}
										else if(bufi > 100L) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L21;
										}
										else {
											tmp___5 = fileno(ff);
											tmp___6 = read_type(tmp___5, & type, & size);
											if(tmp___6 < 0) {
												error((char *)"Invalid binary fcrontab (no USER field)");
												goto L22;
											}
											else if(tmp___6 > 0) {
												error((char *)"Invalid binary fcrontab (no USER field)");
												goto L22;
											}
											else {
												if(type < 2) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L23;
												}
												else if(type > 2) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L23;
												}
												else {
													free((void *)cf->cf_user);
													tmp___7 = fileno(ff);
													tmp___8 = read_strn(tmp___7, & cf->cf_user, size);
													if(tmp___8 < 0) {
														error((char *)"Cannot read user\'s name : file ignored");
														goto L24;
													}
													else if(tmp___8 > 0) {
														error((char *)"Cannot read user\'s name : file ignored");
														goto L24;
													}
													else {
														if(runas == 0U) {
L88:;
															tmp___9 = fileno(ff);
															tmp___10 = read_type(tmp___9, & type, & size);
															if(tmp___10 < 0) {
																error((char *)"could not get time and date of saving");
																goto L26;
															}
															else if(tmp___10 > 0) {
																error((char *)"could not get time and date of saving");
																goto L26;
															}
															else {
																if(type < 3) {
																	error((char *)"could not get time and date of saving");
																	goto L27;
																}
																else if(type > 3) {
																	error((char *)"could not get time and date of saving");
																	goto L27;
																}
																else {
																	tmp___11 = fileno(ff);
																	tmp___12 = read(tmp___11, (void *)(& t_save), (unsigned int )size);
																	if(tmp___12 < size) {
																		error((char *)"could not get time and date of saving");
																		goto L28;
																	}
																	else {
																		tmp___58 = calloc(1U, sizeof(cl_t ));
																		cl = (cl_t *)tmp___58;
																		if(cl == (0)) {
																			die_e((char *)"Could not calloc.");
L89:;
L90:;
																			tmp___55 = fileno(ff);
																			tmp___56 = read_type(tmp___55, & type, & size);
																			if(tmp___56 < 0) {
																				goto L31;
																			}
																			else if(tmp___56 > 0) {
																				goto L31;
																			}
																			else {
																				if(type == 1000) {
																					tmp___59 = calloc(1U, sizeof(env_t ));
																					env = (env_t *)tmp___59;
																					if(env == (0)) {
																						die_e((char *)"Could not calloc.");
L91:;
																						tmp___13 = fileno(ff);
																						tmp___14 = read_strn(tmp___13, & env->e_val, size);
																						if(tmp___14 < 0) {
																							error_e((char *)"Error while reading env var");
																							goto L36;
																						}
																						else if(tmp___14 > 0) {
																							error_e((char *)"Error while reading env var");
																							goto L36;
																						}
																						else {
L92:;
																							if(debug_opt < 0) {
																								Debug((char *)"  Env: \"%s\"", env->e_val);
																								goto L38;
																							}
																							else if(debug_opt > 0) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																					}
																					else if(env < (0)) {
																						goto L91;
																					}
																					else {
																						goto L91;
																					}
																				}
																				else if(type == 4) {
																					goto L40;
																				}
																				else if(type == 2001) {
																					goto L42;
																				}
																				else if(type == 2006) {
																					goto L45;
																				}
																				else if(type == 2007) {
																					goto L48;
																				}
																				else if(type == 2008) {
																					goto L51;
																				}
																				else if(type == 2018) {
																					goto L53;
																				}
																				else if(type == 2017) {
																					goto L55;
																				}
																				else if(type == 2002) {
																					goto L57;
																				}
																				else if(type == 2003) {
																					goto L59;
																				}
																				else if(type == 2004) {
																					goto L61;
																				}
																				else if(type == 2005) {
																					goto L63;
																				}
																				else if(type == 2011) {
																					goto L65;
																				}
																				else if(type == 2009) {
																					goto L67;
																				}
																				else if(type == 2010) {
																					goto L69;
																				}
																				else if(type == 2012) {
																					goto L71;
																				}
																				else if(type == 2013) {
																					goto L73;
																				}
																				else if(type == 2014) {
																					goto L75;
																				}
																				else if(type == 2015) {
																					goto L77;
																				}
																				else if(type == 2016) {
																					goto L79;
																				}
																				else if(type == 2000) {
																					tmp___53 = add_line_to_file(cl, cf, runas, runas_str, t_save);
																					goto L81;
																				}
																				else if(type < 4) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 4 && type < 1000) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 1000 && type < 2000) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2000 && type < 2001) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2001 && type < 2002) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2002 && type < 2003) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2003 && type < 2004) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2004 && type < 2005) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2005 && type < 2006) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2006 && type < 2007) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2007 && type < 2008) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2008 && type < 2009) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2009 && type < 2010) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2010 && type < 2011) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2011 && type < 2012) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2012 && type < 2013) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2013 && type < 2014) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2014 && type < 2015) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2015 && type < 2016) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2016 && type < 2017) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2017 && type < 2018) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																			}
																		}
																		else if(cl < (0)) {
																			goto L90;
																		}
																		else {
																			goto L90;
																		}
																	}
																}
															}
														}
														else if(runas < 0U) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
												}
											}
										}
									}
								}
							}
						}
						else {
							bzero((void *)(buf), sizeof(buf));
							tmp___1 = fileno(ff);
							tmp___2 = read_type(tmp___1, & type, & size);
							if(tmp___2 < 0) {
								error((char *)"File %s is not valid: ignored.", file_name);
								error((char *)"This file may have been generated by an old version of fcron.");
								error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
								goto L18;
							}
							else if(tmp___2 > 0) {
								error((char *)"File %s is not valid: ignored.", file_name);
								error((char *)"This file may have been generated by an old version of fcron.");
								error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
								goto L18;
							}
							else {
								if(type < 1) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L19;
								}
								else if(type > 1) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L19;
								}
								else {
									tmp___3 = fileno(ff);
									tmp___4 = read(tmp___3, (void *)(& bufi), (unsigned int )size);
									if(tmp___4 < size) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L20;
									}
									else {
										if(bufi < 100L) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L21;
										}
										else if(bufi > 100L) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L21;
										}
										else {
											tmp___5 = fileno(ff);
											tmp___6 = read_type(tmp___5, & type, & size);
											if(tmp___6 < 0) {
												error((char *)"Invalid binary fcrontab (no USER field)");
												goto L22;
											}
											else if(tmp___6 > 0) {
												error((char *)"Invalid binary fcrontab (no USER field)");
												goto L22;
											}
											else {
												if(type < 2) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L23;
												}
												else if(type > 2) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L23;
												}
												else {
													free((void *)cf->cf_user);
													tmp___7 = fileno(ff);
													tmp___8 = read_strn(tmp___7, & cf->cf_user, size);
													if(tmp___8 < 0) {
														error((char *)"Cannot read user\'s name : file ignored");
														goto L24;
													}
													else if(tmp___8 > 0) {
														error((char *)"Cannot read user\'s name : file ignored");
														goto L24;
													}
													else {
														if(runas == 0U) {
L93:;
															tmp___9 = fileno(ff);
															tmp___10 = read_type(tmp___9, & type, & size);
															if(tmp___10 < 0) {
																error((char *)"could not get time and date of saving");
																goto L26;
															}
															else if(tmp___10 > 0) {
																error((char *)"could not get time and date of saving");
																goto L26;
															}
															else {
																if(type < 3) {
																	error((char *)"could not get time and date of saving");
																	goto L27;
																}
																else if(type > 3) {
																	error((char *)"could not get time and date of saving");
																	goto L27;
																}
																else {
																	tmp___11 = fileno(ff);
																	tmp___12 = read(tmp___11, (void *)(& t_save), (unsigned int )size);
																	if(tmp___12 < size) {
																		error((char *)"could not get time and date of saving");
																		goto L28;
																	}
																	else {
																		tmp___58 = calloc(1U, sizeof(cl_t ));
																		cl = (cl_t *)tmp___58;
																		if(cl == (0)) {
																			die_e((char *)"Could not calloc.");
L94:;
L95:;
																			tmp___55 = fileno(ff);
																			tmp___56 = read_type(tmp___55, & type, & size);
																			if(tmp___56 < 0) {
																				goto L31;
																			}
																			else if(tmp___56 > 0) {
																				goto L31;
																			}
																			else {
																				if(type == 1000) {
																					tmp___59 = calloc(1U, sizeof(env_t ));
																					env = (env_t *)tmp___59;
																					if(env == (0)) {
																						die_e((char *)"Could not calloc.");
L96:;
																						tmp___13 = fileno(ff);
																						tmp___14 = read_strn(tmp___13, & env->e_val, size);
																						if(tmp___14 < 0) {
																							error_e((char *)"Error while reading env var");
																							goto L36;
																						}
																						else if(tmp___14 > 0) {
																							error_e((char *)"Error while reading env var");
																							goto L36;
																						}
																						else {
L97:;
																							if(debug_opt == 0) {
																								goto L38;
																							}
																							else if(debug_opt > 0) {
																								/* FALSE PATH */ 
																							}
																							else {
																								/* FALSE PATH */ 
																							}
																						}
																					}
																					else if(env < (0)) {
																						goto L96;
																					}
																					else {
																						goto L96;
																					}
																				}
																				else if(type == 4) {
																					goto L40;
																				}
																				else if(type == 2001) {
																					goto L42;
																				}
																				else if(type == 2006) {
																					goto L45;
																				}
																				else if(type == 2007) {
																					goto L48;
																				}
																				else if(type == 2008) {
																					goto L51;
																				}
																				else if(type == 2018) {
																					goto L53;
																				}
																				else if(type == 2017) {
																					goto L55;
																				}
																				else if(type == 2002) {
																					goto L57;
																				}
																				else if(type == 2003) {
																					goto L59;
																				}
																				else if(type == 2004) {
																					goto L61;
																				}
																				else if(type == 2005) {
																					goto L63;
																				}
																				else if(type == 2011) {
																					goto L65;
																				}
																				else if(type == 2009) {
																					goto L67;
																				}
																				else if(type == 2010) {
																					goto L69;
																				}
																				else if(type == 2012) {
																					goto L71;
																				}
																				else if(type == 2013) {
																					goto L73;
																				}
																				else if(type == 2014) {
																					goto L75;
																				}
																				else if(type == 2015) {
																					goto L77;
																				}
																				else if(type == 2016) {
																					goto L79;
																				}
																				else if(type == 2000) {
																					tmp___53 = add_line_to_file(cl, cf, runas, runas_str, t_save);
																					goto L81;
																				}
																				else if(type < 4) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 4 && type < 1000) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 1000 && type < 2000) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2000 && type < 2001) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2001 && type < 2002) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2002 && type < 2003) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2003 && type < 2004) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2004 && type < 2005) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2005 && type < 2006) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2006 && type < 2007) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2007 && type < 2008) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2008 && type < 2009) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2009 && type < 2010) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2010 && type < 2011) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2011 && type < 2012) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2012 && type < 2013) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2013 && type < 2014) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2014 && type < 2015) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2015 && type < 2016) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2016 && type < 2017) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else if(type > 2017 && type < 2018) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																				else {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L83;
																				}
																			}
																		}
																		else if(cl < (0)) {
																			goto L95;
																		}
																		else {
																			goto L95;
																		}
																	}
																}
															}
														}
														else if(runas < 0U) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
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
					else if(file_stat.st_uid < 0U) {
L98:;
						runas = file_stat.st_uid;
						pass = getpwuid(file_stat.st_uid);
						if(pass == (0)) {
							error_e((char *)"Could not getpwuid(%d)", file_stat.st_uid);
							goto L2;
						}
						else if(pass < (0)) {
							runas_str = strdup2(pass->pw_name);
							cf->cf_user = strdup2(file_name + 4);
L99:;
							if(debug_opt > 0) {
								Debug((char *)"User %s Entry", file_name);
								bzero((void *)(buf), sizeof(buf));
								tmp___1 = fileno(ff);
								tmp___2 = read_type(tmp___1, & type, & size);
								if(tmp___2 < 0) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L18;
								}
								else if(tmp___2 > 0) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L18;
								}
								else {
									if(type < 1) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L19;
									}
									else if(type > 1) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L19;
									}
									else {
										tmp___3 = fileno(ff);
										tmp___4 = read(tmp___3, (void *)(& bufi), (unsigned int )size);
										if(tmp___4 < size) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L20;
										}
										else {
											if(bufi < 100L) {
												error((char *)"File %s is not valid: ignored.", file_name);
												error((char *)"This file may have been generated by an old version of fcron.");
												error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
												goto L21;
											}
											else if(bufi > 100L) {
												error((char *)"File %s is not valid: ignored.", file_name);
												error((char *)"This file may have been generated by an old version of fcron.");
												error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
												goto L21;
											}
											else {
												tmp___5 = fileno(ff);
												tmp___6 = read_type(tmp___5, & type, & size);
												if(tmp___6 < 0) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L22;
												}
												else if(tmp___6 > 0) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L22;
												}
												else {
													if(type < 2) {
														error((char *)"Invalid binary fcrontab (no USER field)");
														goto L23;
													}
													else if(type > 2) {
														error((char *)"Invalid binary fcrontab (no USER field)");
														goto L23;
													}
													else {
														free((void *)cf->cf_user);
														tmp___7 = fileno(ff);
														tmp___8 = read_strn(tmp___7, & cf->cf_user, size);
														if(tmp___8 < 0) {
															error((char *)"Cannot read user\'s name : file ignored");
															goto L24;
														}
														else if(tmp___8 > 0) {
															error((char *)"Cannot read user\'s name : file ignored");
															goto L24;
														}
														else {
															if(runas < 0U) {
L100:;
																free((void *)cf->cf_user);
																cf->cf_user = runas_str;
																goto L25;
															}
															else if(runas > 0U) {
																goto L100;
															}
															else {
																goto L25;
															}
														}
													}
												}
											}
										}
									}
								}
							}
							else if(debug_opt < 0) {
								Debug((char *)"User %s Entry", file_name);
								bzero((void *)(buf), sizeof(buf));
								tmp___1 = fileno(ff);
								tmp___2 = read_type(tmp___1, & type, & size);
								if(tmp___2 < 0) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L18;
								}
								else if(tmp___2 > 0) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L18;
								}
								else {
									if(type < 1) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L19;
									}
									else if(type > 1) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L19;
									}
									else {
										tmp___3 = fileno(ff);
										tmp___4 = read(tmp___3, (void *)(& bufi), (unsigned int )size);
										if(tmp___4 < size) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L20;
										}
										else {
											if(bufi < 100L) {
												error((char *)"File %s is not valid: ignored.", file_name);
												error((char *)"This file may have been generated by an old version of fcron.");
												error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
												goto L21;
											}
											else if(bufi > 100L) {
												error((char *)"File %s is not valid: ignored.", file_name);
												error((char *)"This file may have been generated by an old version of fcron.");
												error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
												goto L21;
											}
											else {
												tmp___5 = fileno(ff);
												tmp___6 = read_type(tmp___5, & type, & size);
												if(tmp___6 < 0) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L22;
												}
												else if(tmp___6 > 0) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L22;
												}
												else {
													if(type < 2) {
														error((char *)"Invalid binary fcrontab (no USER field)");
														goto L23;
													}
													else if(type > 2) {
														error((char *)"Invalid binary fcrontab (no USER field)");
														goto L23;
													}
													else {
														free((void *)cf->cf_user);
														tmp___7 = fileno(ff);
														tmp___8 = read_strn(tmp___7, & cf->cf_user, size);
														if(tmp___8 < 0) {
															error((char *)"Cannot read user\'s name : file ignored");
															goto L24;
														}
														else if(tmp___8 > 0) {
															error((char *)"Cannot read user\'s name : file ignored");
															goto L24;
														}
														else {
															if(runas < 0U) {
L101:;
																free((void *)cf->cf_user);
																cf->cf_user = runas_str;
																goto L88;
															}
															else if(runas > 0U) {
																goto L101;
															}
															else {
																goto L88;
															}
														}
													}
												}
											}
										}
									}
								}
							}
							else {
								bzero((void *)(buf), sizeof(buf));
								tmp___1 = fileno(ff);
								tmp___2 = read_type(tmp___1, & type, & size);
								if(tmp___2 < 0) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L18;
								}
								else if(tmp___2 > 0) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L18;
								}
								else {
									if(type < 1) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L19;
									}
									else if(type > 1) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L19;
									}
									else {
										tmp___3 = fileno(ff);
										tmp___4 = read(tmp___3, (void *)(& bufi), (unsigned int )size);
										if(tmp___4 < size) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L20;
										}
										else {
											if(bufi < 100L) {
												error((char *)"File %s is not valid: ignored.", file_name);
												error((char *)"This file may have been generated by an old version of fcron.");
												error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
												goto L21;
											}
											else if(bufi > 100L) {
												error((char *)"File %s is not valid: ignored.", file_name);
												error((char *)"This file may have been generated by an old version of fcron.");
												error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
												goto L21;
											}
											else {
												tmp___5 = fileno(ff);
												tmp___6 = read_type(tmp___5, & type, & size);
												if(tmp___6 < 0) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L22;
												}
												else if(tmp___6 > 0) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L22;
												}
												else {
													if(type < 2) {
														error((char *)"Invalid binary fcrontab (no USER field)");
														goto L23;
													}
													else if(type > 2) {
														error((char *)"Invalid binary fcrontab (no USER field)");
														goto L23;
													}
													else {
														free((void *)cf->cf_user);
														tmp___7 = fileno(ff);
														tmp___8 = read_strn(tmp___7, & cf->cf_user, size);
														if(tmp___8 < 0) {
															error((char *)"Cannot read user\'s name : file ignored");
															goto L24;
														}
														else if(tmp___8 > 0) {
															error((char *)"Cannot read user\'s name : file ignored");
															goto L24;
														}
														else {
															if(runas < 0U) {
L102:;
																free((void *)cf->cf_user);
																cf->cf_user = runas_str;
																goto L93;
															}
															else if(runas > 0U) {
																goto L102;
															}
															else {
																goto L93;
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
						else {
							runas_str = strdup2(pass->pw_name);
							cf->cf_user = strdup2(file_name + 4);
							goto L99;
						}
					}
					else {
						goto L98;
					}
				}
				else if(tmp___0 < 0) {
L103:;
					if(cf->cf_user == 0) {
						cf->cf_user = strdup2(file_name);
L104:;
						if(file_stat.st_uid == 0U) {
							runas = 0U;
							goto L17;
						}
						else if(file_stat.st_uid < 0U) {
							error((char *)"Non-new file %s owned by someone else than root", file_name);
L105:;
							goto L2;
						}
						else {
							error((char *)"Non-new file %s owned by someone else than root", file_name);
							goto L105;
						}
					}
					else if(cf->cf_user > 0) {
						goto L104;
					}
					else {
						goto L104;
					}
				}
				else {
					goto L103;
				}
			}
		}
		else if(ff == (0)) {
			/* FALSE PATH */ 
		}
		else {
			/* FALSE PATH */ 
		}
	}
	else if(ff > (0)) {
		ff->BLAST_FLAG = 1;
		if(ff > (0)) {
			tmp = fileno(ff);
			rc = fstat__extinline(tmp, & file_stat);
			if(rc < 0) {
				error_e((char *)"Could not stat %s", file_name);
L106:;
L107:;
				if(ff > (0)) {
					goto L3;
				}
				else if(ff < (0)) {
					/* FALSE PATH */ 
				}
				else {
					/* FALSE PATH */ 
				}
			}
			else if(rc > 0) {
				error_e((char *)"Could not stat %s", file_name);
				goto L106;
			}
			else {
				tmp___0 = strncmp(file_name, (char *)"new.", 4U);
				if(tmp___0 == 0) {
					if(file_stat.st_uid == 0U) {
						runas = 0U;
						cf->cf_user = strdup2(file_name + 4);
L108:;
						if(debug_opt > 0) {
							Debug((char *)"User %s Entry", file_name);
							bzero((void *)(buf), sizeof(buf));
							tmp___1 = fileno(ff);
							tmp___2 = read_type(tmp___1, & type, & size);
							if(tmp___2 < 0) {
								error((char *)"File %s is not valid: ignored.", file_name);
								error((char *)"This file may have been generated by an old version of fcron.");
								error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
L109:;
								goto L107;
							}
							else if(tmp___2 > 0) {
								error((char *)"File %s is not valid: ignored.", file_name);
								error((char *)"This file may have been generated by an old version of fcron.");
								error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
								goto L109;
							}
							else {
								if(type < 1) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
L110:;
									goto L107;
								}
								else if(type > 1) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L110;
								}
								else {
									tmp___3 = fileno(ff);
									tmp___4 = read(tmp___3, (void *)(& bufi), (unsigned int )size);
									if(tmp___4 < size) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
L111:;
										goto L107;
									}
									else {
										if(bufi < 100L) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
L112:;
											goto L107;
										}
										else if(bufi > 100L) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L112;
										}
										else {
											tmp___5 = fileno(ff);
											tmp___6 = read_type(tmp___5, & type, & size);
											if(tmp___6 < 0) {
												error((char *)"Invalid binary fcrontab (no USER field)");
L113:;
												goto L107;
											}
											else if(tmp___6 > 0) {
												error((char *)"Invalid binary fcrontab (no USER field)");
												goto L113;
											}
											else {
												if(type < 2) {
													error((char *)"Invalid binary fcrontab (no USER field)");
L114:;
													goto L107;
												}
												else if(type > 2) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L114;
												}
												else {
													free((void *)cf->cf_user);
													tmp___7 = fileno(ff);
													tmp___8 = read_strn(tmp___7, & cf->cf_user, size);
													if(tmp___8 < 0) {
														error((char *)"Cannot read user\'s name : file ignored");
L115:;
														goto L107;
													}
													else if(tmp___8 > 0) {
														error((char *)"Cannot read user\'s name : file ignored");
														goto L115;
													}
													else {
														if(runas == 0U) {
L116:;
															tmp___9 = fileno(ff);
															tmp___10 = read_type(tmp___9, & type, & size);
															if(tmp___10 < 0) {
																error((char *)"could not get time and date of saving");
L117:;
																goto L107;
															}
															else if(tmp___10 > 0) {
																error((char *)"could not get time and date of saving");
																goto L117;
															}
															else {
																if(type < 3) {
																	error((char *)"could not get time and date of saving");
L118:;
																	goto L107;
																}
																else if(type > 3) {
																	error((char *)"could not get time and date of saving");
																	goto L118;
																}
																else {
																	tmp___11 = fileno(ff);
																	tmp___12 = read(tmp___11, (void *)(& t_save), (unsigned int )size);
																	if(tmp___12 < size) {
																		error((char *)"could not get time and date of saving");
L119:;
																		goto L107;
																	}
																	else {
																		tmp___58 = calloc(1U, sizeof(cl_t ));
																		cl = (cl_t *)tmp___58;
																		if(cl == (0)) {
																			die_e((char *)"Could not calloc.");
L120:;
L121:;
																			tmp___55 = fileno(ff);
																			tmp___56 = read_type(tmp___55, & type, & size);
																			if(tmp___56 < 0) {
																				goto L31;
																			}
																			else if(tmp___56 > 0) {
																				goto L31;
																			}
																			else {
																				if(type == 1000) {
																					tmp___59 = calloc(1U, sizeof(env_t ));
																					env = (env_t *)tmp___59;
																					if(env == (0)) {
																						die_e((char *)"Could not calloc.");
L122:;
																						tmp___13 = fileno(ff);
																						tmp___14 = read_strn(tmp___13, & env->e_val, size);
																						if(tmp___14 < 0) {
																							error_e((char *)"Error while reading env var");
L123:;
																							goto L107;
																						}
																						else if(tmp___14 > 0) {
																							error_e((char *)"Error while reading env var");
																							goto L123;
																						}
																						else {
																							goto L37;
																						}
																					}
																					else if(env < (0)) {
																						goto L122;
																					}
																					else {
																						goto L122;
																					}
																				}
																				else if(type == 4) {
L124:;
																					tmp___15 = fileno(ff);
																					tmp___16 = read(tmp___15, (void *)(& bufi), (unsigned int )size);
																					if(tmp___16 < size) {
																						error_e((char *)"Error while reading tzdiff field");
																						goto L107;
																					}
																					else {
																						goto L41;
																					}
																				}
																				else if(type == 2001) {
L125:;
																					tmp___17 = fileno(ff);
																					tmp___18 = read_strn(tmp___17, & cl->cl_shell, size);
																					if(tmp___18 < 0) {
																						error_e((char *)"Error while reading shell field");
L126:;
																						goto L107;
																					}
																					else if(tmp___18 > 0) {
																						error_e((char *)"Error while reading shell field");
																						goto L126;
																					}
																					else {
																						goto L44;
																					}
																				}
																				else if(type == 2006) {
L127:;
																					tmp___19 = fileno(ff);
																					tmp___20 = read_strn(tmp___19, & cl->cl_runas, size);
																					if(tmp___20 < 0) {
																						error_e((char *)"Error while reading runas field");
L128:;
																						goto L107;
																					}
																					else if(tmp___20 > 0) {
																						error_e((char *)"Error while reading runas field");
																						goto L128;
																					}
																					else {
																						goto L47;
																					}
																				}
																				else if(type == 2007) {
L129:;
																					tmp___21 = fileno(ff);
																					tmp___22 = read_strn(tmp___21, & cl->cl_mailto, size);
																					if(tmp___22 < 0) {
																						error_e((char *)"Error while reading mailto field");
L130:;
																						goto L107;
																					}
																					else if(tmp___22 > 0) {
																						error_e((char *)"Error while reading mailto field");
																						goto L130;
																					}
																					else {
																						goto L50;
																					}
																				}
																				else if(type == 2008) {
L131:;
																					tmp___23 = fileno(ff);
																					tmp___24 = read(tmp___23, (void *)(& bufi), (unsigned int )size);
																					if(tmp___24 < size) {
																						error_e((char *)"Error while reading nextexe field");
																						goto L107;
																					}
																					else {
																						goto L52;
																					}
																				}
																				else if(type == 2018) {
L132:;
																					tmp___25 = fileno(ff);
																					tmp___26 = read(tmp___25, (void *)(& bufi), (unsigned int )size);
																					if(tmp___26 < size) {
																						error_e((char *)"Error while reading first field");
																						goto L107;
																					}
																					else {
																						goto L54;
																					}
																				}
																				else if(type == 2017) {
L133:;
																					tmp___27 = fileno(ff);
																					tmp___28 = read(tmp___27, (void *)(& cl->cl_option), (unsigned int )size);
																					if(tmp___28 < size) {
																						error_e((char *)"Error while reading option field");
																						goto L107;
																					}
																					else {
																						goto L56;
																					}
																				}
																				else if(type == 2002) {
L134:;
																					tmp___29 = fileno(ff);
																					tmp___30 = read(tmp___29, (void *)(& cl->cl_numexe), (unsigned int )size);
																					if(tmp___30 < size) {
																						error_e((char *)"Error while reading numexe field");
																						goto L107;
																					}
																					else {
																						goto L58;
																					}
																				}
																				else if(type == 2003) {
L135:;
																					tmp___31 = fileno(ff);
																					tmp___32 = read(tmp___31, (void *)(& cl->cl_lavg), (unsigned int )size);
																					if(tmp___32 < size) {
																						error_e((char *)"Error while reading lavg field");
																						goto L107;
																					}
																					else {
																						goto L60;
																					}
																				}
																				else if(type == 2004) {
L136:;
																					tmp___33 = fileno(ff);
																					tmp___34 = read(tmp___33, (void *)(& bufi), (unsigned int )size);
																					if(tmp___34 < size) {
																						error_e((char *)"Error while reading until field");
																						goto L107;
																					}
																					else {
																						goto L62;
																					}
																				}
																				else if(type == 2005) {
L137:;
																					tmp___35 = fileno(ff);
																					tmp___36 = read(tmp___35, (void *)(& cl->cl_nice), (unsigned int )size);
																					if(tmp___36 < size) {
																						error_e((char *)"Error while reading nice field");
																						goto L107;
																					}
																					else {
																						goto L64;
																					}
																				}
																				else if(type == 2011) {
L138:;
																					tmp___37 = fileno(ff);
																					tmp___38 = read(tmp___37, (void *)(& bufi), (unsigned int )size);
																					if(tmp___38 < size) {
																						error_e((char *)"Error while reading runfreq field");
																						goto L107;
																					}
																					else {
																						goto L66;
																					}
																				}
																				else if(type == 2009) {
L139:;
																					tmp___39 = fileno(ff);
																					tmp___40 = read(tmp___39, (void *)(& bufi), (unsigned int )size);
																					if(tmp___40 < size) {
																						error_e((char *)"Error while reading remain field");
																						goto L107;
																					}
																					else {
																						goto L68;
																					}
																				}
																				else if(type == 2010) {
L140:;
																					tmp___41 = fileno(ff);
																					tmp___42 = read(tmp___41, (void *)(& bufi), (unsigned int )size);
																					if(tmp___42 < size) {
																						error_e((char *)"Error while reading timefreq field");
																						goto L107;
																					}
																					else {
																						goto L70;
																					}
																				}
																				else if(type == 2012) {
L141:;
																					tmp___43 = fileno(ff);
																					tmp___44 = read(tmp___43, (void *)(& cl->cl_mins), (unsigned int )size);
																					if(tmp___44 < size) {
																						error_e((char *)"Error while reading mins field");
																						goto L107;
																					}
																					else {
																						goto L72;
																					}
																				}
																				else if(type == 2013) {
L142:;
																					tmp___45 = fileno(ff);
																					tmp___46 = read(tmp___45, (void *)(& cl->cl_hrs), (unsigned int )size);
																					if(tmp___46 < size) {
																						error_e((char *)"Error while reading hrs field");
																						goto L107;
																					}
																					else {
																						goto L74;
																					}
																				}
																				else if(type == 2014) {
L143:;
																					tmp___47 = fileno(ff);
																					tmp___48 = read(tmp___47, (void *)(& cl->cl_days), (unsigned int )size);
																					if(tmp___48 < size) {
																						error_e((char *)"Error while reading days field");
																						goto L107;
																					}
																					else {
																						goto L76;
																					}
																				}
																				else if(type == 2015) {
L144:;
																					tmp___49 = fileno(ff);
																					tmp___50 = read(tmp___49, (void *)(& cl->cl_mons), (unsigned int )size);
																					if(tmp___50 < size) {
																						error_e((char *)"Error while reading mons field");
																						goto L107;
																					}
																					else {
																						goto L78;
																					}
																				}
																				else if(type == 2016) {
L145:;
																					tmp___51 = fileno(ff);
																					tmp___52 = read(tmp___51, (void *)(& cl->cl_dow), (unsigned int )size);
																					if(tmp___52 < size) {
																						error_e((char *)"Error while reading dow field");
																						goto L107;
																					}
																					else {
																						goto L80;
																					}
																				}
																				else if(type == 2000) {
																					tmp___53 = add_line_to_file(cl, cf, runas, runas_str, t_save);
																					goto L81;
																				}
																				else if(type < 4) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
L146:;
																					i = 0;
L147:;
																					if(i >= size) {
L148:;
																						goto L39;
																					}
																					else {
																						tmp___54 = _IO_getc(ff);
																						if(tmp___54 == -1) {
																							goto L107;
																						}
																						else if(tmp___54 < -1) {
																							goto L87;
																						}
																						else {
																							goto L87;
																						}
																					}
																				}
																				else if(type > 4 && type < 1000) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 1000 && type < 2000) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2000 && type < 2001) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2001 && type < 2002) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2002 && type < 2003) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2003 && type < 2004) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2004 && type < 2005) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2005 && type < 2006) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2006 && type < 2007) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2007 && type < 2008) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2008 && type < 2009) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2009 && type < 2010) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2010 && type < 2011) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2011 && type < 2012) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2012 && type < 2013) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2013 && type < 2014) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2014 && type < 2015) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2015 && type < 2016) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2016 && type < 2017) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2017 && type < 2018) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																			}
																		}
																		else if(cl < (0)) {
																			goto L121;
																		}
																		else {
																			goto L121;
																		}
																	}
																}
															}
														}
														else if(runas < 0U) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
												}
											}
										}
									}
								}
							}
						}
						else if(debug_opt < 0) {
							Debug((char *)"User %s Entry", file_name);
							bzero((void *)(buf), sizeof(buf));
							tmp___1 = fileno(ff);
							tmp___2 = read_type(tmp___1, & type, & size);
							if(tmp___2 < 0) {
								error((char *)"File %s is not valid: ignored.", file_name);
								error((char *)"This file may have been generated by an old version of fcron.");
								error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
								goto L109;
							}
							else if(tmp___2 > 0) {
								error((char *)"File %s is not valid: ignored.", file_name);
								error((char *)"This file may have been generated by an old version of fcron.");
								error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
								goto L109;
							}
							else {
								if(type < 1) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L110;
								}
								else if(type > 1) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L110;
								}
								else {
									tmp___3 = fileno(ff);
									tmp___4 = read(tmp___3, (void *)(& bufi), (unsigned int )size);
									if(tmp___4 < size) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L111;
									}
									else {
										if(bufi < 100L) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L112;
										}
										else if(bufi > 100L) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L112;
										}
										else {
											tmp___5 = fileno(ff);
											tmp___6 = read_type(tmp___5, & type, & size);
											if(tmp___6 < 0) {
												error((char *)"Invalid binary fcrontab (no USER field)");
												goto L113;
											}
											else if(tmp___6 > 0) {
												error((char *)"Invalid binary fcrontab (no USER field)");
												goto L113;
											}
											else {
												if(type < 2) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L114;
												}
												else if(type > 2) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L114;
												}
												else {
													free((void *)cf->cf_user);
													tmp___7 = fileno(ff);
													tmp___8 = read_strn(tmp___7, & cf->cf_user, size);
													if(tmp___8 < 0) {
														error((char *)"Cannot read user\'s name : file ignored");
														goto L115;
													}
													else if(tmp___8 > 0) {
														error((char *)"Cannot read user\'s name : file ignored");
														goto L115;
													}
													else {
														if(runas == 0U) {
L149:;
															tmp___9 = fileno(ff);
															tmp___10 = read_type(tmp___9, & type, & size);
															if(tmp___10 < 0) {
																error((char *)"could not get time and date of saving");
																goto L117;
															}
															else if(tmp___10 > 0) {
																error((char *)"could not get time and date of saving");
																goto L117;
															}
															else {
																if(type < 3) {
																	error((char *)"could not get time and date of saving");
																	goto L118;
																}
																else if(type > 3) {
																	error((char *)"could not get time and date of saving");
																	goto L118;
																}
																else {
																	tmp___11 = fileno(ff);
																	tmp___12 = read(tmp___11, (void *)(& t_save), (unsigned int )size);
																	if(tmp___12 < size) {
																		error((char *)"could not get time and date of saving");
																		goto L119;
																	}
																	else {
																		tmp___58 = calloc(1U, sizeof(cl_t ));
																		cl = (cl_t *)tmp___58;
																		if(cl == (0)) {
																			die_e((char *)"Could not calloc.");
L150:;
L151:;
																			tmp___55 = fileno(ff);
																			tmp___56 = read_type(tmp___55, & type, & size);
																			if(tmp___56 < 0) {
																				goto L31;
																			}
																			else if(tmp___56 > 0) {
																				goto L31;
																			}
																			else {
																				if(type == 1000) {
																					tmp___59 = calloc(1U, sizeof(env_t ));
																					env = (env_t *)tmp___59;
																					if(env == (0)) {
																						die_e((char *)"Could not calloc.");
L152:;
																						tmp___13 = fileno(ff);
																						tmp___14 = read_strn(tmp___13, & env->e_val, size);
																						if(tmp___14 < 0) {
																							error_e((char *)"Error while reading env var");
																							goto L123;
																						}
																						else if(tmp___14 > 0) {
																							error_e((char *)"Error while reading env var");
																							goto L123;
																						}
																						else {
																							goto L92;
																						}
																					}
																					else if(env < (0)) {
																						goto L152;
																					}
																					else {
																						goto L152;
																					}
																				}
																				else if(type == 4) {
																					goto L124;
																				}
																				else if(type == 2001) {
																					goto L125;
																				}
																				else if(type == 2006) {
																					goto L127;
																				}
																				else if(type == 2007) {
																					goto L129;
																				}
																				else if(type == 2008) {
																					goto L131;
																				}
																				else if(type == 2018) {
																					goto L132;
																				}
																				else if(type == 2017) {
																					goto L133;
																				}
																				else if(type == 2002) {
																					goto L134;
																				}
																				else if(type == 2003) {
																					goto L135;
																				}
																				else if(type == 2004) {
																					goto L136;
																				}
																				else if(type == 2005) {
																					goto L137;
																				}
																				else if(type == 2011) {
																					goto L138;
																				}
																				else if(type == 2009) {
																					goto L139;
																				}
																				else if(type == 2010) {
																					goto L140;
																				}
																				else if(type == 2012) {
																					goto L141;
																				}
																				else if(type == 2013) {
																					goto L142;
																				}
																				else if(type == 2014) {
																					goto L143;
																				}
																				else if(type == 2015) {
																					goto L144;
																				}
																				else if(type == 2016) {
																					goto L145;
																				}
																				else if(type == 2000) {
																					tmp___53 = add_line_to_file(cl, cf, runas, runas_str, t_save);
																					goto L81;
																				}
																				else if(type < 4) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 4 && type < 1000) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 1000 && type < 2000) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2000 && type < 2001) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2001 && type < 2002) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2002 && type < 2003) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2003 && type < 2004) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2004 && type < 2005) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2005 && type < 2006) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2006 && type < 2007) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2007 && type < 2008) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2008 && type < 2009) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2009 && type < 2010) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2010 && type < 2011) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2011 && type < 2012) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2012 && type < 2013) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2013 && type < 2014) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2014 && type < 2015) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2015 && type < 2016) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2016 && type < 2017) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2017 && type < 2018) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																			}
																		}
																		else if(cl < (0)) {
																			goto L151;
																		}
																		else {
																			goto L151;
																		}
																	}
																}
															}
														}
														else if(runas < 0U) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
												}
											}
										}
									}
								}
							}
						}
						else {
							bzero((void *)(buf), sizeof(buf));
							tmp___1 = fileno(ff);
							tmp___2 = read_type(tmp___1, & type, & size);
							if(tmp___2 < 0) {
								error((char *)"File %s is not valid: ignored.", file_name);
								error((char *)"This file may have been generated by an old version of fcron.");
								error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
								goto L109;
							}
							else if(tmp___2 > 0) {
								error((char *)"File %s is not valid: ignored.", file_name);
								error((char *)"This file may have been generated by an old version of fcron.");
								error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
								goto L109;
							}
							else {
								if(type < 1) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L110;
								}
								else if(type > 1) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L110;
								}
								else {
									tmp___3 = fileno(ff);
									tmp___4 = read(tmp___3, (void *)(& bufi), (unsigned int )size);
									if(tmp___4 < size) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L111;
									}
									else {
										if(bufi < 100L) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L112;
										}
										else if(bufi > 100L) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L112;
										}
										else {
											tmp___5 = fileno(ff);
											tmp___6 = read_type(tmp___5, & type, & size);
											if(tmp___6 < 0) {
												error((char *)"Invalid binary fcrontab (no USER field)");
												goto L113;
											}
											else if(tmp___6 > 0) {
												error((char *)"Invalid binary fcrontab (no USER field)");
												goto L113;
											}
											else {
												if(type < 2) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L114;
												}
												else if(type > 2) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L114;
												}
												else {
													free((void *)cf->cf_user);
													tmp___7 = fileno(ff);
													tmp___8 = read_strn(tmp___7, & cf->cf_user, size);
													if(tmp___8 < 0) {
														error((char *)"Cannot read user\'s name : file ignored");
														goto L115;
													}
													else if(tmp___8 > 0) {
														error((char *)"Cannot read user\'s name : file ignored");
														goto L115;
													}
													else {
														if(runas == 0U) {
L153:;
															tmp___9 = fileno(ff);
															tmp___10 = read_type(tmp___9, & type, & size);
															if(tmp___10 < 0) {
																error((char *)"could not get time and date of saving");
																goto L117;
															}
															else if(tmp___10 > 0) {
																error((char *)"could not get time and date of saving");
																goto L117;
															}
															else {
																if(type < 3) {
																	error((char *)"could not get time and date of saving");
																	goto L118;
																}
																else if(type > 3) {
																	error((char *)"could not get time and date of saving");
																	goto L118;
																}
																else {
																	tmp___11 = fileno(ff);
																	tmp___12 = read(tmp___11, (void *)(& t_save), (unsigned int )size);
																	if(tmp___12 < size) {
																		error((char *)"could not get time and date of saving");
																		goto L119;
																	}
																	else {
																		tmp___58 = calloc(1U, sizeof(cl_t ));
																		cl = (cl_t *)tmp___58;
																		if(cl == (0)) {
																			die_e((char *)"Could not calloc.");
L154:;
L155:;
																			tmp___55 = fileno(ff);
																			tmp___56 = read_type(tmp___55, & type, & size);
																			if(tmp___56 < 0) {
																				goto L31;
																			}
																			else if(tmp___56 > 0) {
																				goto L31;
																			}
																			else {
																				if(type == 1000) {
																					tmp___59 = calloc(1U, sizeof(env_t ));
																					env = (env_t *)tmp___59;
																					if(env == (0)) {
																						die_e((char *)"Could not calloc.");
L156:;
																						tmp___13 = fileno(ff);
																						tmp___14 = read_strn(tmp___13, & env->e_val, size);
																						if(tmp___14 < 0) {
																							error_e((char *)"Error while reading env var");
																							goto L123;
																						}
																						else if(tmp___14 > 0) {
																							error_e((char *)"Error while reading env var");
																							goto L123;
																						}
																						else {
																							goto L97;
																						}
																					}
																					else if(env < (0)) {
																						goto L156;
																					}
																					else {
																						goto L156;
																					}
																				}
																				else if(type == 4) {
																					goto L124;
																				}
																				else if(type == 2001) {
																					goto L125;
																				}
																				else if(type == 2006) {
																					goto L127;
																				}
																				else if(type == 2007) {
																					goto L129;
																				}
																				else if(type == 2008) {
																					goto L131;
																				}
																				else if(type == 2018) {
																					goto L132;
																				}
																				else if(type == 2017) {
																					goto L133;
																				}
																				else if(type == 2002) {
																					goto L134;
																				}
																				else if(type == 2003) {
																					goto L135;
																				}
																				else if(type == 2004) {
																					goto L136;
																				}
																				else if(type == 2005) {
																					goto L137;
																				}
																				else if(type == 2011) {
																					goto L138;
																				}
																				else if(type == 2009) {
																					goto L139;
																				}
																				else if(type == 2010) {
																					goto L140;
																				}
																				else if(type == 2012) {
																					goto L141;
																				}
																				else if(type == 2013) {
																					goto L142;
																				}
																				else if(type == 2014) {
																					goto L143;
																				}
																				else if(type == 2015) {
																					goto L144;
																				}
																				else if(type == 2016) {
																					goto L145;
																				}
																				else if(type == 2000) {
																					tmp___53 = add_line_to_file(cl, cf, runas, runas_str, t_save);
																					goto L81;
																				}
																				else if(type < 4) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 4 && type < 1000) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 1000 && type < 2000) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2000 && type < 2001) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2001 && type < 2002) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2002 && type < 2003) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2003 && type < 2004) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2004 && type < 2005) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2005 && type < 2006) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2006 && type < 2007) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2007 && type < 2008) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2008 && type < 2009) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2009 && type < 2010) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2010 && type < 2011) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2011 && type < 2012) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2012 && type < 2013) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2013 && type < 2014) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2014 && type < 2015) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2015 && type < 2016) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2016 && type < 2017) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else if(type > 2017 && type < 2018) {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																				else {
																					error((char *)"Error while loading %s : unknown field type %d (ignored)", file_name, type);
																					goto L146;
																				}
																			}
																		}
																		else if(cl < (0)) {
																			goto L155;
																		}
																		else {
																			goto L155;
																		}
																	}
																}
															}
														}
														else if(runas < 0U) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
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
					else if(file_stat.st_uid < 0U) {
L157:;
						runas = file_stat.st_uid;
						pass = getpwuid(file_stat.st_uid);
						if(pass == (0)) {
							error_e((char *)"Could not getpwuid(%d)", file_stat.st_uid);
							goto L107;
						}
						else if(pass < (0)) {
							runas_str = strdup2(pass->pw_name);
							cf->cf_user = strdup2(file_name + 4);
L158:;
							if(debug_opt > 0) {
								Debug((char *)"User %s Entry", file_name);
								bzero((void *)(buf), sizeof(buf));
								tmp___1 = fileno(ff);
								tmp___2 = read_type(tmp___1, & type, & size);
								if(tmp___2 < 0) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L109;
								}
								else if(tmp___2 > 0) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L109;
								}
								else {
									if(type < 1) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L110;
									}
									else if(type > 1) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L110;
									}
									else {
										tmp___3 = fileno(ff);
										tmp___4 = read(tmp___3, (void *)(& bufi), (unsigned int )size);
										if(tmp___4 < size) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L111;
										}
										else {
											if(bufi < 100L) {
												error((char *)"File %s is not valid: ignored.", file_name);
												error((char *)"This file may have been generated by an old version of fcron.");
												error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
												goto L112;
											}
											else if(bufi > 100L) {
												error((char *)"File %s is not valid: ignored.", file_name);
												error((char *)"This file may have been generated by an old version of fcron.");
												error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
												goto L112;
											}
											else {
												tmp___5 = fileno(ff);
												tmp___6 = read_type(tmp___5, & type, & size);
												if(tmp___6 < 0) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L113;
												}
												else if(tmp___6 > 0) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L113;
												}
												else {
													if(type < 2) {
														error((char *)"Invalid binary fcrontab (no USER field)");
														goto L114;
													}
													else if(type > 2) {
														error((char *)"Invalid binary fcrontab (no USER field)");
														goto L114;
													}
													else {
														free((void *)cf->cf_user);
														tmp___7 = fileno(ff);
														tmp___8 = read_strn(tmp___7, & cf->cf_user, size);
														if(tmp___8 < 0) {
															error((char *)"Cannot read user\'s name : file ignored");
															goto L115;
														}
														else if(tmp___8 > 0) {
															error((char *)"Cannot read user\'s name : file ignored");
															goto L115;
														}
														else {
															if(runas < 0U) {
L159:;
																free((void *)cf->cf_user);
																cf->cf_user = runas_str;
																goto L116;
															}
															else if(runas > 0U) {
																goto L159;
															}
															else {
																goto L116;
															}
														}
													}
												}
											}
										}
									}
								}
							}
							else if(debug_opt < 0) {
								Debug((char *)"User %s Entry", file_name);
								bzero((void *)(buf), sizeof(buf));
								tmp___1 = fileno(ff);
								tmp___2 = read_type(tmp___1, & type, & size);
								if(tmp___2 < 0) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L109;
								}
								else if(tmp___2 > 0) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L109;
								}
								else {
									if(type < 1) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L110;
									}
									else if(type > 1) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L110;
									}
									else {
										tmp___3 = fileno(ff);
										tmp___4 = read(tmp___3, (void *)(& bufi), (unsigned int )size);
										if(tmp___4 < size) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L111;
										}
										else {
											if(bufi < 100L) {
												error((char *)"File %s is not valid: ignored.", file_name);
												error((char *)"This file may have been generated by an old version of fcron.");
												error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
												goto L112;
											}
											else if(bufi > 100L) {
												error((char *)"File %s is not valid: ignored.", file_name);
												error((char *)"This file may have been generated by an old version of fcron.");
												error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
												goto L112;
											}
											else {
												tmp___5 = fileno(ff);
												tmp___6 = read_type(tmp___5, & type, & size);
												if(tmp___6 < 0) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L113;
												}
												else if(tmp___6 > 0) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L113;
												}
												else {
													if(type < 2) {
														error((char *)"Invalid binary fcrontab (no USER field)");
														goto L114;
													}
													else if(type > 2) {
														error((char *)"Invalid binary fcrontab (no USER field)");
														goto L114;
													}
													else {
														free((void *)cf->cf_user);
														tmp___7 = fileno(ff);
														tmp___8 = read_strn(tmp___7, & cf->cf_user, size);
														if(tmp___8 < 0) {
															error((char *)"Cannot read user\'s name : file ignored");
															goto L115;
														}
														else if(tmp___8 > 0) {
															error((char *)"Cannot read user\'s name : file ignored");
															goto L115;
														}
														else {
															if(runas < 0U) {
L160:;
																free((void *)cf->cf_user);
																cf->cf_user = runas_str;
																goto L149;
															}
															else if(runas > 0U) {
																goto L160;
															}
															else {
																goto L149;
															}
														}
													}
												}
											}
										}
									}
								}
							}
							else {
								bzero((void *)(buf), sizeof(buf));
								tmp___1 = fileno(ff);
								tmp___2 = read_type(tmp___1, & type, & size);
								if(tmp___2 < 0) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L109;
								}
								else if(tmp___2 > 0) {
									error((char *)"File %s is not valid: ignored.", file_name);
									error((char *)"This file may have been generated by an old version of fcron.");
									error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
									goto L109;
								}
								else {
									if(type < 1) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L110;
									}
									else if(type > 1) {
										error((char *)"File %s is not valid: ignored.", file_name);
										error((char *)"This file may have been generated by an old version of fcron.");
										error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
										goto L110;
									}
									else {
										tmp___3 = fileno(ff);
										tmp___4 = read(tmp___3, (void *)(& bufi), (unsigned int )size);
										if(tmp___4 < size) {
											error((char *)"File %s is not valid: ignored.", file_name);
											error((char *)"This file may have been generated by an old version of fcron.");
											error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
											goto L111;
										}
										else {
											if(bufi < 100L) {
												error((char *)"File %s is not valid: ignored.", file_name);
												error((char *)"This file may have been generated by an old version of fcron.");
												error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
												goto L112;
											}
											else if(bufi > 100L) {
												error((char *)"File %s is not valid: ignored.", file_name);
												error((char *)"This file may have been generated by an old version of fcron.");
												error((char *)"In that case, you should try to use the converter given in the source package, or install it again using fcrontab.");
												goto L112;
											}
											else {
												tmp___5 = fileno(ff);
												tmp___6 = read_type(tmp___5, & type, & size);
												if(tmp___6 < 0) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L113;
												}
												else if(tmp___6 > 0) {
													error((char *)"Invalid binary fcrontab (no USER field)");
													goto L113;
												}
												else {
													if(type < 2) {
														error((char *)"Invalid binary fcrontab (no USER field)");
														goto L114;
													}
													else if(type > 2) {
														error((char *)"Invalid binary fcrontab (no USER field)");
														goto L114;
													}
													else {
														free((void *)cf->cf_user);
														tmp___7 = fileno(ff);
														tmp___8 = read_strn(tmp___7, & cf->cf_user, size);
														if(tmp___8 < 0) {
															error((char *)"Cannot read user\'s name : file ignored");
															goto L115;
														}
														else if(tmp___8 > 0) {
															error((char *)"Cannot read user\'s name : file ignored");
															goto L115;
														}
														else {
															if(runas < 0U) {
L161:;
																free((void *)cf->cf_user);
																cf->cf_user = runas_str;
																goto L153;
															}
															else if(runas > 0U) {
																goto L161;
															}
															else {
																goto L153;
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
						else {
							runas_str = strdup2(pass->pw_name);
							cf->cf_user = strdup2(file_name + 4);
							goto L158;
						}
					}
					else {
						goto L157;
					}
				}
				else if(tmp___0 < 0) {
L162:;
					if(cf->cf_user == 0) {
						cf->cf_user = strdup2(file_name);
L163:;
						if(file_stat.st_uid == 0U) {
							runas = 0U;
							goto L108;
						}
						else if(file_stat.st_uid < 0U) {
							error((char *)"Non-new file %s owned by someone else than root", file_name);
L164:;
							goto L107;
						}
						else {
							error((char *)"Non-new file %s owned by someone else than root", file_name);
							goto L164;
						}
					}
					else if(cf->cf_user > 0) {
						goto L163;
					}
					else {
						goto L163;
					}
				}
				else {
					goto L162;
				}
			}
		}
		else if(ff == (0)) {
			/* FALSE PATH */ 
		}
		else {
			/* FALSE PATH */ 
		}
	}
	else {
		if(ff == (0)) {
			warn_e((char *)"Could not read %s (may have just been removed)", file_name);
			if(ff == (0)) {
				goto L5;
			}
			else if(ff < (0)) {
				/* FALSE PATH */ 
			}
			else {
				/* FALSE PATH */ 
			}
		}
		else if(ff < (0)) {
			/* FALSE PATH */ 
		}
		else {
			/* FALSE PATH */ 
		}
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
	slept = now - t_save;
	if(cl->cl_shell == (0)) {
L1:;
		error((char *)"Line is not valid (empty shell, runas or mailto field) : ignored");
		bzero((void *)cl, sizeof(cl));
		if(cl->cl_shell > 0) {
L2:;
			free((void *)cl->cl_shell);
L3:;
			if(cl->cl_runas > 0) {
L4:;
				free((void *)cl->cl_runas);
L5:;
				if(cl->cl_mailto > 0) {
L6:;
					free((void *)cl->cl_mailto);
L7:;
					return (1);
					/* END OF PATH at func_add_line_to_file@p27#1 */
				}
				else if(cl->cl_mailto < 0) {
					goto L6;
				}
				else {
					goto L7;
				}
			}
			else if(cl->cl_runas < 0) {
				goto L4;
			}
			else {
				goto L5;
			}
		}
		else if(cl->cl_shell < 0) {
			goto L2;
		}
		else {
			goto L3;
		}
	}
	else if(cl->cl_shell < (0)) {
L8:;
		if(cl->cl_runas == (0)) {
			goto L1;
		}
		else if(cl->cl_runas < (0)) {
L9:;
			if(cl->cl_mailto == (0)) {
				goto L1;
			}
			else if(cl->cl_mailto < (0)) {
L10:;
				if(runas < 0U) {
L11:;
					tmp = strcmp(cl->cl_runas, runas_str);
					if(tmp < 0) {
						warn((char *)"warning: runas(%s) is not owner (%s): overridden.", cl->cl_runas, runas_str);
						free((void *)cl->cl_runas);
						cl->cl_runas = strdup2(runas_str);
L12:;
						cl->cl_file = cf;
						if(cl->cl_mailto > 0) {
L13:;
							if(*(cl->cl_mailto) == 45) {
								error((char *)"mailto field \'%s\' is not valid : set to owner %s.", cl->cl_mailto, (cl->cl_file)->cf_user);
								free((void *)cl->cl_mailto);
								cl->cl_mailto = strdup2((cl->cl_file)->cf_user);
L14:;
								if(cl->cl_numexe > 0) {
									cl->cl_numexe = (unsigned char)0;
									if(cl->cl_option[0] & 2 > 0) {
L15:;
										if(cl->cl_option[2] & 16 > 0) {
											add_lavg_job(cl, -1);
L16:;
L17:;
											if(cl->cl_option[0] & 1 > 0) {
L18:;
												if(cl->cl_option[3] & 1 > 0) {
L19:;
													cl->cl_nextexe = now + cl->cl_first;
L20:;
													if(cl->cl_timefreq < 10L) {
														error((char *)"Invalid timefreq for %s: set to 1 day", cl->cl_shell);
														cl->cl_timefreq = 86400L;
														insert_nextexe(cl);
L21:;
L22:;
														if(debug_opt > 0) {
															ftime = localtime(& cl->cl_nextexe);
															if(debug_opt > 0) {
																Debug((char *)"  cmd %s next exec %d/%d/%d wday:%d %02d:%02d:%02d", cl->cl_shell, ftime->tm_mon + 1, ftime->tm_mday, ftime->tm_year + 1900, ftime->tm_wday, ftime->tm_hour, ftime->tm_min, ftime->tm_sec);
L23:;
																tmp___3 = next_id;
																next_id = next_id + 1UL;
																cl->cl_id = (long )tmp___3;
																if(cl->cl_id >= 4294967294UL) {
																	next_id = 0UL;
L24:;
																	cl->cl_next = cf->cf_line_base;
																	cf->cf_line_base = cl;
																	return (0);
																	/* END OF PATH at func_add_line_to_file@p133#1 */
																}
																else {
																	goto L24;
																}
															}
															else if(debug_opt < 0) {
																/* FALSE PATH */ 
															}
															else {
																/* FALSE PATH */ 
															}
														}
														else if(debug_opt < 0) {
															ftime = localtime(& cl->cl_nextexe);
															if(debug_opt < 0) {
																Debug((char *)"  cmd %s next exec %d/%d/%d wday:%d %02d:%02d:%02d", cl->cl_shell, ftime->tm_mon + 1, ftime->tm_mday, ftime->tm_year + 1900, ftime->tm_wday, ftime->tm_hour, ftime->tm_min, ftime->tm_sec);
																goto L23;
															}
															else if(debug_opt > 0) {
																/* FALSE PATH */ 
															}
															else {
																/* FALSE PATH */ 
															}
														}
														else {
															goto L23;
														}
													}
													else {
														insert_nextexe(cl);
														goto L21;
													}
												}
												else if(cl->cl_option[3] & 1 < 0) {
													goto L19;
												}
												else {
													cl->cl_nextexe = cl->cl_nextexe + slept;
													goto L20;
												}
											}
											else if(cl->cl_option[0] & 1 < 0) {
												goto L18;
											}
											else {
												if(cl->cl_nextexe <= now) {
													if(cl->cl_nextexe == 0L) {
														set_next_exe(cl, (char)1, -1);
L25:;
														goto L22;
													}
													else if(cl->cl_nextexe < 0L) {
L26:;
														if(cl->cl_runfreq == 1) {
															if(cl->cl_option[2] & 32 > 0) {
																set_next_exe_notrun(cl, (char)2);
L27:;
																goto L25;
															}
															else if(cl->cl_option[2] & 32 < 0) {
																set_next_exe_notrun(cl, (char)2);
																goto L27;
															}
															else {
L28:;
																if(cl->cl_option[0] & 16 > 0) {
L29:;
																	if(t_save < 0L) {
L30:;
																		if(cl->cl_runfreq < 1) {
L31:;
																			if(cl->cl_remain > 0) {
																				cl->cl_remain = (unsigned short )((int )cl->cl_remain - 1);
																				if(cl->cl_remain > 0) {
																					if(debug_opt > 0) {
																						Debug((char *)"    cl_remain: %d", cl->cl_remain);
L32:;
L33:;
																						set_next_exe(cl, (char)0, -1);
																						goto L25;
																					}
																					else if(debug_opt < 0) {
																						Debug((char *)"    cl_remain: %d", cl->cl_remain);
																						goto L32;
																					}
																					else {
																						goto L32;
																					}
																				}
																				else {
L34:;
																					cl->cl_remain = cl->cl_runfreq;
																					if(debug_opt > 0) {
																						Debug((char *)"   boot-run %s", cl->cl_shell);
L35:;
																						if(cl->cl_option[0] & 2 > 0) {
																							add_lavg_job(cl, -1);
L36:;
																							goto L33;
																						}
																						else if(cl->cl_option[0] & 2 < 0) {
																							add_lavg_job(cl, -1);
																							goto L36;
																						}
																						else {
																							cl->cl_option[0] = (unsigned char )((int )cl->cl_option[0] | 64);
																							add_serial_job(cl, -1);
																							goto L33;
																						}
																					}
																					else if(debug_opt < 0) {
																						Debug((char *)"   boot-run %s", cl->cl_shell);
																						goto L35;
																					}
																					else {
																						goto L35;
																					}
																				}
																			}
																			else {
																				goto L34;
																			}
																		}
																		else if(cl->cl_runfreq > 1) {
																			goto L31;
																		}
																		else {
L37:;
																			if(cl->cl_option[2] & 32 > 0) {
L38:;
																				tmp___2 = localtime(& cl->cl_nextexe);
																				since2 = tmp___2;
																				memcpy((void *)(& since), (void *)since2, sizeof(since));
																				set_next_exe(cl, (char)1, -1);
																				mail_notrun(cl, (char)2, & since);
																				goto L25;
																			}
																			else if(cl->cl_option[2] & 32 < 0) {
																				goto L38;
																			}
																			else {
																				set_next_exe(cl, (char)1, -1);
																				goto L25;
																			}
																		}
																	}
																	else if(t_save > 0L) {
																		goto L30;
																	}
																	else {
																		goto L37;
																	}
																}
																else if(cl->cl_option[0] & 16 < 0) {
																	goto L29;
																}
																else {
																	goto L37;
																}
															}
														}
														else if(cl->cl_runfreq < 1) {
															goto L28;
														}
														else {
															goto L28;
														}
													}
													else {
														goto L26;
													}
												}
												else {
													insert_nextexe(cl);
													goto L22;
												}
											}
										}
										else if(cl->cl_option[2] & 16 < 0) {
											add_lavg_job(cl, -1);
											goto L16;
										}
										else {
											goto L16;
										}
									}
									else if(cl->cl_option[0] & 2 < 0) {
										goto L15;
									}
									else {
										if(cl->cl_option[0] & 32 > 0) {
											add_serial_job(cl, -1);
L39:;
											goto L17;
										}
										else if(cl->cl_option[0] & 32 < 0) {
											add_serial_job(cl, -1);
											goto L39;
										}
										else {
											if(cl->cl_option[0] & 64 > 0) {
												add_serial_job(cl, -1);
L40:;
												goto L17;
											}
											else if(cl->cl_option[0] & 64 < 0) {
												add_serial_job(cl, -1);
												goto L40;
											}
											else {
												warn((char *)"job %s did not finish : running it again.", cl->cl_shell);
												cl->cl_option[0] = (unsigned char )((int )cl->cl_option[0] | 64);
												add_serial_job(cl, -1);
												goto L17;
											}
										}
									}
								}
								else {
									goto L17;
								}
							}
							else if(*(cl->cl_mailto) < 45) {
L41:;
								tmp___0 = strcspn(cl->cl_mailto, (char *)" \t\n");
								tmp___1 = strlen(cl->cl_mailto);
								if(tmp___0 < tmp___1) {
									error((char *)"mailto field \'%s\' is not valid : set to owner %s.", cl->cl_mailto, (cl->cl_file)->cf_user);
									free((void *)cl->cl_mailto);
									cl->cl_mailto = strdup2((cl->cl_file)->cf_user);
									goto L14;
								}
								else if(tmp___0 > tmp___1) {
									error((char *)"mailto field \'%s\' is not valid : set to owner %s.", cl->cl_mailto, (cl->cl_file)->cf_user);
									free((void *)cl->cl_mailto);
									cl->cl_mailto = strdup2((cl->cl_file)->cf_user);
									goto L14;
								}
								else {
									goto L14;
								}
							}
							else {
								goto L41;
							}
						}
						else if(cl->cl_mailto < 0) {
							goto L13;
						}
						else {
							goto L14;
						}
					}
					else if(tmp > 0) {
						warn((char *)"warning: runas(%s) is not owner (%s): overridden.", cl->cl_runas, runas_str);
						free((void *)cl->cl_runas);
						cl->cl_runas = strdup2(runas_str);
						goto L12;
					}
					else {
						free((void *)cl->cl_runas);
						cl->cl_runas = strdup2(runas_str);
						goto L12;
					}
				}
				else if(runas > 0U) {
					goto L11;
				}
				else {
					goto L12;
				}
			}
			else {
				goto L10;
			}
		}
		else {
			goto L9;
		}
	}
	else {
		goto L8;
	}
}

int read_strn(int fd , char **str , short size )
{ ssize_t tmp ;
void *tmp___0 ;
	tmp___0 = calloc((unsigned int )((int )size + 1), sizeof(char ));
	*str = (char *)tmp___0;
	if(*str == (0)) {
L1:;
		if(*str > 0) {
L2:;
			free((void *)*str);
L3:;
			*str = (char *)((void *)0);
			return (-1);
			/* END OF PATH at func_read_strn@p17#1 */
		}
		else if(*str < 0) {
			goto L2;
		}
		else {
			goto L3;
		}
	}
	else if(*str < (0)) {
L4:;
		tmp = read(fd, (void *)*str, (unsigned int )size);
		if(tmp < size) {
			goto L1;
		}
		else {
			*(*str + (int )size) = (char )'\000';
			return (0);
			/* END OF PATH at func_read_strn@p11#1 */
		}
	}
	else {
		goto L4;
	}
}

int read_type(int fd , short *type , short *size )
{ ssize_t tmp ;
ssize_t tmp___0 ;
	tmp = read(fd, (void *)type, sizeof(short ));
	if(tmp < sizeof(short)) {
L1:;
		return (-1);
		/* END OF PATH at func_read_type@p12#1 */
	}
	else {
		tmp___0 = read(fd, (void *)size, sizeof(short ));
		if(tmp___0 < sizeof(short)) {
			goto L1;
		}
		else {
			return (0);
			/* END OF PATH at func_read_type@p9#1 */
		}
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
void *tmp___8 ;
void *tmp___9 ;
void *tmp___10 ;
	cur_f = (cf_t *)((void *)0);
	user = (char *)((void *)0);
	tmp___7 = strchr(file_name, '.');
	if(tmp___7 < (0)) {
L1:;
		prev = (cf_t *)((void *)0);
		user = file_name + 4;
		cur_f = file_base;
L2:;
L3:;
		if(cur_f == 0) {
L4:;
L5:;
			if(cur_f < (0)) {
L6:;
				old = (cf_t *)((void *)0);
				old_l = (cl_t *)((void *)0);
				new_l = (cl_t *)((void *)0);
				size = 18U;
				old = cur_f;
				tmp___8 = calloc(1U, sizeof(cf_t ));
				cur_f = (cf_t *)tmp___8;
				if(cur_f == (0)) {
					die_e((char *)"Could not calloc.");
					tmp___0 = read_file(file_name, cur_f);
L7:;
					if(tmp___0 < 0) {
L8:;
						/* END OF PATH at func_synchronize_file@p48#1 */
					}
					else if(tmp___0 > 0) {
						goto L8;
					}
					else {
						if(prev < (0)) {
L9:;
							prev->cf_next = old->cf_next;
							old->cf_next = file_base;
							file_base = old;
L10:;
							new_l = cur_f->cf_line_base;
L11:;
L12:;
							if(new_l == 0) {
L13:;
								delete_file(user);
								cur_f->cf_next = file_base;
								file_base = cur_f;
								save_file(cur_f);
								tmp___3 = remove(file_name);
								if(tmp___3 < 0) {
									error_e((char *)"could not remove %s", file_name);
L14:;
L15:;
L16:;
									/* END OF PATH at func_synchronize_file@p127#1 */
								}
								else if(tmp___3 > 0) {
									error_e((char *)"could not remove %s", file_name);
									goto L14;
								}
								else {
									goto L14;
								}
							}
							else if(new_l > 0) {
L17:;
								old_l = old->cf_line_base;
L18:;
L19:;
								if(old_l == 0) {
L20:;
L21:;
									new_l = new_l->cl_next;
									goto L12;
								}
								else if(old_l > 0) {
L22:;
									tmp___1 = strcmp(new_l->cl_shell, old_l->cl_shell);
									if(tmp___1 == 0) {
										if(new_l->cl_option[0] & 1 > 0) {
L23:;
											if(new_l->cl_timefreq == old_l->cl_timefreq) {
L24:;
												if(new_l->cl_runfreq == old_l->cl_runfreq) {
													new_l->cl_remain = old_l->cl_remain;
L25:;
													if((new_l->cl_file)->cf_tzdiff < (old_l->cl_file)->cf_tzdiff) {
L26:;
														if((old_l->cl_nextexe - (old_l->cl_file)->cf_tzdiff) + (new_l->cl_file)->cf_tzdiff > now) {
															new_l->cl_nextexe = (old_l->cl_nextexe - (long )(old_l->cl_file)->cf_tzdiff) + (long )(new_l->cl_file)->cf_tzdiff;
L27:;
															insert_nextexe(new_l);
L28:;
															if(debug_opt > 0) {
																ftime = localtime(& new_l->cl_nextexe);
																if(debug_opt > 0) {
																	Debug((char *)"  from last conf: %s next exec %d/%d/%d wday:%d %02d:%02d", new_l->cl_shell, ftime->tm_mon + 1, ftime->tm_mday, ftime->tm_year + 1900, ftime->tm_wday, ftime->tm_hour, ftime->tm_min);
L29:;
																	goto L20;
																}
																else if(debug_opt < 0) {
																	/* FALSE PATH */ 
																}
																else {
																	/* FALSE PATH */ 
																}
															}
															else if(debug_opt < 0) {
																ftime = localtime(& new_l->cl_nextexe);
																if(debug_opt < 0) {
																	Debug((char *)"  from last conf: %s next exec %d/%d/%d wday:%d %02d:%02d", new_l->cl_shell, ftime->tm_mon + 1, ftime->tm_mday, ftime->tm_year + 1900, ftime->tm_wday, ftime->tm_hour, ftime->tm_min);
																	goto L29;
																}
																else if(debug_opt > 0) {
																	/* FALSE PATH */ 
																}
																else {
																	/* FALSE PATH */ 
																}
															}
															else {
																goto L29;
															}
														}
														else {
															new_l->cl_nextexe = old_l->cl_nextexe;
															goto L27;
														}
													}
													else if((new_l->cl_file)->cf_tzdiff > (old_l->cl_file)->cf_tzdiff) {
														goto L26;
													}
													else {
														new_l->cl_nextexe = old_l->cl_nextexe;
														insert_nextexe(new_l);
														goto L28;
													}
												}
												else if(new_l->cl_runfreq < old_l->cl_runfreq) {
													goto L25;
												}
												else {
													goto L25;
												}
											}
											else if(new_l->cl_timefreq < old_l->cl_timefreq) {
L30:;
L31:;
												if((new_l->cl_option[0] & 1) == 0) {
													tmp___2 = memcmp((void *)(& new_l->cl_mins), (void *)(& old_l->cl_mins), size);
													if(tmp___2 == 0) {
														if((new_l->cl_option[0] & 8) == (old_l->cl_option[0] & 8)) {
															goto L24;
														}
														else if((new_l->cl_option[0] & 8) < (old_l->cl_option[0] & 8)) {
L32:;
															old_l = old_l->cl_next;
															goto L19;
														}
														else {
															goto L32;
														}
													}
													else if(tmp___2 < 0) {
														goto L32;
													}
													else {
														goto L32;
													}
												}
												else if((new_l->cl_option[0] & 1) > 0) {
													goto L32;
												}
												else {
													goto L32;
												}
											}
											else {
												goto L30;
											}
										}
										else if(new_l->cl_option[0] & 1 < 0) {
											goto L23;
										}
										else {
											goto L31;
										}
									}
									else if(tmp___1 < 0) {
										goto L32;
									}
									else {
										goto L32;
									}
								}
								else {
									goto L22;
								}
							}
							else {
								goto L17;
							}
						}
						else if(prev > (0)) {
							goto L9;
						}
						else {
							goto L10;
						}
					}
				}
				else if(cur_f < (0)) {
					tmp___0 = read_file(file_name, cur_f);
					goto L7;
				}
				else {
					tmp___0 = read_file(file_name, cur_f);
					goto L7;
				}
			}
			else if(cur_f > (0)) {
				goto L6;
			}
			else {
				tmp___9 = calloc(1U, sizeof(cf_t ));
				cur_f = (cf_t *)tmp___9;
				if(cur_f == (0)) {
					die_e((char *)"Could not calloc.");
					tmp___4 = read_file(file_name, cur_f);
L33:;
					if(tmp___4 < 0) {
L34:;
						/* END OF PATH at func_synchronize_file@p107#1 */
					}
					else if(tmp___4 > 0) {
						goto L34;
					}
					else {
						cur_f->cf_next = file_base;
						file_base = cur_f;
						save_file(cur_f);
						tmp___5 = remove(file_name);
						if(tmp___5 < 0) {
							error_e((char *)"could not remove %s", file_name);
							goto L15;
						}
						else if(tmp___5 > 0) {
							error_e((char *)"could not remove %s", file_name);
							goto L15;
						}
						else {
							goto L15;
						}
					}
				}
				else if(cur_f < (0)) {
					tmp___4 = read_file(file_name, cur_f);
					goto L33;
				}
				else {
					tmp___4 = read_file(file_name, cur_f);
					goto L33;
				}
			}
		}
		else if(cur_f > 0) {
L35:;
			tmp = strcmp(user, cur_f->cf_user);
			if(tmp == 0) {
				goto L4;
			}
			else if(tmp < 0) {
L36:;
				prev = cur_f;
				cur_f = cur_f->cf_next;
				goto L3;
			}
			else {
				goto L36;
			}
		}
		else {
			goto L35;
		}
	}
	else if(tmp___7 > (0)) {
		goto L1;
	}
	else {
		tmp___10 = calloc(1U, sizeof(cf_t ));
		cur_f = (cf_t *)tmp___10;
		if(cur_f == (0)) {
			die_e((char *)"Could not calloc.");
			tmp___6 = read_file(file_name, cur_f);
L37:;
			if(tmp___6 < 0) {
L38:;
				/* END OF PATH at func_synchronize_file@p123#1 */
			}
			else if(tmp___6 > 0) {
				goto L38;
			}
			else {
				cur_f->cf_next = file_base;
				file_base = cur_f;
				goto L16;
			}
		}
		else if(cur_f < (0)) {
			tmp___6 = read_file(file_name, cur_f);
			goto L37;
		}
		else {
			tmp___6 = read_file(file_name, cur_f);
			goto L37;
		}
	}
}

void remove_connection(struct fcrondyn_cl **client , struct fcrondyn_cl *prev_client )
{
	shutdown((*client)->fcl_sock_fd, 2);
	close((*client)->fcl_sock_fd);
	if(prev_client == (0)) {
		fcrondyn_cl_base = (*client)->fcl_next;
		free((void *)(*client)->fcl_user);
		(*client)->fcl_user = (char *)((void *)0);
		free((void *)*client);
		*client = (struct fcrondyn_cl *)((void *)0);
		*client = fcrondyn_cl_base;
L1:;
		fcrondyn_cl_num = fcrondyn_cl_num - 1;
		/* END OF PATH at func_remove_connection@p18#1 */
	}
	else if(prev_client < (0)) {
L2:;
		prev_client->fcl_next = (*client)->fcl_next;
		free((void *)(*client)->fcl_user);
		(*client)->fcl_user = (char *)((void *)0);
		free((void *)*client);
		*client = (struct fcrondyn_cl *)((void *)0);
		*client = prev_client->fcl_next;
		goto L1;
	}
	else {
		goto L2;
	}
}

void exe_cmd(struct fcrondyn_cl *client )
{ long *cmd ;
int fd ;
int is_root ;
int tmp___0 ;
	is_root = 0;
	tmp___0 = strcmp(client->fcl_user, (char *)"root");
	if(tmp___0 == 0) {
		is_root = 1;
L1:;
		cmd = client->fcl_cmd;
		fd = client->fcl_sock_fd;
		if(debug_opt > 0) {
			Debug((char *)"exe_cmd [0,1,2] : %d %d %d", *(cmd + 0), *(cmd + 1), *(cmd + 2));
L2:;
			if(*(cmd + 0) == 401) {
				cmd_on_exeq(client, cmd, fd, is_root);
L3:;
L4:;
				/* END OF PATH at func_exe_cmd@p36#1 */
			}
			else if(*(cmd + 0) == 402) {
				cmd_on_exeq(client, cmd, fd, is_root);
				goto L3;
			}
			else if(*(cmd + 0) == 105) {
L5:;
L6:;
L7:;
				cmd_ls(client, cmd, fd, is_root);
L8:;
				goto L4;
			}
			else if(*(cmd + 0) == 101) {
				goto L5;
			}
			else if(*(cmd + 0) == 102) {
				goto L6;
			}
			else if(*(cmd + 0) == 103) {
				goto L7;
			}
			else if(*(cmd + 0) == 104) {
				cmd_ls(client, cmd, fd, is_root);
				goto L8;
			}
			else if(*(cmd + 0) == 302) {
				cmd_run(client, cmd, fd, is_root);
L9:;
				goto L4;
			}
			else if(*(cmd + 0) == 301) {
				cmd_run(client, cmd, fd, is_root);
				goto L9;
			}
			else if(*(cmd + 0) < 101) {
L10:;
				send(fd, (void *)(err_cmd_unknown_str), sizeof(err_cmd_unknown_str), 0);
				send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
				goto L4;
			}
			else if(*(cmd + 0) > 101 && *(cmd + 0) < 102) {
				goto L10;
			}
			else if(*(cmd + 0) > 102 && *(cmd + 0) < 103) {
				goto L10;
			}
			else if(*(cmd + 0) > 103 && *(cmd + 0) < 104) {
				goto L10;
			}
			else if(*(cmd + 0) > 104 && *(cmd + 0) < 105) {
				goto L10;
			}
			else if(*(cmd + 0) > 105 && *(cmd + 0) < 301) {
				goto L10;
			}
			else if(*(cmd + 0) > 301 && *(cmd + 0) < 302) {
				goto L10;
			}
			else if(*(cmd + 0) > 302 && *(cmd + 0) < 401) {
				goto L10;
			}
			else if(*(cmd + 0) > 401 && *(cmd + 0) < 402) {
				goto L10;
			}
			else {
				goto L10;
			}
		}
		else if(debug_opt < 0) {
			Debug((char *)"exe_cmd [0,1,2] : %d %d %d", *(cmd + 0), *(cmd + 1), *(cmd + 2));
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else if(tmp___0 < 0) {
L11:;
		is_root = 0;
		goto L1;
	}
	else {
		goto L11;
	}
}

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
struct spwd *tmp___3 ;
	pass_cry = (char *)((void *)0);
	pass_sys = (char *)((void *)0);
	pass_str = (char *)((void *)0);
	pass_sp = (struct spwd *)((void *)0);
	tmp___3 = getspnam((char *)client->fcl_cmd);
	pass_sp = tmp___3;
	if(pass_sp == (0)) {
		error_e((char *)"could not getspnam %s", (char *)client->fcl_cmd);
		send(client->fcl_sock_fd, (void *)"0", sizeof("0"), 0);
		/* END OF PATH at func_auth_client@p21#1 */
	}
	else if(pass_sp < (0)) {
L1:;
		pass_sys = pass_sp->sp_pwdp;
		if(debug_opt > 0) {
			Debug((char *)"auth_client() : socket : %d", client->fcl_sock_fd);
L2:;
			if(auth_fail > 0) {
				if(auth_nofail_since + 60L <= now) {
					auth_fail = 0;
					if(auth_fail < 10) {
L3:;
						tmp = strlen((char *)client->fcl_cmd);
						pass_str = (char *)client->fcl_cmd + (tmp + 1U);
						pass_cry = crypt(pass_str, pass_sys);
						if(pass_cry == (0)) {
							error_e((char *)"could not crypt()");
							send(client->fcl_sock_fd, (void *)"0", sizeof("0"), 0);
L4:;
L5:;
							x__xx__ = pass_str;
							if(x__xx__ > 0) {
L6:;
L7:;
								if(*x__xx__ == 0) {
L8:;
									goto L5;
								}
								else if(*x__xx__ > 0) {
L9:;
									tmp___0 = x__xx__;
									x__xx__ = x__xx__ + 1;
									*tmp___0 = (char )'\000';
									goto L7;
								}
								else {
									goto L9;
								}
							}
							else if(x__xx__ < 0) {
								goto L7;
							}
							else {
								/* END OF PATH at func_auth_client@p51#2 */
							}
						}
						else if(pass_cry < (0)) {
L10:;
							tmp___1 = strcmp(pass_cry, pass_sys);
							if(tmp___1 == 0) {
								client->fcl_user = strdup2((char *)client->fcl_cmd);
								send(client->fcl_sock_fd, (void *)"1", sizeof("1"), 0);
L11:;
L12:;
								x__xx_____0 = pass_str;
								if(x__xx_____0 > 0) {
L13:;
L14:;
									if(*x__xx_____0 == 0) {
L15:;
										goto L12;
									}
									else if(*x__xx_____0 > 0) {
L16:;
										tmp___2 = x__xx_____0;
										x__xx_____0 = x__xx_____0 + 1;
										*tmp___2 = (char )'\000';
										goto L14;
									}
									else {
										goto L16;
									}
								}
								else if(x__xx_____0 < 0) {
									goto L14;
								}
								else {
									/* END OF PATH at func_auth_client@p74#2 */
								}
							}
							else if(tmp___1 < 0) {
L17:;
								auth_fail = auth_fail + 1;
								auth_nofail_since = now;
								error((char *)"Invalid passwd for %s from socket %d", (char *)client->fcl_cmd, client->fcl_sock_fd);
								send(client->fcl_sock_fd, (void *)"0", sizeof("0"), 0);
								goto L12;
							}
							else {
								goto L17;
							}
						}
						else {
							goto L10;
						}
					}
					else {
						/* FALSE PATH */ 
					}
				}
				else {
L18:;
					if(auth_fail >= 10) {
						error((char *)"Too many authentication failures : try to connect later.");
						send(client->fcl_sock_fd, (void *)"0", sizeof("0"), 0);
						auth_nofail_since = 0L;
						auth_fail = (int )auth_nofail_since;
						/* END OF PATH at func_auth_client@p34#1 */
					}
					else {
						goto L3;
					}
				}
			}
			else {
				goto L18;
			}
		}
		else if(debug_opt < 0) {
			Debug((char *)"auth_client() : socket : %d", client->fcl_sock_fd);
			goto L2;
		}
		else {
			goto L2;
		}
	}
	else {
		goto L1;
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
	found = 0;
	if(*(cmd + 1) == -1L) {
		tmp = 1;
		all = tmp;
		user = (char *)((void *)0);
		i = 0;
L1:;
L2:;
		if(i >= 1) {
L3:;
			if(*(cmd + 0) == 105) {
L4:;
				fields[0] = (unsigned char )((int )fields[0] | 8);
				fields[0] = (unsigned char )((int )fields[0] | 2);
				fields[0] = (unsigned char )((int )fields[0] | 1);
				fields[0] = (unsigned char )((int )fields[0] | 64);
				print_fields(fd, fields);
				j = queue_base;
L5:;
L6:;
				if(j == (0)) {
L7:;
L8:;
L9:;
					if(found == 0) {
						send(fd, (void *)(err_job_nfound_str), sizeof(err_job_nfound_str), 0);
L10:;
						send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
						/* END OF PATH at func_cmd_ls@p181#1 */
					}
					else if(found > 0) {
						goto L10;
					}
					else {
						goto L10;
					}
				}
				else if(j < (0)) {
L11:;
					if(*(cmd + 1) == (j->j_line)->cl_id) {
						tmp___0 = strcmp(client->fcl_user, ((j->j_line)->cl_file)->cf_user);
						if(tmp___0 == 0) {
							print_line(fd, j->j_line, fields, 0, 0, 0L);
L12:;
							found = 1;
							goto L7;
						}
						else if(tmp___0 < 0) {
L13:;
							if(is_root > 0) {
								print_line(fd, j->j_line, fields, 0, 0, 0L);
L14:;
								goto L12;
							}
							else if(is_root < 0) {
								print_line(fd, j->j_line, fields, 0, 0, 0L);
								goto L14;
							}
							else {
								send(fd, (void *)(err_job_nfound_str), sizeof(err_job_nfound_str), 0);
								goto L12;
							}
						}
						else {
							goto L13;
						}
					}
					else if(*(cmd + 1) < (j->j_line)->cl_id) {
L15:;
						j = j->j_next;
						goto L6;
					}
					else {
						goto L15;
					}
				}
				else {
					goto L11;
				}
			}
			else if(*(cmd + 0) == 101) {
L16:;
L17:;
L18:;
				if(*(cmd + 0) == 102L) {
					lavg[0] = (double )0;
					lavg[1] = (double )0;
					lavg[2] = (double )0;
					getloadavg(lavg, 3);
					i = snprintf(lavg_str, sizeof(lavg_str), (char *)"Current load average : %.1f, %.1f, %.1f\n", lavg[0], lavg[1], lavg[2]);
					send(fd, (void *)(lavg_str), (unsigned int )i, 0);
					fields[0] = (unsigned char )((int )fields[0] | 16);
L19:;
					if(*(cmd + 0) == 103L) {
						fields[0] = (unsigned char )((int )fields[0] | 32);
L20:;
						if(*(cmd + 0) == 104L) {
							fields[0] = (unsigned char )((int )fields[0] | 4);
L21:;
							if(all > 0) {
								if(is_root == 0) {
									warn((char *)"User %s tried to list *all* jobs.", client->fcl_user);
									send(fd, (void *)(err_all_nallowed_str), sizeof(err_all_nallowed_str), 0);
									send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
									/* END OF PATH at func_cmd_ls@p79#1 */
								}
								else if(is_root > 0) {
									if(all > 0) {
										fields[0] = (unsigned char )((int )fields[0] | 1);
										print_fields(fd, fields);
										if(all > 0) {
											if(*(cmd + 0) == 101) {
L22:;
												j = queue_base;
L23:;
L24:;
												if(j == (0)) {
L25:;
L26:;
													goto L9;
												}
												else if(j < (0)) {
L27:;
													if(all > 0) {
														print_line(fd, j->j_line, fields, 0, 0, 0L);
														found = 1;
L28:;
														j = j->j_next;
														goto L24;
													}
													else if(all < 0) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else {
													goto L27;
												}
											}
											else if(*(cmd + 0) == 104) {
												i = 0;
L29:;
L30:;
												if(i >= exe_num) {
L31:;
													goto L26;
												}
												else {
													if((exe_array + i)->e_line == (0)) {
														if(is_root > 0) {
L32:;
															send_msg_fd(fd, (char *)"job no more in an fcrontab: pid %d", (exe_array + i)->e_job_pid);
															found = 1;
L33:;
L34:;
															i = i + 1;
															goto L30;
														}
														else if(is_root < 0) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else if((exe_array + i)->e_line < (0)) {
L35:;
														if(all > 0) {
															print_line(fd, (exe_array + i)->e_line, fields, (exe_array + i)->e_job_pid, 0, 0L);
															found = 1;
															goto L34;
														}
														else if(all < 0) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else {
														goto L35;
													}
												}
											}
											else if(*(cmd + 0) == 102) {
L36:;
												i = 0;
L37:;
L38:;
												if(i >= lavg_num) {
L39:;
													goto L26;
												}
												else {
													if(all > 0) {
														print_line(fd, (lavg_array + i)->l_line, fields, 0, 0, (lavg_array + i)->l_until);
														found = 1;
L40:;
														i = i + 1;
														goto L38;
													}
													else if(all < 0) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
											}
											else if(*(cmd + 0) == 103) {
L41:;
												i = (int )serial_array_index;
												j___0 = 0;
L42:;
L43:;
												if(j___0 >= serial_num) {
L44:;
													goto L26;
												}
												else {
													if(all > 0) {
														print_line(fd, *(serial_array + i), fields, 0, j___0, 0L);
														found = 1;
L45:;
														i = i + 1;
														if(i >= serial_array_size) {
															i = i - (int )serial_array_size;
L46:;
															j___0 = j___0 + 1;
															goto L43;
														}
														else {
															goto L46;
														}
													}
													else if(all < 0) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
											}
											else if(*(cmd + 0) < 101) {
												goto L26;
											}
											else if(*(cmd + 0) > 101 && *(cmd + 0) < 102) {
												goto L26;
											}
											else if(*(cmd + 0) > 102 && *(cmd + 0) < 103) {
												goto L26;
											}
											else if(*(cmd + 0) > 103 && *(cmd + 0) < 104) {
												goto L26;
											}
											else {
												goto L26;
											}
										}
										else if(all == 0) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(all < 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else {
									if(all > 0) {
										fields[0] = (unsigned char )((int )fields[0] | 1);
										print_fields(fd, fields);
										if(all > 0) {
											if(*(cmd + 0) == 101) {
												goto L22;
											}
											else if(*(cmd + 0) == 104) {
												i = 0;
L47:;
												if(i >= exe_num) {
L48:;
													goto L26;
												}
												else {
													if((exe_array + i)->e_line == (0)) {
														if(is_root < 0) {
															goto L32;
														}
														else if(is_root > 0) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else if((exe_array + i)->e_line < (0)) {
														goto L35;
													}
													else {
														goto L35;
													}
												}
											}
											else if(*(cmd + 0) == 102) {
												goto L36;
											}
											else if(*(cmd + 0) == 103) {
												goto L41;
											}
											else if(*(cmd + 0) < 101) {
												goto L26;
											}
											else if(*(cmd + 0) > 101 && *(cmd + 0) < 102) {
												goto L26;
											}
											else if(*(cmd + 0) > 102 && *(cmd + 0) < 103) {
												goto L26;
											}
											else if(*(cmd + 0) > 103 && *(cmd + 0) < 104) {
												goto L26;
											}
											else {
												goto L26;
											}
										}
										else if(all == 0) {
											/* FALSE PATH */ 
										}
										else {
											/* FALSE PATH */ 
										}
									}
									else if(all < 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
							}
							else if(all < 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(*(cmd + 0) < 104L) {
							goto L21;
						}
						else {
							goto L21;
						}
					}
					else if(*(cmd + 0) < 103L) {
						goto L20;
					}
					else {
						goto L20;
					}
				}
				else if(*(cmd + 0) < 102L) {
L49:;
					fields[0] = (unsigned char )((int )fields[0] | 8);
					goto L19;
				}
				else {
					goto L49;
				}
			}
			else if(*(cmd + 0) == 102) {
				goto L16;
			}
			else if(*(cmd + 0) == 103) {
				goto L17;
			}
			else if(*(cmd + 0) == 104) {
				goto L18;
			}
			else if(*(cmd + 0) < 101) {
				goto L9;
			}
			else if(*(cmd + 0) > 101 && *(cmd + 0) < 102) {
				goto L9;
			}
			else if(*(cmd + 0) > 102 && *(cmd + 0) < 103) {
				goto L9;
			}
			else if(*(cmd + 0) > 103 && *(cmd + 0) < 104) {
				goto L9;
			}
			else if(*(cmd + 0) > 104 && *(cmd + 0) < 105) {
				goto L9;
			}
			else {
				goto L9;
			}
		}
		else {
			fields[i] = (unsigned char)0;
			i = i + 1;
			goto L2;
		}
	}
	else if(*(cmd + 1) < -1L) {
L50:;
		tmp = 0;
		all = tmp;
		user = (char *)((void *)0);
		i = 0;
L51:;
L52:;
		if(i >= 1) {
L53:;
			if(*(cmd + 0) == 105) {
				goto L4;
			}
			else if(*(cmd + 0) == 101) {
L54:;
L55:;
L56:;
				if(*(cmd + 0) == 102L) {
					lavg[0] = (double )0;
					lavg[1] = (double )0;
					lavg[2] = (double )0;
					getloadavg(lavg, 3);
					i = snprintf(lavg_str, sizeof(lavg_str), (char *)"Current load average : %.1f, %.1f, %.1f\n", lavg[0], lavg[1], lavg[2]);
					send(fd, (void *)(lavg_str), (unsigned int )i, 0);
					fields[0] = (unsigned char )((int )fields[0] | 16);
L57:;
					if(*(cmd + 0) == 103L) {
						fields[0] = (unsigned char )((int )fields[0] | 32);
L58:;
						if(*(cmd + 0) == 104L) {
							fields[0] = (unsigned char )((int )fields[0] | 4);
L59:;
							if(all == 0) {
								if(all == 0) {
									print_fields(fd, fields);
									if(all == 0) {
										if(*(cmd + 1) == -100L) {
											user = (char *)"systab";
L60:;
											if(*(cmd + 0) == 101) {
												j = queue_base;
L61:;
												if(j == (0)) {
L62:;
L63:;
													goto L9;
												}
												else if(j < (0)) {
L64:;
													if(all == 0) {
														tmp___2 = strcmp(user, ((j->j_line)->cl_file)->cf_user);
														if(tmp___2 == 0) {
															print_line(fd, j->j_line, fields, 0, 0, 0L);
															found = 1;
															goto L28;
														}
														else if(tmp___2 < 0) {
															goto L28;
														}
														else {
															goto L28;
														}
													}
													else if(all > 0) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
												else {
													goto L64;
												}
											}
											else if(*(cmd + 0) == 104) {
												i = 0;
L65:;
												if(i >= exe_num) {
													goto L48;
												}
												else {
													if((exe_array + i)->e_line == (0)) {
														if(is_root > 0) {
															goto L32;
														}
														else if(is_root < 0) {
															goto L32;
														}
														else {
															goto L33;
														}
													}
													else if((exe_array + i)->e_line < (0)) {
L66:;
														if(all == 0) {
															tmp___3 = strcmp(user, (((exe_array + i)->e_line)->cl_file)->cf_user);
															if(tmp___3 == 0) {
																print_line(fd, (exe_array + i)->e_line, fields, (exe_array + i)->e_job_pid, 0, 0L);
																found = 1;
																goto L34;
															}
															else if(tmp___3 < 0) {
																goto L34;
															}
															else {
																goto L34;
															}
														}
														else if(all > 0) {
															/* FALSE PATH */ 
														}
														else {
															/* FALSE PATH */ 
														}
													}
													else {
														goto L66;
													}
												}
											}
											else if(*(cmd + 0) == 102) {
												i = 0;
L67:;
												if(i >= lavg_num) {
L68:;
													goto L63;
												}
												else {
													if(all == 0) {
														tmp___4 = strcmp(user, (((lavg_array + i)->l_line)->cl_file)->cf_user);
														if(tmp___4 == 0) {
															print_line(fd, (lavg_array + i)->l_line, fields, 0, 0, (lavg_array + i)->l_until);
															found = 1;
															goto L40;
														}
														else if(tmp___4 < 0) {
															goto L40;
														}
														else {
															goto L40;
														}
													}
													else if(all > 0) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
											}
											else if(*(cmd + 0) == 103) {
												i = (int )serial_array_index;
												j___0 = 0;
L69:;
												if(j___0 >= serial_num) {
L70:;
													goto L63;
												}
												else {
													if(all == 0) {
														tmp___5 = strcmp(user, ((*(serial_array + i))->cl_file)->cf_user);
														if(tmp___5 == 0) {
															print_line(fd, *(serial_array + i), fields, 0, j___0, 0L);
															found = 1;
															goto L45;
														}
														else if(tmp___5 < 0) {
															goto L45;
														}
														else {
															goto L45;
														}
													}
													else if(all > 0) {
														/* FALSE PATH */ 
													}
													else {
														/* FALSE PATH */ 
													}
												}
											}
											else if(*(cmd + 0) < 101) {
												goto L63;
											}
											else if(*(cmd + 0) > 101 && *(cmd + 0) < 102) {
												goto L63;
											}
											else if(*(cmd + 0) > 102 && *(cmd + 0) < 103) {
												goto L63;
											}
											else if(*(cmd + 0) > 103 && *(cmd + 0) < 104) {
												goto L63;
											}
											else {
												goto L63;
											}
										}
										else if(*(cmd + 1) < -100L) {
L71:;
											pass = getpwuid((unsigned int )*(cmd + 1));
											if(pass == (0)) {
												warn_e((char *)"Unable to find passwd entry for %ld", *(cmd + 1));
												send(fd, (void *)(err_invalid_user_str), sizeof(err_invalid_user_str), 0);
												send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
												/* END OF PATH at func_cmd_ls@p93#1 */
											}
											else if(pass < (0)) {
L72:;
												if(is_root == 0) {
													tmp___1 = strcmp(pass->pw_name, client->fcl_user);
													if(tmp___1 < 0) {
														warn_e((char *)"%s is not allowed to see %s\'s jobs. %ld", client->fcl_user, pass->pw_name);
L73:;
														send(fd, (void *)(err_others_nallowed_str), sizeof(err_others_nallowed_str), 0);
														send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
														/* END OF PATH at func_cmd_ls@p101#1 */
													}
													else if(tmp___1 > 0) {
														warn_e((char *)"%s is not allowed to see %s\'s jobs. %ld", client->fcl_user, pass->pw_name);
														goto L73;
													}
													else {
L74:;
														user = pass->pw_name;
														goto L60;
													}
												}
												else if(is_root > 0) {
													goto L74;
												}
												else {
													goto L74;
												}
											}
											else {
												goto L72;
											}
										}
										else {
											goto L71;
										}
									}
									else if(all > 0) {
										/* FALSE PATH */ 
									}
									else {
										/* FALSE PATH */ 
									}
								}
								else if(all > 0) {
									/* FALSE PATH */ 
								}
								else {
									/* FALSE PATH */ 
								}
							}
							else if(all > 0) {
								/* FALSE PATH */ 
							}
							else {
								/* FALSE PATH */ 
							}
						}
						else if(*(cmd + 0) < 104L) {
							goto L59;
						}
						else {
							goto L59;
						}
					}
					else if(*(cmd + 0) < 103L) {
						goto L58;
					}
					else {
						goto L58;
					}
				}
				else if(*(cmd + 0) < 102L) {
L75:;
					fields[0] = (unsigned char )((int )fields[0] | 8);
					goto L57;
				}
				else {
					goto L75;
				}
			}
			else if(*(cmd + 0) == 102) {
				goto L54;
			}
			else if(*(cmd + 0) == 103) {
				goto L55;
			}
			else if(*(cmd + 0) == 104) {
				goto L56;
			}
			else if(*(cmd + 0) < 101) {
				goto L9;
			}
			else if(*(cmd + 0) > 101 && *(cmd + 0) < 102) {
				goto L9;
			}
			else if(*(cmd + 0) > 102 && *(cmd + 0) < 103) {
				goto L9;
			}
			else if(*(cmd + 0) > 103 && *(cmd + 0) < 104) {
				goto L9;
			}
			else if(*(cmd + 0) > 104 && *(cmd + 0) < 105) {
				goto L9;
			}
			else {
				goto L9;
			}
		}
		else {
			fields[i] = (unsigned char)0;
			i = i + 1;
			goto L52;
		}
	}
	else {
		goto L50;
	}
}

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
	field_user[0] = (char )' ';
	field_user[1] = (char )'U';
	field_user[2] = (char )'S';
	field_user[3] = (char )'E';
	field_user[4] = (char )'R';
	field_user[5] = (char )' ';
	field_user[6] = (char )' ';
	field_user[7] = (char )'\000';
	field_id[0] = (char )'I';
	field_id[1] = (char )'D';
	field_id[2] = (char )' ';
	field_id[3] = (char )' ';
	field_id[4] = (char )' ';
	field_id[5] = (char )'\000';
	field_rq[0] = (char )' ';
	field_rq[1] = (char )'R';
	field_rq[2] = (char )'&';
	field_rq[3] = (char )'Q';
	field_rq[4] = (char )' ';
	field_rq[5] = (char )'\000';
	field_options[0] = (char )' ';
	field_options[1] = (char )'O';
	field_options[2] = (char )'P';
	field_options[3] = (char )'T';
	field_options[4] = (char )'I';
	field_options[5] = (char )'O';
	field_options[6] = (char )'N';
	field_options[7] = (char )'S';
	field_options[8] = (char )' ';
	field_options[9] = (char )' ';
	field_options[10] = (char )'\000';
	field_schedule[0] = (char )' ';
	field_schedule[1] = (char )'S';
	field_schedule[2] = (char )'C';
	field_schedule[3] = (char )'H';
	field_schedule[4] = (char )'E';
	field_schedule[5] = (char )'D';
	field_schedule[6] = (char )'U';
	field_schedule[7] = (char )'L';
	field_schedule[8] = (char )'E';
	field_schedule[9] = (char )' ';
	field_schedule[10] = (char )' ';
	field_schedule[11] = (char )' ';
	field_schedule[12] = (char )' ';
	field_schedule[13] = (char )' ';
	field_schedule[14] = (char )' ';
	field_schedule[15] = (char )' ';
	field_schedule[16] = (char )' ';
	field_schedule[17] = (char )'\000';
	field_until[0] = (char )' ';
	field_until[1] = (char )'L';
	field_until[2] = (char )'A';
	field_until[3] = (char )'V';
	field_until[4] = (char )'G';
	field_until[5] = (char )' ';
	field_until[6] = (char )'1';
	field_until[7] = (char )',';
	field_until[8] = (char )'5';
	field_until[9] = (char )',';
	field_until[10] = (char )'1';
	field_until[11] = (char )'5';
	field_until[12] = (char )' ';
	field_until[13] = (char )'U';
	field_until[14] = (char )'N';
	field_until[15] = (char )'T';
	field_until[16] = (char )'I';
	field_until[17] = (char )'L';
	field_until[18] = (char )' ';
	field_until[19] = (char )' ';
	field_until[20] = (char )' ';
	field_until[21] = (char )' ';
	field_until[22] = (char )' ';
	field_until[23] = (char )' ';
	field_until[24] = (char )' ';
	field_until[25] = (char )'S';
	field_until[26] = (char )'T';
	field_until[27] = (char )'R';
	field_until[28] = (char )'I';
	field_until[29] = (char )'C';
	field_until[30] = (char )'T';
	field_until[31] = (char )'\000';
	field_pid[0] = (char )' ';
	field_pid[1] = (char )'P';
	field_pid[2] = (char )'I';
	field_pid[3] = (char )'D';
	field_pid[4] = (char )' ';
	field_pid[5] = (char )' ';
	field_pid[6] = (char )' ';
	field_pid[7] = (char )' ';
	field_pid[8] = (char )'\000';
	field_index[0] = (char )' ';
	field_index[1] = (char )'I';
	field_index[2] = (char )'N';
	field_index[3] = (char )'D';
	field_index[4] = (char )'E';
	field_index[5] = (char )'X';
	field_index[6] = (char )'\000';
	field_cmd[0] = (char )' ';
	field_cmd[1] = (char )'C';
	field_cmd[2] = (char )'M';
	field_cmd[3] = (char )'D';
	field_cmd[4] = (char )'\000';
	field_endline[0] = (char )'\n';
	field_endline[1] = (char )'\000';
	len = 0;
	fields[0] = (char )'\000';
	strncat(fields, field_id, sizeof(fields) - (unsigned int )len);
	len = (int )((unsigned int )len + (sizeof(field_id) - 1U));
	if(*(details + 0) & 1 > 0) {
L1:;
		strncat(fields, field_user, (sizeof(fields) - 1U) - (unsigned int )len);
		len = (int )((unsigned int )len + (sizeof(field_user) - 1U));
L2:;
		if(*(details + 0) & 4 > 0) {
L3:;
			strncat(fields, field_pid, (sizeof(fields) - 1U) - (unsigned int )len);
			len = (int )((unsigned int )len + (sizeof(field_pid) - 1U));
L4:;
			if(*(details + 0) & 32 > 0) {
L5:;
				strncat(fields, field_index, (sizeof(fields) - 1U) - (unsigned int )len);
				len = (int )((unsigned int )len + (sizeof(field_index) - 1U));
L6:;
				if(*(details + 0) & 2 > 0) {
L7:;
					strncat(fields, field_rq, (sizeof(fields) - 1U) - (unsigned int )len);
					len = (int )((unsigned int )len + (sizeof(field_rq) - 1U));
L8:;
					if(*(details + 0) & 64 > 0) {
L9:;
						strncat(fields, field_options, (sizeof(fields) - 1U) - (unsigned int )len);
						len = (int )((unsigned int )len + (sizeof(field_options) - 1U));
L10:;
						if(*(details + 0) & 16 > 0) {
L11:;
							strncat(fields, field_until, (sizeof(fields) - 1U) - (unsigned int )len);
							len = (int )((unsigned int )len + (sizeof(field_until) - 1U));
L12:;
							if(*(details + 0) & 8 > 0) {
L13:;
								strncat(fields, field_schedule, (sizeof(fields) - 1U) - (unsigned int )len);
								len = (int )((unsigned int )len + (sizeof(field_schedule) - 1U));
L14:;
								strncat(fields, field_cmd, sizeof(fields) - (unsigned int )len);
								len = (int )((unsigned int )len + (sizeof(field_cmd) - 1U));
								strncat(fields, field_endline, sizeof(fields) - (unsigned int )len);
								len = (int )((unsigned int )len + (sizeof(field_endline) - 1U));
								fields[195] = (char )'\000';
								if(len < sizeof(fields)) {
									tmp = (unsigned int )len;
L15:;
									tmp___0 = send(fd, (void *)(fields), tmp, 0);
									if(tmp___0 < 0) {
										error_e((char *)"error in send()");
L16:;
										/* END OF PATH at func_print_fields@p156#1 */
									}
									else {
										goto L16;
									}
								}
								else {
									tmp = sizeof(fields);
									goto L15;
								}
							}
							else if(*(details + 0) & 8 < 0) {
								goto L13;
							}
							else {
								goto L14;
							}
						}
						else if(*(details + 0) & 16 < 0) {
							goto L11;
						}
						else {
							goto L12;
						}
					}
					else if(*(details + 0) & 64 < 0) {
						goto L9;
					}
					else {
						goto L10;
					}
				}
				else if(*(details + 0) & 2 < 0) {
					goto L7;
				}
				else {
					goto L8;
				}
			}
			else if(*(details + 0) & 32 < 0) {
				goto L5;
			}
			else {
				goto L6;
			}
		}
		else if(*(details + 0) & 4 < 0) {
			goto L3;
		}
		else {
			goto L4;
		}
	}
	else if(*(details + 0) & 1 < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

void print_line(int fd , struct cl_t *line , unsigned char *details , pid_t pid , int index___0 , time_t until )
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
char *tmp___10 ;
int tmp___11 ;
int tmp___12 ;
int tmp___13 ;
int tmp___14 ;
unsigned int tmp___15 ;
ssize_t tmp___16 ;
	len = 0;
	len = snprintf(buf, sizeof(buf), (char *)"%-5ld", line->cl_id);
	if(*(details + 0) & 1 > 0) {
L1:;
		tmp = snprintf(buf + len, sizeof(buf) - (unsigned int )len, (char *)" %-6s", (line->cl_file)->cf_user);
		len = len + tmp;
L2:;
		if(*(details + 0) & 4 > 0) {
L3:;
			tmp___0 = snprintf(buf + len, sizeof(buf) - (unsigned int )len, (char *)" %-7d", pid);
			len = len + tmp___0;
L4:;
			if(*(details + 0) & 32 > 0) {
L5:;
				tmp___1 = snprintf(buf + len, sizeof(buf) - (unsigned int )len, (char *)" %-5d", index___0);
				len = len + tmp___1;
L6:;
				if(*(details + 0) & 2 > 0) {
L7:;
					tmp___2 = snprintf(buf + len, sizeof(buf) - (unsigned int )len, (char *)" %-4d", line->cl_numexe);
					len = len + tmp___2;
L8:;
					if(*(details + 0) & 64 > 0) {
L9:;
						i = 0;
						opt___0[0] = (char )'\000';
						if(line->cl_option[0] & 2 > 0) {
L10:;
							if(line->cl_option[1] & 16 > 0) {
L11:;
								tmp___3 = 0;
L12:;
								tmp___4 = snprintf(opt___0 + i, sizeof(opt___0) - (unsigned int )i, (char *)"L%.*s", tmp___3, "O");
								i = i + tmp___4;
L13:;
								if(line->cl_option[0] & 32 > 0) {
L14:;
									if(line->cl_option[1] & 8 > 0) {
L15:;
										tmp___5 = 1;
L16:;
										tmp___6 = snprintf(opt___0 + i, sizeof(opt___0) - (unsigned int )i, (char *)"%.*sS%.*s", i, ",", tmp___5, "O");
										i = i + tmp___6;
L17:;
										if(line->cl_option[1] & 4 > 0) {
L18:;
											tmp___7 = snprintf(opt___0 + i, sizeof(opt___0) - (unsigned int )i, (char *)"%.*sES", i, ",");
											i = i + tmp___7;
L19:;
											tmp___8 = snprintf(buf + len, sizeof(buf) - (unsigned int )len, (char *)" %-9s", opt___0);
											len = len + tmp___8;
L20:;
											if(*(details + 0) & 16 > 0) {
L21:;
												tmp___9 = snprintf(buf + len, sizeof(buf) - (unsigned int )len, (char *)" %.1f,%.1f,%.1f", (double )line->cl_lavg[0] / (double )10, (double )line->cl_lavg[1] / (double )10, (double )line->cl_lavg[2] / (double )10);
												len = len + tmp___9;
												if(until > 0L) {
													ftime = localtime(& until);
													if(line->cl_option[2] & 16 > 0) {
L22:;
														tmp___10 = (char *)"N";
L23:;
														tmp___11 = snprintf(buf + len, sizeof(buf) - (unsigned int )len, (char *)" %02d/%02d/%d %02d:%02d %s", ftime->tm_mon + 1, ftime->tm_mday, ftime->tm_year + 1900, ftime->tm_hour, ftime->tm_min, tmp___10);
														len = len + tmp___11;
L24:;
														if(*(details + 0) & 8 > 0) {
L25:;
															ftime = localtime(& line->cl_nextexe);
															tmp___13 = snprintf(buf + len, sizeof(buf) - (unsigned int )len, (char *)" %02d/%02d/%d %02d:%02d", ftime->tm_mon + 1, ftime->tm_mday, ftime->tm_year + 1900, ftime->tm_hour, ftime->tm_min);
															len = len + tmp___13;
L26:;
															tmp___14 = snprintf(buf + len, sizeof(buf) - (unsigned int )len, (char *)" %s\n", line->cl_shell);
															len = len + tmp___14;
															if(len < sizeof(buf)) {
																tmp___15 = (unsigned int )len;
L27:;
																tmp___16 = send(fd, (void *)(buf), tmp___15, 0);
																if(tmp___16 < 0) {
																	error_e((char *)"error in send()");
L28:;
																	/* END OF PATH at func_print_line@p87#1 */
																}
																else {
																	goto L28;
																}
															}
															else {
																tmp___15 = sizeof(buf);
																goto L27;
															}
														}
														else if(*(details + 0) & 8 < 0) {
															goto L25;
														}
														else {
															goto L26;
														}
													}
													else if(line->cl_option[2] & 16 < 0) {
														goto L22;
													}
													else {
														tmp___10 = (char *)"Y";
														goto L23;
													}
												}
												else {
													tmp___12 = snprintf(buf + len, sizeof(buf) - (unsigned int )len, (char *)" %18s", " (no until set) ");
													len = len + tmp___12;
													goto L24;
												}
											}
											else if(*(details + 0) & 16 < 0) {
												goto L21;
											}
											else {
												goto L24;
											}
										}
										else if(line->cl_option[1] & 4 < 0) {
											goto L18;
										}
										else {
											goto L19;
										}
									}
									else if(line->cl_option[1] & 8 < 0) {
										goto L15;
									}
									else {
										tmp___5 = 0;
										goto L16;
									}
								}
								else if(line->cl_option[0] & 32 < 0) {
									goto L14;
								}
								else {
									goto L17;
								}
							}
							else if(line->cl_option[1] & 16 < 0) {
								goto L11;
							}
							else {
								tmp___3 = 1;
								goto L12;
							}
						}
						else if(line->cl_option[0] & 2 < 0) {
							goto L10;
						}
						else {
							goto L13;
						}
					}
					else if(*(details + 0) & 64 < 0) {
						goto L9;
					}
					else {
						goto L20;
					}
				}
				else if(*(details + 0) & 2 < 0) {
					goto L7;
				}
				else {
					goto L8;
				}
			}
			else if(*(details + 0) & 32 < 0) {
				goto L5;
			}
			else {
				goto L6;
			}
		}
		else if(*(details + 0) & 4 < 0) {
			goto L3;
		}
		else {
			goto L4;
		}
	}
	else if(*(details + 0) & 1 < 0) {
		goto L1;
	}
	else {
		goto L2;
	}
}

void cmd_on_exeq(struct fcrondyn_cl *client , long *cmd , int fd , int is_root )
{ int exe_index ;
int found ;
char *err_str ;
int tmp ;
	found = 0;
	err_str = (char *)((void *)0);
	exe_index = 0;
L1:;
L2:;
	if(exe_index >= exe_num) {
L3:;
		if(found > 0) {
L4:;
			send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
L5:;
			/* END OF PATH at func_cmd_on_exeq@p55#1 */
		}
		else if(found < 0) {
			goto L4;
		}
		else {
			if(*(cmd + 0) == 402L) {
				err_str = (char *)"cannot renice job id %ld for %s : no corresponding running job.";
				warn(err_str, *(cmd + 2), client->fcl_user);
L6:;
				send(fd, (void *)(err_rjob_nfound_str), sizeof(err_rjob_nfound_str), 0);
				send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
				goto L5;
			}
			else if(*(cmd + 0) < 402L) {
L7:;
				if(*(cmd + 0) == 401L) {
					err_str = (char *)"cannot send signal to job id %ld for %s : no corresponding running job.";
					warn(err_str, *(cmd + 2), client->fcl_user);
					goto L6;
				}
				else if(*(cmd + 0) < 401L) {
L8:;
					err_str = (char *)"cannot run unknown cmd on job id %ld for %s : no corresponding running job.";
					warn(err_str, *(cmd + 2), client->fcl_user);
					goto L6;
				}
				else {
					goto L8;
				}
			}
			else {
				goto L7;
			}
		}
	}
	else {
		if((exe_array + exe_index)->e_line < (0)) {
L9:;
			if(*(cmd + 2) == ((exe_array + exe_index)->e_line)->cl_id) {
				found = 1;
				if(is_root > 0) {
L10:;
					if(*(cmd + 0) == 401L) {
						cmd_send_signal(client, cmd, fd, exe_index);
L11:;
L12:;
						exe_index = exe_index + 1;
						goto L2;
					}
					else if(*(cmd + 0) < 401L) {
L13:;
						if(*(cmd + 0) == 402L) {
							cmd_renice(client, cmd, fd, exe_index, is_root);
							goto L11;
						}
						else if(*(cmd + 0) < 402L) {
L14:;
							send(fd, (void *)(err_cmd_unknown_str), sizeof(err_cmd_unknown_str), 0);
							send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
							/* END OF PATH at func_cmd_on_exeq@p23#1 */
						}
						else {
							goto L14;
						}
					}
					else {
						goto L13;
					}
				}
				else if(is_root < 0) {
					goto L10;
				}
				else {
					tmp = strcmp(client->fcl_user, (((exe_array + exe_index)->e_line)->cl_file)->cf_user);
					if(tmp < 0) {
L15:;
						if(*(cmd + 0) == 402L) {
							err_str = (char *)"%s tried to renice to %ld job id %ld for %s : not allowed.";
							warn(err_str, client->fcl_user, *(cmd + 1), *(cmd + 2), client->fcl_user);
L16:;
							send(fd, (void *)(err_job_nfound_str), sizeof(err_job_nfound_str), 0);
							send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
							goto L12;
						}
						else if(*(cmd + 0) < 402L) {
L17:;
							if(*(cmd + 0) == 401L) {
								err_str = (char *)"%s tried to send signal %ld to id %ld for %s : not allowed.";
								warn(err_str, client->fcl_user, *(cmd + 1), *(cmd + 2), client->fcl_user);
								goto L16;
							}
							else if(*(cmd + 0) < 401L) {
L18:;
								err_str = (char *)"cannot run unknown cmd with arg %ld on job id %ld for %s : not allowed.";
								warn(err_str, client->fcl_user, *(cmd + 1), *(cmd + 2), client->fcl_user);
								goto L16;
							}
							else {
								goto L18;
							}
						}
						else {
							goto L17;
						}
					}
					else if(tmp > 0) {
						goto L15;
					}
					else {
						goto L10;
					}
				}
			}
			else if(*(cmd + 2) < ((exe_array + exe_index)->e_line)->cl_id) {
				goto L12;
			}
			else {
				goto L12;
			}
		}
		else if((exe_array + exe_index)->e_line > (0)) {
			goto L9;
		}
		else {
			goto L12;
		}
	}
}

void cmd_renice(struct fcrondyn_cl *client , long *cmd , int fd , int exe_index , int is_root )
{ int tmp ;
	if((exe_array + exe_index)->e_job_pid <= 0) {
		warn((char *)"renice: invalid args : pid: %d nice_value: %d user: %s.", (exe_array + exe_index)->e_job_pid, (int )*(cmd + 1), client->fcl_user);
		send(fd, (void *)(err_invalid_args_str), sizeof(err_invalid_args_str), 0);
		send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
		/* END OF PATH at func_cmd_renice@p6#1 */
	}
	else {
		if(*(cmd + 1) < 0) {
			if(is_root > 0) {
L1:;
L2:;
				if(*(cmd + 1) > 20) {
					warn((char *)"renice: invalid args : pid: %d nice_value: %d user: %s.", (exe_array + exe_index)->e_job_pid, (int )*(cmd + 1), client->fcl_user);
					send(fd, (void *)(err_invalid_args_str), sizeof(err_invalid_args_str), 0);
					send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
					/* END OF PATH at func_cmd_renice@p24#1 */
				}
				else {
					if(*(cmd + 1) < -20) {
						warn((char *)"renice: invalid args : pid: %d nice_value: %d user: %s.", (exe_array + exe_index)->e_job_pid, (int )*(cmd + 1), client->fcl_user);
						send(fd, (void *)(err_invalid_args_str), sizeof(err_invalid_args_str), 0);
						send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
						/* END OF PATH at func_cmd_renice@p31#1 */
					}
					else {
						tmp = setpriority(0, (unsigned int )(exe_array + exe_index)->e_job_pid, (int )*(cmd + 1));
						if(tmp < 0) {
							error_e((char *)"could not setpriority(PRIO_PROCESS, %d, %d)", (exe_array + exe_index)->e_job_pid, (int )*(cmd + 1));
L3:;
							send(fd, (void *)(err_unknown_str), sizeof(err_unknown_str), 0);
							send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
							/* END OF PATH at func_cmd_renice@p38#1 */
						}
						else if(tmp > 0) {
							error_e((char *)"could not setpriority(PRIO_PROCESS, %d, %d)", (exe_array + exe_index)->e_job_pid, (int )*(cmd + 1));
							goto L3;
						}
						else {
							send_msg_fd(fd, (char *)"Command successfully completed on process %d.", (exe_array + exe_index)->e_job_pid);
							/* END OF PATH at func_cmd_renice@p42#1 */
						}
					}
				}
			}
			else if(is_root < 0) {
				goto L1;
			}
			else {
				warn((char *)"renice: invalid args : pid: %d nice_value: %d user: %s.", (exe_array + exe_index)->e_job_pid, (int )*(cmd + 1), client->fcl_user);
				send(fd, (void *)(err_invalid_args_str), sizeof(err_invalid_args_str), 0);
				send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
				/* END OF PATH at func_cmd_renice@p16#1 */
			}
		}
		else {
			goto L2;
		}
	}
}

void cmd_send_signal(struct fcrondyn_cl *client , long *cmd , int fd , int exe_index )
{ int tmp ;
	if((exe_array + exe_index)->e_job_pid <= 0) {
		warn((char *)"send_signal: invalid args : pid: %d signal: %d user: %s", (exe_array + exe_index)->e_job_pid, (int )*(cmd + 1), client->fcl_user);
		send(fd, (void *)(err_invalid_args_str), sizeof(err_invalid_args_str), 0);
		send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
		/* END OF PATH at func_cmd_send_signal@p6#1 */
	}
	else {
		if(*(cmd + 1) <= 0) {
			warn((char *)"send_signal: invalid args : pid: %d signal: %d user: %s", (exe_array + exe_index)->e_job_pid, (int )*(cmd + 1), client->fcl_user);
			send(fd, (void *)(err_invalid_args_str), sizeof(err_invalid_args_str), 0);
			send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
			/* END OF PATH at func_cmd_send_signal@p13#1 */
		}
		else {
			tmp = kill((exe_array + exe_index)->e_job_pid, (int )*(cmd + 1));
			if(tmp < 0) {
				error_e((char *)"could not kill(%d, %d)", (exe_array + exe_index)->e_job_pid, (int )*(cmd + 1));
L1:;
				send(fd, (void *)(err_unknown_str), sizeof(err_unknown_str), 0);
				send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
				/* END OF PATH at func_cmd_send_signal@p20#1 */
			}
			else if(tmp > 0) {
				error_e((char *)"could not kill(%d, %d)", (exe_array + exe_index)->e_job_pid, (int )*(cmd + 1));
				goto L1;
			}
			else {
				send_msg_fd(fd, (char *)"Command successfully completed on process %d.", (exe_array + exe_index)->e_job_pid);
				/* END OF PATH at func_cmd_send_signal@p24#1 */
			}
		}
	}
}

void cmd_run(struct fcrondyn_cl *client , long *cmd , int fd , int is_root )
{ struct job_t *j ;
int tmp ;
	j = (struct job_t *)((void *)0);
	j = queue_base;
L1:;
L2:;
	if(j == (0)) {
L3:;
		send(fd, (void *)(err_job_nfound_str), sizeof(err_job_nfound_str), 0);
		send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
		/* END OF PATH at func_cmd_run@p30#1 */
	}
	else if(j < (0)) {
L4:;
		if(*(cmd + 1) == (j->j_line)->cl_id) {
			tmp = strcmp(client->fcl_user, ((j->j_line)->cl_file)->cf_user);
			if(tmp == 0) {
L5:;
				if((j->j_line)->cl_option[0] & 2 > 0) {
					add_lavg_job(j->j_line, fd);
L6:;
L7:;
					if(*(cmd + 0) == 301L) {
						set_next_exe(j->j_line, (char)4, fd);
L8:;
						send(fd, (void *)"\000\000", sizeof("\000\000"), 0);
						/* END OF PATH at func_cmd_run@p24#1 */
					}
					else if(*(cmd + 0) < 301L) {
						goto L8;
					}
					else {
						goto L8;
					}
				}
				else if((j->j_line)->cl_option[0] & 2 < 0) {
					add_lavg_job(j->j_line, fd);
					goto L6;
				}
				else {
					if((j->j_line)->cl_option[0] & 32 > 0) {
						add_serial_job(j->j_line, fd);
L9:;
						goto L7;
					}
					else if((j->j_line)->cl_option[0] & 32 < 0) {
						add_serial_job(j->j_line, fd);
						goto L9;
					}
					else {
						run_normal_job(j->j_line, fd);
						goto L7;
					}
				}
			}
			else if(tmp < 0) {
L10:;
				if(is_root > 0) {
					goto L5;
				}
				else if(is_root < 0) {
					goto L5;
				}
				else {
L11:;
					j = j->j_next;
					goto L2;
				}
			}
			else {
				goto L10;
			}
		}
		else if(*(cmd + 1) < (j->j_line)->cl_id) {
			goto L11;
		}
		else {
			goto L11;
		}
	}
	else {
		goto L4;
	}
}

