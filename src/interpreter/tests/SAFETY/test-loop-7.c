extern int unknown();

// SAFE
void main()
{
  int e, s;

  e=0;
  s=2;  
  while (unknown()) {
    if (s == 2){
      if (e ==0) e=1;
      s = 3;
    }
    else if (s == 3){
      if (e ==1) e=2;
      s=4;
    }
    else if (s == 4){
      _TRACER_abort(e == 3);
      s=5;
    }
  }
  return;
}

