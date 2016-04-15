int NONDET1,NONDET2;

int foo(){
  int x,b,y,z;

  // w/o{x, y, z, NONDET1}  w/{x, z, NONDET1}
  if (NONDET1){
  // w/o{x}     w/{x}
    y =0;    
  }
  else{
  // w/o{y,z}   w/{z}   p9
    b = z ;  
    x = 0 ;  
  }
 
  // w/o{x,y}   w/{x,y}
  if (x > 0) {  
  // w/o{y}     w/{y}
    x = y ;  
  }
  // w/o{x}     w/{x} 
  return x;               
}


void main(){
  int p;

  // w/o{NONDET1,NONDET2}
  if (NONDET2){ 
    p=5;
  }
  else{ 
  // w/o{NONDET1}  
    p = foo();
  }

  return;               
}
     
