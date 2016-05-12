/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2                                               *
 *  File: symbols.h                                            *
 ***************************************************************/

#define INIT_FUNC_ID 250  
#define MAX_SPRED (INIT_FUNC_ID)

#define DOT	2
#define COMMA	3
#define IMPL	5
#define EMPTYLIST 6
#define QUERY 8
#define STDINVAL 9
#define STDOUTVAL 10
#define END 11
#define USER 12
#define FLIBDIR 13
#define COMMAND 14
#define DISJ 15
#define DIRECTIVE 16 

#define is_comma(t) ((t)->ty == FUNC && (t)->val == COMMA)
#define is_emptylist(t) ((t)->ty == FUNC && (t)->val == EMPTYLIST)
#define is_implies(t) ((t)->ty == FUNC && (t)->val == IMPL)
#define is_query(t) ((t)->ty == FUNC && (t)->val == QUERY)
#define is_command(t) ((t)->ty == FUNC && (t)->val == COMMAND)
#define is_directive(t) ((t)->ty == FUNC && (t)->val == DIRECTIVE)

#define ARITH_FUNC_0 (20)
#define ARITH_FUNC_1 (35)
#define ARITH_FUNC_2 (40)
#define ARITH_FUNC_3 (44)
#define ARITH_FUNC_4 (50)
#define ARITH_FUNC_5 (65)

#define PLUSVAL (20)
#define U_MINUSVAL (21)
#define MINUSVAL (22)
#define MULTVAL (23)
#define DIVVAL (24)
#define SINVAL (25)
#define COSVAL (26)
#define ABSVAL (28)
#define MINVAL (29)
#define MAXVAL (30)
#define POWVAL (31)
#define EVALVAL (32)
#define QUOTEVAL (33)
#define ARCSINVAL (34)
#define ARCCOSVAL (35)

#define HAT_PLUSVAL (50)
#define HAT_U_MINUSVAL (51)
#define HAT_MINUSVAL (52)
#define HAT_MULTVAL (53)
#define HAT_DIVVAL (54)
#define HAT_SINVAL (55)
#define HAT_COSVAL (56)
#define HAT_ABSVAL (58)
#define HAT_MINVAL (59)
#define HAT_MAXVAL (60)
#define HAT_POWVAL (61)
#define HAT_EVALVAL (62)
#define HAT_QUOTEVAL (63)
#define HAT_ARCSINVAL (64)
#define HAT_ARCCOSVAL (65)

#define EQVAL (40)
#define LTVAL (41)
#define GTVAL (42)
#define LEVAL (43)
#define GEVAL (44)

#define is_equation(t) \
	((t)->ty == FUNC && (t)->val == EQVAL)
#define is_arith_term(t) \
	((t)->ty == FUNC && \
	(((t)->val >= ARITH_FUNC_0 && (t)->val <= ARITH_FUNC_1) || \
         ((t)->val == EVALVAL)))
#define is_constraint(t) \
	((t)->ty == FUNC && (t)->val >= ARITH_FUNC_2 && (t)->val <= ARITH_FUNC_3)
#define is_ineq(t) \
	((t)->ty == FUNC && (t)->val >= ARITH_FUNC_2+1 && (t)->val <= ARITH_FUNC_3)
#define is_hat(t) \
	((t)->ty == FUNC && (t)->val >= ARITH_FUNC_4 && (t)->val <= ARITH_FUNC_5)
#define is_arith_hat(t) \
	(is_hat(t) && (t)->val != HAT_QUOTEVAL)
#define is_complex_func(t) \
	((t)->ty == FUNC && (t)->narg && !is_arith_term(t))
#define is_val_hat(v) \
	((v) >= ARITH_FUNC_4 && (v) <= ARITH_FUNC_5)
#define is_val_arith_hat(v) \
	(is_val_hat(v) && v != HAT_QUOTEVAL)
#define is_val_arith_func(v) \
	(((v) >= ARITH_FUNC_0 && (v) <= ARITH_FUNC_1) && (v) != QUOTEVAL)

#define is_plus(t) ((t)->ty == FUNC && (t)->val == PLUSVAL)
#define is_u_minus(t) ((t)->ty == FUNC && (t)->val == U_MINUSVAL)
#define is_minus(t) ((t)->ty == FUNC && (t)->val == MINUSVAL)
#define is_mult(t) ((t)->ty == FUNC && (t)->val == MULTVAL)
#define is_div(t) ((t)->ty == FUNC && (t)->val == DIVVAL)
#define is_sin(t) ((t)->ty == FUNC && (t)->val == SINVAL)
#define is_cos(t) ((t)->ty == FUNC && (t)->val == COSVAL)
#define is_tan(t) ((t)->ty == FUNC && (t)->val == TANVAL)
#define is_abs(t) ((t)->ty == FUNC && (t)->val == ABSVAL)
#define is_min(t) ((t)->ty == FUNC && (t)->val == MINVAL)
#define is_max(t) ((t)->ty == FUNC && (t)->val == MAXVAL)
#define is_pow(t) ((t)->ty == FUNC && (t)->val == POWVAL)
#define is_eval(t) ((t)->ty == FUNC && (t)->val == EVALVAL)
#define is_quote(t) ((t)->ty == FUNC && (t)->val == QUOTEVAL)
#define is_arcsin(t) ((t)->ty == FUNC && (t)->val == ARCSINVAL)
#define is_arccos(t) ((t)->ty == FUNC && (t)->val == ARCCOSVAL)

#define is_hat_plus(t) ((t)->ty == FUNC && (t)->val == HAT_PLUSVAL)
#define is_hat_u_minus(t) ((t)->ty == FUNC && (t)->val == HAT_U_MINUSVAL)
#define is_hat_minus(t) ((t)->ty == FUNC && (t)->val == HAT_MINUSVAL)
#define is_hat_mult(t) ((t)->ty == FUNC && (t)->val == HAT_MULTVAL)
#define is_hat_div(t) ((t)->ty == FUNC && (t)->val == HAT_DIVVAL)
#define is_hat_sin(t) ((t)->ty == FUNC && (t)->val == HAT_SINVAL)
#define is_hat_cos(t) ((t)->ty == FUNC && (t)->val == HAT_COSVAL)
#define is_hat_tan(t) ((t)->ty == FUNC && (t)->val == HAT_TANVAL)
#define is_hat_abs(t) ((t)->ty == FUNC && (t)->val == HAT_ABSVAL)
#define is_hat_min(t) ((t)->ty == FUNC && (t)->val == HAT_MINVAL)
#define is_hat_max(t) ((t)->ty == FUNC && (t)->val == HAT_MAXVAL)
#define is_hat_pow(t) ((t)->ty == FUNC && (t)->val == HAT_POWVAL)
#define is_hat_eval(t) ((t)->ty == FUNC && (t)->val == HAT_EVALVAL)
#define is_hat_quote(t) ((t)->ty == FUNC && (t)->val == HAT_QUOTEVAL)
#define is_hat_arcsin(t) ((t)->ty == FUNC && (t)->val == HAT_ARCSINVAL)
#define is_hat_arccos(t) ((t)->ty == FUNC && (t)->val == HAT_ARCCOSVAL)

#define is_eq(t) ((t)->ty == FUNC && (t)->val == EQVAL)
#define is_lt(t) ((t)->ty == FUNC && (t)->val == LTVAL)
#define is_gt(t) ((t)->ty == FUNC && (t)->val == GTVAL)
#define is_le(t) ((t)->ty == FUNC && (t)->val == LEVAL)
#define is_ge(t) ((t)->ty == FUNC && (t)->val == GEVAL)

#define is_linear_term(t) \
	(is_p_var(t) || is_p_real(t) || is_plus(t) || is_minus(t) || is_u_minus(t))
#define is_nlin_term(t) (!is_linear_term((t))) 

#define WAM_SPECIAL_0 (101)
#define WAM_SPECIAL_1 (115)

#define is_builtin(t) \
	((t)->ty == FUNC && (t)->val >= WAM_SPECIAL_0 \
	 && (t)->val <= WAM_SPECIAL_1)

#define DUMPVAL (101)
#define RETRACTVAL (102)
#define RULEVAL (103)
#define REPEATVAL (104)
#define PRINTFVAL (105)
#define PRINTVAL (106)
#define WRITEVAL (107)
#define READVAL (108)
#define FAILVAL (111)
#define GFAILVAL (112)
#define CUTVAL  (113)
#define CALLXVAL  (114)
#define TRUEVAL  (115)

#define is_dump(t) \
	((t)->ty == FUNC && (t)->val == DUMPVAL)
#define is_retract(t) \
	((t)->ty == FUNC && (t)->val == RETRACTVAL)
#define is_rule(t) \
	((t)->ty == FUNC && (t)->val == RULEVAL)
#define is_print(t) \
	((t)->ty == FUNC && (t)->val == PRINTVAL)
#define is_printf(t) \
	((t)->ty == FUNC && (t)->val == PRINTFVAL)
#define is_write(t) \
	((t)->ty == FUNC && (t)->val == WRITEVAL)
#define is_read(t) \
	((t)->ty == FUNC && (t)->val == READVAL)
#define is_trace(t) \
	((t)->ty == FUNC && (t)->val == TRACEVAL)
#define is_notrace(t) \
	((t)->ty == FUNC && (t)->val == NOTRACEVAL)
#define is_fail(t) \
	((t)->ty == FUNC && (t)->val == FAILVAL)
#define is_cut(t) \
	((t)->ty == FUNC && (t)->val == CUTVAL)
#define is_callx(t) \
	((t)->ty == FUNC && (t)->val == CALLXVAL)
#define is_backtrackable(t) \
	((t)->ty == FUNC && ((t)->val == CALLXVAL || (t)->val == RULEVAL \
	|| (t)->val == RETRACTVAL))

#define WAM_LIB_0 (150)

#define is_libpred(t) \
  	((t)->ty == FUNC && (t)->val >= WAM_LIB_0 && (t)->val < MAX_SPRED)

#define is_userpred(t) \
  	(!(is_constraint(t) || is_libpred(t) || is_builtin(t)))
