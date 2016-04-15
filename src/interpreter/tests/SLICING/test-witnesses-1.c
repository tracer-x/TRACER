/***********************************************************************/
//       Show witness paths improve precision 
/***********************************************************************/

void main(){
  int a,x,y,z;

                   /* Use witnesses */                  /* Don't use witnesses */ 
                   /* w/o control opt */ /* w/ control opt */
  /* 1 */  if (a > 0)     /* IN */           /* IN */            /* IN */  
    /* 2 */    y =0;      /* IN */           /* IN */            /* IN */  
  else{
    /* 3 */    y = z ;    /* OUT */          /* OUT*/            /* IN */  
    /* 4 */    x = 0 ;    /* IN */           /* IN */            /* IN */  
  } 
  /* 5 */  if (x > 0)     /* IN */           /* OUT */           /* IN */  
    /* 6 */    x = y ;    /* IN */           /* IN */            /* IN */   

  return;                 /* OUT */          /* OUT */           /* OUT */
  _SLICE(x);
}

     
