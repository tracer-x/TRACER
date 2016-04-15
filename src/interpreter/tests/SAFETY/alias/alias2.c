// SAFE

// BLAST  reports SAFE

//int *x;
//int *y;

void set( int *x) {
  *x = 1;
}

void main(){
  int x;
  x = 0;
  set(&x);
  
  _TRACER_abort(x == 0);
}
