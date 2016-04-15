// UNSAFE

// BLAST reports UNSAFE
// TRACER is incorrect and reports SAFE if int *x,*y are declared like global

//int *x;
//int *y;

void set( int *x) {
  *x = 1;
}

void main(){
  int x;
  
  x = 0;
  set(&x);
  
  _TRACER_abort(x != 0);
}
