#include <stdio.h>

void main()
{
	int i, x;
	double S = 0;
	printf("���� x�� �Է��ϼ��� : ");
	scanf("%d", &x);

	for (i = 1; i <= x; i++)
		S = S + (1.0 / i);

	printf("1���� %d���� ������ �� = %.2f\n", x, S);

}