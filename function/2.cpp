#include <stdio.h>
int max_three(int, int, int);

void main()
{
	int a, b, c;
	printf("3���� ������ �Է� : ");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d\n",max_three(a, b, c));
}


int max_three(int x, int y, int z)
{
	int max;

	if (x > y)
		max = x;
	else if (y > x)
		max = y;

	if (z > max)
		max = z;
	else max = max;
	
	return max;
}
