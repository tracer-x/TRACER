int foo(int n){
  // if n >= 1 then ret is 1
  // else           ret is 0
  int i   = 1;
  int sum = 0;
  int product = 1;

    if (i<=n){
      sum     = sum + i;
      product = product * i;
      i       = i + 1;
    }
  return sum;
}

int main(){
  int x,y,z;

  x = foo(5);
  y = foo(7);
  
  z = x + y;
  return z ;
}
