// Find the largest element in an array.
#include <stdio.h>
int main()
{
    int arr[5], i,n ;
    printf("Size of Array \n");
    scanf("%d",&n);
    printf("Enter array Element \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int  max = arr[0];
     for (i = 0; i < n; i++)
    {
      if(max<arr[i])
      {
          max = arr[i];
            }

    }
printf("Maximum element is :%d",max);
    return 0;
}
