#include <stdio.h>

void main()
{
	int n;
	double x, y;

	while (1)
	{
		printf("프로그램 유형을 입력 (1: 평 -> 제곱미터, 2: 제곱미터 -> 평)\n입력 : ");
		scanf("%d", &n);

		if (n == 1)
		{
			printf("평을 입력? : ");
			scanf("%lf", &x);

			y = x*3.305785;
			printf("%.2lf 제곱미터입니다.\n", y);
			break;
		}

		else if (n == 2)
		{
			printf("제곱미터를 입력? : ");
			scanf("%lf", &x);

			y = x / 3.305785;
			printf("%.2lf 평입니다.\n", y);
			break;
		}

		else
			printf("다시 입력하세요.\n");
	}

}
