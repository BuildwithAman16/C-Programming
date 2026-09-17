#include <stdio.h>
int main()
{
    int number, i,sum=0;
    printf("Enter a Number");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        sum=sum+i;

    }
    printf("Sum of %d numbers are : %d", number, sum);
    return 0;
}
