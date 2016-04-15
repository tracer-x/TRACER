/*
  Test program to test for the correct handling of
  representatives.
*/


void main()
{
  int i, x, y;

  x=0;                /* IN */
  i = 0;              /* IN */

  /*
    At the start of the loop, the representatives
    should be empty.
   */

  while (i<10) {      /* IN */ 
    x = y;            /* IN */  
    i++;              /* IN */
    /*
      At the end of the loop, the
      representatives should be empty.
    */
  }
  
  if (y<10) {         /* IN */
    x++;              /* IN */
  } else { 
    x--;              /* IN */
  }

  _SLICE(x);
}
