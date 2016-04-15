// UNSAFE

main(){
  int y,z, NONDET;
  int *p;

  if (NONDET)
    *p=1;
  else
    *p=2;
  
  y=0;
  z=0;
  
  // Two subtrees (no subsumption)
  _TRACER_abort( *p > 1);

  // One subtree and another subsumed
  //_TRACER_abort( y > 2);
}
