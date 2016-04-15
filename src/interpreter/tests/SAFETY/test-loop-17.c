// UNSAFE

/* This example to show that the second copy of the loop can not be
   subsumed */

void main(){

  int NONDET;
  int i,N;
  int a;
  int x;

  if (NONDET > 0) x=1; else x=2;

  while (i<N){    
    i=i+1;
  }

  _TRACER_abort(x > 1);
  return;
}
