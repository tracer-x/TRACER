/* 
   Nicolas' Example. We suppose to see exponential behavior as the if
   conditionals are added (need to check this later).
*/

int main()
{
  int s;
  int c;

  s = c = 0;

  if (c==0) s+=10; else s+=20;
  if (c==0) s+=30; else s+=40;
  if (c==0) s+=50; else s+=60;

  if (s>110) {
  ERROR: goto ERROR;
  }

  return 0;
}
