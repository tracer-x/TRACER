// This example is to make sure loop invariants are correct in
// presence of pointers.
void main(int N){

  int *ptr;
  int x,y,p,result;
  int i;
  i = 0;      /*IN */       // NOT INVARIANT 
  y=6;        /*OUT*/       // INVARIANT but for now we lose it
  x=9;        /*OUT*/       // INVARIANT but for now we lose it
  p=5;        /*IN*/        // INVARIANT  /*OUT if control opt.*/
   
  while (i < N){/*IN*/
    if (p>0)    /*IN*/                     /*OUT if control opt*/       
      ptr = &y; /*IN*/
    else        /*OUT*/       
      ptr = &x; /*OUT*/  
    
    i++;        /*IN*/
  }
  result = ptr; /*IN*/  
  return;
  _SLICE(result);
}

