/* $Id: fibcall.c,v 1.2 2005/04/04 11:34:58 csg Exp $ */

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
/*  FILE: fibcall.c                                                      */
/*  SOURCE : Public Domain Code                                          */
/*                                                                       */
/*  DESCRIPTION :                                                        */
/*                                                                       */
/*     Summing the Fibonacci series.                                     */
/*                                                                       */
/*  REMARK :                                                             */
/*                                                                       */
/*  EXECUTION TIME :                                                     */
/*                                                                       */
/*                                                                       */
/*************************************************************************/



int fib(int n)
{
  /* 0 */
  int  i, 
    /* 1 */
    Fnew, 
    /* 2 */
    Fold, 
    /* 3 */
    temp,
    /* 4 */
    ans;

  /* 5 */
    Fnew = 1;  
    /* 6 */
    Fold = 0;
    /* i=2; */
    /* 7 */
    /* while (i<=30 && i<=n) { */
    for ( i = 2;
	  i <= 30 && i <= n;          /* apsim_loop 1 0 */
	  i++ )
    {
      /* 9 */
      temp = Fnew;
      /* 10 */
      Fnew = Fnew + Fold;
      /* 11 */
      Fold = temp;
      /* 12 */
      /* i++; */
    }
    /* 8 */

    /* 13 */
    ans = Fnew;
    /* 14 */
  return ans;
  /* 15 */
}

int main()
{
  /* 0 */
  int a;
  /* 1 */

  a = 30;
  /* 2 */
  fib(a);
  /* 3 */
  return a;
  /* 4 */
}



