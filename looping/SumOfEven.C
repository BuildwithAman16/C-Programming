#include <stdio.h>
int main()
{
    int number, i, sum = 0;
    printf("Enter a Number");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        if(i%2==0)
        {
            sum = sum + i;
        }

    }
    printf("Sum of  even  numbers are upto %d : %d", number, sum);
    return 0;
}
