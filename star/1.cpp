#include <stdio.h>
void main()
{
	int n, i, j;
	printf("Ȧ���� �Է��ϼ��� : ");
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