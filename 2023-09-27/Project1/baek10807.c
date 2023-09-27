#pragma warning(disable : 4996)	//scanf 오류 제거용
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, count = 0;
	int j = 0;
	int *arr;

	scanf("%d", &n);
	arr = malloc(sizeof(int) * n);
	while (n > 0)
	{
		scanf("%d", &arr[j]);
		j++;
		n--;
	}
	scanf("%d", &i);
	while (n < j)
	{
		if (arr[n] == i)
			count++;
		n++;
	}
	printf("%d", count);
	return 0;
}