/* For copyright information, see olden_v1.0/COPYRIGHT */

extern int __NumNodes;
extern int nbody;
#include <cm/cmmd.h>
#include <fcntl.h>

filestuff()
{
  fcntl(fileno(stdout), F_SETFL, O_APPEND);
}

int dealwithargs(int argc, char *argv[])
{
  int level;

  if (argc > 2) 
    __NumNodes = atoi(argv[2]);
  else 
    __NumNodes = 4;

  if (argc > 1)
    nbody = atoi(argv[1]);
  else
    nbody = 2048;

  return level;
  
}
