// This example is to make sure loop invariants are correct in
// presence of pointers.
//#include <stdio.h>
void main(int p, int N){

  int *ptr;
  int x,y,result;
  int i;
  i = 0;       /*IN*/  
  // LOOP INVARIANT
  // [SH1] [AddrX,AddrY] [] [Return,P  ,N  ,Ptr, Result,I  ]
  // [var] [inv  , inv ] [] [inv   ,inv,inv,var, inv   ,var] 
  y=6;        /*IN*/ 
  x=9;        /*IN*/ // KEY FEATURE: these two constraints MUST NOT 
                      //              pass the loop!  
  while (i < N){/*IN*/
    if (p>0)    /*IN*/       
      ptr = &y; /*IN*/       // assign(SPtrNext,SAddrY) 
    else        /*IN*/       
      ptr = &x; /*IN*/       // assign(SPtrNext,SAddrX)   

    *ptr = 1000;/*IN*/      // SH1 = upd(SH1,Ptr,1000)
    
    i++;        /*IN*/
  }
  result = *ptr; /*IN*/  
  return;
  _SLICE(result);
}

