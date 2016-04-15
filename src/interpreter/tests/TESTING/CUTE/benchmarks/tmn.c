#include "../cute.h"

#define EMPTY -1
#define a 0
#define b 1
#define s 2
#define ii 3
#define MAXSTATES 2
#define MAXKNOWLEDGE 4

#define SLEEP 0
#define WAIT 1
#define COMMIT 2

struct ClientA {
  int state;
  int nonce;
} A;


typedef struct SState_tag {
  int initiator;
  int responder;
  int nonce;
} SState;

struct Net {
  int to;
  int from;
  int dest;
  int nonce;
  int key;
} net;

struct Server {
  SState states[MAXSTATES];
  int i;
} S;

struct IState {
  int nonce;
  int key;
};

struct Intruder {
  struct IState know[MAXKNOWLEDGE];
  int i;
} I;

void invalidate(){
  net.to = EMPTY;
  net.from = EMPTY;
  net.nonce=EMPTY;
}

void init(){
  S.i=0;
  A.state = SLEEP;
  invalidate();
}

void print_id(int id){
  switch(id){
  case a:
    printf("a");
    break;
  case b:
    printf("b");
    break;
  case s:
    printf("s");
    break;
  case ii:
    printf("i");
    break;
  case EMPTY:
    printf("empty");
    break;
  }
}

void print_message(){
  printf("from ");
  print_id(net.from);
  printf(" to ");
  print_id(net.to);
  printf(" dest ");
  print_id(net.dest);
  printf(" nonce ");
  print_id(net.nonce);
  printf(" key ");
  print_id(net.key);
  printf("\n");
}



int rule_none_to_A_Enabled(){
  return A.state==SLEEP;
}


void rule_none_to_A_Action(){
  net.from = a;
  net.to = s;
  net.dest = b;
  net.nonce = a;
  net.key = s;
  A.state=WAIT;
}

int rule_S_to_A_Enabled(){
  return b==net.dest && A.state==WAIT && net.from==s && net.to==a && net.key==a;
}

void rule_S_to_A_Action(){
  A.state=COMMIT;
  A.nonce = net.nonce;
}

int rule_S_to_B_Enabled(){
  return net.from==s && net.to==b && net.nonce==EMPTY;
}

void rule_S_to_B_Action(){
  net.from = b;
  net.to = s;
  net.nonce = b;
  net.key = s;
}

int rule_S_rcv_Enabled(){
  return (net.to==s && net.key==s);
}

void rule_S_rcv_Action(){
  int j;


  for(j=0;j<S.i;j++){
    if(S.states[j].initiator==net.dest && net.from == S.states[j].responder){
      net.from = s;
      net.to = S.states[j].initiator;
      net.dest = S.states[j].responder;
      net.key = S.states[j].nonce;
      CUTE_assert(!(net.to==ii && net.nonce==b && net.key==ii));
      return;
    }
  }
  if(S.i==MAXSTATES) (S.i)--;
  S.states[S.i].initiator = net.from;
  S.states[S.i].responder = net.dest;
  S.states[S.i].nonce = net.nonce;

  net.from = s;
  net.to = S.states[S.i].responder;
  net.dest = S.states[S.i].initiator;
  net.nonce=EMPTY;
  if(S.i<MAXSTATES) (S.i)++;

/*   printf("Server state\n"); */
/*   for(j=0;j<S.i;j++){ */
/*     printf("initiator "); */
/*     print_id(S.states[j].initiator); */
/*     printf(" responder "); */
/*     print_id(S.states[j].responder); */
/*     printf(" nonce "); */
/*     print_id(S.states[j].nonce); */
/*     printf("\n"); */
/*   } */
}

int rule_I_intercept_Enabled(){
  return net.nonce!=EMPTY;
}

      
void rule_I_intercept(int drop){
  int j,flag;
  flag=0;
  for(j=0;!flag && j<I.i;j++){
    if(I.know[j].nonce==net.nonce && I.know[j].key==net.key)
      flag = 1;
  }
  if(!flag && I.i<MAXKNOWLEDGE){
    I.know[I.i].nonce = net.nonce;
    I.know[I.i].key = net.key;
    (I.i)++;
  }
  if(drop){
    invalidate();
  }
}
       
void rule_I_send_ii(){
  int toss;

#ifdef GENERAL
  CUTE_input(toss);
  CUTE_assume(toss==a || toss==b || toss==ii);
  net.from = toss; 
#else
   net.from = ii; 
#endif
  net.to = s;
  
#ifdef GENERAL
  CUTE_input(toss);
  CUTE_assume(toss==a || toss==b || toss==ii); 
  net.dest = toss;
#else
   net.dest = ii; 
#endif

  net.nonce = ii;
  net.key = s;
}

int rule_I_replay_Enabled(){
  return I.i>0;
}

void rule_I_replay(){
  int toss,j;

#ifdef GENERAL
  CUTE_input(toss);
  CUTE_assume(toss==a || toss==b || toss==ii);
  net.from = toss; 
#else
  net.from = ii;
#endif
  net.to = s;

#ifdef GENERAL
  CUTE_input(toss);
  CUTE_assume(toss==a || toss==b || toss==ii); 
  net.dest = toss;
#else
  net.dest = ii;
#endif

  for(j=0;j<I.i;j++){
    CUTE_input(toss);
    if(!toss) {     
      net.nonce = I.know[j].nonce;
      net.key = I.know[j].key;
      return;
    }
  }
  invalidate();
}



void run_once(){
  int enabled[7];
  int i=0;
  int toss,drop;

  /*  
  enabled[i++]= rule_none_to_A_Enabled();
  enabled[i++]= rule_S_to_A_Enabled();
  enabled[i++]= rule_S_to_B_Enabled();
  enabled[i++]= rule_S_rcv_Enabled();
  enabled[i++]= rule_I_intercept_Enabled();
  enabled[i++]= 1;
  enabled[i++]= rule_I_replay_Enabled();
  */

  CUTE_input(toss);

  if(toss==0){
    CUTE_assume(rule_none_to_A_Enabled());
    rule_none_to_A_Action();
  } else if(toss==1){
    CUTE_assume(rule_S_to_A_Enabled());
    rule_S_to_A_Action();
  } else if(toss==2){
    CUTE_assume(rule_S_to_B_Enabled());
    rule_S_to_B_Action();
  } else if(toss==3){
    CUTE_assume(rule_S_rcv_Enabled());
    rule_S_rcv_Action();
  } else if(toss==4){
    CUTE_assume(rule_I_intercept_Enabled());
    CUTE_input(drop);
    rule_I_intercept(drop);
  } else if(toss==6){
    CUTE_assume(rule_I_replay_Enabled());
    rule_I_replay();
  } else {
    rule_I_send_ii();
  }
}

void run7(){
  int i;
  init();
  for(i=0;i<8;i++){
    run_once();
  }
}



/*
main(){
  init();
  rule_I_send_ii();
  assert(rule_S_rcv_Enabled());
  print_message();
  rule_S_rcv_Action();
  assert(rule_none_to_A_Enabled());
  rule_none_to_A_Action();
  assert(rule_S_rcv_Enabled());
  print_message();
  rule_S_rcv_Action();
  assert(rule_S_to_B_Enabled());
  rule_S_to_B_Action();
  assert(rule_I_intercept_Enabled());
  rule_I_intercept(1);
  assert(rule_I_replay_Enabled());
  rule_I_replay();
  print_message();
  assert(rule_S_rcv_Enabled());
  rule_S_rcv_Action();
}
*/
