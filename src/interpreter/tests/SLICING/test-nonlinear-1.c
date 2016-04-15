/*
  An example with nonlinear constraint. We need to test more examples
  because we know that dump/3 does not behave correctly with nonlinear
  constraints.
*/

void main()
{
  int x, y, z;

  if (x < 0) {     /* IN */
    x = y * z;     /* IN */
    if (y<0) {     /* IN */
      x=0;         /* IN */
    } else {       /* IN */
      if (y>0) {   /* IN */
	x=0;       /* IN */
      }
    }
  }

  if (x<0) {      /* OUT */
    y=y;          /* OUT */
  }

  _SLICE(x);
}
