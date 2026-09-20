// Find the largest element in an array.
#include <stdio.h>
int main()
{
    int  i, n;
    printf("Size of Array \n");
    scanf("%d", &n);
    int arr[n];
     printf("Enter array Element \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            printf("%d is Even number \n",arr[i]);
        }
        else
        {
            printf("%d is Odd Number \n",arr[i]);
        }



    }
    return 0;
}
