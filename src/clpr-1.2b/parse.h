/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2                                               *
 *  File: parse.h                                              *
 ***************************************************************/

#define MAXPRI	1200            /* Number of operator priority levels */
#define MAX_ARITY 1000        

#define N_OP_KIND 3
#define BINARY    0
#define POSTFIX	  1
#define PREFIX    2
#define NONE      3

struct OPNODE {
	struct {
	int	pri,		   /* priority of operator */
	    left,		   /* priority of left operand */
	    right,		   /* priority of right operand */
		conflict;
	} ops[N_OP_KIND];	
};

typedef struct pterm_node { /*** parse term ***/
	char ty, new_var, extra_flag;
	int narg, val;
	char *str;
	double rval;
	struct pterm_node *next, *first;
} PTERM;

struct HASHNODE {
	char ty;	/* type of the term */
	char extra; 
	PTERM	*t;	/* pointer to typical term */
	int val;	/* contains either functor value or variable index */
	int narg;	/* number of arguments in term */
	int var_index;
	char *s;	/* string of the term */
	double rval;	/* value of real number */
	struct HASHNODE *link,*next;	/* 2D link pointers */
	struct OPNODE *op;
	int special;
	int quick_hash;
};

/*
 *	Token Types
 */
#define N_TOKEN_TYPES (11)
#define VAR	(1)
#define UVAR	(2)
#define NAME	(3)
#define REAL	(4)
#define INTEGER	(5)
#define STR	(6)
#define PAREN	(7)
#define FUNC	(8)
#define ATOM	(9)
#define ENDFILE	(10)
#define PUNC	(11)

/*
 * Occurence of variable
 */
#define FIRST_VAR (1)
#define SEEN_VAR (2)
#define ANONYMOUS_VAR (3)

/*
 *	Macros for quick identification of tokens 
 */
#define is_str(t)	(t->ty == STR)
#define is_real(t)	(t->ty == REAL)
#define is_list(t)	(t->ty == FUNC && (t->val == DOT || t->val == EMPTYLIST))
#define is_nullist(t)	(t->ty == FUNC && t->val == EMPTYLIST)

#define is_p_real(t)      ((t)->ty == REAL)
#define is_p_string(t)    ((t)->ty == STR)
#define is_p_var(t)       ((t)->ty == VAR)
#define is_p_constant(t)  (((t)->ty == FUNC) && (!((t)->narg)))
#define is_p_func(t)      (((t)->ty == FUNC) && ((t)->narg))
#define is_p_funcval(t,v) (((t)->ty == FUNC) && ((t)->val == v))
#define is_p_functor(t)   ((t)->ty == FUNC)
#define is_p_list(t)      (((t)->ty == FUNC) && ((t)->val == DOT))
#define is_p_emptylist(t) (((t)->ty == FUNC) && ((t)->val == EMPTYLIST))

#define head_of_rule(r) \
	(is_implies(r) ? (r)->first : (r))
#define body_of_rule(r) \
	(is_implies(r) ? (r)->first->next : NULL)


/* Style checking flags */
#define CONTIG_STYLE (0x1)
#define SINGLE_STYLE (0x2)
#define OVERLOAD_STYLE (0x4)
#define ALL_STYLE (CONTIG_STYLE | SINGLE_STYLE | OVERLOAD_STYLE)

