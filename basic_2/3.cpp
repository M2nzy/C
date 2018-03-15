#include <stdio.h>

void main()
{
	int n, a, b, c, d, e;

	while (1)
	{
		printf("7자리 숫자를 입력하세요 : ");
		scanf("%d", &n);

		if (n >= 1000000 && n <= 9999999)
		{
			a = n / 10000;
			b = n % 10000 / 1000;
			c = n % 10000 % 1000 / 100;
			d = n % 10000 % 1000 % 100 / 10;
			e = n % 10;

			printf("%d만 %d천 %d백 %d십 %d\n", a, b, c, d, e);
			break;
		}

		else {
			printf("다시 입력하세요.\n");
		}
	}


}