void chatting(int a, int b) {}
int MLOCAL(int a) {int x; return x;}
int ALLOC(int a, int b) {int x; return x;}
/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include "stdio.h"

typedef struct hash_entry {
  unsigned int key;
  void *entry;
  struct hash_entry *next;
} *HashEntry;

typedef struct hash {
  HashEntry *array;
  int (*mapfunc)(unsigned int);
  int size;
} *Hash;

Hash MakeHash(int size, int map(unsigned int));
void *HashLookup(unsigned int key, Hash hash);
void HashInsert(void *entry,unsigned int key, Hash hash);
void HashDelete(unsigned int key, Hash hash);
/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include "hash.h"
#define MAXPROC 32
#define NULL 0

#ifdef FUTURES
//#include "future-cell.h"
#endif
//#include "mem-ref.h"
#ifdef PLAIN
#define MLOCAL(ptr)
#endif

typedef struct vert_st {
  int mindist;
  struct vert_st *next ;
  Hash edgehash;
  } *Vertex;

typedef struct graph_st {
  Vertex vlist[MAXPROC];
  } *Graph;

Graph MakeGraph(int numvert, int numproc);
/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include <cm/cmmd.h>
//#include <fcntl.h>
int __NumNodes, stdout, CMMD_independent, F_SETFL, O_APPEND;
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
    level = 1024;

  return level;

}

/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include "hash.h"
#define assert(num,a) if (!(a)) {chatting("Assertion failure:%d in hash\n",num); exit(-1);}

static int remaining = 0;
static char *temp;

static char *localmalloc(int size) 
{
  char *blah;
  
  if (size>remaining) 
    {
      temp = (char *) malloc(32768);
      remaining = 32768;
    }
  blah = temp;
  temp += size;
  remaining -= size;
  return blah;
}

#define localfree(sz)

Hash MakeHash(int size, int (*map)(unsigned int)) 
{
  Hash retval;
  int i;

  retval = (Hash) localmalloc(sizeof(*retval));
  retval->array = (HashEntry *) localmalloc(size*sizeof(HashEntry));
  for (i=0; i<size; i++)
    retval->array[i]=NULL;
  retval->mapfunc = map;
  retval->size = size;
  return retval;
}

void *HashLookup(unsigned int key, Hash hash)
{
  int j;
  HashEntry ent;

  j = (hash->mapfunc)(key);
  assert(1,j>=0);
  assert(2,j<hash->size);
  for (ent = hash->array[j]; ent && ent->key!=key; ent=ent->next);
  if (ent) return ent->entry;
  return NULL;
}

void HashInsert(void *entry,unsigned int key,Hash hash) 
{
  HashEntry ent;
  int j;
  
  assert(3,!HashLookup(key,hash));
  
  j = (hash->mapfunc)(key);
  ent = (HashEntry) localmalloc(sizeof(*ent));
  ent->next = hash->array[j];
  hash->array[j]=ent;
  ent->key = key;
  ent->entry = entry;
}

void HashDelete(unsigned int key,Hash hash)
{
  HashEntry *ent;
  HashEntry tmp;
  int j;

  j = (hash->mapfunc)(key);
  for (ent=&(hash->array[j]); (*ent) && (*ent)->key!=key; ent=&((*ent)->next));
  assert(4,*ent);
  tmp = *ent;
  *ent = (*ent)->next;
  localfree(tmp);
}

  
  


/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include "mst.h"
//#include <cm/cmmd.h>

typedef struct blue_return {
  Vertex vert;
  int dist;
} BlueReturn;

typedef struct fc_br {
  BlueReturn value;
} future_cell_BlueReturn;

static BlueReturn BlueRule(Vertex inserted, Vertex vlist) 
{
  BlueReturn retval;
  Vertex tmp,prev;
  Hash hash;
  int dist,dist2;
  int count;
  
  if (!vlist) {
    retval.dist = 999999;
    return retval;
  }
  MLOCAL(vlist);
  prev = vlist;
  retval.vert = vlist;
  retval.dist = vlist->mindist;
  hash = vlist->edgehash;
  dist = (int) HashLookup((unsigned int) inserted, hash);
  /*chatting("Found %d at 0x%x for 0x%x\n",dist,inserted,vlist);*/
  if (dist) 
    {
      if (dist<retval.dist) 
        {
          vlist->mindist = dist;
          retval.dist = dist;
        }
    }
  
  count = 0;
  /* We are guaranteed that inserted is not first in list */
  for (tmp=vlist->next; tmp; prev=tmp,tmp=tmp->next) 
    {
      count++;
      if (tmp==inserted) 
        {
          Vertex next;

          next = tmp->next;
          prev->next = next;
        }
      else 
        {
          hash = tmp->edgehash;
          dist2 = tmp->mindist;
          dist = (int) HashLookup((unsigned int) inserted, hash);
          /*chatting("Found %d at 0x%x for 0x%x\n",dist,inserted,tmp);*/
          if (dist) 
            {
              if (dist<dist2) 
                {
                  tmp->mindist = dist;
                  dist2 = dist;
                }
            }
          if (dist2<retval.dist) 
            {
              retval.vert = tmp;
              retval.dist = dist2;
            }
        } /* else */
    } /* for */
  /*chatting("Count was %d\n",count);*/
  return retval;
}

          

static Vertex MyVertexList = NULL;

static void SetMyVertexList(Vertex v) {
  MyVertexList = v;
}

static BlueReturn Do_all_BlueRule(Vertex inserted, int nproc, int pn) {
  future_cell_BlueReturn fcleft;
  BlueReturn retright;

  if (nproc > 1) {
#ifdef FUTURES
     RPC(inserted,nproc/2,pn+nproc/2,TO_PTR(pn+nproc/2),
         Do_all_BlueRule,&fcleft);
     /*FUTURE(inserted,nproc/2,pn+nproc/2,Do_all_BlueRule,&fcleft);*/
     retright = Do_all_BlueRule(inserted,nproc/2,pn);
     RTOUCH(&fcleft);
     /*TOUCH(&fcleft);*/
#else
     fcleft.value = Do_all_BlueRule(inserted,nproc/2,pn+nproc/2);
     retright = Do_all_BlueRule(inserted,nproc/2,pn);
#endif

     if (fcleft.value.dist < retright.dist) {
       retright.dist = fcleft.value.dist;
       retright.vert = fcleft.value.vert;
       }
     return retright;
  }
  else {
     if (inserted == MyVertexList)
       MyVertexList = MyVertexList->next;
     return BlueRule(inserted,MyVertexList);
  }
}

static int ComputeMst(Graph graph,int numproc,int numvert) 
{
  Vertex v;
  Vertex inserted,tmp;
  int cost=0,i,dist;
#ifdef FUTURES
      future_cell_int fc[MAXPROC];
#endif

  /* make copy of graph */
#ifdef FUTURES
  for (i=0; i<numproc; i++) 
    {
      v=graph->vlist[i];
      RPC(v,v,SetMyVertexList,&fc[i]);
    }
  for (i=0; i<numproc; i++)
    {
      TOUCH(&fc[i]);
    }
#endif

  /* Insert first node */
  inserted = graph->vlist[0];
  tmp = inserted->next;
  graph->vlist[0] = tmp;
  MyVertexList = tmp;
  numvert--;

  /* Announce insertion and find next one */
  while (numvert) 
    {
      BlueReturn br;
      
      br = Do_all_BlueRule(inserted,numproc,0);
      inserted = br.vert;    
      dist = br.dist;
      numvert--;
      cost = cost+dist;
    }
  return cost;
}

int main(int argc, char *argv[]) 
{
  Graph graph;
  int dist;
  int size;
 
#ifdef FUTURES
  SPMDInit();
#else
  filestuff();
#endif

  size = dealwithargs(argc,argv);
  graph = MakeGraph(size,__NumNodes);


  dist = ComputeMst(graph,__NumNodes,size);
#ifdef FUTURES
  __ShutDown();
#endif
  exit(0);
}
/* For copyright information, see olden_v1.0/COPYRIGHT */

//#include "mst.h"

#define CONST_m1 10000
#define CONST_b 31415821
#define RANGE 2048
static int HashRange;

static int mult(int p, int q)
{
   int p1, p0, q1, q0;

   p1=p/CONST_m1; p0=p%CONST_m1;
   q1=q/CONST_m1; q0=q%CONST_m1;
   return (((p0*q1+p1*q0) % CONST_m1)*CONST_m1+p0*q0);
}

static int random(int seed)
{
  int tmp;
  tmp = (mult(seed,CONST_b)+1);
  return tmp;
}

static int compute_dist(int i,int j, int numvert)
{
  int less, gt;
  if (i<j) {less = i; gt = j;} else {less = j; gt = i;}
  return (random(less*numvert+gt) % RANGE)+1;
}

static int hashfunc(unsigned int key)
{
#ifndef NEWCACHE
  return ((key>>3) % HashRange);
#else
  return ((key>>10) % HashRange);
#endif
}

static void AddEdges(int count1, Graph retval, int numproc, 
                     int perproc, int numvert, int j) 
{
  Vertex tmp;
  Vertex helper[MAXPROC];
  int i;

  for (i=0; i<numproc; i++) {
    helper[i] = retval->vlist[i];
  }

  for (tmp = retval->vlist[j]; tmp; tmp=tmp->next) 
    {
      MLOCAL(tmp);
      for (i=0; i<numproc*perproc; i++) 
        {
          int pn,offset,dist;
          Vertex dest;
          Hash hash;
          
          if (i!=count1) 
            {
              dist = compute_dist(i,count1,numvert);
              pn = i/perproc;
              offset = i % perproc;
              dest = ((helper[pn])+offset);
              hash = tmp->edgehash;
              HashInsert((void *) dist,(unsigned int) dest,hash);
            }
        } /* for i... */
      count1++;
    } /* for tmp... */
}

Graph MakeGraph(int numvert, int numproc) 
{
  int perproc = numvert/numproc;
  int i,j;
  int count1;
  Vertex v,tmp;
  Vertex block;
  Graph retval;
#ifdef FUTURES
  future_cell_int fc[MAXPROC];
#endif

  retval = (Graph) ALLOC(0,sizeof(*retval));
  for (i=0; i<MAXPROC; i++) 
    {
      retval->vlist[i]=NULL;
    }
  for (j=numproc-1; j>=0; j--) 
    {
      block = (Vertex) ALLOC(j,perproc*(sizeof(*tmp)));
      v = NULL;
      for (i=0; i<perproc; i++) 
        {
          tmp = block+(perproc-i-1);
          HashRange = numvert/4;
          tmp->mindist = 9999999;
          tmp->edgehash = MakeHash(numvert/4,hashfunc);
          tmp->next = v;
          v=tmp;
        }
      retval->vlist[j] = v;
    }

  for (j=numproc-1; j>=0; j--) 
    {
      count1 = j*perproc;
#ifndef FUTURES
      AddEdges(count1, retval, numproc, perproc, numvert, j);
#else
      FUTURE(count1,retval,numproc,perproc,numvert,j,AddEdges,&fc[j]);
#endif
    } /* for j... */
#ifdef FUTURES
  for (j=0; j<numproc; j++) 
    {
      TOUCH(&fc[j]);
    }
#endif

  return retval;
}

  
