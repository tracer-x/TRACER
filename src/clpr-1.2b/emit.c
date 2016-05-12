/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: emit.c                                               *
 ***************************************************************/

#include "standard.h"
#include "config.h"
#include "parse.h"
#include "symbols.h"
#include "lib.h"
#include "compile.h"
#include "opcodes.h"
#include "emul.h"

#define clear_last()			last_opcode=BADINST
#define set_last(op)		{ last_opcode=op; last_opaddr = pcode; }
#define reset_last(op)		last_opcode=op;
#define match_last(op)		(opt && last_opcode == op)
#define gen_word(op)		code[pcode++]=(unsigned int) op
#define gen_lastword(op, off)	code[last_opaddr+off]=(unsigned int) op
#define lastword_at(off)	(code[last_opaddr + off])

static int last_opcode=BADINST, last_opaddr;

static int opt = 1;

int has_been_saved;
int save_nvars;
int must_do_save;
double *floatp, floatstore;

extern int pcode;

extern VREC *notevar();
extern int find_loc_for_lable();
extern int punresolved;
extern unsigned int *code;
extern LABLEREC unresolved[];
extern int s_count[];
extern FUNCTREC functors[];
extern SPNODE *spred[];
extern HASH_L_NODE_ptr p_jump_occ();

/*---------------------------------------------------------------------------*/

init_emit()
{
	clear_last();
}

/*--------------------------------------------------- get -------------------*/

emit_gettnum(f, R)
double f;
int R;
{
	clear_last();
	floatstore = f;
	floatp = &floatstore;
	code[pcode++] = (unsigned int) GETTNUM;
	code[pcode++] = *((unsigned int *) floatp);
	code[pcode++] = *(((unsigned int *) floatp) + 1);
	code[pcode++] = (unsigned int) R;
}

emit_getpnum(f, R)
double f;
int R;
{
	clear_last();
	emit_realsave();
	floatstore = f;
	floatp = &floatstore;
	code[pcode++] = (unsigned int) GETPNUM;
	code[pcode++] = *((unsigned int *) floatp);
	code[pcode++] = *(((unsigned int *) floatp) + 1);
	code[pcode++] = (unsigned int) R;
}

emit_getnil(R)
int R;
{
	clear_last();
	if (R == 1) code[pcode++] = (unsigned int) GET1NIL;
	else if (R == 2) code[pcode++] = (unsigned int) GET2NIL;
	else if (R == 3) code[pcode++] = (unsigned int) GET3NIL;
	else {	
		code[pcode++] = (unsigned int) GETNIL;
		code[pcode++] = (unsigned int) R;
	}
}		

emit_getcon(val, R)
int val, R;
{
	clear_last();
	if (R == 1) {
		code[pcode++] = (unsigned int) GET1CON;
		code[pcode++] = (unsigned int) val;
	} else if (R == 2) {
		code[pcode++] = (unsigned int) GET2CON;
		code[pcode++] = (unsigned int) val;
	} else if (R == 3) {
		code[pcode++] = (unsigned int) GET3CON;
		code[pcode++] = (unsigned int) val;
	} else {	
		code[pcode++] = (unsigned int) GETCON;
		code[pcode++] = (unsigned int) val;
		code[pcode++] = (unsigned int) R;
	}
}		

emit_getstr(val, R)
int val, R;
{
	clear_last();
	if (R == 1) {
		code[pcode++] = (unsigned int) GET1STR;
		code[pcode++] = (unsigned int) val;
	} else if (R == 2) {
		code[pcode++] = (unsigned int) GET2STR;
		code[pcode++] = (unsigned int) val;
	} else if (R == 3) {
		code[pcode++] = (unsigned int) GET3STR;
		code[pcode++] = (unsigned int) val;
	} else {	
		code[pcode++] = (unsigned int) GETSTR;
		code[pcode++] = (unsigned int) val;
		code[pcode++] = (unsigned int) R;
	}
}		

emit_getlist(R)
int R;
{
	clear_last();
	if (R == 1) code[pcode++] = (unsigned int) GET1LIST;
	else if (R == 2) code[pcode++] = (unsigned int) GET2LIST;
	else if (R == 3) code[pcode++] = (unsigned int) GET3LIST;
	else {
		code[pcode++] = (unsigned int) GETLIST;
		code[pcode++] = (unsigned int) R;
	}
}		

emit_gettvar(R1, R2)
int R1, R2;
{
	if (R1 == 1) {
		set_last(GET1TVAR);
		code[pcode++] = (unsigned int) GET1TVAR;
		code[pcode++] = (unsigned int) R2;
	} else if (R1 == 2) {
		set_last(GET1TVAR);
		code[pcode++] = (unsigned int) GET2TVAR;
		code[pcode++] = (unsigned int) R2;
	} else if (R1 == 3) {
		set_last(GET1TVAR);
		code[pcode++] = (unsigned int) GET3TVAR;
		code[pcode++] = (unsigned int) R2;
	} else {
		set_last(GETTVAR);
		code[pcode++] = (unsigned int) GETTVAR;
		code[pcode++] = (unsigned int) R1;
		code[pcode++] = (unsigned int) R2;
	}
}		

emit_gettval(R1, R2)
int R1, R2;
{
	clear_last();
	if (R1 == 1) {
		code[pcode++] = (unsigned int) GET1TVAL;
		code[pcode++] = (unsigned int) R2;
	} else if (R1 == 2) {
		code[pcode++] = (unsigned int) GET2TVAL;
		code[pcode++] = (unsigned int) R2;
	} else if (R1 == 3) {
		code[pcode++] = (unsigned int) GET3TVAL;
		code[pcode++] = (unsigned int) R2;
	} else {
		code[pcode++] = (unsigned int) GETTVAL;
		code[pcode++] = (unsigned int) R1;
		code[pcode++] = (unsigned int) R2;
	}
}		

emit_getpvar(S1, R2)
int S1, R2;
{
	emit_realsave();
	if (S1 == 1) {
		set_last(GET1PVAR);
		code[pcode++] = (unsigned int) GET1PVAR;
		code[pcode++] = (unsigned int) R2;
	} else if (S1 == 2) {
		set_last(GET2PVAR);
		code[pcode++] = (unsigned int) GET2PVAR;
		code[pcode++] = (unsigned int) R2;
	} else if (S1 == 3) {
		set_last(GET3PVAR);
		code[pcode++] = (unsigned int) GET3PVAR;
		code[pcode++] = (unsigned int) R2;
	} else {
		set_last(GETPVAR);
		code[pcode++] = (unsigned int) GETPVAR;
		code[pcode++] = (unsigned int) S1;
		code[pcode++] = (unsigned int) R2;
	}
}		

emit_getpval(S1, R2)
int S1, R2;
{
	clear_last();
	emit_realsave();
	if (S1 == 1) {
		code[pcode++] = (unsigned int) GET1PVAL;
		code[pcode++] = (unsigned int) R2;
	} else if (S1 == 2) {
		code[pcode++] = (unsigned int) GET2PVAL;
		code[pcode++] = (unsigned int) R2;
	} else if (S1 == 3) {
		code[pcode++] = (unsigned int) GET3PVAL;
		code[pcode++] = (unsigned int) R2;
	} else {
		code[pcode++] = (unsigned int) GETPVAL;
		code[pcode++] = (unsigned int) S1;
		code[pcode++] = (unsigned int) R2;
	}
}		

/*--------------------------------------------------- uni -------------------*/

emit_univoid(n)
int n;
{
	if (match_last(UNIVOID)) {
		gen_lastword(UNIVOIDN, 0);
		reset_last(UNIVOIDN);
		gen_word(1 + n);
	} else if (match_last(UNIVOIDN)) {
		gen_lastword(lastword_at(1)+n, 1);
	} else {
		if (n == 1) {
			set_last(UNIVOID);
			gen_word(UNIVOID);
		} else {
			set_last(UNIVOIDN);
			gen_word(UNIVOIDN);
			gen_word(n);
		}
	}
}		

emit_uninum(f)
double f;
{
	clear_last();
	floatstore = f;
	floatp = &floatstore;
	code[pcode++] = (unsigned int) UNINUM;
	code[pcode++] = *((unsigned int *) floatp);
	code[pcode++] = *(((unsigned int *) floatp) + 1);
}

emit_uninil()
{
	clear_last();
	code[pcode++] = (unsigned int) UNINIL;
}		

emit_unilist()
{
	clear_last();
	code[pcode++] = (unsigned int) UNILIST;
}		

emit_unicon(val)
int val;
{
	clear_last();
	code[pcode++] = (unsigned int) UNICON;
	code[pcode++] = (unsigned int) val;
}		

emit_unistr(val)
int val;
{
	clear_last();
	code[pcode++] = (unsigned int) UNISTR;
	code[pcode++] = (unsigned int) val;
}		

emit_uni2ppvar(R1, R2)
int R1, R2;
{
	clear_last();
	emit_realsave();
	code[pcode++] = UNI2PPVAR;
	code[pcode++] = R1;
	code[pcode++] = R2;
}

emit_uni2ptvar(R1, R2)
int R1, R2;
{
	clear_last();
	emit_realsave();
	code[pcode++] = UNI2PTVAR;
	code[pcode++] = R1;
	code[pcode++] = R2;
}

emit_uni2tpvar(R1, R2)
int R1, R2;
{
	clear_last();
	emit_realsave();
	code[pcode++] = UNI2TPVAR;
	code[pcode++] = R1;
	code[pcode++] = R2;
}

emit_uni2ttvar(R1, R2)
int R1, R2;
{
	clear_last();
	code[pcode++] = UNI2TTVAR;
	code[pcode++] = R1;
	code[pcode++] = R2;
}

emit_uni2tvvar(R)
int R;
{
	if (opt) {
		set_last(UNI2TVVAR);
		gen_word(UNI2TVVAR);
		gen_word(R);
	} else {
		gen_word(UNITVAR); gen_word(R);
		gen_word(UNIVOID);
		clear_last();
	}
}

emit_uni2vtvar(R)
int R;
{
	if (opt) {
		set_last(UNI2VTVAR);
		gen_word(UNI2VTVAR);
		gen_word(R);
	} else {
		gen_word(UNIVOID);
		gen_word(UNITVAR); gen_word(R);
		clear_last();
	}
}

emit_uni2pvvar(S)
int S;
{
	emit_realsave();
	if (opt) {
		set_last(UNI2PVVAR);
		gen_word(UNI2PVVAR);
		gen_word(S);
	} else {
		gen_word(UNIPVAR); gen_word(S);
		gen_word(UNIVOID);
		clear_last();
	}
}

emit_uni2vpvar(S)
int S;
{
	emit_realsave();
	if (opt) {
		set_last(UNI2VPVAR);
		gen_word(UNI2VPVAR);
		gen_word(S);
	} else {
		gen_word(UNIVOID);
		gen_word(UNIPVAR); gen_word(S);
		clear_last();
	}
}

emit_unitvar(R)
int R;
{
	clear_last();
	if (R == 1) code[pcode++] = (unsigned int) UNIT1VAR;
	else if (R == 2) code[pcode++] = (unsigned int) UNIT2VAR;
	else if (R == 3) code[pcode++] = (unsigned int) UNIT3VAR;
	else {
		code[pcode++] = (unsigned int) UNITVAR;
		code[pcode++] = (unsigned int) R;
	}
}		

emit_unipvar(R)
int R;
{
	clear_last();
	emit_realsave();
	code[pcode++] = (unsigned int) UNIPVAR;
	code[pcode++] = (unsigned int) R;
}		

emit_unitval(R)
int R;
{
	clear_last();
	code[pcode++] = (unsigned int) UNITVAL;
	code[pcode++] = (unsigned int) R;
}		

emit_unipval(R)
int R;
{
	clear_last();
	emit_realsave();
	code[pcode++] = (unsigned int) UNIPVAL;
	code[pcode++] = (unsigned int) R;
}		

/*--------------------------------------------------- put -------------------*/

emit_puttnum(f, R)
double f;
int R;
{
	clear_last();
	floatstore = f;
	floatp = &floatstore;
	code[pcode++] = (unsigned int) PUTTNUM;
	code[pcode++] = *((unsigned int *) floatp);
	code[pcode++] = *(((unsigned int *) floatp) + 1);
	code[pcode++] = (unsigned int) R;
}

emit_putpnum(f, R)
double f;
int R;
{
	clear_last();
	emit_realsave();
	floatstore = f;
	floatp = &floatstore;
	code[pcode++] = (unsigned int) PUTPNUM;
	code[pcode++] = *((unsigned int *) floatp);
	code[pcode++] = *(((unsigned int *) floatp) + 1);
	code[pcode++] = (unsigned int) R;
}

emit_putnil(reg)
int reg;
{
	clear_last();
	code[pcode++] = (unsigned int) PUTNIL;
	code[pcode++] = (unsigned int) reg;
}

emit_putcon(val, reg)
int val, reg;
{
	clear_last();
	code[pcode++] = (unsigned int) PUTCON;
	code[pcode++] = (unsigned int) val;
	code[pcode++] = (unsigned int) reg;
}

emit_putlist(reg)
int reg;
{
	clear_last();
	code[pcode++] = (unsigned int) PUTLIST;
	code[pcode++] = (unsigned int) reg;
}

emit_putpval(S1, R2)
int S1, R2;
{
	if (!fold_multi2(PUTPVAL, PUTPVALN, S1, R2)) {
		emit_realsave();
		set_last(PUTPVAL);
		code[pcode++] = (unsigned int) PUTPVAL;
		code[pcode++] = (unsigned int) S1;
		code[pcode++] = (unsigned int) R2;
	}
}

emit_putuval(S1, R2)
int S1, R2;
{
	clear_last();
	code[pcode++] = (unsigned int) PUTUVAL;
	code[pcode++] = (unsigned int) S1;
	code[pcode++] = (unsigned int) R2;
}

emit_putpvar(S1, R2)
int S1, R2;
{
	if (!fold_multi2(PUTPVAR, PUTPVARN, S1, R2)) {
		emit_realsave();
		set_last(PUTPVAR);
		code[pcode++] = (unsigned int) PUTPVAR;
		code[pcode++] = (unsigned int) S1;
		code[pcode++] = (unsigned int) R2;
	}
}

emit_puttvar(R)
int R;
{
	clear_last();
	code[pcode++] = (unsigned int) PUTTVAR;
	code[pcode++] = (unsigned int) R;
}

emit_putstr(val, R)
int val, R;
{
	clear_last();
	code[pcode++] = (unsigned int) PUTSTR;
	code[pcode++] = (unsigned int) val;
	code[pcode++] = (unsigned int) R;
}

/*--------------------------------------------------- bld -------------------*/

emit_bldvoid()
{
	if (match_last(BLDVOID)) {
		gen_lastword(BLDVOIDN, 0);
		reset_last(BLDVOIDN);
		gen_word(2);
	} else if (match_last(BLDVOIDN)) {
		gen_lastword(lastword_at(1)+1, 1);
	} else {
		set_last(BLDVOID);
		gen_word(BLDVOID);
	}
}		

emit_bldnum(f)
double f;
{
	clear_last();
	floatstore = f;
	floatp = &floatstore;
	code[pcode++] = (unsigned int) BLDNUM;
	code[pcode++] = *((unsigned int *) floatp);
	code[pcode++] = *(((unsigned int *) floatp) + 1);
}

emit_bldnil()
{
	clear_last();
	code[pcode++] = (unsigned int) BLDNIL;
}

emit_bldlist()
{
	clear_last();
	code[pcode++] = (unsigned int) BLDLIST;
}		

emit_bldcon(val)
int val;
{
	clear_last();
	code[pcode++] = (unsigned int) BLDCON;
	code[pcode++] = (unsigned int) val;
}

emit_bldstr(val)
int val;
{
	clear_last();
	code[pcode++] = (unsigned int) BLDSTR;
	code[pcode++] = (unsigned int) val;
}

emit_bldtvar(R)
int R;
{
	clear_last();
	code[pcode++] = (unsigned int) BLDTVAR;
	code[pcode++] = (unsigned int) R;
}

emit_bldtval(R)
int R;
{
	if (!fold_multi1(BLDTVAL, BLDTVALN, R)) {
		set_last(BLDTVAL);
		code[pcode++] = (unsigned int) BLDTVAL;
		code[pcode++] = (unsigned int) R;
	}
}

emit_bldpval(R)
int R;
{
	if (!fold_multi1(BLDPVAL, BLDPVALN, R)) {
		emit_realsave();
		set_last(BLDPVAL);
		code[pcode++] = (unsigned int) BLDPVAL;
		code[pcode++] = (unsigned int) R;
	}
}

emit_bldpvar(R)
int R;
{
	clear_last();
	emit_realsave();
	code[pcode++] = (unsigned int) BLDPVAR;
	code[pcode++] = (unsigned int) R;
}

/*--------------------------------------------------- switch ----------------*/

emit_switchnil(s, val)
char *s;
int val;
{
	clear_last();
	code[pcode++] = (unsigned int) SWITCHONNIL;
	emit_addr(s, val);
}

emit_switchdot(s, val)
char *s;
int val;
{
	clear_last();
	code[pcode++] = (unsigned int) SWITCHONDOT;
	emit_addr(s, val);
}

emit_switchcon(s, val)
char *s;
int val;
{
	clear_last();
	code[pcode++] = (unsigned int) SWITCHONCON;
	emit_addr(s, val);
}

emit_switch2con(s, val)
char *s;
int val;
{
	clear_last();
	code[pcode++] = (unsigned int) SWITCH2ONCON;
	emit_addr(s, val);
}

emit_switchfunc(s, val)
char *s;
int val;
{
	clear_last();
	code[pcode++] = (unsigned int) SWITCHONFUNC;
	emit_addr(s, val);
}

emit_switch2func(s, val)
char *s;
int val;
{
	clear_last();
	code[pcode++] = (unsigned int) SWITCH2ONFUNC;
	emit_addr(s, val);
}

emit_switchreal(s, val)
char *s;
int val;
{
	clear_last();
	code[pcode++] = (unsigned int) SWITCHONREAL;
	emit_addr(s, val);
}

emit_switch2real(s, val)
char *s;
int val;
{
	clear_last();
	code[pcode++] = (unsigned int) SWITCH2ONREAL;
	emit_addr(s, val);
}

emit_switchtype(s1, s2, s3, s4, s5, val1, val2, val3, val4, val5)
char *s1, *s2, *s3, *s4, *s5;
int val1, val2, val3, val4, val5;
{
	clear_last();
	if (val1 == FAILVAL && val2 == FAILVAL && val5 == FAILVAL) {
		code[pcode++] = (unsigned int) SWITCHONCONFUNC;
		emit_addr(s3, val3);
		emit_addr(s4, val4);
	} else {
		code[pcode++] = (unsigned int) SWITCHONTYPE;
		emit_addr(s1, val1);
		emit_addr(s2, val2);
		emit_addr(s3, val3);
		emit_addr(s4, val4);
		emit_addr(s5, val5);
	}
}

/*------------------------------------------------------ arith --------------*/

emit_reginit(R)
int R;
{
	clear_last();
	code[pcode++] = (unsigned int) REGINIT;
	code[pcode++] = (unsigned int) R;
}

emit_initpf(c)
double c;
{
	clear_last();
	if (is_zero(c)) code[pcode++] = (unsigned int) INIT0PF;
	else {
		code[pcode++] = (unsigned int) INITPF;
		floatstore = c;
		floatp = &floatstore;
		code[pcode++] = *((unsigned int *) floatp);
		code[pcode++] = *(((unsigned int *) floatp) + 1);
	}
}

emit_addpfvar(c, S)
double c;
int S;
{
	clear_last();
	emit_realsave();
	if (is_equal(c, 1.0)) {
		code[pcode++] = (unsigned int) ADD1PFVAR;
		code[pcode++] = (unsigned int) S;
	} else {
		code[pcode++] = (unsigned int) ADDPFVAR;
		floatstore = c;
		floatp = &floatstore;
		code[pcode++] = *((unsigned int *) floatp);
		code[pcode++] = *(((unsigned int *) floatp) + 1);
		code[pcode++] = (unsigned int) S;
	}
}

emit_addpfval(c, S)
double c;
int S;
{
	clear_last();
	emit_realsave();
	if (is_equal(c, 1.0)) {
		code[pcode++] = (unsigned int) ADD1PFVAL;
		code[pcode++] =  (unsigned int) S;
	} else {
		code[pcode++] = (unsigned int) ADDPFVAL;
		floatstore = c;
		floatp = &floatstore;
		code[pcode++] = *((unsigned int *) floatp);
		code[pcode++] = *(((unsigned int *) floatp) + 1);
		code[pcode++] = (unsigned int) S;
	}
}

emit_addtpfvar(c, R)
double c;
int R;
{
	clear_last();
	if (is_equal(c, 1.0)) {
		code[pcode++] = (unsigned int) ADDT1PFVAR;
		code[pcode++] = (unsigned int) R;
	} else {
		code[pcode++] = (unsigned int) ADDTPFVAR;
		floatstore = c;
		floatp = &floatstore;
		code[pcode++] = *((unsigned int *) floatp);
		code[pcode++] = *(((unsigned int *) floatp) + 1);
		code[pcode++] = (unsigned int) R;
	}
}

emit_addtpfval(c, R)
double c;
int R;
{
	clear_last();
	if (is_equal(c, 1.0)) {
		code[pcode++] = (unsigned int) ADDT1PFVAL;
		code[pcode++] = (unsigned int) R;
	} else {
		code[pcode++] = (unsigned int) ADDTPFVAL;
		floatstore = c;
		floatp = &floatstore;
		code[pcode++] = *((unsigned int *) floatp);
		code[pcode++] = *(((unsigned int *) floatp) + 1);
		code[pcode++] = (unsigned int) R;
	}
}

emit_solve_pf0()
{
	clear_last();
	code[pcode++] = (unsigned int) SOLVE_PF0;
}

emit_solve_ge0()
{
	clear_last();
	code[pcode++] = (unsigned int) SOLVE_GE0;
}

emit_solve_gt0()
{
	clear_last();
	code[pcode++] = (unsigned int) SOLVE_GT0;
}

emit_mult(opc, c, i1, i2, i3)
unsigned int opc;
double c;
int i1, i2, i3;
{
	clear_last();
	emit_realsave();
	if (is_equal(c, 1.0)) {
		code[pcode++] = SOLVE_MULT1;
		code[pcode++] = opc;
	} else {
		code[pcode++] = SOLVE_MULT;
		code[pcode++] = opc;
		floatstore = c;
		floatp = &floatstore;
		code[pcode++] = *((unsigned int *) floatp);
		code[pcode++] = *(((unsigned int *) floatp) + 1);
	}
	code[pcode++] = (unsigned int) i1;
	code[pcode++] = (unsigned int) i2;
	code[pcode++] = (unsigned int) i3;
}

emit_min(opc, i1, i2, i3)
unsigned int opc;
int i1, i2, i3;
{
	clear_last();
	emit_realsave();
	code[pcode++] = SOLVE_MIN;
	code[pcode++] = opc;
	code[pcode++] = (unsigned int) i1;
	code[pcode++] = (unsigned int) i2;
	code[pcode++] = (unsigned int) i3;
}

emit_max(opc, i1, i2, i3)
unsigned int opc;
int i1, i2, i3;
{
	clear_last();
	emit_realsave();
	code[pcode++] = SOLVE_MAX;
	code[pcode++] = opc;
	code[pcode++] = (unsigned int) i1;
	code[pcode++] = (unsigned int) i2;
	code[pcode++] = (unsigned int) i3;
}

emit_pow(opc, i1, i2, i3)
unsigned int opc;
int i1, i2, i3;
{
	clear_last();
	emit_realsave();
	code[pcode++] = SOLVE_POW;
	code[pcode++] = opc;
	code[pcode++] = (unsigned int) i1;
	code[pcode++] = (unsigned int) i2;
	code[pcode++] = (unsigned int) i3;
}

emit_abs(opc, i1, i2)
unsigned int opc;
int i1, i2;
{
	clear_last();
	emit_realsave();
	code[pcode++] = SOLVE_ABS;
	code[pcode++] = opc;
	code[pcode++] = (unsigned int) i1;
	code[pcode++] = (unsigned int) i2;
}

emit_sin(opc, i1, i2)
unsigned int opc;
int i1, i2;
{
	clear_last();
	emit_realsave();
	code[pcode++] = SOLVE_SIN;
	code[pcode++] = opc;
	code[pcode++] = (unsigned int) i1;
	code[pcode++] = (unsigned int) i2;
}

emit_cos(opc, i1, i2)
unsigned int opc;
int i1, i2;
{
	clear_last();
	emit_realsave();
	code[pcode++] = SOLVE_COS;
	code[pcode++] = opc;
	code[pcode++] = (unsigned int) i1;
	code[pcode++] = (unsigned int) i2;
}

emit_arcsin(opc, i1, i2)
unsigned int opc;
int i1, i2;
{
	clear_last();
	emit_realsave();
	code[pcode++] = SOLVE_ARCSIN;
	code[pcode++] = opc;
	code[pcode++] = (unsigned int) i1;
	code[pcode++] = (unsigned int) i2;
}

emit_arccos(opc, i1, i2)
unsigned int opc;
int i1, i2;
{
	clear_last();
	emit_realsave();
	code[pcode++] = SOLVE_ARCCOS;
	code[pcode++] = opc;
	code[pcode++] = (unsigned int) i1;
	code[pcode++] = (unsigned int) i2;
}

/*------------------------------------------------------ misc ---------------*/

emit_inst(w)
int w;
{
	clear_last();
	code[pcode++] = (unsigned int) w;
}

emit_word(w)
int w;
{
	code[pcode++] = (unsigned int) w;
}

emit_doubleword(w1, w2)
int w1, w2;
{
	clear_last();
	code[pcode++] = (unsigned int) w1;
	code[pcode++] = (unsigned int) w2;
}

emit_crestore()
{
	if (!(must_do_save && !has_been_saved)) {
		clear_last();
		code[pcode++] = (unsigned int) CRESTORE;
	}
}

emit_restore()
{
	clear_last();
	code[pcode++] = (unsigned int) RESTORE;
}


emit_proceed()
{
	clear_last();
	code[pcode++] = (unsigned int) PROCEED;
}

emit_callp(s, val)
char *s;
int val;
{
HASH_L_NODE_ptr occ;
	clear_last();
	emit_realsave();
/*
	code[pcode++] = (unsigned int) CALLP;
	emit_addr(s, val);
*/
	gen_word(CALLI);
	occ = (HASH_L_NODE_ptr) emalloc(sizeof(HASH_L_NODE));
	occ->val = val;
	occ->loc = pcode;
	occ->next = p_jump_occ(val);
	assign_p_jump_occ(val, occ);
	gen_word(val);
}

emit_addr(s, val)
char *s;
int val;
{
	if (!s) code[pcode++] = 0;
	else add_unres_lable(s, val, pcode++, 0);
}

emit_jump(s, val)
char *s;
int val;
{
HASH_L_NODE_ptr occ;
int entry_pc;

	if (opt && (val == val_of_cur_rule()) && 
	   ((entry_pc = find_loc_for_lable(val, s)) != -1)) {
		switch(code[entry_pc]) {
		case SWITCHONTYPE:
			gen_word(ENTERSWTYPE);	
			copy_unres_lable(entry_pc+1, pcode++);
			copy_unres_lable(entry_pc+2, pcode++);
			copy_unres_lable(entry_pc+3, pcode++);
			copy_unres_lable(entry_pc+4, pcode++);
			copy_unres_lable(entry_pc+5, pcode++);
			add_unres_lable(s, val, pcode++, 6);
			break;
		case SWITCHONCON:
			gen_word(ENTERSWCON);	
			add_unres_lable(s, val, pcode++, 0);
			break;
		case SWITCHONFUNC:
			gen_word(ENTERSWFUNC);	
			add_unres_lable(s, val, pcode++, 0);
			break;
		case SWITCHONCONFUNC:
			gen_word(ENTERSWCONFUNC);	
			copy_unres_lable(entry_pc+1, pcode++);
			copy_unres_lable(entry_pc+2, pcode++);
			add_unres_lable(s, val, pcode++, 3);
			break;
		case SWITCHONREAL:
			gen_word(ENTERSWREAL);	
			add_unres_lable(s, val, pcode++, 0);
			break;
		case TRY:
			goto NORMAL_ENTRY;  /* CHECK */
/***
			gen_word(ENTERTRYELSE);	
			copy_unres_lable(entry_pc+1, pcode++);
			gen_word(code[entry_pc+2]);
			add_unres_lable(s, val, pcode++, 3);
			break;
***/
		default:
			goto NORMAL_ENTRY;
		}
		clear_last();
		return;
	}
NORMAL_ENTRY:
	clear_last();
/*
	code[pcode++] = (unsigned int) JUMP;
	emit_addr(s, val);
*/
	gen_word(JUMPI);
	occ = (HASH_L_NODE_ptr) emalloc(sizeof(HASH_L_NODE));
	occ->val = val;
	occ->loc = pcode;
	occ->next = p_jump_occ(val);
	assign_p_jump_occ(val, occ);
	gen_word(val);
}

emit_try(s, val, n)
char *s;
int val, n;
{
	clear_last();
	code[pcode++] = (unsigned int) TRY;
	add_unres_lable(s, val, pcode++, 0);
	if (p_cut(val)) code[pcode++] = (unsigned int) n+1;
	else code[pcode++] = (unsigned int) n;
}

emit_retry(s, val)
char *s;
int val;
{
	clear_last();
	code[pcode++] = (unsigned int) RETRY;
	add_unres_lable(s, val, pcode++, 0);
}

emit_trust(s, val)
char *s;
int val;
{
	clear_last();
	code[pcode++] = (unsigned int) TRUST;
	add_unres_lable(s, val, pcode++, 0);
}

emit_dump(str, regs)
char *str;
int regs[];
{
	clear_last();
	emit_realsave();
	code[pcode++] = (unsigned int) DUMP;
	code[pcode++] = (unsigned int) hashbuiltina(str, 0);
	emit_word(regs[0]);
}

emit_printf(regs)
int regs[];
{
	clear_last();
	code[pcode++] = (unsigned int) PRINTF;
/*
	code[pcode++] = (unsigned int) hashbuiltina(str, 0);
*/
	emit_word(regs[0]);
	emit_word(regs[1]);
}

emit_read(str, num, regs)
char *str;
int num, regs[];
{
VREC *v;
int tmp;
	clear_last();
	emit_word(READREG);
	emit_word(regs[0]);
/*
	v = notevar(num);
	if (v->stack_loc) {
		code[pcode++] = (unsigned int) READ;
		code[pcode++] = v->stack_loc;
	} else {
		code[pcode++] = (unsigned int) READREG;
		make_live_reg((tmp = getreg()), v);
		code[pcode++] = tmp;
	}
*/
}

emit_print(regs)
int regs[];
{
	clear_last();
	emit_word(PRINT);
	emit_word(regs[0]);
}

emit_retract(regs)
int regs[];
{
	clear_last();
	emit_word(RETRACT);
	emit_word(regs[0]);
}

emit_roole(regs)
int regs[];
{
	clear_last();
	emit_word(ROOLE);
	emit_word(regs[0]);
	emit_word(regs[1]);
}

emit_jumpx(regs)
int regs[];
{
	clear_last();
	emit_word(JUMPX);
	emit_word(regs[0]);
}

emit_callx(regs)
int regs[];
{
	clear_last();
	emit_word(CALLX);
	emit_word(regs[0]);
}

emit_spcall(val, regs)
int val, regs[];
{
	int i;

	clear_last();
	emit_word(SPCALL);
	emit_word(val);
	for (i=0; i < spred[val]->arity; i++) emit_word(regs[i]);
}

emit_halt()
{
	clear_last();
	code[pcode++] = (unsigned int) HALT;
}

emit_maybesave(nvars)
int nvars;
{
	must_do_save = TRUE;
	has_been_saved = FALSE;
	save_nvars = nvars;
}

emit_realsave()
{
	if (must_do_save && !has_been_saved) {
		clear_last();
		code[pcode++] = (unsigned int) SAVE;
		code[pcode++] = save_nvars;
		must_do_save = FALSE;
		has_been_saved = TRUE;
	}
}

emit_savecurcp(R)
int R;
{
	clear_last();
	emit_word(SAVECURCP);
	emit_word(R);
}

emit_saveprevcp(R)
int R;
{
	clear_last();
	emit_word(SAVEPREVCP);
	emit_word(R);
}

emit_savecut(R, Y)
int R, Y;
{
	clear_last();
	emit_word(SAVECUT);
	emit_word(R);
	emit_word(Y);
}

emit_fastcut(R)
int R;
{
	clear_last();
	emit_word(FASTCUT);
	emit_word(R);
}

emit_docut(Y)
int Y;
{
	clear_last();
	emit_word(DOCUT);
	emit_word(Y);
}

emit_dbg_entry(t, num)
PTERM *t;
int num;
{
	clear_last();
	emit_inst(DBGENTRY);
	emit_word(t->val);
	emit_word(num);
}

fold_multi1(oldop, newop, arg1)
int oldop, newop, arg1;
{
	int old1;

	if (match_last(oldop)) {
		old1 = lastword_at(1);
		reset_last(newop);
		gen_lastword(newop, 0);
		gen_lastword(2, 1);
		gen_word(old1);
		gen_word(arg1);
	} else if (match_last(newop)) {
		gen_lastword(lastword_at(1) + 1, 1);
		gen_word(arg1);
	} else return FALSE;
	return TRUE;
}

fold_multi2(oldop, newop, arg1, arg2)
int oldop, newop, arg1, arg2;
{
	int old1, old2;

	if (match_last(oldop)) {
		old1 = lastword_at(1);
		old2 = lastword_at(2);
		reset_last(newop);
		gen_lastword(newop, 0);
		gen_lastword(2, 1);
		gen_lastword(old1, 2);
		gen_word(old2);
		gen_word(arg1);
		gen_word(arg2);
	} else if (match_last(newop)) {
		gen_lastword(lastword_at(1) + 1, 1);
		gen_word(arg1);
		gen_word(arg2);
	} else return FALSE;
	return TRUE;
}

emit_eval(opc, i1, i2)
unsigned int opc;
int i1, i2;
{
	clear_last();
	emit_realsave();
	code[pcode++] = SOLVE_EVAL;
	code[pcode++] = opc;
	code[pcode++] = (unsigned int) i1;
	code[pcode++] = (unsigned int) i2;
}

emit_special_savecut(r)
int r;
{
	clear_last();
	emit_realsave();
	code[pcode++] = (unsigned int) DIRSAVECUT;
	code[pcode++] = (unsigned int) r;
}

emit_dynamic_try(val)
int val;
{
	clear_last();
	if (arity_of(val) > 0) code[pcode++] = (unsigned int) DYNAMIC_TRY;
	else code[pcode++] = (unsigned int) DYNAMIC_0_TRY;
	emit_word(arity_of(val));
	emit_word(val);
}

emit_dyn_call(val)
int val;
{
	clear_last();
	emit_realsave();
	code[pcode++] = (unsigned int) DYN_CALL;
	emit_word(val);
}

emit_dyn_jump(val)
int val;
{
	clear_last();
	code[pcode++] = (unsigned int) DYN_JUMP;
	emit_word(val);
}

