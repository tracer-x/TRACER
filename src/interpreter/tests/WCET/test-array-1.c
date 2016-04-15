//#include <stdio.h>
int  a[3];

void main(){

  int *x;
  int z;

  a[0] = 100;
  a[1] = 200;
  a[2] = 300;
  x = &(a[0]); // a;
  z = (*x++);
  return;
  
}
