#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter a number:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("Swaped Number is:%d%d",a,b);
    return 0;


}
