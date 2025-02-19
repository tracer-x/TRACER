/**************************************************************************/
/*                                                                        */
/*  Copyright (C) 2001-2003                                               */
/*   George C. Necula    <necula@cs.berkeley.edu>                         */
/*   Scott McPeak        <smcpeak@cs.berkeley.edu>                        */
/*   Wes Weimer          <weimer@cs.berkeley.edu>                         */
/*   Ben Liblit          <liblit@cs.berkeley.edu>                         */
/*  All rights reserved.                                                  */
/*                                                                        */
/*  Redistribution and use in source and binary forms, with or without    */
/*  modification, are permitted provided that the following conditions    */
/*  are met:                                                              */
/*                                                                        */
/*  1. Redistributions of source code must retain the above copyright     */
/*  notice, this list of conditions and the following disclaimer.         */
/*                                                                        */
/*  2. Redistributions in binary form must reproduce the above copyright  */
/*  notice, this list of conditions and the following disclaimer in the   */
/*  documentation and/or other materials provided with the distribution.  */
/*                                                                        */
/*  3. The names of the contributors may not be used to endorse or        */
/*  promote products derived from this software without specific prior    */
/*  written permission.                                                   */
/*                                                                        */
/*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS   */
/*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT     */
/*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS     */
/*  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE        */
/*  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,   */
/*  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,  */
/*  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;      */
/*  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER      */
/*  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT    */
/*  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN     */
/*  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE       */
/*  POSSIBILITY OF SUCH DAMAGE.                                           */
/*                                                                        */
/*  File modified by CEA (Commissariat � l'�nergie atomique et aux        */
/*                        �nergies alternatives).                         */
/**************************************************************************/

// -*- Mode: c -*-
//
/*
 * A module that allows the reading of performance counters on Pentium.
 *
 * This file contains both code that uses the performance counters to 
 * compute the number of cycles per second (to be used during ./configure) 
 * and also code to read the performance counters from Ocaml.
 *
 * Author: George Necula (necula@cs.berkeley.edu)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(__GNUC__)
  #define longlong long long
  // RDTSC puts the result in EAX and EDX. We tell gcc to use those registers
  // for "low" and "high"
  #if defined(__i386__) || defined(__x86_64__)
    #define GETCOUNTER(low,high) \
            __asm__ volatile ("rdtsc" : "=a" (low), "=d" (high));
  #else
    #define GETCOUNTER(low,high) \
            printf ("Reading of performance counters is supported only on Intel x86\n"); \
            exit(1);
  #endif
#else
  // Microsoft Visual Studio
  #define longlong __int64
  #define inline   __inline
  #define GETCOUNTER(low,high) __asm { \
    __asm rdtsc \
    __asm mov low, eax \
    __asm mov high, edx };
#endif

/* Store here the first value read from the performance counter */
unsigned static longlong first_value;


/* This is the function that actually reads the performance counter. */
inline unsigned longlong read_ppc(void) {
  unsigned long pclow, pchigh;
  unsigned longlong lowhigh;

  GETCOUNTER(pclow, pchigh);
  
  // printf ("Read low=0x%08lx high=0x%08lx\n", low, high);

  // Put the 64-bit value together
  lowhigh = ((unsigned longlong)pclow) | ((unsigned longlong)pchigh << 32);

  if(first_value == 0) {
    first_value = lowhigh;
  }
  return lowhigh - first_value;
}


/* sm: I want a version that is as fast as possible, dropping
 * bits that aren't very important to achieve it. *
 *
 * This version drops the low 20 bits and the high 14 bits so the
 * result is 30 bits (always a positive Ocaml int); this yields
 * megacycles, which for GHz machines will be something like
 * milliseconds. */
static unsigned long sample_ppc_20(void)
{
  unsigned long pclow, pchigh;

  GETCOUNTER(pclow, pchigh);

  return ((pclow >> 20) | (pchigh << 12)) & 0x3FFFFFFF;
}

/* This version drops the low 10 bits, yielding something like
 * microseconds. */
inline static unsigned long sample_ppc_10()
{
  unsigned long pclow, pchigh;

  GETCOUNTER(pclow,pchigh);
    
  return ((pclow >> 10) | (pchigh << 22)) & 0x3FFFFFFF;
}



#ifndef CONFIGURATION_ONLY
/*** This is the OCAML stub for the read_ppc ***/
#include <caml/mlvalues.h>
#include <caml/alloc.h>
#include <caml/memory.h>

#define CYCLES_PER_USEC 2910.000
value read_pentium_perfcount()
{
  double counter = (double)read_ppc() / (1000000.0 * CYCLES_PER_USEC);
  return copy_double(counter);
}

/* The Ocaml system can use this function to figure out if there are
 * performance counters available */
value has_performance_counters() {
  // HAS_PERFCOUNT is set by the configuration code at the end of
  // this file, during ./configure
#if 1 != 0
  return Val_true;
#else
  return Val_false;
#endif
}

/* sm: interface to above from Ocaml */
value sample_pentium_perfcount_20()
{
  return Val_long(sample_ppc_20());
}

value sample_pentium_perfcount_10()
{
  return Val_long(sample_ppc_10());
}

#endif


/* Now we have a function that tries to compute the number of cycles per 
 * second (to be used during ./configure) */
#ifdef CONFIGURATION_ONLY
#include <sys/times.h>
#include <unistd.h>
#include <math.h>

int main() {
  struct tms t;
  clock_t start, finish, diff;
  unsigned longlong start_pc, finish_pc, diff_pc;
  long clk_per_sec = sysconf(_SC_CLK_TCK);
  double cycles_per_usec;
  
  if(clk_per_sec <= 0) {
    printf("Cannot find clk_per_sec (got %ld)\n", clk_per_sec);
    exit(1);
  }
  
  times(&t); start = t.tms_utime;
  start_pc = read_ppc();
  // Do something for a while
  {
    int i;
    double a = 5.678;
    for(i=0;i<10000000;i++) {
      a = (i & 1) ? (a * a) : (sqrt(a));
    }
  }
  times(&t); finish = t.tms_utime;
  finish_pc = read_ppc();
  diff = finish - start;
  diff_pc = finish_pc - start_pc;
  if(diff == 0) {
    printf("Cannot use Unix.times\n");
    exit(1);
  }
  if(diff_pc == 0) {
    printf("Invalid result from the peformance counters\n");
    exit(1);
  }
  diff_pc /= 1000000; // We care about cycles per microsecond
//  printf("diff = %ld, diff_pc = %ld, clk = %ld\n",
//         (long)diff,
//         (long)diff_pc, (long)clk_per_sec);

  cycles_per_usec = (((double)diff_pc / (double)diff)
                               * (double)clk_per_sec);

  /* Whatever value we print here will be used as the CYCLES_PER_USEC
   * below */
  printf("%.3lf\n", cycles_per_usec);
  exit(0);
}
#endif //defined CONFIGURATION_ONLY

