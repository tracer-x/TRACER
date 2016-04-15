void main(){

                      /* w/o control opt */        /* w/ control opt */
  int p = 1;                /*IN*/                      /*OUT*/    
  int n = 5;                /*IN*/                      /*IN*/
  int result;

  int i=1;                  /*OUT*/                     /*OUT*/ 
  int sum=0;                /*OUT*/                     /*OUT*/ 

  while (i != n){           /*OUT*/                     /*OUT*/ 
    sum = sum + i;          /*OUT*/                     /*OUT*/
    i = i +1;               /*OUT*/                     /*OUT*/ 
  }

  if (p>0)                  /*IN*/                      /*OUT*/
    result = n+(n-1)-2;     /*IN*/                      /*IN*/
  else                      /*OUT*/                     /*OUT*/
    result = sum;           /*OUT*/                     /*OUT*/

  return;
  _SLICE(result);
}
