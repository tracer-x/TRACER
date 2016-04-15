void main(){
  int c;
  int y2,y3,y1;
  int x2,x3,x1;

  switch(c)            /*OUT*/
    {
    case 1:            /*OUT*/
      y2=y3;           /*OUT*/
      y1=y2;           /*OUT*/
      x1=5;            /*OUT*/
    case 2:            /*IN*/
      y2=y3;           /*OUT*/
      y1=y2;           /*OUT*/
      x1=5;            /*OUT*/
      x3=666;          /*IN*/
    default:           /*IN*/
      x2=x3;           /*IN*/
      x1=x2;           /*IN*/ 
    }

  return;
  _SLICE(x1);
}
