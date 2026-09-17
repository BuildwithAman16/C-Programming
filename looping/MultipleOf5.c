#include <stdio.h>
int main()
{
    int i;
    printf(" first 10 multiple of 5 \n");
    for (i = 5; i <= 50; i++)
    {
        if(i%5==0)
        {
             printf("  Multiple Of 5 : %d \n", i);
        }

    }
    return 0;
}
