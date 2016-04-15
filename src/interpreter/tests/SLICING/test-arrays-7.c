/*
 * Arrays test for witness
 */

main()
{
  int x, y, z;
  int a[10];


  if (a[z]<5) {     /*OUT*/ 
    z=z;            /*OUT*/  
  } else {          /*OUT*/ 
    z=z;            /*OUT*/ 
  }

  if (a[z]<=0) {    /*OUT*/ 
    z=z;            /*OUT*/ 
  } else {          /*OUT*/ 
    z=z;            /*OUT*/ 
  }
  
  x=y;              /*IN*/ 

  _SLICE(x);
}
