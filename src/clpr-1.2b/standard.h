/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2                                               *
 *  File: standard.h                                           *
 ***************************************************************/

#include <stdio.h>
#include <math.h>
#include "os.h"

#define MAX_MESSAGE (256)
//#define MAX_STREAM	(8)            /* max input/output streams */
#define MAX_STREAM	(18)            /* max input/output streams */

#ifdef RS6000
#define IBMRT
#endif

#if defined(MSDOS) || defined(OS2V2)
#define SMALLER 1
#endif

#ifndef TRUE
#define  TRUE  (1)
#endif
#ifndef FALSE
#define  FALSE (0)
#endif
#ifndef NULL
#define NULL (0)
#endif
#if defined(SYS5) || defined(OS2V2)
#ifndef HZ
#ifndef RS6000
#define HZ 60
#else
#define HZ 100
#endif
#endif
#endif

#define MAXPOSINT (2147483647) /*** 2^31 - 1 ***/

#ifndef fabs
#define fabs(a) ((((double) (a)) > ((double) 0.0)) ? (a) : (-a))
#endif
#ifndef abs
#define abs(a) (((a) > 0) ? (a) : (-a))
#endif
#define is_equal(a, b) (fabs((((double)(a)) - ((double)(b)))) < EPS)
#define is_zero(a) (fabs((double) (a)) < EPS)

#define  bool    char
#define  loop  for(;;)

extern double EPS;
extern int START_USER_SESSION;
extern  FILE  *popen();

typedef int *INTptr;
typedef int *INSTptr;

#ifdef STATS
#define stats_count(n) s_count[n]++;
#else
#define stats_count(n) 
#endif
