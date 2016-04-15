// SAFE

/* 
   BLAST adds: y>=1, y+z >=2, a+y+z>=3, a+b+y+z>=4, x >= 4 and proves
   safety
   TRACER runs forever unless an abstraction like above is used.
*/
main(){
  int x,y,z,n,i,a,b;

  if ( n > 0 && y >0 && z >0 && a>0 && b>0){
    i= 0;
    x= y + z + a + b;
    // With the following abstraction works:
    //_TRACER_abstract(x,y,z, y+z+a+b>0 && x==y+z+a+b);
    while (i < n){
      y++;
      z--;
      a++;
      b--;
      i++;
    }
    // { inv: y > 0, n > 0, x = y+z}
    _TRACER_abort(x <= 0);
    // if (x<=0) ERROR: goto ERROR;
  } 
}

// Candidates    : x>y, y>0, n>0, i=0, x=y+z
// Loop invariant: y>0, n>0, x=y+z
