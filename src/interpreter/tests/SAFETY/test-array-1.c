// SAFE

main()
{
  int i;
  int a[10];
  int *p;
  int *q;
 
  p=&a;
 
  i=0;
  while (i<10) {
    *(p+i)=0;
    i++;
  }
 
  _TRACER_abort(a[9] != 0);
 
}
 
/* 
The compilation results in 
 
block(b2, func_main, [p6], [p7], _, l, [i2,i3,i5], [nc,nc],[],[nc],[nc,c,nc,nc],
 [n,u],[],[n],[n,u,n,n]).
 
which says that the heaps are not updated in the loop. The program has
the following trans:
 
trans(func_main, i3,
        [p8],[H_$1,H_$2],[],[SH_$1,SH_$2],[],[A],[ReturnValue,I,P,Q],[SA],[SRetu
rnValue,SI,SP,SQ],
        [p10],[H_$1,H_$2Next],[],[SH_$1,SH_$2Next],[],[A],[ReturnValue,INext,P,Q
],[SA],[SReturnValue,SINext,SP,SQ],
        [arrassign(SH_$2Next,upd(SH_$2,plus(SP,SI),0)),assign(SINext,plus(SI,1))
],
        [],
        [],
        not_branch) :-
        H_$2Next=upd(H_$2,(P+I),0),INext=I+1.
 
Would you please have the compiler mark H2 as "c" as well?
Thank you so much.
 */
