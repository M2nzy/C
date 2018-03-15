#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void main()
{
	char A[50], B[50];
	char *tok;
	gets_s(A);

	printf("길이 : %d\n", strlen(A));
	
	strcpy(B, A);
	printf("B : %s\n", B);

	printf("비교1 : %d\n", strcmp(A, B));
	
	strcat(A, "- The end.");
	printf("A : %s\n", A);

	printf("비교2 : %d\n", strcmp(A, B));
	

	tok = strtok(A, " ");
	while (tok != NULL)
	{
		printf("%s\n", tok);
		tok = strtok(NULL," ");
	}

}