// SAFE

/* 

   This example shows that loop invariants avoid full loop unwinding

   Run tracer with option:
      -convert-strict-ineq y -loop-inv octagon
*/

main(int n){
  int i;  
  
  i=0; n=10;

  while (i < n){ i++; }

  _TRACER_abort(i>10);

}
