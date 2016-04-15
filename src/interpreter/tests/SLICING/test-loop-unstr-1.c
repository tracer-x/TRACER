// There is no structured exits but there is one unstructured exit
// due to the break.

void main(){
  int i,found;
  int x1,x2,x3,x4;  
  i=0; /*IN*/
  while(1) /*IN*/ {
    if /*IN*/ (i==10) {
      x2=x1;   /*IN*/;
      x3=x2;   /*IN*/;
      x4=x3;   /*IN*/;
      found=x4 /*IN*/; 
      break;   /*IN*/}
    /*else IN*/
    i++; /*IN*/     
  }
  return; /*OUT*/
  _SLICE(found);
}
   
