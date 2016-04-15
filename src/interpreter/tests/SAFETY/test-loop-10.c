/*---------------------------------------------------------------------------*/
/* An example where the same while loop appears twice in the symbolic        */
/* execution tree. No subsumption should be possible between the two         */
/* instances.                                                                */
/* if -intp dwp or ndwp then we can subsume the second copy of the loop      */
/*---------------------------------------------------------------------------*/

// SAFE

int main()
{
  int i, x, y;

  if (y <= 2) {
    if (x < 0) {
      x = 0;
    }
    i = 0;
    while (i < 10) {
      _TRACER_abort(y > 2);
      i++;
    }

    _TRACER_abort(x <= -1);
  }
  return 0;
}
