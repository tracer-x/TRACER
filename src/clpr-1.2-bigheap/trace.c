/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: trace.c                                              *
 ***************************************************************/

#include "standard.h"
#include "config.h"
#include "parse.h"
#include "lib.h"
#include "compile.h"
#include "opcodes.h"
#include "emul.h"

#define is_switch_inst(val) \
	(val == SWITCHONNIL || val == SWITCHONDOT || val == SWITCHONCON || \
	 val == SWITCHONFUNC || val == SWITCHONREAL || val == SWITCHONTYPE || \
	 val == SWITCH2ONCON || val == SWITCH2ONFUNC || val == SWITCH2ONREAL || \
	 val == ENTERSWTYPE)
#define is_mult_inst(val) \
	(val == SOLVE_MULT || val == SOLVE_MULT1)
#define is_nlin3_inst(val) \
	(val == SOLVE_MIN || val == SOLVE_MAX || val == SOLVE_POW)
#define is_nlin2_inst(val) \
	(val == SOLVE_ABS || val == SOLVE_SIN || val == SOLVE_ARCSIN || \
	 val == SOLVE_COS || val == SOLVE_ARCCOS || val == SOLVE_EVAL)

ASMREC asmlist[] = 
	{
	{ NOOP, "noop", 0, 0, 0, 0, 0, 0},
	{ CALLP, "callp", 1, ADDRESS, 0, 0, 0, 0},
	{ CALLX, "callx", 0, 0, 0, 0, 0, 0},
	{ JUMPX, "jumpx", 0, 0, 0, 0, 0, 0},
	{ SAVECURCP, "savecurcp", 1, REG, 0, 0, 0, 0},
	{ SAVEPREVCP, "saveprevcp", 1, REG, 0, 0, 0, 0},
	{ SAVE, "save", 1, SINT, 0, 0, 0, 0},
	{ RESTORE, "restore", 0, 0, 0, 0, 0, 0},
	{ PROCEED, "proceed", 0, 0, 0, 0, 0, 0},

	{ GETPVAR, "getpvar", 2, VARIABLE, REG, 0, 0, 0},
	{ GETPVAL, "getpval", 2, VARIABLE, REG, 0, 0, 0},
	{ GETTVAR, "gettvar", 2, REG, REG, 0, 0, 0},
	{ GETTVAL, "gettval", 2, REG, REG, 0, 0, 0},
	{ GETSTR, "getstr", 2, FUNCTOR, REG, 0, 0, 0},
	{ GETLIST, "getlist", 1, REG, 0, 0, 0, 0},
	{ GETCON, "getcon", 2, CONSTANT, REG, 0, 0, 0},
	{ GETNIL, "getnil", 1, REG, 0, 0, 0, 0},

	{ GET1PVAR, "get1pvar", 1, REG, 0, 0, 0, 0},
	{ GET1PVAL, "get1pval", 1, REG, 0, 0, 0, 0},
	{ GET1TVAR, "get1tvar", 1, REG, 0, 0, 0, 0},
	{ GET1TVAL, "get1tval", 1, REG, 0, 0, 0, 0},
	{ GET1STR, "get1str", 1, FUNCTOR, 0, 0, 0, 0},
	{ GET1LIST, "get1list", 0, 0, 0, 0, 0, 0},
	{ GET1CON, "get1con", 1, CONSTANT, 0, 0, 0, 0},
	{ GET1NIL, "get1nil", 0, 0, 0, 0, 0, 0},

	{ GET2PVAR, "get2pvar", 1, REG, 0, 0, 0, 0},
	{ GET2PVAL, "get2pval", 1, REG, 0, 0, 0, 0},
	{ GET2TVAR, "get2tvar", 1, REG, 0, 0, 0, 0},
	{ GET2TVAL, "get2tval", 1, REG, 0, 0, 0, 0},
	{ GET2STR, "get2str", 1, FUNCTOR, 0, 0, 0, 0},
	{ GET2LIST, "get2list", 0, 0, 0, 0, 0, 0},
	{ GET2CON, "get2con", 1, CONSTANT, 0, 0, 0, 0},
	{ GET2NIL, "get2nil", 0, 0, 0, 0, 0, 0},

	{ GET3PVAR, "get3pvar", 1, REG, 0, 0, 0, 0},
	{ GET3PVAL, "get3pval", 1, REG, 0, 0, 0, 0},
	{ GET3TVAR, "get3tvar", 1, REG, 0, 0, 0, 0},
	{ GET3TVAL, "get3tval", 1, REG, 0, 0, 0, 0},
	{ GET3STR, "get3str", 1, FUNCTOR, 0, 0, 0, 0},
	{ GET3LIST, "get3list", 0, 0, 0, 0, 0, 0},
	{ GET3CON, "get3con", 1, CONSTANT, 0, 0, 0, 0},
	{ GET3NIL, "get3nil", 0, 0, 0, 0, 0, 0},

	{ UNIT1VAR, "unit1var", 0, 0, 0, 0, 0, 0},
	{ UNIT2VAR, "unit2var", 0, 0, 0, 0, 0, 0},
	{ UNIT3VAR, "unit3var", 0, 0, 0, 0, 0, 0},

	{ UNIPVAR, "unipvar", 1, VARIABLE, 0, 0, 0, 0},
	{ UNIPVAL, "unipval", 1, VARIABLE, 0, 0, 0, 0},
	{ UNITVAR, "unitvar", 1, REG, 0, 0, 0, 0},
	{ UNITVAL, "unitval", 1, REG, 0, 0, 0, 0},
	{ UNICON, "unicon", 1, CONSTANT, 0, 0, 0, 0},
	{ UNINIL, "uninil", 0, 0, 0, 0, 0, 0},
	{ PUTPVAR, "putpvar", 2, VARIABLE, REG, 0, 0, 0},
	{ PUTPVARN, "putpvarn", -1, 0, 0, 0, 0, 0},
	{ PUTPVAL, "putpval", 2, VARIABLE, REG, 0, 0, 0},
	{ PUTPVALN, "putpvaln", -1, 0, 0, 0, 0, 0},
	{ PUTTVAR, "puttvar", 1, REG, 0, 0, 0, 0},
	{ PUTTVAL, "puttval", 2, REG, REG, 0, 0, 0},
	{ PUTSTR, "putstr", 2, FUNCTOR, REG, 0, 0, 0},
	{ PUTLIST, "putlist", 1, REG, 0, 0, 0, 0},
	{ PUTCON, "putcon", 2, CONSTANT, REG, 0, 0, 0},
	{ PUTNIL, "putnil", 1, REG, 0, 0, 0, 0},
	{ BLDPVAR, "bldpvar", 1, VARIABLE, 0, 0, 0, 0},
	{ BLDPVAL, "bldpval", 1, VARIABLE, 0, 0, 0, 0},
	{ BLDPVALN, "bldpvaln", -1, 0, 0, 0, 0, 0},
	{ BLDTVAR, "bldtvar", 1, REG, 0, 0, 0, 0},
	{ BLDTVAL, "bldtval", 1, REG, 0, 0, 0, 0},	
	{ BLDTVALN, "bldtvaln", -1, 0, 0, 0, 0, 0},	
	{ BLDCON, "bldcon", 1, CONSTANT, 0, 0, 0, 0},
	{ BLDNIL, "bldnil", 0, 0, 0, 0, 0, 0},
	{ UNINUM, "uninum", 1, FLOAT, 0, 0, 0, 0},
	{ BLDNUM, "bldnum", 1, FLOAT, 0, 0, 0, 0},
	{ TRY, "try", 2, ADDRESS, BYTE, 0, 0, 0},
	{ ENTERTRYELSE, "enter_try_else", 3, ADDRESS, ADDRESS, CODEADDR, 0, 0},
	{ RETRY, "retry", 1, ADDRESS, 0, 0, 0, 0},
	{ TRUST, "trust", 1, ADDRESS, 0, 0, 0, 0},
	{ HALT, "halt", 0, 0, 0, 0, 0, 0},
	{ PRINT, "$print", 1, REG, 0, 0, 0, 0},
	{ JUMP, "jump", 1, ADDRESS, 0, 0, 0, 0},
	{ FFAIL, "fail", 0, 0, 0, 0, 0, 0},
	{ GFAIL, "$gfail", 0, 0, 0, 0, 0, 0},
	{ PUTUVAL, "putuval", 2, VARIABLE, REG, 0, 0, 0},
	{ CRESTORE, "crestore", 0, 0, 0, 0, 0, 0},

	{ SWITCHONNIL, "sw_on_nil", 1, SINT, 0, 0, 0, 0},
	{ SWITCHONDOT, "sw_on_list", 1, SINT, 0, 0, 0, 0},
	{ SWITCHONCON, "sw_on_con", 1, SINT, 0, 0, 0, 0},
	{ SWITCHONFUNC, "sw_on_func", 1, SINT, 0, 0, 0, 0},
	{ SWITCHONREAL, "sw_on_real", 1, SINT, 0, 0, 0, 0},
	{ SWITCH2ONCON, "sw2_on_con", 1, SINT, 0, 0, 0, 0},
	{ SWITCH2ONFUNC, "sw2_on_func", 1, SINT, 0, 0, 0, 0},
	{ SWITCH2ONREAL, "sw2_on_real", 1, SINT, 0, 0, 0, 0},
	{ SWITCHONTYPE, "sw_on_type", 5, ADDRESS, 0, 0, 0, 0},
	{ SWITCHONCONFUNC, "sw_on_cfunc", 2, ADDRESS, ADDRESS, 0, 0, 0},
	{ ENTERSWCON, "enter_swcon", 1, ADDRESS, 0, 0, 0, 0},
	{ ENTERSWFUNC, "enter_swfunc", 1, ADDRESS, 0, 0, 0, 0},
	{ ENTERSWREAL, "enter_swreal", 1, ADDRESS, 0, 0, 0, 0},
	{ ENTERSWTYPE, "enter_swtype", 1, ADDRESS, 0, 0, 0, 0},
	{ ENTERSWCONFUNC, "enter_sw_cfunc", 3, ADDRESS, ADDRESS, ADDRESS, 0, 0},

	{ ADD1PFVAR, "add1pfvar", 1, VARIABLE, 0, 0, 0, 0},
	{ ADDPFVAR, "addpfvar", 2, FLOAT, VARIABLE, 0, 0, 0},
	{ ADD1PFVAL, "add1pfval", 1, VARIABLE, 0, 0, 0, 0},
	{ ADDPFVAL, "addpfval", 2, FLOAT, VARIABLE, 0, 0, 0},
	{ ADDT1PFVAR, "addt1pfvar", 1, REG, 0, 0, 0, 0},
	{ ADDTPFVAR, "addtpfvar", 2, FLOAT, REG, 0, 0, 0},
	{ ADDT1PFVAL, "addt1pfval", 1, REG, 0, 0, 0, 0},
	{ ADDTPFVAL, "addtpfval", 2, FLOAT, REG, 0, 0, 0},

	{ INITPF, "initpf", 1, FLOAT, 0, 0, 0, 0},
	{ INIT0PF, "init0pf", 0, 0, 0, 0, 0, 0},
	{ SOLVE_PF0, "solve_pf0", 0, 0, 0, 0, 0, 0},
	{ REGINIT, "reginit", 1, REG, 0, 0, 0, 0},
	{ SOLVE_GE0, "solve_ge0", 0, 0, 0, 0, 0, 0},
	{ SOLVE_GT0, "solve_gt0", 0, 0, 0, 0, 0, 0},
	{ FASTCUT, "fastcut", 1, REG, 0, 0, 0, 0},
	{ SAVECUT, "savecut", 2, REG, VARIABLE, 0, 0, 0},
	{ DOCUT, "docut", 1, VARIABLE, 0, 0, 0, 0},
	{ PRINTF, "$printf", 2, REG, REG, 0, 0, 0},
	{ DUMP, "$dump", 2, STRINGLOC, REG, 0, 0, 0},
	{ READ, "$read", 1, VARIABLE, 0, 0, 0, 0},
	{ READREG, "$readreg", 1, REG, 0, 0, 0, 0},
	{ RETRACT, "$retract", 1, REG, 0, 0, 0, 0},
	{ DETABLE, "$detable", 1, REG, 0, 0, 0, 0},
	{ ROOLE, "rule", 2, REG, REG, 0, 0, 0},
	{ ROOLE_AGAIN, "rule_again", 0, 0, 0, 0, 0, 0},
	{ SPCALL, "spcall", 1, SINT, 0, 0, 0, 0},
	{ DBGENTRY, "dbgentry", 2, FUNCTOR, SINT, 0, 0, 0},
	{ BLDVOID, "bldvoid", 0, 0, 0, 0, 0, 0},
	{ BLDVOIDN, "bldvoidn", -1, 0, 0, 0, 0, 0},
	{ UNIVOID, "univoid", 0, 0, 0, 0, 0, 0},
	{ UNIVOIDN, "univoid", -1, 0, 0, 0, 0, 0},

	{ SOLVE_MULT1, "solve_mult1", 4, FLEXARG, FLEXARG, FLEXARG, 0, 0},
	{ SOLVE_MULT, "solve_mult", 5, FLEXARG, FLEXARG, FLEXARG, 0, 0},
	{ SOLVE_MIN, "solve_min", 4, FLEXARG, FLEXARG, FLEXARG, 0, 0},
	{ SOLVE_MAX, "solve_max", 4, FLEXARG, FLEXARG, FLEXARG, 0, 0},
	{ SOLVE_POW, "solve_pow", 4, FLEXARG, FLEXARG, FLEXARG, 0, 0},
	{ SOLVE_ABS, "solve_abs", 3, FLEXARG, FLEXARG, FLEXARG, 0, 0},
	{ SOLVE_SIN, "solve_sin", 3, FLEXARG, FLEXARG, FLEXARG, 0, 0},
	{ SOLVE_COS, "solve_cos", 3, FLEXARG, FLEXARG, FLEXARG, 0, 0},
	{ SOLVE_ARCSIN, "solve_arcsin", 3, FLEXARG, FLEXARG, FLEXARG, 0, 0},
	{ SOLVE_ARCCOS, "solve_arccos", 3, FLEXARG, FLEXARG, FLEXARG, 0, 0},
	{ SOLVE_EVAL, "solve_eval", 3, FLEXARG, FLEXARG, FLEXARG, 0, 0},

	{ GETTNUM, "gettnum", 2, FLOAT, REG, 0, 0, 0},
	{ GETPNUM, "getpnum", 2, FLOAT, VARIABLE, 0, 0, 0},
	{ PUTTNUM, "puttnum", 2, FLOAT, REG, 0, 0, 0},
	{ PUTPNUM, "putpnum", 2, FLOAT, VARIABLE, 0, 0, 0},

	{ UNILIST, "unilist", 0, 0, 0, 0, 0, 0},
	{ BLDLIST, "bldlist", 0, 0, 0, 0, 0, 0},
	{ UNISTR, "unistr", 1, FUNCTOR, 0, 0, 0, 0},
	{ BLDSTR, "bldstr", 1, FUNCTOR, 0, 0, 0, 0},

	{ UNI2PPVAR, "uni2ppvar", 2, VARIABLE, VARIABLE, 0, 0, 0},
	{ UNI2PTVAR, "uni2ptvar", 2, VARIABLE, REG, 0, 0, 0},
	{ UNI2TPVAR, "uni2tpvar", 2, REG, VARIABLE, 0, 0, 0},
	{ UNI2TTVAR, "uni2ttvar", 2, REG, REG, 0, 0, 0},
	{ UNI2TVVAR, "uni2tvvar", 1, REG, 0, 0, 0, 0},
	{ UNI2VTVAR, "uni2vtvar", 1, REG, 0, 0, 0, 0},
	{ UNI2PVVAR, "uni2pvvar", 1, VARIABLE, 0, 0, 0, 0},
	{ UNI2VPVAR, "uni2vpvar", 1, VARIABLE, 0, 0, 0, 0},

	{ DIRSAVECUT, "dirsavecut", 1, VARIABLE, 0, 0, 0, 0},

        { JZF, "jzf", 2, REG, ADDRESS, 0, 0, 0 },
        { LITF, "litf", 2, FLOAT, REG, 0, 0, 0 },
        { SUBF, "subf", 3, REG, REG, REG, 0, 0 },
        { JGF, "jgf", 2, REG, ADDRESS, 0, 0, 0 },
        { STF, "stf", 2, REG, VARIABLE, 0, 0, 0},
        { MVF, "mvf", 2, REG, REG, 0, 0, 0}, 
        { LDF, "ldf", 2, VARIABLE, REG, 0, 0, 0}, 
        { ADDF, "addf", 3, REG, REG, REG, 0, 0}, 
        { GETF, "getf", 2, REG, REG, 0, 0, 0},
        { PUTF, "putf", 2, REG, REG, 0, 0, 0},
        { MULF, "mulf", 3, REG, REG, REG, 0, 0}, 
        { DIVF, "divf", 3, REG, REG, REG, 0, 0}, 

	{ RETRACT_AGAIN, "$retract_again", 0, 0, 0, 0, 0, 0},
	{ ASSERT, "assert", 0, 0, 0, 0, 0, 0},
	{ DYNAMIC_TRY, "dynamic_try", 2, SINT, FUNCTOR, 0, 0, 0},
	{ DYNAMIC_0_TRY, "dynamic_0_try", 2, SINT, FUNCTOR, 0, 0, 0},
	{ DYN_CALL, "dyn_call", 1, FUNCTOR, 0, 0, 0, 0},
	{ DYN_JUMP, "dyn_jump", 1, FUNCTOR, 0, 0, 0, 0},
	{ CALLI, "calli", 1, FUNCTOR, 0, 0, 0, 0},
	{ JUMPI, "jumpi", 1, FUNCTOR, 0, 0, 0, 0},
	{ -1, 0, 0, 0, 0, 0, 0, 0}

	};

char fail_lable[5] = { 'f', 'a', 'i', 'l', '\0' };
char *find_trace_lable();
static int print_multi_inst();
static int print_switch();
static int print_mult();
static int print_nlin2();
static int print_nlin3();
static int find_asm_entry();

extern int HEAP_START, LSTACK;
extern FILE *outfile;
extern SPNODE *spred[];
extern FUNCTREC functors[];
extern unsigned int *code;
extern float int_to_float();
extern char *find_lable_for_addr();

/*---------------------------------------------------------------------------*/

clam_trace(int_pc) /*** "ctrace" ***/
int int_pc;
{
	print_inst(int_pc);
}

print_asm(start, end) /*** "als <predicate-name>" ***/
int start, end;
{
int i;
	i = start; 
	while (i <= end) i = print_inst(i);
}

extern int *regs;
extern int *heap;

print_inst(int_pc)
int int_pc;
{
int i, j, k, opc, arity;
int *pc;
char *s, *s1, *mnemonic;
double tf, *tfp;
	pc = ptrpc(int_pc);
	if (s = find_trace_lable(pc)) fprintf(outfile, "%s\n", s);
	if ((i = find_asm_entry(*pc)) == -1) {
		fprintf(outfile, "<unknown opcode: [%d]=%d>\n", int_pc, *pc);
		return (int_pc + 1);
	}
	opc = asmlist[i].num;
	mnemonic = asmlist[i].mnemonic;
	arity = asmlist[i].nargs;	
	fprintf(outfile, "%4d", int_pc);
	print_spaces(9);
	fprintf(outfile, "%s", mnemonic); 
	print_spaces(15 - strlen(mnemonic));
	if (arity < 0) return print_multi_inst(opc, int_pc);
	if (is_switch_inst(opc)) return print_switch(opc, arity, int_pc);
	if (is_mult_inst(opc)) return print_mult(opc, arity, int_pc);
	if (is_nlin2_inst(opc)) return print_nlin2(opc, arity, int_pc);
	if (is_nlin3_inst(opc)) return print_nlin3(opc, arity, int_pc);
	if (opc == CALLP || opc == JUMP) {
		fprintf(outfile, "%s\n", find_trace_lable(*(pc + 1)));
		return (int_pc + 2);
	} 
	if (opc == SPCALL) {
		fprintf(outfile, "[%s/%d] ", 
                        spred[*(pc + 1)]->str, spred[*(pc + 1)]->arity);
		for (arity=spred[pc[1]]->arity,j=0; j < arity; j++)
			fprintf(outfile, "#%d ", pc[j+2]);
		putc('\n', outfile);
		return (int_pc + 2 + arity);
	}
	fflush(outfile);
	tfp = &tf;
	for (j = 1; j <= arity; j++) {
	    if (j > 1) fprintf(outfile, ", ");
		k = (int) *(pc + j);
		switch(asmlist[i].type[j - 1]) {
			case ADDRESS:
				if (k) 
					if (s1=find_trace_lable((int *) k))
						fprintf(outfile, "%s", s1);
					else fprintf(outfile, "(%d)", intpc(k));
				else fprintf(outfile, "0\n");
				break;
			case CODEADDR:
				if (k) fprintf(outfile, "%d", intpc(k));
				else fprintf(outfile, "(nil)\n");
				break;
			case SINT:
			case BYTE:
				fprintf(outfile, "%d", k);
				break;
			case VARIABLE:
				fprintf(outfile, "_%d", k);
				break;
			case REG:
				fprintf(outfile, "#%d", k);
				break;
			case FLEXARG:
				if (k >= LSTACK) fprintf(outfile, "_%d", k - LSTACK);
				if (k < HEAP_START) fprintf(outfile, "#%d", k);
				else fprintf(outfile, "?%d", k);
				break;
			case FUNCTOR:
				fprintf(outfile, "%s/%d", 
					functors[k].pname, functors[k].arity);
				break;
			case CONSTANT:
				fprintf(outfile, "%s", functors[k].pname);
				break;
			case FLOAT:
				*((int *) tfp) = k;
				*(((int *) tfp) + 1) = *(pc + j + 1);
				fprintf(outfile, "%g", tf);
				int_pc++;
				pc++;
				break;
			case STRINGLOC:
				fprintf(outfile, "\"%s\"", functors[k].pname);
				break;
			default:
				fatal("79965");
		}
	}
	fprintf(outfile, "\n");
	return (int_pc + arity + 1);
}

/*------------------------------------------------------- specials ----------*/

static print_multi_inst(val, int_pc)
int val, int_pc;
{
int i, n;
int *pc, *tmp;

    pc = ptrpc(int_pc);
    switch (val) {
    case BLDVOIDN:
    case UNIVOIDN:
        fprintf(outfile,"%d\n", pc[1]);
        return int_pc + 2 ;
        break;
    case PUTPVALN:
    case PUTPVARN:
        n = pc[1];
        fprintf(outfile, "#%d ", n);
        for (i=0; i < 2*n; i++)
            fprintf(outfile,"%d ", pc[2+i]);
        fprintf(outfile, "\n");
        return int_pc + 2 + 2*n;
        break;
    case BLDPVALN:
    case BLDTVALN:
        n = pc[1];
        fprintf(outfile, "#%d ", n);
        for (i=0; i < n; i++)
            fprintf(outfile,"%d ", pc[2+i]);
        fprintf(outfile, "\n");
        return int_pc + 2 + n;
        break;
    default:
        fatal(88756);
    }
}

static print_switch(val, n_arg, int_pc)
int val, n_arg, int_pc;
{
int i, n;
int *pc, *tmp;
	pc = ptrpc(int_pc);
	switch (val) {
	case SWITCHONNIL:
	case SWITCHONDOT:
		fprintf(outfile, "%d\n", intpc(*(pc + 1)));
		int_pc += 2;
		break;
	case SWITCHONCON:
	case SWITCH2ONCON:
	case SWITCHONFUNC:
	case SWITCH2ONFUNC:
		tmp = (int *) *(pc + 1);
		i = intpc(tmp);
		n = (i - int_pc) / 2;
		fprintf(outfile, "%d (%d entries)\n", i, n);
		tmp = pc + 2;
		for (i = 1; i < n; i++) {
			fprintf(outfile, "%4d", intpc(tmp));
			print_spaces(9);
			fprintf(outfile, "%s: %s\n",
				functors[mask(*tmp)].pname, 
				find_trace_lable(*(tmp + 1)));
			tmp += 2;
		}
		fprintf(outfile, "%4d", intpc(tmp));
		print_spaces(9);
		fprintf(outfile, "def: %s\n", find_trace_lable(*(tmp + 1)));
		int_pc += 2 * n + 2;
		break;
	case SWITCHONREAL:
	case SWITCH2ONREAL:
		tmp = (int *) *(pc + 1);
		i = intpc(tmp);
		n = (i - int_pc) / 2;
		fprintf(outfile, "%d (%d entries)\n", i, n);
		tmp = pc + 2;
		for (i = 1; i < n; i++) {
			fprintf(outfile, "%4d", intpc(tmp));
			print_spaces(9);
			fprintf(outfile, "%f: %s\n",
				int_to_float(*tmp),
				find_trace_lable(*(tmp + 1)));
			tmp += 2;
		}
		fprintf(outfile, "%4d", intpc(tmp));
		print_spaces(9);
		fprintf(outfile, "def: %s\n", find_trace_lable(*(tmp + 1)));
		int_pc += 2 * n + 2;
		break;
    case ENTERSWTYPE:
        fprintf(outfile, "%s %s %s %s %s %d\n",
            find_trace_lable(*(pc + 1)),
            find_trace_lable(*(pc + 2)),
            find_trace_lable(*(pc + 3)),
            find_trace_lable(*(pc + 4)),
            find_trace_lable(*(pc + 5)),
            intpc(*(pc + 6)));
        int_pc += 7;
        break;
	case SWITCHONTYPE:
		fprintf(outfile, "%s %s %s %s %s\n", 
			find_trace_lable(*(pc + 1)), 
			find_trace_lable(*(pc + 2)), 
			find_trace_lable(*(pc + 3)), 
			find_trace_lable(*(pc + 4)), 
			find_trace_lable(*(pc + 5)));
		int_pc += 6;
		break;
	case SWITCHONCONFUNC:
		fprintf(outfile, "%s %s\n", 
			find_trace_lable(*(pc + 1)), 
			find_trace_lable(*(pc + 2)));
		int_pc += 3;
		break;
	default:
		fatal("85308");
	}
	return int_pc;
}

static print_mult(val, n_arg, int_pc)
int val, n_arg, int_pc;
{
unsigned int opc;
char buf[7];
double *c_ptr, c;
int *pc;
	pc = ptrpc(int_pc);
	opc = *(pc + 1);
	strcpy(buf, "000000");
	if (bit6(opc)) buf[0] = '1';
	if (bit5(opc)) buf[1] = '1';
	if (bit4(opc)) buf[2] = '1';
	if (bit3(opc)) buf[3] = '1';
	if (bit2(opc)) buf[4] = '1';
	if (bit1(opc)) buf[5] = '1';
	fprintf(outfile, "(%s)", buf);
	if (val == SOLVE_MULT) {
		c_ptr = &c;
		*((int *) c_ptr) = *(pc + 2);
		*(((int *) c_ptr) + 1) = *(pc + 3);
		fprintf(outfile, " %g", c);
		fprintf(outfile, " %d %d %d\n", *(pc + 4), *(pc + 5), *(pc + 6));
		return (int_pc + 7);
	} else {
		fprintf(outfile, " %d %d %d\n", *(pc + 2), *(pc + 3), *(pc + 4));
		return (int_pc + 5);
	}
}

static print_nlin2(val, n_arg, int_pc)
int val, n_arg, int_pc;
{
unsigned int opc;
double *c_ptr, c;
int *pc;
	pc = ptrpc(int_pc);
	opc = *(pc + 1);
	if (!bit3(opc)) fprintf(outfile, "!");
	if (bit4(opc)) fprintf(outfile,"_"); else fprintf(outfile,"#");
	fprintf(outfile, "%d, ", *(pc + 2));
	if (!bit1(opc)) fprintf(outfile, "!");
	if (bit2(opc)) fprintf(outfile,"_"); else fprintf(outfile,"#");
	fprintf(outfile, "%d\n", *(pc + 3));
	return (int_pc + 4);
}

static print_nlin3(val, n_arg, int_pc)
int val, n_arg, int_pc;
{
unsigned int opc;
double *c_ptr, c;
int *pc;
	pc = ptrpc(int_pc);
	opc = *(pc + 1);
	if (!bit5(opc)) fprintf(outfile, "!");
	if (bit6(opc)) fprintf(outfile,"_"); else fprintf(outfile,"#");
	fprintf(outfile, "%d, ", *(pc + 2));
	if (!bit3(opc)) fprintf(outfile, "!");
	if (bit4(opc)) fprintf(outfile,"_"); else fprintf(outfile,"#");
	fprintf(outfile, "%d, ", *(pc + 3));
	if (!bit1(opc)) fprintf(outfile, "!");
	if (bit2(opc)) fprintf(outfile,"_"); else fprintf(outfile,"#");
	fprintf(outfile, "%d\n", *(pc + 4));
	return (int_pc + 5);
}

/*------------------------------------------------------- aux stuff ---------*/

print_spaces(n)
int n;
{
	for (; n > 0; n--) fprintf(outfile, " ");
}

static find_asm_entry(val)
int val;
{
int i;
	for (i = 0; asmlist[i].num != -1 && asmlist[i].num != val; i++) {}
	return ((asmlist[i].num != -1) ? i : -1);
}

find_asm_by_mnemonic(s)
char *s;
{
int i;
	for (i = 0; asmlist[i].num != -1 && strcmp(asmlist[i].mnemonic,s); i++) {}
	return ((asmlist[i].num != -1) ? i : -1);
}

char *find_trace_lable(addr)
int *addr;
{
char *s;
	s = find_lable_for_addr(addr);
	if (s && !strcmp(s, "E$0_$fail/0")) return fail_lable;
	else return s;
}

f_is_switch_inst(i)
int i;
{
return is_switch_inst(i);
}

char *op_to_name(op)
int op;
{
    int i;

    i = find_asm_entry(op);
    return asmlist[i].mnemonic;
}
