/* For copyright information, see olden_v1.0/COPYRIGHT */

/* em3d.h - Header file for the electromagnetic problem in 3 dimensions
 *
 * By:  Martin C. Carlisle
 * Date: Feb. 23, 1994
 *
 */

#ifndef EM3D
#define EM3D

#include <stdio.h>
#include <stdlib.h>
#include "mem-ref.h"
extern int n_nodes; /* number of nodes (E and H) */
extern int d_nodes; /* degree of nodes */
extern int local_p; /* percentage of local edges */
#define DIST_SPAN 1
#define PROCS 64
#define assert(a) if (!a) {printf("Assertion failure\n"); exit(-1);}

#ifndef MAKE_GRAPH
typedef struct node_t {
  local double *value;
  struct node_t *next;
  struct node_t **to_nodes; /* array of nodes pointed to */
  local double **from_values; /* array of ptrs to vals where data comes from */
  local double *coeffs; /* array of coeffs on edges */
  int from_count;
  int from_length;
} node_t;
#else
typedef struct node_t {
  double *value;
  struct node_t *next;
  struct node_t **to_nodes; /* array of nodes pointed to */
  double **from_values; /* array of ptrs to vals where data comes from */
  double *coeffs; /* array of coeffs on edges */
  int from_count;
  int from_length;
} node_t;
#endif

typedef struct graph_t {
  node_t *e_nodes[PROCS];
  node_t *h_nodes[PROCS];
} graph_t;

typedef struct table_t {
  node_t **e_table[PROCS];
  node_t **h_table[PROCS];
} table_t;

/* Perform 1 step for a nodelist */
void compute_nodes(/*node_t *nodelist*/);
#endif

