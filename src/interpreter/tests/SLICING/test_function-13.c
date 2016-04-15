int foo(int /*IN*/a,int /*IN*/b,int /*IN*/c){
  b = a+b+c;     /* IN */
  c = b;         /* IN */
  return c;      /* IN */
}

void main(){
  int y,y1,y2;
  int x,x1,x2;
  int z;

  y1 = x2;            /* IN  */
  x  = x1;            /* IN  */
  y  = x;             /* IN  */
  z  = foo(/*IN*/y,/*IN*/y1,/*IN*/y2);  /* IN  */
  return;             /* OUT */
 _SLICE(z);
}
