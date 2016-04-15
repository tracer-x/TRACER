// SAFE

int *x;
int *y;
extern void* malloc();
void main(){
  
  x = malloc ();
  y = malloc ();
  _TRACER_assume(x!=y);

  *x = 0;
  y = x;
  *y = 5;

  _TRACER_abstract(y);    // safe  
  _TRACER_abort(*x != 5);
}

