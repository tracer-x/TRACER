// SAFE

extern int unknown();
void main(){
  int x = 0;

  if (unknown())  x = x+1;
  if (unknown())  x = x+2;
  if (unknown())  x = x+4; 

  _TRACER_abort(x > 7);
  return;
}
