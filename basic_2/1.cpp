#include <stdio.h>

#define PI 3.14

void main()
{

	printf("구의 반지름을 입력하세요 : ");
	double r;
	scanf_s("%lf", &r);

	printf("구의 체적 = %lf\n", 4.0 / 3.0*PI*r*r*r);
	printf("구의 표면적 = %lf\n", 4.0*PI*r*r);
	


}