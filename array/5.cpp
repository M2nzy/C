#include <stdio.h>

void main()
{

	int A[10] = { 0 };
	int i, n = 0;

	printf("-1�� �Է��ϸ� ����˴ϴ�\n");
	while (n >= 0)
	{
		printf("0 ~ 9 ������ ���� �Է��ϼ��� : ");
		scanf("%d", &n);
		for (i = 0; i < 10; i++)
		{
			if (n == i)
			{
				A[i]++;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		if (A[i] > 0)
			printf("%d-%d��\t", i, A[i]);
	}
}