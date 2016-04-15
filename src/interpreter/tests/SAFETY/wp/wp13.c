// UNSAFE 

main(){

  int x,y;

  if (x>5){
    if (y>0)
      y++;
    else
      x=x-10;

    if (x<50){
      _TRACER_abort(x < 0);
    }
  }
}
