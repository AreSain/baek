#pragma warning(disable : 4996)	//scanf ���� ���ſ�
#include <stdio.h>

int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) == 2)
	{
		printf("%d\n", a + b);
	}
	return 0;
}