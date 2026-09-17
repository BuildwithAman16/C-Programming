#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet or digit: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("%c is an alphabet", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a digit", ch);
    }
    else
    {
        printf("%c is a special symbol", ch);
    }

    return 0;
}
