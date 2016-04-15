int *x;
int *y;

extern int malloc();

void main(){

  x = malloc ();
  y = malloc ();
  
  *x = 0;
  y = x;
  *y = 5;
}

/* Pointer analysis ...  */
/* Switches on: [Steensgaard, field-insensitive] */
/*    points-to-set([*y, *x]) */
/*    points-to-set([x, y, malloc0, malloc1]) */
