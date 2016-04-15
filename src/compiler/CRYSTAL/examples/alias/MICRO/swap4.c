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
	
  int *i, *j , *a, *b;
  int v1, v2, tmp;
  
  i = malloc(4);
  j = malloc(4);
  
  *i = v1;
  
  a = i;
  b = j;
  
  tmp = *a;
  *a = *b;
  *b = tmp;
  
  a = i;
  b = j;
  
  tmp = *a;
  *a = *b;
  *b = tmp;
  
}

/* Pointer analysis: [Steensgaard, field-insensitive] */
/*  points-to-set([a, i, malloc0]) */
/*  points-to-set([*i, *a]) */
/*  points-to-set([j, b, malloc1]) */
