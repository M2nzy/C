#include <stdio.h>

void main()
{
	int n, hour, min;

	printf("입력? : ");
	scanf("%d", &n);

	hour = n / 100;
	min = n % 100;

	if (hour >= 24 || min >= 60)
	{
		printf("잘못된 입력입니다.\n");
		return;
	}
	else if (hour > 12 && hour < 24)
		printf("오후 %d시", hour - 12);

	else if (hour == 12)
		printf("오후 %d시", hour);

	else if (hour >= 1 && hour < 12)
		printf("오전 %d시", hour);

	else if (hour == 0)
		printf("오전 12시");

	printf(" %d분", min);

}