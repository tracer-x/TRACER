/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: debug.c                                              *
 ***************************************************************/

#include "standard.h"
#include "config.h"
#include "parse.h"
#include "lib.h"
#include "compile.h"
#include "opcodes.h"
#include "emul.h"
#include "solver.h"

int inst_count[MAX_OPCODE + 1];

extern FILE *outfile;
extern ASMREC asmlist[];
extern int inst_count[];
extern NL_EQN_ptr nl_eqn_top;

static void print_inst_freq();

/*---------------------------------------------------------------------------*/

check_eq_tableau()
{
int i, j, k;
double c;
TAB_HDR_NODE_ptr hdr, hdr2;
EQN_ptr eqn;
ENTRY_ptr entry;
OCC_ptr occ;
	printf("Checking eq tableau (%d) ... ", solver_id);
	fflush(stdout);
	for (i = 1; i <= solver_id; i++) {
		if (!(hdr = tableau[i])) continue;
		if (eqn = hdr->eqn) {
			entry = eqn->next;
			while (entry) { 
				j = count_occ_in_row(EQ, entry->id, i);
				if (j < 1) debug_error(88801);
				entry = entry->next;
			}
		}
		if (occ = hdr->eq_occ) {
			do {
				if (!(hdr2 = tableau[occ->id])) debug_error(88802);
				j = count_id_in_eqn(hdr2->eqn, i);
				if (j != 1) debug_error(88803);
				occ = occ->next;
			} while (occ);
		}
	}	
	printf("OK\n");
}

check_ineq_tableau()
{
int i, j, k, basic_var;
double c;
TAB_HDR_NODE_ptr hdr;
EQN_ptr eqn;
EQN_PARAMS_ptr params;
ENTRY_ptr entry;
/*
	printf("Checking ineq tableau (%d .. %d) ... ", 
		slack_id, SOLVER_SZ - 1);
*/
	fflush(stdout);
	for (i = SOLVER_SZ - 1; i >= slack_id; i--) {
		if (!(hdr = tableau[i])) debug_error(77701);
		if (!(eqn = hdr->eqn)) debug_error(77702);
if (eqn->params) {
  if (eqn->constant > EPS) debug_error(66182);
  if (eqn->params->basic >= slack_id && ((ENTRY_ptr) find_entry(eqn, eqn->params->basic))->coef < -EPS)
    debug_error(66199);
}
		if (!(params = eqn->params)) debug_error(77703);
		basic_var = params->basic;
		if (!(entry = eqn->next)) continue; /* debug_error(77704); */
/*
		k = 0;
		while (entry) {
			j = count_occ_in_row(INEQ, entry->id, i);
			if (j != 1) debug_error(77705);
			if (entry->id == basic_var) k++;
			entry = entry->next;
		}
		if (k != 1) debug_error(77706);
		if (!(hdr = tableau[params->basic])) debug_error(77707);
		if (hdr->basic_eqn != i) debug_error(77708);
*/
		
	}
/*
	printf("OK\n");
*/
}

check_tableaus()
{
	check_eq_tableau();
	check_ineq_tableau();
}

count_occ_in_row(type, v1, v2)
int type, v1, v2;
{
int count;
TAB_HDR_NODE_ptr hdr;
OCC_ptr occ;
	if (!(hdr = tableau[v1])) return -1;
	occ = (type == EQ ? hdr->eq_occ : hdr->ineq_occ);
	count = 0;
	while (occ) {
		if (occ->id == v2) count++;
		occ = occ->next;
	}
	return count;
}

count_id_in_eqn(eqn, i)
EQN_ptr eqn;
int i;
{
int count;
ENTRY_ptr entry;
	if (!eqn) return -1;
	entry = eqn->next;
	count = 0;
	while (entry) {
		if (entry->id == i) count++;
		entry = entry->next;
	}
	return count;
}

debug_error(n)
int n;
{
	printf("Internal error: %5d\n", n);
	exit(1);
}

/*----------------------------------------------- diagnostic i/o ------------*/

print_tableaus()
{
	print_eq_tableau();
	print_ineq_tableau();
	if (nlin_count) printf("... and %d non-linears\n", nlin_count);
}

print_stats()
{
	fprintf(outfile, "\nSTATS:\n");  
	print_pre_malloc_stats();
	print_emul_stats();
	print_solver_stats();
}

print_e_stats()
{
/***
	fprintf(outfile, "\nEMULATOR STATS:\n");  
	print_pre_malloc_stats();
	print_emul_stats();
***/
	printf("Spare counters: %d %d %d %d\n",
		s_count[540], s_count[541], s_count[542], s_count[543]); 
}

print_s_stats()
{
	fprintf(outfile, "\nSOLVER STATS:\n");  
	print_pre_malloc_stats();
	print_solver_stats();
}

int unify_stats[25];
print_emul_stats()
{
	int i;
	fprintf(outfile, "Emulator: %d instructions\n", s_count[299]);
	fprintf(outfile, "\tInstruction frequencies:\n");
	print_inst_freq();
	printf("UNIFY stats:");
	for (i=0; i <= 24; i++)
		if (unify_stats[i] > 0) printf(" (%d) = %d",i, unify_stats[i]);
	printf("\n");
}

static void print_inst_freq()
{
int i, j, count;
char *s;
	count = 0;
	for (i = 0; i <= MAX_OPCODE; i++) {
		if (!inst_count[i]) continue;
		for (j = 0, s = (char *)NULL; j <= MAX_OPCODE; j++)
			if (i == asmlist[j].num) {
				s = asmlist[j].mnemonic;
				break;
			}
		if (!s) {
			fprintf(stderr, "OPCODE %d missing\n",i);
			continue;
		}
		if ((count % 3) == 0) fprintf(outfile, "\t");
		count++;
		print_spaces(13 - strlen(s));
		fprintf(outfile, "%s:%6d", s, inst_count[i]);
		if ((count % 3) == 0) fprintf(outfile, "\n");
	}
	if ((count % 3) != 0) fprintf(outfile, "\n");

}

print_solver_stats()
{
	print_s_malloc_stats();
	print_eq_stats();
	print_ineq_stats();
	print_nlin_stats();
}

print_s_malloc_stats()
{
fprintf(outfile, 
	"Original Solver Malloc Space: %d blocks * %d = %d nodes (%d bytes)\n",
	sms_blocks, SOLVER_MALLOC_NODES, sms_blocks * SOLVER_MALLOC_NODES, 
	sms_blocks * SOLVER_MALLOC_NODES * sizeof(SOLVER_NODE));
fprintf(outfile, 
	"Present Solver Malloc Space: %d nodes\n", count_solver_malloc_space());
fprintf(outfile, 
	"\tEQN nodes: %dm, %df\n", malloc_eqn_count, free_eqn_count);
fprintf(outfile, 
	"\tEQN_PARAMS: %dm, %df\n", malloc_eqn_par_count, free_eqn_par_count);
fprintf(outfile, 
	"\tENTRY: %dm, %df\n", malloc_entry_count, free_entry_count);
fprintf(outfile, 
	"\tOCC: %dm, %df\n", malloc_occ_count, free_occ_count);
fprintf(outfile, 
	"\tNL_EQN: %dm, %df\n", malloc_nl_eqn_count, free_nl_eqn_count);
fprintf(outfile, 
	"\tNL_OCC: %dm, %df\n", malloc_nl_occ_count, free_nl_occ_count);
fprintf(outfile, 
	"\tNL_PARAMS1: %dm, %df\n", malloc_nl_par1_count, free_nl_par1_count);
fprintf(outfile, 
	"\tNL_PARAMS2: %dm, %df\n", malloc_nl_par2_count, free_nl_par2_count);
fprintf(outfile, 
	"\tHDR: %dm, %df\n", malloc_hdr_count, free_hdr_count);
fprintf(outfile, 
	"\tDUMP: %dm, %df\n", malloc_koh_count, free_koh_count);
}

print_eq_stats()
{
	if (!(s_count[4] + s_count[5])) return;
	fprintf(outfile, "EQ solver: %d calls (%d new vars, %d param vars)\n",
		s_count[4] + s_count[5], s_count[4], s_count[5]);
	fprintf(outfile, "\tInsert_occ: %d calls\n", s_count[14]);
	fprintf(outfile, "\tDelete_occ: %d calls, %d extra searches\n",
		s_count[14], s_count[13]);
	fprintf(outfile, "\tRestore eqn's: %d nulls, %d non-nulls\n",
		s_count[30], s_count[31]);
}

print_ineq_stats()
{
	if (!(s_count[180] + s_count[104])) return;	
	fprintf(outfile, "INEQ_solver: %d calls (%d new rows, %d ineq_subs)\n",
		s_count[180] + s_count[104], s_count[180], s_count[104]);
	fprintf(outfile, "\tIneq_subs: %d basics, %d non-basics\n",
		s_count[105], s_count[104] - s_count[105]);
	fprintf(outfile, "\tMain ineq loop: %d (%g pivots per constraint)\n",
		s_count[103], 
		(double) (s_count[103]) / (double) (s_count[180] + s_count[104] + 1));
	fprintf(outfile, "\tRestore ineq's: %d nulls, %d non-nulls\n",
		s_count[130], s_count[131]);
	fprintf(outfile, "\tIneq : %d success, %d fails\n",
		s_count[122], s_count[180]-s_count[122]);
	fprintf(outfile, "\tIneq subs basic: %d success, %d fails\n",
		s_count[123], s_count[105] - s_count[123]);
	fprintf(outfile, "\tMalloc params: %d backup %d gt0 %d solve_ineq\n",
		s_count[124], s_count[125], s_count[126]);
	fprintf(outfile, "\tFree params: %d backup %d gt0 %d solve_ineq\n",
		s_count[134], s_count[135], s_count[136]);
}

print_nlin_stats()
{
	if (!s_count[200]) return;
	fprintf(outfile, "NLIN_solver: %d mults\n", s_count[200]);
	fprintf(outfile, "\tWakeups: %d\n", s_count[261]);
	fprintf(outfile, "\tNl_eqn nodes: %d orig's, %d changes\n",
		s_count[206], s_count[204]);
	fprintf(outfile, "\tRestore nl_eqn's: %d\n", s_count[230]);
}

/*---------------------------------------------------------------------------*/

print_hdr(hdr)
TAB_HDR_NODE_ptr hdr;
{
int i;
	if (!hdr) fprintf(outfile, "<NULL hdr>\n");
	else {
		i = hdr->eqn->id;
		fprintf(outfile, "HDR (%x):\n", hdr);
		fprintf(outfile, "\teqn: "); print_eqn(hdr->eqn);
		fprintf(outfile, "\teq_occ: "); print_eq_occ(i);
		fprintf(outfile, "\tineq_occ: "); print_ineq_occ(i);
		fprintf(outfile, "\tnlin_occ: "); print_nlin_occ(i);
		fprintf(outfile, "\tbasic_eqn: %d\n", hdr->basic_eqn);
	}
}

print_eq_tableau()
{
int i;
	fprintf(outfile, 
		"------------------------------ Eq_tableau -----------------\n");
	for (i = solver_id; i >= 1; i--) 
		if (tableau[i] && tableau[i]->eqn) print_eqn(tableau[i]->eqn);
	fprintf(outfile, 
		"-----------------------------------------------------------\n");
}

print_ineq_tableau()
{
int i;
	fprintf(outfile, 
		"----------- Ineq_tableau ----------------------------------\n");
	for (i = SOLVER_SZ - 1; i >= slack_id; i--)
		if (tableau[i] && tableau[i]->eqn) print_eqn(tableau[i]->eqn);
	fprintf(outfile, 
		"-----------------------------------------------------------\n");
}

print_nlins()
{
int i, *t;
NL_EQN_ptr nl_eqn;
	for (nl_eqn = nl_eqn_top; nl_eqn; nl_eqn = nl_eqn->next) {
		if (nl_eqn->type == WOKEN || nl_eqn->partner) continue;
		print_nl_eqn(nl_eqn);
	}
}

print_eqn(eqn)
EQN_ptr eqn;
{
ENTRY_ptr entry;
	if (!eqn) {
		fprintf(outfile, "<NULL eqn>\n");
		return;
	}
	fprintf(outfile, "[%d]: %.2e", eqn->id, eqn->constant);
	if (eqn->params) fprintf(outfile, " (%.2eE)", eqn->params->epsilon);
	entry = eqn->next;
	while (entry) {
		if (entry->coef > 0.0) 
			fprintf(outfile, " +%.2e*X%d", entry->coef, entry->id);
		else fprintf(outfile, " -%.2e*X%d", -(entry->coef), entry->id);
		if (eqn->params && eqn->params->basic == entry->id) putchar('^');
		entry = entry->next;
	}
	fprintf(outfile, " (ts:%d)\n", eqn->time_stamp);
}

print_eq_occ(v)
int v;
{
OCC_ptr occ;
	if (!tableau[v]) fprintf(outfile, "Tab[%d] = NULL\n", v);
	else
	if (!tableau[v]->eq_occ) fprintf(outfile, "Tab[%d]->eq_occ = NULL\n", v);
	else {
		fprintf(outfile, "Tableau[%d]->eq_occ: ", v);
		occ = tableau[v]->eq_occ;
		do {
			fprintf(outfile, "%d", occ->id);
			if (occ = occ->next) fprintf(outfile, ", ");
		} while (occ);
		putchar('\n');
	}
}

print_ineq_occ(v)
int v;
{
OCC_ptr occ;
	if (!tableau[v]) fprintf(outfile, "Tab[%d] = NULL\n", v);
	else
	if (!tableau[v]->ineq_occ) 
		fprintf(outfile, "Tab[%d]->ineq_occ = NULL\n", v);
	else {
		fprintf(outfile, "Tableau[%d]->ineq_occ: ", v);
		occ = tableau[v]->ineq_occ;
		do {
			fprintf(outfile, "%d", occ->id);
			if (occ = occ->next) fprintf(outfile, ", ");
		} while (occ);
		putchar('\n');
	}
}

print_nlin_occ(v)
int v;
{
NL_OCC_ptr occ;
NL_EQN_ptr nl_eqn;
NL_PARAMS1_ptr params1;
	if (!tableau[v]) fprintf(outfile, "Tab[%d] = NULL\n", v);
	else
	if (!tableau[v]->nlin_occ) 
			fprintf(outfile, "Tab[%d]->nlin_occ = NULL\n", v);
	else {
		fprintf(outfile, "Tab[%d]->nlin_occ: ", v);
		occ = tableau[v]->nlin_occ;
		do {
			nl_eqn = occ->nl_eqn;
			params1 = nl_eqn->params1;
			fprintf(outfile, "(ty:%d c99:%g v0:%d v1:%d v2:%d)",
				nl_eqn->type, params1->coef,
				params1->id0, params1->id1, params1->id2);
			if (occ = occ->next) fprintf(outfile, ", ");
		} while (occ);
		putchar('\n');
	} 
}

print_occ_tableau()
{
int i;
	fprintf(outfile, 
		"---------------- Occ_tableau ------------------------\n");
	for (i = SOLVER_SZ - 1; i >= slack_id; i--) 
		if (tableau[i]) {
			if (tableau[i]->eq_occ) print_eq_occ(i);
			if (tableau[i]->ineq_occ) print_ineq_occ(i);
			if (tableau[i]->nlin_occ) print_nlin_occ(i);
		}
	for (i = solver_id; i >= 1; i--) 
		if (tableau[i]) {
			if (tableau[i]->eq_occ) print_eq_occ(i);
			if (tableau[i]->ineq_occ) print_ineq_occ(i);
			if (tableau[i]->nlin_occ) print_nlin_occ(i);
		}
	fprintf(outfile, 
		"-----------------------------------------------------\n");
}

print_basic_vars()
{
int i;
	for (i = SOLVER_SZ - 1; i >= slack_id; i--) 
		if (tableau[i] && tableau[i]->basic_eqn)
			fprintf(outfile, 
				"Tab[%d]->basic_eqn = %d\n", i, tableau[i]->basic_eqn);
	for (i = solver_id; i >= 1; i--) 
		if (tableau[i] && tableau[i]->basic_eqn)
			fprintf(outfile, 
				"Tab[%d]->basic_eqn = %d\n", i, tableau[i]->basic_eqn);
}

print_nl_eqn(nl_eqn)
NL_EQN_ptr nl_eqn;
{
NL_PARAMS1_ptr params1;
int i, *t, type, v0, v1, v2;
double c, c2;
	params1 = nl_eqn->params1;
	v0 = params1->id0; v1 = params1->id1; v2 = params1->id2;
	c = params1->coef;
	if (nl_eqn->type == SOLVER_EVAL) {
printterm(outfile, v0, 0); fprintf(outfile, " = ");
	} else fprintf(outfile,"X%d = ", v0);	
	switch (type = nl_eqn->type) {
		case SOLVER_MULT: 
			if (!is_equal(c, 1.0)) {
				fprintf(outfile, "%g * ", c);
			}
			fprintf(outfile, "X%d * X%d\n", v1, v2);
			break;
		case SOLVER_ABS: 
		case SOLVER_ABS0: 
		case SOLVER_SIN:
		case SOLVER_COS:
			output_arith_func(type);
			fprintf(outfile, "X%d)\n", v1);
			break;
		case SOLVER_POW: 
		case SOLVER_POW0: 
		case SOLVER_POW1: 
		case SOLVER_POW2: 
			output_arith_func(type);
			fprintf(outfile, "X%d, X%d)\n", v1, v2);
			break;
		case SOLVER_EVAL:
			output_arith_func(type);
			t = (int *) findbind(v1);
			if (tag(*t) == TAG_PAR) fprintf(outfile, "X%d)\n", v1);
			else {
				print_var2pos(outfile, t);
				fprintf(outfile, ")\n");
			}
			break;
		default: fatal("53743");
	}
}

