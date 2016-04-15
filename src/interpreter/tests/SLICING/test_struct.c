struct __s1 {
  int x;
  int y;
  int z;
};

typedef struct __s1 S1;

int main(){

  S1 l1;
  l1.y = 5;              /*IN*/
  l1.z = 666;            /*IN*/
  l1.x = l1.y;           /*IN*/

  return l1.x;           /*IN*/
  _SLICE("$ret");
} 
  
