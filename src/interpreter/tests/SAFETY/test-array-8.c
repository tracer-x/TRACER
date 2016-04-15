// UNSAFE

main(){
  int y,z, NONDET;
  int a[5];

  if (NONDET)
    a[0]=1;
  else
    a[0]=2;
  
  y=0;
  z=0;
  
  // Two subtrees (no subsumption)
  _TRACER_abort( a[0] > 1);

  // One subtree and another subsumed
  //_TRACER_abort( y > 2);
}
