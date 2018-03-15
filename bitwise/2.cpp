#include <stdio.h>
void main(void) {

	int i, j;
	int n;
	scanf_s("%d", &n);

	for (i = 0; i < (1 << (n)); i++) {
		for (j = 0; j < n; j++) {
			if (i & (1 << j)) {
				printf("%d ", j+1);
			}
		}
		printf("\n");
	}
}