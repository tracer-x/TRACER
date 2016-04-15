/*
  A small program to test that Blast does/does not add predicate to
  program point of interest. By interpolation, blast would add x<=0 at
  PP. If blast does not augment this to all states at PP, then after
  traversing the else branch of the first if conditional, blast would
  encounter another counterexample.
*/

int __BLAST_NONDET;

void main()
{
  int x=0;
  int y;

  y=x;

  if (__BLAST_NONDET) {
    x=x;
  } else {
    y=y+2;
    if (__BLAST_NONDET) {
      y=y-1;
    } else {
      y=y-1;
    }
  }

  /* PP */
  if (x>0) {
    ERROR: goto ERROR;
  }
}
