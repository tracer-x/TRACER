// From DART paper but w/o non-linear constraint.
// UNSAFE (if x=10, y=20)
// Safety provers can catch this error.
void main(int x, int y){
  int DART_ERROR = 0;
  int z;

  z = 2*x;
  if (z == y){
    if (y == x+10)
      DART_ERROR++;
  }

  _TRACER_abort(DART_ERROR > 0);
  return;

}