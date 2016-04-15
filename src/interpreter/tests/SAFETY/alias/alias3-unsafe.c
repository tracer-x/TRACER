// UNSAFE

int x;
void set( int *x1) {
  
  x = 0;  
  *x1 = 1;
}

void main(){
    
  x = 0;
  set(&x);
  
  _TRACER_abort(x != 0);
}
