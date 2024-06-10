#include <stdio.h>
void bubbleSort(int a[], int size) {
	int i, j, t, temp;

	for (i = size - 1; i > 0; i--) {
		printf("\n %d´Ü°è>>", size - i);
		for (i = 0; i < size; i++) {
			if (a[i] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
			printf("\n\t");
			for (t = 0; t < size; t++) printf("%3d ", a[t]);
		}
	}
}