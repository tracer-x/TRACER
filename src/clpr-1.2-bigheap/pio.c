/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2b                                              *
 *  File: pio.c                                                *
 ***************************************************************/

#include <ctype.h>

#include "standard.h"
#include "config.h"
#include "parse.h"
#include "symbols.h"
#include "lib.h"
#include "compile.h"
#include "emul.h"

extern FILE *outfile;
extern int debug_flg;
extern FUNCTREC functors[];
extern int *heap, *heaptop, *lstack, *stacktop;
extern int *findbind();

display_pterm(F, t)
FILE *F;
PTERM *t;
{
	show_pterm(t);
}

show_pterm(t)
PTERM *t;
{
int n,i;
PTERM *arg;

	if (!t) {
		fprintf(outfile,"NULL\n");return;
	}
	n=t->narg;
	if (t->ty <= 0) {
		fprintf(outfile,"term str %s narg %d\n",t->str,t->narg);
		fatal("narg prob");
	}
	if (n < 0)
		fatal("narg < 0 prob");
	if (t->ty==REAL) {
		if (!is_zero(t->rval)) fprintf(outfile,"%g",t->rval);
		else fprintf(outfile,"0");
		return;
	} else if (t->ty==STR) {
		fprintf(outfile,"\"%s{%d}\"",t->str,t->val);
		return;
	} else if (t->ty == VAR) {
		fprintf(outfile,"%s_%d",t->str,t->val);
		return;
	}
	if (debug_flg > 1)
		fprintf(outfile,"%s{t %x,%d,%d,%d}",t->str,t,t->ty,t->val,t->narg);
	else if (isalpha(t->str[0]))	
	    fprintf(outfile,"%s",t->str);
	else
	    fprintf(outfile,"`%s'",t->str);
	if (t->narg > 0) {
		/*** fprintf(outfile,"[%d](",t->val); ***/
		fprintf(outfile, "("); 
		for (arg=t->first;n > 0;n--) {
			show_pterm(arg);
			if (n > 1) fprintf(outfile,", ");
			arg=arg->next;
		}
		fprintf(outfile,")");
	}
}

print_rule(t)
PTERM *t;
{
	if (!strcmp(t->str,":-")) {
		print_term(t->first, MAX_OP_PRECEDENCE+1, TRUE);
		fprintf(outfile,":-\n");
		t = t->first->next;
		goto TAIL;
	} else print_term(t, MAX_OP_PRECEDENCE+1, TRUE);
	fprintf(outfile,".\n");
	return;

TAIL:
	if (!strcmp(t->str,",")) {
		fprintf(outfile,"\t");
		print_term(t->first, MAX_OP_PRECEDENCE+1, FALSE);
		fprintf(outfile,",\n");
		t = t->first->next;
		goto TAIL;
	}
	fprintf(outfile,"\t");
	print_term(t, MAX_OP_PRECEDENCE+1, FALSE);
	fprintf(outfile,".\n");
}

print_goal(t)
PTERM *t;
{
TAIL:
	if (!strcmp(t->str,",")) {
		print_term(t->first, MAX_OP_PRECEDENCE+1, FALSE);
		fprintf(outfile,", ");
		t = t->first->next;
		goto TAIL;
	}
	print_term(t, MAX_OP_PRECEDENCE+1, FALSE);
	fprintf(outfile,".\n");
}


print_term(t, priority, comma_flg)
PTERM *t;
int priority, comma_flg;
{
int i,n;
PTERM *arg;
int current, left, right;
int current_comma;

	switch (t->ty) {
	case REAL:
		if (!is_zero(t->rval)) fprintf(outfile,"%g",t->rval);
		else fprintf(outfile,"0");
		return;
	case STR:
		fprintf(outfile,"\"%s\"",t->str);
		return;
	case VAR:
		fprintf(outfile,"%s",t->str);
		return;
	case FUNC:
		if (is_list(t)) {
			print_list(t);
			return;
		}
		current = get_op_priority(t->str, t->narg, &left, &right);
		current_comma = is_comma(t);
		switch (functors[t->val].special) {
		case PREFIX:
			if (current > priority) fprintf(outfile, "(");
			fprintf(outfile,"%s ",string_of(t->val));
			print_term(t->first, right, TRUE);
			if (current > priority) fprintf(outfile, ")");
			return;
		case BINARY:
			if (current > priority || (comma_flg && current_comma)) fprintf(outfile, "(");
			print_term(t->first, left, TRUE);
			fprintf(outfile," %s ",string_of(t->val));
			print_term(t->first->next, FALSE);
			if (current > priority || (comma_flg && current_comma)) fprintf(outfile, ")");
			return;
		case POSTFIX:
			if (current > priority) fprintf(outfile, "(");
			print_term(t->first, left, !current_comma);
			fprintf(outfile," %s",string_of(t->val));
			if (current > priority) fprintf(outfile, ")");
			return;
		case NONE:
			if (!t->narg) {
				fprintf(outfile,"%s",string_of(t->val));
				return;
			} else fprintf(outfile,"%s(",string_of(t->val));
			for (n=t->narg,arg=t->first; n > 0; n--,arg=arg->next) {
				print_term(arg, MAX_OP_PRECEDENCE+1, !current_comma);
				if (n > 1) fprintf(outfile,", ");
			}
			fprintf(outfile,")");
			return;
		default:
			fatal("botch case 1 in print_term");
		}
	default:
		fatal("botch case 2 in print_term");
	}
}

print_list(t)
PTERM *t;
{
	if (is_nullist(t)) {
		fprintf(outfile,"[]");
		return;
	}
	fprintf(outfile,"[");
MORE:
	print_term(t->first, MAX_OP_PRECEDENCE+1, TRUE);
	if (!is_list(t->first->next)) {
		fprintf(outfile," | ");
		print_term(t->first->next, MAX_OP_PRECEDENCE+1, TRUE);
		fprintf(outfile,"]");
		return;
	}
	if (!is_nullist(t->first->next)) {
		t=t->first->next;
		fprintf(outfile,", ");
		goto MORE;
	}

	fprintf(outfile,"]");
}

extern int slack_id;

extern int *stack;

printterm(f, t)
FILE *f;
int *t;
{
	print_hterm(f, t, MAX_OP_PRECEDENCE+1, TRUE);
}

print_hterm(f, t, precedence, comma_flg)
FILE *f;
int *t;
int precedence;
int comma_flg;
{
double val;
int j, v;
char *name;
int arity, current, left, right;
int current_comma;

	t = findbind(t);
	if (is_con(t))	fprintf(f,"%s", functors[mask(*t)].pname);	
	else if (is_nil(t))	fprintf(f,"[]");	
	else if (is_param(t)) {
		j = mask(*t);
		if (is_ground(j, &val)) {
			if (!is_zero(val)) fprintf(f, "%g", val);
			else fprintf(f, "0");
		} else {
			if (j < slack_id) fprintf(f, "_t%d", j);
			else fprintf(f, "_S%d", j);
		}
	} else if (is_unbound_var(*t) || is_daemon(t)) print_var2pos(f, t);
	else if (is_cons(t)) {
		fprintf(f,"["); print_cons(f, t); fprintf(f,"]");
	} else {
		name = string_of(*t);
		arity = arity_of(*t);
		current = get_op_priority(name, arity, &left, &right);
		switch (functors[mask(*t)].special)	{
		case PREFIX:
			if (current > precedence) fprintf(f, "(");
			fprintf(f,"%s ", name);
			print_hterm(f, t+1, right, TRUE);
			if (current > precedence) fprintf(f, ")");
			break;
		case POSTFIX:
			if (current > precedence) fprintf(f, "(");
			print_hterm(f, t+1, left, TRUE);
			fprintf(f," %s", name);
			if (current > precedence) fprintf(f, ")");
			break;
		case BINARY:
			if (mask(*t) == COMMA) current_comma = TRUE;
			else current_comma = FALSE;
			if (current > precedence || (comma_flg && current_comma)) fprintf(f, "(");
			print_hterm(f, t+1, left, TRUE);
			fprintf(f," %s ", name); 
			print_hterm(f, t+2, right, !current_comma);
			if (current > precedence || (comma_flg && current_comma)) fprintf(f, ")");
			break;
		case NONE:
			fprintf(f,"%s(", name);
			for (j = 1; j <= arity; j++)	{
				if (j != 1) fprintf(f,", ");
				printterm(f, t + j);
			}
			fprintf(f,")");
			break;
		  default:
			fatal("no such prefix operator (printterm)");
		}
fflush(f);
	}
}

print_cons(f, t) 
FILE *f;
int *t;
{
int *tmp;
	printterm(f, pmask(*t));
	tmp = (int *) pmask(*t)+1;
	tmp = findbind(tmp);
	if (is_unbound_var(*tmp) || is_daemon(tmp)) {
		if (!mask(*tmp)) {
			fprintf(f,"| ");
			print_var2pos(f, tmp);
			return;
		}
	}
	if (is_nil(tmp)) return;
	if (is_cons(tmp)) {
		fprintf(f, ", ");
		print_cons(f, tmp);
		return;
	}
	fprintf(f, " | ");
	printterm(f, tmp);
}

print_var2pos(f, v)
FILE *f;
int *v;
{
	if (is_heap_ptr(v)) fprintf(f, "_h%d", var2pos(v, heap));
	else if (is_stack_ptr(v)) fprintf(f, "_s%d", var2pos(v, lstack));
	else {
		printf("***** v = %x ***** stack=%x heaptop=%x stacktop=%x\n", 
			v, stack, heaptop, stacktop);
		fflush(stdout);
		fatal("56912");
	}
}
