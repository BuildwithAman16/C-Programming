#include <stdio.h>
int main()
{
    int number, i, fact=1;
    printf("Enter a Number");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        if (number == 0)
        {
            printf("factorial of %d is 1",number);
        }
        // fact=number*i;
        fact=fact*i;
    }

    printf(" factorial of %d is %d \n",number, fact);

    return 0;
}
