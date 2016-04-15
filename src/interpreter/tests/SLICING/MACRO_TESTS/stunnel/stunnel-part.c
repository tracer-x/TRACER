typedef unsigned int u32;
typedef unsigned short __u_short;
typedef __u_short u_short;
struct __anonstruct_option_68 {
   unsigned int delayed_lookup : 1 ;
   unsigned int accept : 1 ;
   unsigned int remote : 1 ;
   unsigned int program : 1 ;
   unsigned int pty : 1 ;
   unsigned int transparent : 1 ;
};
struct local_options {
   struct local_options *next ;
   char local_address[16] ;
   char *servname ;
   int fd ;
   unsigned short localport ;
   unsigned short remoteport ;
   char *execname ;
   char **execargs ;
   u32 *localnames ;
   u32 *remotenames ;
   u32 *local_ip ;
   char *username ;
   char *remote_address ;
   int timeout_busy ;
   int timeout_idle ;
   int timeout_close ;
   char *protocol ;
   struct __anonstruct_option_68 option ;
};
typedef struct local_options LOCAL_OPTIONS;

enum __anonenum_CMD_74 {
   CMD_INIT = 0, 
   CMD_EXEC = 1, 
   CMD_DEFAULT = 2, 
   CMD_HELP = 3,  };
typedef enum __anonenum_CMD_74 CMD;

struct __anonstruct_option_67 {
   unsigned int cert : 1 ;
   unsigned int client : 1 ;
   unsigned int foreground : 1 ;
   unsigned int syslog : 1 ;
   unsigned int rand_write : 1 ;
};
struct __anonstruct_GLOBAL_OPTIONS_66 {
   char *ca_dir ;
   char *ca_file ;
   char *crl_dir ;
   char *crl_file ;
   char *cipher_list ;
   char *cert ;
   char *egd_sock ;
   char *key ;
   char *rand_file ;
   int random_bytes ;
   long session_timeout ;
   int verify_level ;
   int verify_use_only_my ;
   long ssl_options ;
   char *chroot_dir ;
   unsigned long dpid ;
   char *pidfile ;
   char *setuid_user ;
   char *setgid_group ;
   int debug_level ;
   int facility ;
   char *output_file ;
   struct __anonstruct_option_67 option ;
};
typedef struct __anonstruct_GLOBAL_OPTIONS_66 GLOBAL_OPTIONS;

static char *option_not_found   ;

/////////////////////////////////////////////////////////////////////////////
// EXTERNAL FUNCTIONS
/////////////////////////////////////////////////////////////////////////////
extern int parse_socket_option(char *arg );
extern int atoi(char const   *__nptr );
extern int parse_ssl_option(char *arg );
extern int parse_debug_level(char *arg );
extern char *stralloc(char *str );
extern int strcasecmp(char const   *__s1 , char const   *__s2 );
extern int strcmp(char * a1, char * a2);
extern void log_raw(char const   *format  , ...);
// Note that the semantics of exit is totally different from system
// call exit
extern void myexit(int __status);
extern int name2nums(char *name , char *default_host , u32 **names , u_short *port );
extern char **argalloc(char *str );
extern int host2nums(char *hostname , u32 **hostlist );
/////////////////////////////////////////////////////////////////////////////

GLOBAL_OPTIONS options;
LOCAL_OPTIONS local_options;

static char *global_options(CMD cmd, char *opt, char *arg )
{ int tmp ;
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
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;

  {
  if (cmd == 2) {
    {
    log_raw((char const   *)"Global options");
    }
  } else {
    if (cmd == 3) {
      {
      log_raw((char const   *)"Global options");
      }
    }
  }
  switch (cmd) {
  case 0: 
  {
  options.ca_dir = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp = strcasecmp((char const   *)opt, (char const   *)"CApath");
  }
  if (tmp) {
    break;
  }
  if ((*(arg + 0))) {
    {
    options.ca_dir = stralloc(arg);
    }
  } else {
    {
    options.ca_dir = (char *)((void *)0);
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = CA certificate directory for \'verify\' option",
          "CApath");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.ca_file = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___0 = strcasecmp((char const   *)opt, (char const   *)"CAfile");
  }
  if (tmp___0) {
    break;
  }
  if ((*(arg + 0))) {
    {
    options.ca_file = stralloc(arg);
    }
  } else {
    {
    options.ca_file = (char *)((void *)0);
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = CA certificate file for \'verify\' option",
          "CAfile");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.cert = "/usr/local/etc/stunnel/stunnel.pem";
  }
  break;
  case 1: 
  {
  tmp___1 = strcasecmp((char const   *)opt, (char const   *)"cert");
  }
  if (tmp___1) {
    break;
  }
  {
  options.cert = stralloc(arg);
  options.option.cert = 1;
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %s", "cert", options.cert);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = certificate chain", "cert");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.chroot_dir = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___2 = strcasecmp((char const   *)opt, (char const   *)"chroot");
  }
  if (tmp___2) {
    break;
  }
  {
  options.chroot_dir = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = directory to chroot stunnel process",
          "chroot");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.cipher_list = "ALL:!ADH:+RC4:@STRENGTH";
  }
  break;
  case 1: 
  {
  tmp___3 = strcasecmp((char const   *)opt, (char const   *)"ciphers");
  }
  if (tmp___3) {
    break;
  }
  {
  options.cipher_list = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %s", "ciphers", "ALL:!ADH:+RC4:@STRENGTH");
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = list of permitted SSL ciphers", "ciphers");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.option.client = 0;
  }
  break;
  case 1: 
  {
  tmp___4 = strcasecmp((char const   *)opt, (char const   *)"client");
  }
  if (tmp___4) {
    break;
  }
  {
  tmp___6 = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp___6) {
    {
    tmp___5 = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp___5) {
      return ("argument should be either \'yes\' or \'no\'");
    } else {
      {
      options.option.client = 0;
      }
    }
  } else {
    {
    options.option.client = 1;
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = yes|no client mode (remote service uses SSL)",
          "client");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.crl_dir = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___7 = strcasecmp((char const   *)opt, (char const   *)"CRLpath");
  }
  if (tmp___7) {
    break;
  }
  if ((*(arg + 0))) {
    {
    options.crl_dir = stralloc(arg);
    }
  } else {
    {
    options.crl_dir = (char *)((void *)0);
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = CRL directory", "CRLpath");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.crl_file = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___8 = strcasecmp((char const   *)opt, (char const   *)"CRLfile");
  }
  if (tmp___8) {
    break;
  }
  if ((*(arg + 0))) {
    {
    options.crl_file = stralloc(arg);
    }
  } else {
    {
    options.crl_file = (char *)((void *)0);
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = CRL file", "CRLfile");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.debug_level = 5;
  options.facility = 24;
  }
  break;
  case 1: 
  {
  tmp___9 = strcasecmp((char const   *)opt, (char const   *)"debug");
  }
  if (tmp___9) {
    break;
  }
  {
  tmp___10 = parse_debug_level(arg);
  }
  if (! tmp___10) {
    return ("Illegal debug argument");
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %d", "debug", options.debug_level);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = [facility].level (e.g. daemon.info)", "debug");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.egd_sock = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___11 = strcasecmp((char const   *)opt, (char const   *)"EGD");
  }
  if (tmp___11) {
    break;
  }
  {
  options.egd_sock = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = path to Entropy Gathering Daemon socket",
          "EGD");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.option.syslog = 0;
  options.option.foreground = 0;
  }
  break;
  case 1: 
  {
  tmp___12 = strcasecmp((char const   *)opt, (char const   *)"foreground");
  }
  if (tmp___12) {
    break;
  }
  {
  tmp___14 = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp___14) {
    {
    tmp___13 = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp___13) {
      return ("argument should be either \'yes\' or \'no\'");
    } else {
      {
      options.option.foreground = 0;
      }
    }
  } else {
    {
    options.option.foreground = 1;
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = yes|no foreground mode (don\'t fork, log to stderr)",
          "foreground");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.key = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___15 = strcasecmp((char const   *)opt, (char const   *)"key");
  }
  if (tmp___15) {
    break;
  }
  {
  options.key = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %s", "key", options.cert);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = certificate private key", "key");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.ssl_options = 0;
  }
  break;
  case 1: 
  {
  tmp___16 = strcasecmp((char const   *)opt, (char const   *)"options");
  }
  if (tmp___16) {
    break;
  }
  {
  tmp___17 = parse_ssl_option(arg);
  }
  if (! tmp___17) {
    return ("Illegal SSL option");
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = SSL option", "options");
  log_raw((char const   *)"%18sset an SSL option", "");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.output_file = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___18 = strcasecmp((char const   *)opt, (char const   *)"output");
  }
  if (tmp___18) {
    break;
  }
  {
  options.output_file = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = file to append log messages", "output");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.pidfile = "/usr/local/var/run/stunnel.pid";
  }
  break;
  case 1: 
  {
  tmp___19 = strcasecmp((char const   *)opt, (char const   *)"pid");
  }
  if (tmp___19) {
    break;
  }
  if ((*(arg + 0))) {
    {
    options.pidfile = stralloc(arg);
    }
  } else {
    {
    options.pidfile = (char *)((void *)0);
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %s", "pid", "/usr/local/var/run/stunnel.pid");
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = pid file (empty to disable creating)", "pid");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.random_bytes = 64;
  }
  break;
  case 1: 
  {
  tmp___20 = strcasecmp((char const   *)opt, (char const   *)"RNDbytes");
  }
  if (tmp___20) {
    break;
  }
  {
  options.random_bytes = atoi((char const   *)arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %d", "RNDbytes", 64);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = bytes to read from random seed files",
          "RNDbytes");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.rand_file = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___21 = strcasecmp((char const   *)opt, (char const   *)"RNDfile");
  }
  if (tmp___21) {
    break;
  }
  {
  options.rand_file = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %s", "RNDfile", "/dev/urandom");
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = path to file with random seed data",
          "RNDfile");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.option.rand_write = 1;
  }
  break;
  case 1: 
  {
  tmp___22 = strcasecmp((char const   *)opt, (char const   *)"RNDoverwrite");
  }
  if (tmp___22) {
    break;
  }
  {
  tmp___24 = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp___24) {
    {
    tmp___23 = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp___23) {
      return ("argument should be either \'yes\' or \'no\'");
    } else {
      {
      options.option.rand_write = 0;
      }
    }
  } else {
    {
    options.option.rand_write = 1;
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = yes", "RNDoverwrite");
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = yes|no overwrite seed datafiles with new random data",
          "RNDoverwrite");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  local_options.servname = stralloc("stunnel");
  }
  break;
  case 1: 
  {
  tmp___25 = strcasecmp((char const   *)opt, (char const   *)"service");
  }
  if (tmp___25) {
    break;
  }
  {
  local_options.servname = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = service name", "service");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.session_timeout = 300;
  }
  break;
  case 1: 
  {
  tmp___26 = strcasecmp((char const   *)opt, (char const   *)"session");
  }
  if (tmp___26) {
    break;
  }
  {
  tmp___27 = atoi((char const   *)arg);
  }
  if (tmp___27 > 0) {
    {
    options.session_timeout = (long )atoi((char const   *)arg);
    }
  } else {
    return ("Illegal session timeout");
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %ld seconds", "session",
          options.session_timeout);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = session cache timeout (in seconds)",
          "session");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.setgid_group = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___28 = strcasecmp((char const   *)opt, (char const   *)"setgid");
  }
  if (tmp___28) {
    break;
  }
  {
  options.setgid_group = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = groupname for setgid()", "setgid");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.setuid_user = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___29 = strcasecmp((char const   *)opt, (char const   *)"setuid");
  }
  if (tmp___29) {
    break;
  }
  {
  options.setuid_user = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = username for setuid()", "setuid");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {

  }
  break;
  case 1: 
  {
  tmp___30 = strcasecmp((char const   *)opt, (char const   *)"socket");
  }
  if (tmp___30) {
    break;
  }
  {
  tmp___31 = parse_socket_option(arg);
  }
  if (! tmp___31) {
    return ("Illegal socket option");
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = a|l|r:option=value[:value]", "socket");
  log_raw((char const   *)"%18sset an option on accept/local/remote socket", "");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  options.verify_level = -1;
  options.verify_use_only_my = 0;
  }
  break;
  case 1: 
  {
  tmp___32 = strcasecmp((char const   *)opt, (char const   *)"verify");
  }
  if (tmp___32) {
    break;
  }
  {
  options.verify_level = 0;
  tmp___33 = atoi((char const   *)arg);
  }
  switch (tmp___33) {
  case 3: 
  {
  options.verify_use_only_my = 1;
  }
  case 2: 
  {
  options.verify_level = options.verify_level | 2;
  }
  case 1: 
  {
  options.verify_level = options.verify_level | 1;
  }
  case 0: 
  {

  }
  return ((char *)((void *)0));
  default: 
  {

  }
  return ("Bad verify level");
  }
  case 2: 
  {
  log_raw((char const   *)"%-15s = none", "verify");
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = level of peer certificate verification",
          "verify");
  log_raw((char const   *)"%18slevel 1 - verify peer certificate if present", "");
  log_raw((char const   *)"%18slevel 2 - require valid peer certificate always",
          "");
  log_raw((char const   *)"%18slevel 3 - verify peer with locally installed certificate",
          "");
  }
  break;
  }
  if (cmd == 1) {
    return (option_not_found);
  }
  return ((char *)((void *)0));
}
}

static char *service_options(CMD cmd , LOCAL_OPTIONS *section , char *opt ,
                             char *arg ) 
{ int tmp ;
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
  int tmp___24 ;

  {
  if (cmd == 2) {
    {
    log_raw((char const   *)" ");
    log_raw((char const   *)"Service-level options");
    }
  } else {
    if (cmd == 3) {
      {
      log_raw((char const   *)" ");
      log_raw((char const   *)"Service-level options");
      }
    }
  }
  switch (cmd) {
  case 0: 
  {
  section->option.accept = 0;
  }
  break;
  case 1: 
  {
  tmp = strcasecmp((char const   *)opt, (char const   *)"accept");
  }
  if (tmp) {
    break;
  }
  {
  section->option.accept = 1;
  tmp___0 = name2nums(arg, "0.0.0.0", & section->localnames,
                      & section->localport);
  }
  if (! tmp___0) {
    {
      myexit(2);
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = [host:]port accept connections on specified host:port",
          "accept");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->option.remote = 0;
  section->remote_address = (char *)((void *)0);
  section->remotenames = (u32 *)((void *)0);
  section->remoteport = (unsigned short )0;
  }
  break;
  case 1: 
  {
  tmp___1 = strcasecmp((char const   *)opt, (char const   *)"connect");
  }
  if (tmp___1) {
    break;
  }
  {
  section->option.remote = 1;
  section->remote_address = stralloc(arg);
  }
  if (! section->option.delayed_lookup) {
    {
    tmp___2 = name2nums(arg, "127.0.0.1", & section->remotenames,
                        & section->remoteport);
    }
    if (! tmp___2) {
      {
      log_raw((char const   *)"Cannot resolve \'%s\' - delaying DNS lookup", arg);
      section->option.delayed_lookup = 1;
      }
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = [host:]port connect remote host:port",
          "connect");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->option.delayed_lookup = 0;
  }
  break;
  case 1: 
  {
  tmp___3 = strcasecmp((char const   *)opt, (char const   *)"delay");
  }
  if (tmp___3) {
    break;
  }
  {
  tmp___5 = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp___5) {
    {
    tmp___4 = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp___4) {
      return ("argument should be either \'yes\' or \'no\'");
    } else {
      {
      section->option.delayed_lookup = 0;
      }
    }
  } else {
    {
    section->option.delayed_lookup = 1;
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = yes|no delay DNS lookup for \'connect\' option",
          "delay");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->option.program = 0;
  section->execname = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___6 = strcasecmp((char const   *)opt, (char const   *)"exec");
  }
  if (tmp___6) {
    break;
  }
  {
  section->option.program = 1;
  section->execname = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = file execute local inetd-type program",
          "exec");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->execargs = (char **)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___7 = strcasecmp((char const   *)opt, (char const   *)"execargs");
  }
  if (tmp___7) {
    break;
  }
  {
  section->execargs = argalloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = arguments for \'exec\' (including $0)",
          "execargs");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->username = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___8 = strcasecmp((char const   *)opt, (char const   *)"ident");
  }
  if (tmp___8) {
    break;
  }
  {
  section->username = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = username for IDENT (RFC 1413) checking",
          "ident");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->local_ip = (u32 *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___9 = strcasecmp((char const   *)opt, (char const   *)"local");
  }
  if (tmp___9) {
    break;
  }
  {
  tmp___10 = host2nums(arg, & section->local_ip);
  }
  if (! tmp___10) {
    {
     myexit(2);
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = IP address to be used as source for remote connections",
          "local");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->protocol = (char *)((void *)0);
  }
  break;
  case 1: 
  {
  tmp___11 = strcasecmp((char const   *)opt, (char const   *)"protocol");
  }
  if (tmp___11) {
    break;
  }
  {
  section->protocol = stralloc(arg);
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = protocol to negotiate before SSL initialization",
          "protocol");
  log_raw((char const   *)"%18scurrently supported: cifs, nntp, pop3, smtp", "");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->option.pty = 0;
  }
  break;
  case 1: 
  {
  tmp___12 = strcasecmp((char const   *)opt, (char const   *)"pty");
  }
  if (tmp___12) {
    break;
  }
  {
  tmp___14 = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp___14) {
    {
    tmp___13 = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp___13) {
      return ("argument should be either \'yes\' or \'no\'");
    } else {
      {
      section->option.pty = 0;
      }
    }
  } else {
    {
    section->option.pty = 1;
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = yes|no allocate pseudo terminal for \'exec\' option",
          "pty");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->timeout_busy = 300;
  }
  break;
  case 1: 
  {
  tmp___15 = strcasecmp((char const   *)opt, (char const   *)"TIMEOUTbusy");
  }
  if (tmp___15) {
    break;
  }
  {
  tmp___16 = atoi((char const   *)arg);
  }
  if (tmp___16 > 0) {
    {
    section->timeout_busy = atoi((char const   *)arg);
    }
  } else {
    return ("Illegal busy timeout");
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %d seconds", "TIMEOUTbusy",
          section->timeout_busy);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = seconds to wait for expected data",
          "TIMEOUTbusy");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->timeout_close = 60;
  }
  break;
  case 1: 
  {
  tmp___17 = strcasecmp((char const   *)opt, (char const   *)"TIMEOUTclose");
  }
  if (tmp___17) {
    break;
  }
  {
  tmp___18 = atoi((char const   *)arg);
  }
  if (tmp___18 > 0) {
    {
    section->timeout_close = atoi((char const   *)arg);
    }
  } else {
    {
    tmp___19 = strcmp((char const   *)arg, (char const   *)"0");
    }
    if (tmp___19) {
      return ("Illegal close timeout");
    } else {
      {
      section->timeout_close = atoi((char const   *)arg);
      }
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %d seconds", "TIMEOUTclose",
          section->timeout_close);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = seconds to wait for close_notify (set to 0 for buggy MSIE)",
          "TIMEOUTclose");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->timeout_idle = 43200;
  }
  break;
  case 1: 
  {
  tmp___20 = strcasecmp((char const   *)opt, (char const   *)"TIMEOUTidle");
  }
  if (tmp___20) {
    break;
  }
  {
  tmp___21 = atoi((char const   *)arg);
  }
  if (tmp___21 > 0) {
    {
    section->timeout_idle = atoi((char const   *)arg);
    }
  } else {
    return ("Illegal idle timeout");
  }
  return ((char *)((void *)0));
  case 2: 
  {
  log_raw((char const   *)"%-15s = %d seconds", "TIMEOUTidle",
          section->timeout_idle);
  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = seconds to keep idle connection",
          "TIMEOUTidle");
  }
  break;
  }
  switch (cmd) {
  case 0: 
  {
  section->option.transparent = 0;
  }
  break;
  case 1: 
  {
  tmp___22 = strcasecmp((char const   *)opt, (char const   *)"transparent");
  }
  if (tmp___22) {
    break;
  }
  {
  tmp___24 = strcasecmp((char const   *)arg, (char const   *)"yes");
  }
  if (tmp___24) {
    {
    tmp___23 = strcasecmp((char const   *)arg, (char const   *)"no");
    }
    if (tmp___23) {
      return ("argument should be either \'yes\' or \'no\'");
    } else {
      {
      section->option.transparent = 0;
      }
    }
  } else {
    {
    section->option.transparent = 1;
    }
  }
  return ((char *)((void *)0));
  case 2: 
  {

  }
  break;
  case 3: 
  {
  log_raw((char const   *)"%-15s = yes|no transparent proxy mode", "transparent");
  }
  break;
  }
  if (cmd == 1) {
    return (option_not_found);
  }
  return ((char *)((void *)0));
}
}

int main() 
{
  CMD cmd1; char *opt; char *arg;
  CMD cmd2;
  LOCAL_OPTIONS *section;
  
   global_options(cmd1, opt, arg);
   service_options(cmd2, section, opt,arg);
   return 0;
  _SLICE(options);
}

////////////////////////////////////////////////////////////////////////////////////////////
// Pointer analysis ... 
// Switches on: [one-level-flow, field-insensitive]
////////////////////////////////////////////////////////////////////////////////////////////

/*  points-to-set([&(options.cert), &(options.option.syslog), &(options.ssl_options), &(options.ca_dir), &(options.output_file), &(options.setgid_group), &(options.option.client), &(options.pidfile), &(options.verify_use_only_my), &(options.egd_sock), &(options.option.rand_write), &(options.facility), &(options.setuid_user), &(options.random_bytes), &(options.crl_dir), &(options.crl_file), &(options.key), &(options.cipher_list), &(options.ca_file), &(options.option), &(options.chroot_dir), &(options.session_timeout), &(options.option.foreground), &(options.rand_file), &(options.debug_level), &(options.option.cert), &(options.verify_level), &(options)]) */

/*  points-to-set([section->option.remote, section->remoteport, section->timeout_close, section->option.transparent, section->execargs, section->execname, section->option.program, section->timeout_busy, section->option.pty, section->remote_address, section->local_ip, section->username, section->timeout_idle, section->remotenames, section->protocol, section->option.accept, section->option.delayed_lookup]) */

/*  points-to-set([&(local_options.servname), &(local_options)]) */

/*  points-to-set([&(section->remotenames), &(section->execname), &(section->option), &(section->local_ip), &(section->option.accept), &(section->option.program), &(section->localnames), &(section->timeout_close), &(section->execargs), &(section->option.remote), &(section->localport), &(section->remote_address), &(section->username), &(section->timeout_busy), &(section->option.delayed_lookup), section, &(section->protocol), &(section->timeout_idle), &(section->remoteport), &(section->option.pty), &(section->option.transparent)]) */

/*  points-to-set([options.session_timeout, options.option.rand_write, options.chroot_dir, options.ca_file, options.option.syslog, options.debug_level, options.key, options.cipher_list, options.verify_level, options.option.foreground, options.output_file, options.ca_dir, options.pidfile, options.crl_file, options.facility, options.rand_file, options.setuid_user, options.option.cert, options.cert, options.crl_dir, options.egd_sock, options.verify_use_only_my, options.option.client, options.setgid_group, options.random_bytes, options.ssl_options]) */


