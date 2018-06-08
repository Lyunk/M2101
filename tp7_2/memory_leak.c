#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main (void) {
	void *p;
	for (int i = 0; i < 500000000; i++) {
		p = malloc(0x80000000);
		printf("p = %p\n", p);
		if (p == 0) {
			printf("malloc renvoie 0.\n");
			exit(1);
		}
		free(p);
		p = NULL;
	}
	return 0;
}
