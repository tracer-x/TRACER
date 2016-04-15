/* This example to show that the second copy of the loop can be
   subsumed */

// number of states if second copy is subsumed 21 (check graph!)

int main(){

  int NON_DET;
  int i,N;
  int a;
  int x;
  //int i1;

  x=0;         /*OUT*/
  i=0;         /*IN*/

  //i1=5;

  if /*OUT*/ (NON_DET > 0) a=1; /*OUT*/ else a=2; /*OUT*/

  while (i<N){ /*IN*/
    i=i+1;     /*IN*/
  }

  return i;
  _SLICE(i);
}
