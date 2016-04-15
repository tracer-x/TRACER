// UNSAFE

main()
{
  int x, y, z;
  
  /*3*/ if (x>0) 
  /*4*/   z = 2;  /*5*/
        else 
  /*6*/	  x = -1; /*7*/
  
          // wp: x> -1
  /*7*/ if (y>0) 
          // wp: x+y>0
  /*8*/   z = 3;
        else 
          // wp: x > -1
  /*10*/  y = 1;
  // wp: x+y > 0
  _TRACER_abort(x+y<=0);
}
