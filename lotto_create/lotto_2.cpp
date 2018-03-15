#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	srand(time(0));
	int lotto[6], i, j, check,temp,min,k;
	for (i = 0; i < 6; i++) 
	{
		check = 1;
		k = rand() % 45 + 1;

		for (j = 0; j < 6; j++) 
		{
			if (lotto[j] == k)
				check = 0;
		}
		if (check == 1)
			lotto[i] = k;
		else i--;
	}
	for (i = 0; i < 6; i++) {
		min = i;
		for (j = i + 1; j < 6; j++)
		{
			if (lotto[min] > lotto[j])
				min = j;
		}
		temp = lotto[min];
		lotto[min] = lotto[i];
		lotto[i] = temp;
	}
	for (i = 0; i < 6; i++)
		printf("%d ", lotto[i]);
}