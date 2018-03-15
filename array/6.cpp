#include <stdio.h>
void main()
{
	int n, i, j,a,binary[32];
	scanf_s("%d", &n);
	a = n;
	for (i = 0; a > 0; i++) {
		n = a % 2;
		a = a / 2;
		binary[i] = n;
	}
	for(j=i-1; j>=0;j--)
		printf("%d", binary[j]);

}