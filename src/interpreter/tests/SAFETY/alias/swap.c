// SAFE

/* NOTE: malloc is not interpreted by TRACER. This means that after
   x=malloc() is executed no constraint about x is imposed. Moreover,
   no separation assumptions must be considered.*/

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

extern void* malloc(int k);

void main () {
  int *a, *b, tmp;
  
  int *i, *j;
  
  int v1, v2;
  
/*   i = malloc(4); */
/*   j = malloc(4); */
  
  *i = v1;
  *j = v2;
  
  swap1 (i,  j);
  
  _TRACER_abort(*i != v2 || *j != v1 );
  // if (*i != v2 || *j != v1 ) ERROR: goto ERROR;

}
