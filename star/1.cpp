#include <stdio.h>
void main()
{
	int n, i, j;
	printf("홀수를 입력하세요 : ");
	scanf_s("%d", &n);


	for (i = 1; i <= n; i += 2)
	{
		for (j = (n - i) / 2; j > 0; j--)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

}