// This example is to make sure loop invariants are correct in
// presence of pointers.
void main(int N){

  int *ptr;
  int x,y,result;
  int a[5];
  int i;

  i=0;      /*IN */       // NOT INVARIANT 
  y=6;      /*OUT*/       // INVARIANT
  x=9;      /*OUT*/       // INVARIANT  
  a[i]=5;   /*IN*/        // INVARIANT  
    
  while (i < N){   /*IN*/
    if (a[0]>0)    /*IN*/                
      ptr = &y;    /*IN*/
    else           /*OUT*/ 
      ptr = &x;    /*OUT*/ 
    
    i++;           /*IN*/
  }
  result = ptr;    /*IN*/  
  return;
  _SLICE(result);
}

