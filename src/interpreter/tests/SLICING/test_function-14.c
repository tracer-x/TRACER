// This examples is to test function calls between functions with
// different set of variables.

int foo(int n){
  int i   = 1;      /*IN*/
  int sum = 0;      /*IN*/
  int product = 1;  /*OUT*/
  int z = sum;      /*OUT*/
  
  if (i<=n){                                   /*IN*/  // OUT if control opt. 
    z = bar(/*IN*/sum,/*OUT*/product,/*IN*/i); /*IN*/
  }
  return z;                                    /*IN*/
}

int bar(int /*IN*/sum, int /*OUT*/ product, int /*IN*/i){
  sum     = sum + i;              /*IN*/
  product = product * i;          /*OUT*/
  i       = i + 1;                /*OUT*/ 
  return sum;                     /*IN*/
}

int main(){
  int x,y,z;
 
  if (y > 0)                           /*IN*/
    y = y + 1;                         /*IN*/ 
  else{                                /*IN*/
    y = foo(/*OUT*/y) - 1;             /*OUT*/
    x = 4;                             /*IN*/
    y = foo(/*IN*/ /*OUT if control opt*/x) + 5;  /*IN*/
  }
  
  z = x;         /*OUT*/
  return z ;     /*OUT*/
  _SLICE(x,y); 
}
