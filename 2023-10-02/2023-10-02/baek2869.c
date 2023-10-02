#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a > c)
		printf("1");
	else if (a - b != 0 && (c - a) % (a - b) == 0)
		printf("%d", (c - a) / (a - b) + 1);
	else if (a - b != 0)
		printf("%d", (c - a) / (a - b) + 2);
	return 0;
}