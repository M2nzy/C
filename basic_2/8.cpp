#include <stdio.h>

void main()
{
	char n;
	printf("A ~ F ���� ������ �Է� : ");
	scanf("%c", &n);

	switch (n)
	{
	case 'A':
		printf("4.0\n");
		break;
	case 'B':
		printf("3.0\n");
		break;

	case 'C':
		printf("2.0\n");
		break;

	case 'D':
		printf("1.0\n");
		break;

	case 'F':
		printf("0.0\n");
		break;

	default:
		printf("�߸��� �Է��Դϴ�.\n");
		break;
	
	}
}