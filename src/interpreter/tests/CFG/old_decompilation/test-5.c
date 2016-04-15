void main(){

  int x1,x2,x3,x4,x5;
  int s;

  s=0;

  if (x1) s=s+1; else s=s+2;
  if (x2) s=s+1; else s=s+2;
  if (x3) s=s+1; else s=s+2;
  if (x1 || x2) s=s+1; else s=s+2;
  if (x3) s=s+1; else s=s+2;
  if (x4) s=s+1; else s=s+2;
  if (x2 && x4) s=s+1; else s=s+2;
  _ABORT(s > 14);
}
