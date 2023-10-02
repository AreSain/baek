#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int t, a, b, i = 1;
	scanf("%d", &t);
	while (t > 0) {
		scanf("%d", &a);
		scanf("%d", &b);
		printf("Case #%d: %d\n", i, a + b);
		t--;
		i++;
	}
	return 0;
}