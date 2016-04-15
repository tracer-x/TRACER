//#include <stdio.h>
void main(){
  int x,y,w,z;
  int *ptr1;
  int *ptr2;

   z = 666;    /*IN*/
   w = 999;    /*OUT*/
  
   ptr1 = &y;  /*IN*/  
   ptr2 = &y;  /*IN*/
  
   *ptr2 = z;  /*IN*/
   x = *ptr1;  /*IN*/

  //  printf("%d\n",x);
  return;
  _SLICE(x);
}
