int ALLOC(int a, int b) {int x; return x;}

/* For copyright information, see olden_v1.0/COPYRIGHT */

typedef struct tree {
  int sz;
  double x,y;
  struct tree *left, *right;
  /*struct tree *next, *prev;*/
  struct tree *next , *prev ;
} *Tree;

/* Builds a 2D tree of n nodes in specified range with dir as primary 
   axis (0 for x, 1 for y) */
Tree build_tree(int n,int dir,int lo,int num_proc,double min_x,
                double max_x,double min_y,double max_y);
/* Compute TSP for the tree t -- use conquer for problems <= sz */
Tree tsp(Tree t, int sz, int nproc);
/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include <cm/cmmd.h>
//#include <fcntl.h>
/* extern */ int __NumNodes,__NDim;
int flag;
int stdout, CMMD_independent, F_SETFL, O_APPEND;
int CMMD_fset_io_mode(int a, int b) {int x; return x;}
int CMMD_self_address() {int x; return x;}
int fcntl(int a, int b, int c) {int x; return x;}
int __InitRegs(int a) {int x; return x;}


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
  int num;

  if (argc > 3)
    flag = atoi(argv[3]);
  else 
    flag = 0;

  if (argc > 2) 
    __NumNodes = atoi(argv[2]);
  else 
    __NumNodes = 4;

  __NDim = mylog(__NumNodes);

  if (argc > 1)
    num = atoi(argv[1]);
  else
    num = 15;

  return num;
}
/* For copyright information, see olden_v1.0/COPYRIGHT */

/* build.c
 *
 * By:  Martin C. Carlisle
 *      Princeton University
 *      6/24/94
 * 
 * builds a two-dimensional tree for TSP
 * 
 * distribution of median is given by modification of exponential to
 * be [-1,1]
 */ 

//#include <stdio.h>

/* extern */ double drand48() {int x; return x;}
/* extern */ void srand48(long seedval) {int x; return x;}
/* extern */ double exp(double x) {int y; return y;}
/* extern */ double log(double x) {int y; return y;}
#define  M_E      2.7182818284590452354
#define  M_E2     7.3890560989306502274
#define  M_E3     20.08553692318766774179
#define M_E6 403.42879349273512264299
#define M_E12 162754.79141900392083592475
#define NULL 0

//#include "tsp.h"
//#include "mem-ref.h"
#ifdef FUTURES
//#include "future-cell.h"
#endif

static double median(double min,double max,int n);
static double uniform(double min, double max);

/* Return an estimate of median of n values distributed in [min,max) */
static double median(double min,double max,int n) {
  double t;
  double retval;
  
  t = drand48(); /* in [0.0,1.0) */
  if (t>0.5) {
    retval=log(1.0-(2.0*(M_E12-1)*(t-0.5)/M_E12))/12.0;   
    }
  else {
    retval=-log(1.0-(2.0*(M_E12-1)*t/M_E12))/12.0;
    }
  /* We now have something distributed on (-1.0,1.0) */
  retval = (retval+1.0) * (max-min)/2.0;
  retval = retval + min;
  return retval;
}

/* Get double uniformly distributed over [min,max) */
static double uniform(double min, double max) {
  double retval;
  
  retval = drand48(); /* in [0.0,1.0) */
  retval = retval * (max-min);
  return retval + min;
}

/* Builds a 2D tree of n nodes in specified range with dir as primary 
   axis (0 for x, 1 for y) */
Tree build_tree(int n,int dir,int lo,int num_proc,double min_x,
                double max_x,double min_y,double max_y) {
  double med;
  Tree t;
#ifdef FUTURES
  future_cell_int fc;
#endif

  if (n==0) return NULL;

  t = (Tree) ALLOC(lo,sizeof(*t));
  if (dir) {
    dir = !dir;
    med = median(min_x,max_x,n);
#ifndef FUTURES
    t->left=build_tree(n/2,dir,lo+num_proc/2,num_proc/2,min_x,med,min_y,max_y);
    t->right=build_tree(n/2,dir,lo,num_proc/2,med,max_x,min_y,max_y);
#else
    FUTURE(n/2,dir,lo+num_proc/2,num_proc/2,min_x,med,min_y,max_y,
           build_tree,&fc);
    t->right=build_tree(n/2,dir,lo,num_proc/2,med,max_x,min_y,max_y);
#endif
    t->x = med;
    t->y = uniform(min_y,max_y);
    }
  else {
    dir = !dir;
    med = median(min_y,max_y,n);
#ifndef FUTURES
    t->left=build_tree(n/2,dir,lo+num_proc/2,num_proc/2,min_x,max_x,min_y,med);
    t->right=build_tree(n/2,dir,lo,num_proc/2,min_x,max_x,med,max_y);
#else
    FUTURE(n/2,dir,lo+num_proc/2,num_proc/2,min_x,max_x,min_y,med,
           build_tree,&fc);
    t->right=build_tree(n/2,dir,lo,num_proc/2,min_x,max_x,med,max_y);
#endif
    t->y = med;
    t->x = uniform(min_x,max_x);
    }
  t->sz = n;
  t->next = NULL;
  t->prev = NULL;
#ifdef FUTURES
  TOUCH(&fc);
  t->left = (Tree) fc.value;
#endif
  return t;
}
/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include "tsp.h"
//#include <stdio.h>
//#include <cm/cmmd.h>
//#include "mem-ref.h"

/* extern */ int flag;

void print_tree(Tree t)
{
  Tree left,right;
  double x,y;

  if (!t) return;
  x = t->x; y = t->y;
  left = t->left; right=t->right;
  print_tree(left);
  print_tree(right);
}

void print_list(Tree t)
{
  Tree tmp;
  double x,y;

  if (!t) return;
  x = t->x; y = t->y;
  for (tmp=t->next; tmp!=t; tmp=tmp->next) 
    {
    x = tmp->x; y = tmp->y;
    }
}

int main(int argc,char *argv[])
{
  Tree t;
  int num;
 
#ifdef FUTURES
  num=SPMDInit(argc,argv);
#else
  filestuff(0);
  num=dealwithargs(argc,argv);
#endif
  t=build_tree(num,0,0,__NumNodes,0.0,1.0,0.0,1.0);

#ifndef PLAIN
#endif

  tsp(t,150,__NumNodes);
  if (flag) print_list(t);

#ifdef FUTURES
  __ShutDown(0);
#endif
}
/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include "tsp.h"
//#include "mem-ref.h"
#ifdef FUTURES
//#include "future-cell.h"
#endif
#define NULL 0

static Tree conquer(Tree t);
static Tree merge(Tree a, Tree b, Tree t, int nproc);
static Tree makelist(Tree t);
static void reverse(Tree t);
static double distance(Tree a, Tree b);
/* extern */ double sqrt(double a) {int x; return x;}

/* Find Euclidean distance from a to b */
static double distance(Tree a, Tree b) {
  double ax,ay,bx,by;

  ax = a->x; ay = a->y;
  bx = b->x; by = b->y;
  return (sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by)));
}

/* sling tree nodes into a list -- requires root to be tail of list */
/* only fills in next field, not prev */
static Tree makelist(Tree t) {
  Tree left, right;
  Tree tleft,tright;
  Tree retval = t;

  if (!t) return NULL;

  left = makelist(t->left); /* head of left list */
  right = makelist(t->right); /* head of right list */

  if (right) { retval = right; tright = t->right; tright->next = t; }
  if (left) { retval=left; tleft=t->left; tleft->next = (right) ? right : t; }
  t->next = NULL;

  return retval;
}

/* reverse orientation of list */
static void reverse(Tree t) {
  Tree prev,back,next,tmp;

  if (!t) return;
  /*chatting("REVERSE\n");*/
  /*print_list(t);*/
  prev = t->prev;
  prev->next = NULL;
  t->prev = NULL;
  back = t;
  tmp = t;
  for (t=t->next; t; back=t,t=next) {
    next = t->next;
    t->next = back;
    back->prev = t;
    }
  tmp->next = prev;
  prev->prev = tmp;
  /*printf("REVERSE result\n");*/
  /*print_list(tmp);*/
  /*printf("End REVERSE\n");*/
}

/* Use closest-point heuristic from Cormen Leiserson and Rivest */
static Tree conquer(Tree t) {
  Tree cycle,tmp,min,prev,next,donext;
  double mindist,test;
  double mintonext, mintoprev, ttonext, ttoprev;

  if (!t) return NULL;
  t=makelist(t);
 
  /*printf("CONQUER\n");*/
  /* Create initial cycle */
  cycle = t;
  t = t->next;
  cycle->next = cycle;
  cycle->prev = cycle;

  for (; t; t=donext) { /* loop over remaining points */
    donext = t->next; /* value won't be around later */
    min = cycle;
    mindist = distance(t,cycle);
    for (tmp=cycle->next; tmp!=cycle; tmp=tmp->next) {
      test = distance(tmp,t);
      if (test < mindist) {
        mindist = test;
        min = tmp;
        } /* if */
      } /* for tmp... */
    next = min->next;
    prev = min->prev;
    mintonext = distance(min,next);
    mintoprev = distance(min,prev);
    ttonext = distance(t,next);
    ttoprev = distance(t,prev);
    if ((ttoprev - mintoprev) < (ttonext - mintonext)) {
      /* insert between min and prev */
      prev->next = t;
      t->next = min;
      t->prev = prev;
      min->prev = t;
      }
    else {
      next->prev = t;
      t->next = next;
      min->next = t;
      t->prev = min;
      }
    } /* for t... */
  /*print_list(cycle);*/
  /*printf("End CONQUER\n");*/
  return cycle;
}

/* Merge two cycles as per Karp */
static Tree merge(Tree a, Tree b, Tree t, int nproc) {
  Tree min,next,prev,tmp;
  double mindist,test,mintonext,mintoprev,ttonext,ttoprev;
  Tree n1,p1,n2,p2;
  double tton1,ttop1,tton2,ttop2;
  double n1ton2,n1top2,p1ton2,p1top2;
  int choice;
  int i;

  /* Compute location for first cycle */
  min = a;
  mindist = distance(t,a);
  tmp = a;
  for (a=a->next; a!=tmp; a=a->next) {
    test = distance(a,t);
    if (test < mindist) {
      mindist = test;
      min = a;
      } /* if */
    } /* for a... */
  next = min->next;
  prev = min->prev;
  mintonext = distance(min,next);
  mintoprev = distance(min,prev);
  ttonext = distance(t,next);
  ttoprev = distance(t,prev);
  if ((ttoprev - mintoprev) < (ttonext - mintonext)) {
    /* would insert between min and prev */
    p1 = prev;
    n1 = min;
    tton1 = mindist;
    ttop1 = ttoprev;
    }
  else { /* would insert between min and next */
    p1 = min;
    n1 = next;
    ttop1 = mindist;
    tton1 = ttonext;
    }
 
  /* Compute location for second cycle */
  min = b;
  mindist = distance(t,b);
  tmp = b;
  for (b=b->next; b!=tmp; b=b->next) {
    test = distance(b,t);
    if (test < mindist) {
      mindist = test;
      min = b;
      } /* if */
    } /* for tmp... */
  next = min->next;
  prev = min->prev;
  mintonext = distance(min,next);
  mintoprev = distance(min,prev);
  ttonext = distance(t,next);
  ttoprev = distance(t,prev);
  if ((ttoprev - mintoprev) < (ttonext - mintonext)) {
    /* would insert between min and prev */
    p2 = prev;
    n2 = min;
    tton2 = mindist;
    ttop2 = ttoprev;
    }
  else { /* would insert between min and next */
    p2 = min;
    n2 = next;
    ttop2 = mindist;
    tton2 = ttonext;
    }

  /* Now we have 4 choices to complete:
     1:t,p1 t,p2 n1,n2
     2:t,p1 t,n2 n1,p2
     3:t,n1 t,p2 p1,n2
     4:t,n1 t,n2 p1,p2 */
  n1ton2 = distance(n1,n2);
  n1top2 = distance(n1,p2);
  p1ton2 = distance(p1,n2);
  p1top2 = distance(p1,p2);

  mindist = ttop1+ttop2+n1ton2; 
  choice = 1;

  test = ttop1+tton2+n1top2;
  if (test<mindist) {
    choice = 2;
    mindist = test;
    }

  test = tton1+ttop2+p1ton2;
  if (test<mindist) {
    choice = 3;
    mindist = test;
    }
  
  test = tton1+tton2+p1top2;
  if (test<mindist) choice = 4;

/*chatting("p1,n1,t,p2,n2 0x%x,0x%x,0x%x,0x%x,0x%x\n",p1,n1,t,p2,n2);*/
  switch (choice) {
    case 1:
      /* 1:p1,t t,p2 n2,n1 -- reverse 2!*/
      /*reverse(b);*/
      reverse(n2);
      p1->next = t;
      t->prev = p1;
      t->next = p2;
      p2->prev = t;
      n2->next = n1;
      n1->prev = n2;
      break;
    case 2:
      /* 2:p1,t t,n2 p2,n1 -- OK*/
      p1->next = t;
      t->prev = p1;
      t->next = n2;
      n2->prev = t;
      p2->next = n1;
      n1->prev = p2;
      break;
    case 3:
      /* 3:p2,t t,n1 p1,n2 -- OK*/
      p2->next = t;
      t->prev = p2;
      t->next = n1;
      n1->prev = t;
      p1->next = n2;
      n2->prev = p1;
      break;
    case 4:
      /* 4:n1,t t,n2 p2,p1 -- reverse 1!*/
      /*reverse(a);*/
      reverse(n1);
      n1->next = t;
      t->prev = n1;
      t->next = n2;
      n2->prev = t;
      p2->next = p1;
      p1->prev = p2;
      break;
    }
  return t;
}

/* Compute TSP for the tree t -- use conquer for problems <= sz */
Tree tsp(Tree t,int sz,int nproc) {
  Tree left,right;
  Tree leftval;
#ifdef FUTURES
  future_cell_pointer fc;
#endif
  Tree rightval;
  int nproc_2 = nproc/2;

  if (t->sz <= sz) return conquer(t);

  left = t->left; right = t->right;
#ifndef FUTURES
  leftval = tsp(left,sz,nproc_2);
#else
  FUTURE(left,sz,nproc_2,tsp,&fc);
#endif
  rightval = tsp(right,sz,nproc_2);
#ifdef FUTURES
  leftval = (Tree) TOUCH(&fc);
  leftval = (Tree) fc.value;
  return merge(leftval,rightval,t,nproc);
#else
  return merge(leftval,rightval,t,nproc);
#endif
}
