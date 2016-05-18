/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: index.c                                              *
 ***************************************************************/

#include "standard.h"
#include "config.h"
#include "parse.h"
#include "symbols.h"
#include "lib.h"
#include "compile.h"
#include "opcodes.h"
#include "emul.h"

#define MAX_INDEX_CHAIN 256 /*** do not increase ***/
/* default */
/**
#define MAX_INDEX_CLAUSES 256
**/
#define MAX_INDEX_CLAUSES 2000
#define MAX_INDEX_TYPES N_TOKEN_TYPES

#define FASTLABEL	(1)
#define NOFASTLABEL	(0)

#define TYPELABEL	(1)
#define CHAINLABEL	(0)

#define FAIL_PROC "E$0_$fail/0"

#define type_chain(i)   (index_chains[i].type)
#define val_chain(i)    (index_chains[i].val)
#define length_chain(i) (index_chains[i].tail[0])
#define rule_in_chain(c,n) (index_chains[c].tail[n])

struct chain {
	int val;
	int type;
	int tail[MAX_INDEX_CHAIN + 1];
} index_chains[MAX_INDEX_CLAUSES + 2];

static int n_rules;
static char *p_name;
static int p_arity;
static int p_val;

static int first_rule[MAX_INDEX_TYPES + 1];
static int freq_rule[MAX_INDEX_TYPES + 1];
static int card_type[MAX_INDEX_TYPES + 1];
static int n_atoms, n_funcs, n_reals;

static char *make_itag();
static char *make_rtag();
static char *make_ttag();

char *make_ftag();

extern FUNCTREC functors[];
extern int CODEGEN_DEBUG;

extern char *maketag();
extern float int_to_float();
extern char *char_malloc();
 
/*---------------------------------------------------------------------------*/

gen_index_code(r, str, a, nclauses)
RULE *r;
char *str;
int a;
int nclauses;
{
int i, j, narg;
char *s;
	s = maketag(0, "", str, a);
	if (r->wt->val == IMPL) {
		p_val = r->wt->first->val;
		narg = r->wt->first->narg;
		storename(s, p_val, r->wt->first->narg);
	} else {
		p_val = r->wt->val;
		narg = r->wt->narg;
		storename(s, p_val, r->wt->narg);
	}
	if (p_cut(p_val)) emit_savecurcp(narg+1);
	p_name = str;
	p_arity = a;
	n_rules = nclauses;
	if (!a || nclauses > MAX_INDEX_CLAUSES) {
		gen_all_chain(nclauses);
		return;
	}
	init_index();
	make_index_chains(r);
	if (freq_rule[0] == n_rules) gen_general_chain();
	else choose_a_switch();
	return;
}

gen_all_chain(n_rules)
int n_rules;
{
	int i;

	emit_try(make_rtag(1), p_val, p_arity);
	for (i = 2; i < n_rules; i++) emit_retry(make_rtag(i), p_val);
	emit_trust(make_rtag(i), p_val);
}

make_index_chains(r)
RULE *r;
{
int i;
PTERM *arg1;
	for (i = 1; r ; r = r->next, i++) {
		if (r->wt->val == IMPL) arg1 = r->wt->first->first;
		else arg1 = r->wt->first;
		if (is_p_var(arg1) || (is_arith_term(arg1) && !is_p_real(arg1))) {
			if (!first_rule[0]) first_rule[0] = i;
			freq_rule[0]++;
			add_to_all_chains(i);
		} else if (is_p_emptylist(arg1)) {
			if (!first_rule[EMPTYLIST]) first_rule[EMPTYLIST] = i;	
			freq_rule[EMPTYLIST]++;
			add_to_chain(EMPTYLIST, arg1->val, i);
		} else if (is_p_list(arg1)) {
			if (!first_rule[DOT]) first_rule[DOT] = i;	
			freq_rule[DOT]++;
			add_to_chain(DOT, arg1->val, i);
		} else if (is_p_constant(arg1)) {
			if (!first_rule[ATOM]) first_rule[ATOM] = i;	
			freq_rule[ATOM]++;
			add_to_chain(ATOM, arg1->val, i);
		} else if (is_p_func(arg1)) {
			if (!first_rule[FUNC]) first_rule[FUNC] = i;	
			freq_rule[FUNC]++;
			add_to_chain(FUNC, arg1->val, i);
		} else if (is_p_real(arg1)) {
			if (!first_rule[REAL]) first_rule[REAL] = i;	
			freq_rule[REAL]++;
			add_to_chain(REAL, float_to_int((float) arg1->rval), i);
		} else {
			show_pterm(arg1);
			fatal("52070");
		}
	}
}

choose_a_switch()
{
int i, count, type;
	count = 0;
	for (i = 1; i <= MAX_INDEX_TYPES; i++) 
		if (freq_rule[i]) {
			count++;
			type = i;
		}
	if (count == 1) gen_switch1type(type);
	else gen_switchtype();
}

gen_switch1type(type) /*** 1 type ***/
int type;
{
int i, r0, l0, val;
char *s;
	val = p_val;
	if (type == EMPTYLIST || type == DOT) {
		r0 = first_rule[0];
		l0 = length_chain(0);
		if (l0 == 0) {
			s = FAIL_PROC; 
			val = FAILVAL;
		}
		else if (l0 == 1) s = make_rtag(r0);
		else s = make_itag(0, 0, TYPELABEL);
		if (type == DOT) emit_switchdot(s, val);
		else emit_switchnil(s, val);
		gen_general_chain();
		if (l0 >= 2) {
			storename(s, val, p_arity);
			gen_default_chain();
		}
		return;
	}
#ifdef NEWINDEX
	if (type != REAL && card_type[type] == 1 && 
			(freq_rule[type] == length_chain(first_rule[type]) ||
			rule_in_chain(0,1) == rule_in_chain(first_rule[type],1))) {
		gen_single_chain(NOFASTLABEL, first_rule[type]);
		return;
	}
#endif
	switch (type) {
		case ATOM: emit_switchcon(make_ttag(ATOM), p_val); break;
		case FUNC: emit_switchfunc(make_ttag(FUNC), p_val); break;
		case REAL: emit_switchreal(make_ttag(REAL), p_val);
	}
	gen_jump_table(type);
	gen_general_chain();
	for (i = 1; i <= n_rules; i++) 
		if (type_chain(i) == type && length_chain(i) >= 2) {
			val = index_chains[i].val;
			storename(make_itag(type, val, CHAINLABEL), p_val, p_arity);
			gen_index_chain(type, val);
		}
	if (length_chain(0) >= 2) {
		storename(make_itag(0, 0, TYPELABEL), p_val, p_arity);
		gen_default_chain();
	}
}

gen_switchtype() /*** at least two types ***/
{
char *s[MAX_INDEX_TYPES + 1];
int val[MAX_INDEX_TYPES + 1];
int has_chain[MAX_INDEX_TYPES + 1];
int i;
	for (i = 1; i <= MAX_INDEX_TYPES; i++) {
		val[i] = p_val;
		has_chain[i] = FALSE;
	}
	switch (length_chain(0)) {
	case 0:
		for (i = 1; i <= MAX_INDEX_TYPES; i++) {
			if (freq_rule[i] == 0) {
				s[i] = FAIL_PROC;
				val[i] = FAILVAL;
			} else if (freq_rule[i] == 1) {
				if (i == EMPTYLIST || i == DOT)
					s[i] = make_ftag(p_name, p_arity, first_rule[i]);
				else s[i] = make_rtag(first_rule[i]);
			} else {
				s[i] = make_itag(i, 0, TYPELABEL);
				has_chain[i] = TRUE;
			}
		}
		break;
	case 1:
		for (i = 1; i <= MAX_INDEX_TYPES; i++) {
			if (freq_rule[i] == 0) s[i] = make_rtag(first_rule[0]);
 			else {
				s[i] = make_itag(i, 0, TYPELABEL);
				has_chain[i] = TRUE;
			}
		}
		break;
	default:
		for (i = 1; i <= MAX_INDEX_TYPES; i++) {
			if (freq_rule[i] == 0) s[i] = make_itag(0, 0, TYPELABEL);
			else {
				s[i] = make_itag(i, 0, TYPELABEL); 
				has_chain[i] = TRUE;
			}
		}
	}
	emit_switchtype(s[EMPTYLIST],   s[DOT],   s[ATOM],   s[FUNC],   s[REAL],
	                val[EMPTYLIST], val[DOT], val[ATOM], val[FUNC], val[REAL]);
	gen_general_chain();
	for (i = 1; i <= MAX_INDEX_TYPES; i++)
		if (has_chain[i]) { /*** (s[i] && *(s[i]) == 'L') { ***/
			storename(s[i], p_val, p_arity);
			gen_secondary_switch1type(i);
		}
	if (length_chain(0) >= 2) {
		storename(make_itag(0, 0, TYPELABEL), p_val, p_arity);
		gen_default_chain();
	}
}

gen_secondary_switch1type(type) 
int type;
{
int i, n, val;
char *s1, *s2;
	if (type == EMPTYLIST || type == DOT) {
		gen_index_chain(type, 0);
		return;
	}
#ifdef NEWINDEX
	if (type != REAL && card_type[type] == 1) {
		gen_single_chain(NOFASTLABEL, first_rule[type]);
		return;
	}
#endif
	switch (type) {
		case ATOM: emit_switch2con(make_ttag(ATOM), p_val); break;
		case FUNC: emit_switch2func(make_ttag(FUNC), p_val); break;
		case REAL: emit_switch2real(make_ttag(REAL), p_val);
	}
	gen_jump_table(type);
	for (i = 1; i <= n_rules; i++) 
		if (type_chain(i) == type && length_chain(i) >= 2) {
			val = index_chains[i].val;
			storename(make_itag(type, val, CHAINLABEL), p_val, p_arity);
			gen_index_chain(type, val);
		}
}

gen_general_chain()
{
int i;
	emit_try(make_rtag(1), p_val, p_arity);
	for (i = 2; i < n_rules; i++) emit_retry(make_rtag(i), p_val);
	emit_trust(make_rtag(i), p_val);
}

gen_jump_table(type) /*** (# val's) + 1 doublewords ***/
int type;
{
int i, val, arity;
	for (i = 1; i <= n_rules; i++) {
		if (type_chain(i) != type) continue;
		val = index_chains[i].val;
		switch (type) {
			case ATOM: 
#ifdef BIGHEAP
			emit_word(val); break;
#else
			emit_word(TAG_CON | val); break;
#endif
			case FUNC: 
#ifdef BIGHEAP
			emit_word(val); break;
#else
			emit_word(TAG_STR | val); break;
#endif
			case REAL: emit_word(val);
		}
		if (length_chain(i) == 1) 
			emit_addr(make_ftag(p_name, p_arity, i), p_val);
		else emit_addr(make_itag(type, val, CHAINLABEL), p_val);
	}
	storename(make_ttag(type), p_val, p_arity);
	emit_word(0);
	switch (length_chain(0)) {
		case 0:  emit_addr(FAIL_PROC, FAILVAL); break;
		case 1:  emit_addr(make_rtag(first_rule[0]), p_val); break;
		default: emit_addr(make_itag(0, 0, TYPELABEL), p_val);
	}
}

gen_index_chain(type, val) 
int type, val;
{
int i, r;
	r = first_rule[type];
	if (type != EMPTYLIST && type != DOT)
		while (index_chains[r].val != val) r++;
	if (first_rule[type] == index_chains[r].tail[1]) 
		emit_try(make_ftag(p_name, p_arity, index_chains[r].tail[1]), 
			p_val, p_arity);
	else
		emit_try(make_rtag(index_chains[r].tail[1]), p_val, p_arity);
	for (i = 2; i < length_chain(r); i++) 
		emit_retry(make_rtag(index_chains[r].tail[i]), p_val);
	emit_trust(make_rtag(index_chains[r].tail[i]), p_val);
}

gen_single_chain(fast, start) 
int fast, start;
{
int i, r;
	r = start;
	if (fast == FASTLABEL && r == index_chains[r].tail[1]) 
		emit_try(make_ftag(p_name, p_arity, index_chains[r].tail[1]), 
			p_val, p_arity);
	else
		emit_try(make_rtag(index_chains[r].tail[1]), p_val, p_arity);
	for (i = 2; i < length_chain(r); i++) 
		emit_retry(make_rtag(index_chains[r].tail[i]), p_val);
	emit_trust(make_rtag(index_chains[r].tail[i]), p_val);
}

gen_default_chain()
{
int i;
	emit_try(make_rtag(index_chains[0].tail[1]), p_val, p_arity);
	for (i = 2; i < length_chain(0); i++)
		emit_retry(make_rtag(index_chains[0].tail[i]), p_val);
	emit_trust(make_rtag(index_chains[0].tail[i]), p_val);
}

/*----------------------------------------------------------- aux stuff -----*/

init_index()
{
int i;
	n_atoms = n_funcs = n_reals = 0;
	for (i = 0; i <= MAX_INDEX_TYPES; i++) 
		card_type[i] = first_rule[i] = freq_rule[i] = 0;
	for (i = 0; i <= MAX_INDEX_CLAUSES; i++) 
		type_chain(i) = val_chain(i) = length_chain(i) = 0;
}

add_to_chain(type, val, rule_number)
int type, val, rule_number;
{
int i, j;
	if (type == EMPTYLIST || type == DOT) {
		if (!(i = first_rule[type])) {
			i = rule_number;
			type_chain(i) = type;
		}
		val_chain(i) = 0; 
		j = length_chain(i);
		index_chains[i].tail[++j] = rule_number;
		length_chain(i) = j;
		return;
	}				
	for (i = 1; i <= rule_number; i++) {
		if (type_chain(i) != type || val_chain(i) != val) continue;
		j = length_chain(i);
		index_chains[i].tail[++j] = rule_number;
		length_chain(i) = j;
		return;
	}
	type_chain(rule_number) = type;
	val_chain(rule_number) = val;
	i = length_chain(rule_number);
	index_chains[rule_number].tail[++i] = rule_number;
	length_chain(rule_number) = i;
	card_type[type]++;
	if (type == ATOM) n_atoms++;
	else if (type == FUNC) n_funcs++;
	else if (type == REAL) n_reals++;
}

add_to_all_chains(rule_number)
int rule_number;
{
int i, j;
	for (i = 0; i <= n_rules; i++) {
		j = length_chain(i);
		index_chains[i].tail[++j] = rule_number;
		length_chain(i) = j;
	}
}

print_chains()
{
int i, j, r, count, last;
	count = 0;
	for (i = 1; i <= MAX_INDEX_TYPES; i++) {
		if (!(r = first_rule[i])) continue;
		printf("Type %d: ", i);
		if (type_chain(r) == REAL) 
			printf("%f: ", int_to_float(val_chain(r)));
		else 
			printf("%s: ", string_of(index_chains[r].val));
		for (j = 1; j <= length_chain(r); j++) 
			printf(" %d", index_chains[r].tail[j]);
		putchar('\n');
	}
	printf("def: ");
	i = length_chain(0);
	if (i) for (j = 1; j <= i; j++) printf(" %d", index_chains[0].tail[j]);
	else printf(" $fail");
	putchar('\n');
}

static char *make_itag(type, val, block)
int type, val, block;
{
char buf[256], *s;

	switch (type) {
	case EMPTYLIST:
		sprintf(buf, "L_%s/%d_nil", p_name, p_arity);
		break;
	case DOT:
		sprintf(buf, "L_%s/%d_list", p_name, p_arity);
		break;
	case ATOM:
	case FUNC:
		if (block)
			sprintf(buf, "L_%s/%d_%d", p_name, p_arity, type);
		else
			sprintf(buf, "L_%s/%d_%d:%d", p_name, p_arity, type, val);
		break;
	case REAL:
		if (block)
			sprintf(buf, "L_%s/%d_%d", p_name, p_arity, type);
		else
			sprintf(buf, "L_%s/%d_%d:$%d", p_name, p_arity, type, val);
		break;
	case 0:
		if (val == 0 && block)
			sprintf(buf, "L_%s/%d_def", p_name, p_arity);
		else fatal("make_itag 13871");
		break;
	default:
		fatal("make_itag 13871");
	}
	s = char_malloc(strlen(buf) + 1);
	strcpy(s, buf);
	return s;
}
 
static char *make_rtag(rule_number)
int rule_number;
{
char buf[256], *s;
	sprintf(buf, "E$%d_%s/%d", rule_number, p_name, p_arity);
	s = char_malloc(strlen(buf) + 1);
	strcpy(s, buf);
	return s;
}

char *make_ftag(name, arity, rule_number)
char *name;
int arity, rule_number;
{
char buf[256], *s;
	if (CODEGEN_DEBUG) sprintf(buf, "E$%d_%s/%d", rule_number, name, arity);
	else sprintf(buf, "F$%d_%s/%d", rule_number, name, arity);
	s = char_malloc(strlen(buf) + 1);
	strcpy(s, buf);
	return s;
}
 
static char *make_ttag(type) /*** only for last jump table entry ***/
int type;
{
char buf[256], *s;
	switch (type) {
		case EMPTYLIST: s = "nil"; break;
		case DOT: s = "list"; break;
		case ATOM: s = "con"; break;
		case FUNC: s = "func"; break;
		case REAL: s = "real"; break;
		default: fatal("94711");
	}
	sprintf(buf, "T_%s/%d_%s", p_name, p_arity, s);
	s = char_malloc(strlen(buf) + 1);
	strcpy(s, buf);
	return s;
}
 
