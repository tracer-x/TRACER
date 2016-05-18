/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: arithgen.c                                           *
 ***************************************************************/

#include "standard.h"
#include "config.h"
#include "parse.h"
#include "symbols.h"
#include "lib.h"
#include "compile.h"
#include "emul.h"
#include "solver.h"

#define is_single_var(eqn) \
	(is_zero((eqn)->constant) && (eqn)->next && !(eqn)->next->next) 
#define is_unit_var(eqn) \
	(is_single_var(eqn) && is_equal(eqn->next->coef, 1.0))

static EQN_ptr malloc_null_EQN();
static EQN_ptr flatten_arith_term();
static EQN_ptr make_constant_eqn();
static EQN_ptr make_simple_eqn();
static void gen_addpfs();
static void gen_mult();
static void gen_div();
static void gen_minmax();
static void gen_pow();
static void gen_abs();
static void gen_sin();
static void gen_cos();
static void gen_arcsin();
static void gen_arccos();
static void gen_eval();
static void gen_trig();
static void gen_3var_nl();
static void gen_2var_nl();
static void gen_putgetnum();
static void gen_emit_addpf();
static void val_info();
static void swap();
static int is_ground_eqn();

extern VREC *notevar();

/*------------------------------------------------------ entry points -------*/

half_constraint(is_new_reg, i, t)
int is_new_reg, i;
PTERM *t;
{
EQN_ptr eqn, eqn1, eqn2;
int i1, i2, opcode;
double c, c1, c2;
	if (is_linear_term(t)) { 
		c = 0.0;
		eqn = flatten_arith_term(t);
		if (is_ground_eqn(eqn, &c)) gen_putgetnum(is_new_reg, i, c);
		else {
			mult_eqn(EQ, eqn, -1.0);
			emit_initpf(eqn->constant);
			gen_addpfs(eqn);
			gen_emit_addpf(is_new_reg, i, 1.0);
			emit_solve_pf0();
		}
		free_eqn_nodes(eqn);
		return;
	}
	if (is_mult(t)) { 
		eqn = NULL;
		eqn1 = flatten_arith_term(t->first);
		eqn2 = flatten_arith_term(t->first->next);
		if (is_ground_eqn(eqn1, &c1)) {
			mult_eqn(EQ, eqn2, c1);
			eqn = eqn2;
		} else if (is_ground_eqn(eqn2, &c2)) {
			mult_eqn(EQ, eqn1, c2);
			eqn = eqn1;
		}
		if (!eqn) gen_mult(is_new_reg, i, eqn1, eqn2);
		else {
			mult_eqn(EQ, eqn, -1.0);
			emit_initpf(eqn->constant);
			gen_addpfs(eqn);
			gen_emit_addpf(is_new_reg, i, 1.0);
			emit_solve_pf0();
		}
		free_eqn_nodes(eqn1);
		free_eqn_nodes(eqn2);
		return;
	}
	if (is_div(t)) { 
		eqn1 = flatten_arith_term(t->first);
		eqn2 = flatten_arith_term(t->first->next);
		if (!is_ground_eqn(eqn2, &c2)) gen_div(is_new_reg, i, eqn1, eqn2);
		else {
			if (is_zero(c2)) {
				emit_initpf(0.0);
				gen_addpfs(eqn1);
			} else {
				mult_eqn(EQ, eqn1, -1.0);
				emit_initpf(eqn1->constant);
				gen_addpfs(eqn1);
				gen_emit_addpf(is_new_reg, i, c2);
			}
			emit_solve_pf0();
		}
		free_eqn_nodes(eqn1);
		free_eqn_nodes(eqn2);
		return;
	}
	if (is_min(t) || is_max(t)) {
		eqn1 = flatten_arith_term(t->first);
		eqn2 = flatten_arith_term(t->first->next);
		if (is_ground_eqn(eqn1, &c1) && is_ground_eqn(eqn2, &c2)) {
			c = ((is_min(t) && c1 < c2) || (is_max(t) && c1 > c2) ? c1 : c2);
			gen_putgetnum(is_new_reg, i, c);
		} else {
			opcode = (is_min(t) ? SOLVER_MIN : SOLVER_MAX);
			gen_minmax(opcode, is_new_reg, i, eqn1, eqn2);
		} 
		free_eqn_nodes(eqn1);
		free_eqn_nodes(eqn2);
		return;
	}
	if (is_pow(t)) {
		eqn1 = flatten_arith_term(t->first);
		eqn2 = flatten_arith_term(t->first->next);
		if (is_ground_eqn(eqn1, &c1) && is_ground_eqn(eqn2, &c2))
			gen_putgetnum(is_new_reg, i, pow(c1, c2));
		else gen_minmax(SOLVER_POW, is_new_reg, i, eqn1, eqn2);
		free_eqn_nodes(eqn1);
		free_eqn_nodes(eqn2);
		return;
	}
	if (is_abs(t)) {
		eqn1 = flatten_arith_term(t->first);
		if (is_ground_eqn(eqn1, &c1)) gen_putgetnum(is_new_reg, i, fabs(c1));
		else gen_abs(is_new_reg, i, eqn1);
		free_eqn_nodes(eqn1);
		return;
	}
	if (is_sin(t) || is_cos(t) || is_arcsin(t) || is_arccos(t)) {
		eqn1 = flatten_arith_term(t->first);
/*
		if (is_sin(t)) {
			if (is_ground_eqn(eqn1, &c1)) 
				gen_putgetnum(is_new_reg, i, sin(c1));
			else gen_sin(is_new_reg, i, eqn1);
		} else {
			if (is_ground_eqn(eqn1, &c1)) 
				gen_putgetnum(is_new_reg, i, cos(c1));
			else gen_cos(is_new_reg, i, eqn1);
		}
*/
		if (is_ground_eqn(eqn1, &c1)) {
			switch(t->val) {
			case SINVAL: 
				if (c1 != 0.0) c2 = sin(c1); 
				else c2 = 0.0;
				break;
			case COSVAL: 
				if (c1 != 0.0) c2 = cos(c1); 
				else c2 = 1.0;
				break;
			case ARCSINVAL: 
				if (c1 > 1 || c1 < -1) 
				domain_error("Out of range value outside [-1,1] to arcsin");
				if (c1 != 0.0) c2 = asin(c1);
				else c2 = 0.0;
				break;
			case ARCCOSVAL: 
				if (c1 > 1 || c1 < -1) 
				domain_error("Out of range value outside [-1,1] to arccos");
				if (c1 != 1.0) c2 = acos(c1); 
				else c2 = 0.0;
				break;
			}
			gen_putgetnum(is_new_reg, i, c2);
		} else switch(t->val) {
			case SINVAL: gen_sin(is_new_reg, i, eqn1); break;
			case COSVAL: gen_cos(is_new_reg, i, eqn1); break;
			case ARCSINVAL: gen_arcsin(is_new_reg, i, eqn1); break;
			case ARCCOSVAL: gen_arccos(is_new_reg, i, eqn1); break;
			}
		free_eqn_nodes(eqn1);
		return;
	}
	if (is_eval(t)) {
		gen_eval(is_new_reg, i, t->first);
		return;
	}
	fatal("38457");
}

full_constraint(t)
PTERM *t;
{
PTERM *arg1, *arg2;
EQN_ptr eqn, eqn2;
	eqn = eqn2 = NULL;
	arg1 = t->first;
	arg2 = arg1->next;
	if (is_eq(t)) {
		if (is_nlin_term(arg1)) swap(&arg1, &arg2);
		eqn = flatten_arith_term(arg1);
		if (is_unit_var(eqn)) half_constraint(FALSE, eqn->next->id, arg2);
		else {
			eqn2 = flatten_arith_term(arg2);
			add_eqns(EQ, eqn, eqn2, -1.0);
			emit_initpf(eqn->constant);
			gen_addpfs(eqn);
			emit_solve_pf0();
		}
		free_eqn_nodes(eqn2);
		free_eqn_nodes(eqn);
		return;
	}
	eqn = flatten_arith_term(arg1);
	eqn2 = flatten_arith_term(arg2);
	add_eqns(EQ, eqn, eqn2, -1.0);
	free_eqn_nodes(eqn2);
	if (is_le(t)) {
		mult_eqn(EQ, eqn, -1.0);
		emit_initpf(eqn->constant);
		gen_addpfs(eqn);
		emit_solve_ge0();
	} else if (is_lt(t)) {
		mult_eqn(EQ, eqn, -1.0);
		emit_initpf(eqn->constant);
		gen_addpfs(eqn);
		emit_solve_gt0();
	} else if (is_ge(t)) {
		emit_initpf(eqn->constant);
		gen_addpfs(eqn);
		emit_solve_ge0();
	} else if (is_gt(t)) {
		emit_initpf(eqn->constant);
		gen_addpfs(eqn);
		emit_solve_gt0();
	}
	free_eqn_nodes(eqn);
}

/*---------------------------------------------------- compilation ----------*/

static EQN_ptr flatten_arith_term(t)
PTERM *t;
{
EQN_ptr eqn, eqn1, eqn2;
int i1, i2, tmp, opcode, rval;
double c, c1, c2;
	if (is_p_real(t)) return make_constant_eqn(t->rval);
	if (is_plus(t)) {
		eqn = flatten_arith_term(t->first);
		eqn2 = flatten_arith_term(t->first->next);
		add_eqns(EQ, eqn, eqn2, 1.0);
		free_eqn_nodes(eqn2);
		return eqn;
	}
	if (is_u_minus(t)) {
		eqn = flatten_arith_term(t->first);
		mult_eqn(EQ, eqn, -1.0);
		return eqn;
	}
	if (is_minus(t)) {
		eqn = flatten_arith_term(t->first);
		eqn2 = flatten_arith_term(t->first->next);
		add_eqns(EQ, eqn, eqn2, -1.0);
		free_eqn_nodes(eqn2);
		return eqn;
	}
	if (is_p_var(t)) return make_simple_eqn(1.0, t->val);
	if (is_mult(t)) {
		eqn = NULL;
		eqn1 = flatten_arith_term(t->first);
		eqn2 = flatten_arith_term(t->first->next);
		if (is_ground_eqn(eqn1, &c1)) {
			mult_eqn(EQ, eqn2, c1);
			free_eqn_nodes(eqn1);
			return eqn2;
		} 
		if (is_ground_eqn(eqn2, &c2)) {
			mult_eqn(EQ, eqn1, c2);
			free_eqn_nodes(eqn2);
			return eqn1;
		}
		tmp = getreg();
		gen_mult(TRUE, -tmp, eqn1, eqn2);
		free_eqn_nodes(eqn1);
		free_eqn_nodes(eqn2);
		return make_simple_eqn(1.0, -tmp);
	}
	if (is_div(t)) {
		eqn1 = flatten_arith_term(t->first);
		eqn2 = flatten_arith_term(t->first->next);
		if (is_ground_eqn(eqn2, &c2)) {
			if (is_zero(c2)) {
				emit_initpf(0.0);
				gen_addpfs(eqn1);
				emit_solve_pf0();
				free_eqn_nodes(eqn1);
				free_eqn_nodes(eqn2);
				return make_simple_eqn(1.0, -getreg());
			} else {
				mult_eqn(EQ, eqn1, 1.0 / c2);
				free_eqn_nodes(eqn2);
				return eqn1;
			}
		}
		tmp = getreg();
		gen_div(TRUE, -tmp, eqn1, eqn2);
		free_eqn_nodes(eqn1);
		free_eqn_nodes(eqn2);
		return make_simple_eqn(1.0, -tmp);
	} 
	if (is_min(t) || is_max(t)) {
		eqn1 = flatten_arith_term(t->first);
		eqn2 = flatten_arith_term(t->first->next);
		if (is_ground_eqn(eqn1, &c1) && is_ground_eqn(eqn2, &c2)) {
			c = ((is_min(t) && c1 < c2) || (is_max(t) && c1 > c2) ? c1 : c2);
			free_eqn_nodes(eqn1);
			free_eqn_nodes(eqn2);
			return make_constant_eqn(c);
		}
		tmp = getreg();
		opcode = (is_min(t) ? SOLVER_MIN : SOLVER_MAX);
		gen_minmax(opcode, TRUE, -tmp, eqn1, eqn2);
		free_eqn_nodes(eqn1);
		free_eqn_nodes(eqn2);
		return make_simple_eqn(1.0, -tmp);
	}
	if (is_pow(t)) {
		eqn1 = flatten_arith_term(t->first);
		eqn2 = flatten_arith_term(t->first->next);
		if (is_ground_eqn(eqn1, &c1) && is_ground_eqn(eqn2, &c2)) {
			free_eqn_nodes(eqn1);
			free_eqn_nodes(eqn2);
			return make_constant_eqn(pow(c1, c2));
		}
		tmp = getreg();
		gen_pow(TRUE, -tmp, eqn1, eqn2);
		free_eqn_nodes(eqn1);
		free_eqn_nodes(eqn2);
		return make_simple_eqn(1.0, -tmp);
	}
	if (is_abs(t)) {
		eqn1 = flatten_arith_term(t->first);
		if (is_ground_eqn(eqn1, &c1)) {
			free_eqn_nodes(eqn1);
			return make_constant_eqn(fabs(c1));
		}
		tmp = getreg();
		gen_abs(TRUE, -tmp, eqn1);
		free_eqn_nodes(eqn1);
		return make_simple_eqn(1.0, -tmp);
	}
	if (is_sin(t)) {
		eqn1 = flatten_arith_term(t->first);
		if (is_ground_eqn(eqn1, &c1)) {
			free_eqn_nodes(eqn1);
			return make_constant_eqn(sin(c1));
		}
		tmp = getreg();
		gen_trig(SOLVER_SIN, TRUE, -tmp, eqn1);
		free_eqn_nodes(eqn1);
		return make_simple_eqn(1.0, -tmp);
	}
	if (is_cos(t)) {
		eqn1 = flatten_arith_term(t->first);
		if (is_ground_eqn(eqn1, &c1)) {
			free_eqn_nodes(eqn1);
			return make_constant_eqn(cos(c1));
		}
		tmp = getreg();
		gen_trig(SOLVER_COS, TRUE, -tmp, eqn1);
		free_eqn_nodes(eqn1);
		return make_simple_eqn(1.0, -tmp);
	}
	if (is_arcsin(t)) {
		eqn1 = flatten_arith_term(t->first);
		if (is_ground_eqn(eqn1, &c1)) {
			free_eqn_nodes(eqn1);
			if (c1 < -1 || c1 > 1) 
			domain_error("Out of range value outside [-1, 1] to arcsin");
			if (c1 != 0.0) return make_constant_eqn(asin(c1));
			else make_constant_eqn(0.0);
		}
		tmp = getreg();
		gen_trig(SOLVER_ARCSIN, TRUE, -tmp, eqn1);
		free_eqn_nodes(eqn1);
		return make_simple_eqn(1.0, -tmp);
	}
	if (is_arccos(t)) {
		eqn1 = flatten_arith_term(t->first);
		if (is_ground_eqn(eqn1, &c1)) {
			free_eqn_nodes(eqn1);
			if (c1 < -1 || c1 > 1)
			domain_error("Out of range value outside [-1, 1] to arccos");
			if (c1 != 1.0) return make_constant_eqn(acos(c1));
			else make_constant_eqn(0.0);
		}
		tmp = getreg();
		gen_trig(SOLVER_ARCCOS, TRUE, -tmp, eqn1);
		free_eqn_nodes(eqn1);
		return make_simple_eqn(1.0, -tmp);
	}
	if (is_eval(t)) {
		tmp = getreg();
		gen_eval(TRUE, -tmp, t->first);
		return make_simple_eqn(1.0, -tmp);
	}
	fatal("00273");
}

static void gen_addpfs(eqn) /*** all -ve ids are new regs ***/
EQN_ptr eqn;
{
ENTRY_ptr entry;
VREC *v;
int i, tmp;
double c;
	entry = eqn->next;
	while (entry) {
		i = entry->id;
		c = entry->coef;
		if (i < 0) emit_addtpfval(c, -i);
		else {
			v = notevar(i);
			if (v->stack_loc)
				if (!v->saved_stack_loc) {
					emit_addpfvar(c, v->stack_loc);
					v->saved_stack_loc = TRUE;
				} else emit_addpfval(c, v->stack_loc);
			else
				if (tmp = has_live_reg(v)) {
					emit_addtpfval(c, tmp);
				} else {
					make_live_reg((tmp = getreg()), v);
					emit_addtpfvar(c, tmp); 
				}
		}
		entry = entry->next;
	}
}

static void gen_reg_and_addpfs(reg, eqn) /*** (new) reg = eqn ***/
int reg;
EQN_ptr eqn;
{
	mult_eqn(EQ, eqn, -1.0);
	emit_initpf(eqn->constant);
	gen_addpfs(eqn);
	emit_addtpfvar(1.0, reg);
	emit_solve_pf0();
}

static void gen_mult(flag, i, eqn1, eqn2) /*** i < 0 means reg (so see flag) ***/
int flag, i;
EQN_ptr eqn1, eqn2;
{
int i1, i2;
double c1, c2;
	if (is_single_var(eqn1)) {
		i1 = eqn1->next->id;
		c1 = eqn1->next->coef;
		if (is_single_var(eqn2)) {
			c2 = eqn2->next->coef;
			i2 = eqn2->next->id;
			gen_3var_nl(SOLVER_MULT, c1 * c2, flag, i, 0, i1, 0, i2);
		} else {
			gen_reg_and_addpfs((i2 = getreg()), eqn2);
			gen_3var_nl(SOLVER_MULT, c1, flag, i, 0, i1, 0, -i2);
			freereg(i2);
		}
	} else {
		gen_reg_and_addpfs((i1 = getreg()), eqn1);
		if (is_single_var(eqn2)) {
			c2 = eqn2->next->coef;
			i2 = eqn2->next->id;
			gen_3var_nl(SOLVER_MULT, c2, flag, i, 0, -i1, 0, i2);
			freereg(i1);
		} else {
			gen_reg_and_addpfs((i2 = getreg()), eqn2);
			gen_3var_nl(SOLVER_MULT, 1.0, flag, i, 0, -i1, 0, -i2);
			freereg(i1);
			freereg(i2);
		}
	}
}

static void gen_div(flag, i, eqn1, eqn2)
int flag, i;
EQN_ptr eqn1, eqn2;
{
int i1, i2;
double c1, c2;
	if (is_single_var(eqn1)) {
		i1 = eqn1->next->id;
		c1 = eqn1->next->coef;
		if (is_single_var(eqn2)) {
			c2 = eqn2->next->coef;
			i2 = eqn2->next->id;
			gen_3var_nl(SOLVER_MULT, c2 /c1, 0, i1, 0, i2, flag, i);
		} else {
			gen_reg_and_addpfs((i2 = getreg()), eqn2);
			gen_3var_nl(SOLVER_MULT, 1.0 /c1, 0, i1, 0, -i2, flag, i);
			freereg(i2);
		}
	} else {
		gen_reg_and_addpfs((i1 = getreg()), eqn1);
		if (is_single_var(eqn2)) {
			i2 = eqn2->next->id;
			c2 = eqn2->next->coef;
			gen_3var_nl(SOLVER_MULT, c2, 0, -i1, 0, i2, flag, i);
			freereg(i1);
		} else {
			gen_reg_and_addpfs((i2 = getreg()), eqn2);
			gen_3var_nl(SOLVER_MULT, 1.0, 0, -i1, 0, -i2, flag, i);
			freereg(i1);
			freereg(i2);
		}
	}
}

static void gen_minmax(opcode, flag, i, eqn1, eqn2)
int opcode, flag, i;
EQN_ptr eqn1, eqn2;
{
int i1, i2;
double dummy = 0.0;
	if (is_unit_var(eqn1)) {
		i1 = eqn1->next->id;
		if (is_unit_var(eqn2)) {
			i2 = eqn2->next->id;
			gen_3var_nl(opcode, dummy, flag, i, 0, i1, 0, i2);
		} else {
			gen_reg_and_addpfs((i2 = getreg()), eqn2);
			gen_3var_nl(opcode, dummy, flag, i, 0, i1, 0, -i2);
			freereg(i2);
		}
	} else {
		gen_reg_and_addpfs((i1 = getreg()), eqn1);
		if (is_unit_var(eqn2)) {
			i2 = eqn2->next->id;
			gen_3var_nl(opcode, dummy, flag, i, 0, -i1, 0, i2);
			freereg(i1);
		} else {
			gen_reg_and_addpfs((i2 = getreg()), eqn2);
			gen_3var_nl(opcode, dummy, flag, i, 0, -i1, 0, -i2);
			freereg(i1);
			freereg(i2);
		}
	}
}

static void gen_pow(flag, i, eqn1, eqn2)
int flag, i;
EQN_ptr eqn1, eqn2;
{
int i1, i2;
double dummy = 0.0;
	if (is_unit_var(eqn1)) {
		i1 = eqn1->next->id;
		if (is_unit_var(eqn2)) {
			i2 = eqn2->next->id;
			gen_3var_nl(SOLVER_POW, dummy, flag, i, 0, i1, 0, i2);
		} else {
			gen_reg_and_addpfs((i2 = getreg()), eqn2);
			gen_3var_nl(SOLVER_POW, dummy, flag, i, 0, i1, 0, -i2);
			freereg(i2);
		}
	} else {
		gen_reg_and_addpfs((i1 = getreg()), eqn1);
		if (is_unit_var(eqn2)) {
			i2 = eqn2->next->id;
			gen_3var_nl(SOLVER_POW, dummy, flag, i, 0, -i1, 0, i2);
			freereg(i1);
		} else {
			gen_reg_and_addpfs((i2 = getreg()), eqn2);
			gen_3var_nl(SOLVER_POW, dummy, flag, i, 0, -i1, 0, -i2);
			freereg(i1);
			freereg(i2);
		}
	}
}

static void gen_abs(flag, i, eqn)
int flag, i;
EQN_ptr eqn;
{
int j;
	if (is_unit_var(eqn)) {
		j = eqn->next->id;
		gen_2var_nl(SOLVER_ABS, flag, i, 0, j);
	} else {
		gen_reg_and_addpfs((j = getreg()), eqn);
		gen_2var_nl(SOLVER_ABS, flag, i, 0, -j);
		freereg(j);
	}
}

static void gen_sin(flag, i, eqn)
int flag, i;
EQN_ptr eqn;
{
int j;
	if (is_unit_var(eqn)) {
		j = eqn->next->id;
		gen_2var_nl(SOLVER_SIN, flag, i, 0, j);
	} else {
		gen_reg_and_addpfs((j = getreg()), eqn);
		gen_2var_nl(SOLVER_SIN, flag, i, 0, -j);
		freereg(j);
	}
}

static void gen_cos(flag, i, eqn)
int flag, i;
EQN_ptr eqn;
{
int j;
	if (is_unit_var(eqn)) {
		j = eqn->next->id;
		gen_2var_nl(SOLVER_COS, flag, i, 0, j);
	} else {
		gen_reg_and_addpfs((j = getreg()), eqn);
		gen_2var_nl(SOLVER_COS, flag, i, 0, -j);
		freereg(j);
	}
}

static void gen_arcsin(flag, i, eqn)
int flag, i;
EQN_ptr eqn;
{
int j;
	if (is_unit_var(eqn)) {
		j = eqn->next->id;
		gen_2var_nl(SOLVER_ARCSIN, flag, i, 0, j);
	} else {
		gen_reg_and_addpfs((j = getreg()), eqn);
		gen_2var_nl(SOLVER_ARCSIN, flag, i, 0, -j);
		freereg(j);
	}
}

static void gen_arccos(flag, i, eqn)
int flag, i;
EQN_ptr eqn;
{
int j;
	if (is_unit_var(eqn)) {
		j = eqn->next->id;
		gen_2var_nl(SOLVER_ARCCOS, flag, i, 0, j);
	} else {
		gen_reg_and_addpfs((j = getreg()), eqn);
		gen_2var_nl(SOLVER_ARCCOS, flag, i, 0, -j);
		freereg(j);
	}
}

static void gen_eval(flag, i, t)
int flag, i;
PTERM *t;
{
int j;
	if (is_p_var(t)) gen_2var_nl(SOLVER_EVAL, flag, i, FALSE, t->val);
	else {
	    put_arg(t, (j = getreg()), FALSE);
		gen_2var_nl(SOLVER_EVAL, flag, i, FALSE, -j);
		freereg(j); 
	}
}

static void gen_trig(opcode, flag, i, eqn)
int opcode, flag, i;
EQN_ptr eqn;
{
int j;
	if (is_unit_var(eqn)) {
		j = eqn->next->id;
		gen_2var_nl(opcode, flag, i, 0, j);
	} else {
		gen_reg_and_addpfs((j = getreg()), eqn);
		gen_2var_nl(opcode, flag, i, 0, -j);
		freereg(j);
	}
}

/* opmask: *****************************************
 * bit 6:  1 --> arg1 is stack var, else arg1 is reg;
 * bit 5:  1 --> arg1 is "val", else arg1 is "var";
 * similarly for the other four bits
 ***************************************************/

static void gen_3var_nl(opcode, c, flag1, i1, flag2, i2, flag3, i3)
int opcode;
double c;
int flag1, i1, flag2, i2, flag3, i3;
{
unsigned int opmask;
int reg, stack_loc, is_new;
	opmask = 0;
	if (i1 < 0) { 
		if (!flag1) set_bit5(opmask);
	} else {
		val_info(i1, &reg, &stack_loc, &is_new);
		if (reg) i1 = reg;
		else { set_bit6(opmask); i1 = stack_loc; }
		if (!is_new) set_bit5(opmask);
	}
	if (i2 < 0) { 
		if (!flag2) set_bit3(opmask);
	} else {
		val_info(i2, &reg, &stack_loc, &is_new);
		if (reg) i2 = reg;
		else { set_bit4(opmask); i2 = stack_loc; }
		if (!is_new) set_bit3(opmask);
	}
	if (i3 < 0) { 
		if (!flag3) set_bit1(opmask);
	} else {
		val_info(i3, &reg, &stack_loc, &is_new);
		if (reg) i3 = reg;
		else { set_bit2(opmask); i3 = stack_loc; }
		if (!is_new) set_bit1(opmask);
	}
	switch (opcode) {
		case SOLVER_MULT: 
			emit_mult(opmask, c, abs(i1), abs(i2), abs(i3)); break; 
		case SOLVER_MIN:  emit_min(opmask, abs(i1), abs(i2), abs(i3)); break; 
		case SOLVER_MAX:  emit_max(opmask, abs(i1), abs(i2), abs(i3)); break; 
		case SOLVER_POW:  emit_pow(opmask, abs(i1), abs(i2), abs(i3)); break;
		default: fatal("87235");
	} 
}

static void gen_2var_nl(opcode, flag1, i1, flag2, i2)
int opcode;
int flag1, i1, flag2, i2;
{
unsigned int opmask;
int reg, stack_loc, is_new;
	opmask = 0;
	if (i1 < 0) { 
		if (!flag1) set_bit3(opmask);
	} else {
		val_info(i1, &reg, &stack_loc, &is_new);
		if (reg) i1 = reg;
		else { set_bit4(opmask); i1 = stack_loc; }
		if (!is_new) set_bit3(opmask);
	}
	if (i2 < 0) { 
		if (!flag2) set_bit1(opmask);
	} else {
		val_info(i2, &reg, &stack_loc, &is_new);
		if (reg) i2 = reg;
		else { set_bit2(opmask); i2 = stack_loc; }
		if (!is_new) set_bit1(opmask);
	}
	switch (opcode) {
		case SOLVER_ABS: emit_abs(opmask, abs(i1), abs(i2)); break;
		case SOLVER_SIN: emit_sin(opmask, abs(i1), abs(i2)); break;
		case SOLVER_COS: emit_cos(opmask, abs(i1), abs(i2)); break;
		case SOLVER_EVAL: emit_eval(opmask, abs(i1), abs(i2)); break;
		case SOLVER_ARCSIN: emit_arcsin(opmask, abs(i1), abs(i2)); break;
		case SOLVER_ARCCOS: emit_arccos(opmask, abs(i1), abs(i2)); break;
		default: fatal("87236");
	} 
}

static void gen_putgetnum(flag, i, c)
int flag, i;
double c;
{
int is_new, reg, stack_loc;
	if (i < 0) {
		if (flag) emit_puttnum(c, -i);
		else emit_gettnum(c, -i);
	} else {
		val_info(i, &reg, &stack_loc, &is_new);
		if (reg) 
			if (is_new) emit_puttnum(c, reg);
			else emit_gettnum(c, reg);
		else
			if (is_new) emit_putpnum(c, stack_loc);
			else emit_getpnum(c, stack_loc);
	}
}

static void gen_emit_addpf(flag, i, c)
int flag, i;
double c;
{
int is_new, reg, stack_loc;
	if (i < 0) {
		if (flag) emit_addtpfvar(c, -i);
		else emit_addtpfval(c, -i);
	} else {
		val_info(i, &reg, &stack_loc, &is_new);
		if (reg) 
			if (is_new) emit_addtpfvar(c, reg);
			else emit_addtpfval(c, reg);
		else
			if (is_new) emit_addpfvar(c, stack_loc);
			else emit_addpfval(c, stack_loc);
	}
}

static void val_info(val, reg, stack_loc, is_new)
int val, *reg, *stack_loc, *is_new;
{
VREC *v;
int i;
	*reg = *stack_loc = 0;
	v = notevar(val);
	if (v->stack_loc) {
		*stack_loc = v->stack_loc;
		if (!v->saved_stack_loc) {
			*is_new = TRUE;
			v->saved_stack_loc = TRUE;
		} else *is_new = FALSE;
	} else {
		if (i = has_live_reg(v)) {
			*reg = i;
			*is_new = FALSE;
		} else {
			make_live_reg((*reg = getreg()), v);
			*is_new = TRUE;
		}
	}
}

/*---------------------------------------------------- aux stuff ------------*/

static EQN_ptr malloc_null_EQN()
{
EQN_ptr eqn;
	malloc_EQN(eqn);
	eqn->next = NULL;
	eqn->time_stamp = 0;
	eqn->id = 0;
	eqn->params = NULL;
	eqn->constant = 0.0;
	return eqn;
}

static EQN_ptr make_constant_eqn(c)
double c;
{
EQN_ptr eqn;
	eqn = malloc_null_EQN();
	eqn->constant = c;
	return eqn;
}

static EQN_ptr make_simple_eqn(c, v)
double c;
int v;
{
EQN_ptr eqn;
	eqn = malloc_null_EQN();
	add_simple_entry(EQ, eqn, v, c);
	return eqn;
}

static is_ground_eqn(eqn, c_ptr)
EQN_ptr eqn;
double *c_ptr;
{
	if (eqn->next) return FALSE;
	*c_ptr = eqn->constant;
	return TRUE;
}

static void swap(x, y)
int *x, *y;
{
int t;
	t = *x;
	*x = *y;
	*y = t;
}
	
domain_error(s)
char *s;
{
int r_val;
	r_val = compiling_r_val();
	delete_lable(r_val);
	assign_p_compiled(r_val, FALSE);
	assign_p_first_rule(r_val, NULL);
	type_error(s, 0);
}
