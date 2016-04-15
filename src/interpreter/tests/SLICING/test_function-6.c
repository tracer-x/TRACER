// see also test_function-1.c
int foo(int a){
  int b,c;         /* z */       /* x,z */
  c = b;           /* IN */      /* IN */ 
  return c;        /* IN */      /* IN */ 
}

void main(){
  int y,z;
  int x,x1,x2;

  x1 = x2;            /* OUT */     /* IN */ 
  x  = x1;            /* OUT */     /* IN */  
  y  = x;             /* OUT */     /* OUT */ 
  z  = foo(/*OUT*/y); /* IN */      /* IN*/ 
  return;
  //_SLICE(z);
  _SLICE(x,z);
}
