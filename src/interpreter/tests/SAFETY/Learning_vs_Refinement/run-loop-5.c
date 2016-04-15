// SAFE

/* 

As run11.c but we seem to be finally SUCCESSFUL to force the unroll of
the loop.

TRACER doesn't need a full unroll because before the loop it has y>=0
and after one iteration of the loop y is incremented by one. Thus,
y>=0 is invariant. Then, y+n<100 cannot be violated since using the
exit condition of the loop n >=100. Therefore, y+n is always >= 100.

*/

void main() {
  int y, n;

  if (y >= 0) {
    n = 0;
    while (n < 50) {
      y++;
      n++;
    }
    // TRACER _ABORT(y + n < 50);
    // BLAST 
    if (y + n < 50) ERROR: goto ERROR;       
  }
}
