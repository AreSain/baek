#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int x, y, sum = 0;
	scanf("%d %d", &x, &y);
	while (x != 0)
	{
		x--;
		if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10)
			sum += 31;
		if (x == 2)
			sum += 28;
		if (x == 4 || x == 6 || x == 9 || x == 11)
			sum += 30;
	}
	sum = sum + y;
	sum = sum % 7;
	if (sum == 1)
		printf("MON");
	if (sum == 2)
		printf("TUE");
	if (sum == 3)
		printf("WED");
	if (sum == 4)
		printf("THU");
	if (sum == 5)
		printf("FRI");
	if (sum == 6)
		printf("SAT");
	if (sum == 0)
		printf("SUN");
	return 0;
}