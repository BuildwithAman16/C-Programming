// Find the sum of all elements in an array.

#include <stdio.h>
int main()
{
    int arr[5], i,sum=0;
    printf("Enter array Element \n");

    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= 4; i++)
    {
      sum=sum+arr[i];
    }
    printf("Sum of Array Element Are:%d",sum);
    return 0;
}
