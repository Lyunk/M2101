#include <stdio.h>

void swap (double x, double y) {
	double z = x;
	x = y;
	y = z;
}

void swap2 (double *x, double *y) {
	double z = *x;
	*x = *y;
	*y = z;
}

int main (void) {
	double a = 1.0;
	double b = 2.0;
	printf("a = %f et b = %f\n", a, b);
	swap2(&a,&b);
	printf("a = %f et b = %f\n", a, b);
	return 0;
}
