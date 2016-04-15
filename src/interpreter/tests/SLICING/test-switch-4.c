int foo(){         
  int x; 
  return x;        /*IN*/
}

void main(){
  int cmd;
  int a,b,c;
  int x;

  switch (cmd) {   /*IN*/
  case 1:          /*IN*/           
    x = foo();     /*IN*/ 
    /*IN*/ if (x) {/*IN*/ break;} 
    b=a;           /*IN*/
    c=b;           /*IN*/ 
  } 

  return;         /*OUT*/
  _SLICE(c); 
}
