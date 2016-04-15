// SAFE

// Safety on test-3.c:
//   5884 states
//   1650 subsumed
//   15.22sec

// Safety on decompiled program
// ???
int s;

void sumOfsets(){
  int p1,p2,p3,p4,p5;

  if (p1) s=s+1; else s=s+2;
  if (p2) s=s+1; else s=s+2;
  if (p3) s=s+1; else s=s+2;
  if (p4) s=s+1; else s=s+2;
  if (p5) s=s+1; else s=s+2;
  return;
}

void main(){

  s=0;
  sumOfsets();
  sumOfsets();
  sumOfsets();
  sumOfsets();
  sumOfsets();
  //_ABORT(s > 50);
  return; 
}
