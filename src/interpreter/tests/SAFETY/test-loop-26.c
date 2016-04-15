// UNSAFE

/*
   This example to show with nonminmax that at the bottom of the loop
   the interpolant returned cannot be true. Otherwise, it reports
   incorrectly safe.
 */

void main(){

  int NONDET;
  int i,N;
  int a;
  int x;

  if (NONDET > 0) x=1; else x=2;

  while (i<N){    
    i=i+1;
  }

  _TRACER_abort(x == 2);
  return;
}
