#include <stdio.h>

void main()
{
	int n, min;
	printf("������ �Է��ϼ���(-1�� �Է��ϸ� ����) : ");
	scanf("%d", &n);

	min = n;

	for (; n != -1;)
	{
		scanf("%d", &n);
		if ((min >= n) && (n != -1))
			min = n;
	}

	printf("%d", min);
}