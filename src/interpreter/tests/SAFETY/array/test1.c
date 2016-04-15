// SAFE

int a[100];
int t;

int main() {
  int i;
  int N;
  
  i = 0;

  while (i < N) {
    a[i] = 0;
    if (i==t) a[t]=0;
    i++;
  }
  
  i = 0;
  while (i < N) {
    _ABORT(i==t && a[i]!=0); 	  
    //if(i==t && a[i]!=0) ERROR: goto ERROR;
    i++;
  }
}
