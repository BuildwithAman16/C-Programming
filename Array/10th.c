// Find the largest element in an array.
#include <stdio.h>
int main()
{
    int i, n;
    printf("Size of Array \n");
    scanf("%d", &n);
    int arr[n],arr2[n];
    printf("Enter array Element \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        arr2[i]=arr[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t",arr2[i]);
    }

    return 0;
}
