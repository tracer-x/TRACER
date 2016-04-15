// From the "Path-Invariants" paper

/*
  BLAST and ARMC can prove safety if clp solver is used. The reason is
  that Simplify can only infer interpolants that involve at most two
  variables. In this example we need an interpolant that involves a,b,
  and n.

  TRACER minmax cannot prove safety because we need to test more than
  one constraints to be invariant. Thus, it runs forever.

  If TRACER minmax traverses the tree from rigth-to-left (by default
  it does left-to-right) then it reports program is unsafe. This is a
  FALSE NEGATIVE if i and n are declared as integers due to the
  approximation of integer constraints by using real constraints.  The
  error location is encountered with the constraints:

  nearest abstraction point: n>0,b=1,a=2,i=1
  from that point to error : a+b>3*n, i>=n.

  The conjunction of these two formulas is satisfiable in the real but
  not in the integer domain due to n:

   i = 1.000000
   a = 2.000000
   b = 1.000000
   n < 1.000000
   0 < n

  BLAST and ARMC ALWAYS do the following transformations:
   x < y --> x+1 =< y
   x > y --> x >= y+1
 
  Therefore, if i and n are declared as float both systems are
  UNSOUND!.

*/
 
main(){
  int i, n;
  int a, b;
  int TRACER_NONDET;

  //_TRACER_assume(n >= 0);
  i=0; 
  a=0;
  b=0;
  while (i < n){
    if (TRACER_NONDET>0){     	
      a=a+1;
      b=b+2;
      }
    else{
      a=a+2;
      b=b+1;
    }
    i++;
  }
  _TRACER_abort(a+b != 3*n); 
}

// Candidates     : {b=0,a=0,i=0, n >=0}
// Loop invariant : {n >=0}
// Restart: locked  {i=1,a=1,b=1} 

// Candidates     : {b=0,a=0,i=0, n >=0} and
//                  {b=2,a=1,i=1, n >=1} 
// Restart: locked  {i=2,a=2,b=4} 
// ...
