/* For copyright information, see olden_v1.0/COPYRIGHT */

#include <cm/cmmd.h>
#include <fcntl.h>
extern int __NumNodes,__NDim;
int flag;

void filestuff()
{
  CMMD_fset_io_mode(stdout, CMMD_independent);
  fcntl(fileno(stdout), F_SETFL, O_APPEND);
  if (CMMD_self_address()) exit(0);
  __InitRegs(0);
}

int mylog(int num)
{
  int j=0,k=1;
  
  while(k<num) { k*=2; j++; }
  return j;
} 

int dealwithargs(int argc, char *argv[])
{
  if (argc > 2)
    flag = atoi(argv[2]);
  else 
    flag = 0;

  if (argc > 1) 
    __NumNodes = atoi(argv[1]);
  else 
    __NumNodes = 4;

  __NDim = mylog(__NumNodes);

  return __NumNodes;
}
