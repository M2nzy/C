#include <stdio.h>

void main()
{
	int n, min;
	printf("정수를 입력하세요(-1을 입력하면 종료) : ");
	scanf("%d", &n);

	min = n;

	for (; n != -1;)
	{
		scanf("%d", &n);
		if ((min >= n) && (n != -1))
			min = n;
	}

	printf("%d", min);
}