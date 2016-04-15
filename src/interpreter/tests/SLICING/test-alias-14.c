//#include "stdio.h"

void main(){
  int v[4] ={34,35,36,37};
  int *p,*q;
  int x,y;
  int i,j;

  // pointers
  p  = (int *) malloc(4*sizeof(int));
  *(p+0) = 34;
  *(p+1) = 35;
  *(p+2) = 36;
  *(p+3) = 37;

  for (j=0;j<4;j++){ 
    y = *(p+j);
    //  printf("%d = %d \n",j,y);
  }

  // points-to-set([*((*(&p) + 3)), *((*(&p) + 2)), *((*(&p) + 1)), *(*(&p)), *((*(&p) + *(&j)))])
  // points-to-set([(*(&p) + *(&j)), *(&p), (*(&p) + 1), (*(&p) + 2), (*(&p) + 3), malloc0])

  // array
  for (i=0;i<4;i++){ 
    // BAD
    // x= *((&v + *(&i)));

    // GOOD
    x= v[i];
    // x= *(v+i);
    // x = *(*(&v)+*(&i));
    // printf("%d = %d \n",i,x);
  }

  // points-to-set([*((&v + 1)), *((&v + 2)), *((&v + 3)),*(&v), *((&v + *(&i)))])
  // points-to-set([(&v + *(&i)), (&v + 1), (&v + 2), (&v + 3),  &v])

}

 
