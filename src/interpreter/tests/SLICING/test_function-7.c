// see also test_function-3.c
int foo(int a,int b){
  int c;
  //b = a;   
  c = b;        /* IN */
  return c;     /* IN */
}

void main(){
  int y,z;
  int x,x1,x2;

  x2 = z;                      /* OUT */
  x1 = x2;                     /* OUT */
  x  = x1;                     /* OUT */
  y  = x;                      /* OUT */
  z  = foo(/*OUT*/y,/*IN*/5);   /*IN*/
  return;
 _SLICE(z);
}
