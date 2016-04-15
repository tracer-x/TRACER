// arr_to_ptr=true,alias_analysis=true
typedef struct t {
	int c;
	int b;
} t1;

main() {
	int *p;
	t1 *a;

	p = &(a->b[3]);

	a->b[3] = 12;

	*p = 5;
}
