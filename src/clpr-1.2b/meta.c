/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: meta.c                                               *
 ***************************************************************/

/*
 * Changes:
	missing eval(^max), also arccos, arcsin
	wrong eval(^pow)
 *
 */

#include "standard.h"
#include "config.h"
#include "parse.h"
#include "symbols.h"
#include "lib.h"
#include "compile.h"
#include "opcodes.h"
#include "emul.h"
#include "solver.h"

#define has_a_hat(t) ((mask(*t) >= ARITH_FUNC_4) && (mask(*t) <= ARITH_FUNC_5))

extern FUNCTREC functors[];

int *findbind();
int *make_delay_cell();
int *already_has_eval();
int *check_eval_var();

extern int *make_cons();
extern NL_EQN_ptr solve_eval();
extern int *curar, *stacktop, *heaptop, *retreg, **trail, trtop, *lstack;
extern int solver_id;
extern int *heap, *safeheap, *lastcp;
extern int *runable;
extern bool have_runable;

/*---------------------------------------------------------------------------*/

s_eval(t1, t2) /*** t1 = eval(t2) ***/
int *t1, *t2;
{
int *t, *t3, *t4, *base, n, i;

	deref(t1);
	t1 = check_eval_var(t1);
	t = check_eval_var(findbind(t2));
	if (is_unbound_var(*t) || is_daemon(t)) return suspend_eval(t1, t);
	switch ((unsigned) tag(*t)) {
	case TAG_NUM:
	case TAG_NIL:
	case TAG_CON:
	case TAG_PAR: return unify(t1, t);
	case TAG_STR:
		if (has_a_hat(t)) return setup_eqn(t1, t);
		else {
			base = heaptop;
			*base = *t;
			n = arity_of(*t);
			heaptop = heaptop + n + 1;
			for (i = 1; i <= n; i++) {
				make_unbound_var(base + i);
				if (!s_eval(base + i, t + i)) return FALSE;
			}
			return unify(t1, base);
		}
	case TAG_CONS:
		base = heaptop; 
		heaptop = heaptop + 3;
		*base = addtag(TAG_CONS, base + 1);
		make_unbound_var(base + 1);
		make_unbound_var(base + 2);
		if (!s_eval(base + 1, head_of(t))) return FALSE;
		if (!s_eval(base + 2,  tail_of(t))) return FALSE;
		return unify(t1, base);
	case TAG_DAEMON:
		fatal("meta_5");
	default:
		printf("%x, tag %x\n", *t, tag(*t));
		fatal("meta_1");
	}
}

int *check_eval_var(t) /*** args to eval must have real locations ***/
int *t;
{
int *tmp;
	if (is_heap_ptr(t)) return t;
	tmp = heaptop++;
	if (is_unbound_var(*t)) {
		make_bound_var(t, tmp);
		make_unbound_var(tmp);
		push_check_trail(BTK_BIND, t);
	} else make_bound_var(tmp, *t);
	return tmp;
}

suspend_eval(t1, t2)
int *t1, *t2;
{
int *v, *d;
int result;
	if (v = already_has_eval(t2)) { 
		result = unify(v, t1); 
		return result;
	}
	d = make_delay_cell(t1, t2); /*** suspend t1 = eval(t2) ***/
	make_daemon(t2, d);
	return TRUE;
}

make_daemon(t, d)
int *t, *d;
{
int *tmp, *base;
	if (*t == TAG_DAEMON) {
fatal("think again!");
		tmp = (int *) *(t + 1);
		base = heaptop;
		heaptop = heaptop + 2;
		make_bound_var(t, base);
		push_check_trail(BTK_DBIND, t); /*** remove a DAEMON tag ***/
		*base = TAG_DAEMON;
		make_bound_var(base + 1, make_cons(d, tmp));
	} else {
		base = heaptop;
		heaptop = heaptop + 2;
		make_bound_var(t, base);
		push_check_trail(BTK_BIND, t); /*** add a (DAEMON) binding ***/
		*base = TAG_DAEMON;
		make_bound_var(base + 1, d);
	}
}


int *make_delay_cell(t1, t2)
int *t1, *t2;
{
int *base;
	base = heaptop;
	heaptop = heaptop + 2;
	*base = addtag(TAG_MISC, EVALVAL);
	make_bound_var(base + 1, addtag(TAG_MISC, solve_eval(t1, t2)));
	return base;
}

int *already_has_eval(t)
int *t;
{
int *tmp, *d;
NL_EQN_ptr nl_eqn;
	t = findbind(t);
	if (tag(*t) != TAG_DAEMON) return NULL;
	for (tmp = findbind(t + 1); tag(*tmp) == TAG_CONS; 
		 tmp = findbind(((int *)(pmask(*tmp))) + 1)) {
			d = findbind(pmask(*tmp));
			if (mask(*d) == EVALVAL) {
				nl_eqn = (NL_EQN_ptr) pmask(*(d + 1));
				return (int *) nl_eqn->params1->id0;
			}
	}
	if (mask(*tmp) == EVALVAL) {
		nl_eqn = (NL_EQN_ptr) pmask(*(tmp + 1));
		return (int *) nl_eqn->params1->id0;
	}
	return NULL;
}

make_runable(t)
int *t;
{
int *tmp, *d;
	for (tmp = findbind(t); tag(*tmp) == TAG_CONS; 
		 tmp = findbind(pmask(*tmp) + 1)) {
			d = findbind(pmask(*tmp));
			add_runable(d);
	}
	add_runable(tmp);
}

add_runable(t)
int *t;
{
int *base;
	if (mask(*t) == EVALVAL) {
			base = heaptop;
			heaptop = heaptop + 6;
			*base = addtag(TAG_CONS, base + 1);
			make_bound_var(base + 1, base + 3);
			make_bound_var(base + 2, runable);
			*(base + 3) = *t;
			*(base + 4) = *(t + 1);
			*(base + 5) = *(t + 2);
			runable = base;
			have_runable = TRUE;
	}
}

wake_runable()
{
int *tmp, *d, *r, *t1, *t2;
NL_EQN_ptr nl_eqn;
	have_runable = FALSE;
	r = runable;
	runable = (int *) addtag(TAG_NIL, EMPTYLIST);
	for (tmp = findbind(r); tag(*tmp) == TAG_CONS; 
		 tmp = findbind(((int *)(pmask(*tmp))) + 1)) {
			d = findbind(pmask(*tmp));
			if (mask(*d) == EVALVAL) {
				nl_eqn = (NL_EQN_ptr) pmask(*(d + 1));
				t1 = (int *) nl_eqn->params1->id0;			
				t2 = (int *) nl_eqn->params1->id1;
				push_change_nl_eqn(SOLVER_EVAL, 1, nl_eqn);
				nl_eqn->type = WOKEN;
				nlin_count--;
				if (!s_eval(t1, t2)) return FALSE;
			}
	}
	return TRUE;
}

daemons_remaining() /*** bug? ***/
{
int *h;
	for (h = heap; h != heaptop; h++) {
		if (tag(*h) == TAG_DAEMON) return TRUE;
	}
	return FALSE;
}

setup_eqn(t1, t)
int *t1, *t;
{
int *base, *base1;
	switch (mask(*t)) {
	case HAT_PLUSVAL:
	case HAT_MINUSVAL:
	case HAT_MULTVAL:
	case HAT_DIVVAL:
	case HAT_MINVAL:
	case HAT_MAXVAL:
	case HAT_POWVAL:
		base = heaptop;
		base1 = base + 1;
		heaptop = heaptop + 2;
		make_unbound_var(base);
		make_unbound_var(base1);
		if (!s_eval(base, t + 1)) return FALSE;
		if (!s_eval(base1, t + 2)) return FALSE;
		t1 = findbind(t1);
		if (!set_lhs_arith(t1)) return FALSE;
		check_tag_par(base);
		check_tag_par(base1);
		switch (mask(*t)) {
		case HAT_PLUSVAL:
			init_eqn();
			s_evar(-1.0, mask(*t1));
			s_evar(1.0, mask(*base));
			s_evar(1.0, mask(*base1));
			return s_econ(0.0);
		case HAT_MINUSVAL:
			init_eqn();
			s_evar(-1.0, mask(*t1));
			s_evar(1.0, mask(*base));
			s_evar(-1.0, mask(*base1));
			return s_econ(0.0);
		case HAT_MULTVAL:
			return s_mult(1.0, mask(*t1), mask(*base), mask(*base1));
		case HAT_DIVVAL:
			return s_mult(1.0, mask(*base), mask(*t1), mask(*base1));
		case HAT_MAXVAL:
			return s_max(mask(*t1), mask(*base), mask(*base1));
		case HAT_MINVAL:
			return s_min(mask(*t1), mask(*base), mask(*base1));
		case HAT_POWVAL:
			return s_pow(mask(*t1), mask(*base), mask(*base1));
		default:
			fatal("meta_3");
		}
	case HAT_U_MINUSVAL:
	case HAT_SINVAL:
	case HAT_COSVAL:
	case HAT_EVALVAL:
	case HAT_ABSVAL:
	case HAT_ARCSINVAL:
	case HAT_ARCCOSVAL:
		base = heaptop++;
		make_unbound_var(base);
		if (!s_eval(base, t + 1)) return FALSE;
		switch (mask(*t)) {
		case HAT_U_MINUSVAL:
			t1 = findbind(t1);
			if (!set_lhs_arith(t1)) return FALSE;
			check_tag_par(base);
			init_eqn();
			s_evar(1.0, mask(*t1));
			s_evar(1.0, mask(*base));
			return s_econ(0.0);
		case HAT_SINVAL:
			t1 = findbind(t1);
			if (!set_lhs_arith(t1)) return FALSE;
			check_tag_par(base);
			return s_sin(mask(*t1),mask(*base));
		case HAT_ARCSINVAL:
			t1 = findbind(t1);
			if (!set_lhs_arith(t1)) return FALSE;
			check_tag_par(base);
			return s_arcsin(mask(*t1),mask(*base));
		case HAT_COSVAL:
			t1 = findbind(t1);
			if (!set_lhs_arith(t1)) return FALSE;
			check_tag_par(base);
			return s_cos(mask(*t1),mask(*base));
		case HAT_ARCCOSVAL:
			t1 = findbind(t1);
			if (!set_lhs_arith(t1)) return FALSE;
			check_tag_par(base);
			return s_arccos(mask(*t1),mask(*base));
		case HAT_ABSVAL:
			t1 = findbind(t1);
			if (!set_lhs_arith(t1)) return FALSE;
			check_tag_par(base);
			return s_abs(mask(*t1), mask(*base));
		case HAT_EVALVAL:
			base1 = heaptop++;
			make_unbound_var(base1);
			if (!s_eval(base1, t + 1)) return FALSE;
			return s_eval(t1, base1);
		default:
			fatal("meta_4");
		}
	case HAT_QUOTEVAL: return unify(t1, t + 1);
	default: fatal("meta_2");
	}
	return TRUE;
 FAIL:
	return FALSE; /* type clash */
}

set_lhs_arith(t)
int *t;
{
	if (is_unbound_var(*t)) { 
		*t = addtag(TAG_PAR, ++solver_id); 
		push_check_trail(BTK_BIND, t); 
	} else if (is_daemon(t)) {
		make_bound_var(t, addtag(TAG_PAR, ++solver_id));
		push_check_trail(BTK_DBIND, t);
		make_runable(t + 1);
	} else if (!is_param(t)) return FALSE;
	return TRUE;
}
