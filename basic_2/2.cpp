#include <stdio.h>

void main()
{
	int n;
	double x, y;

	while (1)
	{
		printf("���α׷� ������ �Է� (1: �� -> ��������, 2: �������� -> ��)\n�Է� : ");
		scanf("%d", &n);

		if (n == 1)
		{
			printf("���� �Է�? : ");
			scanf("%lf", &x);

			y = x*3.305785;
			printf("%.2lf ���������Դϴ�.\n", y);
			break;
		}

		else if (n == 2)
		{
			printf("�������͸� �Է�? : ");
			scanf("%lf", &x);

			y = x / 3.305785;
			printf("%.2lf ���Դϴ�.\n", y);
			break;
		}

		else
			printf("�ٽ� �Է��ϼ���.\n");
	}

}
