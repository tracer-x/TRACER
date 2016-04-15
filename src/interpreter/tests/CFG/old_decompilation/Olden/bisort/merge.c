void NOTEST() {}
void RETEST() {}
void TOUCH(int a) {}
void MLOCAL(int a) {}
int PID(int a) {int x; return x;}
void FUTURE(int a, int b, int c, int d) {}
#undef FUTURES

/* For copyright information, see olden_v1.0/COPYRIGHT */

/* =============== NODE STRUCTURE =================== */

struct node { 
  int value;
  struct node *left;
  struct node *right;
  };

typedef struct node HANDLE;

#define NIL ((HANDLE *) 0)
#ifdef FUTURES
#define makenode(procid) ALLOC(procid,sizeof(struct node))
#else
#define makenode(procid) mymalloc(sizeof(struct node))
#endif
/* For copyright information, see olden_v1.0/COPYRIGHT */

/* ========== PROCEDURE TYPES/NUMS ================== */


HANDLE *RandTree();

void SwapValue();
void SwapValLeft();
void SwapValRight();
int Bimerge();
int Bisort();
#define DD_EXIT 0


/* ================= PROC NAMES ==============*/

#ifdef EXTERN 
  /* extern */ char *procnames[]; 
#else 
  static char *procnames[] = 
  {
    "EXIT"
  };
#endif
/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include <cm/cmmd.h>
//#include <fcntl.h>
/* extern */ int __NumNodes,__NDim;
int mylog(int num)
{
  int j=0,k=1;
  
  while(k<num) { k*=2; j++; }
  return j;
} 

/* extern */ int flag;
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
  return size;
  
}

/* extern */ int stdout;
/* extern */ void CMMD_fset_io_mode(int a, int b) {}
/* extern */ void fcntl(int a, int b, int c) {}
/* extern */ int CMMD_independent, F_SETFL, O_APPEND;

void filestuff()
{
  CMMD_fset_io_mode(stdout, CMMD_independent);
  fcntl(fileno(stdout), F_SETFL, O_APPEND);
}
/* For copyright information, see olden_v1.0/COPYRIGHT */

/* =================== PROGRAM bitonic===================== */
/* UP - 0, DOWN - 1 */
//#include <cm/cmmd.h>
//#include "node.h"   /* Node Definition */
//#include "proc.h"   /* Procedure Types/Nums */

#define CONST_m1 10000
#define CONST_b 31415821
#define RANGE 100
#define NULL 0

//#include "mem-ref.h"
//#include "future-cell.h"

int mymalloc(int a) {int x; return x;}

#define put(a) // chatting("%d",a)
#define puts(a) // chatting(a)
#ifdef NOTESTP
#define NOTEST()
#define RETEST()
#define mymalloc malloc
#endif


int flag=0,foo=0;

#define LocalNewNode(h,v) \
  \
{ \
    h = (HANDLE *) mymalloc(sizeof(struct node)); \
    NOTEST(); \
      h->value = v; \
	h->left = NIL; \
	  h->right = NIL; \
    RETEST(); \
	  };

#ifndef ONEONLY
void NewSwapSubTree();
#define NewNode(h,v,procid) \
\
{ \
  h = (HANDLE *) makenode(procid); \
  NOTEST(); \
  h->value = v; \
  h->left = NIL; \
  h->right = NIL; \
  RETEST(); \
};
#else
#define NewNode(h,v,procid) LocalNewNode(h,v)
#endif

void 
/********/
InOrder(h)
/********/
HANDLE *h;
{
HANDLE *l, *r;
if ((h != NIL))
  {
   l = h->left;
   r = h->right;
   InOrder(l);
   // chatting("%d @ 0x%x\n",h->value,h);
   InOrder(r);
  }
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
  int tmp;
  tmp = (mult(seed,CONST_b)+1);
  return tmp;
}

typedef struct {
	int value;
} future_cell_int;

HANDLE* RandTree(n,seed,node,level)
     int n,seed,node,level;

{
  int next_val,my_name;
  future_cell_int f_left, f_right;
  HANDLE *h;
  my_name=foo++;
  if ((n > 1))
    {
      int newnode;
      if (level<__NDim)
	{
	  newnode = node + (1 <<  (__NDim-level-1));
	}
      else
	newnode = node;
      seed = random(seed);
      next_val=seed % RANGE;
      NewNode(h,next_val,node);
#ifdef FUTURES
      FUTURE((n/2),seed,newnode,level+1,RandTree,&f_left);
      FUTURE((n / 2),skiprand(seed,(n)+1),node,level+1,RandTree,&f_right);
      TOUCH(&f_left);
#else
      f_left.value=(int) RandTree((n/2),seed,newnode,level+1);
      f_right.value=(int) RandTree((n/2),skiprand(seed,(n)+1),node,level+1);
#endif
      h->left = (HANDLE *) f_left.value;
#ifdef FUTURES
      TOUCH(&f_right);
#endif
      h->right = (HANDLE *) f_right.value;
    }
  else 
    h = NIL;
  return(h);
} 

void
/************/
SwapValue(l,r)
/************/
HANDLE *l;
HANDLE *r;

{ int temp,temp2;
  
  temp = l->value;
  temp2 = r->value;
  NOTEST();
  r->value = temp;
  RETEST();
  l->value = temp2;
} 

#ifndef ONEONLY
void SwapTree(t1, t2)
     HANDLE *t1, *t2;
{
  if ((t1==NULL) || (t2==NULL)) return;
  if (PID(t1) != PID(t2))
    {
      int t1val, t2val;
      HANDLE *t1left, *t1right, *t2left, *t2right;
  
      // chatting("Swap 0x%x,0x%x\n",t1,t2);
      t1val = t1->value;
      NOTEST();
      t1left = t1->left;
      t1right = t1->right;
      RETEST();
      t2val = t2->value;
      NOTEST();
      t2left = t2->left;
      t2right = t2->right;
      t2->value = t1val;
      RETEST();
      t1->value = t2val;
      /*// chatting("values were %d,%d\n",t1val,t2val);*/
      if (PID(t1) != PID(t1left))
	{
	  future_cell_int fcleft;
	  FUTURE(t1left,t2left,SwapTree,&fcleft);
     SwapTree(t1right,t2right);
	  TOUCH(&fcleft); 
/*	  SwapTree(t1left,t2left);
	  SwapTree(t1right,t2right);*/
	}
      else 
	{
	  future_cell_int fcleft;
	  FUTURE(t1left,t2left,NewSwapSubTree,&fcleft);
     NewSwapSubTree(t1right,t2right);
	  TOUCH(&fcleft);
/*	  NewSwapSubTree(t1left,t2left);
	  NewSwapSubTree(t1right,t2right); */
	}
    }
  else 
    {
      int tempval;
      HANDLE *temphandle;
      NOTEST();
      /*// chatting("I think I'm local\n");*/
      tempval=t1->value;
      t1->value=t2->value;
      t2->value=tempval;
      temphandle=t1->left;
      t1->left=t2->left;
      t2->left=temphandle;
      temphandle=t1->right;
      t1->right=t2->right;
      t2->right=temphandle;
      RETEST();
    }
	
  /*// chatting("End Swap 0x%x,0x%x\n",t1,t2);*/
}

#endif

void
/***********/
SwapValLeft(l,r,ll,rl,lval,rval)
/***********/
HANDLE *l;
HANDLE *r;
HANDLE *ll;
HANDLE *rl;
int lval, rval;
{
  r->value = lval;
#ifdef ONEONLY  
  r->left = ll;
  l->left = rl;
#else
  if (rl) SwapTree(rl,ll);
#endif  
  l->value = rval;
} 


void
/************/
SwapValRight(l,r,lr,rr,lval,rval)
/************/
HANDLE *l;
HANDLE *r;
HANDLE *lr;
HANDLE *rr;
int lval, rval;
{  
  r->value = lval;
#ifdef ONEONLY
  r->right = lr;
  l->right = rr;
#else
  if (lr) SwapTree(lr,rr);
#endif  
  l->value = rval;
  /*// chatting("Swap Val Right l 0x%x,r 0x%x val: %d %d\n",l,r,lval,rval);*/
} 

int
/********************/
Bimerge(root,spr_val,dir)
/********************/
HANDLE *root;
int spr_val,dir;

{ int rightexchange;
  int elementexchange;
  int temp;
  HANDLE *pl,*pll,*plr;
  HANDLE *pr,*prl,*prr;
  HANDLE *rl;
  HANDLE *rr;
#ifdef  DUMB
  HANDLE *dummy;
#endif  
  int rv,lv;


  /*// chatting("enter bimerge %x\n", root);*/
  rv = root->value;
  NOTEST();
  pl = root->left;
  pr = root->right;
  rightexchange = ((rv > spr_val) ^ dir);
  if (rightexchange)
    {
      root->value = spr_val;
      spr_val = rv;
    }
  RETEST();
  
  while ((pl != NIL))
    {
      /*// chatting("pl = 0x%x,pr = 0x%x\n",pl,pr);*/
      lv = pl->value;
      NOTEST();
      pll = pl->left;
      plr = pl->right;
      RETEST();
      rv = pr->value;
      NOTEST();
      prl = pr->left;
      prr = pr->right;
      RETEST();
      elementexchange = ((lv > rv) ^ dir);
      if (rightexchange)
        if (elementexchange)
          { 
            SwapValRight(pl,pr,plr,prr,lv,rv);
            pl = pll;
            pr = prl;
          }
        else 
          { pl = plr;
            pr = prr;
          }
      else 
        if (elementexchange)
          { 
            SwapValLeft(pl,pr,pll,prl,lv,rv);
            pl = plr;
            pr = prr;
          }
        else 
          { pl = pll;
            pr = prl;
          }
    }
  if ((root->left != NIL))
    { 
      future_cell_int f_left;
      int value;
      NOTEST();
      rl = root->left;
      rr = root->right;
      value = root->value;
#ifdef DUMB
      LocalNewNode(dummy,value);
#endif      
#ifdef FUTURES
      FUTURE(rl,value,dir,Bimerge,&f_left);		/*** FUTURE CALL ***/
      spr_val=Bimerge(rr,spr_val,dir);
      TOUCH(&f_left);
      root->value = f_left.value;
#else
      root->value=Bimerge(rl,value,dir);
      spr_val=Bimerge(rr,spr_val,dir);
#endif
      RETEST();
    }
  /*// chatting("exit bimerge %x\n", root);*/
  return spr_val;
} 

int
/*******************/
Bisort(root,spr_val,dir)
/*******************/
HANDLE *root;
int spr_val,dir;

{ HANDLE *l;
  HANDLE *r;
#ifdef DUMB
  HANDLE *dummy;
#endif  
  int val;
  /*// chatting("bisort %x\n", root);*/
  if ((root->left == NIL))
    { 
     NOTEST();
     if (((root->value > spr_val) ^ dir))
        {
	  val = spr_val;
	  spr_val = root->value;
	  root->value =val;
	}
    RETEST();
    }
  else 
    {
      future_cell_int f_left;
      int ndir;
      NOTEST();
      l = root->left;
      r = root->right;
      val = root->value;
      /*// chatting("root 0x%x, l 0x%x, r 0x%x\n", root,l,r);*/
#ifdef DUMB 
      LocalNewNode(dummy,val);
#endif      
#ifdef FUTURES
      FUTURE(l,val,dir,Bisort,&f_left);		/*** FUTURE CALL ***/
      ndir = !dir;
      spr_val = Bisort(r,spr_val,ndir);
      TOUCH(&f_left);
      root->value = f_left.value;
#else
      root->value=Bisort(l,val,dir);
      ndir = !dir;
      spr_val=Bisort(r,spr_val,ndir);
#endif
      spr_val=Bimerge(root,spr_val,dir);
      RETEST();
    }
  /*// chatting("exit bisort %x\n", root);*/
  return spr_val;
} 

void CMMD_node_timer_clear(int a) {}
void CMMD_node_timer_start(int a) {}
void CMMD_node_timer_stop(int a) {}
void ClearAllStats() {}

void
/*********/
main(argc,argv)
int argc;
char *argv[];
/*********/

{ HANDLE *h;
  unsigned long time1, time2, time3, time4;
  int sval;
  int height;
  int counter;
  int n;
  int result = 1;
   
  
#ifdef FUTURES 
  n = SPMDInit (argc,argv);
#else 
  n = dealwithargs(argc,argv);
#endif

  // chatting("Bisort with %d size on %d procs of dim %d\n",
	   //n, __NumNodes, __NDim);
  CMMD_node_timer_clear(0);
  CMMD_node_timer_clear(1);
  h = RandTree(n,12345768,0,0);
  sval = random(245867) % RANGE;
  if (flag) {
    InOrder(h);
    // chatting("%d\n",sval);
   }
  // chatting("**************************************\n");
  // chatting("BEGINNING BITONIC SORT ALGORITHM HERE\n");
  // chatting("**************************************\n");

#ifndef PLAIN
  ClearAllStats();
#endif

  CMMD_node_timer_start(0);
  sval=Bisort(h,sval,0);
  CMMD_node_timer_stop(0);
  if (flag) {
    // chatting("Sorted Tree:\n"); 
    InOrder(h);
    // chatting("%d\n",sval);
   }
  
  CMMD_node_timer_start(1);
  sval=Bisort(h,sval,1);
  CMMD_node_timer_stop(1);
  if (flag) {
    // chatting("Sorted Tree:\n"); 
    InOrder(h);
    // chatting("%d\n",sval);
   }

  // chatting("Time to sort forward = %f\n",CMMD_node_timer_elapsed(0));
  // chatting("Time to sort backward = %f\n",CMMD_node_timer_elapsed(1));
  // chatting("Total: %f\n",CMMD_node_timer_elapsed(0)+
           //CMMD_node_timer_elapsed(1));
#ifdef FUTURES
  __ShutDown(0);
#endif
  exit(0);
} 

/* For copyright information, see olden_v1.0/COPYRIGHT */

#define COLLECT_SIZE 256
#define DFS_SIZE 20
#define NULL (HANDLE *) 0
//#include "node.h"
//#include "mem-ref.h"

typedef struct {
  int top;
  HANDLE *handles[DFS_SIZE];
} stack;

#define push(s,v) (s)->handles[++((s)->top)] = v
#define pop(s) (s)->handles[((s)->top)--]
#define stackempty(s) ((s)->top < 0)  
void VisitCollect(HANDLE *t, int *collect)
{
  register int val;
  val = t->value;
  *collect = val;
}

void VisitCollectReplace(HANDLE *t, int *collect)
{
  register int temp = *collect;
  register int val = t->value;
  *collect = val;
  t->value = temp;
}

void VisitReplace(HANDLE *t, int *collect)
{
  register int val = *collect;
  t->value = val;
}

void swapDFS(stack *s, int collection[], void visit())
{
  int num=0;
  
  while (!stackempty(s) && num < COLLECT_SIZE) 
    {
      HANDLE *v = pop(s);
      visit(v,&collection[num]);
      num++;
      if (v->left != NULL) 
	{
     HANDLE *child;
     child = v->right;
	  push(s,child);
     child = v->left;
	  push(s,child);
	}
    }
}

void NewSwapSubTree(HANDLE *t1, HANDLE *t2)
{
  stack c1, r1, s2;
  int collection[COLLECT_SIZE];

  /*// chatting("starting swapping\n");*/

  if (t1!=NULL) 
    {
      c1.top = -1;
      r1.top = -1;
      s2.top = -1;
      push(&c1,t1);
      push(&r1,t1);
      push(&s2,t2);
      while (!stackempty(&c1)) 
	{
     MLOCAL(t1);
	  swapDFS(&c1,collection,VisitCollect);
	  MLOCAL(t2);
	  swapDFS(&s2,collection,VisitCollectReplace);
	  MLOCAL(t1);
	  swapDFS(&r1,collection,VisitReplace);
	}
    }
  /*// chatting("ending swapping\n");*/

}
  
  
int *Collect(HANDLE *t1, int collection[])
{
  register int val;
  if (t1==NULL) return collection;
  MLOCAL(t1);
  val = t1->value;
  *collection = val;
  collection += 1;
  collection = Collect(t1->left,collection);
  collection = Collect(t1->right,collection);
  return collection;
}

int *Collect_Replace(HANDLE *t1, int collection[])
{
  register int temp,val;
  if (t1==NULL) return collection;
  MLOCAL(t1);
  temp = *collection;
  val = t1->value;
  *collection = val;
  t1->value = temp;
  collection += 1;
  collection = Collect_Replace(t1->left,collection);
  collection = Collect_Replace(t1->right,collection);
  return collection;
}

int *Replace(HANDLE *t1, int collection[])
{
  register int val;
  if (t1==NULL) return collection;
  MLOCAL(t1);
  val = *collection;
  t1->value = val;
  collection +=1;
  collection = Replace(t1->left,collection);
  collection = Replace(t1->right,collection);
  return collection;
}


void SwapSubTree(HANDLE *t1, HANDLE *t2)
{
  int collection[COLLECT_SIZE];
  HANDLE *t1loc, *t2loc;

  MLOCAL(t1);
  Collect(t1,collection);
  MLOCAL(t2);
  Collect_Replace(t2,collection);
  MLOCAL(t1);
  Replace(t1,collection);
}
