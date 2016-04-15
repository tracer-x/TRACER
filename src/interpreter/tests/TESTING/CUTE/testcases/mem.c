#include <cute.h>

struct foo { int i; char c; };

void * memsett(void *s,char c,int n){
  int i;
  for(i=0;i<n;i++) ((char *)s)[i]=c; return s;
}

f () {
  struct foo * a;
  CUTE_input(a);
  if (a && a->c == 1) {
    memsett(a,0,sizeof(struct foo));  
    if (a->c != 1) {
      CUTE_assert(0); 
    }
  }
}
