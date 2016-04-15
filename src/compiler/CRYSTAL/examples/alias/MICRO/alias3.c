int *x;
int *y;

void set( int *a) {
  *x = 1;
}

void main(){
  int x;
  x = 0;
  set(&x);
  
}

/* Pointer analysis: [Steensgaard, field-insensitive] */
/*  points-to-set([a, &(x)]) */

