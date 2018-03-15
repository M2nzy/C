#include <stdio.h>
void sort_three(int *, int *, int *);

void main()
{
	int a = 3, b = 10, c = 7;
	sort_three(&a, &b, &c);
	printf("%d %d %d\n", a, b, c);
}

void sort_three(int *x, int *y, int *z)
{
	int temp, i, j, max;
	int A[] = { *x, *y, *z };
	for (i = 0; i < 3; i++) {
		max = i;
		for (j = i + 1; j < 3; j++)
		{
			if (A[j] > A[max])
				max = j;
		}
		temp = A[i];
		A[i] = A[max];
		A[max] = temp;
	}

	*x = A[0];
	*y = A[1];
	*z = A[2];
}