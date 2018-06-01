#include <stdio.h>

double sum1 (double *tab, int taille) {
	double somme=0;
	for (int i =0; i<taille; i++) {
		somme += tab[i];
	}
	return somme;
}

double sum2 (double *tab, int taille) {
	double somme=0;
	double *fin = tab + taille;
	for (double *p = tab; p < fin; p++) {
		somme += *p;
	}
	return somme;
}

int main (void) {
	double tab[5] = {100.0, 10.0, 1.0, 0.1, 0.01};
	int n = 5;
	printf("%f \n", sum1(tab, n));
	printf("%f \n", sum2(tab, n));
}
