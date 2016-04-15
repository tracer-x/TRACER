void main(){
  int a,b,c;
  int i=0;                 /*IN*/ 
  int n;
  
  // The whole while-loop is included because the return control-based
  // affects the criteria.

  while (i < n){           /*IN*/
   /*IN*/ if (i == 99){ /*IN*/ return;} 
    i++;                   /*IN*/
  }

  b=c;                   /*IN*/
  a=b;                   /*IN*/
  return;                /*OUT*/
  _SLICE(a);
}  
