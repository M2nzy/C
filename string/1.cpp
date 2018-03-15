#include <stdio.h>
void main()
{
	char A[14];
	int B[10] = { 0, };
	int i;
	char j;
	gets_s(A);

	for (i = 0; i<14; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (A[i] == j)
			{
				B[j-48] = B[j-48] + 1;
				break;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		if (B[i] == 0)
			continue;
		else
			printf("%d: %d¹ø\n", i, B[i]);
	}
}