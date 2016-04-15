// SAFE

// To make sure that invariants constraints (x=1 and x=3) are kept
// after the loop in bar. Otherwise, we report a false alarm

extern int unknown();

void bar(){
  int i,NONDET,q,z;
  i=0;

  if (q>0) z=4;
  else z=5;

  while (NONDET){
    i++;
  }
  return;
}

main(){
  int p,x;

  if (p>0) x=1;
  else x=3;

  bar();

  _TRACER_abort(x==2);

}
