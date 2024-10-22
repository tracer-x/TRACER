void NOTEST() {}
void RETEST() {}
void MIGRPH() {}
int LOCAL(int a) {int x; return x;}
int ATOMICINC(int a) {int x; return x;}
int TOUCH(int a) {int x; return x;}
int ISLOCPTR(int a) {int x; return x;}
int NONLOCAL(int a) {int x; return x;}
int MIGRATE(int a) {int x; return x;}
int FUTURE(int a, int b, int c, int d, int e) {int x; return x;}
int ALLOC(int a, int b) {int x; return x;}
int __ShutDown(int a) {int x; return x;}
int SPMDInit(int a, int b) {int x; return x;}
int __Olden_panic(int a, int b) {int x; return x;}

#undef FUTURES
/* For copyright information, see olden_v1.0/COPYRIGHT */

/* em3d.h - Header file for the electromagnetic problem in 3 dimensions
 *
 * By:  Martin C. Carlisle
 * Date: Feb. 23, 1994
 *
 */

#ifndef EM3D
#define EM3D
#define NULL 0

//#include <stdio.h>
//#include <stdlib.h>
//#include "mem-ref.h"
/* extern */ int n_nodes; /* number of nodes (E and H) */
/* extern */ int d_nodes; /* degree of nodes */
/* extern */ int local_p; /* percentage of edges */
#define DIST_SPAN 1
#define PROCS 64
#define assert(a) if (!a) {printf("Assertion failure\n"); exit(-1);}

#ifndef MAKE_GRAPH
typedef struct node_t {
  double *value;
  struct node_t *next;
  struct node_t **to_nodes; /* array of nodes pointed to */
  double **from_values; /* array of ptrs to vals where data comes from */
  double *coeffs; /* array of coeffs on edges */
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

/* For copyright information, see olden_v1.0/COPYRIGHT */

/* make_graph.h
 *
 * By:  Martin C. Carlisle
 * Date: Feb 23, 1994
 *
 */

//#include "em3d.h"

/* initialize graph returns a structure with pointers to lists of e and h
 * nodes.
 */ 
graph_t *initialize_graph();
/* For copyright information, see olden_v1.0/COPYRIGHT */

/* util.h
 *
 * headers for randomizing utilities 
 *
 * By: Martin C. Carlisle
 * Date: Feb 23, 1994
 *
 */

/* initialize the random number generator for a particular processor */
void init_random(int myid);

/* return a random number from 0 to range-1 */
int gen_number(int range);

/* return a random number in [-range+1,range-1] */
int gen_signed_number(int range);

/* Generate a double from 0.0 to 1.0 */
double gen_uniform_double();

/* Return 1, percent percent of the time and 0 otherwise */
int check_percent(int percent);
/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include "em3d.h"
//#include <cm/cmmd.h>
//#include <fcntl.h>

#ifdef OLDEN
/* extern */ int __NumNodes;
#endif
/* extern */ int DebugFlag;

/* extern */ int stdout;
/* extern */ int CMMD_independent, F_SETFL, O_APPEND;
void CMMD_fset_io_mode(int a, int b) {}
int CMMD_self_address() {int x; return x;}
void __InitRegs(int a) {}

void filestuff()
{
  CMMD_fset_io_mode(stdout, CMMD_independent);
  fcntl(fileno(stdout), F_SETFL, O_APPEND);
  if (CMMD_self_address()) exit(0);
  __InitRegs(0);
}

void dealwithargs(int argc, char *argv[])
{

#ifdef OLDEN
  if (argc > 5)
    DebugFlag = atoi(argv[5]);
  else DebugFlag = 0;

  if (argc > 4)
    __NumNodes = atoi(argv[4]);    
  else
    __NumNodes = 4;
#endif

  if (argc > 1)
    n_nodes = atoi(argv[1]);
  else
    n_nodes = 64;

  if (argc > 2)
    d_nodes = atoi(argv[2]);
  else
    d_nodes = 3;

  if (argc > 3)
    local_p = atoi(argv[3]);
  else
    local_p = 75;
}
/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include "em3d.h"
#ifdef PLAIN
#define NOTEST()
#define RETEST()
#endif
int nonlocals=0;
void compute_nodes(nodelist)
register node_t *nodelist;
{
  register int i;
  register node_t *localnode;
  
  NOTEST();
  for (; nodelist; )
    {
      register double cur_value;
      register int from_count ;
	   register double *other_value;
	   register double coeff;
	   register double value;
      /*register double *coeffs;*/
      /*register node_t **from_nodes;*/
      
      localnode = LOCAL(nodelist);
      cur_value=*(localnode->value);
      from_count = localnode->from_count-1;
      for (i=0; i < from_count; i+=2)
	{
	  
     other_value = localnode->from_values[i];
     coeff = localnode->coeffs[i];
	  if (!ISLOCPTR(other_value)) nonlocals++;
	  RETEST();
	  value = *other_value;
	  NOTEST();
	  cur_value -= coeff*value;
     other_value = localnode->from_values[i+1];
     coeff = localnode->coeffs[i];
	  if (!ISLOCPTR(other_value)) nonlocals++;
	  RETEST();
	  value = *other_value;
	  NOTEST();
	  cur_value -= coeff*value;
	  
	  /*//chatting("from %d, coeff %f, value %f\n",count,coeff,value);*/
	}
      if (i==from_count)  {
	other_value = localnode->from_values[i];
	coeff = localnode->coeffs[i];
	if (!ISLOCPTR(other_value)) nonlocals++;
	RETEST();
	value = *other_value;
	NOTEST();
	cur_value -= coeff*value;
      }
      *(localnode->value) = cur_value;
      nodelist = localnode->next;
    } /* for */
  RETEST();
}
/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include "em3d.h"
//#include "make_graph.h"
//#include <cm/cmmd.h>

int DebugFlag;

void print_graph(graph_t *graph, int id) 
{
  node_t *cur_node;
  cur_node=graph->e_nodes[id];

  for(; cur_node; cur_node=cur_node->next)
    {
      //chatting("E: value %f, from_count %d\n",cur_node->value,
	       //cur_node->from_count);
    }
  cur_node=graph->h_nodes[id];
  for(; cur_node; cur_node=cur_node->next)
    {
      //chatting("H: value %f, from_count %d\n",cur_node->value,
	       //cur_node->from_count);
    }
}

/* extern */ int nonlocals;

typedef struct {
	int value;
} future_cell_int;

#ifndef PLAIN
void do_all_compute(graph_t *graph, int myid, int nproc)
{
  future_cell_int fleft;

  if (NONLOCAL(myid)) MIGRATE(myid);
  if (nproc>1) {
    FUTURE(graph,myid+nproc/2,nproc/2,do_all_compute,&fleft);
    do_all_compute(graph,myid,nproc/2);
    TOUCH(&fleft);
  }
  else
  {
    node_t *nodelist;

    nodelist=graph->e_nodes[myid];
    compute_nodes(nodelist);
    nodelist=graph->h_nodes[myid];
    compute_nodes(nodelist);
  }
}
#endif
/* extern */ int __NumNodes;
int main(int argc, char *argv[])
{
  int i;
  graph_t *graph;

#ifndef PLAIN
  SPMDInit(argc,argv);
#else
  filestuff();
  dealwithargs(argc,argv);
#endif
  //chatting("Hello world--Doing em3d with args %d %d %d %d\n",
    //n_nodes,d_nodes,local_p,__NumNodes);
  graph=initialize_graph();
  if (DebugFlag) 
    for(i=0; i<__NumNodes;i++)
      { MIGRATE(i);
        print_graph(graph,i);
      }

#ifndef PLAIN
  MIGRATE(0);
#endif

#ifndef PLAIN
  do_all_compute(graph,0,__NumNodes);
#else
  compute_nodes(graph->e_nodes[0]);
  compute_nodes(graph->h_nodes[0]);
#endif

  //chatting("nonlocals = %d\n",nonlocals);
  //chatting("Completed a computation phase %f\n",CMMD_node_timer_elapsed(0));
  printstats();
/*****
  for(i=0; i<__NumNodes;i++)
  { MIGRATE(i);
  print_graph(graph,i);
  }
*****/

  MIGRATE(0);
#ifndef PLAIN
  __ShutDown(0);
#endif
  
}
/* For copyright information, see olden_v1.0/COPYRIGHT */

/* make_graph.c - Create a graph to be solved for the electromagnetic
 *                problem in 3 dimensions.
 *
 * By:  Martin C. Carlisle
 * Date: Feb 23, 1994
 *
 */

#define SEED1 793
#define SEED2 39
#define SEED3 17
#define MAKE_GRAPH
//#include "em3d.h"
//#include "util.h"

#define NUM_H_NODES  n_nodes
#define H_NODE_DEGREE d_nodes
#define H_PERCENT_LOCAL local_p

#define NUM_E_NODES  n_nodes
#define E_NODE_DEGREE d_nodes
#define E_PERCENT_LOCAL local_p
int n_nodes;
int d_nodes;
int local_p;

node_t **make_table(int size, int procname)
{
  node_t **retval;

  retval = (node_t **) ALLOC(procname,size*sizeof(node_t *));
  assert(retval);
  return retval;
}

/* We expect node_table to be a table of e or h nodes */
void fill_table(node_t **node_table, double *values, int size, int procname)
{
  node_t *cur_node, *prev_node;
  int i;
  
  prev_node = (node_t *) ALLOC(procname,sizeof(node_t));
  node_table[0] = prev_node;
  *values = gen_uniform_double();
  prev_node->value = values++;
  prev_node->from_count = 0;
  
  /* Now we fill the node_table with allocated nodes */
  for (i=1; i<size; i++)
    {
      cur_node = (node_t *) ALLOC(procname,sizeof(node_t));
      *values = gen_uniform_double();
      cur_node->value = values++;
      cur_node->from_count = 0;
      node_table[i] = cur_node;
      prev_node->next = cur_node;
      prev_node = cur_node;
    }
  cur_node->next = NULL;
}

/* extern */ int __MyNodeId, IDMASK;

void make_neighbors(node_t *nodelist, node_t **table[], int tablesz,
		    int degree, int percent_local, int id)
{
  node_t *cur_node;
  int procname = __MyNodeId & IDMASK;
  
  for(cur_node = nodelist; cur_node; cur_node=cur_node->next)
    {
      node_t *other_node;
      int j,k;
      int dest_proc;

      cur_node->to_nodes = (node_t **)
	ALLOC(procname,degree*(sizeof(node_t *)));
  if (!cur_node->to_nodes) {
    //chatting("Uncaught malloc error\n");
     __ShutDown(0);}
      for (j=0; j<degree; j++) 
	{
	  do 
	    {
	      node_t **local_table;
         int number = gen_number(tablesz);
	      
	      dest_proc = (check_percent(percent_local) ? id :
			   (id + PROCS +
			    4*gen_signed_number(DIST_SPAN)) % PROCS);
	      /* We expect these accesses to be remote */
	      local_table = table[dest_proc];
	      other_node = local_table[number];
         if (!other_node) {
                 //chatting("Error! on dest %d @ %d\n",number,dest_proc);
                 __ShutDown(0);
          }
	      for (k=0; k<j; k++)
		if (other_node == cur_node->to_nodes[k]) break;
     //if ((((unsigned int) other_node) >> 7) < 2048)
       //chatting("pre other_node = 0x%x,number = %d,dest = %d\n",
             //other_node,number,dest_proc);
	    }
	  while (k<j);
    if (!cur_node || !cur_node->to_nodes) {
      //chatting("Error! no to_nodes filed on 0x%x\n",cur_node);
      __ShutDown(0);}
	  cur_node->to_nodes[j]=other_node;
     if ((((unsigned int) other_node) >> 7) < 2048)
       //chatting("post other_node = 0x%x\n",other_node);
	  ATOMICINC(&other_node->from_count);
	}
    }
}

void update_from_coeffs(node_t *nodelist)
{
  node_t *cur_node;
  int procname = __MyNodeId & IDMASK;
  
  /* Setup coefficient and from_nodes vectors for h nodes */  
  for (cur_node = nodelist; cur_node; cur_node=cur_node->next) 
    {
      int from_count = cur_node->from_count;
      int k;
      
     if (from_count < 1) //chatting("Help! no from count\n");
      cur_node->from_values = (double **)
	ALLOC(procname,from_count * sizeof(double *));
      cur_node->coeffs = (double *)
	ALLOC(procname,from_count * sizeof(double));
      cur_node->from_length = 0;
    }
}

void fill_from_fields(node_t *nodelist, int degree)
{
  node_t *cur_node;
  for(cur_node = nodelist; cur_node; cur_node = cur_node->next)
    {
      int j;

      for (j=0; j<degree; j++)
	{
	  int count,thecount;
	  node_t *other_node = cur_node->to_nodes[j];
     double **otherlist;
     double *value = cur_node->value;

	  count=ATOMICINC(&(other_node->from_length));
     otherlist=other_node->from_values;
     thecount=other_node->from_count;
     if (!otherlist) {
      MIGRPH();
      //chatting("node 0x%x list 0x%x count %d\n",other_node,otherlist,thecount);
      otherlist = other_node->from_values;
      __Olden_panic("No from list!! 0x%x\n",otherlist);
     }
     if (CMMD_self_address() > __NumNodes) __Olden_panic("yipes!\n", 0);
	  otherlist[count] = value;
     if (CMMD_self_address() > __NumNodes) __Olden_panic("yipes!\n", 0);
     other_node->coeffs[count]=gen_uniform_double();
	}
    }
}

void localize_local(node_t *nodelist)
{
  node_t *cur_node;
  NOTEST();
  for(cur_node = nodelist; cur_node; cur_node = cur_node->next)
   {
    cur_node->coeffs = LOCAL(cur_node->coeffs);
    cur_node->from_values =  LOCAL(cur_node->from_values);
    cur_node->value =  LOCAL(cur_node->value);
   }
  RETEST();
}


void make_tables(table_t *table,int groupname)
{
  node_t **h_table,**e_table;
  double *h_values, *e_values;
  int procname = __MyNodeId & IDMASK;
  
  init_random(SEED1*groupname);
  h_values = (double *) ALLOC(procname,NUM_H_NODES/PROCS*sizeof(double));
  h_table = make_table(NUM_H_NODES/PROCS,procname);
  fill_table(h_table,h_values,NUM_H_NODES/PROCS,procname);
  e_values = (double *) ALLOC(procname,NUM_E_NODES/PROCS*sizeof(double));
  e_table = make_table(NUM_E_NODES/PROCS,procname);
  fill_table(e_table,e_values,NUM_E_NODES/PROCS,procname);

  /* This is done on procname-- we expect table to be remote */
  /* We use remote writes */
  table->e_table[groupname] = e_table;
  table->h_table[groupname] = h_table;
}

void make_all_neighbors(table_t *table,int groupname)
{
  node_t *first_node;
  node_t **local_table;
  node_t ***local_table_array;

  init_random(SEED2*groupname);
  /* We expect table to be remote */
  local_table = table->h_table[groupname];
  local_table_array = table->e_table;
  first_node = local_table[0];
  make_neighbors(first_node,
		 local_table_array,NUM_E_NODES/PROCS,
		 H_NODE_DEGREE,H_PERCENT_LOCAL,groupname);

  local_table = table->e_table[groupname];
  local_table_array = table->h_table;
  first_node = local_table[0];
  make_neighbors(first_node,
		 local_table_array,NUM_H_NODES/PROCS,
		 E_NODE_DEGREE,E_PERCENT_LOCAL,groupname);
}

void update_all_from_coeffs(table_t *table, int groupname)    
{
  node_t **local_table;
  node_t *first_node;

  /* Done by do_all, table not */
  local_table = table->h_table[groupname];
  /* We expect this to be */
  first_node = local_table[0];
  update_from_coeffs(first_node);

  local_table = table->e_table[groupname];
  first_node = local_table[0];
  update_from_coeffs(first_node);
}

void fill_all_from_fields(table_t *table, int groupname)
{
  node_t **local_table;
  node_t *first_node;

  init_random(SEED3*groupname);
  local_table = table->h_table[groupname];
  first_node = local_table[0];
  fill_from_fields(first_node,H_NODE_DEGREE);

  local_table = table->e_table[groupname];
  first_node = local_table[0];
  fill_from_fields(first_node,E_NODE_DEGREE);
}

void localize(table_t *table, int groupname)
{
  node_t **local_table;
  node_t *first_node;

  local_table = table->h_table[groupname];
  first_node = local_table[0];
  localize_local(first_node);

  local_table = table->e_table[groupname];
  first_node = local_table[0];
  localize_local(first_node);
}
  
void clear_nummiss(table_t *table, int groupname)
{
  /* extern */ int NumMisses;

  NumMisses = 0;
}

void do_all(table_t *table, int groupname, int nproc,
	    void func(table_t *, int),int groupsize)
{
  int procname = groupname / groupsize;
#ifdef FUTURES
  future_cell_int f_left;

  if (NONLOCAL(procname)) MIGRATE(procname);
#endif

  /*//chatting("do all group %d with %d\n",groupname,nproc);*/
  if (nproc > 1)
    {
#ifdef FUTURES      
      FUTURE(table,groupname+nproc/2,nproc/2,func,groupsize,do_all,&f_left);
      do_all(table,groupname,nproc/2,func,groupsize);
      TOUCH(&f_left);
#else
      do_all(table,groupname+nproc/2,nproc/2,func,groupsize);
      do_all(table,groupname,nproc/2,func,groupsize);
#endif      
    }
  else
    {
      func(table,groupname);
    }
}


graph_t *initialize_graph()
{
  table_t *table;
  graph_t *retval;
  int i,j,blocksize;
  int groupsize;

  table = (table_t *) ALLOC(0,sizeof(table_t));
  retval = (graph_t *) ALLOC(0,sizeof(graph_t));

  groupsize = PROCS/__NumNodes;

  //chatting("making tables \n");
  do_all(table,0,PROCS,make_tables,groupsize);


  /*for (i=0; i<64; i++) {
    node_t **e_table, *n1, *n2, *n3;
    e_table = table->e_table[i];
    n1 = e_table[1];
    n2 = e_table[2];
    n3 = e_table[3];
    //chatting("0x%x, [0x%x,0x%x,0x%x...]\n",e_table,n1,n2,n3);
  } */
  /* At this point, for each h node, we give it the appropriate number
     of neighbors as defined by the degree */
  //chatting("making neighbors\n");
  do_all(table,0,PROCS,make_all_neighbors,groupsize);

  /* We now create from count and initialize coefficients */
  //chatting("updating from and coeffs\n");
  do_all(table,0,PROCS,update_all_from_coeffs,groupsize);

  /* Fill the from fields in the nodes */
  //chatting("filling from fields\n");
  do_all(table,0,PROCS,fill_all_from_fields,groupsize);

  //chatting("localizing coeffs, from_nodes\n");
  do_all(table,0,PROCS,localize,groupsize);


  blocksize = PROCS/__NumNodes;

  //chatting("cleanup for return now\n");
  for (i=0; i<__NumNodes; i++)
    {
      node_t **local_table;
      node_t *local_node_r;

      local_table = table->e_table[i*blocksize];
      local_node_r = local_table[0];
      retval->e_nodes[i]=local_node_r;
      
      local_table = table->h_table[i*blocksize];
      local_node_r = local_table[0];
      retval->h_nodes[i]=local_node_r;
      
      for (j=1; j<blocksize; j++)
	{
	  node_t *local_node_l;

	  local_table = table->e_table[i*blocksize+j-1];
	  local_node_l = local_table[(NUM_E_NODES/PROCS)-1];
	  local_table = table->e_table[i*blocksize+j];
	  local_node_r = local_table[0];
	  local_node_l->next = local_node_r;

	  local_table = table->h_table[i*blocksize+j-1];
	  local_node_l = local_table[(NUM_H_NODES/PROCS)-1];
	  local_table = table->h_table[i*blocksize+j];
	  local_node_r = local_table[0];
	  local_node_l->next = local_node_r;
	}
    }
  
  //chatting("Clearing NumMisses\n");
  do_all(table,0,PROCS,clear_nummiss,groupsize);
  //chatting("Returning\n");

  return retval;
}

  

/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include <stdlib.h>
/* extern */ double drand48();
/* extern */ long lrand48();

static int percentcheck=0,numlocal=0;

/* initialize the random number generator for a particular processor */
void init_random(int seed)
{
  srand48(seed);
}

/* return a random number from 0 to range-1 */
int gen_number(int range)
{
  return lrand48() % range;
}

/* return a random number in [-range,range] but not zero */
int gen_signed_number(int range)
{
  int temp;
 
  temp = lrand48() % (2*range);  /* 0..2*range-1 */
  temp =  temp-(range);
  if (temp >= 0) temp++;
  return temp;
}

/* Generate a double from 0.0 to 1.0 */
double gen_uniform_double()
{
  return drand48();
}

int check_percent(int percent)
{
  int retval;
  retval=(drand48() < (double) (percent/100.0));
  percentcheck++;
  if (retval) numlocal++;
  return retval;
}

void printstats()
{
  //chatting("percentcheck=%d,numlocal=%d\n",percentcheck,numlocal);
}
