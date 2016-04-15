// SAFE

/* Example to test nested propagation of return values 
   This is tricky for -z3 y */

int bar(){ return 1;}
int foo(){ return bar();}
/* int foo(){  */
/*   int tmp =bar(); */
/*   return tmp; */
/* } */



main(){
  int x;
  x = foo();
  _TRACER_abort(x !=1);
}

