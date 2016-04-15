// UNSAFE

void main () {

  int *a, *b, tmp; 
  int i, j;  
  int v1, v2;
  
  i = v1;
  j = v2;
  
  //a = &i;
  *a = 5;
  _TRACER_abort(i != 5);

}
