#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	FILE *fp1, *fp2, *fp3;
	char str1[100], str2[100], str3[100];
	printf("ù��° �Է� ����?");
	gets_s(str1);
	fp1 = fopen(str1, "r");
	if (fp1 == NULL)
	{
		printf("����1 ���� ����");
		return;
	}

	printf("�ι�° �Է� ����?");
	gets_s(str2);
	fp2 = fopen(str2, "r");
	if (fp2 == NULL)
	{
		printf("����2 ���� ����");
		return;
	}

	printf("��� ����?");
	gets_s(str3);
	fp3 = fopen(str3, "w");
	if (fp3 == NULL)
	{
		printf("����3 ���� ����");
		return;
	}

	while (!feof(fp1))
	{
		fgets(str1, 100, fp1);
		fprintf(fp3, "%s", str1);
	}
	while (!feof(fp2))
	{
		fgets(str2, 100, fp2);
		fprintf(fp3, "%s", str2);
	}
	printf("�Ϸ�");
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}