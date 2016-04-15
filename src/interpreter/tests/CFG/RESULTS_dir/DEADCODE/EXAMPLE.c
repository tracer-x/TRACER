/* test program to prove that some kinds of dead code can
 * only be detected using path-sensitiveness. here, it is
 * obvious to see that c = 456 is dead. but even gcc -O3
 * (highest level of optimization) does not catch this.
 * try:
 * gcc -c -O3 -fdump-tree-dce example.c
 * you will notice a PHI node at the return:
 * # c_1 = PHI <123(2), 456(3), 789(4)>
 */

extern int n1, n2;
int main() {
	int c;

	if(n1 > n2) c = 123;
	else if(n1 == n2+1) c = 456;
	else c = 789;

	return c;
}
