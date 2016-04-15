/*---------------------------------------------------------------------------*/
/* An example with loop subsumption after two iterations of the loop body    */
/* (see also test-loop-12.c)                                                 */
/*---------------------------------------------------------------------------*/

int main(int N)
{
  int i, j, k;

  i = 0;
  j = 0;
  k = 0;

  _TRACER_assume(N > 1);

  while (i < N) {
    if (i<1)
      k = 1;
    else
      k = 0;
    j++;
    i++;
  }

  _TRACER_abort(k>0);

  return 0;
}
