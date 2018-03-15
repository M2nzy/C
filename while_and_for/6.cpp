#include <stdio.h>
void main()
{
	int n, num1 = 1,i, num2 = 1, sum = 0;
	printf("양의 정수 입력 : ");
	scanf_s("%d", &n);

	if (n == 1)
		printf("%d", num1);
	else
		printf("%d %d ", num1, num2);

	for (i = 3; i <= n; i++)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	
		printf("%d ", sum);
	}
}