/*
	An example to demonstrate that Blast traverses larger
	tree than TRACER.
	*/

// BLAST 
// 28 predicates
// 3.32sec
// TRACER
// 50 states and 0 subsumed
// 0.06sec

void main()
{
  int x, e;

  x=1;
  e=0;

  if (x>0) x+=1; else  e=999999;
  if (x>0) x+=2; else  e=999999;
  if (x>0) x+=3; else  e=999999;
  if (x>0) x+=4; else  e=999999;
  if (x>0) x+=5; else  e=999999;

  if (x>0) x+=1; else  e=999999;
  if (x>0) x+=2; else  e=999999;
  if (x>0) x+=3; else  e=999999;
  if (x>0) x+=4; else  e=999999;
  if (x>0) x+=5; else  e=999999;

  if (x>0) x+=1; else  e=999999;
  if (x>0) x+=2; else  e=999999;
  if (x>0) x+=3; else  e=999999;
  if (x>0) x+=4; else  e=999999;
  if (x>0) x+=5; else  e=999999;

  // BLAST 
   if (e!=0) ERROR: goto ERROR;
  // TRACER _ABORT(e!=0);

}
