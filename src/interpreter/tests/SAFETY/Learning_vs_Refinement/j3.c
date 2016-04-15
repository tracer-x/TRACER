/*
	An example to demonstrate that Blast traverses a
	larger tree than tracer.
*/

void main()
{
  int x=0;
  int y, z;

  if (x<0) { z=y; x=x+y-z; } else x++;
  if (x<1) { z=y; x=x+y-z; } else x++;
  if (x<2) { z=y; x=x+y-z; } else x++;
  if (x<3) { z=y; x=x+y-z; } else x++;
  if (x<4) { z=y; x=x+y-z; } else x++;

  if (x<5) { z=y; x=x+y-z; } else x++;
  if (x<6) { z=y; x=x+y-z; } else x++;
  if (x<7) { z=y; x=x+y-z; } else x++;
  if (x<8) { z=y; x=x+y-z; } else x++;
  if (x<9) { z=y; x=x+y-z; } else x++;


  if (x!=10) {
  ERROR: goto ERROR;
  }

}
