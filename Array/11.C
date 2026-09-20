
#include <stdio.h>
int main()
{
    int i, n;
    printf("Size of Array \n");
    scanf("%d", &n);
    int arr[n],arr1[n];
    int m=n-1;
    printf("Enter array Element \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i <n; i++)
    {
       arr1[m]=arr[i];
       m--;

    }
    for (i = 0; i <n; i++)
    {
        printf("%d \t", arr1[i]);
    }


    return 0;
}
