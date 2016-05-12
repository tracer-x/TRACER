/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: main.c                                               *
 ***************************************************************

 RESEARCH SOFTWARE DISCLAIMER

    As unestablished, research software, this program is provided free of 
    charge on an "as is" basis without warranty of any kind, either 
    expressed or implied, including but not limited to implied warranties 
    of merchantability and fitness for a particular purpose.  IBM does not 
    warrant that the functions contained in this program will meet the user's
    requirements or that the operation of this program will be uninterrupted 
    or error-free.  Acceptance and use of this program constitutes the user's
    understanding that he will have no recourse to IBM for any actual or 
    consequential damages, including, but not limited to, lost profits or 
    savings, arising out of the use or inability to use this program.  Even 
    if the user informs IBM of the possibility of such damages, IBM expects 
    the user of this program to accept the risk of any harm arising out of 
    the use of this program, or the user shall not attempt to use this 
    program for any purpose.

 USER AGREEMENT

     BY ACCEPTANCE AND USE OF THIS EXPERIMENTAL PROGRAM
     THE USER AGREES TO THE FOLLOWING:

     a.  This program is provided for the user's personal, non-commercial, 
         experimental use and the user is granted permission to copy this
         program to the extent reasonably required for such use.

     b.  All title, ownership and rights to this program and any copies 
         remain with IBM, irrespective of the ownership of the media on 
         which the program resides.

     c.  The user is permitted to create derivative works to this program.  
         However, all copies of the program and its derivative works must
         contain the IBM copyright notice, the UNESTABLISHED SOFTWARE 
         DISCLAIMER and this USER AGREEMENT.

     d.  By furnishing this program to the user, IBM does NOT grant either 
         directly or by implication, estoppel, or otherwise any license
         under any patents, patent applications, trademarks, copyrights or 
         other rights belonging to IBM or to any third party, except as 
         expressly provided herein.

     e.  The user understands and agrees that this program and any derivative
         works are to be used solely for experimental uses and are not to be
         sold, distributed to a commercial organization, or be commercially 
         exploited in any manner.

     f.  IBM requests that the user supply to IBM a copy of any changes, 
         enhancements, or derivative works which the user may create.  The 
         user grants IBM and its subsidiaries an irrevocable, nonexclusive, 
         worldwide and royalty-free license to use, execute, reproduce, 
         display, perform, prepare derivative works based upon, and 
         distribute, (INTERNALLY AND EXTERNALLY) copies of any and all such 
         materials and derivative works thereof, and to sublicense others to 
         do any, some, or all of the foregoing, (including supporting
         documentation).

         Copies of these modifications should be sent to:

               SOFTWARE @ YKTVMV.BITNET

     g.  Technical data and/or commodities furnished under this agreement
         are subject to United States export/reexport control laws and
         regulations.  The user agrees to comply with such laws and 
         regulations, including complying with the terms of the U.S. 
         license authorizing IBM to furnish the technical data and/or 
         commodities to the user.
     
     h.  The user agrees not to export, directly or indirectly, any technical
         data provided by IBM or any direct product of such data to, or to the
         nationals of, Czechoslovakia, Estonia, Hungary, Iraq, Laos, Latvia,
         Libya, Lithuania, Mongolian Peoples Republic, North Korea, People's
         Republic of China, Poland, Romania, Union of Soviet Socialist
         Republics, and Vietnam.
     
     i.  It is a requirement that the assurance from the recipient of the
         tech data be received by IBM prior to the disclosure or export.  It
         need not be in the actual license/contract/or other agreement
         setting forth the deal itself-a side letter is perfectly acceptable.
         The executed copy of the assurance should be retained locally for
         file purposes.        

******************************************************************************/

/** CPROF TEST **/
#define  MAX_SIZE 16384

/* Globals */
int bar[MAX_SIZE];


#if defined(MSDOS) || defined(OS2V2)
#include <sys/signal.h>
#else
#include <signal.h>
#endif
#include <setjmp.h>

#include "standard.h"
#include "config.h"
#include "parse.h"
#include "symbols.h"
#include "emul.h"

#define NARGS_MIN 1            /* minimum command line arguments */
#define NARGS_MAX 100          /* maximum command line arguments */
#define MAX_HISTORY 64 

extern int HEAP_SZ, LSTACK_SZ, TRAIL_SZ, SOLVER_SZ, CODE_SZ;

int START_USER_SESSION = FALSE;
int TRACE = FALSE;
int CLAM_TRACE = FALSE ; 
int WARN_ABORT = TRUE;
int WARNING_FLAG = TRUE;
int STYLE_CHECK_FLAG = ALL_STYLE;

int restart_ready = FALSE;     /* OK to do longjmp? */
int query = 0;                 /* unique stamp of this goal */
FILE *infile, *outfile;        /* input/output stream numbers */
FILE *error_stream;
int infile_t;                  /* names of input file */
int outfile_t;                 /* names of output file */
FILE *input_fd;                /* temporary input file */
char *input_fname;             /* file to be reconsulted immediately */
int auto_pause_duration;       /* duration of the pause during tracing */
int REDEFINE_FLAG = TRUE;      /* warn if predicates are redefined */
FILE *TEMP_FILE = (FILE *) NULL; /* special temporary file for atom_to_printf */

#ifdef SYS5
char stdout_buf[BUFSIZ];
#endif

jmp_buf int_restart;           /* Restart vector for errors & interrupt */
PTERM *hist[MAX_HISTORY];      /* last n commands */
int histbase;                  /* current command line */
char *cmd_p;                   /* Name of command running clpr */
bool eflag;                    /* reported an error for this goal? */

extern FILE *cur_stream;       /* parser input */
extern double EPS;
extern int epcode;

extern char *the_filename();
#ifndef GCC
extern char peek();
extern int atoi();
extern double atof();
#endif

void interrupt();
void bus_error();
void seg_fault();

/*---------------------------------------------------------------------------*/

/***********************************************/
/*** Initialization in Interactive Main Loop ***/
/***********************************************/

main(argc, argv)
int argc;
char *argv[];
{
char *opt_p;
int i, pc, return_code, goal_number;
PTERM *t;

	error_stream = stderr;
	outfile = stdout;
    test_system_defaults();
	input_fd = NULL;
#if HAS_SIGBUS
	signal(SIGBUS, bus_error);
#endif
	signal(SIGSEGV, seg_fault);
	argc--;
	argv++;
	while (argc && *argv[0] == '-') {
		opt_p = argv[0];
		while(*(++opt_p)) {
			switch(*opt_p) {
				case 'c':
					if (*(++opt_p) != 's') usage_error();
					argc--;
					argv++;
					if (argc && myisdigit(**argv)) CODE_SZ = atoi(*argv);
					else usage_error();
					goto GET_MORE_ARGS;
				case 'h':
					if (*(++opt_p) != 's') usage_error();
					argc--;
					argv++;
					if (argc && myisdigit(**argv)) HEAP_SZ = atoi(*argv);
					else usage_error();
					goto GET_MORE_ARGS;
				case 'l':
					if (*(++opt_p) != 's') usage_error();
					argc--;
					argv++;
					if (argc && myisdigit(**argv)) LSTACK_SZ = atoi(*argv);
					else usage_error();
					goto GET_MORE_ARGS;
				case 's':
					if (*(++opt_p) != 's') usage_error();
					argc--;
					argv++;
					if (argc && myisdigit(**argv)) SOLVER_SZ = atoi(*argv);
					else usage_error();
					goto GET_MORE_ARGS;
				case 't':
					if (*(++opt_p) != 's') usage_error();
					argc--;
					argv++;
					if (argc && myisdigit(**argv)) TRAIL_SZ = atoi(*argv);
					else usage_error();
					goto GET_MORE_ARGS;
				case 'z':
					if (*(++opt_p)) usage_error();
					argc--;
					argv++;
					if (argc && myisdigit(**argv)) EPS = atof(*argv);
					else usage_error();	
					goto GET_MORE_ARGS;
				case 'r':
					if (*(++opt_p)) usage_error();
					argc--;
					argv++;
					if (argc && myisdigit(**argv)) cmd_ranseed(atoi(*argv));
					else usage_error();	
					goto GET_MORE_ARGS;
				default: usage_error();
			}
		}
	GET_MORE_ARGS:
		argc--;
		argv++;
	}

	if (argc == 0) input_fname = NULL;
	else if (argc == 1) input_fname = *argv;
	else if (argc > 1) usage_error();

#ifdef SYS5
	setvbuf(stdout, stdout_buf, _IOLBF, BUFSIZ); /* Buffer output for pipes */
#endif

/*
	if (input_fname == NULL) {
		infile = stdin;
		input_fd = stdin;
	}
*/
	input_fd = stdin;

	infile_t = addtag(TAG_CON, STDINVAL);
	outfile_t = addtag(TAG_CON, USER);
	init_scanner();
	new_input(stdin,"<stdin>");
	/* unreadchar(' '); */
	unreadchar(127);
	epcode = MAX_GOAL_CODE;
	fprintf(outfile, "\nCLP(R) Version 1.2b\n");
	fprintf(outfile, 
		"(c) Copyright International Business Machines Corporation\n");
	fprintf(outfile, "1989 (1991, 1992) All Rights Reserved\n"); 
	fflush(outfile);

        do_ztime(); /* start timing including all initialization */
	/*********/
	init_all();
	/*********/

	first_engine();
	bootstrap();
	histbase = 0;
	goal_number = 0;

	if (input_fname) {
		new_input(stdin, "<stdin>");
		if (isatty(fileno(stdin)) && feof(stdin)) {
		    rewind(stdin);
		    /* unreadchar(' '); */
		    unreadchar(127);
		    readchar();
		}
		if (!internal_consult(input_fname)) {
			warning("cannot open file %s", input_fname);
		}
	}
	/* changed */
	unreadchar(127);
	readchar();

	fflush(outfile);

	START_USER_SESSION = TRUE;
 
	loop {
		setjmp(int_restart);
		top_free_things();
		restart_ready = TRUE;
		signal(SIGINT, interrupt);
		new_input(stdin, "<stdin>");
		if (isatty(fileno(stdin)) && feof(stdin)) {
		    rewind(stdin);
		    /* unreadchar(' '); */
		    unreadchar(127);
		    readchar();
		}
		eflag = FALSE;
		printf("\n%d ?- ", goal_number + 1); 
		fflush(stdout);
		if (!(return_code = get_goal(&t))) {
			printf("\nEnd of clp(R) Session\n");
			fflush(stdout);
			files_shutdown();
			final_clean();
			exit(0);
		}
		if (return_code == 1) {
			if (checkhist(t, &i)) {
				i = histbase - i;
				if (i >= 0 && i < MAX_HISTORY && hist[i]) t = hist[i];
				else continue;
				print_goal(t, 0);
			}
			compile_goal((PTERM *) quote_expand(t,FALSE)); 
			goal_number++;
			pushhist(t);
			query++;
			first_engine();
			/***************/
			save_context();
			rungoal(GOAL_START, TRUE);
			restore_context();
			/***************/
			}
		else 
			putchar('\n');
	}
}

/*--------------------------------------------------- aux stuff -------------*/

pushhist(g)
PTERM *g;
{
int i;
	for (i = MAX_HISTORY - 1; i > 0; i--) hist[i] = hist[i - 1];
	hist[0] = g;
	histbase++;	
}

printhist(n)
int n;
{
int i;
	n = abs(n);
	for (i = MAX_HISTORY - 1; i > 0; i--) 
		if (hist[i] && ((i <= n) || (n == 0))) {
			fprintf(outfile, "%d\t", histbase - i);
			print_goal(hist[i], 0);
		}
}

checkhist(t,np)
PTERM *t;
int *np;
{
	if (t->ty == REAL) {
		*np = (int)(t->rval);
		return TRUE;
	}
	return FALSE;
}

/*---------------------------------------------------------------------------*/

void interrupt()
{
	signal(SIGINT, SIG_IGN);
	int_clean();
	new_input(stdin, "<stdin>");
	if (!restart_ready) exit(1);
	longjmp(int_restart, TRUE);
}

top_level()
{
	interrupt();
}

void bus_error()
{
	fprintf(error_stream, "Bus error: no core dumped\n");
	exit(1);
}

void seg_fault()
{
	fprintf(error_stream, "Segmentation fault: no core dumped\n");
	fflush(error_stream);
	exit(1);
}

usage_error()
{
	fprintf(error_stream, "Usage: clpr [-{chlst}s <n>] ");
	fprintf(error_stream, "[-z <real>] [-r <int>] [file]\n");
	fflush(error_stream);
	exit(2);
}

warning(s, arg1, arg2)
char *s;
int arg1, arg2;
{
char buf[256];
	if (WARNING_FLAG) {
		fflush(stdout);
		sprintf(buf, s, arg1, arg2);
		fprintf(error_stream, "Warning: %s\n", buf);
		fflush(error_stream);
	}
}

warn_err(s, arg1, arg2)
char *s;
int arg1, arg2;
{
char buf[256];
	if (WARNING_FLAG || WARN_ABORT) {
		sprintf(buf, s, arg1, arg2);
		fprintf(error_stream, "Error: %s\n", buf);
		fflush(error_stream);
	}
	if (WARN_ABORT) {
		fprintf(error_stream, "Aborting\n");
		interrupt();
	}
}

runtime_error(s, i, j)
char *s;
int i, j;
{
char buf[256];
	sprintf(buf, s, i, j);
	fprintf(error_stream, "Error: %s\n", buf);
	fflush(error_stream);
	top_level();
}

fatal(s)
char *s;
{
	fprintf(error_stream, "Fatal Error: %s\n",s);
	fflush(error_stream);
	final_clean();
	exit(1);
}


warn_header()
{
	fprintf(error_stream, "Warning, %s:%d: ", the_filename(),
		the_lineno());
}

final_clean()
{
	clean_temp_file();
}
