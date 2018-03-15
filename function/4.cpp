#include <stdio.h>
void copy_and_sort(int[], int[], int);

void main()
{
	int A[5], B[5] = { 2,9,1,4,6 };
	copy_and_sort(A, B, 5);
	for (int i = 0; i < 5; i++)
		printf("%d ", A[i]);
}

void copy_and_sort(int x[], int y[], int n)
{
	int temp, max, i = 0;
	for (i = 0; i < n; i++)
		x[i] = y[i];

	for (i = 0; i < n; i++) {
		max = i;
		for (int j = i+1; j < n; j++)
		{
			if (x[j] > x[max])
				max = j;
		}
		temp = x[max];
		x[max] = x[i];
		x[i] = temp;
	}
}