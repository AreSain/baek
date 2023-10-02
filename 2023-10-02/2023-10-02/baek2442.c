#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int i, j, k, l = 0;
    scanf("%d", &i);
    for (j = i; j > 0; j--)
    {
        for (k = 1; k < i + 1; k++)
        {
            if (k / j >= 1)
                printf("*");
            else
                printf(" ");
        }
        l = i - j;
        while (l > 0)
        {
            printf("*");
            l--;
        }
        printf("\n");
    }
}