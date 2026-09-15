#include<stdio.h>
int main()
{
    int num;
    printf("Enter number you want to check positive or negative");
    scanf("%d",&num);
    if(num<0)
    {
        printf("%d is negative",num);
    }
    else
    {
      printf("%d is positive",num);
    }
    return 0;

}
