
int complex(int a, int b)
{
  while(a < 30)
    {
      while(b < a)
	{ 
	  if(b > 5) 
	    b = b * 3; 
	  else
	    b = b + 2;
	  if(b >= 10 && b <= 12) 
	    a = a + 10;
	  else 
	    a = a + 1;
	}
      a = a + 2; 
      b = b - 10; 
    }
  return 1;
}

int main()
{   
  /* a = [1..30] b = [1..30] */ 
  int a = 1, b = 1, answer = 0; 
  if(answer)
    {a = 1; b = 1;}
  else
    {a = 30; b = 30;}
  answer = complex(a, b);
  return answer;
}



