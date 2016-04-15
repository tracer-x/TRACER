// SAFE

// From the "Path-Invariants" paper


// allzeros
void main()
{
  int t[5];
  int i,j;

  // Set all values to zero
  for(i=0;i<5;i++){ 
    t[i]=0;
  }

  // Test if not zero
  for(j=0;j<5;j++){
   _TRACER_abort(t[j] > 0);
  }
    
}
