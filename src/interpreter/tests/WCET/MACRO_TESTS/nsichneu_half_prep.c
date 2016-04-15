/* volatile */ int P1_is_marked/*  = 3 */;
/* volatile */ long P1_marking_member_0[3];
/* volatile */ int P2_is_marked/*  = 5 */;
/* volatile */ long P2_marking_member_0[5];
/* volatile */ int P3_is_marked/*  = 0 */;
/* volatile */ long P3_marking_member_0[6];

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
           (P1_marking_member_0[1] == P1_marking_member_0[2]) ) {

            /*long x; */
            /*long y; */
            /*long z; */

	x = P1_marking_member_0[0];
	y = P1_marking_member_0[1];
	if (x < y) {
            P1_is_marked = P1_is_marked - 3;
            z = x - y;
            P3_marking_member_0[P3_is_marked+0] = x;
            P3_marking_member_0[P3_is_marked+1] = y;
            P3_marking_member_0[P3_is_marked+2] = z;
            P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P1_is_marked >= 3) &&
           (P3_is_marked + 3 <= 6) &&
           (P1_marking_member_0[2] == P1_marking_member_0[1]) ) {
/*          long x; */
/*          long y; */
/*          long z; */
         x = P1_marking_member_0[0];
         y = P1_marking_member_0[2];
         if ((x < y)) {
            P1_is_marked = P1_is_marked - 3;
            z = x - y;
            P3_marking_member_0[P3_is_marked+0] = x;
            P3_marking_member_0[P3_is_marked+1] = y;
            P3_marking_member_0[P3_is_marked+2] = z;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P1_is_marked >= 3) &&
           (P3_is_marked + 3 <= 6) &&
           (P1_marking_member_0[0] == P1_marking_member_0[2]) ) {
/*          long x; */
/*          long y; */
/*          long z; */
         x = P1_marking_member_0[1];
         y = P1_marking_member_0[0];
         if (x < y) {
            P1_is_marked = P1_is_marked - 3;
            z = x - y;
            P3_marking_member_0[P3_is_marked+0] = x;
            P3_marking_member_0[P3_is_marked+1] = y;
            P3_marking_member_0[P3_is_marked+2] = z;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P1_is_marked >= 3) &&
           (P3_is_marked + 3 <= 6) &&
           (P1_marking_member_0[2] == P1_marking_member_0[0])) {
/*          long x; */
/*          long y; */
/*          long z; */
         x = P1_marking_member_0[1];
         y = P1_marking_member_0[2];
         if ((x < y)) {
            P1_is_marked = P1_is_marked - 3;
            z = x - y;
            P3_marking_member_0[P3_is_marked+0] = x;
            P3_marking_member_0[P3_is_marked+1] = y;
            P3_marking_member_0[P3_is_marked+2] = z;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P1_is_marked >= 3) &&
           (P3_is_marked + 3 <= 6) &&
           (P1_marking_member_0[0] == P1_marking_member_0[1]) ) {
/*          long x; */
/*          long y; */
/*          long z; */
         x = P1_marking_member_0[2];
         y = P1_marking_member_0[0];
         if ((x < y)) {
            P1_is_marked = P1_is_marked - 3;
            z = x - y;
            P3_marking_member_0[P3_is_marked+0] = x;
            P3_marking_member_0[P3_is_marked+1] = y;
            P3_marking_member_0[P3_is_marked+2] = z;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P1_is_marked >= 3) &&
           (P3_is_marked + 3 <= 6) &&
           (P1_marking_member_0[1] == P1_marking_member_0[0]) ) {
/*          long x; */
/*          long y; */
/*          long z; */
         x = P1_marking_member_0[2];
         y = P1_marking_member_0[1];
         if ((x < y)) {
            P1_is_marked = P1_is_marked - 3;
            z = x - y;
            P3_marking_member_0[P3_is_marked+0] = x;
            P3_marking_member_0[P3_is_marked+1] = y;
            P3_marking_member_0[P3_is_marked+2] = z;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           (((P3_is_marked + 3) <= 6)) &&
           ( ((P2_marking_member_0[1] == P2_marking_member_0[2])) &&
             ((P2_marking_member_0[1] == P2_marking_member_0[3])) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
	a = P2_marking_member_0[0];
	b = P2_marking_member_0[1];
	if ((b > a)) {
	  P2_is_marked = P2_is_marked - 4;
	  c = a + b;
	  P3_marking_member_0[P3_is_marked+0] = a;
	  P3_marking_member_0[P3_is_marked+1] = b;
	  P3_marking_member_0[P3_is_marked+2] = c;
	  P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           (((P3_is_marked + 3) <= 6)) &&
           ( (P2_marking_member_0[1] == P2_marking_member_0[3]) &&
             (P2_marking_member_0[1] == P2_marking_member_0[2]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[1];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[2] == P2_marking_member_0[1]) &&
             (P2_marking_member_0[2] == P2_marking_member_0[3]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[2];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      /*block 10*/

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[2] == P2_marking_member_0[3]) &&
             (P2_marking_member_0[2] == P2_marking_member_0[1]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[2];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }


      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[3] == P2_marking_member_0[1]) &&
             (P2_marking_member_0[3] == P2_marking_member_0[2]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[3];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[3] == P2_marking_member_0[2]) &&
             (P2_marking_member_0[3] == P2_marking_member_0[1]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[3];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[0] == P2_marking_member_0[2]) &&
             (P2_marking_member_0[0] == P2_marking_member_0[3]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[1];
         b = P2_marking_member_0[0];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[0] == P2_marking_member_0[3]) &&
             (P2_marking_member_0[0] == P2_marking_member_0[2]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[1];
         b = P2_marking_member_0[0];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      /*block 15*/

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[2] == P2_marking_member_0[0]) &&
             (P2_marking_member_0[2] == P2_marking_member_0[3]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[1];
         b = P2_marking_member_0[2];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[2] == P2_marking_member_0[3]) &&
             (P2_marking_member_0[2] == P2_marking_member_0[0]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[1];
         b = P2_marking_member_0[2];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[3] == P2_marking_member_0[0]) &&
             (P2_marking_member_0[3] == P2_marking_member_0[2]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[1];
         b = P2_marking_member_0[3];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      // HERE is the limit with 32Mb of Heap AND partition


      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[3] == P2_marking_member_0[2]) &&
             (P2_marking_member_0[3] == P2_marking_member_0[0]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[1];
         b = P2_marking_member_0[3];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      /* block 19 */
      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[0] == P2_marking_member_0[1]) &&
             (P2_marking_member_0[0] == P2_marking_member_0[3]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[2];
         b = P2_marking_member_0[0];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      /* block 20 */
      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[0] == P2_marking_member_0[3]) &&
             (P2_marking_member_0[0] == P2_marking_member_0[1]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[2];
         b = P2_marking_member_0[0];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[1] == P2_marking_member_0[0]) &&
             (P2_marking_member_0[1] == P2_marking_member_0[3]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[2];
         b = P2_marking_member_0[1];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[1] == P2_marking_member_0[3]) &&
             (P2_marking_member_0[1] == P2_marking_member_0[0]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[2];
         b = P2_marking_member_0[1];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[3] == P2_marking_member_0[0]) &&
             (P2_marking_member_0[3] == P2_marking_member_0[1]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[2];
         b = P2_marking_member_0[3];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[3] == P2_marking_member_0[1]) &&
             (P2_marking_member_0[3] == P2_marking_member_0[0]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[2];
         b = P2_marking_member_0[3];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ((P3_is_marked + 3) <= 6) &&
           ( (P2_marking_member_0[0] == P2_marking_member_0[1]) &&
             (P2_marking_member_0[0] == P2_marking_member_0[2]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[3];
         b = P2_marking_member_0[0];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[0] == P2_marking_member_0[2]) &&
             ( P2_marking_member_0[0] == P2_marking_member_0[1]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[3];
         b = P2_marking_member_0[0];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[1] == P2_marking_member_0[0]) &&
             ( P2_marking_member_0[1] == P2_marking_member_0[2]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[3];
         b = P2_marking_member_0[1];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[1] == P2_marking_member_0[2]) &&
             ( P2_marking_member_0[1] == P2_marking_member_0[0]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[3];
         b = P2_marking_member_0[1];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 4) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[2] == P2_marking_member_0[0]) &&
             ( P2_marking_member_0[2] == P2_marking_member_0[1]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[3];
         b = P2_marking_member_0[2];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      /* block 30 */

      if ( (P2_is_marked >= 4) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[2] == P2_marking_member_0[1]) &&
             ( P2_marking_member_0[2] == P2_marking_member_0[0]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[3];
         b = P2_marking_member_0[2];
         if ((b > a)) {
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[1] == P2_marking_member_0[2]) &&
             ( P2_marking_member_0[1] == P2_marking_member_0[4]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[1];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[3];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }

      /* block 32 */

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[1] == P2_marking_member_0[3]) &&
             ( P2_marking_member_0[1] == P2_marking_member_0[4]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[1];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[2];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[1] == P2_marking_member_0[4]) &&
             ( P2_marking_member_0[1] == P2_marking_member_0[2]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[1];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[3];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[1] == P2_marking_member_0[4]) &&
             ( P2_marking_member_0[1] == P2_marking_member_0[3]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[1];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[2];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[2] == P2_marking_member_0[1]) &&
             ( P2_marking_member_0[2] == P2_marking_member_0[4]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[2];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[3];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[2] == P2_marking_member_0[3]) &&
             ( P2_marking_member_0[2] == P2_marking_member_0[4]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[2];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[1];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[2] == P2_marking_member_0[4]) &&
             ( P2_marking_member_0[2] == P2_marking_member_0[1]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[2];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[3];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[2] == P2_marking_member_0[4]) &&
             ( P2_marking_member_0[2] == P2_marking_member_0[3]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[2];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[1];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[3] == P2_marking_member_0[1]) &&
             ( P2_marking_member_0[3] == P2_marking_member_0[4]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[3];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[2];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      /* block 40 */
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[3] == P2_marking_member_0[2]) &&
             ( P2_marking_member_0[3] == P2_marking_member_0[4]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[3];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[1];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[3] == P2_marking_member_0[4]) &&
             ( P2_marking_member_0[3] == P2_marking_member_0[1]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0[0];
         b = P2_marking_member_0[3];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[2];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[3] == P2_marking_member_0[4]) &&
             ( P2_marking_member_0[3] == P2_marking_member_0[2]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[3];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[1];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[4] == P2_marking_member_0[1]) &&
             ( P2_marking_member_0[4] == P2_marking_member_0[2]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0[0];
         b = P2_marking_member_0[4];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[3];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[4] == P2_marking_member_0[1]) &&
             ( P2_marking_member_0[4] == P2_marking_member_0[3]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0[0];
         b = P2_marking_member_0[4];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[2];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }

      /* block 45 */
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[4] == P2_marking_member_0[2]) &&
             ( P2_marking_member_0[4] == P2_marking_member_0[1]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[4];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[3];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[4] == P2_marking_member_0[2]) &&
             ( P2_marking_member_0[4] == P2_marking_member_0[3]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0[0];
         b = P2_marking_member_0[4];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[1];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[4] == P2_marking_member_0[3]) &&
             ( P2_marking_member_0[4] == P2_marking_member_0[1]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[0];
         b = P2_marking_member_0[4];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[2];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           ( ( P2_marking_member_0[4] == P2_marking_member_0[3]) &&
             ( P2_marking_member_0[4] == P2_marking_member_0[2]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0[0];
         b = P2_marking_member_0[4];
         if ((b > a)) {
            P2_marking_member_0[0] = P2_marking_member_0[1];
            P2_is_marked = P2_is_marked - 4;
            c = a + b;
            P3_marking_member_0[P3_is_marked+0] = a;
            P3_marking_member_0[P3_is_marked+1] = b;
            P3_marking_member_0[P3_is_marked+2] = c;
            P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0[0] == P2_marking_member_0[2]) &&
            ( P2_marking_member_0[0] == P2_marking_member_0[4]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0[1];
         b = P2_marking_member_0[0];
         if ((b > a)) {
         P2_marking_member_0[0] = P2_marking_member_0[3];
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         P3_marking_member_0[P3_is_marked+0] = a;
         P3_marking_member_0[P3_is_marked+1] = b;
         P3_marking_member_0[P3_is_marked+2] = c;
         P3_is_marked = P3_is_marked + 3;
         }
      }
      /* block 50 */
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0[0] == P2_marking_member_0[3]) &&
            ( P2_marking_member_0[0] == P2_marking_member_0[4]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0[1];
         b = P2_marking_member_0[0];
         if ((b > a)) {
         P2_marking_member_0[0] = P2_marking_member_0[2];
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         P3_marking_member_0[P3_is_marked+0] = a;
         P3_marking_member_0[P3_is_marked+1] = b;
         P3_marking_member_0[P3_is_marked+2] = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0[0] == P2_marking_member_0[4]) &&
            ( P2_marking_member_0[0] == P2_marking_member_0[2]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[1];
         b = P2_marking_member_0[0];
         if ((b > a)) {
         P2_marking_member_0[0] = P2_marking_member_0[3];
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         P3_marking_member_0[P3_is_marked+0] = a;
         P3_marking_member_0[P3_is_marked+1] = b;
         P3_marking_member_0[P3_is_marked+2] = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0[0] == P2_marking_member_0[4]) &&
            ( P2_marking_member_0[0] == P2_marking_member_0[3]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0[1];
         b = P2_marking_member_0[0];
         if ((b > a)) {
         P2_marking_member_0[0] = P2_marking_member_0[2];
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         P3_marking_member_0[P3_is_marked+0] = a;
         P3_marking_member_0[P3_is_marked+1] = b;
         P3_marking_member_0[P3_is_marked+2] = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0[2] == P2_marking_member_0[0]) &&
            ( P2_marking_member_0[2] == P2_marking_member_0[4]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0[1];
         b = P2_marking_member_0[2];
         if ((b > a)) {
         P2_marking_member_0[0] = P2_marking_member_0[3];
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         P3_marking_member_0[P3_is_marked+0] = a;
         P3_marking_member_0[P3_is_marked+1] = b;
         P3_marking_member_0[P3_is_marked+2] = c;
         P3_is_marked = P3_is_marked + 3;
         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0[2] == P2_marking_member_0[3]) &&
            ( P2_marking_member_0[2] == P2_marking_member_0[4]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[1];
         b = P2_marking_member_0[2];
         if ((b > a)) {
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         P3_marking_member_0[P3_is_marked+0] = a;
         P3_marking_member_0[P3_is_marked+1] = b;
         P3_marking_member_0[P3_is_marked+2] = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0[2] == P2_marking_member_0[4]) &&
            ( P2_marking_member_0[2] == P2_marking_member_0[0]) ) ) {
/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[1];
         b = P2_marking_member_0[2];
         if ((b > a)) {
         P2_marking_member_0[0] = P2_marking_member_0[3];
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         P3_marking_member_0[P3_is_marked+0] = a;
         P3_marking_member_0[P3_is_marked+1] = b;
         P3_marking_member_0[P3_is_marked+2] = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0[2] == P2_marking_member_0[4]) &&
            ( P2_marking_member_0[2] == P2_marking_member_0[3]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[1];
         b = P2_marking_member_0[2];
         if ((b > a)) {
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         P3_marking_member_0[P3_is_marked+0] = a;
         P3_marking_member_0[P3_is_marked+1] = b;
         P3_marking_member_0[P3_is_marked+2] = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0[3] == P2_marking_member_0[0]) &&
            ( P2_marking_member_0[3] == P2_marking_member_0[4]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0[1];
         b = P2_marking_member_0[3];

         if ((b > a)) {
         P2_marking_member_0[0] = P2_marking_member_0[2];
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         P3_marking_member_0[P3_is_marked+0] = a;
         P3_marking_member_0[P3_is_marked+1] = b;
         P3_marking_member_0[P3_is_marked+2] = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0[3] == P2_marking_member_0[2]) &&
            ( P2_marking_member_0[3] == P2_marking_member_0[4]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0[1];
         b = P2_marking_member_0[3];
         if ((b > a)) {
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         P3_marking_member_0[P3_is_marked+0] = a;
         P3_marking_member_0[P3_is_marked+1] = b;
         P3_marking_member_0[P3_is_marked+2] = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0[3] == P2_marking_member_0[4]) &&
            ( P2_marking_member_0[3] == P2_marking_member_0[0]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0[1];
         b = P2_marking_member_0[3];
         if ((b > a)) {
         P2_marking_member_0[0] = P2_marking_member_0[2];
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         P3_marking_member_0[P3_is_marked+0] = a;
         P3_marking_member_0[P3_is_marked+1] = b;
         P3_marking_member_0[P3_is_marked+2] = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }
      /* block 60 */
      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0[3] == P2_marking_member_0[4]) &&
            ( P2_marking_member_0[3] == P2_marking_member_0[2]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */
         a = P2_marking_member_0[1];
         b = P2_marking_member_0[3];
         if ((b > a)) {
	   P2_is_marked = P2_is_marked - 4;
	   c = a + b;
	   P3_marking_member_0[P3_is_marked+0] = a;
	   P3_marking_member_0[P3_is_marked+1] = b;
	   P3_marking_member_0[P3_is_marked+2] = c;
	   P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0[4] == P2_marking_member_0[0]) &&
            ( P2_marking_member_0[4] == P2_marking_member_0[2]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0[1];
         b = P2_marking_member_0[4];
         if ((b > a)) {
         P2_marking_member_0[0] = P2_marking_member_0[3];
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         P3_marking_member_0[P3_is_marked+0] = a;
         P3_marking_member_0[P3_is_marked+1] = b;
         P3_marking_member_0[P3_is_marked+2] = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0[4] == P2_marking_member_0[0]) &&
            ( P2_marking_member_0[4] == P2_marking_member_0[3]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0[1];
         b = P2_marking_member_0[4];
         if ((b > a)) {
	   P2_marking_member_0[0] = P2_marking_member_0[2];
	   P2_is_marked = P2_is_marked - 4;
	   c = a + b;
	   P3_marking_member_0[P3_is_marked+0] = a;
	   P3_marking_member_0[P3_is_marked+1] = b;
	   P3_marking_member_0[P3_is_marked+2] = c;
	   P3_is_marked = P3_is_marked + 3;
         }
      }

      if ( (P2_is_marked >= 5) &&
           ( (P3_is_marked + 3) <= 6) &&
           (( P2_marking_member_0[4] == P2_marking_member_0[2]) &&
            ( P2_marking_member_0[4] == P2_marking_member_0[0]) ) ) {

/*          long a; */
/*          long b; */
/*          long c; */

         a = P2_marking_member_0[1];
         b = P2_marking_member_0[4];
         if ((b > a)) {
         P2_marking_member_0[0] = P2_marking_member_0[3];
         P2_is_marked = P2_is_marked - 4;
         c = a + b;
         P3_marking_member_0[P3_is_marked+0] = a;
         P3_marking_member_0[P3_is_marked+1] = b;
         P3_marking_member_0[P3_is_marked+2] = c;
         P3_is_marked = P3_is_marked + 3;

         }
      }

   
   } // while

   dummy_i = 77;

   return dummy_i;


}
