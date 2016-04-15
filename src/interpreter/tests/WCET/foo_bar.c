int foo(int n){
  int i   = 1;
  int sum = 0;
  int product = 1;
  int z = sum;

    if (i<=n){
      z = bar(sum,product,i);
    }
  return z;
}

int bar(int sum, int product, int i){
  sum     = sum + i;
  product = product * i;
  i       = i + 1;
  return sum;
}

int main(){
  int x,y,z;

  if (y > 0)
    y = y + 1;
  else{
    y = foo(y) - 1;
    x = 4;
    y = foo(x) + 5;
  }
  
  z = x;
  return z ;
}
