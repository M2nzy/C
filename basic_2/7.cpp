#include <stdio.h>

void main()
{
	int a, b, c, d, e, P = 0, N = 0;

	printf("입력? : ");
	scanf("%d", &a);

	if (a >= 0)
		P = a;

	else if (a < 0)
		N = a;

	printf("입력? : ");
	scanf("%d", &b);

	if (b >= 0)
		P = P + b;

	else if (b < 0)
		N =	N + b;

	printf("입력? : ");
	scanf("%d", &c);

	if (c >= 0)
		P = P + c;

	else if (c < 0)
		N = N + c;

	printf("입력? : ");
	scanf("%d", &d);

	if (d >= 0)
		P = P + d;

	else if (d < 0)
		N = N + d;

	printf("입력? : ");
	scanf("%d", &e);

	if (e >= 0)
		P = P + e;

	else if (e < 0)
		N = N + e;


	printf("양수의 합 : %d\n음수의 합 : %d\n", P, N);

}