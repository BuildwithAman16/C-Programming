#include<stdio.h>
int main()
{
    int age;
    printf("Enter user age :");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("User is ready to vote");
    }
    else
    {
        printf("User is underAge");
    }
    return 0;
}
