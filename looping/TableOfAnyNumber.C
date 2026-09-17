#include<stdio.h>
int main()
{
    int number,i,table;
    printf("Enter a Number");
    scanf("%d",&number);
    for(i=1;i<=10;i++)
    {
       table= number*i;
        printf("%d \n",table);
    }
    return 0;
}
