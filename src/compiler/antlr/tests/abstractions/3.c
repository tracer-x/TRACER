// abstraction, with global var and arrays
int p[10];
int q = 5;
main() {
	int x, y, z[10];

	x = 5;
	y = 2;
	z[3] = 2;

	_TRACER_abstract(p,z[2],p[3]>5,z[3]==6);
}
