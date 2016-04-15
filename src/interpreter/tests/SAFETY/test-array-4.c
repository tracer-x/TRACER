 // UNSAFE
// The second subtree should not be subsumed

void main(){
  int a[5],b[5];
  int p,y;
  int x;

  if(p) a[0]=3; else a[0]=1;

  b[0]=13;b[1]=14;b[2]=15;b[3]=16;b[4]=17;
 
  _TRACER_abort(a[0] < 2); 
}
