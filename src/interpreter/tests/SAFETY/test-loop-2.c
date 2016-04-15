// SAFE

/* 
   This example to show that the second copy of the loop can not be
   subsumed.
   Note: w/ wp's we can subsume the second copy
         w/ clp-prover we can subsume if we change to 
            "if (NONDET > 0) x=2; else x=1;"
*/

void main(){

  int NONDET;
  int i,N;
  int a;
  int x;

  if (NONDET > 0) x=1; else x=2;
  //if (NONDET > 0) x=2; else x=1;

  while (i<N){    
    i=i+1;
  }

  _TRACER_abort(x >2);
  return;
}
