// SAFE

/* NOTE: malloc is not interpreted by TRACER. This means that after
   x=malloc() is executed no constraint about x is imposed. Moreover,
   no separation assumptions must be considered.*/

extern void * malloc(int k);

void main () {

  int *a, *b, tmp;
  
  a = malloc(4);
  *a = 5;
  
  b = a;
  
  _TRACER_abort(*b != 5);
	
}
