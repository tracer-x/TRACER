// This program consists of x=0, P, if(x!=0) error() where
// P DOES NOT contain infeasible paths. 

void main(){
  int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;
  int p11,p12,p13,p14,p15,p16,p17,p18,p19,p20;
  int a,x,s;

  //  x=0;
  ///////////////////////////////////////////////////////////////
  // This code is to avoid constant progagation optimizations
  ///////////////////////////////////////////////////////////////
  if(a>0) x=0;
  else{
    if(a>0) x=1;
    else x=0;
  }
  // Here x=0
  ///////////////////////////////////////////////////////////////

  ////////////////////////////////////
  s=0;
  if (p1>0) s=s+1; else s=s+2; 
  if (p2>0) s=s+1; else s=s+2; 
  if (p3>0) s=s+1; else s=s+2; 
  if (p4>0) s=s+1; else s=s+2; 
  if (p5>0) s=s+1; else s=s+2; 
  if (p6>0) s=s+1; else s=s+2; 
  if (p7>0) s=s+1; else s=s+2; 
  if (p8>0) s=s+1; else s=s+2; 
  if (p9>0) s=s+1; else s=s+2; 
  if (p10>0) s=s+1; else s=s+2; 

  if (p11>0) s=s+1; else s=s+2; 
  if (p12>0) s=s+1; else s=s+2; 
  if (p13>0) s=s+1; else s=s+2; 
  if (p14>0) s=s+1; else s=s+2; 
  if (p15>0) s=s+1; else s=s+2; 
  if (p16>0) s=s+1; else s=s+2; 
  if (p17>0) s=s+1; else s=s+2; 
  if (p18>0) s=s+1; else s=s+2; 
  if (p19>0) s=s+1; else s=s+2; 
  if (p20>0) s=s+1; else s=s+2; 


  /////////////////////////////////////
  // TRACER
  _ABORT(x!=0);
  // BLAST/ARMC
  //if (x!=0) ERROR: goto ERROR;
  
}
