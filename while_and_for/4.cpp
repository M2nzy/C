#include <stdio.h>
void main()
{
	int n, m, i, count = 0;

	while (1)
	{
		printf("�ΰ��� ������ �Է��ϼ��� : ");
		scanf_s("%d %d", &n, &m);

		if (n<m)
		{
			for (i = (n + 1); i<m; i++)
			{
				if (i % 3 == 0)
					count = count + 1;
			}
			printf("%d��\n", count);
			break;
		}
		else
			printf("(���� : n < m) �ٽ� �Է��ϼ���.\n");
	}
}