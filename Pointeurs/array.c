#include <stdio.h>
#include <stdlib.h>

int *create_array(int size) {
	int *tab = malloc(size*sizeof(int));
	int *p = tab;
	for (int i = size; i>0 ; i--) {
		*p = i;
		p++;
	}
	return tab;
}

void display_array(int *array, int size) {
	printf("| ");
	int *fin = array + size;
	for (int *p = array; p < fin; p++){
		printf("%d | ", *p);
	}
}

void display_array2(int *array, int size) {
	printf("| ");
	for (int i = 0; i<size; i++){
		printf("%d | ", array[i]);
	}
}

int main (void) {
	int *tab = create_array(50);
	display_array(tab, 50);
	free(tab);
	tab = NULL;
	
	return 0;
}
