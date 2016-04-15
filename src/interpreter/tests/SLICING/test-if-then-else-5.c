/*
  Testing that the slice excludes control statements that
  do not affect the value of x.
 */

void main()
{
  int i, x, y, z;

  if (x>0) {         /* IN */      
    x--;             /* IN */       
  } else {           /* IN */
    if (y>0) {       /* OUT */       
      z=1;           /* OUT */       
    } else {         /* OUT */       
      i=0;           /* OUT */        
      while (i<10) { /* OUT */       
	i++;         /* OUT */       
      }              
      z=i;           /* OUT */       
    }
    x++;             /* IN */      
  }

  _SLICE(x);
}
