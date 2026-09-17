#include <stdio.h>
int main()
{
    int i;
    printf(" Divisible By 5 between 1 to 100 \n");
    for (i = 1; i <= 100; i++)
    {
        if (i % 5 == 0)
        {
            printf(" number : %d \n", i);
        }
    }
    return 0;
}
