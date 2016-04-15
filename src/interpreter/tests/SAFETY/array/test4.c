// SAFE

struct callback {
  int fname;
  void * arg;
};

struct event {
  int valid;
  struct callback cb[100];
};


extern int choose();

int BLAST_NONDET;
struct event *a[100];
int t;

void callback(int i) {
  (a[i]->cb)[0].fname = 0;
  a[i]->valid = 0;
  if (i == t) a[t]->valid = 0;
}

int main() {
  int i, j;
  int flag;
  
  i = 0;
  while (i < 100) {
    a[i] = (struct event *)malloc(sizeof(struct event));
    a[i]->valid = 0;
    i++;
  }
  a[t]->valid = 0;
  
  while (BLAST_NONDET) {
    i = t;
    _ABORT(a[i]->valid != 0);
  }
}

