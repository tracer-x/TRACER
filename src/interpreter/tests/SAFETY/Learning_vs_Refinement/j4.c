/*
	An example to demonstrate that Blast traverses a
	larger tree than tracer. Compared to j3.c this
	example avoids effective usage of previously added
	predicates on x.
*/

void main()
{
  int x=0;
  int y=0, z=0;

  if (x<0) { z=y; x=x+y-z; } else { x++; y++; z++; }
  if (y<1) { z=y; x=x+y-z; } else { x++; y++; z++; }
  if (z<2) { z=y; x=x+y-z; } else { x++; y++; z++; }

  if (x!=3) {
  ERROR: goto ERROR;
  }

}
