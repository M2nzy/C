#include <stdio.h>

void main()
{
	int i, x;
	double S = 0;
	printf("정수 x를 입력하세요 : ");
	scanf("%d", &x);

	for (i = 1; i <= x; i++)
		S = S + (1.0 / i);

	printf("1부터 %d까지 역수의 합 = %.2f\n", x, S);

}