//////////////////////////////////////////////////////////////////////////////////
// This program is an example that we are systematic path-sensitive
// MODULO loop-invariant + solver + ALIAS ANALYSIS.
//
// The assignments x=17; and x=19; should be sliced away since the
// statement ptr=&x; is never executed when p=1; However, we rely on a 
// path-insensitive alias analysis so those statements will be included.
//////////////////////////////////////////////////////////////////////////////////
void main(int p, int q){

  int *ptr;
  int x,y,result;
  p = 1;    /* We detect an infeasible path but the use of */
            /* a path-insensitive alias analysis cancels our ability
	       of slicing away x=17; and x=19;*/

                   // If p =1 (no opt)    // If unknown p           // if p=1 (opt)
  if (p>0)           /*IN*/                 /*IN*/                   /* OUT*/    
    ptr = &y;        /*IN*/                 /*IN*/                   /* IN*/
  else               /*OUT*/                /*IN*/                   /* OUT*/
    ptr = &x;        /*OUT*/                /*IN*/                   /* OUT*/
  
  if (q<0){          /*IN*/                 /*IN*/                   /*IN*/
    x=17;            /*IN*/                 /*IN*/                   /*IN*/
    y=18;            /*IN*/                 /*IN*/                   /*IN*/
  }
  else{              /*IN*/                 /*IN*/                   /*IN*/
    x=19;            /*IN*/                 /*IN*/                   /*IN*/ 
    y=20;            /*IN*/                 /*IN*/                   /*IN*/
  }
  
  result = *ptr;     /*IN*/                 /*IN*/                   /*IN*/
  return;            /*OUT*/                /*OUT*/                  /*OUT*/
  _SLICE(result);  
}

