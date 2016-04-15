/* volatile */ int P1_is_marked/*  = 3 */;
/* volatile */ long P1_marking_member_0_0;
/* volatile */ long P1_marking_member_0_1;
/* volatile */ long P1_marking_member_0_2;
/* volatile */ int P2_is_marked/*  = 5 */;
/* volatile */ long P2_marking_member_0_0;
/* volatile */ long P2_marking_member_0_1;
/* volatile */ long P2_marking_member_0_2;
/* volatile */ long P2_marking_member_0_3;
/* volatile */ long P2_marking_member_0_4;
/* volatile */ int P3_is_marked/*  = 0 */;
/* volatile */ long P3_mm_0;
/* volatile */ long P3_mm_1;
/* volatile */ long P3_mm_2;

// Added by Jorge
void init_global_variables(){
  P1_is_marked = 3;
  P2_is_marked = 5;
  P3_is_marked = 0;
}

int main()
{
   int dummy_i;
   long a,b,c,x,y,z;

   init_global_variables();
   dummy_i = 2;

   while (dummy_i > 0) {

      dummy_i--;

      if ( (P1_is_marked >= 3) &&
           (P3_is_marked + 3 <= 6) &&
           (P1_marking_member_0_1 == P1_marking_member_0_2) ) {

	x = P1_marking_member_0_0;
	y = P1_marking_member_0_1;
	if (x < y) {
            P1_is_marked = P1_is_marked - 3;
            z = x - y;
            if (P3_is_marked+0 == 0) P3_mm_0 = x; 
	    else if (P3_is_marked+0 == 1) P3_mm_1 = x; 
	    else if (P3_is_marked+0 == 2) P3_mm_2 = x;

            if (P3_is_marked+1 == 0) P3_mm_0 = y; 
	    else if (P3_is_marked+1 == 1) P3_mm_1 = y; 
	    else if (P3_is_marked+1 == 2) P3_mm_2 = y;

            if (P3_is_marked+2 == 0) P3_mm_0 = z; 
	    else if (P3_is_marked+2 == 1) P3_mm_1 = z; 
	    else if (P3_is_marked+2 == 2) P3_mm_2 = z;
            P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P1_is_marked >= 3) &&
           (P3_is_marked + 3 <= 6) &&
           (P1_marking_member_0_2 == P1_marking_member_0_1) ) {
         x = P1_marking_member_0_0;
         y = P1_marking_member_0_2;
         if ((x < y)) {
            P1_is_marked = P1_is_marked - 3;
            z = x - y;
            if (P3_is_marked+0 == 0) P3_mm_0 = x; 
	    else if (P3_is_marked+0 == 1) P3_mm_1 = x; 
	    else if (P3_is_marked+0 == 2) P3_mm_2 = x;
            if (P3_is_marked+1 == 0) P3_mm_0 = y; 
	    else if (P3_is_marked+1 == 1) P3_mm_1 = y; 
	    else if (P3_is_marked+1 == 2) P3_mm_2 = y;
            if (P3_is_marked+2 == 0) P3_mm_0 = z; 
	    else if (P3_is_marked+2 == 1) P3_mm_1 = z; else if (P3_is_marked+2 == 2) P3_mm_2 = z;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P1_is_marked >= 3) &&
           (P3_is_marked + 3 <= 6) &&
           (P1_marking_member_0_0 == P1_marking_member_0_2) ) {
         x = P1_marking_member_0_1;
         y = P1_marking_member_0_0;
         if (x < y) {
            P1_is_marked = P1_is_marked - 3;
            z = x - y;
            if (P3_is_marked+0 == 0) P3_mm_0 = x; 
	    else if (P3_is_marked+0 == 1) P3_mm_1 = x; 
	    else if (P3_is_marked+0 == 2) P3_mm_2 = x;
            if (P3_is_marked+1 == 0) P3_mm_0 = y; 
	    else if (P3_is_marked+1 == 1) P3_mm_1 = y; 
	    else if (P3_is_marked+1 == 2) P3_mm_2 = y;
            if (P3_is_marked+2 == 0) P3_mm_0 = z; 
	    else if (P3_is_marked+2 == 1) P3_mm_1 = z; 
	    else if (P3_is_marked+2 == 2) P3_mm_2 = z;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P1_is_marked >= 3) &&
           (P3_is_marked + 3 <= 6) &&
           (P1_marking_member_0_2 == P1_marking_member_0_0)) {
         x = P1_marking_member_0_1;
         y = P1_marking_member_0_2;
         if ((x < y)) {
            P1_is_marked = P1_is_marked - 3;
            z = x - y;
            if (P3_is_marked+0 == 0) P3_mm_0 = x; 
	    else if (P3_is_marked+0 == 1) P3_mm_1 = x; 
	    else if (P3_is_marked+0 == 2) P3_mm_2 = x;
            if (P3_is_marked+1 == 0) P3_mm_0 = y; 
	    else if (P3_is_marked+1 == 1) P3_mm_1 = y; 
	    else if (P3_is_marked+1 == 2) P3_mm_2 = y;
            if (P3_is_marked+2 == 0) P3_mm_0 = z; 
	    else if (P3_is_marked+2 == 1) P3_mm_1 = z; 
	    else if (P3_is_marked+2 == 2) P3_mm_2 = z;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P1_is_marked >= 3) &&
           (P3_is_marked + 3 <= 6) &&
           (P1_marking_member_0_0 == P1_marking_member_0_1) ) {
         x = P1_marking_member_0_2;
         y = P1_marking_member_0_0;
         if ((x < y)) {
            P1_is_marked = P1_is_marked - 3;
            z = x - y;
            if (P3_is_marked+0 == 0) P3_mm_0 = x; 
	    else if (P3_is_marked+0 == 1) P3_mm_1 = x; 
	    else if (P3_is_marked+0 == 2) P3_mm_2 = x;
            if (P3_is_marked+1 == 0) P3_mm_0 = y; 
	    else if (P3_is_marked+1 == 1) P3_mm_1 = y; 
	    else if (P3_is_marked+1 == 2) P3_mm_2 = y;
            if (P3_is_marked+2 == 0) P3_mm_0 = z; 
	    else if (P3_is_marked+2 == 1) P3_mm_1 = z; 
	    else if (P3_is_marked+2 == 2) P3_mm_2 = z;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P1_is_marked >= 3) &&
           (P3_is_marked + 3 <= 6) &&
           (P1_marking_member_0_1 == P1_marking_member_0_0) ) {
         x = P1_marking_member_0_2;
         y = P1_marking_member_0_1;
         if ((x < y)) {
            P1_is_marked = P1_is_marked - 3;
            z = x - y;
            if (P3_is_marked+0 == 0) P3_mm_0 = x; 
	    else if (P3_is_marked+0 == 1) P3_mm_1 = x; 
	    else if (P3_is_marked+0 == 2) P3_mm_2 = x;
            if (P3_is_marked+1 == 0) P3_mm_0 = y; 
	    else if (P3_is_marked+1 == 1) P3_mm_1 = y; 
	    else if (P3_is_marked+1 == 2) P3_mm_2 = y;
            if (P3_is_marked+2 == 0) P3_mm_0 = z; 
	    else if (P3_is_marked+2 == 1) P3_mm_1 = z; 
	    else if (P3_is_marked+2 == 2) P3_mm_2 = z;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           (((P3_is_marked + 3) <= 6)) &&
           ( ((P2_marking_member_0_1 == P2_marking_member_0_2)) &&
             ((P2_marking_member_0_1 == P2_marking_member_0_3)) ) ) {
	a = P2_marking_member_0_0;
	b = P2_marking_member_0_1;
	if ((b > a)) {
	  P2_is_marked = P2_is_marked - 4;
	  c = a + b;
	  if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
	  if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
	  if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
	  P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           (((P3_is_marked + 3) <= 6)) &&
           ( (P2_marking_member_0_1 == P2_marking_member_0_3) &&
             (P2_marking_member_0_1 == P2_marking_member_0_2) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_1;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_2 == P2_marking_member_0_1) &&
             (P2_marking_member_0_2 == P2_marking_member_0_3) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_2;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      /*block 10*/

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_2 == P2_marking_member_0_3) &&
             (P2_marking_member_0_2 == P2_marking_member_0_1) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_2;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }


      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_3 == P2_marking_member_0_1) &&
             (P2_marking_member_0_3 == P2_marking_member_0_2) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_3;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_3 == P2_marking_member_0_2) &&
             (P2_marking_member_0_3 == P2_marking_member_0_1) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_3;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_0 == P2_marking_member_0_2) &&
             (P2_marking_member_0_0 == P2_marking_member_0_3) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_1;
         b = P2_marking_member_0_0;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_0 == P2_marking_member_0_3) &&
             (P2_marking_member_0_0 == P2_marking_member_0_2) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_1;
         b = P2_marking_member_0_0;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      /*block 15*/

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_2 == P2_marking_member_0_0) &&
             (P2_marking_member_0_2 == P2_marking_member_0_3) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_1;
         b = P2_marking_member_0_2;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_2 == P2_marking_member_0_3) &&
             (P2_marking_member_0_2 == P2_marking_member_0_0) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_1;
         b = P2_marking_member_0_2;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; 
	    else if (P3_is_marked+0 == 1) P3_mm_1 = a; 
	    else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; 
	    else if (P3_is_marked+1 == 1) P3_mm_1 = b; 
	    else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; 
	    else if (P3_is_marked+2 == 1) P3_mm_1 = c; 
	    else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_3 == P2_marking_member_0_0) &&
             (P2_marking_member_0_3 == P2_marking_member_0_2) ) ) {
         a = P2_marking_member_0_1;
         b = P2_marking_member_0_3;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; 
	    else if (P3_is_marked+0 == 1) P3_mm_1 = a; 
	    else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; 
	    else if (P3_is_marked+1 == 1) P3_mm_1 = b; 
	    else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; 
	    else if (P3_is_marked+2 == 1) P3_mm_1 = c; 
	    else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      // HERE is the limit with 32Mb of Heap AND partition


      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_3 == P2_marking_member_0_2) &&
             (P2_marking_member_0_3 == P2_marking_member_0_0) ) ) {
         a = P2_marking_member_0_1;
         b = P2_marking_member_0_3;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; 
	    else if (P3_is_marked+0 == 1) P3_mm_1 = a; 
	    else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; 
	    else if (P3_is_marked+1 == 1) P3_mm_1 = b; 
	    else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; 
	    else if (P3_is_marked+2 == 1) P3_mm_1 = c; 
	    else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      /* block 19 */
      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_0 == P2_marking_member_0_1) &&
             (P2_marking_member_0_0 == P2_marking_member_0_3) ) ) {
         a = P2_marking_member_0_2;
         b = P2_marking_member_0_0;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; 
	    else if (P3_is_marked+0 == 1) P3_mm_1 = a; 
	    else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; 
	    else if (P3_is_marked+1 == 1) P3_mm_1 = b; 
	    else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; 
	    else if (P3_is_marked+2 == 1) P3_mm_1 = c; 
	    else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      /* block 20 */
      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_0 == P2_marking_member_0_3) &&
             (P2_marking_member_0_0 == P2_marking_member_0_1) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_2;
         b = P2_marking_member_0_0;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_1 == P2_marking_member_0_0) &&
             (P2_marking_member_0_1 == P2_marking_member_0_3) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_2;
         b = P2_marking_member_0_1;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_1 == P2_marking_member_0_3) &&
             (P2_marking_member_0_1 == P2_marking_member_0_0) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_2;
         b = P2_marking_member_0_1;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_3 == P2_marking_member_0_0) &&
             (P2_marking_member_0_3 == P2_marking_member_0_1) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_2;
         b = P2_marking_member_0_3;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_3 == P2_marking_member_0_1) &&
             (P2_marking_member_0_3 == P2_marking_member_0_0) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_2;
         b = P2_marking_member_0_3;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0_0 == P2_marking_member_0_1) &&
             (P2_marking_member_0_0 == P2_marking_member_0_2) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_3;
         b = P2_marking_member_0_0;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_0 == P2_marking_member_0_2) &&
             ( P2_marking_member_0_0 == P2_marking_member_0_1) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_3;
         b = P2_marking_member_0_0;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_1 == P2_marking_member_0_0) &&
             ( P2_marking_member_0_1 == P2_marking_member_0_2) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_3;
         b = P2_marking_member_0_1;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_1 == P2_marking_member_0_2) &&
             ( P2_marking_member_0_1 == P2_marking_member_0_0) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_3;
         b = P2_marking_member_0_1;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_2 == P2_marking_member_0_0) &&
             ( P2_marking_member_0_2 == P2_marking_member_0_1) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_3;
         b = P2_marking_member_0_2;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      /* block 30 */

      if ( (P2_is_marked >= 4) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_2 == P2_marking_member_0_1) &&
             ( P2_marking_member_0_2 == P2_marking_member_0_0) ) ) {
         a = P2_marking_member_0_3;
         b = P2_marking_member_0_2;
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; 
	    else if (P3_is_marked+0 == 1) P3_mm_1 = a; 
	    else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; 
	    else if (P3_is_marked+1 == 1) P3_mm_1 = b; 
	    else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; 
	    else if (P3_is_marked+2 == 1) P3_mm_1 = c; 
	    else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_1 == P2_marking_member_0_2) &&
             ( P2_marking_member_0_1 == P2_marking_member_0_4) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_1;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_3;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }

      /* block 32 */

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_1 == P2_marking_member_0_3) &&
             ( P2_marking_member_0_1 == P2_marking_member_0_4) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_1;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_2;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_1 == P2_marking_member_0_4) &&
             ( P2_marking_member_0_1 == P2_marking_member_0_2) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_1;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_3;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_1 == P2_marking_member_0_4) &&
             ( P2_marking_member_0_1 == P2_marking_member_0_3) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_1;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_2;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_2 == P2_marking_member_0_1) &&
             ( P2_marking_member_0_2 == P2_marking_member_0_4) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_2;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_3;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_2 == P2_marking_member_0_3) &&
             ( P2_marking_member_0_2 == P2_marking_member_0_4) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_2;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_1;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_2 == P2_marking_member_0_4) &&
             ( P2_marking_member_0_2 == P2_marking_member_0_1) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_2;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_3;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_2 == P2_marking_member_0_4) &&
             ( P2_marking_member_0_2 == P2_marking_member_0_3) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_2;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_1;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_3 == P2_marking_member_0_1) &&
             ( P2_marking_member_0_3 == P2_marking_member_0_4) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_3;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_2;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      /* block 40 */
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_3 == P2_marking_member_0_2) &&
             ( P2_marking_member_0_3 == P2_marking_member_0_4) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_3;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_1;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_3 == P2_marking_member_0_4) &&
             ( P2_marking_member_0_3 == P2_marking_member_0_1) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_0;
         b = P2_marking_member_0_3;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_2;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_3 == P2_marking_member_0_4) &&
             ( P2_marking_member_0_3 == P2_marking_member_0_2) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_3;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_1;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_4 == P2_marking_member_0_1) &&
             ( P2_marking_member_0_4 == P2_marking_member_0_2) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_0;
         b = P2_marking_member_0_4;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_3;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_4 == P2_marking_member_0_1) &&
             ( P2_marking_member_0_4 == P2_marking_member_0_3) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_0;
         b = P2_marking_member_0_4;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_2;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }

      /* block 45 */
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_4 == P2_marking_member_0_2) &&
             ( P2_marking_member_0_4 == P2_marking_member_0_1) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_4;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_3;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_4 == P2_marking_member_0_2) &&
             ( P2_marking_member_0_4 == P2_marking_member_0_3) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_0;
         b = P2_marking_member_0_4;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_1;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_4 == P2_marking_member_0_3) &&
             ( P2_marking_member_0_4 == P2_marking_member_0_1) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_0;
         b = P2_marking_member_0_4;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_2;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0_4 == P2_marking_member_0_3) &&
             ( P2_marking_member_0_4 == P2_marking_member_0_2) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_0;
         b = P2_marking_member_0_4;
         if ((b > a)) {
            P2_marking_member_0_0 = P2_marking_member_0_1;
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
            if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
            if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_0 == P2_marking_member_0_2) &&
            ( P2_marking_member_0_0 == P2_marking_member_0_4) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_1;
         b = P2_marking_member_0_0;
         if ((b > a)) {
         P2_marking_member_0_0 = P2_marking_member_0_3;
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
         if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
         if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
         P3_is_marked = P3_is_marked + 3;
         }
      }
      /* block 50 */
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_0 == P2_marking_member_0_3) &&
            ( P2_marking_member_0_0 == P2_marking_member_0_4) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_1;
         b = P2_marking_member_0_0;
         if ((b > a)) {
         P2_marking_member_0_0 = P2_marking_member_0_2;
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
         if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
         if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_0 == P2_marking_member_0_4) &&
            ( P2_marking_member_0_0 == P2_marking_member_0_2) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_1;
         b = P2_marking_member_0_0;
         if ((b > a)) {
         P2_marking_member_0_0 = P2_marking_member_0_3;
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
         if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
         if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_0 == P2_marking_member_0_4) &&
            ( P2_marking_member_0_0 == P2_marking_member_0_3) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_1;
         b = P2_marking_member_0_0;
         if ((b > a)) {
         P2_marking_member_0_0 = P2_marking_member_0_2;
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
         if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
         if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_2 == P2_marking_member_0_0) &&
            ( P2_marking_member_0_2 == P2_marking_member_0_4) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_1;
         b = P2_marking_member_0_2;
         if ((b > a)) {
         P2_marking_member_0_0 = P2_marking_member_0_3;
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
         if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
         if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
         P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_2 == P2_marking_member_0_3) &&
            ( P2_marking_member_0_2 == P2_marking_member_0_4) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_1;
         b = P2_marking_member_0_2;
         if ((b > a)) {
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
         if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
         if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_2 == P2_marking_member_0_4) &&
            ( P2_marking_member_0_2 == P2_marking_member_0_0) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_1;
         b = P2_marking_member_0_2;
         if ((b > a)) {
         P2_marking_member_0_0 = P2_marking_member_0_3;
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
         if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
         if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_2 == P2_marking_member_0_4) &&
            ( P2_marking_member_0_2 == P2_marking_member_0_3) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_1;
         b = P2_marking_member_0_2;
         if ((b > a)) {
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
         if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
         if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_3 == P2_marking_member_0_0) &&
            ( P2_marking_member_0_3 == P2_marking_member_0_4) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_1;
         b = P2_marking_member_0_3;

         if ((b > a)) {
         P2_marking_member_0_0 = P2_marking_member_0_2;
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
         if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
         if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_3 == P2_marking_member_0_2) &&
            ( P2_marking_member_0_3 == P2_marking_member_0_4) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_1;
         b = P2_marking_member_0_3;
         if ((b > a)) {
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
         if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
         if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_3 == P2_marking_member_0_4) &&
            ( P2_marking_member_0_3 == P2_marking_member_0_0) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_1;
         b = P2_marking_member_0_3;
         if ((b > a)) {
         P2_marking_member_0_0 = P2_marking_member_0_2;
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
         if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
         if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }
      /* block 60 */
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_3 == P2_marking_member_0_4) &&
            ( P2_marking_member_0_3 == P2_marking_member_0_2) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_1;
         b = P2_marking_member_0_3;
         if ((b > a)) {
	   P2_is_marked = P2_is_marked - 4;
	   c = a + b;
	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
	   P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_4 == P2_marking_member_0_0) &&
            ( P2_marking_member_0_4 == P2_marking_member_0_2) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_1;
         b = P2_marking_member_0_4;
         if ((b > a)) {
         P2_marking_member_0_0 = P2_marking_member_0_3;
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
         if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
         if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_4 == P2_marking_member_0_0) &&
            ( P2_marking_member_0_4 == P2_marking_member_0_3) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_1;
         b = P2_marking_member_0_4;
         if ((b > a)) {
	   P2_marking_member_0_0 = P2_marking_member_0_2;
	   P2_is_marked = P2_is_marked - 4;
	   c = a + b;
	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
	   P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_4 == P2_marking_member_0_2) &&
            ( P2_marking_member_0_4 == P2_marking_member_0_0) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_1;
         b = P2_marking_member_0_4;
         if ((b > a)) {
         P2_marking_member_0_0 = P2_marking_member_0_3;
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
         if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
         if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_4 == P2_marking_member_0_2) &&
            ( P2_marking_member_0_4 == P2_marking_member_0_3) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0_1;
         b = P2_marking_member_0_4;
         if ((b > a)) {
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
         if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
         if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
         P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_4 == P2_marking_member_0_3) &&
            ( P2_marking_member_0_4 == P2_marking_member_0_0) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_1;
         b = P2_marking_member_0_4;
         if ((b > a)) {
         P2_marking_member_0_0 = P2_marking_member_0_2;
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
         if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
         if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_4 == P2_marking_member_0_3) &&
            ( P2_marking_member_0_4 == P2_marking_member_0_2) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

	a = P2_marking_member_0_1;
	b = P2_marking_member_0_4;
	if ((b > a)) {
	  P2_is_marked = P2_is_marked - 4;
	  c = a + b;
	  if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
	  if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
	  if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
	  P3_is_marked = P3_is_marked + 3;
	}
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_0 == P2_marking_member_0_1) &&
            ( P2_marking_member_0_0 == P2_marking_member_0_4) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0_2;
         b = P2_marking_member_0_0;
         if ((b > a)) {
	   P2_marking_member_0_0 = P2_marking_member_0_3;
	   P2_is_marked = P2_is_marked - 4;
	   c = a + b;
	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
	   P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_0 == P2_marking_member_0_3) &&
            ( P2_marking_member_0_0 == P2_marking_member_0_4) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

	a = P2_marking_member_0_2;
	b = P2_marking_member_0_0;
	if ((b > a)) {
	  P2_marking_member_0_0 = P2_marking_member_0_1;
	  P2_is_marked = P2_is_marked - 4;
	  c = a + b;
	  if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
	  if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
	  if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
	  P3_is_marked = P3_is_marked + 3;
	  
	}
      }
      
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0_0 == P2_marking_member_0_4) &&
            ( P2_marking_member_0_0 == P2_marking_member_0_1) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
	a = P2_marking_member_0_2;
	b = P2_marking_member_0_0;
	if ((b > a)) {
	  P2_marking_member_0_0 = P2_marking_member_0_3;
	  P2_is_marked = P2_is_marked - 4;
	  c = a + b;
	  if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a;
	  if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b;
	  if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c;
	  P3_is_marked = P3_is_marked + 3;
	  
	}
      }

/*       /\* block 70 *\/ */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_0 == P2_marking_member_0_4) && */
/*             ( P2_marking_member_0_0 == P2_marking_member_0_3) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/* 	a = P2_marking_member_0_2; */
/* 	b = P2_marking_member_0_0; */
/* 	if ((b > a)) { */
/* 	  P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	  P2_is_marked = P2_is_marked - 4; */
/* 	  c = a + b; */
/* 	  if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	  if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	  if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	  P3_is_marked = P3_is_marked + 3; */
	  
/* 	} */
/*       } */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_1 == P2_marking_member_0_0) && */
/*             ( P2_marking_member_0_1 == P2_marking_member_0_4) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */

/*          a = P2_marking_member_0_2; */
/*          b = P2_marking_member_0_1; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_3; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
	   
/*          } */
/*       } */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_1 == P2_marking_member_0_3) && */
/*             ( P2_marking_member_0_1 == P2_marking_member_0_4) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */

/*          a = P2_marking_member_0_2; */
/*          b = P2_marking_member_0_1; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_1 == P2_marking_member_0_4) && */
/*             ( P2_marking_member_0_1 == P2_marking_member_0_0) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_2; */
/*          b = P2_marking_member_0_1; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_3; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
	   
/*          } */
/*       } */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_1 == P2_marking_member_0_4) && */
/*             ( P2_marking_member_0_1 == P2_marking_member_0_3) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */

/*          a = P2_marking_member_0_2; */
/*          b = P2_marking_member_0_1; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_3 == P2_marking_member_0_0) && */
/*             ( P2_marking_member_0_3 == P2_marking_member_0_4) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */

/*          a = P2_marking_member_0_2; */
/*          b = P2_marking_member_0_3; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */

/*          } */
/*       } */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_3 == P2_marking_member_0_1) && */
/*             ( P2_marking_member_0_3 == P2_marking_member_0_4) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_2; */
/*          b = P2_marking_member_0_3; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_3 == P2_marking_member_0_4) && */
/*             ( P2_marking_member_0_3 == P2_marking_member_0_0) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_2; */
/*          b = P2_marking_member_0_3; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_3 == P2_marking_member_0_4) && */
/*             ( P2_marking_member_0_3 == P2_marking_member_0_1) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_2; */
/*          b = P2_marking_member_0_3; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
	   
/*          } */
/*       } */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_4 == P2_marking_member_0_0) && */
/*             ( P2_marking_member_0_4 == P2_marking_member_0_1) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */

/*          a = P2_marking_member_0_2; */
/*          b = P2_marking_member_0_4; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_3; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */

/*          } */
/*       } */
/*       /\* block 80 *\/ */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_4 == P2_marking_member_0_0) && */
/*             ( P2_marking_member_0_4 == P2_marking_member_0_3) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */

/*          a = P2_marking_member_0_2; */
/*          b = P2_marking_member_0_4; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
	   
/*          } */
/*       } */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_4 == P2_marking_member_0_1) && */
/*             ( P2_marking_member_0_4 == P2_marking_member_0_0) ) ) { */
/* 	/\*          long a; *\/ */
/* 	/\*          long b; *\/ */
/* 	/\*          long c; *\/ */
/*          a = P2_marking_member_0_2; */
/*          b = P2_marking_member_0_4; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_3; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */

/*          } */
/*       } */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_4 == P2_marking_member_0_1) && */
/*             ( P2_marking_member_0_4 == P2_marking_member_0_3) ) ) { */
/* 	/\*          long a; *\/ */
/* 	/\*          long b; *\/ */
/* 	/\*          long c; *\/ */
/*          a = P2_marking_member_0_2; */
/*          b = P2_marking_member_0_4; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_4 == P2_marking_member_0_3) && */
/*             ( P2_marking_member_0_4 == P2_marking_member_0_0) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_2; */
/*          b = P2_marking_member_0_4; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */




/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_4 == P2_marking_member_0_3) && */
/*             ( P2_marking_member_0_4 == P2_marking_member_0_1) ) ) { */
/* 	/\*          long a; *\/ */
/* 	/\*          long b; *\/ */
/* 	/\*          long c; *\/ */
/*          a = P2_marking_member_0_2; */
/*          b = P2_marking_member_0_4; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       /\* block 85 *\/ */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_0 == P2_marking_member_0_1) && */
/*             ( P2_marking_member_0_0 == P2_marking_member_0_4) ) ) { */

/* 	/\*          long a; *\/ */
/* 	/\*          long b; *\/ */
/* 	/\*          long c; *\/ */

/*          a = P2_marking_member_0_3; */
/*          b = P2_marking_member_0_0; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_2; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */


/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_0 == P2_marking_member_0_2) && */
/*             ( P2_marking_member_0_0 == P2_marking_member_0_4) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_3; */
/*          b = P2_marking_member_0_0; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_0 == P2_marking_member_0_4) && */
/*             ( P2_marking_member_0_0 == P2_marking_member_0_1) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/* 	a = P2_marking_member_0_3; */
/* 	b = P2_marking_member_0_0;		 */
/* 	if ((b > a)) { */
/* 	  P2_marking_member_0_0 = P2_marking_member_0_2; */
/* 	  P2_is_marked = P2_is_marked - 4;	  */
/* 	  c = a + b;	  */
/* 	  if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	  if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	  if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	  P3_is_marked = P3_is_marked + 3;	   */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_0 == P2_marking_member_0_4) && */
/*             ( P2_marking_member_0_0 == P2_marking_member_0_2) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_3; */
/*          b = P2_marking_member_0_0; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_1 == P2_marking_member_0_0) && */
/*             ( P2_marking_member_0_1 == P2_marking_member_0_4) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/* 	a = P2_marking_member_0_3; */
/* 	b = P2_marking_member_0_1;       */
/* 	if ((b > a)) {	  */
/* 	  P2_marking_member_0_0 = P2_marking_member_0_2; */
/* 	  P2_is_marked = P2_is_marked - 4; */
/* 	  c = a + b; */
/* 	  if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	  if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	  if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	  P3_is_marked = P3_is_marked + 3;	   */
/*          } */
/*       } */
/*       /\* block 90 *\/ */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_1 == P2_marking_member_0_2) && */
/*             ( P2_marking_member_0_1 == P2_marking_member_0_4) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/* 	a = P2_marking_member_0_3; */
/* 	b = P2_marking_member_0_1;	 */
/* 	if ((b > a)) { */
/* 	  P2_is_marked = P2_is_marked - 4; */
/* 	  c = a + b; */
/* 	  if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	  if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	  if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	  P3_is_marked = P3_is_marked + 3; */
/* 	} */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_1 == P2_marking_member_0_4) && */
/*             ( P2_marking_member_0_1 == P2_marking_member_0_0) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_3; */
/*          b = P2_marking_member_0_1; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_2; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_1 == P2_marking_member_0_4) && */
/*             ( P2_marking_member_0_1 == P2_marking_member_0_2) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_3; */
/*          b = P2_marking_member_0_1; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_2 == P2_marking_member_0_0) && */
/*             ( P2_marking_member_0_2 == P2_marking_member_0_4) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_3; */
/*          b = P2_marking_member_0_2; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_2 == P2_marking_member_0_1) && */
/*             ( P2_marking_member_0_2 == P2_marking_member_0_4) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_3; */
/*          b = P2_marking_member_0_2; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_2 == P2_marking_member_0_4) && */
/*             ( P2_marking_member_0_2 == P2_marking_member_0_0) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_3; */
/*          b = P2_marking_member_0_2; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_2 == P2_marking_member_0_4) && */
/*             ( P2_marking_member_0_2 == P2_marking_member_0_1) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_3; */
/*          b = P2_marking_member_0_2; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4;	   	    */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_4 == P2_marking_member_0_0) && */
/*             ( P2_marking_member_0_4 == P2_marking_member_0_1) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_3; */
/*          b = P2_marking_member_0_4; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_2; */
/* 	   P2_is_marked = P2_is_marked - 4;	   */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_4 == P2_marking_member_0_0) && */
/*             ( P2_marking_member_0_4 == P2_marking_member_0_2) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_3; */
/*          b = P2_marking_member_0_4; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4;	   */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_4 == P2_marking_member_0_1) && */
/*             ( P2_marking_member_0_4 == P2_marking_member_0_0) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */

/*          a = P2_marking_member_0_3; */
/*          b = P2_marking_member_0_4; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_2; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       /\* block 100 *\/ */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_4 == P2_marking_member_0_1) && */
/*             ( P2_marking_member_0_4 == P2_marking_member_0_2) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_3; */
/*          b = P2_marking_member_0_4; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4;	   	    */
/* 	   c = a + b;	   */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_4 == P2_marking_member_0_2) && */
/*             ( P2_marking_member_0_4 == P2_marking_member_0_0) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_3; */
/*          b = P2_marking_member_0_4; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_4 == P2_marking_member_0_2) && */
/*             ( P2_marking_member_0_4 == P2_marking_member_0_1) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_3; */
/*          b = P2_marking_member_0_4; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_0 == P2_marking_member_0_1) && */
/*             ( P2_marking_member_0_0 == P2_marking_member_0_2) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_0; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_3; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_0 == P2_marking_member_0_1) && */
/*             ( P2_marking_member_0_0 == P2_marking_member_0_3) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/* 	a = P2_marking_member_0_4; */
/* 	b = P2_marking_member_0_0;        */
/* 	if ((b > a)) { */
/* 	  P2_marking_member_0_0 = P2_marking_member_0_2; */
/* 	  P2_is_marked = P2_is_marked - 4;	  	 */
/* 	  c = a + b;	  */
/* 	  if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	  if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	  if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	  P3_is_marked = P3_is_marked + 3;	   */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_0 == P2_marking_member_0_2) && */
/*             ( P2_marking_member_0_0 == P2_marking_member_0_1) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_0; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_3; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_0 == P2_marking_member_0_2) && */
/*             ( P2_marking_member_0_0 == P2_marking_member_0_3) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_0; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_0 == P2_marking_member_0_3) && */
/*             ( P2_marking_member_0_0 == P2_marking_member_0_1) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_0; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_2; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_0 == P2_marking_member_0_3) && */
/*             ( P2_marking_member_0_0 == P2_marking_member_0_2) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_0; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_1 == P2_marking_member_0_0) && */
/*             ( P2_marking_member_0_1 == P2_marking_member_0_2) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/* 	a = P2_marking_member_0_4; */
/* 	b = P2_marking_member_0_1; */
/* 	if ((b > a)) { */
/* 	  P2_marking_member_0_0 = P2_marking_member_0_3; */
/* 	  P2_is_marked = P2_is_marked - 4; */
/* 	  c = a + b; */
/* 	  if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	  if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	  if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	  P3_is_marked = P3_is_marked + 3;	   */
/*          } */
/*       } */

/*       /\* block 110 *\/ */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_1 == P2_marking_member_0_0) && */
/*             ( P2_marking_member_0_1 == P2_marking_member_0_3) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_1;	 */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_2; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_1 == P2_marking_member_0_2) && */
/*             ( P2_marking_member_0_1 == P2_marking_member_0_0) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/* 	a = P2_marking_member_0_4; */
/* 	b = P2_marking_member_0_1; */
/* 	if ((b > a)) { */
/* 	  P2_marking_member_0_0 = P2_marking_member_0_3; */
/* 	  P2_is_marked = P2_is_marked - 4; */
/* 	  c = a + b; */
/* 	  if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	  if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	  if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	  P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_1 == P2_marking_member_0_2) && */
/*             ( P2_marking_member_0_1 == P2_marking_member_0_3) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_1; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
	 
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_1 == P2_marking_member_0_3) && */
/*             ( P2_marking_member_0_1 == P2_marking_member_0_0) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/* 	a = P2_marking_member_0_4; */
/* 	b = P2_marking_member_0_1; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_2; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_1 == P2_marking_member_0_3) && */
/*             ( P2_marking_member_0_1 == P2_marking_member_0_2) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */

/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_1; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_2 == P2_marking_member_0_0) && */
/*             ( P2_marking_member_0_2 == P2_marking_member_0_1) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */

/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_2; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_3; */
/* 	   P2_is_marked = P2_is_marked - 4;	   */
/* 	   c = a + b;	   */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_2 == P2_marking_member_0_0) && */
/*             ( P2_marking_member_0_2 == P2_marking_member_0_3) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */

/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_2; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_2 == P2_marking_member_0_1) && */
/*             ( P2_marking_member_0_2 == P2_marking_member_0_0) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */

/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_2; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_3; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_2 == P2_marking_member_0_1) && */
/*             ( P2_marking_member_0_2 == P2_marking_member_0_3) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_2; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_2 == P2_marking_member_0_3) && */
/*             ( P2_marking_member_0_2 == P2_marking_member_0_0) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_2; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */



/*       /\* block 120 *\/ */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_2 == P2_marking_member_0_3) && */
/*             ( P2_marking_member_0_2 == P2_marking_member_0_1) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_2; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_3 == P2_marking_member_0_0) && */
/*             ( P2_marking_member_0_3 == P2_marking_member_0_1) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */

/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_3; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_2; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_3 == P2_marking_member_0_0) && */
/*             ( P2_marking_member_0_3 == P2_marking_member_0_2) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_3; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_3 == P2_marking_member_0_1) && */
/*             ( P2_marking_member_0_3 == P2_marking_member_0_0) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_3; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_2; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_3 == P2_marking_member_0_1) && */
/*             ( P2_marking_member_0_3 == P2_marking_member_0_2) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/* 	a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_3; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3;	    */
/*          } */
/*       } */

/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_3 == P2_marking_member_0_2) && */
/*             ( P2_marking_member_0_3 == P2_marking_member_0_0) ) ) { */
/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */
/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_3; */
/*          if ((b > a)) { */
/* 	   P2_marking_member_0_0 = P2_marking_member_0_1; */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */

/*       /\* block 126 *\/ */
/*       if ( (P2_is_marked >= 5) && */
/*            ( (P3_is_marked + 3) <= 6) && */
/*            (( P2_marking_member_0_3 == P2_marking_member_0_2) && */
/*             ( P2_marking_member_0_3 == P2_marking_member_0_1) ) ) { */

/* /\*          long a; *\/ */
/* /\*          long b; *\/ */
/* /\*          long c; *\/ */

/*          a = P2_marking_member_0_4; */
/*          b = P2_marking_member_0_3; */
/*          if ((b > a)) { */
/* 	   P2_is_marked = P2_is_marked - 4; */
/* 	   c = a + b; */
/* 	   if (P3_is_marked+0 == 0) P3_mm_0 = a; else if (P3_is_marked+0 == 1) P3_mm_1 = a; else if (P3_is_marked+0 == 2) P3_mm_2 = a; */
/* 	   if (P3_is_marked+1 == 0) P3_mm_0 = b; else if (P3_is_marked+1 == 1) P3_mm_1 = b; else if (P3_is_marked+1 == 2) P3_mm_2 = b; */
/* 	   if (P3_is_marked+2 == 0) P3_mm_0 = c; else if (P3_is_marked+2 == 1) P3_mm_1 = c; else if (P3_is_marked+2 == 2) P3_mm_2 = c; */
/* 	   P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */
   
   } // while

   dummy_i = 77;

   return dummy_i;


}
