int y;
foo() {
    int x;
    if(x>0) y=y+x;
    else y=y-x;
}
main() {
    y=0;
    foo();
    foo();
    _SLICE(y);
}
