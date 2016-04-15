int main(){
  int p,x,y,z;

  if(p>0)   /*OUT*/ 
    z=2;    /*OUT*/
  else      /*OUT*/ 
    z=3;    /*OUT*/

  if(x>0)   /*IN*/   
    y=0;    /*IN*/ 

  if(y>0)   /*IN*/
    x=y;    /*IN*/
  else  
    x=2;    /*IN*/

  return x;
  _SLICE(x);
}
