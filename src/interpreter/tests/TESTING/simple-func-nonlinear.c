// From DART paper
void main(int x, int y){
  int DART_ERROR = 0;

  DART_ERROR = foo(x,y,DART_ERROR);
  return;

  if (DART_ERROR > 0)
  ERROR: goto ERROR;
}

int foo(int x, int y, int e){
  if (x*x*x > 0){
    if (x>0 && y==10)  // real bug
      e++;
  } else { // x < 0
    if (x>0 && y==20)
      e++;    // false positive (bug not reachable)
  }
  return e;
}
