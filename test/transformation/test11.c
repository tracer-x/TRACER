int x;
foo() {
  int f,g,h1,i,j,k;
  j=k;
  i=j;
  h1=i;
  g=h1;
  f=g;
  if(f)
    goto ret;
  ret:
  return 0;
}
main() {
  int y,retres,retval;
  x=1;
  y=foo();
  _SLICE(x);
}
