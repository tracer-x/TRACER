// SAFE

/* This example to show that the second copy of the loop can not be
   subsumed */

// As test-loop-2.c but with goto

void main(){

  int NONDET;
  int i,N;
  int a;
  int x;

  if (NONDET > 0) x=1; else x=2;

 LOOP:
  if (i<N){    
    i=i+1;
    goto LOOP;
  }
  
  _TRACER_abort(x >2);
  return;
}
