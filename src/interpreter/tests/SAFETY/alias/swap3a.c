// SAFE

/* NOTE: malloc is not interpreted by TRACER. This means that after
   x=malloc() is executed no constraint about x is imposed. Moreover,
   no separation assumptions must be considered.*/

extern int unknown();

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
	
  int *i, *j;   
  int v1, v2;
  
/*   i = malloc(4); */
/*   j = malloc(4); */
  
  *i = v1;
  *j = v2;
  
  
  while (unknown()){
    if (unknown()) {
      swap1(i,j);
    }
    else{
      swap2(i,j);
    }
    
    if (unknown()) {
      swap1(i,j);
    }
    else{
      swap2(i,j);
      // swap1(i,j);
    }
  }
  
  //toggle the v1 v2 below to see a bug
  // SAFE
  _TRACER_abort(*i != v1  || *j != v2  );

  // UNSAFE
  //_TRACER_abort(*i != v2  || *j != v1  );
  
}
