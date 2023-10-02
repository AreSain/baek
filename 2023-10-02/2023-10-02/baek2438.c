#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int i, j = 0, k;
    scanf("%d", &i);
    while (j < i)
    {
        k = 0;
        while (k <= j)
        {
            printf("*");
            k++;
        }
        if (j != i - 1)
            printf("\n");
        j++;
    }
}