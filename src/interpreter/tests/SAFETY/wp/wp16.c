// Limitations of ndwp: actually partially solved because we can
// propagate backwards t=999 through the guard x2==0.

main(){

  int t,x2,x3,temp;

  // wp: true
  t = 1;
  x2 = temp;
  x3 = temp;
  // wp: x3 < 3 and t<=999
  // but forward symbolic state does not imply (x3 < 3 and t<=999)
  // Then, wp: t=1, x3=temp, x2=temp
  if (x2 == 0){
    // wp: x3 < 3 and t<=999
    if (x3 == 3)
      t++;
  }

  // wp t <= 999
  t++;
  // wp: t <= 1000
  _ABORT(t>1000);

}
