// SAFE

// using wp the second subtree rooted at x=0 is subsumed

// if we replace the assignment at pp 6 x=0 with x=1,.... then
// deletion also can subsume.

main()
{
  int x, y, z;  
          // ndwp:     true and true = true
          // dwp:      true and true = true
          // deletion: true and true = true        
  /*3*/ if (x>0) {
          // ndwp:     x>0
          // dwp:      (x+y<=0 and y>0) or x<=-1
          // deletion: x>0
  /*4*/   z = 2;  /*5*/
        }
        else {
          // ndwp:     true 
          // dwp :     true 
          // deletion: true 
  /*6*/	  x = 0; /*7*/  
        }

/*
Magic step to obtain x>=0 at 7: 
       \phi        = y>0 and A implies x+y>0
       \phi        = y<=0 or not A or x+y>0
   not \phi        = y>0 and A and x+y <=0 
   project onto x  = x<0
   negate back     = x>=0  
*/
          // ndwp:     x>=0 and x>-1 = x>=0
          // dwp:      (x+y<=0 and y>0) or (x<=-1)  
          //           ^^^^^^^^^^^^^^^^^^^^^^^^^^^
          //           subsumption condition (we need to negate) is x>-1 
          // deletion: x>0 and x>0  = x>0
  /*7*/ if (y>0) {
          // ndwp:     x+y>0
          // dwp:      x+y<=0
          // deletion: x>0 and y>0
  /*8*/   z = 3;
        }
        else {
          // ndwp:     x>-1
          // dwp:      x<=-1
          // deletion: x>0
  /*10*/  y = 1;
        }
  /*11*/ //  ndwp:     x+y>0
         //  dwp:      x+y<=0
         //  deletion: x>0 and y>0
  _TRACER_abort(x+y<=0);
}
