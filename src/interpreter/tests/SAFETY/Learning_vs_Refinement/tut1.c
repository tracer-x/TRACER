

int foo(int x, int y) {
  if (x > y) {
    x = x-y;
    if (x<=0) {
    ERROR: goto ERROR;
    }
  }
}
