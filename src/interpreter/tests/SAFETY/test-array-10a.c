// SAFE

void main(){
  int a[5]; 
  int x,y,z,i;

  x = 0;

  a[i]=666;
  
  // Should be subsumed
  if(y>0) x++;
  if(z>0) x++;
  
  _TRACER_abort(a[i] > 666); 
}
