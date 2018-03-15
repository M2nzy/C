#include <stdio.h>
void main()
{
	char A[51];
	char j;

	gets_s(A);
	
	for (j = 0; A[j] != NULL; j++) 
	{
		if (A[j] == 32)
		{
			if (A[j - 1] == 32)
				continue;
			else 
				printf("\n");
		}
		else
			printf("%c", A[j]);
	}
}