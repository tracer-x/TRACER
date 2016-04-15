/*---------------------------------------------------------------------------*/
/* An example to test simple full unroll                                     */
/*---------------------------------------------------------------------------*/

/* Some profiling

 TRACER: 1009 states, 0 subsumed in 48s.
         NOTE: partition can improve performance.
 BLAST : 201 refinements in 49s
*/


// SAFE

int main()
{
  int i = 0;
  int N = 100;

  while (i<N) {
    i++;
  }
  
  _TRACER_abort(i>N);

  return 0;
}
