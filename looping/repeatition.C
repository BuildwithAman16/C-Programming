#include <stdio.h>
int main()
{
    int number,Digit, remainder, count = 0;
    printf("Enter number you wnat to Digit\n");
    scanf("%d", &Digit);
    printf("Enter what number do you wnat to check\n");
    scanf("%d",&number);

    while (Digit != 0)
    {
       remainder=Digit%10;
       if(number==remainder)
       {
        count++;
       }
       Digit=Digit/10;
    }

    printf(" Repeatition of %d is %d",number, count);
    return 0;
}
