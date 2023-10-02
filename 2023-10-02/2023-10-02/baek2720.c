#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int i, cash, q, d, n, p;

	scanf("%d", &i);
	while (i > 0)
	{
		scanf("%d", &cash);
		q = cash / 25;
		cash = cash % 25;
		d = cash / 10;
		cash = cash % 10;
		n = cash / 5;
		cash = cash % 5;
		p = cash;
		printf("%d %d %d %d\n", q, d, n, p);
		i--;
	}
	return 0;
}