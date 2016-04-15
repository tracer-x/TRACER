/*
 * Another array test w/ witnesses
 */

main()
{
  int x, y, z;
  int a[10];

               /* w/o array solver */   /*w/ array solver*/ 
  if (a[z]<0) {    /*IN*/                   /*OUT*/         
    z=z;           /*IN*/                   /*OUT*/         
  } else {         /*IN*/                   /*IN*/          
    z=z;           /*IN*/                   /*IN*/          
  }


  if (a[z]>=0) {   /*OUT*/                  /*OUT*/         
    z=z;           /*OUT*/                  /*OUT*/         
  } else {         /*IN*/                   /*IN*/          
    x=y;           /*IN*/                   /*IN*/          
  }

  _SLICE(x);
}
