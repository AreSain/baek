#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int t, a, b;
	scanf("%d", &t);
	while (t > 0) {
		scanf("%d", &a);
		getchar();
		scanf("%d", &b);
		printf("%d\n", a + b);
		t--;
	}
	return 0;
}