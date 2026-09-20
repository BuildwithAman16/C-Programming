// Find the largest element in an array.
#include <stdio.h>
int main()
{
    int arr[5], i, n;
    printf("Size of Array \n");
    scanf("%d", &n);
    printf("Enter array Element \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("Manimum element is :%d", min);
    return 0;
}
