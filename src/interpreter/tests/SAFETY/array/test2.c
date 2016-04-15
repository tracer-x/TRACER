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
struct event a[100];
int t;

void callback(int i) {
  a[i].cb[0].fname = 0;
  a[i].valid = 0;
  if (i == t) a[t].valid = 0;
}

int main() {
  int i, j;
  int flag;
  
  i = 0;
  while (i < 100) {
    a[i].valid = 0;
    i++;
  }
  a[t].valid = 0;
  
  while (BLAST_NONDET) {	
    i = choose();
    a[i].valid = 1;
    if (i == t) a[t].valid = 1;
    a[i].cb[0].fname = 1;
    callback(i);
    _TRACER_abort(a[i].valid != 0);
  }
  
  i = 0;
  while (i < 5) {
    _TRACER_abort(i == t && a[i].valid != 0);
    /*
      flag = 0;
      for (j=0; j < 100; j++) {
      if (a[i].cb[j].fname != 0) {
      flag = 1;
      }
      }
      if (flag == 0) 
    */	  	
    i++;
  }
}

