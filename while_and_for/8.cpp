#include <stdio.h>
void main()
{
	int n,i,j;
	while (1) {
		printf("1 ~ 26 정수 입력 : ");
		scanf_s("%d", &n);

		if (1 <= n && n <= 26) {
			for (i = 1; i <= n; i++)
			{
				for (j = 0; j < i; j++)
					printf("%c ", 'A' + j);
				printf("\n");
			}
			break;
		}
		else
			printf("다시 입력하세요.\n");
	}

}