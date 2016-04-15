struct DATA {
  int  key;
  int  value;
}  ;

struct H{
  int a, b;
};

int test(int d, int e){
    return d+1;
}

void main() {
    int a[20];
    int b[10];
    int c;
    struct DATA d;
    a = a[test(3, b[2])+2];
    a[a[1]+b[0]] = a[b[0]+b[a[3]]];
    test(1,2);
    c = d.key + d.value + 3;
    d.key = 4;
    a[d.key] = 3;
}
