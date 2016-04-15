void main(){
  int a,b,x,y,z;


  // w/o witnesses:  {a,x,y,z}  w/ witnesses: {a,x,z} 
  if (a > 0){     
  // w/o witnesses:  {x}        w/ witnesses: {x}
      y =0;  
  }    
  else{
  // w/o witnesses:  {y,z}      w/ witnesses: {z}
      b = z ;    
      x = 0 ;    
  } 
  // w/o witnesses:  {x,y}      w/ witnesses: {x}
  if (x > 0)     
    x = y ;    
  
  return;      
}
