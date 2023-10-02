#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int i, j, k;
    scanf("%d", &i);
    for (j = i; j > 0; j--)
    {
        for (k = 1; k < i + 1; k++)
        {
            if (j >= k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}