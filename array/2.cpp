#include <stdio.h>
void main()
{
	int A[5], B[5], C[10], tmp = 0, i, j;
	printf("5���� ������ �Է��ϼ��� : ");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &A[i]);
		C[i] = A[i];
	}
	printf("5���� ������ �ѹ� �� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &B[i]);
		C[i + 5] = B[i];
	}

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++) 
		{
			if (C[i] > C[j])
			{
				tmp = C[i];
				C[i] = C[j];
				C[j] = tmp;
			}
		}
	}

	for (i = 0;i < 10; i++)
	{
		printf("%d ", C[i]);
	}
}