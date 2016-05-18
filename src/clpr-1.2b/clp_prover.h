#include <stdio.h>
//#include <stdlib.h>
#include <fcntl.h>
/* for fork() */
#include <sys/types.h>
#include <unistd.h>
/* for wait() */
#include <sys/wait.h>
#include <string.h>

#include "clp-prover/hashtable.h"
#define MAX_CLPPROVER 1024 //256

int mygetline(char *,int);
int clp_prover_interpolate(char *, char*,hash_table_t *);
