// SAFE

/* NOTE: malloc is not interpreted by TRACER. This means that after
   x=malloc() is executed no constraint about x is imposed. Moreover,
   no separation assumptions must be considered.*/

void swap1(int *a, int *b) {
  int tmp = *a;
  //*b = tmp;
  *a = *b;
  *b = tmp;
}

void swap2(int *a, int *b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}

extern void* malloc(int k);

void main () {
  
  int *i, *j , *a, *b;
  int v1, v2, tmp;
  
  i = malloc(4);
  
  *i = 0;  
  a = i;  
  *a = 6;  
  //	a = i;  
  *a = 7;
  
  _TRACER_abort(*i != 7);
}
