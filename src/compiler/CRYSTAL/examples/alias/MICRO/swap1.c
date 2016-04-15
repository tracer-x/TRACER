extern void* malloc(int k);

void swap1(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void swap2(int *a, int *b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}

void main () {
  int *a, *b, tmp;
  int *i, *j;
  int v1, v2;
  
  i = malloc(4);
  j = malloc(4);
  
  *i = v1;
  *j = v2;
  
  swap2 (i,  j);  
}
/* Pointer analysis: [Steensgaard, field-insensitive] */
/*  points-to-set([*i, *a]) */
/*  points-to-set([a, i, malloc0]) */
/*  points-to-set([j, b, malloc1]) */
/*  points-to-set([*j, *b]) */

