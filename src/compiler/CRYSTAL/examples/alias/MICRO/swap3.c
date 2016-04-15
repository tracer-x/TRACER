extern void* malloc(int k);

void swap1(int *a1, int *b1) {
  int tmp = *a1;
  //*b1 = tmp;
  *a1 = *b1;
  *b1 = tmp;
}

void swap2(int *a2, int *b2) {
  *a2 = *a2 + *b2;
  *b2 = *a2 - *b2;
  *a2 = *a2 - *b2;
}

void main () {
	
  int *i, *j;
  
  int v1, v2;
  
  i = malloc(4);
  j = malloc(4);
  
  *i = v1;
  *j = v2;
  
  swap2(i,j);  
  swap2(i,j);
  
}

/* Pointer analysis: [Steensgaard, field-insensitive] */
/*  points-to-set([b2, j, malloc1]) */
/*  points-to-set([*j, *b2]) */
/*  points-to-set([*a2, *i]) */
/*  points-to-set([i, a2, malloc0]) */
