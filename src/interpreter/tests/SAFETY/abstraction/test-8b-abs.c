// SAFE

/* 

   This example shows that user abstraction is too weak and cannot
   avoid loop unwinding

   Run tracer with option:
      -convert-strict-inequality y
*/

/* 
   Note: user abstraction are tested for loop invariant if it's
   defined just before the loop.
*/

main(int n){
  int i;  
  
  i=0;n=10;

  /*abstraction is too weak so minmax restarts */
  _TRACER_abstract(i,i>=0);
  while (i < n){ i++; }

  _TRACER_abort(i>10);

}
