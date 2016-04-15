int foo(int a, int b) {
  if(a <= 0)
    return a+1;
  else
    return b+1;
}

int main() {
  int i = 0;
  int sum = i;
  int NONDET;
  
  while((NONDET <= 10) && (sum <= 100)) {
    if(i == NONDET)
      break;
    sum = foo(sum, i);
    i = foo(i, 1);
  }
  
  return sum;
}

