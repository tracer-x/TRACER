extern void* malloc(int k);

void main () {
  
  int *i, *j , *a, *b;
  int v1, v2, tmp;
  
  i = malloc(4);  
  *i = 0;  
  a = i;  
  *a = 6;  
  // a = i;  
  *a = 7;  
}

/* Pointer analysis: [Steensgaard, field-insensitive] */
/*  points-to-set([a, i, malloc0]) */
/*  points-to-set([*i, *a]) */
