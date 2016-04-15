// SAFE

struct t { int n; };

void main() {
  struct t a;
  a.n = 5;
  
  _TRACER_abort(a.n != 5);
}

