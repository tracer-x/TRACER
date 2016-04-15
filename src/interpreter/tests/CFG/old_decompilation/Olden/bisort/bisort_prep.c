# 1 "merge.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "merge.c"
void NOTEST() {}
void RETEST() {}
void TOUCH(int a) {}
void MLOCAL(int a) {}
int PID(int a) {int x; return x;}
void FUTURE(int a, int b, int c, int d) {}






struct node {
  int value;
  struct node *left;
  struct node *right;
  };

typedef struct node HANDLE;
# 32 "merge.c"
HANDLE *RandTree();

void SwapValue();
void SwapValLeft();
void SwapValRight();
int Bimerge();
int Bisort();
# 47 "merge.c"
//  static char *procnames[] =
//  {
//    "EXIT"
//  };





int NumNodes,NDim;
int mylog(int num)
{
  int j=0,k=1;

  while(k<num) { k*=2; j++; }
  return j;
}

//int flag;
int dealwithargs(int argc, char *argv[])
{
  int size;

  if (argc > 3)
    flag = atoi(argv[3]);
  else
    flag = 0;

  if (argc > 2)
    NumNodes = atoi(argv[2]);
  else
    NumNodes = 4;

  if (argc > 1)
    size = atoi(argv[1]);
  else
    size = 16;
  NDim = mylog(NumNodes);
  return size;

}

int stdout;
void CMMD_fset_io_mode(int a, int b) {}
void fcntl(int a, int b, int c) {}
int CMMD_independent, F_SETFL, O_APPEND;

void filestuff()
{
  CMMD_fset_io_mode(stdout, CMMD_independent);
  fcntl(fileno(stdout), F_SETFL, O_APPEND);
}
# 115 "merge.c"
int mymalloc(int a) {int x; return x;}
# 126 "merge.c"
int flag=0,foo=0;
# 140 "merge.c"
void NewSwapSubTree();
# 155 "merge.c"
void

InOrder(h)
HANDLE *h;
{
  HANDLE *l, *r;
  if ((h != ((HANDLE *) 0)))
    {
      l = h->left;
      r = h->right;
      InOrder(l);
      
      InOrder(r);
    }
}

int mult(int p, int q)
{
 int p1, p0, q1, q0;

 p1=p/10000; p0=p%10000;
 q1=q/10000; q0=q%10000;
 return (((p0*q1+p1*q0) % 10000)*10000 +p0*q0);
}

int skiprand(int seed, int n)
{
  for (; n; n--) seed=random(seed);
  return seed;
}

int random(int seed)
{
  int tmp;
  tmp = (mult(seed,31415821)+1);
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
      if (level<NDim)
 {
   newnode = node + (1 << (NDim-level-1));
 }
      else
 newnode = node;
      seed = random(seed);
      next_val=seed % 100;
      { h = (HANDLE *) mymalloc(sizeof(struct node)); NOTEST(); h->value = next_val; h->left = ((HANDLE *) 0); h->right = ((HANDLE *) 0); RETEST(); };;





      f_left.value=(int) RandTree((n/2),seed,newnode,level+1);
      f_right.value=(int) RandTree((n/2),skiprand(seed,(n)+1),node,level+1);

      h->left = (HANDLE *) f_left.value;



      h->right = (HANDLE *) f_right.value;
    }
  else
    h = ((HANDLE *) 0);
  return(h);
}

void

SwapValue(l,r)

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


void SwapTree(t1, t2)
     HANDLE *t1, *t2;
{
  int temp__1, temp__2;

  if ((t1==0) || (t2==0)) return;
  
  temp__1 = PID(t1);
  temp__2 = PID(t2);
  
  if (temp__1 != temp__2)
    {
      int t1val, t2val;
      HANDLE *t1left, *t1right, *t2left, *t2right;


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

      temp__1 = PID(t1);
      temp__2 = PID(t1left);
      
      if (temp__1 != temp__2)
 {
   future_cell_int fcleft;
   FUTURE(t1left,t2left,SwapTree,&fcleft);
     SwapTree(t1right,t2right);
   TOUCH(&fcleft);


 }
      else
 {
   future_cell_int fcleft;
   FUTURE(t1left,t2left,NewSwapSubTree,&fcleft);
     NewSwapSubTree(t1right,t2right);
   TOUCH(&fcleft);


 }
    }
  else
    {
      int tempval;
      HANDLE *temphandle;
      NOTEST();

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


}



void

SwapValLeft(l,r,ll,rl,lval,rval)

HANDLE *l;
HANDLE *r;
HANDLE *ll;
HANDLE *rl;
int lval, rval;
{
  r->value = lval;




  if (rl) SwapTree(rl,ll);

  l->value = rval;
}


void

SwapValRight(l,r,lr,rr,lval,rval)

HANDLE *l;
HANDLE *r;
HANDLE *lr;
HANDLE *rr;
int lval, rval;
{
  r->value = lval;




  if (lr) SwapTree(lr,rr);

  l->value = rval;

}

int
Bimerge(root,spr_val,dir)
HANDLE *root;
int spr_val,dir;

{ int rightexchange;
  int elementexchange;
  int temp;
  HANDLE *pl,*pll,*plr;
  HANDLE *pr,*prl,*prr;
  HANDLE *rl;
  HANDLE *rr;



  int rv,lv;



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

  while ((pl != ((HANDLE *) 0)))
    {

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
  if ((root->left != ((HANDLE *) 0)))
    {
      future_cell_int f_left;
      int value;
      NOTEST();
      rl = root->left;
      rr = root->right;
      value = root->value;
# 449 "merge.c"
      root->value=Bimerge(rl,value,dir);
      spr_val=Bimerge(rr,spr_val,dir);

      RETEST();
    }

  return spr_val;
}

int

Bisort(root,spr_val,dir)

HANDLE *root;
int spr_val,dir;

{ HANDLE *l;
  HANDLE *r;



  int val;

  if ((root->left == ((HANDLE *) 0)))
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
# 502 "merge.c"
      root->value=Bisort(l,val,dir);
      ndir = !dir;
      spr_val=Bisort(r,spr_val,ndir);

      spr_val=Bimerge(root,spr_val,dir);
      RETEST();
    }

  return spr_val;
}

void CMMD_node_timer_clear(int a) {}
void CMMD_node_timer_start(int a) {}
void CMMD_node_timer_stop(int a) {}
void ClearAllStats() {}

void
main(argc,argv)
int argc;
char *argv[];
{ HANDLE *h;
  unsigned long time1, time2, time3, time4;
  int sval;
  int height;
  int counter;
  int n;
  int result = 1;





  n = dealwithargs(argc,argv);




  CMMD_node_timer_clear(0);
  CMMD_node_timer_clear(1);
  h = RandTree(n,12345768,0,0);
  sval = random(245867) % 100;
  if (flag) {
    InOrder(h);

   }





  ClearAllStats();


  CMMD_node_timer_start(0);
  sval=Bisort(h,sval,0);
  CMMD_node_timer_stop(0);
  if (flag) {

    InOrder(h);

   }

  CMMD_node_timer_start(1);
  sval=Bisort(h,sval,1);
  CMMD_node_timer_stop(1);
  if (flag) {

    InOrder(h);

   }
# 583 "merge.c"
  //exit(0);
}
# 594 "merge.c"
typedef struct {
  int top;
  HANDLE *handles[20];
} stack;




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

  while (!((s)->top < 0) && num < 256)
    {
      HANDLE *v = (s)->handles[((s)->top)--];
      visit(v,&collection[num]);
      num++;
      if (v->left != (HANDLE *) 0)
 {
     HANDLE *child;
     child = v->right;
   (s)->handles[++((s)->top)] = child;
     child = v->left;
   (s)->handles[++((s)->top)] = child;
 }
    }
}

void NewSwapSubTree(HANDLE *t1, HANDLE *t2)
{
  stack c1, r1, s2;
  int collection[256];



  if (t1!=(HANDLE *) 0)
    {
      c1.top = -1;
      r1.top = -1;
      s2.top = -1;
      (&c1)->handles[++((&c1)->top)] = t1;
      (&r1)->handles[++((&r1)->top)] = t1;
      (&s2)->handles[++((&s2)->top)] = t2;
      while (!((&c1)->top < 0))
 {
     MLOCAL(t1);
   swapDFS(&c1,collection,VisitCollect);
   MLOCAL(t2);
   swapDFS(&s2,collection,VisitCollectReplace);
   MLOCAL(t1);
   swapDFS(&r1,collection,VisitReplace);
 }
    }


}


int *Collect(HANDLE *t1, int collection[])
{
  register int val;
  if (t1==(HANDLE *) 0) return collection;
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
  if (t1==(HANDLE *) 0) return collection;
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
  if (t1==(HANDLE *) 0) return collection;
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
  int collection[256];
  HANDLE *t1loc, *t2loc;

  MLOCAL(t1);
  Collect(t1,collection);
  MLOCAL(t2);
  Collect_Replace(t2,collection);
  MLOCAL(t1);
  Replace(t1,collection);
}
