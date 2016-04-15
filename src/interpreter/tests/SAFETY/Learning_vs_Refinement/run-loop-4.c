// SAFE
// SAFE

// If pblast.opt -dfs run-loop-3b.c  then BLAST unrolls completely.

void main() {

  int x, y, n;
  int NON_DET_1;
  int NON_DET_2;
  n=1;

  if ((x > 0) && (y > 0)) {

    while (n < 100) {
      if (NON_DET_1)   x=x+1; else x=x+2;
      if (NON_DET_2)   y=y-1; else y=y+n;
      n++;
    }

    if ((y <= 0) && (x <= 0)) {
      // BLAST
    ERROR: goto ERROR;
      // ARMC 
      //ERROR: return; 
    }
  }
  return;
}
