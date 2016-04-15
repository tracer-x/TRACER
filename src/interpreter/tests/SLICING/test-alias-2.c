void main(){
  int x,y,w,z;
  int *ptr1;
  int *ptr2;

  z = 666;            /*OUT*/            
  w = 999;            /*OUT*/           

  ptr1 = &y;          /*IN*/ 
  ptr2 = &w;          /*OUT*/            
  
  *ptr2 = z;          /*OUT*/            
  x = *ptr1;          /*IN*/            

  return;             /*OUT*/           
  _SLICE(x);
}

