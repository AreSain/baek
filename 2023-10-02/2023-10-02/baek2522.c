#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int i;
    double j, k;
    scanf("%d", &i);
    for (j = 1; j < 2 * i; j++)
    {
        for (k = i; k > 0; k--)
        {
            if (j <= i)
            {
                if (k / j <= 1)
                    printf("*");
                else 
                    printf(" ");
            }
            else
            {
                if (k / (2 * i - j) <= 1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}