#include <stdio.h>
int main()
{
    int SmallestElement, SecondSmallestElement, n;
    printf("Enter size of Array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array elemnent \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    SmallestElement = arr[0];
    SecondSmallestElement = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < SmallestElement)
        {
            SecondSmallestElement = SmallestElement;
            SmallestElement = arr[i];
        }
        else if (arr[i] < SecondSmallestElement && arr[i] != SmallestElement)
        {
            SecondSmallestElement = arr[i];
        }
    }
    printf("Smallest Element is %d\n", SmallestElement);
    printf("Second Smallest Element is %d", SecondSmallestElement);
    return 0;
}
