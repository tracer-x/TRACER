int x;
int y;
int error;
int TRACER_NONDET;

int main(){

  x = 0;
  y = 0; 
  error = 0;

  while (TRACER_NONDET)
    {
      if (TRACER_NONDET)
	{
	  if (! (x >= 9)) return;
	  x = x + 2;
	  y = y + 1;
	}
      else
	{
	  if (TRACER_NONDET)
	    {
	      if (!(x >= 7)) return;
	      if (!(x <= 9)) return;
	      x = x + 1;
		  y = y + 3;
	    }
	  else
	    {
	      if (TRACER_NONDET)
		{
		  if (! (x - 5 >=0)) return;
		  if (! (x - 7 <=0)) return;
		  x = x + 2;
		  y = y + 1;
		}
	      else
		{
		  if (!(x - 4 <=0)) return;
		  x = x + 1;
		  y = y + 2;
		}
	    }
	}
    }
  
  if ((-1*x) + (2*y)  < 0)
    error = 1;
  
  if ((3*x) - y  < 0)
    error = 1;
  
  _TRACER_abort(error==1);
}
    
