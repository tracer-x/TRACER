inline foo() __attribute__((always_inline)) {
    return 1;
}
main() {
    int x1;
    x1=5;
    {
        int x=foo();
        printf("%d\n",x);
    }
}
