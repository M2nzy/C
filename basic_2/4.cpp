#include <stdio.h>

void main()
{

	printf("지불할 거스름돈을 입력하세요 : ");
	
	int x;
	scanf_s("%d", &x);

	printf("500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개", x / 500, x % 500 / 100, x % 500 % 100 / 50, x % 500 % 100 % 50 / 10);



}