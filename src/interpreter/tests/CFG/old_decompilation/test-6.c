/* #include <stdio.h> */

/* #define N 5 */
/* #define M 9 */

/* main() { */
/*            int i,j,k,count; */
/*            srand(36231); */

/*            printf("#include <stdio.h>\n"); */
/*            printf("main() {\nint sum = 0, "); */
/*            for (count = 0; count < M; count++) printf(", x%d", count); */
/*            printf(";\n"); */

/*            for (count = 0; count < M; count++) { */
/*                    i = myrand(); */
/*                    j = myrand(); */
/*                    k = myrand(); */
/*                    printf("if (x%d < x%d) sum += %d;\n", i, j, k); */
/*            } */
/*            printf("if (sum > %d) ERROR: goto ERROR;\n}\n", M*N); */
/* } */

/* myrand() { */
/*                  return rand() % N; */
/* } */

void main() {
  int sum;
  int x0, x1, x2, x3, x4, x5, x6, x7, x8;

  sum = 0;

  if (x2 < x4) sum += 1;
  if (x4 < x1) sum += 1;
  if (x1 < x3) sum += 1;
  if (x1 < x2) sum += 4;
  if (x0 < x3) sum += 0;
  if (x1 < x0) sum += 3;
  if (x3 < x0) sum += 3;
  if (x0 < x1) sum += 2;
  if (x1 < x1) sum += 2;
  
  _ABORT(sum > 45) ;
  return;
}
