void p();
int x, y;

void p() {
if (1) {x = x + 2; y = y + 3;}
if (1) {x = x + 2; y = y + 3;}
if (1) {x = x + 2; y = y + 3;}
if (1) {x = x + 2; y = y + 3;}
if (1) {x = x + 2; y = y + 3;}
if (1) {x = x + 2; y = y + 3;}
if (1) {x = x + 2; y = y + 3;}
if (1) {x = x + 2; y = y + 3;}
if (1) {x = x + 2; y = y + 3;}
if (1) {x = x + 2; y = y + 3;}
}

int main() {

  x=0;
  y=0;

  if (x <= 0) {
    p(); p(); p(); p(); p(); p(); p(); p(); p(); p();
    p(); p(); p(); p(); p(); p(); p(); p(); p(); p();
    p(); p(); p(); p(); p(); p(); p(); p(); p(); p();
  }
  _ABORT(x > 600);
  return 0;
}

