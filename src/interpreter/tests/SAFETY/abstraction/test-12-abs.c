main(){
  int i,count,n;
  
  _TRACER_assume(count >= 0);
  i=0;
    
  _TRACER_abstract(i, i>=0, i <=100);
  while (i < 100 ){ 
      count++;
      i++;
  }
  
  _TRACER_abort( (i > 100 ) || count < 0);
}
