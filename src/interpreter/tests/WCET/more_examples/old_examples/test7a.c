int main(int c) {
  int a[10];
  int b[10];
  a[a[1]] = a[a[a[0]]];
  a[a[1]+b[0]] = a[b[0]+b[a[3]]];
  c = 0;
  return c+3;
}
