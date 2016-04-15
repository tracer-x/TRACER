// SAFE

int BLAST_NONDET;
int lockStatus;

void errorFn() {
ERROR: goto ERROR;
}

void assert(int i) { }

void lock_kernel() {
  if (lockStatus == 0) lockStatus = 1;
  else errorFn();
}
void unlock_kernel() {
  if (lockStatus == 1) lockStatus = 0;
  else errorFn();
}

/* Type declarations */

static unsigned char inb(unsigned short port) {
  unsigned char v; 
  return v; 
} 
static unsigned char inb_p(unsigned short port) { 
  unsigned char v; 
  return v; 
}
static unsigned short inw(unsigned short port) { 
  unsigned short v; 
  return v; 
} 
static unsigned short inw_p(unsigned short port) 
{ unsigned short v; 
  return v; 
}
static unsigned int inl(unsigned short port) { 
  unsigned int v; 
  return v; 
} 
static unsigned int inl_p(unsigned short port) {
  unsigned int v; 
  return v; 
}


/* extern */ void outb(unsigned char value, unsigned short port){}
/* extern */ void outb_p(unsigned char value, unsigned short port){}
/* extern */ void outw(unsigned short value, unsigned short port){}
/* extern */ void outw_p(unsigned short value, unsigned short port){}
/* extern */ void outl(unsigned int value, unsigned short port){}
/* extern */ void outl_p(unsigned int value, unsigned short port){}

/*extern */ void insb(unsigned short port, void * addr, unsigned long count){}
/*extern*/ void insw(unsigned short port, void * addr, unsigned long count){}
/*extern*/ void insl(unsigned short port, void * addr, unsigned long count){}

/*extern*/ void outsb(unsigned short port, void * addr, unsigned long count){}
/*extern*/ void outsw(unsigned short port, void * addr, unsigned long count){}
/*extern*/ void outsl(unsigned short port, void * addr, unsigned long count){}

typedef unsigned int	__kernel_size_t;
typedef long long loff_t;
typedef unsigned short uid_t;
typedef unsigned short gid_t;
typedef unsigned int size_t;
typedef int ssize_t;
typedef unsigned short mode_t;
typedef struct {int counter; } atomic_t;
typedef unsigned short umode_t;
typedef char __s8;
typedef unsigned char __u8;
typedef short __s16;
typedef unsigned short __u16;
typedef int __s32;
typedef unsigned int __u32;
typedef long long __s64;
typedef unsigned long long __u64;
typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef u32 dma_addr_t;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef __u8 u_int8_t;
typedef __s8 int8_t;
typedef __u16 u_int16_t;
typedef __s16 int16_t;
typedef __u32 u_int32_t;
typedef __s32 int32_t;
typedef __u8 uint8_t;
typedef __u16 uint16_t;
typedef __u32 uint32_t;
typedef __u64 uint64_t;
typedef __u64 u_int64_t;
typedef __s64 int64_t;

struct file_operations {
/*   loff_t (*llseek) (struct file *, loff_t, int); */
/*   ssize_t (*read) (struct file *, char *, size_t, loff_t *); */
/*   ssize_t (*write) (struct file *, const char *, size_t, loff_t *); */
/*   int (*readdir) (struct file *, void *, filldir_t); */
/*   unsigned int (*poll) (struct file *, struct poll_table_struct *); */
/*   int (*ioctl) (struct inode *, struct file *, unsigned int, unsigned long); */
/*   int (*mmap) (struct file *, struct vm_area_struct *); */
/*   int (*open) (struct inode *, struct file *); */
/*   int (*flush) (struct file *); */
/*   int (*release) (struct inode *, struct file *); */
/*   int (*fsync) (struct file *, struct dentry *); */
/*   int (*fasync) (int, struct file *, int); */
/*   int (*check_media_change) (kdev_t dev); */
/*   int (*revalidate) (kdev_t dev); */
/*   int (*lock) (struct file *, int, struct file_lock *); */
/*   int (*mediactl) (kdev_t dev, int op, int optarg); */
};

struct exception_table_entry;
struct kernel_sym
{
  unsigned long value;
  char name[60];		 
};
struct module_symbol
{
  unsigned long value;
  const char *name;
};
struct module_ref
{
  struct module *dep;	 
  struct module *ref;	 
  struct module_ref *next_ref;
};
struct module_persist;
struct module
{
  unsigned long size_of_struct;	 
  struct module *next;
  char *name;
  unsigned long size;  
  union
  {
    atomic_t usecount;
    long pad;
  } uc;				 
  unsigned long flags;		 
  unsigned nsyms;
  unsigned ndeps;
  struct module_symbol *syms;
  struct module_ref *deps;
  struct module_ref *refs;
  /*   int (*init)(void); */
  /*   void (*cleanup)(void); */
  struct exception_table_entry *ex_table_start;
  struct exception_table_entry *ex_table_end;
  struct module_persist *persist_start;
  struct module_persist *persist_end;
  /* int (*can_unload)(void); */
};

struct module_info
{
  unsigned long addr;
  unsigned long size;
  unsigned long flags;
  long usecount;
};


typedef struct {
  unsigned long seg;
} mm_segment_t;

struct pt_regs {
  long ebx; long ecx; long edx;
  long esi; long edi;
  long ebp;
  long eax;
  int  xds;
  int  xes;
  long orig_eax;
  long eip;
  int  xcs;
  long eflags;
  long esp;
  int  xss;
};

typedef void (*lcall7_func)(struct pt_regs *);

struct exec_domain {
  char *name;
  lcall7_func handler;
  unsigned char pers_low, pers_high;
  unsigned long * signal_map;
  unsigned long * signal_invmap;
  struct module * module;
  struct exec_domain *next;
};

typedef unsigned long cycles_t;
typedef int pid_t;

struct list_head {
  struct list_head *next, *prev;
};

struct qstr {
	const unsigned char * name;
	unsigned int len;
	unsigned int hash;
};

struct dentry {
  int d_count;
  unsigned int d_flags;
  struct inode  * d_inode;	 
  struct dentry * d_parent;	 
  struct dentry * d_mounts;	 
  struct dentry * d_covers;
  struct list_head d_hash;	 
  struct list_head d_lru;		 
  struct list_head d_child;	 
  struct list_head d_subdirs;	 
  struct list_head d_alias;	 
  struct qstr d_name;
  unsigned long d_time;		 
  struct dentry_operations  *d_op;
  struct super_block * d_sb;	 
  unsigned long d_reftime;	 
  void * d_fsdata;		 
  unsigned char d_iname[16 ];  
};

typedef __u32 kernel_cap_t;
struct rlimit {
  long	rlim_cur;
  long	rlim_max;
};

struct linux_binprm{
  char buf[128];
  unsigned long page[32 ];
  unsigned long p;
  int sh_bang;
  int java;		 
  struct dentry * dentry;
  int e_uid, e_gid;
  kernel_cap_t cap_inheritable, cap_permitted, cap_effective;
  int argc, envc;
  char * filename;	 
  unsigned long loader, exec;
};

struct timer_list {
  struct timer_list *next;  
  struct timer_list *prev;
  unsigned long expires;
  unsigned long data;
  void (*function)(unsigned long);
};

typedef long  clock_t;
struct tms {
  clock_t tms_utime;
  clock_t tms_stime;
  clock_t tms_cutime;
  clock_t tms_cstime;
};

struct i387_hard_struct {
  long	cwd;
  long	swd;
  long	twd;
  long	fip;
  long	fcs;
  long	foo;
  long	fos;
  long	st_space[20];	 
  long	status;		 
};

struct i387_soft_struct {
  long	cwd;
  long	swd;
  long	twd;
  long	fip;
  long	fcs;
  long	foo;
  long	fos;
  long	st_space[20];	 
  unsigned char	ftop, changed, lookahead, no_update, rm, alimit;
  struct info	*info;
  unsigned long	entry_eip;
};

union i387_union {
  struct i387_hard_struct hard;
  struct i387_soft_struct soft;
};

struct thread_struct {
  unsigned short	back_link,__blh;
  unsigned long	esp0;
  unsigned short	ss0,__ss0h;
  unsigned long	esp1;
  unsigned short	ss1,__ss1h;
  unsigned long	esp2;
  unsigned short	ss2,__ss2h;
  unsigned long	cr3;
  unsigned long	eip;
  unsigned long	eflags;
  unsigned long	eax,ecx,edx,ebx;
  unsigned long	esp;
  unsigned long	ebp;
  unsigned long	esi;
  unsigned long	edi;
  unsigned short	es, __esh;
  unsigned short	cs, __csh;
  unsigned short	ss, __ssh;
  unsigned short	ds, __dsh;
  unsigned short	fs, __fsh;
  unsigned short	gs, __gsh;
  unsigned short	ldt, __ldth;
  unsigned short	trace, bitmap;
  unsigned long	io_bitmap[32 +1];
  unsigned long	tr;
  unsigned long	cr2, trap_no, error_code;
  mm_segment_t	segment;
  
  long debugreg[8];   
 
  union i387_union i387;
  
  struct vm86_struct * vm86_info;
  unsigned long screen_bitmap;
  unsigned long v86flags, v86mask, v86mode, saved_esp0;
};

struct vm86_regs {
  long ebx;
  long ecx;
  long edx;
  long esi;
  long edi;
  long ebp;
  long eax;
  long __null_ds;
  long __null_es;
  long __null_fs;
  long __null_gs;
  long orig_eax;
  long eip;
  unsigned short cs, __csh;
  long eflags;
  long esp;
  unsigned short ss, __ssh;
  unsigned short es, __esh;
  unsigned short ds, __dsh;
  unsigned short fs, __fsh;
  unsigned short gs, __gsh;
};

struct revectored_struct {
  unsigned long __map[8];			 
};

struct vm86_struct {
  struct vm86_regs regs;
  unsigned long flags;
  unsigned long screen_bitmap;
  unsigned long cpu_type;
  struct revectored_struct int_revectored;
  struct revectored_struct int21_revectored;
};

typedef struct { } spinlock_t;
typedef struct {
  unsigned long sig[2];
} sigset_t;


struct task_struct {
 
  long state;	 
  unsigned long flags;	 
  int sigpending;
  mm_segment_t addr_limit;	 
  struct exec_domain *exec_domain;
  long need_resched;
  long counter;
  long priority;
  cycles_t avg_slice;
  int has_cpu;
  int processor;
  int last_processor;
  int lock_depth;		 	
  struct task_struct *next_task, *prev_task;
  struct task_struct *next_run,  *prev_run;
  struct linux_binfmt *binfmt;
  int exit_code, exit_signal;
  int pdeath_signal;     
  unsigned long personality;
  int dumpable/* :1 */;
  int did_exec/* :1 */;
  pid_t pid;
  pid_t pgrp;
  pid_t tty_old_pgrp;
  pid_t session;
  
  int leader;
  struct task_struct *p_opptr, *p_pptr, *p_cptr, *p_ysptr, *p_osptr;
  struct task_struct *pidhash_next;
  struct task_struct **pidhash_pprev;
  struct task_struct **tarray_ptr;
  struct wait_queue *wait_chldexit;	 
  struct semaphore *vfork_sem;		 
  unsigned long policy, rt_priority;
  unsigned long it_real_value, it_prof_value, it_virt_value;
  unsigned long it_real_incr, it_prof_incr, it_virt_incr;
  struct timer_list real_timer;
  struct tms times;
  unsigned long start_time;
  long per_cpu_utime[1 ], per_cpu_stime[1 ];
  unsigned long min_flt, maj_flt, nswap, cmin_flt, cmaj_flt, cnswap;
  int swappable/* :1 */;
  int trashing_mem/* :1 */;
  int trashing_bigmem/* :1 */;  
  uid_t uid,euid,suid,fsuid;
  gid_t gid,egid,sgid,fsgid;
  int ngroups;
  gid_t	groups[32 ];
  kernel_cap_t   cap_effective, cap_inheritable, cap_permitted;
  struct user_struct *user; 
  struct rlimit rlim[10 ];
  unsigned short used_math;
  char comm[16]; 
  int link_count;
  struct tty_struct *tty;   
  struct sem_undo *semundo;
  struct sem_queue *semsleeping; 
  struct thread_struct tss; 
  struct fs_struct *fs; 
  struct files_struct *files; 
  struct mm_struct *mm; 
  spinlock_t sigmask_lock;	 
  struct signal_struct *sig;
  sigset_t signal, blocked;
  struct signal_queue *sigqueue, **sigqueue_tail;
  unsigned long sas_ss_sp;
  size_t sas_ss_size;       
  u32 parent_exec_id;
  u32 self_exec_id; 
  int oom_kill_try;
};

struct wait_queue {
  struct task_struct * task;
  struct wait_queue * next;
};

struct qp_queue {
  unsigned long head;
  unsigned long tail;
  struct wait_queue *proc_list;
  struct fasync_struct *fasync;
  unsigned char buf[2048 ];
};

struct fown_struct {
  int pid;		 
  uid_t uid, euid;	 
  int signum;		 
};

struct file {
  struct file		*f_next, **f_pprev;
  struct dentry		*f_dentry;
  struct file_operations	*f_op;
  mode_t			f_mode;
  loff_t			f_pos;
  unsigned int 		f_count, f_flags;
  unsigned long 		f_reada, f_ramax, f_raend, f_ralen, f_rawin;
  struct fown_struct	f_owner;
  unsigned int		f_uid, f_gid;
  int			f_error;
  unsigned long		f_version;
  void			*private_data;
};

struct poll_table_entry {
  struct file * filp;
  struct wait_queue wait;
  struct wait_queue ** wait_address;
};

typedef struct poll_table_struct {
  struct poll_table_struct * next;
  unsigned int nr;
  struct poll_table_entry * entry;
} poll_table;

struct miscdevice 
{
  int minor;
  const char *name;
  struct file_operations *fops;
  struct miscdevice * next, * prev;
};
struct fasync_struct {
  int    magic;
  int    fa_fd;
  struct fasync_struct	*fa_next;  
  struct file 		*fa_file;
};

/* End type declarations */

/* Begin stubs */
/* extern */ int   fasync_helper(int a, struct file * b, int c, struct fasync_struct ** d){ int x; return x;}
/* extern */ void  add_mouse_randomness(__u32 mouse_data){ return;}
/* extern */ void  kill_fasync(struct fasync_struct *fa, int sig, int band){ return;}
/* extern */ void  __wake_up(struct wait_queue ** p, unsigned int mode){ return;}
/* extern */ int  printk(const char * fmt, ...){ int x; return x;}
/* extern */ void  free_irq(unsigned int irq, void *dev_id){ return;}
/* extern */ int  request_irq(unsigned int irq,
			      void (*handler)(int, void *, struct pt_regs *),
			      unsigned long flags, char *device, 			      
			      void *dev_id){ int x; return x;}
/* extern */ signed long   schedule_timeout(signed long timeout){ signed long x; return x;}
/* extern */ void  schedule(){ return;}
/* extern */ void add_wait_queue(struct wait_queue ** p, struct wait_queue * wait){ return;}
/* extern */ struct task_struct * get_current(){
  struct task_struct *current;
  return current;
}
/* extern */ int signal_pending(struct task_struct *p)
{
  int NONDET;
  if (NONDET != 0) 
    return 1; 
  else return 0;
}
/* extern */ void remove_wait_queue(struct wait_queue ** p, struct wait_queue * wait){ return;}
/* extern */ int  misc_register   (struct miscdevice * misc){ int x; return x;}
/* extern */ void poll_wait(struct file * filp, struct wait_queue ** wait_address, poll_table *p){}
/* End stubs */


////////////////////////////////////////////////////////////
// Global variables
////////////////////////////////////////////////////////////
struct qp_queue *queue;
// TRACER extern struct timeval  xtime   ;
struct miscdevice qp_mouse /* = { 1 , "QPmouse", &qp_fops */
/* } */;


void * kmalloc(size_t s, int f) {
  if(BLAST_NONDET) 
    return (void *) 0;
  else 
    return (void *) 1;
}
void * memset(void *a,int b,__kernel_size_t s) {
  
  int x;
  //if((int)a==0)
  //errorFn();
  return (void *) x;    
}

unsigned int get_from_queue(void)
{
  unsigned int result;
  unsigned long flags;
  
/*   __asm__ __volatile__("pushfl ; popl %0":"=g" ( flags ):
     :"memory") ; */
/*   __asm__ __volatile__ ("cli": : :"memory")  ; */
/*   result = queue->buf[queue->tail]; */
/*   queue->tail = (queue->tail + 1) & (2048 -1); */
/*   __asm__ __volatile__("pushl %0 ; popfl":   :"g" (  flags  ):"memory")  ; */

  return result;
}

int queue_empty(void)
{
  if (queue->head == queue->tail) 
    return 1; 
  else 
    return 0;
}

int fasync_qp(int fd, struct file *filp, int on)
{
  int retval;
  
  retval =  fasync_helper(fd, filp, on, &queue->fasync);
  if (retval < 0)
    return retval;
  return 0;
}

 
int qp_present/*  = 0 */;
int qp_count/*  = 0 */;
int qp_data/*  = 0x310 */ ;
int qp_status/*  = 0x311  */;

int poll_qp_status(void);
int probe_qp(void);

void qp_interrupt(int cpl, void *dev_id, struct pt_regs * regs)
{
  int head;
  int maxhead;
  // TRACER
  __u32 seed;

  head = queue->head;
  maxhead = (queue->tail-1) & (2048 -1);
  
  add_mouse_randomness(seed /* queue->buf[head] = inb(qp_data) */);

  if (head != maxhead) {
    head++;
    head = head & 2048 -1;
  }
  queue->head = head;
  if (queue->fasync)
    kill_fasync(queue->fasync, 29 , 1 );
  __wake_up(( &queue->proc_list ),1 ) ;
}

int release_qp(struct inode * inode, struct file * file)
{
  unsigned char status;
  int temp_1;

  //assert(lockStatus == 0);
  
  ////////////////////////////////////////////////////
  lock_kernel();
  ////////////////////////////////////////////////////

  fasync_qp(-1, file, 0);
  qp_count--;
  if (!qp_count) {
    temp_1 =  poll_qp_status();
    if (!temp_1)
      printk   ("Warning: Mouse device busy in release_qp()\n");
    status = inb_p(qp_status);
    outb_p(status & /* ~ */(0x80 | 0x10 ), qp_status);
    temp_1 =  poll_qp_status();
    if (!temp_1)
      printk   ("Warning: Mouse device busy in release_qp()\n");

    free_irq   (12 , ((void *)0) );

    // TRACER (atomic_dec(&( &__this_module )->uc.usecount), ( &__this_module )->flags |= 8 )  ;
  }
  // assert(lockStatus == 1);
  if (lockStatus != 1){ errorFn();}
  ////////////////////////////////////////////////////  
  unlock_kernel();
  ////////////////////////////////////////////////////  
  return 0;
}

static int open_qp(struct inode * inode, struct file * file)
{
  unsigned char status;
  int temp_1, temp_2;

  if (!qp_present)
    return - 22 ;
  
  if (qp_count){
    qp_count++;
    return 0;
  }
  else qp_count++;
            
  temp_1 = request_irq(12 , qp_interrupt, 0, "PS/2 Mouse", ((void *)0) );

  if (temp_1) {
    qp_count--;
    return - 16 ;
  }

  status = inb_p(qp_status);
  status = status | (0x80 | 0x08 );
  outb_p(status, qp_status);
  status = status & /* ~ */(0x08 );
  outb_p(status, qp_status);

  queue->head = 0;           
  queue->tail = 0;           

  status = status | 0x10 ;
  outb_p(status, qp_status);               

  temp_2 = poll_qp_status();
  // TRACER while (!temp_2) {
  if (!temp_2){
    printk   ("Error: Mouse device busy in open_qp()\n");
    qp_count--;
    status = status & /* ~ */(0x80 | 0x10 );
    outb_p(status, qp_status);
    free_irq(12 , ((void *)0) );
    return - 16 ;
  }
  
  outb_p(0xF4 , qp_data);	 
  // TRACER (atomic_inc(&( &__this_module )->uc.usecount), ( &__this_module )->flags |= 8 | 16 )  ;
  return 0;
}


ssize_t write_qp(struct file * file, char * buffer,
			size_t count, loff_t *ppos)
{
  ssize_t i;
  char c;
  int temp_1,temp_2;

  i = count;
  
  while (i) {
    temp_1= poll_qp_status();
    if (! temp_1)
      return - 5 ;

    /*  TRACER ({ int __ret_gu,__val_gu; switch(sizeof (*( buffer++ ))) { case
       1: __asm__ __volatile__("call __get_user_" "1" :"=a" ( __ret_gu
       ),"=d" ( __val_gu ) :"0" ( buffer++ )) ; break; case 2: __asm__
       __volatile__("call __get_user_" "2" :"=a" ( __ret_gu ),"=d" (
       __val_gu ) :"0" ( buffer++ )) ; break; case 4: __asm__
       __volatile__("call __get_user_" "4" :"=a" ( __ret_gu ),"=d" (
       __val_gu ) :"0" ( buffer++ )) ; break; default: __asm__
       __volatile__("call __get_user_" "X" :"=a" ( __ret_gu ),"=d" (
       __val_gu ) :"0" ( buffer++ )) ; break; } ( c ) = (__typeof__(*(
       buffer++ )))__val_gu; __ret_gu; }) ; */

    outb_p(c, qp_data);
    i--;
  }
  // TRACER file->f_dentry->d_inode->i_mtime = xtime.tv_sec ;
  return count;
}

unsigned int poll_qp(struct file *file, poll_table * wait)
{
  int temp_1;

  poll_wait(file, &queue->proc_list, wait);  
  temp_1 = queue_empty();
  if (!temp_1)
    return (0x0001  | 0x0040) ;
  return 0;
}

int poll_qp_status(void)
{
  int retries;
  int temp_1, temp_2;

  retries=0;
  temp_1 = inb(qp_status);

  while ((temp_1 & (0x02 | 0x04 | 0x01 )) != (0x01 | 0x04 ) && (retries < (60))){ 
    temp_2 = inb_p(qp_status);
    if (temp_2 & 0x02)
      inb_p(qp_data);
    //get_current() ->state = 1 ;
    schedule_timeout((5* 100  + 99) / 100);
    retries++;
    temp_1 = inb(qp_status);
  }
  if (!(retries== 60)) return 1; else return 0;
}

ssize_t read_qp(struct file * file, char * buffer, size_t count, loff_t *ppos)		
{
  struct wait_queue wait /* = { get_current() , ((void *)0)  } */;
  ssize_t i;
  unsigned char c;
  int temp_1, temp_2;
  
  i = count;
  temp_1 = queue_empty();

  if (temp_1) {
    if (file->f_flags & 04000 )
      return - 11 ;
    add_wait_queue(&queue->proc_list, &wait);
    //TRACER  repeat:
    //BLAST get_current() ->state = 1 ;
    temp_1 = queue_empty();
    temp_2 = signal_pending(get_current());

    if (temp_1 && ! temp_2) {
      schedule   ();
      //TRACER goto repeat;
    }
    //BLAST get_current() ->state = 0 ;
    remove_wait_queue(&queue->proc_list, &wait);
  }

  /*BLAST
    while (i > 0 && !queue_empty()) {
  */
  while(BLAST_NONDET) {
    c = get_from_queue();

/* TRACER ({ int __ret_pu; switch(sizeof (*( buffer++ ))) { case 1:
   __asm__ __volatile__("call __put_user_" "1" :"=a" ( __ret_pu ) :"0"
   ( buffer++ ),"d" ( (__typeof__(*( buffer++ )))( c ) ) :"cx") ;
   break; case 2: __asm__ __volatile__("call __put_user_" "2" :"=a" (
   __ret_pu ) :"0" ( buffer++ ),"d" ( (__typeof__(*( buffer++ )))( c )
   ) :"cx") ; break; case 4: __asm__ __volatile__("call __put_user_"
   "4" :"=a" ( __ret_pu ) :"0" ( buffer++ ),"d" ( (__typeof__(*(
   buffer++ )))( c ) ) :"cx") ; break; default: __asm__
   __volatile__("call __put_user_" "X" :"=a" ( __ret_pu ) :"0" (
   buffer++ ),"d" ( c ) :"cx") ; break; } __ret_pu; }) ; */

    i--;
  }

  if (count-i) {
    //file->f_dentry->d_inode->i_atime = xtime.tv_sec ;
    return count-i;
  }

  /*BLAST
    if (signal_pending(get_current() ))
    return - 512 ;
  */
  return 0;
}


/* struct file_operations qp_fops = { */
/* 	((void *)0) ,		  */
/* 	read_qp, */
/* 	write_qp, */
/* 	((void *)0) , 		  */
/* 	poll_qp, */
/* 	((void *)0) , 		  */
/* 	((void *)0) ,		  */
/* 	open_qp, */
/* 	((void *)0) ,		  */
/* 	release_qp, */
/* 	((void *)0) , */
/* 	fasync_qp, */
/* }; */


unsigned char read_710(unsigned char index)
{
  outb_p(index, 0x390);			 
  return inb_p(0x391);			 
}

int   probe_qp(void)
{
  outb_p(0x55, 0x2fa);			 
  outb_p(0xaa, 0x3fa);			 
  outb_p(0x36, 0x3fa);			 
  outb_p(0xe4, 0x3fa);			 
  outb_p(0x1b, 0x2fa);			 
  if (read_710(0x0f) != 0xe4)		 
    return 0;				 
  qp_data = read_710(0x0d)*4;		 
  qp_status = qp_data+1;
  outb_p(0x0f, 0x390);
  outb_p(0x0f, 0x391);			 
  return 1;
}

int   qpmouse_init(void)
{
  if (!probe_qp())
    return - 5 ;
  
  printk   ("<6>"  "82C710 type pointing device detected -- driver installed.\n");
  
  qp_present = 1;
  misc_register   (&qp_mouse);
  queue = (struct qp_queue *)  kmalloc   (sizeof(*queue), (0x04  | 0x01  | 0x10 ) );

  if(queue) memset(queue, 0, sizeof(*queue));

  /* BLAST
    (__builtin_constant_p(  0 ) ? (__builtin_constant_p( (  sizeof(*queue) ) ) ? __constant_c_and_count_memset(( ( queue ) ),( (0x01010101UL*(unsigned char)(  0 )) ),( (  sizeof(*queue) ) )) : __constant_c_memset(( ( queue ) ),( (0x01010101UL*(unsigned char)(  0 )) ),( (  sizeof(*queue) ) )))  : (__builtin_constant_p( (  sizeof(*queue) ) ) ? __memset_generic(( ( ( queue ) ) ),( ( (  0 ) ) ),( ( (  sizeof(*queue) ) ) ))  : __memset_generic(( ( queue ) ),( (  0 ) ),( (  sizeof(*queue) ) ))) ) ;
  */

  queue->head = queue->tail = 0;
  queue->proc_list = ((void *)0) ;

  return 0;
}

void TRACER_init_global_vars__(){
  qp_present = 0;
  qp_count = 0;
  qp_data = 0x310 ;
  qp_status = 0x311 ;
  return;
}

int main() {
  struct inode *inode;
  struct file *file;
  char *buffer;
  const char *wbuffer;
  int fd, on;
  size_t count;
  loff_t *ppos;
  poll_table *wait;
  struct file *filp;

  TRACER_init_global_vars__();
  lockStatus = 0;
  qpmouse_init();
  open_qp(inode, file);
  read_qp(file, buffer, count, ppos);	    
  write_qp(file, wbuffer,count, ppos);	   
  poll_qp(file, wait);
  fasync_qp(fd, filp, on);
  release_qp(inode, file);

  if (lockStatus==1) errorFn();
}
