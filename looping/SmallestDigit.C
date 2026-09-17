#include <stdio.h>
int main()
{
    int number, remainder, hold;
    printf("Enter number you wnat to Enter");
    scanf("%d", &number);
    while (number != 0)
    {
        remainder = number % 10;
        number = number / 10;
    }

    printf(" Smallest Digit of number :%d", hold);
    return 0;
}
