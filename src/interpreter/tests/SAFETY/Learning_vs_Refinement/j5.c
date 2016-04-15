/*
	An example to demonstrate that Blast traverses a
	larger tree than tracer. 
	
	This is to demonstrate that the loop is always redone
	when a new predicate is added.

	For this program, so far the results are inconclusive.
*/

void main()
{
  int x=0;
  int y=0, z=0;
  int i;

  i=0;
  while (i<10) {
    i++;
  }

  if (x<0) { z=y; x=x+y-z; } else { x++; y++; z++; }
  if (y<1) { z=y; x=x+y-z; } else { x++; y++; z++; }
  if (z<2) { z=y; x=x+y-z; } else { x++; y++; z++; }

  if (i!=10 || x!=3) {
  ERROR: goto ERROR;
  }

}
