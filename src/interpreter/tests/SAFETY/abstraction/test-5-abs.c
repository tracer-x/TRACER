//SAFE

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

  /* These two abstractions are unsafe.  Therefore minmax restarts and
     ignores those abstractions so it can prove safety */

  _TRACER_abstract(*x);
  _TRACER_abstract(x);
  
  _TRACER_abort(*x != 5);
}

