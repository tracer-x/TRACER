/***************************************************************
 *  CLP(R)                                                     *
 *  (c) Copyright International Business Machines Corporation  *
 *  (1989) 1991, 1992 All Rights Reserved                      *
 *  Version: 1.2                                               *
 *  File: lib.h                                                *
 ***************************************************************/

typedef struct {
	int (*func) ();
	int arity;
	char *str;
	int val;
} SPNODE;

extern int do_history();
extern int do_history1();
extern int do_true();
extern int do_tell();
extern int do_telling();
extern int do_told();
extern int do_see();
extern int do_seeing();
extern int do_seen();
extern int do_consult();
extern int do_reconsult();
extern int do_listing();
extern int do_listing1();
extern int do_clisting();
extern int do_clisting1();
extern int do_asserta();
extern int do_assertz();
extern int do_fasserta();
extern int do_fassertz();
extern int do_retractall();
extern int do_nl();
extern int do_flush();
extern int do_oracle();
extern int do_pipe();
extern int do_fork();
extern int do_edit();
extern int do_more();
extern int do_halt();
extern int do_abort();
extern int do_implicit();
extern int do_no_implicit();
extern int do_partial_implicit();
extern int do_sh();
extern int do_csh();
extern int do_nonground();
extern int do_ground();
extern int do_nonvar();
extern int do_var();
extern int do_univ();
extern int do_occurs();
extern int do_eqeq();
extern int do_atom();
extern int do_atomic();
extern int do_functor1();
extern int do_arithmetic();
extern int do_rand();
extern int do_srand();
extern int do_nl();
extern int do_dynamic();
extern int do_op3();
extern int do_prot();
extern int do_hide();
extern int do_warning();
extern int do_codegen_debug();
extern int do_codegen_nodebug();
extern int do_spy();
extern int do_nospy();
extern int do_spy2();
extern int do_nospy2();
extern int do_trace();
extern int do_notrace();
extern int do_clam_trace();
extern int do_clam_notrace();
extern int do_debugging();
extern int do_floor();

extern int do_ztime();
extern int do_ctime();
extern int do_compile();
extern int do_e_stats();
extern int do_s_stats();
extern int do_stats();
extern int do_dump_tableaus();

extern int do_dump3();
extern int do_dump2();
extern int do_functor3();
extern int do_arg();
extern int do_replace_arg();

extern int do_asm_code_1();
extern int do_asm_code_2();
extern int do_asm_code_3();
extern int do_asm_code_4();
extern int do_asm_label();
extern int do_asm_list();
extern int do_asm_call();
extern int do_asm_resolve();

extern int do_style_check();
extern int do_clear_style();
extern int do_counter_value();
extern int do_set_counter();
extern int do_add_counter();
extern int do_atom_printf();
extern int do_new_constant();
extern int do_retractoneall();
extern int do_get0();
extern int do_peek();
extern int do_unget0();

extern int do_lexlt(int *, int *);
extern int do_concat(int *, int *, int *);

extern int do_unsafe_tell();  
extern int do_unsafe_see();  
extern int do_tell_append();  

extern int do_diagnostic();
extern int do_tablez();
extern int do_tablea();
extern int do_set_nonlinear_flag();
extern int do_consult_nonlinear_flag();
extern int do_set_cs_mark();
extern int do_pop_cs_mark();

/*---------------------------------------------------------------------------*/
/* For printf that always outputs to stdout                                  */
/*---------------------------------------------------------------------------*/
extern int do_stdout_printf();
