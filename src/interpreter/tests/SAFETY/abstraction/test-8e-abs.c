// SAFE

/* 

   Run tracer with option -convert-strict-ineq y

   This example shows limitations of invgen.
   For instance, even with -loop-inv invgen option we get the
   invariants:

   outer: [N=10, J>=0]
   inner: [N=10, I>=0, I<=10, J>=0]

   So even if after the inner loop we can propagate that 0<=i<=10 for
   the outer loop we test only as candidates n=10 and
   j>=10. Therefore, we will take the exit condition without knowledge
   about "i" and hence, unrolling cannot be avoided.

*/

main(int n){
  int i,j;  
  
  j=0; n=10;
  while(j < n){ 
    i=0;
    while (i < n){ 
      i++; 
    }    
    j++;
  }

  _TRACER_abort(i>10 || j>10);

}
