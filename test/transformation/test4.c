int foo(int foo_x) {
    int foo_y = 5;
    return foo_x+2;
}
void main() {
    int x,y,z,c,TRACER_NONDET;

    x=0;
    y=5;
    if(TRACER_NONDET > 0)
        y=0;
    else
        x=1;

    if(y > 0)
        z=foo(x);
    _SLICE(z);
}
