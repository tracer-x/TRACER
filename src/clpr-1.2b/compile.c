/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: compile.c                                            *
 ***************************************************************/

#include "standard.h"
#include "config.h"
#include "parse.h"
#include "symbols.h"
#include "lib.h"
#include "compile.h"
#include "emul.h"
#include "opcodes.h"

#define MIN_CODE_SZ (24000)

int retract_low_mark, free_code_n=0;
extern int epcode;

int CODE_SZ = DEF_CODE_SZ;
code_t *code;

char *out_name;
FILE *var_file;
char *var_name = NULL;
bool read_stdin = TRUE;
HASH_P_NODE_ptr hash_p_table[MAX_HASH_P + 1];
HASH_L_NODE_ptr hash_l_table[MAX_HASH_L + 1];
unsigned int bit1vec[34];
LABLEREC unresolved[MAXUNRESOLVED];
int punresolved;
FUNCTREC functors[MAXFUNCTORS];
int startcode[MAXNAMES], endcode[MAXNAMES];

HASH_P_NODE_ptr find_hash_p_node();
HASH_P_NODE_ptr new_hash_p_node();
RULE_ptr p_first_rule(), p_last_rule();
RULE_ptr store_rule();
PTERM *old_quote_expand(), *quote_expand();
RULE_ptr new_rule();
static int check_quote();
HASH_L_NODE_ptr p_jump_occ();

extern FILE *outfile;
extern int *curar, *stacktop, *retreg;
extern int *regs;
extern char *CLPRLIB;
extern FILE *cur_stream, *error_stream;	
extern int pcode;
extern int punresolved;
extern VREC *varlist;
extern int reg_lowmark, reg_highmark;
extern SPNODE *spred[];
extern int REDEFINE_FLAG;
extern int WARN_ABORT;
extern int STYLE_CHECK_FLAG;

extern code_t *alloc_mem();
extern FILE *my_open();
extern int the_lineno();
extern char *the_filename();

static int check_clause();
static int check_pred();

/*---------------------------------------------------------------------------*/

init_compiler()
{
	if (CODE_SZ < MIN_CODE_SZ) fatal("code size too small");
	code = alloc_mem(CODE_SZ);
	retract_low_mark = CODE_SZ;
#ifdef  INIT_DEBUG
	if (!code) fatal("not enough memory to initialize clpr (calloc)");
	printf("Code start: %p end: %p\n", (unsigned)code, (unsigned)code + CODE_SZ*sizeof(int));
#endif 
	punresolved = 0;
	bit1vec[1] = 0x1;
	bit1vec[2] = 0x2;
	bit1vec[3] = 0x4;
	bit1vec[4] = 0x8;
	bit1vec[5] = 0x10;
	bit1vec[6] = 0x20;
	bit1vec[7] = 0x40;
	bit1vec[8] = 0x80;
	bit1vec[9] = 0x100;
	bit1vec[10] = 0x200;
	bit1vec[11] = 0x400;
	bit1vec[12] = 0x800;
	bit1vec[13] = 0x1000;
	bit1vec[14] = 0x2000;
	bit1vec[15] = 0x4000;
	bit1vec[16] = 0x8000;
	bit1vec[17] = 0x10000;
	bit1vec[18] = 0x20000;
	bit1vec[19] = 0x40000;
	bit1vec[20] = 0x80000;
	bit1vec[21] = 0x100000;
	bit1vec[22] = 0x200000;
	bit1vec[23] = 0x400000;
	bit1vec[24] = 0x800000;
	bit1vec[25] = 0x1000000;
	bit1vec[26] = 0x2000000;
	bit1vec[27] = 0x4000000;
	bit1vec[28] = 0x8000000;
	bit1vec[29] = 0x10000000;
	bit1vec[30] = 0x20000000;
	bit1vec[31] = 0x40000000;
	bit1vec[32] = 0x80000000;
	bit1vec[33] = 0x1;
	reg_lowmark = 1;
	reg_highmark = MAX_REGS;
}


init_lable()
{
	punresolved = 0;
}

static char s1[MAX_MESSAGE];
bootstrap() /*** load init file (clam first) ***/
{
	/*******
	strcpy(s1, CLPRLIB);
	strcat(s1, "/");
	strcat(s1, "init.clam");
	if (internal_consult(s1)) return;
	********/
	sprintf(s1, "%s/%s", CLPRLIB, INITFNAME);
	if (!readfile(s1, TRUE)) {
		fprintf(error_stream, 
			"Error: unable to reconsult file [%s]:\n", s1);
		fprintf(error_stream, 
			"Try setting the environment variable CLPRLIB to the\n");
		fprintf(error_stream, 
			"name of the directory containing the file: init.clpr\n");
		fprintf(error_stream, 
			"Bye ...\n");
		exit(1);
	}
	compile(TRUE);
	resolve(TRUE);
#ifdef BOOTSTRAP_ALIGN
	epcode = ((int) (((double) epcode)/2000 + 1.5))*2000;
#endif
}

readfile(s, clobber) /*** file s, clobber iff reconsulting ***/
char *s;
int clobber;
{
FILE *o_cur_stream, *input_fd;
PTERM *tt;
int i = 2;
	o_cur_stream = cur_stream;
	if (strcmp(s, "user")) {
		if (!(input_fd = my_open(s, "r"))) return FALSE;
		new_input(input_fd, s);
	} else
		new_input(stdin, "<stdin>");
	readfile_low(clobber);
	if (cur_stream != stdin) {
		fclose(cur_stream);
		close_input(cur_stream);
	} else
		rewind(stdin);
	new_input(o_cur_stream, "");
	return TRUE;
}

/***
	QUERY: 				?-		(run at compile AND run time)
	DIRECTIVE:			:-		(compile time only)
	COMMAND:			::-		(run time only)
***/

readfile_low(clobber) /*** low-level read ***/
int clobber;
{
PTERM *tt, *ttex;
int i, *tmp1;
VREC *v;
int found_a_cut, found_a_quote;
int prev_rule_val = 0, cur_rule_val;
int old_epcode;
/*
int save_regs[MAX_REGS+1];
*/

	while (tt = (PTERM *) readterm()) { 
/***
		if (START_USER_SESSION) {
		outfile = stdout;
		printf("COMP (%d) ",tt->val); show_pterm(tt);
		fprintf(outfile, ".\n");
		}
***/	
		found_a_cut = FALSE;
		if (!check_clause(tt, &found_a_cut, &found_a_quote))
			break;
		ttex = (found_a_quote ? quote_expand(tt, FALSE) : tt);
		if (found_a_cut) 
			assign_p_cut((is_implies(tt) ? tt->first->val : tt->val), TRUE);

		/*** no need to distinguish three kinds of goals here ***/
		if (is_directive(tt) || is_command(tt) || is_query(tt)) {
#if FREE_CODE_SPACE
			reclaim_code_space();
#endif
			if (clobber) compile(TRUE);
			else compile(FALSE);
			resolve(TRUE);
			save_context();
/*
			for (i=0; i <= MAX_REGS; i++) save_regs[i] = regs[i];
*/
			lookatvars(ttex->first); 
			for (i = 1, v = varlist; v != NULL; i++, v = v->next) {}
			tmp1 = curar;
			curar = stacktop + 2;
			stacktop = curar + i - 1;
			*(curar + FATHER) = (int) tmp1;
			*(curar + RETPT) = (int) retreg;
			old_epcode = epcode;
			if (!rungoal(compile_fgoal(ttex->first), FALSE)) {
#ifdef FREE_CODE_SPACE
				epcode = old_epcode;
#endif
				warning("%s:%d, goal failed within consult", the_filename(), the_lineno());
				if (WARN_ABORT) {		
					fprintf(error_stream, "Aborting\n");
					interrupt();
				}
			}
#ifdef FREE_CODE_SPACE
			epcode = old_epcode;
			reclaim_code_space();
#endif

			restore_context();
/*
			for (i=0; i <= MAX_REGS; i++) regs[i] = save_regs[i];
*/
			prev_rule_val = 0;
		} else {
			if (STYLE_CHECK_FLAG & CONTIG_STYLE) {
				cur_rule_val = head_of_rule(ttex)->val;
				if (prev_rule_val != cur_rule_val) {
					if (!clobber) {
						if (p_first_rule(cur_rule_val) && !p_compiled(cur_rule_val)) {	
							warn_header();
							fprintf(error_stream,
								"Style check, %s/%d is not contiguous\n",
								string_of(cur_rule_val), arity_of(cur_rule_val));
						}
					} else if (!p_compiled(cur_rule_val) && p_first_rule(cur_rule_val)) {
						warn_header();
						fprintf(error_stream,
							"Style check, %s/%d is not contiguous\n",
							string_of(cur_rule_val), arity_of(cur_rule_val));
					}
					if (store_rule(tt, ttex, clobber)) 
						prev_rule_val = cur_rule_val;
				} else store_rule(tt, ttex, clobber);
			} else store_rule(tt, ttex, clobber);
			assign_p_added(tt->val, TRUE);
		}
	}
}

RULE_ptr store_rule(to, t, clobber) /*** free to eventually ***/
PTERM *to, *t;
int clobber;
{
int val;
RULE *r, *tr;
HASH_L_NODE_ptr jump_occ;
	val = (is_implies(t) ? t->first->val : t->val);
	if (p_protected(val)) {
		fprintf(error_stream,
			"Error: %s/%d is protected ... ignored\n",
				string_of(val), arity_of(val));
		free_pterm(t);
		return NULL;
	}
	if (p_compiled(val)) {
		if (clobber) {
			delete_all_rules(val);
			assign_p_compiled(val, FALSE);
			assign_p_first_rule(val, NULL);
			if (REDEFINE_FLAG) 
				warning("%s/%d has been redefined", string_of(val), arity_of(val));
			if (jump_occ = p_jump_occ(val)) relink(jump_occ);
		} else if (!p_dynamic(val)) {
			fprintf(error_stream,
				"Warning: %s/%d already compiled ... ignored\n",
					string_of(val), arity_of(val));
			free_pterm(t);
			return NULL;
		}
	}
	r = new_rule();
	r->next = NULL;
	r->t = to;
	r->wt = t;
	if (!p_first_rule(val)) {	/* n_rules not used for dynamic */
		assign_p_first_rule(val, r);
		assign_p_last_rule(val, r);
		assign_p_n_rules(val, 1);
		r->id = 1;
	} else {
		tr = p_last_rule(val);
		tr->next = r;
		if (tr->id == -1) r->id = 1;
		else r->id = tr->id + 1;
		assign_p_n_rules(val, p_n_rules(val) + 1);
		assign_p_last_rule(val, r);
	}
	return r;
}

#define RULE_BLOCK (80)

static RULE_ptr free_rule_list = (RULE_ptr) NULL;
static RULE_ptr tmp_free_rule_list = (RULE_ptr) NULL;
static char *start_rule = (char *) NULL;
static int unused_rule = 0;

RULE_ptr new_rule()
{
RULE_ptr r;
	if (free_rule_list) {
		r = free_rule_list;
		free_rule_list = r->next;
	} else if (unused_rule > 0) {
		unused_rule--;
		r = (RULE_ptr) start_rule;
		start_rule += sizeof(RULE);
	} else {
		unused_rule = RULE_BLOCK;
		start_rule = (char *) emalloc(RULE_BLOCK * sizeof(RULE));
		unused_rule--;
		r = (RULE_ptr) start_rule;
		start_rule += sizeof(RULE);
	}
	r->next = NULL;
	r->endcode = -1; /* uncompiled state */
	return r;
}

free_rule(r)
RULE_ptr r;
{
	free_pterm(r->t); /*** r->wt? ***/
	r->id = 0;	/** 0 is special for deleted */
	r->next = tmp_free_rule_list;
	tmp_free_rule_list = r;
#ifdef FREE_CODE_SPACE
	free_code_space(r->startcode,r->endcode);
	r->startcode = r->endcode = 0;
#endif
}

free_rule_detable(r)
RULE_ptr r;
{
	r->id = 0;	/** 0 is special for deleted */
	r->next = tmp_free_rule_list;
	tmp_free_rule_list = r;
#ifdef FREE_CODE_SPACE
	free_code_space(r->startcode,r->endcode);
	r->startcode = r->endcode = 0;
#endif
}

free_code_space(start, end)
int start, end;
{
#ifdef FREE_CODE_SPACE
	if (!start || end < start) return;
	if (start < retract_low_mark) retract_low_mark = start;
	free_code_n += end - start + 1;
#endif
}
	
reclaim_code_space()
{
    if (epcode - retract_low_mark == free_code_n) {
        epcode = retract_low_mark;
        retract_low_mark = CODE_SZ;
/* printf("freeed CS %d\n", free_code_n); */
        free_code_n  = 0;
    }
}

free_hdrcode(val)
int val;
{
    free_code_space(p_start_hdrcode(val), p_end_hdrcode(val));
    assign_p_start_hdrcode(val, 0);
    assign_p_end_hdrcode(val, 0);
}

delete_all_rules(val)
int val;
{
RULE_ptr r, r99;
	for (r = p_first_rule(val); r; r = r99) {
		r99 = r->next;
		free_rule(r);
	}
#ifdef FREE_CODE_SPACE
	free_hdrcode(val);
#endif
}

top_free_things()
{
	return; /* do nothing now */
/*** Not currently used */
/*
	really_free_rules();
#ifdef FREE_CODE_SPACE
	reclaim_code_space();
#endif
*/
}

really_free_rules()
{
	RULE_ptr prev = (RULE_ptr) NULL, r;

	for (r = tmp_free_rule_list; r; prev = r,r = r->next);
	if (prev) {
		prev->next = free_rule_list;
		free_rule_list = tmp_free_rule_list;
		tmp_free_rule_list = (RULE_ptr) NULL;
	}
}

static int check_clause(pt, found_cut, found_quote)
PTERM *pt;
int *found_cut;
int *found_quote;
{
PTERM *body;
int dummy;
	*found_quote = FALSE;
	if (is_p_funcval(pt, IMPL)) {
		if (!check_pred(pt->first, &dummy, found_quote))
			return FALSE;
		for (body = pt->first->next; is_p_funcval(body, COMMA); 
				body = body->first->next)
			if (!check_pred(body->first, found_cut, found_quote))
				return FALSE;
		if (!check_pred(body, found_cut, found_quote)) return FALSE;
	} else if (!check_pred(pt, found_cut, found_quote)) return FALSE;
	return TRUE;
}

static int check_pred(pt, found_cut, found_quote)
PTERM *pt;
int *found_cut;
int *found_quote;
{
	if (is_p_real(pt) || is_p_var(pt) || is_p_string(pt)) {
		fprintf(outfile, "Syntax error in ");
		display_pterm(outfile, pt);
		fprintf(outfile, ".\n");
		return FALSE;
	} else if (is_cut(pt) && !(*found_cut)) *found_cut = TRUE;
	else if (!*found_quote) *found_quote = check_quote(pt);
	return TRUE;
}

static int check_quote(pt)
PTERM *pt;
{
int n;
PTERM *arg;
	if (is_p_func(pt)) {
		if (is_quote(pt)) {
			return TRUE;
		}
		n = pt->narg;
		for (arg = pt->first; n > 0; n--, arg = arg->next)
			if (check_quote(arg)) return TRUE;
	}
	return FALSE;
}
	
relink(addr_link)
HASH_L_NODE_ptr addr_link;
{
int op, pc;
	/*
	if (REDEFINE_FLAG) warning("%s/%d has been redefined", string_of(addr_link->val), arity_of(addr_link->val));
	*/
	for (; addr_link; addr_link = addr_link->next) {
		pc = addr_link->loc;
		if (pc < MAX_GOAL_CODE) continue;
		if ((op = code[pc-1]) == CALLP)	code[pc-1] = CALLI;
		else if (op == JUMP) code[pc-1] = JUMPI;
		else if (op != JUMPI && op != CALLI) fatal("71896");
		code[pc] = addr_link->val;
	}
}

/*--------------------------------------- procedure info --------------------*/

extern int misc_malloc;

HASH_P_NODE_ptr malloc_null_HASH_P_NODE()
{
HASH_P_NODE_ptr p;
	p = (HASH_P_NODE_ptr) calloc(1, sizeof(HASH_P_NODE));
	misc_malloc += sizeof(HASH_P_NODE);
	p->counter = 0.0;
	return p;
}

init_hash_p_table()
{
int i;
	for (i = 0; i <= MAX_HASH_P; i++) hash_p_table[i] = NULL;
}
		
hash_p(name)
int name;
{
	return ((name % MAX_HASH_P) + 1); /*** 1 <= hash_value <= MAX_HASH_P ***/ 
}

static HASH_P_NODE_ptr last_p_node = NULL;
static int last_name = -1;

HASH_P_NODE_ptr find_hash_p_node(name)
int name;
{
register HASH_P_NODE_ptr hp;
int i;
	if (name == last_name) return last_p_node;
	i = hash_p(name);
	hp = hash_p_table[i];
	while (hp) {
		if (hp->name == name) {
			last_name = name;
			last_p_node = hp;
			return hp;
		}
		hp = hp->next;
	}
	return hp;		
}

HASH_P_NODE_ptr new_hash_p_node(name) /*** may or may not malloc ***/
int name;
{
HASH_P_NODE_ptr hp0, hp;
int i;
	if (name == last_name) return last_p_node;
	i = hash_p(name);
	hp = hp0 = hash_p_table[i];
	while (hp) {
		if (hp->name == name) {
			last_name = name;
			last_p_node = hp;
			return hp;
		}
		hp = hp->next;
	}
	hp = (HASH_P_NODE_ptr) malloc_null_HASH_P_NODE();
	hp->next = hp0;
	hp->name = name;
	hash_p_table[i] = hp; 
	return hp;		
}

/*---------------------------------------------------------------------------*/
	
RULE_ptr p_first_rule(name)	
int name;
{
HASH_P_NODE_ptr hp;
int i;
	hp = find_hash_p_node(name);
	if (hp) return hp->first_rule;
	else return (RULE_ptr) NULL;
}	

RULE_ptr p_last_rule(name)	
int name;
{
HASH_P_NODE_ptr hp;
int i;
	hp = find_hash_p_node(name);
	if (hp) return hp->last_rule;
	else return (RULE_ptr) NULL;
}	

RULE_ptr p_last_compiled_rule(name)	
int name;
{
HASH_P_NODE_ptr hp;
int i;
	hp = find_hash_p_node(name);
	if (hp) return hp->last_compiled_rule;
	else return (RULE_ptr) NULL;
}	

p_n_rules(name)	
int name;
{
HASH_P_NODE_ptr hp;
int i;
	hp = find_hash_p_node(name);
	if (hp) return hp->n_rules;
	else return 0;
}	

p_start_hdrcode(name)	
int name;
{
HASH_P_NODE_ptr hp;
int i;
	hp = find_hash_p_node(name);
	if (hp) return hp->start_hdrcode;
	else return 0;
}	

p_end_hdrcode(name)	
int name;
{
HASH_P_NODE_ptr hp;
int i;
	hp = find_hash_p_node(name);
	if (hp) return hp->end_hdrcode;
	else return 0;
}	

p_compiled(name)	
int name;
{
HASH_P_NODE_ptr hp;
int i;
	hp = find_hash_p_node(name);
	if (hp) return hp->flags & H_COMPILED;
	else return FALSE;
}	

p_dynamic(name)	
int name;
{
HASH_P_NODE_ptr hp;
int i;
	hp = find_hash_p_node(name);
	if (hp) return hp->flags & H_DYNAMIC;
	else return FALSE;
}	

p_protected(name)	
int name;
{
HASH_P_NODE_ptr hp;
int i;
	hp = find_hash_p_node(name);
	if (hp) return hp->flags & H_PROTECTED;
	else return FALSE;
}	

p_spy(name)	
int name;
{
HASH_P_NODE_ptr hp;
int i;
	hp = find_hash_p_node(name);
	if (hp) return hp->flags & H_SPY;
	else return FALSE;
}	

p_cut(name)	
int name;
{
HASH_P_NODE_ptr hp;
int i;
	hp = find_hash_p_node(name);
	if (hp) return hp->flags & H_CUT;
	else return FALSE;
}	

p_added(name)	
int name;
{
HASH_P_NODE_ptr hp;
int i;
	hp = find_hash_p_node(name);
	if (hp) return hp->flags & H_ADDED;
	else return FALSE;
}	

HASH_L_NODE_ptr p_jump_occ(name)	
int name;
{
HASH_P_NODE_ptr hp;
int i;
	hp = find_hash_p_node(name);
	if (hp) return hp->jump_occ;
	else return (HASH_L_NODE_ptr) NULL;
}	

/*---------------------------------------------------------------------------*/

assign_p_first_rule(name, rule)	
int name;
RULE_ptr rule;
{
HASH_P_NODE_ptr hp;
	hp = new_hash_p_node(name);
	hp->first_rule = rule;
}	

assign_p_last_rule(name, rule)	
int name;
RULE_ptr rule;
{
HASH_P_NODE_ptr hp;
	hp = new_hash_p_node(name);
	hp->last_rule = rule;
}	

assign_p_last_compiled_rule(name, rule)	
int name;
RULE_ptr rule;
{
HASH_P_NODE_ptr hp;
	hp = new_hash_p_node(name);
	hp->last_compiled_rule = rule;
}	

assign_p_n_rules(name, i)	
int name, i;
{
HASH_P_NODE_ptr hp;
	hp = new_hash_p_node(name);
	hp->n_rules = i;
}	

assign_p_start_hdrcode(name, i)	
int name, i;
{
HASH_P_NODE_ptr hp;
	hp = new_hash_p_node(name);
	hp->start_hdrcode = i;
}	

assign_p_end_hdrcode(name, i)	
int name, i;
{
HASH_P_NODE_ptr hp;
	hp = new_hash_p_node(name);
	hp->end_hdrcode = i;
}	

assign_p_compiled(name, flag)	
int name, flag;
{
HASH_P_NODE_ptr hp;
	hp = new_hash_p_node(name);
	if (flag) hp->flags |= H_COMPILED;
	else hp->flags &= ~H_COMPILED;
}	

assign_p_dynamic(name, flag)	
int name, flag;
{
HASH_P_NODE_ptr hp;
	hp = new_hash_p_node(name);
	if (flag) hp->flags |= H_DYNAMIC;
	else hp->flags &= ~H_DYNAMIC;
}	

assign_p_protected(name, flag)	
int name, flag;
{
HASH_P_NODE_ptr hp;
	hp = new_hash_p_node(name);
	if (flag) hp->flags |= H_PROTECTED;
	else hp->flags &= ~H_PROTECTED;
}	

assign_p_spy(name, flag)	
int name, flag;
{
HASH_P_NODE_ptr hp;
	hp = new_hash_p_node(name);
	if (flag) hp->flags |= H_SPY;
	else hp->flags &= ~H_SPY;
}	

assign_p_cut(name, flag)	
int name, flag;
{
HASH_P_NODE_ptr hp;
	hp = new_hash_p_node(name);
	if (flag) hp->flags |= H_CUT;
	else hp->flags &= ~H_CUT;
}

assign_p_added(name, flag)	
int name, flag;
{
HASH_P_NODE_ptr hp;
	hp = new_hash_p_node(name);
	if (flag) hp->flags |= H_ADDED;
	else hp->flags &= ~H_ADDED;
}

assign_p_jump_occ(name, occ)	
int name;
HASH_L_NODE_ptr occ;
{
HASH_P_NODE_ptr hp;
	hp = new_hash_p_node(name);
	hp->jump_occ = occ;
}
	
/*------------------------------------------- label info --------------------*/

init_hash_l_table()
{
int i;
	for (i = 0; i <= MAX_HASH_L; i++) hash_l_table[i] = NULL;
}
		
hash_l(val)
int val;
{
	return ((val % MAX_HASH_L) + 1); /*** 1 <= hash_value <= MAX_HASH_L ***/ 
}

store_lable(val, s)
int val;
char *s;
{
register HASH_L_NODE_ptr hl;
int i, fast;
	i = hash_l(val);
	hl = hash_l_table[i];
	fast = sum_str(s);
	while (hl) {
		if (hl->str == NULL) {
			hl->val = val;
			hl->str = s;
			hl->loc = pcode;
			hl->quick_hash = fast;
			return;
		} 
		if (fast == hl->quick_hash && hl->val != FAILVAL && !strcmp(hl->str, s)) {
			warning("duplicate label: %s", s);
			return;
		}
		hl = hl->next;
	}
	hl = (HASH_L_NODE_ptr) emalloc(sizeof(HASH_L_NODE));
	hl->next = hash_l_table[i];
	hl->val = val;
	hl->str = s;
	hl->loc = pcode;
	hl->quick_hash = fast;
	hash_l_table[i] = hl;
}

delete_lable(val)
int val;
{
HASH_L_NODE_ptr hl;
int i;
	i = hash_l(val);
	hl = hash_l_table[i];
	while (hl) {
		if (hl->val == val) hl->str = NULL;
		hl = hl->next;
	}
}

find_loc_for_lable(val, s)
int val;
char *s;
{
HASH_L_NODE_ptr hl;
int i, fast;
	i = hash_l(val);
	hl = hash_l_table[i];
	fast = sum_str(s);	
	while (hl) {
		if (hl->str && fast == hl->quick_hash && !strcmp(hl->str, s)) 
			return hl->loc;
		hl = hl->next;
	}
	return (-1);
}

char *find_lable_for_addr(addr)
int *addr;
{
HASH_L_NODE_ptr hl;
int i, loc;
	loc = intpc(addr);
	for (i = 0; i <= MAX_HASH_L; i++) {
		if (hl = hash_l_table[i]) {
			while (hl) {
				if (hl->str && hl->loc == loc) return hl->str;
				hl = hl->next;
			}
		}
	}
	return NULL;
}
		
/*---------------------------------------------------------------------------*/

storename(s, val, narg)
char *s;
int val, narg;
{
	store_lable(val, s);
}

add_unres_lable(s, val, pc, off)
char *s;
int val, pc, off;
{
	if(punresolved >= MAXUNRESOLVED)
		fatal("MAXUNRESOLVED reached! (check added by vijay)");
    code[pc] = punresolved;
    unresolved[punresolved].lable = s;
    unresolved[punresolved].loc = pc;
    unresolved[punresolved].val = val;
    unresolved[punresolved++].off = off;
}

copy_unres_lable(from_pc, pc)
int from_pc, pc;
{
    int i;
	if(punresolved >= MAXUNRESOLVED)
		fatal("MAXUNRESOLVED reached! (check added by vijay)");
    if (((i = code[from_pc]) < 0) || (i >= punresolved))
        fatal("791237");
    code[pc] = punresolved;
    unresolved[punresolved].lable = unresolved[i].lable;
    unresolved[punresolved].val = unresolved[i].val;
    unresolved[punresolved].loc = pc;
    unresolved[punresolved++].off = 0;
}

resolve(warn)
int warn;
{
int i, j, k;
	if(punresolved >= MAXUNRESOLVED)
		fatal("MAXUNRESOLVED reached! (check added by vijay)");
	for (i = 0; i < punresolved; i++) {
		k = unresolved[i].loc;
		j = find_loc_for_lable(unresolved[i].val, unresolved[i].lable);
		if (j != -1) code[k] = (int) (code + j + unresolved[i].off);
		else {
			if (warn) warning("unresolved name %s - treating as fail/0",
					 unresolved[i].lable);
			code[k] = (int) (code + FAIL_ADDR);
		}
	}
}

PTERM *duplicate_pterm(t)
PTERM *t;
{
PTERM *nt;
int i;
char *c1, *c2;
	nt = (PTERM *) new_pterm();
#ifdef BSD
	bcopy(t, nt, sizeof(PTERM));
#else
	memcpy(nt, t, sizeof(PTERM));
#endif
	return nt;
}

PTERM *unpack_string(t)
PTERM *t;
{
	return t; /* just a stub for now */
}
			
PTERM *old_quote_expand(t, quoted)
PTERM *t;
bool quoted;
{
PTERM *nt;
PTERM *next;
if (!t) return NULL;
if (is_p_string(t))
         {
         nt = unpack_string(t);
         nt->next = quote_expand(t->next,quoted);
         }
else if (quoted && is_arith_term(t))
         {
         nt = duplicate_pterm(t);
         nt->val = (t->val - ARITH_FUNC_0 + ARITH_FUNC_4);
         /* do we also want to fix the string? */
         nt->next = quote_expand(t->next,quoted);
         nt->first = quote_expand(t->first,quoted);
         }
else if (is_quote(t))
         {
         /* invariant: t->first->next == NULL */
         next = t->next;
         nt = quote_expand(t->first,TRUE);
         nt->next = quote_expand(next,quoted);
         }
else
         {
         nt = duplicate_pterm(t);
         nt->first = quote_expand(t->first,quoted);
         nt->next = quote_expand(t->next,quoted);
         }
return nt;
}

PTERM *quote_expand(t, quoted)
PTERM *t;
bool quoted;
{
int v, n, *start, *s;
PTERM *arg, *newt, *newarg, *prev;
	switch (t->ty) {
	case REAL:
	case STR:
	case VAR:
		return duplicate_pterm(t);
	case FUNC:
		if (is_quote(t) && !quoted) return quote_expand(t->first, TRUE);
		if (t->narg == 0) return duplicate_pterm(t);
		newt = duplicate_pterm(t);
		newt->first = quote_expand(t->first, quoted);
		arg = t->first;
		newarg = newt->first;
		for (n = 2;	n <= t->narg; n++) {
			newarg->next = quote_expand(arg->next, quoted);
			arg = arg->next;
			newarg = newarg->next;
		}
		if (is_arith_term(t) && quoted)	newt->val = get_quoted_func(t->val);
		return newt;
	default:
		fatal("47812");
		return (PTERM *) NULL; /* quiet gcc */
	}
}

