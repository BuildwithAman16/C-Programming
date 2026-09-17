#include <stdio.h>
int main()
{
    int i;
    printf(" Even Number between 1 to 100 \n");
    for (i = 2; i <= 100; i++)
    {
        if(i%2==0)
        {
            printf("  Even number : %d \n", i);
        }

    }
    return 0;
}
