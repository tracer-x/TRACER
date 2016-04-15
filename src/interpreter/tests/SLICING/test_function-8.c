
int foo(int /*IN*/a){  
  int b,c;
  b = a;         /*IN*/
  c = b;         /*IN*/
  return c;      /*IN*/
}

void main(){
  int y,z;
  int x,x1,x2,x3;

  x3 = foo(/*OUT*/5);  /*OUT*/

  x2 = 300;            /*IN*/ 
  x1 = foo(/*IN*/x2);  /*IN*/ 

  x  = 666;            /*OUT*/
  y  = x;              /*OUT*/ 
  z  = foo(/*IN*/x1);  /*IN*/


  return;
 _SLICE(z);
}
