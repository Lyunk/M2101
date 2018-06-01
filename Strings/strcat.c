#include <stdio.h>

char *my_strcat (char *dest, const char *src) {
	const char *p = src;
	char *d = dest;
	while (*d != '\0') {
		d++;
	} 
	while (*p != '\0') {
		*d = *p;
		p++;
		d++;
	}
	*d = '\0';
	return dest;
}

int main (void) {
	const char fin[30] = " et disparut";
	char debut[30] = "Il apparut";
	printf("%s\n", my_strcat(debut, fin));
}
