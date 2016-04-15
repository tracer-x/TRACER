int x;

void set( int *x1) {
  x = 0;
  *x1 = 1;
}

void main(){
    
  x = 0;
  set(&x);  
}

/* Pointer analysis: [Steensgaard, field-insensitive] */
/*  points-to-set([x1, &(x)]) */
/*  points-to-set([*x1, x]) */

