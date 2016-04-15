struct FOO {
  int data;
  int flag;
};

extern int malloc();

int foo (){
  return 0;
}

int main(){
  
  int skip;  
  struct FOO *x, *y;
  
  x = malloc();
  y = malloc();
    
  x->data = 1;
  
  foo();
  
  y = x;
  
  foo();
  
  //y -> data = 0;
  
  foo ();  
}

/* Pointer analysis: [Steensgaard, field-insensitive] */
/*  points-to-set([x, y, &(x->data), malloc0, malloc1]) */

/* Pointer analysis: [Steensgaard, field-sensitive] */
/*  points-to-set([x, y, malloc0, malloc1]) */
