// From DART paper
void main(int x, int y){
  int DART_ERROR = 0;
  int z;

  z = 2*x;
  z = 5;
  if (z == y){
    if (y == x+10)
      DART_ERROR++;
  }

  _TRACER_abort(DART_ERROR > 0);
  return;
  

}
