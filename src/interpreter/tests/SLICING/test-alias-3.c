struct __s1 {
  int x;
  int y;
};

typedef struct __s1 S1;

void main(){
  S1 * ptr1;
  int a,b,c;

                      /* Expected results */  
  ptr1->x = 666;             /*IN*/           
  ptr1->y = 777;             /*IN*/    /* OUT if field-sensitive slicing */

  c=ptr1->x;                 /*IN*/           
  b=c;                       /*IN*/           
  a=b;                       /*IN*/           

  return;
  _SLICE(a);                
}
