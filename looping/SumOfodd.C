#include <stdio.h>
int main()
{
    int number, i, sum = 0;
    printf("Enter a Number");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        if (i % 2 == 1)
        {
            sum = sum + i;
        }
    }
    printf("Sum of  Odd numbers are upto %d : %d", number, sum);
    return 0;
}
