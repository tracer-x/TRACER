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

	if( c != 3){
	ERROR:	goto ERROR;
	}
}
