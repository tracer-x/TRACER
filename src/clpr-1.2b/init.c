/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: init.c                                               *
 ***************************************************************/

#include "stdlib.h"
#include "standard.h"
#include "config.h"
#include "parse.h"
#include "lib.h"
#include "symbols.h"
#include "opcodes.h"
#include "emul.h"
#include "solver.h"

char *CLP_SUFFIX;

PTERM *null_list;	/* setup some predefined stuff for parser */
struct HASHNODE *hnode_emptylist;
char *cons_str;		/* dito */
SPNODE *spred[MAX_SPRED];

struct {
	char *name;
	int narg;
	int val;
} def_p_func[] = {
	{".", 2, DOT},
	{"|", 2, 4},
	{",", 2, COMMA},
	{":-", 2, IMPL},
	{"[]", 0, EMPTYLIST},
	{"?-", 1, QUERY},
	{"<stdin>", 0, STDINVAL},
	{"<stdout>", 0, STDOUTVAL},
	{"end", 0, END},
	{"user", 0, USER},
        {"::-", 1, COMMAND},
	{":-", 1, DIRECTIVE},
	{";", 2, DISJ},
	{"+", 2, PLUSVAL},
	{"-", 1, U_MINUSVAL},
	{"-", 2, MINUSVAL},
	{"*", 2, MULTVAL},
	{"/", 2, DIVVAL},
	{"sin", 1, SINVAL},
	{"cos", 1, COSVAL},
	{"abs", 1, ABSVAL},
	{"min", 2, MINVAL},
	{"max", 2, MAXVAL},
	{"pow", 2, POWVAL},
	{"eval", 1, EVALVAL},
	{"quote", 1, QUOTEVAL},
	{"arcsin", 1, ARCSINVAL},
	{"arccos", 1, ARCCOSVAL},
/***********************************/
	{"^+", 2, HAT_PLUSVAL},
	{"^-", 1, HAT_U_MINUSVAL},
	{"^-", 2, HAT_MINUSVAL},
	{"^*", 2, HAT_MULTVAL},
	{"^/", 2, HAT_DIVVAL},
	{"^sin", 1, HAT_SINVAL},
	{"^cos", 1, HAT_COSVAL},
	{"^abs", 1, HAT_ABSVAL},
	{"^min", 2, HAT_MINVAL},
	{"^max", 2, HAT_MAXVAL},
	{"^pow", 2, HAT_POWVAL},
	{"^eval", 1, HAT_EVALVAL},
	{"^quote", 1, HAT_QUOTEVAL},
	{"^arcsin", 1, HAT_ARCSINVAL},
	{"^arccos", 1, HAT_ARCCOSVAL},
/***********************************/
	{"=", 2, EQVAL},
	{"<", 2, LTVAL},
	{">", 2, GTVAL},
	{"<=", 2, LEVAL},
	{">=", 2, GEVAL},
	{"dump", 1, DUMPVAL},
	{"retract", 1, RETRACTVAL},
	{"detable", 1, DETABLEVAL},
	{"rule", 2, RULEVAL},
	{"printf", 2, PRINTFVAL},
	{"print", 1, PRINTVAL},
	{"write", 1, WRITEVAL},
	{"$call", 1, CALLXVAL},
	{"read", 1, READVAL},
	{"$fail", 0, FAILVAL},
	{"$gfail", 0, GFAILVAL},
	{"!", 0, CUTVAL},
	{"true", 0, TRUEVAL},
	{(char *) 0, 0, 0}
};

extern char *CLPRLIB;
extern struct HASHNODE *tok_hnode;
extern PTERM *lookup_name();
extern SPNODE sptab[];
extern int real_val;
extern FILE *see_input;

#ifdef  EXTERNAL_SOLVER
// To plug external solvers in CLP(R) 
extern int init_extern_solver();
#endif 

/*---------------------------------------------------------------------------*/

addspred(s, n, f, pp, val)
char *s;
int n, val;
int (* f)();
SPNODE *pp;
{
	int i;

	add_func(s, n, val);
	i = hashbuiltina(s,n);
	if (i != val) fatal("92018");
	assign_p_protected(i, TRUE);
	spred[i] = pp;
}

init_all()
{
	see_input = stdin;
	init_malloc();
	init_engine_mem();
	init_compiler();
	init_solver();
#ifdef  EXTERNAL_SOLVER
// To plug external solvers in CLP(R) 
        init_extern_solver();
#endif 
	/* Shifted to main.c */
	/**** init_scanner(); ****/
	init_hash_p_table();
	init_hash_l_table();
	init_name();
	init_unify();
	readchar();
	init_engine();
	init_kohler();
	real_val = hashbuiltina("real", 1);
	if ((CLP_SUFFIX = (char *) getenv("CLPRSUFFIX")) == (char *) NULL) {
#ifdef DEF_CLP_SUFFIX
		CLP_SUFFIX = DEF_CLP_SUFFIX;
#else
		CLP_SUFFIX = "";
#endif
	}
}

init_name() /*** predefined names for parser ***/
{
PTERM *t;
int i, lib_val;

	for (i = 0; def_p_func[i].name; i++) {
		add_func(def_p_func[i].name, 
		         def_p_func[i].narg, 
                 def_p_func[i].val);
	}
#ifdef LIBPATH
#	ifdef FUNNY_GNUMAKE
	/* for some reason the quotes are being deleted from the makefile define */
	/* when using GNU make for OS/2 */
	if (!(CLPRLIB = (char *) getenv("CLPRLIB"))) CLPRLIB = "LIBPATH";
#	else
	if (!(CLPRLIB = (char *) getenv("CLPRLIB"))) CLPRLIB = LIBPATH;
#	endif
#else
	if (!(CLPRLIB = (char *) getenv("CLPRLIB"))) CLPRLIB = ".";
#endif
	add_func(CLPRLIB, 0, FLIBDIR);

	lookup_name("[]", sum_str("[]"));
	hnode_emptylist = tok_hnode;
	null_list = lookup_name("[]", sum_str("[]"));
	func_narg_pterm(null_list, 0);
	t = lookup_name(".", sum_str("."));
	cons_str = t->str;

	do_op(".",   "xfy", 51);
	do_op(",",  "xfy", 252);
	do_op(":-",  "xfx", 255);
	do_op("-",   "fy",  21);
	do_op(":-",  "fx",  255);
	do_op("?-",  "fx",  255);
	do_op("::-", "fx",  255);
	do_op("^+", "yfx",  31); 
	do_op("^-", "yfx",  31); 
	do_op("^*", "yfx",  21); 
	do_op("^/", "yfx",  21); 

	setconst("#c",  2.99792458e+8);
	setconst("#e",  E_VAL);
	setconst("#g", 9.80665);
	setconst("#h",  6.626176e-34);
	setconst("#p",  PI_VAL); 
	setconst("#p_2",  PI_2_VAL); 
	setconst("#p_4",  PI_4_VAL); 
	setconst("#sqrt2",  SQRT2_VAL); 
	setconst("#sqrt1_2",  SQRT1_2_VAL); 
	setconst("#ec",  1.6021892e-19);
	setconst("#cm2in",  0.393701);
	setconst("#km2mile",  0.62137);
	setconst("#gm2oz",  0.03527);
	setconst("#kg2lb",  2.20462);
	setconst("#l2gal",  0.21998);
	setconst("#l2usgal",  0.26418);
	for (i = 0, lib_val = WAM_LIB_0; sptab[i].str; i++, lib_val++) {
		addspred(sptab[i].str, sptab[i].arity,
		         sptab[i].func, sptab+i, lib_val);
	}
	if (lib_val >= INIT_FUNC_ID) fatal("64209");

}

/*-------------- utilities -------------*/

/* added by vijay */ int misc_malloc = 0;

float int_to_float();

static char malloc_space[PRE_MALLOC_MEM];
static char *cur_malloc = malloc_space;
static char *malloc_high = &malloc_space[PRE_MALLOC_MEM - 128];

init_malloc()
{
unsigned int pad;
	pad=((unsigned int) cur_malloc) % sizeof(double); 
/*  djgpp seems to have problems with compiling this line */
/***
	if ((pad=((unsigned int) cur_malloc)) % sizeof(double) != 0)
***/
	if (pad > 16) 
		warning("Strange alignment found %d (*** May be a bug ***)\n",pad);
	if (pad) cur_malloc += sizeof(double) - pad;
}

int EMALLOC_MEMORY = 0;

char *emalloc(n)
int n;
{
char *p;
register char *tmp;
register int j;
int pad;

	if ((int) (cur_malloc + n) < (int) malloc_high) {
/***
#ifdef HP835
		if (pad = n % sizeof(double)) n += sizeof(double) - pad;
#else
		if (pad = n % sizeof(int)) n += sizeof(int) - pad;
#endif
***/
		/* always align on double is safer */
		pad=((unsigned int) cur_malloc) % sizeof(double);
		if (pad) p = cur_malloc + sizeof(double) - pad; 
		else p = cur_malloc;

		/*** Change to initial padding as end padding should really
			be correct if sizeof is doing its job ***/
		cur_malloc = p + n;
		return(p);
	} 
	if ((p = (char *) malloc(n+8 /** TEMPORARY **/)) == NULL) 
		fatal("Not enough memory (calloc)");
	EMALLOC_MEMORY += n+8;
pad=((unsigned int) p) % sizeof(double);
if (pad) {
#ifdef HP835
if (pad) fprintf(stderr,"STRANGE ** malloc (realign) %x pad %d\n",p,pad);
#endif
p += sizeof(double) - pad; 
}
	return(p);
}

char *char_malloc(n)
int n;
{
char *p;
register char *tmp;
register int j;
int pad;

	if ((int) (cur_malloc + n) < (int) malloc_high) {
		p = malloc_high - n + 64;
		malloc_high -= n;
		return(p);
	} 
	if ((p = (char *) malloc(n)) == NULL) 
		fatal("Not enough memory (calloc)");

	misc_malloc += n;
	return(p);
}

#ifdef unix
extern char *sbrk();
#endif

int *alloc_mem(n)
int n;
{
    char *p;

#if !defined(PURIFY) && defined(unix) && !defined(NO_SBRK)
    p = (char *) sbrk(0);
    if ((((unsigned int) p) % sizeof(double)) != 0) {
/***
        warning("sbrk unaligned at %x, realigned", p);
***/
        sbrk(sizeof(double) - (((unsigned int) p) % sizeof(double)));
    }
    if ((int) (p = sbrk(n*sizeof(int))) == -1) p = (char *) NULL;
#else
    p = (char *) calloc(1, sizeof(int)*n);
#endif
	if (p == NULL) fatal("Not enough memory to initialise");
    return (int *) p;
}


float int_to_float(i)
int i;
{
union convert {	int i; float f;	} tmp;
	tmp.i = i;
	return tmp.f;
}	 
 
float_to_int(f)
float f;
{
union convert {	int i; float f;	} tmp;
	tmp.f = f;
	return tmp.i;
}	 
 
print_pre_malloc_stats()
{
	printf("Pre-Malloc space: %d used (max %d)\n",
		(((int) (cur_malloc)) - ((int) malloc_space)) / 4,
		PRE_MALLOC_MEM);
}

static int test_buf[2];
test_system_defaults()
{
int *p;
	if (MAXPOSINT < 0) init_fatal("MAXPOSINT assumed to be 2^31-1");
	p = (int *) -1;
	if (((int) p) > 0) init_fatal("problem with pointer conversion");
	test_pmask();
	check_solver_sizes();  
}

#define intptr(p) ((unsigned int) p)
#define MASK4 (0xf0000000)

test_pmask()
{
	int i,j,k;
	int local_buf[4];
	int *malloc_buf;
	int *ptr[3];
	unsigned int amask[3];
	int flag = 0;
	char *msg;

	ptr[0] = (int *) malloc(8);
	misc_malloc += 8;
	ptr[1] = test_buf;
	ptr[2] = local_buf;
	
	amask[0] = intptr(ptr[0]) & MASK4;
	amask[1] = intptr(ptr[1]) & MASK4;
	amask[2] = intptr(ptr[2]) & MASK4;

	for (i=0; i < 2; i++)
		if (((int) amask[i]) < 0) 
			init_fatal("Pointer topmost bit being used,\ncannot install: (%x)\n", amask[i]);
		else if (amask[i] != amask[0]) {
			flag = 1;
			break;
		}	
	if (flag) {
		fprintf(stderr, "Inconsistent masks\n");
		for (i=0; i < 2; i++)
			fprintf(stderr, "amask[%d] = %x\n", i, amask[i]);
		init_fatal("Funny pointers",0);
	}
	if (pmask(0) == amask[0]) {
		free(ptr[0]);
		misc_malloc -= 8;
		return;
	}
	msg = emalloc(80);
	if (amask[0] != 0)
		sprintf(msg,"#define pmask(i) ((((int) i) & 0x0fffffff) | 0x%x)",
			amask[0]);
	else sprintf(msg,"#define pmask(i) (((int) i) & 0x0fffffff)");
	init_fatal("pmask() in emul.h defined incorrectly, redefine as \n%s",msg);
}

init_fatal(s, a1)
char *s;
int a1;
{
char buf[256];
	fprintf(stderr, "Installation error: ");
	sprintf(buf,s, a1);
	fprintf(stderr, "%s\n", buf);
	fprintf(stderr, "See chapter 7 of CLP(R) manual.\n");
	exit(1);
}
