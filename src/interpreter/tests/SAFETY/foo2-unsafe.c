// UNSAFE

extern int unknown();

int foo(int n){
  int i   = 1;
  int sum = 0;
  int product = 1;

    if (i<=n){
      sum     = sum + i;
      product = product * i;
      i       = i + 1;
    }
  return sum;
  // POST: sum = {0,1}
}

int main(){
  int y;

  _TRACER_assume(y >0);
  if (y > 0)
    y = y + 1; // y > 0
  else{ 
    y = foo(y) - 1; // {-1,0}    
    y = foo(5) + 5; // {5,6}
    // POST: y > 0
  }
  
  _TRACER_abort(y > 0); 
}

