void main(int A1,int B1){
  int a,b;
  int x,y;
  int *ptr;

  b = B1;       /*IN*/

  x=a;          /*IN*/
  if (a<3)      /*IN*/ 
    ptr=&y;     /*IN*/ 
  else          /*IN*/
    ptr=&x;     /*IN*/

  if (b<2)      /*IN*/
    x=a;        /*IN*/

  *ptr=20;      /*IN*/

  return;
  _SLICE(x);
}
