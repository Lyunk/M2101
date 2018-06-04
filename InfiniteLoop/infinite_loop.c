#include <stdio.h>

int infini (int n) {
	int p = n;
	while (1 < p) {
		p++;	
	}
	return p;
}

int main (void) {
	printf("%f\n", infini(3));

}
