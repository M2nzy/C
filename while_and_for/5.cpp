#include <stdio.h>
void main()
{
	int n, i, temp, max1, max2;

	scanf("%d", &n);
	temp = n;

	scanf("%d", &n);

	if (temp >= n)
	{
		max1 = temp;
		max2 = n;
	}
	else if (n >= temp)
	{
		max2 = temp;
		max1 = n;
	}

	for (i = 0; i<5; i++)
	{
		scanf("%d", &n);
		if (n >= max1 && n >= max2)
		{
			max2 = max1;
			max1 = n;
		}
		else if (max1 >= n && n >= max2)
			max2 = n;
	}
	printf("%d, %d", max1, max2);

}