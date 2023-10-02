#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int i, j = 0, sum = 0;
	char a;
	int arr[100];
	scanf("%d", &i);
	while (i > 0)
	{
		scanf(" %c", &a);
		arr[j] = a - 48;
		i--;
		j++;
	}
	while (j > 0)
	{
		sum = sum + arr[i];
		j--;
		i++;
	}
	printf("%d", sum);
	return 0;
}