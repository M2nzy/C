#include <stdio.h>
void main()
{
	int n,i,j;
	while (1) {
		printf("1 ~ 26 ���� �Է� : ");
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
			printf("�ٽ� �Է��ϼ���.\n");
	}

}