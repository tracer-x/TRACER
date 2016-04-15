/* For copyright information, see olden_v1.0/COPYRIGHT */

#include <cm/cmmd.h>
#include <fcntl.h>
extern int __NumNodes,__NDim;
extern int flag;

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
  if (CMMD_self_address() == 0)
    chatting("Voronoi with %d size on %d procs of dim %d\n",
	     size, __NumNodes, __NDim);
  return size;
  
}
