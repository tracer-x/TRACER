// SAFE
// The second subtree should not be subsumed

void main(){
  int a[5],b[5];
  int p,y;
  int x;

  if(p) a[0]=3; else a[0]=2;

  b[0]=3;b[1]=4;b[2]=5;b[3]=6;b[4]=7;
 
  _TRACER_abort(a[0] < 2); 
}
