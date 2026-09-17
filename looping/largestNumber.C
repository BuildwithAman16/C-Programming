#include <stdio.h>
int main()
{
    int number, remainder,hold=0;
    printf("Enter number you wnat to Enter");
    scanf("%d", &number);

    while (number != 0)
    {
        remainder = number % 10;
        number = number / 10;
        if (hold<remainder)
        {
            hold=remainder;
        }

    }

    printf(" largest Digit of number :%d", hold);
    return 0;
}
