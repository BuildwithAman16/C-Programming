#include<stdio.h>
int main()
{
    int N,i,j,n;
    printf("Enter the size of an array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter position do you want to delete :\n");
    scanf("%d",&N);
    printf("Enter the array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(N>n)
    {
        printf("position you Entered is more than size of array ");
    }
    if(N<0)
    {
        printf("entered positio is not valid ");
    }

    for(i=0;i<n;i++)
    {
        if(arr[N]==arr[i])
        {
            for(i=N;i<n;i++)
            {
                arr[N]=arr[N+1];
            }
        }

    }
    for(i=0;i<n;i++)
    {
        printf("New Array is : %d", arr[i]);
    }
    return 0;

}
