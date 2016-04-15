// SAFE
// The second subtree should not be subsumed

void main(){
  int a[5],b[5];
  int p,y;
  int x;

  if(p) x=3; else x=2;
  
  a[0]=x;
  b[0]=3;b[1]=4;b[2]=5;b[3]=6;b[4]=7;
  
  _TRACER_abort(a[0] < 2); 
}
