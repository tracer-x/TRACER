// SAFE

extern int unknown();

main()
{
  int a[5];
  int b[5];

  if (unknown()) {
    a[4] = 0;     
    a[a[4]] = 3;  
  } else {
    a[4] = 2;     
    a[0] = 1;     
  }

  b[0]=100;
  b[1]=101;
  b[2]=102;
  b[3]=103;
  b[4]=104;

  _TRACER_abort((a[0]< 1 || a[0]>3)  && (a[4] < 0 || a[4] > 2));

  // _TRACER_abort(b[3] == 103);
  return;
}
