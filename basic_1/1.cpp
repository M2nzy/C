#include <stdio.h>

void main()

{

	printf("3개의 실수를 입력하세요 : ");

	double x, y, z;

	scanf_s("%lf%lf%lf", &x, &y, &z);

	printf("합=%.1lf 평균=%.1lf\n", x + y + z, (x + y + z) / 3.0);



}