// SAFE
main()
{
  int i;
  int x, y;

  i = 0;
  x = 1;

  while (i<10) {
    if (x==1) {
      x = 2;
      y = 3;
    } else if (x==2) {
      x = 3;
      y = 4; 
    } else if (x==3) {
      x = 1;
      y = 5;
    } else if (x==4) {
      x = 1;
      y = 6;
    } else {
      x = 2;
    }

    i = i + 1;
  }

  _TRACER_abort(y==6);
  /* if (y==6) {  */
  /*   goto ERROR;  */
  /* ERROR: goto ERROR; */
  /* } */
}
