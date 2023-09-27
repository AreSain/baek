#pragma warning(disable : 4996)	//scanf 오류 제거용
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, min;
	int j = 0;
	int* arr;

	scanf("%d %d", &n, &min);
	arr = malloc(sizeof(int) * n);
	while (n > 0)
	{
		scanf("%d", &arr[j]);
		j++;
		n--;
	}
	while (n < j)
	{
		if (arr[n] < min)
			printf("%d ", arr[n]);
		n++;
	}
	return 0;
}