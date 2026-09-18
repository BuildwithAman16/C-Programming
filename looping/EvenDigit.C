#include <stdio.h>
int main()
{
    int number, remainder,count=0;
    printf("Enter number you wnat to Enter");
    scanf("%d", &number);
    while (number != 0)
    {
        remainder = number % 10;
        if (remainder%2==0)
        {
            count++;
        }
       number=number/10;
    }

    printf(" number Of Even Digit :%d",count);
    return 0;
}
