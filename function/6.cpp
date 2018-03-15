#include <stdio.h>
int my_strcmp(char *, char *);
void main()
{
	char A[50], B[50];
	gets_s(A);
	gets_s(B);
	printf("%d", my_strcmp(A, B));
}

int my_strcmp(char *x, char *y)
{
	int i;
	for (i = 0; x[i] != NULL || y[i] != NULL; i++){
		if (x[i] > y[i])
			return 1;
		else if (x[i] < y[i])
			return -1;
	}
	return 0;
}