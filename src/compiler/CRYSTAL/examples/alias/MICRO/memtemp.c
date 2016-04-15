extern int malloc();

void main(){
  int *x;
  //int x[10];
  int i,j,y;
  x = malloc () ;
  
  x[i] = 0;
  foo();
}
  
/* Pointer analysis: [Steensgaard, field-insensitive] */
/*  points-to-set([x, &(x[j]), &(x[i]), malloc0]) */
/*  points-to-set([x[i], x[j]]) */

/* Pointer analysis: [Steensgaard, field-sensitive] */
/*  points-to-set([x, &(x[j]), &(x[i]), malloc0]) */
/*  points-to-set([x[i], x[j]]) */
