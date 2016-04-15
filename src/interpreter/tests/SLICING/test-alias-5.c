// This program is from "Parametric Program Slicing" by
// Field, Ramalingam, and Tip, Figure 1.

void main(int p, int q){

  int *ptr;
  int x,y,result;

  if (p>0)           /*IN*/
    ptr = &y;        /*IN*/
  else               /*IN*/ 
    ptr = &x;        /*IN*/
  
  if (q<0){          /*IN*/
    x=17;            /*IN*/ 
    y=18;            /*IN*/
  }
  else{              /*IN*/
    x=19;            /*IN*/
    y=20;            /*IN*/ 
  }
  
  result = *ptr;     /*IN*/
  return;
  _SLICE(result);
}

