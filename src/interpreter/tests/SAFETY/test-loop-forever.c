// SAFE: this program does not terminate.
// TRACER forces loop invariant but exit condition is always false.

// Crystal has problems to compile LOOP: goto LOOP. 

// BLAST does not run w/:

/*
main(){
   int i=0;
   LOOP: goto LOOP;   
   if (i==0) ERROR: goto ERROR;
 }

or

main(){
   int i=0;
   while (1) { }
   if (i==0) ERROR: goto ERROR;
 }
*/

main(){
   int i=0;

   LOOP: goto LOOP;   
   //while(1) {  }
   _TRACER_abort(i==0);
 }
