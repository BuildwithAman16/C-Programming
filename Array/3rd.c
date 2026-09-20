// Find the average of array elements.

#include <stdio.h>
int main()
{
    int arr[5], i, sum = 0,avg;
    printf("Enter array Element \n");

    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        sum = sum + arr[i];

    }
    avg=sum/5;
    printf("Average of Array Element Are:%d ", avg);
    return 0;
}
