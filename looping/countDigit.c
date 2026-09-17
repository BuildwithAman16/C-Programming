#include<stdio.h>
int main()
{
    int number,count=0;
    printf("Enter number you wnat to Enter");
    scanf("%d",&number);

    while (number!=0)
    {
        number = number / 10;
        count++;
    }


printf(" Number Of Digit is :%d",count);
 return 0;

}
