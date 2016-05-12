/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: codegen.c                                            *
 ***************************************************************/

#include "standard.h"
#include "config.h"
#include "parse.h"
#include "symbols.h"
#include "lib.h"
#include "compile.h"
#include "opcodes.h"
#include "emul.h"

#define MAX_VAR_TO_VREC 256
#define MAX_DUMP_VARSTRING 4096

#define typecheck_error() \
	type_error("(error) arithmetic/functor type clash\n", 0)
#define typecheck_arith(t1, t2) \
	if (t1 == FUNC || t2 == FUNC) \
		type_error("functor in arithmetic term\n", 0)
#define typecheck_clash(t1, t2) \
	if ((t1 == REAL && t2 == FUNC) || (t1 == FUNC && t2 == REAL)) \
		type_error("arithmetic/functor type clash\n", 0)
#define check_reg_range(reg) \
	if (reg <= 0 || reg > MAX_REGS) fatal("23863");

#define is_void_var(v) (v->occ_top == 1 && v->occ[1].atom == 0)
#define is_single_occ(v) (v->occ_top == 1)
#define is_head_var(v) (v->occ[1].atom == 0)
#define is_headonly_var(v) (v->occ[v->occ_top].atom == 0)
#define is_chunk01only_var(v) \
	(v->occ[1].atom <= 1 && v->occ[v->occ_top].atom <= 1)
#define is_in1atomonly_var(v) (v->occ[1].atom == v->occ[v->occ_top].atom)
#define is_1stinfunc_var(v) (v->occ[1].level > 1)
#define is_toplevel_firstvar(v) (v->occ[1].level == 1)
#define is_lastatomonly_var(v) (v->occ[1].atom == n_chunks)

static PTERM *cur_rule_pterm, *cur_head, *cur_atom;
static char *p_name;
static int p_val, p_arity, p_r_number;
static int cur_atom_no = 0;
static int cutreg;
static int has_fastcut;
RULE_ptr current_rule;
int reg_lowmark, reg_highmark;
int hascut; 
int CODEGEN_DEBUG = FALSE;
VREC *varlist = NULL, *end_varlist = NULL;
VREC *vrec_freelist = NULL, *vrec_endfreelist = NULL;
int n_chunks;
VREC dummy_vrec;
int live_regs_top = 0;
int regused[MAX_REGS + 1];
VREC *live_regs[MAX_REGS + 1]; /*** 0 = dead, -1 = non-var ***/
VREC *var_to_vrec[MAX_VAR_TO_VREC + 1];

VREC *notevar();
VREC *get_vrec();
char *maketag();
char *smalltag();
char *dumpvarnames();
PTERM *makedumpvars();
PTERM *makedumpvars0();
PTERM *makedumpvars1();

static VREC *val_info();

extern int CODE_SZ;
extern unsigned int *code;
extern FILE *outfile;
extern FILE *error_stream;
extern FILE *var_file;
extern int pcode;
extern int epcode;
extern int debug_flg;
extern int must_do_save;
extern unsigned int bit1vec[];
extern SPNODE *spred[];
extern HASH_P_NODE_ptr hash_p_table[];
extern int startcode[], endcode[];
extern FUNCTREC functors[];
extern int trtop, **trail;
extern int STYLE_CHECK_FLAG;

extern HASH_P_NODE_ptr find_hash_p_node();
extern HASH_P_NODE_ptr new_hash_p_node();
extern RULE_ptr p_first_rule();
extern RULE_ptr p_last_rule();
extern char *make_ftag();
extern RULE_ptr p_last_compiled_rule();
extern PTERM *new_pterm();
extern char *char_malloc();
extern struct HASHNODE *get_similar_func();

extern int s_count[];
 
/*------------------------------------------------------ compile's ----------*/

compile(clobber)
bool clobber;
{
int i, j, k;
char *s;
int count;
RULE *r, *r2, *last_compiled_rule, dummy;
int compiled_flag;
	init_lable();
	pcode = epcode;
	for (i = 1; i < getmaxfunc(); i++) { /*** procedure i ***/

		if (!(r = p_first_rule(i))) continue;
		if ((STYLE_CHECK_FLAG & OVERLOAD_STYLE) && p_added(i)) 
			check_multiple_defs(string_of(i));
		compiled_flag = FALSE;

		if (p_dynamic(i)) {
			if (p_compiled(i)) {
				last_compiled_rule = p_last_compiled_rule(i);
				r = last_compiled_rule->next;
			} else {
				last_compiled_rule = (RULE *) NULL;
				r = p_first_rule(i);
				assign_p_start_hdrcode(i, pcode);
				emit_dynamic_try(i);
				last_compiled_rule = r;
				assign_p_end_hdrcode(i, pcode-1);
			}
			while (r) {
				r->startcode = pcode;
				current_rule = r;
/*
printf("@@@ COMPILING: ");show_pterm(r->wt);printf("\n");
*/
				compile_rule(r->wt, -1);
				r->endcode = pcode - 1;
				last_compiled_rule = r;
				r = r->next;
				compiled_flag = TRUE;
			}
			if (compiled_flag) {
				assign_p_last_compiled_rule(i, last_compiled_rule);
				assign_p_compiled(i, TRUE);
				epcode = pcode;
			}
			continue;
		} 

		if (!p_compiled(i)) { /*** static procedure ***/
			if (clobber) delete_lable(i);
			assign_p_start_hdrcode(i, pcode);
			if (r->next) {
				gen_index_code(r, string_of(i), arity_of(i), p_n_rules(i));
				assign_p_end_hdrcode(i, pcode - 1);
				for (count = 0; r; r = r->next) {
					r->startcode = pcode;
					compile_rule(r->wt, ++count);
					r->endcode = pcode - 1;
				}
			} else {
				r->startcode = pcode;
				compile_rule(r->wt, 0);
				r->endcode = pcode - 1;
				assign_p_end_hdrcode(i, 0);
			}
			assign_p_last_compiled_rule(i, p_last_rule(i));
			assign_p_compiled(i, TRUE);
			epcode = pcode;
		}
	}
}
 
compile_rule(t, num) /*** num == -1 for dynamic ***/
PTERM *t;
int num;
{
int nvars;
int sav;

	init_emit();
	must_do_save = FALSE;
	cur_rule_pterm = t;
	cur_head = (is_implies(t) ? t->first : t);
	hascut = FALSE;
	init_live_regs(cur_head->narg);
	lookatvars(t);
	if (STYLE_CHECK_FLAG & SINGLE_STYLE) check_rule(t, num);
	nvars = alocvar(t, hascut, FALSE);
	if (is_implies(t)) {
		if (hascut) make_live_reg((cutreg=cur_head->narg + 1), &dummy_vrec);
		sav = checksave(t->first->next, hascut);
		if (sav || nvars) {
			if (has_fastcut) emit_maybesave(nvars);
			else if (hascut) emit_maybesave(nvars+1);
			else emit_maybesave(nvars);
		}
		compile_head(t->first, num, nvars);
		if (sav) emit_realsave();
		if (hascut && !has_fastcut) 
			emit_savecut(cutreg, nvars+1);
		compile_tail(t->first->next, sav, nvars);
	} else {
		compile_head(t, num, nvars);
		emit_proceed();
	}
	free_varlist();
}
 
compile_goal(t) /*** command-line goal ***/
PTERM *t;
{
int nvars, sav;
VREC *v;
PTERM *arg1, *t2;
int dumpreg;
	init_emit();
	cur_rule_pterm = t;
	init_lable();
	must_do_save = FALSE;
	cur_atom_no = 0;
	pcode = GOAL_START;
	init_live_regs(0);
	lookatvars(t);
	nvars = alocvar(t, TRUE, TRUE);
	sav = TRUE;
	emit_maybesave(nvars+1);
	emit_realsave();
	emit_special_savecut(nvars+1);
	while (is_comma(t)) {
		arg1 = t->first;
		compile_body(arg1, FALSE, sav, nvars);
		if (p_dynamic(arg1->val)) emit_dyn_call(arg1->val);
		else if (is_userpred(arg1))
			emit_callp(maketag(0, "", arg1->str, arg1->narg), arg1->val);
		t = arg1->next;
		check_goalspace(pcode);
	}
	compile_body(t, FALSE, sav, nvars);
	check_goalspace(pcode);
	if (p_dynamic(t->val)) emit_dyn_call(t->val);
	else if (is_userpred(t)) 
		emit_callp(maketag(0, "", t->str, t->narg), t->val);
	t2 = makedumpvars(varlist);
	put_arg(t2, 1, TRUE);
	dumpreg=1;
	emit_dump((char *) dumpvarnames(t2), &dumpreg);
	emit_restore();
	emit_halt();
	check_goalspace(pcode);
	resolve(TRUE);
	free_varlist();
}

compile_fgoal(t)
PTERM *t;
{
int sav;
VREC *v;
int vnum = 1;
PTERM *tt, *arg1;
int start;
int nvars;

	init_emit();
	cur_rule_pterm = t;
	init_lable();
	pcode = epcode;
	start = pcode;
	init_live_regs(0);
	lookatvars(t);
	nvars = alocvar(t, TRUE, TRUE);
	sav = TRUE;
	emit_maybesave(nvars+1);
	emit_realsave();
	emit_special_savecut(nvars+1);
	while (is_comma(t)) {
		arg1 = t->first;
		compile_body(arg1, FALSE, sav, nvars);
		if (p_dynamic(arg1->val)) emit_dyn_call(arg1->val);
		else if (is_userpred(arg1))
			emit_callp(maketag(0, "", arg1->str, arg1->narg), arg1->val);
		t = arg1->next;
		check_codespace(pcode);
	}
	compile_body(t, FALSE, sav, nvars);
	if (p_dynamic(t->val)) emit_dyn_call(t->val);
	else if (is_userpred(t)) 
		emit_callp(maketag(0, "", t->str, t->narg), t->val);
	emit_restore();
	emit_halt();
	resolve(TRUE);
	epcode = pcode;
	free_varlist();
	return start;
}

compile_head(t, num, nvars)
PTERM *t;
int num, nvars;
{
PTERM *it;
int i;
	cur_atom_no = 0;
	p_name = t->str;
	p_arity = t->narg;
	p_val = t->val;
	p_r_number = num;
	if (num >= 0) {
		storename(maketag(p_r_number, "", p_name, p_arity), p_val, p_arity);
		if (num == 0 && p_cut(p_val)) emit_savecurcp(p_arity+1);
	} /* else if (p_cut(p_val)) emit_saveprevcp(p_arity+1); */
	if (CODEGEN_DEBUG) 
		emit_dbg_entry(t, num);
	for (i = 1, it = t->first; it; it = it->next, i++) fetch_arg(it, i);
}

compile_tail(t, sav, nvars)
PTERM *t;
int sav;
int nvars;
{
PTERM *arg1;
int last;
	while (is_comma(t)) {
		arg1 = t->first;
		compile_body(arg1, FALSE, sav, nvars);
		if (p_dynamic(arg1->val)) emit_dyn_call(arg1->val);
		else if (is_userpred(arg1))
			emit_callp(maketag(0, "", arg1->str, arg1->narg), arg1->val);
		else if (is_callx(arg1)) emit_inst(CALLX);
		t = arg1->next; 
		check_codespace(pcode);
	}
	compile_body(t, TRUE, sav, nvars); /* CHECK - was last */
	if (sav) emit_crestore();
	if (p_dynamic(t->val)) emit_dyn_jump(t->val);
	else if (is_userpred(t)) 
		emit_jump(maketag(0, "", t->str, t->narg), t->val);
	else if (is_callx(t)) emit_inst(JUMPX);
	else emit_proceed();
}
 
compile_body(t, last, sav, nvars)
PTERM *t;
int last, sav, nvars;
{
PTERM *it;
int libval, i, r, r2;
int n_dump;
int temp_regs[MAX_SYSPRED_ARITY], free_flags[MAX_SYSPRED_ARITY], flag1, flag2;

	if (is_userpred(t)) {
		cur_atom_no++;
		for (i = 1, it = t->first; it != NULL; it = it->next, i++)
			put_arg(it, i, last);
		init_live_regs(0);	
		return;
	}
	if (is_equation(t) &&
		(!arith_tree(t->first) || !arith_tree(t->first->next) || 
		(t->first->ty == VAR && (t->first->next->ty == VAR)))) {
		put_arg(t->first, (r = getreg()), FALSE);
		put_arg(t->first->next, (r2 = getreg()), FALSE);
		emit_gettval(r, r2);
		return;
	}
	if (is_constraint(t)) { /*** this comes after is_eq test ***/
		full_constraint(t);
		return;
	}
	if (is_cut(t)) {
		if (has_fastcut) emit_fastcut(cutreg);
		else emit_docut(nvars+1);
		return;
	}
	if (is_printf(t)) {
		temp_regs[0] = set_arg(t->first, &flag1);
		temp_regs[1] = set_arg(t->first->next, &flag2);
		emit_printf(temp_regs);
		if (flag1) freereg(temp_regs[0]);
		if (flag2) freereg(temp_regs[1]);
		return;
	}
	if (is_print(t) || is_write(t)) {
		temp_regs[0] = set_arg(t->first, &flag1);
		emit_print(temp_regs);
		if (flag1) freereg(temp_regs[0]);
		return;
	}
	if (is_read(t)) {
		if (t->first->ty != VAR) type_error("read/1: variable needed", 0);
		temp_regs[0] = set_arg(t->first, &flag1);
		emit_read(t->first->str,  t->first->val, temp_regs);
		if (flag1) freereg(temp_regs[0]);
		return;
	}
	if (is_dump(t)) {
		n_dump = check_dump_args(t->first);
		temp_regs[0] = set_arg(t->first, &flag1);
		emit_dump((char *) dumpvarnames(t->first), temp_regs);
		if (flag1) freereg(temp_regs[0]);
		return;
	}
	if (is_retract(t)) {
		temp_regs[0] = set_arg(t->first, &flag1);
		emit_retract(temp_regs);
		emit_inst(RETRACT_AGAIN);
		if (flag1) freereg(temp_regs[0]);
		return;
	}
	if (is_rule(t)) { 
		temp_regs[0] = set_arg(t->first, &flag1);
		temp_regs[1] = set_arg(t->first->next, &flag2);
		emit_roole(temp_regs);
		emit_inst(ROOLE_AGAIN);
		if (flag1) freereg(temp_regs[0]);
		if (flag2) freereg(temp_regs[1]);
		return;
	}
	if (is_callx(t)) {
		put_arg(t->first, 1, FALSE);
		init_live_regs(0);
		return;
	}
	if (is_fail(t)) {
		emit_inst(FFAIL);
		return;
	}
	if (t->val == TRUEVAL) {
		emit_inst(NOOP);
		return;
	}
	libval = hashbuiltina(t->str, t->narg);
	if (spred[libval] && (spred[libval]->arity == t->narg)) {
		if (spred[libval]->arity > MAX_SYSPRED_ARITY) 
			fatal("arity of system predicate too high");
		for (i = 0, it = t->first; i < t->narg; i++,it = it->next)
			temp_regs[i] = set_arg(it, &free_flags[i]);
		emit_spcall(libval, temp_regs);
		for (i=0; i < t->narg; i++)
			if (free_flags[i]) freereg(temp_regs[i]);
		return;
	}
	show_pterm(t);
	fatal("34783");
}
 
/*------------------------------------------------------ reg handling -------*/

#define is_live_reg_bit(v, reg) \
	(v->live_regs[((reg) - 1) / 32] & bit1vec[32 - ((reg) % 32) + 1])
#define set_live_reg_bit(v, reg) \
	v->live_regs[((reg) - 1) / 32] |= bit1vec[32 - ((reg) % 32) + 1]
#define unset_live_reg_bit(v, reg) \
	v->live_regs[((reg) - 1) / 32] &= ~(bit1vec[32 - ((reg) % 32) + 1])

int top_free_reg; /* highest free reg */

init_live_regs(head_arity)
int head_arity;
{
int i;
VREC *v;
	for (i = 1; i < reg_lowmark; i++) {
		v = live_regs[i];
		if (v) {
			unset_live_reg_bit(v, i);
			v->n_live_regs = 0;
			live_regs[i] = NULL;
		}
		regused[i] = FALSE;
	}
	for (i = reg_highmark + 1; i <= MAX_REGS; i++) {
		v = live_regs[i];
		if (v) {
			unset_live_reg_bit(v, i);
			v->n_live_regs = 0;
			live_regs[i] = NULL;
		}
		regused[i] = FALSE;
	}
	for (i = 1; i <= head_arity; i++) {
		live_regs[i] = &dummy_vrec;
		regused[i] = TRUE;
	}
	reg_lowmark = head_arity + 1;
	reg_highmark = MAX_REGS;
    top_free_reg = 0; 
}

make_dead_reg(reg) /* new, better reg usage */
int reg;
{
VREC *v;

	check_reg_range(reg);
	if ((v = live_regs[reg]) && (v != &dummy_vrec)) {
		if (is_live_reg_bit(v, reg)) {
			unset_live_reg_bit(v, reg);
			v->n_live_regs--;
		} else fatal("49432");
	}
	live_regs[reg] = NULL;	
	regused[reg] = FALSE;
	if (reg > reg_highmark) {
		while (!regused[reg_highmark + 1] && reg_highmark < MAX_REGS) 
			reg_highmark++;
		if (reg_highmark >= top_free_reg) top_free_reg = 0;
		else if (reg > top_free_reg) top_free_reg = reg;
	} else if (reg < reg_lowmark) {
		while (!regused[reg_lowmark - 1] && reg_lowmark > 1)  
			reg_lowmark--;
	} 
}

make_live_reg(reg, v)
int reg;
VREC *v;
{
	check_reg_range(reg);
	regused[reg] = TRUE;
	live_regs[reg] = v;
	if (v != &dummy_vrec) {
		if (!is_live_reg_bit(v, reg)) {
			set_live_reg_bit(v, reg);
			v->n_live_regs++;
		} else fatal("49433");
	}
	if (reg <= reg_highmark && reg >= reg_lowmark) {
		if (reg_highmark - reg <= reg - reg_lowmark) reg_highmark = reg - 1;
		else reg_lowmark = reg + 1;
	}
}

var_has_reg(reg, v)
int reg;
VREC *v;
{
	check_reg_range(reg);
	if (live_regs[reg] == v) return TRUE;
	else return FALSE;
}

make_change_reg(reg, v)
int reg;
VREC *v;
{
	if (live_regs[reg] != v) {
		make_dead_reg(reg);
		make_live_reg(reg, v);
	}
}

has_live_reg(v)
VREC *v;
{
int i, k; 
unsigned int j;
	if (!v->n_live_regs) return 0;
	for (i = 0; i < (MAX_REGS / 32); i++) {
		if (j = v->live_regs[i]) {
			for (k = 1; k <= 32; k++) {
				if (j & bit1vec[k]) return ((32 * i) + (32 - k + 1));
			}
		}
	}
	fatal("49434");
}

getreg() /* new, better reg usage */
{
int i, reg;

	if (top_free_reg) {
		reg = top_free_reg;
        for (i=top_free_reg-1; i > reg_highmark; i--)
            if (!regused[i]) break;
        if (i != reg_highmark) 
            top_free_reg = i;
        else top_free_reg = 0; /* no more free regs between highmark */
	} else if (reg_highmark >= reg_lowmark)
		reg = reg_highmark--;
	else fatal("Run out of registers during compilation");
	regused[reg] = TRUE;
	live_regs[reg] = &dummy_vrec;
	return reg;
}	
 
freereg(i) /* same as make_dead_reg now */
int i;
{
int j;

	make_dead_reg(i);
}
 
print_live_regs()
{
int i;
	for (i = 1; i <= MAX_REGS; i++) 
		if (live_regs[i] && live_regs[i] != &dummy_vrec)
			 printf("reg %d var %s\n", i, live_regs[i]->str);
}

extern FILE *cur_stream;
extern char *cur_filename;
type_error(s, arg1)
char *s;
int arg1;
{
char buf[256];
	if (cur_rule_pterm) {
		fprintf(error_stream, ">>> ");
		print_term(cur_rule_pterm, MAX_OP_PRECEDENCE+1);
		fprintf(outfile, ".\n");
	}
	sprintf(buf, s, arg1);
	fprintf(error_stream, "*** Type error: %s\n", buf);
	cleanup_rulebase();

        if (cur_stream != stdin) {
                fclose(cur_stream);
                close_input(cur_stream);
	}

	top_level();
}
	
/*------------------------------------------------------ var analysis -------*/

lookatvars(t) 
PTERM *t;
{
PTERM *it, *atom;
int n;

	varlist = end_varlist = NULL;
	for (n = 0; n <= MAX_VAR_TO_VREC; n++) var_to_vrec[n] = NULL;
	n = 0;
	if (is_implies(t) || is_comma(t)) {
		vars_in_atom(t->first, 0);
		for (it = t->first->next, n = 0; is_comma(it); it = it->first->next) {
			atom = it->first;
			if (n == 0 && (is_userpred(atom) || is_backtrackable(atom))) n = 1;
			vars_in_atom(atom, n);
			if (is_userpred(atom) || is_backtrackable(atom)) n++;
		}
		if (n == 0 && (is_userpred(it) || is_backtrackable(it))) n = 1;
		vars_in_atom(it, n);
	} else if (is_query(t) || is_command(t) || is_directive(t)) {
		for (it = t->first, n = 1; is_comma(it); it = it->first->next) {
			atom = it->first;
			vars_in_atom(atom, n);
			if (is_userpred(atom) || is_backtrackable(atom)) n++;
		}
		vars_in_atom(it, n);
	} else vars_in_atom(t, 0);
	n_chunks = n;
}

alocvar(t, hascut, all_perm)
PTERM *t;
int hascut, all_perm;
{
VREC *v;
int vnum;
	vnum = 0;
	for (v = varlist; v; v = v->next) {
		if (!all_perm && (
			is_chunk01only_var(v) || 
			(is_in1atomonly_var(v) && is_1stinfunc_var(v)) ||
			is_lastatomonly_var(v)
		)) {
			v->stack_loc = 0;
			if (is_void_var(v) && v->occ[1].level == 1) 
				make_dead_reg(v->occ[1].arg);
		} else {
			v->stack_loc = ++vnum;
			v->saved_stack_loc = FALSE;
		}
	}
	return vnum;
}

vars_in_atom(t, atom)
PTERM *t;
int atom;
{
int arg;
PTERM *it;
int type1, type2;
int tmp1, tmp2;
	if (!t->narg) {
		if (!hascut) hascut = is_cut(t);
		return;
  	} 
	if (is_constraint(t)) {
		tmp1 = (is_ineq(t) || is_arith_term(t->first));
		tmp2 = (is_ineq(t) || is_arith_term(t->first->next));
		type1 = vars_in_term(t->first, atom, 1, TRUE, tmp1, 1);
		type2 = vars_in_term(t->first->next, atom, 2, TRUE, tmp2, 1);
		if (is_ineq(t)) typecheck_arith(type1, type2);
		else typecheck_clash(type1, type2);
		return;
	}
	for (it = t->first, arg = 1; it != NULL; it = it->next, arg++) {
		vars_in_term(it, atom, arg, FALSE, is_arith_term(it), 1);
	}
}
 
vars_in_term(t, atom, arg, constr, arith, level)
PTERM *t;
int atom, arg, constr, arith, level;
{
PTERM *it, *arg1, *arg2;
VREC *v;
int n, type1, type2;
	if (is_p_var(t)) {
		v = notevar(t->val);
		v->str = t->str;
		if ((n = v->occ_top + 1) <= MAX_VAR_OCC) {
			v->occ[n].atom = atom;
			v->occ[n].arg = arg;
			v->occ[n].level = level;
			v->occ_top = n;		
		}
		return (arith ? REAL : 0);
	}
	if (is_p_func(t)) {
		if (is_arith_term(t)) {
			arg1 = t->first;
			type1 = vars_in_term(arg1, atom, arg, constr, 
								 !is_eval(t), level + 1);
			if (t->narg >= 2) {
				arg2 = arg1->next;
				type2 = vars_in_term(arg2, atom, arg, constr, TRUE, level + 1);
			} else type2 = type1; 
			if (!is_eval(t)) typecheck_arith(type1, type2);
			return REAL;
		}
		if (arith) typecheck_error();
		if (!t->narg) return FUNC;
		for (it = t->first; it != NULL; it = it->next) {
			vars_in_term(it, atom, arg, constr, FALSE, level + 1);
		}
		return FUNC;
	}
	if (t->ty == REAL) return REAL;
	if (arith) typecheck_error();
	else return FUNC;
}

VREC *notevar(val) /*** creates/finds entry for a particular variable ***/
int val;
{
VREC *v;

	if (val <= MAX_VAR_TO_VREC) {
		if (v = var_to_vrec[val]) return v;
		if (end_varlist) {
			end_varlist->next = get_vrec();
			end_varlist = end_varlist->next;
		} else varlist = end_varlist = get_vrec(); 
		var_to_vrec[val] = end_varlist;
	} else {
		for (v = varlist; v; v = v->next) if (v->val == val) return v;
		if (end_varlist) {
			end_varlist->next = get_vrec();
			end_varlist = end_varlist->next;
		} else varlist = end_varlist = get_vrec(); 
	}
	end_varlist->val = val;
	return end_varlist;
}
 
static VREC *val_info(val, reg, stack_loc, is_new_reg, is_new_var)
int val, *reg, *stack_loc, *is_new_reg, *is_new_var;
{
VREC *v;
int i;
	*reg = *stack_loc = 0;
	v = notevar(val);
	if (v->stack_loc) {
		*stack_loc = v->stack_loc;
		*is_new_var = (!v->saved_stack_loc);
	} else {
		if (i = has_live_reg(v)) {
			*reg = i;
			*is_new_reg = FALSE;
		} else if ((*reg = find_target_reg(v, 1))) *is_new_reg = TRUE;
		else {
			*reg = getreg();
			*is_new_reg = TRUE;
		}
	}
	return v;
}

VREC *get_vrec()
{
VREC *v;
int i;
	if (!vrec_freelist) v = (VREC *) emalloc(sizeof(VREC));
	else {
		v = vrec_freelist;
		vrec_freelist = vrec_freelist->next;
		if (!vrec_freelist) vrec_endfreelist = NULL;
	}
	for (i = 0; i < (MAX_REGS / 32); i++) v->live_regs[i] = 0;
	v->val = v->occ_top = v->n_live_regs = v->stack_loc = 0;
	v->next = NULL;
	v->str = NULL;
	v->saved_stack_loc = FALSE;
	return v;
}

free_varlist()
{
	if (!varlist) return;
	if (vrec_endfreelist) {
		vrec_endfreelist->next = varlist;
		vrec_endfreelist = end_varlist;
	} else {
		vrec_freelist = varlist;
		vrec_endfreelist = end_varlist;
	}
	varlist = end_varlist = NULL;
}

/*---------------------------------------------------------- get's ----------*/

fetch_arg(t, reg)
PTERM *t;
int reg;
{
PTERM *it;
VREC *v;
int tmp;
	check_codespace(pcode);
	if (is_p_real(t)) {
		emit_gettnum(t->rval, reg);
		if (reg == 1 && !CODEGEN_DEBUG && p_r_number != -1)
			storename(make_ftag(p_name, p_arity, p_r_number), p_val, p_arity);
		make_dead_reg(reg);
	} else if (is_p_emptylist(t)) {
		emit_getnil(reg);
		if (reg == 1 && !CODEGEN_DEBUG && p_r_number != -1)
			storename(make_ftag(p_name, p_arity, p_r_number), p_val, p_arity);
		make_dead_reg(reg);
	} else if (is_p_constant(t)) {
		emit_getcon(t->val, reg);
		if (reg == 1 && !CODEGEN_DEBUG && p_r_number != -1)
			storename(make_ftag(p_name, p_arity, p_r_number), p_val, p_arity);
		make_dead_reg(reg);
	} else if (is_arith_term(t)) {
		half_constraint(FALSE, -reg, t);
		make_dead_reg(reg);
	} else if (is_p_func(t)) {
		fetch_func(t, reg);
	} else if (is_p_var(t)) {
		v = notevar(t->val);
		if (is_void_var(v)) return;
		if (v->stack_loc) {
			if (v->saved_stack_loc) emit_getpval(v->stack_loc, reg);
			else {
				emit_getpvar(v->stack_loc, reg);
				v->saved_stack_loc = TRUE;
			}
			/* optimisation fix, line deleted */
		} else if (tmp = has_live_reg(v)) emit_gettval(tmp, reg);
		make_live_reg(reg, v);
	} else if (is_p_string(t)) /*** nothing ***/ ;
	else fatal("86654");
}

fetch_func(t, reg) /*** reg == 0 means deep level ***/
PTERM *t;
int reg;
{
int i, j, r1, r2, tmp, arity, fmask;
int count, save_trtop, tmp_trtop;
PTERM *it;
	if (reg) {
		if (is_p_list(t)) emit_getlist(reg);
		else emit_getstr(t->val, reg);
		if (reg == 1 && !CODEGEN_DEBUG && p_r_number != -1)
			storename(make_ftag(p_name, p_arity, p_r_number), p_val, p_arity);
		make_dead_reg(reg); 
	} else {
		if (is_p_list(t)) emit_unilist();
		else emit_unistr(t->val);
	}
	arity = t->narg;
	count = 0;
	save_trtop = trtop;
	for (j = 1, it = t->first; it; j++, it = it->next) {
		if (j == arity && is_complex_func(it) && !count) {
			fetch_func(it, 0);
			break;
		} 
		if ((fmask = can_gen_uni2var(it)) && 
			!(j == arity-1 && is_p_func(it->next) && !count)
			&& gen_uni2var(it, fmask, &r1, &r2)) {
			if (bit1(fmask)) {
				count++;
				trail[trtop++] = (int *) it;
				trail[trtop++] = (int *) r1; 
			}
			if (bit2(fmask)) {
				count++;
				trail[trtop++] = (int *) it->next;
				trail[trtop++] = (int *) r2; 
			}
			it = it->next;
			j++;
			continue;
		}
		if ((is_arith_term(it) && !is_eval(it))
				|| !is_p_func(it)) fetch_uni_nonfunc(it);
		else {
			count++;
			trail[trtop++] = (int *) it;
			tmp = getreg();
			trail[trtop++] = (int *) tmp;
			emit_unitvar(tmp);
		}
	}
	tmp_trtop = save_trtop;  /*** dont reset trtop yet! ***/
	for (; count; count--) {
		it = (PTERM *) trail[tmp_trtop++];
		tmp = (int) trail[tmp_trtop++];
		if (is_eval(it)) half_constraint(FALSE, -tmp, it); /* CHECK */
		else fetch_func(it, tmp);
	}
	trtop = save_trtop;
}

fetch_uni_nonfunc(t)
PTERM *t;
{
VREC *v;
int tmp;
	if (is_p_real(t)) emit_uninum(t->rval);
	else if (is_p_emptylist(t)) emit_uninil();
	else if (is_p_constant(t)) emit_unicon(t->val);
	else if (is_arith_term(t)) {
		emit_unitvar(tmp = getreg());
		half_constraint(FALSE, -tmp, t);
	} else if (is_p_var(t)) {
		v = notevar(t->val);
		if (is_void_var(v)) {
			emit_univoid(1); 
			return;
		}
		if (v->stack_loc) {
			if (v->saved_stack_loc) emit_unipval(v->stack_loc);
			else {
				emit_unipvar(v->stack_loc);
				v->saved_stack_loc = TRUE;
			}
			return;
		}
		if (tmp = has_live_reg(v)) {
			emit_unitval(tmp);
			return;
		}
		if (tmp = find_target_reg(v, 1)) {
			make_live_reg(tmp, v);
			emit_unitvar(tmp);
			return;
		}
		emit_unitvar(tmp = getreg());
		make_live_reg(tmp, v);
	} else if (is_p_string(t)) /*** nothing ***/ ;
	else fatal("86652");
}

/*---------------------------------------------------------- put's ----------*/

set_arg(t, free)
PTERM *t;
int *free;
{
int reg;
VREC *v;	

	if (is_p_var(t)) {
		v = notevar(t->val);
		if (reg = has_live_reg(v)) {
			*free = FALSE;
			return reg;
		}
	}
	reg = getreg();
	put_arg(t, reg, FALSE);
	if (is_p_var(t)) *free = FALSE;
	else *free = TRUE;
	return reg;
}
	
put_arg(t, reg, last) /*** top-level ***/
PTERM *t;
int reg, last;
{
PTERM *it;
VREC *v;
int j, arity, tmp;
int save_trtop;
	check_codespace(pcode);
	if (!is_complex_func(t) && !is_eval(t)) {
		put_arg_nonfunc(t, reg, last);
		return;
	}
	if (is_arith_term(t)) { /* this is to compile eval */
		check_if_save_reg(reg);
		make_change_reg(reg, &dummy_vrec);
		half_constraint(TRUE, -reg, t);
		return;
	}
	set_rr_info(t);
	arity = t->narg;
	save_trtop = trtop;
	for (j = 1, it = t->first; it; j++, it = it->next) {
		if ((is_complex_func(it) || is_eval(it)) && (j < arity || !is_rr(it))) 
			trail[trtop++] = (int *) put_func(it);
	} 
	check_if_save_reg(reg);
	if (is_p_list(t)) emit_putlist(reg);
	else if (is_complex_func(t)) emit_putstr(t->val, reg);
	else fatal("51232");
	make_change_reg(reg, &dummy_vrec);
	trtop = save_trtop;
	for (j = 1, it = t->first; it; j++, it = it->next) {
		if (is_complex_func(it) || is_eval(it)) {
			if (j < arity || !is_rr(it)) {
				tmp = (int) trail[trtop++];
				emit_bldtval(tmp);
				freereg(tmp);
			} else put_last_func(it);
		} else put_bld_nonfunc(it);
	}
	trtop = save_trtop;
}

put_arg_nonfunc(t, reg, last) /*** top-level ***/
PTERM *t;
int reg, last;
{
int tmp;
VREC *v, *v2;
	if (is_p_real(t)) {
		check_if_save_reg(reg);
		emit_puttnum(t->rval, reg);
		make_change_reg(reg, &dummy_vrec);
	} else if (is_p_emptylist(t)) {
		check_if_save_reg(reg);
		emit_putnil(reg);
		make_change_reg(reg, &dummy_vrec);
	} else if (is_p_constant(t)) {
		check_if_save_reg(reg);
		emit_putcon(t->val, reg);
		make_change_reg(reg, &dummy_vrec);
	} else if (is_arith_term(t)) {
		check_if_save_reg(reg);
/*** BUG1 ***/
		make_change_reg(reg, &dummy_vrec); /* clobber reg */
		half_constraint(TRUE, -reg, t);
		make_change_reg(reg, &dummy_vrec);
	} else if (is_p_var(t)) {
		v = notevar(t->val);
		if (v->stack_loc) {
			/* Optimise change, should reorder */
			/* TO CHECK */
			if ((tmp = has_live_reg(v)) && !last) goto USEREG; 
			check_if_save_reg(reg);
			if (v->saved_stack_loc)	{
				if (last && !is_head_var(v)) emit_putuval(v->stack_loc, reg); 
				else emit_putpval(v->stack_loc, reg); 
			} else {
				if (last) fatal("54126");
				emit_putpvar(v->stack_loc, reg); 
				v->saved_stack_loc = TRUE;
			}
			make_change_reg(reg, v);
		} else {
			if (tmp = has_live_reg(v)) {
USEREG:
				if (!var_has_reg(reg,v) &&  tmp != reg) { /* CHECK */
					check_if_save_reg(reg);
					emit_gettvar(reg, tmp);
					make_dead_reg(tmp);
					make_change_reg(reg, v);
				}
			} else { 
				check_if_save_reg(reg);
				if (last) {
					emit_puttvar(reg);
					make_change_reg(reg, v);
				} else {
					/*** emit_reginit(reg); ***/
					emit_puttvar(reg);
					make_change_reg(reg, v);
				}
			}
		}
	}
}

put_func(t) /*** t is complex */
PTERM *t;
{
PTERM *it;
int i, arity;
int tmp, tmp0, flag;
int save_trtop;
	if (is_arith_term(t)) { /* this is to compile eval */
        int reg;
        reg = getreg();
		half_constraint(TRUE, -reg, t);
		make_change_reg(reg, &dummy_vrec);
        return reg;
    }
	arity = t->narg;
	save_trtop = trtop;
	for (i = 1, it = t->first; it; i++, it = it->next) {
		if ((is_complex_func(it) || is_eval(it)) && 
				(i < arity || !is_rr(it))) 
			trail[trtop++] = (int *) put_func(it);
	}
	if (is_p_list(t)) emit_putlist(tmp0 = getreg());
	else if (is_complex_func(t)) emit_putstr(t->val, tmp0 = getreg());
	else fatal("54127");
	trtop = save_trtop;
	for (i = 1, it = t->first; it; i++, it = it->next) {
		if (is_complex_func(it) || is_eval(it)) { 
			if (i < arity || !is_rr(it)) {
				emit_bldtval(tmp = (int) trail[trtop++]);
				freereg(tmp);
			} else put_last_func(it);
		} else put_bld_nonfunc(it);
	}
	trtop = save_trtop;
	return tmp0;
}

put_last_func(t) /*** emit bldstr/bldlist? ***/
PTERM *t;
{
PTERM *it;
int tmp;
	if (is_arith_term(t)) { /* this is to compile eval */
                int reg;
                reg = getreg();
                emit_bldtvar(reg);
		check_if_save_reg(reg);
		half_constraint(FALSE, -reg, t);
		make_change_reg(reg, &dummy_vrec);
                return;
        }
	if (is_p_list(t)) emit_bldlist();
	else emit_bldstr(t->val);
	for (it = t->first; it; it = it->next) {
		if (is_complex_func(it)) put_last_func(it);
		else put_bld_nonfunc(it);
	}
}

put_bld_nonfunc(t)
PTERM *t;
{
VREC *v;
int tmp;
	if (is_p_real(t)) emit_bldnum(t->rval);
	else if (is_p_emptylist(t)) emit_bldnil();
	else if (is_p_constant(t)) emit_bldcon(t->val);
	else if (is_arith_term(t)) {
		half_constraint(TRUE, -(tmp = getreg()), t);
		emit_bldtval(tmp);
		freereg(tmp);
	} else if (is_p_var(t)) {
		v = notevar(t->val);
		if (v->stack_loc) {
			if (!v->saved_stack_loc) {
				emit_bldpvar(v->stack_loc);
				v->saved_stack_loc = TRUE;
			} else emit_bldpval(v->stack_loc);
		} else {
			if (tmp = has_live_reg(v)) emit_bldtval(tmp);
			else {
				if (is_single_occ(v)) emit_bldvoid();
				else if (tmp = find_target_reg(v, cur_atom_no)) {
					emit_bldtvar(tmp);
					make_live_reg(tmp, v);
				} else { 
					emit_bldtvar(tmp = getreg());
					make_live_reg(tmp, v);
				}
			}
		}
	} else if (is_p_string(t)) 
		type_error("strings only in printf/2 (for now)", 0);
	else fatal("23842");
}

can_gen_uni2var(t) /* 0x1:fv 0x2:vf 0x3:ff 0x4:vv 0:false */
PTERM *t;
{
PTERM *sib;
int fmask; 
	fmask = 0; 
	if (!(sib = t->next)) return 0;
	if (is_complex_func(t)) set_bit1(fmask);
	else if (!is_p_var(t)) return 0;
	if (is_complex_func(sib)) set_bit2(fmask);
	else if (!is_p_var(sib)) return 0;
	if (!fmask) return 4;
	else return fmask;
}

gen_uni2var(t, fmask, r1, r2)
PTERM *t;
int fmask, *r1, *r2;
{
VREC *v1, *v2;
int i1, i2, is_new_reg, is_new_var;
int trail_reg;

	trail_reg = 0;
	*r2 = *r1 = i1 = i2 = 0;
	if (bit1(fmask)) *r1 = getreg();
	else {
		v1 = notevar(t->val);
		if (!is_void_var(v1)) {
			v1 = val_info(t->val, r1, &i1, &is_new_reg, &is_new_var);
			if (*r1) {
				if (!is_new_reg) return FALSE;
				make_live_reg(*r1, v1);
				trail_reg = *r1;
			} else {
				if (!is_new_var) return FALSE;
				v1->saved_stack_loc = TRUE;
			}
		} 
	}
	if (bit2(fmask)) *r2 = getreg();
	else {
		v2 = notevar(t->next->val);
		if (!is_void_var(v2)) {
			v2 = val_info(t->next->val, r2, &i2, &is_new_reg, &is_new_var);
			if (*r2) {
				if (!is_new_reg) goto UNDO;
				make_live_reg(*r2, v2);
			} else {
				if (!is_new_var) goto UNDO;
				v2->saved_stack_loc = TRUE;
			}
		}
	}
	if (*r1) {
		if (*r2) emit_uni2ttvar(*r1, *r2);
		else if (i2) emit_uni2tpvar(*r1, i2);
		else emit_uni2tvvar(*r1);
	} else if (*r2) {
		if (i1) emit_uni2ptvar(i1, *r2);
		else emit_uni2vtvar(*r2);
	} else if (i1) {
		if (i2) emit_uni2ppvar(i1, i2);
		else emit_uni2pvvar(i1);
	} else if (i2) emit_uni2vpvar(i2);
	else emit_univoid(2);
	return TRUE;
UNDO:
	if (bit1(fmask)) freereg(*r1);
	else if (!is_void_var(v1)) {
		if (trail_reg) make_dead_reg(trail_reg);
		else v1->saved_stack_loc = FALSE;
	}
	return FALSE;
}





/* OLD */
/*
gen_uni2var(t, fmask, r1, r2)
PTERM *t;
int fmask, *r1, *r2;
{
VREC *v1, *v2;
int i1, i2, is_new_reg, is_new_var;
int trail_reg;

	trail_reg = 0;
	if (bit1(fmask)) *r1 = getreg();
	else {
		v1 = val_info(t->val, r1, &i1, &is_new_reg, &is_new_var);
		if (*r1) {
			if (!is_new_reg) return FALSE;
			make_live_reg(*r1, v1);
			trail_reg = *r1;
		} else {
			if (!is_new_var) return FALSE;
			v1->saved_stack_loc = TRUE;
		}
	}
	if (bit2(fmask)) *r2 = getreg();
	else {
		v2 = val_info(t->next->val, r2, &i2, &is_new_reg, &is_new_var);
		if (*r2) {
			if (!is_new_reg) goto UNDO;
			make_live_reg(*r2, v2);
		} else {
			if (!is_new_var) goto UNDO;
			v2->saved_stack_loc = TRUE;
		}
	}
	if (*r1) {
		if (*r2) emit_uni2ttvar(*r1, *r2);
		else emit_uni2tpvar(*r1, i2); 
	} else {
		if (*r2) emit_uni2ptvar(i1, *r2);
		else emit_uni2ppvar(i1, i2);
	}
	return TRUE;
UNDO:
	if (bit1(fmask)) freereg(*r1);
	else if (trail_reg) make_dead_reg(trail_reg);
	else v1->saved_stack_loc = FALSE;
	return FALSE;
}
*/

/*---------------------------------------------------------------------------*/

checksave(t, hascut) /* CHECK */
PTERM *t;
int hascut;
{
PTERM *it, *atom;
int early_cut;

	early_cut = FALSE;
	has_fastcut = FALSE;
	for (it = t; is_comma(it); it = it->first->next) {
		atom = it->first;
		if (is_userpred(atom) || is_backtrackable(atom)) break;
		else if (is_cut(atom)) early_cut = TRUE;
	}
	if (!is_comma(it)) {
		if (is_cut(it) || early_cut) has_fastcut = TRUE;
		return FALSE;
	} else has_fastcut = FALSE;
	return TRUE;
}

check_if_save_reg(reg)
int reg;
{
VREC *v;
int tmp;
	if ((v = live_regs[reg]) && 
	    (v->n_live_regs == 1) &&
	    (reg <= find_last_arg(v, cur_atom_no))) {
		tmp = find_target_reg(v, cur_atom_no);
		if (!tmp) emit_gettvar((tmp = getreg()), reg);
		else emit_gettvar(tmp, reg);
		make_live_reg(tmp, v);
	}		
}

find_last_arg(v, atom)
VREC *v;
int atom;
{
int i, n, arg;
	arg = 0;
	n = v->occ_top;
	for (i = 1; i <= n; i++) if (v->occ[i].atom >= atom) break;
	for (; i <= n && v->occ[i].atom == atom; i++) arg = v->occ[i].arg;
	return arg;
}

find_target_reg(v, atom) /*** find toplevel var in atom ***/
VREC *v;
int atom;
{
int i, n;
	n = v->occ_top;
	for (i = 1; i <= n; i++) if (v->occ[i].atom >= atom) break;
	for (; i <= n && v->occ[i].atom == atom; i++)
		if (v->occ[i].level == 1 && !live_regs[v->occ[i].arg])
			return v->occ[i].arg;
	return 0;
}

set_rr_info(t) /*** is t right-recursive? ***/
PTERM *t;
{
PTERM *it;
int flag, flag0;
	if (!is_complex_func(t)) {
		set_rr(t);
		return TRUE;
	} else {
		flag0 = TRUE;
		for (it = t->first; it; it = it->next) {
			flag = set_rr_info(it);
			if (!it->next) { 
				if (!flag0 || !flag) {
					unset_rr(t);
					return FALSE;
				}
			} else if (is_complex_func(it)) flag0 = FALSE;
		}
		set_rr(t);
		return TRUE;
	}
}

/*------------------------------------------------------ aux stuff ----------*/

char *maketag(n, extra, str, arity)
int n;
char *extra, *str;
int arity;
{
char buf[256], *s;
	sprintf(buf, "E$%d%s_%s/%d", n, extra, str, arity);
	s = char_malloc(strlen(buf) + 1);
	strcpy(s, buf);
	return s;
}
 
char *smalltag(str,arity)
char *str;
int arity;
{
char ts[256];
char *s;
	s = char_malloc(80);
	strcat(s, str);
	strcat(s, "/");
	sprintf(ts, "%d", arity);
	strcat(s, ts);
	return s;
}

check_dump_args(t) /*** list of vars? ***/
PTERM *t;
{
	int n;

	for (n=0; !is_emptylist(t); t=t->first->next, n++) {
		if (!is_p_list(t)) type_error("Bad argument to dump/1", 0);
		if (!is_p_var(t->first)) type_error("Bad argument to dump/1", 0);
	}
	return n;
}

PTERM *makedumpvars(v) /*** command line goal only, right-left priority ***/
VREC *v;
{
PTERM *t;
	t = new_pterm();
	t->ty = FUNC;
	t->val = EMPTYLIST;
	t->str = "[]";
	t->narg = 0;
	t->first = t->next = NULL;
	return makedumpvars1(v, t);
}

PTERM *makedumpvars1(v, prev) /*** command line goal only ***/
VREC *v;
PTERM *prev;
{
PTERM *t;
	if (v == NULL) return prev;
	if (v->str[0] == '_') return makedumpvars1(v->next, prev);
	t = new_pterm();
	t->ty = FUNC;
	t->val = DOT;
	t->str = ".";
	t->narg = 2;
	t->first = new_pterm();
	t->first->ty = VAR;
	t->first->val = v->val;
	t->first->str = v->str;
	t->first->narg = 0;
	t->first->next = prev;
	return makedumpvars1(v->next, t);
}

PTERM *makedumpvars0(v) /*** command line goal only, left-right priority ***/
VREC *v;
{
PTERM *t;
	if (v == NULL) {
		t = new_pterm();
		t->ty = FUNC;
		t->val = EMPTYLIST;
		t->str = "[]";
		t->narg = 0;
		t->first=t->next=NULL;
	} else {
		t = new_pterm();
		t->ty = FUNC;
		t->val = DOT;
		t->str = ".";
		t->narg = 2;
		t->first = new_pterm();
		t->first->ty = VAR;
		t->first->val = v->val;
		t->first->str = v->str;
		t->first->narg = 0;
		t->first->next = makedumpvars0(v->next);
	}
	return t;
}

char dumpvarstring[MAX_DUMP_VARSTRING];
char *dumpvarnames(t)
PTERM *t;
{
char *c, *c1;
	c = dumpvarstring;
	loop {
		if (t->ty == FUNC && t->narg == 0) {
			*c = '\0';
			break;
		}
		c1 = t->first->str;
		while (*c1 != '\0') *(c++) = *(c1++);
		*(c++) = DUMP_SEPARATOR;
		t = t->first->next;
	}
	*c = '\0';
	c = (char *) malloc(strlen(dumpvarstring) + 1);
	strcpy(c, dumpvarstring);
	return c;
}
 
arith_tree(t)
PTERM *t;
{
PTERM *it;
	if (t->ty == REAL) return TRUE;
	else if (t->ty == FUNC && !is_arith_term(t)) return FALSE;
	else if (is_arith_term(t)) return TRUE;
	else if (t->ty == VAR) return TRUE;
	fatal("43892");
}

val_of_cur_rule()
{
	return cur_head->val;
}

cleanup_rulebase()
{
int i, j, k;
char *s;
int count;
RULE *r, *tmp, *prev, *first_rule, *last_rule;
int found_first, max_loc = 0;

	for (i = 1; i < getmaxfunc(); i++) { /*** procedure i ***/
		if (!(r = p_first_rule(i))) continue;
		last_rule = prev = (RULE *) NULL;
		found_first = FALSE; 
		first_rule = (RULE *) NULL; /* not neccesary but tricky */
		while (r) {
			if (r->endcode == -1) {
				tmp = r;
				max_loc = set_inactive_rule(i, r->id, max_loc);
				r = r->next;
				free_rule(tmp);
				if (found_first) { /* now delete the rest */
					while (r) {
						max_loc = set_inactive_rule(i, r->id, max_loc);
						tmp = r;
						r = r->next;
						free_rule(tmp);
					}
					last_rule = prev;
					break;
				}
				if (prev) prev->next = NULL;
			} else {
				if (!found_first) {
					first_rule = r;
					found_first = TRUE;
				}
				prev = r;
				r = r->next;
			} 
		}
		if (!found_first) {
			assign_p_compiled(i, FALSE);
			assign_p_first_rule(i, NULL);
			assign_p_last_rule(i, NULL);
#ifdef FREE_CODE_SPACE
			free_hdrcode(i);
#else
			assign_p_start_hdrcode(i, 0);
			assign_p_end_hdrcode(i, 0);
#endif
		} else {
			assign_p_first_rule(i, first_rule);
			assign_p_compiled(i, TRUE);
			if (prev) {
				assign_p_last_rule(i, prev);
				prev->next = (RULE *) NULL;
			} else {
				assign_p_last_rule(i, first_rule);
				first_rule->next = (RULE *) NULL;
			}
		}
	}
	resolve(FALSE);
	if (max_loc && pcode > max_loc + 1) {
/* CLEAN UP */
/*		printf("@@@ pcode %d epcode %d reset to %d\n", pcode,epcode,max_loc);*/
		epcode = pcode = max_loc + 1;
	}
	init_lable(); 
}

set_inactive_rule(val, rule_no, max)
int val, rule_no, max;
{
int loc;

	if ((loc = find_loc_for_lable(val, 
			maketag(rule_no, "", string_of(val), arity_of(val)))) > 0) {
		code[loc] = FFAIL;
		if ((loc = find_loc_for_lable(val, 
				make_ftag(string_of(val), arity_of(val), rule_no))) > 0) {
			code[loc] = FFAIL;
		}
		return (max > loc ? max : loc);
	} else return max;
}

check_rule(r, num) 
PTERM *r;
int num;
{
VREC *v;
int n, i, flag = FALSE;
PTERM *head;

	for (n=0,v = varlist; v; v = v->next) 
		if (v->occ_top == 1 && v->str[0] != '_') n++;
	if (!n) return;
	if (num == 0) num = 1;
	head = (is_implies(r) ? r->first : r);
	fprintf(error_stream, 
		"Warning: Style check, singleton variables, rule %d of %s/%d\n +++ ", 
		num, head->str, head->narg);
	
	for (i=0, v = varlist; v; v = v->next, i++) 
		if (v->occ_top == 1 && v->str[0] != '_') {
			n--;
			if ((i ==  6) && (n > 0)) {
				i = 0; 
				fprintf(stderr, "\n +++ ");
			}
			if (n > 0) fprintf(error_stream, " %s,", v->str);
			else fprintf(error_stream, " %s", v->str);
		}
	fprintf(stderr, "\n");
}

check_multiple_defs(name)
char *name;
{
	PTERM *list;
	struct HASHNODE *hnode;
	int i, n;

	if (!(hnode = get_similar_func(name))) fatal("31778");
	for (n=0,list=hnode->t; list; list=list->next)
		if (p_first_rule(list->val)) {
			n++;
			assign_p_added(list->val, FALSE);
		}

	if (n > 1) {
		fprintf(stderr, "Warning: rule overloading, same name, different arity:\n +++ ");
		for (i=0,list=hnode->t,i=0; list; list=list->next,i++) {
			if (!p_first_rule(list->val)) continue; 
			n--;
			if ((i == 6) && (n > 0)) {
				i = 0;
				fprintf(stderr, "\n +++ ");
			}
			if (n > 0) fprintf(stderr, " %s/%d,", name, list->narg);
			else fprintf(stderr, " %s/%d", name, list->narg);
		}
		fprintf(stderr, "\n");
	}
}

do_clear_style()
{
	int i;

	for (i = 1; i < getmaxfunc(); i++) 
		if (p_added(i)) assign_p_added(i, FALSE);
	return TRUE;
}

compiling_r_val()
{
	return p_val;
  }
