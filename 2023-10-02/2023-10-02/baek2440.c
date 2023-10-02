#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int i, j, k;
    scanf("%d", &i);
    for (j = 0; j < i; j++)
    {
        for (k = 1; k < i + 1; k++)
        {
            if (k < i - j + 1)
                printf("*");
        }
        printf("\n");
    }
}