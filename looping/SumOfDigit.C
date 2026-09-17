#include <stdio.h>
int main()
{
    int number,remainder,sum=0;
    printf("Enter number you wnat to Enter");
    scanf("%d", &number);

    while (number!=0)
    {
        remainder = number % 10;
        number=number/10;
        sum=sum+remainder;
    }

    printf(" sum of digit is :%d",sum);
    return 0;
}
