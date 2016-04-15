/////////////////////////////////////////////////////////////////////////////
// Assume that external function calls (e.g., malloc and free) are not
// supported. Neither typedef's.
/////////////////////////////////////////////////////////////////////////////

// #include <stdlib.h>
// typedef int vector[1000];

int * addvectors(int * v1,int * v2) {
  int index;
  int * result;         //  = (int *) malloc(sizeof(vector)) ;
  int * temp=result;
  for (index =0;index < 1000;index++)
    (*temp++)= *v1++ + *v2++;
  return result;
}

int main(int argc, char* argv[])
{ 
  int a[1000],b[1000]; //vector a,b;
  int *c;
  int index;
  for( index=0; index < 1000; index++){
    a[index]=10+index;
    b[index]= index*1000;
  }
  
  c= addvectors((int *)a,(int *)b) ;
  // free(c) ;
  return 0;
}
