#include <stdio.h>
int main()
{
    int number, remainder;
    printf("Enter number you wnat to Enter");
    scanf("%d", &number);

    while (number != 0)
    {
        remainder = number % 10;
        printf(" Last Digit of number :%d", remainder);
        break;
    }


    return 0;
}
