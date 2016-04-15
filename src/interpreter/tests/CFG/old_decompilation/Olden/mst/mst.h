/* For copyright information, see olden_v1.0/COPYRIGHT */

#include "hash.h"
#define MAXPROC 32
#define NULL 0

#ifdef FUTURES
#include "future-cell.h"
#endif
#include "mem-ref.h"
#ifdef PLAIN
#define MLOCAL(ptr)
#endif

typedef struct vert_st {
  int mindist;
  struct vert_st *next {99};
  Hash edgehash;
  } *Vertex;

typedef struct graph_st {
  Vertex vlist[MAXPROC];
  } *Graph;

Graph MakeGraph(int numvert, int numproc);
