#include <stdio.h>
int main()
{
    int number, remainder,reverse=0, product = 1;
    printf("Enter number you wnat to Enter");
    scanf("%d", &number);

    while (number != 0)
    {
        remainder = number % 10;
        number = number / 10;
        reverse=reverse*10+remainder;
    }

    printf(" reverse of number :%d", reverse);
    return 0;
}
