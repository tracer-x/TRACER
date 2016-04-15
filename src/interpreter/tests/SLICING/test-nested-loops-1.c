
int f(int n) {		  
  int x;
  int i;

  x=0;
  while (n>0) {
    i=n;
    while (i>0) {
      x += 1;
      i--;
    }
    n--;
  }
  return x;
}

int g(int n) {
  
  int x;
  int i;

  x=0;
  while (n>0) {
    i=0;		
    while (i<n) {
      x += 1;
      i++;
    }
    n--;
  }
  return x;
}

int decrement (int a) {
  return a -1;
}


int f2 (int n) {
  
  int x;
  int i;
  
  x=0;  
  while (n>0) {
    i=n;
    while (i>0) {
      x += 1;
      if (i%2==0) {
	i = decrement (i);
      }
      else {
	i = decrement (i);
	i--;
      }
    }
    n--;
  }
  return x;
}


void main(){

  int NONDET,k,x;
  
  if (NONDET) k=1;
  else k=2;

  x = f2(k);
  _SLICE(x);
}



