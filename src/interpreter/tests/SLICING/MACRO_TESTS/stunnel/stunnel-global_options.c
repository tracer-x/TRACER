#define SKIP (x=x);

int x;

int star_arg;
int option_not_found;
int options_ca_dir;
int options_ca_file;
int options_option_cert;
int options_chroot_dir;
int options_option_client;
int options_crl_dir;
int options_crl_file;
int options_debug_level;
int options_facility;
int options_egd_sock;
int options_option_syslock;
int options_option_foreground;
int options_key;
int options_ssl_options;
int options_output_file;
int options_pidfile;
int options_random_bytes;
int options_rand_file;
int options_option_rand_write;
int options_session_timeout;
int options_setgid_group;
int options_setuid_user;
int options_verify_level;
int options_verify_use_only_my;


int global_options(int cmd, int opt, int arg )
{ 
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
	SKIP;
      }
    } else {
      if (cmd == 3) {
	{
	  SKIP;
	}
      }
    }
    switch (cmd) {
    case 0: 
      {
	options_ca_dir = 0;
      }
      break;
    case 1: 
      {
	SKIP;
      }
      if (tmp) {
	break;
      }
      if ((*(arg + 0))) {
	{
	  // options_ca_dir = stralloc(arg);
	  SKIP;
	}
      } else {
	{
	  options_ca_dir = 0;
	}
      }
      return 0;
    case 2: 
      {

      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_ca_file = 0;
      }
      break;
    case 1: 
      {
	// tmp___0 = strcasecmp((char const   *)opt, (char const   *)"CAfile");
	SKIP;
      }
      if (tmp___0) {
	break;
      }
      if (star_arg) {
	{
	  // options_ca_file = stralloc(arg);
	  SKIP;
	}
      } else {
	{
	  options_ca_file = 0;
	}
      }
      return 0;
    case 2: 
      {

      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	// options_cert = "/usr/local/etc/stunnel/stunnel.pem";
	SKIP;
      }
      break;
    case 1: 
      {
	// tmp___1 = strcasecmp((char const   *)opt, (char const   *)"cert");
	SKIP;
      }
      if (tmp___1) {
	break;
      }
      {
	// options_cert = stralloc(arg);
	SKIP;
	options_option_cert = 1;
      }
      return 0;
    case 2: 
      {
	SKIP;
      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_chroot_dir = 0;
      }
      break;
    case 1: 
      {
	// tmp___2 = strcasecmp((char const   *)opt, (char const   *)"chroot");
	SKIP;
      }
      if (tmp___2) {
	break;
      }
      {
	// options_chroot_dir = stralloc(arg);
	SKIP;
      }
      return 0;
    case 2: 
      {

      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	//	options_cipher_list = "ALL:!ADH:+RC4:@STRENGTH";
	SKIP;
      }
      break;
    case 1: 
      {
	// tmp___3 = strcasecmp((char const *)opt, (char const *)"ciphers");
	SKIP;
      }
      if (tmp___3) {
	break;
      }
      {
	// options_cipher_list = stralloc(arg);
	SKIP;
      }
      return 0;
    case 2: 
      {
	SKIP;
      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_option_client = 0;
      }
      break;
    case 1: 
      {
	SKIP;
      }
      if (tmp___4) {
	break;
      }
      {
	// tmp___6 = strcasecmp((char const   *)arg, (char const   *)"yes");
	SKIP;
      }
      if (tmp___6) {
	{
	  // tmp___5 = strcasecmp((char const   *)arg, (char const   *)"no");
	  SKIP
	}
	if (tmp___5) {
	  // return ("argument should be either \'yes\' or \'no\'");
	  return 10; // Some constant
	} else {
	  {
	    options_option_client = 0;
	  }
	}
      } else {
	{
	  options_option_client = 1;
	}
      }
      return 0;
    case 2: 
      {

      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_crl_dir = 0;
      }
      break;
    case 1: 
      {
	// tmp___7 = strcasecmp((char const   *)opt, (char const   *)"CRLpath");
	SKIP;
      }
      if (tmp___7) {
	break;
      }
      if (star_arg) {
	{
	  // options_crl_dir = stralloc(arg);
	  SKIP;
	}
      } else {
	{
	  options_crl_dir = 0;
	}
      }
      return 0;
    case 2: 
      {

      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_crl_file = 0;
      }
      break;
    case 1: 
      {
	// tmp___8 = strcasecmp((char const   *)opt, (char const   *)"CRLfile");
	SKIP;
      }
      if (tmp___8) {
	break;
      }
      if (star_arg) {
	{
	  // options_crl_file = stralloc(arg);
	  SKIP;
	}
      } else {
	{
	  options_crl_file = 0;
	}
      }
      return 0;
    case 2: 
      {

      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_debug_level = 5;
	options_facility = 24;
      }
      break;
    case 1: 
      {
	// tmp___9 = strcasecmp((char const   *)opt, (char const   *)"debug");
	SKIP;
      }
      if (tmp___9) {
	break;
      }
      {
	// tmp___10 = parse_debug_level(arg);
	SKIP;
      }
      if (! tmp___10) {
	// return ("Illegal debug argument");
	return 20; // Some constant
      }
      return 0;
    case 2: 
      {
	SKIP;
      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_egd_sock = 0;
      }
      break;
    case 1: 
      {
	// tmp___11 = strcasecmp((char const   *)opt, (char const   *)"EGD");
	SKIP;
      }
      if (tmp___11) {
	break;
      }
      {
	// options_egd_sock = stralloc(arg);
	SKIP;
      }
      return 0;
    case 2: 
      {

      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_option_syslog = 0;
	options_option_foreground = 0;
      }
      break;
    case 1: 
      {
	// tmp___12 = strcasecmp((char const   *)opt, (char const   *)"foreground");
	SKIP;
      }
      if (tmp___12) {
	break;
      }
      {
	// tmp___14 = strcasecmp((char const   *)arg, (char const   *)"yes");
	SKIP;
      }
      if (tmp___14) {
	{
	  // tmp___13 = strcasecmp((char const   *)arg, (char const   *)"no");
	  SKIP;
	}
	if (tmp___13) {
	  // return ("argument should be either \'yes\' or \'no\'");
	  return 30; // Some constant
	} else {
	  {
	    options_option_foreground = 0;
	  }
	}
      } else {
	{
	  options_option_foreground = 1;
	}
      }
      return 0;
    case 2: 
      {

      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_key = 0;
      }
      break;
    case 1: 
      {
	// tmp___15 = strcasecmp((char const   *)opt, (char const   *)"key");
	SKIP;
      }
      if (tmp___15) {
	break;
      }
      {
	// options_key = stralloc(arg);
	SKIP;
      }
      return 0;
    case 2: 
      {
	SKIP;
      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_ssl_options = 0;
      }
      break;
    case 1: 
      {
	// tmp___16 = strcasecmp((char const   *)opt, (char const   *)"options");
	SKIP;
      }
      if (tmp___16) {
	break;
      }
      {
	// tmp___17 = parse_ssl_option(arg);
	SKIP;
      }
      if (! tmp___17) {
	// return ("Illegal SSL option");
	return 40; // Some constant
      }
      return 0;
    case 2: 
      {

      }
      break;
    case 3: 
      {
	SKIP;
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_output_file = 0;
      }
      break;
    case 1: 
      {
	// tmp___18 = strcasecmp((char const   *)opt, (char const   *)"output");
	SKIP;
      }
      if (tmp___18) {
	break;
      }
      {
	// options_output_file = stralloc(arg);
	SKIP;
      }
      return 0;
    case 2: 
      {

      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	// options_pidfile = "/usr/local/var/run/stunnel.pid";
	SKIP;
      }
      break;
    case 1: 
      {
	// tmp___19 = strcasecmp((char const   *)opt, (char const   *)"pid");
	SKIP;
      }
      if (tmp___19) {
	break;
      }
      if (star_arg) {
	{
	  // options_pidfile = stralloc(arg);
	  SKIP;
	}
      } else {
	{
	  options_pidfile = 0;
	}
      }
      return 0;
    case 2: 
      {
	SKIP;
      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_random_bytes = 64;
      }
      break;
    case 1: 
      {
	// tmp___20 = strcasecmp((char const   *)opt, (char const   *)"RNDbytes");
	SKIP;
      }
      if (tmp___20) {
	break;
      }
      {
	// options_random_bytes = atoi(arg);
	SKIP;
      }
      return 0;
    case 2: 
      {
	SKIP;
      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_rand_file = 0;
      }
      break;
    case 1: 
      {
	// tmp___21 = strcasecmp((char const   *)opt, (char const   *)"RNDfile");
	SKIP;
      }
      if (tmp___21) {
	break;
      }
      {
	// options_rand_file = stralloc(arg);
	SKIP;
      }
      return 0;
    case 2: 
      {
	SKIP;
      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_option_rand_write = 1;
      }
      break;
    case 1: 
      {
	// tmp___22 = strcasecmp((char const   *)opt, (char const   *)"RNDoverwrite");
	SKIP;
      }
      if (tmp___22) {
	break;
      }
      {
	// tmp___24 = strcasecmp((char const   *)arg, (char const   *)"yes");
	SKIP;
      }
      if (tmp___24) {
	{
	  // tmp___23 = strcasecmp((char const   *)arg, (char const   *)"no");
	  SKIP;
	}
	if (tmp___23) {
	  // return ("argument should be either \'yes\' or \'no\'");
	  return 50; // Some constant
	} else {
	  {
	    options_option_rand_write = 0;
	  }
	}
      } else {
	{
	  options_option_rand_write = 1;
	}
      }
      return 0;
    case 2: 
      {
	SKIP;
      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	// local_options_servname = stralloc("stunnel");
	SKIP;
      }
      break;
    case 1: 
      {
	// tmp___25 = strcasecmp((char const   *)opt, (char const   *)"service");
	SKIP;
      }
      if (tmp___25) {
	break;
      }
      {
	// local_options_servname = stralloc(arg);
	SKIP;
      }
      return 0;
    case 2: 
      {

      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_session_timeout = 300;
      }
      break;
    case 1: 
      {
	// tmp___26 = strcasecmp((char const   *)opt, (char const   *)"session");
	SKIP;
      }
      if (tmp___26) {
	break;
      }
      {
	// tmp___27 = atoi(arg);
	SKIP
      }
      if (tmp___27 > 0) {
	{
	  // options_session_timeout = (long )atoi((char const   *)arg);
	  SKIP;
	}
      } else {
	// return ("Illegal session timeout");
	return 60; // Some constant
      }
      return 0;
    case 2: 
      {
	SKIP;
      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_setgid_group = 0;
      }
      break;
    case 1: 
      {
	// tmp___28 = strcasecmp((char const   *)opt, (char const   *)"setgid");
	SKIP;
      }
      if (tmp___28) {
	break;
      }
      {
	// options_setgid_group = stralloc(arg);
	SKIP;
      }
      return 0;
    case 2: 
      {

      }
      break;
    case 3: 
      {
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_setuid_user = 0;
      }
      break;
    case 1: 
      {
	// tmp___29 = strcasecmp((char const   *)opt, (char const   *)"setuid");
	SKIP;
      }
      if (tmp___29) {
	break;
      }
      {
	// options_setuid_user = stralloc(arg);
	SKIP;
      }
      return 0;
    case 2: 
      {

      }
      break;
    case 3: 
      {
	SKIP;
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
	// tmp___30 = strcasecmp((char const  *)opt, (char const  *)"socket");
	SKIP;
      }
      if (tmp___30) {
	break;
      }
      {
	//tmp___31 = parse_socket_option(arg);
	SKIP;
      }
      if (! tmp___31) {
	// return ("Illegal socket option");
	return 70; // Some constant
      }
      return 0;
    case 2: 
      {

      }
      break;
    case 3: 
      {
	SKIP;
	SKIP;
      }
      break;
    }
    switch (cmd) {
    case 0: 
      {
	options_verify_level = -1;
	options_verify_use_only_my = 0;
      }
      break;
    case 1: 
      {
	// tmp___32 = strcasecmp((char const   *)opt, (char const   *)"verify");
	SKIP;
      }
      if (tmp___32) {
	break;
      }
      {
	options_verify_level = 0;
	// tmp___33 = atoi((char const   *)arg);
	SKIP;
      }
      switch (tmp___33) {
      case 3: 
	{
	  options_verify_use_only_my = 1;
	}
      case 2: 
	{
	  options_verify_level = options_verify_level + 2;
	}
      case 1: 
	{
	  options_verify_level = options_verify_level + 1;
	}
      case 0: 
	{

	}
	return 0;
      default: 
	{

	}
	// return ("Bad verify level");
	return 80; // Some constant
      }
    case 2: 
      {
	SKIP;
      }
      break;
    case 3: 
      {
	SKIP;
	SKIP;
	SKIP;
	SKIP;
      }
      break;
    }
    if (cmd == 1) {
      return (option_not_found);
    }
    return 0;
  }
}
