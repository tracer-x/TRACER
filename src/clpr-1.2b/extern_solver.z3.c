/* 
   This file is a wrapper for the Z3 SMT solver that implements the
   interface described in extern_solver.h
*/

#include<stdlib.h>
#include<z3.h>
#include"extern_solver.h"

#define Z3_INT_LIMIT 2147483647

Z3_context mk_context_custom(Z3_config cfg, Z3_error_handler err){
  Z3_context ctx;    
  Z3_set_param_value(cfg, "MODEL", "true");
  ctx = Z3_mk_context(cfg);
#ifdef TRACING
  Z3_trace_to_stderr(ctx);
#endif
  Z3_set_error_handler(ctx, err);    
  return ctx;
}

void error_handler(Z3_error_code e) 
{
  printf("Error code: %d\n", e);
  fprintf(stderr,"BUG: incorrect use of Z3.\n");
  exit(1);

}

SOLVER_CONTEXT mk_solver_store(){
  Z3_config  cfg;
  Z3_context ctx;
  cfg = Z3_mk_config();
  ctx = mk_context_custom(cfg, error_handler);
  Z3_del_config(cfg);
  return (SOLVER_CONTEXT) ctx;
}

void del_solver_store(SOLVER_CONTEXT ctx){
  Z3_context z3ctx = (Z3_context) ctx;
  Z3_del_context(z3ctx);
}

Z3_ast mk_var(Z3_context ctx, const char * name, Z3_sort ty) 
{
    Z3_symbol   s  = Z3_mk_string_symbol(ctx, name);
    return Z3_mk_const(ctx, s, ty);
}

SOLVER_TERM mk_int_var(SOLVER_CONTEXT ctx, const char * name){
  Z3_context z3ctx = (Z3_context) ctx;
  Z3_sort ty = Z3_mk_int_sort(z3ctx);
  return (SOLVER_TERM) mk_var(z3ctx, name, ty);
}

SOLVER_TERM mk_int(SOLVER_CONTEXT ctx, int v){
  if (v > Z3_INT_LIMIT){ fprintf(stderr,"BUG: Z3 overflow of 32int.\n"); exit(1);}
  Z3_context z3ctx = (Z3_context) ctx;
  Z3_sort ty = Z3_mk_int_sort(z3ctx);
  return (SOLVER_TERM) Z3_mk_int(z3ctx, v, ty);
  //return (SOLVER_TERM) Z3_mk_int64(z3ctx, v, ty);
}

// Internal function
Z3_ast mk_bool_var(Z3_context ctx, const char * name) 
{
    Z3_sort ty = Z3_mk_bool_sort(ctx);
    return mk_var(ctx, name, ty);
}

/* SOLVER_TERM mk_real_var(SOLVER_CONTEXT ctx, const char * name){ */
/*   Z3_context z3ctx = (Z3_context) ctx; */
/*   Z3_sort ty = Z3_mk_real_sort(z3ctx); */
/*   return (SOLVER_TERM) mk_var(z3ctx, name, ty); */
/* } */

/* SOLVER_TERM mk_real(SOLVER_CONTEXT ctx, int num, int den){ */
/*   Z3_context z3ctx = (Z3_context) ctx; */
/*   Z3_sort ty = Z3_mk_real_sort(z3ctx); */  
/*   return (SOLVER_TERM) Z3_mk_real(z3ctx, num, den); */
/* } */

SOLVER_TERM mk_array_var(SOLVER_CONTEXT ctx, const char * name){   
  Z3_context z3ctx = (Z3_context) ctx;
  // Indexes are integers
  Z3_sort tind = Z3_mk_int_sort(z3ctx);
  // Values are integers (for the moment)
  Z3_sort tval = Z3_mk_int_sort(z3ctx);
  // Declaration of array
  Z3_sort ty   = Z3_mk_array_sort(z3ctx, tind, tval);
  return (SOLVER_TERM) mk_var(z3ctx, name, ty);
}

SOLVER_TERM  mk_lt(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2){  
  return (SOLVER_TERM) Z3_mk_lt((Z3_context) ctx, (Z3_ast) expr1, (Z3_ast) expr2);
}

SOLVER_TERM  mk_le(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2){
  return (SOLVER_TERM) Z3_mk_le((Z3_context) ctx, (Z3_ast) expr1, (Z3_ast) expr2);
}

SOLVER_TERM  mk_gt(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2){
  return (SOLVER_TERM) Z3_mk_gt((Z3_context) ctx, (Z3_ast) expr1, (Z3_ast) expr2);
}

SOLVER_TERM  mk_ge(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2){
  return (SOLVER_TERM) Z3_mk_ge((Z3_context) ctx, (Z3_ast) expr1, (Z3_ast) expr2);
}

SOLVER_TERM  mk_eq(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2){
  return (SOLVER_TERM) Z3_mk_eq((Z3_context) ctx, (Z3_ast) expr1, (Z3_ast) expr2);
}

SOLVER_TERM  mk_not(SOLVER_CONTEXT ctx, SOLVER_TERM expr){
  return (SOLVER_TERM) Z3_mk_not((Z3_context) ctx, (Z3_ast) expr);
}

SOLVER_TERM  mk_true(SOLVER_CONTEXT ctx){
  return (SOLVER_TERM) Z3_mk_true((Z3_context) ctx);
}

SOLVER_TERM  mk_false(SOLVER_CONTEXT ctx){
  return (SOLVER_TERM) Z3_mk_false((Z3_context) ctx);
}

SOLVER_TERM  mk_add(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2){
  Z3_ast args[2];
  args[0] = (Z3_ast) expr1;
  args[1] = (Z3_ast) expr2;
  return (SOLVER_TERM) Z3_mk_add((Z3_context) ctx, 2, args);
}

SOLVER_TERM  mk_mul(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2){
  Z3_ast args[2];
  args[0] = (Z3_ast) expr1;
  args[1] = (Z3_ast) expr2;
  return (SOLVER_TERM) Z3_mk_mul((Z3_context) ctx, 2, args);
}

SOLVER_TERM  mk_sub(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2){
  Z3_ast args[2];
  args[0] = (Z3_ast) expr1;
  args[1] = (Z3_ast) expr2;
  return (SOLVER_TERM) Z3_mk_sub((Z3_context) ctx, 2, args);
}

SOLVER_TERM  mk_unary_minus(SOLVER_CONTEXT ctx, SOLVER_TERM expr){
  return (SOLVER_TERM) Z3_mk_unary_minus((Z3_context) ctx, (Z3_ast) expr);
}

SOLVER_TERM  mk_div(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2){
  return (SOLVER_TERM) Z3_mk_div((Z3_context) ctx, (Z3_ast) expr1, (Z3_ast) expr2);
}

/* int is_eq(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2){ */
/*   return  (int) Z3_is_eq_ast((Z3_context) ctx, (Z3_ast) expr1, (Z3_ast) expr2); */
/* } */

SOLVER_TERM mk_select(SOLVER_CONTEXT ctx, SOLVER_TERM array, SOLVER_TERM index){
  return (SOLVER_TERM) Z3_mk_select((Z3_context) ctx, 
				    (Z3_ast) array, 
				    (Z3_ast) index);
}

SOLVER_TERM mk_store(SOLVER_CONTEXT ctx, 
		     SOLVER_TERM array, SOLVER_TERM index, SOLVER_TERM val){
  return (SOLVER_TERM) Z3_mk_store((Z3_context) ctx, 
				   (Z3_ast) array, 
				   (Z3_ast) index, 
				   (Z3_ast) val);
}

char * term_to_string(SOLVER_CONTEXT ctx, SOLVER_TERM term){
  return Z3_ast_to_string((Z3_context) ctx, (Z3_ast) term);
}

void assert_cnstr(SOLVER_CONTEXT ctx, SOLVER_TERM f){
  Z3_assert_cnstr((Z3_context) ctx, (Z3_ast) f);
  return;
}

int check(SOLVER_CONTEXT ctx){

  Z3_lbool Z3_result = Z3_check((Z3_context)ctx);
  int result;

  switch (Z3_result) {
  case Z3_L_FALSE:
    result = SOLVER_ANS_FALSE;
    // printf("unsat\n");
    break;
  case Z3_L_UNDEF:
    result = SOLVER_ANS_UNDEF;
    //printf("unknown\n");
    break;
  case Z3_L_TRUE:
    result = SOLVER_ANS_TRUE;
    //printf("sat\n");
    break;
  }
  return result;
}

int find_core_assumption_index(Z3_context ctx, Z3_ast * assumptions, unsigned n, Z3_ast p){

  int i;

  for(i=0;i<n;i++){
    if ( Z3_is_eq_ast(ctx,assumptions[i],p) )
      return i;
  }
  
  fprintf(stderr,"BUG: find_core_assumption_index. \n");
  fprintf(stderr," %s not found\n",Z3_ast_to_string(ctx, p));
  for(i=0;i<n;i++){
    fprintf(stderr," %s | ",Z3_ast_to_string(ctx,assumptions[i]));
  }
  fprintf(stderr,"\n");
  exit(1);
}

int unsat_core(/*in*/
	       SOLVER_CONTEXT ctx, SOLVER_TERM * cs, unsigned cs_size, 
	       /*out*/
	       unsigned** bitvector_core){
  /*
   Suppose the formula x=0 and y=2 and x>2.

   Then, we add a positive literal {p1,p2,p3} to each clause as follows:
      (x=0 or p1) and (y=2 or p2) and (x>2 or p3)
   but assuming that p1=0, p2=0, and p3=0 to keep unchanged the formula.

   Then, we run the solver. In this case, the conflict arises due to
   either:  

     a)   x=0 is true  and x>2 is false or
     b)   x=0 is false and x>2 is true 

   How we can extract this information?

   Case a)
          T     F         T     F         F     T
        (x=0 or p1) and (y=2 or p2) and (x>2 or p3)
        The conflict literal is p3 because p3=F
   Case b)
          F     T         T      F        T      F
        (x=0 or p1) and (y=2 or p2) and (x>2 or p3)
        The conflict literal is p1 because p1=F

   Then, the solver will add the clause p1 or p3 which means that the
   unsatisfiable core is the 1st and 3rd constraint from the original
   formula.
   */  

  Z3_ast * assumptions;
  Z3_ast p;
  static char v[50];
  Z3_ast g[2];
  int i, ret, index;
  Z3_ast   proof;
  Z3_model m      = 0;
  Z3_lbool result;
  Z3_ast * cs_core;
  unsigned cs_core_size;
  unsigned * b;
  int bindex;

  assumptions = (Z3_ast *) malloc(sizeof(Z3_ast) * cs_size);
  if (assumptions == NULL){
    fprintf(stderr,"No more memory! \n");
    exit(1);    
  }

  for(i = 0; i < cs_size; i++){
    sprintf(v,"p_%d",i);
    p = mk_bool_var((Z3_context) ctx,v);
    g[0]  = cs[i];
    g[1]  = p;
    Z3_assert_cnstr((Z3_context) ctx, Z3_mk_or((Z3_context)ctx, 2, g)); // c_i or p_i
    assumptions[i] = Z3_mk_not((Z3_context) ctx, p);                    // not p_i
  }
 
  // (not p_1),...,(not p_n) |- (c_1 OR p_1) AND ... AND (c_n OR p_n)
  cs_core = (Z3_ast *) calloc(cs_size,sizeof(Z3_ast)); 
  cs_core_size = cs_size;
  
  result = Z3_check_assumptions((Z3_context) ctx, cs_size, assumptions, 
				&m, &proof, &cs_core_size, cs_core);


  // all elements are initialized to 0
  b = (unsigned *) calloc(cs_size, sizeof(unsigned));  
  if (b == NULL){
    fprintf(stderr,"No more memory! \n");
    exit(1);    
  }
  
  // printf("Size of the unsat core %d\n",cs_core_size);
  switch (result) {
  case Z3_L_FALSE:
    for (i = 0; i < cs_core_size; ++i){
      bindex =find_core_assumption_index((Z3_context) ctx, assumptions, 
					 cs_size, cs_core[i]);
      b[bindex] = (unsigned) 1u;
    }	    
    // printf("unsat\n");
    ret = SOLVER_ANS_FALSE;
    break;
  case Z3_L_UNDEF:
    // printf("undefined\n");
    ret = SOLVER_ANS_UNDEF;
    break;
  case Z3_L_TRUE:
    // printf("sat\n");
    ret = SOLVER_ANS_TRUE;
    break;
  }
  if (m) {
    Z3_del_model(ctx, m);
  }    

  *bitvector_core = b;
  return ret;
}

void add_choice_point(SOLVER_CONTEXT ctx){
  Z3_push((Z3_context) ctx);
  return;
}

void backtrack_last_choice_point(SOLVER_CONTEXT ctx){
  Z3_pop((Z3_context) ctx, 1);
  return;
}

/** 
    Pretty printer operations 
*/

void display_symbol(Z3_context c, FILE * out, Z3_symbol s) 
{
  switch (Z3_get_symbol_kind(c, s)) {
  case Z3_INT_SYMBOL:
    fprintf(out, "#%d", Z3_get_symbol_int(c, s));
    break;
    case Z3_STRING_SYMBOL:
      fprintf(out, "%s", Z3_get_symbol_string(c, s));
      break;
  default:
    fprintf(out,"Z3: unknown symbol \n");
    break;
  }
}

void display_sort(Z3_context c, FILE * out, Z3_sort ty) 
{
  switch (Z3_get_sort_kind(c, ty)) {
  case Z3_UNINTERPRETED_SORT:
    display_symbol(c, out, Z3_get_sort_name(c, ty));
    break;
    /*     case Z3_BOOL_SORT: */
    /*         fprintf(out, "bool"); */
    /*         break; */
  case Z3_INT_SORT:
    fprintf(out, "int");
    break;
  case Z3_REAL_SORT:
    fprintf(out, "real");
    break;
    /*     case Z3_BV_SORT: */
    /*         fprintf(out, "bv%d", Z3_get_bv_sort_size(c, ty)); */
    /*         break; */
  case Z3_ARRAY_SORT: 
    fprintf(out, "[");
    display_sort(c, out, Z3_get_array_sort_domain(c, ty));
    fprintf(out, "->");
    display_sort(c, out, Z3_get_array_sort_range(c, ty));
    fprintf(out, "]");
    break;
    /*     case Z3_DATATYPE_SORT: */
    /* 		if (Z3_get_datatype_sort_num_constructors(c, ty) != 1)  */
    /* 		{ */
    /* 			fprintf(out, "%s", Z3_sort_to_string(c,ty)); */
    /* 			break; */
    /* 		} */
    /* 		{ */
    /*         unsigned num_fields = Z3_get_tuple_sort_num_fields(c, ty); */
    /*         unsigned i; */
    /*         fprintf(out, "("); */
    /*         for (i = 0; i < num_fields; i++) { */
    /*             Z3_func_decl field = Z3_get_tuple_sort_field_decl(c, ty, i); */
    /*             if (i > 0) { */
    /*                 fprintf(out, ", "); */
    /*             } */
    /*             display_sort(c, out, Z3_get_range(c, field)); */
    /*         } */
    /*         fprintf(out, ")"); */
    /*         break; */
    /* 		} */
  default:
    fprintf(out, "unknown[");
    display_symbol(c, out, Z3_get_sort_name(c, ty));
    fprintf(out, "]");
    break;
  }
}

void display_solver_term(SOLVER_CONTEXT ctx, FILE * out, SOLVER_TERM term){

  Z3_context c = (Z3_context) ctx;
  Z3_ast     v = (Z3_ast) term;

  switch (Z3_get_ast_kind(c, v)) {
  case Z3_NUMERAL_AST: {
    Z3_sort t;
    fprintf(out, "%s", Z3_get_numeral_string(c, v));
    t = Z3_get_sort(c, v);
    fprintf(out, ":");
    display_sort(c, out, t);
    break;
  }
  case Z3_APP_AST: {
    unsigned i;
    Z3_app app = Z3_to_app(c, v);
    unsigned num_fields = Z3_get_app_num_args(c, app);
    Z3_func_decl d = Z3_get_app_decl(c, app);
    fprintf(out, "%s", Z3_func_decl_to_string(c, d));
    if (num_fields > 0) {
      fprintf(out, "[");
      for (i = 0; i < num_fields; i++) {
	if (i > 0) {
	  fprintf(out, ", ");
	}
	display_solver_term((SOLVER_CONTEXT) c, 
			    out, 
			    (SOLVER_TERM) Z3_get_app_arg(c, app, i));
      }
      fprintf(out, "]");
    }
    break;
  }
  case Z3_QUANTIFIER_AST: {
    fprintf(out, "quantifier");
    ;
  }
  default:
    fprintf(out, "#unknown");
  }
}

void display_function_interpretations(Z3_context c, FILE * out, Z3_model m) 
{
  unsigned num_functions, i;
  
  fprintf(out, "function interpretations:\n");
    
  num_functions = Z3_get_model_num_funcs(c, m);
  for (i = 0; i < num_functions; i++) {
    Z3_func_decl fdecl;
    Z3_symbol name;
    Z3_ast func_else;
    unsigned num_entries, j;
        
    fdecl = Z3_get_model_func_decl(c, m, i);
    name = Z3_get_decl_name(c, fdecl);
    display_symbol(c, out, name);
    fprintf(out, " = {");
    num_entries = Z3_get_model_func_num_entries(c, m, i);
    for (j = 0; j < num_entries; j++) {
      unsigned num_args, k;
      if (j > 0) {
	fprintf(out, ", ");
      }
      num_args = Z3_get_model_func_entry_num_args(c, m, i, j);
      fprintf(out, "(");
      for (k = 0; k < num_args; k++) {
	if (k > 0) {
	  fprintf(out, ", ");
	}
	display_solver_term((SOLVER_CONTEXT)c, out,(SOLVER_TERM)Z3_get_model_func_entry_arg(c, m, i, j, k));
      }
      fprintf(out, "|->");
      display_solver_term((SOLVER_CONTEXT)c, out,(SOLVER_TERM)Z3_get_model_func_entry_value(c, m, i, j));
      fprintf(out, ")");
    }
    if (num_entries > 0) {
      fprintf(out, ", ");
    }
    fprintf(out, "(else|->");
    func_else = Z3_get_model_func_else(c, m, i);
    display_solver_term((SOLVER_CONTEXT)c, out, (SOLVER_TERM)func_else);
    fprintf(out, ")}\n");
  }
}

void display_model(Z3_context c, FILE * out, Z3_model m){  
  unsigned num_constants;
  unsigned i;

  num_constants = Z3_get_model_num_constants(c, m);
  for (i = 0; i < num_constants; i++) {
    Z3_symbol name;
    Z3_func_decl cnst = Z3_get_model_constant(c, m, i);
    Z3_ast a, v;
    Z3_bool ok;
    name = Z3_get_decl_name(c, cnst);
    display_symbol(c, out, name);
    fprintf(out, " = ");
    a = Z3_mk_app(c, cnst, 0, 0);
    v = a;
    ok = Z3_eval(c, m, a, &v);
    display_solver_term((SOLVER_CONTEXT)c, out, (SOLVER_TERM)v);
    fprintf(out, "\n");
  }

  //  display_function_interpretations(c, out, m);

}

void check_and_display_model(SOLVER_CONTEXT c, FILE *out)
{
  Z3_context ctx = (Z3_context) c;
  Z3_model m      = 0;
  Z3_lbool result = Z3_check_and_get_model(ctx, &m);
  switch (result) {
  case Z3_L_FALSE:
    fprintf(out, "unsat\n");
    break;
  case Z3_L_UNDEF:
    fprintf(out, "unknown\n");
    fprintf(out, "potential model:\n");
    display_model(ctx, out, m);
    break;
  case Z3_L_TRUE:
    fprintf(out, "sat\n");
    display_model(ctx, out, m);
    break;
    }
  if (m) {
    Z3_del_model(ctx, m);
  }
  return;
}



