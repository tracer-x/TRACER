int foo(int /*OUT*/ a){
  int b,c;
  b = a;         /* OUT */
  c = b;         /* OUT */
  return c;      /* OUT */
}

void main(){
  int y,z;
  int x,x1,x2;

  x1 = x2;               /* IN */
  x  = x1;               /* IN */
  y  = x;                /* OUT */
  z  = foo(/*OUT*/y);    /* OUT */
  return;                /* OUT */
 _SLICE(x);
}
