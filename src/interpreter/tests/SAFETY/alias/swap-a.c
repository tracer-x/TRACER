// SAFE

void swap1(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void main () {
  int i, j;
  int v1, v2;
  
  i = v1;
  j = v2;
  
  swap1 (&i, & j);
  
  _TRACER_abort(i != v2 /* || j != v1 */);

}
