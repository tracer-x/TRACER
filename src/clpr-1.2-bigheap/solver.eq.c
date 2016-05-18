/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: solver.eq.c                                          *
 ***************************************************************/

#include "standard.h"
#include "config.h"
#include "emul.h"
#include "solver.h"

extern int stamp;

/*---------------------------------
 * Solve eqn->next = eqn->constant;
 * eqn contains only params
 * eqn->next != NULL
 ---------------------------------*/

solve_parametric_eqn(eqn, call_ineq_subs) 
EQN_ptr eqn;
int call_ineq_subs;
{
register ENTRY_ptr entry, entry_min;
register OCC_ptr occ, occ99;
ENTRY_ptr prev_entry, prev_entry_min;
EQN_ptr eqn2, eqn_i;
TAB_HDR_NODE_ptr hdr, hdr_i;
ENTRY_ptr groundings;
int i, min_var, flag;
double c, min_coef;
	stats_count(5);
	groundings = NULL;
	prev_entry_min = prev_entry = NULL;
	entry_min = entry = eqn->next;
	do {
		hdr = tableau[entry->id];
		if (!hdr || !hdr->ineq_occ) {
			entry_min = entry;
			prev_entry_min = prev_entry;
			call_ineq_subs = FALSE;
			break;
		} 
		if (hdr->basic_eqn) {
			entry_min = entry;
			prev_entry_min = prev_entry;
		}
		prev_entry = entry;
		entry = entry->next;
	} while (entry);
	min_var = entry_min->id;
	min_coef = entry_min->coef;

	if (prev_entry_min) prev_entry_min->next = entry_min->next;
	else eqn->next = entry_min->next;
	free_ENTRY(entry_min);
	eqn->id = min_var;
	mult_eqn(EQ, eqn, -1.0 / min_coef);

	if (call_ineq_subs && !ineq_substitute(min_var, eqn)) {
		free_eqn_nodes(eqn);
		return FALSE;
	}

	backup_null_eqn(min_var);
	if (!(hdr = tableau[min_var])) {
		malloc_HDR(hdr);
		tableau[min_var] = hdr;
	}
	hdr->eqn = eqn; /*** this must be set before param subs ***/
	entry = eqn->next;
	while (entry) {
		insert_occ(EQ, min_var, entry->id);
		entry = entry->next;
	}
	occ = hdr->eq_occ;
	while (occ) {
		occ99 = occ->next;
		hdr_i = tableau[i = occ->id];
		eqn_i = hdr_i->eqn;
		if (eqn_i->time_stamp < stamp) {
			backup_eqn(eqn_i);
			c = tmp_delete_entry(eqn_i, min_var);
			hdr_i->eqn = eqn2 = sum_eqns(eqn_i, eqn, c); 
			tmp_undelete_entry(eqn_i);
			delete_occ(EQ, i, min_var);
			if (!(eqn2->next)) 
				make_solver_binding(&groundings, i, eqn2->constant);
			eqn2->time_stamp = stamp;
		} else {
			c = delete_entry(EQ, eqn_i, min_var);
			if (eqn->next) add_eqns(EQ, eqn_i, eqn, c);
			else eqn_i->constant += c * eqn->constant;
			if (!(eqn_i->next)) 
				make_solver_binding(&groundings, i, eqn_i->constant);
		}
		occ = occ99;
	}
	if (!(eqn->next)) make_solver_binding(&groundings, min_var, eqn->constant);
	if (!check_implicits()) return FALSE;
	return (groundings ? check_groundings(groundings) : TRUE);
} 

/*---------------------------------------------------------------------------*/

static ENTRY_ptr tmp_entry, tmp_prev_entry;

double tmp_delete_entry(eqn, v)
EQN_ptr eqn;
int v;
{
ENTRY first;
register ENTRY_ptr entry;
double c;
	first.next = entry = eqn->next;
	tmp_prev_entry = &first;
	while (entry->id != v) {
		tmp_prev_entry = entry;
		entry = entry->next;
	}
	c = entry->coef;
	tmp_entry = entry;
	tmp_prev_entry->next = entry->next;
	eqn->next = first.next;
	if (tmp_prev_entry == &first) tmp_prev_entry = NULL;
	return c;
}

tmp_undelete_entry(eqn)
EQN_ptr eqn;
{
	if (!tmp_prev_entry) {
		tmp_entry->next = eqn->next;
		eqn->next = tmp_entry;
	} else {
		tmp_entry->next = tmp_prev_entry->next;
		tmp_prev_entry->next = tmp_entry;
	}
}

/*---------------------------------------------------------------------------*/

make_solver_binding(groundings, v, c)
ENTRY_ptr *groundings;
int v;
double c;
{
ENTRY_ptr entry;
	malloc_ENTRY(entry);
	entry->next = *groundings;
	entry->id = v;
	entry->coef = c;
	*groundings = entry;
}

check_groundings(groundings)
ENTRY_ptr groundings;
{
int flag;
ENTRY_ptr entry, entry99;
	flag = TRUE;
	entry = groundings;
	while (entry) {
		entry99 = entry->next;
		if (flag && !wakeup(entry->id, entry->coef)) flag = FALSE;
		free_ENTRY(entry);
		entry = entry99;
	}
	return flag;
}

/*---------------------------------------------------------------------------*/
/*----------------------------------------- eqn/entry/occ handling ----------*/
/*---------------------------------------------------------------------------*/

insert_occ(type, i, v) 
int type, i, v;
{
register OCC_ptr occ;
TAB_HDR_NODE_ptr hdr;
	stats_count(14);
	if (!(hdr = tableau[v])) {
		malloc_HDR(hdr);
		tableau[v] = hdr;
	}
	malloc_OCC(occ);
	occ->id = i;
	occ->next = (type == EQ ? hdr->eq_occ : hdr->ineq_occ);
	if (type == EQ) {
		occ->next = hdr->eq_occ;
		hdr->eq_occ = occ;
	} else {
		occ->next = hdr->ineq_occ;
		hdr->ineq_occ = occ;
	}
}

delete_occ(type, i, v) 
int type, i, v;
{
register OCC_ptr prev_occ, occ;
OCC first;
TAB_HDR_NODE_ptr hdr;
	stats_count(1);
	hdr = tableau[v];
	occ = ((type == EQ) ? hdr->eq_occ : hdr->ineq_occ);
	prev_occ = &first;
	first.next = occ;
	while (occ) {
		stats_count(13);
		if (occ->id == i) {
			prev_occ->next = occ->next;
			if (type == EQ) hdr->eq_occ = first.next;
			else hdr->ineq_occ = first.next;
			free_OCC(occ);
			if (null_hdr(hdr)) {
				free_HDR(hdr);
				tableau[v] = NULL;
			}
			return;
		}
		prev_occ = occ;
		occ = occ->next;
	}
	fatal("74081");
}

/*---------------------------------------------------------------------------*/

add_entry(type, eqn, v, c)
int type;
EQN_ptr eqn;
int v;
double c;
{
EQN_ptr eqn2;
TAB_HDR_NODE_ptr hdr;
int i;
double c2;
	if (hdr = tableau[v]) {
		if (type == EQ) {
			if (eqn2 = hdr->eqn) {
				stats_count(6);
				add_eqns(EQ, eqn, eqn2, c); 
				return;
			}
		} else {
			if (i = hdr->basic_eqn) {
				stats_count(6);
				eqn2 = tableau[i]->eqn;
				c2 = tmp_delete_entry(eqn2, v);

				/* NOTE: *********************************************/
				/* CHANGE : BUG no eps ??, leave as 0 for the moment */
				if (c2 > 0.0) add_eqns(INEQ, eqn, eqn2, -c);
				else add_eqns(INEQ, eqn, eqn2, c);
				tmp_undelete_entry(eqn2);
				return;
			}
		}
	}
	add_simple_entry(type, eqn, v, c);
}

add_simple_entry(type, eqn, v, c)
int type;
EQN_ptr eqn;
int v;
double c;
{
register ENTRY_ptr prev_entry, entry, new_entry;
TAB_HDR_NODE_ptr hdr;
ENTRY_ptr tmp;
	stats_count(7);
	if (!(entry = eqn->next)) {
		malloc_ENTRY(new_entry);
		new_entry->next = NULL;
		new_entry->id = v;
		new_entry->coef = c;
		eqn->next = new_entry;
		if (eqn->id) insert_occ(type, eqn->id, v);
		return;
	}
	prev_entry = NULL;
	while (entry && entry->id > v) {
		prev_entry = entry;
		entry = entry->next;
		stats_count(8);
	} 
	if (entry && entry->id == v) {
		entry->coef += c;
		if (is_zero(entry->coef)) {
			stats_count(9);
			if (prev_entry) prev_entry->next = entry->next;
			else eqn->next = entry->next;
			free_ENTRY(entry);
			if (eqn->id) delete_occ(type, eqn->id, v);
		}
	} else {
		malloc_ENTRY(new_entry);
		new_entry->next = NULL;
		new_entry->id = v;
		new_entry->coef = c;
		if (prev_entry) {
			tmp = prev_entry->next;
			prev_entry->next = new_entry;
			new_entry->next = tmp;
		} else {
			tmp = eqn->next;
			eqn->next = new_entry;
			new_entry->next = tmp;
		}
		if (eqn->id) insert_occ(type, eqn->id, v);
	}
}

double delete_entry(type, eqn, v)
int type;
EQN_ptr eqn;
int v;
{
ENTRY first;
register ENTRY_ptr prev_entry, entry;
double c;
	stats_count(17);
	first.next = entry = eqn->next;
	prev_entry = &first;
	while (entry->id != v) {
#ifdef STATS
		s_count[12]++;
#endif
		prev_entry = entry;
		entry = entry->next;
	}
	c = entry->coef;
	prev_entry->next = entry->next;
	free_ENTRY(entry);
	if (eqn->id) delete_occ(type, eqn->id, v);
	eqn->next = first.next;
	return c;
}

add_eqns(type, eqn1, eqn2, factor) /*** eqn1 := eqn1 + factor*eqn2 ***/
int type;
EQN_ptr eqn1, eqn2;
double factor;
{
int v1, v2;
register ENTRY_ptr tmp1, tmp2;
ENTRY first;
ENTRY_ptr tmp99, prev_entry, new_entry;

	stats_count(29);
	eqn1->constant += eqn2->constant * factor;
	if (type == INEQ && eqn2->params) 
		eqn1->params->epsilon += eqn2->params->epsilon * factor;	
	tmp1 = eqn1->next; 
	tmp2 = eqn2->next;
	prev_entry = &first; 
	first.next = tmp1;
	while (tmp1 && tmp2) {
		stats_count(10);
		if ((v1 = tmp1->id) > (v2 = tmp2->id)) {
			prev_entry = tmp1;
			tmp1 = tmp1->next;
		} else
		if (v1 < v2) {
			malloc_ENTRY(new_entry);
			new_entry->next = tmp1;
			new_entry->coef = tmp2->coef * factor;
			new_entry->id = v2;
			prev_entry->next = new_entry;
			if (eqn1->id) insert_occ(type, eqn1->id, v2);
			prev_entry = new_entry;
			tmp2 = tmp2->next;
		} else {
			tmp1->coef += (tmp2->coef) * factor;
			if (is_zero(tmp1->coef)) {
				stats_count(11);
				tmp99 = tmp1;
				if (eqn1->id) delete_occ(type, eqn1->id, v1);
				tmp1 = tmp1->next;
				prev_entry->next = tmp1;
				free_ENTRY(tmp99);
			} else {
				prev_entry = tmp1;
				tmp1 = tmp1->next;
			}
			tmp2 = tmp2->next;
		}
	}
	while (tmp2) {
		stats_count(10);
		/*** INV: prev_entry is last entry in eqn1 ***/
		malloc_ENTRY(new_entry);
		new_entry->coef = tmp2->coef * factor;
		new_entry->next = NULL;
		new_entry->id = tmp2->id;
		prev_entry->next = new_entry;
		if (eqn1->id) insert_occ(type, eqn1->id, new_entry->id);
		prev_entry = new_entry;
		tmp2 = tmp2->next;
	}
	eqn1->next = first.next;
}

EQN_ptr sum_eqns(eqn1, eqn2, factor) /*** return a copy ***/
EQN_ptr eqn1, eqn2;
double factor;
{
EQN_ptr eqn0;
int v1, v2, id;
register ENTRY_ptr tmp1, tmp2;
ENTRY first;
ENTRY_ptr prev_entry, new_entry;
double c;
	stats_count(36);
	malloc_EQN(eqn0);
	eqn0->next = NULL;
	eqn0->time_stamp = eqn1->time_stamp;
	eqn0->id = id = eqn1->id;
	eqn0->constant = eqn1->constant + eqn2->constant * factor;
	eqn0->params = NULL;

	tmp1 = eqn1->next; 
	tmp2 = eqn2->next;
	prev_entry = &first; 
	first.next = NULL;
	while (tmp1 && tmp2) {
		stats_count(37);
		if ((v1 = tmp1->id) == (v2 = tmp2->id)) { 
			c = tmp1->coef + tmp2->coef * factor;
			if (is_zero(c)) {
				stats_count(20);
				if (id) delete_occ(EQ, id, v1);
			} else {
				malloc_ENTRY(new_entry);
				new_entry->next = NULL;
				new_entry->id = v1;
				new_entry->coef = c;
				prev_entry->next = new_entry;
				prev_entry = new_entry;
			}
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
			continue;
		}
		malloc_ENTRY(new_entry);
		new_entry->next = NULL;
		prev_entry->next = new_entry;
		prev_entry = new_entry;
		if (v1 > v2) { 
			new_entry->id = v1;
			new_entry->coef = tmp1->coef;
			tmp1 = tmp1->next;
			continue;
		} else {
			new_entry->id = v2;
			new_entry->coef = tmp2->coef * factor;
			if (id) insert_occ(EQ, id, v2);
			tmp2 = tmp2->next;
		}
	}
	while (tmp1) {
		stats_count(37);
		malloc_ENTRY(new_entry);
		new_entry->next = NULL;
		new_entry->id = tmp1->id;
		new_entry->coef = tmp1->coef;
		prev_entry->next = new_entry;
		prev_entry = new_entry;
		tmp1 = tmp1->next;
	}
	while (tmp2) {
		stats_count(37);
		malloc_ENTRY(new_entry);
		new_entry->next = NULL;
		new_entry->id = tmp2->id;
		new_entry->coef = tmp2->coef * factor;
		prev_entry->next = new_entry;
		prev_entry = new_entry;
		if (id) insert_occ(EQ, id, new_entry->id);
		tmp2 = tmp2->next;
	}
	eqn0->next = first.next;
	return eqn0;
}

mult_eqn(type, eqn, factor)
int type;
EQN_ptr eqn;
double factor;
{
register ENTRY_ptr entry;
	eqn->constant *= factor;
	entry = eqn->next;
	while (entry) {
		entry->coef *= factor;
		entry = entry->next;
	}
	if (type == INEQ) eqn->params->epsilon *= factor;
}

/******
div_eqn(type, eqn, factor)
int type;
EQN_ptr eqn;
double factor;
{
register ENTRY_ptr entry;
	eqn->constant /= factor;
	entry = eqn->next;
	while (entry) {
		entry->coef /= factor;
		entry = entry->next;
	}
	if (type == INEQ) eqn->params->epsilon /= factor;
}
*******/

double find_coef(eqn, v)
EQN_ptr eqn;
int v;
{
register ENTRY_ptr entry;
	entry = eqn->next;
	while (entry) {
		if (entry->id == v) return entry->coef;
		entry = entry->next;
	}
	return 0.0;
}

ENTRY_ptr find_entry(eqn, v)
EQN_ptr eqn;
int v;
{
register ENTRY_ptr tmp;
	tmp = eqn->next;
	while (tmp) {
		if (tmp->id == v) return tmp;
		tmp = tmp->next;
	}
	fatal("19191");
}

length_eqn(eqn)
EQN_ptr eqn;
{
register ENTRY_ptr entry;
int count;
	count = 0;
	entry = eqn->next;
	while (entry) {
		count++;
		entry = entry->next;
	}
	return count;
}

EQN_ptr copy_eqn(eqn)
EQN_ptr eqn;
{
EQN_ptr eqn0;
EQN_PARAMS_ptr params0, params;
ENTRY first;
register ENTRY_ptr prev_entry, entry, entry0;
	malloc_EQN(eqn0);
	eqn0->time_stamp = eqn->time_stamp;
	eqn0->id = eqn->id;
	eqn0->constant = eqn->constant;
	if (params = eqn->params) {
		malloc_EQN_PARAMS(params0);
		eqn0->params = params0;
		params0->basic = params->basic;
		params0->epsilon = params->epsilon;
	} else eqn0->params = NULL;
	first.next = NULL;
	prev_entry = &first;
	entry = eqn->next;
	while (entry) {
		malloc_ENTRY(entry0);
		entry0->next = NULL;
		prev_entry->next = entry0;
		entry0->id = entry->id;
		entry0->coef = entry->coef;
		prev_entry = entry0;
		entry = entry->next;
	}
	eqn0->next = first.next;
	return eqn0;
}

delete_eqn(eqn, type)
EQN_ptr eqn;
int type;
{
int id;
ENTRY_ptr entry, entry99;

	id = eqn->id;
	for (entry=eqn->next; entry; entry = entry99) {
		entry99 = entry->next;
		delete_occ(type, id, entry->id);
		free_ENTRY(entry);
	}
	eqn->next = NULL;
}
