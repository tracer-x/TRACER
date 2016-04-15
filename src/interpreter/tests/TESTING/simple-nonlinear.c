// From DART paper
void main(int x, int y){
  int DART_ERROR = 0;
  if (x*x*x > 0){
    if (x>0 && y==10)  // real bug
      DART_ERROR++;
  } else { // x < 0
    if (x>0 && y==20)
      DART_ERROR++;    // false positive (bug not reachable)
  }

  _ABORT(DART_ERROR > 0);
  return;

}

