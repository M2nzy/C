#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int arr[5] = { -22,-50,-91,-45,-78 };
	FILE *f;

	f = fopen("output.txt", "a");
	if (f == NULL)
	{
		printf("파일 열기 실패");
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		fprintf(f, "%d ", arr[i]);
	}
	fclose(f);


}