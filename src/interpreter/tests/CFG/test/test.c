/* This example is to show that register allocation doesn't suffer the same
 * problem with decompilation as SLICING. Here, the live range of x finishes
 * after the else, so its register can be used to allocate for d
 * (assume d = e*2 is some large piece of code).
 *
 * In the decompiled program, the else part will be present AFTER the d=e*2
 * and d=d+c lines (in terms of line number). BUT STILL, the register allocation
 * is exactly the same, i.e, d is allocated to x's register. This shows that
 * the live-range analysis is somewhat path-sensitive because it realizes that
 * even though x is still assigned and used "after" d (in terms of line no.),
 * its register can still be used for d because it's assigned and used in the
 * mutually-exclusive else part
 *
 * If the live-range analysis was structure-dependent, then we would have the
 * same problem as SLICING, because then you need to decompile the d=e*2 and
 * d=d+c only after decompiling both the if and else parts.
 *
 * If you don't get it, run decompiler on this program and you will see.
 */
#include "stdio.h"
int main() {
	int NONDET;
	register int x, c;
	register int d, e;

	if(NONDET) {
		x = 1;
		c = x+1;
	}
	else {
		x = 0;
		c = x;
	}

	d = e * 2;

	d = d+c;

	return d;
}
