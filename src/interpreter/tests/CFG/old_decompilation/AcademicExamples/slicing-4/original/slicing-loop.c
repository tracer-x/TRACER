int main(){
  int p,x,y,z;
  int i,N;
  i=0;         /*IN*/ 
  while (i<N){ /*IN*/
    if(p>0)    /*OUT*/
      z=2;     /*OUT*/
    else       /*OUT*/
      z=3;     /*OUT*/
    if(x>0)    /*IN*/
      y=0;     /*IN*/
    if(y>0)    /*IN*/
      x=y;     /*IN*/
    else       /*IN*/
      x=2;     /*IN*/
    i++;       /*IN*/
  }
  return x;   /*IN*/

}
