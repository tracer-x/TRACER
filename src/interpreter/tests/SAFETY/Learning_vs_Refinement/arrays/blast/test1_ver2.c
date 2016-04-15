/* Modified from Blast example */

int a[10];
int t;

void error() {
ERROR: goto ERROR;
}

int main() {
	int i;
	int N;

	i = 0;
	while (i < N) {
		a[i] = 0;
	if (i==t) a[t] = 0;
		i++;
	}

	i = 0;
	while (i < N) {
		if (i == t && a[i] != 0) 
			error();
		i++;
	}
}
