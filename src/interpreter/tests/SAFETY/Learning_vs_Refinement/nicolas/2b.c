
int __BLAST_NONDET;


int main()
{
  int s, c;

  s=0;

  if (__BLAST_NONDET) c=1; else c=0;

  if (c==1) s+=1; else s+=2;
  if (c==1) s+=4; else s+=8;
  if (c==1) s+=16; else s+=32;
  if (c==1) s+=64; else s+=128;
  if (c==1) s+=256; else s+=512;
  
  if (c!=0 && s>682)
    ERROR: goto ERROR;

  return 0;
}
