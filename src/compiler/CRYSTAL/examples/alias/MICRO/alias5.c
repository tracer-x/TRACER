void main(int p, int q){
  int *ptr;
  int *p;
  int *q;
  int x,y,z,result;

  if (p>0)         
    ptr = &y;     
  else             
    ptr = &x;     
  
   p = q;

  if (q<0){        
    x=17;          
    y=18;          
  }
  else{            
    x=19;          
    y=20;          
  }
  
  result = *ptr;  
  return;
}

/* Pointer analysis: [Steensgaard, field-insensitive] */
/*  points-to-set([q, p]) */
/*  points-to-set([y, *ptr, x]) */
/*  points-to-set([ptr, &(y), &(x)]) */
