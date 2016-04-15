// To run pointer analysis: crystal -v=20 alias-1.c

// original program: 
//  points-to-set([ptr, &(x), &(y)])
//  points-to-set([x, y, *ptr])



void main(int p, int q){

  int *ptr;
  int x,y,result;
  int NONDET;

  p=5;

  while(NONDET){
    if (p>0)       
      ptr = &y;    
    else           
      ptr = &x;    
    
    if (q<0){      
      x=17;        
      y=18;        
    }
    else{             
      x=19;           
      y=20;           
    }
  }
  result = *ptr;     
  return;
}
