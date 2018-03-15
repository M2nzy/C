#include <stdio.h>
void main()
{
	char low[100], C[26] = { 0, };
	int i;
	char j;

	gets_s(low);

	for (i = 0; low[i] != NULL; i++)
	{
		for (j = 97; j <= 122; j++)
			if (low[i] == j)
			{
				C[j - 97] = C[j - 97] + 1;
				break;
			}
	}

	for (i = 0; i < 26; i++) {
		if (C[i] == 0)
			continue;
		else
			printf("%c:%d¹ø\n", (char)(97+i), C[i]);
	}

}