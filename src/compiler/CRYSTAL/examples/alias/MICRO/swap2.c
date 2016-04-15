extern void* malloc(int k);
int __NONDET;

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
  
  if (__NONDET) {
    swap1 (i, j);
  } 
  else{
    swap2 (i,j);
  }  
  
}

/* Pointer analysis ...  */
/*    Switches on: [Steensgaard, field-insensitive] */
/*  points-to-set([*b2, *j, *b1]) */
/*  points-to-set([j, b2, b1, malloc1]) */
/*  points-to-set([a2, a1, i, malloc0]) */
/*  points-to-set([*a1, *a2, *i]) */
