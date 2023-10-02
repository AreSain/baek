#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int i, j, k;
    scanf("%d", &i);
    for (j = 0; j < i; j++)
    {
        for (k = 0; k < i; k++)
        {
            if (k > j - 1)
                printf("*");
            else
                printf(" ");
        }
        while ()
        {
            
        }
        printf("\n");
    }
}