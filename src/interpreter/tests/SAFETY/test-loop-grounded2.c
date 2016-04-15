/* Again UNSAFE, but only when -mm-refine-topdown y is used
 * (refer to test-loop-grounded.c) */
main() {
    int x=0, y=0, i=0, j, m, n;

    /* inputs */
    n=5;
    m=2;

    /* symbolic constraints generalizing the inputs */
    //_TRACER_assume(n > 0);
    //_TRACER_assume(m > 0);
    //_TRACER_assume(n >= m+2);

    while(i < n) {
        j=i;
        while(j < n) {
            if (j > m) x=1; else x=-1;
            j++;
        }
        i++;
    }

    _TRACER_abort(x > 0);
}


