// SAFE

// As test2.c but without using struct's

extern int choose();

int BLAST_NONDET;
int a[100];
int t;

void callback(int i) {
  a[i] = 0;
  if (i == t) a[t] = 0;
}

int main() {
  int i, j;
  int flag;
  
  i = 0;
  while (i < 100) {
    a[i] = 0;
    i++;
  }
  a[t] = 0;
  
  while (BLAST_NONDET) {	
    i = choose();
    a[i] = 1;
    if (i == t) a[t] = 1;
    callback(i);
    _ABORT(a[i] != 0);
  }
  
  i = 0;
  while (i < 5) {
    _ABORT(i == t && a[i] != 0);
    i++;
  }
}

