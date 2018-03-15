#include <stdio.h>
#include <math.h>
void binary(unsigned int);
void main()
{
	int num;
	unsigned int swi = 0;
	while (1)
	{
		printf("숫자 입력 : ");
		scanf_s("%d", &num);
		if (num == 0)
			return;
		else
		{
			if (num > 0)
			{
				swi |= (1 << (num - 1));
				binary(swi);
			}
			else if (num < 0)
			{
				num = abs(num);
				swi &= (~(1 << (num-1)));
				binary(swi);
			}
		}
	}

}

void binary(unsigned int n)
{
	int a;
	for (int i = 31; i >= 0; i--)
	{
		a = (n >> i) & 1;
		printf("%d", a);
	}
	printf("\n");
}