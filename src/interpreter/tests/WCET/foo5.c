int foo(int n){
  int sum = 0;
  int product = 1;

  sum     = sum + n;
  product = product * n;
  
  return sum;
}

int main(){
  int x,y,z;

  x = foo(5);
  y = foo(7);
  
  z = x + y;
  return z ;
}
