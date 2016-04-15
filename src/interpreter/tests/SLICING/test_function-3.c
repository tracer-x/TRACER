// see also test_function-7.c
int foo(int /*OUT*/a,int /*IN*/ b){
  int c;
  //b = a;   
  c = b;        /* IN */
  return c;     /* IN */
}

void main(){
  int y,z;
  int x,x1,x2;

  x2 = z;          /* IN */
  x1 = x2;         /* IN */
  x  = x1;         /* IN */
  y  = x;          /* IN */
  z  = foo(/*OUT*/y,/*IN*/y);   /* IN */  
  return;          /* OUT*/ 
 _SLICE(z);
}
