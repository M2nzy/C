#include <stdio.h>
void my_toupper_strcpy(char *, char *);

void main()
{
	char A[50], B[50] = "boy";
	my_toupper_strcpy(A, B);
	printf("%s\n", A);
}

void my_toupper_strcpy(char *x, char *y)
{
	int i;
	for (i = 0; y[i] != NULL; i++)
		x[i] = y[i];
	x[i] = NULL;

	for (i = 0; x[i] != NULL; i++)
		x[i] -= 32;
}