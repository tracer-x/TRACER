/*
 * Another array test w/ witnesses
 */

main()
{
  int x, y, z;
  int a[10];
  int t;
               /* w/o array solver */   /*w/ array solver + witnesses*/ 
  if (a[z]>0) {    /*IN*/                       /*IN*/         
    z=z;           /*IN*/                       /*IN*/         
  } else {         /*IN*/                       /*OUT*/          
    z=z;           /*IN*/                       /*OUT*/          
  }

  
  if (a[z]<5) {    /*OUT*/                      /*OUT*/         
    z=z;           /*OUT*/                      /*OUT*/         
  } else {         /*IN*/                       /*IN*/          
    x=y;           /*IN*/                       /*IN*/          
  }

  _SLICE(x);
}
