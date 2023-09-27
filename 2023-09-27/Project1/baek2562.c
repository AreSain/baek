#pragma warning(disable : 4996)	//scanf 오류 제거용
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 9, max, count = 0;
	int j = 0;
	int* arr;

	arr = malloc(sizeof(int) * 9);
	while (n > 0)
	{
		scanf("%d", &arr[j]);
		j++;
		n--;
	}
	max = arr[0];
	while (n < j)
	{
		if (arr[n] > max)
			max = arr[n];
		n++;
	}
	while (n > 0)
	{
		if (arr[n] == max)
			count = n;
		n--;
	}
	printf("%d\n", max);
	printf("%d", count + 1);
	return 0;
}