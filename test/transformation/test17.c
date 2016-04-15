main() {
    int x;

    x=0;
    if(x != 0) x = x+5678;
    else x = x+1;
    _TRACER_abort(x > 5000);
}
