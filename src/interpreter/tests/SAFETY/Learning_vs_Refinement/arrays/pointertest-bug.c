/*
  Pointer test example from Blast package
  Blast aborts on this example

  Current version of TRACER able to detect violation of safety due
  to lack of separation information (that separately declared variables
  are separated in the computer memory).
*/

int main() {
	int **y;
	int **x;
	int c;
	int *f, *g;
	int *m1, *m2;
	int q, r;

	q = 0;
	r = 0;
	f = & q; g = & r;
	x = & f; y = & g;


	m1 = *x;
	*m1 = 5;
	m2 = *y;
	*m2 = 3;

	*x = *y;

	c = **x;
	*x = 0;
	*y = 0;

	/*
	if( c == 3){
ERROR:	goto ERROR;
	}
	*/

	_ABORT(c==3);
}
