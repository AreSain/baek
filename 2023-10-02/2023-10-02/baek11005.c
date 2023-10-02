#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n, num, i = 0, sum = 0;
	char arr[31];
	char* str;
	str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	scanf("%d %d", &n, &num);
	while (n != 0)
	{
		arr[i] = str[n % num];
		i++;
		n /= num;
	}
	while (i - 1 >= 0)
	{
		printf("%c", arr[i - 1]);
		i--;
	}
}