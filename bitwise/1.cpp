#include <stdio.h>
void binary(int);
void main()
{
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);
	binary(num);
}

void binary(int n)
{
	int i, a;
	for (i = 31; i >= 0; i--)
	{
		a = (n >> i)&1;
		printf("%d", a);
	}
}