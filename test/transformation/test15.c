int y;
foo() {
    int x;
    if(x>0) y=y+x;
    else y=y-x;
}

bar() {
    int x;
    if(x>123) y=y+456*x;
    else y=y+789*x;
}

main() {
    int x;
    y=x;
    foo();
    bar();
    if(x<999) y=y-888;
    _SLICE(y);
}
