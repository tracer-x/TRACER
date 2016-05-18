/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: emul.c                                               *
 ***************************************************************/

#if defined(SYS5) || defined(OS2V2)
#include <sys/types.h>
#include <sys/times.h>
#endif
#if defined(BSD) && !defined(OS2V2)
#include <sys/time.h>
#include <sys/resource.h>
#endif

#include "standard.h"
#include "config.h"
#include "parse.h"
#include "symbols.h"
#include "lib.h"
#include "compile.h"
#include "opcodes.h"
#include "emul.h"
#include "solver.h"

#define MIN_HEAP_SZ   256
#define MIN_LSTACK_SZ 256
#define MIN_TRAIL_SZ  256

#define MAX_SAVE_CONTEXT 1024

#define CHECK_WAKEUP 
#define CHECK_OVERFLOW

#ifdef CHECK_OVERFLOW
#define CheckHeap()  \
	if (heaptop >= maxheap) { \
		fprintf(stderr, "Heapsize = %d\n", HEAP_SZ); \
		fatal("Heap overflow"); \
	} 
#define CheckStack()  \
	if (stacktop >= maxlstack) { \
		fprintf(stderr, "Stacksize = %d\n", LSTACK_SZ); \
		fatal("Stack overflow"); \
	} 
#define CheckCP()  \
	if (stacktop >= maxlstack) { \
		fprintf(stderr, "Stacksize = %d\n", LSTACK_SZ); \
		fatal("Stack overflow"); \
	} 
#define CheckTrail() \
	if (trtop >= maxtrail) { \
		fprintf(stderr, "Trailsize = %d\n", TRAIL_SZ); \
		fatal("Trail overflow"); \
	}
#else
#define CheckHeap()
#define CheckStack()
#define CheckCP()
#define CheckTrail()
#endif

struct {
	int *retreg, *curar, *stacktop, *heaptop, trtop,
		*lastcp, solver_id, slack_id, nlin_count, 
		*runable, have_runable;
	NL_EQN_ptr nl_eqn_top;
} save[MAX_SAVE_CONTEXT];

int *findbind();
int *val_to_pc();
RULE_ptr quick_find(), p_first_rule();
int *run_dynamic();
int *pterm_to_heap();

extern int *pterm_to_quoted_heap();
extern FILE *outfile;
extern code_t *alloc_mem();
extern void free_nlin_nodes();

/*-------------------------------------------------------- globals ----------*/

int *stack;	             /* Register File / Heap / Stack */
int **trail;	            /* Trail pointers */
char *tagtrail;

int REGS_SZ = DEF_REGS_SZ;
int HEAP_START = DEF_REGS_SZ;
int LSTACK_SZ = DEF_LSTACK_SZ;
int HEAP_SZ = DEF_HEAP_SZ;
int TRAIL_SZ = DEF_TRAIL_SZ;
int MTRAIL = DEF_TRAIL_SZ + TRAIL_SAFETY;
int MSTACK = 
	DEF_REGS_SZ + DEF_HEAP_SZ + HEAP_SAFETY + DEF_LSTACK_SZ + STACK_SAFETY;
int LSTACK = DEF_REGS_SZ + DEF_HEAP_SZ + HEAP_SAFETY;

int *runable;
bool have_runable = FALSE;

int *regs;	              /* Pointer to register file */
int *heap;	              /* Pointer to heap */
int *safeheap;	          /* Pointer to heap equivalent of top choicepoint */
int *lstack;	            /* Pointer to stack */
static int *maxlstack;
static int *maxheap;
static int maxtrail;

int *retreg;	            /* Return Register */
int *curar;	             /* Current activation record */
int *stacktop;	          /* Current top of stack */
int *heaptop;	           /* Current top of heap */
int trtop;	              /* Current top of trail */
int *lastcp;	            /* Latest choice point on stack */
int *s;	                 /* Unification read/write mode registers */

int STACK_START_ADDR;
int TRAIL_START_ADDR;
int HEAP_START_ADDR;

int stamp;
int *first_lastcp;

double EPS = DEFAULT_EPS;
int pcode = 1;
int epcode;
int savep;
char *ts;
double tf, *tfp;
double stored_constant;
int tag_pair[MAX_TAGS][MAX_TAGS]; 
int swt_offsets[MAX_TAGS + 1];

static int true_atom;

extern float int_to_float();
extern PTERM *lookup_name();

extern NL_EQN_ptr nl_eqn_top;
extern int inst_count[];
extern FILE *cur_stream, *error_stream;
extern SPNODE *spred[];
extern SPNODE sptab[];
extern FUNCTREC functors[];
extern unsigned int *code;
extern int startcode[], endcode[];
extern FILE *infile;
extern FILE *outfile;
extern FILE *see_input;
extern int see_input_t;
extern int TRACE, CLAM_TRACE;

/*---------------------------------------------------------------------------*/

void init_engine_mem()
{
	if (HEAP_SZ < MIN_HEAP_SZ) fatal("heap size too small");
	if (LSTACK_SZ < MIN_LSTACK_SZ) fatal("local stack size too small");
	if (TRAIL_SZ < MIN_TRAIL_SZ) fatal("trail size too small");

	HEAP_START = REGS_SZ;
	MSTACK = REGS_SZ + HEAP_SZ + HEAP_SAFETY + LSTACK_SZ + STACK_SAFETY;
	LSTACK = HEAP_SZ + HEAP_SAFETY + REGS_SZ;
	MTRAIL = TRAIL_SZ + TRAIL_SAFETY;

	stack = (int *) alloc_mem(MSTACK);
#ifdef  INIT_DEBUG
	if (!stack) fatal("not enough memory to initialize clpr (stacks)");
	printf("Stack start: %p end: %p\n", (unsigned) stack, (unsigned) stack + MSTACK * sizeof(int));
#endif 

	if (((unsigned)stack + (unsigned)MSTACK * sizeof(int)) >> 28)
	  fatal("bad stack address range");

	trail = (int **) alloc_mem(TRAIL_SZ);
#ifdef  INIT_DEBUG
	if (!trail) fatal("not enough memory to initialize clpr (trail)");
	printf("Trail start: %p end: %p\n", (unsigned) trail, (unsigned) trail + TRAIL_SZ * sizeof(int));
#endif 
	TRAIL_START_ADDR = (int) trail;

	if (((unsigned)trail + (unsigned)TRAIL_SZ * sizeof(int)) >> 28)
	  fatal("bad trail address range");

	tagtrail = (char *) alloc_mem(TRAIL_SZ / sizeof(*trail) * sizeof(char));
}

init_engine()
{
PTERM *t;

	pcode = FAIL_ADDR;
	t = lookup_name("$fail", sum_str("$fail"));
	storename(maketag(0, "", "$fail", 0), t->val, 0);
	code[FAIL_ADDR] = FFAIL;
	assign_p_protected(t->val, TRUE);

	pcode = GFAIL_ADDR;
	t = lookup_name("$fail", sum_str("$gfail"));
	storename(maketag(0, "", "$gfail", 0), t->val, 0);
	code[GFAIL_ADDR] = GFAIL;
	assign_p_protected(t->val, TRUE);

	swt_offsets[tagnum(TAG_NIL)] =  1;
	swt_offsets[tagnum(TAG_CONS)] = 2;
	swt_offsets[tagnum(TAG_CON)] =  3;
	swt_offsets[tagnum(TAG_STR)] =  4;
	swt_offsets[tagnum(TAG_PAR)] =  5;

	true_atom = addtag(TAG_CON, TRUEVAL);
}

init_unify()
{
	tag_pair[0][0] = 21;
	tag_pair[0][tagnum(TAG_CON)] = 1;
	tag_pair[0][tagnum(TAG_NIL)] = 2;
	tag_pair[0][tagnum(TAG_PAR)] = 3;
	tag_pair[0][tagnum(TAG_NUM)] = 4;
	tag_pair[0][tagnum(TAG_CONS)] = 5;
	tag_pair[0][tagnum(TAG_STR)] = 6;
	tag_pair[0][tagnum(TAG_DAEMON)] = 23;
	tag_pair[tagnum(TAG_CON)][0] = 7;
	tag_pair[tagnum(TAG_NIL)][0] = 8;
	tag_pair[tagnum(TAG_PAR)][0] = 9;
	tag_pair[tagnum(TAG_NUM)][0] = 10;
	tag_pair[tagnum(TAG_CONS)][0] = 11;
	tag_pair[tagnum(TAG_STR)][0] = 12;
	tag_pair[tagnum(TAG_DAEMON)][0] = 22;
	tag_pair[tagnum(TAG_DAEMON)][tagnum(TAG_CON)] = 22;
	tag_pair[tagnum(TAG_DAEMON)][tagnum(TAG_NIL)] = 22;
	tag_pair[tagnum(TAG_DAEMON)][tagnum(TAG_PAR)] = 22;
	tag_pair[tagnum(TAG_DAEMON)][tagnum(TAG_NUM)] = 22;
	tag_pair[tagnum(TAG_DAEMON)][tagnum(TAG_CONS)] = 22;
	tag_pair[tagnum(TAG_DAEMON)][tagnum(TAG_STR)] = 22;
	tag_pair[tagnum(TAG_CON)][tagnum(TAG_DAEMON)] = 23;
	tag_pair[tagnum(TAG_NIL)][tagnum(TAG_DAEMON)] = 23;
	tag_pair[tagnum(TAG_PAR)][tagnum(TAG_DAEMON)] = 23;
	tag_pair[tagnum(TAG_NUM)][tagnum(TAG_DAEMON)] = 23;
	tag_pair[tagnum(TAG_CONS)][tagnum(TAG_DAEMON)] = 23;
	tag_pair[tagnum(TAG_STR)][tagnum(TAG_DAEMON)] = 23;
	tag_pair[tagnum(TAG_PAR)][tagnum(TAG_PAR)] = 13;
	tag_pair[tagnum(TAG_CON)][tagnum(TAG_CON)] = 14;
	tag_pair[tagnum(TAG_NIL)][tagnum(TAG_NIL)] = 15;
	tag_pair[tagnum(TAG_STR)][tagnum(TAG_STR)] = 16;
	tag_pair[tagnum(TAG_CONS)][tagnum(TAG_CONS)] = 17;
	tag_pair[tagnum(TAG_NUM)][tagnum(TAG_NUM)] = 18;
	tag_pair[tagnum(TAG_NUM)][tagnum(TAG_PAR)] = 19; 
	tag_pair[tagnum(TAG_PAR)][tagnum(TAG_NUM)] = 20;
	tag_pair[tagnum(TAG_DAEMON)][tagnum(TAG_DAEMON)] = 24;
}

init_rungoal(interactive)
int interactive;
{
int *tmp1;
	tmp1 = stacktop = stacktop + CPFRAME_HEIGHT;
	tmp1[NEXTEP] = (int) (code + GFAIL_ADDR);
	tmp1[PREVCP] = (int) lastcp;
	tmp1[OHEAPTOP] = (int) heaptop;
	tmp1[OTRTOP] = trtop;
	tmp1[CPRETPT] = (int) retreg;
	tmp1[OCURAR] = (int) curar;
	tmp1[NUMPARS] = 0;
	tmp1[SOLVER_ID] = solver_id;
	tmp1[SLACK_ID] = slack_id;
	lastcp = stacktop;
	safeheap = heaptop;
	stamp++;
	if (interactive) first_lastcp = lastcp;
}

/*---------------------------------------------------------------------------*/

save_context()
{
int i;
	if (savep >= MAX_SAVE_CONTEXT - 1) fatal("too many recursive rungoals");
	save[savep].retreg = retreg;
	save[savep].curar = curar;
	save[savep].stacktop = stacktop;
	save[savep].heaptop = heaptop;
	save[savep].trtop = trtop;
	save[savep].lastcp = lastcp;
	save[savep].solver_id = solver_id;
	save[savep].slack_id = slack_id;
	save[savep].nlin_count = nlin_count;
	save[savep].nl_eqn_top = nl_eqn_top;
	save[savep].runable = runable;
	save[savep].have_runable = have_runable;
	savep++;
	init_solver_goal();
}

restore_context()
{
register int i, j;
TAB_HDR_NODE_ptr hdr;
	savep--;
	for (i = trtop - 1; i >= save[savep].trtop; i--) {
		j = (int) trail[i];
		switch (tagnum(j)) {
				case NUM_BTK_INEQ:
#ifdef STATS
	s_count[134]++;
#endif	
				case NUM_BTK_EQN:
					free_eqn_nodes(pmask(j) | ((unsigned)tagtrail[i] << 28));
					break;
				case NUM_BTK_NLIN:
					free_nlin_nodes(pmask(j) | ((unsigned)tagtrail[i] << 28));
					break;
		}
	}
	for (i = save[savep].solver_id + 1; i <= solver_id; i++) {
		if (hdr = tableau[i]) {
				free_eqn_nodes(hdr->eqn);
				free_occ_nodes(hdr->eq_occ);
				free_occ_nodes(hdr->ineq_occ);
				free_nl_occ_nodes(hdr->nlin_occ);
				free_HDR(hdr);
				tableau[i] = NULL;
		}
	}
	for (i = save[savep].slack_id - 1; i >= slack_id; i--) {
		if (hdr = tableau[i]) {
#ifdef STATS
	if (hdr->eqn) s_count[135]++;
	if (hdr->next) s_count[136]++;
#endif
				free_eqn_nodes(hdr->eqn);
				free_occ_nodes(hdr->eq_occ);
				free_occ_nodes(hdr->ineq_occ);
				free_nl_occ_nodes(hdr->nlin_occ);
				free_eqn_nodes(hdr->next);
				free_HDR(hdr);
				tableau[i] = NULL;
		}
	}
	retreg = save[savep].retreg;
	curar = save[savep].curar;
	stacktop = save[savep].stacktop;
	heaptop = save[savep].heaptop;
	trtop = save[savep].trtop;
	lastcp = save[savep].lastcp;
	solver_id = save[savep].solver_id;
	slack_id = save[savep].slack_id;
	nlin_count = save[savep].nlin_count;
	nl_eqn_top = save[savep].nl_eqn_top;
	runable = save[savep].runable;
	have_runable = save[savep].have_runable;
#ifdef STATS
	if (savep == 0) check_solver_malloc_space();
#endif
}


int_clean()
{
	while (savep) restore_context();
}

first_engine()
{
	heaptop = s = heap = stack + HEAP_START;
	HEAP_START_ADDR = (int) heaptop;
	stacktop = curar = lstack = stack + LSTACK;
	STACK_START_ADDR = (int) stacktop;
	maxlstack = stack + MSTACK - STACK_SAFETY;
	maxheap = stack + LSTACK - HEAP_SAFETY;
	maxtrail = var2pos((trail + TRAIL_SZ - TRAIL_SAFETY), trail);
	regs = stack + REGS;
	safeheap = heap;
	stamp = 1;
	lastcp = NULL;
	savep = 0;
	tfp = &tf;
}

/********************************** emulate! *********************************/
rungoal(ipc, interactive)
/*****************************************************************************/
int ipc;
int interactive;
{
register int *pc;
register int *Regs;
register int *tmp1, *tmp2;
register int mode_read, *s;
register int ti;
int ti1, ti2;
int *tmp3, *tmp4;
int *Regs1, *Regs2, *Regs3;
double c;
float f;
int *cp_for_cut;
int first_dyn_call = FALSE;
int *temp;
int *prevpc;

	runable = heaptop++;
	*runable = addtag(TAG_NIL, EMPTYLIST);
	pc = ptrpc(ipc);
	Regs = regs;
	Regs1 = regs + 1;
	Regs2 = regs + 2;
	Regs3 = regs + 3;
	init_rungoal(interactive);
	goto LOOP;

/***************/
/***/ FAIL: /***/
/***************/

#ifdef CTRACE
	if (CLAM_TRACE) fprintf(outfile, "FAILING\n");
#endif
	runable = heaptop++;
		*runable = addtag(TAG_NIL, EMPTYLIST);
	ti = (int) mask(*(lastcp + OTRTOP));
	for (ti1 = trtop - 1; ti1 >= ti; ti1--) {
		ti2 = (int) trail[ti1];
		if (tag(ti2) == BTK_BIND) {
			// Vijay - for some reason when tag is BTK_BIND crash occurs if
			// the 4 bits are restored from tagtrail. Have to make sure the reason.
			temp = (int *) (pmask(ti2));// | ((unsigned)tagtrail[ti1] << 28));
			make_unbound_var(temp);
		}
#ifdef CYCLIC_BIND
		else if (tag(ti2) == BTK_TEST) 
		  make_bound_var((int *) (pmask(ti2) | ((unsigned)tagtrail[ti1] << 28)), **((int **) (pmask(ti2) | ((unsigned)tagtrail[ti1] << 28))));
#endif
#ifdef DESTRUCTIVE_UPDATE
		else if (tag(ti2) == BTK_TEST2) 
			make_bound_var((int *) (pmask(ti2) | ((unsigned)tagtrail[ti1] << 28)), (trail[--ti1] | ((unsigned)tagtrail[ti1] << 28)));
#endif
		else solver_backtrack(ti1, ti2);
	}

	ti2 = mask(*(lastcp + NUMPARS));
	tmp1 = lastcp + ti2;
	tmp2 = Regs + ti2;
	while (tmp2 > Regs) *tmp2-- = *tmp1--;
	// pc = (int *) pmask(*tmp1); Changed by Vijay to solve switch(*pc) crash
	pc = (int *) (*tmp1);
	tmp1 -= 2;
	heaptop = (int *) pmask(*tmp1--);
	trtop = (int) mask(*tmp1--); 
	retreg = (int *) pmask(*tmp1--); 
	curar = (int *) pmask(*tmp1); 
	tmp1 -= 2; 
	solver_id = (int) mask(*tmp1--); 
	slack_id = (int) mask(*tmp1--); 
	stamp--;

/***************/
/***/ LOOP: /***/ 
/***************/
#ifdef STATS
	s_count[299]++; 
	inst_count[*pc]++;
#endif

#ifdef CTRACE
	if (CLAM_TRACE) clam_trace(intpc(pc));
#endif

	prevpc = pc;	
	/************/
	switch (*pc) {
	/************/

	caseop(BADINST):
#ifdef FREE_PTERMS
        goto FAIL; /* Vijay- changing this for minmax */
#else
        fatal("Zero opcode");
#endif
	caseop(NOOP):
		pc++;
		goto LOOP;
	caseop(CALLP):
#ifdef CHECK_WAKEUP
		if (have_runable && !wake_runable()) goto FAIL;
#endif
		/* clam_trace(intpc(pc)); */
		CheckHeap();
		CheckTrail();
		retreg = pc + 2;
		pc = (int *) *(pc + 1);
		goto LOOP;
	caseop(CALLI):
#ifdef CHECK_WAKEUP
		if (have_runable && !wake_runable()) goto FAIL;
#endif
		CheckHeap();
		CheckTrail();
		retreg = pc + 2;
		tmp1 = pc;
		if (pc = val_to_pc(pc[1])) {
			tmp1[0] = CALLP;
			tmp1[1] = (int) pc;
			goto LOOP;
		} else {
			warning("%s/%d not defined, failing",
				 string_of(tmp1[1]), arity_of(tmp1[1]));
			goto FAIL;
		}
	caseop(JUMP):
#ifdef CHECK_WAKEUP
		if (have_runable && !wake_runable()) goto FAIL;
#endif
		/* clam_trace(intpc(pc)); */
		CheckHeap();
		CheckTrail();
		pc = (int *) *(pc + 1);
		goto LOOP;
	caseop(JUMPI):
#ifdef CHECK_WAKEUP
		if (have_runable && !wake_runable()) goto FAIL;
#endif
		CheckHeap();
		CheckTrail();
		tmp1 = pc;
		if (pc = val_to_pc(pc[1])) {
			tmp1[0] = JUMP;
			tmp1[1] = (int) pc;
			goto LOOP;
		} else {
			warning("%s/%d not defined, failing",
				 string_of(tmp1[1]), arity_of(tmp1[1]));
			goto FAIL;
		}
	caseop(PROCEED):
		pc = retreg;
		goto LOOP;
	caseop(CALLX):
		retreg = pc + 1;
	caseop(JUMPX):
#ifdef CHECK_WAKEUP
		if (have_runable && !wake_runable()) goto FAIL;
#endif
		CheckHeap();
		CheckTrail();
		tmp1 = tmp2 = Regs1;
		deref(tmp1);
		ti = mask(*tmp1);
		if (tag(*tmp1) == TAG_CON) {
			if (!(pc = val_to_pc(ti))) {
				warning("call/1: %s not defined, failing", string_of(ti));
				goto FAIL;
			}
		} else if (tag(*tmp1) == TAG_STR) {
			if (!(pc = val_to_pc(ti))) {
				warning("call/1: %s not defined, failing", string_of(ti));
				goto FAIL;
			}
			ti1 = arity_of(ti);
			do {
				tmp1++;
				*tmp2++ = (int) tmp1;
			} while (--ti1);
		} else if (tag(*tmp1) == TAG_CONS) {
			if (!(pc = val_to_pc(DOT))) {
				warning("call/1: `.' not defined, failing", 0);
				goto FAIL;
			}
			Regs[1] = (int) pmask(*tmp1);
			Regs[2] = (int) (((int *) pmask(*tmp1)) + 1);
		} else if (tag(*tmp1) == TAG_NIL) {
			if (!(pc = val_to_pc(EMPTYLIST))) {
				warning("call/1: [] not defined, failing", 0);
				goto FAIL;
			}
		} else runtime_error("bad argument to call/1");
		if (p_dynamic(ti)) first_dyn_call = TRUE;
		goto LOOP;
	caseop(UNI2TTVAR):
		if (mode_read) {
				make_bound_var(Regs + *(pc + 1), s++);
				make_bound_var(Regs + *(pc + 2), s++);
				pc += 3;
				goto LOOP;
		} else {
				make_unbound_var(s);
				make_bound_var(Regs + *(pc + 1), s++);
				make_unbound_var(s);
				make_bound_var(Regs + *(pc + 2), s++);
				heaptop = s;
				pc += 3;
				goto LOOP;
		}
	caseop(UNI2PTVAR):
		if (mode_read) {
				make_bound_var(curar + *(pc + 1), s++);
				make_bound_var(Regs + *(pc + 2), s++);
				pc += 3;
				goto LOOP;
		} else {
				make_unbound_var(s);
				make_bound_var(curar + *(pc + 1), s++);
				make_unbound_var(s);
				make_bound_var(Regs + *(pc + 2), s++);
				heaptop = s;
				pc += 3;
				goto LOOP;
		}
	caseop(UNI2TPVAR):
		if (mode_read) {
				make_bound_var(Regs + *(pc + 1), s++);
				make_bound_var(curar + *(pc + 2), s++);
				pc += 3;
				goto LOOP;
		} else {
				make_unbound_var(s);
				make_bound_var(Regs + *(pc + 1), s++);
				make_unbound_var(s);
				make_bound_var(curar + *(pc + 2), s++);
				heaptop = s;
				pc += 3;
				goto LOOP;
		}
	caseop(UNI2PPVAR):
		if (mode_read) {
				make_bound_var(curar + *(pc + 1), s++);
				make_bound_var(curar + *(pc + 2), s++);
				pc += 3;
				goto LOOP;
		} else {
				make_unbound_var(s);
				make_bound_var(curar + *(pc + 1), s++);
				make_unbound_var(s);
				make_bound_var(curar + *(pc + 2), s++);
				heaptop = s;
				pc += 3;
				goto LOOP;
		}
	case (unsigned char) UNI2TVVAR:
		if (mode_read) {
				make_bound_var(Regs + *(pc + 1), s);
				s += 2;
				pc += 2;
				goto LOOP;
		} else {
				make_unbound_var(s);
				make_bound_var(Regs + *(pc + 1), s);
				make_unbound_var(s+1);
				s += 2;
				heaptop = s;
				pc += 2;
				goto LOOP;
		}
	case (unsigned char) UNI2VTVAR:
		if (mode_read) {
				make_bound_var(Regs + *(pc + 1), s+1);
				s += 2;
				pc += 2;
				goto LOOP;
		} else {
				make_unbound_var(s);
				make_unbound_var(s+1);
				make_bound_var(Regs + *(pc + 1), s+1);
				s += 2;
				heaptop = s;
				pc += 2;
				goto LOOP;
		}
	case (unsigned char) UNI2PVVAR:
		if (mode_read) {
				make_bound_var(curar + *(pc + 1), s);
				s += 2;
				pc += 2;
				goto LOOP;
		} else {
				make_unbound_var(s);
				make_bound_var(curar + *(pc + 1), s);
				make_unbound_var(s+1);
				s += 2;
				heaptop = s;
				pc += 2;
				goto LOOP;
		}
	case (unsigned char) UNI2VPVAR:
		if (mode_read) {
				make_bound_var(curar + *(pc + 1), s+1);
				s += 2;
				pc += 2;
				goto LOOP;
		} else {
				make_unbound_var(s);
				make_unbound_var(s+1);
				make_bound_var(curar + *(pc + 1), s+1);
				s += 2;
				heaptop = s;
				pc += 2;
				goto LOOP;
		}
	caseop(UNILIST):
		if (mode_read) {
				tmp1 = s;
				deref(tmp1);
				if (tag(*tmp1) == TAG_CONS) {
					s = (int *) pmask(*tmp1);
					pc++;
					goto LOOP;
				} else if (is_unbound_var(*tmp1)) {
					*tmp1 = addtag(TAG_CONS, heaptop);
					s = heaptop;
					mode_read = FALSE;
					push_check_trail(BTK_BIND, tmp1);
					pc++;
					goto LOOP;
				} else if (is_daemon(tmp1)) {
					make_bound_var(tmp1, heaptop);
					*heaptop = addtag(TAG_CONS, heaptop + 1);
					heaptop++;
					s = heaptop;
					mode_read = FALSE;
					push_check_trail(BTK_DBIND, tmp1);
					make_runable(tmp1 + 1);
					pc++;
					goto LOOP;
				} else goto FAIL;
		} else {
				heaptop++;
				*s = addtag(TAG_CONS, heaptop);
				s = heaptop;
				pc++;
				goto LOOP;
		}
	caseop(UNISTR):
		if (mode_read) {
				tmp1 = s;
				deref(tmp1);
				if (*tmp1 == addtag1(TAG_STR, *(pc + 1))) {
					s = tmp1 + 1;
					pc += 2;
					goto LOOP;
				} else if (is_unbound_var(*tmp1)) {
					make_bound_var(tmp1, (int) heaptop);
					*heaptop = addtag1(TAG_STR, *(pc + 1));
					s = ++heaptop;
					mode_read = FALSE;
					push_check_trail(BTK_BIND, tmp1);
					pc += 2;
					goto LOOP;
				} else if (is_daemon(tmp1)) {
					make_runable(tmp1 + 1);
					make_bound_var(tmp1, (int) heaptop);
					*heaptop = addtag1(TAG_STR, *(pc + 1));
					s = ++heaptop;
					mode_read = FALSE;
					push_check_trail(BTK_DBIND, tmp1);
					pc += 2;
					goto LOOP;
				} else goto FAIL;
		} else {
				make_bound_var(s, (int) (s + 1));
				*(s + 1)  = addtag1(TAG_STR, *(pc + 1));
				s += 2;
				heaptop = s;
				pc += 2;
				goto LOOP;
		}
	caseop(ENTERSWTYPE):
#ifdef CHECK_WAKEUP
		if (have_runable && !wake_runable()) goto FAIL;
#endif
		CheckHeap();
		CheckTrail();	/* Fall thru */
		tmp1 = Regs1;
		deref(tmp1);
		if (tag(ti = *tmp1) == TAG_CONS) {
				s = (int *) pmask(ti);
				mode_read = TRUE;
				pc = (int *) *(pc + 2);
				goto LOOP;
		} else if (is_unbound_var(ti) || is_daemon(tmp1)) {
				pc = (int *) pc[6];
				goto LOOP;
		} else {
				mode_read = TRUE;
				pc = (int *) *(pc + swt_offsets[tagnum(ti)]);
				goto LOOP;
		}
	caseop(SWITCHONTYPE):
		tmp1 = Regs1;
		deref(tmp1);
		if (tag(ti = *tmp1) == TAG_CONS) {
				s = (int *) pmask(ti);
				mode_read = TRUE;
				pc = (int *) *(pc + 2);
				goto LOOP;
		} else if (is_unbound_var(ti) || is_daemon(tmp1)) {
				pc += 6;
				goto LOOP;
		} else {
				mode_read = TRUE;
				pc = (int *) *(pc + swt_offsets[tagnum(ti)]);
				goto LOOP;
		}
	caseop(ENTERSWCONFUNC):
#ifdef CHECK_WAKEUP
		if (have_runable && !wake_runable()) goto FAIL;
#endif
		CheckHeap();
		CheckTrail();	/* Fall thru */
		tmp1 = Regs1;
		deref(tmp1);
		if (tag(ti = *tmp1) == TAG_STR) {
				pc = (int *) *(pc + 2);
				mode_read = TRUE;
				goto LOOP;
		} else if (tag(ti) == TAG_CON) {
				pc = (int *) *(pc + 1);
				mode_read = TRUE;
				goto LOOP;
		} else {
				pc = (int *) pc[3];
				goto LOOP;
		}
	caseop(SWITCHONCONFUNC):
		tmp1 = Regs1;
		deref(tmp1);
		if (tag(ti = *tmp1) == TAG_STR) {
				pc = (int *) *(pc + 2);
				mode_read = TRUE;
				goto LOOP;
		} else if (tag(ti) == TAG_CON) {
				pc = (int *) *(pc + 1);
				mode_read = TRUE;
				goto LOOP;
		} else {
				pc += 3;
				goto LOOP;
		}
	caseop(SWITCHONNIL):
		tmp1 = Regs1;
		deref(tmp1);
		if (tag(*tmp1) == TAG_NIL || is_unbound_var(*tmp1)
				 || is_daemon(tmp1)) {
				pc += 2;
				goto LOOP;
		} 
		pc = (int *) *(pc + 1);
		goto LOOP;
	caseop(SWITCHONDOT):
		tmp1 = Regs1;
		deref(tmp1);
		if (tag(*tmp1) == TAG_CONS || is_unbound_var(*tmp1)
				 || is_daemon(tmp1)) {
				pc += 2;
				goto LOOP;
		} 
		pc = (int *) *(pc + 1);
		goto LOOP;
	caseop(ENTERSWCON):
#ifdef CHECK_WAKEUP
		if (have_runable && !wake_runable()) goto FAIL;
#endif
		CheckHeap();
		CheckTrail();
		pc = (INSTptr) pc[1];	/* Fall thru */
	caseop(SWITCHONCON):
		tmp1 = Regs1;
		deref(tmp1);
		ti = *tmp1;
		tmp2 = (int *) *(pc + 1);
		if (tag(ti) == TAG_CON) {
				tmp1 = pc + 2;
				do {
					if (*tmp1 == ti) { pc = (int *) *(tmp1 + 1); goto LOOP; }
					tmp1 += 2;
				} while (tmp1 != tmp2);
				pc = (int *) *(tmp1 + 1);
				goto LOOP;
		}
		if (is_unbound_var(ti) || (tag(ti) == TAG_DAEMON)) {
				pc = tmp2 + 2;
				goto LOOP;
		}
		pc = (int *) *(tmp2 + 1);
		goto LOOP;
	caseop(SWITCH2ONCON): /*** needs ti from swtype, swcfunc ***/
		tmp1 = pc + 2;
		tmp2 = (int *) *(pc + 1);
		do {
				if (*tmp1 == ti) { pc = (int *) *(tmp1 + 1); goto LOOP; }
				tmp1 += 2;
		} while (tmp1 != tmp2);				
		pc = (int *) *(tmp2 + 1);
		goto LOOP;
	caseop(ENTERSWFUNC):
#ifdef CHECK_WAKEUP
		if (have_runable && !wake_runable()) goto FAIL;
#endif
		CheckHeap();
		CheckTrail();
		pc = (INSTptr) pc[1];	/* Fall thru */
	caseop(SWITCHONFUNC):
		tmp1 = Regs1;
		deref(tmp1);
		ti = *tmp1;
		tmp2 = (int *) *(pc + 1);
		if (tag(ti) == TAG_STR) {
				tmp3 = pc + 2;
				do {
					if (*tmp3 == ti) { 
						pc = (int *) *(tmp3 + 1); 
						s = tmp1 + 1;
						mode_read = TRUE;
						goto LOOP; 
					}
					tmp3 += 2;
				} while (tmp3 != tmp2);
				pc = (int *) *(tmp2 + 1);
				goto LOOP;
		}
		if (is_unbound_var(ti) || (tag(ti) == TAG_DAEMON)) {
				pc = tmp2 + 2;
				goto LOOP;
		}
		pc = (int *) *(tmp2 + 1);
		goto LOOP;
	caseop(SWITCH2ONFUNC): /*** needs tmp1 from swtype,swcfunc ***/
		ti = *tmp1;
		tmp3 = pc + 2;
		tmp2 = (int *) *(pc + 1);
		do {
				if (*tmp3 == ti) { 
					pc = (int *) *(tmp3 + 1); 
					s = tmp1 + 1;
					goto LOOP; 
				}
				tmp3 += 2;
		} while (tmp3 != tmp2);				
		pc = (int *) *(tmp2 + 1);
		goto LOOP;
	caseop(ENTERSWREAL):
#ifdef CHECK_WAKEUP
		if (have_runable && !wake_runable()) goto FAIL;
#endif
		CheckHeap();
		CheckTrail();
		pc = (INSTptr) pc[1];	/* Fall thru */
	caseop(SWITCHONREAL):
	caseop(SWITCH2ONREAL):
		tmp1 = Regs1;
		deref(tmp1);
		ti = *tmp1;
		tmp2 = (int *) *(pc + 1);
		if (tag(ti) == TAG_PAR) {
				if (is_ground(mask(ti), &c)) {
					f = (float) c;
					tmp1 = pc + 2;
					do {
						if (is_equal(int_to_float(*tmp1), f)) {
							pc = (int *) *(tmp1 + 1);
							goto LOOP;
						}
						tmp1 += 2;
					} while (tmp1 != tmp2);
					pc = (int *) *(tmp1 + 1);
					goto LOOP;
				}
				pc = tmp2 + 2;
				goto LOOP;
		} else if (is_unbound_var(ti) || (tag(ti) == TAG_DAEMON)) {
				pc = tmp2 + 2;
				goto LOOP;
		} else {
				pc = (int *) *(tmp2 + 1);
				goto LOOP;
		}
	caseop(GETPVAR):
		tmp1 = curar + *(pc + 1);
		*tmp1 = Regs[*(pc + 2)];
		pc += 3;
		goto LOOP;
	caseop(GETPVAL):
		if (unify(Regs + *(pc + 2), curar + *(pc + 1))) {
				pc += 3;
				goto LOOP;
		} else goto FAIL;
	caseop(GETTVAR):
		Regs[*(pc + 1)] = Regs[*(pc + 2)];
		pc += 3;
		goto LOOP;
	caseop(GETTVAL):
		if (unify(Regs + *(pc + 1), Regs + *(pc + 2))) {
				pc += 3;
				goto LOOP;
		} else goto FAIL;
	caseop(GETSTR):
		tmp1 = (int *) (Regs + *(pc + 2));
		deref(tmp1);
		if (*tmp1 == addtag1(TAG_STR, *(pc + 1))) {
				mode_read = TRUE;
				s = tmp1 + 1;
				pc += 3;
				goto LOOP;
		} else if (is_unbound_var(*tmp1)) {
				mode_read = FALSE;
				make_bound_var(tmp1, (int) heaptop);
				push_check_trail(BTK_BIND, tmp1);
				*heaptop = addtag1(TAG_STR, *(pc + 1));
				s = ++heaptop;
				pc += 3;
				goto LOOP;
		} else if (is_daemon(tmp1)) {
				make_runable(tmp1 + 1);
				mode_read = FALSE;
				make_bound_var(tmp1, (int) heaptop);
				push_check_trail(BTK_DBIND, tmp1);
				*heaptop = addtag1(TAG_STR, *(pc + 1));
				s = ++heaptop;
				pc += 3;
				goto LOOP;
		} else goto FAIL;
	caseop(GETLIST):
		tmp1 = (int *) (Regs + *(pc + 1));
		deref(tmp1);
		if (tag(*tmp1) == TAG_CONS) {
				s = (int *) pmask((int) (*tmp1));
				mode_read = TRUE;
				pc += 2;
				goto LOOP;
		} else if (is_unbound_var(*tmp1)) {
				*tmp1 = addtag(TAG_CONS, heaptop);
				s = heaptop;
				push_check_trail(BTK_BIND, tmp1);
				mode_read = FALSE;
				pc += 2;
				goto LOOP;
		} else if (is_daemon(tmp1)) {
				make_runable(tmp1 + 1);
				make_bound_var(tmp1, heaptop);
				*heaptop = addtag(TAG_CONS, heaptop + 1);
				heaptop++;
				s = heaptop;
				push_check_trail(BTK_DBIND, tmp1);
				mode_read = FALSE;
				pc += 2;
				goto LOOP;
		} else goto FAIL;
	caseop(GETCON):
		ti = *(pc + 1);
		tmp1 = (int *) (Regs + *(pc + 2));
		deref(tmp1);
		if (tag(*tmp1) == TAG_CON) {
			if (mask(*tmp1) == ti) {
				pc += 3;
				goto LOOP;
			} else goto FAIL;
		} else if (is_unbound_var(*tmp1)) {
			*tmp1 = addtag(TAG_CON, ti);
			push_check_trail(BTK_BIND, tmp1);
			pc += 3;
			goto LOOP;
		} else if (is_daemon(tmp1)) {
			make_bound_var(tmp1, heaptop);
			*heaptop = addtag(TAG_CON, ti);
			heaptop++;
			push_check_trail(BTK_DBIND, tmp1);
			make_runable(tmp1 + 1);
			pc += 3;
			goto LOOP;
		} else goto FAIL;
	caseop(GETNIL):
		tmp1 = (int *) (Regs + *(pc + 1));
		deref(tmp1);
		if (tag(*tmp1) == TAG_NIL) {
			pc += 2;
			goto LOOP;
		} else if (is_unbound_var(*tmp1)) {
			*tmp1 = addtag(TAG_NIL, EMPTYLIST);
			push_check_trail(BTK_BIND, tmp1);
			pc += 2;
			goto LOOP;
		} else if (is_daemon(tmp1)) {
			make_bound_var(tmp1, heaptop);
			*heaptop = addtag(TAG_NIL, EMPTYLIST);
			heaptop++;
			push_check_trail(BTK_DBIND, tmp1);
			make_runable(tmp1 + 1);
			pc += 2;
			goto LOOP;
		} else goto FAIL;
	caseop(GET1PVAR):	          /*.................. get1 ...*/ 
		*(curar + 1) = Regs[*(pc + 1)];
		pc += 2;
		goto LOOP;
	caseop(GET1PVAL):
		if (unify(Regs + *(pc + 1), curar + 1)) {
				pc += 2;
				goto LOOP;
		} else goto FAIL;
	caseop(GET1TVAR):
		*Regs1 = Regs[*(pc + 1)];
		pc += 2;
		goto LOOP;
	caseop(GET1TVAL):
		if (unify(Regs1, Regs + *(pc + 1))) {
				pc += 2;
				goto LOOP;
		} else goto FAIL;
	caseop(GET1STR):
		tmp1 = Regs1;
		deref(tmp1);
		if (*tmp1 == addtag1(TAG_STR, *(pc + 1))) {
				mode_read = TRUE;
				s = tmp1 + 1;
				pc += 2;
				goto LOOP;
		} else if (is_unbound_var(*tmp1)) {
				mode_read = FALSE;
				make_bound_var(tmp1, (int) heaptop);
				push_check_trail(BTK_BIND, tmp1);
				*heaptop = addtag1(TAG_STR, *(pc + 1));
				s = ++heaptop;
				pc += 2;
				goto LOOP;
		} else if (is_daemon(tmp1)) {
				make_runable(tmp1 + 1);
				mode_read = FALSE;
				make_bound_var(tmp1, (int) heaptop);
				push_check_trail(BTK_DBIND, tmp1);
				*heaptop = addtag1(TAG_STR, *(pc + 1));
				s = ++heaptop;
				pc += 2;
				goto LOOP;
		} else goto FAIL;
	caseop(GET1LIST):
		tmp1 = Regs1;
		deref(tmp1);
		if (tag(*tmp1) == TAG_CONS) {
				s = (int *) pmask((int) (*tmp1));
				mode_read = TRUE;
				pc++;
				goto LOOP;
		} else if (is_unbound_var(*tmp1)) {
				*tmp1 = addtag(TAG_CONS, heaptop);
				s = heaptop;
				push_check_trail(BTK_BIND, tmp1);
				mode_read = FALSE;
				pc++;
				goto LOOP;
		} else if (is_daemon(tmp1)) {
				make_runable(tmp1 + 1);
				make_bound_var(tmp1, heaptop);
				*heaptop = addtag(TAG_CONS, heaptop + 1);
				heaptop++;
				s = heaptop;
				push_check_trail(BTK_DBIND, tmp1);
				mode_read = FALSE;
				pc++;
				goto LOOP;
		} else goto FAIL;
	caseop(GET1CON):
		tmp1 = Regs1;
		deref(tmp1);
		if (tag(*tmp1) == TAG_CON) {
				if (mask(*tmp1) == *(pc + 1)) {
					pc += 2;
					goto LOOP;
				} else goto FAIL;
		} else if (is_unbound_var(*tmp1)) {
				*tmp1 = addtag(TAG_CON, *(pc + 1));
				push_check_trail(BTK_BIND, tmp1);
				pc += 2;
				goto LOOP;
		} else if (is_daemon(tmp1)) {
				make_bound_var(tmp1, heaptop);
				*heaptop = addtag(TAG_CON, *(pc + 1));
				heaptop++;
				push_check_trail(BTK_DBIND, tmp1);
				make_runable(tmp1 + 1);
				pc += 2;
				goto LOOP;
		} else goto FAIL;
	caseop(GET1NIL):
		tmp1 = Regs1;
		deref(tmp1);
		if (tag(*tmp1) == TAG_NIL) {
				pc++;
				goto LOOP;
		} else if (is_unbound_var(*tmp1)) {
				*tmp1 = addtag(TAG_NIL, EMPTYLIST);
				push_check_trail(BTK_BIND, tmp1);
				pc++;
				goto LOOP;
		} else if (is_daemon(tmp1)) {
				make_bound_var(tmp1, heaptop);
				*heaptop = addtag(TAG_NIL, EMPTYLIST);
				heaptop++;
				push_check_trail(BTK_DBIND, tmp1);
				make_runable(tmp1 + 1);
				pc++;
				goto LOOP;
		} else goto FAIL;
	caseop(GET2PVAR):	          /*.................. get2 ...*/ 
		*(curar + 2) = Regs[*(pc + 1)];
		pc += 2;
		goto LOOP;
	caseop(GET2PVAL):
		if (unify(Regs + *(pc + 1), curar + 2)) {
				pc += 2;
				goto LOOP;
		} else goto FAIL;
	caseop(GET2TVAR):
		*Regs2 = Regs[*(pc + 1)];
		pc += 2;
		goto LOOP;
	caseop(GET2TVAL):
		if (unify(Regs2, Regs + *(pc + 1))) {
				pc += 2;
				goto LOOP;
		} else goto FAIL;
	caseop(GET2STR):
		tmp1 = Regs2;
		deref(tmp1);
		if (*tmp1 == addtag1(TAG_STR, *(pc + 1))) {
				mode_read = TRUE;
				s = tmp1 + 1;
				pc += 2;
				goto LOOP;
		} else if (is_unbound_var(*tmp1)) {
				mode_read = FALSE;
				make_bound_var(tmp1, (int) heaptop);
				push_check_trail(BTK_BIND, tmp1);
				*heaptop = addtag1(TAG_STR, *(pc + 1));
				s = ++heaptop;
				pc += 2;
				goto LOOP;
		 } else if (is_daemon(tmp1)) {
				make_runable(tmp1 + 1);
				mode_read = FALSE;
				make_bound_var(tmp1, (int) heaptop);
				push_check_trail(BTK_DBIND, tmp1);
				*heaptop = addtag1(TAG_STR, *(pc + 1));
				s = ++heaptop;
				pc += 2;
				goto LOOP;
		} else goto FAIL;
	caseop(GET2LIST):
		tmp1 = Regs2;
		deref(tmp1);
		if (tag(*tmp1) == TAG_CONS) {
				s = (int *) pmask((int) (*tmp1));
				mode_read = TRUE;
				pc++;
				goto LOOP;
		} else if (is_unbound_var(*tmp1)) {
				*tmp1 = addtag(TAG_CONS, heaptop);
				s = heaptop;
				push_check_trail(BTK_BIND, tmp1);
				mode_read = FALSE;
				pc++;
				goto LOOP;
		} else if (is_daemon(tmp1)) {
				make_runable(tmp1 + 1);
				make_bound_var(tmp1, heaptop);
				*heaptop = addtag(TAG_CONS, heaptop + 1);
				heaptop++;
				s = heaptop;
				push_check_trail(BTK_DBIND, tmp1);
				mode_read = FALSE;
				pc++;
				goto LOOP;
		} else goto FAIL;
	caseop(GET2CON):
		tmp1 = Regs2;
		deref(tmp1);
		if (tag(*tmp1) == TAG_CON) {
				if (mask(*tmp1) == *(pc + 1)) {
					pc += 2;
					goto LOOP;
				} else goto FAIL;
		} else if (is_unbound_var(*tmp1)) {
				*tmp1 = addtag(TAG_CON, *(pc + 1));
				push_check_trail(BTK_BIND, tmp1);
				pc += 2;
				goto LOOP;
		} else if (is_daemon(tmp1)) {
				make_bound_var(tmp1, heaptop);
				*heaptop = addtag(TAG_CON, *(pc + 1));
				heaptop++;
				push_check_trail(BTK_DBIND, tmp1);
				make_runable(tmp1 + 1);
				pc += 2;
				goto LOOP;
		} else goto FAIL;
	caseop(GET2NIL):
		tmp1 = Regs2;
		deref(tmp1);
		if (tag(*tmp1) == TAG_NIL) {
				pc++;
				goto LOOP;
		} else if (is_unbound_var(*tmp1)) {
				*tmp1 = addtag(TAG_NIL, EMPTYLIST);
				push_check_trail(BTK_BIND, tmp1);
				pc++;
				goto LOOP;
		} else if (is_daemon(tmp1)) {
				make_bound_var(tmp1, heaptop);
				*heaptop = addtag(TAG_NIL, EMPTYLIST);
				heaptop++;
				push_check_trail(BTK_DBIND, tmp1);
				make_runable(tmp1 + 1);
				pc++;
				goto LOOP;
		} else goto FAIL;
	caseop(GET3PVAR):	          /*.................. get3 ...*/ 
		*(curar + 3) = Regs[*(pc + 1)];
		pc += 2;
		goto LOOP;
	caseop(GET3PVAL):
		if (unify(Regs + *(pc + 1), curar + 3)) {
				pc += 2;
				goto LOOP;
		} else goto FAIL;
	caseop(GET3TVAR):
		*Regs3 = Regs[*(pc + 1)];
		pc += 2;
		goto LOOP;
	caseop(GET3TVAL):
		if (unify(Regs3, Regs + *(pc + 1))) {
				pc += 2;
				goto LOOP;
		} else goto FAIL;
	caseop(GET3STR):
		tmp1 = Regs3;
		deref(tmp1);
		if (*tmp1 == addtag1(TAG_STR, *(pc + 1))) {
				mode_read = TRUE;
				s = tmp1 + 1;
				pc += 2;
				goto LOOP;
		} else if (is_unbound_var(*tmp1)) {
				mode_read = FALSE;
				make_bound_var(tmp1, (int) heaptop);
				push_check_trail(BTK_BIND, tmp1);
				*heaptop = addtag1(TAG_STR, *(pc + 1));
				s = ++heaptop;
				pc += 2;
				goto LOOP;
		} else if (is_daemon(tmp1)) {
				make_runable(tmp1 + 1);
				mode_read = FALSE;
				make_bound_var(tmp1, (int) heaptop);
				push_check_trail(BTK_DBIND, tmp1);
				*heaptop = addtag1(TAG_STR, *(pc + 1));
				s = ++heaptop;
				pc += 2;
				goto LOOP;
		} else goto FAIL;
	caseop(GET3LIST):
		tmp1 = Regs3;
		deref(tmp1);
		if (tag(*tmp1) == TAG_CONS) {
				s = (int *) pmask((int) (*tmp1));
				mode_read = TRUE;
				pc++;
				goto LOOP;
		} else if (is_unbound_var(*tmp1)) {
				*tmp1 = addtag(TAG_CONS, heaptop);
				s = heaptop;
				push_check_trail(BTK_BIND, tmp1);
				mode_read = FALSE;
				pc++;
				goto LOOP;
		} else if (is_daemon(tmp1)) {
				make_runable(tmp1 + 1);
				make_bound_var(tmp1, heaptop);
				*heaptop = addtag(TAG_CONS, heaptop + 1);
				heaptop++;
				s = heaptop;
				push_check_trail(BTK_DBIND, tmp1);
				mode_read = FALSE;
				pc++;
				goto LOOP;
		} else goto FAIL;
	caseop(GET3CON):
		tmp1 = Regs3;
		deref(tmp1);
		if (tag(*tmp1) == TAG_CON) {
				if (mask(*tmp1) == *(pc + 1)) {
					pc += 2;
					goto LOOP;
				} else goto FAIL;
		} else if (is_unbound_var(*tmp1)) {
				*tmp1 = addtag(TAG_CON, *(pc + 1));
				push_check_trail(BTK_BIND, tmp1);
				pc += 2;
				goto LOOP;
		} else if (is_daemon(tmp1)) {
				make_bound_var(tmp1, heaptop);
				*heaptop = addtag(TAG_CON, *(pc + 1));
				heaptop++;
				push_check_trail(BTK_DBIND, tmp1);
				make_runable(tmp1 + 1);
				pc += 2;
				goto LOOP;
		} else goto FAIL;
	caseop(GET3NIL):
		tmp1 = Regs3;
		deref(tmp1);
		if (tag(*tmp1) == TAG_NIL) {
				pc++;
				goto LOOP;
		} else if (is_unbound_var(*tmp1)) {
				*tmp1 = addtag(TAG_NIL, EMPTYLIST);
				push_check_trail(BTK_BIND, tmp1);
				pc++;
				goto LOOP;
		} else if (is_daemon(tmp1)) {
				make_bound_var(tmp1, heaptop);
				*heaptop = addtag(TAG_NIL, EMPTYLIST);
				heaptop++;
				push_check_trail(BTK_DBIND, tmp1);
				make_runable(tmp1 + 1);
				pc++;
				goto LOOP;
		} else goto FAIL;
	caseop(UNITVAR):
		if (mode_read) {
				make_bound_var(Regs + *(pc + 1), s++);
				pc += 2;
				goto LOOP;
		} else {
				make_unbound_var(s);
				make_bound_var(Regs + *(pc + 1), s++);
				heaptop++;
				pc += 2;
				goto LOOP;
		}
	caseop(UNIT1VAR):
		if (mode_read) {
				make_bound_var(Regs1, s++);
				pc++;
				goto LOOP;
		} else {
				make_unbound_var(s);
				make_bound_var(Regs1, s++);
				heaptop++;
				pc++;
				goto LOOP;
		}
	caseop(UNIT2VAR):
		if (mode_read) {
				make_bound_var(Regs2, s++);
				pc++;
				goto LOOP;
		} else {
				make_unbound_var(s);
				make_bound_var(Regs2, s++);
				heaptop++;
				pc++;
				goto LOOP;
		}
	caseop(UNIT3VAR):
		if (mode_read) {
				make_bound_var(Regs3, s++);
				pc++;
				goto LOOP;
		} else {
				make_unbound_var(s);
				make_bound_var(Regs3, s++);
				heaptop++;
				pc++;
				goto LOOP;
		}
	caseop(UNIVOID):
		if (mode_read) {
				s++;
				pc++;
				goto LOOP;
		} else {
				make_unbound_var(s);
				heaptop = ++s;
				pc++;
				goto LOOP;
		}
	caseop(UNIVOIDN):
		if (mode_read) {
				s += pc[1];
				pc += 2;
				goto LOOP;
		} else {
				tmp1 = s;
				tmp2 = s + pc[1];
				do {
					make_unbound_var(tmp1++);
				} while (tmp1 != tmp2);
				heaptop = s = tmp2;
				pc += 2;
				goto LOOP;
		}
	caseop(UNITVAL):
		if (!mode_read) {
				tmp1 = (int *) (Regs + *(pc + 1));
				deref(tmp1);
				if (is_unbound_var(*tmp1)) {
					if (tmp1 < s) make_bound_var(s, tmp1);
					else {
						make_bound_var(tmp1, s);
						make_unbound_var(s);
						push_check_trail(BTK_BIND, tmp1);
					}
				} else if ((tag(*tmp1) == TAG_STR) || is_daemon(tmp1))
					 make_bound_var(s, tmp1);
				else *s = *tmp1;
				s = ++heaptop;
				pc += 2;
				goto LOOP;
		} else if (unify(Regs + *(pc + 1), s)) {
				s++;
				pc += 2;
				goto LOOP;
		} else goto FAIL;
	caseop(UNIPVAR):
		if (!mode_read) {
				make_unbound_var(s);
				make_bound_var(curar + *(pc + 1), s);
				s = ++heaptop;
				pc += 2;
				goto LOOP;
		} else {
				tmp1 = curar + *(pc + 1);
				tmp2 = s;
				deref(tmp2);
				if (is_unbound_var(*tmp2) || is_daemon(tmp2)
						 || tag(*tmp2) == TAG_STR)
					make_bound_var(tmp1, tmp2);
				else *tmp1 = *tmp2;
				push_check_trail(BTK_BIND, tmp1);
				s++;
				pc += 2;
				goto LOOP;
		}
	caseop(UNIPVAL):
		if (!mode_read) {
				tmp1 = curar + *(pc + 1);
				deref(tmp1);
				if (is_unbound_var(*tmp1)) {
					make_unbound_var(s);
					make_bound_var(tmp1, s);
					push_check_trail(BTK_BIND, tmp1);
				} else if ((tag(*tmp1) == TAG_STR) || is_daemon(tmp1))
					make_bound_var(s, tmp1);
				else *s = *tmp1;
				s = ++heaptop;
				pc += 2;
				goto LOOP;
		} else if (unify(curar + *(pc + 1), s)) {
				s++;
				pc += 2;
				goto LOOP;
		} else goto FAIL;
	caseop(UNICON):
		if (!mode_read) {
				*s = addtag1(TAG_CON, *(pc + 1));
				s = ++heaptop;
				pc += 2;
				goto LOOP;
		} else {
				tmp1 = s;
				deref(tmp1);
				if (is_unbound_var(*tmp1)) {
					*tmp1 = addtag(TAG_CON, *(pc + 1));
					push_check_trail(BTK_BIND, tmp1);
							} else if (is_daemon(tmp1)) {
								    make_bound_var(tmp1, heaptop);
					*heaptop = addtag(TAG_CON, *(pc + 1));
								    heaptop++;
					push_check_trail(BTK_DBIND, tmp1);
								    make_runable(tmp1 + 1);
				} else if (*tmp1 != addtag1(TAG_CON, *(pc + 1))) goto FAIL;
				s++;
				pc += 2;
				goto LOOP;
		}
	caseop(UNINIL):
		if (!mode_read) {
				*s = addtag(TAG_NIL, EMPTYLIST);
				s = ++heaptop;
				pc = pc + 1;
				goto LOOP;
		} else {
				tmp1 = s;
				deref(tmp1);
				if (is_unbound_var(*tmp1)) {
					*tmp1 = addtag(TAG_NIL, EMPTYLIST);
					push_check_trail(BTK_BIND, tmp1);
				} else if (is_daemon(tmp1)) {
					make_bound_var(tmp1, heaptop);
					*heaptop = addtag(TAG_NIL, EMPTYLIST);
					heaptop++;
					push_check_trail(BTK_DBIND, tmp1);
					make_runable(tmp1 + 1);
				} else if (*tmp1 != addtag(TAG_NIL, EMPTYLIST)) goto FAIL;
					s++;
					pc++;
					goto LOOP;
		}
	caseop(PUTPVAR):
		tmp1 = (int *) (curar + *(pc + 1));
		make_unbound_var(tmp1);
		make_bound_var(Regs + *(pc + 2), tmp1);
		pc += 3;
		goto LOOP;
	caseop(PUTPVARN):
		ti = pc[1];
		tmp2 = pc + 2;
		do {
			tmp1 = (int *) (curar + *tmp2);
			make_unbound_var(tmp1);
			make_bound_var(Regs + tmp2[1], tmp1);
			tmp2 += 2;
		} while (--ti > 0);
		pc = tmp2;
		goto LOOP;
	caseop(PUTPVAL):
		tmp1 = curar + *(pc + 1);
		if (is_unbound_var(*tmp1) || is_daemon(tmp1)) {
				make_bound_var(Regs + *(pc + 2), tmp1);
				pc += 3;
				goto LOOP;
		} else {
				make_bound_var(Regs + *(pc + 2), *tmp1);
				pc += 3;
				goto LOOP;
		}
	caseop(PUTPVALN):
		ti = pc[1];
		tmp2 = pc + 2;
		do {
			tmp1 = curar + *tmp2;
			if (is_unbound_var(*tmp1) || is_daemon(tmp1)) 
				make_bound_var(Regs + tmp2[1], tmp1);
			else make_bound_var(Regs + tmp2[1], *tmp1);
			tmp2 += 2;
		} while (--ti > 0);
		pc = tmp2;
		goto LOOP;
	caseop(PUTUVAL):
		ti1 = *(pc + 2);
		tmp1 = curar + *(pc + 1);
		deref(tmp1);
		if (is_unbound_var(*tmp1)) {
			if (tmp1 >= curar) {
				make_unbound_var(heaptop);
				make_bound_var(Regs + *(pc + 2), heaptop);
				make_bound_var(tmp1, heaptop++);
				push_check_trail(BTK_BIND, tmp1);
			} else make_bound_var(Regs + *(pc + 2), tmp1);
			pc = pc + 3;
			goto LOOP;
		} else if (is_daemon(tmp1)) {
			make_bound_var(Regs + *(pc + 2), tmp1);
			pc = pc + 3;
			goto LOOP;
		} else {
			if (is_func(tmp1)) make_bound_var(Regs + *(pc + 2), tmp1);
			else make_bound_var(Regs + *(pc + 2), *tmp1);
			pc = pc + 3;
			goto LOOP;
		}
	caseop(PUTTVAR):
		make_bound_var(Regs + *(pc + 1), heaptop);
		make_unbound_var(heaptop); 
		heaptop++;
		pc += 2;
		goto LOOP;
	caseop(PUTTVAL):
		Regs[*(pc + 2)] = Regs[*(pc + 1)];
		pc = pc + 3;
		goto LOOP;
	caseop(PUTSTR):
		*heaptop = addtag(TAG_STR, *(pc + 1));
		make_bound_var(Regs + *(pc + 2), heaptop);
		s = ++heaptop;
		pc = pc + 3;
		goto LOOP;
	caseop(PUTLIST):
		Regs[*(pc + 1)] = addtag(TAG_CONS, heaptop);
		s = heaptop;
		pc += 2;
		goto LOOP;
	caseop(PUTCON):
		Regs[*(pc + 2)] = addtag(TAG_CON, *(pc + 1));
		pc = pc + 3;
		goto LOOP;
	caseop(PUTNIL):
		Regs[*(pc + 1)] = addtag(TAG_NIL, EMPTYLIST);
		pc = pc + 2;
		goto LOOP;
	caseop(BLDPVAR):
		make_unbound_var(s);
		make_bound_var(curar + *(pc + 1), s);
		s++;
		heaptop++;
		pc = pc + 2;
		goto LOOP;
	caseop(BLDPVAL):
		tmp1 = (int *) (curar + *(pc + 1));
		deref(tmp1);
		if (is_unbound_var(*tmp1)) {
			if (below_heap(tmp1)) make_bound_var(s, tmp1);
			else {
				make_unbound_var(s);
				make_bound_var(tmp1, s);
				push_check_trail(BTK_BIND, tmp1);
			}
		} else if ((tag(*tmp1) == TAG_STR) || is_daemon(tmp1))
			make_bound_var(s, tmp1);
		else make_bound_var(s, *tmp1);
		heaptop = ++s;
		pc += 2;
		goto LOOP;
	caseop(BLDPVALN):
		ti = pc[1];
		tmp1 = pc + 1;
		s--;
		for (; ti > 0; ti--) {
			tmp2 = (int *) (curar + tmp1[ti]);
			deref(tmp2);
			if (is_unbound_var(*tmp2)) {
				if (below_heap(tmp2)) make_bound_var(s+ti, tmp2);
				else {
					make_unbound_var(s+ti);
					make_bound_var(tmp2, s+ti);
					push_check_trail(BTK_BIND, tmp2);
				}
			} else if ((tag(*tmp2) == TAG_STR) || is_daemon(tmp2))
				make_bound_var(s+ti, tmp2);
			else make_bound_var(s+ti, *tmp2);
		}
		heaptop = s = s + pc[1] + 1;
		pc = pc + pc[1] + 2;			
		goto LOOP;
	caseop(BLDTVAR):
		make_unbound_var(s);
		make_bound_var(Regs + *(pc + 1), s++);
		heaptop++;
		pc += 2;
		goto LOOP;
	caseop(BLDVOID):
		make_unbound_var(s);
		heaptop = ++s;
		pc++;
		goto LOOP;
	caseop(BLDVOIDN):
		ti1 = pc[1];
		ti = ti1;
		s--;
		do {
			make_unbound_var(s + ti);
		} while (--ti > 0);
		heaptop = s = s + ti1 + 1;
		pc += 2;
		goto LOOP;
	caseop(BLDTVAL):
		tmp1 = (int *) (Regs + *(pc + 1));
		deref(tmp1);
		if (is_unbound_var(*tmp1)) {
			make_unbound_var(s);
			make_bound_var(tmp1, s);
			push_check_trail(BTK_BIND, tmp1);
		} else if ((tag(*tmp1) == TAG_STR) || is_daemon(tmp1)) 
			make_bound_var(s, tmp1);
		else *s = *tmp1;
		s++;
		heaptop++;
		pc += 2;
		goto LOOP;
	caseop(BLDTVALN):
		ti = pc[1];
		tmp1 = pc + 1;
		s--;
		for (; ti > 0; ti--) {
			tmp2 = (int *) (Regs + tmp1[ti]);
			deref(tmp2);
			if (is_unbound_var(*tmp2)) {
				if (below_heap(tmp2)) make_bound_var(s+ti, tmp2);
				else {
					make_unbound_var(s+ti);
					make_bound_var(tmp2, s+ti);
					push_check_trail(BTK_BIND, tmp2);
				}
			} else if ((tag(*tmp2) == TAG_STR) || is_daemon(tmp2))
				make_bound_var(s+ti, tmp2);
			else make_bound_var(s+ti, *tmp2);
		}
		heaptop = s = s + pc[1] + 1;
		pc = pc + pc[1] + 2;			
		goto LOOP;
	caseop(BLDCON):
		*(s++) = addtag1(TAG_CON, *(pc + 1));
		heaptop++;
		pc += 2;
		goto LOOP;
	caseop(BLDNIL):
		*s = addtag(TAG_NIL, EMPTYLIST);
		heaptop = ++s;
		pc++;
		goto LOOP;
	caseop(BLDLIST):
		*s = addtag(TAG_CONS, s + 1);
		heaptop = ++s;
		pc++;
		goto LOOP;
	caseop(BLDSTR):
		*s = (int) (s + 1);
		*(s + 1) = addtag1(TAG_STR, *(pc + 1));
		heaptop = s = s + 2;
		pc += 2;
		goto LOOP;		
	caseop(SAVE):
		CheckStack();
		tmp1 = curar; 
		curar = stacktop + 2;
		stacktop = curar + *(pc + 1);
		*(curar + FATHER) = (int) tmp1;
		*(curar + RETPT) = (int) retreg;
		pc += 2;
		goto LOOP;
	caseop(RESTORE):
		retreg = (int *) pmask(*(curar + RETPT));
		curar = (int *) pmask(*(curar + FATHER));
		pc++;
		goto LOOP;
	caseop(CRESTORE):
		if (curar > lastcp) stacktop = curar - 2;
		retreg = (int *) pmask(*(curar + RETPT));
		curar = (int *) pmask(*(curar + FATHER));
		pc++;
		goto LOOP;
	caseop(ENTERTRYELSE):
#ifdef CHECK_WAKEUP
		if (have_runable && !wake_runable()) goto FAIL;
#endif
		CheckHeap();	/* Fall-thru */
	caseop(TRY):
		CheckStack();
		tmp1 = stacktop;
		*(++tmp1) = slack_id;
		*(++tmp1) = solver_id;
		*(++tmp1) = ti = *(pc + 2);
		*(++tmp1) = (int) curar;
		*(++tmp1) = (int) retreg;
		*(++tmp1) = trtop;
		*(++tmp1) = (int) heaptop;
		*(++tmp1) = (int) lastcp;
		*(++tmp1) = (int) (pc + 3);
		lastcp = tmp1;
		safeheap = heaptop;
		tmp2 = Regs;
		stacktop = tmp1 + ti;
		while (tmp1 < stacktop) *(++tmp1) = *(++tmp2);
		pc = (int *) *(pc + 1);
		stamp++;
		goto LOOP;
	caseop(RETRY):
		*(lastcp + NEXTEP) = (int) (pc + 2);
		stacktop = lastcp + mask(*(lastcp + NUMPARS));
		pc = (int *) *(pc + 1);
		stamp++;
		goto LOOP;
	caseop(TRUST):
		stacktop = lastcp - CPFRAME_HEIGHT;
		safeheap = (int *) pmask(*(lastcp + OHEAPTOP));
		lastcp = (int *) pmask(*(lastcp + PREVCP));
		pc = (int *) *(pc + 1);
		goto LOOP;
	caseop(FASTCUT):
		lastcp = (int *) pmask(Regs[pc[1]]);
		pc += 2;
		goto LOOP;
	caseop(SAVECURCP):
		Regs[pc[1]] = (int) lastcp;
		pc += 2;
		goto LOOP;
	caseop(SAVEPREVCP):
		Regs[pc[1]] = lastcp[PREVCP];
		pc += 2;
		goto LOOP;
	caseop(SAVECUT):
		*(curar + pc[2]) = (int) Regs[pc[1]];
		pc += 3;
		goto LOOP;
	caseop(DIRSAVECUT):
		*(curar + *(pc + 1)) = (int) lastcp; 
		pc += 2;
		goto LOOP;
	caseop(DOCUT):
		lastcp = (int *) pmask(*(curar + *(pc + 1)));
		pc += 2;
		goto LOOP;
	caseop(REGINIT):
		make_unbound_var(Regs + *(pc + 1));
		pc += 2;
		goto LOOP;
	case (unsigned int) ADD1PFVAR: 
		tmp1 = curar + *(pc + 1);
		*tmp1 = addtag(TAG_PAR, ++solver_id);
		push_check_trail(BTK_BIND, tmp1);
		if (!s_evar(1.0, mask(*tmp1))) goto FAIL;
		pc += 2;
		goto LOOP;
	caseop(ADDPFVAR):
		*((int *) tfp) = *(pc + 1);
		*(((int *) tfp) + 1) = *(pc + 2);
		tmp1 = curar + *(pc + 3);
		*tmp1 = addtag(TAG_PAR, ++solver_id);
		push_check_trail(BTK_BIND, tmp1);
		if (!s_evar(tf, mask(*tmp1))) goto FAIL;
		pc += 4;
		goto LOOP;
	caseop(ADD1PFVAL):
		tmp1 = curar + *(pc + 1);
		deref(tmp1);
		if (is_unbound_var(*tmp1)) {
			*tmp1 = addtag(TAG_PAR, ++solver_id);
			push_check_trail(BTK_BIND, tmp1);
		} else if (is_daemon(tmp1)) {
			make_bound_var(tmp1, heaptop);
			*heaptop = addtag(TAG_PAR, ++solver_id);
			heaptop++;
			push_check_trail(BTK_DBIND, tmp1);
			make_runable(tmp1 + 1);
			tmp1 = (int *) pmask(*tmp1);
		} else if (!is_param(tmp1)) {
			clam_trace(intpc(pc));
			warning("type clash pc %d", intpc(pc));
			fatal("1111");
			goto FAIL; /* type clash */
		}
		if (!s_evar(1.0, mask(*tmp1))) goto FAIL;
		pc += 2;
		goto LOOP;
	caseop(ADDPFVAL):
		*((int *) tfp) = *(pc + 1);
		*(((int *) tfp) + 1) = *(pc + 2);
		tmp1 = curar + *(pc + 3);
		deref(tmp1);
		if (is_unbound_var(*tmp1)) {
			*tmp1 = addtag(TAG_PAR, ++solver_id);
			push_check_trail(BTK_BIND, tmp1);
		} else if (is_daemon(tmp1)) {
			make_bound_var(tmp1, heaptop);
			*heaptop = addtag(TAG_PAR, ++solver_id);
			heaptop++;
			push_check_trail(BTK_DBIND, tmp1);
			make_runable(tmp1 + 1);
			tmp1 = (int *) pmask(*tmp1);
		} else if (!is_param(tmp1)) {
			clam_trace(intpc(pc));
			warning("type clash pc %d", intpc(pc));
			fatal("1111");
			goto FAIL; /* type clash */
		}
		if (!s_evar(tf, mask(*tmp1))) goto FAIL;
		pc += 4;
		goto LOOP;
	caseop(ADDT1PFVAR):
		tmp1 = Regs + *(pc + 1);
		*tmp1 = addtag(TAG_PAR, ++solver_id);
		if (!s_evar(1.0, mask(*tmp1))) goto FAIL;
		pc += 2;
		goto LOOP;
	caseop(ADDTPFVAR):
		*((int *) tfp) = *(pc + 1);
		*(((int *) tfp) + 1) = *(pc + 2);
		tmp1 = Regs + *(pc + 3);
		*tmp1 = addtag(TAG_PAR, ++solver_id);
		if (!s_evar(tf, mask(*tmp1))) goto FAIL;
		pc += 4;
		goto LOOP;
	caseop(ADDT1PFVAL):
		tmp1 = Regs + *(pc + 1);
		deref(tmp1);
		if (is_unbound_var(*tmp1)) {
			*tmp1 = addtag(TAG_PAR, ++solver_id);
			push_check_trail(BTK_BIND, tmp1);
		} else if (is_daemon(tmp1)) {
			make_bound_var(tmp1, heaptop);
			*heaptop = addtag(TAG_PAR, ++solver_id);
			heaptop++;
			push_check_trail(BTK_DBIND, tmp1);
			make_runable(tmp1 + 1);
			tmp1 = (int *) pmask(*tmp1);
		} else if (!is_param(tmp1)) {
			clam_trace(intpc(pc));
			warning("type clash pc %d", intpc(pc));
			fatal("1111");
			goto FAIL; /* type clash */
		}
		if (!s_evar(1.0, mask(*tmp1))) goto FAIL;
		pc += 2;
		goto LOOP;
	caseop(ADDTPFVAL):
		*((int *) tfp) = *(pc + 1);
		*(((int *) tfp) + 1) = *(pc + 2);
		tmp1 = Regs + *(pc + 3);
		deref(tmp1);
		if (is_unbound_var(*tmp1)) {
			*tmp1 = addtag(TAG_PAR, ++solver_id);
			push_check_trail(BTK_BIND, tmp1);
		} else if (is_daemon(tmp1)) {
			make_bound_var(tmp1, heaptop);
			*heaptop = addtag(TAG_PAR, ++solver_id);
			heaptop++;
			push_check_trail(BTK_DBIND, tmp1);
			make_runable(tmp1 + 1);
			tmp1 = (int *) pmask(*tmp1);
		} else if (!is_param(tmp1)) {
			clam_trace(intpc(pc));
			warning("type clash pc %d", intpc(pc));
			fatal("1111");
			goto FAIL; /* type clash */
		}
		if (!s_evar(tf, mask(*tmp1))) goto FAIL;
		pc += 4;
		goto LOOP;
	caseop(INITPF):
		*((int *) tfp) = *(pc + 1);
		*(((int *) tfp) + 1) = *(pc + 2);
		stored_constant = -tf;
		pc += 3;
		init_eqn();
		goto LOOP;
	caseop(INIT0PF):
		stored_constant = 0.0;
		pc = pc + 1;
		init_eqn();
		goto LOOP;
	caseop(SOLVE_PF0):
		if (!s_econ(-1.0 * stored_constant)) goto FAIL;
		pc = pc + 1;
		goto LOOP;
	caseop(SOLVE_GT0):
		if (!s_gt0(stored_constant)) goto FAIL;		
		pc = pc + 1;
		goto LOOP;
	caseop(SOLVE_GE0):
		if (!s_ge0(stored_constant)) goto FAIL;
		pc = pc + 1;
		goto LOOP;
	caseop(PUTPNUM):
		*((int *) tfp) = *(pc + 1);
		*(((int *) tfp) + 1) = *(pc + 2);
		makenum(++solver_id, tf);
		curar[*(pc + 3)] = addtag(TAG_PAR, solver_id); 
		pc += 4;
		goto LOOP;
	caseop(PUTTNUM):
		*((int *) tfp) = *(pc + 1);
		*(((int *) tfp) + 1) = *(pc + 2);
		makenum(++solver_id, tf);
		Regs[*(pc + 3)] = addtag(TAG_PAR, solver_id); 
		pc += 4;
		goto LOOP;
	caseop(GETPNUM):
		*((int *) tfp) = *(pc + 1);
		*(((int *) tfp) + 1) = *(pc + 2);
		tmp1 = curar + *(pc + 3);
		deref(tmp1);
		if (is_unbound_var(*tmp1)) {
			makenum(++solver_id, tf);
			*tmp1 = addtag(TAG_PAR, solver_id);
			push_check_trail(BTK_BIND, tmp1);
			pc += 4;
			goto LOOP;
		} else if (is_daemon(tmp1)) {
			makenum(++solver_id, tf);
			make_bound_var(tmp1, heaptop);
			*heaptop = addtag(TAG_PAR, solver_id);
			heaptop++;
			push_check_trail(BTK_DBIND, tmp1);
			make_runable(tmp1 + 1);
			pc += 4;
			goto LOOP;
		} else {
			if (tag(*tmp1) == TAG_PAR) 
				if (is_ground(mask(*tmp1), &c)) 
					if (is_equal(c, tf)) {
						pc += 4;
						goto LOOP;
					} else goto FAIL;
				else if (solve_eqn_1(mask(*tmp1), tf)) {
					pc += 4;
					goto LOOP;
				} else goto FAIL;
			else goto FAIL;
		}
	caseop(GETTNUM):
		*((int *) tfp) = *(pc + 1);
		*(((int *) tfp) + 1) = *(pc + 2);
		tmp1 = Regs + *(pc + 3);
		deref(tmp1);
		if (is_unbound_var(*tmp1)) {
			makenum(++solver_id, tf);
			*tmp1 = addtag(TAG_PAR, solver_id);
			push_check_trail(BTK_BIND, tmp1);
			pc += 4;
			goto LOOP;
		} else if (is_daemon(tmp1)) {
			makenum(++solver_id, tf);
			make_bound_var(tmp1, heaptop);
			*heaptop = addtag(TAG_PAR, solver_id);
			heaptop++;
			push_check_trail(BTK_DBIND, tmp1);
			make_runable(tmp1 + 1);
			pc += 4;
			goto LOOP;
		} else {
			if (tag(*tmp1) == TAG_PAR) 
				if (is_ground(mask(*tmp1), &c)) 
					if (is_equal(c, tf)) {
						pc += 4;
						goto LOOP;
					} else goto FAIL;
				else if (solve_eqn_1(mask(*tmp1), tf)) {
					pc += 4;
					goto LOOP;
				} else goto FAIL;
			else goto FAIL;
		}
	caseop(BLDNUM):
		*((int *) tfp) = *(pc + 1);
		*(((int *) tfp) + 1) = *(pc + 2);
		makenum(++solver_id, tf);
		*(s++) = addtag(TAG_PAR, solver_id);
		heaptop++;
		pc += 3;
		goto LOOP;
	caseop(UNINUM):
		*((int *) tfp) = *(pc + 1);
		*(((int *) tfp) + 1) = *(pc + 2);
		makenum(++solver_id, tf);
		if (!mode_read) {
			*s = addtag(TAG_PAR, solver_id);
			s++;
			heaptop++;
			pc += 3;
			goto LOOP;
		} else {
			tmp1 = s;
			deref(tmp1);
			if (is_unbound_var(*tmp1)) {
				*tmp1 = addtag(TAG_PAR, solver_id);
				push_check_trail(BTK_BIND, tmp1);
			} else if (is_daemon(tmp1)) {
			    make_bound_var(tmp1, heaptop);
				*heaptop = addtag(TAG_PAR, solver_id);
			    heaptop++;
				push_check_trail(BTK_DBIND, tmp1);
			    make_runable(tmp1 + 1);
			} else {
				if (tag(*tmp1) != TAG_PAR || 
					!solve_eqn_2(mask(*tmp1), solver_id, 1.0))
					goto FAIL;
			}
			s++;
			pc += 3;
			goto LOOP;
		}
	caseop(SOLVE_MULT):
		ti = *(pc + 1);
		*((int *) tfp) = *(pc + 2);
		*(((int *) tfp) + 1) = *(pc + 3);
		tmp1 = (bit6(ti) ? curar + *(pc + 4) : Regs + *(pc + 4));
		if (bit5(ti)) check_tag_par(tmp1) else make_tag_par(tmp1);
		tmp2 = (bit4(ti) ? curar + *(pc + 5) : Regs + *(pc + 5));
		if (bit3(ti)) check_tag_par(tmp2) else make_tag_par(tmp2);
		tmp3 = (bit2(ti) ? curar + *(pc + 6) : Regs + *(pc + 6));
		if (bit1(ti)) check_tag_par(tmp3) else make_tag_par(tmp3);
		if (!s_mult(tf, mask(*tmp1), mask(*tmp2), mask(*tmp3))) goto FAIL;
		pc += 7;
		goto LOOP;
	caseop(SOLVE_MULT1):
		ti = *(pc + 1);
		tmp1 = (bit6(ti) ? curar + *(pc + 2) : Regs + *(pc + 2));
		if (bit5(ti)) check_tag_par(tmp1) else make_tag_par(tmp1);
		tmp2 = (bit4(ti) ? curar + *(pc + 3) : Regs + *(pc + 3));
		if (bit3(ti)) check_tag_par(tmp2) else make_tag_par(tmp2);
		tmp3 = (bit2(ti) ? curar + *(pc + 4) : Regs + *(pc + 4));
		if (bit1(ti)) check_tag_par(tmp3) else make_tag_par(tmp3);
		if (!s_mult(1.0, mask(*tmp1), mask(*tmp2), mask(*tmp3))) goto FAIL;
		pc += 5;
		goto LOOP;
	caseop(SOLVE_MIN):
		ti = *(pc + 1);
		tmp1 = (bit6(ti) ? curar + *(pc + 2) : Regs + *(pc + 2));
		if (bit5(ti)) check_tag_par(tmp1) else make_tag_par(tmp1);
		tmp2 = (bit4(ti) ? curar + *(pc + 3) : Regs + *(pc + 3));
		if (bit3(ti)) check_tag_par(tmp2) else make_tag_par(tmp2);
		tmp3 = (bit2(ti) ? curar + *(pc + 4) : Regs + *(pc + 4));
		if (bit1(ti)) check_tag_par(tmp3) else make_tag_par(tmp3);
		if (!s_min(mask(*tmp1), mask(*tmp2), mask(*tmp3))) goto FAIL;
		pc += 5;
		goto LOOP;
	caseop(SOLVE_MAX):
		ti = *(pc + 1);
		tmp1 = (bit6(ti) ? curar + *(pc + 2) : Regs + *(pc + 2));
		if (bit5(ti)) check_tag_par(tmp1) else make_tag_par(tmp1);
		tmp2 = (bit4(ti) ? curar + *(pc + 3) : Regs + *(pc + 3));
		if (bit3(ti)) check_tag_par(tmp2) else make_tag_par(tmp2);
		tmp3 = (bit2(ti) ? curar + *(pc + 4) : Regs + *(pc + 4));
		if (bit1(ti)) check_tag_par(tmp3) else make_tag_par(tmp3);
		if (!s_max(mask(*tmp1), mask(*tmp2), mask(*tmp3))) goto FAIL;
		pc += 5;
		goto LOOP;
	caseop(SOLVE_POW):
		ti = *(pc + 1);
		tmp1 = (bit6(ti) ? curar + *(pc + 2) : Regs + *(pc + 2));
		if (bit5(ti)) check_tag_par(tmp1) else make_tag_par(tmp1);
		tmp2 = (bit4(ti) ? curar + *(pc + 3) : Regs + *(pc + 3));
		if (bit3(ti)) check_tag_par(tmp2) else make_tag_par(tmp2);
		tmp3 = (bit2(ti) ? curar + *(pc + 4) : Regs + *(pc + 4));
		if (bit1(ti)) check_tag_par(tmp3) else make_tag_par(tmp3);
		if (!s_pow(mask(*tmp1), mask(*tmp2), mask(*tmp3))) goto FAIL;
		pc += 5;
		goto LOOP;
	caseop(SOLVE_ABS):
		ti = *(pc + 1);
		tmp1 = (bit4(ti) ? curar + *(pc + 2) : Regs + *(pc + 2));
		if (bit3(ti)) check_tag_par(tmp1) else make_tag_par(tmp1);
		tmp2 = (bit2(ti) ? curar + *(pc + 3) : Regs + *(pc + 3));
		if (bit1(ti)) check_tag_par(tmp2) else make_tag_par(tmp2);
		if (!s_abs(mask(*tmp1), mask(*tmp2))) goto FAIL;
		pc += 4;
		goto LOOP;
	caseop(SOLVE_EVAL):
		ti = *(pc + 1);
		tmp1 = (bit4(ti) ? curar + *(pc + 2) : Regs + *(pc + 2));
		if (!bit3(ti)) { 
			make_unbound_var(heaptop);
			 make_bound_var(tmp1,(heaptop++));
		 }
		tmp2 = (bit2(ti) ? curar + *(pc + 3) : Regs + *(pc + 3));
		if (!bit1(ti)) { 
			make_unbound_var(heaptop); 
			make_bound_var(tmp2,(heaptop++));
		 }
		if (!s_eval(tmp1, tmp2)) goto FAIL;
		pc += 4;
		goto LOOP;
	caseop(SOLVE_SIN):
		ti = *(pc + 1);
		tmp1 = (bit4(ti) ? curar + *(pc + 2) : Regs + *(pc + 2));
		if (bit3(ti)) check_tag_par(tmp1) else make_tag_par(tmp1);
		tmp2 = (bit2(ti) ? curar + *(pc + 3) : Regs + *(pc + 3));
		if (bit1(ti)) check_tag_par(tmp2) else make_tag_par(tmp2);
		if (!s_sin(mask(*tmp1), mask(*tmp2))) goto FAIL;
		pc += 4;
		goto LOOP;
	caseop(SOLVE_COS):
		ti = *(pc + 1);
		tmp1 = (bit4(ti) ? curar + *(pc + 2) : Regs + *(pc + 2));
		if (bit3(ti)) check_tag_par(tmp1) else make_tag_par(tmp1);
		tmp2 = (bit2(ti) ? curar + *(pc + 3) : Regs + *(pc + 3));
		if (bit1(ti)) check_tag_par(tmp2) else make_tag_par(tmp2);
		if (!s_cos(mask(*tmp1), mask(*tmp2))) goto FAIL;
		pc += 4;
		goto LOOP;
	caseop(SOLVE_ARCSIN):
		ti = *(pc + 1);
		tmp1 = (bit4(ti) ? curar + *(pc + 2) : Regs + *(pc + 2));
		if (bit3(ti)) check_tag_par(tmp1) else make_tag_par(tmp1);
		tmp2 = (bit2(ti) ? curar + *(pc + 3) : Regs + *(pc + 3));
		if (bit1(ti)) check_tag_par(tmp2) else make_tag_par(tmp2);
		if (!s_arcsin(mask(*tmp1), mask(*tmp2))) goto FAIL;
		pc += 4;
		goto LOOP;
	caseop(SOLVE_ARCCOS):
		ti = *(pc + 1);
		tmp1 = (bit4(ti) ? curar + *(pc + 2) : Regs + *(pc + 2));
		if (bit3(ti)) check_tag_par(tmp1) else make_tag_par(tmp1);
		tmp2 = (bit2(ti) ? curar + *(pc + 3) : Regs + *(pc + 3));
		if (bit1(ti)) check_tag_par(tmp2) else make_tag_par(tmp2);
		if (!s_arccos(mask(*tmp1), mask(*tmp2))) goto FAIL;
		pc += 4;
		goto LOOP;
	caseop(RETRACT):
		tmp1 = Regs + pc[1];
		deref(tmp1);
		/***
		if (below_heap(tmp1) && !is_func(tmp1)) {
			*heaptop = *tmp1;
			tmp1 = heaptop++;
		}
		***/
        if (is_unbound_var(*tmp1) && (tmp1 >= curar)) {
                make_unbound_var(heaptop);
                make_bound_var(tmp1, heaptop++);
                push_check_trail(BTK_BIND, tmp1);
		}
		if (retract_rule(tmp1, pc, TRUE)) {
			pc += 3;
			goto LOOP;
		} else goto FAIL;
	caseop(RETRACT_AGAIN):
		if (retract_rule(0, pc, FALSE)) {
			pc++;
			goto LOOP;
		} else goto FAIL;
	caseop(DETABLE):
		tmp1 = Regs + pc[1];
		deref(tmp1);

        if (is_unbound_var(*tmp1) && (tmp1 >= curar)) {
                make_unbound_var(heaptop);
                make_bound_var(tmp1, heaptop++);
                push_check_trail(BTK_BIND, tmp1);
		}
		if (detable_rule(tmp1, pc, TRUE)) {
			pc += 3;
			goto LOOP;
		} else goto FAIL;
	caseop(DETABLE_AGAIN):
		if (detable_rule(0, pc, FALSE)) {
			pc++;
			goto LOOP;
		} else goto FAIL;
	caseop(ROOLE):
		tmp1 = Regs + pc[1];
		deref(tmp1);
	        /* NEEDS CLEANUP LATER: CHECK */
		/***
		if (below_heap(tmp1) && !is_func(tmp1)) {
			*heaptop = *tmp1;
			tmp1 = heaptop++;
		}
		***/
	/***/
	  if (is_unbound_var(*tmp1) && (tmp1 >= curar)) {
                make_unbound_var(heaptop);
                make_bound_var(tmp1, heaptop++);
                push_check_trail(BTK_BIND, tmp1);
		}
		/***/
		tmp2 = Regs + pc[2];
		deref(tmp2);
		/***
		if (below_heap(tmp2) && !is_func(tmp2)) {
			*heaptop = *tmp2;
			tmp2 = heaptop++;
		}
		***/
	/***/
        if (is_unbound_var(*tmp2) && (tmp2 >= curar)) {
                make_unbound_var(heaptop);
                make_bound_var(tmp2, heaptop++);
               push_check_trail(BTK_BIND, tmp2);
		}
		/***/
		if (match_rule(tmp1, tmp2, pc, TRUE)) {
			pc += 4;
			goto LOOP;
		} else goto FAIL;
	caseop(ROOLE_AGAIN):
		if (match_rule(0, 0, pc, FALSE)) {
			pc++;
			goto LOOP;
		} else goto FAIL;
	caseop(SPCALL):
		ti = spred[pc[1]]->arity;
		if (emul_sys_pred(pc)) {
			pc += 2 + ti;
			goto LOOP;
		} else goto FAIL;
	caseop(READ):
		if (!do_read(see_input, curar + *(pc + 1))) goto FAIL;
		pc += 2;	
		goto LOOP;
	caseop(READREG):
		if (!do_read(see_input, Regs + *(pc + 1))) goto FAIL;
		pc += 2;	
		goto LOOP;
	caseop(PRINT):
		printterm(outfile, &Regs[pc[1]], TRUE);
		pc += 2;
		goto LOOP;
	caseop(PRINTF):
		tmp1 = findbind(&Regs[pc[1]]);
		if (!is_con(tmp1)) {
			warn_err("incorrect format argument for printf/2");
			goto FAIL;
		}
		do_printf(outfile, &Regs[pc[2]], string_of(mask(*tmp1)), TRUE);
		pc += 3;
		goto LOOP;
	caseop(DUMP):
		if (have_runable && !wake_runable()) goto FAIL;
		do_dump(outfile, &Regs[pc[2]], string_of(mask(pc[1])));
		pc += 3;
		goto LOOP;
	caseop(DBGENTRY):
		emul_dbg_entry(pc);
		pc += 3;
		goto LOOP;		
	caseop(FFAIL):
		goto FAIL;
	caseop(GFAIL):
		if (interactive) fprintf(outfile, "\n*** No\n");
		return FALSE;
	caseop(HALT):
		if (have_runable && !wake_runable()) goto FAIL;
		if (!interactive) return TRUE;
		if (emul_halt()) goto END_RUNGOAL;
		goto FAIL;
	caseop(JZF):
		ti = *(pc + 1);
		if (*((double *)(Regs + ti)) == 0.0) pc = (int *) *(pc + 2);
		else pc = pc + 3;
		goto LOOP;
	caseop(JGF):
		ti = *(pc + 1);
		if (*((double *)(Regs + ti)) > 0.0)	pc = (int *) *(pc + 2);
		else pc = pc + 3;
		goto LOOP;
	caseop(LITF):
		ti = *(pc + 3);
		*(Regs + ti) = *(pc + 1);
		*(Regs + ti + 1) = *(pc + 2);
		pc = pc + 4;
		goto LOOP;
	caseop(SUBF):
		*((double *)(Regs + *(pc + 3))) = 
		*((double *)(Regs + *(pc + 1))) - 
		*((double *)(Regs + *(pc + 2)));
		pc = pc + 4;
		goto LOOP;
	caseop(ADDF):
		*((double *)(Regs + *(pc + 3))) = 
		*((double *)(Regs + *(pc + 1))) +
		*((double *)(Regs + *(pc + 2)));
		pc = pc + 4;
		goto LOOP;
	caseop(MULF):
		*((double *)(Regs + *(pc + 3))) = 
		*((double *)(Regs + *(pc + 1))) *
		*((double *)(Regs + *(pc + 2)));
		pc = pc + 4;
		goto LOOP;
	caseop(DIVF):
		*((double *)(Regs + *(pc + 3))) = 
		*((double *)(Regs + *(pc + 1))) /
		*((double *)(Regs + *(pc + 2)));
		pc = pc + 4;
		goto LOOP;
	caseop(MVF):
		ti = *(pc + 1);
		ti1 = *(pc + 2);
		*(Regs + ti1++) = *(Regs + ti++);
		*(Regs + ti1) = *(Regs + ti);
		pc = pc + 3;
		goto LOOP;
	caseop(STF):
		ti = *(pc + 1);
		tmp1 = curar + *(pc + 2);
		*(tmp1++) = TAG_NUM; /* for garbage collector's benefit */
		*(tmp1++) = *(Regs + (ti++));
		*tmp1 = *(Regs + ti);
		pc = pc + 3;
		goto LOOP;
	caseop(LDF):
		ti = *(pc + 2);
		tmp1 = curar + *(pc + 1) + 1;
		*(Regs + (ti++)) = *(tmp1++);
		*(Regs + ti) = *tmp1;
		pc = pc + 3;
		goto LOOP;
	caseop(GETF):
		tmp1 = Regs + *(pc + 1);
		tmp2 = Regs + *(pc + 2);
		deref(tmp1);
		if (tag(*tmp1) == TAG_PAR && is_ground(mask(*tmp1), &c)) {
			tf = c;
			*tmp2 = *((int *) tfp);
			 *(tmp2 + 1) = *(((int *) tfp) + 1);
		} else runtime_error("GETF violated");
		pc = pc + 3;
		goto LOOP;
	caseop(PUTF):
		tmp1 = Regs + *(pc + 1);
		tmp2 = Regs + *(pc + 2);
		*((int *) tfp) = *tmp1;
		*(((int *) tfp) + 1) = *(tmp1 + 1);
		makenum(++solver_id, tf);
		*tmp2 = addtag(TAG_PAR, solver_id); 
		pc = pc + 3;
		goto LOOP;
	caseop(DYNAMIC_TRY):
		if ((pc = run_dynamic(pc, first_dyn_call, TRUE))) {
			first_dyn_call = FALSE;
			goto LOOP;
		}
		first_dyn_call = FALSE;
		goto FAIL;
	caseop(DYNAMIC_0_TRY):
		if ((pc = run_dynamic(pc, first_dyn_call, FALSE))) {
			first_dyn_call = FALSE;
			goto LOOP;
		}
		first_dyn_call = FALSE;
		goto FAIL;
	caseop(DYN_CALL):
		if (have_runable && !wake_runable()) goto FAIL;
		first_dyn_call = TRUE;
		if (heap >= maxheap || trtop >= maxtrail) 
			fatal("heap/trail overflow");
		retreg = pc + 2;
		if (pc = (int *) val_to_pc(ti = *(pc + 1))) {
			Regs[arity_of(ti)+1] = (int) lastcp;
			goto LOOP;
		}
		first_dyn_call = FALSE;
		goto FAIL;
	caseop(DYN_JUMP):
		if (have_runable && !wake_runable()) goto FAIL;
		first_dyn_call = TRUE;
		if (heap >= maxheap || trtop >= maxtrail) 
			fatal("heap/trail overflow");
		if (pc = (int *) val_to_pc(ti = *(pc + 1))) {
			Regs[arity_of(ti)+1] = (int) lastcp;
			goto LOOP;
		}
		first_dyn_call = FALSE;
		goto FAIL;
	default:
	   	fprintf(error_stream, "(code[%d] = %d)\n", intpc(pc), *pc);
		fatal("Illegal Instruction");
	}

	/**********/
	END_RUNGOAL: return TRUE;
	/**********/
}

/*---------------------------------------------------------------------------*/

solver_backtrack(ti1, i)
int ti1, i;
{
	switch (tagnum(i)) {
		case NUM_BTK_NULL_EQN: restore_null_eqn(mask(i) | ((unsigned)tagtrail[ti1] << 28)); break;
		case NUM_BTK_EQN: restore_eqn(pmask(i) | ((unsigned)tagtrail[ti1] << 28)); break;
		case NUM_BTK_NULL_INEQ: restore_null_ineq(mask(i) | ((unsigned)tagtrail[ti1] << 28)); break;
		case NUM_BTK_INEQ: restore_ineq(pmask(i) | ((unsigned)tagtrail[ti1] << 28)); break;
		case NUM_BTK_NLIN: restore_nl_eqn(pmask(i) | ((unsigned)tagtrail[ti1] << 28)); break;
		case NUM_BTK_DBIND: *((int *)pmask(i)) = TAG_DAEMON; break; // | ((unsigned)tagtrail[ti1] << 28))) = TAG_DAEMON; break;
		default: fprintf(stderr, "-- %d --\n", tagnum(i)); fatal("79980");
	}
}

emul_halt()
{
char req[MAX_MESSAGE];
	if (lastcp != first_lastcp) {
		if (!nlin_count && !daemons_remaining()) printf("\n*** Retry? ");
		else printf("\n*** (Maybe) Retry? ");
		fflush(stdout);
/*
		fgets(req, 99, cur_stream);
		fgets(req, 99, see_input);
		readline(req, 99);
*/
		readline(req, 99);
		if (*req == ';' || *req == 'y' || *req == 'Y') return FALSE;
	} else {
		if (!nlin_count && !daemons_remaining()) printf("\n*** Yes\n");
		else printf("\n*** Maybe\n");
	}
	return TRUE;
}

emul_sys_pred(pc)
int *pc;
{
int ti, (*builtin)(), flag;

	ti = *(pc + 1); 
	builtin = spred[ti]->func;
	flag = TRUE;
	switch (spred[ti]->arity) {
		case 0:  flag = ((*builtin)()); break;
		case 1:  flag = ((*builtin)(&regs[pc[2]])); break;
		case 2:  flag = ((*builtin)(&regs[pc[2]], &regs[pc[3]])); break;
		case 3:  flag = ((*builtin)(&regs[pc[2]], &regs[pc[3]], &regs[pc[4]]));
				break;
		case 4:  flag = ((*builtin)(&regs[pc[2]], &regs[pc[3]],
						 &regs[pc[4]], &regs[pc[5]])); 
				break;
		case 5:  flag = ((*builtin)(&regs[pc[2]], &regs[pc[3]], &regs[pc[4]],
						 &regs[pc[5]], &regs[pc[6]]));
				break;
		case 6:  flag = ((*builtin)(&regs[pc[2]], &regs[pc[3]], &regs[pc[4]],
						 &regs[pc[5]], &regs[pc[6]], &regs[pc[7]]));
		case 7:  flag = ((*builtin)(&regs[pc[2]], &regs[pc[3]], &regs[pc[4]],
						 &regs[pc[5]], &regs[pc[6]], &regs[pc[7]], &regs[pc[8]]));
				break;
		default: fatal("runtime: arity of system predicate too high");
	}
	return flag;
}

emul_dbg_entry(pc)
int *pc;
{
int val, rno, i, n;
	if (TRACE) {
		val = *(pc + 1);
		if (!p_spy(val)) return;
		rno = *(pc + 2);
		n = arity_of(val);
		if (n > 0) {
				fprintf(outfile, "TRY(%d): %s(", rno, string_of(val));
				for (i = 1; i <= n; i++) {
					printterm(outfile, &regs[i], 0);
					if (i < n) fprintf(outfile,", ");				
				}
				fprintf(outfile, ")\n");
		} else fprintf(outfile, "TRY(%d): %s\n", rno, string_of(val));
	}
}


/*---------------------------------------------------------- unify ----------*/

/* #define MAX_UNIFY_LEVELS 4096 */
#define MAX_UNIFY_LEVELS 8192
#define UNIFY_SAFETY 999

unify(t1, t2)
int *t1, *t2;
{
register int tp1, tp2;
int *stack[MAX_UNIFY_LEVELS], top, i, a, b, *tmp;
double c1, c2;

	top = 0;
	loop {
/*
		deref(t1);
		deref(t2);
*/
DEREF1:	tp1 = *t1;
		if (tp1 > 0) {
				t1 = (int *) tp1;
				goto DEREF1;
		}
DEREF2:	tp2 = *t2;
		if (tp2 > 0) {
				t2 = (int *) tp2;
				goto DEREF2;
		}
		switch (tag_pair[(int) tagnum(tp1)][(int) tagnum(tp2)]) {
/*
		switch (tag_pair[(int) tagnum(*t1)][(int) tagnum(*t2)])
*/
		case 1: /* 0, TAG_CON  */
		case 2: /* 0, TAG_NIL  */
		case 3: /* 0, TAG_PAR  */
		case 4: /* 0, TAG_NUM  */
		case 5: /* 0, TAG_CONS */
				*t1 = *t2;
				if (t1 >= heap && !safe(t1)) push_trail(BTK_BIND, t1);
				break;
		case 6: /* 0, TAG_STR */
				make_bound_var(t1, t2);
				if (t1 >= heap && !safe(t1)) push_trail(BTK_BIND, t1);
				break;
		case 7:  /* TAG_CON, 0  */
		case 8:  /* TAG_NIL, 0  */
		case 9:  /* TAG_PAR, 0  */
		case 10: /* TAG_NUM, 0  */
		case 11: /* TAG_CONS, 0 */
				*t2 = *t1;
				if (t2 >= heap && !safe(t2)) push_trail(BTK_BIND, t2);
				break;
		case 12: /* TAG_STR, 0  */
				make_bound_var(t2, t1);
				if (t2 >= heap && !safe(t2)) push_trail(BTK_BIND, t2);
				break;
		case 13: /* TAG_PAR, TAG_PAR */
				if (solve_eqn_2(mask(*t1), mask(*t2), 1.0)) break;
				return FALSE;
		case 14: /* TAG_CON, TAG_CON */
				if (*t1 == *t2) break;
				return FALSE;
		case 15: /* TAG_NIL, TAG_NIL */
				break;
		case 16: /* TAG_STR, TAG_STR */
				if (t1 == t2) break;
				if ((a = mask(*t1)) == (b = mask(*t2))) {
#ifdef CYCLIC_BIND
				  push_trail(BTK_TEST, t1);
				  *t1 = t2;
#endif
					if (top >= MAX_UNIFY_LEVELS - UNIFY_SAFETY) 
						fatal("unify stack blown");
					tmp = t1 + functors[a].arity;
					do {
						stack[++top] = ++t1;
						stack[++top] = ++t2;
					} while (t1 < tmp);
					break;
				}
				return FALSE;
		case 17: /* TAG_CONS, TAG_CONS */
				if (*t1 != *t2) {
					if (top >= MAX_UNIFY_LEVELS - 2) fatal("unify stack blown");
					t1 = (int *) pmask(*t1);
					t2 = (int *) pmask(*t2);
					stack[++top] = t1++;
					stack[++top] = t2++;
					stack[++top] = t1;
					stack[++top] = t2;
				}
				break;
		case 18: /* TAG_NUM, TAG_NUM */
				c1 = *((double *)(pmask(*t1)));
				c2 = *((double *)(pmask(*t2)));
				if (is_equal(c1, c2)) break;
				return FALSE;
		case 19: /* TAG_NUM, TAG_PAR */
				if (solve_eqn_1(t2, *((double *) (pmask(*t1))))) break;
				return FALSE;
		case 20: /* TAG_PAR, TAG_NUM */
				if (solve_eqn_1(t1, *((double *) (pmask(*t2))))) break;
				return FALSE;
		case 21:
				if (t1 > t2) {
					make_bound_var(t1, t2);
					if (!safe(t1)) push_trail(BTK_BIND, t1);
				} else if (t1 != t2) {
					make_bound_var(t2, t1);
					if (!safe(t2)) push_trail(BTK_BIND, t2);
				}
				break;
		case 22: /* TAG_DAEMON, (*) */
				if (is_unbound_var(*t2)) {
					make_bound_var(t2, t1);
					if (!safe(t2)) push_trail(BTK_BIND, t2);
				} else {				  
					make_bound_var(t1, t2);
					make_runable(t1 + 1);
					if (!safe(t1)) push_trail(BTK_DBIND, t1);
				}
				break;
		case 23: /* (*), TAG_DAEMON */
				if (is_unbound_var(*t1)) {
					make_bound_var(t1, t2);
					if (!safe(t1)) push_trail(BTK_BIND, t1);
				} else {				  
					make_bound_var(t2, t1);
					make_runable(t2 + 1);
					if (!safe(t2)) push_trail(BTK_DBIND, t2);
				}
				break;
		case 24: /* TAG_DAEMON, TAG_DAEMON */
				make_bound_var(t2, t1);
				make_runable(t2 + 1);
				if (!safe(t2)) push_trail(BTK_DBIND, t2);
				break;
		default:
				return FALSE;
		}
		if (!top) return TRUE;
		t2 = stack[top--];
		t1 = stack[top--];
	}
}

/*---------------------------------------------------------- aux stuff ------*/

int *findbind(x)
int *x;
{
	deref(x);
	return x;
}

int *val_to_pc(val) 
int val;
{
	if (p_compiled(val)) return ptrpc(p_start_hdrcode(val));
	else return NULL;
}

detable_rule(t, pc, first)
int *t, *pc, first;
{
int val, *t1;
int *tmp1;
RULE_ptr r, prev_rule;
int old_solver_id, old_trtop, *old_heaptop;
double fp_val;

/*
	if (first) t = findbind(t);
	else t = (int *) findbind(lastcp[1]);
*/
	if (!first) t = (int *) lastcp[1];
	if (!is_func(t) && !is_con(t)) runtime_error("bad argument to detable/1");
	if ((val = mask(*t)) == IMPL) {
		t1 = findbind(t + 1);
		if (!is_func(t1) && !is_con(t1)) 
			runtime_error("bad argument to detable/1");
		val = mask(*t1);
	} else t1 = t;
	if (p_protected(val)) 
		runtime_error("detable failed: %s/%d is protected",
				string_of(val), arity_of(val));
	if (!p_dynamic(val))
		runtime_error("detable failed: %s/%d is not dynamic",
				string_of(val), arity_of(val));
	if (!p_compiled(val)) {
		if (first) return FALSE;
		goto CLEANUP_FAIL;
	}
	prev_rule = NULL;
	r = p_first_rule(val);
	if (first) {
		push_cp();
		lastcp[NEXTEP] = (int) (pc + 2);
		lastcp[1] = (int) t;
		stacktop = lastcp + 1;
	} else stamp++;
	old_solver_id = solver_id;
	old_heaptop = heaptop;
	old_trtop = trtop;
	while (r) {
		if (r->endcode == -1) goto MORE;
		// t2 = pterm_to_heap(r->t);
		// printf("%x %x\n", mask(*(t+1)), code[r->startcode+1]);

		if(mask(*(t + 1)) == code[r->startcode + 1]) {
			// printf("Retracting!\n");
			if (have_runable && !wake_runable()) goto UNDO;
			if (prev_rule) {
				prev_rule->next = r->next;
				if (!r->next) assign_p_last_rule(val, prev_rule); 
			} else {
				if (r->next) assign_p_first_rule(val, r->next);
				else {
					assign_p_first_rule(val, NULL);
					assign_p_last_rule(val, NULL);
					assign_p_compiled(val, FALSE);
#ifdef FREE_CODE_SPACE
					free_hdrcode(val);
#else
                    assign_p_start_hdrcode(val, 0);
                    assign_p_end_hdrcode(val, 0);
#endif
				}
			}
			free_rule_detable(r);
			return TRUE;
		} else {
UNDO:
			untrail_to(old_trtop);
			trtop = old_trtop;
			solver_id = old_solver_id;
			heaptop = old_heaptop;
		}
MORE:
		prev_rule = r;
		r = r->next;
	}
	CLEANUP_FAIL:
	stacktop = lastcp - CPFRAME_HEIGHT;
	lastcp = (int *) pmask(*(lastcp + PREVCP));
	safeheap = (int *) pmask(*(lastcp + OHEAPTOP));
	return FALSE;
}

retract_rule(t, pc, first)
int *t, *pc, first;
{
int val, *t1, *t2;
int *tmp1;
RULE_ptr r, prev_rule;
int old_solver_id, old_trtop, *old_heaptop;
int has_args, index_val;
double fp_val;

/*
	if (first) t = findbind(t);
	else t = (int *) findbind(lastcp[1]);
*/
	if (!first) t = (int *) lastcp[1];
	if (!is_func(t) && !is_con(t)) runtime_error("bad argument to retract/1");
	if ((val = mask(*t)) == IMPL) {
		t1 = findbind(t + 1);
		if (!is_func(t1) && !is_con(t1)) 
			runtime_error("bad argument to retract/1");
		val = mask(*t1);
	} else t1 = t;
	if (p_protected(val)) 
		runtime_error("retract failed: %s/%d is protected",
				string_of(val), arity_of(val));
	if (!p_dynamic(val))
		runtime_error("retract failed: %s/%d is not dynamic",
				string_of(val), arity_of(val));
	if (!p_compiled(val)) {
		if (first) return FALSE;
		goto CLEANUP_FAIL;
	}
	prev_rule = NULL;
	if (is_func(t1) && ((index_val = get_index_val(t1 + 1, &fp_val)) != 0)) {
		has_args = TRUE;
		r = quick_find(p_first_rule(val), index_val, fp_val, &prev_rule, TRUE);
	} else {
		has_args = FALSE;
		r = p_first_rule(val);
	}
	if (first) {
		push_cp();
		lastcp[NEXTEP] = (int) (pc + 2);
		lastcp[1] = (int) t;
		stacktop = lastcp + 1;
	} else stamp++;
	old_solver_id = solver_id;
	old_heaptop = heaptop;
	old_trtop = trtop;
	while (r) {
		if (r->endcode == -1) goto MORE;
		t2 = pterm_to_heap(r->t);
		if (unify(t, &t2)) {
			if (have_runable && !wake_runable()) goto UNDO;
			if (prev_rule) {
				prev_rule->next = r->next;
				if (!r->next) assign_p_last_rule(val, prev_rule); 
			} else {
				if (r->next) assign_p_first_rule(val, r->next);
				else {
					assign_p_first_rule(val, NULL);
					assign_p_last_rule(val, NULL);
					assign_p_compiled(val, FALSE);
#ifdef FREE_CODE_SPACE
					free_hdrcode(val);
#else
                    assign_p_start_hdrcode(val, 0);
                    assign_p_end_hdrcode(val, 0);
#endif
				}
			}
			free_rule(r);
			return TRUE;
		} else {
UNDO:
			untrail_to(old_trtop);
			trtop = old_trtop;
			solver_id = old_solver_id;
			heaptop = old_heaptop;
		}
MORE:
		prev_rule = r;
		if (has_args) 
			r = quick_find(r->next, index_val, fp_val, &prev_rule, TRUE);
		else r = r->next;
	}
	CLEANUP_FAIL:
	stacktop = lastcp - CPFRAME_HEIGHT;
	lastcp = (int *) pmask(*(lastcp + PREVCP));
	safeheap = (int *) pmask(*(lastcp + OHEAPTOP));
	return FALSE;
}

match_rule(head, body, pc, first)
int *head, *body, *pc, first;
{
int val, old_solver_id, old_trtop, *old_heaptop;
int *head_hterm, *body_hterm; 
PTERM *head_pterm, *body_pterm;
RULE_ptr r, old_r, dummy;
int current_id, has_args, index_val;
double fp_val;
int *t1;
/* */
	if (first) {
		head = findbind(head);
		body = findbind(body);
	} else {
		head = (int *) lastcp[1];
		body = (int *) lastcp[2];
	}
/* */
/** check?
	if (!first) {
		head = (int *) lastcp[1];
		body = (int *) lastcp[2];
	}
**/	
	if (!is_func(head) && !is_con(head)) 
		runtime_error("bad first argument to rule/2");
	if (is_param(body)) runtime_error("bad second argument to rule/2");
	
	val = mask(*head);
#ifndef ALLOW_ANY_RULE
	if (!p_dynamic(val))
		runtime_error("rule failed: %s/%d is not dynamic",
				string_of(val), arity_of(val));
#endif
	if (!p_compiled(val)) {
		if (first) return FALSE;
		goto CLEANUP_FAIL;
	}
	r = p_first_rule(val);
	if (first) {
		push_cp();
		lastcp[NEXTEP] = (int) (pc + 3);
		lastcp[1] = (int) head;
		lastcp[2] = (int) body;
		/*** set below  lastcp[3,4] ***/
		stacktop = lastcp + 4;
	} else {
		current_id = *(lastcp + 3);
		old_r = (RULE_ptr) *(lastcp + 4);
		stamp++;
		if (old_r->id != current_id)
				for (; r && r->id <= current_id; r = r->next);
		else r = old_r->next;
	}
	if (r && is_func(head) && 
				((index_val = get_index_val(head+1, &fp_val)) != 0)) {
		has_args = TRUE;
		r = quick_find(r, index_val, fp_val, &dummy, TRUE);
	} else has_args = FALSE;

	old_solver_id = solver_id;
	old_heaptop = heaptop;
	old_trtop = trtop;

	while (r) {
		if (r->endcode == -1) goto MORE;
		head_pterm = head_of_rule(r->wt);
		body_pterm = body_of_rule(r->wt);
		head_hterm = pterm_to_quoted_heap(head_pterm, FALSE);
		if (unify(head, &head_hterm)) {
			if (body_pterm) {
				body_hterm = pterm_to_quoted_heap(body_pterm, TRUE);
			} else body_hterm = &true_atom;
			if (!unify(body, &body_hterm)) goto UNDO;
			if (have_runable && !wake_runable()) goto UNDO;
			*(lastcp + 3) = r->id;
			*(lastcp + 4) = (int) r;
			return TRUE;
		} else {
UNDO:
			untrail_to(old_trtop);
			trtop = old_trtop;
			solver_id = old_solver_id;
			heaptop = old_heaptop;
		}
MORE:
		if (has_args) r = quick_find(r->next, index_val, fp_val, &dummy, TRUE);
		else r = r->next;
	}
	CLEANUP_FAIL:
	stacktop = lastcp - CPFRAME_HEIGHT;
	lastcp = (int *) pmask(*(lastcp + PREVCP));
	safeheap = (int *) pmask(*(lastcp + OHEAPTOP));
	return FALSE;
}

untrail_to(new_trtop)
int new_trtop;
{
int i, t;
	for (i = trtop - 1; i >= new_trtop; i--) {
		t = (int) trail[i];
		// Vijay - for some reason when tag is BTK_BIND crash occurs if
		// the 4 bits are restored from tagtrail. Have to make sure the reason.
		if (tag(t) == BTK_BIND) make_unbound_var((int *) (pmask(t)));// | ((unsigned)tagtrail[i] << 28)));
		else solver_backtrack(i, t);
	}
}

push_cp()
{
int *tmp;
	if (stacktop < maxlstack && trtop < maxtrail) {
		tmp = stacktop;
		*(++tmp) = slack_id;
		*(++tmp) = solver_id;
		*(++tmp) = 0;
		*(++tmp) = (int) curar;
		*(++tmp) = (int) retreg;
		*(++tmp) = trtop;
		*(++tmp) = (int) heaptop;
		*(++tmp) = (int) lastcp;
		*(++tmp) = (int) FAIL_ADDR;
		stacktop = lastcp = tmp;
		safeheap = heaptop;
		stamp++;
	} else if (stacktop >= maxlstack) fatal("stack overflow");
	else fatal("trail overflow");
}


int *run_dynamic(pc, first, can_index)
int *pc, first, can_index;
{
RULE_ptr r, dummy;
int id, n, i;
int index_val;
PTERM *first_arg;
double fp_val;

	if (first) { /*** pseudo-indexing ***/
		r = p_first_rule(pc[2]);
		/*** commented by Vijay for running dynamic predicates that
			 were tabled and not asserted. if any problem arises, pls
			 inform me ***/
		//if (can_index && 
		//			((index_val = get_index_val(&regs[1], &fp_val)) != 0))
		//		r = quick_find(r, index_val, fp_val, &dummy, FALSE);
		if (!r) return NULL;
		push_cp();
		lastcp[NEXTEP] = (int) pc;
		lastcp[NUMPARS] = n = *(pc + 1);
		for (i = 1; i <= n; i++) lastcp[i] = regs[i];
		lastcp[n + 1] = r->id;
		lastcp[n + 2] = (int) r;
		stacktop = lastcp + n + 2;
		pc = (int *) (code + r->startcode);
		return pc;
	} else {
		id = lastcp[lastcp[NUMPARS] + 1];
		r = (RULE_ptr) lastcp[lastcp[NUMPARS] + 2];
		if (r->id == id) {
				r = r->next;
		} else {
			for (r = p_first_rule(*(pc + 2)); r && r->id <= id; r = r->next);
		}
		/*** commented by Vijay for running dynamic predicates that
			 were tabled and not asserted. if any problem arises, pls
			 inform me ***/
		//if (r && can_index && 
		//			((index_val = get_index_val(&regs[1], &fp_val)) != 0))
		//		r = quick_find(r, index_val, fp_val, &dummy, FALSE);
		if (!r) goto CLEANUP_FAIL;
		lastcp[lastcp[NUMPARS] + 1] = r->id;
		lastcp[lastcp[NUMPARS] + 2] = (int) r;
		stamp++;
		pc = (int *) (code + r->startcode);
		return pc;
	}
	CLEANUP_FAIL:
	stacktop = lastcp - CPFRAME_HEIGHT;
	lastcp = (int *) pmask(*(lastcp + PREVCP));
	safeheap = (int *) pmask(*(lastcp + OHEAPTOP));
	return NULL;
}

RULE_ptr quick_find(r, val, fp_val, prev_rule, quoted)
RULE_ptr r, *prev_rule;
int val;
double fp_val;
int quoted;
{
PTERM *first_arg;
RULE_ptr prev;
PTERM *temp;
int val1;
	prev = *prev_rule;
	if (val > 0) {
		for (; r; r = r->next) {
			temp = head_of_rule(r->t);
			first_arg = head_of_rule(r->t)->first;
			if(first_arg) {
			val1 = (quoted && is_arith_term(first_arg) ?
				get_quoted_func(first_arg->val) : first_arg->val);
			if ((is_p_functor(first_arg) && val1 == val) || 
				 is_p_var(first_arg)) {
					*prev_rule = prev;
					return r;
			}
			prev = r;
			}
		}
	} else if (val < 0) {
		for (r = r; r; r = r->next) {
			first_arg = head_of_rule(r->t)->first;
			if(first_arg) {
			if ((is_p_real(first_arg) && is_equal(first_arg->rval, fp_val)) ||
				is_p_var(first_arg)) {
					*prev_rule = prev;
					return r;
			}
			prev = r;
			}
		}
	}
	return r;
}

get_index_val(t, c)
int *t;
double *c;
{
int tg;
	t = findbind(t);
	tg = tag(*t);
	if (tg == TAG_CONS) return DOT;
	else if (tg == TAG_CON || tg == TAG_STR) {
		return mask(*t);
	} else if (tg == TAG_PAR && is_ground(mask(*t), c)) return -1;
	else return 0;
}

make_a_con(t, val)
int *t, val;
{
	t = findbind(t);
	if (is_unbound_var(*t)) {
		*t = addtag(TAG_CON, val);
		push_check_trail(BTK_BIND, t);
		return TRUE;
	} else if (is_daemon(t)) {
		*t = addtag(TAG_CON, val);
		make_runable(t + 1);
		push_check_trail(BTK_DBIND, t);
		if (have_runable && !wake_runable()) return FALSE;
		else return TRUE;
	} else if (is_con(t))
		return mask(*t) == val;
	else return FALSE;
}

make_a_nil(t)
int *t;
{
	t = findbind(t);
	if (is_unbound_var(*t)) {
		*t = addtag(TAG_NIL, EMPTYLIST);
		push_check_trail(BTK_BIND, t);
		return TRUE;
	} else if (is_daemon(t)) {
		*t = addtag(TAG_NIL, EMPTYLIST);
		make_runable(t + 1);
		push_check_trail(BTK_DBIND, t);
		if (have_runable && !wake_runable()) return FALSE;
		else return TRUE;
	} else if (is_nil(t)) return TRUE;
	else return FALSE;
}

make_a_num(t, val)
int *t;
double val;
{
double c;
	t = findbind(t);
	if (is_unbound_var(*t)) {
		makenum(++solver_id, val);
		*t = addtag(TAG_PAR, solver_id);
		push_check_trail(BTK_BIND, t);
		return TRUE;
	} else if (is_daemon(t)) {
		makenum(++solver_id, val);
		*t = addtag(TAG_PAR, solver_id);
		make_runable(t + 1);
		push_check_trail(BTK_DBIND, t);
		if (have_runable && !wake_runable()) return FALSE;
		else return TRUE;
	} else if (is_param(t)) {
		if (is_ground(mask(*t), &c)) {
			if (is_equal(c, val)) return TRUE;
			else return FALSE;
		} else if (solve_eqn_1(mask(*t), val)) return TRUE;
		else return FALSE;
	} else return FALSE;
}

make_a_new_fun(t, val, arity)
int *t, val, arity;
{
int *h, i, eflag=FALSE;
	t = findbind(t);
	if (is_func(t)) return (val == mask(*t));
	if (is_daemon(t)) eflag = TRUE;
	else if (!is_unbound_var(*t)) return FALSE;
	h = heaptop;
	heaptop += arity + 1;
	CheckHeap();
	make_bound_var(t, (int) h);
	make_bound_var(h, addtag(TAG_STR, val));
	for (i=0; i < arity; i++)
		make_unbound_var(&h[i+1]);
	if (eflag) {
		make_runable(t + 1);
		push_check_trail(BTK_DBIND, t);
	} else push_check_trail(BTK_BIND, t);
	return TRUE;
}

make_a_new_list(t)
int *t;
{
int *h, eflag=FALSE;
	t = findbind(t);
	if (is_daemon(t)) eflag = TRUE;
	else if (!is_unbound_var(*t)) return FALSE;
	h = heaptop;
	heaptop += 2;
	make_bound_var(t, addtag(TAG_CONS, h));	
	make_unbound_var(h);
	make_unbound_var(h+1);
	if (eflag) {
		make_runable(t + 1);
		push_check_trail(BTK_DBIND, t);
	} else push_check_trail(BTK_BIND, t);
	return TRUE;
}

push_destructive_trail(t, val) 
int *t, val;
{
    if (t < safeheap || (t > lstack && t < lastcp)) { 
		store_trail_bits0(trtop);
		trail[trtop++] = (int *) val;
		store_trail_bits(trtop, t);
        trail[trtop++] = (int *) addtag(BTK_TEST2, (int *) t); 
	}
}

	
