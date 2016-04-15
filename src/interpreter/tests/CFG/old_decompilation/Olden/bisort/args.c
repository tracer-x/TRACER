/* For copyright information, see olden_v1.0/COPYRIGHT */

#include <cm/cmmd.h>
#include <fcntl.h>
extern int __NumNodes,__NDim;
int mylog(int num)
{
  int j=0,k=1;
  
  while(k<num) { k*=2; j++; }
  return j;
} 

extern int flag;
int dealwithargs(int argc, char *argv[])
{
  int size;

  if (argc > 3)
    flag = atoi(argv[3]);
  else
    flag = 0;

  if (argc > 2) 
    __NumNodes = atoi(argv[2]);
  else 
    __NumNodes = 4;

  if (argc > 1)
    size = atoi(argv[1]);
  else
    size = 16;
  __NDim = mylog(__NumNodes);
  return size;
  
}

void filestuff()
{
  CMMD_fset_io_mode(stdout, CMMD_independent);
  fcntl(fileno(stdout), F_SETFL, O_APPEND);
}
