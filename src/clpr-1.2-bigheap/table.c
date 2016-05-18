/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: table.c                                              *
 ***************************************************************/

#include <setjmp.h>

#include "standard.h"
#include "config.h"
#include "parse.h"
#include "symbols.h"
#include "lib.h"
#include "compile.h"
#include "emul.h"

#define MAXHASH_FUNC (1999)
#define MAXHASH_VAR (1999)
#define DYNAMIC_HASHTABLE (1)
#define INIT_HASH_SPACE	(2000)

struct HASHNODE *hash_func_tab[MAXHASH_FUNC];
struct HASHNODE *hash_var_tab[MAXHASH_VAR];
struct HASHNODE *tok_hnode; /* current hash node returned by lookup_name() */
static struct HASHNODE hash_space[INIT_HASH_SPACE];
struct HASHNODE *hash_base = hash_space;

static int hash_size = 0;
int name_hash = 0;
int hash_max = 0, hash_cnt = 0, hash_cnt1 = 0, hash_cnt2 = 0, hash_cnt3 = 0;
int hash_cnt4 = 0, hash_cnt5 = 0, hash_cnt6 = 0, hash_cnt7 = 0; 	
int cur_func_id = INIT_FUNC_ID; /* lower bound for user-def vals */
int num_pterms = 0;

PTERM *new_pterm();

extern char tok_c;
extern int tok_type;
extern PTERM* tok_ptr;
extern char ch;
extern char *cur_filename;
extern FILE *cur_stream;
extern FILE *outfile;
extern int debug_flg;
extern int comma_flg, bar_flg;
extern jmp_buf err_readterm;
extern PTERM *null_list;
extern char *cons_str;
extern FUNCTREC functors[];

extern char *emalloc();
extern char *str_space();

/*---------------------------------------------------------------------------*/

hash(s, siz)
char *s;
int siz;
{
register unsigned int h;
	for (h = 0; *s; s++) h = ((h * h) << 2) + *s;
	if ((int) h >= 0) return (int) (h % siz);
	else return (-(int) h) % siz;
}

struct HASHNODE *new_hashnode()
{
struct HASHNODE *p;
HASH_AGAIN:
	if (hash_size < INIT_HASH_SPACE) p = &hash_base[hash_size++];
	else {
#if DYNAMIC_HASHTABLE
		hash_base = 
			(struct HASHNODE *) 
				emalloc(sizeof(struct HASHNODE)*INIT_HASH_SPACE);
		hash_size = 0;
		goto HASH_AGAIN;
#else
		fatal("no more HASHNODE space");
#endif
	}
	p->next = p->link = NULL;
	p->quick_hash = 0;
	p->t = NULL;
	p->op = NULL;
	p->extra = (char) FALSE;
	return(p);
}

/*	Maximum number of characters of string space	*/
#define MAX_STRTABLE	(4000) 
#define DYNAMIC_STRTABLE 1
/*	High address of string space	*/
static char str_table[MAX_STRTABLE];
static char *max_str_table= &str_table[MAX_STRTABLE-2];
/*	Current empty location in string table	*/
static char *str_ptr=str_table;

/*
 *	Puts s into the string table and returns the string table address
 */
char *add_string(s)
char *s;
{
	char *start;
	register char *s1;

PUT_STRING:
	s1 = s;
	start = str_ptr;
	while (*s1 && str_ptr < max_str_table) 
		*str_ptr++ = *s1++;
#if !DYNAMIC_STRTABLE
	if (*s1 && str_ptr >= max_str_table) 
		fatal("internal error: ran out of string space");
#else
	if (*s1 && str_ptr >= max_str_table) {
		str_ptr = emalloc(MAX_STRTABLE);
		max_str_table = str_ptr + MAX_STRTABLE - 2;
		goto PUT_STRING;
	}
#endif
		
	*str_ptr++ ='\0';
	return(start);
}

struct HASHNODE *insert_name(hash_tab, sym, quick_cmp, size)
struct HASHNODE *hash_tab[];
char *sym;
int quick_cmp, size;
{
int h;
struct HASHNODE *cur, *p1;
	if ((cur = hash_tab[h=hash(sym, size)]) != NULL)
		for (; cur != NULL; cur = cur->next) {
			if (cur->quick_hash == quick_cmp && !strcmp(cur->s, sym)) {
				return cur;
			}
		}
	cur = new_hashnode(); 
	cur->quick_hash = quick_cmp;
	cur->s = add_string(sym);
	cur->val = cur_func_id++;
	if (hash_tab[h] == NULL) hash_tab[h] = cur;
	else {
	  	cur->next = hash_tab[h];
		hash_tab[h] = cur; 
	}
	return cur;
}

PTERM *lookup_name(sym, quick_cmp)
char *sym;
int quick_cmp;
{
struct HASHNODE *hnode;
PTERM *t;
	hnode = insert_name(hash_func_tab, sym, quick_cmp, MAXHASH_FUNC);
	t = new_pterm();
	t->str = hnode->s;
	t->val = hnode->val;
	t->ty = FUNC;
	t->narg = -1;
	tok_hnode = hnode;
	return t;
}

int no_var_pterm; /* number of useful variables in pterm */
static int var_cnt = 0;	/* max variables in current term */
static struct HASHNODE *used_vars[MAXVAR]; /* used hnodes in current term */
static int used_var_cnt = 0; /* unique value for variable names */
static int var_hash_id = 1;

zero_vars() /* start new terms with no variables seen yet	*/
{
int i;
	no_var_pterm = var_cnt = 0;
	for (i = 0; i < used_var_cnt; i++) used_vars[i]->special = -1;
	used_var_cnt = 0;
}

static struct HASHNODE *insert_var(hash_tab, sym, quick_cmp, size)
struct HASHNODE *hash_tab[];
char *sym;
int quick_cmp, size;
{
int h;
struct HASHNODE *cur;
	if ((cur = hash_tab[h=hash(sym, size)]) != NULL)
		for (; cur != NULL; cur = cur->next) {
			if (cur->quick_hash == quick_cmp && !strcmp(cur->s, sym)) {
				return cur;
			}
		}
	cur = new_hashnode();
	cur->quick_hash = quick_cmp;
	cur->s = add_string(sym);
	cur->val = var_hash_id++;
	cur->special = -1;
	if (hash_tab[h] == NULL) hash_tab[h] = cur;
	else {
		cur->next = hash_tab[h];
		hash_tab[h] = cur;
	}
	return cur;
}

/*
 *	Lookup the variable var and return a term to it
 *	variables which have been seen before get the same value
 */
#include <assert.h>
PTERM *lookup_var(var, quick_cmp)
char *var;
int quick_cmp;
{
int i;
PTERM *p, *t;
struct HASHNODE *hnode;
int hval, var_index;
	hnode = insert_var(hash_var_tab, var, quick_cmp, MAXHASH_VAR);
	t = new_pterm();
	t->ty = VAR;
	t->str = hnode->s;
	if (*var != '_' || var[1])    /* fast strcmp with "_" */
		if (hnode->special < 0) { /* first instance of var */
			no_var_pterm++;
			hnode->var_index = t->val = var_cnt++;
			hnode->special = 1;
			if (used_var_cnt >= MAXVAR) 
				runtime_error("More than %d unique variables in a rule/term", MAXVAR, 0);
			used_vars[used_var_cnt++] = hnode;
			t->new_var = FIRST_VAR;
		} else {
			t->val = hnode->var_index;
			t->new_var = SEEN_VAR;
		}
	else {
		t->val = var_cnt++;
		t->new_var = ANONYMOUS_VAR;
	}
	return t;
}

setconst(sym, num) /* set #<CONST> to predefined value */
char *sym;
double num;
{
int i;
PTERM *p, *t;
struct HASHNODE *hnode;
int hval, var_index;
	hnode = insert_name(hash_func_tab, sym, sum_str(sym), MAXHASH_FUNC);
	hnode->rval = num;
	hnode->extra = REAL;
}

PTERM *lookup_const(sym, quick_cmp)
char *sym;
int quick_cmp;
{
PTERM *p;
struct HASHNODE *hnode;
	hnode = insert_name(hash_func_tab, sym, quick_cmp, MAXHASH_FUNC);
	if (hnode->extra != REAL) return (PTERM *) NULL;
	p = new_pterm();
	p->ty = REAL;
	p->str = "$real";
	p->rval = hnode->rval;
	return p;
}

PTERM *new_real(val)
double val;
{
PTERM *t;
	t = new_pterm();
	t->ty = REAL;
	t->rval = val;
	t->str = "$real";
	return(t);
}

PTERM *new_str(s)
char *s;
{
PTERM *t;
	t = new_pterm();
	t->ty = STR;
	t->str = add_string(s);
	return t;
}

PTERM *new_pt_emptylist()
{
PTERM *t;
  	t = new_pterm();
 	t->str = null_list->str;
  	t->val = null_list->val;
  	t->narg = 0;
  	t->ty = FUNC;
  	return t;
}

/*
 * 	add a new functor called "name" with "narg" arguments of type "type"
 *	with value val, used to predefine functors
 *	Not allowed to redefine a name with the same arity
 */
struct HASHNODE *add_func(name, narg, val)
char *name;
int narg, val;
{
int h, size, quick_cmp, found=FALSE;
struct HASHNODE *cur;
PTERM *p, *t;
struct OPNODE *op;
	quick_cmp = sum_str(name);
	if ((cur = hash_func_tab[h=hash(name, MAXHASH_FUNC)]) != NULL)
		for (; cur != NULL; cur = cur->next) 
			if (cur->quick_hash == quick_cmp && !strcmp(cur->s, name)) {
				found = TRUE;
				break;
			}

	if (!found) {
		cur = new_hashnode();
		cur->quick_hash = quick_cmp;
		cur->s = add_string(name);
		cur->val = val;
		if (hash_func_tab[h] == NULL)
			hash_func_tab[h] = cur;
		else {
			cur->next = hash_func_tab[h];
			hash_func_tab[h] = cur;
		}
	}

	for (p = cur->t; p; p = p->next)
		if (p->narg == narg)
			if (p->val == val)
				fatal("redefining initialised functor as the same");
			else {
				printf("name %s narg %d val %d ty %d\n", 
					name, p->narg, p->val, p->ty);
				fatal("redefining initialised functor differently");
			}
	t = new_pterm();
	t->narg = narg;
	t->val = val;
	t->next = cur->t;
	cur->t = t;

	if (!(op = cur->op)) numfunc(val, narg, name, NONE);
	else if (narg == 2) {
		if (op->ops[BINARY].pri >= 0) numfunc(val, narg, name, BINARY);
		else fatal("add_func special wrong");
	} else if (narg == 1) {
		if (op->ops[PREFIX].pri >= 0) numfunc(val, narg, name, PREFIX);
		else if (op->ops[POSTFIX].pri >= 0) numfunc(val, narg, name, POSTFIX);
		else fatal("add_func special wrong");
	} 
}

/*
 *	Add a new operator "sym" of type "ty" and priority "pri"
 *	left operands have priority <= left
 *	similarly for right operands
 */
addop(sym, ty, pri, left, right, readonly)
char *sym;
int ty, pri, left, right, readonly;
{
struct OPNODE *op, *opnode;
struct HASHNODE *hnode;
PTERM *t;
int i, n = 0;
	if (ty == BINARY) n = 2;
	else if (ty == POSTFIX || ty == PREFIX) n = 1;
	else fatal("21333");
	if (pri < 0) {
		warning("priority of operator %s is negative", sym);
		return;
	}
	hnode = insert_name(hash_func_tab, sym, sum_str(sym), MAXHASH_FUNC);
	if (!(op = hnode->op)) {
		opnode = (struct OPNODE *) emalloc(sizeof(struct OPNODE));
		for (i=0; i < N_OP_KIND; i++)
			opnode->ops[i].pri = 
				opnode->ops[i].left =
					opnode->ops[PREFIX].right = -1;
		hnode->op = opnode;
		op = opnode;
	} else if (readonly && op->ops[ty].pri >= 0) {
		warning("attempt to redefine %s (ignored)", sym);
		return;
	}
	i = hashbuiltina(sym, n);
	if (pri == 0) {
		pri = left = right = -1;
		functors[i].special = NONE;
	} else numfunc(i, n, sym, ty);
	op->ops[ty].pri = pri;
	op->ops[ty].left = left;
	op->ops[ty].right = right;
}

do_op(sym, style, pri)
char *sym, *style;
int pri;
{
	if (strcmp(style, "xfx") == 0)
		addop(sym, BINARY, pri, pri - 1, pri - 1, FALSE);
	else if (strcmp(style, "xfy") == 0)
		addop(sym, BINARY, pri, pri - 1, pri, FALSE);
	else if (strcmp(style, "yfx") == 0)
		addop(sym, BINARY, pri, pri, pri - 1, FALSE);
	else if (strcmp(style, "yfy") == 0)
		addop(sym, BINARY, pri, pri, pri, FALSE);
	else if (strcmp(style, "fx") == 0)
		addop(sym, PREFIX, pri, 0, pri - 1, FALSE);
	else if (strcmp(style, "fy") == 0)
		addop(sym, PREFIX, pri, 0, pri, FALSE);
	else if (strcmp(style, "xf") == 0)
        addop(sym, POSTFIX, pri, pri - 1, 0, FALSE);
	else if (strcmp(style, "yf") == 0)
		addop(sym, POSTFIX, pri, pri, 0, FALSE);
	else return FALSE;
	return TRUE;
}

/*
 *	get information about operator "sym" of type "ty"
 *	returns TRUE if operator exists and sets pri, left, right
 */
is_op_hnode(hnode, ty, pri, left, right)
struct HASHNODE *hnode;
int ty, *pri, *left, *right;
{
struct OPNODE *op;
	if (!(op = hnode->op)) return FALSE;
#ifdef ENABLE_HAT
	if (op->ops[ty].pri >= 0) {
#else
	if (op->ops[ty].pri >= 0 && !is_val_hat(hnode->val)) {
#endif
		*pri = op->ops[ty].pri;
		*left = op->ops[ty].left;
		*right = op->ops[ty].right;
		return(TRUE);
	}
	return(FALSE);
}

struct HASHNODE *has_op(sym)
char *sym;
{
	struct HASHNODE *hnode;

	hnode = insert_name(hash_func_tab, sym, sum_str(sym), MAXHASH_FUNC);
	if (!hnode->op) return NULL;
	else return hnode;
}

get_op_priority(name, narg, left, right)
char *name;
int narg, *left, *right;
{
struct HASHNODE *hnode;
struct OPNODE *op;
int i;

	hnode = insert_name(hash_func_tab, name, sum_str(name), MAXHASH_FUNC);
	if (!(op = hnode->op) || narg < 1 || narg > 2) return 0;
	if (narg == 2) i = BINARY;
	else if (op->ops[PREFIX].pri) i = PREFIX;
	else i = POSTFIX;
	*left = op->ops[i].left;
	*right = op->ops[i].right;
	return op->ops[i].pri;
}
	
is_nfix_hnode(hnode)
struct HASHNODE *hnode;
{
  return FALSE;
}

PTERM *narg_pterm(hnode, t, narg) /* correct val and narg? */
struct HASHNODE *hnode;
PTERM *t;
int narg;
{
PTERM *p, *p1;
int val, found = FALSE;
struct OPNODE *op;
	if (t->ty != FUNC) fatal("57233");
	t->narg = narg;
	for (p1 = hnode->t; p1; p1 = p1->next)
		if (p1->narg == narg) {
			found = TRUE;
			break;
		}
	if (found) t->val = p1->val;
	else {
		p = new_pterm();
		p->narg = narg;
		p->next = hnode->t;
		hnode->t = p;
		/* old code was redundant, removed */
		t->val = p->val = cur_func_id++;
	}
	if (!(op=hnode->op)) numfunc(t->val, narg, t->str, NONE);
	else if (narg == 2) {
		if (op->ops[BINARY].pri >= 0) numfunc(t->val, narg, t->str, BINARY);
		else numfunc(t->val, narg, t->str, NONE);
	} else if (narg == 1) {
		if (op->ops[PREFIX].pri >= 0) numfunc(t->val, narg, t->str, PREFIX);
		else if (op->ops[POSTFIX].pri >= 0) 
			numfunc(t->val, narg, t->str, POSTFIX);
		else numfunc(t->val, narg, t->str, NONE);
	} else numfunc(t->val, narg, t->str, NONE); 

	return t;
}

PTERM *func_narg_pterm(t, narg)
PTERM *t;
int narg;
{
struct HASHNODE *hnode;
	hnode = insert_name(hash_func_tab, t->str, sum_str(t->str), MAXHASH_FUNC);
	return(narg_pterm(hnode, t, narg));
}

int hashbuiltina(s, n)
char *s;
int n;
{
PTERM *t;
struct HASHNODE *hnode;
	hnode = insert_name(hash_func_tab, s, sum_str(s), MAXHASH_FUNC);
	t = new_pterm();
	t->ty = FUNC;
	t->str = hnode->s; /* fixed str to be safer */
	narg_pterm(hnode, t, n);
	return t->val;
}

getmaxfunc()
{
	return (cur_func_id + 1);
}


#define PTERM_BLOCK	(80)

static PTERM *free_list = (PTERM *) NULL;
static char *start_term = (char *) NULL;
static int unused = 0;

PTERM *new_pterm()
{
PTERM *t;
	if (free_list) {
		t = free_list;
		free_list = t->next;
	} else if (unused > 0) {
		unused--;
		t = (PTERM *) start_term;
		start_term += sizeof(PTERM);
	} else {
		unused = PTERM_BLOCK;
		start_term = emalloc(PTERM_BLOCK * sizeof(PTERM));
		unused--;
		t = (PTERM *) start_term;
		start_term += sizeof(PTERM);
	}
	t->next = t->first = NULL;
	num_pterms++;
	return(t);
}

free_pterm(p)
PTERM *p;
{
PTERM *arg, *arg99;
	if (p) {
		if (is_p_functor(p) && p->narg > 0) {
			for (arg = p->first; arg; arg = arg99) {
				arg99 = arg->next;
				free_pterm(arg);
			}
		}
		p->next = free_list;
		free_list = p;
		num_pterms--;
	}
}

numfunc(val, arity, s, special)
int val;
int arity;
char *s;
int special;
{
	functors[val].arity = arity;
	functors[val].pname = s;
	functors[val].special = special;
}

PTERM *new_pt_var(val, s)
int val;
char *s;
{
	PTERM *t;

	if (val < 0) fatal("77319");
	t = new_pterm();
	t->ty = VAR;
	t->val = val;
	t->str = s;
	return t;
}

PTERM *new_p_func2(val, arg1, arg2)
int val;
PTERM *arg1, *arg2;
{
	PTERM *nt;
	nt = new_pterm();
	nt->ty = FUNC;
	nt->narg = 2;
	nt->str = string_of(val);
	nt->val = val;
	nt->first = arg1;
	arg1->next = arg2;
	return nt;
}

struct HASHNODE *get_similar_func(name)
char *name;
{
int h, size, quick_cmp, found=FALSE;
struct HASHNODE *cur;
PTERM *p, *t;
struct OPNODE *op;

	quick_cmp = sum_str(name);
	if ((cur = hash_func_tab[h=hash(name, MAXHASH_FUNC)]) != NULL)
		for (; cur != NULL; cur = cur->next) 
			if (cur->quick_hash == quick_cmp && !strcmp(cur->s, name)) {
				return cur;
			}
	return NULL;
}

struct HASHNODE *insert_func_htable(s)
char *s;
{
	return insert_name(hash_func_tab, s, sum_str(s), MAXHASH_FUNC);
}
