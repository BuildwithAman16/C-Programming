#include <stdio.h>

int main()
{
int n, i, j, k;


// Input array size
printf("Enter array size: ");
scanf("%d", &n);

if (n <= 0)
{
    printf("Please enter a valid array size.\n");
    return 1;
}

int arr[n];

// Input array elements
printf("Enter array elements:\n");

for (i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}

// Remove duplicate elements
for (i = 0; i < n; i++)
{
    for (j = i + 1; j < n; j++)
    {
        if (arr[i] == arr[j])
        {
            for (k = j; k < n - 1; k++)
            {
                arr[k] = arr[k + 1];
            }

            n--;
            j--;
        }
    }
}

// Print array without duplicates
printf("Array after removing duplicates: ");

for (i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}

printf("\n");

return 0;


}
