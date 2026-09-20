// Create an array and print all its elements.
#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter array Element \n");

    for(i=0;i<=4;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}
