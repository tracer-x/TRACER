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
}

int main(){
  int x,y,z;

  if (y > 0)
    y = y + 1;
  else{ 
    y = foo(y) - 1;
    x = 7;
    y = foo(x) + 3;
  }
  
  z = x;
  return z ;
}
