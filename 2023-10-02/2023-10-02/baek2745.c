#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int num, i = 0, sum = 0;
	char arr[31];
	scanf("%s %d", arr, &num);
	while (arr[i])
	{
		if (arr[i] >= 48 && arr[i] <= 57)
			sum = sum * num + arr[i] - 48;
		else
			sum = sum * num + arr[i] - 55;
		i++;
	}
	printf("%d", sum);
}