
int a[10];
int y, z;

int foo(int c)
{
  int b;

  b = c+1;          /*IN*/

  if (a[c]>0) {     /*OUT*/ 
    y++;            /*OUT*/ 
  } else {          /*OUT*/ 
    y=y+2;          /*OUT*/ 
  }

  return b;         /*IN*/
}

int main()
{
  int x;
  int k;

  x = 5;            /*IN*/ 
  a[x]=0;           /*IN*/  

  /* The unfolder doesn't handle this ... see TODO in
     src/clpr under task for array/pointer solver
     NOTE: This problem was solved

     a[x] = foo(x);
  */

   
  a[x] = foo(/*IN*/x);   /*IN*/

  //  k = foo(/*IN*/x);  /*IN*/ 
  //  a[x] = k;          /*IN*/ 

  z = y+2;              /*OUT*/ 

  _SLICE(a);
}
