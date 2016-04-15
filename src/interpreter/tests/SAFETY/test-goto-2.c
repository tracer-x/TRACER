// SAFE

/* This example to show that the second copy of the loop can be
   subsumed */

// As test-loop-1.c but with goto

void main(){

  int NONDET;
  int i,N;
  int a;
  int x;
  //int i1;

  x=0;
  i=0;

  //i1=5;
  if (NONDET > 0) a=1; else a=2;

 LOOP: 
  if (i<N){
    i=i+1;
    goto LOOP;
  }
    
  _TRACER_abort(x >0);
  return;
}
