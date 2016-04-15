// UNSAFE

extern int unknown();

int foo(){
  int result;
  switch(unknown())
    {
    case 0:
      result= 0;
      break;
    case 5:
      result = 5;
      break;
    case 15:
      result = 15;
      break;
    default:
      result = 20;      
    }

  if (1) {}
  else {}

  return result;
}

void main(){

  int result;

  result = foo();

  _TRACER_abort(result==15);

  return;
}

