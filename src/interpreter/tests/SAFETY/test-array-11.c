// SAFE

main(){

  int a[100];
  int b[100];
  int x,y,z;
  int p1,p2,p3,p4,p5;

  y=0;

  b[x]=5;
  a[b[x]]=2;


  /* These if-then-else's should be subsumed */

  if (p1>0) y++;
  if (p2>0) y++;
  if (p3>0) y++;
  if (p4>0) y++;
  if (p5>0) y++;

  _TRACER_abort(a[5] != 2);
}
