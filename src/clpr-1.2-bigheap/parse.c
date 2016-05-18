/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: parse.c                                              *
 ***************************************************************/

#include <setjmp.h>

#include "standard.h"
#include "parse.h"
#include "symbols.h"

#define NULLPT ((PTERM *) 0)

int debug_flg;

PTERM *get_list();
PTERM *get_nfix();
PTERM *get_args();

static PTERM *make_op_func();

extern char *emalloc();
extern char *str_space();

extern char tok_c;
extern int tok_type;
extern PTERM* tok_ptr;
extern struct HASHNODE *tok_hnode;
extern char ch;
extern char *cur_filename;
extern FILE *cur_stream;
extern FILE *outfile;
extern int debug_flg;
extern jmp_buf err_readterm;
extern int comma_flg, bar_flg;
extern PTERM *null_list;
extern char *cons_str;
extern PTERM *new_pterm();
extern PTERM *narg_pterm();
extern PTERM *new_pt_emptylist();
extern struct HASHNODE hash_func_tab[];

/*---------------------------------------------------------------------------*/
/***
	Parse a prolog term with priority n (lower n, higer priority);
	Usually start with get_pterm(MAXPRI)
***/

PTERM *get_pterm(n)
int n;
{
PTERM *t, *exp[2];
int oldpri, pri, left, right;
int binflg;
int old_comma, old_bar;
struct HASHNODE *hnode, *hnode1;

	switch (tok_type) {
	case NAME:
		exp[0] = tok_ptr;
		hnode = tok_hnode;
		scan();
		if (is_op_hnode(hnode, PREFIX, &pri, &left, &right)) {
			if (tok_type == REAL && exp[0]->val == U_MINUSVAL) {
				exp[0] = tok_ptr;
				tok_ptr->rval = -tok_ptr->rval;
				scan();
				break;
			}
			if (n >= pri) {
				t = exp[0];
				if (!(exp[0] = get_pterm(right))) 
					return(narg_pterm(hnode, t, 0));
				else {
					exp[0] = make_op_func(hnode, t, 1, exp);
					break;
				}
			} else return(narg_pterm(hnode,exp[0],0));
		} 
		if (tok_type == PAREN && tok_c == '(')
			exp[0] = get_args(hnode, exp[0]);
		else if (is_nfix_hnode(hnode))
			exp[0] = get_nfix(exp[0]);
		else narg_pterm(hnode,exp[0],0);
		break;
	case STR:
	case VAR:
	case REAL:
		exp[0] = tok_ptr;
		scan();
		break;
	case PAREN:
		if (tok_c == '(') {
			old_comma = comma_flg;
			comma_flg = FALSE;
			scan();
			exp[0] = get_pterm(MAXPRI);
			comma_flg = old_comma;
			if (tok_type != PAREN || tok_c != ')')
				synerr("expected closing ')'");
			else scan();
		} else if (tok_c == '[') {
			old_bar=bar_flg;
			old_comma=comma_flg;
			comma_flg=TRUE;
			bar_flg=TRUE;
			exp[0]=get_list();
			bar_flg=old_bar;
			comma_flg=old_comma;
			if (tok_type != PAREN || tok_c != ']') 
				synerr("expected closing ]");
			scan();
		} else return(NULLPT);
		break;
	default:
		return(NULLPT);
	}

	oldpri = 0;
	hnode = tok_hnode;
	while (tok_type == NAME &&
		((binflg = is_op_hnode(hnode,BINARY,&pri,&left,&right))||
		is_op_hnode(hnode, POSTFIX, &pri, &left, &right))) {
		if (n < pri) return(exp[0]);
		if (left >= oldpri) {
			t = tok_ptr;
			scan();
			if (binflg) {
				if (!(exp[1]=get_pterm(right)))
					synerr("expected right operand");
				exp[0]=make_op_func(hnode,t,2,exp);
			} else exp[0]=make_op_func(hnode,t,1,exp);
			oldpri = pri;
		} else break;
		hnode = tok_hnode;
	}
	return(exp[0]);
}

/***
	Make a functor term for operators only,
	f is the functor, narg the no of arguments, 
	exp is an array (PTERM *exp[2]),
	mode is the type of operator (eg. POSTFIX)
***/

static PTERM *make_op_func(hnode, t, narg, exp)
struct HASHNODE *hnode;
PTERM *t,*exp[];
int narg;
{
int i;

	if (t->ty != FUNC || narg > 2) fatal("87540");
	t->first = exp[0];
	if (narg == 2) exp[0]->next = exp[1];
	return narg_pterm(hnode, t, narg);
}

PTERM *get_args(hnode, func)
struct HASHNODE *hnode;
PTERM *func;
{
	int i=0,n=0;
	PTERM *t,*prev;
	int oldcomma;

	oldcomma=comma_flg;
	comma_flg=TRUE;
	scan();
	if (!(t=get_pterm(MAXPRI)))
		synerr("expected first argument");
	func->first=t;
	for (prev=t,n=1; is_punc(','); prev->next=t,prev=t,n++) {
		scan();
		if (!(t=get_pterm(MAXPRI)))
			synerr("expected argument");
	}
	if (tok_type != PAREN || tok_c != ')')
		synerr("expected ')' to close functor");
	comma_flg=oldcomma;
	scan();
	return(narg_pterm(hnode,func,n));
}

/*
 * Parses n-fix terms
 */
PTERM *get_nfix()
{
	fatal("botch get_nfix");
}

/*
 * 	Parses list structures, of the form
 *		[X]
 *		[X|Y]
 *		[X,Y] 
 *	[] & X.Y are not done here
 */
PTERM *get_list()
{
	PTERM *t,*t1,*t2=NULLPT;

	scan();
	if ((t1=get_pterm(MAXPRI)) == NULL)
		synerr("malformed list head");
	if (is_punc('|')) {
		scan();
		if ((t2=get_pterm(MAXPRI)) == NULL)
			synerr("malformed list tail");
	} else if (is_punc(',')) t2=get_list();
	else if (tok_type != PAREN || tok_c != ']') 
		synerr("expected one of {'|',',',']'} in list");
	t = new_pterm();
	t->str = cons_str;
	t->narg = 2;
	t->val = DOT;
	t->ty = FUNC;
	t->first = t1;
	if (t2) t1->next = t2;
	else t1->next = new_pt_emptylist();
	return(t);
}

/*
 *	top level term reader 
 *		returns NULLPT for syntax errors or EOF
 *	terms must always end with a '.'
 */
jmp_buf err_readterm;	
PTERM *readterm()
{
	PTERM *t;
	comma_flg = bar_flg = FALSE;
	if (setjmp(err_readterm))
		return(NULLPT);
	zero_vars();
	scan();
	if (tok_type == ENDFILE) return(NULLPT);
	t=get_pterm(MAXPRI);
/*
printf("READ "); fflush(stdout); show_term(t); putchar('\n');
*/
	if (is_punc('.'))
		if (t == NULLPT)
			synerr("expected a term");
		else	return(t);
	else if (tok_type == ENDFILE) {
		synerr("unexpected end of file in term");
		return(NULLPT);
	} else {
		synerr("unexpected symbol (expected '.')");
		return(NULLPT); /* quiet gcc */
	}
	/*
	 * Oops can't get here
	 */
}

/*
 * 	parses a goal/query
 *		returns 0 on EOF
 *		2 on syntax error
 *		1 on success
 */
get_goal(t)
PTERM **t;
{
	*t=readterm();
	gobble_nl(); /* new ... eat up any newline at end of command line */
	if (tok_type == ENDFILE)
		return 0;
	/* GRUNGE */
	if (*t == (PTERM *) 0) 
		return 2; 
	else return 1;
}

