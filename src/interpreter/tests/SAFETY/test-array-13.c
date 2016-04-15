// SAFE

main(){

  int a[10];
  int b[10];
  int c[10];
  int i,x,y,z;
  int *p1,*p2,*p3,*p4,*p5;

  y=0;
  for(i=0;i<10;i++){ c[i]=0;}

  b[x]=c[0]+c[1]+c[2]+c[3]+5;
  a[b[x]]=2;

  /* These if-then-else's should be subsumed */

  if (*p1>0) y++;
  else y=y+2;
  if (*p2>0) y++;
  else y=y+2;
  if (*p3>0) y++;
  else y=y+2;
  if (*p4>0) y++;
  else y=y+2;
  if (*p5>0) y++;
  else y=y+2;

  _TRACER_abort(a[5] !=2);
}
