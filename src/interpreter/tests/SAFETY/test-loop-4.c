// UNSAFE

extern int unknown();

void main () {
  int x, y;

  x = 0;
  y = 0;
  while (unknown()) {
    x ++ ;
    y ++ ;
  }
  while (x > 0) {
    x -- ;
    y -- ;
  }
  _TRACER_abort(y == 0);
}
