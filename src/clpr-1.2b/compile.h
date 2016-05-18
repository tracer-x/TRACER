/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2                                               *
 *  File: compile.h                                            *
 ***************************************************************/

//#define MAX_REGS        1024    /*** < (REGS_SZ - REGS), multiple of 32 ***/
#define MAX_REGS        1280
#define MAXUNRESOLVED	80000
#define MAXFUNCTORS		64000
#define MAXCLAUSES		3000
#define MAXVARS			20000
#define MAXNAMES 		10000
#define MAX_HASH_P 		3073
#define MAX_HASH_L 		3073
#define MAX_VAR_OCC     64

#define DUMP_SEPARATOR  ('\001')	/* separator for dump variable strings */

#define check_codespace(i) { \
	if (CODE_SZ - (i) <= CODE_SAFETY) { \
		printf("\nCODE_SZ: %d\npcode marker: %d (should be the same as i: %d)\nepcode marker: %d\ndiagnostic's cs size while crashing: %d bytes\n", \
				CODE_SZ, pcode, (i), epcode, (pcode > MAX_GOAL_CODE)? pcode * sizeof(*code): epcode * sizeof(*code)); \
		printf("pid: %d\n", getpid()); \
		fatal("no more code space"); \
	} \
} 
#define check_goalspace(i) { \
	if ((i) + CODE_SAFETY >= MAX_GOAL_CODE) fatal("no more goal space"); \
} 
#define is_rr(t) (bit1((t)->extra_flag)) /*** right-recursive? ***/
#define set_rr(t) (set_bit1((t)->extra_flag))
#define unset_rr(t) (unset_bit1((t)->extra_flag))
#define val_rule(t) ((t)->val == IMPL ? (t)->first->val : (t)->val)

typedef struct lablerec	{
	char *lable;
	int val;
	int loc;
	int off;
	int jump;
} LABLEREC;

typedef struct functrec {
	int arity;
	char *pname;
	int special;
} FUNCTREC;

typedef struct rule {
	PTERM *t, *wt;
	struct rule *next;
	int id; 
	int startcode, endcode;
} RULE, *RULE_ptr;

#define ADDRESS    1 /*** assembly instruction arguments ***/
#define SINT       2
#define VARIABLE   3
#define REG        4
#define FUNCTOR    5
#define CONSTANT   6
#define BYTE       7
#define FLOAT      8
#define STRINGLOC  9
#define FLEXARG    10
#define CODEADDR   11

typedef struct asmrec {
	int num;			   /* Numerical values of instructions */
	char *mnemonic;		   /* String name of instruction */
	int nargs;			   /* Number of arguments */
	int type[5];		   /* Types of the arguments */
} ASMREC;

typedef struct vrec {      /* var info per rule */
	struct vrec *next;
	int val;                       
	char *str;
	int saved_stack_loc;
	int stack_loc;
	int occ_top;
	struct {
		int atom, arg, level;
	} occ[MAX_VAR_OCC + 1];	 
	int n_live_regs;  
	unsigned int live_regs[(MAX_REGS / 32) + 1];
} VREC;

typedef struct hash_p_node {
	struct hash_p_node *next;
	int name;
	int n_rules;
	RULE *first_rule, *last_rule, *last_compiled_rule;
	int start_hdrcode, end_hdrcode; /*** end_hdrcode == 0 for nonheaders ***/
	SPNODE *spred;
	int flags;
	struct hash_l_node *jump_occ;
	double counter;
} HASH_P_NODE, *HASH_P_NODE_ptr;

typedef struct hash_l_node {
	char *str;
	struct hash_l_node *next;
	int val;
	int loc;
	int quick_hash;
} HASH_L_NODE, *HASH_L_NODE_ptr;

typedef int code_t;

/*** HASH_P_NODE extra bit flags */
#define H_COMPILED  (0x1)
#define H_DYNAMIC   (0x2)
#define H_PROTECTED (0x4)
#define H_SPY       (0x8)
#define H_CUT       (0x10)
#define H_ADDED     (0x20)

