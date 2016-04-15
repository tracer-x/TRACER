// arr_to_ptr=true,alias_analysis=true
main() {
	int *p, a[5][10], b[5], c[4];

	p = &(a[b[2]][c[3]]);

	a[b[2]][c[3]] = 4;

	*p = 5;
}
