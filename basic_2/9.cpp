#include <stdio.h>

void main()
{
	int a, b, sum, q, r;
	double average;

	printf("두 개의 정수를 입력하세요 : ");

	scanf("%d%d", &a, &b);

	sum = a + b;
	average = (a + b) / 2.0;

	if (a >= b)
	{
		q = a / b;
		r = a%b;
	}

	else
	{
		q = b / a;
		r = b%a;
	}

	printf("합=%d,평균=%.1f,몫=%d,나머지=%d", sum, average, q, r);
}
