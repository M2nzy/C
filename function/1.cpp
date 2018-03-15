#include <stdio.h>
int my_alnum(char);

void main()
{
	char a;
	scanf_s("%c", &a);

	printf("%d", my_alnum(a));

}

int my_alnum(char x) {
	if ((('A' <= x) && (x <= 'Z')) ||
		(('a' <= x) && (x <= 'z')) ||
		(('0' <= x) && (x <= '9')))
		return 1;

	return 0;
}