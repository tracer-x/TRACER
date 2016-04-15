/*
  Pointer example from Blast package
  Blast unable to prove that the error condition is unreachable

  Current version of TRACER unable to prove that the error condition
  is unreachable due to lack of separation information (that the declared
  variables are separated).
 */

int bar(){
}

int main() {
	int **y;
	int **x;
	int c;
	int *f, *g;
	int *m1, *m2;
	int q, r;

	f = & q;
	g = & r;
	
	bar ();
	
	x = & f;
	y = & g;
 
/*	q = 0;
	r = 0;

	bar();
	

 	bar();

	m1 = *x;
	*m1 = 5;

	bar(); */

		
	bar();
	
	m2 = *y;
	*m2 = 3;

	bar();

	*x = *y;
	c = **x;

	bar();

//	*x = 0;
//	*y = 0;

/*
	if( c != 3){
	ERROR:	goto ERROR;
	}
*/
	_ABORT(c<3 || c>3);
}
