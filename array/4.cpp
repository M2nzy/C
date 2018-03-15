#include <stdio.h>
void main()
{
	int min,tmp,n, i, A[9], a, j;
	scanf_s("%d", &n);
	a = n;
	for (i = 0; i < 9; i++)
	{
		n = a % 10;
		a = a / 10;
		A[i] = n;
	}

	for (i = 0; i < 9; i++) {
		min = i;
		for (j = i + 1; j < 9; j++)
		{
			if (A[j] < A[min])
				min = j;
		}
		tmp = A[min];
		A[min] = A[i];
		A[i] = tmp;

	}

	for (i = 8; i >= 0; i--) {
		printf("%d", A[i]);
	}
}