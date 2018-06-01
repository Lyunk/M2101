#include <stdio.h>

void print_hello() {
	static int compteur = 0;
	printf("Bonjour numéro %d !\n", compteur);
	compteur++;
}

int main(void) {
	for (int i = 0 ; i<10 ; i++) {
		print_hello();
	}

	return 0;
}
