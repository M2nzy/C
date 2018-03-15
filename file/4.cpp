#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void main()
{
	FILE *fp;
	char str[100], word[100], *fword,name[100],a;
	int count = 0;
	printf("파일 이름?");
	gets_s(name);
	printf("검색할 단어?");
	gets_s(word);

	fp = fopen(name, "r");
	if (fp == NULL)
	{
		printf("실패");
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