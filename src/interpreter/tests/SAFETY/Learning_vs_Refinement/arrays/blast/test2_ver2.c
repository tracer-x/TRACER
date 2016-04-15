struct callback {
	int fname;
	void * arg;
};

struct event {
	int valid;
	struct callback cb[5];
};


int __BLAST_NONDET;

struct event a[5];
int t;

void error() {
ERROR: goto ERROR;
}
int choose();

void callback(int i) {
        a[i].cb[0].fname = 0;
	a[i].valid = 0;
	if (i == t) a[t].valid = 0;
}

int main() {
	int i, j;
	int flag;

	i = 0;
	while (i < 5) {
		a[i].valid = 0;
		i++;
	}
	a[t].valid = 0;

	while (__BLAST_NONDET) {	
	  i = choose();
	  a[i].valid = 1;
	  if (i == t) a[t].valid = 1;
          a[i].cb[0].fname = 1;
	  callback(i);
	  if (a[i].valid != 0) error();
        }

	i = 0;
	while (i < 5) {
		if (i == t && a[i].valid != 0) {
/*
                        flag = 0;
			for (j=0; j < 5; j++) {
				if (a[i].cb[j].fname != 0) {
                                  flag = 1;
                                }
			}
                        if (flag == 0) 
*/
			  error();
                }
		i++;
	}
}
