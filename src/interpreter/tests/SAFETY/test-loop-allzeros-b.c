// SAFE

// From the "Path-Invariants" paper

extern int malloc(int size);

// allzeros
void main()
{
  int *p;
  int i,j;

  p = (int *) malloc(sizeof(int));

  // Set all values to zero
  for(i=0;i<5;i++){ 
    *(p+i)=0;
  }

  // Test if not zero
  for(j=0;j<5;j++){
    _TRACER_abort(*(p+j) > 0);
  }
    
}
