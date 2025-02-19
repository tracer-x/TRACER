int mymalloc(int a) {int x; return x;}
void MYTEST() {}
void RETEST() {}
void NOTEST() {}
int pow(int a, int b) {int x; return x;}

/* For copyright information, see olden_v1.0/COPYRIGHT */

/****************************************************************
 * health.h: header file for health.c                           *
 ****************************************************************/


#ifndef _HEALTH
#define _HEALTH
#define PLAIN

//#include <stdio.h>
//#include <stdlib.h>

#define IA 16807
#define IM 2147483647
#define AM (1.0 / IM)
#define IQ 127773
#define IR 2836
#define MASK 123459876

int                      max_level;
long                     max_time,
                         seed;

int dealwithargs(int argc, char *argv[]);

struct Results {
  float                  total_patients;
  float                  total_time;
  float                  total_hosps; };  

struct Patient {
  int                    hosps_visited;
  int                    time;
  int                    time_left;
  struct Village         *home_village; };

struct List {
  struct Patient         *patient;
  struct List            *back;
  struct List            *forward; };

struct Hosp {
  int                    personnel; 
  int                    free_personnel; 
  int                    num_waiting_patients; 
  struct List            waiting; 
  struct List            assess; 
  struct List            inside;
  struct List    up; };
  
struct Village {
  struct Village         *forward[4],
                         *back;
  struct List            returned;
  struct Hosp            hosp;   
  int                    label;
  long                   seed; };

int dealwithargs(int argc, char *argv[]);
float my_rand(long idum);
struct Patient *generate_patient(struct Village *village);
void put_in_hosp(struct Hosp *hosp, struct Patient *patient);
void addList(struct List *list, struct Patient *patient);
void removeList(struct List *list, struct Patient *patient);
struct List *sim(struct Village *village);
void check_patients_inside(struct Village *village, struct List *list);
struct List *check_patients_assess(struct Village *village, struct List *list);
void check_patients_waiting(struct Village *village, struct List *list);
float get_num_people(struct Village *village);
float get_total_time(struct Village *village);
float get_total_hosps(struct Village *village);
struct Results get_results(struct Village *village);

#endif



/* For copyright information, see olden_v1.0/COPYRIGHT */

/*****************************************************************
 * args.c:  Handles arguments to command line.                   *
 *          To be used with health.c.                            *
 *****************************************************************/

//#include <stdio.h>
//#include <stdlib.h>
//#include "health.h"
#ifndef PLAIN
//#include "mem-ref.h"
//#include "future-cell.h"
#else
#define MIGRPH();
#endif

#define NULL 0

int stderr, __NumNodes;

int dealwithargs(int argc, char *argv[]) { 
  /*MIGRPH();*/
  if (argc < 5) {
    fprintf(stderr, "usage:  health <# levels> <time> <seed> <# proc>\n");
    exit(1); }
  
  max_level = atoi(argv[1]);
  max_time = atol(argv[2]);
  seed = atol(argv[3]);
  __NumNodes = atoi(argv[4]);
}





/* For copyright information, see olden_v1.0/COPYRIGHT */

/******************************************************************* 
 *  Health.c : Model of the Colombian Health Care System           *
 *******************************************************************/ 
//#include <cm/cmmd.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include "health.h"
//#include <assert.h>

//#include "mem-ref.h"
//#include "future-cell.h"

typedef int fc_impl;

#define ALLOC(lo, sz) mymalloc(sz)
#define MIGRPH();
#define SPMDInit(argc, argv) dealwithargs(argc, argv)
#define __ShutDown();
typedef unsigned long int word_t;
typedef struct fc_pointer {
  unsigned long int *value; } future_cell_pointer;
typedef struct fc_results {
  struct Results value; } future_cell_results;

 
struct Village *alloc_tree(int level, int lo, int proc, 
                           int label, struct Village *back) 
{  
  if (level == 0) 
    return NULL;
  else {
    int                  i;
    struct Village       *new, *farleft;
    future_cell_pointer  fval[4];

    /*MIGRPH();*/
    new = (struct Village *)ALLOC(lo, sizeof(struct Village));

#ifndef PLAIN
    for (i = 3; i > 0; i--) 
      FUTURE(level - 1, lo + (proc*(i))/4, proc / 4, (label * 4)+i+1, 
             new, alloc_tree, &fval[i]);
#else
    for (i = 3; i > 0; i--)
      fval[i].value = 
	(unsigned long int *)alloc_tree(level - 1, lo + (proc*(i))/4, 
					proc / 4, (label * 4) + i + 1, new); 
#endif

    fval[0].value = (unsigned long int *)alloc_tree(level - 1, lo, proc / 4, 
						    (label * 4) + 1, new);    
    new->back = back;
    NOTEST();
    new->label = label;
    new->seed = label * (IQ + seed); 
    new->hosp.personnel = (int)pow(2, level - 1);
    new->hosp.free_personnel = new->hosp.personnel;
    new->hosp.num_waiting_patients = 0;
    new->hosp.assess.forward = NULL;
    new->hosp.assess.back = NULL;
    new->hosp.waiting.forward = NULL;
    new->hosp.waiting.back = NULL;
    new->hosp.inside.forward = NULL;
    new->hosp.inside.back = NULL;
    new->returned.back = NULL;
    new->returned.forward = NULL;

#ifndef PLAIN
    for (i = 3; i > 0; i--)
      TOUCH(&fval[i]);
#endif

    for (i = 0; i < 4; i++)       
      new->forward[i]= (struct Village *)fval[i].value;
    RETEST();
    return new;
  }
}


struct Results get_results(struct Village *village)
{
  int                    i;
  float                  temp1, temp2; 
  struct List            *list;
  struct Patient         *p;
  struct Village         *v;
  future_cell_results    fval[4];
  struct Results         r1, r2;

  /*MIGRPH();*/
 
  r1.total_hosps = 0.0;
  r1.total_patients = 0.0;
  r1.total_time = 0.0;

  if (village == NULL) return r1;

#ifndef PLAIN  
  for (i = 3; i > 0; i--) {
    v = village->forward[i];
    FUTURE(v, get_results, &fval[i]);
    }
#else 
  for (i = 3; i > 0; i--) {
    v = village->forward[i];
    fval[i].value = get_results(v); }
#endif

  NOTEST();
  v = village->forward[0];
  fval[0].value = get_results(v);

#ifndef PLAIN  
  for (i = 3; i > 0; i--) 
    TOUCH(&fval[i]);
#endif

  for (i = 3; i >= 0; i--) {
    r1.total_hosps += fval[i].value.total_hosps;
    r1.total_patients += fval[i].value.total_patients;
    r1.total_time += fval[i].value.total_time; }

  list = village->returned.forward;
  RETEST();
  while (list != NULL) {
    p = list->patient;
    r1.total_hosps += (float)(p->hosps_visited);
    r1.total_time += (float)(p->time); 
    r1.total_patients += 1.0;
    list = list->forward; }
  
  return r1; 
}


void check_patients_inside(struct Village *village, struct List *list) 
{
  struct List            *l;
  struct Patient         *p;
  struct Hosp            *h;
  int                     t;
  
  /*MIGRPH();*/
  while (list != NULL) {
    p = list->patient;
    t = p->time_left;
    p->time_left = t - 1;
    if (p->time_left == 0) {
      t = village->hosp.free_personnel;
      village->hosp.free_personnel = t+1;
      l = &(village->hosp.inside);
      removeList(l, p); 
      l = &(village->returned);
      addList(l, p); }    
    list = list->forward; 
  } 
}


struct List *check_patients_assess(struct Village *village, struct List *list) 
{
  float                 rand;
  struct Patient          *p;
  struct Hosp             *h;
  struct List             *l, *up = NULL;
  long                     s;
  int                      label, t;
  struct Village          *v;
  long newseed;

  /*MIGRPH();*/
  while (list != NULL) 
    {
      p = list->patient;
      t = p->time_left;
      p->time_left = t - 1;
      label = village->label;
      if (p->time_left == 0) { 
        s = village->seed;
        rand = my_rand(s);
        village->seed = (long)(rand * IM);
        label = village->label;
        if (rand > 0.1 || label == 0) {
          l = &(village->hosp.assess);
          removeList(l, p);
          l = &(village->hosp.inside);
          addList(l, p);
          p->time_left = 10;
          NOTEST();
          t = p->time;
          p->time = t + 10; 
          RETEST(); }
        else {
          t = village->hosp.free_personnel;
          NOTEST();
          village->hosp.free_personnel = t+1;
          l = &(village->hosp.assess);
	       up = &(village->hosp.up);
          RETEST();
          removeList(l, p);
          addList(up, p); } }
      
      list = list->forward; 
    } 
  return up;
}


void check_patients_waiting(struct Village *village, struct List *list) 
{
  int                      i, t;
  struct List              *l;
  struct Patient           *p;
  
  /*MIGRPH();*/
  while (list != NULL) {
    i = village->hosp.free_personnel;
    p = list->patient;
    if (i > 0) {
      t = village->hosp.free_personnel;
      village->hosp.free_personnel = t-1;
      p->time_left = 3;
      NOTEST();
      t = p->time;
      p->time = t + 3;
      RETEST();
      l = &(village->hosp.waiting);
      removeList(l, p);
      l = &(village->hosp.assess);
      addList(l, p); }
    else {
      t = p->time;
      p->time = t + 1; }
    list = list->forward; } 
}


void put_in_hosp(struct Hosp *hosp, struct Patient *patient) 
{  
  struct List                *l;
  int                        t;
  
  /*MIGRPH();*/
  t = patient->hosps_visited;
  patient->hosps_visited = t + 1;
  if (hosp->free_personnel > 0) {
    t = hosp->free_personnel;
    hosp->free_personnel = t-1;
    l = &(hosp->assess);
    addList(l, patient); 
    patient->time_left = 3;
    t = patient->time;
    patient->time = t + 3; } 
  else {
    l = &(hosp->waiting);
    addList(l, patient); }
}


struct Patient *generate_patient(struct Village *village) 
{
  long            s,newseed; 
  struct Patient *patient;
  float rand;
  int label;
  
  /*MIGRPH();*/
  s = village->seed;
  rand = my_rand(s);
  village->seed = (long)(rand * IM);
  newseed = village->seed;
  label = village->label;
  if (rand > 0.666) {
    patient = (struct Patient *)mymalloc(sizeof(struct Patient));
    NOTEST();
    patient->hosps_visited = 0;
    patient->time = 0;
    patient->time_left = 0;
    patient->home_village = village; 
    RETEST();
    return patient; }
  return NULL; 
}
    

main(int argc, char *argv[]) 
{ 
  struct Results         results;
  struct Village         *top;
  long                   i;
  float                  total_time,
                         total_patients,
                         total_hosps;  
  
  SPMDInit(argc, argv);
  top = alloc_tree(max_level, 0, __NumNodes, 0, top);
  
  
  for (i = 0; i < max_time; i++) {
    sim(top);   }
  
  results = get_results(top);
  total_patients = results.total_patients;
  total_time = results.total_time;
  total_hosps = results.total_hosps;

  __ShutDown();
}

struct List *sim(struct Village *village)
{
  int                    i;
  struct Patient         *patient, *p;
  struct List            *l, *up;
  struct Village         *v;
  struct Hosp            *h;
  future_cell_pointer    val[4];
  
  int label;

  /*MIGRPH();*/
  if (village == NULL) return NULL;
 
  label = village->label;

#ifndef PLAIN  
  for (i = 3; i > 0; i--) {
    v = village->forward[i];
    RPC(v, v, sim, &val[i]); }
#else
  for (i = 3; i > 0; i--) {
    v = village->forward[i];
    val[i].value = (unsigned long int *)sim(v); }
#endif
  
  v = village->forward[0];
  val[0].value = (word_t *)sim(v);
  h = &(village->hosp);

#ifndef PLAIN
  for (i = 3; i > 0; i--)  
    TOUCH(&val[i]);
#endif

  for (i = 3; i >= 0; i--) { 
    l = (struct List *)val[i].value;
    if (l != NULL) {
      l = l->forward;
      while (l != NULL) {
	p = l->patient; 
	put_in_hosp(h, p);
	l = l->forward; 
	removeList((struct List *)val[i].value, p);
      } 
    } 
  }
  
  l = village->hosp.inside.forward;
  NOTEST();
  check_patients_inside(village, l);
  l = village->hosp.assess.forward;
  up = check_patients_assess(village, l);
  l = village->hosp.waiting.forward;
  check_patients_waiting(village, l);
  
  /*** Generate new patients ***/  
  if ((patient = generate_patient(village)) != NULL) {  
    label = village->label;
    h = &(village->hosp);
    put_in_hosp(h, patient); }

  RETEST();
  return up;
}








/* For copyright information, see olden_v1.0/COPYRIGHT */

/********************************************************************
 *  List.c:  Handles lists.                                         *
 *           To be used with health.c                               *
 ********************************************************************/

//#include <stdio.h>
//#include <stdlib.h>
//#include "health.h"

#ifndef PLAIN
//#include "mem-ref.h"
#else
#define MIGRPH(); 
#endif

void addList(struct List *list, struct Patient *patient) {
  struct List *b;

  /*MIGRPH();*/
  while (list != NULL) {
    b = list;
    list = list->forward; }
  
  list = (struct List *)mymalloc(sizeof(struct List));
  NOTEST();
  list->patient = patient;
  list->forward = NULL;
  list->back = b;
  RETEST();
  b->forward = list; } 


void removeList(struct List *list, struct Patient *patient) {
  struct List          *l1,*l2;
  struct Patient       *p;
  
  /*MIGRPH();*/
  p = list->patient;
  while(p != patient) {
      list = list->forward; 
      p = list->patient; }
    
  l1 = list->back;
  l2 = list->forward;
  l1->forward = l2;
  if (list->forward != NULL) {
    l1 = list->forward;
    l2 = list->back;
    l1->back = l2; }
  
  /*free(list);*/
}
     
/* For copyright information, see olden_v1.0/COPYRIGHT */

/**********************************************************
 * poisson.c: handles math routines for health.c          *
 **********************************************************/

//#include <stdio.h>
//#include <math.h>
//#include "health.h"


float my_rand(long idum) 
{
  long                   k;
  float                  answer;
  
  idum ^= MASK;
  k = idum / IQ;
  idum = IA * (idum - k * IQ) - IR * k;
  idum ^= MASK;
  if (idum < 0) 
    idum  += IM;
  answer = AM * idum;
  return answer; 
}






