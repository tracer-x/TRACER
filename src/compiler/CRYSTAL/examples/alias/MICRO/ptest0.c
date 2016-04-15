extern void malloc(int k);

void main () {

  int *a, *b, tmp;
  
  a = malloc(4);
  *a = 5;
  
  b = a;
 	
}

/* Pointer analysis: [Steensgaard, field-insensitive] */
/*  points-to-set([b, a, malloc0]) */
/*  points-to-set([*a, *b]) */
