// SAFE

// Full unroll w/ minmax to prove safety

main() {
  int x = 0;
  while(x < 100) {
    x++;
    if(x == 50)
      break;
  }
  _TRACER_abort(x != 50);
}
