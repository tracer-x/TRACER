// Program transformation

// Goal: for each "return_type f(arg_type a1,..., arg_type an)" do
//               void foo(void)

// 1) All local variables of main are lifted to global variables
// 2) All formal parameters are lifted to global variables
//    Do renaming of actual parameters
// 3) All return variables are lifted to global variables
//    Do proper renaming. This renaming is tricky since it must traverse
//    all the callee functions until no more callee and then replace the
//    return variable with the corresponding global variable.


/*  
ORIGINAL PROGRAM

int foo(int y1){
  int z;
  if (y1>0) {
   z = 3;
  }
  else {
    y1 = 1;
  }
  return y1;
}

int bar(int a){
  return foo(a);
}

main(int n)
{

  int x,y; 

  if (x>0) {
    n = 2;  
  }
  else {
    x = 0; 
  }
  
  y= bar(n);
  _TRACER_abort(x+y<=0);
}
*/

/*  TRANSFORMED PROGRAM */
int x,y;  
int bar_formal_arg_1; 
int bar_return_arg; 
int foo_formal_arg_1; 
int foo_return_arg; 

foo(){
  int z;
  if (bar_formal_arg_1>0) {
   z = 3;
  }
  else {
    bar_formal_arg_1 = 1;
  }
  y = bar_formal_arg_1;
  return;
}

bar(){
  foo();
}

main()
{
  if (x>0) {
    bar_formal_arg_1 = 2;  
  }
  else {
    x = 0; 
  }
  
  bar();
  _TRACER_abort(x+y<=0);
}
