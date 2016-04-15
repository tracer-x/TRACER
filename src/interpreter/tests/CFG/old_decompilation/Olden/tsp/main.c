/* For copyright information, see olden_v1.0/COPYRIGHT */

#include "tsp.h"
#include <stdio.h>
#include <cm/cmmd.h>
#include "mem-ref.h"

extern int flag;

void print_tree(Tree t)
{
  Tree left,right;
  double x,y;

  if (!t) return;
  x = t->x; y = t->y;
  chatting("x=%f,y=%f\n",x,y);
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
  chatting("%f %f\n",x,y);
  for (tmp=t->next; tmp!=t; tmp=tmp->next) 
    {
    x = tmp->x; y = tmp->y;
    chatting("%f %f\n",x,y);
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
  chatting("Building tree of size %d\n",num);
  t=build_tree(num,0,0,__NumNodes,0.0,1.0,0.0,1.0);
  if (!flag) chatting("Past build\n");
  if (flag) chatting("newgraph\n");
  if (flag) chatting("newcurve pts\n");

#ifndef PLAIN
  ClearAllStats();
#endif

  CMMD_node_timer_clear(0);
  CMMD_node_timer_start(0);
  tsp(t,150,__NumNodes);
  CMMD_node_timer_stop(0);
  if (flag) print_list(t);
  if (flag) chatting("linetype solid\n");
  chatting("Time for TSP = %f\n",CMMD_node_timer_elapsed(0));

#ifdef FUTURES
  __ShutDown(0);
#endif
}
