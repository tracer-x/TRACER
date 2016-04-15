// From DART paper
// UNSAFE

void main(int x, int y){
  int ERROR = 0;
  if (x*x*x > 0){
    if (x>0 && y==10)  
      ERROR++; 
    _TRACER_abort(ERROR > 0); // real 
  } else { // x < 0
    if (x>0 && y==20)
      ERROR++;    
    _TRACER_abort(ERROR > 0); // false positive 
  }

  return;
}

