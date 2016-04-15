// SAFE
// 5 January 2011:
// A problem with minimax algorithm where the projection of constraints before
// the second iteration of the loop (subsequently after the first refinement)
// becomes h[ptr]=9, x=ptr, yet, due to the assignment ptr=x, we need
// h[x]=9 as an invariant to infer h[ptr]=9 and exclude the counterexample in
// the next iterations. This problem results in nonterminating run.

void main(int N){

  int i;
  int a[5];
  int *x,*ptr,*y;
  int NONDET;

  _TRACER_assume(N > 0);
    
  i=0;     // NOT INVARIANT 
  *x=9;    // INVARIANT  
  *y=6;    // INVARIANT
  a[i]=5;  // INVARIANT
  
  while (i < N){  
    if (NONDET)  
      ptr = y; 
    else
      ptr = x; 
    i++;          
  }

  _TRACER_abort(*ptr !=6 && *ptr != 9);
  return;
}

