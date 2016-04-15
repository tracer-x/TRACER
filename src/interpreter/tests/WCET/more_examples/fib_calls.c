int fib(int n)
{
  int  i, Fnew, Fold, temp,ans;

    Fnew = 1;  Fold = 0;
    for ( i = 2; i <= n; i++ )
    {
      temp = Fnew;
      Fnew = Fnew + Fold;
      Fold = temp;
    }
    ans = Fnew;
    return ans;
}

int main()
{
  int a, out;
  for (a = 1; a < 100; a++)
        out = fib(a);

  return out;
}
