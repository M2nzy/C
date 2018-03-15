#include <stdio.h>

void main()
{
	int n, odd = 0, even = 0, i;

	while (1) {
		printf("양의 정수를 입력하세요 : ");
		scanf("%d", &n);

		if (n >= 0) {

			for (i = 0;i <= n;i += 2)
				even = even + i;

			for (i = 1;i <= n;i += 2)
				odd = odd + i;

			printf("짝수의 합 : %d\n홀수의 합 : %d\n", even, odd);
			break;
		}

		else
			printf("다시 입력하세요.\n");

	}
}