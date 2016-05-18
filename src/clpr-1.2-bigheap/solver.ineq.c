/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: solver.ineq.c                                        *
 ***************************************************************/

#include "standard.h"
#include "config.h"
#include "emul.h"
#include "solver.h"

#define zero_format(eqn) \
	(is_zero((eqn)->constant) && is_zero((eqn)->params->epsilon))

#define neg_format(eqn) \
	((eqn->constant > EPS) || \
		(is_zero(eqn->constant) && eqn->params->epsilon > EPS))

#define flip_eqn(eqn) { \
	mult_eqn(INEQ, eqn, -1.0); \
}

#define check_slack_id(i) { \
	if (i <= solver_id) fatal("too many solver variables"); \
}

static int basic_var;
static EQN_ptr exit_eqn;
static double pivot_number;
static ENTRY_ptr pivot_entry;
static EQN_ptr art_eqn;
static ENTRY_ptr prev_pivot_entry;

extern int stamp;
extern int TRACE;

int IMPLICIT = TRUE;
int PARTIAL_IMPLICIT = FALSE;

int implicit_eqn_buf[MAX_IMPLICIT];
int implicit_top = 0;
static int depth_implicit = 0;

extern int CLAM_TRACE;
/*---------------------------------------------------------------------------*/

solve_inequality(strict, eqn) /*** eqn is read-only ***/
int strict;
EQN_ptr eqn;
{
EQN_ptr eqn2;
EQN_PARAMS_ptr params;
ENTRY_ptr entry;
TAB_HDR_NODE_ptr hdr;
int flag, dummy;

	stats_count(180);
	slack_id--;
	check_slack_id(slack_id);
	backup_null_ineq(slack_id);
	malloc_EQN(eqn2);
	malloc_EQN_PARAMS(params);
	stats_count(126);
	eqn2->next = NULL;
	eqn2->time_stamp = stamp;
	eqn2->id = slack_id;
	eqn2->constant = eqn->constant;
	eqn2->params = params;
	params->basic = 0;
	params->epsilon = (strict ? -1.0 : 0.0);
	if (!(hdr = tableau[slack_id])) {
		malloc_HDR(hdr);
		tableau[slack_id] = hdr;
	}
	if (IMPLICIT) save_orig_ineq(eqn);
	hdr->eqn = eqn2;
	entry = eqn->next;
	while (entry) {
		add_entry(INEQ, eqn2, entry->id, entry->coef);
		entry = entry->next;
	}
	add_entry(INEQ, eqn2, slack_id, -1.0);

	if (IMPLICIT && destroyable(eqn2)) {
		if (PARTIAL_IMPLICIT) return some_implicits(eqn2);
		else return full_implicits(eqn2);
	}
	if (neg_format(eqn2)) 
		mult_eqn(INEQ, eqn2, -1.0);
	if (solve_ineq_tableau(slack_id, &dummy)) {
		return TRUE;
	} else return FALSE;
}

solve_ineq_tableau(art_row, destroyed)
int art_row, *destroyed;
{
TAB_HDR_NODE_ptr hdr;

	stats_count(112);
	*destroyed = FALSE;
	art_eqn = tableau[art_row]->eqn;
	loop {
		find_basic_var();
		if (!basic_var) return FALSE;
		else if (basic_var == -1) {
			*destroyed = TRUE;
			if (PARTIAL_IMPLICIT) return some_implicits(art_eqn);
			else return full_implicits(art_eqn);
		}
		find_exit_eqn();

		if (exit_eqn->time_stamp < stamp) {
			backup_ineq(exit_eqn);
			exit_eqn->time_stamp = stamp;
		}
		hdr = tableau[exit_eqn->params->basic];
		if (hdr) hdr->basic_eqn = 0;
		exit_eqn->params->basic = basic_var;
		if (!(hdr = tableau[basic_var])) {
			malloc_HDR(hdr);
			tableau[basic_var] = hdr;
		}
		hdr->basic_eqn = exit_eqn->id;
		if ((pivot_number = pivot_entry->coef) > EPS) {
			mult_eqn(INEQ, exit_eqn, 1.0 / pivot_number);
			pivot(1);
		} else {
			mult_eqn(INEQ, exit_eqn, -1.0 / pivot_number);
			pivot(-1);
		}
		if (exit_eqn == art_eqn) return TRUE;
	}
}

/*** Used for the equation case where we avoid doing the final pivot  ***/
/*** Thats the only difference from solve_ineq_tableau                ***/

solve_ineq_subs(art_row, destroyed)
int art_row, *destroyed;
{
TAB_HDR_NODE_ptr hdr;

	stats_count(112);
	*destroyed = FALSE;
	art_eqn = tableau[art_row]->eqn;
	loop {
		find_basic_var();
		if (!basic_var) return FALSE;
		else if (basic_var == -1) {
			*destroyed = TRUE;
			if (PARTIAL_IMPLICIT) return some_implicits(art_eqn);
			else return full_implicits(art_eqn);
		}
		stats_count(103);
		find_exit_eqn();
		if (exit_eqn == art_eqn) return TRUE;

		if (exit_eqn->time_stamp < stamp) {
			backup_ineq(exit_eqn);
			exit_eqn->time_stamp = stamp;
		}
		hdr = tableau[exit_eqn->params->basic];
		if (hdr) hdr->basic_eqn = 0;
		exit_eqn->params->basic = basic_var;
		if (!(hdr = tableau[basic_var])) {
			malloc_HDR(hdr);
			tableau[basic_var] = hdr;
		}
		hdr->basic_eqn = exit_eqn->id;
		if ((pivot_number = pivot_entry->coef) > EPS) {
			mult_eqn(INEQ, exit_eqn, 1.0 / pivot_number);
			pivot(1);
		} else {
			mult_eqn(INEQ, exit_eqn, -1.0 / pivot_number);
			pivot(-1);
		}
	}
}

/************************************************************
 * input: basic_var, pivot_entry, prev_pivot_entry, exit_eqn;
 ************************************************************/
pivot(flag)
int flag;
{
register OCC_ptr occ;
OCC_ptr occ99;
EQN_ptr eqn;
TAB_HDR_NODE_ptr hdr;
int i;
double c;

	if (!(hdr = tableau[basic_var])) return;
	occ = hdr->ineq_occ; 
	while (occ) {
		occ99 = occ->next;
		if ((i = occ->id) != exit_eqn->id) {
			eqn = tableau[i]->eqn;
			if (eqn->time_stamp < stamp) {
				backup_ineq(eqn);
				eqn->time_stamp = stamp;
			}
			c = delete_entry(INEQ, eqn, basic_var);

			/*** tmp_delete_entry(exit_eqn, pivot_entry) ***/
			if (prev_pivot_entry) prev_pivot_entry->next = pivot_entry->next;
			else exit_eqn->next = pivot_entry->next;
			
			if (flag > 0) add_eqns(INEQ, eqn, exit_eqn, -c);
			else add_eqns(INEQ, eqn, exit_eqn, c);

			/*** tmp_undelete_entry(exit_eqn) ***/
			if (prev_pivot_entry) {
				pivot_entry->next = prev_pivot_entry->next;
				prev_pivot_entry->next = pivot_entry;
			} else {
				pivot_entry->next = exit_eqn->next;
				exit_eqn->next = pivot_entry;
			}
			if (neg_format(eqn)) mult_eqn(INEQ, eqn, -1.0);
		}
		occ = occ99;
	}
}

/*******************************************************
 * Find_basic_var()
 *		input: art_eqn
 *      output: basic_var, pivot_entry, prev_pivot_entry;
 *******************************************************/

find_basic_var() /*** return -1 for implicits, 0 for fail ***/
{
register ENTRY_ptr entry, prev_entry;

AGAIN:
	prev_pivot_entry = pivot_entry = prev_entry = NULL;
	entry = art_eqn->next;
	while (entry) {
		if (entry->id < slack_id) {
			prev_pivot_entry = prev_entry;
			pivot_entry = entry;
			basic_var = entry->id;
			return;
		}
		if (entry->coef > EPS) {
			prev_pivot_entry = prev_entry;
			pivot_entry = entry;
		}
		prev_entry = entry;
		entry = entry->next;
	}
	if (pivot_entry) basic_var = pivot_entry->id;
	else if (IMPLICIT) basic_var = (zero_format(art_eqn) ? -1 : 0);
	else if (zero_format(art_eqn)) {
		flip_eqn(art_eqn);
		goto AGAIN;
	} else basic_var = 0;
}

/****************************************************************
 * Find_exit_eqn()
 *       input: art_eqn, basic_var, pivot_entry, prev_pivot_entry
 *      output: exit_eqn, pivot_entry, prev_pivot_entry
 ***************************************************************/

find_exit_eqn()
{
register ENTRY_ptr entry, prev_entry;
register OCC_ptr occ, occ99;
EQN_ptr eqn;
EQN_PARAMS_ptr art_params;
double min_c, min_eps, c, c1, e;

	pivot_number = pivot_entry->coef;
	exit_eqn = art_eqn;
	if (basic_var < slack_id) return;
	art_params = art_eqn->params;
/*** Tricky: only if we don't use implicits ***/
#ifdef TEST_PARTIAL_IMPLICIT /* New */
	if ((!IMPLICIT || PARTIAL_IMPLICIT) && is_zero(art_eqn->constant) 
			&& is_zero(art_params->epsilon)) 
		return;
#else
	if (!IMPLICIT && is_zero(art_eqn->constant) 
			&& is_zero(art_params->epsilon)) 
		return;
#endif
	/* used to be 0 but need to make this be preferred */
	art_params->basic = SOLVER_SZ;
	min_c = (c = art_eqn->constant) / pivot_number;
	min_eps = (art_params->epsilon) / pivot_number;

	occ = tableau[basic_var]->ineq_occ;
	while (occ) {
		occ99 = occ->next;
		eqn = tableau[occ->id]->eqn;
		if (eqn->params->basic < slack_id) goto CONTINUE;
		if (eqn == art_eqn) goto CONTINUE;

		/*** c1 = (entry = find_entry(eqn, basic_var))->coef; ***/
		entry = eqn->next;
		prev_entry = NULL;
		loop {
			if (entry->id == basic_var) break;
			prev_entry = entry;
			entry = entry->next;
		}
		if ((c1 = entry->coef) < EPS) goto CONTINUE;
		c = (eqn->constant / c1);
		e = (eqn->params->epsilon / c1);

		/* NOTE: **************************/
		/* CHECK BUG(?) should EPS be used in comparisons */
		if (c > min_c || 
		   (is_equal(c, min_c) && e > min_eps) ||
		   (is_equal(c, min_c) && is_equal(e, min_eps) && 
					eqn->params->basic < exit_eqn->params->basic)) {
/************
		if (c > min_c+EPS || 
		   (is_equal(c, min_c) && e > min_eps+EPS) ||
		   (is_equal(c, min_c) && is_equal(e, min_eps) && 
					eqn->params->basic < exit_eqn->params->basic)) {
************/
			exit_eqn = eqn;
			pivot_entry = entry;
			prev_pivot_entry = prev_entry;
			min_c = c;
			min_eps = e;
		}
		CONTINUE: occ = occ99;
	}
	art_params->basic = 0;
}

ineq_substitute(v0, eqn0) /*** subs v0 in tableau[] by eqn0 ***/
int v0;
EQN_ptr eqn0;
{
register ENTRY_ptr entry, entry99;
register OCC_ptr occ, occ99;
EQN_ptr eqn;
int i, flag, destroyed;
double c;

	stats_count(104);
	if (i = tableau[v0]->basic_eqn) {
		stats_count(105);
		eqn = tableau[i]->eqn;
		if (eqn->time_stamp < stamp) {
			backup_ineq(eqn);
			eqn->time_stamp = stamp;
		}
		eqn->params->basic = tableau[v0]->basic_eqn = 0;
		c = delete_entry(INEQ, eqn, v0);
		eqn->constant += c * eqn0->constant;
		entry = eqn0->next;
		while (entry) {
			entry99 = entry->next;
			add_entry(INEQ, eqn, entry->id, c * entry->coef);
			entry = entry99;
		}
		if (neg_format(eqn)) mult_eqn(INEQ, eqn, -1.0);
		else if (IMPLICIT && zero_format(eqn)) {
			if (solve_ineq_subs(i, &destroyed)) {
				if (destroyed) return TRUE;
				flip_eqn(tableau[i]->eqn);
				return solve_ineq_tableau(i, &destroyed);
			} else return FALSE;
		}
		return solve_ineq_tableau(i, &destroyed);
	}
	occ = tableau[v0]->ineq_occ;
	while (occ) { /*** no var in eqn0 is basic ***/
		occ99 = occ->next;
		eqn = tableau[occ->id]->eqn;
		if (eqn->time_stamp < stamp) {
			backup_ineq(eqn);
			eqn->time_stamp = stamp;
		}
		c = delete_entry(INEQ, eqn, v0);
		add_eqns(INEQ, eqn, eqn0, c);
		if (neg_format(eqn)) mult_eqn(INEQ, eqn, -1.0);
		occ = occ99;
	}
	return TRUE;
}

/*--------------------------------------------------- implicit eqns ---------*/

save_orig_ineq(eqn)	/*** save a COPY ***/
EQN_ptr eqn;
{
	if (tableau[slack_id]->next) free_eqn_nodes(tableau[slack_id]->next);
	tableau[slack_id]->next = (TAB_HDR_NODE_ptr) eqn;
}

destroyable(eqn)
EQN_ptr eqn;
{
ENTRY_ptr entry;
int sign;
	if (!zero_format(eqn)) return FALSE;
	entry = eqn->next;
	if (entry->coef > EPS) sign = 1; else sign = -1;
	for (entry = eqn->next; entry ; entry = entry->next) {
		if ((entry->id < slack_id) || (sign * entry->coef < -EPS)) 
			return FALSE;
	}
	return TRUE;
}

some_implicits(eqn)
EQN_ptr eqn;
{
register ENTRY_ptr entry, entry99;
register OCC_ptr occ, occ99;
EQN_ptr eqn2;
int i, v, flag;
double c;
int current_id;

	if (eqn->time_stamp < stamp) /* assumed no backup needed */ fatal("78412");
	if (!(entry = eqn->next)) return TRUE;
	current_id = eqn->id;
	while (entry) {
		entry99 = entry->next;
		v = entry->id;
		occ = tableau[v]->ineq_occ;
		while (occ) {
			occ99 = occ->next;
			if ((i = occ->id) != current_id) {
				eqn2 = tableau[i]->eqn;
				if (eqn2->time_stamp < stamp) {
					backup_ineq(eqn2);
					eqn2->time_stamp = stamp;
				}
				delete_entry(INEQ, eqn2, v);
			}
			occ = occ99;
		}
		if (implicit_top >= MAX_IMPLICIT-1) fatal("too many implicits");
		implicit_eqn_buf[implicit_top++] = v;
		delete_entry(INEQ, eqn, v);
		entry = entry99;
	}
	if (eqn->next != NULL) fatal("99667");

	/* Only send n-1 of the equations to the solver */
    /* We dont send the last such equation since it may not exist */

	implicit_top--;
	return TRUE;
}

parametrify_eqn(eqn)
EQN_ptr eqn;
{
EQN_ptr imp_scratch;
ENTRY_ptr entry;

	malloc_EQN(imp_scratch);
	imp_scratch->next = NULL;
	imp_scratch->id = 0;
	imp_scratch->constant = eqn->constant;
	imp_scratch->time_stamp = stamp;
	imp_scratch->params = NULL;
	entry = eqn->next;
	while (entry) {
		add_entry(EQ, imp_scratch, entry->id, entry->coef);
		entry = entry->next;
	}
	if (!imp_scratch->next) {
		if (is_zero(imp_scratch->constant)) {
			free_EQN(imp_scratch);	
			return check_implicits();
		} else fatal("boo boo");
	}
	return solve_parametric_eqn(imp_scratch, FALSE);
}

check_implicits() /*** one implicit at a time - recursively ***/
{
int v;
EQN_ptr eqn;
	if (implicit_top <= 0) return TRUE;
	v = implicit_eqn_buf[--implicit_top];
	if (!(eqn = (EQN_ptr) tableau[v]->next)) fatal("287233");
	return parametrify_eqn(eqn);
}

full_implicits(eqn)
EQN_ptr eqn;
{
ENTRY_ptr entry, entry99, first_entry;
EQN_ptr art_eqn;
int v, destroyed;
double coef;
int i;

	if (eqn->time_stamp < stamp) {
		/*** assumed it didn't need to be backed up ***/
		fatal("78413");
	}
	delete_row_occs(eqn);
	first_entry = entry = eqn->next;
	eqn->next = NULL;     /*** Make it invisible in the tableau ***/
	for (; entry; entry = entry->next) {
		v = entry->id;
		if (!find_implicit_row(v, &coef, &art_eqn)) { 
			delete_var(v);
			if (implicit_top >= MAX_IMPLICIT-1) fatal("too many implicits");
			implicit_eqn_buf[implicit_top++] = v;
		} else {
			/*** substitute out for v everywhere ***/
			if (art_eqn->time_stamp < stamp) {
				backup_ineq(art_eqn);
				art_eqn->time_stamp = stamp;
			}
			if (tableau[art_eqn->params->basic]) 
				tableau[art_eqn->params->basic]->basic_eqn = 0;
			art_eqn->params->basic = v;
			mult_eqn(INEQ, art_eqn, 1.0 / coef);
			exit_eqn = art_eqn;
			pivot(1);
			delete_entry(INEQ, art_eqn, v);
			art_eqn->params->basic = 0;
			if (!solve_ineq_tableau(art_eqn->id, &destroyed)) {
				fatal("93368");
			}
			if (implicit_top >= MAX_IMPLICIT-1) fatal("too many implicits");
			implicit_eqn_buf[implicit_top++] = v;			
		}
	}
	/* Only send n-1 of the equations to the solver */
    /* We dont send the last such equation since it may not exist */
	/* Tricky with the recursion but it should work */

	implicit_top--;
	entry = first_entry;
	while (entry) {
		entry99 = entry->next;
		free_ENTRY(entry);
		entry = entry99;
	}
	depth_implicit--;
	return TRUE;
}


delete_var(v) /*** Delete a non-basic variable from the tableau ***/
int v;
{
register OCC_ptr occ, occ99;
EQN_ptr eqn2;
int i;

	occ = tableau[v]->ineq_occ;
	while (occ) {
		occ99 = occ->next;
		i = occ->id;
		eqn2 = tableau[i]->eqn;
		if (eqn2->time_stamp < stamp) {
			backup_ineq(eqn2);
			eqn2->time_stamp = stamp;
		}
		delete_entry(INEQ, eqn2, v);
		occ = occ99;
	}
}

delete_row_occs(eqn) /*** Delete all the occs corresponding to this row ***/
EQN_ptr eqn;
{
register ENTRY_ptr entry;
int id;
	id = eqn->id;
	entry = eqn->next;
	while (entry) {
		delete_occ(INEQ, id, entry->id);
		entry = entry->next;
	}
}

/****************************************************************
*  Find a suitable row for finding more implicits if there is on
*    output: basic_var, pivot_entry, prev_pivot_entry
****************************************************************/

find_implicit_row(v, coef, eqn)
int v;
double *coef;
EQN_ptr *eqn;
{
register OCC_ptr occ;
register ENTRY_ptr entry, entry99;
EQN_ptr teqn;
double tcoef;
int i, flag;

	/*** destroyed variable is now basic ***/
	if (i = tableau[v]->basic_eqn) {
		*coef = 1.0;
		*eqn = tableau[i]->eqn;
		basic_var = v;
		entry99 = NULL;
		entry = (*eqn)->next;
		while(entry) {
			if (entry->id == v) {
				pivot_entry = entry;
				prev_pivot_entry = entry99;
			}
			entry99 = entry;
			entry = entry->next;
		}
		return TRUE;
	}
	occ = tableau[v]->ineq_occ;
	while (occ) {
		i = occ->id;
		teqn = tableau[i]->eqn;
		if (zero_format(teqn)) {
			entry99 = NULL;
			entry = teqn->next;
			flag = TRUE; 
			while(entry) {
				if (entry->id == v) {
					tcoef = entry->coef;
					pivot_entry = entry;
					prev_pivot_entry = entry99;
				}
				if (entry->id < slack_id) { flag = FALSE; break; }
				entry99 = entry;
				entry = entry->next;
			}
			if (flag && tcoef < -EPS) {
				if (is_zero(tcoef)) fatal("3847348");
				*coef = tcoef; *eqn = teqn; 
				basic_var = v;
				return TRUE;
			}
		}	
		occ = occ->next;
	}
	return FALSE;
}

/* NOTE: TEST routines not used *******************/

double div_by(x, r, c)
double x, r, c;
{
double q, rem, y;
/*
	q = x*r;
	rem = q*c - x;
	y = q + rem*r;
	if (!is_equal(x/c,y)) fatal("DIVISION");
	return y;
*/
	return x/c;
/*
	return x*r;
*/
}

norm_eqn(type, eqn, factor)
int type;
EQN_ptr eqn;
double factor;
{
register ENTRY_ptr entry;
double rec;
	if (is_equal(factor, 1.0)) return;
	if (is_equal(factor, -1.0)) fatal("-1 factor 13333");
	rec = 1/factor;
	eqn->constant = div_by(eqn->constant, rec, factor);
	entry = eqn->next;
	while (entry) {
		entry->coef = div_by(entry->coef, rec, factor);
		entry = entry->next;
	}
	if (type == INEQ)
		eqn->params->epsilon = div_by(eqn->params->epsilon, rec, factor);
}

/*** NOTE: delete ***/
/******
scale_eqn(type, eqn)
int type;
EQN_ptr eqn;
{
ENTRY_ptr entry;
double min, max;
int e1, e2, e;

	min=1.0e300; max = 0.0;
	for (entry=eqn->next; entry; entry=entry->next) {
		if (fabs(entry->coef) < min) min=fabs(entry->coef);
		if (fabs(entry->coef) > max) max=fabs(entry->coef);
	}
	frexp(min, &e1);  frexp(max, &e2);
	e = (e1+e2)/2;
	if (e > 0) e = 0;
	eqn->constant = ldexp(eqn->constant,-e);
	entry = eqn->next;
	while (entry) {
		entry->coef = ldexp(entry->coef, -e);
		entry = entry->next;
	}
	if (type == INEQ) eqn->params->epsilon = ldexp(eqn->params->epsilon,-e);
}
******/
