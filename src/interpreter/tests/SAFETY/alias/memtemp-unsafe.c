// UNSAFE

/* NOTE: malloc is not interpreted by TRACER. This means that after
   x=malloc() is executed no constraint about x is imposed. Moreover,
   no separation assumptions must be considered.*/

extern void foo();
extern void* malloc();

void main(){
  int *x;
  //int x[10];
  int i,j,y;
  x = malloc () ;

  x[i] = 0;
  foo();
  _TRACER_abort(j == i && x[j] == 0);
}
  
