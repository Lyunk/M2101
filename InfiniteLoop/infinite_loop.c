#include <stdio.h>

int infini (int n) {
	while (n!=0) {
		n++;
	}
	return n;
}

int main (void) {
	printf("%d", infini(2));

}
