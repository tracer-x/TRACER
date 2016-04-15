int main()
{
  int s, c;

  s=c=0;
  if (c==1) s+=1; else s+=2;
  if (c==1) s+=4; else s+=8;
  if (c==1) s+=16; else s+=32;
  
  if (s>42)
    ERROR: goto ERROR;

  return 0;
}
