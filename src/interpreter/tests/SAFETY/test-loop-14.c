/*---------------------------------------------------------------------------*/
/* This is an example to test multiple looping points. The loop will be      */
/* unrolled twice, and interpolation should work from one looping point to   */
/* another.                                                                  */
/*---------------------------------------------------------------------------*/

// SAFE

extern int unknown();

void main()
{
  int x, y;

  y = 0;
  x = 1;
  while ( unknown() < 10) {
    if (x<2) {
      x=2;
    } else {
      x=1;
    }
    if (y<1) {
      y=0;
    }
  }
  _TRACER_abort(x > 2);
  return;
}
