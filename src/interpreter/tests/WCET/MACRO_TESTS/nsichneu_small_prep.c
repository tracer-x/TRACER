int P1_is_marked;
long P1_marking_member_0[3];
int P2_is_marked;
long P2_marking_member_0[5];
int P3_is_marked;
long P3_marking_member_0[6];

void init_global_variables(){
  P1_is_marked = 3;
  P2_is_marked = 5;
  P3_is_marked = 0;
}

int main()
{
   int dummy_i;
   long x,y,z;
   
   dummy_i = 2;
   init_global_variables();

   while (dummy_i > 0) {

      dummy_i--;
      if ( (P1_is_marked >= 3) &&
           (P3_is_marked + 3 <= 6) &&
           (P1_marking_member_0[1] == P1_marking_member_0[2]) ) {
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



/*       if ( (P1_is_marked >= 3) && */
/*            (P3_is_marked + 3 <= 6) && */
/*            (P1_marking_member_0[0] == P1_marking_member_0[2]) ) { */
/* 	x = P1_marking_member_0[1]; */
/* 	y = P1_marking_member_0[0];	        */
/* 	if (x < y) {	  	 */
/* 	  P1_is_marked = P1_is_marked - 3;	  	   */
/* 	  z = x - y; */
/* 	  P3_marking_member_0[P3_is_marked+0] = x; */
/* 	  P3_marking_member_0[P3_is_marked+1] = y; */
/* 	  P3_marking_member_0[P3_is_marked+2] = z; */
/* 	  P3_is_marked = P3_is_marked + 3;	   */
/* 	} */
/*       } */

/*       if ( (P1_is_marked >= 3) && */
/*            (P3_is_marked + 3 <= 6) && */
/*            (P1_marking_member_0[2] == P1_marking_member_0[0])) { */
/*          x = P1_marking_member_0[1]; */
/*          y = P1_marking_member_0[2]; */
/*          if ((x < y)) { */
/*             P1_is_marked = P1_is_marked - 3; */
/*             z = x - y; */
/*             P3_marking_member_0[P3_is_marked+0] = x; */
/*             P3_marking_member_0[P3_is_marked+1] = y; */
/*             P3_marking_member_0[P3_is_marked+2] = z; */
/*             P3_is_marked = P3_is_marked + 3; */

/*          } */
/*       } */

/*       if ( (P1_is_marked >= 3) && */
/*            (P3_is_marked + 3 <= 6) && */
/*            (P1_marking_member_0[0] == P1_marking_member_0[1]) ) { */
/* 	x = P1_marking_member_0[2]; */
/* 	y = P1_marking_member_0[0];       	 */
/* 	if ((x < y)) {	  	   */
/*             P1_is_marked = P1_is_marked - 3; */
/*             z = x - y; */
/*             P3_marking_member_0[P3_is_marked+0] = x; */
/*             P3_marking_member_0[P3_is_marked+1] = y; */
/*             P3_marking_member_0[P3_is_marked+2] = z; */
/*             P3_is_marked = P3_is_marked + 3; */

/*          } */
/*       } */

/*       if ( (P1_is_marked >= 3) && */
/*            (P3_is_marked + 3 <= 6) && */
/*            (P1_marking_member_0[1] == P1_marking_member_0[0]) ) { */
/*          x = P1_marking_member_0[2]; */
/*          y = P1_marking_member_0[1]; */
/*          if ((x < y)) { */
/*             P1_is_marked = P1_is_marked - 3; */
/*             z = x - y; */
/*             P3_marking_member_0[P3_is_marked+0] = x; */
/*             P3_marking_member_0[P3_is_marked+1] = y; */
/*             P3_marking_member_0[P3_is_marked+2] = z; */
/*             P3_is_marked = P3_is_marked + 3; */
/*          } */
/*       } */
   }  // end while

   dummy_i = 77;

   return dummy_i;


}
