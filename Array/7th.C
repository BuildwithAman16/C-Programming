// Find the largest element in an array.
#include <stdio.h>
int main()
{
    int i, n;
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
        if (arr[i] == 0)
        {
            printf("%d is Zero \n", arr[i]);
        }
        else if(arr[i]>0)
        {
            printf("%d is Positive Number \n", arr[i]);
        }
        else{
            printf("%d is Negative Number \n",arr[i]);
        }
    }
    return 0;
}
