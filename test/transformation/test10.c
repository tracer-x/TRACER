void main(void) 
{
  int x, y, z;

  {
  x = 0;
  if (y >= 0) {
    if (z == 2) {
      goto L;
    } else {
      goto def;
      if(1) {
          L: goto breakk;
          def:;
      }
      else {
          breakk: ;
      }
    }
  }
  _SLICE(x);
  return;
}
}

