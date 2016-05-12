/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: dump.c                                               *
 ***************************************************************/

#include <ctype.h>

#include "standard.h"
#include "config.h"
#include "parse.h"
#include "lib.h"
#include "compile.h"
#include "emul.h"
#include "solver.h"
#include "symbols.h"

#define MAX_FOURIER_VARS (9999)
#define MAX_NLIN_VARS (9999)

#define KOHLER_BITS_PER_NODE (160) /*** cf solver.h ***/
#define	KOHLER_WORDS_PER_NODE (5)

#define MAX_FLATTEN_VAR	(200)

#define print_first_newline() { \
	if (!something_printed) { \
		fprintf(dumpF, "\n"); \
		something_printed = TRUE; \
	} \
}
#define newline() { \
	fprintf(dumpF, "\n"); \
}

#define sign(eqn) \
	(!is_zero(eqn->constant) ? (eqn->constant < -EPS ? -1 : 1) : \
		(eqn->params->epsilon < -EPS ? -1 : 1)) 
		
#define is_less(eqn1, eqn2) \
	(eqn1->constant < eqn2->constant || \
		(is_equal(eqn1->constant, eqn2->constant) && \
			eqn1->params->epsilon < eqn2->params->epsilon))

#define is_lesseq(eqn1, eqn2) \
	(eqn1->constant < eqn2->constant || \
		(is_equal(eqn1->constant, eqn2->constant) && \
			eqn1->params->epsilon <= eqn2->params->epsilon))

static int is_dump_output;
static int dump_mode;

static struct {
	int index;
	int *heap;
	char *str;
} equiv_funct_vars[MAX_DUMP_VAR];

static struct {
	int id; 
	int *heap;
	char *str;
} equiv_pivot_vars[MAX_DUMP_VAR];

static struct {
	int *rep; 
	int *bind;
	int *heap;
	char *str;
	int mark;
	int cyclic;
	NL_EQN_ptr nlin_subs;
} funct_vars[MAX_DUMP_VAR];

static struct {
	int *rep;
	int *var, *new_var;
} flatten_vars[MAX_FLATTEN_VAR];


/***
	lin_subs(X): X = exp, X non-orig;
	nlin_subs(X): X = nlin exp, X = non-orig, X non lin subs, X non-cyclic;
	cyclic(X): X is nlin_subs, and bound to X in nlins;
	arith_looking(X): X appears in arith format, or is a lin/nlin arith subs;
	non_arith_subs(X): USED subs (X = Y if lin, X = eval(Y) if nlin);
***/

static struct {
	int id;
	int *heap;
	char *str;
	char lin_output;
	int mark;
	int printed;
	int arith_looking; 
	EQN_ptr lin_subs; 
	NL_EQN_ptr nlin_subs;
	int cyclic;
	int non_arith_subs;
	int real_class;
} pivot_vars[MAX_DUMP_VAR];

static struct { 
	int *loc; 
	double num; 
} num_vec[MAX_PROJ_NUM];

static int equiv_fvars_top;
static int equiv_pvars_top;
int funct_vars_top;	/* export to assert(), lib.c */
int flatten_vars_top; 
static int high_funct_vars_top;
static int orig_funct_vars_top;
static int pivot_vars_top;
static int high_pivot_vars_top;
static int orig_pivot_vars_top;
static int num_vec_top;

static struct {
	int id, pos, neg, elim;
} fourier[MAX_FOURIER_VARS + 1];
static int f_top = 0;

static int old_trtop, old_slack_id;
static int overflow_warning_given;
static int something_printed;

static int n_origs, n_kohler_nodes;
static int fourier_iteration;
static int f_count1, f_count2, f_count3, f_count4, f_count5;

static int *make_funct_var();
static int *make_eqn();
static int *make_linear_form();
static int *make_ineq_eqn();
static int *make_nl_eqn();
static int *make_lhs_verb_nl_eqn();
static int *make_nl_rhs();
static int *make_arith_var();
static int *make_num();
static int *make_str();
static int *make_funct_var_var();
static int *make_term();
static int *make_func();
static int *make_func1();
static int *make_neg();
static int *make_eval_lhs();
static int *make_pivot_var();
static int *collect_vars();
static int **collect_atom_vars();
static int collect_assert_vars();
static int find_flatten_var();
static void make_equiv_funct_vars();
static void make_equiv_pivot_vars();
static void make_funct_eqns();
static void add_flatten_eqns();
static void add_linear_eqns();
static void add_constraint();
static void intern_numbers();
static void add_ineq_eqns();

static int *constraint_list, *first_constraint_list;

int real_val;

int *make_cons();
double delete_slack();
KOHLER_ptr kohler_merge();
INTptr collect_dump_vars();

extern FUNCTREC functors[];
extern unsigned int *code;
extern NL_EQN_ptr nl_eqn_top;
extern int trtop, *heaptop, **trail, TRAIL_SZ, MTRAIL;

extern int *findbind();
extern EQN_ptr copy_eqn();
extern EQN_ptr sum_eqns();
extern double find_coef();
extern double delete_entry();
extern double tmp_delete_entry();

/*---------------------------------------------------------------------------*/


static FILE *dumpF;

dump1(f, vars, names)
FILE *f;
int *vars;
char *names;
{
	is_dump_output = TRUE;
	dumpF = f;
	init_dump();
	collect_vars(vars, names, 1); /*** conservative estimate of pivot vars ***/
/***
print_collected_vars();
print_tableaus();
print_nlins();
***/
	prepare_linear_eqns();
/***
print_eq_tableau();
***/
	prepare_ineq_eqns();
	prepare_nlin_eqns();
	dump_equiv_funct_vars();
	dump_funct_eqns();
	dump_equiv_pivot_vars();
	dump_linear_eqns();
	dump_ineq_eqns();
	dump_nlin_eqns();
	dump_remaining_real_vars();
	cleanup_dump();
}

dump2(f, vars, names)
FILE *f;
int *vars;
int *names;
{
	vars = findbind(vars);
	names = findbind(names);
	if (!is_cons(vars) && !is_nil(vars))
		runtime_error("bad 1st argument to dump/2");
	if (!is_cons(names) && !is_nil(names))
		runtime_error("bad 2nd argument to dump/2");
	is_dump_output = TRUE;
	dumpF = f;
	init_dump();
	if (!collect_vars(vars, names, 2)) {
	  cleanup_dump();
	  return FALSE; 
	}
	prepare_linear_eqns();
	prepare_ineq_eqns();
	prepare_nlin_eqns();
	dump_equiv_funct_vars();
	dump_funct_eqns();
	dump_equiv_pivot_vars();
	dump_linear_eqns();
	dump_ineq_eqns();
	dump_nlin_eqns();
	dump_remaining_real_vars();
	cleanup_dump();
	return TRUE;
}

dump3(vars, user_vars, into)
int *vars, *into, *user_vars;
{
int i;
int *new_proj_vars;
int *tmp;
	is_dump_output = FALSE;
	dump_mode = TRUE;
	dumpF = stdout;
	into = findbind(into);
	vars = findbind(vars);
	user_vars = findbind(user_vars);
	if (!is_unbound_var(*into) && !is_daemon(into) &&
			!is_cons(into) && !is_nil(into))
		runtime_error("bad 2nd argument to dump/3");
	if (!is_unbound_var(*user_vars) && !is_daemon(into) &&
			 !is_cons(user_vars) && !is_nil(user_vars))
		runtime_error("bad 3rd argument to dump/3");
	first_constraint_list = heaptop++;
	constraint_list = first_constraint_list;
	*first_constraint_list = addtag(TAG_NIL, EMPTYLIST);
	init_dump();
	new_proj_vars = collect_vars(vars, NULL, 3);
	prepare_linear_eqns();
	prepare_ineq_eqns();
	prepare_nlin_eqns();
	make_equiv_funct_vars();
	make_funct_eqns();
	make_equiv_pivot_vars();
	add_linear_eqns();
	add_ineq_eqns();
	add_nlin_eqns();
	add_remaining_real_vars();
	add_flatten_eqns();
	*constraint_list = addtag(TAG_NIL, EMPTYLIST);
	tmp = first_constraint_list;
	cleanup_dump(); /*** hereafter no undo'ing ***/

	if (!unify(&tmp, into)) return FALSE;
	intern_numbers();
/***
printf("****** new_proj_vars ******\n");
printterm(stdout, &new_proj_vars);
printf("-----\n");
printf("****** user_vars ******\n");
printterm(stdout, user_vars);
printf("-----\n");
printf("****** into ******\n");
printterm(stdout, into);
printf("-----\n");
**/
	if (!unify(&new_proj_vars, user_vars)) return FALSE; 
	return TRUE;
}

int *get_rule_constraints(term) /*** for assert/1 only ***/
int *term;
{
int i;
static int *tmp;
	is_dump_output = FALSE;
	dump_mode = FALSE;	
	term = findbind(term);
	first_constraint_list = heaptop++;
	constraint_list = first_constraint_list;
	*first_constraint_list = addtag(TAG_NIL, EMPTYLIST);
	init_dump();
	collect_assert_vars(term);
	prepare_linear_eqns();
	prepare_ineq_eqns();
	prepare_nlin_eqns();
	make_equiv_funct_vars();
	make_funct_eqns();
	make_equiv_pivot_vars();
	add_linear_eqns();
	add_ineq_eqns();
	add_nlin_eqns();
	add_remaining_real_vars();
	add_flatten_eqns();
	*constraint_list = addtag(TAG_NIL, EMPTYLIST);

	/* NO cleanup at this point */
	/* cleanup_dump();*/ /*** hereafter no undo'ing ***/ 
	intern_numbers();
	return first_constraint_list;
}

static char kohler_cnt_bits[256];
init_kohler()
{
int i;
	for (i = 0; i < 256; i++) kohler_cnt_bits[i] = num_bits(i);
}

num_bits(x) 
unsigned int x;
{
int cnt = 0;
	while (x) {
		if (x & 1) cnt++;
		x = x >> 1;
	}
	return cnt;
}

init_dump()
{
int i;
	something_printed = FALSE;
	old_trtop = trtop;
	flatten_vars_top = equiv_fvars_top = equiv_pvars_top = 
		funct_vars_top = orig_pivot_vars_top = 
			pivot_vars_top = num_vec_top = 0;
	old_slack_id = slack_id;
	for (i = 1; i <= f_top; i++) 
		fourier[i].id = fourier[i].pos = fourier[i].neg = fourier[i].elim = 0; 
	f_top = 0;
}

cleanup_dump()
{
int i, j;
TAB_HDR_NODE_ptr hdr;
	for (i = slack_id; i < old_slack_id; i++) restore_null_ineq(i);
	slack_id = old_slack_id;
	i = trtop;
	while (--i >= old_trtop) pop_dump_trail(i);
	trtop = old_trtop;
	for (i = 1; i <= pivot_vars_top; i++) {
		hdr = tableau[j = pivot_vars[i].id];
		if (!(hdr->eqn || hdr->eq_occ || hdr->ineq_occ || hdr->nlin_occ)) {
			free_HDR(hdr);
			tableau[j] = NULL;
		} else hdr->next = NULL;
	}
}

/*--------------------------------------------- collect certain vars --------*/

static int *collect_vars(vars, names, dump1_or_2_or_3)
int *vars;
char *names;
int dump1_or_2_or_3;
{
int i;
int *new_vars;
	if (dump1_or_2_or_3 == 2) 
		new_vars = (int *) collect_named_vars(vars, names);
	else new_vars = collect_dump_vars(vars, names);
	orig_funct_vars_top = funct_vars_top;
	orig_pivot_vars_top = pivot_vars_top;
	for (i = 1; i <= funct_vars_top; i++) collect_deep_vars(funct_vars[i].rep);
	/* exp_collect_nlin_vars();*/ /* TEST only */
	collect_nlin_vars();
	return new_vars;
}

static collect_assert_vars(term)
int *term;
{
	collect_deep_vars(term);
	orig_funct_vars_top = funct_vars_top;
	orig_pivot_vars_top = pivot_vars_top;
	collect_nlin_vars();
}

INTptr collect_dump_vars(vars, names)
int *vars;
char *names;
{
int i, j, *listp, *rep, *orig;
int *first, *prev_list;
char *namep, *varname;
	namep = names;
	first = (INTptr) NULL;
	prev_list = (INTptr) &first;
	for (listp = findbind(vars); tag(*listp) != TAG_NIL; 
		listp = findbind(listp)) {
		varname = namep;
		if (is_dump_output) for (; *namep++ != DUMP_SEPARATOR; ) ;
		if (tag(*listp) == TAG_CONS) {
			if (!is_dump_output) {
				*prev_list = addtag(TAG_CONS, heaptop);
				make_unbound_var(heaptop);
			}
			orig = (int *) pmask(*listp);
			rep = findbind(orig);
			if (tag(*rep) != TAG_PAR) { 
				if (i = is_funct_var(rep)) {
					add_equiv_funct_var(
						i, funct_vars[i].heap, funct_vars[i].str);
					funct_vars[i].heap = heaptop;
					funct_vars[i].str = varname;
				} else 
					add_funct_var(orig, rep, heaptop, varname);
			} else {
				if (i = is_pivot_var(j = mask(*rep))) {
					add_equiv_pivot_var(
						j, pivot_vars[i].heap, pivot_vars[i].str);
					pivot_vars[i].heap = heaptop;
					pivot_vars[i].str = varname;
					/* printf("### renamed var %d h %x\n", i, heaptop); */
				} else {
					add_pivot_var(mask(*rep), heaptop, varname);
				}
			}
			if (!is_dump_output) {
				prev_list = ++heaptop;
				heaptop++;
			}
			listp = (int *) pmask(*listp) + 1;
		} else 
			fatal("dump requires a first-argument list");
	}
	if (!is_dump_output) *prev_list = addtag(TAG_NIL, EMPTYLIST);
	return first;
}

static int **collect_atom_vars(term)
int *term;
{
int i, j, *rep, *orig;
int *first, *prev_list;
int n, k, **vars;

	n = arity_of(mask(*term));
	vars = (int **) heaptop;
	heaptop += n;
	for (k=1; k <= n; k++) {
		make_unbound_var(heaptop);
		vars[k-1] = heaptop;
		orig = term + k;
		rep = findbind(orig);
		if (is_unbound_var(*rep) || !is_param(rep)) { 
			if (i = is_funct_var(rep)) {
				add_equiv_funct_var(
					i, funct_vars[i].heap, "");
				funct_vars[i].heap = heaptop;
				funct_vars[i].str = "";
			} else 	add_funct_var(orig, rep, heaptop, "");
		} else {
			if (i = is_pivot_var(j = mask(*rep))) {
				add_equiv_pivot_var(
					j, pivot_vars[i].heap, "");
				pivot_vars[i].heap = heaptop;
				pivot_vars[i].str = "";
			} else add_pivot_var(mask(*rep), heaptop, "");
		}
		heaptop++;
	}
	return vars;
}

collect_named_vars(vars, names)
int *vars;
int *names;
{
int i, j, *listp, *rep, *orig;
char *varname;
int *varterm;
	for (listp = findbind(vars); tag(*listp) != TAG_NIL; 
		listp = findbind(listp)) {
		if (is_cons(listp)) {
			if (!is_cons(names)) return FALSE;
			orig = (int *) pmask(*listp);
			rep = findbind(orig);
			varterm = findbind((int *) pmask(*names));
			if (!is_con(varterm)) return FALSE;
			varname = string_of(mask(*varterm));
			if (tag(*rep) != TAG_PAR) { 
				if (i = is_funct_var(rep)) {
					add_equiv_funct_var(
						i, funct_vars[i].heap, funct_vars[i].str);
					funct_vars[i].heap = heaptop;
					funct_vars[i].str = varname;
				} else 
					add_funct_var(orig, rep, heaptop, varname);
			} else {
				if (i = is_pivot_var(j = mask(*rep))) {
					add_equiv_pivot_var(
						j, pivot_vars[i].heap, pivot_vars[i].str);
					pivot_vars[i].heap = heaptop;
					pivot_vars[i].str = varname;
				} else {
					add_pivot_var(mask(*rep), heaptop, varname);
				}
			}
			listp = (int *) pmask(*listp) + 1;
			names = findbind((int *) pmask(*names) + 1);
		} else return FALSE;
	}
	if (is_nil(names)) return TRUE;
	else return FALSE;
}

collect_deep_vars(term)
int *term;
{
int i, n;
char *s;
double c;
EQN_ptr eqn;
	deref(term);
	if (is_unbound_var(*term) || is_daemon(term)) {
		if (is_funct_var(term)) return;
		if (is_dump_output) add_funct_var(term, term, NULL, NULL);
		else {
			make_unbound_var(heaptop);
			add_funct_var(term, term, heaptop++, NULL);
		}
	} else	
		switch ((unsigned) tag(*term)) {
		case TAG_CON:
		case TAG_NIL:
			return;
		case TAG_PAR:
			i = mask(*term);
			if (is_ground(i, &c) || is_pivot_var(i)) return;
			if (is_dump_output) add_pivot_var(mask(*term), NULL, NULL);
			else {
				make_unbound_var(heaptop);
				add_pivot_var(mask(*term), heaptop++, NULL);
			}
			break;
		case TAG_CONS:
			term = (int *) pmask(*term);
			collect_deep_vars(term);
			collect_deep_vars(++term);
			return;
		case TAG_STR:
			n = arity_of(*term);
			for (i = 1; i <= n; i++) collect_deep_vars(++term);
			return;
		default:
			fatal("34541");
	}
}

collect_nlin_vars() /*** all nlin vars are pivot vars ***/
{
int v0, v1, v2, *t0, *t1, *h;
NL_EQN_ptr nl_eqn;
	for (nl_eqn = nl_eqn_top; nl_eqn; nl_eqn = nl_eqn->next) {  
		if (nl_eqn->type == WOKEN || nl_eqn->partner) continue;
		if (nl_eqn->type == SOLVER_EVAL) {
			t0 =  (int *) nl_eqn->params1->id0;
			t1 =  (int *) nl_eqn->params1->id1;
			get_eval_vars(t0);
			deref(t1);
			if (!is_funct_var(t1)) {
				if (is_dump_output) add_funct_var(t1, t1, NULL, NULL);
				else {
					make_unbound_var(heaptop);
					add_funct_var(t1, t1, heaptop++, NULL);
				}
			}
		} else {
			if ((v0 = nl_eqn->params1->id0) && !is_pivot_var(v0)) {
				if (!is_dump_output) {
					h = heaptop++;
					make_unbound_var(h);
				} else h = NULL;					
				add_pivot_var(v0, h, NULL);
			}
			if ((v1 = nl_eqn->params1->id1) && !is_pivot_var(v1)) {
				if (!is_dump_output) {
					h = heaptop++;
					make_unbound_var(h);
				} else h = NULL;					
				add_pivot_var(v1, h, NULL);
			}
			if ((v2 = nl_eqn->params1->id2) && !is_pivot_var(v2)) {
				if (!is_dump_output) {
					h = heaptop++;
					make_unbound_var(h);
				} else h = NULL;					
				add_pivot_var(v2, h, NULL);
			}
		}			
	}
}

exp_collect_nlin_vars() /*** all nlin vars are pivot vars ***/
{
int v0, v1, v2, *t0, *t1, *h;
NL_EQN_ptr nl_eqn;
	for (nl_eqn = nl_eqn_top; nl_eqn; nl_eqn = nl_eqn->next) {  
		if (nl_eqn->type == WOKEN || nl_eqn->partner) continue;
		if (nl_eqn->type == SOLVER_EVAL) {
			t0 =  (int *) nl_eqn->params1->id0;
			t1 =  (int *) nl_eqn->params1->id1;
			get_eval_vars(t0);
			deref(t1);
			if (!is_funct_var(t1)) {
				if (is_dump_output) add_funct_var(t1, t1, NULL, NULL);
				else {
					make_unbound_var(heaptop);
					add_funct_var(t1, t1, heaptop++, NULL);
				}
			}
		} else {
			if ((v0 = nl_eqn->params1->id0) && !is_pivot_var(v0)) {
				if (!is_dump_output) {
					h = heaptop++;
					make_unbound_var(h);
				} else h = NULL;					
				add_pivot_var(v0, h, NULL);
			}
		}
	}
	for (nl_eqn = nl_eqn_top; nl_eqn; nl_eqn = nl_eqn->next) {  
		if (nl_eqn->type == SOLVER_EVAL) continue;
			if ((v1 = nl_eqn->params1->id1) && !is_pivot_var(v1)) {
				if (!is_dump_output) {
					h = heaptop++;
					make_unbound_var(h);
				} else h = NULL;					
				add_pivot_var(v1, h, NULL);
			}
			if ((v2 = nl_eqn->params1->id2) && !is_pivot_var(v2)) {
				if (!is_dump_output) {
					h = heaptop++;
					make_unbound_var(h);
				} else h = NULL;					
				add_pivot_var(v2, h, NULL);
			}
	}
}

get_eval_vars(t)
int *t;
{
int i, n;
double c;
	deref(t);
	if (is_unbound_var(*t)) {
		if (!is_funct_var(t)) {
			if (is_dump_output) add_funct_var(t, t, NULL, NULL);
			else {
				make_unbound_var(heaptop);
				add_funct_var(t, t, heaptop++, NULL);
			}
		}
	} else {
		switch ((unsigned) tag(*t)) {
			case TAG_CON:
			case TAG_NIL:
			case TAG_DAEMON: return;
			case TAG_CONS:
				t = (int *) pmask(*t);
				get_eval_vars(t);
				get_eval_vars(t + 1);
				return;
			case TAG_STR:
				n = arity_of(*t);
				for (i = 1; i <= n; i++) get_eval_vars(t + i);
				return;
			case TAG_PAR:
				i = mask(*t);
				if (is_ground(i, &c) || is_pivot_var(i)) return;
				if (is_dump_output) add_pivot_var(i, NULL, NULL);
				else {
					make_unbound_var(heaptop);
					add_pivot_var(i, heaptop++, NULL);
				}
				break;
			default: fatal("34545");
		}
	}
}

add_funct_var(t1, t2, h, s) /*** no duplicate check ***/
int *t1, *t2, *h;
char *s;
{
	if (funct_vars_top >= MAX_DUMP_VAR - 1) 
		fatal("dump overflow (funct vars)");
	funct_vars[++funct_vars_top].bind = t1;
	funct_vars[funct_vars_top].rep = t2;
	funct_vars[funct_vars_top].heap = h;
	funct_vars[funct_vars_top].str = s;
	funct_vars[funct_vars_top].mark = 0;
}

static int find_flatten_var(t)
int *t;
{
int i;
double dummy;
	t = findbind(t);
	if (is_cons(t) || (is_func(t) && !is_val_hat(mask(*t)))
			|| is_con(t) || is_nil(t) || is_num(t, &dummy)) /* TODO */
		return 0;
	else {	/* ^+, var, daemon */
		for (i = 1; i <= flatten_vars_top; i++) 
			if (t == flatten_vars[i].rep) return i;
		if (++flatten_vars_top >= MAX_FLATTEN_VAR) fatal("55712");
		if (is_unbound_var(*t) || is_daemon(t)) 
			flatten_vars[flatten_vars_top].var = make_funct_var(t);
		else if (is_param(t))
			flatten_vars[flatten_vars_top].var = make_pivot_var(mask(*t));
		else {
			flatten_vars[flatten_vars_top].var = heaptop;
			make_unbound_var(heaptop++);
		}
		flatten_vars[flatten_vars_top].rep = t;
		make_unbound_var(heaptop);
		flatten_vars[flatten_vars_top].new_var = heaptop++;
		return flatten_vars_top;
	}
}

int *flatten_var_term(t)
int *t;
{
int i;
	if (!(i = find_flatten_var(t))) return t;
	else return flatten_vars[i].new_var;
}

print_flatten_vars()
{
int i;
	for (i= 1; i <= flatten_vars_top; i++) {
		printf("t = "); printterm(stdout, flatten_vars[i].rep, 0);
		printf(" var = %x",flatten_vars[i].var); 
/*		printf(" var = "); printterm(stdout, flatten_vars[i].var, 0);  */
		printf(" new_var = "); printterm(stdout, flatten_vars[i].new_var, 0);
		printf("\n"); 
	}
}

add_pivot_var(v, h, s) /*** duplicate check ***/
int v, *h;
char *s;
{
int i;
TAB_HDR_NODE_ptr hdr;

	/* printf("### addpivotvar v %d h %x s %s\n", v,h,s); */
	if (!(hdr = tableau[v])) {
		malloc_HDR(hdr);
		tableau[v] = hdr;
	} else if (hdr->next) {
		if (pivot_vars[(int) hdr->next].id != v) {
			fatal("66621");
		} 
		return;
	}
	if (pivot_vars_top >= MAX_DUMP_VAR - 1) 
		fatal("dump overflow (pivot vars)");
	pivot_vars[++pivot_vars_top].id = v;
	pivot_vars[pivot_vars_top].heap = h;
	pivot_vars[pivot_vars_top].str = s;
	pivot_vars[pivot_vars_top].mark = 0;
	pivot_vars[pivot_vars_top].printed = FALSE;
	pivot_vars[pivot_vars_top].arith_looking = FALSE;
	pivot_vars[pivot_vars_top].non_arith_subs = FALSE;
	pivot_vars[pivot_vars_top].real_class = 0;
	hdr->next = (TAB_HDR_NODE_ptr) pivot_vars_top;
}

add_equiv_funct_var(v, h, s) /*** no duplicate check ***/
int v, *h;
char *s;
{
	if (equiv_fvars_top >= MAX_DUMP_VAR - 1) 
		fatal("dump overflow (equivalent funct vars)");
	equiv_funct_vars[++equiv_fvars_top].index = v;
	equiv_funct_vars[equiv_fvars_top].heap = h;
	equiv_funct_vars[equiv_fvars_top].str = s;
}

add_equiv_pivot_var(v, h, s) /*** no duplicate check ***/
int v, *h;
char *s;
{
	if (equiv_pvars_top >= MAX_DUMP_VAR - 1) 
		fatal("dump overflow (equivalent pivot vars)");
	equiv_pivot_vars[++equiv_pvars_top].id = v;
	equiv_pivot_vars[equiv_pvars_top].heap = h;
	equiv_pivot_vars[equiv_pvars_top].str = s;
	/* printf("### add equiv v %d h %x s %s\n", v,h,s); */
}

/*---------------------------------------------------------------------------*/

prepare_linear_eqns()
{ 
int i, j, k, v, v0, v1, min_priority;
EQN_ptr eqn0, eqn1, eqn2;
ENTRY_ptr entry, entry2, found;
OCC_ptr occ, occ99;
double c, c1, c2;
TAB_HDR_NODE_ptr hdr0, hdr2;

	for (i = 1; i <= pivot_vars_top; i++) { /*** decreasing priority order ***/
		pivot_vars[i].lin_output = FALSE;
		pivot_vars[i].lin_subs = NULL;
		v0 = pivot_vars[i].id;
		if (!(hdr0 = tableau[v0]) || !(eqn0 = hdr0->eqn)) continue;

		/*** find lowest pivot var or nonpivot var in rhs(v0) ***/
		entry = eqn0->next;
		min_priority = 0;
		for (found = NULL; entry; entry = entry->next) {
			j = is_pivot_var(entry->id);
			if (!j) {
				min_priority = pivot_vars_top + 1;
				found = entry;
				break;
			} else if (j > i && j > min_priority) {
				min_priority = j;
				found = entry;
			}
		}
		if (!found) {
			pivot_vars[i].lin_output = (i <= orig_pivot_vars_top);
			if (i > orig_pivot_vars_top) pivot_vars[i].lin_subs = eqn0;
			continue;
		}
		pivot_vars[i].lin_output = FALSE;
		pivot_vars[i].lin_subs = NULL;
		v = found->id;
		c = tmp_delete_entry(eqn0, v);
		hdr0->eqn = NULL;


		/*** subs in eq tableau ***/
		occ = (tableau[v = found->id] ? tableau[v]->eq_occ : NULL); 
		while (occ) {
			occ99 = occ->next;
			v1 = occ->id;
			if ((k = is_pivot_var(v1)) && k > i) {
				eqn1 = tableau[v1]->eqn;
				if (eqn1->time_stamp) {
					push_dump_trail(BTK_EQN, v1, eqn1);
					tableau[v1]->eqn = eqn1 = copy_eqn(eqn1);
					eqn1->time_stamp = 0;
				}
				c1 = delete_entry(EQ, eqn1, v);
				add_eqns(EQ, eqn1, eqn0, -(c1 / c));
				add_simple_entry(EQ, eqn1, v0, (c1 / c));
			}
			occ = occ99;
		}

		/*** subs in ineq tableau ***/
		occ = (tableau[v] ? tableau[v]->ineq_occ : NULL); 
		while (occ) {
			occ99 = occ->next;
			v1 = occ->id;
			eqn1 = tableau[v1]->eqn;
			if (eqn1->time_stamp) {
				push_dump_trail(BTK_INEQ, v1, eqn1);
				tableau[v1]->eqn = eqn1 = copy_eqn(eqn1);
				eqn1->time_stamp = 0;
			}
/*
printf("OLD ineq: ");print_eqn(eqn1);
*/
			c1 = delete_entry(INEQ, eqn1, v);	
			add_eqns(INEQ, eqn1, eqn0, -(c1 / c));
			add_simple_entry(INEQ, eqn1, v0, (c1 / c));
			occ = occ99;
/*
printf("NEW ineq: ");print_eqn(eqn1);
*/
		}

		if (min_priority > pivot_vars_top) { /*** nonpivot var ***/
			tmp_undelete_entry(eqn0);
			hdr0->eqn = eqn0;
			continue;
		}

		/*** lower priority dump var ***/
		push_dump_trail(BTK_NULL_EQN, v, NULL); 
		malloc_EQN(eqn2);
		if (min_priority > orig_pivot_vars_top) 
			pivot_vars[min_priority].lin_subs = eqn2;
		eqn2->next = NULL;
		eqn2->time_stamp = 0;
		eqn2->id = v;
		eqn2->constant = 0.0;
		eqn2->params = NULL;
		entry2 = eqn0->next;
		add_eqns(EQ, eqn2, eqn0, -(1.0 / c));
		add_simple_entry(EQ, eqn2, v0, (1.0 / c));
		if (!(hdr2 = tableau[v])) {
			malloc_HDR(hdr2);
			tableau[v] = hdr2;
		}
		hdr2->eqn = eqn2;
		tmp_undelete_entry(eqn0);
		hdr0->eqn = eqn0;
	}
}

prepare_ineq_eqns()
{
int i, j;
EQN_ptr eqn, eqn_i, eqn_j;
ENTRY_ptr entry;
OCC_ptr occ, occ99;
double c, c_i, c_j, dummy;
int s_i;
KOHLER_ptr koh;

	for (i = old_slack_id; i < SOLVER_SZ; i++) {
		push_dump_trail(BTK_INEQ, i, tableau[i]->eqn);
		tableau[i]->eqn = copy_eqn(tableau[i]->eqn);
	}
	for (i = old_slack_id; i < SOLVER_SZ; i++) { /*** one slack per row ***/
		eqn_i = tableau[i]->eqn;
		if (!(s_i = find_slack(eqn_i, &c_i))) {
		  delete_eqn(eqn_i, INEQ); 
		  continue;
		}
		occ = tableau[s_i]->ineq_occ;
		if (!occ->next) continue;
		tmp_delete_entry(eqn_i, s_i);
		for (; occ; occ = occ99) {
			occ99 = occ->next;
			if ((j = occ->id) == i) continue; 
			eqn_j = tableau[j]->eqn;
			c_j = delete_entry(INEQ, eqn_j, s_i);
			add_eqns(INEQ, eqn_j, eqn_i, -(c_j / c_i));
		}
		tmp_undelete_entry(eqn_i);
		mult_eqn(INEQ, eqn_i, 1/(c_i));
	}

	/*** standardize: exp <= 0 ***/
	for (i = SOLVER_SZ - 1; i >= old_slack_id; i--) {
		eqn = tableau[i]->eqn;
		/*** may have row without slack **/
		if (!eqn->next) continue;
		c = delete_slack(eqn);
		if (c < -EPS) mult_eqn(INEQ, eqn, -1.0);
		for (entry = eqn->next; entry; entry = entry->next) {
			if ((j = entry->id) >= slack_id || is_pivot_var(j)) continue;
			if (entry->coef < -EPS) inc_f_neg(j);
			else inc_f_pos(j);	
		}
	}
	kohler_setup();
	elim_quasi();
	if (f_top) fourier_motzkin();
	elim_quasi();
	normalise_ineq();
	for (i = SOLVER_SZ - 1; i >= slack_id; i--) 
		if (koh = tableau[i]->eqn->params->kohler) {
			free_kohler_nodes(koh);
			tableau[i]->eqn->params->kohler = NULL;
		}
}

prepare_nlin_eqns() /*** set up nlin subs vars ***/
{
int i;
NL_EQN *nl_eqn;
int *t;
	for (i = 1; i <= pivot_vars_top; i++) {
		pivot_vars[i].nlin_subs = NULL;
		pivot_vars[i].cyclic = FALSE;
		pivot_vars[i].mark = 0;
	}
	for (i = 1; i <= funct_vars_top; i++) {
		funct_vars[i].nlin_subs = NULL;
		funct_vars[i].cyclic = FALSE;
		funct_vars[i].mark = 0;
	}
	for (nl_eqn = nl_eqn_top; nl_eqn; nl_eqn = nl_eqn->next) {
		if (nl_eqn->type == WOKEN || nl_eqn->partner) continue;
		if (nl_eqn->type != SOLVER_EVAL) 
			i = is_pivot_var(nl_eqn->params1->id0);
		else {
			t = findbind(nl_eqn->params1->id0);
			if (tag(*t) == TAG_PAR) i = is_pivot_var(mask(*t));
			else {
				if (!is_unbound_var(*t) && !is_daemon(t)) continue;
				if (!(i = is_funct_var(t))) fatal("66112");
				if (!funct_vars[i].nlin_subs && orig_funct_vars_top < i)
					funct_vars[i].nlin_subs = nl_eqn;
				continue;
			}
		}
		if (!pivot_vars[i].lin_subs && orig_pivot_vars_top < i) 
			if (!pivot_vars[i].nlin_subs) 
			  pivot_vars[i].nlin_subs = nl_eqn;
	}
	for (i = 1; i <= pivot_vars_top; i++) {
		if (pivot_vars[i].nlin_subs && 
		    check_cyclic(pivot_vars[i].id, pivot_vars[i].id)) 
				pivot_vars[i].cyclic = TRUE;
	}
	for (i = 1; i <= funct_vars_top; i++) {
		if (funct_vars[i].nlin_subs && 
		    check_eval_cyclic(funct_vars[i].rep, funct_vars[i].rep))
				funct_vars[i].cyclic = TRUE;
	}
}

check_cyclic(v0, v1) /*** is v0 "bound" to v1 ? ***/
int v0, v1;
{
int i, w1, w2, *t;
EQN_ptr eqn;
ENTRY_ptr entry;
NL_EQN_ptr nl_eqn;
	if (!(i = is_pivot_var(v0))) return FALSE;
	else if (pivot_vars[i].mark == v1) return FALSE;
	else if (eqn = pivot_vars[i].lin_subs) {
		for (entry = eqn->next; entry; entry = entry->next) {
			if (entry->id == v1) return TRUE;
			else {
				pivot_vars[i].mark = v1;
				if (check_cyclic(entry->id, v1)) return TRUE;
			}
		}
		return FALSE;
	} else if (nl_eqn = pivot_vars[i].nlin_subs) {
		if (nl_eqn->type == SOLVER_EVAL) {
			t = (int *) nl_eqn->params1->id1;
			deref(t);
			return check_eval_cyclic(t, v1);
		}
		w1 = nl_eqn->params1->id1;
		if (w1 == v1) return TRUE;
		w2 = nl_eqn->params1->id2;
		if (w2 == v1) return TRUE;
		pivot_vars[i].mark = v1;
		if (check_cyclic(w1, v1)) return TRUE;
		if (check_cyclic(w2, v1)) return TRUE;
		return FALSE;
	} else return FALSE;
}

check_eval_cyclic(v0, v1) /*** is v0 "bound" to v1 ? ***/
int *v0, *v1;
{
int i, *t;
EQN_ptr eqn;
ENTRY_ptr entry;
NL_EQN_ptr nl_eqn;

	if (!(i = is_funct_var(v0))) return FALSE;
	else if (funct_vars[i].mark == (int) v1) return FALSE;
	if (nl_eqn = funct_vars[i].nlin_subs) {
		t = (int *) nl_eqn->params1->id1;
		deref(t);
		if (t == v1) return TRUE;
		funct_vars[i].mark = (int) v1;
		if (check_eval_cyclic(t, v1)) return TRUE;
		return FALSE;
	} else return FALSE;
}

elim_quasi()
{
int i, j;
EQN_ptr eqn_i, eqn_j;
OCC_ptr occ, occ99;
	for (i = SOLVER_SZ - 1; i >= slack_id; i--) {
		eqn_i = tableau[i]->eqn;
		if (eqn_i->time_stamp == -1) continue; 
		if (!eqn_i->next) continue;
		for (occ = tableau[eqn_i->next->id]->ineq_occ; occ; occ = occ99) {
			occ99 = occ->next;
			eqn_j = tableau[occ->id]->eqn;
			if (i == occ->id || eqn_j->time_stamp == -1) continue;
			switch (quasi_similar(eqn_i, eqn_j)) {
				case 0: break;
				case 1: contract(eqn_j); break;
				case 2: contract(eqn_i); goto NEXT;
			}
		}
		NEXT: ;
	}
}

normalise_ineq()
{
int i, j;
EQN_ptr eqn;
ENTRY_ptr entry;
double coef;
	for (i = SOLVER_SZ - 1; i >= slack_id; i--) {
		eqn = tableau[i]->eqn;
		if (eqn->time_stamp == -1) continue; 
		if (!(entry = eqn->next)) continue;
		if (is_equal(fabs(entry->coef), 1.0)) continue;
		coef = fabs(entry->coef);
		eqn->constant = eqn->constant/coef;
		eqn->params->epsilon = eqn->params->epsilon/coef;
		for (; entry; entry = entry->next)
			entry->coef = entry->coef/coef;
	}
}

fourier_motzkin()
{
TAB_HDR_NODE_ptr hdr;
EQN_ptr eqn, eqn1, eqn2;
ENTRY_ptr entry;
OCC_ptr occ, occ2, occ88, occ99, occ_pos, occ_neg;
OCC first_pos_occ, first_neg_occ;
KOHLER_ptr koh1, koh2;
int i, j, k, elimvar;
double c, c1, c2;

/***
printf("Fourier: %d ineqs, %d elim vars\n", count_all_ineq(), f_top);
***/
/*
print_eq_tableau();
print_ineq_tableau();
*/
	for (i = 1; i <= f_top; i++) { 
		fourier_iteration++;
		k = next_fourier_id();
		elimvar = fourier[k].id;
/***
printf("%d: elimvar X%d (%d +ve, %d -ve, metric %d), total %d ineqs\n", 
	i, elimvar, fourier[k].pos, fourier[k].neg, f_metric(k), count_all_ineq());
f_count1 = f_count2 = f_count3 = f_count4 = 0;
***/
		fourier[k].elim = TRUE;
		if (fourier[k].pos == 0 || fourier[k].neg == 0) {
			fourier_iteration--;
			if (hdr = tableau[elimvar]) {
				for (occ = hdr->ineq_occ; occ; occ = occ99) {
					occ99 = occ->next;
					contract(tableau[occ->id]->eqn);
				}
			}
			continue;
		}
		occ_pos = &first_pos_occ;
		occ_neg = &first_neg_occ;
		for (occ = tableau[elimvar]->ineq_occ; occ; occ = occ99) {
			occ99 = occ->next;
			eqn = tableau[occ->id]->eqn;
			eqn->time_stamp = -1;
			c = delete_entry(INEQ, eqn, elimvar);
			malloc_OCC(occ2);
			occ2->next = NULL;
			occ2->id = eqn->id;
			occ2->coef = c;
			if (c > EPS) {
				occ_pos->next = occ2;
				occ_pos = occ2; 
			} else {
				occ_neg->next = occ2;
				occ_neg = occ2;
			}
		}
		occ_pos = first_pos_occ.next;
		occ_neg = first_neg_occ.next;

		/*** expand! ***/
		for (occ = occ_pos; occ; occ = occ->next) {
			eqn1 = tableau[occ->id]->eqn;
			koh1 = eqn1->params->kohler;
			for (occ2 = occ_neg; occ2; occ2 = occ2->next) {
				eqn2 = tableau[occ2->id]->eqn;
				koh2 = eqn2->params->kohler;
				f_count1++;
				/* HACK */
				if (kohler_merge_count(koh1, koh2) > fourier_iteration + 1) {
#ifdef STATS
					f_count2++;
					fourier_stats();
#endif
				} else
					expand(eqn1, eqn2, -(occ->coef / occ2->coef));
			}
		}
		for (occ = occ_pos; occ; occ = occ99) {
			occ99 = occ->next;
			contract(tableau[occ->id]->eqn);
			free_OCC(occ);
		}
		for (occ = occ_neg; occ; occ = occ99) {
			occ99 = occ->next;
			contract(tableau[occ->id]->eqn);
			free_OCC(occ);
		}
/*
print_ineq_tableau();
*/
	}
}

fourier_stats()
{
if (f_count1 && !(f_count1 % 1000)) {
printf("Expand attempt %d (Kohler'd %d, Expanded %d, Quasi'd %d k2ed %d)\n",
f_count1, f_count2, f_count3, f_count4, f_count5);
}
}

kohler_setup() /*** Node 1, bits 0 - 159, words 0 - 4, etc ***/
{
int i, j, eqn_number, node, word;
EQN_ptr eqn;
KOHLER_NODE first;
KOHLER_ptr koh0, koh;
	n_origs = SOLVER_SZ - old_slack_id; /*** numbered 0 .. n ***/
	i = n_origs / KOHLER_BITS_PER_NODE;
	n_kohler_nodes = (n_origs % KOHLER_BITS_PER_NODE ? i + 1 : i);
	fourier_iteration = 0;
	for (i = SOLVER_SZ - 1; i >= old_slack_id; i--) {
		eqn_number = SOLVER_SZ - i - 1;
		eqn = tableau[i]->eqn;
		koh0 = &first;
		for (j = 1; j <= n_kohler_nodes; j++) { /*** setup kohler chain ***/
			malloc_KOHLER(koh);
			koh0->next = koh;
			koh0 = koh;
		}
		eqn->params->kohler = first.next;
		node = (eqn_number / KOHLER_BITS_PER_NODE) + 1;
		word = (eqn_number % KOHLER_BITS_PER_NODE) / (sizeof(int) * 8);
		koh->bits[word] |= 
			(unsigned int) 1 << (eqn_number % (sizeof(int) * 8));
	}
}

KOHLER_ptr kohler_merge(koh1, koh2)
KOHLER_ptr koh1, koh2;
{
int i, j;
KOHLER_NODE first;
KOHLER_ptr koh0, koh;
	koh0 = &first;
	for (j = 1; j <= n_kohler_nodes; j++) { 
		malloc_KOHLER(koh);
		koh0->next = koh;
		koh0 = koh;
	}
	koh0 = first.next;
	do {
		for (i = 0; i < KOHLER_WORDS_PER_NODE; i++)
			koh0->bits[i] = koh1->bits[i] | koh2->bits[i];
		koh0 = koh0->next;
		koh1 = koh1->next;
		koh2 = koh2->next;
	} while (koh0);
	return first.next;
}

kohler_count(koh)
KOHLER_ptr koh; 
{
int i, j, count;
unsigned int m;

	count = 0;
	do {
		for (i = 0; i < KOHLER_WORDS_PER_NODE; i++) {
			m = koh->bits[i];
			for (j = 1; j <= 4; j++, m = m >> 8)
				count += kohler_cnt_bits[m & 255];
		}
		koh = koh->next; 
	} while (koh);
	return count;
}

kohler_subset(eqn1,eqn2)
EQN_ptr eqn1, eqn2;
{
register int i, j, k1,k2,k3;
int sub1,sub2;
KOHLER_ptr koh1, koh2;

    sub1 = sub2 = 1;
    koh1 = eqn1->params->kohler;
    koh2 = eqn2->params->kohler;
    do {
        for (i = 0; i < KOHLER_WORDS_PER_NODE; i++) {
            if (sub1 || sub2) {
                k1 = koh1->bits[i];
                k2 = koh2->bits[i];
                k3 = k1 & k2;
                if (k1 != k3) sub1 = 0;
                if (k2 != k3) sub2 = 0;
            }
            if (!sub1 && !sub2) return 0;
        }
        koh1 = koh1->next;
        koh2 = koh2->next;
    } while (koh1 && koh2);
    return (sub1 ? 1 : 2);
}

kohler_merge_count(koh1, koh2)
KOHLER_ptr koh1, koh2;
{
int i, j, count;
unsigned int m;
	count = 0;
	do {
		for (i = 0; i < KOHLER_WORDS_PER_NODE; i++) {
			m = (koh1->bits[i] | koh2->bits[i]);
			for (j = 1; j <= 4; j++, m = m >> 8)
				count += kohler_cnt_bits[m & 255];
		}
		koh1 = koh1->next; 
		koh2 = koh2->next; 
	} while (koh1);
	return count;
}

contract(eqn) /*** do not free EQN's ***/
EQN_ptr eqn;
{
int i, j;
ENTRY_ptr entry, entry99;
EQN_ptr eqn_i;

	free_kohler_nodes(eqn->params->kohler);
	i = eqn->id;
	for (entry = eqn->next; entry; entry = entry99) {
		entry99 = entry->next;
		j = entry->id;
		if (entry->coef < -EPS) dec_f_neg(j);
		else dec_f_pos(j);
		delete_occ(INEQ, i, j);
		free_ENTRY(entry);
	}
	eqn_i = tableau[i]->eqn;
	eqn_i->next = NULL;
	eqn_i->constant = 0.0;
	eqn_i->time_stamp = -1;
	eqn_i->params->basic = 0;
	eqn_i->params->epsilon = 0.0;
	eqn_i->params->kohler = NULL;
}

expand(eqn1, eqn2, factor) /*** new eqn = eqn1 + eqn2 * factor ***/
EQN_ptr eqn1, eqn2;
double factor;
{
int i, which;
EQN_ptr eqn, eqn_i;
TAB_HDR_NODE_ptr hdr;
ENTRY_ptr entry;
KOHLER_ptr koh;
OCC_ptr occ;

	eqn = copy_eqn(eqn1);
	eqn->id = 0;
	eqn->params->kohler = 
		kohler_merge(eqn1->params->kohler, eqn2->params->kohler); 
    
#ifdef DUMP_SUBSET
    for (i = SOLVER_SZ - 1; i >= slack_id; i--) {
        eqn_i = tableau[i]->eqn;
        if (eqn_i->time_stamp == -1) continue;
        if (!eqn_i->next) continue;
        if (kohler_subset(eqn, eqn_i) == 2) {
            f_count5++;
            free_eqn_nodes(eqn);
            return;
        }
    }
#endif

	add_eqns(INEQ, eqn, eqn2, factor);
	if (!eqn->next) {
		free_kohler_nodes(eqn->params->kohler);
		free_eqn_nodes(eqn);
		return; /*** eqn->constant <= 0 ***/
	}
	eqn->time_stamp = 0;

	for (occ = tableau[eqn->next->id]->ineq_occ; occ; occ = occ->next) {
		eqn_i = tableau[occ->id]->eqn;
		if (eqn_i->time_stamp == -1) continue;
		if (quasi_similar(eqn, eqn_i) == 2) {
			f_count4++;
			free_kohler_nodes(eqn->params->kohler);
			free_eqn_nodes(eqn);
			return;
		}
	}
	f_count3++;
	malloc_HDR(hdr);
	hdr->eqn = eqn;
	eqn->id = --slack_id;
	if (slack_id <= solver_id)
		 fatal("Solver tableau overflow (fourier-motzkin)");
	tableau[slack_id] = hdr;
	for (entry = eqn->next; entry; entry = entry->next) {
		i = entry->id;
		if (entry->coef < -EPS) inc_f_neg(i);
		else inc_f_pos(i);
		insert_occ(INEQ, slack_id, i);
	}
}

inc_f_pos(id)
int id;
{
int i;
	if (is_pivot_var(id)) return;
	for (i = 1; i <= f_top; i++) if (fourier[i].id == id) break;
	if (i > f_top) {
		fourier[i].id = id;
		f_top++;
	}
	fourier[i].pos++;
}

inc_f_neg(id)
int id;
{
int i;
	if (is_pivot_var(id)) return;
	for (i = 1; i <= f_top; i++) if (fourier[i].id == id) break;
	if (i > f_top) {
		fourier[i].id = id;
		f_top++;
	}
	fourier[i].neg++;
}

dec_f_pos(id)
int id;
{
int i;
	if (is_pivot_var(id)) return;
	for (i = 1; i <= f_top; i++) if (fourier[i].id == id) break;
	if (i > f_top) fatal("78932");
	fourier[i].pos--;
}

dec_f_neg(id)
int id;
{
int i;
	if (is_pivot_var(id)) return;
	for (i = 1; i <= f_top; i++) if (fourier[i].id == id) break;
	if (i > f_top) fatal("78932");
	fourier[i].neg--;
}

next_fourier_id()
{
int i, least;
	least = 0;
	for (i = 1; i <= f_top; i++) {
		if (fourier[i].elim) continue; 
		if (f_metric(i) < f_metric(least)) least = i;
	}
	return least;
}

f_metric(i)
int i;
{
	if (!i) return MAXPOSINT;
	if (0 < i && i <= f_top) return fourier[i].pos * fourier[i].neg;
	fatal("23929");
}

quasi_similar(eqn1, eqn2) /*** if TRUE, returns the stronger (1, 2) ***/
EQN_ptr eqn1, eqn2;
{
ENTRY_ptr entry1, entry2 = (ENTRY_ptr) NULL;
double c;
	if ((entry1 = eqn1->next) && (entry2 = eqn2->next)) {
		c = entry1->coef / entry2->coef;
		if (c < -EPS) return 0;
	}
	while (entry1 && entry2) {
		if (entry1->id == entry2->id &&
		    is_equal(c, entry1->coef / entry2->coef)) {
			entry1 = entry1->next;
			entry2 = entry2->next;
		} else return 0;
	}
	if (entry1 || entry2) return 0;
	if (eqn1->constant > c * eqn2->constant ||
		(is_equal(eqn1->constant, c * eqn2->constant) && 
			eqn1->params->epsilon >= c * eqn2->params->epsilon)) return 1;
	return 2; /*** strictly stronger ***/
}

/*------------------------------------------------------- DUMP! -------------*/

dump_funct_eqns()
{
int i, *t, *t2;
	for (i = 1; i <= funct_vars_top; i++) {
		t = funct_vars[i].bind;
		t2 = findbind(t);
		if (is_unbound_var(*t2) || is_daemon(t2)) {
			dump_funct_var_var(i, t);
			continue;
		}
		print_first_newline();
		output_funct_var(t);
		fprintf(dumpF, " = ");
		output_term(t2);
		fprintf(dumpF, "\n");
	}
}

dump_funct_var_var(i, t) /*** t is bind, unbound ***/
int i, *t;
{
int j, *t2;
	t2 = findbind(t);
	for (j = funct_vars_top; j > i; j--) {
		if (funct_vars[j].rep == t2) {
			print_first_newline();
			output_funct_var(t);
			fprintf(dumpF, " = ");
			output_var_str(funct_vars[j].str);
			fprintf(dumpF, "\n");
			return;
		}
	}
}

dump_equiv_funct_vars()
{
int i;
	if (is_dump_output && equiv_fvars_top) print_first_newline();
	for (i = 1; i <= equiv_fvars_top; i++) {
		output_var_str(equiv_funct_vars[i].str);
		fprintf(dumpF, " = ");
		output_var_str(funct_vars[equiv_funct_vars[i].index].str);
		fprintf(dumpF, "\n");
	}
}

dump_equiv_pivot_vars()
{
int i, v;	
double c;
	if (is_dump_output && equiv_pvars_top) print_first_newline();
	for (i = 1; i <= equiv_pvars_top; i++) {
		output_var_str(equiv_pivot_vars[i].str);
		fprintf(dumpF, " = ");
		v = equiv_pivot_vars[i].id;
		if (is_ground(v, &c)) output_number(c);
		else output_arith_var(v, FALSE);
		fprintf(dumpF, "\n");
	}
}

dump_linear_eqns()
{
EQN_ptr eqn;
int i;
double c;
	for (i = 1; i <= pivot_vars_top; i++) { 
		eqn = tableau[pivot_vars[i].id]->eqn;
		if (pivot_vars[i].lin_output || pivot_vars[i].lin_subs) /* real eqn */
			mark_eqn_arith_looking(eqn);
		if (!pivot_vars[i].lin_output) continue;
		c = eqn->constant;
		print_first_newline();
		output_verbatim_arith_var(pivot_vars[i].id);
		fprintf(dumpF, " = ");
		if (!eqn->next) {
			output_number(c);
			newline();
		} else {
			output_linear_form(eqn->next);
			if (c > EPS) {
				fprintf(dumpF, " + ");
				output_number(c);
			} else if (c < -EPS) {
				fprintf(dumpF, " - ");
				output_number(-c);
			}
			newline();
		}
	}
}

dump_ineq_eqns()
{
int i;
	for (i = SOLVER_SZ - 1; i >= slack_id; i--) {
		if (tableau[i]->eqn->time_stamp == -1) continue;
		mark_ineq_arith_looking(tableau[i]->eqn);
		print_first_newline();
		output_ineq_eqn(tableau[i]->eqn);
	}
}

dump_nlin_eqns()
{
int i, *t, x;
NL_EQN_ptr nl_eqn;
	for (nl_eqn = nl_eqn_top; nl_eqn; nl_eqn = nl_eqn->next) {
		if (nl_eqn->type == WOKEN || nl_eqn->partner) continue;
		if (nl_eqn->type == SOLVER_EVAL) {
			t = findbind(nl_eqn->params1->id0);
			if (is_param(t)) {
				i = is_pivot_var(mask(*t));
				if (pivot_vars[i].nlin_subs == nl_eqn) continue;
				output_nl_eqn(nl_eqn);
			} else {
				if ((i = is_funct_var(t)) && 
					(funct_vars[i].nlin_subs == nl_eqn)) continue;
				/*
				if (is_unbound_var(*t)) {
					i = is_funct_var(t);
					if (funct_vars[i].nlin_subs == nl_eqn) continue;
				}
				*/
				output_nl_eqn(nl_eqn);
			}
			continue;
		} else {
			mark_nlin_arith_looking(nl_eqn);
			i = is_pivot_var(x = nl_eqn->params1->id0);
			if (pivot_vars[i].nlin_subs == nl_eqn) {
				if (is_power_nlin(nl_eqn) && !nl_has_been_subs(x)) 
					output_lhs_verb_nl_eqn(nl_eqn);
			} else output_nl_eqn(nl_eqn);
		}
	}
	for (i = 1; i <= pivot_vars_top; i++) {
		if (pivot_vars[i].cyclic) output_nl_eqn(pivot_vars[i].nlin_subs);
	}
	for (i = 1; i <= funct_vars_top; i++) {
		if (funct_vars[i].cyclic) output_nl_eqn(pivot_vars[i].nlin_subs);
	}
}

dump_remaining_real_vars()
{
int i;
	for (i = 1; i <= orig_pivot_vars_top; i++) {
		if (!pivot_vars[i].arith_looking && !pivot_vars[i].real_class) {
			print_first_newline();
			fprintf(dumpF, "real(");
			output_verbatim_arith_var(pivot_vars[i].id);
			fprintf(dumpF, ")\n");
		}
	}
	for (i = orig_pivot_vars_top + 1; i <= pivot_vars_top; i++) {
		if (!pivot_vars[i].arith_looking && !pivot_vars[i].real_class &&
		   (pivot_vars[i].printed || pivot_vars[i].non_arith_subs)) {
			print_first_newline();
			fprintf(dumpF, "real(");
			output_arith_var(pivot_vars[i].id, FALSE);
			fprintf(dumpF, ")\n");
		}
	}
}

/*------------------------------------------------------- print -------------*/

output_var_str(s) 
char *s;
{
	while (*s && *s != DUMP_SEPARATOR) putc(*s++, dumpF);
}

output_verbatim_arith_var(i)
int i;
{
int j;
char *s;
	if (j = is_pivot_var(i)) {
		pivot_vars[j].printed = TRUE;
		if (s = pivot_vars[j].str) output_var_str(s);
		else fprintf(dumpF, "_t%d", pivot_vars[j].id);
	} else {
		if (i < old_slack_id) fprintf(dumpF, "_t%d", i);
		else fprintf(dumpF, "_S%d", i);
	}
}

output_arith_var(i, brackets)
int i, brackets;
{
char *s;
int j, k;
double c;
EQN_ptr eqn;
NL_EQN_ptr nl_eqn;
	if (is_ground(i, &c)) output_number(c);
	else if (j = is_pivot_var(i)) {
		if (pivot_vars[j].lin_subs) {
			eqn = tableau[i]->eqn;
			if (check_non_arith_subs(eqn)) pivot_vars[j].non_arith_subs = TRUE;
			c = eqn->constant;
			if (eqn->next) {
				brackets = brackets && (eqn->next->next || !is_zero(c));
				if (brackets) fprintf(dumpF, "(");
				output_linear_form(eqn->next);
				if (c > EPS) { 
					fprintf(dumpF, " + ");
					output_number(c);
				} else if (c < -EPS) {
					fprintf(dumpF, " - ");
					output_number(-c);
				}
				if (brackets) fprintf(dumpF, ")");
			} else output_number(c);
		} else if (pivot_vars[j].cyclic) output_verbatim_arith_var(i);
		else if (nl_eqn = pivot_vars[j].nlin_subs) {
			pivot_vars[j].non_arith_subs = TRUE;
			output_nl_rhs(nl_eqn);
		} else output_verbatim_arith_var(i);
	} else output_verbatim_arith_var(i);
}

check_non_arith_subs(eqn) /*** x -> t where t is non-arith looking ***/
EQN_ptr eqn;
{
int i;
NL_EQN_ptr nl_eqn;
	/*** x = c*y ? ***/
	if (!eqn->next || eqn->next->next || !is_zero(eqn->constant)) return FALSE;
	/*** x = 1.0*y ? ***/
	if (!is_equal(eqn->next->coef, 1.0)) return FALSE;	
	i = is_pivot_var(eqn->next->id);
	nl_eqn = pivot_vars[i].nlin_subs;
	if (!nl_eqn || nl_eqn->type == SOLVER_EVAL) return TRUE;
	return FALSE;
}

output_arith_func(type)
int type;
{
	switch (type) {
	case SOLVER_ABS: 
	case SOLVER_ABS0: 
		fprintf(dumpF, "abs(");
		break;
	case SOLVER_POW:
	case SOLVER_POW0:
	case SOLVER_POW1:
	case SOLVER_POW2:
	case SOLVER_POW02:
		fprintf(dumpF, "pow(");
		break;
	case SOLVER_SIN:
	case SOLVER_SIN0:
		fprintf(dumpF, "sin(");
		break;
	case SOLVER_COS:
	case SOLVER_COS0:
		fprintf(dumpF, "cos(");
		break;
	case SOLVER_MIN:
	case SOLVER_MIN0:
	case SOLVER_MIN1:
	case SOLVER_MIN2:
		fprintf(dumpF, "min(");
		break;
	case SOLVER_MAX:
	case SOLVER_MAX0:
	case SOLVER_MAX1:
	case SOLVER_MAX2:
		fprintf(dumpF, "max(");
		break;
	case SOLVER_EVAL:
		fprintf(dumpF, "eval(");
		break;
	case SOLVER_ARCSIN:
		fprintf(dumpF, "arcsin(");
		break;
	case SOLVER_ARCCOS:
		fprintf(dumpF, "arccos(");
		break;
	default: fatal("82313");
	}
}

output_funct_var(t)
int *t;
{
int i;
char *s;
	if (i = is_funct_var(t)) {
		if (funct_vars[i].nlin_subs) {
			output_nl_rhs(funct_vars[i].nlin_subs);
			return;
		}
		s = funct_vars[i].str;
		if (s) output_var_str(s);
		else print_var2pos(dumpF, funct_vars[i].rep);
	} else {
		print_var2pos(dumpF, t);
	}
}

output_linear_eqn(eqn)
EQN_ptr eqn;
{
int i, j;
double c;
	output_verbatim_arith_var(eqn->id);
	fprintf(dumpF, " = ");
	c = eqn->constant;
	if (!eqn->next) {
		output_number(c);
		newline();
	} else {
		output_linear_form(eqn->next);
		if (c > EPS) {
			fprintf(dumpF, " + ");
			output_number(c);
		} else if (c < -EPS) {
			fprintf(dumpF, " - ");
			output_number(-c);
		}
		newline();
	}
}		

output_ineq_eqn(eqn)
EQN_ptr eqn;
{
int all_positive, first_operand, constant_printed;
double c0, e0, c;
ENTRY_ptr entry;
	if (!eqn->next) return;
	c0 = -(eqn->constant);
	e0 = -(eqn->params->epsilon); /*** exp <= c0 + e0 ***/
	if (e0 >= EPS) fatal("10077");
	all_positive = first_operand = TRUE;
	for (entry = eqn->next; entry; entry = entry->next) {
		if ((c = entry->coef) > EPS) {
			if (!first_operand) fprintf(dumpF, " + ");
			first_operand = FALSE;
			if (!is_equal(fabs(c), 1.0)) {
				output_number(c);
				fprintf(dumpF, "*");
			}
			output_arith_var(entry->id, FALSE);
		} else all_positive = FALSE;
	}
	constant_printed = FALSE;
	if (!all_positive) {
		if (first_operand) {
			output_number(-c0);
			constant_printed = TRUE;
		} else if (c0 < -EPS) {
			fprintf(dumpF, " + ");
			output_number(-c0);
			constant_printed = TRUE;
		}
	}
	if (e0) fprintf(dumpF, " < "); else fprintf(dumpF, " <= ");
	first_operand = TRUE;			
	for (entry = eqn->next; entry; entry = entry->next) {
		if ((c = entry->coef) < -EPS) {
			if (!first_operand) fprintf(dumpF, " + ");
			first_operand = FALSE;
			if (!is_equal(fabs(c), 1.0)) {
				output_number(-c);
				fprintf(dumpF, "*");
			}
			output_arith_var(entry->id, FALSE);
		}
	}
	if (!constant_printed) {
		if (first_operand) output_number(c0);
		else if (!is_zero(c0)) {
			fprintf(dumpF, " + ");
			output_number(c0);
		}
	}
	newline();
}

output_nl_eqn(nl_eqn)
NL_EQN_ptr nl_eqn;
{
	print_first_newline();
	if (nl_eqn->type == SOLVER_EVAL) output_eval_lhs(nl_eqn);
	else output_arith_var(nl_eqn->params1->id0, FALSE);
	fprintf(dumpF, " = ");
	output_nl_rhs(nl_eqn);
	fprintf(dumpF, "\n");
}

output_lhs_verb_nl_eqn(nl_eqn)
NL_EQN_ptr nl_eqn;
{
	print_first_newline();
	output_verbatim_arith_var(nl_eqn->params1->id0, FALSE);
	fprintf(dumpF, " = ");
	output_nl_rhs(nl_eqn);
	fprintf(dumpF, "\n");
}

output_linear_form(entry) /*** c1 * e1 + ... cn * en, no constant ***/
ENTRY_ptr entry;
{
double c;
char first_operand;
	first_operand = TRUE;
	while (entry) {
		c = entry->coef;
		if (!first_operand) {
			if (c > EPS) fprintf(dumpF, " + ");
			else if (c < -EPS) fprintf(dumpF, " - ");
		} else 
			if (c < -EPS) fprintf(dumpF, "-");
		if (!is_equal(fabs(c), 1.0)) {
			if (c > EPS) {
				output_number(c);
				fprintf(dumpF, "*");
			} else {
				output_number(-c);
				fprintf(dumpF, "*");
			}
		}
		output_arith_var(entry->id, FALSE);
		entry = entry->next;
		first_operand = FALSE;
	}
}

output_cons(term)
int *term;
{
	output_term(pmask(*term));
	term = findbind((int *) pmask(*term) + 1);
	if (tag(*term) == TAG_CONS) {
		fprintf(dumpF, ", ");
		output_cons(term);
	} else 
		if (tag(*term) == TAG_NIL) return;
		else {
			fprintf(dumpF, " | ");
			output_term(term);
		}
}

output_term(t)
int *t;
{
	output_printed_term(t, MAX_OP_PRECEDENCE+1);
}

output_printed_term(t, priority)
int *t, priority;
{
int i, j, n;
char *s;
double c;
EQN_ptr eqn;
int current, left, right;
	t = findbind(t);
	if (is_unbound_var(*t) || is_daemon(t)) output_funct_var(t);		
	else {
		switch ((unsigned) tag(*t)) {
		case TAG_CON:
			fprintf(dumpF, "%s", string_of(*t));
			break;
		case TAG_NIL:
			fprintf(dumpF, "[]");
			break;
		case TAG_NUM:
			output_number(*((double *) pmask(*t)));
			break;
		case TAG_PAR:
			i = mask(*t);
			/* FIX: expand to include cases from output_arith_var */
			output_arith_var(i, FALSE);
			break;
		case TAG_CONS:
			fprintf(dumpF, "[");
			output_cons(t);
			fprintf(dumpF, "]");
			break;
		case TAG_STR:
			n = arity_of(*t);
			s = string_of(*t);
			current = get_op_priority(s, n, &left, &right);
			switch (opkind_of(*t)) {
				case NONE:
					if (!isalpha(*s)) fprintf(dumpF, "'%s'(", s);
					else fprintf(dumpF, "%s(", s);
					for (i = 1; i <= n; i++) {
						output_term(++t);
						if (i != n) fprintf(dumpF, ", ");
					}
					fprintf(dumpF, ")");
					break;
				case PREFIX:
					if (current > priority) fprintf(dumpF, "(");
					fprintf(dumpF, "%s ", s);
					output_printed_term(++t, right);
					if (current > priority) fprintf(dumpF, ")");
					break;
				case POSTFIX:
					if (current > priority) fprintf(dumpF, "(");
					output_printed_term(++t, left);
					fprintf(dumpF, " %s", s);
					if (current > priority) fprintf(dumpF, ")");
					break;
				case BINARY:
					if (current > priority) fprintf(dumpF, "(");
					output_printed_term(++t, left);
					fprintf(dumpF, " %s ", s);
					output_printed_term(++t, right);
					if (current > priority) fprintf(dumpF, ")");
					break;
				default:
					fatal("illegal opkind in output_term");
			}
			break;
		default:
			fatal("34563");
		}
	}
}

output_number(c)
double c;
{
	if (is_zero(c)) fprintf(dumpF, "0");
	else fprintf(dumpF, "%g", c);
}

output_nl_rhs(nl_eqn)
NL_EQN_ptr nl_eqn;
{
NL_PARAMS1_ptr params1;
int i, *t, type, v0, v1, v2;
double c, c2;
	params1 = nl_eqn->params1;
	v0 = params1->id0; v1 = params1->id1; v2 = params1->id2;
	c = params1->coef;
	switch (type = nl_eqn->type) {
		case SOLVER_MULT: 
			if (!is_equal(c, 1.0)) {
				output_number(c);
				fprintf(dumpF, " * ");
			}
			output_arith_var(v1, TRUE); 
			fprintf(dumpF, " * "); 
			output_arith_var(v2, TRUE);
			break;
		case SOLVER_ABS: 
		case SOLVER_ABS0: 
		case SOLVER_SIN:
		case SOLVER_SIN0:
		case SOLVER_COS:
		case SOLVER_COS0:
		case SOLVER_ARCSIN:
		case SOLVER_ARCCOS:			
			output_arith_func(type);
			output_arith_var(v1, FALSE); 
			fprintf(dumpF, ")");
			break;
		case SOLVER_POW: 
		case SOLVER_POW0: 
		case SOLVER_POW1: 
		case SOLVER_POW2: 
		case SOLVER_POW02:
		case SOLVER_MIN:
		case SOLVER_MIN1:
		case SOLVER_MIN2:
		case SOLVER_MAX:
		case SOLVER_MAX1:
		case SOLVER_MAX2:
			output_arith_func(type);
			output_arith_var(v1, FALSE); 
			fprintf(dumpF, ", ");
			output_arith_var(v2, FALSE); 
			fprintf(dumpF, ")");
			break;
		case SOLVER_EVAL:
			output_arith_func(type);
			t = findbind(v1);
			if ((i= is_funct_var(t)) && funct_vars[i].nlin_subs)
				output_nl_rhs(funct_vars[i].nlin_subs);
			else output_funct_var(t);
			fprintf(dumpF, ")");
			break;
		default: fatal("23743");
	}
}

output_eval_lhs(nl_eqn)
NL_EQN_ptr nl_eqn;
{
	int v0, *t;
	v0 = nl_eqn->params1->id0;
	t = findbind(v0);
	if (tag(*t) == TAG_PAR) {
		output_arith_var(mask(*t), FALSE);
	} else {
		output_term(t);
	}
}

mark_eqn_arith_looking(eqn)
EQN_ptr eqn;
{
int i, j, a, b;
ENTRY_ptr entry;
	i = is_pivot_var(eqn->id);
	if (!eqn->next || 
		eqn->next->next || 
		!is_zero(eqn->constant) ||
		!is_equal(eqn->next->coef, 1.0)) {
		if (i) pivot_vars[i].arith_looking = TRUE;
		for (entry = eqn->next; entry; entry = entry->next) 
			if (j = is_pivot_var(entry->id))
				pivot_vars[j].arith_looking = TRUE;
		return;
	}
	/*** x = y ***/
	j = is_pivot_var(eqn->next->id);
	if (i && j) {
		if (pivot_vars[i].arith_looking) 
			pivot_vars[j].arith_looking = TRUE;
		else if (pivot_vars[j].arith_looking) 
			pivot_vars[i].arith_looking = TRUE;
		for (a = i; pivot_vars[a].real_class; a = pivot_vars[a].real_class) ;
		for (b = j; pivot_vars[b].real_class; b = pivot_vars[b].real_class) ;
		pivot_vars[a].real_class = b;
	}
}

mark_ineq_arith_looking(eqn)
EQN_ptr eqn;
{
    int i,j;
    ENTRY_ptr entry;
    for (entry = eqn->next; entry; entry = entry->next) 
	if (i = is_pivot_var(entry->id)) {
	    pivot_vars[i].arith_looking = TRUE;
	    for (j = i; pivot_vars[j].real_class; j = pivot_vars[j].real_class) ;
	    pivot_vars[j].arith_looking = TRUE;
	}
}

mark_nlin_arith_looking(nl_eqn)
NL_EQN_ptr nl_eqn;
{
int i;
	if (nl_eqn->type == SOLVER_EVAL) return;
	if (i = is_pivot_var(nl_eqn->params1->id0)) 
		pivot_vars[i].arith_looking = TRUE;
	if (i = is_pivot_var(nl_eqn->params1->id1)) 
		pivot_vars[i].arith_looking = TRUE;
	if (i = is_pivot_var(nl_eqn->params1->id2)) 
		pivot_vars[i].arith_looking = TRUE;
}

/*--------------------------------------------------- Aux stuff -------------*/

find_slack(eqn, c_ptr)
EQN *eqn;
double *c_ptr;
{
ENTRY_ptr entry;
	entry = eqn->next;
	while (entry) {
		if (entry->id >= old_slack_id) {
			*c_ptr = entry->coef;
			return entry->id;
		}
		entry = entry->next;
	}
	return 0;
}

double delete_slack(eqn)
EQN_ptr eqn;
{
ENTRY first;
register ENTRY_ptr prev_entry, entry;
double c;
	first.next = entry = eqn->next;
	prev_entry = &first;
	while (entry && entry->id < old_slack_id) {
		prev_entry = entry;
		entry = entry->next;
	}
	c = entry->coef;
	prev_entry->next = entry->next;
 	free_ENTRY(entry);
	eqn->next = first.next;
	if (eqn->id) delete_occ(INEQ, eqn->id, entry->id);
	return c;
}

push_dump_trail(type, v, eqn)
int type, v;
EQN_ptr eqn;
{
	if (trtop >= MTRAIL) {
		printf("trtop %d %d\n", trtop, MTRAIL);
		fatal("Dump trail overflow");
	}
	if (eqn) push_trail(type, eqn);
	else push_trail(type, v);
}

pop_dump_trail(i)
int i;
{
int j;
	j = (int) trail[i];
	switch (tagnum(j)) {
		case NUM_BTK_NULL_EQN: restore_null_eqn(mask(j)); break;
		case NUM_BTK_EQN: restore_eqn(pmask(j)); break;
		case NUM_BTK_NULL_INEQ: restore_null_ineq(mask(j)); break;
		case NUM_BTK_INEQ: restore_ineq(pmask(j)); break;
		default: printf("pop dump %x, tag %x\n", j, tagnum(j));
			fatal("92345");
	}
}

print_dump_trail()
{
int i,j;
	i = trtop;
	while (--i >= old_trtop) {
		j = (int) trail[i];
		printf("trail[%d]: ", i); 
		switch (tagnum(j)) {
			case NUM_BTK_NULL_EQN: 
				printf("<null eqn>\n"); break;
			case NUM_BTK_EQN: 
				print_eqn((EQN_ptr) pmask(j));
				break;
			case NUM_BTK_NULL_INEQ: 
				printf("<null ineq>\n"); break;
			case NUM_BTK_INEQ: 
				print_eqn((EQN_ptr) pmask(j));
				break;
			default: fatal("92311");
		}
	}
}

is_pivot_var(v) /*	pivot var uses next in header nodes */
int v;
{
    TAB_HDR_NODE_ptr hdr;
    
    /** v cannot be slack **/
    /**
    printf("is_pivot(%d,%x) ", v,v);
    if (v >= slack_id) return 0;
    **/
    if (!(hdr = tableau[v])) return 0;
    else return (int) hdr->next;
}

is_funct_var(t)
int *t;
{
int i;
	funct_vars[0].bind = funct_vars[0].rep = t;
	i = funct_vars_top;	
	while (funct_vars[i].bind != t && funct_vars[i].rep != t) i--;
	return i;
}

heap_to_pivot_var(t)
int *t;
{
int i;
	pivot_vars[0].heap = t;
	i = pivot_vars_top;	
	while (pivot_vars[i].heap != t) i--;
	return i;
}

heap_to_free_var(t)
int *t;
{
int i;
	funct_vars[0].heap = t;
	i = funct_vars_top;	
	while (funct_vars[i].heap != t) i--;
	if (!i) {
		flatten_vars[0].new_var = t;
		for (i = flatten_vars_top; ; i--) {
			if (flatten_vars[i].new_var == t) break;
			else if (flatten_vars[i].var == t) {
				i = flatten_vars_top + i;
				break;
			}
		}
		if (i) i += funct_vars_top;
	}
	return i;
}

free_kohler_nodes(koh)
KOHLER_ptr koh;
{
KOHLER_ptr koh99;
	while (koh) {
		koh99 = koh->next;
		free_KOHLER(koh);
		koh = koh99;
	}
}

print_collected_vars()
{
int i;
char *s;
	printf("Orig: pivots %d functs %d, Tops: pivots %d functs = %d\n",
		orig_pivot_vars_top, orig_funct_vars_top, 
		pivot_vars_top, funct_vars_top);
	for (i = 1; i <= funct_vars_top; i++) {
		printf("funct_vars[%d] = b:%x, r:%x ", 
			i, funct_vars[i].bind, funct_vars[i].rep);
			print_var2pos(stdout, funct_vars[i].rep);
/*
		if (funct_vars[i].heap) {
			printf(" h = ");
			print_var2pos(stdout, funct_vars[i].heap);
		}
*/
		if (s = funct_vars[i].str) {
			printf(" (");
			output_var_str(s);
			printf(")\n");
		} else printf(" (no name)\n");
	}
	for (i = 1; i <= pivot_vars_top; i++) {
		printf("pivot_vars[%d] = id:%d", i, pivot_vars[i].id);
/*
		if (pivot_vars[i].heap) {
			printf(" h = ");
			print_var2pos(stdout, pivot_vars[i].heap);
		}
*/
		if (s = pivot_vars[i].str) {
			printf(" (");
			output_var_str(s);
			printf(")\n");
		} else printf(" (no name)\n");
	}
}

print_fourier()
{
int i;
	for (i = 1; i <= f_top; i++) {
		if (fourier[i].elim) continue;
		output_arith_var(fourier[i].id, FALSE);
		printf(": +ve %d -ve %d\n", fourier[i].pos, fourier[i].neg);
	}
}


/* ------------------------------------------------------------------------ */

special_print_tableau(arg)
int arg;
{
int i;
	printf(
		"%%---------- Ineq_tableau (%d) -----------------------------\n", arg);
	printf("p%d(X19) :- \n", arg);
	for (i = SOLVER_SZ - 1; i >= slack_id; i--)
		if (tableau[i] && tableau[i]->eqn) {
			special_print_eqn(tableau[i]->eqn);
			printf(",\n");
		}
	for (i = SOLVER_SZ - 1; i >= slack_id; i--) {
		printf("X%d >= 0", i);
		if (i > slack_id) printf(",\n"); else printf(".\n");
	}
	printf(
		"%%----------------------------------------------------------\n");
}

special_print_eqn(eqn)
EQN_ptr eqn;
{
ENTRY_ptr entry;
int first;
	if (!eqn) fatal("8618");
	if (!is_zero(eqn->params->epsilon)) fatal("8619");
	first = TRUE;
	entry = eqn->next;
	if (!entry) return;
	while (entry) {
		if (entry->coef > 0.0) {
			if (first) printf( " %g*X%d", entry->coef, entry->id);
			else printf( " +%g*X%d", entry->coef, entry->id);
		} else 
			printf(" -%g*X%d", -(entry->coef), entry->id);
		entry = entry->next;
		first = FALSE;
	}
	printf( " = %g", -eqn->constant);
}

count_all_ineq()
{
int i, count;
	count = 0;
	for (i = SOLVER_SZ - 1; i >= slack_id; i--)
		if (tableau[i]->eqn->time_stamp != -1) count++;
	return count;
}

/*--------------------------------------------- dump/3 ----------------------*/

static void make_equiv_funct_vars()
{
int i;
	for (i = 1; i <= equiv_fvars_top; i++) {
		add_constraint(make_eqn(equiv_funct_vars[i].heap, 
			funct_vars[equiv_funct_vars[i].index].heap));				
	}
}

static void make_equiv_pivot_vars()
{
int i, j;	
	for (i = 1; i <= equiv_pvars_top; i++) {
		j = is_pivot_var(equiv_pivot_vars[i].id);
/**
printf("MAKE EQUIV v=%d (%x %x) ",j, equiv_pivot_vars[i].heap, pivot_vars[i].heap); print_var2pos(stdout, equiv_pivot_vars[i].heap);
printf(" = "); print_var2pos(stdout, pivot_vars[i].heap); printf("\n");
**/
		add_constraint(make_eqn(equiv_pivot_vars[i].heap, 
			pivot_vars[j].heap));	
	}
}

static void make_funct_eqns()
{
int i, *t, *t2;
int *tmp;
	for (i = 1; i <= funct_vars_top; i++) {
		t = funct_vars[i].bind;
		t2 = findbind(t);
		if (is_unbound_var(*t2) || is_daemon(t2)) {
			tmp = make_funct_var_var(i, funct_vars[i].bind);
			if (tmp) add_constraint(tmp);
		} else 	
			add_constraint(make_eqn(make_funct_var(t), make_term(t2, FALSE)));
	}
}

static void add_flatten_eqns()
{
int i;
int *t;
	for (i = 1; i <= flatten_vars_top; i++) {
		t = flatten_vars[i].rep;
		if (!is_unbound_var(*t) && !is_daemon(t)) {
			add_constraint(t = make_eqn(flatten_vars[i].var, 
				make_term(flatten_vars[i].rep, FALSE)));
		}
	}
	for (i = 1; i <= flatten_vars_top; i++) {
		 add_constraint(make_eqn(flatten_vars[i].var, 
			make_func1(HAT_QUOTEVAL, flatten_vars[i].new_var)));
	}
}

static void add_linear_eqns()
{
EQN_ptr eqn;
int i, *t1, *t2;
double c;
	for (i = 1; i <= pivot_vars_top; i++) {
		eqn = tableau[pivot_vars[i].id]->eqn;
		if (pivot_vars[i].lin_output || pivot_vars[i].lin_subs)
			mark_eqn_arith_looking(eqn);
		if (!pivot_vars[i].lin_output) continue;
		if (!(t1 = pivot_vars[i].heap)) fatal("38455");
		c = eqn->constant;
		if (!eqn->next) t2 = make_num(c);
		else {
			t2 = make_linear_form(eqn->next);
			if (c > EPS) t2 = make_func(HAT_PLUSVAL, t2, make_num(c));
			else if (c < -EPS) t2 = make_func(HAT_MINUSVAL, t2, make_num(-c));
		}
		add_constraint(make_eqn(t1, t2));
	}
}

static int *make_linear_form(entry) 
ENTRY_ptr entry;
{
double c;
char first_operand;
int *t, *t1;
	first_operand = TRUE;
	while (entry) {
		c = entry->coef;
		if (!is_equal(fabs(c), 1.0)) {
			if (c > EPS) t1 = make_func(HAT_MULTVAL,
								 make_num(c), make_arith_var(entry->id));
			else t1 = make_func(HAT_MULTVAL,
								make_num(-c), make_arith_var(entry->id));
		} else t1 = make_arith_var(entry->id);
		if (!first_operand) {
			if (c > EPS) t = make_func(HAT_PLUSVAL, t, t1);
			else if (c < -EPS) t = make_func(HAT_MINUSVAL, t, t1);
		} else {
			if (c < -EPS) t = make_neg(t1); 
			else t = t1;
		}
		entry = entry->next;
		first_operand = FALSE;
	}
	return t;
}

static int *make_func(val, t1, t2)
int val, *t1, *t2;
{
int *t;
	t = heaptop;
	*(heaptop++) = addtag(TAG_STR, val);
	make_bound_var(heaptop++, t1);
	make_bound_var(heaptop++, t2);
	return t;
}

static int *make_func1(val, t1)
int val, *t1;
{
int *t;
	t = heaptop;
	*(heaptop++) = addtag(TAG_STR, val);
	make_bound_var(heaptop++, t1);
	return t;
}

static int *make_neg(t1)
int *t1;
{
int *t;
        t = heaptop;
        *(heaptop++) = addtag(TAG_STR,HAT_U_MINUSVAL);
        make_bound_var(heaptop++,t1);
        return t;
}

static int *make_funct_var_var(i, t) /*** t is bind, unbound ***/
int i, *t;
{
int j, *t2;
	t2 = findbind(t);
	for (j = funct_vars_top; j > i; j--) {
		if (funct_vars[j].rep == t2) {
			return make_eqn(make_funct_var(t), funct_vars[j].heap);
		}
	}
	return NULL;
}

static void add_constraint(e)
int *e;
{
	if (!e) return;
	if (dump_mode) {
		*constraint_list = addtag(TAG_CONS, heaptop);
		make_bound_var(heaptop, e);
		constraint_list = heaptop + 1;
		heaptop += 2;
	} else {
		*constraint_list = (int) heaptop;
		make_bound_var(heaptop, addtag(TAG_STR, COMMA));
		make_bound_var(heaptop + 1, e);
		constraint_list = heaptop + 2;
		heaptop += 3;
	}
}

static int *make_num(n)
double n;
{
int *t;
	if (num_vec_top >= MAX_PROJ_NUM)
		runtime_error("too many constants in dump/3\n");
	if (is_zero(n)) n = 0.0;
	num_vec[++num_vec_top].loc = heaptop;
	num_vec[num_vec_top].num = n;
	*heaptop = addtag(TAG_MISC, NULL);
	t = heaptop++;
	return t;
}

static void intern_numbers()
{
int i;
	for (i = 1; i <= num_vec_top; i++) {
		makenum(++solver_id, num_vec[i].num);
		*(num_vec[i].loc) = addtag(TAG_PAR, solver_id);
	}
}

static int *make_funct_var(t)
int *t;
{
int i;
NL_EQN_ptr nl;
	if (i = is_funct_var(t)) {
		if ((nl = funct_vars[i].nlin_subs)) return make_nl_rhs(nl);
		else return funct_vars[i].heap;
	} else {
		if (funct_vars_top >= MAX_DUMP_VAR - 1) {
			runtime_error("dump overflow (make numbers)");
		}
		funct_vars[++funct_vars_top].bind = t;
		funct_vars[funct_vars_top].rep = findbind(t);
		funct_vars[funct_vars_top].str = NULL;
        make_unbound_var(heaptop);
		funct_vars[funct_vars_top].heap = heaptop++;
        return funct_vars[funct_vars_top].heap;
	}
}

static int *make_pivot_var(i) 
int i;
{
int j;
	if (j = is_pivot_var(i)) {
		pivot_vars[j].printed = TRUE;
		return pivot_vars[j].heap;
	}
	fatal("66184");
}

static int *make_eqn(t1, t2)
int *t1, *t2;
{
int *t;
	t = heaptop;
	*(heaptop++) = addtag(TAG_STR, EQVAL);
	make_bound_var(heaptop++, t1);
	make_bound_var(heaptop++, t2);
	return t;
}

int *make_cons(t1, t2)
int *t1, *t2;
{
int *t;
	t = heaptop;
	heaptop = heaptop + 3;
	*t = addtag(TAG_CONS, t + 1);
	make_bound_var(t + 1, t1);
	make_bound_var(t + 2, t2);
	return t;
}

/*
 * ^+(t1, t2): if ti is var, daemon or ^+, 
 *  flatten using new var Xi, then make new eqn ti = ^quote(Xi).
 */

static int *make_str(n, t0, in_arith)
int n, *t0, in_arith;
{
int i, *t, *t1;
	t = heaptop;
	heaptop = heaptop + n + 1;
	*t = *t0;
	if (is_val_hat(mask(*t0))) {
		t1 = t;
		t = make_func1(HAT_QUOTEVAL, t);
		for (i = 1; i <= n; i++)
			make_bound_var(t1 + i, flatten_var_term(t0 + i));
	} else {
		for (i = 1; i <= n; i++) 
			make_bound_var((t + i), make_term(t0 + i, in_arith));
	}
	return t;
}

static int *make_term(t, in_arith)
int *t, in_arith;
{
int *t1, *t2, n;
char *s;
double c;
EQN_ptr eqn;
int *t0;
	t = findbind(t);
	if (is_unbound_var(*t) || is_daemon(t)) return make_funct_var(t);	
	else {
		switch ((unsigned) tag(*t)) {
		case TAG_CON:
		case TAG_NIL:
		case TAG_NUM: return t;
		case TAG_PAR: return make_arith_var(mask(*t));
		case TAG_CONS:
			t1 = make_term(head_of(t), in_arith);
			t2 = make_term(tail_of(t), in_arith);
			return make_cons(t1, t2);
		case TAG_STR:
			return make_str(arity_of(*t), t, in_arith);
		default:
			fatal("34872");
		}
	}
}

static int *make_arith_var(i)
int i;
{
int *t, j;
double c;
EQN_ptr eqn;
NL_EQN_ptr nl_eqn;

	if (is_ground(i, &c)) return make_num(c);
	if (j = is_pivot_var(i)) {
		if (pivot_vars[j].lin_subs) {
			eqn = tableau[i]->eqn;
			if (check_non_arith_subs(eqn)) pivot_vars[j].non_arith_subs = TRUE;
			c = eqn->constant;
			if (eqn->next) {
				t = make_linear_form(eqn->next);
				if (c > EPS) return make_func(HAT_PLUSVAL, t, make_num(c));
				else if (c < -EPS) 
					return make_func(HAT_MINUSVAL, t, make_num(-c));
				else return t;
			} else return make_num(c);
		} else if (pivot_vars[j].cyclic) return make_pivot_var(i);
		else if (nl_eqn = pivot_vars[j].nlin_subs) {
			pivot_vars[j].non_arith_subs = TRUE;
			return make_nl_rhs(nl_eqn);
		} else return make_pivot_var(i);
	} else return make_pivot_var(i);
}

static void add_ineq_eqns()
{
int i;
	for (i = SOLVER_SZ - 1; i >= slack_id; i--) {
		if (tableau[i]->eqn->time_stamp == -1) continue;
		mark_ineq_arith_looking(tableau[i]->eqn);
		add_constraint(make_ineq_eqn(tableau[i]->eqn));
	}
}

static int *make_ineq_eqn(eqn)
EQN_ptr eqn;
{
double c0, e0, c;
int t, *t1, *t2;
int all_positive, first_operand, constant_printed;
ENTRY_ptr entry;
	if (!eqn->next) return (int *) NULL;
	c0 = -(eqn->constant);
	e0 = -(eqn->params->epsilon); /*** exp <= c0 + e0 ***/
	if (e0 >= EPS) fatal("10078");
	t1 = make_linear_form(eqn->next);
	t2 = make_num(c0);
	return (is_zero(e0) ? make_func(LEVAL, t1, t2) : make_func(LTVAL, t1, t2));
}

add_nlin_eqns()
{
int i, *t, x;
NL_EQN_ptr nl_eqn;

	for (nl_eqn = nl_eqn_top; nl_eqn; nl_eqn = nl_eqn->next) {
		if (nl_eqn->type == WOKEN || nl_eqn->partner) continue;
		if (nl_eqn->type == SOLVER_EVAL) {
			t = findbind(nl_eqn->params1->id0);
			if (is_param(t)) {
				i = is_pivot_var(mask(*t));
				if (pivot_vars[i].nlin_subs == nl_eqn) continue;
				add_constraint(make_nl_eqn(nl_eqn));
			} else {
				if ((i = is_funct_var(t)) && 
					(funct_vars[i].nlin_subs == nl_eqn)) continue;
				/*
				if (is_unbound_var(*t)) {
					i = is_funct_var(t);
					if (funct_vars[i].nlin_subs) continue;
				}
				*/
				add_constraint(make_nl_eqn(nl_eqn));
			}
		} else {
			mark_nlin_arith_looking(nl_eqn);
			x = nl_eqn->params1->id0;
			if (!(i = is_pivot_var(x))) fatal("66895");
			if (pivot_vars[i].nlin_subs == nl_eqn) {
				if (is_power_nlin(nl_eqn) && !nl_has_been_subs(x))
					add_constraint(make_lhs_verb_nl_eqn(nl_eqn));
			} else add_constraint(make_nl_eqn(nl_eqn));
		}
	}
	for (i = 1; i <= pivot_vars_top; i++) {
		if (pivot_vars[i].cyclic) 
			add_constraint(make_nl_eqn(pivot_vars[i].nlin_subs));
	}
	for (i = 1; i <= funct_vars_top; i++) {
		if (funct_vars[i].cyclic) 
			add_constraint(make_nl_eqn(pivot_vars[i].nlin_subs));
	}	

}

add_remaining_real_vars()
{
int i;
	for (i = 1; i <= orig_pivot_vars_top; i++) {
		if (!pivot_vars[i].arith_looking && !pivot_vars[i].real_class) 
			add_constraint(make_func1(real_val, 
				make_arith_var(pivot_vars[i].id)));
	}
	for (i = orig_pivot_vars_top + 1; i <= pivot_vars_top; i++) {
		if (!pivot_vars[i].arith_looking && !pivot_vars[i].real_class &&
		   (pivot_vars[i].printed || pivot_vars[i].non_arith_subs))
			add_constraint(make_func1(real_val, 
				make_arith_var(pivot_vars[i].id)));
	}
}

static int *make_nl_eqn(nl_eqn)
NL_EQN_ptr nl_eqn;
{
int *left;
	if (nl_eqn->type == SOLVER_EVAL) 
		left = make_eval_lhs(nl_eqn);
	else left = make_arith_var(nl_eqn->params1->id0);
	return make_eqn(left, make_nl_rhs(nl_eqn));
}

static int *make_lhs_verb_nl_eqn(nl_eqn)
NL_EQN_ptr nl_eqn;
{
int *left;
	left = make_pivot_var(nl_eqn->params1->id0);
	return make_eqn(left, make_nl_rhs(nl_eqn));
}

static int *make_nl_rhs(nl_eqn)
NL_EQN_ptr nl_eqn;
{
int *right, *t;
NL_PARAMS1_ptr params1;
int i, type, v0, v1, v2;
double c, c2;
	params1 = nl_eqn->params1;
	v0 = params1->id0; v1 = params1->id1; v2 = params1->id2;
	c = params1->coef;
	switch (type = nl_eqn->type) {
		case SOLVER_MULT: 
			t = make_func(HAT_MULTVAL, make_arith_var(v1),
					 make_arith_var(v2));
			if (!is_equal(c, 1.0)) 
				t =  make_func(HAT_MULTVAL, make_num(c), t);
			return t;
		case SOLVER_ABS: 
		case SOLVER_ABS0: return make_func1(HAT_ABSVAL, make_arith_var(v1));
		case SOLVER_SIN:  return make_func1(HAT_SINVAL, make_arith_var(v1));
		case SOLVER_COS:  return make_func1(HAT_COSVAL, make_arith_var(v1));
		case SOLVER_ARCSIN:  
			return make_func1(HAT_ARCSINVAL, make_arith_var(v1));
		case SOLVER_ARCCOS:  
			return make_func1(HAT_ARCCOSVAL, make_arith_var(v1));
		case SOLVER_POW: 
		case SOLVER_POW0: 
		case SOLVER_POW1:
		case SOLVER_POW2:
		case SOLVER_POW02:
			return make_func(HAT_POWVAL, make_arith_var(v1),
						make_arith_var(v2));
		case SOLVER_MIN:
		case SOLVER_MIN0:
		case SOLVER_MIN1:
		case SOLVER_MIN2:
			return make_func(HAT_MINVAL, make_arith_var(v1),
						make_arith_var(v2));
		case SOLVER_MAX:
		case SOLVER_MAX0:
		case SOLVER_MAX1:
		case SOLVER_MAX2:
			return make_func(HAT_MAXVAL, make_arith_var(v1),
						make_arith_var(v2));
		case SOLVER_EVAL:
			t = findbind(v1);
			if ((i = is_funct_var(t)) && funct_vars[i].nlin_subs)
				right = make_nl_rhs(funct_vars[i].nlin_subs);
			else right = make_funct_var(t);
			return make_func1(HAT_EVALVAL, right);
		default: fatal("35812");
	}
}

static int *make_eval_lhs(nl_eqn)
NL_EQN_ptr nl_eqn;
{
int v0, *t;
	v0 = nl_eqn->params1->id0;
	t = findbind(v0);
	return (is_param(t) ? make_arith_var(mask(*t)) : make_term(t, FALSE));
}

nl_has_been_subs(x) /*** conservative check for x being subs'd ***/
int x;
{
TAB_HDR_NODE_ptr hdr;
OCC_ptr occ1;
NL_OCC_ptr occ2;
int j;
	if (!(hdr = tableau[x])) return FALSE;
	for (occ1 = hdr->eq_occ; occ1; occ1 = occ1->next) {
		j = is_pivot_var(occ1->id);
		if (pivot_vars[j].lin_output) return TRUE;
	}
	if (hdr->ineq_occ) return TRUE;
	for (occ2 = hdr->nlin_occ; occ2; occ2 = occ2->next) {
		j = is_pivot_var(occ2->nl_eqn->params1->id0);
		if (j && !pivot_vars[j].nlin_subs) return TRUE;
	}
	return FALSE;
}

