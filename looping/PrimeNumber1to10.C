#include <stdio.h>
int main()
{
    int number, i, count = 0;
    printf("Enter the number do you want to check Prime or not \n");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
            if (count == 2)
            {
                printf("prime number is %d", number);
            }
            else
            {
                printf("%d is not Prime Number", number);
            }
        }

}

return 0;
}
