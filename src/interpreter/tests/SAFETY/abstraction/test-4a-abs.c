// SAFE
// This example is from Path Invariant (PLDI'05)

// if we run with options -convert-strict-ineq y 
// Here the abstraction is not strong enough so minmax should restart.

main(int n){
  int i, a, b;
  int TRACER_NONDET;

  if(n >=0){
  
    i=0; a=0; b=0;
    
    // Here user loop invariant
    _TRACER_abstract(a,b,i, /*(a+b==3*i),*/ (i >= 0),(i <= n));
    while (i < n){
      if (TRACER_NONDET){
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
}
