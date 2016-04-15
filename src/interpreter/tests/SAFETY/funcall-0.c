// SAFE

// #include "stdio.h"

// Example provided by Vijay to make sure that the execution of
// function calls is correct.

// NOTE: in C the value of x should be 2. Since the compilation of
// this kind of sentences can be very complicated due to the precedence
// between functions, expressions, and variables we compile as follows:
// 1) call first to functions calls
// 2) evaluate from left to right.
// BLAST returns 4 !


int y = 0;

int foo() {
   y = y + 1;
   return y;
}

void main() {
  int x;
  //int z;
  //z=0;
  //x = y + z + foo() + y;
  x = y + y + foo() + y;

  _TRACER_abort(x != 4); 
  //printf("value of x %d \n",x);
}

