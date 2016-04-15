/*
  An array example from Blast package
  Blast aborts on this example:
  It seems to be executing an infinite loop

  TRACER reaches the error due to weak loop invariants
*/

int a[100];
int t;

void error() {
  /*  ERROR: goto ERROR; */
  _ABORT(1>0);
}

int main() {
	int i;
	int N;

	i = 0;
	while (i < N) {
		a[i] = 0;
	if (i==t) a[t] = 0;
		i++;
	}

	i = 0;
	while (i < N) {
		if (i == t && a[i] != 0) 
		  error();
		i++;
	}
}
