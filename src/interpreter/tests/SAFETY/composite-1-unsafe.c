// UNSAFE
// This example proves safety if the safety condition does not depend
// on pointers

int main(){
  int *ptr;
  int x = 1;
  int i;
  int numitems = 3;
  int data[numitems];
  
  //  for(ptr = data; ptr < &data[numitems]; ptr++)
  //    *ptr = 0;
  //  }
    
  for(i = 0; i < numitems; i++){
    ptr  = &data[i];
    *ptr = 0;
  }

  _TRACER_abort(x >= 0); 

  return 0;
}
