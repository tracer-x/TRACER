// ----------------------------------
// GLOBAL STRUCTS
// ----------------------------------

typedef unsigned int size_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned char __u_char;
typedef unsigned short __u_short;
typedef unsigned long __u_long;
typedef unsigned long long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long __off_t;
typedef long long __off64_t;
typedef int __pid_t;
typedef unsigned long __rlim_t;
typedef long __time_t;
typedef long __suseconds_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef int __ssize_t;
typedef unsigned int __socklen_t;
typedef unsigned short sa_family_t;
typedef uint16_t in_port_t;
typedef uint32_t in_addr_t;

typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_long u_long;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __ssize_t ssize_t;
typedef __time_t time_t;
typedef int int32_t;

union __anonunion_yystype_47 {
  char *String ;
  int Number ;
};
typedef union __anonunion_yystype_47 yystype;

struct in_addr {
  in_addr_t s_addr ;
};

union yyalloc {
  short yyss ;
  yystype yyvs ;
};

struct timespec {
  __time_t tv_sec ;
  long tv_nsec ;
};

struct aclmember;
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
struct aclmember {
  struct aclmember *next ;
  char keyword[20] ;
  char *arg[50] ;
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

struct tab {
  char *name ;
  short token ;
  short state ;
  short implemented ;
  char *help ;
};

struct sockaddr {
  sa_family_t sa_family ;
  char sa_data[14] ;
};

struct sockaddr_in {
  sa_family_t sin_family ;
  in_port_t sin_port ;
  struct in_addr sin_addr ;
  unsigned char sin_zero[(int )(((sizeof(struct sockaddr ) - sizeof(unsigned short )) -
				 sizeof(in_port_t )) - sizeof(struct in_addr ))] ;
};

struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct __ccured_va_list;
typedef struct __ccured_va_list *__gnuc_va_list;
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

struct passwd {
  char *pw_name ;
  char *pw_passwd ;
  __uid_t pw_uid ;
  __gid_t pw_gid ;
  char *pw_gecos ;
  char *pw_dir ;
  char *pw_shell ;
};

struct __dirstream;
typedef struct __dirstream DIR;


// ----------------------------------
// GLOBAL VARIABLES
// ----------------------------------
// ----------------------------------
// EXTERN/STUB FUNCTIONS
// ----------------------------------
extern void syslog(void *a1,void *a2, ...);  // Added by Jorge
extern int inet_ntoa(struct in_addr cliaddr);            // Added by Jorge 
extern int __builtin_constant_p(int tmp);      // Added by Jorge 
extern void close(int f);                      // Added by Jorge 
extern int strncasecmp(char * cp, char * st, int x); // Added by Jorge 
extern int umask(int um) ;                     // Added by Jorge 
extern void help(struct tab *ctab , char *s ) ;
extern void *memset(void *__s , int __c , size_t __n );
extern void free(void *__ptr );
extern size_t strlen(char const   *__s );
extern int sprintf(char *  __s , char const   *  __format  , ...);
extern char *strcpy(char *  __dest , char const   *  __src );
extern int strcmp(char const   *__s1 , char const   *__s2 ) ;
extern void *malloc(size_t __size );
extern void *calloc(size_t __nmemb , size_t __size );
extern void user(char *name );
extern int yylex(void);
extern void pass(char *passwd );
extern int port_allowed(char *remoteaddr___0 );
extern void reply(int n , char *fmt  , ...);
extern void passive(void);
extern int restrict_check(char *name );
extern void retrieve(char *cmd , char *name );
extern void store(char *name , char *mode___0 , int unique );
extern void send_file_list(char *whichfiles );
extern int restrict_list_check(char *name );
extern void statfilecmd(char *filename );
extern void cwd(char *path );
extern void statcmd(void);
extern void renamecmd(char *from , char *to );
extern void help(struct tab *ctab , char *s );
extern void makedir(char *name );
extern int test_restriction(char *name );
extern void ack(char *s );
extern void nack(char *s );
extern void removedir(char *name );
extern void perror_reply(int code , char *string );
extern int type_match(char *typelist );
extern struct aclmember *getaclentry(char *keyword , struct aclmember **next );
extern char *wu_realpath(char const   *path , char *resolved_path , char *chroot_path___0 );
extern void site_exec(char *cmd );
extern void sizecmd(char *filename );
extern void priv_setup(char *path );
extern void priv_group(char *group );
extern void priv_gpass(char *gpass );
extern int stat__extinline(char const   *__path , struct stat *__statbuf );
extern char *renamefrom(char *name );
extern void dologout(int status );
extern void alias(char *s );
extern void print_groups(void);
extern void cdpath(void);
extern void SetCheckMethod(char const   *method );
extern void CheckSum(char *pathname );
extern char **ftpglob(char *v );
extern void CheckSumLastFile(void);
extern void ShowCheckMethod(void);
extern void blkfree(char **av0 );
extern void yyerror(char *s );
extern void delete(char *name );
extern void pwd(void);

// MAIN FUNCTION
int main(void) 
{ 
register int INF;
register unsigned short cliport  ;
register struct in_addr cliaddr  ;
register int cmd_type  ;
register int cmd_form  ;
register int cmd_bytesz  ;
register char *fromname  ;
struct tab cmdtab[48] ;
struct tab sitetab[16] ;
register char *nullstr  ;
char const   yytranslate[331]  ;
short const   yyr1[93]  ;
short const   yyr2[93]  ;
short const   yydefact[268]  ;
short const   yydefgoto[16]  ;
short const   yypact[268]  ;
short const   yypgoto[16]  ;
short const   yytable[257]  ;
short const   yycheck[257]  ;
register int yychar  ;
register yystype yylval  ;
register int yynerrs  ;
register struct convert *cvtptr ;
register int pidfd ;
register char *home ;
register char cbuf[512] ;
register off_t restart_point ;
register int yyerrorcalled ;
register struct sockaddr_in ctrl_addr  ;
register struct sockaddr_in data_source  ;
struct sockaddr_in data_dest  ;
register struct sockaddr_in his_addr  ;
register struct sockaddr_in pasv_addr  ;
register struct sockaddr_in vect_addr  ;
register int route_vectored  ;
register int passive_port_min  ;
register int passive_port_max  ;
register int restricted_user  ;
register int data  ;
register int logged_in  ;
register struct passwd *pw  ;
register char chroot_path[4096]  ;
register int debug  ;
register int disable_rfc931  ;
register unsigned int timeout_idle ;
register unsigned int timeout_maxidle ;
register unsigned int timeout_data ;
register unsigned int timeout_accept ;
register unsigned int timeout_connect ;
register int logging  ;
register int log_commands  ;
register int log_security  ;
register int syslogmsg  ;
register int wtmp_logging  ;
register int anonymous  ;
register int guest  ;
register int type  ;
register int form  ;
register int stru  ;
register int mode  ;
register int usedefault  ;
register int pdata  ;
register int transflag  ;
register int ftwflag  ;
register off_t file_size  ;
register off_t byte_count  ;
register int TCPwindowsize  ;
register int retrieve_is_data  ;
register char LastFileTransferred[4096]  ;
register char *RootDirectory  ;
register unsigned int defumask  ;
register char tmpline[7]  ;
register char hostname[64]  ;
register char remotehost[64]  ;
register char remoteaddr[64]  ;
register char *remoteident  ;
register int use_accessfile  ;
register char guestpw[64]  ;
register char privatepw[64]  ;
register int nameserved  ;
register char authuser[100] ;
register int authenticated ;
register int keepalive ;
register int xferlog  ;
register int log_outbound_xfers  ;
register int log_incoming_xfers  ;
register char logfile[4096]  ;
register int dolreplies  ;
register char *autospout  ;
register int autospout_free  ;
register int mangleopts  ;
register int lgi_failure_threshold  ;
register int swaitmax  ;
register int swaitint  ;
register char proctitle[8192]  ;
char ls_long[1024]  ;
char ls_short[1024]  ;
register char ls_plain[1024]  ;
register int Bypass_PID_Files  ;
register int use_pam  ;
register time_t login_time  ;
register long limit_time  ;
char *typenames[5]  ;
char *strunames[4]  ;
char *modenames[4]  ;
register char *globerr ;
// it was yyparse
register   int yystate ;
register   int yyn ;
register   int yyresult ;
register   int yyerrstatus ;
register   int yychar1 ;
short yyssa[200] ;
register   short *yyss ;
register   short *yyssp ;
yystype yyvsa[200] ;
register   yystype *yyvs ;
register   yystype *yyvsp ;
register   unsigned int yystacksize ;
register   yystype yyval ;
register   int yylen ;
register   unsigned int yysize ;
register   short *yyss1 ;
union yyalloc *yyptr ;
register   union yyalloc *tmp ;
register   unsigned int yynewbytes ;
register   unsigned int yynewbytes___0 ;
register   unsigned short v ;
register   unsigned short x ;
register   int tmp___0 ;
register   char *tmp___1 ;
register   char const   *tmp___2 ;
register   int tmp___3 ;
register   unsigned short v___0 ;
register   unsigned short x___0 ;
register   int tmp___4 ;
register   char *tmp___5 ;
register   int tmp___6 ;
register   char *tmp___7 ;
register   int tmp___8 ;
register   char *tmp___9 ;
register   int tmp___10 ;
register   int tmp___11 ;
register   int tmp___12 ;
register   int tmp___13 ;
register   char *tmp___14 ;
register   int tmp___15 ;
register   char *tmp___16 ;
register   int tmp___17 ;
register   char *tmp___18 ;
register   int tmp___19 ;
register   char *tmp___20 ;
register   int tmp___21 ;
register   int tmp___22 ;
register   char *tmp___23 ;
register   int tmp___24 ;
register   char *cp ;
register   int tmp___25 ;
register   char *tmp___26 ;
register   int tmp___27 ;
register   char *tmp___28 ;
register   int tmp___29 ;
register   int tmp___30 ;
register   mode_t oldmask ;
register   mode_t oldmask___0 ;
struct aclmember *entry ;
register   int ok ;
register   int tmp___31 ;
register   struct aclmember *tmp___32 ;
register   struct aclmember *entry___0 ;
register   int ok___0 ;
register   int tmp___33 ;
register   char *tmp___34 ;
register   int tmp___35 ;
register   struct aclmember *tmp___36 ;
register   char path[4096] ;
register   int tmp___37 ;
register   char *tmp___38 ;
register   char *tmp___39 ;
register   char buf___2[4096] ;
register   size_t tmp___40 ;
register   char *tmp___41 ;
register   int tmp___42 ;
register   char *tmp___43 ;
register   int tmp___44 ;
register   char *tmp___45 ;
register   struct stat stbuf ;
register   struct tm *t ;
register   int tmp___46 ;
register   int tmp___47 ;
register   char *tmp___48 ;
register   int tmp___49 ;
register   char *tmp___50 ;
register   char *tmp___51 ;
register   int tmp___52 ;
register   char *a ;
register   char *p ;
register   char **globlist ;
register   char *t___0 ;
register   size_t tmp___54 ;
register   char *tmp___55 ;
register   int *tmp___56 ;
register   int tmp___57 ;
register   int tmp___58 ;
register   int *tmp___59 ;
register   char **globlist___0 ;
register   int *tmp___60 ;
register   int tmp___61 ;
register   int tmp___62 ;
register   int ret ;
register   int dec ;
register   int multby ;
register   int digit___0 ;

  {
    yychar1 = 0;
    yyss = yyssa;
    yyvs = yyvsa;
    yystacksize = 200;
    yystate = 0;
    yyerrstatus = 0;
    yynerrs = 0;
    yychar = -2;
    yyssp = yyss;
    yyvsp = yyvs;
    //goto yysetstate;
    // yynewstate: 
    yyssp ++;
    // yysetstate: 
    (*yyssp) = (short )yystate;
    if ((unsigned int )yyssp >= (unsigned int )((yyss + yystacksize) - 1)) {
      yysize = (unsigned int )((yyssp - yyss) + 1);
      if (yystacksize >= 10000) {
	//goto yyoverflowlab;
      }
      yystacksize *= 2;
      if (yystacksize > 10000) {
	yystacksize = 10000;
      }
      yyss1 = yyss;
      tmp = (union yyalloc *)__builtin_alloca(yystacksize * (sizeof(short ) + sizeof(yystype )) +
					      (sizeof(union yyalloc ) - 1));
      yyptr = tmp;
      if (! yyptr) {
	//goto yyoverflowlab;
      }
      while (INF>0) {
	//while (1) {
	__builtin_memcpy(& yyptr->yyss, yyss, yysize * sizeof((*yyss)));
	yyss = & yyptr->yyss;
	yynewbytes = yystacksize * sizeof((*yyss)) + (sizeof(union yyalloc ) - 1);
	yyptr += yynewbytes / sizeof((*yyptr));
	break;
      }
      while (INF>0) {
	// while (1) {       
	__builtin_memcpy(& yyptr->yyvs, yyvs, yysize * sizeof((*yyvs)));
	yyvs = & yyptr->yyvs;
	yynewbytes___0 = yystacksize * sizeof((*yyvs)) + (sizeof(union yyalloc ) - 1);
	yyptr += yynewbytes___0 / sizeof((*yyptr));
	break;
      }
      if ((unsigned int )yyss1 != (unsigned int )(yyssa)) {
	while (INF>0) {
	  //while (1) {
	  break;
	}
      }
      yyssp = (yyss + yysize) - 1;
      yyvsp = (yyvs + yysize) - 1;
      if ((unsigned int )yyssp >= (unsigned int )((yyss + yystacksize) - 1)) {
	//goto yyabortlab;
      }
    }
    //goto yybackup;
    //yybackup: 
    yyn = (int )yypact[yystate];
    if (yyn == -32768) {
      //goto yydefault;
    }
    if (yychar == -2) {
      yychar = yylex();
    }
    if (yychar <= 0) {
      yychar1 = 0;
      yychar = 0;
    } else {
      if ((unsigned int )yychar <= 330) {
	yychar1 = (int )yytranslate[yychar];
      } else {
	yychar1 = 93;
      }
    }
    yyn += yychar1;
    if (yyn < 0) {
      //goto yydefault;
    } else {
      if (yyn > 256) {
	//goto yydefault;
      } else {
	if ((int const   )yycheck[yyn] != (int const   )yychar1) {
	  //goto yydefault;
	}
      }
    }
    yyn = (int )yytable[yyn];
    if (yyn < 0) {
      if (yyn == -32768) {
	//goto yyerrlab;
      }
      yyn = - yyn;
      //goto yyreduce;
    } else {
      if (yyn == 0) {
	//goto yyerrlab;
      }
    }
    if (yyn == 267) {
      //goto yyacceptlab;
    }
    if (yychar != 0) {
      yychar = -2;
    }
    yyvsp ++;
    (*yyvsp) = yylval;
    if (yyerrstatus) {
      yyerrstatus --;
    }
    yystate = yyn;
    //goto yynewstate;
    //yydefault: 
    yyn = (int )yydefact[yystate];
    if (yyn == 0) {
      //goto yyerrlab;
    }
    //goto yyreduce;
    // yyreduce: 
    yylen = (int )yyr2[yyn];
    yyval = (*(yyvsp + (1 - yylen)));
    switch (yyn) {
    case 2: 
      fromname = (char *)((void *)0);
      restart_point = 0;
      break;
    case 4: 
      user((yyvsp + -1)->String);
      if (log_commands) {
	syslog(6, "USER %s", (yyvsp + -1)->String);
      }
      free((void *)(yyvsp + -1)->String);
      break;
    case 5: ;
      if (log_commands) {
	if (anonymous) {
	  syslog(6, "PASS %s", (yyvsp + -1)->String);
	} else {
	  syslog(6, "PASS password");
	}
      }
      pass((yyvsp + -1)->String);
      free((void *)(yyvsp + -1)->String);
      break;
    case 6: ;
      if (log_commands) {
	syslog(6, "PORT");
      }
      if ((yyvsp + -3)->Number) {
	if (cliaddr.s_addr == his_addr.sin_addr.s_addr) {
	  //goto _L___0;
	} else {
	  tmp___2 = inet_ntoa(cliaddr);
	  tmp___3 = port_allowed(tmp___2);
	  if (tmp___3) {
	    //_L___0:  
	    x___0 = cliport;
	    tmp___4 = __builtin_constant_p((int )x___0);
	    if (tmp___4) {
	      v___0 = (unsigned short )((((int )x___0 >> 8) & 255) | (((int )x___0 &
									   255) << 8));
	    } else {
	      __asm__  ("rorw $8, %w0": "=r" (v___0): "0" (x___0): "cc");
	    }
	    if ((int )v___0 > 1023) {
	      usedefault = 0;
	      if (pdata >= 0) {
		close(pdata);
		pdata = -1;
	      }
	      data_dest.sin_family = 2;
	      data_dest.sin_addr = cliaddr;
	      data_dest.sin_port = cliport;
	      reply(200, (char *)"PORT command successful.");
	    } else {
	      //goto _L;
	    }
	  } else {
	    //_L:  
	    memset((void *)(& data_dest), 0, sizeof(data_dest));
	    x = cliport;
	    tmp___0 = __builtin_constant_p((int )x);
	    if (tmp___0) {
	      v = (unsigned short )((((int )x >> 8) & 255) | (((int )x & 255) <<
								  8));
	    } else {
	      __asm__  ("rorw $8, %w0": "=r" (v): "0" (x): "cc");
	    }
	    tmp___1 = inet_ntoa(cliaddr);
	    syslog(4, "refused PORT %s,%d from %s", tmp___1, v, remoteident);
	    reply(500, (char *)"Illegal PORT Command");
	  }
	}
      }
      break;
    case 7: ;
      if (log_commands) {
	syslog(6, "PASV");
      }
      if ((yyvsp + -1)->Number) {
	passive();
      }
      break;
    case 8: ;
      if (log_commands) {
	syslog(6, "TYPE %s", typenames[cmd_type]);
      }
      if ((yyvsp + -3)->Number) {
	switch (cmd_type) {
	case 1: ;
	  if (cmd_form == 1) {
	    reply(200, (char *)"Type set to A.");
	    type = cmd_type;
	    form = cmd_form;
	  } else {
	    reply(504, (char *)"Form must be N.");
	  }
	  break;
	case 2: 
	  reply(504, (char *)"Type E not implemented.");
	  break;
	case 3: 
	  reply(200, (char *)"Type set to I.");
	  type = cmd_type;
	  break;
	case 4: ;
	  if (cmd_bytesz == 8) {
	    reply(200, (char *)"Type set to L (byte size 8).");
	    type = cmd_type;
	  } else {
	    reply(504, (char *)"Byte size must be 8.");
	  }
	}
      }
      break;
    case 9: ;
      if (log_commands) {
	syslog(6, "STRU %s", strunames[(yyvsp + -1)->Number]);
      }
      if ((yyvsp + -3)->Number) {
	switch ((yyvsp + -1)->Number) {
	case 1: 
	  reply(200, (char *)"STRU F ok.");
	  break;
	default: 
	  reply(504, (char *)"Unimplemented STRU type.");
	}
      }
      break;
    case 10: ;
      if (log_commands) {
	syslog(6, "MODE %s", modenames[(yyvsp + -1)->Number]);
      }
      if ((yyvsp + -3)->Number) {
	switch ((yyvsp + -1)->Number) {
	case 1: 
	  reply(200, (char *)"MODE S ok.");
	  break;
	default: 
	  reply(502, (char *)"Unimplemented MODE type.");
	}
      }
      break;
    case 11: ;
      if (log_commands) {
	syslog(6, "ALLO %d", (yyvsp + -1)->Number);
      }
      if ((yyvsp + -3)->Number) {
	reply(202, (char *)"ALLO command ignored.");
      }
      break;
    case 12: ;
      if (log_commands) {
	syslog(6, "ALLO %d R %d", (yyvsp + -5)->Number, (yyvsp + -1)->Number);
      }
      if ((yyvsp + -7)->Number) {
	reply(202, (char *)"ALLO command ignored.");
      }
      break;
    case 13: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___5 = (yyvsp + -1)->String;
	} else {
	  tmp___5 = nullstr;
	}
	syslog(6, "RETR %s", tmp___5);
      }
      if ((yyvsp + -3)->Number) {
	if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	  tmp___6 = restrict_check((yyvsp + -1)->String);
	  if (! tmp___6) {
	    retrieve_is_data = 1;
	    retrieve((char *)((void *)0), (yyvsp + -1)->String);
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 14: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___7 = (yyvsp + -1)->String;
	} else {
	  tmp___7 = nullstr;
	}
	syslog(6, "STOR %s", tmp___7);
      }
      if ((yyvsp + -3)->Number) {
	if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	  tmp___8 = restrict_check((yyvsp + -1)->String);
	  if (! tmp___8) {
	    store((yyvsp + -1)->String, (char *)"w", 0);
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 15: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___9 = (yyvsp + -1)->String;
	} else {
	  tmp___9 = nullstr;
	}
	syslog(6, "APPE %s", tmp___9);
      }
      if ((yyvsp + -3)->Number) {
	if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	  tmp___10 = restrict_check((yyvsp + -1)->String);
	  if (! tmp___10) {
	    store((yyvsp + -1)->String, (char *)"a", 0);
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 16: ;
      if (log_commands) {
	syslog(6, "NLST");
      }
      if ((yyvsp + -1)->Number) {
	tmp___11 = restrict_check((char *)".");
	if (! tmp___11) {
	  send_file_list((char *)"");
	}
      }
      break;
    case 17: ;
      if (log_commands) {
	syslog(6, "NLST %s", (yyvsp + -1)->String);
      }
      if ((yyvsp + -3)->Number) {
	if ((yyvsp + -1)->String) {
	  tmp___12 = restrict_check((yyvsp + -1)->String);
	  if (! tmp___12) {
	    send_file_list((yyvsp + -1)->String);
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 18: ;
      if (log_commands) {
	syslog(6, "LIST");
      }
      if ((yyvsp + -1)->Number) {
	tmp___13 = restrict_check((char *)".");
	if (! tmp___13) {
	  retrieve_is_data = 0;
	  if (anonymous) {
	    if (dolreplies) {
	      retrieve(ls_long, (char *)"");
	    } else {
	      retrieve(ls_short, (char *)"");
	    }
	  } else {
	    retrieve(ls_short, (char *)"");
	  }
	}
      }
      break;
    case 19: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___14 = (yyvsp + -1)->String;
	} else {
	  tmp___14 = nullstr;
	}
	syslog(6, "LIST %s", tmp___14);
      }
      if ((yyvsp + -3)->Number) {
	if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	  tmp___15 = restrict_list_check((yyvsp + -1)->String);
	  if (! tmp___15) {
	    retrieve_is_data = 0;
	    if (anonymous) {
	      if (dolreplies) {
		retrieve(ls_long, (yyvsp + -1)->String);
	      } else {
		retrieve(ls_short, (yyvsp + -1)->String);
	      }
	    } else {
	      retrieve(ls_short, (yyvsp + -1)->String);
	    }
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 20: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___16 = (yyvsp + -1)->String;
	} else {
	  tmp___16 = nullstr;
	}
	syslog(6, "STAT %s", tmp___16);
      }
      if ((yyvsp + -3)->Number) {
	if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	  tmp___17 = restrict_check((yyvsp + -1)->String);
	  if (! tmp___17) {
	    statfilecmd((yyvsp + -1)->String);
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 21: ;
      if (log_commands) {
	syslog(6, "STAT");
      }
      if ((yyvsp + -1)->Number) {
	statcmd();
      }
      break;
    case 22: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___18 = (yyvsp + -1)->String;
	} else {
	  tmp___18 = nullstr;
	}
	syslog(6, "DELE %s", tmp___18);
      }
      if ((yyvsp + -3)->Number) {
	if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	  tmp___19 = restrict_check((yyvsp + -1)->String);
	  if (! tmp___19) {
	    delete((yyvsp + -1)->String);
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 23: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___20 = (yyvsp + -1)->String;
	} else {
	  tmp___20 = nullstr;
	}
	syslog(6, "RNTO %s", tmp___20);
      }
      if ((yyvsp + -3)->Number) {
	if ((yyvsp + -1)->String) {
	  tmp___21 = restrict_check((yyvsp + -1)->String);
	  if (! tmp___21) {
	    if (fromname) {
	      renamecmd(fromname, (yyvsp + -1)->String);
	      free((void *)fromname);
	      fromname = (char *)((void *)0);
	    } else {
	      reply(503, (char *)"Bad sequence of commands.");
	    }
	  }
	}
      }
      if ((yyvsp + -1)->String) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 24: ;
      if (log_commands) {
	syslog(6, "ABOR");
      }
      if ((yyvsp + -1)->Number) {
	reply(225, (char *)"ABOR command successful.");
      }
      break;
    case 25: ;
      if (log_commands) {
	syslog(6, "CWD");
      }
      if ((yyvsp + -1)->Number) {
	tmp___22 = restrict_check(home);
	if (! tmp___22) {
	  cwd(home);
	}
      }
      break;
    case 26: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___23 = (yyvsp + -1)->String;
	} else {
	  tmp___23 = nullstr;
	}
	syslog(6, "CWD %s", tmp___23);
      }
      if ((yyvsp + -3)->Number) {
	if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	  tmp___24 = restrict_check((yyvsp + -1)->String);
	  if (! tmp___24) {
	    cwd((yyvsp + -1)->String);
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 27: ;
      if (log_commands) {
	syslog(6, "HELP");
      }
      if ((yyvsp + -1)->Number) {
	help(cmdtab, (char *)((void *)0));
      }
      break;
    case 28: 
      cp = (yyvsp + -1)->String;
      if (log_commands) {
	syslog(6, "HELP %s", (yyvsp + -1)->String);
      }
      if ((yyvsp + -3)->Number) {
	tmp___25 = strncasecmp((char const   *)cp, "SITE", 4);
	if (tmp___25 == 0) {
	  cp = (yyvsp + -1)->String + 4;
	  if ((int )(*cp) == 32) {
	    cp ++;
	  }
	  if ((*cp)) {
	    help(sitetab, cp);
	  } else {
	    help(sitetab, (char *)((void *)0));
	  }
	} else {
	  help(cmdtab, (yyvsp + -1)->String);
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 29: ;
      if (log_commands) {
	syslog(6, "NOOP");
      }
      if ((yyvsp + -1)->Number) {
	reply(200, (char *)"NOOP command successful.");
      }
      break;
    case 30: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___26 = (yyvsp + -1)->String;
	} else {
	  tmp___26 = nullstr;
	}
	syslog(6, "MKD %s", tmp___26);
      }
      if ((yyvsp + -3)->Number) {
	if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	  tmp___27 = restrict_check((yyvsp + -1)->String);
	  if (! tmp___27) {
	    makedir((yyvsp + -1)->String);
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 31: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___28 = (yyvsp + -1)->String;
	} else {
	  tmp___28 = nullstr;
	}
	syslog(6, "RMD %s", tmp___28);
      }
      if ((yyvsp + -3)->Number) {
	if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	  tmp___29 = restrict_check((yyvsp + -1)->String);
	  if (! tmp___29) {
	    removedir((yyvsp + -1)->String);
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 32: ;
      if (log_commands) {
	syslog(6, "PWD");
      }
      if ((yyvsp + -1)->Number) {
	pwd();
      }
      break;
    case 33: ;
      if (log_commands) {
	syslog(6, "CDUP");
      }
      if ((yyvsp + -1)->Number) {
	tmp___30 = test_restriction((char *)"..");
	if (tmp___30) {
	  ack((char *)"CWD");
	} else {
	  cwd((char *)"..");
	}
      }
      break;
    case 34: ;
      if (log_commands) {
	syslog(6, "SITE HELP");
      }
      if ((yyvsp + -3)->Number) {
	help(sitetab, (char *)((void *)0));
      }
      break;
    case 35: ;
      if (log_commands) {
	syslog(6, "SITE HELP %s", (yyvsp + -1)->String);
      }
      if ((yyvsp + -5)->Number) {
	help(sitetab, (yyvsp + -1)->String);
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 36: ;
      if (log_commands) {
	syslog(6, "SITE UMASK");
      }
      if ((yyvsp + -3)->Number) {
	oldmask = umask(0);
	umask(oldmask);
	reply(200, (char *)"Current UMASK is %03o", oldmask);
      }
      break;
    case 37: 
      entry = (struct aclmember *)((void *)0);
      ok = 1;
      if (log_commands) {
	syslog(6, "SITE UMASK %03o", (yyvsp + -1)->Number);
      }
      if ((yyvsp + -5)->Number) {
	while (INF>0) {
	  //while (1) {
	  tmp___32 = getaclentry((char *)"umask", & entry);
	  if (tmp___32) {
	    if (entry->arg[0]) {
	      if (! ((unsigned int )entry->arg[1] != (unsigned int )((void *)0))) {
		break;
	      }
	    } else {
	      break;
	    }
	  } else {
	    break;
	  }
	  tmp___31 = type_match(entry->arg[1]);
	  if (tmp___31) {
	    if ((int )(*(entry->arg[0])) == 110) {
	      ok = 0;
	    }
	  }
	}
	if (ok) {
	  if (! restricted_user) {
	    if ((yyvsp + -1)->Number < 0) {
	      reply(501, (char *)"Bad UMASK value");
	    } else {
	      if ((yyvsp + -1)->Number > 511) {
		reply(501, (char *)"Bad UMASK value");
	      } else {
		oldmask___0 = umask((unsigned int )(yyvsp + -1)->Number);
		reply(200, (char *)"UMASK set to %03o (was %03o)", (yyvsp + -1)->Number,
		      oldmask___0);
	      }
	    }
	  } else {
	    reply(553, (char *)"Permission denied on server. (umask)");
	  }
	} else {
	  reply(553, (char *)"Permission denied on server. (umask)");
	}
      }
      break;
/* We start here !!
    case 38: 
      entry___0 = (struct aclmember *)((void *)0);
      if (anonymous) {
	tmp___33 = 0;
      } else {
	tmp___33 = 1;
      }
      ok___0 = tmp___33;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___34 = (yyvsp + -1)->String;
	} else {
	  tmp___34 = nullstr;
	}
	syslog(6, "SITE CHMOD %03o %s", (yyvsp + -3)->Number, tmp___34);
      }
      if ((yyvsp + -7)->Number) {
	if ((yyvsp + -1)->String) {
	while (INF>0) {
	//  while (1) {
	    tmp___36 = getaclentry((char *)"chmod", & entry___0);
	    if (tmp___36) {
	      if (entry___0->arg[0]) {
		if (! ((unsigned int )entry___0->arg[1] != (unsigned int )((void *)0))) {
		  break;
		}
	      } else {
		break;
	      }
	    } else {
	      break;
	    }
	    tmp___35 = type_match(entry___0->arg[1]);
	    if (tmp___35) {
	      if (anonymous) {
		if ((int )(*(entry___0->arg[0])) == 121) {
		  ok___0 = 1;
		}
	      } else {
		if ((int )(*(entry___0->arg[0])) == 110) {
		  ok___0 = 0;
		}
	      }
	    }
	  }
	  if (ok___0) {
	    if ((yyvsp + -3)->Number < 0) {
	      reply(501, (char *)"CHMOD: Mode value must be between 0 and 0777");
	    } else {
	      if ((yyvsp + -3)->Number > 511) {
		reply(501, (char *)"CHMOD: Mode value must be between 0 and 0777");
	      } else {
		tmp___37 = chmod((char const   *)(yyvsp + -1)->String, (unsigned int )(yyvsp +
										       -3)->Number);
		if (tmp___37 < 0) {
		  perror_reply(550, (yyvsp + -1)->String);
		} else {
		  wu_realpath((char const   *)(yyvsp + -1)->String, path, chroot_path);
		  if (log_security) {
		    if (anonymous) {
		      syslog(5, "%s of %s changed permissions for %s", guestpw, remoteident,
			     path);
		    } else {
		      syslog(5, "%s of %s changed permissions for %s", pw->pw_name, remoteident,
			     path);
		    }
		  }
		  reply(200, (char *)"CHMOD command successful.");
		}
	      }
	    }
	  } else {
	    reply(553, (char *)"Permission denied on server. (chmod)");
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 39: ;
      if (log_commands) {
	syslog(6, "SITE IDLE");
      }
      if ((yyvsp + -3)->Number) {
	reply(200, (char *)"Current IDLE time limit is %d seconds; max %d", timeout_idle,
	      timeout_maxidle);
      }
      break;
    case 40: ;
      if (log_commands) {
	syslog(6, "SITE IDLE %d", (yyvsp + -1)->Number);
      }
      if ((yyvsp + -5)->Number) {
	if ((yyvsp + -1)->Number < 30) {
	  reply(501, (char *)"Maximum IDLE time must be between 30 and %d seconds", timeout_maxidle);
	} else {
	  if ((unsigned int )(yyvsp + -1)->Number > timeout_maxidle) {
	    reply(501, (char *)"Maximum IDLE time must be between 30 and %d seconds",
		  timeout_maxidle);
	  } else {
	    timeout_idle = (unsigned int )(yyvsp + -1)->Number;
	    reply(200, (char *)"Maximum IDLE time set to %d seconds", timeout_idle);
	  }
	}
      }
      break;
    case 41: ;
      if (log_commands) {
	syslog(6, "SITE GROUP %s", (yyvsp + -1)->String);
      }
      if (! restricted_user) {
	if ((yyvsp + -5)->Number) {
	  if ((yyvsp + -1)->String) {
	    priv_group((yyvsp + -1)->String);
	  }
	}
      }
      free((void *)(yyvsp + -1)->String);
      break;
    case 42: ;
      if (log_commands) {
	syslog(6, "SITE GPASS password");
      }
      if (! restricted_user) {
	if ((yyvsp + -5)->Number) {
	  if ((yyvsp + -1)->String) {
	    priv_gpass((yyvsp + -1)->String);
	  }
	}
      }
      free((void *)(yyvsp + -1)->String);
      break;
    case 43: ;
      if (log_commands) {
	syslog(6, "SITE GPASS");
      }
      if (! restricted_user) {
	if ((yyvsp + -3)->Number) {
	  priv_gpass((char *)((void *)0));
	}
      }
      break;
    case 44: ;
      if (log_commands) {
	syslog(6, "SITE NEWER %s", (yyvsp + -1)->String);
      }
      reply(500, (char *)"Command no longer honored by this server");
      free((void *)(yyvsp + -1)->String);
      break;
    case 45: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___38 = (yyvsp + -1)->String;
	} else {
	  tmp___38 = nullstr;
	}
	syslog(6, "SITE NEWER %s %s", (yyvsp + -3)->String, tmp___38);
      }
      reply(500, (char *)"Command no longer honored by this server");
      free((void *)(yyvsp + -3)->String);
      if ((yyvsp + -1)->String) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 46: ;
      if (log_commands) {
	syslog(6, "SITE MINFO %s", (yyvsp + -1)->String);
      }
      reply(500, (char *)"Command no longer honored by this server");
      free((void *)(yyvsp + -1)->String);
      break;
    case 47: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___39 = (yyvsp + -1)->String;
	} else {
	  tmp___39 = nullstr;
	}
	syslog(6, "SITE MINFO %s %s", (yyvsp + -3)->String, tmp___39);
      }
      reply(500, (char *)"Command no longer honored by this server");
      free((void *)(yyvsp + -3)->String);
      if ((yyvsp + -1)->String) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 48: ;
      if (! restricted_user) {
	if ((yyvsp + -5)->Number != 0) {
	  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	    tmp___40 = strlen((char const   *)(yyvsp + -1)->String);
	    if (tmp___40 + 7 <= sizeof(buf___2)) {
	      sprintf((char *)(buf___2), (char const   *)"index %s",
		      (yyvsp + -1)->String);
	      site_exec(buf___2);
	    }
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 49: ;
      if (! restricted_user) {
	if ((yyvsp + -5)->Number != 0) {
	  if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	    site_exec((yyvsp + -1)->String);
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 50: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___41 = (yyvsp + -1)->String;
	} else {
	  tmp___41 = nullstr;
	}
	syslog(6, "STOU %s", tmp___41);
      }
      if ((yyvsp + -3)->Number) {
	if ((yyvsp + -1)->String) {
	  tmp___42 = restrict_check((yyvsp + -1)->String);
	  if (! tmp___42) {
	    store((yyvsp + -1)->String, (char *)"w", 1);
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 51: ;
      if (log_commands) {
	syslog(6, "SYST");
      }
      if ((yyvsp + -1)->Number) {
	reply(215, (char *)"UNIX Type: L%d", 8);
      }
      break;
    case 52: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___43 = (yyvsp + -1)->String;
	} else {
	  tmp___43 = nullstr;
	}
	syslog(6, "SIZE %s", tmp___43);
      }
      if ((yyvsp + -3)->Number) {
	if ((yyvsp + -1)->String) {
	  tmp___44 = restrict_check((yyvsp + -1)->String);
	  if (! tmp___44) {
	    sizecmd((yyvsp + -1)->String);
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 53: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___45 = (yyvsp + -1)->String;
	} else {
	  tmp___45 = nullstr;
	}
	syslog(6, "MDTM %s", tmp___45);
      }
      if ((yyvsp + -3)->Number) {
	if ((yyvsp + -1)->String) {
	  tmp___47 = restrict_check((yyvsp + -1)->String);
	  if (! tmp___47) {
	    tmp___46 = stat__extinline((char const   *)(yyvsp + -1)->String, & stbuf);
	    if (tmp___46 < 0) {
	      perror_reply(550, (yyvsp + -1)->String);
	    } else {
	      if ((stbuf.st_mode & 61440) != 32768) {
		reply(550, (char *)"%s: not a plain file.", (yyvsp + -1)->String);
	      } else {
		t = gmtime((time_t const   *)(& stbuf.st_mtim.tv_sec));
		reply(213, (char *)"%04d%02d%02d%02d%02d%02d", t->tm_year + 1900, t->tm_mon +
		      1, t->tm_mday,
		      t->tm_hour, t->tm_min, t->tm_sec);
	      }
	    }
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 54: ;
      if (log_commands) {
	syslog(6, "QUIT");
      }
      reply(221, (char *)"Goodbye.");
      dologout(0);
      break;
    case 55: 
      yyerrstatus = 0;
      break;
    case 56: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___48 = (yyvsp + -1)->String;
	} else {
	  tmp___48 = nullstr;
	}
	syslog(6, "RNFR %s", tmp___48);
      }
      if ((yyvsp + -3)->Number) {
	restart_point = 0;
      }
      if ((yyvsp + -3)->Number) {
	if ((yyvsp + -1)->String) {
	  tmp___49 = restrict_check((yyvsp + -1)->String);
	  if (! tmp___49) {
	    fromname = renamefrom((yyvsp + -1)->String);
	  }
	}
      }
      if ((unsigned int )fromname == (unsigned int )((char *)0)) {
	if ((yyvsp + -1)->String) {
	  free((void *)(yyvsp + -1)->String);
	}
      }
      break;
    case 57: ;
      if (log_commands) {
	syslog(6, "REST %d", (int )restart_point);
      }
      if ((yyvsp + -3)->Number) {
	fromname = (char *)0;
	restart_point = (long )(yyvsp + -1)->Number;
	reply(350, (char *)"Restarting at %ld. %s", restart_point, "Send STORE or RETRIEVE to initiate transfer.");
      }
      break;
    case 58: ;
      if (log_commands) {
	syslog(6, "SITE ALIAS");
      }
      if ((yyvsp + -3)->Number) {
	alias((char *)((void *)0));
      }
      break;
    case 59: ;
      if (log_commands) {
	syslog(6, "SITE ALIAS %s", (yyvsp + -1)->String);
      }
      if ((yyvsp + -5)->Number) {
	alias((yyvsp + -1)->String);
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 60: ;
      if (log_commands) {
	syslog(6, "SITE GROUPS");
      }
      if ((yyvsp + -3)->Number) {
	print_groups();
      }
      break;
    case 61: ;
      if (log_commands) {
	syslog(6, "SITE CDPATH");
      }
      if ((yyvsp + -3)->Number) {
	cdpath();
      }
      break;
    case 62: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___50 = (yyvsp + -1)->String;
	} else {
	  tmp___50 = nullstr;
	}
	syslog(6, "SITE CHECKMETHOD %s", tmp___50);
      }
      if ((yyvsp + -5)->Number) {
	if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	  SetCheckMethod((char const   *)(yyvsp + -1)->String);
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;
    case 63: ;
      if (log_commands) {
	syslog(6, "SITE CHECKMETHOD");
      }
      if ((yyvsp + -3)->Number) {
	ShowCheckMethod();
      }
      break;
    case 64: ;
      if (log_commands) {
	if ((yyvsp + -1)->String) {
	  tmp___51 = (yyvsp + -1)->String;
	} else {
	  tmp___51 = nullstr;
	}
	syslog(6, "SITE CHECKSUM %s", tmp___51);
      }
      if ((yyvsp + -5)->Number) {
	if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	  tmp___52 = restrict_check((yyvsp + -1)->String);
	  if (! tmp___52) {
	    CheckSum((yyvsp + -1)->String);
	  }
	}
      }
      if ((unsigned int )(yyvsp + -1)->String != (unsigned int )((void *)0)) {
	free((void *)(yyvsp + -1)->String);
      }
      break;

    case 65: ;
      if (log_commands) {
	syslog(6, "SITE CHECKSUM");
      }
      if ((yyvsp + -3)->Number) {
	CheckSumLastFile();
      }
      break;
    case 67: 
      yyval.String = (char *)malloc(1);
      (*(yyval.String + 0)) = (char )'\000';
      break;

    case 70: 
      a = (char *)(& cliaddr);
      (*(a + 0)) = (char )(yyvsp + -10)->Number;
      (*(a + 1)) = (char )(yyvsp + -8)->Number;
      (*(a + 2)) = (char )(yyvsp + -6)->Number;
      (*(a + 3)) = (char )(yyvsp + -4)->Number;
      p = (char *)(& cliport);
      (*(p + 0)) = (char )(yyvsp + -2)->Number;
      (*(p + 1)) = (char )(yyvsp + 0)->Number;
      break;
    case 71: 
      yyval.Number = 1;
      break;
    case 72: 
      yyval.Number = 2;
      break;
    case 73: 
      yyval.Number = 3;
      break;
    case 74: 
      cmd_type = 1;
      cmd_form = 1;
      break;
    case 75: 
      cmd_type = 1;
      cmd_form = (yyvsp + 0)->Number;
      break;
    case 76: 
      cmd_type = 2;
      cmd_form = 1;
      break;
    case 77: 
      cmd_type = 2;
      cmd_form = (yyvsp + 0)->Number;
      break;
    case 78: 
      cmd_type = 3;
      break;
    case 79: 
      cmd_type = 4;
      cmd_bytesz = 8;
      break;
    case 80: 
      cmd_type = 4;
      cmd_bytesz = (yyvsp + 0)->Number;
      break;
    case 81: 
      cmd_type = 4;
      cmd_bytesz = (yyvsp + 0)->Number;
      break;
    case 82: 
      yyval.Number = 1;
      break;
    case 83: 
      yyval.Number = 2;
      break;
    case 84: 
      yyval.Number = 3;
      break;
    case 85: 
      yyval.Number = 1;
      break;
    case 86: 
      yyval.Number = 2;
      break;
    case 87: 
      yyval.Number = 3;
      break;
    case 88: ;
      if (restricted_user) {
	if (logged_in) {
	  if ((yyvsp + 0)->String) {
	    tmp___62 = strncmp((char const   *)(yyvsp + 0)->String, "/", 1);
	    if (tmp___62 == 0) {
	      tmp___54 = strlen((char const   *)(yyvsp + 0)->String);
	      tmp___55 = (char *)calloc((1 + tmp___54) + 1, sizeof(char ));
	      t___0 = tmp___55;
	      if ((unsigned int )t___0 == (unsigned int )((void *)0)) {
		tmp___56 = __errno_location();
		(*tmp___56) = 11;
		perror_reply(550, (yyvsp + 0)->String);
		yyval.String = (char *)((void *)0);
	      } else {
		(*(t___0 + 0)) = (char )'~';
		(*(t___0 + 1)) = (char )'\000';
		tmp___58 = strncmp((char const   *)(yyvsp + 0)->String, "/../", 4);
		if (tmp___58 == 0) {
		  strcpy((char *)(t___0 + 1), (char const   *)((yyvsp +
								0)->String +
							       3));
		} else {
		  tmp___57 = strcmp((char const   *)(yyvsp + 0)->String, "/..");
		  if (tmp___57 != 0) {
		    strcpy((char *)(t___0 + 1), (char const   *)(yyvsp +
								 0)->String);
		  }
		}
		globlist = ftpglob(t___0);
		if (globerr) {
		  reply(550, (char *)"%s", globerr);
		  yyval.String = (char *)((void *)0);
		  if (globlist) {
		    blkfree(globlist);
		    free((void *)((char *)globlist));
		  }
		} else {
		  if (globlist) {
		    if ((*globlist)) {
		      yyval.String = (*globlist);
		      blkfree(globlist + 1);
		      free((void *)((char *)globlist));
		    } else {
		      //goto _L___1;
		    }
		  } else {
		    //_L___1:  
		    if (globlist) {
		      blkfree(globlist);
		      free((void *)((char *)globlist));
		    }
		    tmp___59 = __errno_location();
		    (*tmp___59) = 2;
		    perror_reply(550, (yyvsp + 0)->String);
		    yyval.String = (char *)((void *)0);
		  }
		}
		free((void *)t___0);
	      }
	      free((void *)(yyvsp + 0)->String);
	    } else {
	      //goto _L___5;
	    }
	  } else {
	    //goto _L___5;
	  }
	} else {
	  //goto _L___5;
	}
      } else {
	//_L___5:  
	if (logged_in) {
	  if ((yyvsp + 0)->String) {
	    tmp___61 = strncmp((char const   *)(yyvsp + 0)->String, "~", 1);
	    if (tmp___61 == 0) {
	      globlist___0 = ftpglob((yyvsp + 0)->String);
	      if (globerr) {
		reply(550, (char *)"%s", globerr);
		yyval.String = (char *)((void *)0);
		if (globlist___0) {
		  blkfree(globlist___0);
		  free((void *)((char *)globlist___0));
		}
	      } else {
		if (globlist___0) {
		  if ((*globlist___0)) {
		    yyval.String = (*globlist___0);
		    blkfree(globlist___0 + 1);
		    free((void *)((char *)globlist___0));
		  } else {
		    //goto _L___2;
		  }
		} else {
		  //_L___2:  
		  if (globlist___0) {
		    blkfree(globlist___0);
		    free((void *)((char *)globlist___0));
		  }
		  tmp___60 = __errno_location();
		  (*tmp___60) = 2;
		  perror_reply(550, (yyvsp + 0)->String);
		  yyval.String = (char *)((void *)0);
		}
	      }
	      free((void *)(yyvsp + 0)->String);
	    } else {
	      yyval.String = (yyvsp + 0)->String;
	    }
	  } else {
	    yyval.String = (yyvsp + 0)->String;
	  }
	} else {
	  yyval.String = (yyvsp + 0)->String;
	}
      }
      break;
    case 91: 
      dec = (yyvsp + 0)->Number;
      multby = 1;
      ret = 0;
      while (dec) {
	digit___0 = dec % 10;
	if (digit___0 > 7) {
	  ret = -1;
	  break;
	}
	ret += digit___0 * multby;
	multby *= 8;
	dec /= 10;
      }
      yyval.Number = ret;
      break; 
*/
    case 92: ;
      if (logged_in) {
	yyval.Number = 1;
      } else {
	if (log_commands) {
	  syslog(6, "cmd failure - not logged in");
	}
	reply(530, (char *)"Please login with USER and PASS.");
	yyval.Number = 0;
	yyerrorcalled = 1;
      }
      break;
    }
    yyvsp -= yylen;
    yyssp -= yylen;
    yyvsp ++;
    (*yyvsp) = yyval;
    yyn = (int )yyr1[yyn];
    yystate = (int )((int const   )yypgoto[yyn - 77] + (int const   )(*yyssp));
    if (yystate >= 0) {
      if (yystate <= 256) {
	if ((int const   )yycheck[yystate] == (int const   )(*yyssp)) {
	  yystate = (int )yytable[yystate];
	} else {
	  yystate = (int )yydefgoto[yyn - 77];
	}
      } else {
	yystate = (int )yydefgoto[yyn - 77];
      }
    } else {
      yystate = (int )yydefgoto[yyn - 77];
    }
    //goto yynewstate;
    //  yyerrlab: 
    if (! yyerrstatus) {
      yynerrs ++;
      yyerror((char *)"parse error");
    }
    //goto yyerrlab1;
    //  yyerrlab1: 
    if (yyerrstatus == 3) {
      if (yychar == 0) {
	//goto yyabortlab;
      }
      yychar = -2;
    }
    yyerrstatus = 3;
    //goto yyerrhandle;
    //  yyerrdefault: 
    if ((unsigned int )yyssp == (unsigned int )yyss) {
      //goto yyabortlab;
    }
    yyvsp --;
    yyssp --;
    yystate = (int )(*yyssp);
    //  yyerrhandle: 
    yyn = (int )yypact[yystate];
    if (yyn == -32768) {
      //goto yyerrdefault;
    }
    yyn ++;
    if (yyn < 0) {
      //goto yyerrdefault;
    } else {
      if (yyn > 256) {
	//goto yyerrdefault;
      } else {
	if ((int const   )yycheck[yyn] != 1) {
	  //goto yyerrdefault;
	}
      }
    }
    yyn = (int )yytable[yyn];
    if (yyn < 0) {
      if (yyn == -32768) {
	//goto yyerrdefault;
      }
      yyn = - yyn;
      //goto yyreduce;
    } else {
      if (yyn == 0) {
	//goto yyerrdefault;
      }
    }
    if (yyn == 267) {
      //goto yyacceptlab;
    }
    yyvsp ++;
    (*yyvsp) = yylval;
    yystate = yyn;
    //goto yynewstate;
    //yyacceptlab: 
    yyresult = 0;
    //goto yyreturn;
    //yyabortlab: 
    yyresult = 1;
    //goto yyreturn;
    ///yyoverflowlab: 
    yyerror((char *)"parser stack overflow");
    yyresult = 2;
    //  yyreturn: 
    if ((unsigned int )yyss != (unsigned int )(yyssa)) {
      while (INF>0) {
      //      while (1) {
	break;
      }
    }  
    return (yyresult);
    _SLICE(yystate,yyval);
  }
}

//////////////////////////////////////////////////////////////////////////////////
// Pointer analysis ... 
// Switches on: [one-level-flow, field-insensitive]
//////////////////////////////////////////////////////////////////////////////////

/*  points-to-set([t->tm_mday, t->tm_min, t->tm_sec, t->tm_hour, t->tm_mon, t->tm_year]) */
/*  points-to-set([&(yyptr->yyvs), &(yyptr[(yynewbytes / size(union(yyalloc)))]), &(yyptr->yyss), &(yyptr[(yynewbytes___0 / size(union(yyalloc)))]), yyptr]) */
/*  points-to-set([&(stbuf.st_mode), &(stbuf.st_mtim), &(stbuf.st_mtim.tv_sec), &(stbuf)]) */
/*  points-to-set([((unsigned int)&(yyssa)), &(yyssa)]) */
/*  points-to-set([entry->arg, &(entry->arg)[1], ((unsigned int)&(entry->arg)[1])]) */
/*  points-to-set([&(yyval.String), &(yyval.Number), &(yyval)]) */
/*  points-to-set([((int)x___0), x___0]) */
/*  points-to-set([&(globlist___0[1]), globlist___0]) */
/*  points-to-set([p[1], *p, cliport]) */
/*  points-to-set([&(&(strunames)[yyvsp[-1].Number]), (((int)&(yypgoto)[(yyn - 77)]) + ((int)*yyssp)), ((int)(((int)&(yypgoto)[(yyn - 77)]) + ((int)*yyssp))), &(yyr1)[yyn], ((int)&(yyr1)[yyn]), &(yypact)[yystate], ((int)&(yypact)[yystate]), ((int)*cp), *cp, &(yycheck)[yyn], ((int)&(yycheck)[yyn]), yyvsp[-10].Number, ((char)yyvsp[-10].Number), yyvsp[-3].Number, ((unsigned int)yyvsp[-3].Number), yyvsp[-4].Number, ((char)yyvsp[-4].Number), yyvsp[-1].Number, ((unsigned int)yyvsp[-1].Number), yyvsp->Number, ((char)yyvsp->Number), yyvsp[-2].Number, ((char)yyvsp[-2].Number), yyvsp[-7].Number, yyvsp[-8].Number, ((char)yyvsp[-8].Number), yyvsp[-5].Number, yyvsp[-6].Number, ((char)yyvsp[-6].Number), ((int)&(yyr2)[yyn]), &(yyr2)[yyn], &(yycheck)[yystate], ((int)&(yycheck)[yystate]), yyvsp[(1 - yylen)], *yyssp, ((int)*yyssp), *yyvsp, &(yytable)[yyn], ((int)&(yytable)[yyn]), &(modenames)[yyvsp[-1].Number], &(yydefgoto)[(yyn - 77)], ((int)&(yydefgoto)[(yyn - 77)]), *yyval.String, &(&(modenames)[yyvsp[-1].Number]), &(yypgoto)[(yyn - 77)], ((int)&(yypgoto)[(yyn - 77)]), &(yytable)[yystate], ((int)&(yytable)[yystate]), &(strunames)[yyvsp[-1].Number], ((int)&(yydefact)[yystate]), &(yydefact)[yystate], yyvsp[-3].String, ((unsigned int)yyvsp[-1].String), yyvsp[-1].String, yyvsp->String, &(yyvsp->String[3]), &(yyvsp[-1].String[4]), &(strunames), &(modenames)]) */
/*  points-to-set([cliaddr.s_addr, cliaddr, *a, a[3], a[2], a[1]]) */
/*  points-to-set([cp, &(cp[1])]) */
/*  points-to-set([t___0[1], *t___0]) */
/*  points-to-set([&(entry___0->arg), &(&(entry___0->arg)[1]), entry___0]) */
/*  points-to-set([yyss1, ((unsigned int)yyss1)]) */
/*  points-to-set([&(p[1]), p]) */
/*  points-to-set([t___0, ((unsigned int)t___0), &(t___0[1])]) */
/*  points-to-set([&(cliaddr.s_addr), &(cliaddr)]) */
/*  points-to-set([&(a[3]), &(a[1]), &(a[2]), a]) */
/*  points-to-set([&(his_addr.sin_addr), &(his_addr.sin_addr.s_addr), &(his_addr)]) */
/*  points-to-set([&(&(typenames)[cmd_type]), &(typenames)]) */
/*  points-to-set([&(data_dest.sin_addr), &(data_dest.sin_port), &(data_dest.sin_family), &(data_dest.sin_addr.s_addr), &(data_dest)]) */
/*  points-to-set([fromname, ((unsigned int)fromname)]) */
/*  points-to-set([data_dest.sin_port, data_dest.sin_addr.s_addr, data_dest.sin_family]) */
/*  points-to-set([&(entry___0->arg)[1], ((unsigned int)&(entry___0->arg)[1]), entry___0->arg]) */
/*  points-to-set([((ptr(char))&(buf___2)), &(buf___2)]) */
/*  points-to-set([&(pw->pw_name), pw]) */
/*  points-to-set([(&(yyvs[yysize]) - 1), &(yyvs[yysize]), &((yyssp - yyss)[1]), ((unsigned int)&((yyssp - yyss)[1])), (yyssp - yyss), &(yyvsp[1]), &(yyvsp[-2]), &(yyvsp[-1]), yyvsp, (yyvsp - 1), &(yyvsp[-8]), &(yyvsp[-7]), &(yyvsp[-10]), &(yyvsp[-4]), &(yyvsp[-3]), &(yyvsp[-6]), &(yyvsp[-5]), yyvs, yylen, (1 - yylen), (&(yyss[yysize]) - 1), &(yyss[yysize]), (yyssp - 1), &(yyssp[1]), ((unsigned int)yyssp), yyssp, yyss, ((unsigned int)yyss), ((unsigned int)(&(yyss[yystacksize]) - 1)), (&(yyss[yystacksize]) - 1), &(yyss[yystacksize]), &(yyvsp[-1].String), &(yyvsp->String), &(yyvsp[-3].String), &(yyvsp[(1 - yylen)]), (yyvsp - yylen), &(yyvsp[-10].Number), &(yyvsp[-3].Number), &(yyvsp[-4].Number), &(yyvsp[-1].Number), &(yyvsp->Number), &(yyvsp[-2].Number), &(yyvsp[-7].Number), &(yyvsp[-8].Number), &(yyvsp[-5].Number), &(yyvsp[-6].Number), yysize, (yyssp - yylen)]) */
/*  points-to-set([entry, &(entry->arg), &(&(entry->arg)[1])]) */
/*  points-to-set([restart_point, ((int)restart_point)]) */
/*  points-to-set([((int)x), x]) */
/*  points-to-set([globlist, &(globlist[1])]) */
/*  points-to-set([yyval.Number, yyval, yyval.String]) */
/*  points-to-set([&(t->tm_min), &(t->tm_hour), &(t->tm_year), t, &(t->tm_mday), &(t->tm_sec), &(t->tm_mon)]) */
/*  points-to-set([&(&(yytranslate)[yychar]), &(yytranslate)]) */
/*  points-to-set([(yyn + yychar1), &(&(yycheck)[yystate]), ((short)yystate), yystate, &(&(yydefgoto)[(yyn - 77)]), &(&(yypgoto)[(yyn - 77)]), &(&(yycheck)[yyn]), &(&(yydefact)[yystate]), &(&(yytable)[yystate]), &(&(yyr2)[yyn]), &(&(yyr1)[yyn]), &(&(yypact)[yystate]), (yyn - 77), (yyn + 1), yyn, &(&(yytable)[yyn]), &(yyr1), &(yydefact), &(yypact), &(yypgoto), &(yycheck), &(yyr2), &(yytable), &(yydefgoto)]) */
