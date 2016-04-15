/*---------------------------------------------------------------------------*/
/* An example to test multiprocedural code and correct failure of forced     */
/* subsumption due to constraint locked in the loopcontext                   */
/*---------------------------------------------------------------------------*/

// SAFE

int x;

int sel(int z)
{
  int y;

  if (z>=0) {
    y = 1;
    _TRACER_abort(x<0);
  } else {
    y = 2;
    x = 1;
  }
  return y;
}

main()
{
  int i, y;

  x = 0;
  i = 0;
  while (i < 10) {

    sel(y);

    i++;
  }

  return;
}
