#include <stdio.h>

int f (int n) {
	if (n>0) {
		return f(n-1) + 1;
	}

	return 0;
}

int main (void) {
	printf("%d\n", f(1000000));
}
