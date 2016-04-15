int i = 1;
int sum = 0;
int product = 2;

int foo(int q) {
     return q+1;
}

int main(int n){
  
  if (i<=n){
    sum     = sum + i;
    product = product * i;
    i       = i + 1;
  }
  n = foo(i) + 24;
  _DECOMPILE_ABORT(sum < 0);
  
  return sum;
}

