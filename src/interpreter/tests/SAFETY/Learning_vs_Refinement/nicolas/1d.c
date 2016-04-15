/* Blast seems not able to reuse a predicare sum<=10. Instead,
   it generates a new predicate sum*2<=20 in a later refinement.
*/

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
    sum+=20;
  }
  else {
    sum+=55;
  }
  if(sum == 100) {
  ERROR: goto ERROR;
  }

  return 0;
}
