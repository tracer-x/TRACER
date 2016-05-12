/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2                                               *
 *  File: os.h                                             *
 ***************************************************************/

/* O/S dependencies and flags go here */
/*
   O/S known to work are:
   Unix:
	SYS5 	--- System 5, Sun Solaris, SGI Irix, HP HP/UX
	BSD  	--- Bsd, DEC Ultrix
	OSF	--- OSF
	LINUX	--- Linux
   PC's and compatibles:
	MSDOS 	--- djgpp or emx compilers required
	OS2V2	--- OS/2 2.X
	LINUX
	WIN32	--- Win NT
*/

/*
   Options to turn on/off:
   SHORT_FN_SUFFIX
   HAS_FORK
   HAS_PIPE
   FUNNY_GNUMAKE
   HAS_SIGBUS
*/

#ifdef MSDOS
#define	NATIVE_OS	"MS/DOS"
#define SHORT_FN_SUFFIX 1
#define HAS_FORK	0
#define HAS_PIPE	0
#define	HAS_SIGBUS	0
#define	DEF_EDITOR	"edit"
#define DEF_COMSH   	"command.com"
#endif

#ifdef unix
#   ifdef LINUX
#define	NATIVE_OS	"LINUX"
#define	HAS_SIGBUS	1
#define SYS5
#else
#define	NATIVE_OS	"UNIX"
#define	HAS_SIGBUS	1
#endif
#define NO_SMALLOC
#define SHORT_FN_SUFFIX 0
#define HAS_FORK	1
#define HAS_PIPE	1
#define	DEF_EDITOR	"edit"
#endif

#ifdef OS2V2
#define	NATIVE_OS	"OS/2"
/*	Choose either FAT file system with short names */
#define SHORT_FN_SUFFIX 1
/*	or HPFS file system with long names */
#define SHORT_FN_SUFFIX 0
#define HAS_FORK	0
#define HAS_PIPE	0
#define	HAS_SIGBUS	0
#define	DEF_EDITOR	"edit"
#define DEF_COMSH   	"command.com"
#endif

#ifdef OS2V2
#define	NATIVE_OS	"WIN32/NT"
/*	Choose either FAT file system with short names */
#define SHORT_FN_SUFFIX 1
/*	or NTFS or HPFS file system with long names */
#define SHORT_FN_SUFFIX 0
#define HAS_FORK	0
#define HAS_PIPE	0
#define	HAS_SIGBUS	0
#define	DEF_EDITOR	"edit"
#define DEF_COMSH   	"command.com"
#endif

#ifdef SOLARIS
#define HZ              CLK_TCK
#endif

