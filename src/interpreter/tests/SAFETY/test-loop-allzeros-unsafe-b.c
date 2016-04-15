// UNSAFE

// allzeros
void main(int t[])
{
  int i,j;
  int n;
  n = 5;

  // Set all values to zero
  for(i=0;i<n;i++) t[i]=0;

  // Test if not zero
  for(j=0;j<n;j++){ 
    if (j == 4)
      _TRACER_abort(t[j] == 0);
  }
    
}
