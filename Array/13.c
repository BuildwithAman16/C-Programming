#include <stdio.h>
int main()
{
    int  largestElement, SecondLargestElement, n;
    printf("Enter size of Array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array elemnent \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largestElement = arr[0];
    SecondLargestElement = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largestElement)
        {
            SecondLargestElement = largestElement;
            largestElement = arr[i];
        }
        else if (arr[i] > SecondLargestElement && arr[i] != largestElement)
        {
            SecondLargestElement = arr[i];
        }
    }
    printf("Largest Element is %d\n", largestElement);
    printf("Second Largest Element is %d", SecondLargestElement);
    return 0;
}
