/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: lib.c                                                *
 ***************************************************************/

/*
 * Changes:
	Added in arccos & arccsin
 *
 */

#include "standard.h"

#ifdef SYS5
#include <sys/types.h>
#include <sys/times.h>
#include <string.h>
#endif

#ifdef LINUX
#include <time.h>
#undef HZ
#define HZ CLOCKS_PER_SEC
#endif

#ifdef SOLARIS
#include <limits.h>
#endif

#ifdef BSD
#ifdef OS2V2	/* OS2 not using BSD timings */
#include <sys/types.h>
#include <sys/times.h>
#else			/* BSD */
#include <sys/time.h>
#endif
#include <sys/resource.h>
#include <strings.h>
#ifdef OSX
#include <unistd.h>
#endif
#endif

#ifdef OS2V2
#   ifdef CC_CSET
#include <time.h>
#   else
#include <sys/timeb.h>
#endif
#endif

#include <ctype.h>
#include "config.h"
#include "parse.h"
#include "lib.h"
#include "symbols.h"
#include "compile.h"
#include "emul.h"
#include "opcodes.h"

#define U_SEC (1000000.0)
#if (defined(BSD) & !defined(OS2V2))
static struct timeval basetime, curtime;
#endif
#if (defined(SYS5) | (defined(OS2V2) & !defined(CC_CSET)))
static struct tms basetime, curtime;
#endif
#if (defined(OS2V2) && defined(CC_CSET))
static clock_t basetime, curtime;
#endif

typedef struct io_rec {
	struct io_rec *next;	
	char *s;		
	bool mode;		
	FILE *fio;		
	bool dual;		
} IO_REC;

char *CLPRLIB; 
bool is_clam_file();
int efile[2] = { addtag(TAG_STR, QUERY), addtag(TAG_CON, END) };
IO_REC *files_open = (IO_REC *) NULL;	
FILE *see_input;
int see_input_t = addtag(TAG_CON, USER);

char *fmt_printf();
int *findbind();
FILE *file_is_open();
PTERM *heap_to_pterm();
int *pterm_to_heap();
int *end_of_constraints();
int *make_new_rule_head();
FILE *my_open();
char *command_interpreter();
int round_int();

extern char *CLP_SUFFIX;
extern RULE_ptr current_rule;
extern FILE *infile, *outfile, *input_fd, *error_stream;
extern int infile_t, outfile_t;
extern int hascut;
extern VREC *varlist;
extern unsigned int *code;
extern int pcode, epcode, endcode[], startcode[];
extern FUNCTREC functors[];
extern int *curar, *stacktop, *heaptop, *retreg, **trail, trtop;
extern int solver_id;
extern int CODEGEN_DEBUG;
extern int TRACE, CLAM_TRACE;
extern ASMREC asmlist[];
extern SPNODE *spred[];
extern int funct_vars_top;
extern int flatten_vars_top;
extern int IMPLICIT, PARTIAL_IMPLICIT;
extern int WARN_ABORT;
extern int WARNING_FLAG;
extern bool have_runable;
extern int CODE_SZ;
extern int STYLE_CHECK_FLAG;
extern int REDEFINE_FLAG;
extern struct HASHNODE *hash_func_tab[];

extern PTERM *lookup_name();
extern PTERM *lookup_var();
extern char *maketag();
extern RULE_ptr p_first_rule();
extern RULE_ptr p_last_rule();
extern RULE_ptr store_rule();
extern PTERM *new_pt_var();
extern PTERM *new_pterm();
extern PTERM *new_pt_emptylist();
extern PTERM *new_real();
extern PTERM *new_p_func2();
extern RULE_ptr new_rule();
extern int *get_rule_constraints();
extern HASH_P_NODE_ptr new_hash_p_node();
extern char *getenv();
extern char *emalloc();
extern char *mktemp();
extern struct HASHNODE *insert_func_htable();
extern PTERM *quote_expand();
extern void ungetchar();
extern char get0();
extern char peek();
/*---------------------------------------------------------------------------*/

SPNODE sptab[] = {
	{ do_history, 0, "history" , 0},
	{ do_history1, 1, "history" , 0},
	{ do_tell, 1, "tell" , 0},
	{ do_telling, 1, "telling" , 0},
	{ do_told, 0, "told" , 0},
	{ do_see, 1, "see" , 0},
	{ do_seeing, 1, "seeing" , 0},
	{ do_seen, 0, "seen" , 0},
	{ do_consult, 1, "consult" , 0},
	{ do_reconsult, 1, "reconsult" , 0},
	{ do_listing, 0, "ls" , 0},
	{ do_listing1, 1, "ls" , 0},
	{ do_listing, 0, "listing" , 0},
	{ do_listing1, 1, "listing" , 0},
/** fixed ifdef was on wrong spot **/
#ifdef CTRACE
	{ do_clisting, 0, "cls" , 0},
	{ do_clisting1, 1, "cls" , 0},
#endif
	{ do_assertz, 1, "assert" , 0},
	{ do_asserta, 1, "asserta" , 0},
	{ do_assertz, 1, "assertz" , 0},
	{ do_fassertz, 1, "fassert" , 0},
	{ do_fasserta, 1, "fasserta" , 0},
	{ do_fassertz, 1, "fassertz" , 0},
	{ do_retractall, 0, "retractall" , 0}, 
	{ do_nl, 0, "nl" , 0},
	{ do_flush, 0, "flush" , 0},
	{ do_oracle, 3, "oracle" , 0},
	{ do_pipe, 1, "pipe" , 0},
	{ do_fork, 0, "fork" , 0},
	{ do_edit, 1, "edit" , 0},
	{ do_more, 1, "more" , 0},
	{ do_halt, 0, "halt" , 0},
	{ do_abort, 0, "abort" , 0},
	{ do_sh, 0, "sh" , 0},
	{ do_csh, 0, "csh" , 0},
	{ do_nonground, 1, "nonground" , 0},
	{ do_ground, 1, "ground" , 0},
	{ do_nonvar, 1, "nonvar" , 0},
	{ do_var, 1, "var" , 0},
	{ do_univ, 2, "=.." , 0},
	{ do_occurs, 2, "occurs" , 0},
	{ do_eqeq, 2, "==" , 0},
	{ do_atom, 1, "atom" , 0},
	{ do_atomic, 1, "atomic" , 0},
	{ do_functor1, 1, "functor" , 0},
	{ do_arithmetic, 1, "arithmetic" , 0},
	{ do_rand, 1, "rand" , 0},
	{ do_srand, 1, "srand" , 0},
	{ do_floor, 2, "floor", 2},
	{ do_op3, 3, "op", 0},
	{ do_prot, 2, "prot", 0},
	{ do_hide, 2, "hide", 0},
	{ do_warning, 1, "warning", 0},
	{ do_codegen_debug, 0, "codegen_debug", 0},
	{ do_codegen_nodebug, 0, "codegen_nodebug", 0},
	{ do_spy, 0, "spy", 0},
	{ do_spy2, 2, "$spy", 0},
	{ do_nospy, 0, "nospy", 0},
	{ do_nospy2, 2, "$nospy", 0},
	{ do_trace, 0, "trace", 0},
	{ do_notrace, 0, "notrace", 0},
	{ do_implicit, 0, "implicit", 0},
	{ do_no_implicit, 0, "no_implicit", 0},
	{ do_partial_implicit, 0, "partial_implicit", 0},
#ifdef CTRACE
	{ do_clam_trace, 0, "ctrace", 0},
	{ do_clam_notrace, 0, "noctrace", 0},
#endif
	{ do_ztime, 0, "ztime", 0},
	{ do_ctime, 1, "ctime", 0},
	{ do_compile, 2, "compile", 0},
#ifdef STATS
	{ do_e_stats, 0, "e_stats" , 0},
	{ do_s_stats, 0, "s_stats" , 0},
	{ do_stats, 0, "stats" , 0},
#endif
	{ do_dump3, 3, "dump", 0},
	{ do_dump2, 2, "dump", 0},
	{ do_dynamic, 2, "dynamic", 0},
	{ do_functor3, 3, "functor", 0},
	{ do_arg, 3, "arg", 0},
	{ do_style_check, 1, "$style_check", 0},
	{ do_clear_style, 0, "$clear_style_check", 0}, /** defined in codegen.c **/
	{ do_counter_value, 2, "counter_value", 0},
	{ do_set_counter, 2, "set_counter", 0},
	{ do_add_counter, 2, "add_counter", 0},
	{ do_atom_printf, 3, "printf_to_atom", 0},
	{ do_new_constant, 2, "new_constant", 0},
	{ do_get0, 1, "get0" , 0},
	{ do_peek, 1, "peek" , 0},
	{ do_unget0, 1, "unget0" , 0},
/*****************************************************/
/*****
	{ do_replace_arg, 3, "replace_arg", 0},
	{ do_asm_code_1, 1, "$$code", 0},
	{ do_asm_code_2, 2, "$$code", 0},
	{ do_asm_code_3, 3, "$$code", 0},
	{ do_asm_code_4, 4, "$$code", 0},
	{ do_asm_label, 1, "$$label", 0},
	{ do_asm_list, 2, "$$list", 0},
	{ do_asm_call, 1, "$$call", 0},
	{ do_asm_resolve, 0, "$$resolve", 0},
*****/
/*****/
	{ do_retractoneall, 1, "retractall", 0}, 
/*****/
	{ do_dump_tableaus, 0, "dump_tableaus" , 0},
	{ 0, 0, 0, 0}
};

/* #define MAX_VAR_IN_HEAP 1024 */
#define MAX_VAR_IN_HEAP 2048
static int pterm_var_cnt = -1;
static int var_heapval[MAX_VAR_IN_HEAP + 1];
static int hterm_var_cnt = 0;
static int heap_varval[MAX_VAR_IN_HEAP + 1];

static PTERM *ht_to_pterm();
static int heapify_pterm();

/*---------------------------------------------------------------------------*/

FILE *file_ready(name, mode) 
char *name;
bool mode;
{
FILE *f;
IO_REC *t;
	if (f = file_is_open(name, mode, files_open)) return f;
	else {
		t = (IO_REC *) emalloc(sizeof(IO_REC));
		if (mode == IO_READ) {
			if ((f = my_open(name, "r")) == (FILE *) NULL) {
				warn_err("Could not read from file %s", name);
				return (FILE *) NULL;
			}
		} else {
			if ((f = my_open(name, "w")) == (FILE *) NULL) {
				warn_err("Could not write to file %s", name);
				return (FILE *) NULL;
			}
		}
		t->fio = f;
		t->s = name;
		t->mode = mode;
		t->next = files_open;
		t->dual = FALSE;
		files_open = t;
		return f;
	}
}
 
FILE *file_is_open(name, mode, fl)
char *name;
bool mode;
IO_REC *fl;
{
	if (fl == (IO_REC *) NULL) return FALSE;
	if (!strcmp(name, fl->s)) {
		if (fl->mode != mode && !fl->dual) {
			fprintf(error_stream, "%s already engaged\n", name);
			fatal("... bye");
		}
		if (fl->mode != mode) return file_is_open(name, mode, fl->next);
		return fl->fio;	
	} else
		return file_is_open(name, mode, fl->next);
}
 
IO_REC *file_close(name, fl)
char *name;
IO_REC *fl;
{
	if (!strcmp("<stdin>", name)) return fl;
	if (fl == (IO_REC *) NULL) {
		fprintf(stderr, "cannot close file %s\n", name);
		fatal("... bye");
	}
	if (!strcmp(fl->s, name)) {
		fflush(fl->fio);
		fclose(fl->fio);
		return fl->next;
	} else {
		fl->next = file_close(name, fl->next);
		return fl;
	}
}
 
file_allclose(fl)
IO_REC *fl;
{
	if (fl == (IO_REC *) NULL) return;
	fflush(fl->fio);
	fclose(fl->fio);
	file_allclose(fl->next);
}
 
files_shutdown()
{
	file_allclose(files_open);
}

extern FILE *TEMP_FILE;


char *special_buffer;
/* temporary code */
do_atom_printf(t1, t2, t3)
int *t1, *t2, *t3;
{
int l;
char *s;
 
	t2 = findbind(t2);
	if (!is_con(t2)) {
		warn_err("second argument of printf_to_atom/3 must be an atom/string");
		return FALSE;
	}
	t3 = findbind(t3);
	if (!(is_nil(t3) || is_cons(t3))) {
		warn_err("third argument of printf_to_atom/3 must be a list");
		return FALSE;
	}
	if (!TEMP_FILE) { 
	/* just choose a fixed name to avoid any problems with DOS etc */
#if defined(MSDOS) || defined(OS2V2) || !defined(unix)
		if (!(TEMP_FILE = my_open(DOS_TMP_FILE, "w")))
			fatal("couldn't open temporary file");
#else /* On Unix */
		char TEMP_FNAME[20];
#ifdef LINUX
		int fd;
#endif
		strcpy(TEMP_FNAME, TMP_FILE);
#ifdef LINUX
		if (((fd = mkstemp(TEMP_FNAME)) == -1) ||
		    !(TEMP_FILE = fdopen(fd, "w")))
		  fatal("couldn't open temporary file");
#else
#ifdef OSX
		strcpy(TEMP_FNAME, TMP_FILE);
		strcpy(TEMP_FNAME, mktemp(TEMP_FNAME));
		if (!(TEMP_FILE = my_open(TEMP_FNAME, "w")))
			fatal("couldn't open temporary file");
#else
		TEMP_FNAME = mktemp(TEMP_FNAME);		
		if (!(TEMP_FILE = my_open(TEMP_FNAME, "w")))
			fatal("couldn't open temporary file");
#endif
#endif
		unlink(TEMP_FNAME);
#endif
		special_buffer = emalloc(BUFSIZ + 16);
		setbuf(TEMP_FILE, special_buffer);
	}
	rewind(TEMP_FILE);
	do_printf(TEMP_FILE, t3, string_of(mask(*t2)), FALSE);
	putc('\0', TEMP_FILE);
	if ((l=strlen(special_buffer)) >= BUFSIZ) fatal("66012");
	s = emalloc(l+1);
	strcpy(s, special_buffer);
	return make_a_con(t1, hashbuiltina(s, 0));
}

clean_temp_file() /* remove the temp file */
{
	if (TEMP_FILE) {
		fclose(TEMP_FILE);
#if defined(MSDOS) || defined(OS2V2) || !defined(unix)
		unlink(DOS_TMP_FILE);
#endif
	}
}


do_printf(F, t, fmt, flush_flag) 
FILE *F;
int *t, flush_flag;
char *fmt;
{
int j;
char c;
int *arg;

	/* 2nd arg can be a var; but needs to be set to a list */
	arg = findbind(t);
	if (!(is_nil(arg) || is_cons(arg))) {
		warn_err("second argument of printf/2 must be a list");
		return FALSE;
	}
	for(; c= *fmt; fmt++) {
		if (c == '\\') 
			if (myisdigit(c= * ++fmt)) {
				for (j = 0, c = 0; j < 3 && myisdigit(*fmt) && *fmt != '9'; 
					j++, fmt++) 
						c = c * 8 + *fmt - '0';
				putc(c, F);
				fmt--;
			} else switch (c) {
				case 'n': putc('\n', F); break;
				case 't': putc('\t', F); break;
				case 'r': putc('\r', F); break;
				case 'b': putc('\b', F); break;
				case 'f': putc('\f', F); break;
				default:  putc(c, F);    break;
			}
		else if (c == '%') fmt = fmt_printf(F, fmt, &arg);
		else putc(c, F);
	}
	if (flush_flag) fflush(F);
	return TRUE;
}
 
#define STR_FMT	1
#define REAL_FMT 2
#define INT_FMT 3
#define DEFAULT_FMT 4
 
char *fmt_printf(F, s, t)
FILE *F;
char *s;
int *t;
{
char *s1;
char format[MAX_MESSAGE];
	s1 = s + 1;
	if (*s1 == '-') s1++;
	while (myisdigit(*s1)) s1++;
	if (*s1 == '.') {
		s1++;
		while (myisdigit(*s1)) s1++;
	}
	if (*s1 == 'l') s1++;
	if (s1 - s < MAX_MESSAGE - 1) {
		strncpy(format, s, s1 - s+1);
		format[s1 - s + 1] = '\0';
	} else fatal("format string too long");
	switch (*s1) {
	case 'f':
	case 'e':
	case 'g': term_printf(F, format, REAL_FMT, t); break;
	case 'd':
	case 'o':
	case 'x':
	case 'c':
	case 'u': term_printf(F, format, INT_FMT, t); break;
	case 's': term_printf(F, format, STR_FMT, t); break;
	case '%': fprintf(F, "%%"); break;
	default:
		term_printf(F, format, DEFAULT_FMT, t);
		s1--;
		return(s1);
	}
	return(s1);
}

extern int slack_id;
 
term_printf(F, fmt, fmt_ty, arg_list)
FILE *F;
char *fmt;
int **arg_list;
int fmt_ty;
{
int *t;
double val;
int ground, i;
	*arg_list = findbind(*arg_list);
	if (tag(**arg_list) == TAG_CONS) {
		t = findbind(pmask(**arg_list));
		*arg_list= findbind((int *)(pmask(**arg_list)) + 1);
	} else {
		warn_err("bad second argument to printf/2");
		return FALSE;
	}
	if (tag(*t) == TAG_PAR) {
		if (is_ground(mask(*t), &val)) {
			if (is_zero(val)) val = 0.0;
			if (fmt_ty == STR_FMT) 
				runtime_error("bad second argument to printf/2");
			else if (fmt_ty == REAL_FMT) fprintf(F, fmt, val);
			else if (fmt_ty == INT_FMT) 
				fprintf(F, fmt, round_int(val));
			else fprintf(F, "%g", val);
		} else {
			i = mask(*t);
			if (i < slack_id) fprintf(F, "_t%d", i);
			else fprintf(F, "_S%d", i);
		}
		return;
	}
	if (is_unbound_var(*t) || is_daemon(t)) {
		print_var2pos(F, t);
		return;
	}
	if (is_con(t) || is_nil(t) || is_func(t) || is_cons(t)) {
		if (fmt_ty == DEFAULT_FMT) printterm(F, t, TRUE);
		else if ((is_con(t) || is_nil(t)) && fmt_ty == STR_FMT)
			fprintf(F, fmt, string_of(mask(*t)));
		else warn_err("inappropriate format in printf/2");
		return;
	}
	fatal("Term_printf");
}

do_dump(f, vars, names)
FILE *f;
int *vars;
char *names;
{
	if (is_nil(vars)) return TRUE;
	if (tag(*vars) != TAG_CONS) runtime_error("bad argument to dump/1");
	dump1(f, vars, names);
	return TRUE;

}

do_dump3(t1, t2, t3)
int *t1, *t2, *t3;
{
	return dump3(t1,t2,t3);
}

do_dump2(t1, t2)
int *t1, *t2;
{
	return dump2(outfile, t1, t2);
}

extern FILE *cur_stream;
do_read(f,t)
FILE *f;
int *t;
{
PTERM *tt, *exp_tt;
FILE *old_cur_stream;
int nt;
/*
	old_cur_stream = infile;
*/
	old_cur_stream = cur_stream;
	if (see_input == (FILE *) NULL) {
		warn_err("read/1: no input stream");
		return FALSE;
	}
	t = findbind(t);
	if (!(is_unbound_var(*t) || is_daemon(t))) {
		warn_err("bad argument to read/1");
		return FALSE;
	}
	if (feof(see_input)) make_bound_var(&nt, efile);
	else {
		new_input(see_input, string_of(mask(see_input_t)));
		/**
		if (tt = (PTERM *) readterm()) {
			nt = (int) pterm_to_heap(quote_expand(tt, FALSE));
		} else make_bound_var(&nt, (int) efile);
		**/
		/** free constant pterms **/
		if (tt = (PTERM *) readterm()) {
			gobble_nl();
			exp_tt = quote_expand(tt, FALSE);
			nt = (int) pterm_to_heap(exp_tt);
			if (is_p_real(tt) || is_p_constant(tt)) free_pterm(tt);
			if (is_p_real(exp_tt) || is_p_constant(exp_tt)) free_pterm(exp_tt);
		} else make_bound_var(&nt, (int) efile);
		new_input(old_cur_stream, "");
	}
	*(heaptop) = nt;
	return unify(heaptop++, t);
}

struct {
	FILE *f;
	int t;
} see_stack[MAX_STREAM];
int see_stack_top = 1;

do_see(t)
int *t;
{
FILE *f;
	t = findbind(t);
	if (!is_con(t)) {
		warn_err("bad argument to see/1");
		return FALSE;
	}
	if (see_stack_top >= MAX_STREAM) fatal("see/1 stack blown");
	see_stack[see_stack_top].f = see_input; 
	see_stack[see_stack_top++].t = see_input_t; 
	if (strcmp(functors[mask(*t)].pname, "user")) {
		if (!(f = file_ready(functors[mask(*t)].pname, IO_READ)))
			return FALSE;
/*
		infile = f;
*/
		see_input = f;
		see_input_t = *t;
		return TRUE;
	} else {
		see_input = stdin;
		see_input_t = addtag(TAG_CON, USER);
		return !strcmp(functors[mask(*t)].pname, "user");
	}
}
 
do_seeing(t)
int *t;
{
	*heaptop = see_input_t;
	return unify(heaptop++, t);
}
 
do_seen(t)
int *t;
{
	if (see_input != stdin) {
		close_input(see_input);
		files_open = file_close(functors[mask(see_input_t)].pname, files_open);
	} else if (feof(stdin)) { /* restart the user stream */
	    rewind(stdin);
	    new_input(stdin, "<stdin>");
	    unreadchar(' ');
	    readchar();
	}
	if (see_stack_top <= 1) {
		warning("Too many seen/0\n");
		return TRUE;
	}
	see_stack_top--;
	see_input = see_stack[see_stack_top].f;
	see_input_t = see_stack[see_stack_top].t;
	return TRUE;
}
 
struct {
	FILE *f;
	int t;
} tell_stack[MAX_MESSAGE];
int tell_stack_top = 1;

do_tell(t)
int *t;
{
FILE *f;
	t = findbind(t);
	if (!is_con(t)) {
		warn_err("bad argument to tell/1");
		return FALSE;
	}
	if (tell_stack_top >= MAX_MESSAGE) fatal("tell/1 stack blown");
	fflush(outfile);
	tell_stack[tell_stack_top].f = outfile;
	tell_stack[tell_stack_top++].t = outfile_t;
	if (strcmp(functors[mask(*t)].pname, "user")) {
	   if (!(f = file_ready(functors[mask(*t)].pname, IO_WRITE))) 
			return FALSE;
		outfile = f;
		outfile_t = *t;
		return TRUE;
	} else {
		outfile = stdout;
		outfile_t = addtag(TAG_CON, USER);
		return !strcmp(functors[mask(*t)].pname, "user");
	}
}
 
do_telling(t)
int *t;
{
	*heaptop = outfile_t;
	return unify(heaptop++, t);
}
 
do_told()
{
	if (tell_stack_top <= 1) {
		warning("Too many told/0\n");
		return TRUE;
	}
	tell_stack_top--;
	if (outfile != stdout)
		files_open = file_close(functors[mask(outfile_t)].pname, files_open);
	outfile = tell_stack[tell_stack_top].f;
	outfile_t = tell_stack[tell_stack_top].t;
	return TRUE;
}

do_consult(t)
int *t;
{
char *s;
	t = findbind(t);
	if (!is_con(t) && !is_nil(t)) {
		warn_err("bad argument to consult/1");
		return FALSE;
	}
	s = functors[mask(*t)].pname;
	return internal_consult(s);
}

internal_consult(s)
char *s;
{
int *tmp, *nt;
FILE *o_cur_stream, *cur_fd;
	o_cur_stream = input_fd;
	if (is_clam_file(s)) return FALSE;
	if (strcmp(s, "user")) {
		if (!(input_fd = my_open(s, "r"))) {
			warn_err("Could not read file %s\n", s);
			return FALSE;
		}
		new_input(input_fd, s);
	} else {
		new_input(stdin, "<stdin>");
		input_fd = stdin;
	}
	cur_fd = input_fd;
	readfile_low(FALSE);
	compile(FALSE);
	resolve(TRUE);
	if (cur_fd != stdin) {
		fclose(cur_fd);
		close_input(cur_fd);
	} else {
		rewind(stdin);
		unreadchar(' ');
		readchar();
	}
	input_fd = o_cur_stream;
	new_input(o_cur_stream, "");
	return TRUE;
}

bool is_clam_file(s)
char *s;
{
char *t;
	if (strlen(s) < 6) return FALSE;
	t = s + (strlen(s) - 5);
	return (!strcmp(t, ".clam"));
}
	
do_reconsult(t)
int *t;
{
char *s;
	t = findbind(t);
	if (!is_con(t) && !is_nil(t)) {
		warn_err("bad argument to reconsult/1");
		return FALSE;
	}
	s = functors[mask(*t)].pname;
	return internal_reconsult(s);
}

internal_reconsult(s)
char *s;
{
FILE *o_cur_stream, *cur_fd;
int i = 2;
int *tmp, *nt;
 
	o_cur_stream = input_fd;
	if (is_clam_file(s)) return FALSE;
	if (strcmp(s, "user")) {
		if (!(input_fd = my_open(s, "r"))) return FALSE;
		new_input(input_fd, s);
	} else {
		new_input(stdin, "<stdin>");
		input_fd = stdin;
	}
	cur_fd = input_fd;
	readfile_low(TRUE);
#ifdef FREE_CODE_SPACE
	reclaim_code_space();
#endif
	compile(TRUE);
	resolve(TRUE);
	if (cur_fd != stdin) {
		fclose(cur_fd);
		close_input(cur_fd);
	}
	input_fd = o_cur_stream;
	new_input(o_cur_stream, "");
	return TRUE;
}

do_listing()
{
	return do_listing1(NULL);
}

do_listing1(t)
int *t;
{
bool success = FALSE, printed = FALSE;
RULE *r;
int i;
char *nm;
	if (t) {
		t = findbind(t);
		if (tag(*t) != TAG_CON) runtime_error("bad argument to listing/1");
		nm = functors[mask(*t)].pname;
	} else nm = (char *) NULL;
	for(i = 1; i < getmaxfunc(); i++) {
		if (p_first_rule(i) && p_compiled(i) && !p_protected(i) &&
		   ((!nm || !strcmp(nm, string_of(i))))) {
			r = p_first_rule(i);
			while (r) {
				if (!printed) fprintf(outfile, "\n");
				print_rule(r->t, 0);
				success = printed = TRUE;
				r = r->next;
			}
			printed = FALSE;
		} else if (p_compiled(i) && !p_protected(i) && !p_first_rule(i) &&
				(!nm || !strcmp(nm, functors[i].pname)))
			fprintf(outfile, "%s/%d: source unavailable.\n",
				functors[i].pname, functors[i].arity);
	}
	return success;
}

int do_clisting()
{
	return do_clisting1(NULL);
}

do_clisting1(t)
int *t;
{
int i, j, k, flag;
char *s;
RULE_ptr r;
int list_all;

	if (t) {
		t = findbind(t);
		if (tag(*t) != TAG_CON) runtime_error("bad argument to clisting/1");
		s = functors[mask(*t)].pname;
		list_all = FALSE;
	} else list_all = TRUE;
	flag = FALSE;

	for (i = 1; i < getmaxfunc(); i++) {
		if (p_compiled(i) &&
			(list_all || !strcmp(functors[i].pname, s)) && 
		    !p_protected(i)) {
			flag = TRUE;
			j = p_start_hdrcode(i);
			k = p_end_hdrcode(i);
			if (j <= k) print_asm(j, k);
			for (r = p_first_rule(i); r; r = r->next) {
				if (r->startcode) print_asm(r->startcode, r->endcode);
			}
		}
	}
	return flag;
}

init_ht_to_pterm()
{
	hterm_var_cnt = 0; /*** not 0 ***/
}

static PTERM *ht_to_pterm(t, quoted, with_dump)
int *t, quoted, with_dump;
{
PTERM *nt;
int i, j, val;
double rval;
char *buf;
PTERM *prev, *cur;
	t = findbind(t);
	if (tag(*t) == TAG_PAR) { 
		i = mask(*t);
		if (is_ground(i, &rval)) return new_real(rval);
		buf = (char *) malloc(20);
		if (with_dump) {
			if (!(j = is_pivot_var(i))) fatal("71231");
			j = j + funct_vars_top + 2*flatten_vars_top;
			sprintf(buf, "_%d", j);
			return new_pt_var(j, buf);
		} else {
			if (!(j = find_heap_addr(-i))) {
				if (hterm_var_cnt >= MAX_VAR_IN_HEAP) 			
			 		fatal("too many variables in term to assert");
				heap_varval[++hterm_var_cnt] = -i;
				sprintf(buf, "_%d", i);
				return new_pt_var(hterm_var_cnt, buf);
			} else {
				sprintf(buf, "_%d", j);
				return new_pt_var(j, buf);
			}
		}
	} else if (tag(*t) == TAG_CON) {
		nt = new_pterm();
		nt->ty = FUNC;
		nt->narg = 0;
		nt->str = string_of(*t);
		nt->val = mask(*t);
		return nt;
	} else if (tag(*t) == TAG_NIL) 
		return new_pt_emptylist(EMPTYLIST, 0, "[]");
	else if (is_unbound_var(*t) || is_daemon(t)) {
		buf = (char *) malloc(20);
		if (with_dump) {
			if (!(j = is_funct_var(t))) {
				if (j = heap_to_pivot_var(t)) j += funct_vars_top + 2*flatten_vars_top;
				else if (!(j = heap_to_free_var(t))) {
					printterm(stdout,t,0);
					fatal("37832");
				}
			}
			sprintf(buf, "_%d", j);
			return new_pt_var(j, buf);
		} else {
			if ((j = find_heap_addr(t))) {
				sprintf(buf, "_%d", j);
				return new_pt_var(j, buf);
			}
			if (hterm_var_cnt >= MAX_VAR_IN_HEAP) 			
		 		fatal("too many variables in term to assert");
			heap_varval[++hterm_var_cnt] = (int) t;
			sprintf(buf, "_%d", hterm_var_cnt);
			return new_pt_var(hterm_var_cnt, buf);
		}
	} else if (tag(*t) == TAG_STR) {
		val = mask(*t);
		if (is_val_hat(val)) {
/* BUG */
			if (val == HAT_QUOTEVAL && !quoted) return ht_to_pterm(t + 1, TRUE,with_dump);
			if (!quoted) val = get_evaled_func(val);
		}
		prev = (PTERM *) NULL;
		nt = new_pterm();
		nt->ty = FUNC;
		nt->narg = arity_of(val);
		nt->str = string_of(val);
		nt->val = val;
		for (i = nt->narg; i >= 1; i--) {
			cur = ht_to_pterm(t + i, quoted, with_dump);
			cur->next = prev;
			prev = cur;
		}
		nt->first = prev;
		nt->next = (PTERM *) NULL;
		return nt;
	} else if (tag(*t) == TAG_CONS) {
		nt = new_pterm();
		nt->ty = FUNC;
		nt->narg = 2;
		nt->str = string_of(DOT);
		nt->val = DOT;
		nt->first = ht_to_pterm(head_of(t), quoted, with_dump);
		nt->next = (PTERM *) NULL;
		nt->first->next = ht_to_pterm(tail_of(t), quoted, with_dump);
		nt->first->next->next = (PTERM *) NULL;
		return nt;
	} else fatal("815381");
}

int find_heap_addr(v)
int v;
{
int i;
	for (i = 1; i <= hterm_var_cnt; i++) if (heap_varval[i] == v) return i;
	return 0;
}


do_fasserta(t)
int *t;
{
int i;
PTERM *nt;
RULE_ptr r, first_rule;
int first_code, first_flag;
	t = findbind(t);
	if (!is_con(t) && !is_func(t)) {
		warn_err("bad argument to assert/1 or assertz/1");
		return FALSE;
	}
	init_ht_to_pterm();
	nt = ht_to_pterm(t, FALSE, FALSE);
	i = (head_of_rule(nt))->val;
	if (p_protected(i)) {
		warn_err("assert failed: %s/%d is protected",
			string_of(i), arity_of(i));
		return FALSE;
	}
	if (!p_dynamic(i)) {
		warn_err("assert failed: %s/%d is not dynamic",
			string_of(i), arity_of(i));
		return FALSE;
	}
	pcode = epcode;
	init_lable();
	if (p_compiled(i)) {
		first_rule = p_first_rule(i);
		r = new_rule();
		r->next = first_rule;
		r->t = nt;
		r->wt = nt;
		if ((r->id = first_rule->id - 1) == 0) r->id = -1;
		first_flag = FALSE;
	} else { 
		first_rule = (RULE *) NULL;
		r = new_rule();
		r->next = (RULE *) NULL;
		r->t = nt;
		r->wt = nt;
		r->id = 1;
		assign_p_last_rule(i, r);
		first_flag = TRUE;
	}
	r->startcode = pcode;
	current_rule = r;
	check_codespace(pcode);
	compile_rule(r->wt, -1);
	check_codespace(pcode);
	r->endcode = pcode - 1;
	assign_p_first_rule(i, r);
	if (first_flag) {
		assign_p_start_hdrcode(i, pcode);
		emit_dynamic_try(i);
		assign_p_end_hdrcode(i, pcode - 1);
		assign_p_compiled(i, TRUE);
	}
	if (!first_rule) assign_p_last_compiled_rule(i, r);
	epcode = pcode;
	resolve(TRUE);
	return TRUE;
}

do_fassertz(t)
int *t;
{
int i;
PTERM *nt;
RULE_ptr r, prev_rule;
int first_flag;
	t = findbind(t);
	if (!is_con(t) && !is_func(t)) {
		warn_err("bad argument to assert/1 or assertz/1");
		return FALSE;
	}
	init_ht_to_pterm();
	nt = ht_to_pterm(t, FALSE, FALSE);
	i = (head_of_rule(nt))->val;
	if (p_protected(i)) {
		warn_err("assert failed: %s/%d is protected",
			functors[i].pname, functors[i].arity);
		return FALSE;
	}
	if (!p_dynamic(i)) {
		warn_err("assert failed: %s/%d is not dynamic",
			functors[i].pname, functors[i].arity);
		return FALSE;
	}
	pcode = epcode;
	init_lable();
	if (p_compiled(i)) {
		prev_rule = p_last_rule(i);
		r = store_rule(nt, nt, FALSE);
		first_flag = FALSE;
	} else { 
		prev_rule = (RULE *) NULL;
		r = store_rule(nt, nt, FALSE);
		assign_p_first_rule(i, r);
		first_flag = TRUE;
	}
	r->startcode = pcode;
	current_rule = r;
	check_codespace(pcode);
	compile_rule(r->wt, -1);
	check_codespace(pcode);
	r->endcode = pcode - 1;
	if (first_flag) {
		assign_p_start_hdrcode(i, pcode);
		emit_dynamic_try(i);
		assign_p_end_hdrcode(i, pcode-1);
		assign_p_compiled(i, TRUE);
	}
	assign_p_last_rule(i, r);
	assign_p_last_compiled_rule(i, r);
	epcode = pcode;
	resolve(TRUE);
	return TRUE;
}


do_asserta(t)
int *t;
{
	return do_assert_rule(t, TRUE);
}

do_assertz(t)
int *t;
{
	return do_assert_rule(t, FALSE);
}

do_assert_rule(t, start)
int *t, start;
{
int i;
PTERM *nt;
RULE_ptr r, first_rule;
int first_code;
int *dump_constraints;
PTERM *c, *clist, *slist;
int *head, *body, *lastc, *new_term;
int **new_vars;
int last_flag = FALSE, first_flag = FALSE;

	t = findbind(t);
	if (!is_con(t) && !is_func(t)) {
		warn_err("bad argument to assert/1 or assertz/1");
		return FALSE;
	}
	dump_constraints = get_rule_constraints(t);
	init_ht_to_pterm();
	if (is_nil(dump_constraints)) {
		new_term = t;
		nt = ht_to_pterm(new_term, FALSE, TRUE);
		goto ADD;
	}
	lastc = end_of_constraints(dump_constraints);
	if (mask(*t) == IMPL) {
		make_bound_var(lastc + 2, t + 2);
		nt = new_p_func2(IMPL,
			ht_to_pterm(t + 1, FALSE, TRUE), 
			ht_to_pterm(dump_constraints, FALSE, TRUE));
	} else { 
		make_bound_var(lastc, lastc[1]);
		nt = new_p_func2(IMPL,
			ht_to_pterm(t, FALSE, TRUE), 
			ht_to_pterm(dump_constraints, FALSE, TRUE));
	}	
	make_bound_var(heaptop++, dump_constraints);
	heaptop++;	
ADD:
	cleanup_dump();
	i = (head_of_rule(nt))->val;
	if (p_protected(i)) {
		warn_err("assert failed: %s/%d is protected",
			string_of(i), arity_of(i));
		return FALSE;
	}
	if (!p_dynamic(i)) {
		warn_err("assert failed: %s/%d is not dynamic",
			string_of(i), arity_of(i));
		return FALSE;
	}
	pcode = epcode;
	init_lable();
	if (start) {
		r = new_rule();
		r->t = r->wt = nt;
		if (p_compiled(i)) {
			first_rule = p_first_rule(i);
			r->next = first_rule;
			/* avoid special value of 0 */
			if ((r->id = first_rule->id - 1) == 0) r->id = -1;	
		} else {
			r->next = (RULE_ptr) NULL;
			r->id = 1;
			assign_p_last_rule(i, r);
			last_flag = TRUE;
			first_flag = TRUE;	/* first time needs headers */
		}
	} else {
		r = store_rule(nt, nt, FALSE);
		if (!p_compiled(i)) {
			assign_p_first_rule(i, r);
			first_flag = TRUE;
		}
		last_flag = TRUE;
	}
	r->startcode = pcode;
	current_rule = r;
	check_codespace(pcode);
	compile_rule(r->wt, -1);
	check_codespace(pcode);
	r->endcode = pcode - 1;
	if (start) assign_p_first_rule(i, r);
	else assign_p_last_rule(i, r);
	if (first_flag) {
		assign_p_start_hdrcode(i, pcode);
		emit_dynamic_try(i);
		assign_p_end_hdrcode(i, pcode - 1);
		assign_p_compiled(i, TRUE);
	}
	if (last_flag) assign_p_last_compiled_rule(i, r);
	epcode = pcode;
	resolve(TRUE);
	return TRUE;
}

do_retractall()
{
int i, k;
char *s;
	for(i = 1; i < getmaxfunc(); i++) {
		if (p_compiled(i) && !p_protected(i)) {
			delete_all_rules(i);
			assign_p_first_rule(i, NULL);
			assign_p_compiled(i, FALSE);
			assign_p_cut(i, FALSE);
			assign_p_spy(i, FALSE);
			delete_lable(i);
		}
	}
	return TRUE;
}

do_retractoneall(t)
int *t;
{
int val;

	t = findbind(t);
	if (!is_func(t) && !is_con(t)) 
		runtime_error("bad argument to retractall/1");
	if ((val = mask(*t)) == IMPL) {
		t = findbind(t + 1);
		if (!is_func(t) && !is_con(t)) 
			runtime_error("bad argument to retractall/1");
		val = mask(*t);
	} else val = mask(*t);
	if (p_protected(val)) 
		runtime_error("retractall failed: %s/%d is protected",
				string_of(val), arity_of(val));
	if (!p_dynamic(val))
		runtime_error("retract failed: %s/%d is not dynamic",
				string_of(val), arity_of(val));
	if (!p_compiled(val)) return TRUE; /* always return true */
	delete_all_rules(val);
	assign_p_first_rule(val, NULL);
	assign_p_compiled(val, FALSE);
	assign_p_cut(val, FALSE);
	assign_p_spy(val, FALSE);
	delete_lable(val);
	/** CHECK **/
	/* made top_free_things to be a dummy */
	top_free_things(); /* UNSAFE but temporary */
	return TRUE;
}

do_flush()
{
	fflush(outfile);
	return TRUE;
}

#if (!HAS_FORK || !HAS_PIPE)
do_oracle(t1, t2, t3)
int *t1, *t2, *t3;
{
	warn_err("No oracle/3 on ", NATIVE_OS);
	return FALSE;
}
#else
do_oracle(t1, t2, t3)
int *t1, *t2, *t3;
{
char *s, *p1, *p2;
int fildes1[2];
int fildes2[2];
int p_pid;
IO_REC *tt;
	t1 = findbind(t1);
	if (!is_con(t1)) {
		warn_err("bad first argument to oracle/3");
		return FALSE;
	}
	t2 = findbind(t2);
	if (!is_con(t2)) {
		warn_err("bad second argument to oracle/3");
		return FALSE;
	}
	t3 = findbind(t3);
	if (!is_con(t3)) {
		warn_err("bad third argument to oracle/3");
		return FALSE;
	}
	s = functors[mask(*t1)].pname;
	p1 = functors[mask(*t2)].pname;
	p2 = functors[mask(*t3)].pname;
	if (file_is_open(p1, IO_READ, files_open) ||
        file_is_open(p1, IO_WRITE, files_open) ||
        file_is_open(p2, IO_READ, files_open) ||
        file_is_open(p2, IO_WRITE, files_open)) fatal("oracle/3 failed");
	if (pipe(fildes1) || pipe (fildes2)) fatal("oracle/3 failed");
	if ((p_pid = fork ()) == 0) {
	   close (fildes1[1]);
	   close (0);
	   dup(fildes1[0]);
	   close (fildes1[0]);
	   close (fildes2[0]);
	   close (1);
	   dup(fildes2[1]);
	   close (fildes2[1]);
	   execlp (s, s, 0);
	}
	if (p_pid == -1) fatal("fork creation unsuccessful in oracle/3");
	close (fildes1[0]);
	close (fildes2[1]);
	tt = (IO_REC *) emalloc(sizeof(IO_REC));
	tt->fio = fdopen(fildes1[1], "w");
	tt->s = p1;
	tt->mode = IO_WRITE;
	tt->next = files_open;
	files_open = tt;
	tt = (IO_REC *) emalloc(sizeof(IO_REC));
	tt->fio = fdopen(fildes2[0], "r");
	tt->s = p2;
	tt->mode = IO_READ;
	tt->next = files_open;
	files_open = tt;
	return TRUE;
}
#endif

#if (!HAS_PIPE)
do_pipe(t)
int *t;
{
	warn_err("No pipe/1 on %s", NATIVE_OS);
	return FALSE;
}
#else
do_pipe(t)
int *t;
{
char *s;
int fildes[2];
IO_REC *tt;
	t = findbind(t);
	if (!is_con(t)) runtime_error("bad argument to pipe/1");
	s = functors[mask(*t)].pname;
	if (file_is_open(s, IO_READ, files_open) || 
	    file_is_open(s, IO_WRITE, files_open)) 	runtime_error("pipe/1 failed");
	if (pipe(fildes)) runtime_error("pipe/1 failed");
	tt = (IO_REC *) emalloc(sizeof(IO_REC));
	tt->fio = fdopen(fildes[0], "r");
	tt->s = s;
	tt->mode = IO_READ;
	tt->next = files_open;
	tt->dual = TRUE;
	files_open = tt;
	tt = (IO_REC *) emalloc(sizeof(IO_REC));
	tt->fio = fdopen(fildes[1], "w");
	tt->s = s;
	tt->mode = IO_WRITE;
	tt->next = files_open;
	tt->dual = TRUE;
	files_open = tt;
	return TRUE;
}
#endif

#if (!HAS_FORK)
do_fork()
{
	warn_err("No fork/0 on %s", NATIVE_OS);
	return FALSE;
}
#else
do_fork()
{
	if (fork()) return TRUE;
	else return FALSE;
}
#endif

do_edit(t)
int *t;
{
char *s, *p, *command, cmd[MAX_MESSAGE];
	t = findbind(t);
	if (!is_con(t)) runtime_error("bad argument to edit/1");
	s = functors[mask(*t)].pname;
	if (!(p = (char *) getenv("EDITOR"))) p = DEF_EDITOR;
#if defined(MSDOS) || defined(OS2V2)
	sprintf(cmd, "%s /c %s %s", command_interpreter(), p, s);
#else
	sprintf(cmd, "%s %s", p, s);
#endif
	if (strlen(cmd) >= MAX_MESSAGE - 1) runtime_error("editor name too long"); 
	if (system(cmd)) return FALSE;
	return internal_reconsult(s);
}

do_more(t)
int *t;
{
char *s, *p, cmd[MAX_MESSAGE];
	t = findbind(t);
	if (!is_con(t)) runtime_error("bad argument to more/1");
	s = functors[mask(*t)].pname;
#if defined(MSDOS) || defined(OS2V2)
	if (!(p = getenv("PAGER"))) p = "more";
	sprintf(cmd, "%s /c %s <%s", command_interpreter(), p, s);
#else
	if (!(p = getenv("PAGER"))) p = "more";
	sprintf(cmd, "%s %s", p, s);
#endif
	if (strlen(cmd) >= MAX_MESSAGE - 1) runtime_error("more name too long"); 
	return (!system(cmd));
}

do_halt()
{
	files_shutdown();
	exit(0);
}

do_abort()
{
	interrupt();
}

do_sh()
{
char *s;
#if defined(MSDOS) || defined(OS2V2)
	return system(command_interpreter());
#else
	return system("/bin/sh");
#endif
}
 
do_csh()
{
char *s;
#if defined(MSDOS) || defined(OS2V2)
	return system(command_interpreter());
#else
	return system("/bin/csh");
#endif
}

int seed = 16;
cmd_ranseed(i)
int i;
{
	seed = i;
}

do_srand(t)
int *t;
{
double val;
	t = findbind(t);
	if (!is_num(t, &val)) {
		warn_err("bad argument to srand/1");
		return FALSE;
	}
	seed = (int) val;
	return TRUE;
}
 
do_rand(t) /* Linear Congruential Pseudo Random Number Generator (Knuth II) */
int *t;
{
int *tmp;
double r;
	t = findbind(t);
	if (!(is_unbound_var(*t) || is_daemon(t))) {
		warn_err("bad argument to rand/1");
		return FALSE;
	}
	seed = (seed * (1 + 4 * 37 * 109) + 9999) % (32 * 1024);
	r = (((double) seed / (double) (32 * 1024)));
	makenum(++solver_id, r);
	*heaptop = addtag(TAG_PAR, solver_id);
	tmp = heaptop++;
	unify(tmp, t);
	return TRUE;
}

do_ground(t)
int *t;
{
int k;
double val;
	t = findbind(t);
	if (is_unbound_var(*t) || is_daemon(t)) return FALSE;
	switch ((unsigned) tag(*t)) {
	case TAG_CON:
	case TAG_NIL: return TRUE;
	case TAG_PAR: return (is_ground(mask(*t), &val) ? TRUE : FALSE);
	case TAG_STR:		
		for (k = 1; k <= functors[mask(*t)].arity; k++) 
			if (!do_ground(t + k)) return FALSE;
		return TRUE;
	case TAG_CONS:
		if (!do_ground(pmask(*t))) return FALSE;
		if (!do_ground((int *) (pmask(*t)) + 1)) return FALSE;
		return TRUE;
	} 
	fatal("89422");
}
	
do_nonground(t)
int *t;
{
	return (do_ground(t) ? FALSE : TRUE);
}
 
do_var(t)
int *t;
{
double dummy;
	t = findbind(t);
	return (is_unbound_var(*t) || is_daemon(t) || 
		(is_param(t) && !is_num(t, &dummy)));
}

do_nonvar(t)
int *t;
{
	return (!do_var(t));
}

do_arithmetic(t)
int *t;
{
	t = findbind(t);
	return is_param(t);
}
 
do_functor1(t)
int *t;
{
	t = findbind(t);
	return (is_func(t) || is_cons(t));
}

do_atom(t)
int *t;
{
	t = findbind(t);
	return (is_con(t) || is_nil(t));
}

do_atomic(t)
int *t;
{
double val;
	t = findbind(t);
	return (is_con(t)|| is_nil(t) || is_num(t, &val));
}


do_functor3(t1, t2, t3)  /*** functor(term, name, arity) modes: +?? ?++ ***/ 
int *t1, *t2, *t3;
{
int val, val1, arity;
char *name;
double f_arity;
	t1 = findbind(t1);
	if (!is_unbound_var(*t1)) {
		if (is_func(t1) || is_con(t1)) {
			val = mask(*t1);
			arity = arity_of(val);
			name = string_of(val);
			if (!make_a_con(t2, hashbuiltina(name, 0))) return FALSE;
			if (!make_a_num(t3, (double) arity)) return FALSE;
			return TRUE;
		} else if (is_cons(t1)) {
			if (!make_a_con(t2, hashbuiltina(".", 0))) return FALSE;
			if (!make_a_num(t3, 2.0)) return FALSE;
			return TRUE;
		} else if (is_nil(t1)) {
			if (!make_a_nil(t2)) return FALSE;
			if (!make_a_num(t3, 0.0)) return FALSE;
			return TRUE;
		} else return FALSE;
	}
	t2 = findbind(t2);
	t3 = findbind(t3);
	if (is_unbound_var(t2) || (!is_con(t2) && !is_nil(t2))) return FALSE;
	if (is_unbound_var(t3) || !is_num(t3, &f_arity)) return FALSE;

	val1 = mask(*t2);
	arity = (int) f_arity;
	if (arity == 0) 
		if (is_con(t2))
			return make_a_con(t1, hashbuiltina(string_of(val1), arity));
		else return make_a_nil(t1);
	if (arity == 2 && strcmp(string_of(val1), ".") == 0) {
		if (!make_a_new_list(t1)) return FALSE;
		if (have_runable && !wake_runable()) return FALSE;
	} else {
		if (!make_a_new_fun(t1, hashbuiltina(string_of(val1), arity), arity))
			return FALSE;
		if (have_runable && !wake_runable()) return FALSE;
	}
	return TRUE;
}


do_arg(t1, t2, t3)  /*** oops:
					arg(+i, +func, arg) previously was
					arg(func, i, arg) modes: ++? ***/
int *t1, *t2, *t3;
{
double f_arity;
int *arg, *arg1, n, arity;
	t1 = findbind(t1);
	if (is_unbound_var(*t1) || !is_num(t1, &f_arity)) return FALSE;
	t2 = findbind(t2);
	if (is_unbound_var(*t2)) return FALSE;
	arity = (int) f_arity;
	if (is_func(t2)) {
		n = arity_of(mask(*t2));
		if (arity < 1 || arity > n) return FALSE;
		return unify(t2 + arity, t3);
	} else if (is_cons(t2)) {
		if (arity < 1 || arity > 2) return FALSE;
		return unify(((int *) pmask(*t2))+arity-1, t3);
	}
	return FALSE;
}

/* arg(func, i, arg) modes: ++? */
do_replace_arg(t1, t2, t3)
int *t1, *t2, *t3;
{
double f_arity;
int *arg, *arg1, n, arity;
	t1 = findbind(t1);
	if (is_unbound_var(*t1)) return FALSE;
	t2 = findbind(t2);
	if (is_unbound_var(*t2) || !is_num(t2, &f_arity)) return FALSE;
	arity = (int) f_arity;
	t3 = findbind(t3);
	if (is_func(t1)) {
		n = arity_of(mask(*t1));
		arg = t1 + arity;
		if (arity < 1 || arity > n) return FALSE;
		if (is_unbound_var(*arg)) return unify(arg, t3);
		else {
			push_destructive_trail(arg, *arg);
			if (is_unbound_var(*t3)) {
				make_unbound_var(arg);
				return unify(arg, t3);
			} else make_bound_var(arg, t3);
		}
		return TRUE;
	} else if (is_cons(t1)) {
		if (arity < 1 || arity > 2) return FALSE;
		arg = ((int *) pmask(*t1))+arity-1;
		if (is_unbound_var(*arg)) return unify(arg, t3);
		else {
			push_destructive_trail(arg, *arg);
			if (is_unbound_var(*t3)) {
				make_unbound_var(arg);
				return unify(arg, t3);
			} else make_bound_var(arg, t3);
		}
		return TRUE;
	}
	return FALSE;
}

do_occurs(t1, t2)
int *t1, *t2;
{
	t1 = findbind(t1);
	t2 = findbind(t2);
	if (!(is_unbound_var(*t1) || is_daemon(t1) || is_param(t1))) {
		warn_err("bad first argument to occurs/2");
		return FALSE;
	}
	return occurs(t1, t2);
}
 
occurs(vspot, t)
int *vspot, *t;
{
int j;
	if (is_unbound_var(*t) || is_daemon(t)) {
		if (t == vspot && !is_param(vspot)) return TRUE;
		else return FALSE;
	} else if (is_param(t)) {
		if (is_param(vspot) && equal_param(mask(*t), mask(*vspot))) 
			return TRUE;
		else return FALSE;
	} else if (is_func(t)) {
		for (j = 1; j <= functors[mask(*t)].arity; j++)
			if (occurs(vspot, findbind(t + j))) return TRUE;
	} else if (is_cons(t)) {
		if (occurs(vspot, findbind(head_of(t)))) return TRUE;
		if (occurs(vspot, findbind(tail_of(t)))) return TRUE;
	}
	return FALSE;
}

do_eqeq(t1, t2)
int *t1, *t2;
{
double v1, v2;
int i, n;

	t1 = findbind(t1);
	t2 = findbind(t2);
	if (is_unbound_var(*t1)) {
		if (t1 == t2 && is_unbound_var(*t2)) return TRUE;
	} else if (is_con(t1)) {
		if (is_con(t2) && mask(*t1) == mask(*t2)) return TRUE;
	} else if (is_nil(t1)) {
		if (is_nil(t2)) return TRUE;
	} else if (is_cons(t1)) {
		if (is_cons(t2)) {
			if (do_eqeq(head_of(t1), head_of(t2)) &&
					do_eqeq(tail_of(t1), tail_of(t2)))
				return TRUE;
		}
	} else if (is_param(t1)) {
		if (is_ground(mask(*t1), &v1)) {
			if (is_num(t2, &v2) && is_equal(v1, v2)) return TRUE;
		} else if (is_param(t2) && equal_param(mask(*t1), mask(*t2)))
			return TRUE;
	} else if (is_daemon(t1)) {
		if (t1 == t2 && is_daemon(t2)) return TRUE;
	} else if (is_func(t1)) {
		if (!is_func(t2) || mask(*t1) != mask(*t2)) return FALSE;
		n = arity_of(mask(*t1));
		for (i = 1; i <= n; i++)
			if (!do_eqeq(t1 + i, t2 + i)) return FALSE;
		return TRUE;
	} else fatal("71881");
	return FALSE;
}
	
do_floor(t1, t2)
int *t1, *t2;
{
double c1, c2;
	t1 = findbind(t1);
	if (!is_num(t1, &c1)) {
		warn_err("bad first argument to floor/2");
		return FALSE;
	}
	c1 = floor(c1);
	t2 = findbind(t2);
	return make_a_num(t2, c1);
}

do_op3(t1, t2, t3)
int *t1, *t2, *t3;
{
double val;
char *opname, *style;
	t1 = findbind(t1);
	if (!is_num(t1, &val)) {
		warn_err("bad first argument to op/3");
		return FALSE;
	}
	if ((val != ((int) val))
			|| val < MIN_OP_PRECEDENCE-1 || val > MAX_OP_PRECEDENCE) {
		warn_err("bad first argument to op/3");	
		return FALSE;
	}
	t2 = findbind(t2);
	if (!is_con(t2)) {
		warn_err("bad second argument to op/3");
		return FALSE;
	}
	t3 = findbind(t3);
	if (!is_con(t3)) {
		warn_err("bad third argument to op/3");
		return FALSE;
	}
	opname = functors[mask(*t3)].pname;
	style = functors[mask(*t2)].pname;
	if (do_op(opname, style, (int) val)) return TRUE;
	else {
		warn_err("bad second argument to op/3");
		return FALSE;
	}
}

do_hide(t1, t2)
int *t1, *t2;
{
	runtime_error("hide/2 not yet implemented");
}

do_prot(t1, t2)
int *t1, *t2;
{
double val;
int i;
char *nm;
int arity;
RULE *r;
	t1 = findbind(t1);
	if (!is_con(t1)) {
		warn_err("bad first argument to prot/2");
		return FALSE;
	}
	nm = functors[mask(*t1)].pname;
	t2 = findbind(t2);
	if (!is_num(t2, &val)) {
		warn_err("bad second argument to prot/2");
		return FALSE;
	}
	arity = val;  
	for (i = 1; i < getmaxfunc(); i++)
		if (p_compiled(i)) {
			if (!strcmp(functors[i].pname, nm) && functors[i].arity == arity) {
				assign_p_protected(i, TRUE);
				return TRUE;
		}
	}
	return FALSE;
}

do_ztime()
{
#ifndef CC_CSET    
	get_user_time(&basetime);
#else	
	basetime = clock();
#endif
	return TRUE;
}

do_ctime(t)
int *t;
{
long t1, t2;
double t3;
int *tmp;
	t = findbind(t);
	if (!(is_unbound_var(*t) || is_daemon(t))) {
		warn_err("bad argument to ctime/1\n");
		return FALSE;
	}
#ifndef CC_CSET
	get_user_time(&curtime);
#else
	curtime = clock();
#endif
#if (defined(SYS5) | (defined(OS2V2) & !defined(CC_CSET)))
	if ((t3 = (double) (curtime.tms_utime-basetime.tms_utime)) < 0.0) t3 = 0.0;
	t3 = t3 / (double) HZ;  
#endif
#if defined(BSD) && !defined(OS2V2)
	t1 = curtime.tv_sec - basetime.tv_sec;
	t2 = curtime.tv_usec - basetime.tv_usec;
	t3 = ((double) t1) + ((double) t2) / U_SEC;
#endif
#ifdef CC_CSET
	t3 = ((double) (curtime - basetime))/CLOCKS_PER_SEC;
#endif
	tmp = heaptop;
	makenum(++solver_id, t3);
	*(heaptop++) = addtag(TAG_PAR, solver_id);
	unify(t, tmp);
	return TRUE;
}

#if (defined(SYS5) | (defined(OS2V2) & !defined(CC_CSET)))
get_user_time(time)
struct tms *time;
{
	times(time);
}
#endif
#if defined(BSD) && !defined(OS2V2)
get_user_time(time)
struct timeval *time;
{
struct rusage usg;
	getrusage(RUSAGE_SELF, &usg);
	time->tv_sec = usg.ru_utime.tv_sec;
	time->tv_usec = usg.ru_utime.tv_usec;
}
#endif

do_history()
{
	printhist(0);
	return TRUE;
}

do_history1(t)
int *t;
{
double val;
	t = findbind(t);
	if (!is_num(t, &val)) {
		warn_err("bad argument to history/1");
		return FALSE;
	}
	printhist((int) val);
	return TRUE;
}

do_nl()
{
	fprintf(outfile, "\n");
	return TRUE;
}

do_debugging()
{
int i;
RULE *r;
	fprintf(outfile, "\n");
	for(i = 1; i < getmaxfunc(); i++) {
		if (p_spy(i) && p_compiled(i))
			fprintf(outfile, "%s/%d\n", functors[i].pname, functors[i].arity);
	}
	fprintf(outfile, "\n");
	return TRUE;
}

do_codegen_debug()
{
	CODEGEN_DEBUG = TRUE;
	return TRUE;
}

do_codegen_nodebug()
{
	CODEGEN_DEBUG = FALSE;
	return TRUE;
}

do_spy()
{
int i;
	for(i = 1; i < getmaxfunc(); i++)
		if (p_compiled(i) && !p_protected(i) && !p_spy(i))
			 assign_p_spy(i, TRUE);
	return TRUE;
}

do_nospy()
{
int i;
	for(i = 1; i < getmaxfunc(); i++)
		if (p_compiled(i) && p_spy(i)) assign_p_spy(i, FALSE);
	return TRUE;
}

do_spy2(t1, t2)
int *t1, *t2;
{
double val;
int i, arity;
char *s;
	t1 = findbind(t1);
	if (!is_con(t1)) {
		warn_err("bad first argument to spy/2");
		return FALSE;
	}
	s = functors[mask(*t1)].pname;
	t2 = findbind(t2);
	if (!is_num(t2, &val)) {
		warn_err("bad second argument to spy/2"); 
		return FALSE;
	}
	arity = (int) val;
	for(i = 1; i < getmaxfunc(); i++) {
		if (p_compiled(i) &&
		    !strcmp(functors[i].pname, s) && 
		    functors[i].arity == arity &&
		    !p_protected(i)) {
				assign_p_spy(i, TRUE);
				return TRUE;
		}
	}
	return FALSE;
}

do_nospy2(t1, t2)
int *t1, *t2;
{
double val;
int i, arity;
char *s;
	t1 = findbind(t1);
	if (!is_con(t1)) warn_err("bad first argument to spy/2");
	s = functors[mask(*t1)].pname;
	t2 = findbind(t2);
	if (!is_num(t2, &val)) warn_err("bad second argument to spy/2"); 
	arity = (int) val;
	for(i = 1; i < getmaxfunc(); i++) {
		if (p_compiled(i) &&
		    !strcmp(functors[i].pname, s) && 
		    functors[i].arity == arity &&
		    !p_protected(i)) {
				assign_p_spy(i, FALSE);
				return TRUE;
		}
	}
	return FALSE;
}

do_warning(t)
int *t;
{
	t = findbind(t);
	if (!is_con(t)) {
		warn_err("bad argument to warning/1");
		return FALSE;
	}
	if (!strcmp(string_of(mask(*t)), "abort")) WARN_ABORT = TRUE;
	else if (!strcmp(string_of(mask(*t)), "continue")) WARN_ABORT = FALSE;
	else if (!strcmp(string_of(mask(*t)), "warning_on")) WARNING_FLAG = TRUE;
	else if (!strcmp(string_of(mask(*t)), "warning_off")) WARNING_FLAG = FALSE;
	else if (!strcmp(string_of(mask(*t)), "redefine_on")) REDEFINE_FLAG = TRUE;
	else if (!strcmp(string_of(mask(*t)), "redefine_off")) REDEFINE_FLAG = FALSE;
	else {
		warn_err("bad argument to warning/1");
		return FALSE;
	}
	return TRUE;
}

do_implicit()
{
	IMPLICIT = TRUE;
	PARTIAL_IMPLICIT = FALSE;
	return TRUE;
}

do_no_implicit()
{
	IMPLICIT = FALSE;
	PARTIAL_IMPLICIT = FALSE;
	return TRUE;
}

do_partial_implicit()
{
	IMPLICIT = TRUE;
	PARTIAL_IMPLICIT = TRUE;
	return TRUE;
}

do_trace()
{
	TRACE = TRUE;
	return TRUE;
}

do_notrace()
{
	TRACE = FALSE;
	return TRUE;
}

do_clam_trace()
{
	CLAM_TRACE = TRUE;
	return TRUE;
}

do_clam_notrace()
{
	CLAM_TRACE = FALSE;
	return TRUE;
}

do_compile(t1, t2)
int *t1, *t2;
{
	runtime_error("compile/2 not yet implemented");
}

do_dynamic(t1, t2)
int *t1, *t2;
{
double arity;
int val;
PTERM *nt;
char *str;
	t1 = findbind(t1);
	t2 = findbind(t2);
	if (!is_con(t1)) 
		warn_err("bad first argument to dynamic/2 -- constant required");
	if (!is_num(t2, &arity))
		warn_err("bad second argument to dynamic/2 -- number required");
	str = string_of(mask(*t1));
	val = hashbuiltina(str, (int) arity);
	if (p_compiled(val) && !p_dynamic(val)) 
		warning("%s/%d already compiled, too late to make dynamic (ignored)",
			string_of(val), arity_of(val));
	else assign_p_dynamic(val, TRUE);
	return TRUE;
}

do_e_stats()
{
#ifdef STATS
	print_e_stats();
#else
	fprintf(outfile, "No stats - recompile with -DSTATS");
#endif
	return TRUE;
}

do_s_stats()
{
#ifdef STATS
	print_s_stats();
#else
	fprintf(outfile, "No stats - recompile with -DSTATS");
#endif
	return TRUE;
}

do_stats()
{
#ifdef STATS
	print_stats();
#else
	fprintf(outfile, "No stats - recompile with -DSTATS");
#endif
	return TRUE;
}

do_dump_tableaus()
{
	print_eq_tableau();
	print_ineq_tableau();
	/*
	print_nlins();
	check_tableaus();
	*/
	return TRUE;
}

get_quoted_func(v)
int v;
{
	switch (v) {
		case PLUSVAL: return HAT_PLUSVAL;
		case U_MINUSVAL: return HAT_U_MINUSVAL;
		case MINUSVAL: return HAT_MINUSVAL;
		case MULTVAL: return HAT_MULTVAL;
		case DIVVAL: return HAT_DIVVAL;
		case SINVAL: return HAT_SINVAL;
		case ARCSINVAL: return HAT_ARCSINVAL;
		case COSVAL: return HAT_COSVAL;
		case ARCCOSVAL: return HAT_ARCCOSVAL;
		case ABSVAL: return HAT_ABSVAL;
		case MINVAL: return HAT_MINVAL;
		case MAXVAL: return HAT_MAXVAL;
		case POWVAL: return HAT_POWVAL;
		case EVALVAL: return HAT_EVALVAL;
		case QUOTEVAL: return HAT_QUOTEVAL;
		default: fatal("63211");
	}
}

get_evaled_func(v)
int v;
{
	switch (v) {
		case HAT_PLUSVAL: return PLUSVAL;
		case HAT_U_MINUSVAL: return U_MINUSVAL;
		case HAT_MINUSVAL: return MINUSVAL;
		case HAT_MULTVAL: return MULTVAL;
		case HAT_DIVVAL: return DIVVAL;
		case HAT_SINVAL: return SINVAL;
		case HAT_ARCSINVAL: return ARCSINVAL;
		case HAT_COSVAL: return COSVAL;
		case HAT_ARCCOSVAL: return ARCCOSVAL;
		case HAT_ABSVAL: return ABSVAL;
		case HAT_MINVAL: return MINVAL;
		case HAT_MAXVAL: return MAXVAL;
		case HAT_POWVAL: return POWVAL;
		case HAT_EVALVAL: return EVALVAL;
		case HAT_QUOTEVAL: return QUOTEVAL;
		default: fatal("63212");
	}
}

static heapify_pterm(t, hp, quoted)
PTERM *t;
int *hp, quoted;
{
int v, n, *start, *s, heap_func_val;
int *t1;
PTERM *arg;
	switch (t->ty) {
	case REAL:
		makenum(++solver_id, t->rval);
		return addtag(TAG_PAR, solver_id);
	case VAR:
		if (!hp) fatal("81811");
		if (t->val >= MAX_VAR_IN_HEAP) fatal("too many variables in term");
		if (var_heapval[t->val]) return var_heapval[t->val];
		else {
			var_heapval[t->val] = (int) hp;
			if (t->val > pterm_var_cnt) pterm_var_cnt = t->val;
		}
		return 0;
	case FUNC:
		if (t->val == EMPTYLIST) return addtag(TAG_NIL, EMPTYLIST);
		if (t->val == DOT) {
			start = s = heaptop;
			heaptop += 2;
			*s = heapify_pterm(t->first, s, quoted);
			s++;
			*s = heapify_pterm(t->first->next, s, quoted);
			return addtag(TAG_CONS, (int) start);
		}
		if (!t->narg) return addtag(TAG_CON, t->val);
		if (is_arith_term(t)) {
			heap_func_val = get_quoted_func(t->val);
		} else if (is_arith_hat(t)) {
			if (quoted) {
				t1 = heaptop;
				heaptop += 2;
				make_bound_var(t1, addtag(TAG_STR, HAT_QUOTEVAL));
				make_bound_var(t1 + 1, heapify_pterm(t, 0, FALSE));	
				return (int) t1;
			} else heap_func_val = t->val;			
		} else heap_func_val = t->val;
		start = s = heaptop;
		heaptop += t->narg + 1;
		*s++ = addtag(TAG_STR, heap_func_val);
		for (n = 1, arg = t->first; n <= t->narg; n++, s++, arg = arg->next) 
			*s = heapify_pterm(arg, s, quoted);
		return (int) start;
	default: fatal("08085");
	}
}

int *pterm_to_heap(t)
PTERM *t;
{
int i;
	for (i = 0; i <= pterm_var_cnt; i++) var_heapval[i] = 0;
	pterm_var_cnt = -1;
	return (int *) heapify_pterm(t, heaptop, TRUE);
}

int *pterm_to_quoted_heap(t, use_collected_vars)
PTERM *t;
int use_collected_vars;
{
int i;
	if (!use_collected_vars) {
		for (i = 0; i <= pterm_var_cnt; i++) var_heapval[i] = 0;
		pterm_var_cnt = -1;
	}
	return (int *) heapify_pterm(t, heaptop, TRUE);
}

int *func_univ();
/* =..(Term, List */
do_univ(t1, t2)
int *t1, *t2;
{
int *l, *nt, *tt, *new_list;
int *principle;
int v1, v2, n, i;
double num;
	t1 = findbind(t1);
	t2 = findbind(t2);
	v1 = is_unbound_var(*t1) || is_daemon(t1);
	v2 = is_unbound_var(*t2) || is_daemon(t2);
	if (!v2 && !is_cons(t2)) {
		warn_err("bad 2nd argument to =../2");
		return FALSE;
	}
	if (v1 && v2) {
		warn_err("insufficiently instantiated arguments to =../2");
		return FALSE;
	}
	if (v1) {
		l = t2;
		if (!count_list(l, &n) || n < 1) {
			warn_err("bad 2nd argument to =../2");
			return FALSE;
		}
		principle = findbind(head_of(l));
		if (n == 1) {
			if (is_nil(principle)) return make_a_nil(t1);
			if (is_con(principle)) return make_a_con(t1, mask(*principle));
			if (is_num(principle, &num)) return make_a_num(t1, num);
			warn_err("bad 2nd argument to =../2");
			return FALSE;
		} else if (!is_con(principle)) {
			warn_err("bad 2nd argument to =../2");
			return FALSE;
		}
		n--;
		nt = heaptop;
		if (n == 2 && !strcmp(string_of(mask(*principle)), ".")) {
			*heaptop = addtag(TAG_CONS, heaptop + 1);
			tt = findbind(tail_of(l));
			*(heaptop + 1) = (int) findbind(head_of(tt));
			tt = findbind(tail_of(tt));
			*(heaptop + 2) = (int) findbind(head_of(tt));
			heaptop += 3;
		} else {
			*heaptop = addtag(TAG_STR,
				hashbuiltina(functors[mask(*findbind(pmask(*l)))].pname, n));
			for (i = 1, tt = findbind(tail_of(l)); i <= n;
					i++, tt = findbind(tail_of(tt)))
				make_bound_var(nt + i, findbind(head_of(tt)));
			heaptop = nt + n + 1;
		}
		if (!unify(t1, nt)) return FALSE;
		if (have_runable && !wake_runable()) return FALSE;
		return TRUE;
	}
	new_list = findbind(make_cons(NULL, NULL));
	switch ((unsigned) tag(*t1)) {
	case TAG_NIL:
	case TAG_CON:
	case TAG_PAR:
		n = 0;
		break;
	case TAG_STR:
		n = arity_of(mask(*t1));
		break;
	case TAG_CONS:
		n = 2;
		break;
	default:
		fatal("83563");
	}
	principle = head_of(new_list);
	if (n == 0) {
		*(tail_of(new_list)) = addtag(TAG_NIL, EMPTYLIST);
		if (is_nil(t1)) make_a_nil(principle);
		else if (is_num(t1, &num)) make_a_num(principle, num); 
		else if (is_con(t1)) make_a_con(principle, mask(*t1));
	} else if (is_cons(t1)) {
		*principle = addtag(TAG_CON, hashbuiltina(".", 0));
		tt = findbind(make_cons(head_of(t1), 
				make_cons(tail_of(t1), addtag(TAG_NIL, EMPTYLIST))));
		principle[1] = (int) tt;
	} else {
		*principle = addtag(TAG_CON, 
			hashbuiltina(string_of(mask(*t1)), 0));
		*(tail_of(new_list)) = addtag(TAG_CONS, func_univ(t1, n));
	}
	if (!unify(new_list, t2)) return FALSE;
	if (have_runable && !wake_runable()) return FALSE;
	return TRUE;
}
 
count_list(l, np)
int *l;
int *np;
{
int *ll;
int n;
	for (ll = findbind(l), n = 0; ll; ll = findbind((int *)(pmask(*ll))+1)) {
		if (tag(*ll) == TAG_NIL) {
			*np = n;
			return TRUE;
		} else if (tag(*ll) != TAG_CONS) return FALSE;
		n++;
	}
	return FALSE;
}
 
int *func_univ(t, n)
int *t, n;
{
int i, *l, *start;
	l = start = heaptop;
	heaptop += 2;

	for (i = 1; i <= n; i++, l = heaptop, heaptop += 2) {
		*l = (int) (t + i);
		*(l + 1) = addtag(TAG_CONS, heaptop);
	}
	*(l - 1) = addtag(TAG_NIL, EMPTYLIST);
	heaptop = l;
	return start;
}


do_asm_code_1(t)
int *t;
{
char *s;
	t = findbind(t);
	if (!is_con(t)) runtime_error("bad argument to $$label/1");
	s = functors[mask(*t)].pname;
        emit_instruction(s,NULL,NULL,NULL);
        return TRUE;
}

do_asm_code_2(t, t1)
int *t, *t1;
{
char *s;
	t = findbind(t);
	if (!is_con(t)) runtime_error("bad argument to $$label/1");
	s = functors[mask(*t)].pname;
        emit_instruction(s,t1,NULL,NULL);
        return TRUE;
}

do_asm_code_3(t, t1, t2)
int *t, *t1, *t2;
{
char *s;
	t = findbind(t);
	if (!is_con(t)) runtime_error("bad argument to $$label/1");
	s = functors[mask(*t)].pname;
        emit_instruction(s,t1,t2,NULL);
        return TRUE;
}

do_asm_code_4(t, t1, t2, t3)
int *t, *t1, *t2, *t3;
{
char *s;
	t = findbind(t);
	if (!is_con(t)) runtime_error("bad argument to $$label/1");
	s = functors[mask(*t)].pname;
        emit_instruction(s,t1,t2,t3);
        return TRUE;
}

do_asm_label(t)
int *t;
{
char *s;
	t = findbind(t);
	if (!is_con(t)) runtime_error("bad argument to $$label/1");
	s = functors[mask(*t)].pname;
        pcode = epcode;
        store_lable(mask(*t),s); 
        epcode = pcode;
        return TRUE;
}

do_asm_list(t1, t2)
int *t1, *t2;
{
int start, end;
char *s;
int i;        
	t1 = findbind(t1);
	if (!is_con(t1)) runtime_error("bad 1st argument to $$list/2");
	s = functors[mask(*t1)].pname;
        start = find_loc_for_lable(mask(*t1),s); 
        if (start == -1) runtime_error("can't find 1st label in $$list/2");
	t2 = findbind(t2);
	if (!is_con(t2)) runtime_error("bad argument to $$label/1");
	s = functors[mask(*t2)].pname;
        end = find_loc_for_lable(mask(*t2),s); 
        if (i == -1) runtime_error("can't find 2nd label in $$list/2");
        print_asm(start,end-1);
        return TRUE;
}

do_asm_call(t)
int *t;
{
char *s;
int i;
	t = findbind(t);
	if (!is_con(t)) runtime_error("bad argument to $$call/1");
	s = functors[mask(*t)].pname;
        i = find_loc_for_lable(mask(*t),s);
        if (i == -1) runtime_error("can't find label to call in $$call/1");
        return rungoal(i, FALSE);
}

do_asm_resolve()
{
resolve(TRUE);
return TRUE;
}

emit_instruction(s, t1, t2, t3)
char *s;
int *t1, *t2, *t3;
{
int *largs[3];
int i, j, *k, opc;
char *mnmonic;
int arity;
double tf, *tfp;
double val;
int savepcode;

	savepcode = pcode;
	pcode = epcode;
	if (t1) largs[0] = findbind(t1); else largs[0] = (int *) NULL;
	if (t2) largs[1] = findbind(t2); else largs[1] = (int *) NULL;
	if (t3) largs[2] = findbind(t3); else largs[2] = (int *) NULL;
    if ((i = find_asm_by_mnemonic(s)) == -1) {
		fprintf(stderr, "(%s) ", s);
		runtime_error("unknown opcode in $$code");
	}
    opc = asmlist[i].num;
    arity = asmlist[i].nargs;
        emit_word(opc);
    if (f_is_switch_inst(opc)) 
		runtime_error("switches unimplemented in $$code");
        /*** maybe handle some other special cases here ??? ***/
        /*** why not reintegrate this using an SPRED type ??? ***/
    if (opc == SPCALL) {
		if (!(is_func(largs[0]) || 
		    is_con(largs[0])) ||
		    !spred[mask(*(largs[0]))])
		runtime_error("bad system predicate in $$code");
		emit_word(mask(*(largs[0])));
		goto END_CODE;
    }
    tfp = &tf;
    for (j = 1; j <= arity; j++) {
        k = largs[j - 1];
        switch(asmlist[i].type[j - 1]) {
            case ADDRESS:
                k = findbind(k);
                if (!is_con(k)) runtime_error("bad argument to $code");
                emit_addr(functors[mask(*k)].pname,mask(*k));
                break;
            case SINT:
            case BYTE:
            case VARIABLE:
            case REG:
				k = findbind(k);
				if (!is_num(k, &val)) runtime_error("bad argument to $$code");
				emit_word((int)val);
				break;
            case FLEXARG:
				runtime_error("unimplemented arg to $$code");
				break;
            case FUNCTOR:
				k = findbind(k);
				if (!is_func(k)) runtime_error("bad argument to$$code");
				emit_word(mask(*k));
                break;
            case CONSTANT:
				k = findbind(k);
				if (!is_con(k)) runtime_error("bad argument to $$code");
				emit_word(mask(*k));
                break;
            case FLOAT:
				k = findbind(k);
				if (!is_num(k, &val)) runtime_error("bad argument to $$code");
				tf = val;
				emit_word(*((int *) tfp));
				emit_word(*(((int *) tfp) + 1));
				break;
            default:
				fatal("79965a");
        }
    }
END_CODE:
        epcode = pcode;
        pcode = savepcode;
}

int *end_of_constraints(t)
int *t;
{
	int *prev;
	for (prev = t = findbind(t);
		 is_func(t) && mask(*t) == COMMA; prev = t, t = findbind(t+2));
	if (is_nil(t)) return prev;
	fatal("71341");
}

int *make_new_rule_head(t, vars)
int *t, **vars;
{
	int i, n, *new;

	t = findbind(t);
	new = heaptop;
	make_bound_var(heaptop, *t);
	n = arity_of(mask(*t));
	for (i = 1; i <= n; i++)
		make_bound_var(heaptop + i, vars[i-1]);
	heaptop += n+1;
	return new;
}

int do_style_check(t)
int *t;
{
char *s;
int flag, bit;

	t = findbind(t);
	if (!is_con(t)) {
		warn_err("bad argument to $style_check");
		return FALSE;
	}
	s = string_of(*t);
	if (!strcmp(s, "none")) 
		STYLE_CHECK_FLAG = 0;
	else if (!strcmp(s, "all"))
		STYLE_CHECK_FLAG = (CONTIG_STYLE | SINGLE_STYLE | OVERLOAD_STYLE);
	else {
		if (!strncmp(s, "no", 2)) {
			flag = FALSE;
			s += 2;
		} else flag = TRUE;
		if (!strcmp(s, "single_var")) bit = SINGLE_STYLE;
		else if (!strcmp(s, "discontiguous")) bit = CONTIG_STYLE;
		else if (!strcmp(s, "name_overload")) bit = OVERLOAD_STYLE;
		else {
			warn_err("bad argument to $style_check");
			return FALSE;
		}
		if (flag) STYLE_CHECK_FLAG |= bit;
		else STYLE_CHECK_FLAG &= (~bit);
	}
	return TRUE;
}

do_counter_value(t1, t2)
int *t1, *t2;
{
	t1 = findbind(t1);
	if (!is_con(t1)) {
		warn_err("bad first argument to counter_value/2");
		return FALSE;
	}
	return make_a_num(t2, new_hash_p_node(mask(*t1))->counter);
}

do_set_counter(t1, t2)
int *t1, *t2;
{
double val;
	t1 = findbind(t1); t2 = findbind(t2);
	if (!is_con(t1)) {
		warn_err("bad first argument to set_counter/2");
		return FALSE;
	}
	if (!is_num(t2, &val)) {
		warn_err("bad second argument to set_counter/2");
		return FALSE;
	}
	new_hash_p_node(mask(*t1))->counter = val;
	return TRUE;
}


do_add_counter(t1, t2)
int *t1, *t2;
{
double val;
	t1 = findbind(t1); t2 = findbind(t2);
	if (!is_con(t1)) {
		warn_err("bad first argument to add_counter/2");
		return FALSE;
	}
	if (!is_num(t2, &val)) {
		warn_err("bad second argument to add_counter/2");
		return FALSE;
	}
	new_hash_p_node(mask(*t1))->counter += val;
	return TRUE;
}

do_new_constant(t1, t2)
int *t1, *t2;
{
double val;
char *name;
struct HASHNODE *hnode;
char buffer[256], buf1[50];

	t1 = findbind(t1);
	if (!is_con(t1)) {
		warn_err("bad first argument to new_constant/2");
		return FALSE;
	}
	t2 = findbind(t2);
	if (!is_num(t2, &val)) {
		warn_err("bad second argument to new_constant/2");
		return FALSE;
	}
	buffer[0] = '#';
	name = string_of(mask(*t1));
	if (strlen(name) > 254) fatal("42578");
	strcpy(buffer+1, name);
	hnode = insert_func_htable(buffer);
	if (hnode->extra) {
		sprintf(buf1, "%g", val);
		warning("constant %s has been changed to %s", buffer, buf1);
		/** return FALSE; **/
	}
	setconst(buffer, val);
	return TRUE;
}	

FILE *my_open(name, mode)
char *name, *mode;
{
char *suf,*start,fname[MAX_FNAME_LEN+1];
FILE *fil;
int l;

	if ((fil = fopen(name, mode)) != (FILE *) NULL) return fil;
	suf=CLP_SUFFIX;
	while (*suf) {
		strcpy(fname, name);
		if (*suf == ':') suf++;
		for (l=0,start=suf; *suf != '\0' && *suf != ':'; suf++,l++);
		strncat(fname, start, l);
		if ((fil = fopen(fname, mode)) != (FILE *) NULL) return fil;
	}
	return (FILE *) NULL;
}

/* Used for OS/2 2.X, MS/DOS and Win NT */
#ifndef unix
char *command_interpreter()
{
	char *s;
	if (!(s = getenv("COMSPEC"))) s = DEF_COMSH;
	return s;
}
#endif

int round_int(f)
double f;
{
	int i;

	i = f + 0.5;
	if (((double) i) - f == 0.5 && (i & 1)) i--;
	return i;
}

do_get0(t) 
int *t;
{
int *tmp;
double r;
char c;
	t = findbind(t);
	if (!(is_unbound_var(*t) || is_daemon(t))) {
		warn_err("bad argument to get0/1");
		return FALSE;
	}
	c = get0();
	r = (double) c;
	makenum(++solver_id, r);
	*heaptop = addtag(TAG_PAR, solver_id);
	tmp = heaptop++;
	unify(tmp, t);
	return TRUE;
}

do_peek(t) 
int *t;
{
int *tmp;
double r;
char c;
	t = findbind(t);
	if (!(is_unbound_var(*t) || is_daemon(t))) {
		warn_err("bad argument to peek/1");
		return FALSE;
	}
	c = peek();
	r = (double) c;
	makenum(++solver_id, r);
	*heaptop = addtag(TAG_PAR, solver_id);
	tmp = heaptop++;
	unify(tmp, t);
	return TRUE;
}

do_unget0(t) 
int *t;
{
double r;
	t = findbind(t);
	if (!is_num(t, &r)) {
		warn_err("bad argument to unget0/1");
		return FALSE;
	}
	if (r < 0.0 || r > 255.0) {
		warn_err("out of range argument to unget0/1");
		return FALSE;
	}
	ungetchar((char) r);
	return TRUE;
}

