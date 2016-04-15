// UNSAFE

extern int unknown();
int main(){
  int x = 0;

  if (unknown())  x = x+1;

  _TRACER_abort(x > 1);

  if (unknown())  x = x+2;

  _TRACER_abort(x > 3);

  if (unknown())  x = x+4;

  _TRACER_abort(x >= 7);
  return x;
}
