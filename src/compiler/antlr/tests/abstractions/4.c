// abstraction, with global var and arrays, and re-use of name in different scope
int x[10];
int y = 5;
main() {
	int x, y[10];

	x = 5;
	y[2] = 2;

	_TRACER_abstract(x,y[2],x>5,y[2]<10);
}
