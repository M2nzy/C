#include <stdio.h>

void main()
{
	int n, odd = 0, even = 0, i;

	while (1) {
		printf("���� ������ �Է��ϼ��� : ");
		scanf("%d", &n);

		if (n >= 0) {

			for (i = 0;i <= n;i += 2)
				even = even + i;

			for (i = 1;i <= n;i += 2)
				odd = odd + i;

			printf("¦���� �� : %d\nȦ���� �� : %d\n", even, odd);
			break;
		}

		else
			printf("�ٽ� �Է��ϼ���.\n");

	}
}