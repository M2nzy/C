#include <stdio.h>
void main()
{
	int n, i, j, fact = 1;
	double e = 1;
	printf("항의 수 입력 : ");
	scanf_s("%d", &n);

	for (i = 1; i < n; i++)
	{
		fact = 1;
		for (j = 1; j <= i; j++)
			fact = fact * j;
		e = e + (1.0 / fact);
	}
	printf("%.6lf", e);


}