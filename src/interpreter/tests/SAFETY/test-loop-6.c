// SAFE

extern int unknown();

main()
{
  int lock, old, new;

  lock=0;
  new=old+1;

  while (new != old) {
    lock = 1;
    old = new;
    if (unknown()) {
      lock = 0;
      new++;
    }
  }

  _TRACER_abort(lock==0);
  return;
}
