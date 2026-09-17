#include <stdio.h>
int main()
{
    int number, remainder, product = 1;
    printf("Enter number you wnat to Enter");
    scanf("%d", &number);

    while (number != 0)
    {
        remainder = number % 10;
        number = number / 10;
        product = product * remainder;
    }

    printf(" sum of digit is :%d", product);
    return 0;
}
