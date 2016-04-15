void main () {
  
  int *a, *b, tmp;
  
  int i, j;
  
  int v1, v2;
  
  i = v1;
  j = v2;
  
  //swap1 (&i, & j);
  a = &i;
  *a = 5;
}

/* Pointer analysis: [Steensgaard, field-insensitive] */
/*  points-to-set([i, *a]) */
/*  points-to-set([a, &(i)]) */
