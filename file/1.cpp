#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int arr[10] = { 1, 22,333,4444,55555,666666,777777,88,9,0 };
	FILE *f;

	f = fopen("output.txt", "w");
	if (f == NULL)
	{
		printf("파일 열기 실패");
		return;
	}
	for (int i = 0; i <10; i++)
	{
		fprintf(f, "%d ", arr[i]);
	}
	fclose(f);


}