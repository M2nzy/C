#include <stdio.h>

void main()
{

	printf("3�ڸ� ���ڸ� �Է��ϼ��� : ");

	int a, x, y, z;
	scanf_s("%d", &a);

	x = a / 100;
	y = a % 100 / 10;
	z = a % 10;

	if (x >= y >= z) {

		printf("���� ū �� : %d%d%d", x, y, z);

	}

	else if (x >= z >= y) {

		printf("���� ū �� : %d%d%d", x, z, y);

	}

	else if (y >= x >= z) {

		printf("���� ū �� : %d%d%d", y, x, z);

	}

	else if (y >= z >= x) {

		printf("���� ū �� : %d%d%d", y, z, x);

	}


	else if (z >= x >= y) {

		printf("���� ū �� : %d%d%d", z, x, y);

	}

	else if (z >= y >= x) {

		printf("���� ū �� : %d%d%d", z, y, x);

	}
}