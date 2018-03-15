#include <stdio.h>
void main()
{
	int A[5], B[5], i, j;
	int max = 0;

	printf("5개의 정수를 입력하세요 : ");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &A[i]);
	}

	printf("5개의 정수를 한번 더 입력하세요 : ");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &B[i]);
	}

	printf("\n교집합 : ");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++) 
		{
			if (A[i] == B[j])
				printf("%d ", B[j]);
		}
	}


	printf("\n차집합 : ");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++) {
			if (A[i] == B[j])
				break;
		}
		if (j == 5)
			printf("%d ", A[i]);
	}

	printf("\n합집합 : ");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			if (A[i] == B[j])
				break;
		if (j == 5)
			printf("%d ", A[i]);
		printf("%d ", B[i]);
	}
}