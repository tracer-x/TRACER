/* Obviously UNSAFE, but only when run with -mm-refine-topdown y 
 * Otherwise we end up cutting the search space by refining at some
 * irrelevant point and say SAFE (UNSOUND!). The bug needs to be
 * carefully fixed. -mm-refine-topdown is simply a patch */
main() {
    int x=0, i=0,j=0;
    while(i < 5) {
        j=i;
        while(j < 5) {
            x++; /* even if this line is commented, we say SAFE!
                  * unless -mm-refine-topdown y is used */
            j++;
        }
        i++;
    }
    _TRACER_abort(x>=0);
}

