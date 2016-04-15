// Test control-dependency does not affect.
void main(int x){
  int y,z;

  if (x>0)       /*OUT*/
    z=7;         /*OUT*/ 
  else           /*OUT*/
    z=10;        /*OUT*/ 

  y=x;           /*IN*/
  return;        /*OUT*/
  _SLICE(y);
}
