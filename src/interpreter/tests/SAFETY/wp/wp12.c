// SAFE

// -intp ndwp should get the same tree than -int dwp because the
// disjunction from the safety condition can be avoided.

void main(){
  int y1,y2,y3;
  int x = 0;
  int p,z;

/*   if (y1>0)  x=x+1; */
/*   else y1=1; */
  if (y2>0)  x=x+2;
  else y2=3;
  if (p>0) z=3;
  else z=2; 
  if (y3>0)  x=x+4; 
  else y3=3;

  _TRACER_abort(x>6 /* x>7 */ &&  (/* y1<0 || */ y2<0 ||  y3<0 ) );
  return;
}
