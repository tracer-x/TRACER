/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2                                               *
 *  File: solver.h                                             *
 ***************************************************************/

#define MAX_SOLVER_COUNTER	(550)

#define EQ              (0)
#define INEQ            (1)

#define	WOKEN		    (0)
#define SOLVER_MULT		(1) 		/*** x = y * z ***/
#define SOLVER_POW		(2) 		/*** x = y ^ z ***/
#define SOLVER_POW0		(3) 		/*** c = y ^ z ***/
#define SOLVER_POW1		(4) 		/*** x = c ^ y ***/
#define SOLVER_POW2		(5) 		/*** x = y ^ c ***/
#define SOLVER_POW02   	(21) 		/*** c = y ^ c' ***/
#define SOLVER_MIN		(6) 		/*** x = min(y, z) ***/
#define SOLVER_MIN0		(7)	        /*** c = min(y, z) ... unused ***/
#define SOLVER_MIN1		(8)		    /*** x = min(c, z) ***/
#define SOLVER_MIN2		(9)		    /*** x = min(y, c) ***/
#define SOLVER_MAX		(10)		/*** x = max(y, z) ***/
#define SOLVER_MAX0		(11)		/*** c = max(y, z) ... unused ***/
#define SOLVER_MAX1		(12)		/*** x = max(c, z) ***/
#define SOLVER_MAX2		(13)		/*** x = max(y, c) ***/
#define SOLVER_ABS		(14)		/*** x = abs(y) ***/
#define SOLVER_ABS0		(15)		/*** c = abs(y), c > 0 ***/
#define SOLVER_SIN		(16)		/*** x = sin(y) ***/
#define SOLVER_SIN0		(17)		/*** c = sin(y) ***/
#define SOLVER_COS		(18)		/*** x = cos(y) ***/
#define SOLVER_COS0		(19)		/*** c = cos(y) ***/
#define SOLVER_EVAL		(20)        /*** x = eval(y) ***/
#define SOLVER_ARCSIN   (22)
#define SOLVER_ARCCOS   (23)

/* Math constants */
#define PI_VAL			(3.14159265358979323846)
#define PI_2_VAL		(1.57079632679489661923)
#define PI_4_VAL		(0.78539816339744830962)
#define E_VAL			(2.7182818284590452354)
#define SQRT2_VAL		(1.41421356237309504880)
#define SQRT1_2_VAL		(0.70710678118654752440)

/*---------------------------------------------------------------------------*/

/**********************************************************************
 * All nodes below must be the same size (6 ints = 24 bytes, or 8 ints)
 * BIT64 changes made by Vijay for 64-bit risci8 (node size = 48 bytes)
 * IMPORTANT: compiler automatically aligns structs to nearest n-multiple
 *            greater than the struct's size, where n is the size of the
 *            largest element in it (ptr = 8, int = 4 on 64-bit system).
 *********************************************************************/

typedef struct solver_node {
	struct solver_node *next;
#ifdef BIT64
	int dummy[9];
#else
	int dummy[5];
#endif
#if ALIGN8
	int dummy88, dummy99;
#endif
} SOLVER_NODE, *SOLVER_NODE_ptr;

typedef struct entry_node { 
	struct entry_node *next;
	int id;
	double coef;
#ifdef BIT64
	int dummy[6];
#else
	int dummy1, dummy2;
#endif
#if ALIGN8
	int dummy88, dummy99;
#endif
} ENTRY, *ENTRY_ptr;
 
typedef struct occ_node {
	struct occ_node *next;
	int id;
	double coef; /*** only for dump ***/
#ifdef BIT64
	int dummy[6];
#else
	int dummy1, dummy2;
#endif
#if ALIGN8
	int dummy88, dummy99;
#endif
} OCC, *OCC_ptr;

typedef struct eqn_node {
	ENTRY_ptr next;
	int time_stamp;
	int id;
	struct eqn_params_node *params;
	double constant;
#ifdef BIT64
	int dummy[3];
#endif
#if ALIGN8
	int dummy88, dummy99;
#endif
} EQN, *EQN_ptr;
 
typedef struct eqn_params_node {
	int basic;
	struct kohler_node *kohler;
	double epsilon;
#ifdef BIT64
	int dummy[6];
#else
	int dummy1, dummy2;
#endif
#if ALIGN8
	int dummy88, dummy99;
#endif
} EQN_PARAMS, *EQN_PARAMS_ptr;
	
typedef struct nl_eqn_node {
	struct nl_eqn_node *next;
	int time_stamp;
	int type;
	struct nl_params1_node *params1;
	struct nl_params2_node *params2;
	struct nl_eqn_node *partner;
#if ALIGN8
	int dummy88, dummy99;
#endif
} NL_EQN, *NL_EQN_ptr;

typedef struct nl_params1_node {
	int id0, id1, id2;
	int mark;
	double coef;
#ifdef BIT64
	int dummy[5];
#endif
#if ALIGN8
	int dummy88, dummy99;
#endif
} NL_PARAMS1, *NL_PARAMS1_ptr;
	
typedef struct nl_params2_node {
	struct nl_occ_node *occ0, *occ1, *occ2;
#ifdef BIT64
	int dummy[5];
#else
	int dummy1, dummy2, dummy3;
#endif
#if ALIGN8
	int dummy88, dummy99;
#endif
} NL_PARAMS2, *NL_PARAMS2_ptr;
	
typedef struct nl_occ_node {
	struct nl_occ_node *next;
	struct nl_occ_node *prev;
	int type;
	int id;
	NL_EQN_ptr nl_eqn;
	int pos;
#ifdef BIT64
	int dummy[2];
#endif
#if ALIGN8
	int dummy88, dummy99;
#endif
} NL_OCC, *NL_OCC_ptr;
 
typedef struct tableau_hdr_node {
	struct tableau_hdr_node *next; /*** unused ***/
	EQN_ptr eqn;
	OCC_ptr eq_occ;
	OCC_ptr ineq_occ;
	NL_OCC_ptr nlin_occ;
	int basic_eqn;
#if ALIGN8
	int dummy88, dummy99;
#endif
} TAB_HDR_NODE, *TAB_HDR_NODE_ptr;

typedef struct kohler_node {
	struct kohler_node *next;
	int bits[5];
#ifdef BIT64
	int dummy[4];
#endif
#if ALIGN8
	int dummy88, dummy99;
#endif
} KOHLER_NODE, *KOHLER_ptr;

typedef struct list_node {
	struct list_node *next;
	int bits[5];
#if ALIGN8
	int dummy88, dummy99;
#endif
} LIST_NODE, *LIST_ptr;
	
#ifdef STATS /*-------------------------------------------- malloc ----------*/

#define malloc_EQN(eqn) { \
	malloc_eqn_count++; \
	eqn = (EQN_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
	urk(1, eqn); \
}

#define malloc_EQN_PARAMS(params) { \
	malloc_eqn_par_count++; \
	params = (EQN_PARAMS_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
}

#define malloc_ENTRY(entry) { \
	malloc_entry_count++; \
	entry = (ENTRY_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
}

#define malloc_OCC(occ) { \
	malloc_occ_count++; \
	occ = (OCC_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
}

#define malloc_NL_EQN(nl_eqn) { \
	malloc_nl_eqn_count++; \
	nl_eqn = (NL_EQN_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
}

#define malloc_NL_OCC(occ) { \
	malloc_nl_occ_count++; \
	occ = (NL_OCC_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
}

#define malloc_NL_PARAMS1(params) { \
	malloc_nl_par1_count++; \
	params = (NL_PARAMS1_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
}

#define malloc_NL_PARAMS2(params) { \
	malloc_nl_par2_count++; \
	params = (NL_PARAMS2_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
}

#define malloc_HDR(hdr) { \
	malloc_hdr_count++; \
	hdr = (TAB_HDR_NODE_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
	hdr->next = NULL; \
	hdr->eqn = NULL; \
	hdr->eq_occ = hdr->ineq_occ = NULL; \
	hdr->nlin_occ = NULL; \
	hdr->basic_eqn = 0; \
}

#define malloc_KOHLER(koh) { \
	malloc_koh_count++; \
	koh = (KOHLER_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
	koh->next = NULL; \
	koh->bits[0] = koh->bits[1] = koh->bits[2] = \
	koh->bits[3] = koh->bits[4] = 0; \
}

#define malloc_LIST(list) { \
	malloc_list_count++; \
	list = (LIST_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
	list->next = NULL; \
	list->bits[0] = list->bits[1] = list->bits[2] = \
	list->bits[3] = list->bits[4] = 0; \
}

#else /* ....................................................................*/

#define malloc_EQN(eqn) { \
	eqn = (EQN_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
}

#define malloc_EQN_PARAMS(params) { \
	params = (EQN_PARAMS_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
}

#define malloc_ENTRY(entry) { \
	entry = (ENTRY_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
}

#define malloc_OCC(occ) { \
	occ = (OCC_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
}

#define malloc_NL_EQN(nl_eqn) { \
	nl_eqn = (NL_EQN_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
}

#define malloc_NL_OCC(occ) { \
	occ = (NL_OCC_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
}

#define malloc_NL_PARAMS1(params) { \
	params = (NL_PARAMS1_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
}

#define malloc_NL_PARAMS2(params) { \
	params = (NL_PARAMS2_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
}

#define malloc_HDR(hdr) { \
	hdr = (TAB_HDR_NODE_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
	hdr->next = NULL; \
	hdr->eqn = NULL; \
	hdr->eq_occ = hdr->ineq_occ = NULL; \
	hdr->nlin_occ = NULL; \
	hdr->basic_eqn = 0; \
}

#define malloc_KOHLER(koh) { \
	koh = (KOHLER_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
	koh->next = NULL; \
	koh->bits[0] = koh->bits[1] = koh->bits[2] = \
	koh->bits[3] = koh->bits[4] = 0; \
}

#define malloc_LIST(list) { \
	list = (LIST_ptr) sms; \
	sms = (sms->next ? sms->next : make_new_solver_malloc_space()); \
	list->next = NULL; \
	list->bits[0] = list->bits[1] = list->bits[2] = \
	list->bits[3] = list->bits[4] = 0; \
}

#endif /*--------------------------------------------------------------------*/

#ifdef STATS /*-------------------------------------------- free ------------*/

#define free_EQN(eqn) { \
	free_eqn_count++; \
	((SOLVER_NODE_ptr) eqn)->next = sms; \
	sms = ((SOLVER_NODE_ptr) eqn); \
	urk(0, eqn); \
}

#define free_EQN_PARAMS(params) { \
	free_eqn_par_count++; \
	((SOLVER_NODE_ptr) params)->next = sms; \
	sms = ((SOLVER_NODE_ptr) params); \
}

#define free_ENTRY(entry) { \
	free_entry_count++; \
	((SOLVER_NODE_ptr) entry)->next = sms; \
	sms = ((SOLVER_NODE_ptr) entry); \
}

#define free_OCC(occ) { \
	free_occ_count++; \
	((SOLVER_NODE_ptr) occ)->next = sms; \
	sms = ((SOLVER_NODE_ptr) occ); \
}

#define free_NL_EQN(nl_eqn) { \
	free_nl_eqn_count++; \
	((SOLVER_NODE_ptr) nl_eqn)->next = sms; \
	sms = ((SOLVER_NODE_ptr) nl_eqn); \
}

#define free_NL_OCC(occ) { \
	free_nl_occ_count++; \
	((SOLVER_NODE_ptr) occ)->next = sms; \
	sms = ((SOLVER_NODE_ptr) occ); \
}

#define free_NL_PARAMS1(params) { \
	free_nl_par1_count++; \
	((SOLVER_NODE_ptr) params)->next = sms; \
	sms = ((SOLVER_NODE_ptr) params); \
}

#define free_NL_PARAMS2(params) { \
	free_nl_par2_count++; \
	((SOLVER_NODE_ptr) params)->next = sms; \
	sms = ((SOLVER_NODE_ptr) params); \
}

#define free_HDR(hdr) { \
	free_hdr_count++; \
	((SOLVER_NODE_ptr) hdr)->next = sms; \
	sms = ((SOLVER_NODE_ptr) hdr); \
}

#define free_KOHLER(koh) { \
	free_koh_count++; \
	((SOLVER_NODE_ptr) koh)->next = sms; \
	sms = ((SOLVER_NODE_ptr) koh); \
}

#define free_LIST(list) { \
	free_list_count++; \
	((SOLVER_NODE_ptr) list)->next = sms; \
	sms = ((SOLVER_NODE_ptr) list); \
}

#else /* ....................................................................*/

#define free_EQN(eqn) { \
	((SOLVER_NODE_ptr) eqn)->next = sms; \
	sms = ((SOLVER_NODE_ptr) eqn); \
}

#define free_EQN_PARAMS(params) { \
	((SOLVER_NODE_ptr) params)->next = sms; \
	sms = ((SOLVER_NODE_ptr) params); \
}

#define free_ENTRY(entry) { \
	((SOLVER_NODE_ptr) entry)->next = sms; \
	sms = ((SOLVER_NODE_ptr) entry); \
}

#define free_OCC(occ) { \
	((SOLVER_NODE_ptr) occ)->next = sms; \
	sms = ((SOLVER_NODE_ptr) occ); \
}

#define free_NL_EQN(nl_eqn) { \
	((SOLVER_NODE_ptr) nl_eqn)->next = sms; \
	sms = ((SOLVER_NODE_ptr) nl_eqn); \
}

#define free_NL_OCC(occ) { \
	((SOLVER_NODE_ptr) occ)->next = sms; \
	sms = ((SOLVER_NODE_ptr) occ); \
}

#define free_NL_PARAMS1(params) { \
	((SOLVER_NODE_ptr) params)->next = sms; \
	sms = ((SOLVER_NODE_ptr) params); \
}

#define free_NL_PARAMS2(params) { \
	((SOLVER_NODE_ptr) params)->next = sms; \
	sms = ((SOLVER_NODE_ptr) params); \
}

#define free_HDR(hdr) { \
	((SOLVER_NODE_ptr) hdr)->next = sms; \
	sms = ((SOLVER_NODE_ptr) hdr); \
}

#define free_KOHLER(koh) { \
	((SOLVER_NODE_ptr) koh)->next = sms; \
	sms = ((SOLVER_NODE_ptr) koh); \
}

#define free_LIST(list) { \
	((SOLVER_NODE_ptr) list)->next = sms; \
	sms = ((SOLVER_NODE_ptr) list); \
}

#endif /*--------------------------------------------------------------------*/

#define null_hdr(hdr) \
	(!(hdr->eqn || hdr->eq_occ || hdr->ineq_occ || hdr->nlin_occ || \
	   hdr->next))
#define is_power_nlin(nl)	(nl->type >= SOLVER_POW && nl->type <= SOLVER_POW2)

/*---------------------------------------------------------------------------*/

extern int START_USER_SESSION;
extern double EPS;
extern char SOLVER_CHECK;
extern char SOLVER_TRACE;

extern SOLVER_NODE_ptr make_new_solver_malloc_space();
extern double delete_entry();
extern EQN_ptr sum_eqns();
extern EQN_ptr copy_eqn();
extern double find_coef();
extern double tmp_delete_entry();
extern double delete_entry();
extern NL_EQN_ptr push_nl_eqn();
extern NL_OCC_ptr insert_nl_occ();

/*-------------------------------------------------- solver globals ---------*/

extern TAB_HDR_NODE_ptr *tableau;
extern int SOLVER_SZ;

extern SOLVER_NODE_ptr sms;
extern int sms_blocks;
extern int solver_id;
extern int slack_id;
extern int nlin_count;
extern int s_count[];

extern int malloc_eqn_count; 
extern int malloc_eqn_par_count; 
extern int malloc_entry_count; 
extern int malloc_occ_count; 
extern int malloc_nl_eqn_count; 
extern int malloc_nl_occ_count; 
extern int malloc_nl_par1_count; 
extern int malloc_nl_par2_count; 
extern int malloc_hdr_count; 
extern int malloc_koh_count; 
extern int malloc_list_count; 

extern int free_eqn_count; 
extern int free_eqn_par_count; 
extern int free_entry_count; 
extern int free_occ_count; 
extern int free_nl_eqn_count; 
extern int free_nl_occ_count; 
extern int free_nl_par1_count; 
extern int free_nl_par2_count; 
extern int free_hdr_count; 
extern int free_koh_count;
extern int free_list_count; 

