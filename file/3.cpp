#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *f;
	char str[100];
	f = fopen("output.txt", "r");
	if (f == NULL)
	{
		printf("���� ���� ����");
		return;
	}
	fgets(str, 100, f);
	printf("%s", str);
	fclose(f);


}