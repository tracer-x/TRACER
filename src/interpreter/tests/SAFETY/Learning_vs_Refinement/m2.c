/*
  In this example we increase the number of refinements by
  repeating the code of m1.c multiple times. The refinements
  increase linearly to the repetition of code fragment.
 */

/*
BLAST
 w/ -predH 7
 3 predicates
 0.66s
 w/o -predH 7
 2 predicates
 0.5s
TRACER
 43 states and 2 subsumed
 0.05s
 */
int BLAST_NONDET;

void main()
{
  int x;

  x=0;

  /*-------------------------------------------------------------------------*/
  if (BLAST_NONDET) x=x;
  else {
    x++;
    if (BLAST_NONDET) x--;
    else x--;
  }
  /*-------------------------------------------------------------------------*/
  if (BLAST_NONDET) x=x;
  else {
    x++;
    if (BLAST_NONDET) x--;
    else x--;
  }
  /*-------------------------------------------------------------------------*/
  if (BLAST_NONDET) x=x;
  else {
    x++;
    if (BLAST_NONDET) x--;
    else x--;
  }
  /*-------------------------------------------------------------------------*/
  if (BLAST_NONDET) x=x;
  else {
    x++;
    if (BLAST_NONDET) x--;
    else x--;
  }

  // BLAST if (x<0) ERROR: goto ERROR;
  // TRACER
  _ABORT(x<0);

  return;
}
