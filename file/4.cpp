#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void main()
{
	FILE *fp;
	char str[100], word[100], *fword,name[100],a;
	int count = 0;
	printf("���� �̸�?");
	gets_s(name);
	printf("�˻��� �ܾ�?");
	gets_s(word);

	fp = fopen(name, "r");
	if (fp == NULL)
	{
		printf("����");
		return;
	}
	
	while (!feof(fp))
	{
		fword = fgets(str, 100, fp);
		if (fword != NULL)
		{
			count++;
			if(strstr(fword,word)!=0)
				printf("%d: %s", count, fword);
		}
	}

	fclose(fp);
}