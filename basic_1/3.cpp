#include <stdio.h>

void main()

{

	printf("3�ڸ� ������ �Է��ϼ��� : ");

	int x;

	scanf_s("%d", &x);

	printf("�� �ڸ����� �� : %d\n", x / 100 + x % 100 / 10 + x % 10);



}