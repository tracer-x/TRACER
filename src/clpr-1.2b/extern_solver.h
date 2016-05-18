/*
    Generic interface for plugging external solvers in CLP(R) 
*/

#include<stdio.h>
#include<stdarg.h>
#include<memory.h>

#define SOLVER_ANS_TRUE  (1)
#define SOLVER_ANS_FALSE (0)
#define SOLVER_ANS_UNDEF (2)

/* To represent a logical context */
typedef void * SOLVER_CONTEXT;  
/* To represent a term or expression in the solver */
typedef void * SOLVER_TERM;    

/*
   Creation and destruction of logical contexts
*/

// Create a logical context.
SOLVER_CONTEXT mk_solver_store();

// Delete a logical context
void del_solver_store(SOLVER_CONTEXT ctx);


/*
  Creation of variables and constants
*/

//  Create an integer variable using the given name
SOLVER_TERM mk_int_var(SOLVER_CONTEXT ctx, const char * name); 

// Create a integer node using a C int
SOLVER_TERM mk_int(SOLVER_CONTEXT ctx, int v); 

/* // Create a real variable using the given name */
/* SOLVER_TERM mk_real_var(SOLVER_CONTEXT ctx, const char * name);  */

/* // Create a real node using a C double */
/* SOLVER_TERM mk_real(SOLVER_CONTEXT ctx, double val);  */

// Create an array variable using the given name
SOLVER_TERM mk_array_var(SOLVER_CONTEXT ctx, const char * name); 

/*
   Creation of logical and arithmetic operators
*/

// Create less than
SOLVER_TERM  mk_lt(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2);
// Create less than or equal to
SOLVER_TERM  mk_le(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2);
// Create greater than
SOLVER_TERM  mk_gt(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2);
// Create greater than or equal to
SOLVER_TERM  mk_ge(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2);
// Create an expression expr1=expr2
SOLVER_TERM  mk_eq(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2);
// Create an expression not(expr)
SOLVER_TERM  mk_not(SOLVER_CONTEXT ctx, SOLVER_TERM expr);
// Create an expression true
SOLVER_TERM  mk_true(SOLVER_CONTEXT ctx);
// Create an expression false
SOLVER_TERM  mk_false(SOLVER_CONTEXT ctx);
// Create an expression expr1 + expr2
SOLVER_TERM  mk_add(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2);
// Create an expression expr1 * expr2
SOLVER_TERM  mk_mul(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2);
// Create an expression expr1 - expr2
SOLVER_TERM  mk_sub(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2);
// Create an expression -expr
SOLVER_TERM  mk_unary_minus(SOLVER_CONTEXT ctx, SOLVER_TERM expr);
// Create an expression expr1 div expr2
SOLVER_TERM  mk_div(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2);
// Compare expressions
//int is_eq(SOLVER_CONTEXT ctx, SOLVER_TERM expr1, SOLVER_TERM expr2);

/*
   Creation of array operations
*/

// Array read
SOLVER_TERM mk_select(SOLVER_CONTEXT ctx, SOLVER_TERM array, SOLVER_TERM index);

// Array update
SOLVER_TERM mk_store(SOLVER_CONTEXT ctx, SOLVER_TERM array, SOLVER_TERM index, SOLVER_TERM val);

/* Convert a term into a string */
char * term_to_string(SOLVER_CONTEXT ctx, SOLVER_TERM term);

/*
   Assert constraint into solver context
*/
void assert_cnstr(SOLVER_CONTEXT ctx, SOLVER_TERM f);

/* 
   Check whether the logical context is satisfiable.
   If false then it returns 0
   Otherwise it returns > 0
*/
int  check(SOLVER_CONTEXT ctx);


/*
   Extract the unsat core of the logical context

*/
int unsat_core(SOLVER_CONTEXT , SOLVER_TERM *, unsigned, unsigned **);

/*
   Create a backtracking point
*/
void add_choice_point(SOLVER_CONTEXT ctx);

/*
   Backtrack
*/
void backtrack_last_choice_point(SOLVER_CONTEXT ctx);


/** 
    Pretty printer operations 
*/

/*
   Pretty printer for a model
*/
void display_solver_term(SOLVER_CONTEXT, FILE *out, SOLVER_TERM v);

void check_and_display_model(SOLVER_CONTEXT c, FILE * out); 



