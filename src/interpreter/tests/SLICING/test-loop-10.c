/* This example to show that the second copy of the loop cannot be
   subsumed */

/* This example shows that the current implementation of the control
   opt is incorrect! */

int main(){

  int non_det;
  int i,n;
  int a;
  int x,z;

  x=0;         /*OUT*/
  i=0;         /*IN*/


  if /*IN*/ (non_det > 0)  /*OUT if control opt*/ 
    a=1; /*IN*/            /*OUT if control opt */ 
  else   /*IN*/            /*OUT if control opt */ 
    a=2; /*IN*/            /*OUT if control opt*/

  while (i<n){ /*IN*/
    i=i+1;     /*IN*/
  }

  /*If the following code is commented then the interpolant propagated
    back is true so the second copy of the loop is subsumed.*/

  if (a > 1) /*IN*/        /* OUT if control opt */
    z = 0;   /*IN*/
  else       /*IN*/        /* OUT if control opt */
    z = i;   /*IN*/

  return z;
  _SLICE("$ret");
}
