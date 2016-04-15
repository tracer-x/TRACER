// SAFE

// To check properly working of multiple safety conditions

extern int unknown();

main(){
  int x=0;
  int y=0;
 
  if (unknown())
    x = 5;
  else
    y = 10;

  _TRACER_abort(x!=5 && y!=10);
  return;

}
   
