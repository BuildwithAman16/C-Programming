#include<stdio.h>
int main()
{
    int a,b,power,i;
    printf("Enter the number you want to power:");
    scanf("%d",&a);
    printf("Enter the number you want the power :");
    scanf("%d",&b);
    power=a;
    for(i=1;i<b;i++)
    {

       power=power*a;

    }
    printf("%d\n", power);
    return 0;
}
