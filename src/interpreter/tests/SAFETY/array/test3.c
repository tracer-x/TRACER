// SAFE
void main()
{
  int a[10];
  int x,z;
              
  if (a[z]<0) 
    x=0;        
  else 
    x=1;        
  
  if (a[z]>=0) 
    x++;      

  _ABORT( x!=0 && x!=2);   
}
