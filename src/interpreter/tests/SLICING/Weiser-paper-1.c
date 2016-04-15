/******************************************************************/
/*                 Slicing Test Problem                           */
/* This program is adapted to C from "Program Slicing", Weiser'84 */
/******************************************************************/
/* Features:                                                      */
/*  * No loops                                                    */
/*  * Intraprocedural                                             */
/******************************************************************/

int main(){
  // read(x,y);
  int x;
  int y;
  int z;
  int total = 0;             /* IN */ 
  int sum   = 0;             /* OUT */
  if (x <= 1){               /* OUT */
    sum = y;                 /* OUT */
  }
  else{                      /* IN */
    // read(z);
    z = 0;                   /* OUT */
    total = x + y;           /* IN */
    // total = x * y
  }
  // write(total,sum)  
  return total;              /* OUT */
  _SLICE(total);
}

// Slice on <END,{total}>
/*
int main(){
  // read(x,y);
  int x;
  int y;
  int total = 0;
  if (x <= 1){
  }
  else{
    total = x * y;
  }
  // write(total,sum)  
  return total;
}
*/
// Slice on <END,{z}>
/*
int main(){
  // read(x,y);
  int x;
  int y;
  if (x <= 1){
  }
  else{
    // read(z);
    int z = 0; 
  }
}
*/
