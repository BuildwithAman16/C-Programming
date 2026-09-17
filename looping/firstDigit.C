#include <stdio.h>
int main()
{
    int number, remainder;
    printf("Enter number you wnat to Enter");
    scanf("%d", &number);

    while (number != 0)
    {
        remainder = number % 10;
        number = number / 10;

    }

    printf(" First Digit of number :%d", remainder);
    return 0;
}
