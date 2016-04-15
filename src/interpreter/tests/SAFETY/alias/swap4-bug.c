

void swap1(int *a, int *b) {
  int tmp = *a;
  *b = tmp; // BUG
  *a = *b;
}

void swap2(int *a, int *b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}

extern void* malloc(int k);

void main () {
	
  int *i, *j ;
  int v1, v2, tmp;
  
  i = malloc(4);
  j = malloc(4);
  
  *j = v2;
  
  
  swap1(i,j);	
  
  _TRACER_abort(  *i != v2 );
  // if (  *i != v2 ) ERROR:	goto ERROR;

}
