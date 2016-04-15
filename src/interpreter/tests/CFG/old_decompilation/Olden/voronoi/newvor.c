/* For copyright information, see olden_v1.0/COPYRIGHT */

#include <cm/cmmd.h>
#include <fcntl.h>
#define DEFINE_GLOBALS
#include "defines.h"
/* WARNING!  Don't use LOCAL on QUAD_EDGE as cache addresses are not aligned */

int flag;

QUAD_EDGE connect_left(a, b)
QUAD_EDGE a,b;
{
  VERTEX_PTR t1,t2;
  register QUAD_EDGE ans,lnexta;

/*chatting("begin connect_left\n");*/
  t1=dest(a);
  NOTEST(); 
  lnexta=lnext(a); 
  RETEST();
  t2=orig(b);
  ans = makeedge(t1,t2/*dest(a), orig(b)*/);
  splice(ans, lnexta);
  splice(sym(ans), b);
/*chatting("end connect_left\n");*/
  return(ans);
}

QUAD_EDGE connect_right(a, b)
QUAD_EDGE a,b;
{
  VERTEX_PTR t1,t2;
  register QUAD_EDGE ans, oprevb;
  QUAD_EDGE q1;

/*chatting("begin connect_right\n");*/
  t1=dest(a);
  t2=orig(b);
  NOTEST(); 
  oprevb=oprev(b); 
  RETEST();
  ans = makeedge(t1,t2/*dest(a), orig(b)*/);
  splice(ans, sym(a));
  splice(sym(ans), oprevb);
/*chatting("end connect_right\n");*/
  return(ans);
}

deleteedge(e)
     /*disconnects e from the rest of the structure and destroys it. */
QUAD_EDGE e;
{
  QUAD_EDGE f;
/*chatting("begin delete_edge 0x%x\n",e);*/
    f=oprev(e);
    splice(e, f);
    NOTEST();
    f=oprev(sym(e));
    splice(sym(e),f);
    RETEST();
    free_edge(e);
/*chatting("end delete_edge\n");*/
}
typedef struct fc_pair 
{
  future_cell_impl impl;
  EDGE_PAIR value;
} future_cell_pair;

/****************************************************************/
/*	Top-level Delaunay Triangulation Procedure
/****************************************************************/

QUAD_EDGE build_delaunay_triangulation(tree,extra)
    /* builds delaunay triangulation.
       va is an array of vertices, from 0 to size.  Each vertex consists of
       a vector and a data pointer.   edge is a pointer to an
       edge on the convex hull of the constructed delaunay triangulation. */

     VERTEX_PTR tree,extra;
{
    EDGE_PAIR retval;

    retval=build_delaunay(tree,extra);
    return retval.left;
}

VERTEX_PTR get_low(tree)
     register VERTEX_PTR tree;
{
  register VERTEX_PTR temp;
  while(temp=tree->left) tree=temp;
  return tree;
}

/****************************************************************/
/*	Recursive Delaunay Triangulation Procedure
/*	Contains modifications for axis-switching division.
/****************************************************************/

EDGE_PAIR build_delaunay(tree,extra)
     VERTEX_PTR tree,extra;
{
    QUAD_EDGE a,b,c,ldo,rdi,ldi,rdo;
    EDGE_PAIR retval;
    register VERTEX_PTR maxx, minx;
    VERTEX_PTR s1, s2, s3;

#ifdef FUTURES
    future_cell_pair delright;
    EDGE_PAIR delleft;
#else
    EDGE_PAIR delleft, delright;
#endif

    if (tree && tree->right) 
      {
        /* more than three elements; do recursion */
	minx = get_low(tree); maxx = extra;
#ifdef FUTURES
   NOTEST();
   	FUTURE(tree->right,extra, build_delaunay, &delright); 
	 /*delright.value = build_delaunay(tree->right,extra);*/
	delleft = build_delaunay(tree->left, tree);
	TOUCH(&delright); 
   RETEST();
	ldo = delleft.left; ldi=delleft.right;
	rdi=delright.value.left; rdo=delright.value.right;
#else
	delright = build_delaunay(tree->right,extra);
	delleft = build_delaunay(tree->left, tree);
	ldo = delleft.left; ldi=delleft.right;
	rdi=delright.left; rdo=delright.right;
#endif
	retval=do_merge(ldo, ldi, rdi, rdo);
	ldo = retval.left;
	rdo = retval.right;
	while (orig(ldo) != minx) {NOTEST(); ldo = rprev(ldo); RETEST();}
	while (orig(rdo) != maxx) {NOTEST(); rdo = lprev(rdo); RETEST();}
	retval.left = ldo;
	retval.right = rdo;
    }
    else if (!tree)
      {
	printf("ERROR: Only 1 point!\n"); 
	exit(-1);
      }
    else if (!tree->left) {	/* two points */
	a = makeedge(tree, extra);
	retval.left =  a;
	retval.right = sym(a);
    }
    else { /*  tree->left, !tree->right  */	/* three points */
	/* 3 cases: triangles of 2 orientations, and 3 points on a line. */
   s1 = tree->left;
   s2 = tree;
   s3 = extra;
	a = makeedge(s1, s2);
	b = makeedge(s2, s3);
	splice(sym(a), b);
	c = connect_left(b, a);
	if (ccw(s1, s3, s2)) {
	    retval.left = sym(c);
	    retval.right = c;
	}
	else {
	    retval.left =  a;
	    retval.right = sym(b);
	    if (!ccw(s1, s2, s3)) deleteedge(c);    /* colinear */
	}
    }
return retval;
}

/****************************************************************/
/*	Quad-edge storage allocation
/****************************************************************/
QUAD_EDGE next_edge, avail_edge;
#ifndef NEW
#define NYL -1
#else
#define NYL NULL
#endif

delete_all_edges() { next_edge= 0; avail_edge = NYL;}

QUAD_EDGE alloc_edge()
{
  QUAD_EDGE ans;

  if (avail_edge == NYL) 
    {
      int i;
      ans = (QUAD_EDGE) mymalloc(4*ALLOC_SIZE);
      if ((int) ans & ANDF) {
         printf("Aborting in alloc_edge, ans = 0x%x\n",ans);
         exit(-1);
         }
    }
  else ans = (QUAD_EDGE) avail_edge, avail_edge = onext(avail_edge);
  return ans;
}

free_edge(e)
QUAD_EDGE e;
{
  QUAD_EDGE f;
  e = (QUAD_EDGE) ((int) e ^ ((int) e & ANDF));
  onext(e) = avail_edge;
  avail_edge = e;
}



/****************************************************************/
/*	Geometric primitives
/****************************************************************/

BOOLEAN incircle(a,b,c,d)
     /* incircle, as in the Guibas-Stolfi paper. */
     VERTEX_PTR a,b,c,d;
{
  double adx, ady, bdx, bdy, cdx, cdy, dx, dy, anorm, bnorm, cnorm, dnorm;
  double dret ;
  local VERTEX_PTR loc_a,loc_b,loc_c,loc_d;

  int donedx,donedy,donednorm;
  RETEST();
  /*if (flag) chatting("incircle: 0x%x,0x%x,0x%x,0x%x\n",a,b,c,d);*/
  loc_d = LOCAL(d); 
  dx = X(loc_d); NOTEST(); dy = Y(loc_d); dnorm = NORM(loc_d); RETEST();
  loc_a = LOCAL(a);
  adx = X(loc_a) - dx; NOTEST(); ady = Y(loc_a) - dy; anorm = NORM(loc_a); RETEST();
  loc_b = LOCAL(b);
  bdx = X(loc_b) - dx; NOTEST(); bdy = Y(loc_b) - dy; bnorm = NORM(loc_b); RETEST();
  loc_c = LOCAL(c);
  cdx = X(loc_c) - dx; NOTEST(); cdy = Y(loc_c) - dy; cnorm = NORM(loc_c); RETEST();
  /*if (flag) chatting("adx=%f,bdx=%f,cdx=%f\n",adx,bdx,cdx);*/
  dret =  (anorm - dnorm) * (bdx * cdy - bdy * cdx);
  dret += (bnorm - dnorm) * (cdx * ady - cdy * adx);
  dret += (cnorm - dnorm) * (adx * bdy - ady * bdx);
  /*if (flag) chatting("Incircle: %f\n", dret);*/
  return( (0.0 < dret) ? TRUE : FALSE );
}

BOOLEAN ccw(a,b,c)
     /* TRUE iff A, B, C form a counterclockwise oriented triangle */
     VERTEX_PTR a,b,c;
{
  double dret ;
  double xa,ya,xb,yb,xc,yc;
  local VERTEX_PTR loc_a,loc_b,loc_c;
	
  int donexa,doneya,donexb,doneyb,donexc,doneyc;
  RETEST();
  loc_a = LOCAL(a);
  xa=X(loc_a); ya=Y(loc_a);
  loc_b = LOCAL(b);
  xb=X(loc_b); yb=Y(loc_b);
  loc_c = LOCAL(c);
  xc=X(loc_c); yc=Y(loc_c);
  /*if (flag) chatting("CCW:xa=%f,xb=%f,xd=%f\n",xa,xb,xc);*/
  /*if (flag) chatting("CCW:ya=%f,yb=%f,yd=%f\n",ya,yb,yc);*/
  dret = (xa-xc)*(yb-yc) - (xb-xc)*(ya-yc);
  /*if (flag) chatting("ccw: %f\n", dret);*/
  return( (dret  > 0.0)? TRUE : FALSE);
}

/****************************************************************/
/*	Quad-edge manipulation primitives
/****************************************************************/
QUAD_EDGE makeedge(origin, destination)
VERTEX_PTR origin, destination;
{
    register QUAD_EDGE temp, ans;
    temp =  alloc_edge();
    ans = temp;

    NOTEST();
    onext(temp) = ans;
    orig(temp) = origin;
    temp = (QUAD_EDGE) ((int) temp+SIZE);
    onext(temp) = (QUAD_EDGE) ((int) ans + 3*SIZE);
    temp = (QUAD_EDGE) ((int) temp+SIZE);
    onext(temp) = (QUAD_EDGE) ((int) ans + 2*SIZE);
    orig(temp) = destination;
    temp = (QUAD_EDGE) ((int) temp+SIZE);
    onext(temp) = (QUAD_EDGE) ((int) ans + 1*SIZE);
    RETEST();
    /*chatting("Edge made @ 0x%x\n",ans);*/
    /*dump_quad(ans);*/
    return(ans);
}

splice(a,b)
QUAD_EDGE a, b;
{
    QUAD_EDGE alpha, beta, temp;
    QUAD_EDGE t1;

    /*chatting("begin splice 0x%x,0x%x\n",a,b);*/
    /*dump_quad(a); dump_quad(b);*/
    alpha = rot(onext(a));
    beta = rot(onext(b));
    /*dump_quad(alpha); dump_quad(beta);*/
    t1 = onext(beta);
    temp = onext(alpha);
    NOTEST(); 
    onext(alpha) = t1;  
    /*chatting("Writing 0x%x at onext of 0x%x\n",t1,alpha);*/
    RETEST();
    onext(beta) = temp;
    /*chatting("Writing 0x%x at onext of 0x%x\n",temp,beta);*/
    temp = onext(a); 
    t1 = onext(b); 
    NOTEST(); 
    onext(b) = temp; 
    RETEST();
    onext(a) = t1;
    /*chatting("Wrote 0x%x at onext of 0x%x\n",temp,b);*/
    /*chatting("Wrote 0x%x at onext of 0x%x\n",t1,a);*/
    /*chatting("End splice\n");*/
}

swapedge(e)
QUAD_EDGE e;
{
    QUAD_EDGE a,b,syme,lnexttmp;
    VERTEX_PTR a1,b1;
    
    /*chatting("begin swapedge\n");*/
    a = oprev(e);
    NOTEST(); 
    syme = sym(e);
    b = oprev(syme); 
    RETEST();
    splice(e, a);
    splice(syme, b);
    lnexttmp = lnext(a);
    splice(e, lnexttmp);
    lnexttmp = lnext(b);
    splice(syme, lnexttmp);
    a1 = dest(a);
    b1 = dest(b);
    orig(e) = a1;
    NOTEST(); 
    dest(e) = b1; 
    RETEST();
    /*chatting("end swapedge\n");*/
}

/****************************************************************/
/*	The Merge Procedure.
/****************************************************************/
/*#define valid(l) ccw(orig(basel), dest(l), dest(basel))*/

int valid(l,basel)
     QUAD_EDGE l,basel;
{
  register VERTEX_PTR t1,t2,t3;

  /*chatting("valid:0x%x,0x%x\n",l,basel);*/

  t1=orig(basel);
  t3=dest(basel);

  t2=dest(l);
  return ccw(t1,t2,t3);
}

void dump_quad(ptr)
     QUAD_EDGE ptr;
{
  int i;
  QUAD_EDGE j;
  VERTEX_PTR v;

  MIGRPH();
  ptr = (QUAD_EDGE) ((int) ptr & ~ANDF);
  chatting("Entered DUMP_QUAD: ptr=0x%x\n",ptr);
  for (i=0; i<4; i++)
   {
    j=onext(((QUAD_EDGE) (ptr+i)));
    v = orig(j);
    chatting("DUMP_QUAD: ptr=0x%x onext=0x%x,v=0x%x\n",ptr+i,j,v);
   }
  UNPHASE();
}


EDGE_PAIR do_merge(ldo, ldi, rdi, rdo)
     QUAD_EDGE ldi, rdi, ldo, rdo;
{
  int rvalid, lvalid;
  register QUAD_EDGE loc;
  register QUAD_EDGE basel,lcand,rcand,t;
  VERTEX_PTR t1,t2,t3;
  
/*chatting("merge\n");*/
/*#pragma notest*/
  while (TRUE) {
    t3=orig(rdi);
    /*loc=LOCAL(rdi);*/
    /*t3=orig(loc);*/

    t1=orig(ldi);
    t2=dest(ldi);
    /*loc = LOCAL(ldi);*/
    /*t1 = orig(loc);*/
    /*t2 = dest(loc);*/

    while (ccw(t1,t2,t3/*orig(ldi), dest(ldi), orig(rdi)*/)) 
      {
	  ldi = lnext(ldi);
      /*ldi = lnext(loc);*/
      /*loc = LOCAL(ldi);*/

	   t1=orig(ldi);
	   t2=dest(ldi);
      /*t1 = orig(loc);*/
      /*t2 = dest(loc);*/
      }
    /*loc = LOCAL(rdi);*/

    t2=dest(rdi);
    /*t2 = dest(loc);*/

    if (ccw(t2,t3,t1/*dest(rdi), orig(rdi), orig(ldi)*/)) 
      {  rdi = rprev(rdi); }
      /*{ rdi = rprev(loc); }*/
    else { break; }
  }
  
  basel = connect_left(sym(rdi), ldi);

  /*loc = LOCAL(basel);*/

  lcand = rprev(basel);
  rcand = oprev(basel);
  t1 = orig(basel);
  t2 = dest(basel);
  /*lcand = rprev(loc);*/
  /*rcand = oprev(loc);*/
  /*t1 = orig(loc);*/
  /*t2 = dest(loc);*/

/*#pragma retest*/
  if (t1/*orig(basel)*/ == orig(rdo)) rdo = basel;
  if (t2/*dest(basel)*/ == orig(ldo)) ldo = sym(basel);
  
  while (TRUE) {
    VERTEX_PTR v1,v2,v3,v4;

    /*chatting("valid site 1,lcand=0x%x,basel=0x%x\n",lcand,basel);*/
    /*dump_quad(lcand);*/
    t=onext(lcand);
    if (valid(t,basel)) {
      v4=orig(basel);

      /*loc = LOCAL(lcand);*/
      v1=dest(lcand);
      v3=orig(lcand);
/*#pragma notest*/
      /*v1=dest(loc);*/
      /*v3=orig(loc);*/
/*#pragma retest*/

      v2=dest(t);
      while (incircle(v1,v2,v3,v4
		      /*dest(lcand), dest(t), orig(lcand), orig(basel)*/))
	{
	  deleteedge(lcand);
	  lcand = t;

     /*loc = LOCAL(lcand);*/
	  t = onext(lcand);
	  v1=dest(lcand);
	  v3=orig(lcand);
/*#pragma notest*/
	  /*t = onext(loc);*/
	  /*v1=dest(loc);*/
	  /*v3=orig(loc);*/
/*#pragma retest*/

	  v2=dest(t);
	}
    }
    /*chatting("valid site 2\n");*/
    t=oprev(rcand);
    if (valid(t,basel)) {
      v4=dest(basel);
      v1=dest(t);
      v2=dest(rcand);
      v3=orig(rcand);
      while (incircle(v1,v2,v3,v4
		      /*dest(t), dest(rcand), orig(rcand), dest(basel)*/))
	{
	  deleteedge(rcand);
	  rcand = t;
	  t = oprev(rcand);
	  v2=dest(rcand);
	  v3=orig(rcand);
	  v1=dest(t);
	}
    }
    /*chatting("Valid sites 3,4\n");*/
    lvalid = valid(lcand,basel);
    /*chatting("Valid sites 3,4\n");*/
    rvalid = valid(rcand,basel);
    if ((! lvalid) && (! rvalid))
      {
	EDGE_PAIR retval; 
	retval.left = ldo; retval.right = rdo; return retval;
      }
    v1=dest(lcand);
    v2=orig(lcand);
    v3=orig(rcand);
    v4=dest(rcand);
    if (!lvalid ||
	(rvalid && incircle(v1,v2,v3,v4
			    /*dest(lcand), orig(lcand),
			    orig(rcand), dest(rcand)*/)))
      {
	basel = connect_left(rcand, sym(basel));
	rcand = lnext(sym(basel));
      }
    else
      {
	basel = sym(connect_right(lcand, basel));
	lcand = rprev(basel);
      }
  }
}



#define DEFINE_GLOBALS
#define CONST_m1 10000
#define CONST_b 31415821
#define RANGE 100

struct EDGE_STACK *allocate_stack();
struct get_point get_points();
int loop = 0, randum = 1, filein = 0 , fileout = 1, statistics = 0; 

void in_order(tree)
     VERTEX_PTR tree;
{
  VERTEX_PTR tleft, tright;
  double x, y;

  if (!tree) {
    chatting("NULL\n");
    return;
  }

  x = X(tree);
  y = Y(tree);
  chatting("X=%f, Y=%f\n",x, y);
  tleft = tree->left;
  in_order(tleft);
  tright = tree->right;
  in_order(tright);
}

int mult(int p, int q)
{
	int p1, p0, q1, q0;
	
	p1=p/CONST_m1; p0=p%CONST_m1;
	q1=q/CONST_m1; q0=q%CONST_m1;
	return (((p0*q1+p1*q0) % CONST_m1)*CONST_m1+p0*q0);
}

int skiprand(int seed, int n)
/* Generate the nth random # */
{
  for (; n; n--) seed=random(seed);
  return seed;
}

int random(int seed)
{
  seed = (mult(seed,CONST_b)+1);
  return seed;
}



print_extra(extra)
     VERTEX_PTR extra;
{
  
  double x, y;
  x = X(extra);
  y = Y(extra);
  chatting("X=%f, Y=%f\n",x, y);
}

main(argc,argv) 
     int argc;
     char *argv[];
{
  unsigned long time1, time2;
  VERTEX_PTR ptr;
  struct EDGE_STACK *my_stack;
  struct get_point point, extra;
  QUAD_EDGE edge;
  int i, n, rows, cyon = 1, but, retained;
  int xsorted=1;
  to_lincoln = to_off = to_3d_out = to_color = 0;
  voronoi = delaunay = 1; interactive = ahost = 0 ;
  retained = 0;
  
#ifdef FUTURES
  n = SPMDInit(argc,argv);
#else
  filestuff();
  chatting("argc = %d\n",argc);
  n = dealwithargs(argc, argv);
#endif

/*  delete_all_edges();*/
#ifndef FUTURES 
  if (CMMD_self_address() == 0) {
#endif
  chatting("getting %d points\n", n);
  extra=get_points(1,1.0,n,1023,__NumNodes-1,1);
  point=get_points(n-1,extra.curmax,n-1,extra.seed,0,__NumNodes);
  chatting("Done getting points\n");
  num_vertices = n + 1;
  my_stack=allocate_stack(num_vertices);
  if (flag) in_order(point.v);
  if (flag) print_extra(extra.v);
  chatting("Doing voronoi on %d nodes\n", n); 

#ifndef PLAIN
  ClearAllStats();
#endif

  CMMD_node_timer_clear(0);
  CMMD_node_timer_start(0);
  edge=build_delaunay_triangulation(point.v,extra.v);
  CMMD_node_timer_stop(0);

  chatting("Elapsed time %f\n", CMMD_node_timer_elapsed(0));
  if (flag) output_voronoi_diagram(edge,n,my_stack);

#ifdef FUTURES
  __ShutDown(0);
#else
 }
 exit(0);
#endif
/*  delete_all_edges();*/
  
}
struct EDGE_STACK *allocate_stack(num_vertices)
     int num_vertices;
{
  struct EDGE_STACK *my_stack;

  num_edgeparts = 12*num_vertices;
  my_alloc(my_stack, struct EDGE_STACK, 1);
  my_alloc(my_stack->elts, QUAD_EDGE , num_edgeparts);
  my_stack->stack_size = num_edgeparts/2;
  return my_stack;
}

free_all(cont,my_stack)
     int cont;
     struct EDGE_STACK *my_stack;
{
  free(my_stack->elts);
  free(my_stack);
}

struct get_point get_points(n,curmax,i,seed,processor,numnodes)
     int n;
     double curmax;
     int i,seed;
{
  VERTEX_PTR node;
  struct get_point point;
  int j,k;
  double tmp;

  if (n<1) {
    point.v = NULL;
    point.curmax=curmax;
	 point.seed = seed;
    return point;
  }
  /*chatting("Get points: %d, %f, %d\n",n,curmax,processor);*/
  point = get_points(n/2,curmax,i,seed,processor+numnodes/2,numnodes/2);
  /*chatting("rec call n=%d\n",n);*/
  i -= n/2;
  j = __NumNodes - ((__NumNodes-1)/2);
#ifdef FUTURES
  node = (VERTEX_PTR) ALLOC((j+processor+(numnodes-1)/2)%__NumNodes,sizeof(struct VERTEX));
#else
  node = (VERTEX_PTR) mymalloc(sizeof(struct VERTEX));
#endif
  /*chatting("Get points past alloc,n=%d\n",n);*/
  X(node) = point.curmax * exp(log(drand(point.seed))/i);
  Y(node) = drand(point.seed);
  NORM(node) = X(node)*X(node) + Y(node)*Y(node);
  node->right = point.v;
  /*chatting("node = 0x%x\n",node);*/
  point = get_points(n/2,X(node),i-1,point.seed,
		     processor,numnodes/2);
  node->left = point.v;
  point.v = node;
  return point;
}


/****************************************************************/
/*	Voronoi Diagram Routines.
/****************************************************************/

/****************************************************************/
/*	Graph Traversal Routines
/****************************************************************/

QUAD_EDGE pop_edge(x)
     struct EDGE_STACK *x;
{
  int a=x->ptr--;
  return (x)->elts[a];
}

push_edge(stack,edge)
     struct EDGE_STACK *stack;
     QUAD_EDGE edge;
{
  register int a;
  /*chatting("pushing edge \n");*/
  if (stack->ptr == stack->stack_size) {
    printf("cannot push onto stack: stack is too large\n");
  }
  else {
    a = stack->ptr;
    a++;
    stack->ptr = a;
    stack->elts[a] = edge;
  }
}

push_ring(stack, edge)
struct EDGE_STACK *stack;
QUAD_EDGE edge;
{
    QUAD_EDGE nex;
    nex = onext(edge);
    while (nex != edge) {
	if (seen(nex) == 0) {
	   seen(nex) = 1;
	   push_edge(stack, nex);
	}
	nex = onext(nex);
    }
}

push_nonzero_ring(stack, edge)
     struct EDGE_STACK *stack;
     QUAD_EDGE edge;
{
  QUAD_EDGE nex;
  nex = onext(edge);
  while (nex != edge) {
    if (seen(nex) != 0) {
      seen(nex) = 0;
      push_edge(stack, nex);
    }
    nex = onext(nex);
  }
}

zero_seen(my_stack,edge)
QUAD_EDGE edge;
struct EDGE_STACK *my_stack;
{
  my_stack->ptr = 0;
  push_nonzero_ring(my_stack, edge);
  while (my_stack->ptr != 0) {
    edge = pop_edge(my_stack);
    push_nonzero_ring(my_stack, sym(edge));
  }
}

