int ALLOC(int a, int b) {int x; return x;}
int mymalloc(int a) {int x; return x;}
int sqrt(int a) {int x; return x;}

/* For copyright information, see olden_v1.0/COPYRIGHT */

/*
 * power.h
 *
 * By:  Martin C. Carlisle
 * 6/15/94
 *
 * Header file for the Power Pricing problem
 * adapted from code by Steve Lumetta, Sherry Li, and Ismail Khalil
 * University of California at Berkeley
 *
 */

typedef struct demand {
  double P;
  double Q;
} Demand;

#ifndef PLAIN
//#include "future-cell.h"
//#include "mem-ref.h"
typedef struct fc_demand {
    Demand value; /* cell's value */
  } future_cell_demand;
#endif

//#include "math.h"
void *malloc() {}

#define NULL 0

#define NUM_FEEDERS 10
#define LATERALS_PER_FEEDER 20
#define BRANCHES_PER_LATERAL 5
#define LEAVES_PER_BRANCH 10

#define F_EPSILON 0.000001
#define G_EPSILON 0.000001
#define H_EPSILON 0.000001
#define ROOT_EPSILON 0.00001

typedef struct root {
  Demand D;
  double theta_R; 
  double theta_I; 
  Demand last;
  double last_theta_R; 
  double last_theta_I;
  struct lateral *feeders[NUM_FEEDERS];
} *Root;

typedef struct lateral {
  Demand D;
  double alpha;
  double beta;
  double R;
  double X;
  struct lateral *next_lateral;
  struct branch *branch;
} *Lateral;

typedef struct branch {
  Demand D;
  double alpha;
  double beta;
  double R;
  double X;
  struct branch *next_branch;
  struct leaf *leaves[LEAVES_PER_BRANCH];
} *Branch;

typedef struct leaf {
  Demand D;
  double pi_R;
  double pi_I;
} *Leaf;

#ifdef PLAIN
#define ALLOC(pn,sz) malloc(sz)
#define __NumNodes 1
#define __MyNodeId 0
#endif

/* Prototypes */
Root build_tree();
Lateral build_lateral(int i, int num);
Branch build_branch(int i, int j, int num);
Leaf build_leaf();

void Compute_Tree(Root r);
Demand Compute_Lateral(Lateral l, double theta_R, double theta_I,
                       double pi_R, double pi_I);
Demand Compute_Branch(Branch b, double theta_R, double theta_I,
                       double pi_R, double pi_I);
Demand Compute_Leaf(Leaf l, double pi_R, double pi_I);
/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include <cm/cmmd.h>
//#include <fcntl.h>
int __NumNodes,__NDim;
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
/* For copyright information, see olden_v1.0/COPYRIGHT */

/* build.c
 *
 * By:  Martin C. Carlisle
 * 6/15/94
 * builds the tree for the Power Pricing problem
 *
 * based on code by:  Steve Lumetta, Sherry Li, and Ismail Khalil
 * University of California at Berkeley
 */

//#include "power.h"

Root build_tree() 
{
  register int i;
  register Root t;
#ifdef FUTURES
  int j;
  future_cell_int fc[NUM_FEEDERS];
#else
  register Lateral l;
#endif
  
  t = (Root) ALLOC(0,sizeof(*t));
#ifdef FUTURES
  for (i=0,j=0; i<NUM_FEEDERS; i++,j+=LATERALS_PER_FEEDER) {
    FUTURE(j,LATERALS_PER_FEEDER,build_lateral,&fc[i]);
  }
  for (i=0; i<NUM_FEEDERS; i++) {
    TOUCH(&fc[i]);
    t->feeders[i]=(Lateral) fc[i].value;
  }
#else
  for (i=0; i<NUM_FEEDERS; i++) {
    /* Insert future here, split into two loops */
    l = build_lateral(i*LATERALS_PER_FEEDER,LATERALS_PER_FEEDER);
    t->feeders[i]=l;
  }
#endif
  t->theta_R = 0.8;
  t->theta_I = 0.16;
  return t;
}

Lateral build_lateral(int i, int num)
{
  register int j,k;
  register Lateral l;
  register Branch b;
#ifdef FUTURES
  future_cell_int fc;
#else
  register Lateral next;
#endif
 
  if (num == 0) return NULL;

#ifndef PLAIN
  { int x,m,q,proc;
  x = (i+num-1)*BRANCHES_PER_LATERAL+BRANCHES_PER_LATERAL-1;
  m = 1000%__NumNodes;
  q = 1000/__NumNodes;
  if (x<m*(q+1)) proc = x/(q+1);
  else proc = (x-m)/q;
  l = (Lateral) ALLOC(__NumNodes-1-proc,sizeof(*l));
  }
#else
  l = (Lateral) ALLOC(0,sizeof(*l));
#endif

#ifdef FUTURES
  FUTURE(i,num-1,build_lateral,&fc);
  b = build_branch(i*BRANCHES_PER_LATERAL,(num-1)*BRANCHES_PER_LATERAL,
    BRANCHES_PER_LATERAL);
#else
  next = build_lateral(i,num-1);
  b = build_branch(i*BRANCHES_PER_LATERAL,(num-1)*BRANCHES_PER_LATERAL,
    BRANCHES_PER_LATERAL);
#endif

#ifdef FUTURES
  TOUCH(&fc); 
  l->next_lateral = (Lateral) fc.value;
#else
  l->next_lateral = next;
#endif
  l->branch = b;
  l->R = 1/300000.0;
  l->X = 0.000001;
  l->alpha = 0.0;
  l->beta = 0.0;
  return l;
}

Branch build_branch(int i, int j, int num)
{
  register Leaf l;
  register Branch b;
#ifdef FUTURES
  future_cell_int fc;
#endif

  if (num == 0) return NULL;
  /* allocate branch */
#ifndef PLAIN
  { int x,m,q,proc;
  x = i+j+num-1;
  m = 1000%__NumNodes;
  q = 1000/__NumNodes;
  if (x<m*(q+1)) proc = x/(q+1);
  else proc = (x-m)/q;
  b = (Branch) ALLOC(__NumNodes-1-proc,sizeof(*b));
  }
#else
  b = (Branch) ALLOC(0,sizeof(*b));
#endif
  
  /* fill in children */
#ifndef FUTURES
  b->next_branch= build_branch(i,j,num-1);
#else
  FUTURE(i,j,num-1,build_branch,&fc);
#endif

  for (i=0; i<LEAVES_PER_BRANCH; i++) {
    l = build_leaf();
    b->leaves[i] = l;
  }
  
 
#ifdef FUTURES
  TOUCH(&fc);
  b->next_branch = (Branch) fc.value;
#endif
  
  /* fill in values */
  b->R = 0.0001;
  b->X = 0.00002;
  b->alpha = 0.0;
  b->beta = 0.0;
  return b;
}

Leaf build_leaf()
{
  register Leaf l;

  l = (Leaf) mymalloc(sizeof(*l));
  l->D.P = 1.0;
  l->D.Q = 1.0;
  return l;
}
/* For copyright information, see olden_v1.0/COPYRIGHT */

/* compute.c
 *
 * By:  Martin C. Carlisle
 * 6/15/94
 *
 * Implements computation phase of the Power Pricing problem
 * based on code by: Steve Lumetta, Sherry Li, and Ismail Khalil
 * University of California at Berkeley
 *
 */

//#include "power.h"

/*----------------------------------------------------------------------*/
/* Leaf optimization 'global' variables               */

    static double     P=1.0;
    static double     Q=1.0;


/*----------------------------------------------------------------------*/
/* Leaf optimization procedures                 */

void optimize_node (double pi_R, double pi_I);
double find_g ();
double find_h ();
double find_gradient_f (double pi_R, double pi_I, double* gradient);
double find_gradient_g (double* gradient);
double find_gradient_h (double* gradient);
void find_dd_grad_f (double pi_R, double pi_I, double* dd_grad);
double make_orthogonal (double* v_mod, double* v_static);


void Compute_Tree(Root r) {
  register int i;
  Lateral l;
#ifndef FUTURES
  Demand a;
#else
  future_cell_demand fc[NUM_FEEDERS];
#endif
  Demand tmp;
  double theta_R,theta_I;

  tmp.P = 0.0;
  tmp.Q = 0.0;
#ifndef FUTURES
  for (i=0; i<NUM_FEEDERS; i++) {
    l = r->feeders[i];
    theta_R = r->theta_R;
    theta_I = r->theta_I;
    a = Compute_Lateral(l,theta_R,theta_I,theta_R,theta_I);
    tmp.P += a.P;
    tmp.Q += a.Q;

  }
#else
  for (i=0; i<NUM_FEEDERS; i++) {
    l = r->feeders[i];
    theta_R = r->theta_R;
    theta_I = r->theta_I;
    FUTURE(l,theta_R,theta_I,theta_R,theta_I,Compute_Lateral,&fc[i]);
  }
  for (i=NUM_FEEDERS-1; i>=0; i--) {
    TOUCH(&fc[i]);
    tmp.P += fc[i].value.P;
    tmp.Q += fc[i].value.Q;
  }
#endif
  r->D.P = tmp.P;
  r->D.Q = tmp.Q;
}

Demand Compute_Lateral(Lateral l, double theta_R, double theta_I, 
                       double pi_R, double pi_I) {
#ifndef FUTURES
  Demand a1;
#else
  future_cell_demand fc;
#endif
  Demand a2;
  double new_pi_R, new_pi_I;
  double a,b,c,root;
  Lateral next;
  Branch br;
  
  new_pi_R = pi_R + l->alpha*(theta_R+(theta_I*l->X)/l->R);
  new_pi_I = pi_I + l->beta*(theta_I+(theta_R*l->R)/l->X);

  next = l->next_lateral;
  if (next != NULL) 
#ifndef FUTURES
    a1 = Compute_Lateral(next,theta_R,theta_I,new_pi_R,new_pi_I);
#else
    FUTURE(next,theta_R,theta_I,new_pi_R,new_pi_I,Compute_Lateral,&fc);
#endif

  br = l->branch;
  a2 = Compute_Branch(br,theta_R,theta_I,new_pi_R,new_pi_I);

  if (next != NULL) {
#ifndef FUTURES
    l->D.P = a1.P + a2.P;
    l->D.Q = a1.Q + a2.Q;
#else
    TOUCH(&fc);
    l->D.P = a2.P + fc.value.P;
    l->D.Q = a2.Q + fc.value.Q;
#endif
  } else {
    l->D.P = a2.P;
    l->D.Q = a2.Q;
  }

  /* compute P,Q */
  a = l->R*l->R + l->X*l->X;  
  b = 2*l->R*l->X*l->D.Q - 2*l->X*l->X*l->D.P - l->R;
  c = l->R*l->D.Q - l->X*l->D.P;
  c = c*c + l->R*l->D.P;
  root = (-b-sqrt(b*b-4*a*c))/(2*a);
  l->D.Q = l->D.Q + ((root-l->D.P)*l->X)/l->R;
  l->D.P = root;

  /* compute alpha, beta */
  a = 2*l->R*l->D.P;
  b = 2*l->X*l->D.Q;
  l->alpha = a/(1-a-b);
  l->beta = b/(1-a-b);
  return l->D;
}

Demand Compute_Branch(Branch br, double theta_R, double theta_I, 
                       double pi_R, double pi_I) {
  Demand a2,tmp;
  double new_pi_R, new_pi_I;
  double a,b,c,root;
  Leaf l;
  Branch next;
  int i;
#ifdef FUTURES
  future_cell_demand fc;
#else
  Demand a1;
#endif
  
  new_pi_R = pi_R + br->alpha*(theta_R+(theta_I*br->X)/br->R);
  new_pi_I = pi_I + br->beta*(theta_I+(theta_R*br->R)/br->X);

  next = br->next_branch;
  if (next != NULL)  {
#ifndef FUTURES
    a1 = Compute_Branch(next,theta_R,theta_I,new_pi_R,new_pi_I);
#else
    FUTURE(next,theta_R,theta_I,new_pi_R,new_pi_I,Compute_Branch,&fc);
#endif
  }

  /* Initialize tmp */
  tmp.P = 0.0; tmp.Q = 0.0;

  for (i=0; i<LEAVES_PER_BRANCH; i++) {
    l = br->leaves[i];
    a2 = Compute_Leaf(l,new_pi_R,new_pi_I);
    tmp.P += a2.P;
    tmp.Q += a2.Q;
  }
  if (next != NULL) {
#ifndef FUTURES
    br->D.P = a1.P + tmp.P;
    br->D.Q = a1.Q + tmp.Q;
#else
    TOUCH(&fc);
    br->D.P = fc.value.P + tmp.P;
    br->D.Q = fc.value.Q + tmp.Q;
#endif
  } else {
    br->D.P = tmp.P;
    br->D.Q = tmp.Q;
  }

  /* compute P,Q */
  a = br->R*br->R + br->X*br->X;  
  b = 2*br->R*br->X*br->D.Q - 2*br->X*br->X*br->D.P - br->R;
  c = br->R*br->D.Q - br->X*br->D.P;
  c = c*c + br->R*br->D.P;
  root = (-b-sqrt(b*b-4*a*c))/(2*a);
  br->D.Q = br->D.Q + ((root-br->D.P)*br->X)/br->R;
  br->D.P = root;
  /* compute alpha, beta */
  a = 2*br->R*br->D.P;
  b = 2*br->X*br->D.Q;
  br->alpha = a/(1-a-b);
  br->beta = b/(1-a-b);

  return br->D;
}

Demand Compute_Leaf(Leaf l, double pi_R, double pi_I) {
  P = l->D.P;
  Q = l->D.Q;
  
  optimize_node(pi_R,pi_I);

  if (P<0.0) {
    P = 0.0;
    Q = 0.0;
  }
  l->D.P = P;
  l->D.Q = Q;
  return l->D;
}

/*----------------------------------------------------------------------*/

void optimize_node (double pi_R, double pi_I)
{
    double	    g;
    double	    h;

    double	    grad_f[2];
    double	    grad_g[2];
    double	    grad_h[2];
    double	    dd_grad_f[2];
    double	    magnitude;

    int		    i;
    double	    total;
    double	    max_dist;

    do {
	/* Move onto h=0 line */
	h=find_h ();
	if (fabs (h)>H_EPSILON) {
	    magnitude=find_gradient_h (grad_h);
	    total=h/magnitude;
	    P-=total*grad_h[0];
	    Q-=total*grad_h[1];
	}

	/* Check that g is still valid */
	g=find_g ();
	if (g>G_EPSILON) {
	    magnitude=find_gradient_g (grad_g);
	    find_gradient_h (grad_h);
	    magnitude*=make_orthogonal (grad_g,grad_h);
	    total=g/magnitude;
	    P-=total*grad_g[0];
	    Q-=total*grad_g[1];
	}

	/* Maximize benefit */
	magnitude=find_gradient_f (pi_R,pi_I,grad_f);
	find_dd_grad_f (pi_R,pi_I,dd_grad_f);
	total=0.0;
	for (i=0; i<2; i++)
	    total+=grad_f[i]*dd_grad_f[i];
	magnitude/=fabs (total);
	find_gradient_h (grad_h);
	magnitude*=make_orthogonal (grad_f,grad_h);
	find_gradient_g (grad_g);
	total=0.0;
	for (i=0; i<2; i++)
	    total+=grad_f[i]*grad_g[i];
	if (total>0) {
	    max_dist=-find_g ()/total;
	    if (magnitude>max_dist)
		magnitude=max_dist;
	}
	P+=magnitude*grad_f[0];
	Q+=magnitude*grad_f[1];

	h=find_h ();
	g=find_g ();
	find_gradient_f (pi_R,pi_I,grad_f);
	find_gradient_h (grad_h);

    } while (fabs (h)>H_EPSILON || g>G_EPSILON ||
	    (fabs (g)>G_EPSILON &&
		fabs (grad_f[0]*grad_h[1]-grad_f[1]*grad_h[0])>F_EPSILON));
}

double find_g ()
{
    return (P*P+Q*Q-0.8);
}

double find_h ()
{
    return (P-5*Q);
}

double find_gradient_f (double pi_R, double pi_I, double* gradient)
{
    int		    i;
    double	    magnitude=0.0;

    gradient[0]=1/(1+P)-pi_R;
    gradient[1]=1/(1+Q)-pi_I;
    for (i=0; i<2; i++)
	magnitude+=gradient[i]*gradient[i];
    magnitude=sqrt (magnitude);
    for (i=0; i<2; i++)
	gradient[i]/=magnitude;

    return magnitude;
}

double find_gradient_g (double* gradient)
{
    int		    i;
    double	    magnitude=0.0;

    gradient[0]=2*P;
    gradient[1]=2*Q;
    for (i=0; i<2; i++)
	magnitude+=gradient[i]*gradient[i];
    magnitude=sqrt (magnitude);
    for (i=0; i<2; i++)
	gradient[i]/=magnitude;

    return magnitude;
}

double find_gradient_h (double* gradient)
{
    int		    i;
    double	    magnitude=0.0;

    gradient[0]=1.0;
    gradient[1]=-5.0;
    for (i=0; i<2; i++)
	magnitude+=gradient[i]*gradient[i];
    magnitude=sqrt (magnitude);
    for (i=0; i<2; i++)
	gradient[i]/=magnitude;

    return magnitude;
}

void find_dd_grad_f (double pi_R, double pi_I, double* dd_grad)
{
    double	    P_plus_1_inv=1/(P+1);
    double	    Q_plus_1_inv=1/(Q+1);
    double	    P_grad_term=P_plus_1_inv-pi_R;
    double	    Q_grad_term=Q_plus_1_inv-pi_I;
    double	    grad_mag;
    
    grad_mag=sqrt (P_grad_term*P_grad_term+Q_grad_term*Q_grad_term);

    dd_grad[0]=-P_plus_1_inv*P_plus_1_inv*P_grad_term/grad_mag;
    dd_grad[1]=-Q_plus_1_inv*Q_plus_1_inv*Q_grad_term/grad_mag;
}

double make_orthogonal (double* v_mod, double* v_static)
{
    int		    i;
    double	    total=0.0;
    double	    length=0.0;

    for (i=0; i<2; i++)
	total+=v_mod[i]*v_static[i];
    for (i=0; i<2; i++) {
	v_mod[i]-=total*v_static[i];
	length+=v_mod[i]*v_mod[i];
    }
    length=sqrt (length);
    for (i=0; i<2; i++)
	v_mod[i]/=length;

    if (1-total*total<0)    /* Roundoff error--vectors are parallel */
	return 0;

    return sqrt (1-total*total);
}

/*----------------------------------------------------------------------*/
/* For copyright information, see olden_v1.0/COPYRIGHT */

/* main.c
 *
 * By:  Martin C. Carlisle
 * 6/16/94
 *
 * main routine for the Power Pricing problem
 * adapted from code by:  Steve Lumetta, Sherry Li, and Ismail Khalil
 * University of California at Berkeley
 *
 */

//#include "power.h"
//#include <cm/cmmd.h>

/* Domain of thetaR->P map is 0.65 to 1.00 [index*0.01+0.65] */
double map_P[36] =
{8752.218091048, 8446.106670416, 8107.990680283,
 7776.191574285, 7455.920518777, 7146.602181352,
 6847.709026813, 6558.734204024, 6279.213382291,
 6008.702199986, 5746.786181029, 5493.078256495,
 5247.206333097, 5008.828069358, 4777.615815166,
 4553.258735900, 4335.470002316, 4123.971545694,
 3918.501939675, 3718.817618538, 3524.683625800,
 3335.876573044, 3152.188635673, 2973.421417103,
 2799.382330486, 2629.892542617, 2464.782829705,
 2303.889031418, 2147.054385395, 1994.132771399,
 1844.985347313, 1699.475053321, 1557.474019598,
 1418.860479043, 1283.520126656, 1151.338004216};

#define      MIN_THETA_R       0.65
#define      PER_INDEX_R       0.01
#define      MAX_THETA_R       0.995

/* Domain of thetaI->Q map is 0.130 to 0.200 [index*0.002+0.130] */
double map_Q[36] =
{1768.846590190, 1706.229490046, 1637.253873079,
 1569.637451623, 1504.419525242, 1441.477913810,
 1380.700660446, 1321.980440476, 1265.218982201,
 1210.322424636, 1157.203306183, 1105.780028163,
 1055.974296746, 1007.714103979, 960.930643875,
 915.558722782, 871.538200178, 828.810882006,
 787.322098340, 747.020941334, 707.858376214,
 669.787829741, 632.765987756, 596.751545633,
 561.704466609, 527.587580585, 494.365739051,
 462.004890691, 430.472546686, 399.738429196,
 369.773787595, 340.550287137, 312.041496095,
 284.222260660, 257.068973074, 230.557938283};

#define      MIN_THETA_I       0.13
#define      PER_INDEX_I       0.002
#define      MAX_THETA_I       0.199

main(int argc,char *argv[])
{
  Root r;
  int i,finished=0;
  double d_theta_R,d_theta_I;

#ifdef FUTURES
  SPMDInit(argc,argv);
#else
  filestuff(0);
  dealwithargs(argc,argv);
  if (CMMD_self_address()) exit(1);
#endif


  /* initial pass */
  r = build_tree();
  Compute_Tree(r);
  r->last.P = r->D.P;
  r->last.Q = r->D.Q;
  r->last_theta_R = r->theta_R;
  r->last_theta_I = r->theta_I;
  r->theta_R = 0.7;
  r->theta_I = 0.14;
  
  while (!finished) {
    Compute_Tree(r);
    if (fabs(r->D.P/10000.0 - r->theta_R) < ROOT_EPSILON &&
        fabs(r->D.Q/10000.0 - r->theta_I) < ROOT_EPSILON) {
      finished = 1;
    } else {
      i = (int)((r->theta_R - MIN_THETA_R) / PER_INDEX_R);
      if (i<0) i=0;
      if (i>35) i=35;
      d_theta_R = -(r->theta_R - r->D.P/10000.0) /
        (1 - (map_P[i+1] - map_P[i]) / (PER_INDEX_R * 10000.0));

      i = (int)((r->theta_I - MIN_THETA_I) / PER_INDEX_I);
      if (i<0) i=0;
      if (i>35) i=35;
      d_theta_I = -(r->theta_I - r->D.Q/10000.0) /
        (1 - (map_Q[i+1] - map_Q[i]) / (PER_INDEX_I * 10000.0));
 
      r->last.P = r->D.P;
      r->last.Q = r->D.Q;
      r->last_theta_R = r->theta_R;
      r->last_theta_I = r->theta_I;
      r->theta_R = r->theta_R + d_theta_R;
      r->theta_I = r->theta_I + d_theta_I;
    }
  } /* while */

#ifdef FUTURES
  __ShutDown(0);
#endif
}
