#include <stdio.h>
int main()
{
    int i, count=0;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            count++;
        }
    }
    printf("total nuber didvided by 3 is %d",count);
    return 0;
}
