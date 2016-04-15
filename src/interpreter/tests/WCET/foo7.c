/*
  This is the version of foo3.c with the multiplacation in foo()
  replaced with addition
*/

int foo(int n){
  int i   = 1;
  int sum = 0;
  int product = 1;

    if (i<=n){
      sum     = sum + i;
      product = product + i;
      i       = i + 1;
    }
  return sum;
}

int main(){
  int x,y,z;

  y = 5;
  x = foo(y) - 1;  // x  = 1, y = 5 
  z = foo(y) - 1;  // z  = 1, x = 1, y = 5
  
  return x + z ;   // z  = 1, x = 1, y = 5, ret = 2
}
