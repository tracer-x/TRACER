/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: solver.btk.c                                         *
 ***************************************************************/

#include "standard.h"
#include "config.h"
#include "emul.h"
#include "solver.h"

extern NL_EQN_ptr nl_eqn_top;
extern int stamp, trtop, **trail;
extern char *tagtrail;

/*-------------------------------------- backup -----------------------------*/

backup_null_eqn(id)
int id;
{
	push_trail(BTK_NULL_EQN, id);
}

backup_null_ineq(id)
int id;
{
	push_trail(BTK_NULL_INEQ, id);
}

backup_eqn(eqn)
EQN_ptr eqn;
{
/* TEST */
#ifdef DEBUG_BTK
putchar('B');
#endif
	push_trail(BTK_EQN, eqn);
} 

backup_ineq(eqn)
EQN_ptr eqn;
{
register EQN_ptr eqn0;
register EQN_PARAMS_ptr params;
ENTRY first;
register ENTRY_ptr prev_entry, entry, entry0;

#ifdef STATS
		/** DEBUGGING **/
		s_count[121]++;
#endif
	malloc_EQN(eqn0);
	malloc_EQN_PARAMS(params);
s_count[124]++;
	eqn0->time_stamp = eqn->time_stamp;
	eqn0->id = eqn->id;
	eqn0->constant = eqn->constant;
	eqn0->params = params;
	params->basic = eqn->params->basic;
	params->epsilon = eqn->params->epsilon;

	prev_entry = &first;
	entry = eqn->next;
	while (entry) {
#ifdef STATS
		s_count[116]++;
#endif
		malloc_ENTRY(entry0);
		entry0->next = NULL;
		entry0->id = entry->id;
		entry0->coef = entry->coef;
		prev_entry->next = entry0;
		prev_entry = entry0;
		entry = entry->next;
	}
	eqn0->next = first.next;
	push_trail(BTK_INEQ, eqn0);
}

/*-------------------------------------- restore ----------------------------*/

restore_null_eqn(i)
int *i;
{
int j;
TAB_HDR_NODE_ptr hdr;

#ifdef STATS
	s_count[30]++;
#endif
	hdr = tableau[j = (int) i];
	restore_occ_1(hdr->eqn);
	free_eqn_nodes(hdr->eqn);
	hdr->eqn = NULL;
	if (null_hdr(hdr)) {
		free_HDR(hdr);
		tableau[j] = NULL;
	}
}

restore_null_ineq(i)
int *i;
{
int j, pres_basic_var;
EQN_ptr eqn_j;
TAB_HDR_NODE_ptr hdr;

#ifdef STATS
	s_count[130]++;
#endif
	hdr = tableau[j = (int) i];
	pres_basic_var = hdr->eqn->params->basic;
	restore_ineq_occ_1(hdr->eqn);
	free_eqn_nodes(hdr->eqn);
	hdr->eqn = NULL;
	free_eqn_nodes(hdr->next);
#ifdef STATS
	s_count[135]++;
	s_count[136]++;
#endif
	hdr->next = NULL;
	if (pres_basic_var && 
		tableau[pres_basic_var] &&
			tableau[pres_basic_var]->basic_eqn == j) /*** tricky ***/
				tableau[pres_basic_var]->basic_eqn = 0;
	if (null_hdr(hdr)) {
		free_HDR(hdr);
		tableau[j] = NULL;
	}
}

restore_eqn(i)
int *i;
{
EQN_ptr eqn;
int j;
TAB_HDR_NODE_ptr hdr;

#ifdef STATS
	s_count[31]++;
#endif
	eqn = (EQN_ptr) i;
	hdr = tableau[j = eqn->id];
	restore_occ_2(hdr->eqn, eqn); 
	free_eqn_nodes(hdr->eqn);
	hdr->eqn = eqn;
}

restore_ineq(i)
int *i;
{
int j, pres_basic_var, prev_basic_var;
EQN_ptr eqn;
TAB_HDR_NODE_ptr hdr;

#ifdef STATS
	s_count[131]++;
#endif
	eqn = (EQN_ptr) i;
	hdr = tableau[j = eqn->id];
	if (!hdr) {
	  // do_clisting();
	  do_dump_tableaus();
	}
	pres_basic_var = hdr->eqn->params->basic; /* may be 0 */
	prev_basic_var = eqn->params->basic; /* should be non 0 */
	restore_ineq_occ_2(hdr->eqn, eqn);
	free_eqn_nodes(hdr->eqn);
#ifdef STATS
	s_count[134]++;
#endif
	hdr->eqn = eqn;
	if (pres_basic_var && 
		tableau[pres_basic_var] &&
			tableau[pres_basic_var]->basic_eqn == j) /*** tricky ***/ 
				tableau[pres_basic_var]->basic_eqn = 0;
	if (tableau[prev_basic_var]) 
		tableau[prev_basic_var]->basic_eqn = j;
}

restore_nl_eqn(i)
int *i;
{
NL_EQN_ptr nl_eqn;

#ifdef STATS
	s_count[230]++;
#endif
	nl_eqn = (NL_EQN_ptr) i;
	if (nl_eqn != nl_eqn_top) fatal("nl_eqn_top");
	nl_eqn_top = nl_eqn->next;
	restore_nl_occ(nl_eqn);
	if (nl_eqn->params1) free_NL_PARAMS1(nl_eqn->params1);
	if (nl_eqn->params2) free_NL_PARAMS2(nl_eqn->params2);
	free_NL_EQN(nl_eqn);
}

/*-------------------------------------- restore ----------------------------*/

restore_occ_1(pres_eqn) /*** prev_eqn == NULL ***/
EQN_ptr pres_eqn;
{
register ENTRY_ptr entry;

#ifdef STATS
	s_count[27]++;
#endif
	entry = pres_eqn->next;
	while (entry) {
		delete_occ(EQ, pres_eqn->id, entry->id);
		entry = entry->next;
	}
}

restore_occ_2(pres_eqn, prev_eqn)
EQN_ptr pres_eqn, prev_eqn;
{
int i, v1, v2;
register ENTRY_ptr entry1, entry2;

#ifdef STATS
	s_count[28]++;
#endif
	i = pres_eqn->id;
	entry1 = pres_eqn->next;
	entry2 = prev_eqn->next;
	while (entry1 && entry2) {
		if ((v1 = entry1->id) < (v2 = entry2->id)) {
			insert_occ(EQ, i, v2);
			entry2 = entry2->next;
		} else if (v1 > v2) {
			delete_occ(EQ, i, v1);
			entry1 = entry1->next;
		} else {
			entry1 = entry1->next;
			entry2 = entry2->next;
		}
	}
	/*** entry1 == 0 or entry2 == 0 ***/
	while (entry1) {
		v1 = entry1->id;
		delete_occ(EQ, i, v1);
		entry1 = entry1->next;
	}
	while (entry2) {
		v2 = entry2->id;
		insert_occ(EQ, i, v2);
		entry2 = entry2->next;
	}
}

restore_ineq_occ_1(pres_eqn) /*** prev_eqn == NULL ***/
EQN_ptr pres_eqn;
{
register ENTRY_ptr entry;

#ifdef STATS
	s_count[108]++;
#endif
	entry = pres_eqn->next;
	while (entry) {
		s_count[111]++;
		delete_occ(INEQ, pres_eqn->id, entry->id);
		entry = entry->next;
	}
}

restore_ineq_occ_2(pres_eqn, prev_eqn)
EQN_ptr pres_eqn, prev_eqn;
{
int i, v1, v2;
register ENTRY_ptr entry1, entry2;

#ifdef STATS
	s_count[109]++;
#endif
	i = pres_eqn->id;
	entry1 = pres_eqn->next;
	entry2 = prev_eqn->next;
	while (entry1 && entry2) {
		if ((v1 = entry1->id) < (v2 = entry2->id)) {
			insert_occ(INEQ, i, v2);
			entry2 = entry2->next;
		} else
		if (v1 > v2) {
			delete_occ(INEQ, i, v1);
			entry1 = entry1->next;
		} else {
			entry1 = entry1->next;
			entry2 = entry2->next;
		}
	}
	while (entry1) {
		delete_occ(INEQ, i, entry1->id);
		entry1 = entry1->next;
	}
	while (entry2) {
		insert_occ(INEQ, i, entry2->id);
		entry2 = entry2->next;
	}
}

restore_nl_occ(nl_eqn)
NL_EQN_ptr nl_eqn;
{
NL_EQN_ptr nl_eqn99;
NL_PARAMS1_ptr params1;
NL_PARAMS2_ptr params2, params99;
NL_OCC_ptr occ0, occ1, occ2;
int v0, v1, v2, type;
	if (!(nl_eqn99 = nl_eqn->partner)) {
		stats_count(216);
		if (nl_eqn->type != WOKEN) nlin_count--;
		params2 = nl_eqn->params2;	
		if (occ0 = params2->occ0) delete_nl_occ(occ0);
		if (occ1 = params2->occ1) delete_nl_occ(occ1);
		if (occ2 = params2->occ2) delete_nl_occ(occ2);
		return;
	}
	stats_count(217);
	params1 = nl_eqn99->params1;
	v0 = params1->id0; 
	v1 = params1->id1; 
	v2 = params1->id2;
	params99 = nl_eqn99->params2;
	switch (type = nl_eqn->type) {
		case SOLVER_EVAL: return;
		case SOLVER_MULT:
			nlin_count++;
			nl_eqn99->type = SOLVER_MULT;
			if (nl_eqn->time_stamp == 1)
				params99->occ2 = insert_nl_occ(SOLVER_MULT, v2, nl_eqn99, 2);
			else
				params99->occ1 = insert_nl_occ(SOLVER_MULT, v1, nl_eqn99, 1);
			return;
		case SOLVER_POW:
			if (nl_eqn99->type != WOKEN) {
				nl_eqn99->type = SOLVER_POW;
				return;
			}
			nlin_count++;
			if (nl_eqn->time_stamp == 0) {
				params99->occ1 = insert_nl_occ(SOLVER_POW, v1, nl_eqn99, 1);
				params99->occ2 = insert_nl_occ(SOLVER_POW, v2, nl_eqn99, 2);
			} else
			if (nl_eqn->time_stamp == 1) {
				params99->occ0 = insert_nl_occ(SOLVER_POW, v0, nl_eqn99, 0);
				params99->occ2 = insert_nl_occ(SOLVER_POW, v2, nl_eqn99, 2);
			} else {
				params99->occ0 = insert_nl_occ(SOLVER_POW, v0, nl_eqn99, 0);
				params99->occ1 = insert_nl_occ(SOLVER_POW, v1, nl_eqn99, 1);
			}
			nl_eqn99->type = SOLVER_POW;
			return;
		case SOLVER_POW0: 
			if (nl_eqn99->type != WOKEN) { /* can come from POW02 */
				nl_eqn99->type = SOLVER_POW0;
				return;
			}
			nlin_count++;
			if (nl_eqn->time_stamp == 1) 
				params99->occ2 = insert_nl_occ(SOLVER_POW, v2, nl_eqn99, 2);
			else params99->occ1 = insert_nl_occ(SOLVER_POW, v1, nl_eqn99, 1);
			nl_eqn99->type = SOLVER_POW0;
			return; 
		case SOLVER_POW1: /* from WOKEN */
			nlin_count++;
			if (nl_eqn->time_stamp == 0) 
				params99->occ2 = insert_nl_occ(SOLVER_POW, v2, nl_eqn99, 2);
			else params99->occ0 = insert_nl_occ(SOLVER_POW, v0, nl_eqn99, 0);
			nl_eqn99->type = SOLVER_POW1;
			return; 
		case SOLVER_POW2:
			if (nl_eqn99->type != WOKEN) { /* can come from POW02 */
				nl_eqn99->type = SOLVER_POW2;
				return;
			}
			nlin_count++; 
			if (nl_eqn->time_stamp != 1) /* now must be pos = 1 && WOKEN */
				fatal("77345");
			else params99->occ0 = insert_nl_occ(SOLVER_POW, v0, nl_eqn99, 0);
			nl_eqn99->type = SOLVER_POW2;
			return; 
		case SOLVER_POW02: /* merged cases, no change in occs */
		case SOLVER_MIN:
		case SOLVER_MIN0:
		case SOLVER_MIN1:
		case SOLVER_MIN2:
		case SOLVER_MAX: 
		case SOLVER_MAX0:
		case SOLVER_MAX1:
		case SOLVER_MAX2:
			if (nl_eqn99->type == WOKEN) nlin_count++;
			nl_eqn99->type = type;
			return; 
		case SOLVER_ABS:
		case SOLVER_SIN:
		case SOLVER_COS:
			if (nl_eqn99->type != WOKEN) { /* from SOLVER_*0 */
				nl_eqn99->type = type;
				return;
			}
			nlin_count++;
			if (nl_eqn->time_stamp == 1) 
				params99->occ0 = insert_nl_occ(type, v0, nl_eqn99, 0);
			else
				params99->occ1 = insert_nl_occ(type, v1, nl_eqn99, 1);
			nl_eqn99->type = type;
			return;
		case SOLVER_ABS0:
		case SOLVER_SIN0:
		case SOLVER_COS0:
			nlin_count++; /* from WOKEN */
			nl_eqn99->type = type;
			return; 
		case SOLVER_ARCSIN:
			nlin_count++;
			nl_eqn99->type = SOLVER_ARCSIN;
			if (nl_eqn->time_stamp == 0)
				params99->occ1 = insert_nl_occ(SOLVER_ARCSIN, v1, nl_eqn99, 1);
			else
				params99->occ0 = insert_nl_occ(SOLVER_ARCSIN, v0, nl_eqn99, 0);
			return;
		case SOLVER_ARCCOS:
			nlin_count++;
			nl_eqn99->type = SOLVER_ARCCOS;
			if (nl_eqn->time_stamp == 0)
				params99->occ1 = insert_nl_occ(SOLVER_ARCCOS, v1, nl_eqn99, 1);
			else
				params99->occ0 = insert_nl_occ(SOLVER_ARCCOS, v0, nl_eqn99, 0);
			return;
		default:
			fprintf(stderr, "BAD NLIN type %d\n",type);
			fatal("76388");
	}
}
