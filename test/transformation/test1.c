main() {
    int x,y,z,c,TRACER_NONDET;

    x=0;
    y=5;
    if(TRACER_NONDET > 0)
        y=0;
    else
        x=1;

    if(y > 0)
        z=x;
    _SLICE(z);
}
