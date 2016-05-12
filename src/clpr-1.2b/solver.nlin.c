/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: solver.nlin.c                                        *
 ***************************************************************/

#include "standard.h"
#include "config.h"
#include "emul.h"
#include "solver.h"

NL_EQN_ptr nl_eqn_top = NULL;
extern int stamp, trtop, **trail;

/*---------------------------------------------------------------------------*/

NL_EQN_ptr solve_eval(t, v) /*** t = eval(v), wakeup() in meta.c ***/
int *t, *v;
{
NL_EQN_ptr nl_eqn;
NL_PARAMS1_ptr params1;
NL_PARAMS2_ptr params2;
	nlin_count++;
	malloc_NL_EQN(nl_eqn);
	malloc_NL_PARAMS1(params1);
	malloc_NL_PARAMS2(params2);
	nl_eqn->next = nl_eqn_top;
	nl_eqn->time_stamp = stamp;
	nl_eqn->type = SOLVER_EVAL;
	nl_eqn->partner = NULL;
	nl_eqn->params1 = params1;
	nl_eqn->params2 = params2;
	params1->id0 = (int) t;
	params1->id1 = (int) v;
	params1->id2 = 0;
	params1->mark = 0;
	params2->occ0 = params2->occ1 = params2->occ2 = NULL;
	nl_eqn_top = nl_eqn;
	push_trail(BTK_NLIN, nl_eqn);
	return nl_eqn;
}

solve_mult(v0, v1, v2, c) /*** v0 = c * v1 * v2 ***/
int v0, v1, v2;
double c;
{
NL_EQN_ptr nl_eqn;
	stats_count(200);
	nl_eqn = push_nl_eqn(SOLVER_MULT, v0, v1, v2, c, NULL);
	nl_eqn->params2->occ0 = NULL;
	nl_eqn->params2->occ1 = insert_nl_occ(SOLVER_MULT, v1, nl_eqn, 1);
	nl_eqn->params2->occ2 = insert_nl_occ(SOLVER_MULT, v2, nl_eqn, 2);
	return TRUE;
}

solve_minmax(type, v0, v1, v2, c)
int type, v0, v1, v2;
double c;
{
NL_EQN_ptr nl_eqn;
	nl_eqn = push_nl_eqn(type, v0, v1, v2, c, NULL);
	switch (type) {
		case SOLVER_MIN: 
		case SOLVER_MAX: 
			nl_eqn->params2->occ0 = NULL;
			nl_eqn->params2->occ1 = insert_nl_occ(type, v1, nl_eqn, 1);
			nl_eqn->params2->occ2 = insert_nl_occ(type, v2, nl_eqn, 2);
			break;
		case SOLVER_MIN1: 
		case SOLVER_MAX1: 
			nl_eqn->params2->occ0 = NULL;
			nl_eqn->params2->occ1 = NULL;
			nl_eqn->params2->occ2 = insert_nl_occ(type, v2, nl_eqn, 2);
			break;
		case SOLVER_MIN2: 
		case SOLVER_MAX2: 
			nl_eqn->params2->occ0 = NULL;
			nl_eqn->params2->occ1 = insert_nl_occ(type, v1, nl_eqn, 1);
			nl_eqn->params2->occ2 = NULL;
	}
	return TRUE;
}

solve_power(type, v0, v1, v2, c)
int type;
int v0, v1, v2;
double c;
{
NL_EQN_ptr nl_eqn;
	nl_eqn = push_nl_eqn(type, v0, v1, v2, c, NULL);
	switch (type) {
		case SOLVER_POW:
			nl_eqn->params2->occ0 = insert_nl_occ(SOLVER_POW, v0, nl_eqn, 0);
			nl_eqn->params2->occ1 = insert_nl_occ(SOLVER_POW, v1, nl_eqn, 1);
			nl_eqn->params2->occ2 = insert_nl_occ(SOLVER_POW, v2, nl_eqn, 2);
			break;
		case SOLVER_POW0:
			nl_eqn->params2->occ0 = NULL;
			nl_eqn->params2->occ1 = insert_nl_occ(SOLVER_POW0, v1, nl_eqn, 1);
			nl_eqn->params2->occ2 = insert_nl_occ(SOLVER_POW0, v2, nl_eqn, 2);
			break;
		case SOLVER_POW1:
			nl_eqn->params2->occ0 = insert_nl_occ(SOLVER_POW1, v0, nl_eqn, 0);
			nl_eqn->params2->occ1 = NULL;
			nl_eqn->params2->occ2 = insert_nl_occ(SOLVER_POW1, v2, nl_eqn, 2);
			break;
		case SOLVER_POW2:
			nl_eqn->params2->occ0 = insert_nl_occ(SOLVER_POW2, v0, nl_eqn, 0);
			nl_eqn->params2->occ1 = insert_nl_occ(SOLVER_POW2, v1, nl_eqn, 1);
			nl_eqn->params2->occ2 = NULL;
			break;
		case SOLVER_POW02:
			nl_eqn->params2->occ0 = NULL;
			nl_eqn->params2->occ1 = insert_nl_occ(SOLVER_POW02, v1, nl_eqn, 1);
			nl_eqn->params2->occ2 = NULL;
			break;
		default: fatal("61934");
	}
	return TRUE;
}

solve_absolute(type, v0, v1)
int type, v0, v1;
{
NL_EQN_ptr nl_eqn;
	nl_eqn = push_nl_eqn(type, v0, v1, 0, 0.0, NULL);
	switch (type) {
		case SOLVER_ABS:
			nl_eqn->params2->occ0 = insert_nl_occ(SOLVER_ABS, v0, nl_eqn, 0);
			nl_eqn->params2->occ1 = insert_nl_occ(SOLVER_ABS, v1, nl_eqn, 1);
			nl_eqn->params2->occ2 = NULL;
			break;
		case SOLVER_ABS0:
			nl_eqn->params2->occ0 = NULL;
			nl_eqn->params2->occ1 = insert_nl_occ(SOLVER_ABS0, v1, nl_eqn, 1);
			nl_eqn->params2->occ2 = NULL;
	}
	return TRUE;
}

solve_sin(type, v0, v1)
int type, v0, v1;
{
NL_EQN_ptr nl_eqn;
	nl_eqn = push_nl_eqn(type, v0, v1, 0, 0.0, NULL);
	switch (type) {
		case SOLVER_SIN:
			nl_eqn->params2->occ0 = insert_nl_occ(SOLVER_SIN, v0, nl_eqn, 0);
			nl_eqn->params2->occ1 = insert_nl_occ(SOLVER_SIN, v1, nl_eqn, 1);
			nl_eqn->params2->occ2 = NULL;
			break;
		case SOLVER_SIN0:
			nl_eqn->params2->occ0 = NULL;
			nl_eqn->params2->occ1 = insert_nl_occ(SOLVER_SIN0, v1, nl_eqn, 1);
			nl_eqn->params2->occ2 = NULL;
			break;
	}
	return TRUE;
}

solve_cos(type, v0, v1)
int type, v0, v1;
{
NL_EQN_ptr nl_eqn;
	nl_eqn = push_nl_eqn(type, v0, v1, 0, 0.0, NULL);
	switch (type) {
		case SOLVER_COS:
			nl_eqn->params2->occ0 = insert_nl_occ(SOLVER_COS, v0, nl_eqn, 0);
			nl_eqn->params2->occ1 = insert_nl_occ(SOLVER_COS, v1, nl_eqn, 1);
			nl_eqn->params2->occ2 = NULL;
			break;
		case SOLVER_COS0:
			nl_eqn->params2->occ0 = NULL;
			nl_eqn->params2->occ1 = insert_nl_occ(SOLVER_COS0, v1, nl_eqn, 1);
			nl_eqn->params2->occ2 = NULL;
			break;
	}
	return TRUE;
}

solve_arcsin(v0, v1) /*** v0 = c * v1 * v2 ***/
int v0, v1;
{
NL_EQN_ptr nl_eqn;
	nl_eqn = push_nl_eqn(SOLVER_ARCSIN, v0, v1, 0, 0.0, NULL);
	nl_eqn->params2->occ2 = NULL;
	nl_eqn->params2->occ0 = insert_nl_occ(SOLVER_ARCSIN, v0, nl_eqn, 0);
	nl_eqn->params2->occ1 = insert_nl_occ(SOLVER_ARCSIN, v1, nl_eqn, 1);
	return TRUE;
}

solve_arccos(v0, v1) /*** v0 = c * v1 * v2 ***/
int v0, v1;
{
NL_EQN_ptr nl_eqn;
	nl_eqn = push_nl_eqn(SOLVER_ARCCOS, v0, v1, 0, 0.0, NULL);
	nl_eqn->params2->occ2 = NULL;
	nl_eqn->params2->occ0 = insert_nl_occ(SOLVER_ARCCOS, v0, nl_eqn, 0);
	nl_eqn->params2->occ1 = insert_nl_occ(SOLVER_ARCCOS, v1, nl_eqn, 1);
	return TRUE;
}

/*-----------------------------------------------nl_eqn/nl_occ handling -----*/

push_change_nl_eqn(old_type, pos, nl_eqn0)
int old_type, pos;
NL_EQN_ptr nl_eqn0;
{
NL_EQN_ptr nl_eqn;
	stats_count(206);
	malloc_NL_EQN(nl_eqn);
	nl_eqn->next = nl_eqn_top;
	nl_eqn->time_stamp = pos; /*** overload ***/
	nl_eqn->type = old_type;
	nl_eqn->partner = nl_eqn0;
	nl_eqn->params1 = NULL;
	nl_eqn->params2 = NULL;
	nl_eqn_top = nl_eqn;
	push_trail(BTK_NLIN, nl_eqn);
}

NL_EQN_ptr push_nl_eqn(type, v0, v1, v2, c, nl_eqn0)
int type, v0, v1, v2;
double c;
NL_EQN_ptr nl_eqn0;
{
NL_EQN_ptr nl_eqn;
NL_PARAMS1_ptr params1;
NL_PARAMS2_ptr params2;
	stats_count(204);
	nlin_count++;
	malloc_NL_EQN(nl_eqn);
	malloc_NL_PARAMS1(params1);
	malloc_NL_PARAMS2(params2);
	nl_eqn->next = nl_eqn_top;
	nl_eqn->time_stamp = stamp;
	nl_eqn->type = type;
	nl_eqn->partner = nl_eqn0;
	nl_eqn->params1 = params1;
	nl_eqn->params2 = params2;
	params1->id0 = v0; 
	params1->id1 = v1; 
	params1->id2 = v2;
	params1->coef = c;
	params1->mark = 0;
	params2->occ0 = params2->occ1 = params2->occ2 = NULL;
	nl_eqn_top = nl_eqn;
	push_trail(BTK_NLIN, nl_eqn);
	return nl_eqn;
}

NL_OCC_ptr insert_nl_occ(type, v, nl_eqn, pos)
int type, v;
NL_EQN_ptr nl_eqn;
int pos;
{
NL_OCC_ptr occ, first_occ;
TAB_HDR_NODE_ptr hdr;
	stats_count(207);
	if (!(hdr = tableau[v])) {
		malloc_HDR(hdr);
		tableau[v] = hdr;
	}
	first_occ = hdr->nlin_occ;
	malloc_NL_OCC(occ);
	occ->next = first_occ;
	occ->prev = NULL;
	occ->type = type;
	occ->id = v;
	occ->nl_eqn = nl_eqn;
	occ->pos = pos;
	if (first_occ) first_occ->prev = occ;
	hdr->nlin_occ = occ;
	return occ;
}	

delete_nl_occ(occ)
NL_OCC_ptr occ;
{
NL_OCC_ptr prev, next;
TAB_HDR_NODE_ptr hdr;

	stats_count(208);
	prev = occ->prev;
	next = occ->next;
	hdr = tableau[occ->id];
	if (prev) prev->next = next;
	else hdr->nlin_occ = next;
	if (next) next->prev = prev;
	else 
		if (null_hdr(hdr)) {
			free_HDR(hdr);
			tableau[occ->id] = NULL;
		}
	free_NL_OCC(occ);
}

/*------------------------------------------------ wakeup -------------------*/

wakeup(v, c) 
int v;
double c;
{
NL_OCC_ptr occ;
int flag;
	stats_count(214);
	if (!tableau[v]) return TRUE;
	occ = tableau[v]->nlin_occ;
	flag = TRUE;
	while (occ) {
		stats_count(261);
		switch (occ->nl_eqn->type) {
			case WOKEN:        return TRUE;
			case SOLVER_MULT:  flag = wakeup_mult(c, occ); break;
			case SOLVER_POW:   flag = wakeup_pow(c, occ); break; 
			case SOLVER_POW0:  flag = wakeup_pow0(c, occ); break; 
			case SOLVER_POW1:  flag = wakeup_pow1(c, occ); break; 
			case SOLVER_POW2:  flag = wakeup_pow2(c, occ); break;  
			case SOLVER_POW02: flag = wakeup_pow02(c, occ); break;  
			case SOLVER_MIN:   flag = wakeup_min(c, occ); break;	
			case SOLVER_MIN0:  fatal("63960");
			case SOLVER_MIN1:  flag = wakeup_min1(c, occ); break;	
			case SOLVER_MIN2:  flag = wakeup_min2(c, occ); break;	
			case SOLVER_MAX:   flag = wakeup_max(c, occ); break;	
			case SOLVER_MAX0:  fatal("63961");
			case SOLVER_MAX1:  flag = wakeup_max1(c, occ); break;	
			case SOLVER_MAX2:  flag = wakeup_max2(c, occ); break;	
			case SOLVER_ABS:   flag = wakeup_abs(c, occ); break;
			case SOLVER_ABS0:  flag = wakeup_abs0(c, occ); break;
			case SOLVER_SIN:   flag = wakeup_sin(c, occ); break;
			case SOLVER_SIN0:  flag = wakeup_sin0(c, occ); break;
			case SOLVER_COS:   flag = wakeup_cos(c, occ); break;
			case SOLVER_COS0:  flag = wakeup_cos0(c, occ); break;
			case SOLVER_ARCSIN: flag = wakeup_arcsin(c, occ); break;
			case SOLVER_ARCCOS: flag = wakeup_arccos(c, occ); break;
			default:          fatal("63962");
		}
		if (!flag) return FALSE;
		occ = occ->next;
	}
	return TRUE;
}

wakeup_mult(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
NL_PARAMS1_ptr params1;
int v0, v1, v2;
double c99;
	stats_count(209);
	nl_eqn = occ->nl_eqn;
	params1 = nl_eqn->params1;
	v0 = params1->id0; 
	v1 = params1->id1; 
	v2 = params1->id2;
	c99 = params1->coef;
	nl_eqn->type = WOKEN;
	nlin_count--;
	if (occ->pos == 1) {
		push_change_nl_eqn(SOLVER_MULT, 1, nl_eqn);
		delete_nl_occ(nl_eqn->params2->occ2);
		if (v1 == v2) return solve_eqn_1(v0, c99 * c * c);
		return solve_eqn_2(v0, v2, c99 * c); 
	}
	push_change_nl_eqn(SOLVER_MULT, 2, nl_eqn);
	delete_nl_occ(nl_eqn->params2->occ1);
	if (v1 == v2) return solve_eqn_1(v0, c99 * c * c);
	return solve_eqn_2(v0, v1, c99 * c); 
}

wakeup_pow(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn, nl_eqn99;
int pos;
	stats_count(210);
	nl_eqn = occ->nl_eqn;
	push_change_nl_eqn(SOLVER_POW, (pos = occ->pos), (nl_eqn = occ->nl_eqn));
	switch (pos) {
		case 2:
			if (is_zero(c)) {
				nl_eqn->type = WOKEN;
				nlin_count--;
				delete_nl_occ(nl_eqn->params2->occ0);
				delete_nl_occ(nl_eqn->params2->occ1);
				return solve_eqn_1(nl_eqn->params1->id0, 1.0);
			}
			if (is_equal(c, 1.0)) {
				nl_eqn->type = WOKEN;
				nlin_count--;
				delete_nl_occ(nl_eqn->params2->occ0);
				delete_nl_occ(nl_eqn->params2->occ1);
				return 
					solve_eqn_2(
						nl_eqn->params1->id0, nl_eqn->params1->id1, 1.0);
			}
			nl_eqn->type = SOLVER_POW2;
			nl_eqn->params1->coef = c;
			return TRUE;
		case 1:
			if (is_equal(c, 1.0)) {
				nl_eqn->type = WOKEN;
				nlin_count--;
				delete_nl_occ(nl_eqn->params2->occ0);
				delete_nl_occ(nl_eqn->params2->occ2);
				return solve_eqn_1(nl_eqn->params1->id0, c); /* 0 = 0^0 ? */
			}
			nl_eqn->type = SOLVER_POW1;
			nl_eqn->params1->coef = c;
			return TRUE;
		case 0:
			if (is_zero(c)) {
				nl_eqn->type = WOKEN;
				nlin_count--;
				delete_nl_occ(nl_eqn->params2->occ1);
				delete_nl_occ(nl_eqn->params2->occ2);
				return solve_eqn_1(nl_eqn->params1->id1, 0.0);
			}
			nl_eqn->type = SOLVER_POW0;
			nl_eqn->params1->coef = c;
			return TRUE;
		default:
			fatal("56180");		
	}
}

wakeup_pow0(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
int pos;
double c99;
	stats_count(210);
	nl_eqn = occ->nl_eqn;
	c99 = nl_eqn->params1->coef;
	pos = occ->pos;
	if (pos == 2 && !is_zero(c) && !is_equal(c, 1.0)) {
		push_change_nl_eqn(SOLVER_POW0, pos, nl_eqn);
		nl_eqn->type = SOLVER_POW02; /* special case */
		return TRUE;
	}
	push_change_nl_eqn(SOLVER_POW0, pos, nl_eqn);
	nl_eqn->type = WOKEN;
	nlin_count--;
	if (pos == 1) {
		delete_nl_occ(nl_eqn->params2->occ2);
		return solve_eqn_1(nl_eqn->params1->id2, log(c99)/log(c));
	} else {
		if (is_zero(c)) return is_equal(c99, 1.0);
		delete_nl_occ(nl_eqn->params2->occ1);
		if (is_equal(c, 1.0)) 
			return solve_eqn_1(nl_eqn->params1->id1, c99);
		fatal("78912");
	}
}

wakeup_pow1(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
NL_PARAMS1_ptr params1;
int pos;
double c99;
	stats_count(210);
	nl_eqn = occ->nl_eqn;
	c99 = nl_eqn->params1->coef;
	push_change_nl_eqn(SOLVER_POW1, (pos = occ->pos), nl_eqn);
	nl_eqn->type = WOKEN;
	nlin_count--;
	if (pos == 2) {
		delete_nl_occ(nl_eqn->params2->occ0);
		return solve_eqn_1(nl_eqn->params1->id0, pow(c99, c));
	} else {
		delete_nl_occ(nl_eqn->params2->occ2);
		return solve_eqn_1(nl_eqn->params1->id2, log(c) / log(c99));
	}
}
			
wakeup_pow2(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
int pos;
double c99;
	stats_count(210);
	nl_eqn = occ->nl_eqn;
	c99 = nl_eqn->params1->coef;
	pos = occ->pos;
	if (pos == 0) {
		push_change_nl_eqn(SOLVER_POW2, pos, nl_eqn);
		nl_eqn->type = SOLVER_POW02; /* special case */
		return TRUE;
	} else {
		push_change_nl_eqn(SOLVER_POW2, pos, nl_eqn);
		nl_eqn->type = WOKEN;
		nlin_count--;
		delete_nl_occ(nl_eqn->params2->occ0);
		return solve_eqn_1(nl_eqn->params1->id0, pow(c, c99));
	}
}
			
wakeup_pow02(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
int pos, v0, v2;
double c0, c2;
	stats_count(210);
	nl_eqn = occ->nl_eqn;
	push_change_nl_eqn(SOLVER_POW02, (pos = occ->pos), nl_eqn);
	nl_eqn->type = WOKEN;
	nlin_count--;
	v0 = nl_eqn->params1->id0;
	if (!is_ground(v0, &c0)) fatal("61821");
	v2 = nl_eqn->params1->id2;
	if (!is_ground(v2, &c2)) fatal("61821");
	return (is_equal(c0, pow(c, c2)));
}

wakeup_min(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
int pos;
	stats_count(211);
	nl_eqn = occ->nl_eqn;
	push_change_nl_eqn(SOLVER_MIN, (pos = occ->pos), nl_eqn);
	if (pos == 1) nl_eqn->type = SOLVER_MIN1; 
	else nl_eqn->type = SOLVER_MIN2; 
	nl_eqn->params1->coef = c;
	return TRUE;
}

wakeup_max(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
int pos;
	stats_count(211);
	nl_eqn = occ->nl_eqn;
	push_change_nl_eqn(SOLVER_MAX, (pos = occ->pos), nl_eqn);

	if (pos == 1) nl_eqn->type = SOLVER_MAX1; 
	else nl_eqn->type = SOLVER_MAX2; 
	nl_eqn->params1->coef = c;
	return TRUE;
}

wakeup_min1(c2, occ)
double c2;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
double c1;
	stats_count(211);
	nl_eqn = occ->nl_eqn;
	c1 = nl_eqn->params1->coef;
	push_change_nl_eqn(SOLVER_MIN1, 1, nl_eqn);
	nl_eqn->type = WOKEN;
	nlin_count--;
	return solve_eqn_1(nl_eqn->params1->id0, (c1 < c2 ? c1 : c2));
}

wakeup_max1(c2, occ)
double c2;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
double c1;
	stats_count(211);
	nl_eqn = occ->nl_eqn;
	c1 = nl_eqn->params1->coef;
	push_change_nl_eqn(SOLVER_MAX1, 1, nl_eqn);
	nl_eqn->type = WOKEN;
	nlin_count--;
	return solve_eqn_1(nl_eqn->params1->id0, (c1 > c2 ? c1 : c2));
}

wakeup_min2(c1, occ)
double c1;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
double c2;
	stats_count(211);
	nl_eqn = occ->nl_eqn;
	c2 = nl_eqn->params1->coef;
	push_change_nl_eqn(SOLVER_MIN2, 2, nl_eqn);
	nl_eqn->type = WOKEN;
	nlin_count--;
	return solve_eqn_1(nl_eqn->params1->id0, (c1 < c2 ? c1 : c2));
}

wakeup_max2(c1, occ)
double c1;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
double c2;
	stats_count(211);
	nl_eqn = occ->nl_eqn;
	c2 = nl_eqn->params1->coef;
	push_change_nl_eqn(SOLVER_MAX2, 2, nl_eqn);
	nl_eqn->type = WOKEN;
	nlin_count--;
	return solve_eqn_1(nl_eqn->params1->id0, (c1 > c2 ? c1 : c2));
}

wakeup_abs(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
int pos;
	stats_count(212);
	nl_eqn = occ->nl_eqn;
	push_change_nl_eqn(SOLVER_ABS, (pos = occ->pos), nl_eqn);
	if (pos == 1) {
		nl_eqn->type = WOKEN;
		nlin_count--;
		delete_nl_occ(nl_eqn->params2->occ0);
		return solve_eqn_1(nl_eqn->params1->id0, fabs(c));
	}
	if (c > EPS) {
		nl_eqn->type = SOLVER_ABS0;
		nl_eqn->params1->coef = c;
		return TRUE;
	}
	if (is_zero(c)) {
		nl_eqn->type = WOKEN;
		nlin_count--;
		delete_nl_occ(nl_eqn->params2->occ1);
		return solve_eqn_1(nl_eqn->params1->id1, 0.0);
	}
	return FALSE;
}

wakeup_abs0(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
	stats_count(213);
	nl_eqn = occ->nl_eqn;
	push_change_nl_eqn(SOLVER_ABS0, 1, nl_eqn);
	nl_eqn->type = WOKEN;
	nlin_count--;
	return (is_equal(nl_eqn->params1->coef, fabs(c)));
}

wakeup_sin(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
int pos;
	stats_count(213);
	nl_eqn = occ->nl_eqn;
	push_change_nl_eqn(SOLVER_SIN, (pos = occ->pos), nl_eqn);
	if (pos == 1) {
		nl_eqn->type = WOKEN;
		nlin_count--;
		delete_nl_occ(nl_eqn->params2->occ0);
		if (c != 0.0) return solve_eqn_1(nl_eqn->params1->id0, sin(c));
		else return solve_eqn_1(nl_eqn->params1->id0, 0.0);
	}
	if (c < -1.0 || c > 1.0) return FALSE;
	nl_eqn->type = SOLVER_SIN0;
	nl_eqn->params1->coef = c;
	return TRUE;
}

wakeup_sin0(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
	stats_count(213);
	nl_eqn = occ->nl_eqn;
	push_change_nl_eqn(SOLVER_SIN0, 1, nl_eqn);
	nl_eqn->type = WOKEN;
	nlin_count--;
	return (is_equal(nl_eqn->params1->coef, sin(c)));
}

wakeup_cos(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
int pos;
	stats_count(213);
	nl_eqn = occ->nl_eqn;
	push_change_nl_eqn(SOLVER_COS, (pos = occ->pos), nl_eqn);
	if (pos == 1) {
		nl_eqn->type = WOKEN;
		nlin_count--;
		delete_nl_occ(nl_eqn->params2->occ0);
		if (c != 0.0) return solve_eqn_1(nl_eqn->params1->id0, cos(c));
		else return solve_eqn_1(nl_eqn->params1->id0, 1.0);
	}
	if (c < -1.0 || c > 1.0) return FALSE;
	nl_eqn->type = SOLVER_COS0;
	nl_eqn->params1->coef = c;
	return TRUE;
}

wakeup_cos0(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
	stats_count(213);
	nl_eqn = occ->nl_eqn;
	push_change_nl_eqn(SOLVER_COS0, 1, nl_eqn);
	nl_eqn->type = WOKEN;
	nlin_count--;
	return (is_equal(nl_eqn->params1->coef, cos(c)));
}

wakeup_arcsin(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
NL_PARAMS1_ptr params1;
int v0, v1;
	nl_eqn = occ->nl_eqn;
	params1 = nl_eqn->params1;
	v0 = params1->id0; 
	v1 = params1->id1; 
	nl_eqn->type = WOKEN;
	nlin_count--;
	if (occ->pos == 0) {
		push_change_nl_eqn(SOLVER_ARCSIN, 0, nl_eqn);
		delete_nl_occ(nl_eqn->params2->occ1);
		if (c >= -PI_2_VAL && c <= PI_2_VAL) {
			if (c != 0.0) return solve_eqn_1(v1, sin(c));
			else return solve_eqn_1(v1, 0.0);
		} else if (c < 0 && c >= -PI_2_VAL-EPS) return solve_eqn_1(v1, -1.0);
		else if (c > 0 && c <= PI_2_VAL+EPS) return solve_eqn_1(v1, 1.0);
		else {
			warn_err("Out of range value outside [-pi/2, pi/2] to arcsin");
			return FALSE; 
		}
	}
	push_change_nl_eqn(SOLVER_ARCSIN, 1, nl_eqn);
	delete_nl_occ(nl_eqn->params2->occ0);
	if (c <= 1 && c >= -1 ) {
		if (c != 0.0) return solve_eqn_1(v0, asin(c));
		else return solve_eqn_1(v0, 0.0);
	}
	else if (c > 0 && c <= 1+EPS) return solve_eqn_1(v0, PI_2_VAL);
	else if (c < 0 && c >= -1-EPS) return solve_eqn_1(v0, -PI_2_VAL); 
	else {
		warn_err("Out of range value outside [-1, 1] to arcsin");
		return FALSE; 
	}
}

wakeup_arccos(c, occ)
double c;
NL_OCC_ptr occ;
{
NL_EQN_ptr nl_eqn;
NL_PARAMS1_ptr params1;
int v0, v1;
	nl_eqn = occ->nl_eqn;
	params1 = nl_eqn->params1;
	v0 = params1->id0; 
	v1 = params1->id1; 
	nl_eqn->type = WOKEN;
	nlin_count--;
	if (occ->pos == 0) {
		push_change_nl_eqn(SOLVER_ARCCOS, 0, nl_eqn);
		delete_nl_occ(nl_eqn->params2->occ1);
		if (c >= 0 && c <= PI_VAL) {
			if (c != 0.0) return solve_eqn_1(v1, cos(c));
			else return solve_eqn_1(v1, 1.0);
		} else if (c < 0 && c >= -EPS) return solve_eqn_1(v1, 1.0);
		else if (c > 0 && c <= PI_VAL+EPS) return solve_eqn_1(v1, -1.0);
		else {
			warn_err("Out of range value outside [0, pi] to arccos");
			return FALSE; 
		}
	}
	push_change_nl_eqn(SOLVER_ARCCOS, 1, nl_eqn);
	delete_nl_occ(nl_eqn->params2->occ0);
	if (c <= 1 && c >= -1 ) {
		if (c != 1.0) return solve_eqn_1(v0, acos(c));
		else solve_eqn_1(v0, 0.0);
	} else if (c > 0 && c <= 1+EPS) return solve_eqn_1(v0, 0.0);
	else if (c < 0 && c >= -1-EPS) return solve_eqn_1(v0, PI_VAL); 
	else {
		warn_err("Out of range value outside [-1, 1] to arccos");
		return FALSE; 
	}
}


