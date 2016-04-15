int *x;
int *y;

// Note here that the formal parameter x overrides the global variable
// x
void set( int *x) {
  *x = 1;
}

void main(){
  int x;
  x = 0;
  set(&x);
}

/* Pointer analysis: [Steensgaard, field-insensitive]  */
/*  points-to-set([x, &(x)]) */
/*  points-to-set([x, *x]) */
