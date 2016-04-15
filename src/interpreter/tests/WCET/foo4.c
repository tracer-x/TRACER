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
    y = foo(y) - 1;  // y < 1, y' = 0
    x = 7;           // y < 1, y' = 0, x = 7
    y = foo(x) + 3;  // y < 1, y' = 0, x = 7, y'' = 4
    x = -2;          // y < 1, y' = 0, y'' = 1, x = 7, x' = -2,  
    y = foo(x) + 5;  // y < 1, y' = 0, y'' = 1, x = 7, x' = -2,  y'''=0
  }
  
  z = x;
  return z ;
}
