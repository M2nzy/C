#include <stdio.h>

void main()
{
	int n, hour, min;

	printf("�Է�? : ");
	scanf("%d", &n);

	hour = n / 100;
	min = n % 100;

	if (hour >= 24 || min >= 60)
	{
		printf("�߸��� �Է��Դϴ�.\n");
		return;
	}
	else if (hour > 12 && hour < 24)
		printf("���� %d��", hour - 12);

	else if (hour == 12)
		printf("���� %d��", hour);

	else if (hour >= 1 && hour < 12)
		printf("���� %d��", hour);

	else if (hour == 0)
		printf("���� 12��");

	printf(" %d��", min);

}