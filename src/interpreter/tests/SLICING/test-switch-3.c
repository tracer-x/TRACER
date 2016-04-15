int foo(){ 
  int x; 
  return x;          /*OUT*/
}

void main(){
  int cmd;
  int a,b,c;
  int x;

  switch (cmd) {
  case 1:            /*IN*/ 
    x = foo();       /*OUT*/ 
    /*OUT*/ if (x>0) { }  
    b=a;             /*IN*/
    c=b;             /*IN*/ 
  } 
  
  return;
  _SLICE(c);
}
