//UNSAFE

/* NOTE: malloc is not interpreted by TRACER. This means that after
   x=malloc() is executed no constraint about x is imposed. Moreover,
   no separation assumptions must be considered.*/

int *x;
int *y;

extern void* malloc();

void main(){

  x = malloc ();
  y = malloc ();
  
  *x = 0;
  y = x;
  
  *y = 5;
  
  _TRACER_abort(*x == 5);

}
