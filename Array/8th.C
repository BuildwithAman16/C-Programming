// Find the largest element in an array.
#include <stdio.h>
int main()
{
    int  i, n,key;
    printf("Size of Array \n");
    scanf("%d", &n);
    printf("Enter the Element do tou want to search\n");
    scanf("%d",&key);
    int arr[n];
    printf("Enter array Element \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
       if(arr[i]==key)
       {
        printf("%d is found at index %d\n",key,i);
       }
      

    }

    return 0;
}
