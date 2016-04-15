// With naive formula path, there is no limit with the depth although
// we pay the price during the backward process.

// With partition our limit in depth is around 189 until we reach our
// maximum of heap size.

/* void main(){ */
/*   int i; */
/*   int N=40;  */
/*   int acc=0; */
/*   for (i=0;i< N;i++){ */
/*     acc = acc+ i; */
/*   } */

/* } */

void main(){
  int i;
  int N=50; 
  int acc0;
  int acc1,acc2,acc3,acc4,acc5;
  for (i=0;i< N;i++){
    acc0 = acc0 + acc1 + acc2 + acc3 + i;
    acc4 = acc4 + i;
    acc5 = acc5 + acc0 + acc4;
  }

}
