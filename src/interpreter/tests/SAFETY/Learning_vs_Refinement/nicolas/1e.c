int main() {
  int __BLAST_NONDET;
  int c = 0;
  int sum = 0;

  if(c == 0) {
    sum+=10;
  }
  else {
    sum+=40;
  }
  if(c == 0) {
    sum+=50;
  }
  else {
    sum+=20;
  }
  if(sum == 100) {
  ERROR: goto ERROR;
  }

  return 0;
}
