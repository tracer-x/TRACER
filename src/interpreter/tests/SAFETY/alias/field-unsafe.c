// UNSAFE

/* NOTE: malloc is not interpreted by TRACER. This means that after
   x=malloc() is executed no constraint about x is imposed. Moreover,
   no separation assumptions must be considered.*/

struct FOO {
  int data;
  int flag;
};

extern void* malloc();

int foo (){
  return 0;
}

int main(){
  
  struct FOO *x, *y;
  
/*   x = malloc(); */
/*   y = malloc(); */
   
  _TRACER_assume(x != y);
 
  x->data = 1;
  foo();
  y = x;  /* If comment this line then SAFE */  
  foo();  
  y->data = 0;  
  foo();  
  _TRACER_abort(x->data == 0);
}

