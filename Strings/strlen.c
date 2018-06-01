#include <stdio.h>

int my_strlen (const char *str) {
	const char *p = str;
	int longueur = 0;
	while (*p != '\0') {
		longueur++;
		p++;
	}
	return longueur;
}

int main (void) {
	printf("%d \n", my_strlen("hey"));
	printf("%d \n", my_strlen("Hello"));

	return 0;
}
