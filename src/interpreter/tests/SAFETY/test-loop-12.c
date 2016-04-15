/*---------------------------------------------------------------------------*/
/* An example with loop subsumption after two iterations of the loop body    */
/*---------------------------------------------------------------------------*/

main(int N)
{
  int i, x;
  
  x = 1;
  i = 0;

  while (i<N) {
    if (x==1) {
      x=2;
    } else {
      x=1;
    }
    i++;
  }

  _TRACER_abort(x>2);

  return;
}
