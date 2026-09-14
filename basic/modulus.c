#include<stdio.h>
int main()
{
    int a,b,remainder;
    printf("Enter quotient:");
    scanf("%d",&a);
    printf("Enter divisor");
    scanf("%d",&b);
    remainder=a%b;
    printf("remainder is :%d",remainder);
    return 0;
}
