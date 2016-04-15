int flag;
int val;
double min_tol;
double diff, dx, out;

double fabs(double num)
{
	if (num < 0)
		return -num;
	return num;
}

double sqrt_body(double in)
{
	if (!flag) {
	  dx = (val - in*in) / (2.0 * in);
	  in = in + dx;
	  diff = val - (in*in);
	  if (fabs(diff) <= min_tol) flag = 1;
	}
	else 
	  out = in;
	return out;
}

int main()
{
  double x;
  int i;
  val = 2;  
  x = val/10;
  min_tol = 0.001;

  flag = 0; 
  if (val == 0 ) x = 0;
  else {
    i = 1;
    while ( i < 3) {
      x = sqrt_body(x);
      i++;
    }
  }
  return 0;
}

