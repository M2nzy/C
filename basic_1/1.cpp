#include <stdio.h>

void main()

{

	printf("3���� �Ǽ��� �Է��ϼ��� : ");

	double x, y, z;

	scanf_s("%lf%lf%lf", &x, &y, &z);

	printf("��=%.1lf ���=%.1lf\n", x + y + z, (x + y + z) / 3.0);



}