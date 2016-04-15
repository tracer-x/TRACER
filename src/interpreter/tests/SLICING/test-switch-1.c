void main(){
  int c;
  int y2,y3,y1;
  int x2,x3,x1;

  switch(c)       /*IN*/ 
    {
    case 1:       /*IN*/
      y2=y3;      /*OUT*/
      y1=y2;      /*OUT*/
      x1=5;       /*IN*/
      break;      /*IN*/
    case 2:       /*IN*/
      y2=y3;      /*OUT*/
      y1=y2;      /*OUT*/
      x1=5;       /*IN*/
      break;      /*IN*/
    case 5:       /*IN*/
      y2=y3;      /*OUT*/
      y1=y2;      /*OUT*/
      x1=5;       /*IN*/
      break;      /*IN*/
    default:      /*IN*/ 
      x2=x3;      /*IN*/
      x1=x2;      /*IN*/
      break;
    }

  return;         /*OUT*/
  _SLICE(x1);
}
