/*
  Similar to test-loop-6.c with new++ updated to new+=2
 */

// SAFE

extern int unknown();

int main()
{
  int lock, old, new;

  lock=0;
  new=old+1;

  while (new != old) {
    lock = 1;
    old = new;
    if (unknown()) {
      lock = 0;
      new+=2;
    }
  }

  _TRACER_abort(lock==0);
  return 0;
}
