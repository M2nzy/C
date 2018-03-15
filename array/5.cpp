#include <stdio.h>

void main()
{

	int A[10] = { 0 };
	int i, n = 0;

	printf("-1을 입력하면 종료됩니다\n");
	while (n >= 0)
	{
		printf("0 ~ 9 사이의 수를 입력하세요 : ");
		scanf("%d", &n);
		for (i = 0; i < 10; i++)
		{
			if (n == i)
			{
				A[i]++;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		if (A[i] > 0)
			printf("%d-%d번\t", i, A[i]);
	}
}