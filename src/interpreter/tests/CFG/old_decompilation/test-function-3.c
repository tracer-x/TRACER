gint foo(int a, int b) {
  if(a <= 0)
    return a+1;
  else
    return b+1;
}

int main() {
  int i = 0;
  int sum = 0;
  
  while(i <= 10 || sum <= 100) {
    sum = foo(sum, i);
    i = foo(i, 1);
  }
  
  return sum;
}
