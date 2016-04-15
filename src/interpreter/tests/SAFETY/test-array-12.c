struct test {
  int f;
};

main(){

  struct test a;
  struct test b[5];
  struct test * c;
  struct test * d[5];

  // arrassign(SA$Next$,upd(SA,0,5)),
  a.f = 5;
  // arrassign(SH$5$$Next$,upd(SH$5$,plus(plus(SAddr_func_main__b_,3),0),50))
  b[3].f = 50;
  // arrassign(SH$4$$Next$,upd(SH$4$,plus(SC,0),500))
  c->f = 500;
  // arrassign(SH$0$$Next$,upd(SH$0$,plus(ref(SH$1$,plus(SAddr_func_main__d_,3)),0),5000))
  d[3]->f = 5000;

  _TRACER_abort( (a.f != 5) || (b[3].f != 50) || (c->f != 500) || (d[3]->f != 5000));
}
