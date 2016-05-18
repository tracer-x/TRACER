/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: solver.c                                             *
 ***************************************************************/

#include "standard.h"
#include "config.h"
#include "emul.h"
#include "solver.h"
#include "opcodes.h"

#define MIN_SOLVER_SZ 256

#define check_solver_id(i) { \
	if (i >= slack_id) fatal("too many solver variables"); \
}

static EQN_ptr eqn_scratch;
static int new_solver_var;
static double new_solver_coef;

/*-------------------------------------------------- solver globals ---------*/

TAB_HDR_NODE_ptr *tableau;
int SOLVER_SZ = DEF_SOLVER_SZ;
int malloc_size = 0;

SOLVER_NODE_ptr sms;
int sms_blocks;
int solver_id, slack_id;
int nlin_count;
int s_count[MAX_SOLVER_COUNTER];
int 
	malloc_eqn_count, malloc_eqn_par_count, 
	malloc_entry_count, malloc_occ_count, malloc_nl_eqn_count, 
	malloc_nl_occ_count, malloc_nl_par1_count, malloc_nl_par2_count, 
	malloc_hdr_count, malloc_koh_count, malloc_list_count, free_eqn_count,
	free_eqn_par_count, free_entry_count, free_occ_count, free_nl_eqn_count, 
	free_nl_occ_count, free_nl_par1_count, free_nl_par2_count, 
	free_hdr_count, free_koh_count, free_list_count;

extern NL_EQN_ptr nl_eqn_top;
extern FILE *outfile, *error_stream;
extern int savep, stamp;

/*----------------------------------------------- entry points --------------*/

init_eqn()
{
	malloc_EQN(eqn_scratch);
	eqn_scratch->next = NULL;
	eqn_scratch->time_stamp = stamp;
	eqn_scratch->id = 0;
	eqn_scratch->constant = 0.0;
	eqn_scratch->params = NULL;
	new_solver_var = 0;
	new_solver_coef = 0.0;
}

makenum(v, c) /*** v = c, v is brand new ***/
int v;
double c;
{
	check_solver_id(v);
	if (!solve_eqn_1(v, c)) fatal("19753");
	return TRUE;
}

s_econ(c) /*** eqn_scratch = c ***/
double c;
{
register ENTRY_ptr entry;
TAB_HDR_NODE_ptr hdr;
double factor;
int v, flag;
	eqn_scratch->constant += c;
	if (is_zero(new_solver_coef)) {
		if (entry = eqn_scratch->next) {
			flag = solve_parametric_eqn(eqn_scratch, TRUE);
			return flag;
		}
		flag = is_zero(eqn_scratch->constant);
		free_EQN(eqn_scratch);
		return flag;
	} 
	stats_count(4);
	v = eqn_scratch->id = new_solver_var;
	malloc_HDR(hdr);
	tableau[v] = hdr;
	backup_null_eqn(v);
	entry = eqn_scratch->next;
	hdr->eqn = eqn_scratch;
	factor = -1.0 / new_solver_coef;
	eqn_scratch->constant *= factor;
	while (entry) {
		entry->coef *= factor;
		insert_occ(EQ, v, entry->id);
		entry = entry->next;
	}
	if (eqn_scratch->next) return TRUE;
	if (!wakeup(v, eqn_scratch->constant)) {
		free_EQN(eqn_scratch);
		free_HDR(hdr);
		tableau[v] = NULL;
		return FALSE;
	}
	return TRUE;
}				

s_evar(c, v) /*** eqn_scratch + c*v ***/
double c;
int v;
{
	check_solver_id(v);
	if (is_zero(new_solver_coef)) {
		if (!tableau[v]) {
			new_solver_var = v;
			new_solver_coef = c;
		} else add_entry(EQ, eqn_scratch, v, c);
	} else {
		if (v != new_solver_var) add_entry(EQ, eqn_scratch, v, c);
		else new_solver_coef += c;
	}
	return TRUE;
}

s_ge0(c)
double c;
{
	return greater0(FALSE, c);
}

s_gt0(c)
double c;
{
	return greater0(TRUE, c);
}

greater0(strict, c)
int strict;
double c;
{
double c2;
EQN_PARAMS_ptr params;
int flag;
	malloc_EQN_PARAMS(params);
	stats_count(125);
	eqn_scratch->params = params;
	params->basic = 0;
	params->epsilon = (strict ? -1.0 : 0.0);
	if (!is_zero(new_solver_coef)) 
		add_entry(INEQ, eqn_scratch, new_solver_var, new_solver_coef); 
	if (!eqn_scratch->next) {
		stats_count(135);
		free_eqn_nodes(eqn_scratch);
		c2 = eqn_scratch->constant;
		if (strict) return (c2 > c + EPS);
		else return (c2 + EPS >= c);
	} else {
		eqn_scratch->constant -= c;
		if (solve_inequality(strict, eqn_scratch))
			return check_implicits();
		else return FALSE;
	}
}

s_mult(c, v0, v1, v2) /*** v0 = c * v1 * v2 ***/
double c;
int v0, v1, v2;
{
int foo;
double c1, c2;
	check_solver_id(v0);
	check_solver_id(v1);
	check_solver_id(v2);
/* TEST */
/*
/*
if (!is_ground(v1, &c1) && !is_ground(v2, &c2)) {
fatal("funny MULT");
}
*/
	if (is_ground(v1, &c1)) {
		if (is_ground(v2, &c2)) return solve_eqn_1(v0, c * c1 * c2); 
		else return solve_eqn_2(v0, v2, c * c1);
	}
	if (is_ground(v2, &c2)) return solve_eqn_2(v0, v1, c * c2);
	else return solve_mult(v0, v1, v2, c);
}

s_max(v0, v1, v2)
int v0, v1, v2;
{
double c1, c2;
	check_solver_id(v0);
	check_solver_id(v1);
	check_solver_id(v2);
	if (is_ground(v1, &c1)) {
		if (is_ground(v2, &c2)) return solve_eqn_1(v0, (c1 > c2 ? c1 : c2));
		return solve_minmax(SOLVER_MAX1, v0, v1, v2, c1);
	}
	if (is_ground(v2, &c2)) return solve_minmax(SOLVER_MAX2, v0, v1, v2, c2);
	return solve_minmax(SOLVER_MAX, v0, v1, v2, 0.0);
}
 
s_min(v0, v1, v2)
int v0, v1, v2;
{
double c1, c2;
	check_solver_id(v0);
	check_solver_id(v1);
	check_solver_id(v2);
	if (is_ground(v1, &c1)) {
		if (is_ground(v2, &c2)) return solve_eqn_1(v0, (c1 < c2 ? c1 : c2));
		return solve_minmax(SOLVER_MIN1, v0, v1, v2, c1);
	}
	if (is_ground(v2, &c2)) return solve_minmax(SOLVER_MIN2, v0, v1, v2, c2);
	return solve_minmax(SOLVER_MIN, v0, v1, v2, 0.0);
}

s_pow(v0, v1, v2) /*** v0 = pow(v1, v2) ***/
int v0, v1, v2;
{
double c0, c1, c2;
	check_solver_id(v0); 
	check_solver_id(v1); 
	check_solver_id(v2);
	if (is_ground(v0, &c0)) {
/*
		if (is_ground(v2, &c2)) { WRONG
			if (is_zero(c2)) return solve_eqn_1(v0, 1.0);
			if (is_equal(c2, 1.0)) return solve_eqn_1(v1, c0);
			return solve_eqn_1(v1, pow(c0, 1.0 / c2));
		}
*/
		if (is_ground(v1, &c1)) return solve_eqn_1(v2, log(c0) / log(c1));
		if (is_ground(v2, &c2)) {
			if (is_equal(c2, 1.0)) return solve_eqn_1(v1, c0);
			else if (is_equal(c2, 0.0)) return solve_eqn_1(v1, 1.0);
			return solve_power(SOLVER_POW02, v0, v1, v2, c0);
		}
		return solve_power(SOLVER_POW0, v0, v1, v2, c0);
	}
	if (is_ground(v1, &c1)) {
		if (is_ground(v2, &c2)) return solve_eqn_1(v0, pow(c1, c2));
	/*	if (is_zero(c1)) return solve_eqn_1(v0, 0.0);WRONG */
		if (is_equal(c1, 1.0)) return solve_eqn_1(v0, 1.0);
		return solve_power(SOLVER_POW1, v0, v1, v2, c1);
	}
	if (is_ground(v2, &c2)) {
		if (is_zero(c2)) return solve_eqn_1(v0, 1.0);
		if (is_equal(c2, 1.0)) return solve_eqn_2(v0, v1, 1.0);
		return solve_power(SOLVER_POW2, v0, v1, v2, c2);
	}
	return solve_power(SOLVER_POW, v0, v1, v2, 0.0);
}

s_abs(v0, v1)
int v0, v1;
{
double c;
	/*** printf(">>> X%d = abs(X%d)\n", v0, v1); ***/
	check_solver_id(v0);
	check_solver_id(v1);
	if (is_ground(v1, &c)) return solve_eqn_1(v0, fabs(c));
	if (is_ground(v0, &c)) {
		if (is_zero(c)) return solve_eqn_1(v1, 0.0);
		else return solve_absolute(SOLVER_ABS0, v0, v1);
	}
	return solve_absolute(SOLVER_ABS, v0, v1);
}

s_sin(v0, v1)
int v0, v1;
{
double c;
	check_solver_id(v0);
	check_solver_id(v1);
	if (is_ground(v1, &c)) {
		if (c != 0.0) return solve_eqn_1(v0, sin(c));
		else return solve_eqn_1(v0, 0.0);
	}
	if (is_ground(v0, &c)) {
		if (c < -1.0 || c > 1.0) return FALSE;
		return solve_sin(SOLVER_SIN0, v0, v1);
	} else return solve_sin(SOLVER_SIN, v0, v1);
}

s_cos(v0, v1)
int v0, v1;
{
double c;
	check_solver_id(v0);
	check_solver_id(v1);
	if (is_ground(v1, &c)) {
		if (c != 0.0) return solve_eqn_1(v0, cos(c));
		else return solve_eqn_1(v0, 1.0);
	}
	if (is_ground(v0, &c)) {
		if (c < -1.0 || c > 1.0) return FALSE;
		return solve_cos(SOLVER_COS0, v0, v1);
	} else return solve_cos(SOLVER_COS, v0, v1);
}

s_arcsin(v0, v1)
int v0, v1;
{
double c;
	check_solver_id(v0);
	check_solver_id(v1);
	if (is_ground(v1, &c)) {
		if (c >= -1 && c <= 1) {
			if (c != 0.0) return solve_eqn_1(v0, asin(c));
			else return solve_eqn_1(v0, 0.0);
		} else if (c >= 1 && c <= 1+EPS) return solve_eqn_1(v0, PI_2_VAL);
		else if (c <= -1 && c >= -1-EPS) return solve_eqn_1(v0, -PI_2_VAL);
		else {
			warn_err("Out of range value outside [-1,1] to arcsin");
			return FALSE;
		}
	}
	if (is_ground(v0, &c)) {
		if (c >= -PI_2_VAL && c <= PI_2_VAL) {
			if (c != 0.0) return solve_eqn_1(v1, sin(c));
			else return solve_eqn_1(v1, 0.0);
		} else if (c > 0 && c <= PI_2_VAL+EPS) return solve_eqn_1(v1, 1.0);
		else if (c < 0 && c >= -PI_2_VAL-EPS) return solve_eqn_1(v1, -1.0);
		else {
			warn_err("Out of range value outside [-pi/2, pi/2] to arcsin");
			return FALSE;
		}
	}
	return solve_arcsin(v0, v1);
}

s_arccos(v0, v1)
int v0, v1;
{
double c;
	check_solver_id(v0);
	check_solver_id(v1);
	if (is_ground(v1, &c)) {
		if (c >= -1 && c <= 1) {
			if (c != 1.0) return solve_eqn_1(v0, acos(c));
			else return solve_eqn_1(v0, 0.0);
		} else if (c >= 1 && c <= 1+EPS) return solve_eqn_1(v0, 0.0);
		else if (c <= -1 && c >= -1-EPS) return solve_eqn_1(v0, PI_VAL);
		else {
			warn_err("Out of range value outside [-1, 1] to arccos");
			return FALSE;
		}
	}
	if (is_ground(v0, &c)) {
		if (c >= 0 && c <= PI_VAL) {
			if (c != 0.0) return solve_eqn_1(v1, cos(c));
			else return solve_eqn_1(v1, 1.0);
		} else if (c > 0 && c <= PI_VAL+EPS) return solve_eqn_1(v1, -1.0);
		else if (c < 0 && c >= -EPS) return solve_eqn_1(v1, 1.0);
		else {
			warn_err("Out of range value outside [0, pi] to arccos");
			return FALSE;
		}
	}
	return solve_arccos(v0, v1);
}

/*---------------------------------------------------------------------------*/

solve_eqn_1(v, c) /*** v = c ***/
int v; 
double c;
{
TAB_HDR_NODE_ptr hdr;
EQN_ptr eqn;
int flag;
	check_solver_id(v);
	malloc_EQN(eqn);
	eqn->next = NULL;
	eqn->id = 0;
	eqn->time_stamp = stamp;
	eqn->params = NULL;
	eqn->constant = c;
	if (!(hdr = tableau[v])) {
		stats_count(4);
		malloc_HDR(hdr);
		tableau[eqn->id = v] = hdr;
		backup_null_eqn(v);
		hdr->eqn = eqn;
		if (!wakeup(v, c)) {
			free_EQN(eqn);
			free_HDR(hdr);
			tableau[v] = NULL;
			return FALSE;
		}
		return TRUE;
	}
	eqn->id = 0;
	add_entry(EQ, eqn, v, -1.0);
	if (eqn->next) return solve_parametric_eqn(eqn, TRUE);
	flag = is_zero(eqn->constant);
	free_EQN(eqn);
	return flag;
}

solve_eqn_2(v0, v1, c) /*** v0 = c * v1 ***/
int v0, v1; 
double c;
{
TAB_HDR_NODE_ptr hdr;
EQN_ptr eqn;
double c2;
int flag;
	if (is_zero(c)) return solve_eqn_1(v0, 0.0);
	if (v0 == v1) 
		return (is_equal(c, 1.0) ? TRUE : solve_eqn_1(v0, 0.0)); 
	check_solver_id(v0);
	check_solver_id(v1);
	malloc_EQN(eqn);
	eqn->next = NULL;
	eqn->id = 0;
	eqn->time_stamp = stamp;
	eqn->params = NULL;
	eqn->constant = 0.0;
	if (!(hdr = tableau[v0])) {
		stats_count(4);
		malloc_HDR(hdr);
		tableau[eqn->id = v0] = hdr;
		backup_null_eqn(v0);
		hdr->eqn = eqn;
		add_entry(EQ, eqn, v1, c);
		if (eqn->next) return TRUE;
		if (!wakeup(v0, eqn->constant)) {
			free_EQN(eqn);
			free_HDR(hdr);
			tableau[v0] = NULL;
			return FALSE;
		}
		return TRUE;
	}
	if (!(hdr = tableau[v1])) { /*** v1 = (1/c) * v0 ***/
		stats_count(4);
		malloc_HDR(hdr);
		tableau[eqn->id = v1] = hdr;
		backup_null_eqn(v1);
		hdr->eqn = eqn;
		add_entry(EQ, eqn, v0, 1.0 / c);
		if (eqn->next) return TRUE;
		if (!wakeup(v1, eqn->constant)) {
			free_EQN(eqn);
			free_HDR(hdr);
			tableau[v1] = NULL;
			return FALSE;
		}
		return TRUE;
	}
	add_entry(EQ, eqn, v0, -1.0); /*** 0 = -v0 + c * v1 ***/
	add_entry(EQ, eqn, v1, c);
	if (eqn->next) return solve_parametric_eqn(eqn, TRUE);
	flag = is_zero(eqn->constant);
	free_EQN(eqn);
	return flag;
}

/*----------------------------------------------- aux stuff -----------------*/

check_solver_sizes()
{
int i;
	i = sizeof(SOLVER_NODE);
	if (i != sizeof(ENTRY)) fatal("ENTRY node not aligned (see solver.h)");
	if (i != sizeof(OCC)) fatal("OCC node not aligned (see solver.h)");
	if (i != sizeof(EQN)) fatal("EQN node not aligned (see solver.h)");
	if (i != sizeof(EQN_PARAMS)) 
		fatal("EQN_PARAMS node not aligned (see solver.h)");
	if (i != sizeof(NL_PARAMS1)) 
		fatal("NL_PARAMS1 node not aligned (see solver.h)");
	if (i != sizeof(NL_PARAMS2)) 
		fatal("NL_PARAMS2 node not aligned (see solver.h)");
	if (i != sizeof(NL_OCC)) 
		fatal("NL_OCC node not aligned (see solver.h)");
	if (i != sizeof(TAB_HDR_NODE)) 
		fatal("TAB_HDR_NODE node not aligned (see solver.h)");
	if (i != sizeof(KOHLER_NODE)) 
		fatal("KOHLER_NODE node not aligned (see solver.h)");
}

init_solver() 
{
int i;
SOLVER_NODE_ptr tmp1, tmp2;
	if (SOLVER_SZ < MIN_SOLVER_SZ) 
		fatal("solver size (DEF_SOLVER_SZ) too small");
#ifdef NO_SMALLOC
    tableau = (TAB_HDR_NODE_ptr *) alloc_mem(SOLVER_SZ);
    memset((void *) tableau, 0, SOLVER_SZ * sizeof(int));
#else
    tableau = (TAB_HDR_NODE_ptr *) calloc(1, SOLVER_SZ * sizeof(int));
#endif

	if (!tableau) fatal("not enough memory to initialize clpr (calloc)");
#ifdef  INIT_DEBUG
	if (((unsigned) tableau + (unsigned) SOLVER_SZ * sizeof(int)) & 0xF0000000)
	  printf("solver address range beyond 2^28 (tableau) \n");
#endif

	solver_id = 0;
	slack_id = SOLVER_SZ;
	nlin_count = 0;
	sms_blocks = 1;
	malloc_size = 0x10000000 - ((unsigned) tableau + SOLVER_SZ) - 0x500000; // 2^28 - tableau's memory - 5 MB buffer
#ifdef NO_SMALLOC
	sms = (SOLVER_NODE_ptr) alloc_mem(SOLVER_MALLOC_NODES*sizeof(SOLVER_NODE)/sizeof(int));
	// sms = (SOLVER_NODE_ptr) alloc_mem(malloc_size/sizeof(int));
#else
	sms = (SOLVER_NODE_ptr) malloc(SOLVER_MALLOC_NODES*sizeof(SOLVER_NODE));
	// sms = (SOLVER_NODE_ptr) malloc(malloc_size);
#endif

	if (!sms) fatal("Not enough memory to initialize solver");
#ifdef  INIT_DEBUG
	if (((unsigned)sms + (unsigned)SOLVER_MALLOC_NODES * sizeof(SOLVER_NODE)) & 0xF0000000)
	// if (((unsigned)sms + malloc_size) & 0xF0000000)
	  printf("solver address range beyond 2^28\n");

	printf("Solver start: %p end: %p\n", (unsigned)sms, (unsigned)sms + SOLVER_MALLOC_NODES*sizeof(SOLVER_NODE));
#endif

	tmp1 = sms;
	tmp2 = &tmp1[SOLVER_MALLOC_NODES - 1];
	do {
		tmp1->next = tmp1 + 1;
	} while (++tmp1 < tmp2);
	tmp1->next = NULL;

        malloc_eqn_count = malloc_eqn_par_count = malloc_entry_count = 0;
        malloc_occ_count = malloc_nl_eqn_count = malloc_nl_occ_count = 0;
        malloc_nl_par1_count = malloc_nl_par2_count = malloc_hdr_count = 0;
        malloc_koh_count = free_eqn_count = free_eqn_par_count = 0;
        free_entry_count = free_occ_count = free_nl_eqn_count = 0;
        free_nl_occ_count = free_nl_par1_count = free_nl_par2_count = 0;
        free_hdr_count = free_koh_count = 0;
}

init_solver_goal()
{
int i;
	nl_eqn_top = NULL;
	if (savep > 1) return;
/***
	for (i = 0; i < MAX_SOLVER_COUNTER; i++) s_count[i] = 0;
***/
	/**
	malloc_eqn_count = malloc_eqn_par_count = malloc_entry_count = 0;
	malloc_occ_count = malloc_nl_eqn_count = malloc_nl_occ_count = 0;
	malloc_nl_par1_count = malloc_nl_par2_count = malloc_hdr_count = 0;
	malloc_koh_count = free_eqn_count = free_eqn_par_count = 0;
	free_entry_count = free_occ_count = free_nl_eqn_count = 0;
	free_nl_occ_count = free_nl_par1_count = free_nl_par2_count = 0;
	free_hdr_count = free_koh_count = 0;
	**/
}

SOLVER_NODE_ptr make_new_solver_malloc_space()
{
SOLVER_NODE_ptr tmp0, tmp1, tmp2;

#ifdef DEBUG_SMALLOC
	if (sms_blocks % 4 == 0) fprintf(error_stream, "Making more solver malloc space ... sms=%d (%d) total = %d\n",
		sms_blocks, SOLVER_MALLOC_NODES*sizeof(SOLVER_NODE), sms_blocks*SOLVER_MALLOC_NODES*sizeof(SOLVER_NODE));
	fflush(stdout);
#endif
	sms_blocks++;
#ifdef NO_SMALLOC
	tmp0 = (SOLVER_NODE_ptr) alloc_mem(SOLVER_MALLOC_NODES*sizeof(SOLVER_NODE)/sizeof(int));
#else
	tmp0 = (SOLVER_NODE_ptr) malloc(SOLVER_MALLOC_NODES*sizeof(SOLVER_NODE));
#endif
	if (!tmp0) fatal("Not enough memory (solver)");
	if (((unsigned)tmp0 + (unsigned)SOLVER_MALLOC_NODES * sizeof(SOLVER_NODE)) & 0xF0000000)
	 // printf("*** allocating solver memory beyond 2^28 by pid: %d ***\n",getpid());

	tmp1 = tmp0;
	tmp2 = &tmp1[SOLVER_MALLOC_NODES - 1];
	do {
		tmp1->next = tmp1 + 1;
	} while (++tmp1 < tmp2);
	tmp1->next = NULL;
/***
	fprintf(error_stream, "done\n");
***/
	return tmp0; 
}

check_solver_malloc_space()
{
int i;
	if (i = (malloc_eqn_count - free_eqn_count)) 
		malloc_warning(i, "EQN");
	if (i = (malloc_eqn_par_count - free_eqn_par_count)) 
		malloc_warning(i, "EQN_PARAMS");
	if (i = (malloc_entry_count - free_entry_count)) 
		malloc_warning(i, "ENTRY");
	if (i = (malloc_occ_count - free_occ_count)) 
		malloc_warning(i, "OCC");
	if (i = (malloc_nl_eqn_count - free_nl_eqn_count)) 
		malloc_warning(i, "NL_EQN");
	if (i = (malloc_nl_par1_count - free_nl_par1_count)) 
		malloc_warning(i, "NL_PARAMS1");
	if (i = (malloc_nl_par2_count - free_nl_par2_count)) 
		malloc_warning(i, "NL_PARAMS2");
	if (i = (malloc_hdr_count - free_hdr_count)) 
		malloc_warning(i, "HDR");
	if (i = (malloc_koh_count - free_koh_count)) 
		malloc_warning(i, "DUMP");
}

count_solver_malloc_space()
{
int count;
SOLVER_NODE_ptr sn;
	count = 0;
	sn = sms;
	while (sn) {
		count++;
		sn = sn->next;
	}
	return count;
}

malloc_warning(n, s)
int n;
char *s;
{
	printf("*** Warning: %d %s nodes lost\n", n, s);
}

/*---------------------------------------------------------------------------*/

is_ground(v, c_ptr)
int v;
double *c_ptr;
{
EQN_ptr eqn;
	if (!tableau[v] || !(eqn = tableau[v]->eqn) || eqn->next) return FALSE;
	if (c_ptr) *c_ptr = eqn->constant;
	return TRUE;
}

free_eqn_nodes(eqn)
EQN_ptr eqn;
{
register ENTRY_ptr entry;
ENTRY_ptr entry99;
int count;
	if (!eqn) return 0;
	count = 0;
	if (eqn->params) {
		free_EQN_PARAMS(eqn->params);
		count++;
	}
	entry = eqn->next;
	free_EQN(eqn);
	count++;
	while (entry) {
		count++;
		entry99 = entry->next;
		free_ENTRY(entry);
		entry = entry99;
	}
	return count;
}

void free_nlin_nodes(nl_eqn)
NL_EQN_ptr nl_eqn;
{
	if (!nl_eqn) return;
	if (nl_eqn->params1) free_NL_PARAMS1(nl_eqn->params1);
	if (nl_eqn->params2) free_NL_PARAMS2(nl_eqn->params2);
	free_NL_EQN(nl_eqn);
}

free_occ_nodes(occ)
OCC_ptr occ;
{
OCC_ptr occ99;
int count;
	count = 0;
	while (occ) {
		count++;
		occ99 = occ->next;
		free_OCC(occ);
		occ = occ99;
	}
	return count;
}

free_nl_occ_nodes(occ)
NL_OCC_ptr occ;
{
NL_OCC_ptr occ99;
int count;
	count = 0;
	while (occ) {
		count++;
		occ99 = occ->next;
		free_NL_OCC(occ);
		occ = occ99;
	}
	return count;
}

equal_param(v1, v2)
int v1, v2;
{
	return (deref_param(v1) == deref_param(v2));
}

deref_param(v)
int v;
{
TAB_HDR_NODE_ptr hdr;
EQN_ptr eqn;
	if (!(hdr = tableau[v])) return v;
	if (!(eqn = hdr->eqn)) return v;
	if (is_zero(eqn->constant)) {
		if (!eqn->next) return v;
		if (!eqn->next->next && is_equal(eqn->next->coef, 1.0))
			return eqn->next->id;
	} 
	return v;
}

