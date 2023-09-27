#pragma warning(disable : 4996)	//scanf 오류 제거용
#include <stdio.h>

int main()
{
	int a, b;
	while (1)
	{
		scanf("%d %d", &a, &b);
		if (a == b && a == 0)
			break;
		printf("%d\n", a + b);
	}
}