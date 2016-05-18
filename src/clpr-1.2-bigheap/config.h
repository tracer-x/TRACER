/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2                                               *
 *  File: config.h                                             *
 ***************************************************************/

/* 64-bit or 32-bit machine */
// #define BIT64

/* solver size alignment */
#ifndef ALIGN
#define ALIGN8 (0)
#else
#define ALIGN8 (1)
#endif

/*	Default suffix for all files */
#if SHORT_FN_SUFFIX
#define DEF_CLP_SUFFIX	".clp"
#else
#define DEF_CLP_SUFFIX	".clpr"
#endif

/* 	Bootstrap file */
#if SHORT_FN_SUFFIX
#define INITFNAME "init.clp"
#else
#define INITFNAME "init.clpr"
#endif

#define MAX_FNAME_LEN	(256)

#define DEFAULT_EPS (0.00000001)
#ifdef SMALLER
#define PRE_MALLOC_MEM (100000)
#else
#define PRE_MALLOC_MEM (256000)
#endif

/*------------------------------------------------------- parser/compiler ---*/

#define DEF_CODE_SZ       (128000)
#define MAX_GOAL_CODE     (5000)
#define MAXVAR            (800)			/* per term or rule */
#define CODE_SAFETY       (256)			/* per arg */
#define MAX_SYSPRED_ARITY (7)     

#define MIN_OP_PRECEDENCE	(1)			/* operator precedences */
#define MAX_OP_PRECEDENCE	(1200)		

/*------------------------------------------------------- emulator -----------

      regs              heap                      stack
  |----------|--------------------------|-----------------------|
   ^          ^                          ^                       ^
  REGS     REGS_SZ =                     |                    MSTACK =
            HEAP                         |            LSTACK + LOCAL_STACK_SZ
                                         |                + STACK_SAFETY
                                         |             
                                       LSTACK =                            
                           REGS_SZ + HEAP_SZ + HEAP_SAFETY

***/       

#ifdef SMALLER
#define DEF_LSTACK_SZ (50000)
#define DEF_HEAP_SZ   (50000)
#define DEF_REGS_SZ   (1030)
#define DEF_TRAIL_SZ  (60000)
#else
#define DEF_LSTACK_SZ (100000)
#define DEF_HEAP_SZ   (200000)
#define DEF_REGS_SZ   (1030)
#define DEF_TRAIL_SZ  (100000)
#endif

#define REGS (1)                       /* Start of Register file */

#define STACK_SAFETY (500)
#define HEAP_SAFETY  (1000)
#define TRAIL_SAFETY (1000)

/*------------------------------------------------------- solver ------------*/

#ifdef SMALLER
#define DEF_SOLVER_SZ (32000)        /* Number of solver vars */
#define SOLVER_MALLOC_NODES (16000)    /* size of one malloc chunk */
#else
#define DEF_SOLVER_SZ (512000)        /* Number of solver vars */
#define SOLVER_MALLOC_NODES (512000)    /* size of one malloc chunk */
#endif

//#define MAX_DUMP_VAR (4096)           /* Number of output vars */
#define MAX_DUMP_VAR (8192)           /* Number of output vars */
#define MAX_PROJ_NUM (4096)           /* Number of constants in proj */
#define MAX_IMPLICIT (1024)			  /* Maximum number of implicits stacked */

/*----------------------- Temporary buffer file ------------------*/
#define TMP_FILE "/tmp/clprbuf.XXXXXX" /* Only on Unix */
#define DOS_TMP_FILE "clprbuf.tmp"     /* temporary buffer file */
