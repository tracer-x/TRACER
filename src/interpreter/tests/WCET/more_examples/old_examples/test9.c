/* 
   To test that initialization are
   properly converted to statements
*/

int main()
{
  int x;
  int y=0;

  x = 0;
  while (x < 10) {
    int z = x + 2;

    x++;
  }
  return 0;
}
