// SAFE
//
// As test-4-abs.c but without user abstractions
// Instead we rely on the user to run with options:
// -convert-strict-ineq y -loop-inv invgen
//
// Note that if we run with octagons we cannot prove safety since the
// invariant involves more than two variables.


main(int n){
  int i, a, b;
  int TRACER_NONDET;

  if(n >=0){
  
    i=0; a=0; b=0;
    
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
