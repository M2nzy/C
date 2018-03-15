#include <stdio.h>
void main()
{
	int n, m, i, count = 0;

	while (1)
	{
		printf("두개의 정수를 입력하세요 : ");
		scanf_s("%d %d", &n, &m);

		if (n<m)
		{
			for (i = (n + 1); i<m; i++)
			{
				if (i % 3 == 0)
					count = count + 1;
			}
			printf("%d개\n", count);
			break;
		}
		else
			printf("(조건 : n < m) 다시 입력하세요.\n");
	}
}