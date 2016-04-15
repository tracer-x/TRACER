// SAFE

/*
 This program is the same than test-loop-18.c However, this version
 terminates because the projection returns the invariant required. The
 difference is that the order in the definitions of ptr and x
 changes. Therefore, we get the invariant constraint h[x]=9
*/

extern int unknown();

void main(int N){
  
  int i;
  int a[5];
  int *ptr,*x,*y;
  int NONDET;

  _TRACER_assume(N > 0);

  i=0;     // NOT INVARIANT 
  *x=9;    // INVARIANT  
  *y=6;    // INVARIANT
  a[i]=5;  // INVARIANT

  while (i < N){  
    if (unknown())
      ptr = y;   
    else
      ptr = x;       
    i++;          
  }

  _TRACER_abort(*ptr !=6 && *ptr != 9);
  return;
}

