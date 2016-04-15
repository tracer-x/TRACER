int main() {
  int i;
  int sum;
  int NONDET;
  int x1,x2,x3,x4;

  while(i <= 10 || sum <= 100) {
    if(i == NONDET)
      break;
    sum = sum + i;
    i = i + 1;
  }

  x1=0;
  x2=0;
  x3=0;
  x4=0;
	
  return sum;
}
