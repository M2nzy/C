#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *face[] = { "Ace", "2","3","4","5","6","7","8","9","10", "Jack", "Queen", "King" };
char *suit[] = { "Spades", "Diamonds", "Hearts", "Clubs" };

struct card {
	char *face; 
	char *suit;
}deck[52];

void main()
{
	int i, j, k = 0, arr[52];
	int n, m, o, check; //중복 체크
	srand(time(0));
	for (n = 0; n < 52; n++) 
	{
		check = 0;
		o = rand() % 52;

		for (m = 0; m < 52; m++)
		{
			if (arr[m] == o)
			{
				check = 1;
				break;
			}
		}
		if (check == 0)
			arr[n] = o;
		else if (check == 1)
			n--;
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 13; j++)
		{
			deck[k].face = face[j];
			deck[k].suit = suit[i];
			k++;
		}
	}
/*	
	for (k = 0; k < 26; k++)
		printf("%s of %s\t\t\t%s of %s\n", deck[k].face, deck[k].suit, deck[26 + k].face, deck[26 + k].suit);
*/
	for (k = 0; k < 26; k++)
		printf("%s of %s\t\t\t%s of %s\n", deck[arr[k]].face, deck[arr[k]].suit, deck[arr[k+26]].face, deck[arr[k+26]].suit);
}
