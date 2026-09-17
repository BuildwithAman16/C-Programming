#include <stdio.h>
int main()
{
    int number, remainder, reverse = 0,original, product = 1;
    printf("Enter number you wnat to Enter");
    scanf("%d", &number);
    original=number;

    while (number != 0)
    {
        remainder = number % 10;
        number = number / 10;
        reverse = reverse * 10 + remainder;
    }

    printf(" reverse of number :%d\n", reverse);
    if(reverse==original)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is Not Palindrome ");
    }

    return 0;

}
