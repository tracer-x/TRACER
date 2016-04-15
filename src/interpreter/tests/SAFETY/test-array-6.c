// UNSAFE

extern int unknown();

main()
{
  int a[5];

  if (unknown()) {
    a[5] = 0;
    a[a[5]] = 3;
  } else {
    a[5] = 2;
    a[0] = 1;
  }

  _TRACER_abort(a[0]<2 && a[5]>0);

  return;
}
