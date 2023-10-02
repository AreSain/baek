#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	char arr[101];
	while (gets(arr) != '\0')
	{
		printf("%s\n", arr);
	}
}