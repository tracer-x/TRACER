// This example tries to show that reasoning about a long path is
// expensive for BLAST

// TRACER: 4s
// BLAST : > 30m
// ARMC  : 4m36s
void main() {
  int a,b;
  int x,y;

  x = 0;
  y = 0;

  ///////////////////////////////////////////////////////////////
  // This code is to avoid constant progagation optimizations
  ///////////////////////////////////////////////////////////////
  if(a>0) b=1;
  else{
    if(a>0) b=0;
    else b=1;
  }
  // Here b=1
  ///////////////////////////////////////////////////////////////

  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}

  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}

  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}

  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}

  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}

  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}

  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}

  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}

  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}

  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}

  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}

  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}

  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}

  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}

  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}
  if (b>0) {x = x + 2; y = y + 3;}

  // BLAST, ARMC
  if(x>300) ERROR: goto ERROR;

  // TRACER
  //_ABORT(x > 300);
  return;
}
