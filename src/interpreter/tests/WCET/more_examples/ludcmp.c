/* MDH WCET BENCHMARK SUITE. File version $Id: ludcmp.c,v 1.2 2006/01/27 13:15:28 jgn Exp $ */

/*************************************************************************/
/*                                                                       */
/*   SNU-RT Benchmark Suite for Worst Case Timing Analysis               */
/*   =====================================================               */
/*                              Collected and Modified by S.-S. Lim      */
/*                                           sslim@archi.snu.ac.kr       */
/*                                         Real-Time Research Group      */
/*                                        Seoul National University      */
/*                                                                       */
/*                                                                       */
/*        < Features > - restrictions for our experimental environment   */
/*                                                                       */
/*          1. Completely structured.                                    */
/*               - There are no unconditional jumps.                     */
/*               - There are no exit from loop bodies.                   */
/*                 (There are no 'break' or 'return' in loop bodies)     */
/*          2. No 'switch' statements.                                   */
/*          3. No 'do..while' statements.                                */
/*          4. Expressions are restricted.                               */
/*               - There are no multiple expressions joined by 'or',     */
/*                'and' operations.                                      */
/*          5. No library calls.                                         */
/*               - All the functions needed are implemented in the       */
/*                 source file.                                          */
/*                                                                       */
/*                                                                       */
/*************************************************************************/
/*                                                                       */
/*  FILE: ludcmp.c                                                       */
/*  SOURCE : Turbo C Programming for Engineering                         */
/*                                                                       */
/*  DESCRIPTION :                                                        */
/*                                                                       */
/*     Simultaneous linear equations by LU decomposition.                */
/*     The arrays a[][] and b[] are input and the array x[] is output    */
/*     row vector.                                                       */
/*     The variable n is the number of equations.                        */
/*     The input arrays are initialized in function main.                */
/*                                                                       */
/*                                                                       */
/*  REMARK :                                                             */
/*                                                                       */
/*  EXECUTION TIME :                                                     */
/*                                                                       */
/*                                                                       */
/*************************************************************************/


/* Changes:
 * JG 2005/12/12: Indented program. Removed unused variable nmax.
 */

/*
** Benchmark Suite for Real-Time Applications, by Sung-Soo Lim
**
**    III-4. ludcmp.c : Simultaneous Linear Equations by LU Decomposition
**                 (from the book C Programming for EEs by Hyun Soon Ahn)
*/



double          a[50][50], b[50], x[50];

int             ludcmp( /* int nmax, */ int n, double eps);


static double 
fabs(double n)
{
  /* 0 */
  double          f;
  /* 1*/
  if (n >= 0) {
    /* 2 */
    f = n;
    /* 3 */
  } else {
    /* 4 */
    f = -n;
  }
  /* 5 */ 
  return f;
  /* 6 */
}

int 
main(void)
{
  /* 0 */
	int             i, 
	  /* 1 */
	  j/*, nmax = 50*/, 
	  /* 2 */
	  n = 5, 
	  /* 3 */
	  chkerr;
	/* 4 */
	double          eps,
	  /* 5 */
	  w;

	/* 6 */
	eps = 1.0e-6;

	/* i=0; */
	/* 7 */	
	/* while (i<=n) { */
	for (i = 0; i <= n; i++) {
	  /* 9 */
		w = 0.0;
		/* j=0; */
		/* 10 */
		/* while (j<=n) { */
		for (j = 0; j <= n; j++) {
		  /* 12 */
			a[i][j] = (i + 1) + (j + 1);
			/* 13 */
			if (i == j) {
			  /* 14 */
				a[i][j] *= 10.0;
			}
			/* 15 */

			/* 16 */
			/* STATEMENT MISSING: */ w += a[i][j];
			/* j++; */
		}

		/* 11 */

		/* 17 */
		b[i] = w;
		/* 18 */
		/* i++; */
	}
	/* 8 */

	/* 19 */
	chkerr = ludcmp( /* nmax, */ n, eps);
	/* 20 */
	return 0;
	/* 21 */

}

int 
ludcmp( /* int nmax, */ int n, double eps)
{
  /* 0 */
	int             i,
	  /* 1 */
	  j, 
	  /* 2 */
	  k;
	/* 3 */
	double          w,
	  /* 4 */
	  y[100];

	/* 5 */
	if (n > 99 || eps <= 0.0) {
	  /* 6 */
		return (999);
	}
	/* 7 */


	/* NUMBERING IS WRONG AFTERWARDS */

	for (i = 0; i < n; i++) {
		if (fabs(a[i][i]) <= eps)
			return (1);
		for (j = i + 1; j <= n; j++) {
			w = a[j][i];
			if (i != 0)
				for (k = 0; k < i; k++)
					w -= a[j][k] * a[k][i];
			a[j][i] = w / a[i][i];
		}
		for (j = i + 1; j <= n; j++) {
			w = a[i + 1][j];
			for (k = 0; k <= i; k++)
				w -= a[i + 1][k] * a[k][j];
			a[i + 1][j] = w;
		}
	}
	y[0] = b[0];
	for (i = 1; i <= n; i++) {
		w = b[i];
		for (j = 0; j < i; j++)
			w -= a[i][j] * y[j];
		y[i] = w;
	}
	x[n] = y[n] / a[n][n];
	for (i = n - 1; i >= 0; i--) {
		w = y[i];
		for (j = i + 1; j <= n; j++)
			w -= a[i][j] * x[j];
		x[i] = w / a[i][i];
	}
	return (0);

}
