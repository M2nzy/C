#include <stdio.h>

void main()
{
	int a, b, sum, q, r;
	double average;

	printf("�� ���� ������ �Է��ϼ��� : ");

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

	printf("��=%d,���=%.1f,��=%d,������=%d", sum, average, q, r);
}
