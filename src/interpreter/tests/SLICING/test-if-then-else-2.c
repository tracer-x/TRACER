// To test that we can count when a if-then-else can be sliced away.
void main(int x){
  int a,b,c,d,y;

    if (x > 0){   /*OUT*/
      a = b;      /*OUT*/
      c = d;      /*OUT*/
    }
 
    return;       /*OUT*/
  _SLICE(y);
}
