/* For copyright information, see olden_v1.0/COPYRIGHT */

#include <cm/cmmd.h>
#include <fcntl.h>
extern int __NumNodes;

void filestuff()
{
  CMMD_fset_io_mode(stdout, CMMD_independent);
  fcntl(fileno(stdout), F_SETFL, O_APPEND);
  if (CMMD_self_address()) exit(0);
  __InitRegs(0);
}

int dealwithargs(int argc, char *argv[])
{
  int level;

  if (argc > 2)
    __NumNodes = atoi(argv[2]);
  else
    __NumNodes = 4;

  if (argc > 1)
    level = atoi(argv[1]);
  else
    level = 11;

  return level;

}

