#include <stdio.h>
int main()
{
    int i;
    printf(" Odd Number between 1 to 100 \n");
    for (i = 2; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            printf("  Odd number : %d \n", i);
        }
    }
    return 0;
}
