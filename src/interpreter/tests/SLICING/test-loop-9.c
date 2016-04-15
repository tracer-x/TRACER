// To test that we can count when a loop can be sliced away.

void main(int x){
  int a,b,c,d,y;

    x = 0;            /*OUT*/
    while (x < 10){   /*OUT*/
      a = b;          /*OUT*/
      c = d;          /*OUT*/
      x++;            /*OUT*/ 
    }
 
    return;       /*OUT*/
  _SLICE(y);
}
