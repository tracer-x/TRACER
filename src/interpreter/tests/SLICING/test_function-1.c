// see also test_function-6.c
int foo(int /*IN*/ a){
  int b,c;
  b = a;        /* IN */
  c = b;        /* IN */
  return c;     /* IN */
}

void main(){
  int y,z;
  int x,x1,x2;

  x1 = x2;             /* IN */
  x  = x1;             /* IN */
  y  = x;              /* IN */
  z  = foo(/*IN*/y);   /* IN */
  return;        /* OUT*/        
 _SLICE(z);
}
