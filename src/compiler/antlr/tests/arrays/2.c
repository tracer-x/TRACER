// nested arrays
main() {
	int a[10], b[5], x;

	a[2] = b[3];
	
	b[2] = a[7];

	a[3] = x + b[2];

	x = a[b[x]];

	b[a[x]] = b[a[2]];

	return a[b[x]];
}
