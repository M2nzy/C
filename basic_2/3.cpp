#include <stdio.h>

void main()
{
	int n, a, b, c, d, e;

	while (1)
	{
		printf("7�ڸ� ���ڸ� �Է��ϼ��� : ");
		scanf("%d", &n);

		if (n >= 1000000 && n <= 9999999)
		{
			a = n / 10000;
			b = n % 10000 / 1000;
			c = n % 10000 % 1000 / 100;
			d = n % 10000 % 1000 % 100 / 10;
			e = n % 10;

			printf("%d�� %dõ %d�� %d�� %d\n", a, b, c, d, e);
			break;
		}

		else {
			printf("�ٽ� �Է��ϼ���.\n");
		}
	}


}