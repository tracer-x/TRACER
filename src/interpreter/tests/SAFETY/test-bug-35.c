main() {
     int a[5];
     int i;
     int j;
     int bug;

     a[0] = 0;
     a[1] = 0;
     a[2] = 0;
     a[3] = 0;
     a[4] = 0;

     i = 0;
     while(i < 4) {
         a[i] = i;
         i++;
     }

     bug = 1;
     _TRACER_abort(bug == 1);
}
