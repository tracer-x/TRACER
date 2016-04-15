// UNSAFE

// allzeros
void main(int t[])
{
  int i;
  int n;
  n = 5;

  // Set all values to zero
  for(i=0;i<n;i++) t[i]=0;

  // Test if not zero
  for(i=0;i<n;i++){ 
    //if(t[i] != 0)  ERROR: goto ERROR;
    _TRACER_abort(t[i] == 0);
  }
    
}
