#include <stdio.h>

int main()
{
    int i, n;

    printf("Size of Array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");

    // Input array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Reverse array
    for (i = 0; i < n / 2; i++)
    {
        int temp = arr[i];

        arr[i] = arr[n - 1 - i];

        arr[n - 1 - i] = temp;
    }

    // Print reversed array
    printf("Reversed array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
