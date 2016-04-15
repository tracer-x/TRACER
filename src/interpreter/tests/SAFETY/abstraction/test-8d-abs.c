// SAFE

/* 

   This example shows that loop invariants avoid full loop unwinding
   of the two loops. Run tracer with option:
   -convert-strict-ineq y -loop-inv octagon
*/

main(int n){
  int i,j;  
  
  i=0; j=0; n=10;

  while(j < n){ 
    j++;
  }
  while (i < n){ 
    i++; 
  }

  _TRACER_abort(i>10 || j>10);

}
