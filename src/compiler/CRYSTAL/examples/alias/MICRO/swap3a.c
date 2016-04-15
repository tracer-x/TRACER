extern void* malloc(int k);
int __NONDET;

void swap1(int *a1, int *b1) {
  int tmp = *a1;
  //*b = tmp;
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
    
  while (__NONDET){
    if (__NONDET) {
      swap1(i,j);
    }
    else{
      swap2(i,j);
    }
    
    if (__NONDET) {
      swap1(i,j);
    }
    else{
      swap2(i,j);
      //		swap1(i,j);
    }
  }  
}

/* Pointer analysis: [Steensgaard, field-insensitive] */
/*  points-to-set([*a2, *a1, *i]) */
/*  points-to-set([i, a2, a1, malloc0]) */
/*  points-to-set([*b2, *b1, *j]) */
/*  points-to-set([j, b1, b2, malloc1]) */
