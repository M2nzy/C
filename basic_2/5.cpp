#include <stdio.h>

void main()
{

	printf("3자리 숫자를 입력하세요 : ");

	int a, x, y, z;
	scanf_s("%d", &a);

	x = a / 100;
	y = a % 100 / 10;
	z = a % 10;

	if (x >= y >= z) {

		printf("가장 큰 수 : %d%d%d", x, y, z);

	}

	else if (x >= z >= y) {

		printf("가장 큰 수 : %d%d%d", x, z, y);

	}

	else if (y >= x >= z) {

		printf("가장 큰 수 : %d%d%d", y, x, z);

	}

	else if (y >= z >= x) {

		printf("가장 큰 수 : %d%d%d", y, z, x);

	}


	else if (z >= x >= y) {

		printf("가장 큰 수 : %d%d%d", z, x, y);

	}

	else if (z >= y >= x) {

		printf("가장 큰 수 : %d%d%d", z, y, x);

	}
}