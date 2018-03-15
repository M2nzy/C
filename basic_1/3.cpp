#include <stdio.h>

void main()

{

	printf("3자리 정수를 입력하세요 : ");

	int x;

	scanf_s("%d", &x);

	printf("각 자릿수의 합 : %d\n", x / 100 + x % 100 / 10 + x % 10);



}