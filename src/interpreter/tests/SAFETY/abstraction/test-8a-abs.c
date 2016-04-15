// SAFE

/* 
   This example shows that user abstractions can avoid loop unwinding
   tracer needs to be executed with option: 
      -convert-strict-ineq y
*/

/* 
   Note: user abstraction are tested for loop invariant if it's
   defined just before the loop.
*/

main(int n){
  int i;  
  
  i=0;n=10;

  /* abstraction is strong enough to prove safety and avoid
     loop unwinding */ 
  /*@ invariant 
    @    0 <= i <= n 
    @ variant n-i
    @*/  
  _TRACER_abstract(i,i>=0, i <= n);
  while (i < n){ i++; }

  _TRACER_abort(i>10);

}
