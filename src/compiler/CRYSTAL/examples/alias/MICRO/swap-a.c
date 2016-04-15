extern void* malloc(int k);

void swap1(int *a1, int *b1) {
  int tmp = *a1;
  *a1 = *b1;
  *b1 = tmp;
}

void swap2(int *a2, int *b2) {
  *a2 = *a2 + *b2;
  *b2 = *a2 - *b2;
  *a2 = *a2 - *b2;
}

void main () {
  int i, j;
  int v1, v2;
  
  i = v1;
  j = v2;
  
  swap1 (&i, &j);

}

/* Pointer analysis: [Steensgaard, field-insensitive] */
/*  points-to-set([*a1, i]) */
/*  points-to-set([a1, &(i)]) */
/*  points-to-set([j, *b1]) */
/*  points-to-set([b1, &(j)]) */
