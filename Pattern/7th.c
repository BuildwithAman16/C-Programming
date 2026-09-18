#include <stdio.h>
int main()
{
    int i, j, k, n = 5;
    for (i = 5; i >= 1; i--)
    {
        for (j = i; j <= 5; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
